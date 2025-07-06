/* OpenXRActionMap::get_action_sets() const */void OpenXRActionMap::get_action_sets(void) {
   long in_RSI;
   Array *in_RDI;
   Array::Array(in_RDI, (Array*)( in_RSI + 0x240 ));
   return;
}/* OpenXRActionMap::get_interaction_profiles() const */void OpenXRActionMap::get_interaction_profiles(void) {
   long in_RSI;
   Array *in_RDI;
   Array::Array(in_RDI, (Array*)( in_RSI + 0x248 ));
   return;
}/* OpenXRActionMap::get_action_set_count() const */void OpenXRActionMap::get_action_set_count(void) {
   Array::size();
   return;
}/* OpenXRActionMap::get_interaction_profile_count() const */void OpenXRActionMap::get_interaction_profile_count(void) {
   Array::size();
   return;
}/* OpenXRActionMap::add_action_set(Ref<OpenXRActionSet>) */void OpenXRActionMap::add_action_set(OpenXRActionMap *this, undefined8 *param_2) {
   char cVar1;
   long in_FS_OFFSET;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((Object*)*param_2 == (Object*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("add_action_set", "modules/openxr/action_map/openxr_action_map.cpp", 0x5e, "Condition \"p_action_set.is_null()\" is true.", 0, 0);
         return;
      }
   } else {
      Variant::Variant((Variant*)local_58, (Object*)*param_2);
      cVar1 = Array::has((Variant*)( this + 0x240 ));
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (cVar1 == '\0') {
         Variant::Variant((Variant*)local_58, (Object*)*param_2);
         Array::push_back((Variant*)( this + 0x240 ));
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Resource::emit_changed();
            return;
         }
      } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* OpenXRActionMap::remove_action_set(Ref<OpenXRActionSet>) */void OpenXRActionMap::remove_action_set(OpenXRActionMap *this, undefined8 *param_2) {
   int iVar1;
   long in_FS_OFFSET;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_38, (Object*)*param_2);
   iVar1 = Array::find((Variant*)( this + 0x240 ), (int)(Variant*)local_38);
   if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (iVar1 == -1) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else {
      Array::remove_at((int)(Variant*)( this + 0x240 ));
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Resource::emit_changed();
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* OpenXRActionMap::remove_interaction_profile(Ref<OpenXRInteractionProfile>) */void OpenXRActionMap::remove_interaction_profile(OpenXRActionMap *this, long *param_2) {
   int iVar1;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_48, (Object*)*param_2);
   iVar1 = Array::find((Variant*)( this + 0x248 ), (int)(Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (iVar1 != -1) {
      Array::remove_at((int)(Variant*)( this + 0x248 ));
      if (*(OpenXRActionMap**)( *param_2 + 0x260 ) == this) {
         *(undefined8*)( *param_2 + 0x260 ) = 0;
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Resource::emit_changed();
            return;
         }
         goto LAB_00100386;
      }
      _err_print_error("remove_interaction_profile", "modules/openxr/action_map/openxr_action_map.cpp", 0xb1, "Condition \"p_interaction_profile->action_map != this\" is true.", "Removing interaction profile that belongs to this action map but had incorrect action map pointer.", 0, 0);
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00100386:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* OpenXRActionMap::set_action_sets(Array) */void OpenXRActionMap::set_action_sets(OpenXRActionMap *this, int param_2) {
   char cVar1;
   int iVar2;
   long lVar3;
   Object *pOVar4;
   int iVar5;
   long in_FS_OFFSET;
   int local_58[6];
   long local_40;
   iVar5 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::clear();
   while (true) {
      iVar2 = Array::size();
      if (iVar2 <= iVar5) break;
      Array::operator [](param_2);
      lVar3 = Variant::get_validated_object();
      if (lVar3 != 0) {
         pOVar4 = (Object*)__dynamic_cast(lVar3, &Object::typeinfo, &OpenXRActionSet::typeinfo, 0);
         if (pOVar4 != (Object*)0x0) {
            cVar1 = RefCounted::reference();
            if (cVar1 != '\0') {
               Variant::Variant((Variant*)local_58, pOVar4);
               cVar1 = Array::has((Variant*)( this + 0x240 ));
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }
               if (cVar1 == '\0') {
                  Variant::Variant((Variant*)local_58, pOVar4);
                  Array::push_back((Variant*)( this + 0x240 ));
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }
               }
               cVar1 = RefCounted::unreference();
               if (cVar1 != '\0') {
                  cVar1 = predelete_handler(pOVar4);
                  if (cVar1 != '\0') {
                     ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                     Memory::free_static(pOVar4, false);
                  }
               }
            }
         }
      }
      iVar5 = iVar5 + 1;
   };
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Ref<OpenXRInteractionProfile>::TEMPNAMEPLACEHOLDERVALUE(Ref<OpenXRInteractionProfile> const&)
   [clone .isra.0] */void Ref<OpenXRInteractionProfile>::operator =(Ref<OpenXRInteractionProfile> *this, Ref *param_1) {
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
}/* OpenXRActionMap::get_action_set(int) const */undefined8 *OpenXRActionMap::get_action_set(int param_1) {
   Object *pOVar1;
   char cVar2;
   int iVar3;
   Object *pOVar4;
   int in_EDX;
   int in_ESI;
   undefined4 in_register_0000003c;
   undefined8 *puVar5;
   puVar5 = (undefined8*)CONCAT44(in_register_0000003c, param_1);
   if (-1 < in_EDX) {
      iVar3 = Array::size();
      if (in_EDX < iVar3) {
         Array::operator [](in_ESI + 0x240);
         *puVar5 = 0;
         pOVar4 = (Object*)Variant::get_validated_object();
         pOVar1 = (Object*)*puVar5;
         if (pOVar4 == pOVar1) {
            return puVar5;
         }
         if (pOVar4 == (Object*)0x0) {
            if (pOVar1 == (Object*)0x0) {
               return puVar5;
            }
            *puVar5 = 0;
         } else {
            pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &OpenXRActionSet::typeinfo, 0);
            if (pOVar1 == pOVar4) {
               return puVar5;
            }
            *puVar5 = pOVar4;
            if (( pOVar4 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
               *puVar5 = 0;
            }
            if (pOVar1 == (Object*)0x0) {
               return puVar5;
            }
         }
         cVar2 = RefCounted::unreference();
         if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }
         return puVar5;
      }
   }
   iVar3 = Array::size();
   _err_print_index_error("get_action_set", "modules/openxr/action_map/openxr_action_map.cpp", 0x58, (long)in_EDX, (long)iVar3, "p_idx", "action_sets.size()", "", false, false);
   *puVar5 = 0;
   return puVar5;
}/* OpenXRActionMap::get_interaction_profile(int) const */undefined8 *OpenXRActionMap::get_interaction_profile(int param_1) {
   Object *pOVar1;
   char cVar2;
   int iVar3;
   Object *pOVar4;
   int in_EDX;
   int in_ESI;
   undefined4 in_register_0000003c;
   undefined8 *puVar5;
   puVar5 = (undefined8*)CONCAT44(in_register_0000003c, param_1);
   if (-1 < in_EDX) {
      iVar3 = Array::size();
      if (in_EDX < iVar3) {
         Array::operator [](in_ESI + 0x248);
         *puVar5 = 0;
         pOVar4 = (Object*)Variant::get_validated_object();
         pOVar1 = (Object*)*puVar5;
         if (pOVar4 == pOVar1) {
            return puVar5;
         }
         if (pOVar4 == (Object*)0x0) {
            if (pOVar1 == (Object*)0x0) {
               return puVar5;
            }
            *puVar5 = 0;
         } else {
            pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &OpenXRInteractionProfile::typeinfo, 0);
            if (pOVar1 == pOVar4) {
               return puVar5;
            }
            *puVar5 = pOVar4;
            if (( pOVar4 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
               *puVar5 = 0;
            }
            if (pOVar1 == (Object*)0x0) {
               return puVar5;
            }
         }
         cVar2 = RefCounted::unreference();
         if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }
         return puVar5;
      }
   }
   iVar3 = Array::size();
   _err_print_index_error("get_interaction_profile", "modules/openxr/action_map/openxr_action_map.cpp", 0x97, (long)in_EDX, (long)iVar3, "p_idx", "interaction_profiles.size()", "", false, false);
   *puVar5 = 0;
   return puVar5;
}/* OpenXRActionMap::find_action_set(String) const */undefined8 *OpenXRActionMap::find_action_set(undefined8 *param_1, int param_2, String *param_3) {
   long *plVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   Object *pOVar5;
   int iVar6;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   iVar6 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      iVar4 = Array::size();
      if (iVar4 <= iVar6) {
         LAB_001009a0:*param_1 = 0;
         LAB_001009ac:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return param_1;
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      Array::operator [](param_2 + 0x240);
      pOVar5 = (Object*)Variant::get_validated_object();
      if (pOVar5 != (Object*)0x0) {
         pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &OpenXRActionSet::typeinfo, 0);
         if (pOVar5 != (Object*)0x0) {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               pOVar5 = (Object*)0x0;
            }
         }
      }
      Resource::get_name();
      cVar3 = String::operator ==((String*)&local_48, param_3);
      lVar2 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      if (cVar3 != '\0') {
         if (pOVar5 != (Object*)0x0) {
            *param_1 = pOVar5;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               *param_1 = 0;
            }
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar5);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }
            }
            goto LAB_001009ac;
         }
         goto LAB_001009a0;
      }
      if (pOVar5 != (Object*)0x0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            cVar3 = predelete_handler(pOVar5);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }
         }
      }
      iVar6 = iVar6 + 1;
   } while ( true );
}/* OpenXRActionMap::add_interaction_profile(Ref<OpenXRInteractionProfile>) */void OpenXRActionMap::add_interaction_profile(OpenXRActionMap *this, undefined8 *param_2) {
   OpenXRActionMap *pOVar1;
   char cVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   Object *local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((Object*)*param_2 == (Object*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("add_interaction_profile", "modules/openxr/action_map/openxr_action_map.cpp", 0x9d, "Condition \"p_interaction_profile.is_null()\" is true.", 0, 0);
         return;
      }
   } else {
      Variant::Variant((Variant*)local_58, (Object*)*param_2);
      cVar2 = Array::has((Variant*)( this + 0x248 ));
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (cVar2 == '\0') {
         pOVar3 = (Object*)*param_2;
         pOVar1 = *(OpenXRActionMap**)( pOVar3 + 0x260 );
         if (( pOVar1 != (OpenXRActionMap*)0x0 ) && ( pOVar1 != this )) {
            local_60 = (Object*)0x0;
            Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_60, pOVar3);
            remove_interaction_profile(pOVar1);
            pOVar3 = local_60;
            if (local_60 != (Object*)0x0) {
               cVar2 = RefCounted::unreference();
               if (cVar2 != '\0') {
                  cVar2 = predelete_handler(pOVar3);
                  if (cVar2 != '\0') {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }
               }
            }
            pOVar3 = (Object*)*param_2;
         }
         *(OpenXRActionMap**)( pOVar3 + 0x260 ) = this;
         Variant::Variant((Variant*)local_58, pOVar3);
         Array::push_back((Variant*)( this + 0x248 ));
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Resource::emit_changed();
            return;
         }
      } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
      } else {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* OpenXRActionMap::find_interaction_profile(String) const */undefined8 *OpenXRActionMap::find_interaction_profile(undefined8 *param_1, undefined8 param_2, String *param_3) {
   long *plVar1;
   long lVar2;
   char cVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   long local_70;
   Variant *local_68;
   Variant *local_60;
   Variant *local_58;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::begin();
   Array::end();
   if (local_68 != local_58) {
      do {
         if (local_60 != (Variant*)0x0) {
            Variant::operator =(local_60, local_68);
         }
         pOVar4 = (Object*)Variant::get_validated_object();
         if (pOVar4 != (Object*)0x0) {
            pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &OpenXRInteractionProfile::typeinfo, 0);
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  pOVar4 = (Object*)0x0;
               }
            }
         }
         OpenXRInteractionProfile::get_interaction_profile_path();
         cVar3 = String::operator ==((String*)&local_70, param_3);
         lVar2 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         if (cVar3 != '\0') {
            *param_1 = pOVar4;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               *param_1 = 0;
            }
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar4);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                  Memory::free_static(pOVar4, false);
               }
            }
            goto LAB_00100e34;
         }
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            cVar3 = predelete_handler(pOVar4);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }
         }
         local_68 = local_68 + 0x18;
      } while ( local_68 != local_58 );
   }
   *param_1 = 0;
   LAB_00100e34:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OpenXRActionMap::clear_interaction_profiles() */void OpenXRActionMap::clear_interaction_profiles(void) {
   long lVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   Variant *local_58;
   Variant *local_50;
   Variant *local_48;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = Array::is_empty();
   if (cVar3 == '\0') {
      Array::begin();
      Array::end();
      if (local_48 != local_58) {
         do {
            if (local_50 != (Variant*)0x0) {
               Variant::operator =(local_50, local_58);
            }
            lVar4 = Variant::get_validated_object();
            if (( lVar4 == 0 ) || ( pOVar5 = (Object*)__dynamic_cast(lVar4, &Object::typeinfo, &OpenXRInteractionProfile::typeinfo, 0) ),pOVar5 == (Object*)0x0) {
               _DAT_00000260 = 0;
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               pOVar5 = (Object*)0x0;
            }
            *(undefined8*)( pOVar5 + 0x260 ) = 0;
            cVar3 = RefCounted::unreference();
            if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar5) ),cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }
            local_58 = local_58 + 0x18;
         } while ( local_58 != local_48 );
      }
      Array::clear();
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Resource::emit_changed();
         return;
      }
   } else if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* OpenXRActionMap::~OpenXRActionMap() */void OpenXRActionMap::~OpenXRActionMap(OpenXRActionMap *this) {
   *(undefined***)this = &PTR__initialize_classv_00112d30;
   Array::clear();
   clear_interaction_profiles();
   Array::~Array((Array*)( this + 0x248 ));
   Array::~Array((Array*)( this + 0x240 ));
   Resource::~Resource((Resource*)this);
   return;
}/* OpenXRActionMap::set_interaction_profiles(Array) */void OpenXRActionMap::set_interaction_profiles(OpenXRActionMap *param_1) {
   char cVar1;
   long lVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   Object *local_60;
   Variant *local_58;
   Variant *local_50;
   Variant *local_48;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   clear_interaction_profiles();
   Array::begin();
   Array::end();
   if (local_48 != local_58) {
      do {
         if (local_50 != (Variant*)0x0) {
            Variant::operator =(local_50, local_58);
         }
         local_60 = (Object*)0x0;
         lVar2 = Variant::get_validated_object();
         if (lVar2 == 0) {
            LAB_00101119:add_interaction_profile(param_1, &local_60);
         } else {
            pOVar3 = (Object*)__dynamic_cast(lVar2, &Object::typeinfo, &OpenXRInteractionProfile::typeinfo, 0);
            if (pOVar3 == (Object*)0x0) goto LAB_00101119;
            local_60 = pOVar3;
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
               local_60 = (Object*)0x0;
               goto LAB_00101119;
            }
            add_interaction_profile(param_1);
            cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar3);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }
            }
         }
         local_58 = local_58 + 0x18;
      } while ( local_58 != local_48 );
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* OpenXRActionMap::~OpenXRActionMap() */void OpenXRActionMap::~OpenXRActionMap(OpenXRActionMap *this) {
   *(undefined***)this = &PTR__initialize_classv_00112d30;
   Array::clear();
   clear_interaction_profiles();
   Array::~Array((Array*)( this + 0x248 ));
   Array::~Array((Array*)( this + 0x240 ));
   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x250);
   return;
}/* OpenXRActionMap::create_editor_action_sets() */void OpenXRActionMap::create_editor_action_sets(void) {
   return;
}/* OpenXRActionMap::_bind_methods() */void OpenXRActionMap::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   uint uVar5;
   long lVar6;
   long *plVar7;
   long in_FS_OFFSET;
   CowData<char32_t> *local_108;
   undefined8 local_d8;
   long local_d0;
   long local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   long *local_a8;
   undefined8 local_a0;
   char *local_98;
   undefined8 local_90;
   long *local_88;
   int local_80;
   undefined8 local_78;
   undefined4 local_70;
   char *local_68;
   undefined8 local_60;
   char **local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   local_68 = "action_sets";
   uVar5 = ( uint ) & local_58;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_action_sets", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<OpenXRActionMap,Array>(set_action_sets);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar6 );
         }
         Memory::free_static(plVar3 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }
   D_METHODP((char*)&local_98, (char***)"get_action_sets", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<OpenXRActionMap,Array>(get_action_sets);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar6 );
         }
         Memory::free_static(plVar3 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }
   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_c0 = 0;
   local_98 = "OpenXRActionSet";
   local_c8 = 0;
   local_90 = 0xf;
   String::parse_latin1((StrRange*)&local_c8);
   local_d0 = 0;
   local_98 = "action_sets";
   local_90 = 0xb;
   String::parse_latin1((StrRange*)&local_d0);
   local_98 = (char*)CONCAT44(local_98._4_4_, 0x1c);
   local_90 = 0;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)&local_d0);
   }
   local_88 = (long*)0x0;
   local_80 = 0x11;
   local_78 = 0;
   if (local_c8 == 0) {
      LAB_00102848:local_108 = (CowData<char32_t>*)&local_78;
      local_70 = 2;
      StringName::StringName((StringName*)&local_a8, (String*)local_108, false);
      if (local_88 == local_a8) {
         if (( StringName::configured != '\0' ) && ( local_a8 != (long*)0x0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_88 = local_a8;
      }
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_c8);
      local_70 = 2;
      if (local_80 == 0x11) goto LAB_00102848;
      StringName::operator =((StringName*)&local_88, (StringName*)&local_c0);
   }
   local_108 = (CowData<char32_t>*)&local_78;
   local_d8 = 0;
   local_a8 = (long*)0x1090ad;
   local_a0 = 0xf;
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (long*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref(local_108);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b0 != 0 )) {
      StringName::unref();
   }
   D_METHODP((char*)&local_98, (char***)"get_action_set_count", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<OpenXRActionMap,int>(get_action_set_count);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar6 );
         }
         Memory::free_static(plVar3 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }
   local_68 = "name";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"find_action_set", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<OpenXRActionMap,Ref<OpenXRActionSet>,String>(find_action_set);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar6 );
         }
         Memory::free_static(plVar3 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }
   local_68 = "idx";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"get_action_set", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<OpenXRActionMap,Ref<OpenXRActionSet>,int>(get_action_set);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar6 );
         }
         Memory::free_static(plVar3 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }
   local_60 = 0;
   local_68 = "action_set";
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"add_action_set", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<OpenXRActionMap,Ref<OpenXRActionSet>>(add_action_set);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_98);
   local_68 = "action_set";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"remove_action_set", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<OpenXRActionMap,Ref<OpenXRActionSet>>(remove_action_set);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar6 );
         }
         Memory::free_static(plVar3 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }
   local_68 = "interaction_profiles";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"set_interaction_profiles", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<OpenXRActionMap,Array>(set_interaction_profiles);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar6 );
         }
         Memory::free_static(plVar3 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }
   D_METHODP((char*)&local_98, (char***)"get_interaction_profiles", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<OpenXRActionMap,Array>(get_interaction_profiles);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar6 );
         }
         Memory::free_static(plVar3 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }
   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_98 = "OpenXRInteractionProfile";
   local_c0 = 0;
   local_c8 = 0;
   local_90 = 0x18;
   String::parse_latin1((StrRange*)&local_c8);
   local_d0 = 0;
   local_98 = "interaction_profiles";
   local_90 = 0x14;
   String::parse_latin1((StrRange*)&local_d0);
   local_98 = (char*)CONCAT44(local_98._4_4_, 0x1c);
   local_90 = 0;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)&local_d0);
   }
   local_88 = (long*)0x0;
   local_80 = 0x11;
   local_78 = 0;
   if (local_c8 != 0) {
      CowData<char32_t>::_ref(local_108, (CowData*)&local_c8);
      local_70 = 2;
      if (local_80 != 0x11) {
         StringName::operator =((StringName*)&local_88, (StringName*)&local_c0);
         goto LAB_00102079;
      }
   }
   local_70 = 2;
   StringName::StringName((StringName*)&local_a8, (String*)local_108, false);
   if (local_88 == local_a8) {
      if (( StringName::configured != '\0' ) && ( local_a8 != (long*)0x0 )) {
         StringName::unref();
      }
   } else {
      StringName::unref();
      local_88 = local_a8;
   }
   LAB_00102079:local_d8 = 0;
   local_a8 = (long*)0x1090ad;
   local_a0 = 0xf;
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (long*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref(local_108);
   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_b0 != 0 ) ) )) {
      StringName::unref();
   }
   D_METHODP((char*)&local_98, (char***)"get_interaction_profile_count", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<OpenXRActionMap,int>(get_interaction_profile_count);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar6 );
         }
         Memory::free_static(plVar3 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }
   local_68 = "name";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"find_interaction_profile", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<OpenXRActionMap,Ref<OpenXRInteractionProfile>,String>(find_interaction_profile);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_98);
   local_68 = "idx";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"get_interaction_profile", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<OpenXRActionMap,Ref<OpenXRInteractionProfile>,int>(get_interaction_profile);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar6 );
         }
         Memory::free_static(plVar3 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }
   local_68 = "interaction_profile";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"add_interaction_profile", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<OpenXRActionMap,Ref<OpenXRInteractionProfile>>(add_interaction_profile);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar6 );
         }
         Memory::free_static(plVar3 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }
   local_68 = "interaction_profile";
   local_60 = 0;
   local_58 = &local_68;
   D_METHODP((char*)&local_98, (char***)"remove_interaction_profile", uVar5);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<OpenXRActionMap,Ref<OpenXRInteractionProfile>>(remove_interaction_profile);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar6 );
         }
         Memory::free_static(plVar3 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }
   D_METHODP((char*)&local_98, (char***)"create_default_action_sets", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar4 = create_method_bind<OpenXRActionMap>(create_default_action_sets);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   plVar3 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar7 = local_88 + -2;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         lVar1 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar7 = plVar3;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                  StringName::unref();
               }
               lVar6 = lVar6 + 1;
               plVar7 = plVar7 + 1;
            } while ( lVar1 != lVar6 );
         }
         Memory::free_static(plVar3 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* OpenXRActionMap::create_default_action_sets() */void OpenXRActionMap::create_default_action_sets(OpenXRActionMap *this) {
   Ref *pRVar1;
   char cVar2;
   long in_FS_OFFSET;
   Ref *local_110;
   Ref<OpenXRAction> local_108[8];
   Ref<OpenXRAction> local_100[8];
   Ref<OpenXRAction> local_f8[8];
   Ref<OpenXRAction> local_f0[8];
   Ref<OpenXRAction> local_e8[8];
   Ref<OpenXRAction> local_e0[8];
   Ref<OpenXRAction> local_d8[8];
   Ref<OpenXRAction> local_d0[8];
   Ref<OpenXRAction> local_c8[8];
   Ref<OpenXRAction> local_c0[8];
   Ref<OpenXRAction> local_b8[8];
   Ref<OpenXRAction> local_b0[8];
   Ref<OpenXRAction> local_a8[8];
   Ref<OpenXRAction> local_a0[8];
   Ref<OpenXRAction> local_98[8];
   Ref<OpenXRAction> local_90[8];
   Ref<OpenXRAction> local_88[8];
   Ref<OpenXRAction> local_80[8];
   String local_78[8];
   Ref<OpenXRAction> local_70[8];
   Ref<OpenXRAction> local_68[8];
   Ref<OpenXRAction> local_60[8];
   Ref<OpenXRAction> local_58[8];
   Ref *local_50;
   Ref *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   OpenXRActionSet::new_action_set((char*)&local_110, "godot", 0x108ddc);
   local_50 = (Ref*)0x0;
   if (local_110 != (Ref*)0x0) {
      local_48 = (Ref*)0x0;
      local_50 = local_110;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         local_50 = (Ref*)0x0;
      }
      Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet>*)&local_48);
   }
   add_action_set(this, (Ref<OpenXRActionSet>*)&local_50);
   Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet>*)&local_50);
   OpenXRActionSet::add_new_action(local_108, local_110, "trigger", "Trigger", 1, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_100, local_110, "trigger_click", "Trigger click", 0, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_f8, local_110, "trigger_touch", "Trigger touching", 0, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_f0, local_110, &_LC49, &_LC48, 1, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_e8, local_110, "grip_click", "Grip click", 0, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_e0, local_110, "grip_force", "Grip force", 1, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_d8, local_110, "primary", "Primary joystick/thumbstick/trackpad", 2, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_d0, local_110, "primary_click", "Primary joystick/thumbstick/trackpad click", 0, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_c8, local_110, "primary_touch", "Primary joystick/thumbstick/trackpad touching", 0, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_c0, local_110, "secondary", "Secondary joystick/thumbstick/trackpad", 2, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_b8, local_110, "secondary_click", "Secondary joystick/thumbstick/trackpad click", 0, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_b0, local_110, "secondary_touch", "Secondary joystick/thumbstick/trackpad touching", 0, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_a8, local_110, "menu_button", "Menu button", 0, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_a0, local_110, "select_button", "Select button", 0, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_98, local_110, "ax_button", "A/X button", 0, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_90, local_110, "ax_touch", "A/X touching", 0, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_88, local_110, "by_button", "B/Y button", 0, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_80, local_110, "by_touch", "B/Y touching", 0, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_78, local_110, "default_pose", "Default pose", 3, "/user/hand/left,/user/hand/right,/user/vive_tracker_htcx/role/left_foot,/user/vive_tracker_htcx/role/right_foot,/user/vive_tracker_htcx/role/left_shoulder,/user/vive_tracker_htcx/role/right_shoulder,/user/vive_tracker_htcx/role/left_elbow,/user/vive_tracker_htcx/role/right_elbow,/user/vive_tracker_htcx/role/left_knee,/user/vive_tracker_htcx/role/right_knee,/user/vive_tracker_htcx/role/waist,/user/vive_tracker_htcx/role/chest,/user/vive_tracker_htcx/role/camera,/user/vive_tracker_htcx/role/keyboard,/user/eyes_ext");
   OpenXRActionSet::add_new_action(local_70, local_110, "aim_pose", "Aim pose", 3, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_68, local_110, "grip_pose", "Grip pose", 3, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_60, local_110, "palm_pose", "Palm pose", 3, "/user/hand/left,/user/hand/right");
   OpenXRActionSet::add_new_action(local_58, local_110, "haptic", "Haptic", 4, "/user/hand/left,/user/hand/right,/user/vive_tracker_htcx/role/left_foot,/user/vive_tracker_htcx/role/right_foot,/user/vive_tracker_htcx/role/left_shoulder,/user/vive_tracker_htcx/role/right_shoulder,/user/vive_tracker_htcx/role/left_elbow,/user/vive_tracker_htcx/role/right_elbow,/user/vive_tracker_htcx/role/left_knee,/user/vive_tracker_htcx/role/right_knee,/user/vive_tracker_htcx/role/waist,/user/vive_tracker_htcx/role/chest,/user/vive_tracker_htcx/role/camera,/user/vive_tracker_htcx/role/keyboard");
   OpenXRInteractionProfile::new_profile((char*)&local_50);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/grip/pose,/user/hand/right/input/grip/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/palm_ext/pose,/user/hand/right/input/palm_ext/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/menu/click,/user/hand/right/input/menu/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/select/click,/user/hand/right/input/select/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/output/haptic,/user/hand/right/output/haptic");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   local_48 = (Ref*)0x0;
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_48, local_50);
   add_interaction_profile(this, (String*)&local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   OpenXRInteractionProfile::new_profile((char*)&local_48);
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_50, local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/grip/pose,/user/hand/right/input/grip/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/palm_ext/pose,/user/hand/right/input/palm_ext/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/menu/click,/user/hand/right/input/menu/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/system/click,/user/hand/right/input/system/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/value,/user/hand/right/input/trigger/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/click,/user/hand/right/input/trigger/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/click,/user/hand/right/input/squeeze/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/click,/user/hand/right/input/squeeze/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trackpad,/user/hand/right/input/trackpad");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trackpad/click,/user/hand/right/input/trackpad/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trackpad/touch,/user/hand/right/input/trackpad/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/output/haptic,/user/hand/right/output/haptic");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   local_48 = (Ref*)0x0;
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_48, local_50);
   add_interaction_profile(this, (String*)&local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   OpenXRInteractionProfile::new_profile((char*)&local_48);
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_50, local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/grip/pose,/user/hand/right/input/grip/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/palm_ext/pose,/user/hand/right/input/palm_ext/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/menu/click,/user/hand/right/input/menu/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/value,/user/hand/right/input/trigger/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/value,/user/hand/right/input/trigger/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/click,/user/hand/right/input/squeeze/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/click,/user/hand/right/input/squeeze/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick,/user/hand/right/input/thumbstick");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick/click,/user/hand/right/input/thumbstick/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trackpad,/user/hand/right/input/trackpad");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trackpad/click,/user/hand/right/input/trackpad/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trackpad/touch,/user/hand/right/input/trackpad/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/output/haptic,/user/hand/right/output/haptic");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   local_48 = (Ref*)0x0;
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_48, local_50);
   add_interaction_profile(this, (String*)&local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   OpenXRInteractionProfile::new_profile((char*)&local_48);
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_50, local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/grip/pose,/user/hand/right/input/grip/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/palm_ext/pose,/user/hand/right/input/palm_ext/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/menu/click,/user/hand/right/input/system/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/x/click,/user/hand/right/input/a/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/x/touch,/user/hand/right/input/a/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/y/click,/user/hand/right/input/b/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/y/touch,/user/hand/right/input/b/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/value,/user/hand/right/input/trigger/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/value,/user/hand/right/input/trigger/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/touch,/user/hand/right/input/trigger/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/value,/user/hand/right/input/squeeze/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/value,/user/hand/right/input/squeeze/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick,/user/hand/right/input/thumbstick");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick/click,/user/hand/right/input/thumbstick/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick/touch,/user/hand/right/input/thumbstick/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/output/haptic,/user/hand/right/output/haptic");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   local_48 = (Ref*)0x0;
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_48, local_50);
   add_interaction_profile(this, (String*)&local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   OpenXRInteractionProfile::new_profile((char*)&local_48);
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_50, local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/grip/pose,/user/hand/right/input/grip/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/palm_ext/pose,/user/hand/right/input/palm_ext/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/system/click,/user/hand/right/input/system/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/menu/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/x/click,/user/hand/right/input/a/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/x/touch,/user/hand/right/input/a/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/y/click,/user/hand/right/input/b/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/y/touch,/user/hand/right/input/b/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/value,/user/hand/right/input/trigger/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/value,/user/hand/right/input/trigger/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/touch,/user/hand/right/input/trigger/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/value,/user/hand/right/input/squeeze/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/value,/user/hand/right/input/squeeze/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick,/user/hand/right/input/thumbstick");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick/click,/user/hand/right/input/thumbstick/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick/touch,/user/hand/right/input/thumbstick/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/output/haptic,/user/hand/right/output/haptic");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   local_48 = (Ref*)0x0;
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_48, local_50);
   add_interaction_profile(this, (String*)&local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   OpenXRInteractionProfile::new_profile((char*)&local_48);
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_50, local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/grip/pose,/user/hand/right/input/grip/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/palm_ext/pose,/user/hand/right/input/palm_ext/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/system/click,/user/hand/right/input/system/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/a/click,/user/hand/right/input/a/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/a/touch,/user/hand/right/input/a/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/b/click,/user/hand/right/input/b/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/b/touch,/user/hand/right/input/b/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/value,/user/hand/right/input/trigger/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/click,/user/hand/right/input/trigger/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/touch,/user/hand/right/input/trigger/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/value,/user/hand/right/input/squeeze/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/value,/user/hand/right/input/squeeze/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/force,/user/hand/right/input/squeeze/force");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick,/user/hand/right/input/thumbstick");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick/click,/user/hand/right/input/thumbstick/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick/touch,/user/hand/right/input/thumbstick/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trackpad,/user/hand/right/input/trackpad");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trackpad/force,/user/hand/right/input/trackpad/force");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trackpad/touch,/user/hand/right/input/trackpad/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/output/haptic,/user/hand/right/output/haptic");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   local_48 = (Ref*)0x0;
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_48, local_50);
   add_interaction_profile(this, (String*)&local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   OpenXRInteractionProfile::new_profile((char*)&local_48);
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_50, local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/grip/pose,/user/hand/right/input/grip/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/palm_ext/pose,/user/hand/right/input/palm_ext/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/menu/click,/user/hand/right/input/menu/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/x/click,/user/hand/right/input/a/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/y/click,/user/hand/right/input/b/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/value,/user/hand/right/input/trigger/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/value,/user/hand/right/input/trigger/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/value,/user/hand/right/input/squeeze/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/value,/user/hand/right/input/squeeze/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick,/user/hand/right/input/thumbstick");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick/click,/user/hand/right/input/thumbstick/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/output/haptic,/user/hand/right/output/haptic");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   local_48 = (Ref*)0x0;
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_48, local_50);
   add_interaction_profile(this, (String*)&local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   OpenXRInteractionProfile::new_profile((char*)&local_48);
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_50, local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/grip/pose,/user/hand/right/input/grip/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/palm_ext/pose,/user/hand/right/input/palm_ext/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/menu/click,/user/hand/right/input/menu/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/value,/user/hand/right/input/trigger/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/value,/user/hand/right/input/trigger/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/click,/user/hand/right/input/squeeze/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/click,/user/hand/right/input/squeeze/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick,/user/hand/right/input/thumbstick");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick/click,/user/hand/right/input/thumbstick/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trackpad,/user/hand/right/input/trackpad");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trackpad/click,/user/hand/right/input/trackpad/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trackpad/touch,/user/hand/right/input/trackpad/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/output/haptic,/user/hand/right/output/haptic");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   local_48 = (Ref*)0x0;
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_48, local_50);
   add_interaction_profile(this, (String*)&local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   OpenXRInteractionProfile::new_profile((char*)&local_48);
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_50, local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/grip/pose,/user/hand/right/input/grip/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/palm_ext/pose,/user/hand/right/input/palm_ext/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/menu/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/right/input/system/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/x/click,/user/hand/right/input/a/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/y/click,/user/hand/right/input/b/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/value,/user/hand/right/input/trigger/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/click,/user/hand/right/input/trigger/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/click,/user/hand/right/input/squeeze/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/click,/user/hand/right/input/squeeze/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick,/user/hand/right/input/thumbstick");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick/click,/user/hand/right/input/thumbstick/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick/touch,/user/hand/right/input/thumbstick/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/output/haptic,/user/hand/right/output/haptic");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   local_48 = (Ref*)0x0;
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_48, local_50);
   add_interaction_profile(this, (String*)&local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   OpenXRInteractionProfile::new_profile((char*)&local_48);
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_50, local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/grip/pose,/user/hand/right/input/grip/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/palm_ext/pose,/user/hand/right/input/palm_ext/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/menu/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/right/input/system/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/x/click,/user/hand/right/input/a/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/y/click,/user/hand/right/input/b/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/value,/user/hand/right/input/trigger/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/click,/user/hand/right/input/trigger/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/touch,/user/hand/right/input/trigger/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/click,/user/hand/right/input/squeeze/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/squeeze/click,/user/hand/right/input/squeeze/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick,/user/hand/right/input/thumbstick");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick/click,/user/hand/right/input/thumbstick/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbstick/touch,/user/hand/right/input/thumbstick/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/thumbrest/touch,/user/hand/right/input/thumbrest/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/output/haptic,/user/hand/right/output/haptic");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   local_48 = (Ref*)0x0;
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_48, local_50);
   add_interaction_profile(this, (String*)&local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   OpenXRInteractionProfile::new_profile((char*)&local_48);
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_50, local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/grip/pose,/user/hand/right/input/grip/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/palm_ext/pose,/user/hand/right/input/palm_ext/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/home/click,/user/hand/right/input/home/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/value,/user/hand/right/input/trigger/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trigger/click,/user/hand/right/input/trigger/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trackpad,/user/hand/right/input/trackpad");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trackpad/click,/user/hand/right/input/trackpad/click");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/trackpad/touch,/user/hand/right/input/trackpad/touch");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/output/haptic,/user/hand/right/output/haptic");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   local_48 = (Ref*)0x0;
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_48, local_50);
   add_interaction_profile(this, (String*)&local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   OpenXRInteractionProfile::new_profile((char*)&local_48);
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_50, local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/vive_tracker_htcx/role/left_foot/input/grip/pose,/user/vive_tracker_htcx/role/right_foot/input/grip/pose,/user/vive_tracker_htcx/role/left_shoulder/input/grip/pose,/user/vive_tracker_htcx/role/right_shoulder/input/grip/pose,/user/vive_tracker_htcx/role/left_elbow/input/grip/pose,/user/vive_tracker_htcx/role/right_elbow/input/grip/pose,/user/vive_tracker_htcx/role/left_knee/input/grip/pose,/user/vive_tracker_htcx/role/right_knee/input/grip/pose,/user/vive_tracker_htcx/role/waist/input/grip/pose,/user/vive_tracker_htcx/role/chest/input/grip/pose,/user/vive_tracker_htcx/role/camera/input/grip/pose,/user/vive_tracker_htcx/role/keyboard/input/grip/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/vive_tracker_htcx/role/left_foot/output/haptic,/user/vive_tracker_htcx/role/right_foot/output/haptic,/user/vive_tracker_htcx/role/left_shoulder/output/haptic,/user/vive_tracker_htcx/role/right_shoulder/output/haptic,/user/vive_tracker_htcx/role/left_elbow/output/haptic,/user/vive_tracker_htcx/role/right_elbow/output/haptic,/user/vive_tracker_htcx/role/left_knee/output/haptic,/user/vive_tracker_htcx/role/right_knee/output/haptic,/user/vive_tracker_htcx/role/waist/output/haptic,/user/vive_tracker_htcx/role/chest/output/haptic,/user/vive_tracker_htcx/role/camera/output/haptic,/user/vive_tracker_htcx/role/keyboard/output/haptic");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   local_48 = (Ref*)0x0;
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_48, local_50);
   add_interaction_profile(this, (String*)&local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   OpenXRInteractionProfile::new_profile((char*)&local_48);
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_50, local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/eyes_ext/input/gaze_ext/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   local_48 = (Ref*)0x0;
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_48, local_50);
   add_interaction_profile(this, (String*)&local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   OpenXRInteractionProfile::new_profile((char*)&local_48);
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_50, local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim/pose,/user/hand/right/input/aim/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/grip/pose,/user/hand/right/input/grip/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/palm_ext/pose,/user/hand/right/input/palm_ext/pose");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/pinch_ext/value,/user/hand/right/input/pinch_ext/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/pinch_ext/ready_ext,/user/hand/right/input/pinch_ext/ready_ext");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim_activate_ext/value,/user/hand/right/input/aim_activate_ext/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/aim_activate_ext/ready_ext,/user/hand/right/input/aim_activate_ext/ready_ext");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/grasp_ext/value,/user/hand/right/input/grasp_ext/value");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   pRVar1 = local_50;
   local_48 = (Ref*)0x0;
   String::parse_latin1((String*)&local_48, "/user/hand/left/input/grasp_ext/ready_ext,/user/hand/right/input/grasp_ext/ready_ext");
   OpenXRInteractionProfile::add_new_binding(pRVar1, (String*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   local_48 = (Ref*)0x0;
   Ref<OpenXRInteractionProfile>::operator =((Ref<OpenXRInteractionProfile>*)&local_48, local_50);
   add_interaction_profile(this, (String*)&local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_48);
   Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_50);
   Ref<OpenXRAction>::unref(local_58);
   Ref<OpenXRAction>::unref(local_60);
   Ref<OpenXRAction>::unref(local_68);
   Ref<OpenXRAction>::unref(local_70);
   Ref<OpenXRAction>::unref((Ref<OpenXRAction>*)local_78);
   Ref<OpenXRAction>::unref(local_80);
   Ref<OpenXRAction>::unref(local_88);
   Ref<OpenXRAction>::unref(local_90);
   Ref<OpenXRAction>::unref(local_98);
   Ref<OpenXRAction>::unref(local_a0);
   Ref<OpenXRAction>::unref(local_a8);
   Ref<OpenXRAction>::unref(local_b0);
   Ref<OpenXRAction>::unref(local_b8);
   Ref<OpenXRAction>::unref(local_c0);
   Ref<OpenXRAction>::unref(local_c8);
   Ref<OpenXRAction>::unref(local_d0);
   Ref<OpenXRAction>::unref(local_d8);
   Ref<OpenXRAction>::unref(local_e0);
   Ref<OpenXRAction>::unref(local_e8);
   Ref<OpenXRAction>::unref(local_f0);
   Ref<OpenXRAction>::unref(local_f8);
   Ref<OpenXRAction>::unref(local_100);
   Ref<OpenXRAction>::unref(local_108);
   Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet>*)&local_110);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* OpenXRActionMap::get_action(String) const */undefined8 *OpenXRActionMap::get_action(undefined8 *param_1, undefined8 param_2, bool param_3) {
   long *plVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   bool bVar6;
   Object *local_48;
   long local_40;
   char local_38[8];
   long *local_30[2];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_38, param_3, 0x108fae);
   if (( local_30[0] == (long*)0x0 ) || ( local_30[0][-1] != 2 )) {
      _err_print_error("get_action", "modules/openxr/action_map/openxr_action_map.cpp", 0x230, "Condition \"paths.size() != 2\" is true. Returning: Ref<OpenXRAction>()", 0, 0);
      *param_1 = 0;
   } else {
      local_40 = 0;
      plVar1 = (long*)( *local_30[0] + -0x10 );
      if (*local_30[0] != 0) {
         do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010601a;
            LOCK();
            lVar4 = *plVar1;
            bVar6 = lVar5 == lVar4;
            if (bVar6) {
               *plVar1 = lVar5 + 1;
               lVar4 = lVar5;
            }
            UNLOCK();
         } while ( !bVar6 );
         if (lVar4 != -1) {
            local_40 = *local_30[0];
         }
      }
      LAB_0010601a:find_action_set(&local_48, param_2, (CowData<char32_t>*)&local_40);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
      if (local_48 != (Object*)0x0) {
         if (local_30[0] == (long*)0x0) {
            lVar5 = 0;
         } else {
            lVar5 = local_30[0][-1];
            if (1 < lVar5) {
               local_40 = 0;
               if (local_30[0][1] != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_40, (CowData*)( local_30[0] + 1 ));
               }
               OpenXRActionSet::get_action(param_1, local_48, (CowData<char32_t>*)&local_40);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
               cVar3 = RefCounted::unreference();
               if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(local_48) ),cVar3 != '\0') {
                  ( **(code**)( *(long*)local_48 + 0x140 ) )(local_48);
                  Memory::free_static(local_48, false);
               }
               goto LAB_0010609c;
            }
         }
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 1, lVar5, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }
      *param_1 = 0;
   }
   LAB_0010609c:CowData<String>::_unref((CowData<String>*)local_30);
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* OpenXRActionMap::remove_action(String, bool) */void OpenXRActionMap::remove_action(OpenXRActionMap *this, CowData *param_2, char param_3) {
   char cVar1;
   long lVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   Object *local_78;
   Object *local_70;
   Object *local_68;
   Variant *local_60;
   Object *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58[0] = (Object*)0x0;
   if (*(long*)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_58, param_2);
   }
   get_action((Ref<OpenXRAction>*)&local_78, this, (CowData<char32_t>*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
   if (local_78 != (Object*)0x0) {
      Array::begin();
      Array::end();
      if (local_58[0] != local_68) {
         do {
            if (local_60 != (Variant*)0x0) {
               Variant::operator =(local_60, (Variant*)local_68);
            }
            local_70 = (Object*)0x0;
            lVar2 = Variant::get_validated_object();
            if (lVar2 == 0) {
               LAB_00106293:pOVar3 = (Object*)0x0;
            } else {
               pOVar3 = (Object*)__dynamic_cast(lVar2, &Object::typeinfo, &OpenXRInteractionProfile::typeinfo, 0);
               if (pOVar3 == (Object*)0x0) goto LAB_00106293;
               local_70 = pOVar3;
               cVar1 = RefCounted::reference();
               if (cVar1 == '\0') {
                  local_70 = (Object*)0x0;
                  goto LAB_00106293;
               }
            }
            if (param_3 == '\0') {
               cVar1 = OpenXRInteractionProfile::has_binding_for_action(pOVar3);
               if (cVar1 != '\0') {
                  _err_print_error("remove_action", "modules/openxr/action_map/openxr_action_map.cpp", 0x242, "Condition \"interaction_profile->has_binding_for_action(action)\" is true.", 0, 0);
                  Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile>*)&local_70);
                  Ref<OpenXRAction>::unref((Ref<OpenXRAction>*)&local_78);
                  goto LAB_0010633a;
               }
            } else {
               OpenXRInteractionProfile::remove_binding_for_action(pOVar3);
            }
            cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar3);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }
            }
            local_68 = local_68 + 0x18;
         } while ( local_68 != local_58[0] );
      }
      lVar2 = *(long*)( local_78 + 0x260 );
      if (lVar2 != 0) {
         local_58[0] = (Object*)0x0;
         local_68 = local_78;
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            local_68 = (Object*)0x0;
         }
         Ref<OpenXRAction>::unref((Ref<OpenXRAction>*)local_58);
         OpenXRActionSet::remove_action(lVar2);
         Ref<OpenXRAction>::unref((Ref<OpenXRAction>*)&local_68);
         if (local_78 == (Object*)0x0) goto LAB_0010633a;
      }
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_78);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)local_78 + 0x140 ) )(local_78);
            Memory::free_static(local_78, false);
         }
      }
   }
   LAB_0010633a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
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
         } while ( lVar2 != lVar6 );
      }
      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* CowData<Ref<OpenXRIPBinding> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<OpenXRIPBinding>>::_copy_on_write(CowData<Ref<OpenXRIPBinding>> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined8 *puVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }
   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }
   lVar1 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar1 * 8 != 0) {
      uVar7 = lVar1 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }
   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }
   lVar8 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar1;
   plVar6 = puVar5 + 2;
   if (lVar1 != 0) {
      do {
         lVar2 = *(long*)this;
         *plVar6 = 0;
         lVar2 = *(long*)( lVar2 + lVar8 * 8 );
         if (lVar2 != 0) {
            *plVar6 = lVar2;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *plVar6 = 0;
            }
         }
         lVar8 = lVar8 + 1;
         plVar6 = plVar6 + 1;
      } while ( lVar1 != lVar8 );
   }
   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}/* OpenXRActionMap::get_top_level_paths(Ref<OpenXRAction>) */long OpenXRActionMap::get_top_level_paths(long param_1) {
   long *plVar1;
   CowData<char32_t> *this;
   long lVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   Object *pOVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   bool bVar13;
   long local_90;
   long local_88;
   long local_80;
   Variant *local_78;
   Variant *local_70;
   Variant *local_68;
   long local_58;
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_1 + 8 ) = 0;
   Array::begin();
   Array::end();
   if (local_68 != local_78) {
      do {
         if (local_70 != (Variant*)0x0) {
            Variant::operator =(local_70, local_78);
         }
         pOVar6 = (Object*)Variant::get_validated_object();
         if (( ( pOVar6 != (Object*)0x0 ) && ( pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &OpenXRInteractionProfile::typeinfo, 0) ),pOVar6 != (Object*)0x0 )) {
            pOVar6 = (Object*)0x0;
         }
         uVar3 = OpenXRInteractionProfileMetadata::singleton;
         OpenXRInteractionProfile::get_interaction_profile_path();
         lVar7 = OpenXRInteractionProfileMetadata::get_profile(uVar3);
         lVar9 = local_58;
         if (local_58 != 0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }
         }
         if (lVar7 == 0) {
            cVar4 = RefCounted::unreference();
         } else {
            OpenXRInteractionProfile::get_bindings_for_action((Ref*)&local_58);
            CowData<Ref<OpenXRIPBinding>>::_copy_on_write((CowData<Ref<OpenXRIPBinding>>*)local_50);
            lVar11 = local_50[0];
            CowData<Ref<OpenXRIPBinding>>::_copy_on_write((CowData<Ref<OpenXRIPBinding>>*)local_50);
            lVar9 = local_50[0];
            if (local_50[0] != 0) {
               lVar9 = local_50[0] + *(long*)( local_50[0] + -8 ) * 8;
            }
            lVar2 = local_90;
            for (; local_90 = lVar2,lVar11 != lVar9; lVar11 = lVar11 + 8) {
               OpenXRIPBinding::get_binding_path();
               local_80 = 0;
               plVar1 = (long*)( lVar2 + -0x10 );
               if (lVar2 != 0) {
                  do {
                     lVar10 = *plVar1;
                     if (lVar10 == 0) goto LAB_00106898;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar13 = lVar10 == lVar8;
                     if (bVar13) {
                        *plVar1 = lVar10 + 1;
                        lVar8 = lVar10;
                     }
                     UNLOCK();
                  } while ( !bVar13 );
                  if (lVar8 != -1) {
                     local_80 = lVar2;
                  }
               }
               LAB_00106898:lVar8 = OpenXRInteractionProfileMetadata::InteractionProfile::get_io_path(lVar7);
               lVar10 = local_80;
               if (local_80 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_80 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_80 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               if (lVar8 != 0) {
                  local_88 = 0;
                  plVar1 = (long*)( *(long*)( lVar8 + 8 ) + -0x10 );
                  if (*(long*)( lVar8 + 8 ) != 0) {
                     do {
                        lVar10 = *plVar1;
                        if (lVar10 == 0) goto LAB_00106914;
                        LOCK();
                        lVar12 = *plVar1;
                        bVar13 = lVar10 == lVar12;
                        if (bVar13) {
                           *plVar1 = lVar10 + 1;
                           lVar12 = lVar10;
                        }
                        UNLOCK();
                     } while ( !bVar13 );
                     if (lVar12 != -1) {
                        local_88 = *(long*)( lVar8 + 8 );
                     }
                  }
                  LAB_00106914:lVar10 = *(long*)( param_1 + 8 );
                  if (( lVar10 != 0 ) && ( lVar8 = lVar8 != 0 )) {
                     lVar12 = 0;
                     while (lVar12 < lVar8) {
                        cVar4 = String::operator ==((String*)( lVar10 + lVar12 * 8 ), (String*)&local_88);
                        if (cVar4 != '\0') goto LAB_00106a30;
                        lVar10 = *(long*)( param_1 + 8 );
                        lVar12 = lVar12 + 1;
                        if (lVar10 == 0) break;
                        lVar8 = *(long*)( lVar10 + -8 );
                     };
                  }
                  local_80 = 0;
                  plVar1 = (long*)( local_88 + -0x10 );
                  if (local_88 == 0) {
                     LAB_001069a0:lVar8 = local_88;
                     if (lVar10 != 0) goto LAB_001069a9;
                     LAB_00106afa:lVar10 = 1;
                  } else {
                     do {
                        lVar10 = *plVar1;
                        if (lVar10 == 0) goto LAB_00106ae8;
                        LOCK();
                        lVar8 = *plVar1;
                        bVar13 = lVar10 == lVar8;
                        if (bVar13) {
                           *plVar1 = lVar10 + 1;
                           lVar8 = lVar10;
                        }
                        UNLOCK();
                     } while ( !bVar13 );
                     if (lVar8 != -1) {
                        lVar10 = *(long*)( param_1 + 8 );
                        local_80 = local_88;
                        goto LAB_001069a0;
                     }
                     LAB_00106ae8:lVar10 = *(long*)( param_1 + 8 );
                     lVar8 = 0;
                     if (lVar10 == 0) goto LAB_00106afa;
                     LAB_001069a9:lVar10 = *(long*)( lVar10 + -8 ) + 1;
                  }
                  iVar5 = CowData<String>::resize<false>((CowData<String>*)( param_1 + 8 ), lVar10);
                  if (iVar5 == 0) {
                     if (*(long*)( param_1 + 8 ) == 0) {
                        lVar12 = -1;
                        lVar10 = 0;
                     } else {
                        lVar10 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
                        lVar12 = lVar10 + -1;
                        if (-1 < lVar12) {
                           CowData<String>::_copy_on_write((CowData<String>*)( param_1 + 8 ));
                           this(CowData<char32_t> * )(*(long*)( param_1 + 8 ) + lVar12 * 8);
                           if (lVar8 != *(long*)this) {
                              CowData<char32_t>::_ref(this, (CowData*)&local_80);
                           }
                           goto LAB_00106a0e;
                        }
                     }
                     _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar12, lVar10, "p_index", "size()", "", false, false);
                  } else {
                     _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                  }
                  LAB_00106a0e:if (lVar8 != 0) {
                     LOCK();
                     plVar1 = (long*)( lVar8 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_80 + -0x10 ), false);
                     }
                  }
                  LAB_00106a30:lVar10 = local_88;
                  if (local_88 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_88 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_88 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }
                  }
               }
               if (lVar2 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar2 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_90 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }
               }
               lVar2 = local_90;
            }
            CowData<Ref<OpenXRIPBinding>>::_unref((CowData<Ref<OpenXRIPBinding>>*)local_50);
            cVar4 = RefCounted::unreference();
         }
         if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar6) ),cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }
         local_78 = local_78 + 0x18;
      } while ( local_78 != local_68 );
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* Object::get_save_class() const */void Object::get_save_class(void) {
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
}/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}/* OpenXRActionMap::is_class_ptr(void*) const */uint OpenXRActionMap::is_class_ptr(OpenXRActionMap *this, void *param_1) {
   return (uint)CONCAT71(0x1132, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1132, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1132, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1132, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}/* OpenXRActionMap::_getv(StringName const&, Variant&) const */undefined8 OpenXRActionMap::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* OpenXRActionMap::_setv(StringName const&, Variant const&) */undefined8 OpenXRActionMap::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* OpenXRActionMap::_validate_propertyv(PropertyInfo&) const */void OpenXRActionMap::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* OpenXRActionMap::_property_can_revertv(StringName const&) const */undefined8 OpenXRActionMap::_property_can_revertv(StringName *param_1) {
   return 0;
}/* OpenXRActionMap::_property_get_revertv(StringName const&, Variant&) const */undefined8 OpenXRActionMap::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* OpenXRActionMap::_notificationv(int, bool) */void OpenXRActionMap::_notificationv(int param_1, bool param_2) {
   return;
}/* MethodBindT<>::_gen_argument_type(int) const */undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
   return 0;
}/* MethodBindT<>::_gen_argument_type_info(int) const */undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
   *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
   *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
   return CONCAT44(in_register_0000003c, param_1);
}/* MethodBindT<>::get_argument_meta(int) const */undefined8 MethodBindT<>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Ref<OpenXRInteractionProfile> >::_gen_argument_type(int) const */byte MethodBindT<Ref<OpenXRInteractionProfile>>::_gen_argument_type(MethodBindT<Ref<OpenXRInteractionProfile>> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}/* MethodBindT<Ref<OpenXRInteractionProfile> >::get_argument_meta(int) const */undefined8 MethodBindT<Ref<OpenXRInteractionProfile>>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<Ref<OpenXRInteractionProfile>, int>::_gen_argument_type(int) const */int MethodBindTRC<Ref<OpenXRInteractionProfile>,int>::_gen_argument_type(MethodBindTRC<Ref<OpenXRInteractionProfile>,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffea ) + 0x18;
}/* MethodBindTRC<Ref<OpenXRInteractionProfile>, int>::get_argument_meta(int) const */byte MethodBindTRC<Ref<OpenXRInteractionProfile>,int>::get_argument_meta(MethodBindTRC<Ref<OpenXRInteractionProfile>,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}/* MethodBindTRC<Ref<OpenXRInteractionProfile>, String>::_gen_argument_type(int) const */int MethodBindTRC<Ref<OpenXRInteractionProfile>,String>::_gen_argument_type(MethodBindTRC<Ref<OpenXRInteractionProfile>,String> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffec ) + 0x18;
}/* MethodBindTRC<Ref<OpenXRInteractionProfile>, String>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<OpenXRInteractionProfile>,String>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Ref<OpenXRActionSet> >::_gen_argument_type(int) const */byte MethodBindT<Ref<OpenXRActionSet>>::_gen_argument_type(MethodBindT<Ref<OpenXRActionSet>> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}/* MethodBindT<Ref<OpenXRActionSet> >::get_argument_meta(int) const */undefined8 MethodBindT<Ref<OpenXRActionSet>>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<Ref<OpenXRActionSet>, int>::_gen_argument_type(int) const */int MethodBindTRC<Ref<OpenXRActionSet>,int>::_gen_argument_type(MethodBindTRC<Ref<OpenXRActionSet>,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffea ) + 0x18;
}/* MethodBindTRC<Ref<OpenXRActionSet>, int>::get_argument_meta(int) const */byte MethodBindTRC<Ref<OpenXRActionSet>,int>::get_argument_meta(MethodBindTRC<Ref<OpenXRActionSet>,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}/* MethodBindTRC<Ref<OpenXRActionSet>, String>::_gen_argument_type(int) const */int MethodBindTRC<Ref<OpenXRActionSet>,String>::_gen_argument_type(MethodBindTRC<Ref<OpenXRActionSet>,String> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffec ) + 0x18;
}/* MethodBindTRC<Ref<OpenXRActionSet>, String>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<OpenXRActionSet>,String>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}/* MethodBindTRC<Array>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Array>::_gen_argument_type(int param_1) {
   return 0x1c;
}/* MethodBindTRC<Array>::get_argument_meta(int) const */undefined8 MethodBindTRC<Array>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Array>::_gen_argument_type(int) const */byte MethodBindT<Array>::_gen_argument_type(MethodBindT<Array> *this, int param_1) {
   return -(param_1 == 0) & 0x1c;
}/* MethodBindT<Array>::get_argument_meta(int) const */undefined8 MethodBindT<Array>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<Ref<OpenXRActionSet>, String>::~MethodBindTRC() */void MethodBindTRC<Ref<OpenXRActionSet>,String>::~MethodBindTRC(MethodBindTRC<Ref<OpenXRActionSet>,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113028;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Ref<OpenXRActionSet>, String>::~MethodBindTRC() */void MethodBindTRC<Ref<OpenXRActionSet>,String>::~MethodBindTRC(MethodBindTRC<Ref<OpenXRActionSet>,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113028;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Ref<OpenXRActionSet>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<OpenXRActionSet>,int>::~MethodBindTRC(MethodBindTRC<Ref<OpenXRActionSet>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113088;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Ref<OpenXRActionSet>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<OpenXRActionSet>,int>::~MethodBindTRC(MethodBindTRC<Ref<OpenXRActionSet>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113088;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Ref<OpenXRActionSet> >::~MethodBindT() */void MethodBindT<Ref<OpenXRActionSet>>::~MethodBindT(MethodBindT<Ref<OpenXRActionSet>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001130e8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Ref<OpenXRActionSet> >::~MethodBindT() */void MethodBindT<Ref<OpenXRActionSet>>::~MethodBindT(MethodBindT<Ref<OpenXRActionSet>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001130e8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Array>::~MethodBindT() */void MethodBindT<Array>::~MethodBindT(MethodBindT<Array> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112f08;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Array>::~MethodBindT() */void MethodBindT<Array>::~MethodBindT(MethodBindT<Array> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112f08;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Array>::~MethodBindTRC() */void MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112f68;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Array>::~MethodBindTRC() */void MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112f68;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112fc8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112fc8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Ref<OpenXRInteractionProfile>, String>::~MethodBindTRC() */void MethodBindTRC<Ref<OpenXRInteractionProfile>,String>::~MethodBindTRC(MethodBindTRC<Ref<OpenXRInteractionProfile>,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113148;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Ref<OpenXRInteractionProfile>, String>::~MethodBindTRC() */void MethodBindTRC<Ref<OpenXRInteractionProfile>,String>::~MethodBindTRC(MethodBindTRC<Ref<OpenXRInteractionProfile>,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113148;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Ref<OpenXRInteractionProfile>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<OpenXRInteractionProfile>,int>::~MethodBindTRC(MethodBindTRC<Ref<OpenXRInteractionProfile>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001131a8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Ref<OpenXRInteractionProfile>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<OpenXRInteractionProfile>,int>::~MethodBindTRC(MethodBindTRC<Ref<OpenXRInteractionProfile>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001131a8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Ref<OpenXRInteractionProfile> >::~MethodBindT() */void MethodBindT<Ref<OpenXRInteractionProfile>>::~MethodBindT(MethodBindT<Ref<OpenXRInteractionProfile>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113208;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Ref<OpenXRInteractionProfile> >::~MethodBindT() */void MethodBindT<Ref<OpenXRInteractionProfile>>::~MethodBindT(MethodBindT<Ref<OpenXRInteractionProfile>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113208;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113268;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113268;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* Resource::get_base_extension() const */Resource * __thiscall Resource::get_base_extension(Resource *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* OpenXRActionMap::_get_class_namev() const */undefined8 *OpenXRActionMap::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001090f3:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001090f3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "OpenXRActionMap");
         goto LAB_0010915e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "OpenXRActionMap");
   LAB_0010915e:return &_get_class_namev();
}/* OpenXRActionMap::get_class() const */void OpenXRActionMap::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
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
}/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
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
}/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
      } else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_001093df;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_001093df:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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
      if (cVar6 != '\0') goto LAB_00109493;
   }
   cVar6 = String::operator ==((String*)param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         } else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }
            } else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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
         if (cVar6 != '\0') goto LAB_00109493;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar8 = String::operator ==((String*)param_1, "Object");
         return uVar8;
      }
   } else {
      LAB_00109493:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* OpenXRActionMap::is_class(String const&) const */undefined8 OpenXRActionMap::is_class(OpenXRActionMap *this, String *param_1) {
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
      } else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010964f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_0010964f:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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
      if (cVar6 != '\0') goto LAB_00109703;
   }
   cVar6 = String::operator ==((String*)param_1, "OpenXRActionMap");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         } else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }
            } else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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
         if (cVar6 != '\0') goto LAB_00109703;
      }
      cVar6 = String::operator ==((String*)param_1, "Resource");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar8;
         }
         goto LAB_00109848;
      }
   }
   LAB_00109703:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }
   LAB_00109848:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
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
            } while ( lVar2 != lVar5 );
         }
         Memory::free_static(plVar1 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OpenXRActionMap::clear_interaction_profiles() [clone .cold] */void OpenXRActionMap::clear_interaction_profiles(void) {
   code *pcVar1;
   _DAT_00000260 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* OpenXRActionMap::_bind_methods() [clone .cold] */void OpenXRActionMap::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<Ref<OpenXRIPBinding> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Ref<OpenXRIPBinding>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
}/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC10;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
         }
         goto LAB_00109ad5;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   LAB_00109ad5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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
}/* MethodBindTRC<Array>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Array>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC10;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar1 = 0x1c;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }
         goto LAB_00109c65;
      }
   }
   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00109c65:CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
   char *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   pLVar5 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = "RefCounted";
   local_88 = 0;
   local_90 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RefCounted";
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
      LAB_00109e5d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00109e5d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x00109e7f;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)pLVar5;
   joined_r0x00109e7f:if (lVar2 == 0) {
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
   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar5, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
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
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }
   local_88 = 0;
   local_90 = 0;
   local_78 = "Resource";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Resource";
   local_98 = 0;
   local_70 = 8;
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
      LAB_0010a1dd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010a1dd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010a1ff;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x0010a1ff:if (lVar2 == 0) {
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
   StringName::StringName((StringName*)&local_78, "Resource", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* OpenXRActionMap::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void OpenXRActionMap::_get_property_listv(OpenXRActionMap *this, List *param_1, bool param_2) {
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
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }
   local_88 = 0;
   local_90 = 0;
   local_78 = "OpenXRActionMap";
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "OpenXRActionMap";
   local_98 = 0;
   local_70 = 0xf;
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
      LAB_0010a5bd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010a5bd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010a5df;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x0010a5df:if (lVar2 == 0) {
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
   StringName::StringName((StringName*)&local_78, "OpenXRActionMap", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Resource::_get_property_listv((Resource*)this, param_1, true);
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Ref<OpenXRInteractionProfile>, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<OpenXRInteractionProfile>,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   undefined8 uVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   char *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX != 0) {
      local_a0 = 0;
      local_60._8_8_ = local_60._0_8_;
      local_60._0_8_ = 0x18;
      local_68 = "OpenXRInteractionProfile";
      String::parse_latin1((StrRange*)&local_a0);
      local_a8 = 0;
      *puVar6 = 0x18;
      puVar6[6] = 0x11;
      *(undefined8*)( puVar6 + 8 ) = 0;
      *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar6[10] = 6;
         LAB_0010ab67:StringName::StringName((StringName*)&local_68, (String*)( puVar6 + 8 ), false);
         if (*(char**)( puVar6 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(char**)( puVar6 + 4 ) = local_68;
         }
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar6 + 8 ), (CowData*)&local_a0);
         puVar6[10] = 6;
         if (puVar6[6] == 0x11) goto LAB_0010ab67;
         StringName::operator =((StringName*)( puVar6 + 4 ), (StringName*)&local_98);
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
         StringName::unref();
      }
      goto LAB_0010aa10;
   }
   local_80 = 0;
   local_90._0_8_ = 0;
   local_90._8_8_ = 0;
   local_78 = 0;
   local_70 = 6;
   local_a8 = 0;
   local_b0 = 0;
   local_68 = "";
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._0_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_b0 == 0) {
      LAB_0010aa48:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010aa48;
      StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
      if (local_60._8_8_ == local_a0) {
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_a0;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }
   local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
   if (local_90._0_8_ != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      local_90._0_8_ = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
   }
   if (local_90._8_8_ != local_60._8_8_) {
      StringName::unref();
      local_90._8_8_ = local_60._8_8_;
      local_60._8_8_ = 0;
   }
   local_80 = CONCAT44(local_80._4_4_, local_50);
   if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      local_78 = local_48;
      local_48 = 0;
   }
   local_70 = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   uVar5 = local_90._8_8_;
   uVar4 = local_90._0_8_;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_90._8_8_;
   local_90 = auVar3 << 0x40;
   *puVar6 = (undefined4)local_98;
   *(undefined8*)( puVar6 + 2 ) = uVar4;
   *(undefined8*)( puVar6 + 4 ) = uVar5;
   puVar6[6] = (undefined4)local_80;
   *(long*)( puVar6 + 8 ) = local_78;
   puVar6[10] = local_70;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   LAB_0010aa10:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar6;
}/* MethodBindTRC<Ref<OpenXRActionSet>, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<OpenXRActionSet>,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   char *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX != 0) {
      local_a0 = 0;
      local_60._8_8_ = local_60._0_8_;
      local_60._0_8_ = 0xf;
      local_68 = "OpenXRActionSet";
      String::parse_latin1((StrRange*)&local_a0);
      local_a8 = 0;
      *puVar5 = 0x18;
      puVar5[6] = 0x11;
      *(undefined8*)( puVar5 + 8 ) = 0;
      *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar5[10] = 6;
         LAB_0010af27:StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
         if (*(char**)( puVar5 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(char**)( puVar5 + 4 ) = local_68;
         }
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_a0);
         puVar5[10] = 6;
         if (puVar5[6] == 0x11) goto LAB_0010af27;
         StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_98);
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
         StringName::unref();
      }
      goto LAB_0010add8;
   }
   local_80 = 0;
   local_90._0_8_ = 0;
   local_90._8_8_ = 0;
   local_78 = 0;
   local_70 = 6;
   local_a8 = 0;
   local_b0 = 0;
   String::parse_latin1((String*)&local_b0, "");
   local_b8 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_b0 == 0) {
      LAB_0010ae08:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010ae08;
      StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
      if (local_60._8_8_ == local_a0) {
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_a0;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }
   local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
   if (local_90._0_8_ != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      local_90._0_8_ = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
   }
   if (local_90._8_8_ != local_60._8_8_) {
      StringName::unref();
      local_90._8_8_ = local_60._8_8_;
      local_60._8_8_ = 0;
   }
   local_80 = CONCAT44(local_80._4_4_, local_50);
   if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      local_78 = local_48;
      local_48 = 0;
   }
   local_70 = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   uVar4 = local_90._8_8_;
   uVar3 = local_90._0_8_;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_90._8_8_;
   local_90 = auVar2 << 0x40;
   *puVar5 = (undefined4)local_98;
   *(undefined8*)( puVar5 + 2 ) = uVar3;
   *(undefined8*)( puVar5 + 4 ) = uVar4;
   puVar5[6] = (undefined4)local_80;
   *(long*)( puVar5 + 8 ) = local_78;
   puVar5[10] = local_70;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   LAB_0010add8:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar5;
}/* MethodBindTRC<Ref<OpenXRInteractionProfile>, String>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<OpenXRInteractionProfile>,String>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   char *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX != 0) {
      local_a0 = 0;
      local_60._8_8_ = local_60._0_8_;
      local_60._0_8_ = 0x18;
      local_68 = "OpenXRInteractionProfile";
      String::parse_latin1((StrRange*)&local_a0);
      local_a8 = 0;
      *puVar5 = 0x18;
      puVar5[6] = 0x11;
      *(undefined8*)( puVar5 + 8 ) = 0;
      *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar5[10] = 6;
         LAB_0010b2d7:StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
         if (*(char**)( puVar5 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(char**)( puVar5 + 4 ) = local_68;
         }
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_a0);
         puVar5[10] = 6;
         if (puVar5[6] == 0x11) goto LAB_0010b2d7;
         StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_98);
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
         StringName::unref();
      }
      goto LAB_0010b188;
   }
   local_80 = 0;
   local_90._0_8_ = 0;
   local_90._8_8_ = 0;
   local_78 = 0;
   local_70 = 6;
   local_a8 = 0;
   local_b0 = 0;
   String::parse_latin1((String*)&local_b0, "");
   local_b8 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 4);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_b0 == 0) {
      LAB_0010b1b8:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010b1b8;
      StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
      if (local_60._8_8_ == local_a0) {
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_a0;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }
   local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
   if (local_90._0_8_ != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      local_90._0_8_ = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
   }
   if (local_90._8_8_ != local_60._8_8_) {
      StringName::unref();
      local_90._8_8_ = local_60._8_8_;
      local_60._8_8_ = 0;
   }
   local_80 = CONCAT44(local_80._4_4_, local_50);
   if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      local_78 = local_48;
      local_48 = 0;
   }
   local_70 = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   uVar4 = local_90._8_8_;
   uVar3 = local_90._0_8_;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_90._8_8_;
   local_90 = auVar2 << 0x40;
   *puVar5 = (undefined4)local_98;
   *(undefined8*)( puVar5 + 2 ) = uVar3;
   *(undefined8*)( puVar5 + 4 ) = uVar4;
   puVar5[6] = (undefined4)local_80;
   *(long*)( puVar5 + 8 ) = local_78;
   puVar5[10] = local_70;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   LAB_0010b188:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar5;
}/* MethodBindTRC<Ref<OpenXRActionSet>, String>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<OpenXRActionSet>,String>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   undefined8 uVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   char *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX != 0) {
      local_a0 = 0;
      local_60._8_8_ = local_60._0_8_;
      local_60._0_8_ = 0xf;
      local_68 = "OpenXRActionSet";
      String::parse_latin1((StrRange*)&local_a0);
      local_a8 = 0;
      *puVar6 = 0x18;
      puVar6[6] = 0x11;
      *(undefined8*)( puVar6 + 8 ) = 0;
      *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar6[10] = 6;
         LAB_0010b6a7:StringName::StringName((StringName*)&local_68, (String*)( puVar6 + 8 ), false);
         if (*(char**)( puVar6 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(char**)( puVar6 + 4 ) = local_68;
         }
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar6 + 8 ), (CowData*)&local_a0);
         puVar6[10] = 6;
         if (puVar6[6] == 0x11) goto LAB_0010b6a7;
         StringName::operator =((StringName*)( puVar6 + 4 ), (StringName*)&local_98);
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
         StringName::unref();
      }
      goto LAB_0010b550;
   }
   local_80 = 0;
   local_90._0_8_ = 0;
   local_90._8_8_ = 0;
   local_78 = 0;
   local_70 = 6;
   local_a8 = 0;
   local_b0 = 0;
   local_68 = "";
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._0_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 4);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_b0 == 0) {
      LAB_0010b588:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010b588;
      StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
      if (local_60._8_8_ == local_a0) {
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_a0;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }
   local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
   if (local_90._0_8_ != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      local_90._0_8_ = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
   }
   if (local_90._8_8_ != local_60._8_8_) {
      StringName::unref();
      local_90._8_8_ = local_60._8_8_;
      local_60._8_8_ = 0;
   }
   local_80 = CONCAT44(local_80._4_4_, local_50);
   if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      local_78 = local_48;
      local_48 = 0;
   }
   local_70 = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   uVar5 = local_90._8_8_;
   uVar4 = local_90._0_8_;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_90._8_8_;
   local_90 = auVar3 << 0x40;
   *puVar6 = (undefined4)local_98;
   *(undefined8*)( puVar6 + 2 ) = uVar4;
   *(undefined8*)( puVar6 + 4 ) = uVar5;
   puVar6[6] = (undefined4)local_80;
   *(long*)( puVar6 + 8 ) = local_78;
   puVar6[10] = local_70;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   LAB_0010b550:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar6;
}/* MethodBindT<Array>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Array>::_gen_argument_type_info(int param_1) {
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
   if (in_EDX != 0) goto LAB_0010b779;
   local_78 = 0;
   local_68 = &_LC10;
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
      LAB_0010b875:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010b875;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
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
   LAB_0010b779:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar5;
}/* MethodBindT<Ref<OpenXRActionSet> >::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<OpenXRActionSet>>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
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
   undefined1 local_60[16];
   int local_50;
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
   if (in_EDX != 0) goto LAB_0010b9e9;
   local_78 = 0;
   local_68 = "OpenXRActionSet";
   local_80 = 0;
   local_60._0_8_ = 0xf;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010bba5:local_40 = 6;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 == 0x11) goto LAB_0010bba5;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
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
   puVar4[6] = local_50;
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
   LAB_0010b9e9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar4;
}/* MethodBindT<Ref<OpenXRInteractionProfile> >::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<OpenXRInteractionProfile>>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
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
   undefined1 local_60[16];
   int local_50;
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
   if (in_EDX != 0) goto LAB_0010bc59;
   local_78 = 0;
   local_68 = "OpenXRInteractionProfile";
   local_80 = 0;
   local_60._0_8_ = 0x18;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010be15:local_40 = 6;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 == 0x11) goto LAB_0010be15;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
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
   puVar4[6] = local_50;
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
   LAB_0010bc59:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar4;
}/* MethodBind* create_method_bind<OpenXRActionMap, Array>(void (OpenXRActionMap::*)(Array)) */MethodBind *create_method_bind<OpenXRActionMap,Array>(_func_void_Array *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00112f08;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "OpenXRActionMap";
   local_30 = 0xf;
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
}/* MethodBind* create_method_bind<OpenXRActionMap, Array>(Array (OpenXRActionMap::*)() const) */MethodBind *create_method_bind<OpenXRActionMap,Array>(_func_Array *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00112f68;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "OpenXRActionMap";
   local_30 = 0xf;
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
}/* MethodBind* create_method_bind<OpenXRActionMap, int>(int (OpenXRActionMap::*)() const) */MethodBind *create_method_bind<OpenXRActionMap,int>(_func_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00112fc8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "OpenXRActionMap";
   local_30 = 0xf;
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
}/* MethodBind* create_method_bind<OpenXRActionMap, Ref<OpenXRActionSet>,
   String>(Ref<OpenXRActionSet> (OpenXRActionMap::*)(String) const) */MethodBind *create_method_bind<OpenXRActionMap,Ref<OpenXRActionSet>,String>(_func_Ref_String *param_1) {
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
   *(_func_Ref_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113028;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "OpenXRActionMap";
   local_30 = 0xf;
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
}/* MethodBind* create_method_bind<OpenXRActionMap, Ref<OpenXRActionSet>, int>(Ref<OpenXRActionSet>
   (OpenXRActionMap::*)(int) const) */MethodBind *create_method_bind<OpenXRActionMap,Ref<OpenXRActionSet>,int>(_func_Ref_int *param_1) {
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
   *(_func_Ref_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113088;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "OpenXRActionMap";
   local_30 = 0xf;
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
}/* MethodBind* create_method_bind<OpenXRActionMap, Ref<OpenXRActionSet> >(void
   (OpenXRActionMap::*)(Ref<OpenXRActionSet>)) */MethodBind *create_method_bind<OpenXRActionMap,Ref<OpenXRActionSet>>(_func_void_Ref *param_1) {
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
   *(_func_void_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001130e8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "OpenXRActionMap";
   local_30 = 0xf;
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
}/* MethodBind* create_method_bind<OpenXRActionMap, Ref<OpenXRInteractionProfile>,
   String>(Ref<OpenXRInteractionProfile> (OpenXRActionMap::*)(String) const) */MethodBind *create_method_bind<OpenXRActionMap,Ref<OpenXRInteractionProfile>,String>(_func_Ref_String *param_1) {
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
   *(_func_Ref_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113148;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "OpenXRActionMap";
   local_30 = 0xf;
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
}/* MethodBind* create_method_bind<OpenXRActionMap, Ref<OpenXRInteractionProfile>,
   int>(Ref<OpenXRInteractionProfile> (OpenXRActionMap::*)(int) const) */MethodBind *create_method_bind<OpenXRActionMap,Ref<OpenXRInteractionProfile>,int>(_func_Ref_int *param_1) {
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
   *(_func_Ref_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001131a8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "OpenXRActionMap";
   local_30 = 0xf;
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
}/* MethodBind* create_method_bind<OpenXRActionMap, Ref<OpenXRInteractionProfile> >(void
   (OpenXRActionMap::*)(Ref<OpenXRInteractionProfile>)) */MethodBind *create_method_bind<OpenXRActionMap,Ref<OpenXRInteractionProfile>>(_func_void_Ref *param_1) {
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
   *(_func_void_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113208;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "OpenXRActionMap";
   local_30 = 0xf;
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
}/* MethodBind* create_method_bind<OpenXRActionMap>(void (OpenXRActionMap::*)()) */MethodBind *create_method_bind<OpenXRActionMap>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00113268;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "OpenXRActionMap";
   local_30 = 0xf;
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
}/* OpenXRActionMap::_initialize_classv() */void OpenXRActionMap::_initialize_classv(void)

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
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
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
        if ((code *)PTR__bind_methods_00117008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRActionMap";
    local_70 = 0;
    local_50 = 0xf;
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



/* Ref<OpenXRActionSet>::unref() */

void __thiscall Ref<OpenXRActionSet>::unref(Ref<OpenXRActionSet> *this)

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



/* Ref<OpenXRInteractionProfile>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall
Ref<OpenXRInteractionProfile>::operator=(Ref<OpenXRInteractionProfile> *this,Variant *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)this;
  if (pOVar1 == pOVar3) {
    return;
  }
  if (pOVar3 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)
             __dynamic_cast(pOVar3,&Object::typeinfo,&OpenXRInteractionProfile::typeinfo,0);
    if (pOVar1 == pOVar3) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* Ref<OpenXRInteractionProfile>::unref() */

void __thiscall Ref<OpenXRInteractionProfile>::unref(Ref<OpenXRInteractionProfile> *this)

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



/* Ref<OpenXRAction>::unref() */

void __thiscall Ref<OpenXRAction>::unref(Ref<OpenXRAction> *this)

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



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

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
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
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
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
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
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010d3e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
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
  if (lVar9 == 0) goto LAB_0010d3e0;
  uVar8 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar8) {
        if (lVar9 != lVar5) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    }
    goto LAB_0010d436;
  }
  if (lVar9 == lVar5) {
LAB_0010d35b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010d436:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010d2cf;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010d35b;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0010d2cf:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<Ref<OpenXRIPBinding> >::_unref() */

void __thiscall CowData<Ref<OpenXRIPBinding>>::_unref(CowData<Ref<OpenXRIPBinding>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0010d49d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0010d49d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010d6b8) */
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
      _err_print_error(&_LC176,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010da00;
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
LAB_0010da00:
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
      goto LAB_0010de0f;
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
                    /* WARNING: Could not recover jumptable at 0x0010dcb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010de0f:
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
      goto LAB_0010dfcf;
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
                    /* WARNING: Could not recover jumptable at 0x0010de76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010dfcf:
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
      _err_print_error(&_LC176,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e130;
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
LAB_0010e130:
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
      goto LAB_0010e344;
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
LAB_0010e344:
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
      goto LAB_0010e4f3;
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
LAB_0010e4f3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Array>::call
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
      _err_print_error(&_LC176,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e730;
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
      (*(code *)pVVar2)((Array *)&local_58);
      Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
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
LAB_0010e730:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Array>::validated_call
          (MethodBindTRC<Array> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x10d888;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e959;
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
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010e959:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Array>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Array>::ptrcall
          (MethodBindTRC<Array> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x10d888;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010eb2a;
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
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010eb2a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Array>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant *pVVar2;
  code *pcVar3;
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
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ecfc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_48,(Array *)(*(long *)param_3 + 8));
  (*pcVar3)((long *)((long)param_2 + lVar1),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010ecfc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Array>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
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
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010eee9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_48,*param_3);
  (*pcVar3)((long *)((long)param_2 + lVar1),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010eee9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OpenXRInteractionProfile> >::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Ref<OpenXRInteractionProfile>>::validated_call
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
      local_58 = (Object *)0x10d888;
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
      goto LAB_0010f178;
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
LAB_0010f136:
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
      pOVar4 = (Object *)
               __dynamic_cast(pOVar4,&Object::typeinfo,&OpenXRInteractionProfile::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0010f136;
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
LAB_0010f178:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OpenXRInteractionProfile> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<OpenXRInteractionProfile>>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x10d888;
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
      goto LAB_0010f43c;
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
LAB_0010f418:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0010f418;
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
LAB_0010f43c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OpenXRInteractionProfile>, String>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTRC<Ref<OpenXRInteractionProfile>,String>::ptrcall
          (MethodBindTRC<Ref<OpenXRInteractionProfile>,String> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char cVar2;
  Object *pOVar3;
  long *plVar4;
  code *pcVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = 0x35;
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
      goto LAB_0010f6d0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + lVar1) + -1);
  }
  local_48 = (char *)0x0;
  if (*(long *)*param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)*param_2);
  }
  (*pcVar5)(&local_50,param_1 + lVar1,(CowData<char32_t> *)&local_48);
  if (local_50 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 != (Object *)0x0) {
      *(undefined8 *)param_3 = 0;
      goto LAB_0010f709;
    }
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(local_50,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 != pOVar3) {
      *(Object **)param_3 = pOVar3;
      if (pOVar3 == (Object *)0x0) {
        if (pOVar6 != (Object *)0x0) goto LAB_0010f709;
      }
      else {
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *(undefined8 *)param_3 = 0;
        }
        if (pOVar6 != (Object *)0x0) {
LAB_0010f709:
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar6);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
        }
        if (local_50 == (Object *)0x0) goto LAB_0010f6c8;
      }
    }
    cVar2 = RefCounted::unreference();
    pOVar6 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
  }
LAB_0010f6c8:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010f6d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OpenXRInteractionProfile>, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<OpenXRInteractionProfile>,int>::ptrcall
          (MethodBindTRC<Ref<OpenXRInteractionProfile>,int> *this,Object *param_1,void **param_2,
          void *param_3)

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
      local_48 = (Object *)0x10d888;
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
      goto LAB_0010f9a9;
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
    if (pOVar5 == (Object *)0x0) goto LAB_0010f9a9;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010f9f1;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010f9f1;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010f9f1:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010f9a9;
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
LAB_0010f9a9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OpenXRActionSet> >::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<OpenXRActionSet>>::validated_call
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
      local_58 = (Object *)0x10d888;
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
      goto LAB_0010fcc8;
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
LAB_0010fc86:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&OpenXRActionSet::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0010fc86;
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
LAB_0010fcc8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OpenXRActionSet> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<OpenXRActionSet>>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x10d888;
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
      goto LAB_0010ff8c;
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
LAB_0010ff68:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0010ff68;
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
LAB_0010ff8c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OpenXRActionSet>, String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<OpenXRActionSet>,String>::ptrcall
          (MethodBindTRC<Ref<OpenXRActionSet>,String> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char cVar2;
  Object *pOVar3;
  long *plVar4;
  code *pcVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = 0x35;
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
      goto LAB_00110220;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + lVar1) + -1);
  }
  local_48 = (char *)0x0;
  if (*(long *)*param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)*param_2);
  }
  (*pcVar5)(&local_50,param_1 + lVar1,(CowData<char32_t> *)&local_48);
  if (local_50 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 != (Object *)0x0) {
      *(undefined8 *)param_3 = 0;
      goto LAB_00110259;
    }
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(local_50,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 != pOVar3) {
      *(Object **)param_3 = pOVar3;
      if (pOVar3 == (Object *)0x0) {
        if (pOVar6 != (Object *)0x0) goto LAB_00110259;
      }
      else {
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *(undefined8 *)param_3 = 0;
        }
        if (pOVar6 != (Object *)0x0) {
LAB_00110259:
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar6);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
        }
        if (local_50 == (Object *)0x0) goto LAB_00110218;
      }
    }
    cVar2 = RefCounted::unreference();
    pOVar6 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
  }
LAB_00110218:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_00110220:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OpenXRActionSet>, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<OpenXRActionSet>,int>::ptrcall
          (MethodBindTRC<Ref<OpenXRActionSet>,int> *this,Object *param_1,void **param_2,
          void *param_3)

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
      local_48 = (Object *)0x10d888;
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
      goto LAB_001104f9;
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
    if (pOVar5 == (Object *)0x0) goto LAB_001104f9;
    *(undefined8 *)param_3 = 0;
    goto LAB_00110541;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00110541;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00110541:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001104f9;
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
LAB_001104f9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<OpenXRInteractionProfile> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<OpenXRInteractionProfile>>::call
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
      _err_print_error(&_LC176,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110830;
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
      if (in_R8D != 1) goto LAB_00110880;
LAB_00110870:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00110880:
        uVar6 = 4;
        goto LAB_00110825;
      }
      if (in_R8D == 1) goto LAB_00110870;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x18);
    uVar4 = _LC181;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_48 = (char *)0x0;
    Ref<OpenXRInteractionProfile>::operator=((Ref<OpenXRInteractionProfile> *)&local_48,pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),
                       (Ref<OpenXRInteractionProfile> *)&local_48);
    Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00110825:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00110830:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OpenXRActionSet>, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<OpenXRActionSet>,int>::call
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
  Object *local_68;
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
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10d888;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC176,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00110b90;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00110be0;
LAB_00110bd0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00110be0:
        uVar7 = 4;
        goto LAB_00110b85;
      }
      if (in_R8D == 1) goto LAB_00110bd0;
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
    uVar4 = _LC183;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)((Ref<OpenXRActionSet> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),
                       iVar6);
    Variant::Variant((Variant *)local_58,local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_00110b85:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00110b90:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Ref<OpenXRInteractionProfile>, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<OpenXRInteractionProfile>,int>::call
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
  Object *local_68;
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
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10d888;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC176,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00110f30;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00110f80;
LAB_00110f70:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00110f80:
        uVar7 = 4;
        goto LAB_00110f25;
      }
      if (in_R8D == 1) goto LAB_00110f70;
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
    uVar4 = _LC183;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)((Ref<OpenXRInteractionProfile> *)&local_68,
                       (Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_58,local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_00110f25:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00110f30:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Ref<OpenXRActionSet>, String>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<OpenXRActionSet>,String>::call
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
  long local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC176,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001112e0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00111330;
LAB_00111320:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00111330:
        uVar6 = 4;
        goto LAB_001112d5;
      }
      if (in_R8D == 1) goto LAB_00111320;
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
    uVar4 = _LC184;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    (*(code *)pVVar11)((Ref<OpenXRActionSet> *)&local_70,(Variant *)((long)plVar9 + (long)pVVar1),
                       (Variant *)&local_68);
    Variant::Variant((Variant *)local_58,local_70);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_001112d5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001112e0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Ref<OpenXRInteractionProfile>, String>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<OpenXRInteractionProfile>,String>::call
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
  long local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC176,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00111690;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001116e0;
LAB_001116d0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001116e0:
        uVar6 = 4;
        goto LAB_00111685;
      }
      if (in_R8D == 1) goto LAB_001116d0;
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
    uVar4 = _LC184;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    (*(code *)pVVar11)((Ref<OpenXRInteractionProfile> *)&local_70,
                       (Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_68);
    Variant::Variant((Variant *)local_58,local_70);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00111685:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00111690:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Ref<OpenXRActionSet> >::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<OpenXRActionSet>>::call
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
      local_48 = (Object *)0x10d888;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC176,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111a50;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00111a45:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00111a50;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00111aa0;
LAB_00111a90:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00111aa0:
      uVar7 = 4;
      goto LAB_00111a45;
    }
    if (in_R8D == 1) goto LAB_00111a90;
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
  uVar4 = _LC181;
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
LAB_00111bbd:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&OpenXRActionSet::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_00111bbd;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),(Ref<OpenXRActionSet> *)&local_48);
  Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_48);
LAB_00111a50:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Array>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Array>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC176,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111e00;
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
      if (in_R8D != 1) goto LAB_00111e50;
LAB_00111e40:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00111e50:
        uVar6 = 4;
        goto LAB_00111df5;
      }
      if (in_R8D == 1) goto LAB_00111e40;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1c);
    uVar4 = _LC185;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Array((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    Array::~Array((Array *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00111df5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00111e00:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OpenXRInteractionProfile>, String>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<Ref<OpenXRInteractionProfile>,String>::validated_call
          (MethodBindTRC<Ref<OpenXRInteractionProfile>,String> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  Object *local_58;
  undefined8 local_50;
  char *local_48;
  Object *local_40;
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
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      goto LAB_001120c8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + lVar1) + -1);
  }
  local_50 = 0;
  if (*(long *)(*param_2 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(*param_2 + 8));
  }
  (*pcVar4)(&local_58,param_1 + lVar1,(CowData<char32_t> *)&local_50);
  if (local_58 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_58 + 0x60);
    local_40 = local_58;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_58 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_58);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_58 + 0x140))(local_58);
        Memory::free_static(local_58,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_001120c8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OpenXRInteractionProfile>, int>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<Ref<OpenXRInteractionProfile>,int>::validated_call
          (MethodBindTRC<Ref<OpenXRInteractionProfile>,int> *this,Object *param_1,Variant **param_2,
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
      goto LAB_0011231c;
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
LAB_0011231c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OpenXRActionSet>, String>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<Ref<OpenXRActionSet>,String>::validated_call
          (MethodBindTRC<Ref<OpenXRActionSet>,String> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  Object *local_58;
  undefined8 local_50;
  char *local_48;
  Object *local_40;
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
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      goto LAB_00112598;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + lVar1) + -1);
  }
  local_50 = 0;
  if (*(long *)(*param_2 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(*param_2 + 8));
  }
  (*pcVar4)(&local_58,param_1 + lVar1,(CowData<char32_t> *)&local_50);
  if (local_58 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_58 + 0x60);
    local_40 = local_58;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_58 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_58);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_58 + 0x140))(local_58);
        Memory::free_static(local_58,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00112598:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<OpenXRActionSet>, int>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<Ref<OpenXRActionSet>,int>::validated_call
          (MethodBindTRC<Ref<OpenXRActionSet>,int> *this,Object *param_1,Variant **param_2,
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
      goto LAB_001127ec;
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
LAB_001127ec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

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
/* MethodBindT<Ref<OpenXRInteractionProfile> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<OpenXRInteractionProfile>>::~MethodBindT
          (MethodBindT<Ref<OpenXRInteractionProfile>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<OpenXRInteractionProfile>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<OpenXRInteractionProfile>,int>::~MethodBindTRC
          (MethodBindTRC<Ref<OpenXRInteractionProfile>,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<OpenXRInteractionProfile>, String>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<OpenXRInteractionProfile>,String>::~MethodBindTRC
          (MethodBindTRC<Ref<OpenXRInteractionProfile>,String> *this)

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
/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Array>::~MethodBindT() */

void __thiscall MethodBindT<Array>::~MethodBindT(MethodBindT<Array> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<OpenXRActionSet> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<OpenXRActionSet>>::~MethodBindT(MethodBindT<Ref<OpenXRActionSet>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<OpenXRActionSet>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<OpenXRActionSet>,int>::~MethodBindTRC
          (MethodBindTRC<Ref<OpenXRActionSet>,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<OpenXRActionSet>, String>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<OpenXRActionSet>,String>::~MethodBindTRC
          (MethodBindTRC<Ref<OpenXRActionSet>,String> *this)

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

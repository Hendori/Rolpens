/* ScriptInstance::call_const(StringName const&, Variant const**, int, Callable::CallError&) */StringName *ScriptInstance::call_const(StringName *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *param_2 + 0x60 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ScriptInstance::property_set_fallback(StringName const&, Variant const&, bool*) */void ScriptInstance::property_set_fallback(StringName *param_1, Variant *param_2, bool *param_3) {
   undefined1 *in_RCX;
   if (in_RCX != (undefined1*)0x0) {
      *in_RCX = 0;
   }

   return;
}
/* ScriptInstance::property_get_fallback(StringName const&, bool*) */void ScriptInstance::property_get_fallback(StringName *param_1, bool *param_2) {
   undefined1 *in_RCX;
   if (in_RCX != (undefined1*)0x0) {
      *in_RCX = 0;
   }

   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   return;
}
/* ScriptInstance::get_rpc_config() const */void ScriptInstance::get_rpc_config(void) {
   Object *pOVar1;
   char cVar2;
   long *in_RSI;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *in_RSI + 0x90 ) == PlaceHolderScriptInstance::get_script) {
      local_28 = (Object*)in_RSI[0x10];
      if (( local_28 == (Object*)0x0 ) || ( cVar2 = cVar2 == '\0' )) {
         local_28 = (Object*)0x0;
      }

   }
 else {
      ( **(code**)( *in_RSI + 0x90 ) )(&local_28);
   }

   ( **(code**)( *(long*)local_28 + 0x2e0 ) )();
   if (( ( local_28 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_28,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
   Memory::free_static(pOVar1, false);
}
if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* ScriptInstance::get_method_argument_count(StringName const&, bool*) const */undefined4 ScriptInstance::get_method_argument_count(ScriptInstance *this, StringName *param_1, bool *param_2) {
   Object *pOVar1;
   char cVar2;
   undefined4 uVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   char local_41;
   Object *local_40;
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)this + 0x90 ) == PlaceHolderScriptInstance::get_script) {
      local_40 = (Object*)0x0;
      if (*(Object**)( this + 0x80 ) != (Object*)0x0) {
         local_40 = *(Object**)( this + 0x80 );
         cVar2 = RefCounted::reference();
         if (cVar2 != '\0') goto LAB_001001b9;
         local_40 = (Object*)0x0;
      }

      LAB_00100349:if (param_2 != (bool*)0x0) {
         *param_2 = false;
         uVar3 = 0;
         LAB_001002f6:if (( ( local_40 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar4 = local_40,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
         Memory::free_static(pOVar4, false);
      }

      goto LAB_00100304;
   }

}
else{( **(code**)( *(long*)this + 0x90 ) )(&local_40);LAB_001001b9:if (local_40 == (Object*)0x0) goto LAB_00100349;do {
   local_41 = '\0';
   uVar3 = ( **(code**)( *(long*)local_40 + 0x260 ) )(local_40, param_1, &local_41);
   if (local_41 != '\0') {
      if (param_2 != (bool*)0x0) {
         *param_2 = true;
      }

      goto LAB_001002f6;
   }

   ( **(code**)( *(long*)local_40 + 0x1d8 ) )(&local_38);
   pOVar1 = local_40;
   pOVar4 = local_40;
   if (local_38 != local_40) {
      local_40 = local_38;
      if (local_38 == (Object*)0x0) {
         if (pOVar1 == (Object*)0x0) break;
         cVar2 = RefCounted::unreference();
         pOVar4 = local_38;
      }
 else {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_40 = (Object*)0x0;
         }

         pOVar4 = local_38;
         if (pOVar1 == (Object*)0x0) goto LAB_0010024b;
         cVar2 = RefCounted::unreference();
         pOVar4 = local_38;
      }

      local_38 = pOVar4;
      if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),pOVar4 = local_38,cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
         pOVar4 = local_38;
      }

   }

   LAB_0010024b:if (( ( pOVar4 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar4 = local_38,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
   Memory::free_static(pOVar4, false);
}
 while ( local_40 != (Object*)0x0 );if (param_2 != (bool*)0x0) {
   *param_2 = false;
}
}uVar3 = 0;LAB_00100304:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ScriptInstance::~ScriptInstance() */void ScriptInstance::~ScriptInstance(ScriptInstance *this) {
   return;
}
/* ScriptInstance::~ScriptInstance() */void ScriptInstance::~ScriptInstance(ScriptInstance *this) {
   operator_delete(this, 8);
   return;
}
/* ScriptInstance::get_property_state(List<Pair<StringName, Variant>, DefaultAllocator>&) */void ScriptInstance::get_property_state(ScriptInstance *this, List *param_1) {
   undefined8 uVar1;
   long *plVar2;
   char cVar3;
   StringName *this_00;
   undefined1(*pauVar4)[16];
   long lVar5;
   long in_FS_OFFSET;
   long *local_78;
   long local_70;
   long local_68;
   int local_60[2];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (long*)0x0;
   ( **(code**)( *(long*)this + 0x10 ) )();
   if (( local_78 != (long*)0x0 ) && ( lVar5 = lVar5 != 0 )) {
      LAB_0010044d:do {
         if (( *(byte*)( lVar5 + 0x28 ) & 2 ) != 0) {
            local_68 = 0;
            local_60[0] = 0;
            local_58 = (undefined1[16])0x0;
            StringName::StringName((StringName*)&local_70, (String*)( lVar5 + 8 ), false);
            if (local_68 == local_70) {
               if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_68 = local_70;
            }

            cVar3 = ( **(code**)( *(long*)this + 8 ) )(this, (StringName*)&local_68, (Variant*)local_60);
            if (cVar3 == '\0') {
               cVar3 = Variant::needs_deinit[local_60[0]];
            }
 else {
               if (*(long*)param_1 == 0) {
                  pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])param_1 = pauVar4;
                  *(undefined4*)pauVar4[1] = 0;
                  *pauVar4 = (undefined1[16])0x0;
               }

               this_00 = (StringName*)operator_new(0x38, DefaultAllocator::alloc);
               *(undefined8*)this_00 = 0;
               *(undefined4*)( this_00 + 8 ) = 0;
               *(undefined8*)( this_00 + 0x30 ) = 0;
               *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this_00 + 0x20 ) = (undefined1[16])0x0;
               StringName::operator =(this_00, (StringName*)&local_68);
               Variant::operator =((Variant*)( this_00 + 8 ), (Variant*)local_60);
               uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
               *(long*)( this_00 + 0x30 ) = *(long*)param_1;
               plVar2 = *(long**)param_1;
               *(undefined8*)( this_00 + 0x20 ) = 0;
               *(undefined8*)( this_00 + 0x28 ) = uVar1;
               if (plVar2[1] != 0) {
                  *(StringName**)( plVar2[1] + 0x20 ) = this_00;
               }

               plVar2[1] = (long)this_00;
               if (*plVar2 == 0) {
                  *plVar2 = (long)this_00;
               }

               *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
               cVar3 = Variant::needs_deinit[local_60[0]];
            }

            if (cVar3 != '\0') {
               Variant::_clear_internal();
            }

            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
               lVar5 = *(long*)( lVar5 + 0x30 );
               if (lVar5 == 0) break;
               goto LAB_0010044d;
            }

         }

         lVar5 = *(long*)( lVar5 + 0x30 );
      }
 while ( lVar5 != 0 );
   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_78);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* ScriptInstance::get_owner() */undefined8 ScriptInstance::get_owner(void) {
   return 0;
}
/* ScriptInstance::to_string(bool*) */void ScriptInstance::to_string(bool *param_1) {
   undefined1 *in_RDX;
   if (in_RDX != (undefined1*)0x0) {
      *in_RDX = 0;
   }

   for (int i = 0; i < 8; i++) {
      param_1[i] = false;
   }

   return;
}
/* ScriptInstance::refcount_incremented() */void ScriptInstance::refcount_incremented(void) {
   return;
}
/* ScriptInstance::refcount_decremented() */undefined8 ScriptInstance::refcount_decremented(void) {
   return 1;
}
/* ScriptInstance::is_placeholder() const */undefined8 ScriptInstance::is_placeholder(void) {
   return 0;
}
/* PlaceHolderScriptInstance::get_script() const */void PlaceHolderScriptInstance::get_script(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x80 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x80 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return;
   }

   do {
      pvVar2 = (void*)*plVar5;
      if (pvVar2 == (void*)0x0) {
         if ((int)plVar5[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar2 + 0x40 ) == plVar5) {
         lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         lVar3 = *(long*)( (long)pvVar2 + 0x38 );
         *plVar5 = lVar4;
         if (pvVar2 == (void*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x30 ) = lVar4;
            lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x38 ) = lVar3;
         }

         if (*(long*)( (long)pvVar2 + 0x20 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x20 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 0x20 );
               *(undefined8*)( (long)pvVar2 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         if (*(long*)( (long)pvVar2 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 8 );
               *(undefined8*)( (long)pvVar2 + 8 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         Memory::free_static(pvVar2, false);
         *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar5 = *(long**)this;
   }
 while ( (int)plVar5[2] != 0 );
   Memory::free_static(plVar5, false);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


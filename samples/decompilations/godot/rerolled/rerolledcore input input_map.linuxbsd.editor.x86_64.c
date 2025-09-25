/* void Ref<InputEvent>::TEMPNAMEPLACEHOLDERVALUE(Ref<InputEventKey> const&) [clone .isra.0] */void Ref<InputEvent>::operator =(Ref<InputEvent> *this, Ref *param_1) {
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
      pOVar3 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &InputEvent::typeinfo, 0);
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
/* List<Ref<InputEvent>, DefaultAllocator>::push_back(Ref<InputEvent> const&) [clone .isra.0] */void List<Ref<InputEvent>,DefaultAllocator>::push_back(List<Ref<InputEvent>,DefaultAllocator> *this, Ref *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   undefined1(*pauVar4)[16];
   if (*(long*)this == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   pauVar4 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
   *pauVar4 = (undefined1[16])0x0;
   pauVar4[1] = (undefined1[16])0x0;
   if (*(long*)param_1 != 0) {
      *(long*)*pauVar4 = *(long*)param_1;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
         *(undefined8*)*pauVar4 = 0;
      }

   }

   plVar1 = *(long**)this;
   lVar2 = plVar1[1];
   *(undefined8*)( *pauVar4 + 8 ) = 0;
   *(long**)( pauVar4[1] + 8 ) = plVar1;
   *(long*)pauVar4[1] = lVar2;
   if (lVar2 != 0) {
      *(undefined1(**) [16])( lVar2 + 8 ) = pauVar4;
   }

   plVar1[1] = (long)pauVar4;
   if (*plVar1 != 0) {
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      return;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   *plVar1 = (long)pauVar4;
   return;
}
/* InputMap::has_action(StringName const&) const */undefined8 InputMap::has_action(InputMap *this, StringName *param_1) {
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
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 0x180 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x1a4 ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar15 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x188 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 0x180 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x188 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
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
/* InputMap::_action_get_events(StringName const&) */StringName *InputMap::_action_get_events(StringName *param_1) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   uint uVar13;
   uint uVar14;
   long *in_RDX;
   long lVar15;
   long in_RSI;
   uint uVar16;
   uint uVar17;
   ulong uVar18;
   long in_FS_OFFSET;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array((Array*)param_1);
   local_50 = (undefined1[16])0x0;
   local_68 = "InputEvent";
   local_58 = 0;
   local_70 = 0;
   local_60 = 10;
   String::parse_latin1((StrRange*)&local_70);
   StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
   Array::set_typed((uint)param_1, (StringName*)0x18, (Variant*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   if (( *(long*)( in_RSI + 0x180 ) != 0 ) && ( *(int*)( in_RSI + 0x1a4 ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x1a0 ) * 4 );
      uVar18 = CONCAT44(0, uVar2);
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x1a0 ) * 8 );
      if (*in_RDX == 0) {
         uVar13 = StringName::get_empty_hash();
      }
 else {
         uVar13 = *(uint*)( *in_RDX + 0x20 );
      }

      if (uVar13 == 0) {
         uVar13 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar13 * lVar3;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar18;
      lVar15 = SUB168(auVar5 * auVar9, 8);
      uVar16 = *(uint*)( *(long*)( in_RSI + 0x188 ) + lVar15 * 4 );
      uVar14 = SUB164(auVar5 * auVar9, 8);
      if (uVar16 != 0) {
         uVar17 = 0;
         while (( uVar16 != uVar13 || ( *(long*)( *(long*)( *(long*)( in_RSI + 0x180 ) + lVar15 * 8 ) + 0x10 ) != *in_RDX ) )) {
            uVar17 = uVar17 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar14 + 1) * lVar3;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar18;
            lVar15 = SUB168(auVar6 * auVar10, 8);
            uVar16 = *(uint*)( *(long*)( in_RSI + 0x188 ) + lVar15 * 4 );
            uVar14 = SUB164(auVar6 * auVar10, 8);
            if (( uVar16 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar16 * lVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar18,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar2 + uVar14 ) - SUB164(auVar7 * auVar11, 8)) * lVar3,auVar12._8_8_ = 0,auVar12._0_8_ = uVar18,SUB164(auVar8 * auVar12, 8) < uVar17) goto LAB_0010054c;
         }
;
         lVar3 = *(long*)( *(long*)( in_RSI + 0x180 ) + (ulong)uVar14 * 8 );
         if (( lVar3 != 0 ) && ( puVar4 = *(undefined8**)( lVar3 + 0x20 ) ),puVar4 != (undefined8*)0x0) {
            for (puVar4 = (undefined8*)*puVar4; puVar4 != (undefined8*)0x0; puVar4 = (undefined8*)puVar4[1]) {
               Variant::Variant((Variant*)&local_58, (Object*)*puVar4);
               Array::push_back((Variant*)param_1);
               if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
               }

            }

         }

      }

   }

   LAB_0010054c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* InputMap::get_actions() const */void InputMap::get_actions(void) {
   int iVar1;
   long *plVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   StringName *this;
   undefined8 *puVar5;
   long in_RSI;
   long *in_RDI;
   iVar1 = *(int*)( in_RSI + 0x1a4 );
   *in_RDI = 0;
   if (( iVar1 != 0 ) && ( puVar5 = *(undefined8**)( in_RSI + 400 ) ),puVar5 != (undefined8*)0x0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *in_RDI = (long)pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
      do {
         this(StringName * operator_new(0x20, DefaultAllocator::alloc));
         *(undefined1(*) [16])this = (undefined1[16])0x0;
         *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
         StringName::operator =(this, (StringName*)( puVar5 + 2 ));
         plVar2 = (long*)*in_RDI;
         lVar3 = plVar2[1];
         *(undefined8*)( this + 8 ) = 0;
         *(long**)( this + 0x18 ) = plVar2;
         *(long*)( this + 0x10 ) = lVar3;
         if (lVar3 != 0) {
            *(StringName**)( lVar3 + 8 ) = this;
         }

         plVar2[1] = (long)this;
         if (*plVar2 == 0) {
            puVar5 = (undefined8*)*puVar5;
            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            *plVar2 = (long)this;
         }
 else {
            puVar5 = (undefined8*)*puVar5;
            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
         }

      }
 while ( puVar5 != (undefined8*)0x0 );
   }

   return;
}
/* InputMap::_find_event(InputMap::Action&, Ref<InputEvent> const&, bool, bool*, float*, float*,
   int*) const */undefined8 * __thiscall
InputMap::_find_event
          (InputMap *this,Action *param_1,Ref *param_2,bool param_3,bool *param_4,float *param_5,
          float *param_6,int *param_7){
   char cVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   undefined8 *puVar5;
   if (*(long*)param_2 == 0) {
      _err_print_error("_find_event", "core/input/input_map.cpp", 0xa1, "Condition \"p_event.is_null()\" is true. Returning: nullptr", 0, 0);
   }
 else if (( *(long**)( param_1 + 8 ) != (long*)0x0 ) && ( puVar5 = (undefined8*)**(long**)( param_1 + 8 ) ),puVar5 != (undefined8*)0x0) {
      iVar4 = 0;
      do {
         iVar3 = InputEvent::get_device();
         if (( ( ALL_DEVICES == iVar3 ) || ( iVar2 = InputEvent::get_device() ),iVar2 == iVar3 )) {
            if (param_7 == (int*)0x0) {
               return puVar5;
            }

            *param_7 = iVar4;
            return puVar5;
         }

         puVar5 = (undefined8*)puVar5[1];
         iVar4 = iVar4 + 1;
      }
 while ( puVar5 != (undefined8*)0x0 );
   }

   return (undefined8*)0x0;
}
/* InputMap::action_get_events(StringName const&) */long InputMap::action_get_events(InputMap *this, StringName *param_1) {
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
   uint uVar12;
   long lVar13;
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   if (*(long*)( this + 0x180 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x1a4 ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x188 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar15 = 0;
         while (( uVar11 != uVar14 || ( *(long*)( *(long*)( *(long*)( this + 0x180 ) + lVar13 * 8 ) + 0x10 ) != *(long*)param_1 ) )) {
            uVar15 = uVar15 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x188 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
            if (uVar14 == 0) {
               return 0;
            }

            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar14 * lVar2;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar16;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar16;
            if (SUB164(auVar6 * auVar10, 8) < uVar15) {
               return 0;
            }

         }
;
         lVar2 = *(long*)( *(long*)( this + 0x180 ) + (ulong)uVar12 * 8 );
         if (lVar2 != 0) {
            return lVar2 + 0x20;
         }

      }

   }

   return 0;
}
/* InputMap::get_action_map() const */InputMap * __thiscall InputMap::get_action_map(InputMap *this){
   return this + 0x178;
}
/* InputMap::get_builtin_display_name(String const&) const */String *InputMap::get_builtin_display_name(String *param_1) {
   long *plVar1;
   char *__s;
   long lVar2;
   char cVar3;
   size_t sVar4;
   String *in_RDX;
   int iVar5;
   undefined **ppuVar6;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   ppuVar6 = &_builtin_action_display_names;
   iVar5 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      cVar3 = operator == ( *ppuVar6,in_RDX );
      if (cVar3 != '\0') {
         local_50 = 0;
         local_48 = "";
         local_40 = 0;
         String::parse_latin1((StrRange*)&local_50);
         __s = ( &PTR_s_Accept_00116168 )[(long)iVar5 * 2];
         local_58 = 0;
         sVar4 = 0;
         if (__s != (char*)0x0) {
            sVar4 = strlen(__s);
         }

         local_48 = __s;
         local_40 = sVar4;
         String::parse_latin1((StrRange*)&local_58);
         RTR(param_1, (String*)&local_58);
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

         goto LAB_001009f7;
      }

      iVar5 = iVar5 + 1;
      ppuVar6 = ppuVar6 + 2;
   }
 while ( iVar5 != 0x4b );
   *(undefined8*)param_1 = 0;
   if (*(long*)in_RDX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_1, (CowData*)in_RDX);
   }

   LAB_001009f7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* InputMap::InputMap() */undefined8 InputMap::InputMap(InputMap *this) {
   undefined8 uVar1;
   bool bVar2;
   Object::Object((Object*)this);
   bVar2 = singleton == (InputMap*)0x0;
   *(undefined***)this = &PTR__initialize_classv_00115c50;
   uVar1 = _LC7;
   *(undefined1(*) [16])( this + 0x180 ) = (undefined1[16])0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 48*i + 416 ) ) = uVar1;
   }

   *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1b0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1e0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1f0 ) = (undefined1[16])0x0;
   if (bVar2) {
      singleton = this;
      return uVar1;
   }

   _err_print_error("InputMap", "core/input/input_map.cpp", 0x35e, "Condition \"singleton\" is true.", "Singleton in InputMap already exist.", 0);
   return 0;
}
/* InputMap::_get_actions() */InputMap * __thiscall InputMap::_get_actions(InputMap *this){
   StringName *pSVar1;
   long in_FS_OFFSET;
   undefined8 *local_50;
   undefined8 local_48;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array((Array*)this);
   local_48 = 0;
   local_50 = (undefined8*)0x0;
   local_40 = (undefined1[16])0x0;
   Array::set_typed((uint)this, (StringName*)0x15, (Variant*)&local_50);
   if (( StringName::configured != '\0' ) && ( local_50 != (undefined8*)0x0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_48] != '\0') {
      Variant::_clear_internal();
   }

   get_actions();
   if (( local_50 != (undefined8*)0x0 ) && ( *(int*)( local_50 + 2 ) != 0 )) {
      for (pSVar1 = (StringName*)*local_50; pSVar1 != (StringName*)0x0; pSVar1 = *(StringName**)( pSVar1 + 8 )) {
         Variant::Variant((Variant*)&local_48, pSVar1);
         Array::push_back((Variant*)this);
         if (Variant::needs_deinit[(int)local_48] != '\0') {
            Variant::_clear_internal();
         }

      }

   }

   List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* InputMap::~InputMap() */void InputMap::~InputMap(InputMap *this) {
   long *plVar1;
   uint uVar2;
   void *pvVar3;
   long lVar4;
   long lVar5;
   void *pvVar6;
   *(undefined***)this = &PTR__initialize_classv_00115c50;
   pvVar6 = *(void**)( this + 0x1e0 );
   singleton = 0;
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x204 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x200 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x204 ) = 0;
            *(undefined1(*) [16])( this + 0x1f0 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x1e8 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x1e8 ) + lVar5 ) = 0;
                  List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)( (long)pvVar6 + 0x18 ));
                  pvVar3 = *(void**)( (long)pvVar6 + 0x18 );
                  if (pvVar3 != (void*)0x0) {
                     if (*(int*)( (long)pvVar3 + 0x10 ) == 0) {
                        Memory::free_static(pvVar3, false);
                     }
 else {
                        _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                     }

                  }

                  if (*(long*)( (long)pvVar6 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar6 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar4 = *(long*)( (long)pvVar6 + 0x10 );
                        *(undefined8*)( (long)pvVar6 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x1e0 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar5 );
            *(undefined4*)( this + 0x204 ) = 0;
            *(undefined1(*) [16])( this + 0x1f0 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_00100da0;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x1e8 ), false);
   }

   LAB_00100da0:pvVar6 = *(void**)( this + 0x1b0 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x1d4 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x1d4 ) = 0;
            *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x1b8 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x1b8 ) + lVar5 ) = 0;
                  List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)( (long)pvVar6 + 0x18 ));
                  pvVar3 = *(void**)( (long)pvVar6 + 0x18 );
                  if (pvVar3 != (void*)0x0) {
                     if (*(int*)( (long)pvVar3 + 0x10 ) == 0) {
                        Memory::free_static(pvVar3, false);
                     }
 else {
                        _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                     }

                  }

                  if (*(long*)( (long)pvVar6 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar6 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar4 = *(long*)( (long)pvVar6 + 0x10 );
                        *(undefined8*)( (long)pvVar6 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x1b0 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar5 );
            *(undefined4*)( this + 0x1d4 ) = 0;
            *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_00100e96;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x1b8 ), false);
   }

   LAB_00100e96:pvVar6 = *(void**)( this + 0x180 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x1a4 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x1a4 ) = 0;
            *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x188 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x188 ) + lVar5 ) = 0;
                  List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)( (long)pvVar6 + 0x20 ));
                  pvVar3 = *(void**)( (long)pvVar6 + 0x20 );
                  if (pvVar3 != (void*)0x0) {
                     if (*(int*)( (long)pvVar3 + 0x10 ) == 0) {
                        Memory::free_static(pvVar3, false);
                     }
 else {
                        _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x180 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x1a4 ) = 0;
            *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_00100f78;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x188 ), false);
      Object::~Object((Object*)this);
      return;
   }

   LAB_00100f78:Object::~Object((Object*)this);
   return;
}
/* InputMap::~InputMap() */void InputMap::~InputMap(InputMap *this) {
   ~InputMap(this)
   ;;
   operator_delete(this, 0x208);
   return;
}
/* InputMap::add_action(StringName const&, float) */void InputMap::add_action(InputMap *this, StringName *param_1, float param_2) {
   HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>> *this_00;
   uint uVar1;
   char *__s;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   uint uVar10;
   undefined8 *puVar11;
   int *piVar12;
   long lVar13;
   int iVar14;
   long lVar15;
   uint uVar16;
   uint uVar17;
   ulong uVar18;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   void *local_50[2];
   long local_40;
   this_00 = (HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>*)( this + 0x178 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
      uVar18 = CONCAT44(0, uVar1);
      lVar13 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar10 = StringName::get_empty_hash();
      }
 else {
         uVar10 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar10 == 0) {
         uVar10 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar10 * lVar13;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar18;
      lVar15 = SUB168(auVar2 * auVar6, 8);
      uVar16 = *(uint*)( *(long*)( this + 0x188 ) + lVar15 * 4 );
      iVar14 = SUB164(auVar2 * auVar6, 8);
      if (uVar16 != 0) {
         uVar17 = 0;
         do {
            if (( uVar10 == uVar16 ) && ( lVar15 = *(long*)( *(long*)( *(long*)( this + 0x180 ) + lVar15 * 8 ) + 0x10 ) ),lVar15 == *(long*)param_1) {
               if (lVar15 == 0) {
                  LAB_001013f2:local_68 = 0;
               }
 else {
                  __s = *(char**)( lVar15 + 8 );
                  local_68 = 0;
                  if (__s == (char*)0x0) {
                     if (*(long*)( lVar15 + 0x10 ) == 0) goto LAB_001013f2;
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)( lVar15 + 0x10 ));
                  }
 else {
                     local_50[0] = (void*)strlen(__s);
                     local_58 = __s;
                     String::parse_latin1((StrRange*)&local_68);
                  }

               }

               local_60 = 0;
               local_58 = "InputMap already has action \"%s\".";
               local_50[0] = (void*)0x21;
               String::parse_latin1((StrRange*)&local_60);
               vformat<String>((CowData<char32_t>*)&local_58, (StrRange*)&local_60, (CowData<char32_t>*)&local_68);
               _err_print_error("add_action", "core/input/input_map.cpp", 0x77, "Condition \"input_map.has(p_action)\" is true.", (CowData<char32_t>*)&local_58, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               goto LAB_0010136a;
            }

            uVar17 = uVar17 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar14 + 1) * lVar13;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar18;
            lVar15 = SUB168(auVar3 * auVar7, 8);
            uVar16 = *(uint*)( *(long*)( this + 0x188 ) + lVar15 * 4 );
            iVar14 = SUB164(auVar3 * auVar7, 8);
         }
 while ( ( uVar16 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar16 * lVar13,auVar8._8_8_ = 0,auVar8._0_8_ = uVar18,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + iVar14 ) - SUB164(auVar4 * auVar8, 8)) * lVar13,auVar9._8_8_ = 0,auVar9._0_8_ = uVar18,uVar17 <= SUB164(auVar5 * auVar9, 8) );
      }

   }

   local_58 = (char*)0x0;
   local_50[0] = (void*)0x0;
   puVar11 = (undefined8*)HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>::operator [](this_00, param_1);
   *puVar11 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)( puVar11 + 1 ));
   puVar11[1] = 0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)local_50);
   if (local_50[0] != (void*)0x0) {
      if (*(int*)( (long)local_50[0] + 0x10 ) == 0) {
         Memory::free_static(local_50[0], false);
      }
 else {
         _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
      }

   }

   iVar14 = add_action(StringName_const & ::last_id);
   piVar12 = (int*)HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>::operator [](this_00, param_1);
   *piVar12 = iVar14;
   lVar13 = HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>::operator [](this_00, param_1);
   add_action(StringName_const &, float) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* InputMap::_add_action_bind_compat_97281(StringName const&, float) */void InputMap::_add_action_bind_compat_97281(InputMap *this, StringName *param_1, float param_2) {
   add_action(this, param_1, param_2);
   return;
}
/* InputMap::get_argument_options(StringName const&, int, List<String, DefaultAllocator>*) const */void InputMap::get_argument_options(InputMap *this, StringName *param_1, int param_2, List *param_3) {
   char *pcVar1;
   long *plVar2;
   long lVar3;
   char cVar4;
   List *pLVar5;
   CowData<char32_t> *this_00;
   undefined1(*pauVar6)[16];
   wchar32 wVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_78;
   long *local_70;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   lVar8 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar8 == 0) {
      local_78 = 0;
      LAB_00101494:if (param_2 != 0) goto LAB_00101499;
      LAB_00101508:cVar4 = String::operator ==((String*)&local_78, "has_action");
      if (( ( ( ( cVar4 == '\0' ) && ( cVar4 = String::operator ==((String*)&local_78, "erase_action") ),cVar4 == '\0' ) ) && ( cVar4 = String::operator ==((String*)&local_78, "action_set_deadzone") ),cVar4 == '\0' )) {
         cVar4 = String::operator ==((String*)&local_78, "action_erase_events");
         goto joined_r0x00101852;
      }

   }
 else {
      pcVar1 = *(char**)( lVar8 + 8 );
      local_78 = 0;
      if (pcVar1 != (char*)0x0) {
         local_50 = strlen(pcVar1);
         local_58 = pcVar1;
         String::parse_latin1((StrRange*)&local_78);
         goto LAB_00101494;
      }

      if (*(long*)( lVar8 + 0x10 ) == 0) goto LAB_00101494;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)( lVar8 + 0x10 ));
      if (param_2 == 0) goto LAB_00101508;
      LAB_00101499:if (param_2 != 1) goto LAB_001014a3;
      cVar4 = String::operator ==((String*)&local_78, "event_is_action");
      joined_r0x00101852:if (cVar4 == '\0') goto LAB_001014a3;
   }

   local_70 = (long*)0x0;
   pLVar5 = (List*)ProjectSettings::get_singleton();
   Object::get_property_list(pLVar5, SUB81((List<PropertyInfo,DefaultAllocator>*)&local_70, 0));
   if (( local_70 != (long*)0x0 ) && ( lVar8 = lVar8 != 0 )) {
      do {
         cVar4 = String::begins_with((char*)( lVar8 + 8 ));
         if (cVar4 != '\0') {
            wVar7 = (wchar32)(char*)( lVar8 + 8 );
            String::find_char(wVar7, 0x2f);
            String::substr((int)&local_68, wVar7);
            local_58 = "\"";
            local_60 = 0;
            local_50 = 1;
            String::parse_latin1((StrRange*)&local_60);
            String::quote((String*)&local_58);
            if (*(long*)param_3 == 0) {
               pauVar6 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])param_3 = pauVar6;
               *(undefined4*)pauVar6[1] = 0;
               *pauVar6 = (undefined1[16])0x0;
            }

            this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
            *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
            *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
            if (local_58 != (char*)0x0) {
               CowData<char32_t>::_ref(this_00, (CowData*)&local_58);
            }

            pcVar1 = local_58;
            plVar2 = *(long**)param_3;
            lVar3 = plVar2[1];
            *(undefined8*)( this_00 + 8 ) = 0;
            *(long**)( this_00 + 0x18 ) = plVar2;
            *(long*)( this_00 + 0x10 ) = lVar3;
            if (lVar3 != 0) {
               *(CowData<char32_t>**)( lVar3 + 8 ) = this_00;
            }

            plVar2[1] = (long)this_00;
            if (*plVar2 == 0) {
               *plVar2 = (long)this_00;
            }

            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar2 = (long*)( local_58 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar1 + -0x10, false);
               }

            }

            lVar3 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar2 = (long*)( local_60 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            lVar3 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar2 = (long*)( local_68 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

         }

         lVar8 = *(long*)( lVar8 + 0x30 );
      }
 while ( lVar8 != 0 );
   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_70);
   LAB_001014a3:Object::get_argument_options((StringName*)this, (int)param_1, (List*)(ulong)(uint)param_2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* InputMap::suggest_actions(StringName const&) const */StringName *InputMap::suggest_actions(StringName *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   StringName *in_RDX;
   StringName *pSVar6;
   long in_FS_OFFSET;
   bool bVar7;
   float fVar8;
   float local_98;
   long *local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   get_actions();
   local_70 = 0;
   if (local_78 == (long*)0x0) {
      local_98 = 0.0;
   }
 else {
      pSVar6 = (StringName*)*local_78;
      local_98 = 0.0;
      if (pSVar6 != (StringName*)0x0) {
         LAB_001018fd:do {
            lVar2 = *(long*)pSVar6;
            if (lVar2 == 0) {
               local_68 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar2 + 8 );
               local_68 = 0;
               if (pcVar3 == (char*)0x0) {
                  plVar1 = (long*)( *(long*)( lVar2 + 0x10 ) + -0x10 );
                  if (*(long*)( lVar2 + 0x10 ) != 0) {
                     do {
                        lVar4 = *plVar1;
                        if (lVar4 == 0) goto LAB_0010193c;
                        LOCK();
                        lVar5 = *plVar1;
                        bVar7 = lVar4 == lVar5;
                        if (bVar7) {
                           *plVar1 = lVar4 + 1;
                           lVar5 = lVar4;
                        }

                        UNLOCK();
                     }
 while ( !bVar7 );
                     if (lVar5 != -1) {
                        local_68 = *(long*)( lVar2 + 0x10 );
                     }

                  }

               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_68);
               }

            }

            LAB_0010193c:lVar2 = *(long*)in_RDX;
            if (lVar2 == 0) {
               local_60 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar2 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  plVar1 = (long*)( *(long*)( lVar2 + 0x10 ) + -0x10 );
                  if (*(long*)( lVar2 + 0x10 ) != 0) {
                     do {
                        lVar4 = *plVar1;
                        if (lVar4 == 0) goto LAB_0010197c;
                        LOCK();
                        lVar5 = *plVar1;
                        bVar7 = lVar4 == lVar5;
                        if (bVar7) {
                           *plVar1 = lVar4 + 1;
                           lVar5 = lVar4;
                        }

                        UNLOCK();
                     }
 while ( !bVar7 );
                     if (lVar5 != -1) {
                        local_60 = *(long*)( lVar2 + 0x10 );
                     }

                  }

               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            LAB_0010197c:fVar8 = (float)String::similarity((String*)&local_68);
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

            lVar2 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            if (fVar8 <= local_98) {
               pSVar6 = *(StringName**)( pSVar6 + 8 );
               if (pSVar6 == (StringName*)0x0) break;
               goto LAB_001018fd;
            }

            StringName::operator =((StringName*)&local_70, pSVar6);
            pSVar6 = *(StringName**)( pSVar6 + 8 );
            local_98 = fVar8;
         }
 while ( pSVar6 != (StringName*)0x0 );
      }

   }

   StringName::StringName((StringName*)&local_60, in_RDX);
   local_58 = "The InputMap action \"%s\" doesn\'t exist.";
   local_68 = 0;
   local_50 = 0x27;
   String::parse_latin1((StrRange*)&local_68);
   vformat<StringName>(param_1, (StrRange*)&local_68, (StringName*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   if (__LC44 <= (double)local_98) {
      StringName::StringName((StringName*)&local_60, (StringName*)&local_70);
      local_58 = " Did you mean \"%s\"?";
      local_68 = 0;
      local_50 = 0x13;
      String::parse_latin1((StrRange*)&local_68);
      vformat<StringName>((CowData<char32_t>*)&local_58, (StrRange*)&local_68, (StringName*)&local_60);
      String::operator +=((String*)param_1, (String*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      if (StringName::configured == '\0') goto LAB_00101ab7;
      if (local_60 != 0) {
         StringName::unref();
         goto LAB_00101a9a;
      }

   }
 else {
      LAB_00101a9a:if (StringName::configured == '\0') goto LAB_00101ab7;
   }

   if (local_70 != 0) {
      StringName::unref();
   }

   LAB_00101ab7:List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_78);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* InputMap::erase_action(StringName const&) */void InputMap::erase_action(InputMap *this, StringName *param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   long lVar6;
   long lVar7;
   undefined8 uVar8;
   void *pvVar9;
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
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   ulong uVar38;
   uint uVar39;
   int iVar40;
   long lVar41;
   ulong uVar42;
   ulong uVar43;
   uint uVar44;
   ulong uVar45;
   long lVar46;
   ulong uVar47;
   uint uVar48;
   uint uVar49;
   ulong uVar50;
   long *plVar51;
   uint *puVar52;
   long in_FS_OFFSET;
   StringName local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
      uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
      lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar39 = StringName::get_empty_hash();
      }
 else {
         uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar42 = CONCAT44(0, uVar5);
      lVar46 = *(long*)( this + 0x188 );
      if (uVar39 == 0) {
         uVar39 = 1;
      }

      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar39 * lVar6;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar42;
      lVar41 = SUB168(auVar10 * auVar24, 8);
      uVar44 = *(uint*)( lVar46 + lVar41 * 4 );
      iVar40 = SUB164(auVar10 * auVar24, 8);
      if (uVar44 != 0) {
         uVar48 = 0;
         do {
            if (( uVar39 == uVar44 ) && ( lVar41 = *(long*)( *(long*)( *(long*)( this + 0x180 ) + lVar41 * 8 ) + 0x10 ) ),lVar41 == *(long*)param_1) {
               if (( *(long*)( this + 0x180 ) == 0 ) || ( *(int*)( this + 0x1a4 ) == 0 )) goto LAB_00101fb5;
               uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
               uVar42 = CONCAT44(0, uVar5);
               lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
               if (lVar41 == 0) {
                  uVar39 = StringName::get_empty_hash();
                  lVar46 = *(long*)( this + 0x188 );
               }
 else {
                  uVar39 = *(uint*)( lVar41 + 0x20 );
               }

               if (uVar39 == 0) {
                  uVar39 = 1;
               }

               auVar14._8_8_ = 0;
               auVar14._0_8_ = (ulong)uVar39 * lVar6;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar42;
               lVar41 = SUB168(auVar14 * auVar28, 8);
               uVar44 = *(uint*)( lVar46 + lVar41 * 4 );
               uVar48 = SUB164(auVar14 * auVar28, 8);
               if (uVar44 == 0) goto LAB_00101fb5;
               uVar49 = 0;
               goto LAB_00101e11;
            }

            uVar48 = uVar48 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )(iVar40 + 1) * lVar6;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar42;
            lVar41 = SUB168(auVar11 * auVar25, 8);
            uVar44 = *(uint*)( lVar46 + lVar41 * 4 );
            iVar40 = SUB164(auVar11 * auVar25, 8);
         }
 while ( ( uVar44 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar44 * lVar6,auVar26._8_8_ = 0,auVar26._0_8_ = uVar42,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar5 + iVar40 ) - SUB164(auVar12 * auVar26, 8)) * lVar6,auVar27._8_8_ = 0,auVar27._0_8_ = uVar42,uVar48 <= SUB164(auVar13 * auVar27, 8) );
      }

   }

   suggest_actions(local_48);
   _err_print_error("erase_action", "core/input/input_map.cpp", 0x80, "Condition \"!input_map.has(p_action)\" is true.", local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
   goto LAB_00101fb5;
   while (true) {
      uVar49 = uVar49 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(uVar48 + 1) * lVar6;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar42;
      lVar41 = SUB168(auVar15 * auVar29, 8);
      uVar44 = *(uint*)( lVar46 + lVar41 * 4 );
      uVar48 = SUB164(auVar15 * auVar29, 8);
      if (( uVar44 == 0 ) || ( auVar16._8_8_ = 0 ),auVar16._0_8_ = (ulong)uVar44 * lVar6,auVar30._8_8_ = 0,auVar30._0_8_ = uVar42,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( uVar5 + uVar48 ) - SUB164(auVar16 * auVar30, 8)) * lVar6,auVar31._8_8_ = 0,auVar31._0_8_ = uVar42,SUB164(auVar17 * auVar31, 8) < uVar49) break;
      LAB_00101e11:uVar43 = (ulong)uVar48;
      if (( uVar39 == uVar44 ) && ( lVar7 = *(long*)( this + 0x180 ) * (long*)( *(long*)( lVar7 + lVar41 * 8 ) + 0x10 ) == *(long*)param_1 )) {
         uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
         uVar50 = CONCAT44(0, uVar5);
         lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
         auVar18._8_8_ = 0;
         auVar18._0_8_ = ( ulong )(uVar48 + 1) * lVar6;
         auVar32._8_8_ = 0;
         auVar32._0_8_ = uVar50;
         uVar42 = SUB168(auVar18 * auVar32, 8);
         puVar52 = (uint*)( lVar46 + uVar42 * 4 );
         uVar39 = SUB164(auVar18 * auVar32, 8);
         uVar47 = ( ulong ) * puVar52;
         if (( *puVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = uVar47 * lVar6,auVar33._8_8_ = 0,auVar33._0_8_ = uVar50,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar5 + uVar39 ) - SUB164(auVar19 * auVar33, 8)) * lVar6,auVar34._8_8_ = 0,auVar34._0_8_ = uVar50,uVar38 = (ulong)uVar39,uVar45 = uVar43,SUB164(auVar20 * auVar34, 8) != 0) {
            while (true) {
               uVar43 = uVar38;
               puVar1 = (uint*)( lVar46 + uVar45 * 4 );
               *puVar52 = *puVar1;
               puVar2 = (undefined8*)( lVar7 + uVar42 * 8 );
               *puVar1 = (uint)uVar47;
               puVar3 = (undefined8*)( lVar7 + uVar45 * 8 );
               uVar8 = *puVar2;
               *puVar2 = *puVar3;
               *puVar3 = uVar8;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = ( ulong )((int)uVar43 + 1) * lVar6;
               auVar37._8_8_ = 0;
               auVar37._0_8_ = uVar50;
               uVar42 = SUB168(auVar23 * auVar37, 8);
               puVar52 = (uint*)( lVar46 + uVar42 * 4 );
               uVar47 = ( ulong ) * puVar52;
               if (( *puVar52 == 0 ) || ( auVar21._8_8_ = 0 ),auVar21._0_8_ = uVar47 * lVar6,auVar35._8_8_ = 0,auVar35._0_8_ = uVar50,auVar22._8_8_ = 0,auVar22._0_8_ = ( ulong )(( SUB164(auVar23 * auVar37, 8) + uVar5 ) - SUB164(auVar21 * auVar35, 8)) * lVar6,auVar36._8_8_ = 0,auVar36._0_8_ = uVar50,SUB164(auVar22 * auVar36, 8) == 0) break;
               uVar38 = uVar42 & 0xffffffff;
               uVar45 = uVar43;
            }
;
         }

         plVar4 = (long*)( lVar7 + uVar43 * 8 );
         *(undefined4*)( lVar46 + uVar43 * 4 ) = 0;
         plVar51 = (long*)*plVar4;
         if (*(long**)( this + 400 ) == plVar51) {
            *(long*)( this + 400 ) = *plVar51;
            plVar51 = (long*)*plVar4;
         }

         if (*(long**)( this + 0x198 ) == plVar51) {
            *(long*)( this + 0x198 ) = plVar51[1];
            plVar51 = (long*)*plVar4;
         }

         if ((long*)plVar51[1] != (long*)0x0) {
            *(long*)plVar51[1] = *plVar51;
            plVar51 = (long*)*plVar4;
         }

         if (*plVar51 != 0) {
            *(long*)( *plVar51 + 8 ) = plVar51[1];
            plVar51 = (long*)*plVar4;
         }

         List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)( plVar51 + 4 ));
         pvVar9 = (void*)plVar51[4];
         if (pvVar9 != (void*)0x0) {
            if (*(int*)( (long)pvVar9 + 0x10 ) == 0) {
               Memory::free_static(pvVar9, false);
            }
 else {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            }

         }

         if (( StringName::configured != '\0' ) && ( plVar51[2] != 0 )) {
            StringName::unref();
         }

         Memory::free_static(plVar51, false);
         *(undefined8*)( *(long*)( this + 0x180 ) + uVar43 * 8 ) = 0;
         *(int*)( this + 0x1a4 ) = *(int*)( this + 0x1a4 ) + -1;
         break;
      }

   }
;
   LAB_00101fb5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* InputMap::action_get_deadzone(StringName const&) */void InputMap::action_get_deadzone(InputMap *this, StringName *param_1) {
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
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   StringName aSStack_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x188 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar15 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 0x180 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>::operator []((HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>*)( this + 0x178 ), param_1);
               goto LAB_001021e3;
            }

            uVar15 = uVar15 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x188 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar15 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   suggest_actions(aSStack_48);
   _err_print_error("action_get_deadzone", "core/input/input_map.cpp", 0xb9, "Condition \"!input_map.has(p_action)\" is true. Returning: 0.0f", aSStack_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)aSStack_48);
   LAB_001021e3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* InputMap::action_set_deadzone(StringName const&, float) */void InputMap::action_set_deadzone(InputMap *this, StringName *param_1, float param_2) {
   uint uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   uint uVar10;
   long lVar11;
   int iVar12;
   long lVar13;
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   StringName local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar11 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar10 = StringName::get_empty_hash();
      }
 else {
         uVar10 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar10 == 0) {
         uVar10 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar10 * lVar11;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar16;
      lVar13 = SUB168(auVar2 * auVar6, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x188 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar2 * auVar6, 8);
      if (uVar14 != 0) {
         uVar15 = 0;
         do {
            if (( uVar10 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 0x180 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               lVar11 = HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>::operator []((HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>*)( this + 0x178 ), param_1);
               *(float*)( lVar11 + 4 ) = param_2;
               goto LAB_001023a1;
            }

            uVar15 = uVar15 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar12 + 1) * lVar11;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar16;
            lVar13 = SUB168(auVar3 * auVar7, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x188 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar3 * auVar7, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar14 * lVar11,auVar8._8_8_ = 0,auVar8._0_8_ = uVar16,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar4 * auVar8, 8)) * lVar11,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,uVar15 <= SUB164(auVar5 * auVar9, 8) );
      }

   }

   suggest_actions(local_48);
   _err_print_error("action_set_deadzone", "core/input/input_map.cpp", 0xbf, "Condition \"!input_map.has(p_action)\" is true.", local_48, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
   LAB_001023a1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* InputMap::action_add_event(StringName const&, Ref<InputEvent> const&) */void InputMap::action_add_event(InputMap *this, StringName *param_1, Ref *param_2) {
   uint uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   uint uVar10;
   Action *pAVar11;
   long lVar12;
   int iVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   StringName local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)param_2 == 0) {
      _err_print_error("action_add_event", "core/input/input_map.cpp", 0xc5, "Condition \"p_event.is_null()\" is true.", "It\'s not a reference to a valid InputEvent object.", 0, 0);
   }
 else {
      if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
         uVar17 = CONCAT44(0, uVar1);
         lVar12 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar10 = StringName::get_empty_hash();
         }
 else {
            uVar10 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar10 == 0) {
            uVar10 = 1;
         }

         auVar2._8_8_ = 0;
         auVar2._0_8_ = (ulong)uVar10 * lVar12;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = uVar17;
         lVar14 = SUB168(auVar2 * auVar6, 8);
         uVar15 = *(uint*)( *(long*)( this + 0x188 ) + lVar14 * 4 );
         iVar13 = SUB164(auVar2 * auVar6, 8);
         if (uVar15 != 0) {
            uVar16 = 0;
            do {
               if (( uVar10 == uVar15 ) && ( *(long*)( *(long*)( *(long*)( this + 0x180 ) + lVar14 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  pAVar11 = (Action*)HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>::operator []((HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>*)( this + 0x178 ), param_1);
                  lVar12 = _find_event(this, pAVar11, param_2, true, (bool*)0x0, (float*)0x0, (float*)0x0, (int*)0x0);
                  if (lVar12 != 0) goto LAB_00102619;
                  lVar12 = HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>::operator []((HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>*)( this + 0x178 ), param_1);
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)( lVar12 + 8 ), param_2);
                     return;
                  }

                  goto LAB_00102685;
               }

               uVar16 = uVar16 + 1;
               auVar3._8_8_ = 0;
               auVar3._0_8_ = ( ulong )(iVar13 + 1) * lVar12;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = uVar17;
               lVar14 = SUB168(auVar3 * auVar7, 8);
               uVar15 = *(uint*)( *(long*)( this + 0x188 ) + lVar14 * 4 );
               iVar13 = SUB164(auVar3 * auVar7, 8);
            }
 while ( ( uVar15 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar15 * lVar12,auVar8._8_8_ = 0,auVar8._0_8_ = uVar17,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + iVar13 ) - SUB164(auVar4 * auVar8, 8)) * lVar12,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,uVar16 <= SUB164(auVar5 * auVar9, 8) );
         }

      }

      suggest_actions(local_48);
      _err_print_error("action_add_event", "core/input/input_map.cpp", 0xc6, "Condition \"!input_map.has(p_action)\" is true.", local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
   }

   LAB_00102619:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102685:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* InputMap::load_from_project_settings() */void InputMap::load_from_project_settings(InputMap *this) {
   String *pSVar1;
   long *plVar2;
   uint uVar3;
   void *pvVar4;
   void *pvVar5;
   long lVar6;
   Object *pOVar7;
   char cVar8;
   int iVar9;
   List *pLVar10;
   Object *pOVar11;
   Variant *this_00;
   long lVar12;
   Object *pOVar13;
   int iVar14;
   long in_FS_OFFSET;
   float local_b8;
   long *local_a8;
   long local_a0;
   Variant local_98[8];
   Variant local_90[8];
   Object *local_88;
   long local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
      lVar12 = 0;
      uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
      if (uVar3 != 0) {
         do {
            if (*(int*)( *(long*)( this + 0x188 ) + lVar12 ) != 0) {
               *(int*)( *(long*)( this + 0x188 ) + lVar12 ) = 0;
               pvVar4 = *(void**)( *(long*)( this + 0x180 ) + lVar12 * 2 );
               List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)( (long)pvVar4 + 0x20 ));
               pvVar5 = *(void**)( (long)pvVar4 + 0x20 );
               if (pvVar5 != (void*)0x0) {
                  if (*(int*)( (long)pvVar5 + 0x10 ) == 0) {
                     Memory::free_static(pvVar5, false);
                  }
 else {
                     _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  }

               }

               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar4 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar4, false);
               *(undefined8*)( *(long*)( this + 0x180 ) + lVar12 * 2 ) = 0;
            }

            lVar12 = lVar12 + 4;
         }
 while ( lVar12 != (ulong)uVar3 << 2 );
      }

      *(undefined4*)( this + 0x1a4 ) = 0;
      *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
   }

   local_a8 = (long*)0x0;
   pLVar10 = (List*)ProjectSettings::get_singleton();
   Object::get_property_list(pLVar10, SUB81((List<PropertyInfo,DefaultAllocator>*)&local_a8, 0));
   if (local_a8 == (long*)0x0) {
      LAB_00102b75:List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_a8);
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   lVar12 = *local_a8;
   joined_r0x001027d3:if (lVar12 != 0) {
      do {
         pSVar1 = (String*)( lVar12 + 8 );
         cVar8 = String::begins_with((char*)pSVar1);
         if (cVar8 != '\0') {
            String::find_char((wchar32)pSVar1, 0x2f);
            String::substr((int)(String*)&local_a0, (wchar32)pSVar1);
            ProjectSettings::get_singleton();
            StringName::StringName((StringName*)&local_80, pSVar1, false);
            ProjectSettings::get_setting_with_override((StringName*)local_58);
            Variant::operator_cast_to_Dictionary(local_98);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

            Variant::Variant((Variant*)local_78, "deadzone");
            cVar8 = Dictionary::has(local_98);
            local_b8 = 0.2;
            if (cVar8 != '\0') {
               Variant::Variant((Variant*)local_58, "deadzone");
               this_00 = (Variant*)Dictionary::operator [](local_98);
               local_b8 = Variant::operator_cast_to_float(this_00);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }

            if (Variant::needs_deinit[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }

            Variant::Variant((Variant*)local_58, "events");
            Dictionary::operator [](local_98);
            Variant::operator_cast_to_Array(local_90);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            StringName::StringName((StringName*)&local_80, (String*)&local_a0, false);
            add_action(this, (StringName*)&local_80, local_b8);
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

            for (iVar14 = 0; iVar9 = Array::size(),iVar14 < iVar9; iVar14 = iVar14 + 1) {
               Array::operator []((int)local_90);
               local_88 = (Object*)0x0;
               pOVar11 = (Object*)Variant::get_validated_object();
               pOVar7 = local_88;
               pOVar13 = pOVar7;
               if (pOVar11 == local_88) {
                  LAB_001029bb:if (pOVar13 != (Object*)0x0) {
                     StringName::StringName((StringName*)&local_80, (String*)&local_a0, false);
                     action_add_event(this, (StringName*)&local_80, (Ref*)&local_88);
                     if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                        StringName::unref();
                     }

                     if (( ( local_88 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),pOVar7 = local_88,cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar7 + 0x140 ))(pOVar7);
                     Memory::free_static(pOVar7, false);
                  }

               }

            }

            else if = (pOVar11 == (Object*)0x0);
            {
               if (local_88 != (Object*)0x0) {
                  local_88 = (Object*)0x0;
                  LAB_001029a6:cVar8 = RefCounted::unreference();
                  pOVar13 = local_88;
                  if (cVar8 != '\0') {
                     LAB_00102ab0:cVar8 = predelete_handler(pOVar7);
                     pOVar13 = local_88;
                     if (cVar8 != '\0') {
                        ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                        Memory::free_static(pOVar7, false);
                        pOVar13 = local_88;
                     }

                  }

                  goto LAB_001029bb;
               }

            }

            else{pOVar11 = (Object*)__dynamic_cast(pOVar11, &Object::typeinfo, &InputEvent::typeinfo, 0);
            if (pOVar7 == pOVar11) goto LAB_001029bb;
            local_88 = pOVar11;
            if (pOVar11 != (Object*)0x0) {
               cVar8 = RefCounted::reference();
               if (cVar8 == '\0') {
                  local_88 = (Object*)0x0;
                  goto LAB_001029a1;
               }

               pOVar13 = local_88;
               if (( pOVar7 == (Object*)0x0 ) || ( cVar8 = RefCounted::unreference() ),pOVar13 = local_88,cVar8 == '\0') goto LAB_001029bb;
               goto LAB_00102ab0;
            }

            LAB_001029a1:if (pOVar7 != (Object*)0x0) goto LAB_001029a6;
         }

      }
 while ( true );
   }

   goto LAB_00102b75;
   code_r0x00102b49:local_a0 = 0;
   Memory::free_static((void*)( lVar6 + -0x10 ), false);
   lVar12 = *(long*)( lVar12 + 0x30 );
   goto joined_r0x001027d3;
}
/* InputMap::action_has_event(StringName const&, Ref<InputEvent> const&) */bool InputMap::action_has_event(InputMap *this, StringName *param_1, Ref *param_2) {
   uint uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   uint uVar10;
   Action *pAVar11;
   long lVar12;
   int iVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   bool bVar18;
   StringName local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
      uVar17 = CONCAT44(0, uVar1);
      lVar12 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar10 = StringName::get_empty_hash();
      }
 else {
         uVar10 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar10 == 0) {
         uVar10 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar10 * lVar12;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar17;
      lVar14 = SUB168(auVar2 * auVar6, 8);
      uVar15 = *(uint*)( *(long*)( this + 0x188 ) + lVar14 * 4 );
      iVar13 = SUB164(auVar2 * auVar6, 8);
      if (uVar15 != 0) {
         uVar16 = 0;
         do {
            if (( uVar10 == uVar15 ) && ( *(long*)( *(long*)( *(long*)( this + 0x180 ) + lVar14 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               pAVar11 = (Action*)HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>::operator []((HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>*)( this + 0x178 ), param_1);
               lVar12 = _find_event(this, pAVar11, param_2, true, (bool*)0x0, (float*)0x0, (float*)0x0, (int*)0x0);
               bVar18 = lVar12 != 0;
               goto LAB_00102de1;
            }

            uVar16 = uVar16 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar13 + 1) * lVar12;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar17;
            lVar14 = SUB168(auVar3 * auVar7, 8);
            uVar15 = *(uint*)( *(long*)( this + 0x188 ) + lVar14 * 4 );
            iVar13 = SUB164(auVar3 * auVar7, 8);
         }
 while ( ( uVar15 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar15 * lVar12,auVar8._8_8_ = 0,auVar8._0_8_ = uVar17,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + iVar13 ) - SUB164(auVar4 * auVar8, 8)) * lVar12,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,uVar16 <= SUB164(auVar5 * auVar9, 8) );
      }

   }

   suggest_actions(local_48);
   _err_print_error("action_has_event", "core/input/input_map.cpp", 0xcf, "Condition \"!input_map.has(p_action)\" is true. Returning: false", local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
   bVar18 = false;
   LAB_00102de1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar18;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* InputMap::action_erase_events(StringName const&) */void InputMap::action_erase_events(InputMap *this, StringName *param_1) {
   uint uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   uint uVar10;
   long lVar11;
   int iVar12;
   long lVar13;
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   StringName aSStack_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar11 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar10 = StringName::get_empty_hash();
      }
 else {
         uVar10 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar10 == 0) {
         uVar10 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar10 * lVar11;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar16;
      lVar13 = SUB168(auVar2 * auVar6, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x188 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar2 * auVar6, 8);
      if (uVar14 != 0) {
         uVar15 = 0;
         do {
            if (( uVar10 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 0x180 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               lVar11 = HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>::operator []((HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>*)( this + 0x178 ), param_1);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)( lVar11 + 8 ));
                  return;
               }

               goto LAB_0010303d;
            }

            uVar15 = uVar15 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar12 + 1) * lVar11;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar16;
            lVar13 = SUB168(auVar3 * auVar7, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x188 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar3 * auVar7, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar14 * lVar11,auVar8._8_8_ = 0,auVar8._0_8_ = uVar16,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar4 * auVar8, 8)) * lVar11,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,uVar15 <= SUB164(auVar5 * auVar9, 8) );
      }

   }

   suggest_actions(aSStack_48);
   _err_print_error("action_erase_events", "core/input/input_map.cpp", 0xe1, "Condition \"!input_map.has(p_action)\" is true.", aSStack_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)aSStack_48);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010303d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* InputMap::event_get_action_status(Ref<InputEvent> const&, StringName const&, bool, bool*, float*,
   float*, int*) const */bool InputMap::event_get_action_status(InputMap *this, Ref *param_1, StringName *param_2, bool param_3, bool *param_4, float *param_5, float *param_6, int *param_7) {
   uint uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   char cVar10;
   int iVar11;
   uint uVar12;
   Object *pOVar13;
   long lVar14;
   uint uVar15;
   long lVar16;
   uint uVar17;
   uint uVar18;
   ulong uVar19;
   long in_FS_OFFSET;
   bool bVar20;
   float fVar21;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
      uVar19 = CONCAT44(0, uVar1);
      lVar14 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
      if (*(long*)param_2 == 0) {
         uVar12 = StringName::get_empty_hash();
      }
 else {
         uVar12 = *(uint*)( *(long*)param_2 + 0x20 );
      }

      if (uVar12 == 0) {
         uVar12 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar12 * lVar14;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar19;
      lVar16 = SUB168(auVar2 * auVar6, 8);
      uVar17 = *(uint*)( *(long*)( this + 0x188 ) + lVar16 * 4 );
      uVar15 = SUB164(auVar2 * auVar6, 8);
      if (uVar17 != 0) {
         uVar18 = 0;
         while (( uVar17 != uVar12 || ( *(long*)( *(long*)( *(long*)( this + 0x180 ) + lVar16 * 8 ) + 0x10 ) != *(long*)param_2 ) )) {
            uVar18 = uVar18 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(uVar15 + 1) * lVar14;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar19;
            lVar16 = SUB168(auVar3 * auVar7, 8);
            uVar17 = *(uint*)( *(long*)( this + 0x188 ) + lVar16 * 4 );
            uVar15 = SUB164(auVar3 * auVar7, 8);
            if (( uVar17 == 0 ) || ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar17 * lVar14,auVar8._8_8_ = 0,auVar8._0_8_ = uVar19,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + uVar15 ) - SUB164(auVar4 * auVar8, 8)) * lVar14,auVar9._8_8_ = 0,auVar9._0_8_ = uVar19,SUB164(auVar5 * auVar9, 8) < uVar18) goto LAB_001032d8;
         }
;
         lVar14 = *(long*)( *(long*)( this + 0x180 ) + (ulong)uVar15 * 8 );
         if (lVar14 != 0) {
            if (*(long*)param_1 != 0) {
               pOVar13 = (Object*)__dynamic_cast(*(long*)param_1, &Object::typeinfo, &InputEventAction::typeinfo, 0);
               if (pOVar13 != (Object*)0x0) {
                  cVar10 = RefCounted::reference();
                  if (cVar10 != '\0') {
                     bVar20 = (bool)InputEvent::is_pressed();
                     if (param_4 != (bool*)0x0) {
                        *param_4 = bVar20;
                     }

                     fVar21 = 0.0;
                     if (bVar20 != false) {
                        fVar21 = (float)InputEventAction::get_strength();
                     }

                     if (param_5 != (float*)0x0) {
                        *param_5 = fVar21;
                     }

                     if (param_6 != (float*)0x0) {
                        *param_6 = fVar21;
                     }

                     if (param_7 != (int*)0x0) {
                        iVar11 = InputEventAction::get_event_index();
                        if (iVar11 < 0) {
                           iVar11 = 0;
                           if (*(long*)( lVar14 + 0x20 ) != 0) {
                              iVar11 = *(int*)( *(long*)( lVar14 + 0x20 ) + 0x10 );
                           }

                           *param_7 = iVar11;
                        }
 else {
                           iVar11 = InputEventAction::get_event_index();
                           *param_7 = iVar11;
                        }

                     }

                     InputEventAction::get_action();
                     lVar14 = *(long*)param_2;
                     if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                        StringName::unref();
                     }

                     cVar10 = RefCounted::unreference();
                     if (cVar10 != '\0') {
                        cVar10 = predelete_handler(pOVar13);
                        if (cVar10 != '\0') {
                           ( **(code**)( *(long*)pOVar13 + 0x140 ) )(pOVar13);
                           Memory::free_static(pOVar13, false);
                        }

                     }

                     bVar20 = local_48 == lVar14;
                     goto LAB_001031fb;
                  }

               }

            }

            lVar14 = _find_event(this, (Action*)( lVar14 + 0x18 ), param_1, param_3, param_4, param_5, param_6, param_7);
            bVar20 = lVar14 != 0;
            goto LAB_001031fb;
         }

      }

   }

   LAB_001032d8:suggest_actions((StringName*)&local_48);
   _err_print_error("event_get_action_status", "core/input/input_map.cpp", 0x107, "Condition \"!E\" is true. Returning: false", (StringName*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   bVar20 = false;
   LAB_001031fb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar20;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* InputMap::event_is_action(Ref<InputEvent> const&, StringName const&, bool) const */void InputMap::event_is_action(InputMap *this, Ref *param_1, StringName *param_2, bool param_3) {
   event_get_action_status(this, param_1, param_2, param_3, (bool*)0x0, (float*)0x0, (float*)0x0, (int*)0x0);
   return;
}
/* InputMap::event_get_index(Ref<InputEvent> const&, StringName const&, bool) const */int InputMap::event_get_index(InputMap *this, Ref *param_1, StringName *param_2, bool param_3) {
   char cVar1;
   int iVar2;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_14 = -1;
   cVar1 = event_get_action_status(this, param_1, param_2, param_3, (bool*)0x0, (float*)0x0, (float*)0x0, &local_14);
   iVar2 = local_14;
   if (cVar1 == '\0') {
      iVar2 = -1;
   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
/* InputMap::_bind_compatibility_methods() */void InputMap::_bind_compatibility_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   long *plVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_a8[2];
   long *local_98;
   Variant *local_88;
   char *pcStack_80;
   undefined8 local_78;
   Variant **local_68;
   char **ppcStack_60;
   undefined8 local_50;
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = 0;
   ppcStack_60 = &pcStack_80;
   local_88 = (Variant*)0x10a349;
   pcStack_80 = "deadzone";
   local_68 = &local_88;
   D_METHODP((char*)local_a8, (char***)"add_action", (uint)(Variant*)&local_68);
   Variant::Variant((Variant*)&local_68, _LC74);
   local_48 = (undefined1[16])0x0;
   local_50 = 0;
   local_88 = (Variant*)&local_68;
   pMVar4 = create_method_bind<InputMap,StringName_const&,float>(_add_action_bind_compat_97281);
   ClassDB::bind_methodfi(1, pMVar4, true, (MethodDefinition*)local_a8, &local_88, 1);
   if (Variant::needs_deinit[(int)local_50] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_98;
   if (local_98 != (long*)0x0) {
      LOCK();
      plVar5 = local_98 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_98 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_98[-1];
         local_98 = (long*)0x0;
         if (lVar1 != 0) {
            lVar6 = 0;
            plVar5 = plVar3;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar1 != lVar6 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* InputMap::_bind_methods() */void InputMap::_bind_methods(void) {
   char cVar1;
   long lVar2;
   code *pcVar3;
   undefined *puVar4;
   long *plVar5;
   MethodBind *pMVar6;
   uint uVar7;
   long *plVar8;
   long lVar9;
   long in_FS_OFFSET;
   long local_168[2];
   long *local_158;
   char *local_148;
   undefined8 local_140;
   undefined *local_138;
   char *pcStack_130;
   undefined8 local_128;
   undefined *local_118;
   char *pcStack_110;
   undefined8 local_108;
   undefined *local_f8;
   char *pcStack_f0;
   undefined8 local_e8;
   undefined *local_d8;
   char *pcStack_d0;
   undefined8 local_c8;
   Variant *local_b8;
   char *pcStack_b0;
   undefined8 local_a8;
   Variant *local_98;
   undefined *puStack_90;
   char *local_88;
   undefined8 local_80;
   Variant **local_78;
   undefined1 auStack_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   puVar4 = PTR__LC73_00116610;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_140 = 0;
   local_148 = "action";
   local_78 = (Variant**)&local_148;
   uVar7 = (uint)(Variant*)&local_78;
   D_METHODP((char*)local_168, (char***)"has_action", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<InputMap,bool,StringName_const&>(has_action);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_158;
   if (local_158 != (long*)0x0) {
      LOCK();
      plVar8 = local_158 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_158 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_158[-1];
         local_158 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_168[0] != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)local_168, (char***)"get_actions", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<InputMap,TypedArray<StringName>>(_get_actions);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_158;
   if (local_158 != (long*)0x0) {
      LOCK();
      plVar8 = local_158 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_158 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_158[-1];
         local_158 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_168[0] != 0 )) {
      StringName::unref();
   }

   local_a8 = 0;
   local_b8 = (Variant*)puVar4;
   pcStack_b0 = "deadzone";
   auStack_70._0_8_ = &pcStack_b0;
   local_78 = &local_b8;
   D_METHODP((char*)local_168, (char***)"add_action", uVar7);
   Variant::Variant((Variant*)&local_78, _LC50);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_b8 = (Variant*)&local_78;
   pMVar6 = create_method_bind<InputMap,StringName_const&,float>(add_action);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_168, &local_b8, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_158;
   if (local_158 != (long*)0x0) {
      LOCK();
      plVar8 = local_158 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_158 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_158[-1];
         local_158 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_168[0] != 0 )) {
      StringName::unref();
   }

   local_b8 = (Variant*)0x10a349;
   pcStack_b0 = (char*)0x0;
   local_78 = &local_b8;
   D_METHODP((char*)local_168, (char***)"erase_action", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<InputMap,StringName_const&>(erase_action);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_158;
   if (local_158 != (long*)0x0) {
      LOCK();
      plVar8 = local_158 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_158 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_158[-1];
         local_158 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_168[0] != 0 )) {
      StringName::unref();
   }

   local_c8 = 0;
   local_d8 = puVar4;
   pcStack_d0 = "deadzone";
   auStack_70._0_8_ = &pcStack_d0;
   local_78 = (Variant**)&local_d8;
   D_METHODP((char*)local_168, (char***)"action_set_deadzone", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<InputMap,StringName_const&,float>(action_set_deadzone);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_158;
   if (local_158 != (long*)0x0) {
      LOCK();
      plVar8 = local_158 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_158 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_158[-1];
         local_158 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_168[0] != 0 )) {
      StringName::unref();
   }

   local_b8 = (Variant*)0x10a349;
   pcStack_b0 = (char*)0x0;
   local_78 = &local_b8;
   D_METHODP((char*)local_168, (char***)"action_get_deadzone", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<InputMap,float,StringName_const&>(action_get_deadzone);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_158;
   if (local_158 != (long*)0x0) {
      LOCK();
      plVar8 = local_158 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_158 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_158[-1];
         local_158 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_168[0] != 0 )) {
      StringName::unref();
   }

   local_e8 = 0;
   local_f8 = puVar4;
   pcStack_f0 = "event";
   auStack_70._0_8_ = &pcStack_f0;
   local_78 = (Variant**)&local_f8;
   D_METHODP((char*)local_168, (char***)"action_add_event", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<InputMap,StringName_const&,Ref<InputEvent>const&>(action_add_event);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_158;
   if (local_158 != (long*)0x0) {
      LOCK();
      plVar8 = local_158 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_158 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_158[-1];
         local_158 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_168[0] != 0 )) {
      StringName::unref();
   }

   local_108 = 0;
   local_118 = puVar4;
   pcStack_110 = "event";
   auStack_70._0_8_ = &pcStack_110;
   local_78 = (Variant**)&local_118;
   D_METHODP((char*)local_168, (char***)"action_has_event", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<InputMap,bool,StringName_const&,Ref<InputEvent>const&>(action_has_event);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_158;
   if (local_158 != (long*)0x0) {
      LOCK();
      plVar8 = local_158 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_158 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_158[-1];
         local_158 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_168[0] != 0 )) {
      StringName::unref();
   }

   local_128 = 0;
   local_138 = puVar4;
   pcStack_130 = "event";
   auStack_70._0_8_ = &pcStack_130;
   local_78 = (Variant**)&local_138;
   D_METHODP((char*)local_168, (char***)"action_erase_event", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<InputMap,StringName_const&,Ref<InputEvent>const&>(action_erase_event);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_158;
   if (local_158 != (long*)0x0) {
      LOCK();
      plVar8 = local_158 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_158 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_158[-1];
         local_158 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_168[0] != 0 )) {
      StringName::unref();
   }

   local_b8 = (Variant*)0x10a349;
   pcStack_b0 = (char*)0x0;
   local_78 = &local_b8;
   D_METHODP((char*)local_168, (char***)"action_erase_events", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<InputMap,StringName_const&>(action_erase_events);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_158;
   if (local_158 != (long*)0x0) {
      LOCK();
      plVar8 = local_158 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_158 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_158[-1];
         local_158 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_168[0] != 0 )) {
      StringName::unref();
   }

   local_b8 = (Variant*)0x10a349;
   pcStack_b0 = (char*)0x0;
   local_78 = &local_b8;
   D_METHODP((char*)local_168, (char***)"action_get_events", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<InputMap,TypedArray<InputEvent>,StringName_const&>(_action_get_events);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_158;
   if (local_158 != (long*)0x0) {
      LOCK();
      plVar8 = local_158 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_158 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_158[-1];
         local_158 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_168[0] != 0 )) {
      StringName::unref();
   }

   local_80 = 0;
   local_88 = "exact_match";
   local_98 = (Variant*)0x10a350;
   puStack_90 = puVar4;
   auStack_70._8_8_ = &local_88;
   auStack_70._0_8_ = &puStack_90;
   local_78 = &local_98;
   D_METHODP((char*)local_168, (char***)"event_is_action", uVar7);
   Variant::Variant((Variant*)&local_78, false);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar6 = create_method_bind<InputMap,bool,Ref<InputEvent>const&,StringName_const&,bool>(event_is_action);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_168, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_158;
   if (local_158 != (long*)0x0) {
      LOCK();
      plVar8 = local_158 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_158 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_158[-1];
         local_158 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_168[0] != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)local_168, (char***)"load_from_project_settings", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<InputMap>(load_from_project_settings);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_158;
   if (local_158 != (long*)0x0) {
      LOCK();
      plVar8 = local_158 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_158 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_158[-1];
         local_158 = (long*)0x0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar8 = plVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_168[0] != 0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* InputMap::action_erase_event(StringName const&, Ref<InputEvent> const&) */void InputMap::action_erase_event(InputMap *this, StringName *param_1, Ref *param_2) {
   uint uVar1;
   long *plVar2;
   long lVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   char cVar12;
   uint uVar13;
   Action *pAVar14;
   Ref<InputEvent> *this_00;
   long lVar15;
   StringName *pSVar16;
   int iVar17;
   long lVar18;
   uint uVar19;
   uint uVar20;
   ulong uVar21;
   long in_FS_OFFSET;
   StringName local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
      uVar21 = CONCAT44(0, uVar1);
      lVar15 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar13 = StringName::get_empty_hash();
      }
 else {
         uVar13 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar13 == 0) {
         uVar13 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar13 * lVar15;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar21;
      lVar18 = SUB168(auVar4 * auVar8, 8);
      uVar19 = *(uint*)( *(long*)( this + 0x188 ) + lVar18 * 4 );
      iVar17 = SUB164(auVar4 * auVar8, 8);
      if (uVar19 != 0) {
         uVar20 = 0;
         do {
            if (( uVar19 == uVar13 ) && ( *(long*)( *(long*)( *(long*)( this + 0x180 ) + lVar18 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               pAVar14 = (Action*)HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>::operator []((HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>*)( this + 0x178 ), param_1);
               this_00 = (Ref<InputEvent>*)_find_event(this, pAVar14, param_2, true, (bool*)0x0, (float*)0x0, (float*)0x0, (int*)0x0);
               if (this_00 == (Ref<InputEvent>*)0x0) goto LAB_00104a1d;
               lVar15 = HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>::operator []((HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>*)( this + 0x178 ), param_1);
               plVar2 = *(long**)( lVar15 + 8 );
               if (plVar2 != (long*)0x0) {
                  if (plVar2 == *(long**)( this_00 + 0x18 )) {
                     lVar18 = *(long*)( this_00 + 8 );
                     if (this_00 == (Ref<InputEvent>*)*plVar2) {
                        *plVar2 = lVar18;
                     }

                     lVar3 = *(long*)( this_00 + 0x10 );
                     if (this_00 == (Ref<InputEvent>*)plVar2[1]) {
                        plVar2[1] = lVar3;
                     }

                     if (lVar3 != 0) {
                        *(long*)( lVar3 + 8 ) = lVar18;
                        lVar18 = *(long*)( this_00 + 8 );
                     }

                     if (lVar18 != 0) {
                        *(long*)( lVar18 + 0x10 ) = lVar3;
                     }

                     Ref<InputEvent>::unref(this_00);
                     Memory::free_static(this_00, false);
                     *(int*)( plVar2 + 2 ) = (int)plVar2[2] + -1;
                  }
 else {
                     _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                  }

                  if (*(int*)( (long)*(void**)( lVar15 + 8 ) + 0x10 ) == 0) {
                     Memory::free_static(*(void**)( lVar15 + 8 ), false);
                     *(undefined8*)( lVar15 + 8 ) = 0;
                  }

               }

               pSVar16 = (StringName*)Input::get_singleton();
               cVar12 = Input::is_action_pressed(pSVar16, SUB81(param_1, 0));
               if (cVar12 == '\0') goto LAB_00104a1d;
               pSVar16 = (StringName*)Input::get_singleton();
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  Input::action_release(pSVar16);
                  return;
               }

               goto LAB_00104b1d;
            }

            uVar20 = uVar20 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(iVar17 + 1) * lVar15;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar21;
            lVar18 = SUB168(auVar5 * auVar9, 8);
            uVar19 = *(uint*)( *(long*)( this + 0x188 ) + lVar18 * 4 );
            iVar17 = SUB164(auVar5 * auVar9, 8);
         }
 while ( ( uVar19 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar19 * lVar15,auVar10._8_8_ = 0,auVar10._0_8_ = uVar21,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar1 + iVar17 ) - SUB164(auVar6 * auVar10, 8)) * lVar15,auVar11._8_8_ = 0,auVar11._0_8_ = uVar21,uVar20 <= SUB164(auVar7 * auVar11, 8) );
      }

   }

   suggest_actions(local_48);
   _err_print_error("action_erase_event", "core/input/input_map.cpp", 0xd4, "Condition \"!input_map.has(p_action)\" is true.", local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
   LAB_00104a1d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104b1d:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
/* InputMap::get_builtins() [clone .part.0] */List * __thiscall InputMap::get_builtins(InputMap *this){
   Object *pOVar1;
   char cVar2;
   long lVar3;
   bool bVar4;
   List *pLVar5;
   long in_FS_OFFSET;
   undefined8 local_58;
   Object *local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   pLVar5 = (List*)( this + 0x1a8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400005, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400006, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x20, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_accept";
   local_50 = (Object*)0x0;
   local_40 = 9;
   String::parse_latin1((StrRange*)&local_50);
   bVar4 = SUB81((Ref<InputEventKey>*)&local_50, 0);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventJoypadButton::create_reference((Ref<InputEventKey>*)&local_50, 3);
   local_48 = (char*)0x0;
   if (local_50 != (Object*)0x0) {
      lVar3 = __dynamic_cast(local_50, &Object::typeinfo, &InputEvent::typeinfo, 0);
      if (lVar3 != 0) {
         local_48 = (char*)lVar3;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_48 = (char*)0x0;
         }

      }

   }

   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x20, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_select";
   local_50 = (Object*)0x0;
   local_40 = 9;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400001, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_cancel";
   local_50 = (Object*)0x0;
   local_40 = 9;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400002, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_focus_next";
   local_50 = (Object*)0x0;
   local_40 = 0xd;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x2400002, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_focus_prev";
   local_50 = (Object*)0x0;
   local_40 = 0xd;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x40000f, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventJoypadButton::create_reference((Ref<InputEventKey>*)&local_50, 0xd);
   local_48 = (char*)0x0;
   if (local_50 != (Object*)0x0) {
      lVar3 = __dynamic_cast(local_50, &Object::typeinfo, &InputEvent::typeinfo, 0);
      if (lVar3 != 0) {
         local_48 = (char*)lVar3;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_48 = (char*)0x0;
         }

      }

   }

   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   InputEventJoypadMotion::create_reference(_LC95, (Ref<InputEventKey>*)&local_50, 0);
   local_48 = (char*)0x0;
   if (local_50 != (Object*)0x0) {
      lVar3 = __dynamic_cast(local_50, &Object::typeinfo, &InputEvent::typeinfo, 0);
      if (lVar3 != 0) {
         local_48 = (char*)lVar3;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_48 = (char*)0x0;
         }

      }

   }

   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   local_50 = (Object*)0x0;
   local_48 = "ui_left";
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400011, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventJoypadButton::create_reference((Ref<InputEventKey>*)&local_50, 0xe);
   local_48 = (char*)0x0;
   if (local_50 != (Object*)0x0) {
      lVar3 = __dynamic_cast(local_50, &Object::typeinfo, &InputEvent::typeinfo, 0);
      if (lVar3 != 0) {
         local_48 = (char*)lVar3;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_48 = (char*)0x0;
         }

      }

   }

   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   InputEventJoypadMotion::create_reference(_LC97, (Ref<InputEventKey>*)&local_50, 0);
   local_48 = (char*)0x0;
   if (local_50 != (Object*)0x0) {
      lVar3 = __dynamic_cast(local_50, &Object::typeinfo, &InputEvent::typeinfo, 0);
      if (lVar3 != 0) {
         local_48 = (char*)lVar3;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_48 = (char*)0x0;
         }

      }

   }

   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   local_50 = (Object*)0x0;
   local_48 = "ui_right";
   local_40 = 8;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400010, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventJoypadButton::create_reference((Ref<InputEventKey>*)&local_50, 0xb);
   local_48 = (char*)0x0;
   if (local_50 != (Object*)0x0) {
      lVar3 = __dynamic_cast(local_50, &Object::typeinfo, &InputEvent::typeinfo, 0);
      if (lVar3 != 0) {
         local_48 = (char*)lVar3;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_48 = (char*)0x0;
         }

      }

   }

   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   InputEventJoypadMotion::create_reference(_LC95, (Ref<InputEventKey>*)&local_50, 1);
   local_48 = (char*)0x0;
   if (local_50 != (Object*)0x0) {
      lVar3 = __dynamic_cast(local_50, &Object::typeinfo, &InputEvent::typeinfo, 0);
      if (lVar3 != 0) {
         local_48 = (char*)lVar3;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_48 = (char*)0x0;
         }

      }

   }

   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   local_50 = (Object*)0x0;
   local_48 = "ui_up";
   local_40 = 5;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400012, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventJoypadButton::create_reference((Ref<InputEventKey>*)&local_50, 0xc);
   local_48 = (char*)0x0;
   if (local_50 != (Object*)0x0) {
      lVar3 = __dynamic_cast(local_50, &Object::typeinfo, &InputEvent::typeinfo, 0);
      if (lVar3 != 0) {
         local_48 = (char*)lVar3;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_48 = (char*)0x0;
         }

      }

   }

   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   InputEventJoypadMotion::create_reference(_LC97, (Ref<InputEventKey>*)&local_50, 1);
   local_48 = (char*)0x0;
   if (local_50 != (Object*)0x0) {
      lVar3 = __dynamic_cast(local_50, &Object::typeinfo, &InputEvent::typeinfo, 0);
      if (lVar3 != 0) {
         local_48 = (char*)lVar3;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_48 = (char*)0x0;
         }

      }

   }

   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   local_50 = (Object*)0x0;
   local_48 = "ui_down";
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400013, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_page_up";
   local_50 = (Object*)0x0;
   local_40 = 10;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400014, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_page_down";
   local_50 = (Object*)0x0;
   local_40 = 0xc;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x40000d, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_home";
   local_50 = (Object*)0x0;
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x40000e, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_end";
   local_50 = (Object*)0x0;
   local_40 = 6;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1000058, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x2400008, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_cut";
   local_50 = (Object*)0x0;
   local_40 = 6;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1000043, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1400007, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_copy";
   local_50 = (Object*)0x0;
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1000056, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x2400007, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_paste";
   local_50 = (Object*)0x0;
   local_40 = 8;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x100005a, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_undo";
   local_50 = (Object*)0x0;
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x300005a, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1000059, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_redo";
   local_50 = (Object*)0x0;
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x10000020, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_completion_query";
   local_50 = (Object*)0x0;
   local_40 = 0x18;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x2400002, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x2400005, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x2400006, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_completion_accept";
   local_50 = (Object*)0x0;
   local_40 = 0x19;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400002, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400005, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400006, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_completion_replace";
   local_50 = (Object*)0x0;
   local_40 = 0x1a;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400005, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400006, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_newline";
   local_50 = (Object*)0x0;
   local_40 = 0xf;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1400005, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1400006, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_newline_blank";
   local_50 = (Object*)0x0;
   local_40 = 0x15;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x3400005, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x3400006, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_newline_above";
   local_50 = (Object*)0x0;
   local_40 = 0x15;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400002, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_indent";
   local_50 = (Object*)0x0;
   local_40 = 0xe;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x2400002, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_dedent";
   local_50 = (Object*)0x0;
   local_40 = 0xe;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400004, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x2400004, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_backspace";
   local_50 = (Object*)0x0;
   local_40 = 0x11;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1400004, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_backspace_word";
   local_50 = (Object*)0x0;
   local_40 = 0x16;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x4400004, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_backspace_word.macos";
   local_50 = (Object*)0x0;
   local_40 = 0x1c;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   local_48 = "ui_text_backspace_all_to_left";
   local_50 = (Object*)0x0;
   local_40 = 0x1d;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1400004, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_backspace_all_to_left.macos";
   local_50 = (Object*)0x0;
   local_40 = 0x23;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400008, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_delete";
   local_50 = (Object*)0x0;
   local_40 = 0xe;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1400008, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_delete_word";
   local_50 = (Object*)0x0;
   local_40 = 0x13;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x4400008, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_delete_word.macos";
   local_50 = (Object*)0x0;
   local_40 = 0x19;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   local_48 = "ui_text_delete_all_to_right";
   local_50 = (Object*)0x0;
   local_40 = 0x1b;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1400008, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_delete_all_to_right.macos";
   local_50 = (Object*)0x0;
   local_40 = 0x21;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x40000f, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_left";
   local_50 = (Object*)0x0;
   local_40 = 0x12;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x140000f, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_word_left";
   local_50 = (Object*)0x0;
   local_40 = 0x17;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x440000f, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_word_left.macos";
   local_50 = (Object*)0x0;
   local_40 = 0x1d;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400011, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_right";
   local_50 = (Object*)0x0;
   local_40 = 0x13;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1400011, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_word_right";
   local_50 = (Object*)0x0;
   local_40 = 0x18;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x4400011, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_word_right.macos";
   local_50 = (Object*)0x0;
   local_40 = 0x1e;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400010, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_up";
   local_50 = (Object*)0x0;
   local_40 = 0x10;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400012, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_down";
   local_50 = (Object*)0x0;
   local_40 = 0x12;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x40000d, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_line_start";
   local_50 = (Object*)0x0;
   local_40 = 0x18;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x10000041, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x140000f, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x40000d, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_line_start.macos";
   local_50 = (Object*)0x0;
   local_40 = 0x1e;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x40000e, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_line_end";
   local_50 = (Object*)0x0;
   local_40 = 0x16;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x10000045, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1400011, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x40000e, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_line_end.macos";
   local_50 = (Object*)0x0;
   local_40 = 0x1c;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400013, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_page_up";
   local_50 = (Object*)0x0;
   local_40 = 0x15;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400014, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_page_down";
   local_50 = (Object*)0x0;
   local_40 = 0x17;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x140000d, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_document_start";
   local_50 = (Object*)0x0;
   local_40 = 0x1c;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1400010, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x140000d, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_document_start.macos";
   local_50 = (Object*)0x0;
   local_40 = 0x22;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x140000e, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_document_end";
   local_50 = (Object*)0x0;
   local_40 = 0x1a;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1400012, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x140000e, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_document_end.macos";
   local_50 = (Object*)0x0;
   local_40 = 0x20;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x3400012, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_add_below";
   local_50 = (Object*)0x0;
   local_40 = 0x17;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x300004c, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_add_below.macos";
   local_50 = (Object*)0x0;
   local_40 = 0x1d;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x3400010, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_add_above";
   local_50 = (Object*)0x0;
   local_40 = 0x17;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x300004f, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_caret_add_above.macos";
   local_50 = (Object*)0x0;
   local_40 = 0x1d;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1400010, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_scroll_up";
   local_50 = (Object*)0x0;
   local_40 = 0x11;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x5400010, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_scroll_up.macos";
   local_50 = (Object*)0x0;
   local_40 = 0x17;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1400012, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_scroll_down";
   local_50 = (Object*)0x0;
   local_40 = 0x13;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x5400012, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_scroll_down.macos";
   local_50 = (Object*)0x0;
   local_40 = 0x19;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1000041, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_select_all";
   local_50 = (Object*)0x0;
   local_40 = 0x12;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x4000047, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_select_word_under_caret";
   local_50 = (Object*)0x0;
   local_40 = 0x1f;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x18000047, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_select_word_under_caret.macos";
   local_50 = (Object*)0x0;
   local_40 = 0x25;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1000044, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_add_selection_for_next_occurrence";
   local_50 = (Object*)0x0;
   local_40 = 0x29;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x5000044, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_skip_selection_for_next_occurrence";
   local_50 = (Object*)0x0;
   local_40 = 0x2a;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400001, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_clear_carets_and_selection";
   local_50 = (Object*)0x0;
   local_40 = 0x22;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400007, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_toggle_insert_mode";
   local_50 = (Object*)0x0;
   local_40 = 0x1a;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400042, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_menu";
   local_50 = (Object*)0x0;
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400005, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400006, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_text_submit";
   local_50 = (Object*)0x0;
   local_40 = 0xe;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x12000055, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_unicode_start";
   local_50 = (Object*)0x0;
   local_40 = 0x10;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1000044, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_graph_duplicate";
   local_50 = (Object*)0x0;
   local_40 = 0x12;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400008, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_graph_delete";
   local_50 = (Object*)0x0;
   local_40 = 0xf;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400004, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_filedialog_up_one_level";
   local_50 = (Object*)0x0;
   local_40 = 0x1a;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x400020, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_filedialog_refresh";
   local_50 = (Object*)0x0;
   local_40 = 0x15;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x48, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_filedialog_show_hidden";
   local_50 = (Object*)0x0;
   local_40 = 0x19;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = (char*)0x0;
   List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   local_58 = 0;
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);
   InputEventKey::create_reference((Ref<InputEventKey>*)&local_50, 0x1000060, 0);
   local_48 = (char*)0x0;
   Ref<InputEvent>::operator =((Ref<InputEvent>*)&local_48, (Ref*)local_50);
   List<Ref<InputEvent>,DefaultAllocator>::push_back((List<Ref<InputEvent>,DefaultAllocator>*)&local_58, (Ref*)&local_48);
   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_48);
   Ref<InputEventKey>::unref((Ref<InputEventKey>*)&local_50);
   local_48 = "ui_swap_input_direction";
   local_50 = (Object*)0x0;
   local_40 = 0x17;
   String::parse_latin1((StrRange*)&local_50);
   HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_48, pLVar5, bVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   List<Ref<InputEvent>,DefaultAllocator>::~List((List<Ref<InputEvent>,DefaultAllocator>*)&local_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pLVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* InputMap::get_builtins() */InputMap * __thiscall InputMap::get_builtins(InputMap *this){
   InputMap *pIVar1;
   if (*(int*)( this + 0x1d4 ) != 0) {
      return this + 0x1a8;
   }

   pIVar1 = (InputMap*)get_builtins(this);
   return pIVar1;
}
/* InputMap::get_builtins_with_feature_overrides_applied() [clone .part.0] */InputMap * __thiscall InputMap::get_builtins_with_feature_overrides_applied(InputMap *this){
   long *plVar1;
   CowData<char32_t> *this_00;
   int *piVar2;
   uint uVar3;
   void *pvVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   code *pcVar13;
   ulong uVar14;
   String *pSVar15;
   undefined8 uVar16;
   undefined8 uVar17;
   char cVar18;
   int iVar19;
   uint uVar20;
   String *pSVar21;
   long lVar22;
   InputMap *pIVar23;
   long lVar24;
   uint uVar25;
   long lVar26;
   int *piVar27;
   undefined8 *puVar28;
   long *plVar29;
   uint uVar30;
   long in_FS_OFFSET;
   bool bVar31;
   bool bVar32;
   long local_a0;
   long local_98;
   long local_90;
   char local_88[8];
   String *local_80;
   HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>> local_78[8];
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x1d4 ) == 0) {
      pIVar23 = (InputMap*)get_builtins(this);
   }
 else {
      pIVar23 = this + 0x1a8;
   }

   plVar29 = *(long**)( pIVar23 + 0x18 );
   local_50 = 2;
   local_70 = (undefined1[16])0x0;
   local_60 = (undefined1[16])0x0;
   if (plVar29 != (long*)0x0) {
      do {
         local_a0 = 0;
         plVar1 = (long*)( plVar29[2] + -0x10 );
         if (plVar29[2] != 0) {
            do {
               lVar22 = *plVar1;
               if (lVar22 == 0) goto LAB_00108c13;
               LOCK();
               lVar26 = *plVar1;
               bVar31 = lVar22 == lVar26;
               if (bVar31) {
                  *plVar1 = lVar22 + 1;
                  lVar26 = lVar22;
               }

               UNLOCK();
            }
 while ( !bVar31 );
            if (lVar26 != -1) {
               local_a0 = plVar29[2];
            }

         }

         LAB_00108c13:bVar31 = SUB81((CowData<char32_t>*)&local_a0, 0);
         String::split(local_88, bVar31, 0x10bfad);
         pSVar15 = local_80;
         if (local_80 == (String*)0x0) goto LAB_00108ce0;
         lVar22 = *(long*)( local_80 + -8 );
         if (lVar22 < 1) goto LAB_00108ce3;
         if (lVar22 != 1) {
            local_98 = 0;
            if (*(long*)( local_80 + 8 ) != 0) {
               plVar1 = (long*)( *(long*)( local_80 + 8 ) + -0x10 );
               do {
                  lVar22 = *plVar1;
                  if (lVar22 == 0) goto LAB_00108c91;
                  LOCK();
                  lVar26 = *plVar1;
                  bVar32 = lVar22 == lVar26;
                  if (bVar32) {
                     *plVar1 = lVar22 + 1;
                     lVar26 = lVar22;
                  }

                  UNLOCK();
               }
 while ( !bVar32 );
               if (lVar26 != -1) {
                  local_98 = *(long*)( local_80 + 8 );
               }

               LAB_00108c91:if (local_98 != 0) {
                  if (1 < *(uint*)( local_98 + -8 )) {
                     pSVar21 = (String*)OS::get_singleton();
                     cVar18 = OS::has_feature(pSVar21);
                     if (cVar18 != '\0') {
                        lVar22 = HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>::operator [](local_78, pSVar15);
                        local_90 = 0;
                        if (local_98 != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)&local_98);
                        }

                        if (*(long*)( lVar22 + 8 ) == 0) {
                           lVar26 = 1;
                        }
 else {
                           lVar26 = *(long*)( *(long*)( lVar22 + 8 ) + -8 ) + 1;
                        }

                        iVar19 = CowData<String>::resize<false>((CowData<String>*)( lVar22 + 8 ), lVar26);
                        if (iVar19 == 0) {
                           if (*(long*)( lVar22 + 8 ) == 0) {
                              lVar24 = -1;
                              lVar26 = 0;
                           }
 else {
                              lVar26 = *(long*)( *(long*)( lVar22 + 8 ) + -8 );
                              lVar24 = lVar26 + -1;
                              if (-1 < lVar24) {
                                 CowData<String>::_copy_on_write((CowData<String>*)( lVar22 + 8 ));
                                 this_00 = (CowData<char32_t>*)( *(long*)( lVar22 + 8 ) + lVar24 * 8 );
                                 if (*(long*)this_00 != local_90) {
                                    CowData<char32_t>::_ref(this_00, (CowData*)&local_90);
                                 }

                                 goto LAB_00108dd3;
                              }

                           }

                           _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar24, lVar26, "p_index", "size()", "", false, false);
                        }
 else {
                           _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                        }

                        LAB_00108dd3:CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                     }

                     if (local_98 == 0) goto LAB_00108b91;
                  }

                  lVar22 = local_98;
                  LOCK();
                  plVar1 = (long*)( local_98 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_98 = 0;
                     Memory::free_static((void*)( lVar22 + -0x10 ), false);
                  }

               }

            }

         }

         LAB_00108b91:CowData<String>::_unref((CowData<String>*)&local_80);
         lVar22 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar22 + -0x10 ), false);
            }

         }

         plVar29 = (long*)*plVar29;
      }
 while ( plVar29 != (long*)0x0 );
      plVar29 = *(long**)( pIVar23 + 0x18 );
      if (plVar29 != (long*)0x0) {
         do {
            local_a0 = 0;
            if (plVar29[2] != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)( plVar29 + 2 ));
            }

            String::split(local_88, bVar31, 0x10bfad);
            pSVar15 = local_80;
            if (local_80 == (String*)0x0) {
               LAB_00108ce0:lVar22 = 0;
               LAB_00108ce3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar22, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar13 = (code*)invalidInstructionException();
               ( *pcVar13 )();
            }

            lVar22 = *(long*)( local_80 + -8 );
            if (lVar22 < 1) goto LAB_00108ce3;
            uVar16 = local_70._0_8_;
            local_98 = 0;
            if (( lVar22 == 1 ) || ( *(long*)( local_80 + 8 ) == 0 )) {
               if (local_70._0_8_ != 0) {
                  goto joined_r0x0010902f;
               }

               LAB_00109045:HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_90, (List*)( this + 0x1d8 ), SUB81(pSVar15, 0));
            }
 else {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)( local_80 + 8 ));
               if (uVar16 != 0) {
                  joined_r0x0010902f:if (local_50._4_4_ != 0) {
                     uVar3 = *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 );
                     lVar22 = *(long*)( hash_table_size_primes_inv + ( local_50 & 0xffffffff ) * 8 );
                     uVar20 = String::hash();
                     uVar14 = CONCAT44(0, uVar3);
                     uVar17 = local_70._8_8_;
                     uVar25 = 1;
                     if (uVar20 != 0) {
                        uVar25 = uVar20;
                     }

                     auVar5._8_8_ = 0;
                     auVar5._0_8_ = (ulong)uVar25 * lVar22;
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = uVar14;
                     lVar26 = SUB168(auVar5 * auVar9, 8);
                     uVar20 = *(uint*)( local_70._8_8_ + lVar26 * 4 );
                     iVar19 = SUB164(auVar5 * auVar9, 8);
                     if (uVar20 != 0) {
                        uVar30 = 0;
                        do {
                           if (( uVar25 == uVar20 ) && ( cVar18 = String::operator ==((String*)( *(long*)( uVar16 + lVar26 * 8 ) + 0x10 ), pSVar15) ),cVar18 != '\0') {
                              if (( local_98 == 0 ) || ( *(uint*)( local_98 + -8 ) < 2 )) goto LAB_0010906a;
                              goto LAB_00108fee;
                           }

                           uVar30 = uVar30 + 1;
                           auVar6._8_8_ = 0;
                           auVar6._0_8_ = ( ulong )(iVar19 + 1) * lVar22;
                           auVar10._8_8_ = 0;
                           auVar10._0_8_ = uVar14;
                           lVar26 = SUB168(auVar6 * auVar10, 8);
                           uVar20 = *(uint*)( uVar17 + lVar26 * 4 );
                           iVar19 = SUB164(auVar6 * auVar10, 8);
                        }
 while ( ( uVar20 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar20 * lVar22,auVar11._8_8_ = 0,auVar11._0_8_ = uVar14,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar3 + iVar19 ) - SUB164(auVar7 * auVar11, 8)) * lVar22,auVar12._8_8_ = 0,auVar12._0_8_ = uVar14,uVar30 <= SUB164(auVar8 * auVar12, 8) );
                     }

                  }

               }

               if (( local_98 == 0 ) || ( *(uint*)( local_98 + -8 ) < 2 )) goto LAB_00109045;
               LAB_00108fee:pSVar21 = (String*)OS::get_singleton();
               cVar18 = OS::has_feature(pSVar21);
               if (cVar18 != '\0') goto LAB_00109045;
            }

            LAB_0010906a:CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            CowData<String>::_unref((CowData<String>*)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
            plVar29 = (long*)*plVar29;
         }
 while ( plVar29 != (long*)0x0 );
      }

      uVar16 = local_70._0_8_;
      if ((undefined8*)local_70._0_8_ != (undefined8*)0x0) {
         uVar17 = local_70._8_8_;
         if (( local_50._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) != 0 )) {
            piVar2 = (int*)( local_70._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) * 4 );
            piVar27 = (int*)local_70._8_8_;
            puVar28 = (undefined8*)local_70._0_8_;
            do {
               if (*piVar27 != 0) {
                  pvVar4 = (void*)*puVar28;
                  *piVar27 = 0;
                  CowData<String>::_unref((CowData<String>*)( (long)pvVar4 + 0x20 ));
                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar4 + 0x10 ));
                  Memory::free_static(pvVar4, false);
                  *puVar28 = 0;
               }

               piVar27 = piVar27 + 1;
               puVar28 = puVar28 + 1;
            }
 while ( piVar27 != piVar2 );
         }

         Memory::free_static((void*)uVar16, false);
         Memory::free_static((void*)uVar17, false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this + 0x1d8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* InputMap::get_builtins_with_feature_overrides_applied() */InputMap * __thiscall InputMap::get_builtins_with_feature_overrides_applied(InputMap *this){
   InputMap *pIVar1;
   if (*(int*)( this + 0x204 ) == 0) {
      pIVar1 = (InputMap*)get_builtins_with_feature_overrides_applied(this);
      return pIVar1;
   }

   return this + 0x1d8;
}
/* InputMap::load_default() */void InputMap::load_default(InputMap *this) {
   long *plVar1;
   uint uVar2;
   void *pvVar3;
   void *pvVar4;
   char cVar5;
   InputMap *pIVar6;
   long lVar7;
   Object *pOVar8;
   ulong uVar9;
   long *plVar10;
   long lVar11;
   Ref *pRVar12;
   void *pvVar13;
   undefined8 *puVar14;
   long in_FS_OFFSET;
   bool bVar15;
   long local_88;
   long local_80;
   List local_78[8];
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   pIVar6 = this + 0x1d8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x204 ) == 0) {
      pIVar6 = (InputMap*)get_builtins_with_feature_overrides_applied(this);
   }

   local_50 = 0;
   local_70 = (undefined1[16])0x0;
   uVar9 = 1;
   local_60 = (undefined1[16])0x0;
   if (5 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pIVar6 + 0x28 ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pIVar6 + 0x28 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar9 * 4 )) {
            local_50 = uVar9 & 0xffffffff;
            goto LAB_00109320;
         }

         uVar9 = uVar9 + 1;
      }
 while ( uVar9 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_00109320:if (( *(int*)( pIVar6 + 0x2c ) != 0 ) && ( plVar10 = *(long**)( pIVar6 + 0x18 ) ),plVar10 != (long*)0x0) {
      do {
         HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert((String*)&local_80, local_78, (bool)( (char)plVar10 + '\x10' ));
         plVar10 = (long*)*plVar10;
      }
 while ( plVar10 != (long*)0x0 );
      if ((long*)local_60._0_8_ != (long*)0x0) {
         plVar10 = (long*)local_60._0_8_;
         do {
            local_88 = 0;
            plVar1 = (long*)( plVar10[2] + -0x10 );
            if (plVar10[2] != 0) {
               do {
                  lVar11 = *plVar1;
                  if (lVar11 == 0) goto LAB_001093c8;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar15 = lVar11 == lVar7;
                  if (bVar15) {
                     *plVar1 = lVar11 + 1;
                     lVar7 = lVar11;
                  }

                  UNLOCK();
               }
 while ( !bVar15 );
               if (lVar7 != -1) {
                  local_88 = plVar10[2];
               }

            }

            LAB_001093c8:StringName::StringName((StringName*)&local_80, (String*)&local_88, false);
            add_action(this, (StringName*)&local_80, _LC50);
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

            if ((long*)plVar10[3] != (long*)0x0) {
               pRVar12 = *(Ref**)plVar10[3];
               joined_r0x00109417:if (pRVar12 != (Ref*)0x0) {
                  do {
                     if (( ( *(long*)pRVar12 != 0 ) && ( pOVar8 = (Object*)__dynamic_cast(*(long*)pRVar12, &Object::typeinfo, &InputEventKey::typeinfo, 0) ),pOVar8 != (Object*)0x0 )) {
                        StringName::StringName((StringName*)&local_80, (String*)&local_88, false);
                        action_add_event(this, (StringName*)&local_80, pRVar12);
                        if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                           StringName::unref();
                        }

                        cVar5 = RefCounted::unreference();
                        if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) goto code_r0x001094aa;
                     }

                     pRVar12 = *(Ref**)( pRVar12 + 8 );
                     if (pRVar12 == (Ref*)0x0) break;
                  }
 while ( true );
               }

            }

            lVar11 = local_88;
            if (local_88 != 0) {
               LOCK();
               plVar1 = (long*)( local_88 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_88 = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

            plVar10 = (long*)*plVar10;
         }
 while ( plVar10 != (long*)0x0 );
      }

      if ((void*)local_70._0_8_ != (void*)0x0) {
         pvVar13 = (void*)local_70._0_8_;
         if (( local_50._4_4_ != 0 ) && ( uVar2 = *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) ),uVar2 != 0) {
            lVar11 = 0;
            do {
               if (*(int*)( local_70._8_8_ + lVar11 ) != 0) {
                  *(int*)( local_70._8_8_ + lVar11 ) = 0;
                  puVar14 = (undefined8*)( (long)pvVar13 + lVar11 * 2 );
                  pvVar3 = (void*)*puVar14;
                  List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)( (long)pvVar3 + 0x18 ));
                  pvVar4 = *(void**)( (long)pvVar3 + 0x18 );
                  if (pvVar4 != (void*)0x0) {
                     if (*(int*)( (long)pvVar4 + 0x10 ) == 0) {
                        Memory::free_static(pvVar4, false);
                     }
 else {
                        _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                     }

                  }

                  if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                     LOCK();
                     plVar10 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                     *plVar10 = *plVar10 + -1;
                     UNLOCK();
                     if (*plVar10 == 0) {
                        lVar7 = *(long*)( (long)pvVar3 + 0x10 );
                        *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar7 + -0x10 ), false);
                     }

                     puVar14 = (undefined8*)( local_70._0_8_ + lVar11 * 2 );
                     pvVar13 = (void*)local_70._0_8_;
                  }

                  Memory::free_static(pvVar3, false);
                  *puVar14 = 0;
               }

               lVar11 = lVar11 + 4;
            }
 while ( lVar11 != (ulong)uVar2 * 4 );
            local_50 = local_50 & 0xffffffff;
            local_60 = (undefined1[16])0x0;
            if (pvVar13 == (void*)0x0) goto LAB_001095f2;
         }

         Memory::free_static(pvVar13, false);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)local_70._8_8_, false);
            return;
         }

         goto LAB_00109678;
      }

   }

   LAB_001095f2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00109678:/* WARNING: Subroutine does not return */__stack_chk_fail();
   code_r0x001094aa:( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
   Memory::free_static(pOVar8, false);
   pRVar12 = *(Ref**)( pRVar12 + 8 );
   goto joined_r0x00109417;
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
/* InputMap::is_class_ptr(void*) const */uint InputMap::is_class_ptr(InputMap *this, void *param_1) {
   return (uint)CONCAT71(0x1166, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1166, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* InputMap::_getv(StringName const&, Variant&) const */undefined8 InputMap::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* InputMap::_setv(StringName const&, Variant const&) */undefined8 InputMap::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* InputMap::_validate_propertyv(PropertyInfo&) const */void InputMap::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* InputMap::_property_can_revertv(StringName const&) const */undefined8 InputMap::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* InputMap::_property_get_revertv(StringName const&, Variant&) const */undefined8 InputMap::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* InputMap::_notificationv(int, bool) */void InputMap::_notificationv(int param_1, bool param_2) {
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
/* MethodBindTRC<bool, Ref<InputEvent> const&, StringName const&, bool>::_gen_argument_type(int)
   const */undefined8 MethodBindTRC<bool,Ref<InputEvent>const&,StringName_const&,bool>::_gen_argument_type(MethodBindTRC<bool,Ref<InputEvent>const&,StringName_const&,bool> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 1;
   if (( ( (uint)param_1 < 3 ) && ( uVar1 = 0x18 ),param_1 != 0 )) {
      uVar1 = 1;
   }

   return uVar1;
}
/* MethodBindTRC<bool, Ref<InputEvent> const&, StringName const&, bool>::get_argument_meta(int)
   const */undefined8 MethodBindTRC<bool,Ref<InputEvent>const&,StringName_const&,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<TypedArray<InputEvent>, StringName const&>::_gen_argument_type(int) const */int MethodBindTR<TypedArray<InputEvent>,StringName_const&>::_gen_argument_type(MethodBindTR<TypedArray<InputEvent>,StringName_const&> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xfffffff9 ) + 0x1c;
}
/* MethodBindTR<TypedArray<InputEvent>, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTR<TypedArray<InputEvent>,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<bool, StringName const&, Ref<InputEvent> const&>::_gen_argument_type(int) const */int MethodBindTR<bool,StringName_const&,Ref<InputEvent>const&>::_gen_argument_type(MethodBindTR<bool,StringName_const&,Ref<InputEvent>const&> *this, int param_1) {
   int iVar1;
   iVar1 = 1;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xfffffffd ) + 0x18;
   }

   return iVar1;
}
/* MethodBindTR<bool, StringName const&, Ref<InputEvent> const&>::get_argument_meta(int) const */undefined8 MethodBindTR<bool,StringName_const&,Ref<InputEvent>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<StringName const&, Ref<InputEvent> const&>::_gen_argument_type(int) const */int MethodBindT<StringName_const&,Ref<InputEvent>const&>::_gen_argument_type(MethodBindT<StringName_const&,Ref<InputEvent>const&> *this, int param_1) {
   int iVar1;
   iVar1 = 0;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xfffffffd ) + 0x18;
   }

   return iVar1;
}
/* MethodBindT<StringName const&, Ref<InputEvent> const&>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&,Ref<InputEvent>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<float, StringName const&>::_gen_argument_type(int) const */char MethodBindTR<float,StringName_const&>::_gen_argument_type(MethodBindTR<float,StringName_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 0x12U ) + 3;
}
/* MethodBindTR<float, StringName const&>::get_argument_meta(int) const */uint MethodBindTR<float,StringName_const&>::get_argument_meta(MethodBindTR<float,StringName_const&> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}
/* MethodBindT<StringName const&>::_gen_argument_type(int) const */byte MethodBindT<StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x15;
}
/* MethodBindT<StringName const&>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<TypedArray<StringName>>::_gen_argument_type(int) const */undefined8 MethodBindTR<TypedArray<StringName>>::_gen_argument_type(int param_1) {
   return 0x1c;
}
/* MethodBindTR<TypedArray<StringName>>::get_argument_meta(int) const */undefined8 MethodBindTR<TypedArray<StringName>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool, StringName const&>::_gen_argument_type(int) const */char MethodBindTRC<bool,StringName_const&>::_gen_argument_type(MethodBindTRC<bool,StringName_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 0x14U ) + 1;
}
/* MethodBindTRC<bool, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<StringName const&, float>::_gen_argument_type(int) const */char MethodBindT<StringName_const&,float>::_gen_argument_type(MethodBindT<StringName_const&,float> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 0x12U ) + 3;
   }

   return cVar1;
}
/* MethodBindT<StringName const&, float>::get_argument_meta(int) const */char MethodBindT<StringName_const&,float>::get_argument_meta(MethodBindT<StringName_const&,float> *this, int param_1) {
   return ( param_1 == 1 ) * '\t';
}
/* MethodBindT<StringName const&, float>::~MethodBindT() */void MethodBindT<StringName_const&,float>::~MethodBindT(MethodBindT<StringName_const&,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115db0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&, float>::~MethodBindT() */void MethodBindT<StringName_const&,float>::~MethodBindT(MethodBindT<StringName_const&,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115db0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115e10;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115e10;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<TypedArray<StringName>>::~MethodBindTR() */void MethodBindTR<TypedArray<StringName>>::~MethodBindTR(MethodBindTR<TypedArray<StringName>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115e70;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<TypedArray<StringName>>::~MethodBindTR() */void MethodBindTR<TypedArray<StringName>>::~MethodBindTR(MethodBindTR<TypedArray<StringName>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115e70;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<float, StringName const&>::~MethodBindTR() */void MethodBindTR<float,StringName_const&>::~MethodBindTR(MethodBindTR<float,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115f30;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<float, StringName const&>::~MethodBindTR() */void MethodBindTR<float,StringName_const&>::~MethodBindTR(MethodBindTR<float,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115f30;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<bool, StringName const&, Ref<InputEvent> const&>::~MethodBindTR() */void MethodBindTR<bool,StringName_const&,Ref<InputEvent>const&>::~MethodBindTR(MethodBindTR<bool,StringName_const&,Ref<InputEvent>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115ff0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<bool, StringName const&, Ref<InputEvent> const&>::~MethodBindTR() */void MethodBindTR<bool,StringName_const&,Ref<InputEvent>const&>::~MethodBindTR(MethodBindTR<bool,StringName_const&,Ref<InputEvent>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115ff0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&, Ref<InputEvent> const&>::~MethodBindT() */void MethodBindT<StringName_const&,Ref<InputEvent>const&>::~MethodBindT(MethodBindT<StringName_const&,Ref<InputEvent>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115f90;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&, Ref<InputEvent> const&>::~MethodBindT() */void MethodBindT<StringName_const&,Ref<InputEvent>const&>::~MethodBindT(MethodBindT<StringName_const&,Ref<InputEvent>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115f90;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115ed0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115ed0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<TypedArray<InputEvent>, StringName const&>::~MethodBindTR() */void MethodBindTR<TypedArray<InputEvent>,StringName_const&>::~MethodBindTR(MethodBindTR<TypedArray<InputEvent>,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116050;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<TypedArray<InputEvent>, StringName const&>::~MethodBindTR() */void MethodBindTR<TypedArray<InputEvent>,StringName_const&>::~MethodBindTR(MethodBindTR<TypedArray<InputEvent>,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116050;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, Ref<InputEvent> const&, StringName const&, bool>::~MethodBindTRC() */void MethodBindTRC<bool,Ref<InputEvent>const&,StringName_const&,bool>::~MethodBindTRC(MethodBindTRC<bool,Ref<InputEvent>const&,StringName_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001160b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, Ref<InputEvent> const&, StringName const&, bool>::~MethodBindTRC() */void MethodBindTRC<bool,Ref<InputEvent>const&,StringName_const&,bool>::~MethodBindTRC(MethodBindTRC<bool,Ref<InputEvent>const&,StringName_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001160b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116110;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116110;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* InputMap::_get_class_namev() const */undefined8 *InputMap::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00109cd3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00109cd3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "InputMap");
         goto LAB_00109d3e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "InputMap");
   LAB_00109d3e:return &_get_class_namev();
}
/* InputMap::get_class() const */void InputMap::get_class(void) {
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
/* MethodBindTR<TypedArray<StringName>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<TypedArray<StringName>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   long local_28;
   long local_20;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0;
   Variant::get_type_name(&local_38, 0x15);
   *puVar3 = 0x1c;
   puVar3[6] = 0x1f;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_38 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_38);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_28, (String*)( puVar3 + 8 ), false);
         if (*(long*)( puVar3 + 4 ) == local_28) {
            lVar2 = local_38;
            if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
               StringName::unref();
               lVar2 = local_38;
            }

         }
 else {
            StringName::unref();
            *(long*)( puVar3 + 4 ) = local_28;
            lVar2 = local_38;
         }

         goto joined_r0x00109f6c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_30);
   lVar2 = local_38;
   joined_r0x00109f6c:local_38 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_30 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* InputMap::is_class(String const&) const */undefined8 InputMap::is_class(InputMap *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_0010a02f;
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

      LAB_0010a02f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010a0e3;
   }

   cVar6 = String::operator ==(param_1, "InputMap");
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

         if (cVar6 != '\0') goto LAB_0010a0e3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar8 = String::operator ==(param_1, "Object");
         return uVar8;
      }

   }
 else {
      LAB_0010a0e3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* List<Ref<InputEvent>, DefaultAllocator>::clear() */void List<Ref<InputEvent>,DefaultAllocator>::clear(List<Ref<InputEvent>,DefaultAllocator> *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   long *plVar6;
   plVar6 = *(long**)this;
   if (plVar6 != (long*)0x0) {
      do {
         plVar1 = (long*)*plVar6;
         if (plVar1 == (long*)0x0) {
            return;
         }

         if ((long*)plVar1[3] == plVar6) {
            lVar5 = plVar1[1];
            lVar2 = plVar1[2];
            *plVar6 = lVar5;
            if (plVar1 == (long*)plVar6[1]) {
               plVar6[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 8 ) = lVar5;
               lVar5 = plVar1[1];
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 0x10 ) = lVar2;
            }

            if (( *plVar1 != 0 ) && ( cVar4 = cVar4 != '\0' )) {
               pOVar3 = (Object*)*plVar1;
               cVar4 = predelete_handler(pOVar3);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

            Memory::free_static(plVar1, false);
            *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar6 = *(long**)this;
      }
 while ( (int)plVar6[2] != 0 );
      Memory::free_static(plVar6, false);
      *(undefined8*)this = 0;
   }

   return;
}
/* List<Ref<InputEvent>, DefaultAllocator>::~List() */void List<Ref<InputEvent>,DefaultAllocator>::~List(List<Ref<InputEvent>,DefaultAllocator> *this) {
   void *pvVar1;
   clear(this);
   pvVar1 = *(void**)this;
   if (pvVar1 == (void*)0x0) {
      return;
   }

   if (*(int*)( (long)pvVar1 + 0x10 ) == 0) {
      Memory::free_static(pvVar1, false);
      return;
   }

   _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, InputMap::Action, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, InputMap::Action> > >::operator[](StringName
   const&) */undefined8 * __thiscallHashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>>::operator [](HashMap<StringName,InputMap::Action,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InputMap::Action>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__slong *plVar4undefined8 *puVar5undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]undefined1 auVar37[16]char cVar38uint uVar39uint uVar40ulong uVar41undefined8 uVar42void *__s_00undefined1(*pauVar43)[16];void *pvVar44ulong uVar45int iVar46long lVar47long lVar48long lVar49undefined8 *puVar50ulong uVar51undefined8 uVar52uint uVar53uint uVar54uint uVar55long lVar56undefined8 *puVar57long *plVar58long in_FS_OFFSETuint local_c8void *local_70undefined1 local_68[16]long local_58undefined8 local_50long *local_48long local_40lVar56 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar41 = CONCAT44(0, uVar39);if (lVar56 == 0) {
   LAB_0010bd82:local_70 = (void*)0x0;
   uVar45 = uVar41 * 4;
   uVar51 = uVar41 * 8;
   uVar42 = Memory::alloc_static(uVar45, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   pvVar44 = (void*)Memory::alloc_static(uVar51, false);
   *(void**)( this + 8 ) = pvVar44;
   if ((int)uVar41 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar44 + uVar51 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar45 ) )) {
         uVar45 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar45 * 4 ) = 0;
            *(undefined8*)( (long)pvVar44 + uVar45 * 8 ) = 0;
            uVar45 = uVar45 + 1;
         }
 while ( uVar41 != uVar45 );
      }
 else {
         memset(pvVar3, 0, uVar45);
         memset(pvVar44, 0, uVar51);
      }

      goto LAB_0010b72e;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_0010b843;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_0010b73e;
   LAB_0010b869:uVar39 = *(uint*)( this + 0x28 );
   if (uVar39 == 0x1c) {
      puVar50 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010bd17;
   }

   uVar41 = ( ulong )(uVar39 + 1);
   uVar40 = *(uint*)( hash_table_size_primes + (ulong)uVar39 * 4 );
   *(undefined4*)( this + 0x2c ) = 0;
   if (uVar39 + 1 < 2) {
      uVar41 = 2;
   }

   uVar39 = *(uint*)( hash_table_size_primes + uVar41 * 4 );
   *(int*)( this + 0x28 ) = (int)uVar41;
   pvVar44 = *(void**)( this + 8 );
   uVar51 = (ulong)uVar39;
   uVar41 = uVar51 * 4;
   pvVar3 = *(void**)( this + 0x10 );
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   uVar45 = uVar51 * 8;
   __s_00 = (void*)Memory::alloc_static(uVar45, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar39 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)__s + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         }
 while ( uVar41 != uVar51 );
      }
 else {
         memset(__s, 0, uVar41);
         memset(__s_00, 0, uVar45);
      }

   }

   if (uVar40 != 0) {
      uVar41 = 0;
      do {
         uVar39 = *(uint*)( (long)pvVar3 + uVar41 * 4 );
         if (uVar39 != 0) {
            uVar55 = 0;
            lVar56 = *(long*)( this + 0x10 );
            uVar53 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar45 = CONCAT44(0, uVar53);
            lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar39 * lVar48;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar45;
            lVar47 = SUB168(auVar14 * auVar30, 8);
            puVar1 = (uint*)( lVar56 + lVar47 * 4 );
            iVar46 = SUB164(auVar14 * auVar30, 8);
            uVar54 = *puVar1;
            uVar42 = *(undefined8*)( (long)pvVar44 + uVar41 * 8 );
            while (uVar54 != 0) {
               auVar15._8_8_ = 0;
               auVar15._0_8_ = (ulong)uVar54 * lVar48;
               auVar31._8_8_ = 0;
               auVar31._0_8_ = uVar45;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = ( ulong )(( uVar53 + iVar46 ) - SUB164(auVar15 * auVar31, 8)) * lVar48;
               auVar32._8_8_ = 0;
               auVar32._0_8_ = uVar45;
               local_c8 = SUB164(auVar16 * auVar32, 8);
               uVar52 = uVar42;
               if (local_c8 < uVar55) {
                  *puVar1 = uVar39;
                  puVar50 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar52 = *puVar50;
                  *puVar50 = uVar42;
                  uVar39 = uVar54;
                  uVar55 = local_c8;
               }

               uVar55 = uVar55 + 1;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( ulong )(iVar46 + 1) * lVar48;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar45;
               lVar47 = SUB168(auVar17 * auVar33, 8);
               puVar1 = (uint*)( lVar56 + lVar47 * 4 );
               iVar46 = SUB164(auVar17 * auVar33, 8);
               uVar42 = uVar52;
               uVar54 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar42;
            *puVar1 = uVar39;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar41 = uVar41 + 1;
      }
 while ( uVar40 != uVar41 );
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   if (*(int*)( this + 0x2c ) == 0) {
      local_70 = (void*)0x0;
      uVar41 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   }
 else {
      lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar40 = StringName::get_empty_hash();
         lVar56 = *(long*)( this + 8 );
      }
 else {
         uVar40 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar40 == 0) {
         uVar40 = 1;
      }

      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar40 * lVar48;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar41;
      lVar47 = SUB168(auVar6 * auVar22, 8);
      uVar54 = SUB164(auVar6 * auVar22, 8);
      uVar53 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
      if (uVar53 != 0) {
         uVar55 = 0;
         do {
            if (( uVar53 == uVar40 ) && ( *(long*)( *(long*)( lVar56 + lVar47 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar50 = (undefined8*)( *(long*)( lVar56 + (ulong)uVar54 * 8 ) + 0x18 );
               goto LAB_0010b6d4;
            }

            uVar55 = uVar55 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ulong )(uVar54 + 1) * lVar48;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar41;
            lVar47 = SUB168(auVar7 * auVar23, 8);
            uVar53 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
            uVar54 = SUB164(auVar7 * auVar23, 8);
         }
 while ( ( uVar53 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar53 * lVar48,auVar24._8_8_ = 0,auVar24._0_8_ = uVar41,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar54 + uVar39 ) - SUB164(auVar8 * auVar24, 8)) * lVar48,auVar25._8_8_ = 0,auVar25._0_8_ = uVar41,uVar55 <= SUB164(auVar9 * auVar25, 8) );
      }

      local_70 = (void*)0x0;
      uVar41 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar56 == 0) goto LAB_0010bd82;
   }

   LAB_0010b72e:iVar46 = *(int*)( this + 0x2c );
   if (iVar46 != 0) {
      LAB_0010b73e:uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar45 = CONCAT44(0, uVar39);
      lVar56 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar40 = StringName::get_empty_hash();
      }
 else {
         uVar40 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar40 == 0) {
         uVar40 = 1;
      }

      uVar55 = 0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar40 * lVar56;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar45;
      lVar48 = SUB168(auVar10 * auVar26, 8);
      uVar54 = SUB164(auVar10 * auVar26, 8);
      uVar53 = *(uint*)( *(long*)( this + 0x10 ) + lVar48 * 4 );
      if (uVar53 != 0) {
         do {
            if (( uVar53 == uVar40 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar48 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               lVar56 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar54 * 8 );
               *(undefined8*)( lVar56 + 0x18 ) = 0;
               List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)( lVar56 + 0x20 ));
               puVar50 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar54 * 8 );
               goto LAB_0010bd17;
            }

            uVar55 = uVar55 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )(uVar54 + 1) * lVar56;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            lVar48 = SUB168(auVar11 * auVar27, 8);
            uVar53 = *(uint*)( *(long*)( this + 0x10 ) + lVar48 * 4 );
            uVar54 = SUB164(auVar11 * auVar27, 8);
         }
 while ( ( uVar53 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar53 * lVar56,auVar28._8_8_ = 0,auVar28._0_8_ = uVar45,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar39 + uVar54 ) - SUB164(auVar12 * auVar28, 8)) * lVar56,auVar29._8_8_ = 0,auVar29._0_8_ = uVar45,uVar55 <= SUB164(auVar13 * auVar29, 8) );
      }

      iVar46 = *(int*)( this + 0x2c );
   }

   LAB_0010b843:if ((float)uVar41 * __LC16 < (float)( iVar46 + 1 )) goto LAB_0010b869;
}
local_68 = (undefined1[16])0x0;StringName::StringName((StringName*)&local_58, param_1);local_50 = 0;local_48 = (long*)0x0;puVar50 = (undefined8*)operator_new(0x28, "");*puVar50 = local_68._0_8_;puVar50[1] = local_68._8_8_;StringName::StringName((StringName*)( puVar50 + 2 ), (StringName*)&local_58);puVar50[4] = 0;puVar50[3] = local_50;if (( local_48 != (long*)0x0 ) && ( plVar58 = (long*)*local_48 ),plVar58 != (long*)0x0) {
   pauVar43 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
   puVar50[4] = pauVar43;
   *(undefined4*)pauVar43[1] = 0;
   *pauVar43 = (undefined1[16])0x0;
   do {
      while (true) {
         pauVar43 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
         *pauVar43 = (undefined1[16])0x0;
         pauVar43[1] = (undefined1[16])0x0;
         if (*plVar58 != 0) {
            *(long*)*pauVar43 = *plVar58;
            cVar38 = RefCounted::reference();
            if (cVar38 == '\0') {
               *(undefined8*)*pauVar43 = 0;
            }

         }

         plVar4 = (long*)puVar50[4];
         lVar56 = plVar4[1];
         *(undefined8*)( *pauVar43 + 8 ) = 0;
         *(long**)( pauVar43[1] + 8 ) = plVar4;
         *(long*)pauVar43[1] = lVar56;
         if (lVar56 != 0) {
            *(undefined1(**) [16])( lVar56 + 8 ) = pauVar43;
         }

         plVar4[1] = (long)pauVar43;
         if (*plVar4 != 0) break;
         plVar58 = (long*)plVar58[1];
         *(int*)( plVar4 + 2 ) = (int)plVar4[2] + 1;
         *plVar4 = (long)pauVar43;
         if (plVar58 == (long*)0x0) goto LAB_0010bbb6;
      }
;
      plVar58 = (long*)plVar58[1];
      *(int*)( plVar4 + 2 ) = (int)plVar4[2] + 1;
   }
 while ( plVar58 != (long*)0x0 );
}
LAB_0010bbb6:List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_48);if (local_48 != (long*)0x0) {
   if ((int)local_48[2] == 0) {
      Memory::free_static(local_48, false);
   }
 else {
      _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
   }

}
if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar5 = *(undefined8**)( this + 0x20 );if (puVar5 == (undefined8*)0x0) {
   *(undefined8**)( this + 0x18 ) = puVar50;
}
 else {
   *puVar5 = puVar50;
   puVar50[1] = puVar5;
}
*(undefined8**)( this + 0x20 ) = puVar50;if (*(long*)param_1 == 0) {
   uVar39 = StringName::get_empty_hash();
}
 else {
   uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
}
if (uVar39 == 0) {
   uVar39 = 1;
}
uVar41 = (ulong)uVar39;uVar54 = 0;lVar56 = *(long*)( this + 0x10 );uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar45 = CONCAT44(0, uVar40);lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar18._8_8_ = 0;auVar18._0_8_ = uVar41 * lVar48;auVar34._8_8_ = 0;auVar34._0_8_ = uVar45;lVar49 = SUB168(auVar18 * auVar34, 8);lVar47 = *(long*)( this + 8 );puVar1 = (uint*)( lVar56 + lVar49 * 4 );iVar46 = SUB164(auVar18 * auVar34, 8);uVar53 = *puVar1;puVar5 = puVar50;while (uVar53 != 0) {
   auVar19._8_8_ = 0;
   auVar19._0_8_ = (ulong)uVar53 * lVar48;
   auVar35._8_8_ = 0;
   auVar35._0_8_ = uVar45;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = ( ulong )(( iVar46 + uVar40 ) - SUB164(auVar19 * auVar35, 8)) * lVar48;
   auVar36._8_8_ = 0;
   auVar36._0_8_ = uVar45;
   local_c8 = SUB164(auVar20 * auVar36, 8);
   puVar57 = puVar5;
   if (local_c8 < uVar54) {
      *puVar1 = (uint)uVar41;
      uVar41 = (ulong)uVar53;
      puVar2 = (undefined8*)( lVar47 + lVar49 * 8 );
      puVar57 = (undefined8*)*puVar2;
      *puVar2 = puVar5;
      uVar54 = local_c8;
   }

   uVar39 = (uint)uVar41;
   uVar54 = uVar54 + 1;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = ( ulong )(iVar46 + 1) * lVar48;
   auVar37._8_8_ = 0;
   auVar37._0_8_ = uVar45;
   lVar49 = SUB168(auVar21 * auVar37, 8);
   puVar1 = (uint*)( lVar56 + lVar49 * 4 );
   iVar46 = SUB164(auVar21 * auVar37, 8);
   puVar5 = puVar57;
   uVar53 = *puVar1;
}
;*(undefined8**)( lVar47 + lVar49 * 8 ) = puVar5;*puVar1 = uVar39;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010bd17:puVar50 = puVar50 + 3;List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)&local_70);if (local_70 != (void*)0x0) {
   if (*(int*)( (long)local_70 + 0x10 ) == 0) {
      Memory::free_static(local_70, false);
   }
 else {
      _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
   }

}
LAB_0010b6d4:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return puVar50;}/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
/* WARNING: Removing unreachable block (ram,0x0010c148) *//* WARNING: Removing unreachable block (ram,0x0010c2dd) *//* WARNING: Removing unreachable block (ram,0x0010c2e9) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   Variant *this;
   int iVar1;
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
   iVar1 = (int)local_c8;
   Array::resize(iVar1);
   this(Variant * Array::operator [](iVar1));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010c458) *//* WARNING: Removing unreachable block (ram,0x0010c5ed) *//* WARNING: Removing unreachable block (ram,0x0010c5f9) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
   Variant *this;
   int iVar1;
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
   iVar1 = (int)local_c8;
   Array::resize(iVar1);
   this(Variant * Array::operator [](iVar1));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
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
         _err_print_error(&_LC59, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010c7c0;
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

   LAB_0010c7c0:*(undefined4*)param_1 = 0;
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

         goto LAB_0010cbcf;
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
      /* WARNING: Could not recover jumptable at 0x0010ca76. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0010cbcf:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_0010cd8f;
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
      /* WARNING: Could not recover jumptable at 0x0010cc36. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0010cd8f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<float, StringName const&>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTR<float,StringName_const&>::validated_call(MethodBindTR<float,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   float fVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
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

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010cdef;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   *(double*)( param_3 + 8 ) = (double)fVar3;
   LAB_0010cdef:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<float, StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<float,StringName_const&>::ptrcall(MethodBindTR<float,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   float fVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
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

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010cfcb;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2);
   *(double*)param_3 = (double)fVar3;
   LAB_0010cfcb:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<StringName_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0010d331;
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
      /* WARNING: Could not recover jumptable at 0x0010d1bd. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_0010d331:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<StringName_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0010d511;
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
      /* WARNING: Could not recover jumptable at 0x0010d399. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_0010d511:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<TypedArray<StringName>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTR<TypedArray<StringName>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC59, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010d680;
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

   LAB_0010d680:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, StringName const&>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTRC<bool,StringName_const&>::validated_call(MethodBindTRC<bool,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010d899;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   param_3[8] = VVar1;
   LAB_0010d899:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool,StringName_const&>::ptrcall(MethodBindTRC<bool,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010da75;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2);
   *(undefined1*)param_3 = uVar1;
   LAB_0010da75:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&, float>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindT<StringName_const&,float>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
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

         goto LAB_0010dde1;
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
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)*(double*)( *(long*)( param_3 + 8 ) + 8 );
      /* WARNING: Could not recover jumptable at 0x0010dc6a. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_0010dde1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<StringName const&, float>::ptrcall(Object*, void const**, void*) const */void MethodBindT<StringName_const&,float>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
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

         goto LAB_0010dfd1;
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
      /* WARNING: Load size is inaccurate */
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)**(double**)( (long)param_3 + 8 );
      /* WARNING: Could not recover jumptable at 0x0010de55. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_0010dfd1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<bool, StringName const&, Ref<InputEvent> const&>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTR<bool,StringName_const&,Ref<InputEvent>const&>::validated_call(MethodBindTR<bool,StringName_const&,Ref<InputEvent>const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   Variant VVar4;
   Object *pOVar5;
   long *plVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar6 = *(long**)( param_1 + 0x118 );
         if (plVar6 == (long*)0x0) {
            plVar6 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar6 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_68 == (Object*)*plVar6) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x10c648;
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010e0fa;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar7 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar7 & 1 ) != 0) {
      pcVar7 = *(code**)( pcVar7 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_58, *(Object**)( param_2[1] + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar2 = local_68;
   if (pOVar5 != local_68) {
      if (pOVar5 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_0010e0ab:cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }
 else {
         pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &InputEvent::typeinfo, 0);
         if (pOVar2 != pOVar5) {
            local_68 = pOVar5;
            if (pOVar5 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_68 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_0010e0ab;
         }

      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   VVar4 = ( Variant )(*pcVar7)(param_1 + lVar1, *param_2 + 8, (StringName*)&local_68);
   param_3[8] = VVar4;
   if (local_68 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_68;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_68);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_0010e0fa:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&, Ref<InputEvent> const&>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindT<StringName_const&,Ref<InputEvent>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar5 = param_2[0x23];
         if (pVVar5 == (Variant*)0x0) {
            pVVar5 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar5 = param_2[1] + 0x20;
      }

      if (local_68 == (Object*)*(long*)pVVar5) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x10c648;
         local_60 = 0x35;
         local_70 = 0;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010e41a;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_58, *(Object**)( *(long*)( param_3 + 8 ) + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_68;
   if (pOVar4 != local_68) {
      if (pOVar4 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_0010e3d0:cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }
 else {
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &InputEvent::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_68 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_68 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_0010e3d0;
         }

      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar6 )((long*)( (long)param_2 + lVar1 ), *(long*)param_3 + 8, (StringName*)&local_68);
   if (local_68 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_68;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_68);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_0010e41a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, Ref<InputEvent> const&, StringName const&, bool>::validated_call(Object*,
   Variant const**, Variant*) const */void MethodBindTRC<bool,Ref<InputEvent>const&,StringName_const&,bool>::validated_call(MethodBindTRC<bool,Ref<InputEvent>const&,StringName_const&,bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Variant *pVVar2;
   Object *pOVar3;
   char cVar4;
   Variant VVar5;
   Object *pOVar6;
   long *plVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar7 = *(long**)( param_1 + 0x118 );
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar7 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_68 == (Object*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x10c648;
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010e754;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar8 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar8 & 1 ) != 0) {
      pcVar8 = *(code**)( pcVar8 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   VVar5 = param_2[2][8];
   pVVar2 = param_2[1];
   Variant::Variant((Variant*)local_58, *(Object**)( *param_2 + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar6 = (Object*)Variant::get_validated_object();
   pOVar3 = local_68;
   if (pOVar6 != local_68) {
      if (pOVar6 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_0010e707:cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               cVar4 = predelete_handler(pOVar3);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

         }

      }
 else {
         pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &InputEvent::typeinfo, 0);
         if (pOVar3 != pOVar6) {
            local_68 = pOVar6;
            if (pOVar6 != (Object*)0x0) {
               cVar4 = RefCounted::reference();
               if (cVar4 == '\0') {
                  local_68 = (Object*)0x0;
               }

            }

            if (pOVar3 != (Object*)0x0) goto LAB_0010e707;
         }

      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   VVar5 = ( Variant )(*pcVar8)(param_1 + lVar1, (StringName*)&local_68, pVVar2 + 8, VVar5);
   param_3[8] = VVar5;
   if (local_68 != (Object*)0x0) {
      cVar4 = RefCounted::unreference();
      pOVar3 = local_68;
      if (cVar4 != '\0') {
         cVar4 = predelete_handler(local_68);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   LAB_0010e754:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<bool, StringName const&, Ref<InputEvent> const&>::ptrcall(Object*, void const**,
   void*) const */void MethodBindTR<bool,StringName_const&,Ref<InputEvent>const&>::ptrcall(MethodBindTR<bool,StringName_const&,Ref<InputEvent>const&> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   undefined1 uVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (Object*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x10c648;
         local_50 = 0x35;
         local_60 = 0;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ea2f;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   if (( (long*)param_2[1] == (long*)0x0 ) || ( local_58 = *param_2[1] ),local_58 == (Object*)0x0) {
      LAB_0010ea02:local_58 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_0010ea02;
   }

   uVar4 = ( *pcVar6 )(param_1 + lVar1, *param_2, (StringName*)&local_58);
   *(undefined1*)param_3 = uVar4;
   if (local_58 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_58;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_58);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_0010ea2f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&, Ref<InputEvent> const&>::ptrcall(Object*, void const**, void*)
   const */void MethodBindT<StringName_const&,Ref<InputEvent>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar4 = (long*)param_2[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar4 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x10c648;
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

         goto LAB_0010ec66;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   if (( *(long**)( (long)param_3 + 8 ) == (long*)0x0 ) || ( local_48 = (Object*)**(long**)( (long)param_3 + 8 ) ),local_48 == (Object*)0x0) {
      LAB_0010ec3e:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_0010ec3e;
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar5 )((long*)( (long)param_2 + lVar1 ), *param_3, (StringName*)&local_48);
   if (local_48 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_48;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_48);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_0010ec66:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, Ref<InputEvent> const&, StringName const&, bool>::ptrcall(Object*, void
   const**, void*) const */void MethodBindTRC<bool,Ref<InputEvent>const&,StringName_const&,bool>::ptrcall(MethodBindTRC<bool,Ref<InputEvent>const&,StringName_const&,bool> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   void *pvVar2;
   Object *pOVar3;
   char cVar4;
   undefined1 uVar5;
   char cVar6;
   long *plVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar7 = *(long**)( param_1 + 0x118 );
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar7 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (Object*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x10c648;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010eeae;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar8 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar8 & 1 ) != 0) {
      pcVar8 = *(code**)( pcVar8 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   pvVar2 = param_2[1];
   /* WARNING: Load size is inaccurate */
   cVar6 = *param_2[2];
   /* WARNING: Load size is inaccurate */
   if (( (long*)*param_2 == (long*)0x0 ) || ( local_58 = **param_2 ),local_58 == (Object*)0x0) {
      LAB_0010ee7f:local_58 = (Object*)0x0;
   }
 else {
      cVar4 = RefCounted::init_ref();
      if (cVar4 == '\0') goto LAB_0010ee7f;
   }

   uVar5 = ( *pcVar8 )(param_1 + lVar1, (StringName*)&local_58, pvVar2, cVar6 != '\0');
   *(undefined1*)param_3 = uVar5;
   if (local_58 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar3 = local_58;
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_58);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   LAB_0010eeae:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<TypedArray<InputEvent>, StringName const&>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTR<TypedArray<InputEvent>,StringName_const&>::validated_call(MethodBindTR<TypedArray<InputEvent>,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f0d1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   Array::operator =((Array*)( param_3 + 8 ), (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_0010f0d1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<TypedArray<InputEvent>, StringName const&>::ptrcall(Object*, void const**, void*)
   const */void MethodBindTR<TypedArray<InputEvent>,StringName_const&>::ptrcall(MethodBindTR<TypedArray<InputEvent>,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f2bb;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   Array::operator =((Array*)param_3, (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_0010f2bb:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<TypedArray<StringName>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<TypedArray<StringName>>::validated_call(MethodBindTR<TypedArray<StringName>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x10c648;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f4a9;
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
   LAB_0010f4a9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<TypedArray<StringName>>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<TypedArray<StringName>>::ptrcall(MethodBindTR<TypedArray<StringName>> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (void**)0x10c648;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f67a;
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
   LAB_0010f67a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, StringName const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<bool,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
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
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC59, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f960;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010f9b0;
         LAB_0010f9a0:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010f9b0:uVar7 = 4;
            goto LAB_0010f955;
         }

         if (in_R8D == 1) goto LAB_0010f9a0;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x15);
      uVar4 = _LC68;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_68);
      bVar6 = (bool)( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, bVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      bVar6 = StringName::configured != '\0';
      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (( bVar6 ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      uVar7 = 3;
      LAB_0010f955:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0010f960:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTR<float, StringName const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTR<float,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   bool bVar12;
   float fVar13;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }

      }
 else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC59, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010fd10;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010fd60;
         LAB_0010fd50:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010fd60:uVar6 = 4;
            goto LAB_0010fd05;
         }

         if (in_R8D == 1) goto LAB_0010fd50;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x15);
      uVar4 = _LC68;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_68);
      fVar13 = (float)( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, fVar13);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      bVar12 = StringName::configured != '\0';
      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (( bVar12 ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      uVar6 = 3;
      LAB_0010fd05:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_0010fd10:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindT<StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC59, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110080;
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
         if (in_R8D != 1) goto LAB_001100d0;
         LAB_001100c0:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_001100d0:uVar6 = 4;
            goto LAB_00110075;
         }

         if (in_R8D == 1) goto LAB_001100c0;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x15);
      uVar4 = _LC68;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      uVar6 = 3;
      LAB_00110075:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_00110080:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<TypedArray<InputEvent>, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<TypedArray<InputEvent>,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }

      }
 else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC59, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110420;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00110470;
         LAB_00110460:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00110470:uVar6 = 4;
            goto LAB_00110415;
         }

         if (in_R8D == 1) goto LAB_00110460;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x15);
      uVar4 = _LC68;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_68);
      ( *(code*)pVVar11 )((Array*)&local_70, (Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, (Array*)&local_70);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      Array::~Array((Array*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      uVar6 = 3;
      LAB_00110415:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_00110420:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<bool, Ref<InputEvent> const&, StringName const&, bool>::call(Object*, Variant
   const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool,Ref<InputEvent>const&,StringName_const&,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   bool bVar7;
   undefined4 uVar8;
   long lVar9;
   Object *pOVar10;
   long *plVar11;
   uint uVar12;
   int iVar13;
   undefined4 in_register_00000014;
   long *plVar14;
   Variant *pVVar15;
   long lVar16;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar17;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   Object *local_88;
   undefined8 local_80;
   Variant *local_78[4];
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar14 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar14 != (long*)0x0 ) && ( plVar14[1] != 0 ) ) && ( *(char*)( plVar14[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_88, (StringName*)( param_2 + 3 ));
      if (plVar14[1] == 0) {
         plVar11 = (long*)plVar14[0x23];
         if (plVar11 == (long*)0x0) {
            plVar11 = (long*)( **(code**)( *plVar14 + 0x40 ) )(plVar14);
         }

      }
 else {
         plVar11 = (long*)( plVar14[1] + 0x20 );
      }

      if (local_88 == (Object*)*plVar11) {
         if (( StringName::configured != '\0' ) && ( local_88 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_88 = (Object*)0x10c648;
         local_90 = 0;
         local_80 = 0x35;
         String::parse_latin1((StrRange*)&local_90);
         vformat<StringName>((StringName*)&local_88, (StrRange*)&local_90, &local_98);
         _err_print_error(&_LC59, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
            StringName::unref();
         }

         goto LAB_001108d2;
      }

      if (( StringName::configured != '\0' ) && ( local_88 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar17 = param_2[0xb];
   pVVar1 = param_2[0xc];
   uVar8 = 3;
   if (in_R8D < 4) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar13 = 0;
         lVar16 = 0;
      }
 else {
         lVar16 = *(long*)( pVVar2 + -8 );
         iVar13 = (int)lVar16;
      }

      if ((int)( 3 - in_R8D ) <= iVar13) {
         lVar9 = 0;
         do {
            if ((int)lVar9 < (int)in_R8D) {
               pVVar15 = *(Variant**)( param_4 + lVar9 * 8 );
            }
 else {
               uVar12 = iVar13 + -3 + (int)lVar9;
               if (lVar16 <= (int)uVar12) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar12, lVar16, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar15 = pVVar2 + (ulong)uVar12 * 0x18;
            }

            local_78[lVar9] = pVVar15;
            lVar9 = lVar9 + 1;
         }
 while ( lVar9 != 3 );
         *in_R9 = 0;
         if (( (ulong)pVVar17 & 1 ) != 0) {
            pVVar17 = *(Variant**)( pVVar17 + *(long*)( (long)plVar14 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[2], 1);
         uVar4 = _LC70;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         bVar7 = Variant::operator_cast_to_bool(local_78[2]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[1], 0x15);
         uVar4 = _LC71;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_StringName((Variant*)&local_90);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_78[0]);
         uVar4 = _LC72;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         local_88 = (Object*)0x0;
         pOVar10 = (Object*)Variant::get_validated_object();
         pOVar5 = local_88;
         if (pOVar10 != local_88) {
            if (pOVar10 == (Object*)0x0) {
               if (local_88 != (Object*)0x0) {
                  local_88 = (Object*)0x0;
                  LAB_0011083a:cVar6 = RefCounted::unreference();
                  if (cVar6 != '\0') {
                     cVar6 = predelete_handler(pOVar5);
                     if (cVar6 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

               }

            }
 else {
               pOVar10 = (Object*)__dynamic_cast(pOVar10, &Object::typeinfo, &InputEvent::typeinfo, 0);
               if (pOVar5 != pOVar10) {
                  local_88 = pOVar10;
                  if (pOVar10 != (Object*)0x0) {
                     cVar6 = RefCounted::reference();
                     if (cVar6 == '\0') {
                        local_88 = (Object*)0x0;
                     }

                  }

                  if (pOVar5 != (Object*)0x0) goto LAB_0011083a;
               }

            }

         }

         bVar7 = (bool)( *(code*)pVVar17 )((Variant*)( (long)plVar14 + (long)pVVar1 ), &local_88, (Variant*)&local_90, bVar7);
         Variant::Variant((Variant*)local_58, bVar7);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         if (local_88 != (Object*)0x0) {
            cVar6 = RefCounted::unreference();
            pOVar5 = local_88;
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(local_88);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
            StringName::unref();
         }

         goto LAB_001108d2;
      }

      uVar8 = 4;
   }

   *in_R9 = uVar8;
   in_R9[2] = 3;
   LAB_001108d2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* InputMap::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void InputMap::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   undefined7 in_register_00000031;
   List *pLVar6;
   long in_FS_OFFSET;
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
   pLVar6 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = "InputMap";
   local_88 = 0;
   local_90 = 0;
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "InputMap";
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
      LAB_00110d00:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00110d00;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00110d1d;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00110d1d:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar6 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)pLVar6;
   lVar2 = plVar1[1];
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "InputMap", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<InputMap, StringName const&, float>(void (InputMap::*)(StringName
   const&, float)) */MethodBind *create_method_bind<InputMap,StringName_const&,float>(_func_void_StringName_ptr_float *param_1) {
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
   *(_func_void_StringName_ptr_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115db0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "InputMap";
   local_30 = 8;
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
/* InputMap::_bind_compatibility_methods() [clone .cold] */void InputMap::_bind_compatibility_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* InputMap::_bind_methods() [clone .cold] */void InputMap::_bind_methods(void) {
   code *pcVar1;
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
/* MethodBind* create_method_bind<InputMap, bool, StringName const&>(bool (InputMap::*)(StringName
   const&) const) */MethodBind *create_method_bind<InputMap,bool,StringName_const&>(_func_bool_StringName_ptr *param_1) {
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
   *(_func_bool_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115e10;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "InputMap";
   local_30 = 8;
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
/* MethodBind* create_method_bind<InputMap, TypedArray<StringName>>(TypedArray<StringName>
   (InputMap::*)()) */MethodBind *create_method_bind<InputMap,TypedArray<StringName>>(_func_TypedArray *param_1) {
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
   *(_func_TypedArray**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115e70;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "InputMap";
   local_30 = 8;
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
/* MethodBind* create_method_bind<InputMap, StringName const&>(void (InputMap::*)(StringName
   const&)) */MethodBind *create_method_bind<InputMap,StringName_const&>(_func_void_StringName_ptr *param_1) {
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
   *(_func_void_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115ed0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "InputMap";
   local_30 = 8;
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
/* MethodBind* create_method_bind<InputMap, float, StringName const&>(float (InputMap::*)(StringName
   const&)) */MethodBind *create_method_bind<InputMap,float,StringName_const&>(_func_float_StringName_ptr *param_1) {
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
   *(_func_float_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115f30;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "InputMap";
   local_30 = 8;
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
/* MethodBind* create_method_bind<InputMap, StringName const&, Ref<InputEvent> const&>(void
   (InputMap::*)(StringName const&, Ref<InputEvent> const&)) */MethodBind *create_method_bind<InputMap,StringName_const&,Ref<InputEvent>const&>(_func_void_StringName_ptr_Ref_ptr *param_1) {
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
   *(_func_void_StringName_ptr_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115f90;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "InputMap";
   local_30 = 8;
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
/* MethodBind* create_method_bind<InputMap, bool, StringName const&, Ref<InputEvent> const&>(bool
   (InputMap::*)(StringName const&, Ref<InputEvent> const&)) */MethodBind *create_method_bind<InputMap,bool,StringName_const&,Ref<InputEvent>const&>(_func_bool_StringName_ptr_Ref_ptr *param_1) {
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
   *(_func_bool_StringName_ptr_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115ff0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "InputMap";
   local_30 = 8;
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
/* MethodBind* create_method_bind<InputMap, TypedArray<InputEvent>, StringName
   const&>(TypedArray<InputEvent> (InputMap::*)(StringName const&)) */MethodBind *create_method_bind<InputMap,TypedArray<InputEvent>,StringName_const&>(_func_TypedArray_StringName_ptr *param_1) {
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
   *(_func_TypedArray_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116050;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "InputMap";
   local_30 = 8;
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
/* MethodBind* create_method_bind<InputMap, bool, Ref<InputEvent> const&, StringName const&,
   bool>(bool (InputMap::*)(Ref<InputEvent> const&, StringName const&, bool) const) */MethodBind *create_method_bind<InputMap,bool,Ref<InputEvent>const&,StringName_const&,bool>(_func_bool_Ref_ptr_StringName_ptr_bool *param_1) {
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
   *(_func_bool_Ref_ptr_StringName_ptr_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001160b0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "InputMap";
   local_30 = 8;
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
/* MethodBind* create_method_bind<InputMap>(void (InputMap::*)()) */MethodBind *create_method_bind<InputMap>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00116110;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "InputMap";
   local_30 = 8;
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
/* InputMap::_initialize_classv() */void InputMap::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_48 = 0;
      local_38 = "Object";
      local_30 = 6;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (String*)&local_48, false);
      local_38 = "InputMap";
      local_50 = 0;
      local_30 = 8;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (String*)&local_50, false);
      ClassDB::_add_class2((StringName*)&local_38, (StringName*)&local_40);
      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
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

      if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
         StringName::unref();
      }

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

      _bind_methods();
      _bind_compatibility_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<InputEvent>::unref() */void Ref<InputEvent>::unref(Ref<InputEvent> *this) {
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
/* MethodBindTR<bool, StringName const&, Ref<InputEvent> const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */Object *MethodBindTR<bool,StringName_const&,Ref<InputEvent>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   bool bVar7;
   int iVar8;
   undefined4 uVar9;
   Object *pOVar10;
   long *plVar11;
   long lVar12;
   undefined4 in_register_00000014;
   long *plVar13;
   Variant *pVVar14;
   int iVar15;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar16;
   Variant *pVVar17;
   long in_FS_OFFSET;
   long local_78;
   Object *local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar13 != (long*)0x0 ) && ( plVar13[1] != 0 ) ) && ( *(char*)( plVar13[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar13[1] == 0) {
         plVar11 = (long*)plVar13[0x23];
         if (plVar11 == (long*)0x0) {
            plVar11 = (long*)( **(code**)( *plVar13 + 0x40 ) )(plVar13);
         }

      }
 else {
         plVar11 = (long*)( plVar13[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar11) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = (Object*)0x0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC59, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111fd0;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar16 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (2 < in_R8D) {
      uVar9 = 3;
      LAB_00111fc5:*in_R9 = uVar9;
      in_R9[2] = 2;
      goto LAB_00111fd0;
   }

   pVVar17 = param_2[5];
   iVar8 = 2 - in_R8D;
   if (pVVar17 == (Variant*)0x0) {
      if (iVar8 != 0) goto LAB_00112000;
      pVVar14 = *(Variant**)param_4;
      LAB_0011201d:pVVar17 = *(Variant**)( param_4 + 8 );
   }
 else {
      lVar2 = *(long*)( pVVar17 + -8 );
      iVar15 = (int)lVar2;
      if (iVar15 < iVar8) {
         LAB_00112000:uVar9 = 4;
         goto LAB_00111fc5;
      }

      if (in_R8D == 0) {
         lVar12 = (long)( iVar15 + -2 );
         if (lVar2 <= lVar12) goto LAB_00112140;
         pVVar14 = pVVar17 + lVar12 * 0x18;
      }
 else {
         pVVar14 = *(Variant**)param_4;
         if (in_R8D == 2) goto LAB_0011201d;
      }

      lVar12 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar15 - iVar8 ) );
      if (lVar2 <= lVar12) {
         LAB_00112140:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar12, lVar2, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      pVVar17 = pVVar17 + lVar12 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar16 & 1 ) != 0) {
      pVVar16 = *(Variant**)( pVVar16 + *(long*)( (long)plVar13 + (long)pVVar1 ) + -1 );
   }

   cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar17);
   uVar4 = _LC82;
   if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar4;
   }

   local_70 = (Object*)0x0;
   pOVar10 = (Object*)Variant::get_validated_object();
   pOVar5 = local_70;
   if (pOVar10 != local_70) {
      if (pOVar10 == (Object*)0x0) {
         if (local_70 != (Object*)0x0) {
            local_70 = (Object*)0x0;
            LAB_00111f17:cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(pOVar5);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

      }
 else {
         pOVar10 = (Object*)__dynamic_cast(pOVar10, &Object::typeinfo, &InputEvent::typeinfo, 0);
         if (pOVar5 != pOVar10) {
            local_70 = pOVar10;
            if (pOVar10 != (Object*)0x0) {
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') {
                  local_70 = (Object*)0x0;
               }

            }

            if (pOVar5 != (Object*)0x0) goto LAB_00111f17;
         }

      }

   }

   cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar14, 0x15);
   uVar4 = _LC68;
   if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar4;
   }

   Variant::operator_cast_to_StringName((Variant*)&local_68);
   bVar7 = (bool)( *(code*)pVVar16 )((Variant*)( (long)plVar13 + (long)pVVar1 ), (Variant*)&local_68, (Ref<InputEvent>*)&local_70);
   Variant::Variant((Variant*)local_58, bVar7);
   if (Variant::needs_deinit[*(int*)param_1] != '\0') {
      Variant::_clear_internal();
   }

   bVar7 = StringName::configured != '\0';
   *(undefined4*)param_1 = local_58[0];
   *(undefined8*)( param_1 + 8 ) = local_50;
   *(undefined8*)( param_1 + 0x10 ) = uStack_48;
   if (( bVar7 ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }

   Ref<InputEvent>::unref((Ref<InputEvent>*)&local_70);
   LAB_00111fd0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<InputEventKey>::unref() */void Ref<InputEventKey>::unref(Ref<InputEventKey> *this) {
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
/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */void CowData<String>::_ref(CowData<String> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   _unref(this);
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, Vector<String>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Vector<String> > > >::operator[](String const&) */undefined1 * __thiscallHashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>::operator [](HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>> * this, String * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__slong lVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]undefined1(*pauVar37)[16];char cVar38uint uVar39uint uVar40ulong uVar41undefined8 uVar42void *__s_00undefined1(*pauVar43)[16];void *pvVar44int iVar45long lVar46long lVar47ulong uVar48undefined8 uVar49uint uVar50uint uVar51ulong uVar52long lVar53uint uVar54uint uVar55undefined1(*pauVar56)[16];long in_FS_OFFSETundefined8 local_70undefined1 local_68[16]long local_58[2]undefined8 local_48long local_40uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );if (*(long*)( this + 8 ) == 0) {
   LAB_00112aac:local_70 = 0;
   uVar48 = (ulong)uVar55;
   uVar41 = uVar48 * 4;
   uVar52 = uVar48 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   pvVar44 = (void*)Memory::alloc_static(uVar52, false);
   *(void**)( this + 8 ) = pvVar44;
   if (uVar55 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar44 + uVar52 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)pvVar44 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         }
 while ( uVar48 != uVar41 );
      }
 else {
         memset(pvVar3, 0, uVar41);
         memset(pvVar44, 0, uVar52);
      }

      LAB_00112995:iVar45 = *(int*)( this + 0x2c );
      if (iVar45 != 0) {
         LAB_001129a5:uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar51 = String::hash();
         uVar41 = CONCAT44(0, uVar39);
         lVar53 = *(long*)( this + 0x10 );
         uVar40 = 1;
         if (uVar51 != 0) {
            uVar40 = uVar51;
         }

         uVar54 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar40 * lVar4;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar41;
         lVar46 = SUB168(auVar17 * auVar33, 8);
         uVar51 = *(uint*)( lVar53 + lVar46 * 4 );
         uVar50 = SUB164(auVar17 * auVar33, 8);
         if (uVar51 != 0) {
            do {
               if (uVar40 == uVar51) {
                  cVar38 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                  if (cVar38 != '\0') {
                     pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                     if (*(long*)pauVar43[2] != 0) {
                        CowData<String>::_ref((CowData<String>*)( pauVar43 + 2 ), (CowData*)&local_70);
                        pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                     }

                     goto LAB_0011284b;
                  }

                  lVar53 = *(long*)( this + 0x10 );
               }

               uVar54 = uVar54 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar50 + 1) * lVar4;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar41;
               lVar46 = SUB168(auVar18 * auVar34, 8);
               uVar51 = *(uint*)( lVar53 + lVar46 * 4 );
               uVar50 = SUB164(auVar18 * auVar34, 8);
            }
 while ( ( uVar51 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar51 * lVar4,auVar35._8_8_ = 0,auVar35._0_8_ = uVar41,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar39 + uVar50 ) - SUB164(auVar19 * auVar35, 8)) * lVar4,auVar36._8_8_ = 0,auVar36._0_8_ = uVar41,uVar54 <= SUB164(auVar20 * auVar36, 8) );
         }

         iVar45 = *(int*)( this + 0x2c );
      }

      uVar48 = (ulong)uVar55;
      goto LAB_00112467;
   }

   iVar45 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_00112467;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_001129a5;
   LAB_0011248d:uVar55 = *(uint*)( this + 0x28 );
   if (uVar55 == 0x1c) {
      pauVar43 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0011284b;
   }

   uVar41 = ( ulong )(uVar55 + 1);
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
   *(undefined4*)( this + 0x2c ) = 0;
   if (uVar55 + 1 < 2) {
      uVar41 = 2;
   }

   uVar55 = *(uint*)( hash_table_size_primes + uVar41 * 4 );
   *(int*)( this + 0x28 ) = (int)uVar41;
   pvVar44 = *(void**)( this + 8 );
   uVar48 = (ulong)uVar55;
   uVar41 = uVar48 * 4;
   pvVar3 = *(void**)( this + 0x10 );
   uVar52 = uVar48 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   __s_00 = (void*)Memory::alloc_static(uVar52, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar55 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar52 ) ) && ( __s_00 < (void*)( (long)__s + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)__s + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         }
 while ( uVar41 != uVar48 );
      }
 else {
         memset(__s, 0, uVar41);
         memset(__s_00, 0, uVar52);
      }

   }

   uVar41 = 0;
   if (uVar39 != 0) {
      do {
         uVar55 = *(uint*)( (long)pvVar3 + uVar41 * 4 );
         if (uVar55 != 0) {
            uVar50 = 0;
            lVar4 = *(long*)( this + 0x10 );
            uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar52 = CONCAT44(0, uVar40);
            lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar55 * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar52;
            lVar46 = SUB168(auVar5 * auVar21, 8);
            puVar1 = (uint*)( lVar4 + lVar46 * 4 );
            iVar45 = SUB164(auVar5 * auVar21, 8);
            uVar51 = *puVar1;
            uVar42 = *(undefined8*)( (long)pvVar44 + uVar41 * 8 );
            while (uVar51 != 0) {
               auVar6._8_8_ = 0;
               auVar6._0_8_ = (ulong)uVar51 * lVar53;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar52;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(( uVar40 + iVar45 ) - SUB164(auVar6 * auVar22, 8)) * lVar53;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar52;
               uVar54 = SUB164(auVar7 * auVar23, 8);
               uVar49 = uVar42;
               if (uVar54 < uVar50) {
                  *puVar1 = uVar55;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                  uVar49 = *puVar2;
                  *puVar2 = uVar42;
                  uVar55 = uVar51;
                  uVar50 = uVar54;
               }

               uVar50 = uVar50 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar52;
               lVar46 = SUB168(auVar8 * auVar24, 8);
               puVar1 = (uint*)( lVar4 + lVar46 * 4 );
               iVar45 = SUB164(auVar8 * auVar24, 8);
               uVar42 = uVar49;
               uVar51 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar42;
            *puVar1 = uVar55;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar41 = uVar41 + 1;
      }
 while ( uVar39 != uVar41 );
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      uVar41 = CONCAT44(0, uVar55);
      lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar40 = String::hash();
      uVar39 = 1;
      if (uVar40 != 0) {
         uVar39 = uVar40;
      }

      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar39 * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar41;
      lVar46 = SUB168(auVar13 * auVar29, 8);
      lVar53 = *(long*)( this + 0x10 );
      uVar51 = SUB164(auVar13 * auVar29, 8);
      uVar40 = *(uint*)( lVar53 + lVar46 * 4 );
      if (uVar40 == 0) {
         lVar47 = *(long*)( this + 8 );
      }
 else {
         uVar50 = 0;
         lVar47 = *(long*)( this + 8 );
         do {
            if (uVar39 == uVar40) {
               cVar38 = String::operator ==((String*)( *(long*)( lVar47 + lVar46 * 8 ) + 0x10 ), param_1);
               if (cVar38 != '\0') {
                  pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                  goto LAB_00112857;
               }

               lVar53 = *(long*)( this + 0x10 );
               lVar47 = *(long*)( this + 8 );
            }

            uVar50 = uVar50 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = ( ulong )(uVar51 + 1) * lVar4;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar41;
            lVar46 = SUB168(auVar14 * auVar30, 8);
            uVar40 = *(uint*)( lVar53 + lVar46 * 4 );
            uVar51 = SUB164(auVar14 * auVar30, 8);
         }
 while ( ( uVar40 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar40 * lVar4,auVar31._8_8_ = 0,auVar31._0_8_ = uVar41,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar51 + uVar55 ) - SUB164(auVar15 * auVar31, 8)) * lVar4,auVar32._8_8_ = 0,auVar32._0_8_ = uVar41,uVar50 <= SUB164(auVar16 * auVar32, 8) );
      }

      local_70 = 0;
      uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar47 == 0) goto LAB_00112aac;
      goto LAB_00112995;
   }

   local_70 = 0;
   uVar48 = (ulong)uVar55;
   iVar45 = 0;
   LAB_00112467:if ((float)uVar48 * __LC16 < (float)( iVar45 + 1 )) goto LAB_0011248d;
}
local_58[0] = 0;local_68 = (undefined1[16])0x0;if (*(long*)param_1 == 0) {
   local_48 = 0;
   pauVar43 = (undefined1(*) [16])operator_new(0x28, "");
   *(undefined8*)pauVar43[1] = 0;
   *pauVar43 = (undefined1[16])0x0;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
   lVar4 = local_58[0];
   uVar42 = local_68._0_8_;
   uVar49 = local_68._8_8_;
   local_48 = 0;
   pauVar43 = (undefined1(*) [16])operator_new(0x28, "");
   *(undefined8*)pauVar43[1] = 0;
   *(undefined8*)*pauVar43 = uVar42;
   *(undefined8*)( *pauVar43 + 8 ) = uVar49;
   if (lVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar43 + 1 ), (CowData*)local_58);
   }

}
*(undefined8*)pauVar43[2] = 0;CowData<String>::_unref((CowData<String>*)&local_48);CowData<char32_t>::_unref((CowData<char32_t>*)local_58);puVar2 = *(undefined8**)( this + 0x20 );if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar43;
}
 else {
   *puVar2 = pauVar43;
   *(undefined8**)( *pauVar43 + 8 ) = puVar2;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar43;uVar39 = String::hash();lVar4 = *(long*)( this + 0x10 );uVar55 = 1;if (uVar39 != 0) {
   uVar55 = uVar39;
}
uVar51 = 0;uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar41 = CONCAT44(0, uVar39);lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar9._8_8_ = 0;auVar9._0_8_ = (ulong)uVar55 * lVar53;auVar25._8_8_ = 0;auVar25._0_8_ = uVar41;lVar47 = SUB168(auVar9 * auVar25, 8);lVar46 = *(long*)( this + 8 );puVar1 = (uint*)( lVar4 + lVar47 * 4 );iVar45 = SUB164(auVar9 * auVar25, 8);uVar40 = *puVar1;pauVar37 = pauVar43;while (uVar40 != 0) {
   auVar10._8_8_ = 0;
   auVar10._0_8_ = (ulong)uVar40 * lVar53;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar41;
   auVar11._8_8_ = 0;
   auVar11._0_8_ = ( ulong )(( uVar39 + iVar45 ) - SUB164(auVar10 * auVar26, 8)) * lVar53;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar41;
   uVar50 = SUB164(auVar11 * auVar27, 8);
   pauVar56 = pauVar37;
   if (uVar50 < uVar51) {
      *puVar1 = uVar55;
      puVar2 = (undefined8*)( lVar46 + lVar47 * 8 );
      pauVar56 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar51 = uVar50;
      uVar55 = uVar40;
   }

   uVar51 = uVar51 + 1;
   auVar12._8_8_ = 0;
   auVar12._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar41;
   lVar47 = SUB168(auVar12 * auVar28, 8);
   puVar1 = (uint*)( lVar4 + lVar47 * 4 );
   iVar45 = SUB164(auVar12 * auVar28, 8);
   pauVar37 = pauVar56;
   uVar40 = *puVar1;
}
;*(undefined1(**) [16])( lVar46 + lVar47 * 8 ) = pauVar37;*puVar1 = uVar55;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0011284b:CowData<String>::_unref((CowData<String>*)&local_70);LAB_00112857:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar43[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
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
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar6 = 0;
      lVar7 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar6) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar7 = lVar6 * 8;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00113010:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar8 = param_1 * 8 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   lVar10 = uVar8 + 1;
   if (lVar10 == 0) goto LAB_00113010;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00112ee9:if (lVar10 != lVar7) {
               uVar4 = _realloc(this, lVar10);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar6 = *(long*)this;
               if (lVar6 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar6 + -8 ) = param_1;
            return 0;
         }

         while (true) {
            plVar2 = (long*)( lVar6 + uVar8 * 8 );
            if (*plVar2 != 0) break;
            uVar8 = uVar8 + 1;
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00112ee9;
         }
;
         LOCK();
         plVar1 = (long*)( *plVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar6 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

         uVar8 = uVar8 + 1;
         lVar6 = *(long*)this;
      }
;
      goto LAB_00113066;
   }

   if (lVar10 == lVar7) {
      LAB_00112f8f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00113066:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_00112f7a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00112f8f;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar6 = 0;
   }

   memset(puVar9 + lVar6, 0, ( param_1 - lVar6 ) * 8);
   LAB_00112f7a:puVar9[-1] = param_1;
   return 0;
}
/* HashMap<String, List<Ref<InputEvent>, DefaultAllocator>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   List<Ref<InputEvent>, DefaultAllocator> > > >::_resize_and_rehash(unsigned int) */void HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::_resize_and_rehash(HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>> *this, uint param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   void *pvVar6;
   void *pvVar7;
   void *__s;
   long lVar8;
   long lVar9;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined8 uVar18;
   void *__s_00;
   int iVar19;
   long lVar20;
   uint uVar21;
   ulong uVar22;
   undefined8 uVar23;
   uint uVar24;
   ulong uVar25;
   ulong uVar26;
   uint local_78;
   *(undefined4*)( this + 0x2c ) = 0;
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (param_1 < 2) {
      param_1 = 2;
   }

   *(uint*)( this + 0x28 ) = param_1;
   uVar21 = *(uint*)( hash_table_size_primes + (ulong)param_1 * 4 );
   uVar22 = (ulong)uVar21;
   pvVar6 = *(void**)( this + 8 );
   pvVar7 = *(void**)( this + 0x10 );
   uVar26 = uVar22 * 4;
   uVar25 = uVar22 * 8;
   uVar18 = Memory::alloc_static(uVar26, false);
   *(undefined8*)( this + 0x10 ) = uVar18;
   __s_00 = (void*)Memory::alloc_static(uVar25, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar21 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar25 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
         uVar26 = 0;
         do {
            *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
            uVar26 = uVar26 + 1;
         }
 while ( uVar22 != uVar26 );
      }
 else {
         memset(__s, 0, uVar26);
         memset(__s_00, 0, uVar25);
      }

   }

   if (uVar3 != 0) {
      uVar26 = 0;
      do {
         uVar21 = *(uint*)( (long)pvVar7 + uVar26 * 4 );
         if (uVar21 != 0) {
            uVar24 = 0;
            lVar8 = *(long*)( this + 0x10 );
            uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar25 = CONCAT44(0, uVar4);
            lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar21 * lVar9;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar25;
            lVar20 = SUB168(auVar10 * auVar14, 8);
            puVar1 = (uint*)( lVar8 + lVar20 * 4 );
            iVar19 = SUB164(auVar10 * auVar14, 8);
            uVar5 = *puVar1;
            uVar18 = *(undefined8*)( (long)pvVar6 + uVar26 * 8 );
            while (uVar5 != 0) {
               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar5 * lVar9;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar25;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(( uVar4 + iVar19 ) - SUB164(auVar11 * auVar15, 8)) * lVar9;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar25;
               local_78 = SUB164(auVar12 * auVar16, 8);
               uVar23 = uVar18;
               if (local_78 < uVar24) {
                  *puVar1 = uVar21;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar20 * 8 );
                  uVar23 = *puVar2;
                  *puVar2 = uVar18;
                  uVar21 = uVar5;
                  uVar24 = local_78;
               }

               uVar24 = uVar24 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar19 + 1) * lVar9;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar25;
               lVar20 = SUB168(auVar13 * auVar17, 8);
               puVar1 = (uint*)( lVar8 + lVar20 * 4 );
               iVar19 = SUB164(auVar13 * auVar17, 8);
               uVar18 = uVar23;
               uVar5 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar26 = uVar26 + 1;
      }
 while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, List<Ref<InputEvent>, DefaultAllocator>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   List<Ref<InputEvent>, DefaultAllocator> > > >::insert(String const&, List<Ref<InputEvent>,
   DefaultAllocator> const&, bool) */String *HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>::insert(String *param_1, List *param_2, bool param_3) {
   long lVar1;
   undefined8 *puVar2;
   void *__s;
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
   char cVar19;
   uint uVar20;
   uint uVar21;
   undefined1(*pauVar22)[16];
   undefined1(*pauVar23)[16];
   undefined8 uVar24;
   void *__s_00;
   ulong uVar25;
   long *in_RCX;
   int iVar26;
   uint uVar27;
   undefined7 in_register_00000011;
   String *pSVar28;
   long lVar29;
   long lVar30;
   uint *puVar31;
   ulong uVar32;
   uint uVar33;
   char in_R8B;
   uint uVar34;
   long lVar35;
   ulong uVar36;
   long *plVar37;
   uint uVar38;
   long *plVar39;
   long in_FS_OFFSET;
   long *plStack_a0;
   CowData *local_98;
   long local_58;
   undefined1(*local_50[2])[16];
   long local_40;
   pSVar28 = (String*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar21 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar32 = (ulong)uVar21;
      uVar25 = uVar32 * 4;
      uVar36 = uVar32 * 8;
      uVar24 = Memory::alloc_static(uVar25, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar24;
      __s_00 = (void*)Memory::alloc_static(uVar36, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar21 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar36 ) ) && ( __s_00 < (void*)( (long)__s + uVar25 ) )) {
            uVar25 = 0;
            do {
               *(undefined4*)( (long)__s + uVar25 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar25 * 8 ) = 0;
               uVar25 = uVar25 + 1;
            }
 while ( uVar32 != uVar25 );
         }
 else {
            memset(__s, 0, uVar25);
            memset(__s_00, 0, uVar36);
         }

         goto LAB_001132ff;
      }

      iVar26 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_0011330e;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_00113700;
      LAB_00113330:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         plStack_a0 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0);
         goto LAB_001136b7;
      }

      _resize_and_rehash((HashMap<String,List<Ref<InputEvent>,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,List<Ref<InputEvent>,DefaultAllocator>>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_001132ff:iVar26 = *(int*)( param_2 + 0x2c );
      if (iVar26 != 0) {
         LAB_00113700:uVar20 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar34 = String::hash();
         uVar25 = CONCAT44(0, uVar20);
         lVar35 = *(long*)( param_2 + 0x10 );
         uVar33 = 1;
         if (uVar34 != 0) {
            uVar33 = uVar34;
         }

         uVar38 = 0;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = (ulong)uVar33 * lVar1;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = uVar25;
         lVar30 = SUB168(auVar7 * auVar15, 8);
         uVar34 = *(uint*)( lVar35 + lVar30 * 4 );
         uVar27 = SUB164(auVar7 * auVar15, 8);
         if (uVar34 != 0) {
            do {
               if (uVar33 == uVar34) {
                  cVar19 = String::operator ==((String*)( *(long*)( *(long*)( param_2 + 8 ) + lVar30 * 8 ) + 0x10 ), pSVar28);
                  if (cVar19 != '\0') {
                     lVar1 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                     List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)( lVar1 + 0x18 ));
                     if (( (long*)*in_RCX != (long*)0x0 ) && ( plVar37 = *(long**)*in_RCX ),plVar37 != (long*)0x0) {
                        if (*(long*)( lVar1 + 0x18 ) == 0) {
                           pauVar22 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                           *(undefined1(**) [16])( lVar1 + 0x18 ) = pauVar22;
                           *(undefined4*)pauVar22[1] = 0;
                           *pauVar22 = (undefined1[16])0x0;
                        }

                        do {
                           pauVar22 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
                           *pauVar22 = (undefined1[16])0x0;
                           pauVar22[1] = (undefined1[16])0x0;
                           if (*plVar37 != 0) {
                              *(long*)*pauVar22 = *plVar37;
                              cVar19 = RefCounted::reference();
                              if (cVar19 == '\0') {
                                 *(undefined8*)*pauVar22 = 0;
                              }

                           }

                           plVar39 = *(long**)( lVar1 + 0x18 );
                           lVar35 = plVar39[1];
                           *(undefined8*)( *pauVar22 + 8 ) = 0;
                           *(long**)( pauVar22[1] + 8 ) = plVar39;
                           *(long*)pauVar22[1] = lVar35;
                           if (lVar35 != 0) {
                              *(undefined1(**) [16])( lVar35 + 8 ) = pauVar22;
                           }

                           plVar39[1] = (long)pauVar22;
                           if (*plVar39 == 0) {
                              plVar37 = (long*)plVar37[1];
                              *(int*)( plVar39 + 2 ) = (int)plVar39[2] + 1;
                              *plVar39 = (long)pauVar22;
                           }
 else {
                              plVar37 = (long*)plVar37[1];
                              *(int*)( plVar39 + 2 ) = (int)plVar39[2] + 1;
                           }

                        }
 while ( plVar37 != (long*)0x0 );
                     }

                     plStack_a0 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                     goto LAB_001136b7;
                  }

                  lVar35 = *(long*)( param_2 + 0x10 );
               }

               uVar38 = uVar38 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(uVar27 + 1) * lVar1;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar25;
               lVar30 = SUB168(auVar8 * auVar16, 8);
               uVar34 = *(uint*)( lVar35 + lVar30 * 4 );
               uVar27 = SUB164(auVar8 * auVar16, 8);
            }
 while ( ( uVar34 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar34 * lVar1,auVar17._8_8_ = 0,auVar17._0_8_ = uVar25,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar20 + uVar27 ) - SUB164(auVar9 * auVar17, 8)) * lVar1,auVar18._8_8_ = 0,auVar18._0_8_ = uVar25,uVar38 <= SUB164(auVar10 * auVar18, 8) );
         }

         iVar26 = *(int*)( param_2 + 0x2c );
      }

      LAB_0011330e:if ((float)uVar21 * __LC16 < (float)( iVar26 + 1 )) goto LAB_00113330;
   }

   local_58 = 0;
   if (*(long*)pSVar28 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)pSVar28);
   }

   lVar1 = local_58;
   local_98 = (CowData*)&local_58;
   local_50[0] = (undefined1(*) [16])0x0;
   if (( (long*)*in_RCX == (long*)0x0 ) || ( plVar37 = *(long**)*in_RCX ),plVar37 == (long*)0x0) {
      plStack_a0 = (long*)operator_new(0x20, "");
      plStack_a0[2] = 0;
      *plStack_a0 = 0;
      plStack_a0[1] = 0;
      if (lVar1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( plStack_a0 + 2 ), local_98);
      }

      plStack_a0[3] = 0;
   }
 else {
      pauVar22 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)pauVar22[1] = 0;
      *pauVar22 = (undefined1[16])0x0;
      local_50[0] = pauVar22;
      do {
         while (true) {
            pauVar23 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
            *pauVar23 = (undefined1[16])0x0;
            pauVar23[1] = (undefined1[16])0x0;
            if (*plVar37 != 0) {
               *(long*)*pauVar23 = *plVar37;
               cVar19 = RefCounted::reference();
               if (cVar19 == '\0') {
                  *(undefined8*)*pauVar23 = 0;
               }

            }

            lVar35 = *(long*)( *pauVar22 + 8 );
            *(undefined8*)( *pauVar23 + 8 ) = 0;
            *(undefined1(**) [16])( pauVar23[1] + 8 ) = pauVar22;
            *(long*)pauVar23[1] = lVar35;
            if (lVar35 != 0) {
               *(undefined1(**) [16])( lVar35 + 8 ) = pauVar23;
            }

            lVar35 = *(long*)*pauVar22;
            *(undefined1(**) [16])( *pauVar22 + 8 ) = pauVar23;
            if (lVar35 != 0) break;
            plVar37 = (long*)plVar37[1];
            *(int*)pauVar22[1] = *(int*)pauVar22[1] + 1;
            *(undefined1(**) [16])*pauVar22 = pauVar23;
            if (plVar37 == (long*)0x0) goto LAB_0011346d;
         }
;
         plVar37 = (long*)plVar37[1];
         *(int*)pauVar22[1] = *(int*)pauVar22[1] + 1;
      }
 while ( plVar37 != (long*)0x0 );
      LAB_0011346d:plStack_a0 = (long*)operator_new(0x20, "");
      plStack_a0[2] = 0;
      *plStack_a0 = 0;
      plStack_a0[1] = 0;
      if (lVar1 == 0) {
         plStack_a0[3] = 0;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( plStack_a0 + 2 ), local_98);
         plStack_a0[3] = 0;
      }

      plVar37 = *(long**)*pauVar22;
      if (plVar37 != (long*)0x0) {
         pauVar22 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         plStack_a0[3] = (long)pauVar22;
         *(undefined4*)pauVar22[1] = 0;
         *pauVar22 = (undefined1[16])0x0;
         do {
            while (true) {
               pauVar22 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
               *pauVar22 = (undefined1[16])0x0;
               pauVar22[1] = (undefined1[16])0x0;
               if (*plVar37 != 0) {
                  *(long*)*pauVar22 = *plVar37;
                  cVar19 = RefCounted::reference();
                  if (cVar19 == '\0') {
                     *(undefined8*)*pauVar22 = 0;
                  }

               }

               plVar39 = (long*)plStack_a0[3];
               lVar1 = plVar39[1];
               *(undefined8*)( *pauVar22 + 8 ) = 0;
               *(long**)( pauVar22[1] + 8 ) = plVar39;
               *(long*)pauVar22[1] = lVar1;
               if (lVar1 != 0) {
                  *(undefined1(**) [16])( lVar1 + 8 ) = pauVar22;
               }

               plVar39[1] = (long)pauVar22;
               if (*plVar39 != 0) break;
               plVar37 = (long*)plVar37[1];
               *(int*)( plVar39 + 2 ) = (int)plVar39[2] + 1;
               *plVar39 = (long)pauVar22;
               if (plVar37 == (long*)0x0) goto LAB_0011356f;
            }
;
            plVar37 = (long*)plVar37[1];
            *(int*)( plVar39 + 2 ) = (int)plVar39[2] + 1;
         }
 while ( plVar37 != (long*)0x0 );
      }

   }

   LAB_0011356f:List<Ref<InputEvent>,DefaultAllocator>::clear((List<Ref<InputEvent>,DefaultAllocator>*)local_50);
   if (local_50[0] != (undefined1(*) [16])0x0) {
      if (*(int*)local_50[0][1] == 0) {
         Memory::free_static(local_50[0], false);
      }
 else {
         _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   puVar2 = *(undefined8**)( param_2 + 0x20 );
   if (puVar2 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = plStack_a0;
      *(long**)( param_2 + 0x20 ) = plStack_a0;
   }
 else if (in_R8B == '\0') {
      *puVar2 = plStack_a0;
      plStack_a0[1] = (long)puVar2;
      *(long**)( param_2 + 0x20 ) = plStack_a0;
   }
 else {
      lVar1 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar1 + 8 ) = plStack_a0;
      *plStack_a0 = lVar1;
      *(long**)( param_2 + 0x18 ) = plStack_a0;
   }

   uVar20 = String::hash();
   lVar1 = *(long*)( param_2 + 0x10 );
   uVar21 = 1;
   if (uVar20 != 0) {
      uVar21 = uVar20;
   }

   uVar36 = (ulong)uVar21;
   uVar20 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar25 = CONCAT44(0, uVar20);
   lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   auVar3._8_8_ = 0;
   auVar3._0_8_ = uVar36 * lVar35;
   auVar11._8_8_ = 0;
   auVar11._0_8_ = uVar25;
   lVar29 = SUB168(auVar3 * auVar11, 8);
   lVar30 = *(long*)( param_2 + 8 );
   puVar31 = (uint*)( lVar1 + lVar29 * 4 );
   iVar26 = SUB164(auVar3 * auVar11, 8);
   uVar33 = *puVar31;
   plVar37 = plStack_a0;
   if (uVar33 != 0) {
      uVar34 = 0;
      plVar39 = plStack_a0;
      do {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = (ulong)uVar33 * lVar35;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = uVar25;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = ( ulong )(( iVar26 + uVar20 ) - SUB164(auVar4 * auVar12, 8)) * lVar35;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = uVar25;
         uVar21 = SUB164(auVar5 * auVar13, 8);
         plVar37 = plVar39;
         if (uVar21 < uVar34) {
            *puVar31 = (uint)uVar36;
            uVar36 = (ulong)uVar33;
            puVar2 = (undefined8*)( lVar30 + lVar29 * 8 );
            plVar37 = (long*)*puVar2;
            *puVar2 = plVar39;
            uVar34 = uVar21;
         }

         uVar21 = (uint)uVar36;
         uVar34 = uVar34 + 1;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = ( ulong )(iVar26 + 1) * lVar35;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar25;
         lVar29 = SUB168(auVar6 * auVar14, 8);
         puVar31 = (uint*)( lVar1 + lVar29 * 4 );
         iVar26 = SUB164(auVar6 * auVar14, 8);
         uVar33 = *puVar31;
         plVar39 = plVar37;
      }
 while ( uVar33 != 0 );
   }

   *(long**)( lVar30 + lVar29 * 8 ) = plVar37;
   *puVar31 = uVar21;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_001136b7:*(long**)param_1 = plStack_a0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00113d19) *//* WARNING: Removing unreachable block (ram,0x00113d22) *//* WARNING: Removing unreachable block (ram,0x00113d32) *//* WARNING: Removing unreachable block (ram,0x00113d42) *//* void call_with_variant_args_dv<__UnexistingClass, StringName const&, Ref<InputEvent>
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(StringName const&, Ref<InputEvent>
   const&), Variant const**, int, Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,StringName_const&,Ref<InputEvent>const&>(__UnexistingClass *param_1, _func_void_StringName_ptr_Ref_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   undefined4 uVar6;
   long lVar7;
   Object *pOVar8;
   undefined4 in_register_0000000c;
   long *plVar9;
   long lVar10;
   uint uVar11;
   int iVar12;
   undefined4 *puVar13;
   undefined4 *puVar14;
   long in_FS_OFFSET;
   long in_stack_00000008;
   Object *local_40;
   long local_38;
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_0000000c, param_4);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar11 = (uint)param_5;
   if (uVar11 < 3) {
      lVar7 = *(long*)( in_stack_00000008 + 8 );
      iVar5 = 2 - uVar11;
      if (lVar7 == 0) {
         if (iVar5 != 0) goto LAB_00113cb0;
         puVar13 = (undefined4*)*plVar9;
         LAB_00113cfd:puVar14 = (undefined4*)plVar9[1];
      }
 else {
         lVar1 = *(long*)( lVar7 + -8 );
         iVar12 = (int)lVar1;
         if (iVar12 < iVar5) {
            LAB_00113cb0:uVar6 = 4;
            goto LAB_00113cb5;
         }

         if (uVar11 == 0) {
            lVar10 = (long)( iVar12 + -2 );
            if (lVar1 <= lVar10) goto LAB_00113d68;
            puVar13 = (undefined4*)( lVar7 + lVar10 * 0x18 );
         }
 else {
            puVar13 = (undefined4*)*plVar9;
            if (uVar11 == 2) goto LAB_00113cfd;
         }

         lVar10 = (long)(int)( ( uVar11 ^ 1 ) + ( iVar12 - iVar5 ) );
         if (lVar1 <= lVar10) {
            LAB_00113d68:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar1, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         puVar14 = (undefined4*)( lVar7 + lVar10 * 0x18 );
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_StringName_ptr_Ref_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar4 = Variant::can_convert_strict(*puVar14);
      uVar3 = _LC82;
      if (cVar4 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar3;
      }

      local_40 = (Object*)0x0;
      lVar7 = Variant::get_validated_object();
      if (( ( ( lVar7 != 0 ) && ( lVar7 != 0 ) ) && ( pOVar8 = (Object*)__dynamic_cast(lVar7, &Object::typeinfo, &InputEvent::typeinfo, 0) ),pOVar8 != (Object*)0x0 )) {
         local_40 = (Object*)0x0;
      }

      cVar4 = Variant::can_convert_strict(*puVar13, 0x15);
      uVar3 = _LC68;
      if (cVar4 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar3;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_38);
      ( *param_2 )((StringName*)( param_1 + (long)param_3 ), (Ref*)&local_38);
      if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
         StringName::unref();
      }

      if (( ( local_40 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_40 + 0x140 ))(local_40);
      Memory::free_static(local_40, false);
   }

}
else{uVar6 = 3;LAB_00113cb5:*(undefined4*)param_6 = uVar6;*(undefined4*)( param_6 + 8 ) = 2;}if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* MethodBindT<StringName const&, Ref<InputEvent> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<StringName_const&,Ref<InputEvent>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var3 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var3 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var3 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var3 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var3 + 8 ) == 0) {
         plVar2 = *(long**)( p_Var3 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)p_Var3 + 0x40 ) )(p_Var3);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( p_Var3 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC59, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar2 = (long*)( local_48 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00113e06;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,StringName_const&,Ref<InputEvent>const&>(p_Var3, (_func_void_StringName_ptr_Ref_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00113e06:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, StringName const&, float>(__UnexistingClass*,
   void (__UnexistingClass::*)(StringName const&, float), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,StringName_const&,float>(__UnexistingClass *param_1, _func_void_StringName_ptr_float *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
   undefined4 *puVar10;
   uint uVar11;
   int iVar12;
   Variant *this;
   long in_FS_OFFSET;
   float fVar13;
   long in_stack_00000008;
   long local_38;
   long local_30;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar11 = (uint)param_5;
   if (uVar11 < 3) {
      lVar1 = *(long*)( in_stack_00000008 + 8 );
      iVar6 = 2 - uVar11;
      if (lVar1 == 0) {
         if (iVar6 != 0) goto LAB_00114148;
         puVar10 = (undefined4*)*plVar8;
         LAB_0011419d = (Variant*)plVar8[1];
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         iVar12 = (int)lVar2;
         if (iVar12 < iVar6) {
            LAB_00114148:uVar7 = 4;
            goto LAB_0011414d;
         }

         if (uVar11 == 0) {
            lVar9 = (long)( iVar12 + -2 );
            if (lVar2 <= lVar9) goto LAB_001141b8;
            puVar10 = (undefined4*)( lVar1 + lVar9 * 0x18 );
         }
 else {
            puVar10 = (undefined4*)*plVar8;
            if (uVar11 == 2) goto LAB_0011419d;
         }

         lVar9 = (long)(int)( ( uVar11 ^ 1 ) + ( iVar12 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_001141b8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar9 * 0x18);
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_StringName_ptr_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 3);
      uVar4 = _LC176;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      fVar13 = Variant::operator_cast_to_float(this);
      cVar5 = Variant::can_convert_strict(*puVar10, 0x15);
      uVar4 = _LC68;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_38);
      ( *param_2 )((StringName*)( param_1 + (long)param_3 ), fVar13);
      if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
         StringName::unref();
      }

   }
 else {
      uVar7 = 3;
      LAB_0011414d:*(undefined4*)param_6 = uVar7;
      *(undefined4*)( param_6 + 8 ) = 2;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&, float>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<StringName_const&,float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   p_Var3 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var3 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var3 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var3 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var3 + 8 ) == 0) {
         plVar2 = *(long**)( p_Var3 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)p_Var3 + 0x40 ) )(p_Var3);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( p_Var3 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC59, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar2 = (long*)( local_50 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00114256;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,StringName_const&,float>(p_Var3, (_func_void_StringName_ptr_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00114256:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<Ref<InputEvent> const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Ref<InputEvent>const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int iVar4;
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = *param_2;
   if (iVar4 != param_1) goto LAB_00114477;
   local_78 = 0;
   local_68 = "InputEvent";
   local_80 = 0;
   local_60._0_8_ = 10;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0011463d:local_40 = 6;
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
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 == 0x11) goto LAB_0011463d;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_68._0_4_;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar2;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar2;
   }

   *(int*)( param_3 + 0x18 ) = local_50;
   if (*(long*)( param_3 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar3 = local_48;
      local_48 = 0;
      *(long*)( param_3 + 0x20 ) = lVar3;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   iVar4 = *param_2;
   LAB_00114477:*param_2 = iVar4 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<StringName_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int iVar5;
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *param_2;
   if (iVar5 != param_1) goto LAB_001146c7;
   local_78 = 0;
   local_68 = &_LC6;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x15);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001147c5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001147c5;
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

   *(undefined4*)param_3 = local_68._0_4_;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar3;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar3;
   }

   *(int*)( param_3 + 0x18 ) = local_50;
   if (*(long*)( param_3 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( param_3 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   iVar5 = *param_2;
   LAB_001146c7:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTRC<bool, StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool,StringName_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
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
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<StringName_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar3 = local_60._0_8_;
      uVar4 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar5 = local_68._0_4_;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_50;
      *(undefined8*)( puVar5 + 8 ) = local_48;
      puVar5[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_00114998;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC6;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 1;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_00114a7f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_00114a7f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(undefined**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar5 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_00114998:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<float, StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<float,StringName_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
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
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<StringName_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar3 = local_60._0_8_;
      uVar4 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar5 = local_68._0_4_;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_50;
      *(undefined8*)( puVar5 + 8 ) = local_48;
      puVar5[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_00114b98;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC6;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 3;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_00114c7f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_00114c7f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(undefined**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar5 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_00114b98:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<StringName_const&>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   local_14 = 0;
   call_get_argument_type_info_helper<StringName_const&>(in_EDX, &local_14, pPVar1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<TypedArray<InputEvent>, StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<TypedArray<InputEvent>,StringName_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
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
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (char*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<StringName_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar2 = local_60._0_8_;
      uVar3 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_00114e18;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = "InputEvent";
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 10;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar4 = 0x1c;
   puVar4[6] = 0x1f;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_00114eff:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_00114eff;
      StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(char**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar4 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_00114e18:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&, float>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<StringName_const&,float>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar5;
   long in_FS_OFFSET;
   int local_8c;
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
   pPVar5 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar5 = 0;
   *(undefined4*)( pPVar5 + 0x18 ) = 0;
   *(undefined8*)( pPVar5 + 0x20 ) = 0;
   *(undefined4*)( pPVar5 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar5 + 8 ) = (undefined1[16])0x0;
   local_8c = 0;
   call_get_argument_type_info_helper<StringName_const&>(in_EDX, &local_8c, pPVar5);
   if (in_EDX != local_8c) goto LAB_00114fd4;
   local_78 = 0;
   local_68 = &_LC6;
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
      LAB_001150d5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001150d5;
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

   *(undefined4*)pPVar5 = local_68._0_4_;
   if (*(long*)( pPVar5 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar5 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( pPVar5 + 8 ) = uVar3;
   }

   if (*(long*)( pPVar5 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( pPVar5 + 0x10 ) = uVar3;
   }

   *(int*)( pPVar5 + 0x18 ) = local_50;
   if (*(long*)( pPVar5 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar5 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( pPVar5 + 0x20 ) = lVar4;
   }

   *(undefined4*)( pPVar5 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_00114fd4:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pPVar5;
}
/* MethodBindTR<bool, StringName const&, Ref<InputEvent> const&>::_gen_argument_type_info(int) const
    */undefined4 *MethodBindTR<bool,StringName_const&,Ref<InputEvent>const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 2) {
      local_60 = (undefined1[16])0x0;
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      call_get_argument_type_info_helper<StringName_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      call_get_argument_type_info_helper<Ref<InputEvent>const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar3 = local_60._0_8_;
      uVar4 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar5 = local_68._0_4_;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_50;
      *(undefined8*)( puVar5 + 8 ) = local_48;
      puVar5[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_00115384;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC6;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 1;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_001153af:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_001153af;
      StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(undefined**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar5 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_00115384:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, Ref<InputEvent> const&, StringName const&,
   bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool,Ref<InputEvent>const&,StringName_const&,bool>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   undefined8 uVar6;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   uint local_bc;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 3) {
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
      local_98 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 6;
      local_bc = 0;
      call_get_argument_type_info_helper<Ref<InputEvent>const&>(in_EDX, (int*)&local_bc, (PropertyInfo*)&local_98);
      call_get_argument_type_info_helper<StringName_const&>(in_EDX, (int*)&local_bc, (PropertyInfo*)&local_98);
      if (in_EDX == local_bc) {
         local_a8 = 0;
         local_68 = &_LC6;
         local_b0 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_60._8_8_;
         local_60 = auVar3 << 0x40;
         String::parse_latin1((StrRange*)&local_b0);
         local_b8 = 0;
         local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
         local_50 = 0;
         local_48 = 0;
         local_60 = (undefined1[16])0x0;
         if (local_b0 == 0) {
            LAB_0011572b:local_40 = 6;
            StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
            local_40 = 6;
            if (local_50 != 0x11) goto LAB_0011572b;
            StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
            if (local_60._8_8_ == local_a0) {
               if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
                  StringName::unref();
               }

            }
 else {
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
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_60._8_8_;
            local_60 = auVar4 << 0x40;
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
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      }

      uVar6 = local_90._8_8_;
      uVar5 = local_90._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_90._8_8_;
      local_90 = auVar1 << 0x40;
      *puVar7 = (undefined4)local_98;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
      *(undefined8*)( puVar7 + 4 ) = uVar6;
      puVar7[6] = (undefined4)local_80;
      *(long*)( puVar7 + 8 ) = local_78;
      puVar7[10] = local_70;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      goto LAB_001154e1;
   }

   local_98 = 0;
   local_a0 = 0;
   local_68 = &_LC6;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar7 = 1;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar7[10] = 6;
      LAB_001155d7:StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)&local_98);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 8 ), (CowData*)&local_a0);
      puVar7[10] = 6;
      if (puVar7[6] != 0x11) goto LAB_001155d7;
      StringName::StringName((StringName*)&local_68, (String*)( puVar7 + 8 ), false);
      if (*(undefined**)( puVar7 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar7 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_001154e1:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* MethodBindT<StringName const&, Ref<InputEvent> const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<StringName_const&,Ref<InputEvent>const&>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   local_24 = 0;
   call_get_argument_type_info_helper<StringName_const&>(in_EDX, &local_24, pPVar1);
   call_get_argument_type_info_helper<Ref<InputEvent>const&>(in_EDX, &local_24, pPVar1);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Ref<InputEvent>, DefaultAllocator>::~List() */void List<Ref<InputEvent>,DefaultAllocator>::~List(List<Ref<InputEvent>,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool, Ref<InputEvent> const&, StringName const&, bool>::~MethodBindTRC() */void MethodBindTRC<bool,Ref<InputEvent>const&,StringName_const&,bool>::~MethodBindTRC(MethodBindTRC<bool,Ref<InputEvent>const&,StringName_const&,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<TypedArray<InputEvent>, StringName const&>::~MethodBindTR() */void MethodBindTR<TypedArray<InputEvent>,StringName_const&>::~MethodBindTR(MethodBindTR<TypedArray<InputEvent>,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<StringName const&, Ref<InputEvent> const&>::~MethodBindT() */void MethodBindT<StringName_const&,Ref<InputEvent>const&>::~MethodBindT(MethodBindT<StringName_const&,Ref<InputEvent>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<bool, StringName const&, Ref<InputEvent> const&>::~MethodBindTR() */void MethodBindTR<bool,StringName_const&,Ref<InputEvent>const&>::~MethodBindTR(MethodBindTR<bool,StringName_const&,Ref<InputEvent>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<float, StringName const&>::~MethodBindTR() */void MethodBindTR<float,StringName_const&>::~MethodBindTR(MethodBindTR<float,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<TypedArray<StringName>>::~MethodBindTR() */void MethodBindTR<TypedArray<StringName>>::~MethodBindTR(MethodBindTR<TypedArray<StringName>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<StringName const&, float>::~MethodBindT() */void MethodBindT<StringName_const&,float>::~MethodBindT(MethodBindT<StringName_const&,float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


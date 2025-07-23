/* Resource::reset_local_to_scene() */void Resource::reset_local_to_scene(void) {
   return;
}
/* Resource::editor_can_reload_from_file() */undefined8 Resource::editor_can_reload_from_file(void) {
   return 1;
}
/* Resource::_set_path(String const&) */void Resource::_set_path(Resource *this, String *param_1) {
   /* WARNING: Could not recover jumptable at 0x00100030. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this + 0x188 ) )(this, param_1, 0);
   return;
}
/* Resource::_take_over_path(String const&) */void Resource::_take_over_path(Resource *this, String *param_1) {
   /* WARNING: Could not recover jumptable at 0x00100053. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this + 0x188 ) )(this, param_1, 1);
   return;
}
/* Resource::set_local_to_scene(bool) */void Resource::set_local_to_scene(Resource *this, bool param_1) {
   this[0x1b0] = (Resource)param_1;
   return;
}
/* Resource::is_local_to_scene() const */Resource Resource::is_local_to_scene(Resource *this) {
   return this[0x1b0];
}
/* Resource::get_local_scene() const */void Resource::get_local_scene(Resource *this) {
   if (( *(long*)( this + 0x1b8 ) == 0 ) && ( _get_local_scene_func != (code*)0x0 )) {
      /* WARNING: Could not recover jumptable at 0x001000a4. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_get_local_scene_func )();
      return;
   }

   return;
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
/* HashMap<Ref<Resource>, Ref<Resource>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<Resource> >, DefaultTypedAllocator<HashMapElement<Ref<Resource>,
   Ref<Resource> > > >::_lookup_pos(Ref<Resource> const&, unsigned int&) const [clone .isra.0] */undefined8 HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>::_lookup_pos(HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref < Resource>>> > *this, Ref *param_1, uint *param_2) {
   long lVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   ulong uVar10;
   uint uVar11;
   long lVar12;
   ulong uVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar15 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( this + 0x28 )]);
      lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar10 = (long)param_1 * 0x3ffff - 1;
      uVar10 = ( uVar10 ^ uVar10 >> 0x1f ) * 0x15;
      uVar10 = ( uVar10 ^ uVar10 >> 0xb ) * 0x41;
      uVar10 = uVar10 >> 0x16 ^ uVar10;
      uVar13 = uVar10 & 0xffffffff;
      if ((int)uVar10 == 0) {
         uVar13 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar13 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar15;
      lVar12 = SUB168(auVar2 * auVar6, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar12 * 4 );
      uVar11 = SUB164(auVar2 * auVar6, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( (uint)uVar13 == uVar14 ) && ( *(Ref**)( *(long*)( *(long*)( this + 8 ) + lVar12 * 8 ) + 0x10 ) == param_1 )) {
               *param_2 = uVar11;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(uVar11 + 1) * lVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar15;
            lVar12 = SUB168(auVar3 * auVar7, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar12 * 4 );
            uVar11 = SUB164(auVar3 * auVar7, 8);
            if (uVar14 == 0) {
               return 0;
            }

            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar14 * lVar1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(( ( &hash_table_size_primes )[*(uint*)( this + 0x28 )] + uVar11 ) - SUB164(auVar4 * auVar8, 8)) * lVar1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar15;
         }
 while ( uVar16 <= SUB164(auVar5 * auVar9, 8) );
         return 0;
      }

   }

   return 0;
}
/* Resource::emit_changed() */void Resource::emit_changed(Resource *this) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
      /* WARNING: Subroutine does not return */
      ResourceLoader::load_nesting();
   }

   if (0 < *(int*)( in_FS_OFFSET + lRam0000000000100332 )) {
      if (PTR_caller_id_0011b008 != (undefined*)0x0) {
         /* WARNING: Subroutine does not return */
         Thread::caller_id();
      }

      if (*(long*)( in_FS_OFFSET + lRam000000000010034f ) != 1) {
         if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
            ResourceLoader::resource_changed_emit(this);
            return;
         }

         goto LAB_001003da;
      }

   }

   ( **(code**)( *(long*)this + 0xd0 ) )(this, CoreStringNames::singleton + 8, 0, 0);
   if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001003da:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Ref<Resource>::TEMPNAMEPLACEHOLDERVALUE(Ref<Resource> const&) [clone .isra.0] */void Ref<Resource>::operator =(Ref<Resource> *this, Ref *param_1) {
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
/* Resource::get_path() const */void Resource::get_path(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x188 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x188 ));
   }

   return;
}
/* Resource::get_scene_unique_id() const */void Resource::get_scene_unique_id(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 400 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 400 ));
   }

   return;
}
/* Resource::get_name() const */void Resource::get_name(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x180 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x180 ));
   }

   return;
}
/* Resource::set_name(String const&) */void Resource::set_name(Resource *this, String *param_1) {
   if (*(long*)( this + 0x180 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x180 ), (CowData*)param_1);
   }

   emit_changed(this);
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
/* Resource::generate_scene_unique_id() */Resource * __thiscall Resource::generate_scene_unique_id(Resource *this){
   char cVar1;
   pcg32_random_t *this_00;
   ulong uVar2;
   long lVar3;
   uint uVar4;
   long *plVar5;
   int iVar6;
   ulong uVar7;
   ulong *in_FS_OFFSET;
   long local_48;
   int local_40;
   byte local_3c;
   byte local_3a;
   byte local_39;
   byte local_38;
   ulong local_30;
   this_00 = (pcg32_random_t*)*in_FS_OFFSET;
   local_30 = in_FS_OFFSET[5];
   if ((char)*in_FS_OFFSET == '\0') {
      *(char*)in_FS_OFFSET = '\x01';
      RandomPCG::RandomPCG((RandomPCG*)this_00, 0, 0x14057b7ef767814f);
      uVar7 = *in_FS_OFFSET;
   }
 else {
      uVar7 = *in_FS_OFFSET;
   }

   if (uVar7 == 0) {
      plVar5 = (long*)OS::get_singleton();
      ( **(code**)( *plVar5 + 0x1e0 ) )(&local_48, plVar5, 0);
      plVar5 = (long*)OS::get_singleton();
      iVar6 = ( **(code**)( *plVar5 + 0x208 ) )(plVar5);
      uVar4 = ( iVar6 * 0x16a88000 | ( uint )(iVar6 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
      uVar4 = ( (int)local_48 * 0x16a88000 | ( uint )((int)local_48 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar4 << 0xd | uVar4 >> 0x13 ) * 5 + 0xe6546b64;
      uVar4 = ( local_40 * 0x16a88000 | ( uint )(local_40 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar4 << 0xd | uVar4 >> 0x13 ) * 5 + 0xe6546b64;
      uVar4 = ( (uint)local_3c * 0x16a88000 | (uint)local_3c * -0x3361d2af >> 0x11 ) * 0x1b873593 ^ ( uVar4 << 0xd | uVar4 >> 0x13 ) * 5 + 0xe6546b64;
      uVar4 = ( (uint)local_3a * 0x16a88000 | (uint)local_3a * -0x3361d2af >> 0x11 ) * 0x1b873593 ^ ( uVar4 << 0xd | uVar4 >> 0x13 ) * 5 + 0xe6546b64;
      uVar4 = ( (uint)local_39 * 0x16a88000 | (uint)local_39 * -0x3361d2af >> 0x11 ) * 0x1b873593 ^ ( uVar4 << 0xd | uVar4 >> 0x13 ) * 5 + 0xe6546b64;
      uVar4 = ( (uint)local_38 * 0x16a88000 | (uint)local_38 * -0x3361d2af >> 0x11 ) * 0x1b873593 ^ ( uVar4 << 0xd | uVar4 >> 0x13 ) * 5 + 0xe6546b64;
      iVar6 = Math::rand();
      uVar4 = ( iVar6 * 0x16a88000 | ( uint )(iVar6 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar4 << 0xd | uVar4 >> 0x13 ) * 5 + 0xe6546b64;
      uVar7 = ( ulong )(( uVar4 << 0xd | uVar4 >> 0x13 ) * 5 + 0xe6546b64);
      if ((char)*in_FS_OFFSET == '\0') {
         *(char*)in_FS_OFFSET = '\x01';
         RandomPCG::RandomPCG((RandomPCG*)this_00, 0, 0x14057b7ef767814f);
      }

      uVar2 = *in_FS_OFFSET;
      *in_FS_OFFSET = uVar7;
      pcg32_srandom_r(this_00, uVar7, uVar2);
      cVar1 = (char)*in_FS_OFFSET;
   }
 else {
      cVar1 = (char)*in_FS_OFFSET;
   }

   if (cVar1 == '\0') {
      *(char*)in_FS_OFFSET = '\x01';
      RandomPCG::RandomPCG((RandomPCG*)this_00, 0, 0x14057b7ef767814f);
   }

   iVar6 = 5;
   pcg32_random_r(this_00);
   *(undefined8*)this = 0;
   do {
      String::chr(( wchar32 ) & local_48);
      String::operator +=((String*)this, (String*)&local_48);
      lVar3 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar5 = (long*)( local_48 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      iVar6 = iVar6 + -1;
   }
 while ( iVar6 != 0 );
   if (local_30 == in_FS_OFFSET[5]) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::seed_scene_unique_id(unsigned int) */void Resource::seed_scene_unique_id(uint param_1) {
   pcg32_random_t *this;
   ulong uVar1;
   ulong *in_FS_OFFSET;
   this(pcg32_random_t * ) * in_FS_OFFSET;
   if ((char)*in_FS_OFFSET == '\0') {
      *(char*)in_FS_OFFSET = '\x01';
      RandomPCG::RandomPCG((RandomPCG*)this, 0, 0x14057b7ef767814f);
   }

   uVar1 = *in_FS_OFFSET;
   *in_FS_OFFSET = (ulong)param_1;
   pcg32_srandom_r(this, (ulong)param_1, uVar1);
   return;
}
/* Resource::update_configuration_warning() */void Resource::update_configuration_warning(void) {
   if (_update_configuration_warning != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00100a40. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_update_configuration_warning )();
      return;
   }

   return;
}
/* Resource::connect_changed(Callable const&, unsigned int) */void Resource::connect_changed(Resource *this, Callable *param_1, uint param_2) {
   char cVar1;
   long in_FS_OFFSET;
   if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
      /* WARNING: Subroutine does not return */
      ResourceLoader::load_nesting();
   }

   if (0 < *(int*)( in_FS_OFFSET + lRam0000000000100a77 )) {
      if (PTR_caller_id_0011b008 != (undefined*)0x0) {
         /* WARNING: Subroutine does not return */
         Thread::caller_id();
      }

      if (*(long*)( in_FS_OFFSET + lRam0000000000100a94 ) != 1) {
         ResourceLoader::resource_changed_connect(this, param_1, param_2);
         return;
      }

   }

   cVar1 = ( **(code**)( *(long*)this + 0x118 ) )(this, CoreStringNames::singleton + 8, param_1);
   if (( cVar1 != '\0' ) && ( ( param_2 & 8 ) == 0 )) {
      return;
   }

   /* WARNING: Could not recover jumptable at 0x00100aea. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this + 0x108 ) )(this, CoreStringNames::singleton + 8, param_1, param_2);
   return;
}
/* Resource::disconnect_changed(Callable const&) */void Resource::disconnect_changed(Resource *this, Callable *param_1) {
   char cVar1;
   long in_FS_OFFSET;
   if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
      /* WARNING: Subroutine does not return */
      ResourceLoader::load_nesting();
   }

   if (0 < *(int*)( in_FS_OFFSET + lRam0000000000100b36 )) {
      if (PTR_caller_id_0011b008 != (undefined*)0x0) {
         /* WARNING: Subroutine does not return */
         Thread::caller_id();
      }

      if (*(long*)( in_FS_OFFSET + lRam0000000000100b53 ) != 1) {
         ResourceLoader::resource_changed_disconnect(this, param_1);
         return;
      }

   }

   cVar1 = ( **(code**)( *(long*)this + 0x118 ) )(this, CoreStringNames::singleton + 8, param_1);
   if (cVar1 != '\0') {
      /* WARNING: Could not recover jumptable at 0x00100b99. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)this + 0x110 ) )(this, CoreStringNames::singleton + 8, param_1);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Resource::set_as_translation_remapped(bool) */void Resource::set_as_translation_remapped(Resource *this, bool param_1) {
   Resource *pRVar1;
   long lVar2;
   Resource *pRVar3;
   int iVar4;
   if (param_1 == ( *(long*)( this + 0x1c0 ) != 0 )) {
      return;
   }

   iVar4 = pthread_mutex_lock((pthread_mutex_t*)ResourceCache::lock);
   if (iVar4 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar4);
   }

   pRVar1 = this + 0x1c0;
   if (param_1) {
      if (*(undefined8**)( this + 0x1c0 ) == (undefined8*)0x0) {
         *(undefined8*)( this + 0x1d8 ) = 0;
         *(Resource***)( this + 0x1c0 ) = &ResourceLoader::remapped_list;
         *(Resource**)( this + 0x1d0 ) = ResourceLoader::remapped_list;
         pRVar3 = pRVar1;
         if (ResourceLoader::remapped_list != (Resource*)0x0) {
            *(Resource**)( ResourceLoader::remapped_list + 0x18 ) = pRVar1;
            pRVar3 = _pthread_mutex_unlock;
         }

         _pthread_mutex_unlock = pRVar3;
         ResourceLoader::remapped_list = pRVar1;
         pthread_mutex_unlock((pthread_mutex_t*)ResourceCache::lock);
         return;
      }

      _err_print_error(&_LC13, "./core/templates/self_list.h", 0x2e, "Condition \"p_elem->_root\" is true.", 0, 0);
   }
 else if ((Resource**)*(undefined8**)( this + 0x1c0 ) == &ResourceLoader::remapped_list) {
      lVar2 = *(long*)( this + 0x1d0 );
      if (lVar2 != 0) {
         *(undefined8*)( lVar2 + 0x18 ) = *(undefined8*)( this + 0x1d8 );
      }

      pRVar3 = *(Resource**)( this + 0x1d8 );
      if (pRVar3 != (Resource*)0x0) {
         *(long*)( pRVar3 + 0x10 ) = lVar2;
      }

      if (pRVar1 == ResourceLoader::remapped_list) {
         ResourceLoader::remapped_list = *(Resource**)( this + 0x1d0 );
      }

      if (pRVar1 == _pthread_mutex_unlock) {
         _pthread_mutex_unlock = pRVar3;
      }

      *(undefined8*)( this + 0x1c0 ) = 0;
      *(undefined1(*) [16])( this + 0x1d0 ) = (undefined1[16])0x0;
   }
 else {
      _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
   }

   pthread_mutex_unlock((pthread_mutex_t*)ResourceCache::lock);
   return;
}
/* Resource::Resource() */void Resource::Resource(Resource *this) {
   RefCounted::RefCounted((RefCounted*)this);
   *(undefined***)this = &PTR__initialize_classv_00115d70;
   *(undefined8*)( this + 400 ) = 0;
   *(undefined8*)( this + 0x1a8 ) = 0;
   this[0x1b0] = (Resource)0x0;
   *(undefined8*)( this + 0x1d0 ) = 0;
   *(undefined8*)( this + 0x1d8 ) = 0;
   *(Resource**)( this + 0x1c8 ) = this;
   *(undefined1(*) [16])( this + 0x180 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1b8 ) = (undefined1[16])0x0;
   StringName::StringName((StringName*)( this + 0x1e0 ), "_setup_local_to_scene", false);
   this[0x1e8] = (Resource)0x0;
   *(undefined8*)( this + 0x1f0 ) = 0;
   StringName::StringName((StringName*)( this + 0x1f8 ), "_get_rid", false);
   this[0x200] = (Resource)0x0;
   *(undefined8*)( this + 0x208 ) = 0;
   StringName::StringName((StringName*)( this + 0x210 ), "_set_path_cache", false);
   this[0x218] = (Resource)0x0;
   *(undefined8*)( this + 0x220 ) = 0;
   StringName::StringName((StringName*)( this + 0x228 ), "_reset_state", false);
   this[0x230] = (Resource)0x0;
   *(undefined8*)( this + 0x238 ) = 0;
   return;
}
/* ResourceCache::get_cached_resource_count() */undefined4 ResourceCache::get_cached_resource_count(void) {
   undefined4 uVar1;
   int iVar2;
   iVar2 = pthread_mutex_lock((pthread_mutex_t*)lock);
   uVar1 = resources._44_4_;
   if (iVar2 == 0) {
      pthread_mutex_unlock((pthread_mutex_t*)lock);
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar2);
}
/* Resource::_find_sub_resources(Variant const&, HashSet<Ref<Resource>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<Resource> > >&) */void Resource::_find_sub_resources(Resource *this, Variant *param_1, HashSet *param_2) {
   char cVar1;
   int iVar2;
   long lVar3;
   Object *pOVar4;
   Variant *pVVar5;
   Variant *pVVar6;
   int iVar7;
   long in_FS_OFFSET;
   Object *local_50;
   undefined8 *local_48[3];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *(int*)param_1;
   if (iVar2 == 0x1b) {
      Variant::operator_cast_to_Dictionary((Variant*)&local_50);
      local_48[0] = (undefined8*)0x0;
      Dictionary::get_key_list((List*)&local_50);
      if (local_48[0] != (undefined8*)0x0) {
         for (pVVar5 = (Variant*)*local_48[0]; pVVar5 != (Variant*)0x0; pVVar5 = *(Variant**)( pVVar5 + 0x18 )) {
            _find_sub_resources(this, pVVar5, param_2);
            pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_50);
            _find_sub_resources(this, pVVar6, param_2);
         }

      }

      List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator>*)local_48);
      Dictionary::~Dictionary((Dictionary*)&local_50);
   }
 else if (iVar2 == 0x1c) {
      iVar7 = 0;
      Variant::operator_cast_to_Array((Variant*)local_48);
      iVar2 = Array::size();
      if (0 < iVar2) {
         do {
            iVar7 = iVar7 + 1;
            pVVar5 = (Variant*)Array::operator []((int)(Variant*)local_48);
            _find_sub_resources(this, pVVar5, param_2);
            iVar2 = Array::size();
         }
 while ( iVar7 < iVar2 );
      }

      Array::~Array((Array*)local_48);
   }
 else if (( ( ( iVar2 == 0x18 ) && ( lVar3 = Variant::get_validated_object() ),lVar3 != 0 ) ) && ( pOVar4 = (Object*)__dynamic_cast(lVar3, &Object::typeinfo, &typeinfo, 0) ),pOVar4 != (Object*)0x0) {
      HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>::insert((Ref*)local_48);
      cVar1 = RefCounted::unreference();
      if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler(pOVar4) ),cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(pOVar4, false);
            return;
         }

         goto LAB_001010ce;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001010ce:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* HashMap<String, Resource*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Resource*> > >::erase(String const&) [clone .isra.0]
    */ulong HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>::erase(HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>> *this, String *param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   long lVar6;
   undefined8 uVar7;
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
   undefined1 auVar27[16];
   char cVar28;
   uint uVar29;
   ulong in_RAX;
   ulong uVar30;
   uint uVar31;
   uint uVar32;
   long lVar33;
   long lVar34;
   long *plVar35;
   long lVar36;
   uint *puVar37;
   ulong uVar38;
   uint uVar39;
   if (*(long*)( this + 8 ) == 0) {
      return in_RAX;
   }

   uVar30 = ( ulong ) * (uint*)( this + 0x2c );
   if (*(uint*)( this + 0x2c ) != 0) {
      uVar5 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      uVar38 = CONCAT44(0, uVar5);
      lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar29 = String::hash();
      lVar36 = *(long*)( this + 0x10 );
      uVar31 = 1;
      if (uVar29 != 0) {
         uVar31 = uVar29;
      }

      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar31 * lVar6;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar38;
      auVar8 = auVar8 * auVar18;
      lVar33 = auVar8._8_8_;
      uVar30 = auVar8._0_8_;
      uVar29 = *(uint*)( lVar36 + lVar33 * 4 );
      uVar32 = auVar8._8_4_;
      if (uVar29 != 0) {
         uVar39 = 0;
         do {
            if (uVar31 == uVar29) {
               cVar28 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar33 * 8 ) + 0x10 ), param_1);
               if (cVar28 != '\0') {
                  lVar6 = *(long*)( this + 0x10 );
                  lVar36 = *(long*)( this + 8 );
                  uVar5 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
                  uVar30 = CONCAT44(0, uVar5);
                  lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(uVar32 + 1) * lVar33;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar30;
                  lVar34 = SUB168(auVar12 * auVar22, 8);
                  puVar37 = (uint*)( lVar6 + lVar34 * 4 );
                  uVar29 = SUB164(auVar12 * auVar22, 8);
                  uVar31 = *puVar37;
                  if (( uVar31 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar31 * lVar33,auVar23._8_8_ = 0,auVar23._0_8_ = uVar30,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar5 + uVar29 ) - SUB164(auVar13 * auVar23, 8)) * lVar33,auVar24._8_8_ = 0,auVar24._0_8_ = uVar30,uVar39 = uVar32,SUB164(auVar14 * auVar24, 8) == 0) goto LAB_001012db;
                  goto LAB_00101295;
               }

               lVar36 = *(long*)( this + 0x10 );
            }

            uVar39 = uVar39 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = ( ulong )(uVar32 + 1) * lVar6;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar38;
            auVar9 = auVar9 * auVar19;
            lVar33 = auVar9._8_8_;
            uVar30 = auVar9._0_8_;
            uVar29 = *(uint*)( lVar36 + lVar33 * 4 );
            uVar32 = auVar9._8_4_;
         }
 while ( ( uVar29 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar29 * lVar6,auVar20._8_8_ = 0,auVar20._0_8_ = uVar38,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar5 + uVar32 ) - SUB164(auVar10 * auVar20, 8)) * lVar6,auVar21._8_8_ = 0,auVar21._0_8_ = uVar38,uVar30 = SUB168(auVar11 * auVar21, 0),uVar39 <= SUB164(auVar11 * auVar21, 8) );
      }

   }

   return uVar30;
   while (auVar15._8_8_ = 0,auVar15._0_8_ = (ulong)uVar31 * lVar33,auVar25._8_8_ = 0,auVar25._0_8_ = uVar30,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar29 + uVar5 ) - SUB164(auVar15 * auVar25, 8)) * lVar33,auVar26._8_8_ = 0,auVar26._0_8_ = uVar30,uVar39 = uVar32,SUB164(auVar16 * auVar26, 8) != 0) {
      LAB_00101295:uVar32 = uVar29;
      puVar1 = (uint*)( lVar6 + (ulong)uVar39 * 4 );
      *puVar37 = *puVar1;
      puVar2 = (undefined8*)( lVar36 + lVar34 * 8 );
      *puVar1 = uVar31;
      puVar3 = (undefined8*)( lVar36 + (ulong)uVar39 * 8 );
      uVar7 = *puVar2;
      *puVar2 = *puVar3;
      *puVar3 = uVar7;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(uVar32 + 1) * lVar33;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar30;
      lVar34 = SUB168(auVar17 * auVar27, 8);
      puVar37 = (uint*)( lVar6 + lVar34 * 4 );
      uVar29 = SUB164(auVar17 * auVar27, 8);
      uVar31 = *puVar37;
      if (uVar31 == 0) break;
   }
;
   LAB_001012db:uVar30 = (ulong)uVar32;
   plVar4 = (long*)( lVar36 + uVar30 * 8 );
   *(undefined4*)( lVar6 + uVar30 * 4 ) = 0;
   plVar35 = (long*)*plVar4;
   if (*(long**)( this + 0x18 ) == plVar35) {
      *(long*)( this + 0x18 ) = *plVar35;
      plVar35 = (long*)*plVar4;
      if (*(long**)( this + 0x20 ) != plVar35) goto LAB_001012f9;
   }
 else if (*(long**)( this + 0x20 ) != plVar35) goto LAB_001012f9;
   *(long*)( this + 0x20 ) = plVar35[1];
   plVar35 = (long*)*plVar4;
   LAB_001012f9:if ((long*)plVar35[1] != (long*)0x0) {
      *(long*)plVar35[1] = *plVar35;
      plVar35 = (long*)*plVar4;
   }

   if (*plVar35 != 0) {
      *(long*)( *plVar35 + 8 ) = plVar35[1];
      plVar35 = (long*)*plVar4;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( plVar35 + 2 ));
   Memory::free_static(plVar35, false);
   uVar38 = *(ulong*)( this + 8 );
   *(undefined8*)( uVar38 + uVar30 * 8 ) = 0;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
   return uVar38;
}
/* Resource::~Resource() */void Resource::~Resource(Resource *this) {
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
   int iVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   long lVar17;
   uint uVar18;
   long lVar19;
   ulong uVar20;
   *(undefined***)this = &PTR__initialize_classv_00115d70;
   if (( *(long*)( this + 0x188 ) == 0 ) || ( *(uint*)( *(long*)( this + 0x188 ) + -8 ) < 2 )) {
      if (( ( ( StringName::configured != '\0' ) && ( ( *(long*)( this + 0x228 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( this + 0x210 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( *(long*)( this + 0x1f8 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( *(long*)( this + 0x1e0 ) != 0 ) ) )) {
         StringName::unref();
      }

      plVar2 = *(long**)( this + 0x1c0 );
      if (plVar2 != (long*)0x0) {
         lVar3 = *(long*)( this + 0x1d0 );
         if (lVar3 != 0) {
            *(undefined8*)( lVar3 + 0x18 ) = *(undefined8*)( this + 0x1d8 );
         }

         lVar17 = *(long*)( this + 0x1d8 );
         if (lVar17 != 0) {
            *(long*)( lVar17 + 0x10 ) = lVar3;
         }

         if (this + 0x1c0 == (Resource*)*plVar2) {
            *plVar2 = *(long*)( this + 0x1d0 );
         }

         if (this + 0x1c0 == (Resource*)plVar2[1]) {
            plVar2[1] = lVar17;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x1a8 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 400 ));
   }
 else {
      iVar13 = pthread_mutex_lock((pthread_mutex_t*)ResourceCache::lock);
      if (iVar13 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar13);
      }

      if (( ResourceCache::resources._8_8_ != 0 ) && ( ResourceCache::resources._44_4_ != 0 )) {
         uVar1 = ( &hash_table_size_primes )[(uint)ResourceCache::resources._40_4_];
         uVar20 = CONCAT44(0, uVar1);
         lVar3 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)ResourceCache::resources._40_4_ * 8 );
         uVar14 = String::hash();
         uVar15 = 1;
         if (uVar14 != 0) {
            uVar15 = uVar14;
         }

         auVar4._8_8_ = 0;
         auVar4._0_8_ = (ulong)uVar15 * lVar3;
         auVar8._8_8_ = 0;
         auVar8._0_8_ = uVar20;
         lVar17 = SUB168(auVar4 * auVar8, 8);
         uVar14 = *(uint*)( ResourceCache::resources._16_8_ + lVar17 * 4 );
         uVar16 = SUB164(auVar4 * auVar8, 8);
         if (uVar14 != 0) {
            uVar18 = 0;
            lVar19 = ResourceCache::resources._16_8_;
            while (( uVar14 != uVar15 || ( cVar12 = String::operator ==((String*)( *(long*)( ResourceCache::resources._8_8_ + lVar17 * 8 ) + 0x10 ), (String*)( this + 0x188 )) ),lVar19 = ResourceCache::resources._16_8_,cVar12 == '\0' )) {
               uVar18 = uVar18 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( ulong )(uVar16 + 1) * lVar3;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = uVar20;
               lVar17 = SUB168(auVar5 * auVar9, 8);
               uVar14 = *(uint*)( lVar19 + lVar17 * 4 );
               uVar16 = SUB164(auVar5 * auVar9, 8);
               if (( uVar14 == 0 ) || ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar14 * lVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar20,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar1 + uVar16 ) - SUB164(auVar6 * auVar10, 8)) * lVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar20,SUB164(auVar7 * auVar11, 8) < uVar18) goto LAB_001013fc;
            }
;
            lVar3 = *(long*)( ResourceCache::resources._8_8_ + (ulong)uVar16 * 8 );
            if (( lVar3 != 0 ) && ( *(Resource**)( lVar3 + 0x18 ) == this )) {
               HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>::erase((HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>*)ResourceCache::resources, (String*)( lVar3 + 0x10 ));
            }

         }

      }

      LAB_001013fc:pthread_mutex_unlock((pthread_mutex_t*)ResourceCache::lock);
      if (( ( ( StringName::configured != '\0' ) && ( ( *(long*)( this + 0x228 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( this + 0x210 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( *(long*)( this + 0x1f8 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( *(long*)( this + 0x1e0 ) != 0 ) ) )) {
         StringName::unref();
      }

      plVar2 = *(long**)( this + 0x1c0 );
      if (plVar2 != (long*)0x0) {
         lVar3 = *(long*)( this + 0x1d0 );
         if (lVar3 != 0) {
            *(undefined8*)( lVar3 + 0x18 ) = *(undefined8*)( this + 0x1d8 );
         }

         lVar17 = *(long*)( this + 0x1d8 );
         if (lVar17 != 0) {
            *(long*)( lVar17 + 0x10 ) = lVar3;
         }

         if (this + 0x1c0 == (Resource*)*plVar2) {
            *plVar2 = *(long*)( this + 0x1d0 );
         }

         if (this + 0x1c0 == (Resource*)plVar2[1]) {
            plVar2[1] = lVar17;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x1a8 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 400 ));
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x188 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x180 ));
   *(undefined***)this = &PTR__initialize_classv_00115c10;
   Object::~Object((Object*)this);
   return;
}
/* Resource::~Resource() */void Resource::~Resource(Resource *this) {
   ~Resource(this)
   ;;
   operator_delete(this, 0x240);
   return;
}
/* ResourceCache::get_ref(String const&) */ResourceCache * __thiscall ResourceCache::get_ref(ResourceCache *this,String *param_1){
   uint uVar1;
   Object *pOVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   char cVar11;
   int iVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   long lVar16;
   Object *pOVar17;
   long lVar18;
   uint uVar19;
   long lVar20;
   ulong uVar21;
   long in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   iVar12 = pthread_mutex_lock((pthread_mutex_t*)lock);
   if (iVar12 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar12);
   }

   if (( resources._8_8_ != 0 ) && ( resources._44_4_ != 0 )) {
      uVar1 = ( &hash_table_size_primes )[(uint)resources._40_4_];
      uVar21 = CONCAT44(0, uVar1);
      lVar18 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)resources._40_4_ * 8 );
      uVar13 = String::hash();
      uVar14 = 1;
      if (uVar13 != 0) {
         uVar14 = uVar13;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar14 * lVar18;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar21;
      lVar16 = SUB168(auVar3 * auVar7, 8);
      uVar13 = *(uint*)( resources._16_8_ + lVar16 * 4 );
      uVar15 = SUB164(auVar3 * auVar7, 8);
      if (uVar13 != 0) {
         uVar19 = 0;
         lVar20 = resources._16_8_;
         while (( uVar13 != uVar14 || ( cVar11 = String::operator ==((String*)( *(long*)( resources._8_8_ + lVar16 * 8 ) + 0x10 ), param_1) ),lVar20 = resources._16_8_,cVar11 == '\0' )) {
            uVar19 = uVar19 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar15 + 1) * lVar18;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar21;
            lVar16 = SUB168(auVar4 * auVar8, 8);
            uVar13 = *(uint*)( lVar20 + lVar16 * 4 );
            uVar15 = SUB164(auVar4 * auVar8, 8);
            if (( uVar13 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar13 * lVar18,auVar9._8_8_ = 0,auVar9._0_8_ = uVar21,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar15 ) - SUB164(auVar5 * auVar9, 8)) * lVar18,auVar10._8_8_ = 0,auVar10._0_8_ = uVar21,SUB164(auVar6 * auVar10, 8) < uVar19) goto LAB_001017eb;
         }
;
         lVar18 = *(long*)( resources._8_8_ + (ulong)uVar15 * 8 );
         pOVar17 = *(Object**)( lVar18 + 0x18 );
         if (pOVar17 == (Object*)0x0) {
            pOVar17 = *(Object**)this;
            if (pOVar17 != (Object*)0x0) {
               LAB_00101935:*(undefined8*)this = 0;
               cVar11 = RefCounted::unreference();
               goto joined_r0x001019e4;
            }

            lVar18 = 0;
         }
 else {
            cVar11 = RefCounted::init_ref();
            if (cVar11 == '\0') {
               pOVar17 = *(Object**)this;
               if (pOVar17 != (Object*)0x0) goto LAB_00101935;
            }
 else {
               pOVar2 = *(Object**)this;
               if (pOVar17 != pOVar2) {
                  *(Object**)this = pOVar17;
                  cVar11 = RefCounted::reference();
                  if (cVar11 == '\0') {
                     *(undefined8*)this = 0;
                  }

                  if (( ( pOVar2 != (Object*)0x0 ) && ( cVar11 = RefCounted::unreference() ),cVar11 != '\0' )) &&( cVar11 = cVar11 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

            cVar11 = RefCounted::unreference();
            joined_r0x001019e4:if (( cVar11 != '\0' ) && ( cVar11 = predelete_handler(pOVar17) ),cVar11 != '\0') {
               ( **(code**)( *(long*)pOVar17 + 0x140 ) )(pOVar17);
               Memory::free_static(pOVar17, false);
            }

            if (*(long*)this != 0) goto LAB_001017eb;
         }

         lVar18 = *(long*)( lVar18 + 0x18 );
      }

      local_48 = 0;
      if (*(long*)( lVar18 + 0x188 ) != 0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( lVar18 + 0x188 ));
         *(undefined8*)( lVar18 + 0x188 ) = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>::erase((HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>*)resources, param_1);
   }

}
LAB_001017eb:pthread_mutex_unlock((pthread_mutex_t*)lock);if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return this;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ResourceCache::clear() */void ResourceCache::clear(void) {
   uint uVar1;
   void *pvVar2;
   char cVar3;
   long lVar4;
   long *plVar5;
   long in_FS_OFFSET;
   CowData<char32_t> local_88[8];
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (resources._44_4_ != 0) {
      OS::get_singleton();
      cVar3 = OS::is_stdout_verbose();
      if (cVar3 == '\0') {
         local_70 = 0;
         local_60 = 0x43;
         local_68 = "%d resources still in use at exit (run with --verbose for details).";
         String::parse_latin1((StrRange*)&local_70);
         vformat<unsigned_int>((String*)&local_68, (uint)(StrRange*)&local_70);
         _err_print_error("clear", "core/io/resource.cpp", 0x266, (String*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      }
 else {
         local_70 = 0;
         local_60 = 0x22;
         local_68 = "%d resources still in use at exit.";
         String::parse_latin1((StrRange*)&local_70);
         vformat<unsigned_int>((String*)&local_68, (uint)(StrRange*)&local_70);
         _err_print_error("clear", "core/io/resource.cpp", 0x261, (String*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (resources._24_8_ != 0) {
            plVar5 = (long*)resources._24_8_;
            do {
               ( **(code**)( *(long*)plVar5[3] + 0x48 ) )(local_88);
               local_78 = 0;
               if (plVar5[2] != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)( plVar5 + 2 ));
               }

               local_80 = 0;
               local_68 = "Resource still in use: %s (%s)";
               local_60 = 0x1e;
               String::parse_latin1((StrRange*)&local_80);
               vformat<String,String>((StrRange*)&local_70, (CowData<char32_t>*)&local_80, (CowData<char32_t>*)&local_78, local_88);
               Variant::Variant((Variant*)local_58, (String*)&local_70);
               stringify_variants((Variant*)&local_68);
               __print_line((String*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref(local_88);
               plVar5 = (long*)*plVar5;
            }
 while ( plVar5 != (long*)0x0 );
         }

      }

      if (( resources._8_8_ != 0 ) && ( resources._44_4_ != 0 )) {
         uVar1 = ( &hash_table_size_primes )[(uint)resources._40_4_];
         if (uVar1 != 0) {
            lVar4 = 0;
            do {
               if (*(int*)( resources._16_8_ + lVar4 ) != 0) {
                  *(int*)( resources._16_8_ + lVar4 ) = 0;
                  pvVar2 = *(void**)( resources._8_8_ + lVar4 * 2 );
                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar2 + 0x10 ));
                  Memory::free_static(pvVar2, false);
                  *(undefined8*)( resources._8_8_ + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar1 << 2 );
         }

         resources._44_4_ = 0;
         resources._24_16_ = (undefined1[16])0x0;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceCache::get_cached_resources(List<Ref<Resource>, DefaultAllocator>*) */void ResourceCache::get_cached_resources(List *param_1) {
   uint uVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   char cVar5;
   int iVar6;
   undefined8 *puVar7;
   undefined1(*pauVar8)[16];
   String *pSVar9;
   Object *pOVar10;
   String *pSVar11;
   String *pSVar12;
   long *plVar13;
   ulong uVar14;
   long in_FS_OFFSET;
   uint local_4c;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = pthread_mutex_lock((pthread_mutex_t*)lock);
   if (iVar6 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar6);
   }

   local_4c = 0;
   pSVar9 = (String*)0x0;
   uVar14 = 0;
   plVar13 = (long*)resources._24_8_;
   if (resources._24_8_ != 0) {
      LAB_00101e6b:do {
         pOVar10 = (Object*)plVar13[3];
         if (pOVar10 == (Object*)0x0) {
            LAB_00101dd4:if (*(long*)( pOVar10 + 0x188 ) != 0) {
               CowData<char32_t>::_unref((CowData<char32_t>*)( pOVar10 + 0x188 ));
               *(undefined8*)( pOVar10 + 0x188 ) = 0;
            }

            local_48 = 0;
            if (plVar13[2] != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)( plVar13 + 2 ));
            }

            if (local_4c == (uint)uVar14) {
               uVar1 = local_4c << 1;
               local_4c = 1;
               if (uVar1 != 0) {
                  local_4c = uVar1;
               }

               pSVar9 = (String*)Memory::realloc_static(pSVar9, (ulong)local_4c << 3, false);
               if (pSVar9 == (String*)0x0) {
                  _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

            }

            lVar3 = local_48;
            *(undefined8*)( pSVar9 + uVar14 * 8 ) = 0;
            if (local_48 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( pSVar9 + uVar14 * 8 ), (CowData*)&local_48);
               LOCK();
               plVar2 = (long*)( lVar3 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  Memory::free_static((void*)( local_48 + -0x10 ), false);
               }

            }

            uVar14 = ( ulong )((uint)uVar14 + 1);
         }
 else {
            cVar5 = RefCounted::init_ref();
            if (cVar5 == '\0') {
               pOVar10 = (Object*)plVar13[3];
               goto LAB_00101dd4;
            }

            if (*(long*)param_1 == 0) {
               pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])param_1 = pauVar8;
               *(undefined4*)pauVar8[1] = 0;
               *pauVar8 = (undefined1[16])0x0;
            }

            puVar7 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
            for (int i = 0; i < 3; i++) {
               puVar7[( i + 1 )] = 0;
            }

            *puVar7 = pOVar10;
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
               *puVar7 = 0;
            }

            plVar2 = *(long**)param_1;
            lVar3 = plVar2[1];
            puVar7[1] = 0;
            puVar7[3] = plVar2;
            puVar7[2] = lVar3;
            if (lVar3 != 0) {
               *(undefined8**)( lVar3 + 8 ) = puVar7;
            }

            plVar2[1] = (long)puVar7;
            if (*plVar2 == 0) {
               *plVar2 = (long)puVar7;
            }

            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            cVar5 = RefCounted::unreference();
            if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar10) ),cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
               Memory::free_static(pOVar10, false);
               plVar13 = (long*)*plVar13;
               if (plVar13 == (long*)0x0) break;
               goto LAB_00101e6b;
            }

         }

         plVar13 = (long*)*plVar13;
      }
 while ( plVar13 != (long*)0x0 );
      for (pSVar11 = pSVar9; pSVar9 + uVar14 * 8 != pSVar11; pSVar11 = pSVar11 + 8) {
         HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>::erase((HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>*)resources, pSVar11);
      }

      if (pSVar9 != (String*)0x0) {
         pSVar11 = pSVar9;
         if ((int)uVar14 != 0) {
            do {
               pSVar12 = (String*)( (CowData<char32_t>*)pSVar11 + 8 );
               CowData<char32_t>::_unref((CowData<char32_t>*)pSVar11);
               pSVar11 = pSVar12;
            }
 while ( pSVar9 + uVar14 * 8 != pSVar12 );
         }

         Memory::free_static(pSVar9, false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      pthread_mutex_unlock((pthread_mutex_t*)lock);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceCache::has(String const&) */char ResourceCache::has(String *param_1) {
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
   char cVar11;
   int iVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   long lVar16;
   long lVar17;
   ulong uVar18;
   uint uVar19;
   long in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar12 = pthread_mutex_lock((pthread_mutex_t*)lock);
   if (iVar12 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar12);
   }

   if (( resources._8_8_ != 0 ) && ( resources._44_4_ != 0 )) {
      uVar1 = ( &hash_table_size_primes )[(uint)resources._40_4_];
      uVar18 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)resources._40_4_ * 8 );
      uVar13 = String::hash();
      uVar14 = 1;
      if (uVar13 != 0) {
         uVar14 = uVar13;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar14 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      lVar16 = SUB168(auVar3 * auVar7, 8);
      uVar13 = *(uint*)( resources._16_8_ + lVar16 * 4 );
      uVar15 = SUB164(auVar3 * auVar7, 8);
      if (uVar13 != 0) {
         uVar19 = 0;
         lVar17 = resources._16_8_;
         while (( uVar13 != uVar14 || ( cVar11 = String::operator ==((String*)( *(long*)( resources._8_8_ + lVar16 * 8 ) + 0x10 ), param_1) ),lVar17 = resources._16_8_,cVar11 == '\0' )) {
            uVar19 = uVar19 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar15 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar18;
            lVar16 = SUB168(auVar4 * auVar8, 8);
            uVar13 = *(uint*)( lVar17 + lVar16 * 4 );
            uVar15 = SUB164(auVar4 * auVar8, 8);
            if (( uVar13 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar13 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar18,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar15 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,SUB164(auVar6 * auVar10, 8) < uVar19) goto LAB_001020f1;
         }
;
         lVar2 = *(long*)( resources._8_8_ + (ulong)uVar15 * 8 );
         iVar12 = RefCounted::get_reference_count();
         if (iVar12 != 0) {
            pthread_mutex_unlock((pthread_mutex_t*)lock);
            goto LAB_001020fb;
         }

         local_48 = 0;
         lVar2 = *(long*)( lVar2 + 0x18 );
         if (*(long*)( lVar2 + 0x188 ) != 0) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( lVar2 + 0x188 ));
            *(undefined8*)( lVar2 + 0x188 ) = 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>::erase((HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>*)resources, param_1);
      }

   }

   LAB_001020f1:pthread_mutex_unlock((pthread_mutex_t*)lock);
   cVar11 = '\0';
   LAB_001020fb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return cVar11;
}
/* Resource::set_scene_unique_id(String const&) */void Resource::set_scene_unique_id(Resource *this, String *param_1) {
   uint uVar1;
   uint *puVar2;
   long lVar3;
   code *pcVar4;
   uint *puVar5;
   long lVar6;
   uint *puVar7;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   puVar2 = *(uint**)param_1;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (puVar2 != (uint*)0x0) {
      lVar3 = *(long*)( puVar2 + -2 );
      if ((int)lVar3 != 0) {
         puVar7 = puVar2;
         for (lVar6 = 0; (int)lVar6 < (int)lVar3 + -1; lVar6 = lVar6 + 1) {
            if (lVar3 == lVar6) {
               puVar5 = (uint*)&String::_null;
            }
 else {
               puVar5 = puVar7;
               if (lVar3 <= lVar6) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar3, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

            }

            uVar1 = *puVar5;
            if (uVar1 < 0x3a) {
               if (uVar1 < 0x30) {
                  LAB_00102351:generate_scene_unique_id((Resource*)&local_28);
                  if (*(long*)( this + 400 ) != local_28) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)( this + 400 ));
                     lVar3 = local_28;
                     local_28 = 0;
                     *(long*)( this + 400 ) = lVar3;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
                  _err_print_error("set_scene_unique_id", "core/io/resource.cpp", 0x95, "Condition \"!is_valid\" is true.", "The scene unique ID must contain only letters, numbers, and underscores.", 0, 0);
                  goto LAB_001023c9;
               }

            }
 else if (( 0x39 < uVar1 - 0x41 ) || ( ( 0x3ffffff43ffffffU >> ( ( ulong )(uVar1 - 0x41) & 0x3f ) & 1 ) == 0 )) goto LAB_00102351;
            puVar7 = puVar7 + 1;
         }

      }

   }

   if (puVar2 == *(uint**)( this + 400 )) {
      LAB_001023c9:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 400 ), (CowData*)param_1);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::copy_from(Ref<Resource> const&) */undefined8 Resource::copy_from(Resource *this, Ref *param_1) {
   String *this_00;
   bool *pbVar1;
   char cVar2;
   undefined8 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   long *local_70;
   long local_68;
   long local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long**)param_1 == (long*)0x0) {
      _err_print_error("copy_from", "core/io/resource.cpp", 0xcb, "Condition \"p_resource.is_null()\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
   }
 else {
      ( **(code**)( **(long**)param_1 + 0x48 ) )((CowData<char32_t>*)&local_60);
      ( **(code**)( *(long*)this + 0x48 ) )((String*)&local_68, this);
      cVar2 = String::operator !=((String*)&local_68, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar2 == '\0') {
         ( **(code**)( *(long*)this + 0x170 ) )(this);
         local_70 = (long*)0x0;
         Object::get_property_list(*(List**)param_1, SUB81((List<PropertyInfo,DefaultAllocator>*)&local_70, 0));
         if (( local_70 != (long*)0x0 ) && ( lVar4 = lVar4 != 0 )) {
            do {
               if (( *(byte*)( lVar4 + 0x28 ) & 2 ) != 0) {
                  this_00 = (String*)( lVar4 + 8 );
                  cVar2 = String::operator ==(this_00, "resource_path");
                  if (cVar2 == '\0') {
                     pbVar1 = *(bool**)param_1;
                     StringName::StringName((StringName*)&local_68, this_00, false);
                     Object::get((StringName*)local_58, pbVar1);
                     StringName::StringName((StringName*)&local_60, this_00, false);
                     Object::set((StringName*)this, (Variant*)&local_60, (bool*)local_58);
                     if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                        StringName::unref();
                     }

                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                  }

               }

               lVar4 = *(long*)( lVar4 + 0x30 );
            }
 while ( lVar4 != 0 );
         }

         List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_70);
         uVar3 = 0;
         goto LAB_001025e9;
      }

   }

   uVar3 = 0x1f;
   LAB_001025e9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::hash_edited_version_for_preview() const */uint Resource::hash_edited_version_for_preview(Resource *this) {
   int *piVar1;
   char cVar2;
   int iVar3;
   uint uVar4;
   long lVar5;
   Object *pOVar6;
   long in_FS_OFFSET;
   undefined8 *local_68;
   long local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = Object::get_edited_version();
   local_68 = (undefined8*)0x0;
   uVar4 = ( iVar3 * 0x16a88000 | ( uint )(iVar3 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
   uVar4 = ( uVar4 << 0xd | uVar4 >> 0x13 ) * 5 + 0xe6546b64;
   Object::get_property_list((List*)this, SUB81((List<PropertyInfo,DefaultAllocator>*)&local_68, 0));
   if (local_68 != (undefined8*)0x0) {
      for (piVar1 = (int*)*local_68; piVar1 != (int*)0x0; piVar1 = *(int**)( piVar1 + 0xc )) {
         if (( ( ( *(byte*)( piVar1 + 10 ) & 2 ) != 0 ) && ( *piVar1 == 0x18 ) ) && ( piVar1[6] == 0x11 )) {
            StringName::StringName((StringName*)&local_60, (String*)( piVar1 + 2 ), false);
            Object::get((StringName*)local_58, (bool*)this);
            lVar5 = Variant::get_validated_object();
            if (( lVar5 == 0 ) || ( pOVar6 = (Object*)__dynamic_cast(lVar5, &Object::typeinfo, &typeinfo, 0) ),pOVar6 == (Object*)0x0) {
               if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_00102784;
               LAB_001027f2:pOVar6 = (Object*)0x0;
               Variant::_clear_internal();
               if (StringName::configured != '\0') {
                  LAB_0010280c:if (local_60 != 0) {
                     StringName::unref();
                  }

                  if (pOVar6 != (Object*)0x0) goto LAB_00102825;
               }

            }
 else {
               cVar2 = RefCounted::reference();
               if (cVar2 == '\0') {
                  if (Variant::needs_deinit[local_58[0]] != '\0') goto LAB_001027f2;
                  LAB_00102784:if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                     StringName::unref();
                  }

               }
 else {
                  if (Variant::needs_deinit[local_58[0]] == '\0') {
                     if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                        StringName::unref();
                     }

                  }
 else {
                     Variant::_clear_internal();
                     if (StringName::configured != '\0') goto LAB_0010280c;
                  }

                  LAB_00102825:iVar3 = ( **(code**)( *(long*)pOVar6 + 0x1a8 ) )(pOVar6);
                  cVar2 = RefCounted::unreference();
                  if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar6) ),cVar2 != '\0') {
                     ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                     Memory::free_static(pOVar6, false);
                  }

                  uVar4 = ( iVar3 * 0x16a88000 | ( uint )(iVar3 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ uVar4;
                  uVar4 = ( uVar4 << 0xd | uVar4 >> 0x13 ) * 5 + 0xe6546b64;
               }

            }

         }

      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::reload_from_file() */void Resource::reload_from_file(Resource *this) {
   char cVar1;
   long in_FS_OFFSET;
   undefined8 local_50;
   Object *local_48;
   String local_40[8];
   CowData<char32_t> local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   if (*(long*)( this + 0x188 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)( this + 0x188 ));
   }

   cVar1 = String::is_resource_file();
   if (cVar1 != '\0') {
      ( **(code**)( *(long*)this + 0x48 ) )(local_38, this);
      ResourceLoader::path_remap(local_40);
      ResourceLoader::load((Ref<Resource>*)&local_48, local_40, local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_40);
      CowData<char32_t>::_unref(local_38);
      if (local_48 == (Object*)0x0) {
         Ref<Resource>::unref((Ref<Resource>*)&local_48);
      }
 else {
         ( **(code**)( *(long*)this + 0x178 ) )(this);
         if (local_48 != (Object*)0x0) {
            cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(local_48);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)local_48 + 0x140 ) )(local_48);
                  Memory::free_static(local_48, false);
               }

            }

         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::set_path(String const&, bool) */void Resource::set_path(Resource *this, String *param_1, bool param_2) {
   String *this_00;
   uint uVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   Object *local_70;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   this_00 = (String*)( this + 0x188 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = String::operator ==(this_00, param_1);
   if (cVar3 == '\0') {
      cVar3 = '\0';
      if (( *(long*)param_1 != 0 ) && ( 1 < *(uint*)( *(long*)param_1 + -8 ) )) {
         cVar3 = param_2;
      }

      iVar4 = pthread_mutex_lock((pthread_mutex_t*)ResourceCache::lock);
      if (iVar4 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar4);
      }

      if (( *(long*)( this + 0x188 ) != 0 ) && ( 1 < *(uint*)( *(long*)( this + 0x188 ) + -8 ) )) {
         HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>::erase((HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>*)ResourceCache::resources, this_00);
      }

      local_50 = 0;
      local_58 = "";
      String::parse_latin1((StrRange*)this_00);
      ResourceCache::get_ref((ResourceCache*)&local_70, param_1);
      if (local_70 == (Object*)0x0) {
         lVar2 = *(long*)( this + 0x188 );
         if (*(long*)param_1 == lVar2) {
            if (( lVar2 != 0 ) && ( 1 < *(uint*)( lVar2 + -8 ) )) {
               puVar5 = (undefined8*)HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>::operator []((HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>*)ResourceCache::resources, this_00);
               *puVar5 = this;
            }

         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)this_00, (CowData*)param_1);
            if (*(long*)( this + 0x188 ) != 0) {
               uVar1 = *(uint*)( *(long*)( this + 0x188 ) + -8 );
               joined_r0x00102bef:if (1 < uVar1) {
                  LAB_00102bfc:puVar5 = (undefined8*)HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>::operator []((HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>*)ResourceCache::resources, this_00);
                  *puVar5 = this;
               }

               if (local_70 != (Object*)0x0) goto LAB_00102b4a;
            }

         }

      }
 else {
         if (cVar3 == '\0') {
            local_60 = 0;
            if (*(long*)param_1 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)param_1);
            }

            local_68 = 0;
            local_58 = "Another resource is loaded from path \'%s\' (possible cyclic resource inclusion).";
            local_50 = 0x4f;
            String::parse_latin1((StrRange*)&local_68);
            vformat<String>((CowData<char32_t>*)&local_58, (StrRange*)&local_68, (CowData<char32_t>*)&local_60);
            _err_print_error("set_path", "core/io/resource.cpp", 0x4b, "Method/function failed.", (CowData<char32_t>*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            Ref<Resource>::unref((Ref<Resource>*)&local_70);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               pthread_mutex_unlock((pthread_mutex_t*)ResourceCache::lock);
               return;
            }

            goto LAB_00102d8a;
         }

         local_58 = (char*)0x0;
         if (*(long*)( local_70 + 0x188 ) != 0) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_70 + 0x188 ));
            *(undefined8*)( local_70 + 0x188 ) = 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>::erase((HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>*)ResourceCache::resources, param_1);
         lVar2 = *(long*)( this + 0x188 );
         if (lVar2 == *(long*)param_1) {
            if (( lVar2 != 0 ) && ( 1 < *(uint*)( lVar2 + -8 ) )) goto LAB_00102bfc;
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)this_00, (CowData*)param_1);
            if (*(long*)( this + 0x188 ) != 0) {
               uVar1 = *(uint*)( *(long*)( this + 0x188 ) + -8 );
               goto joined_r0x00102bef;
            }

         }

         LAB_00102b4a:cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(local_70) ),cVar3 != '\0') {
            ( **(code**)( *(long*)local_70 + 0x140 ) )(local_70);
            Memory::free_static(local_70, false);
         }

      }

      pthread_mutex_unlock((pthread_mutex_t*)ResourceCache::lock);
      if (*(code**)( *(long*)this + 0x158 ) != reset_local_to_scene) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00102c35. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)this + 0x158 ) )(this);
            return;
         }

         goto LAB_00102d8a;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102d8a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Resource::configure_for_local_scene(Node*, HashMap<Ref<Resource>, Ref<Resource>,
   HashMapHasherDefault, HashMapComparatorDefault<Ref<Resource> >,
   DefaultTypedAllocator<HashMapElement<Ref<Resource>, Ref<Resource> > > >&) */void Resource::configure_for_local_scene(Resource *this, Node *param_1, HashMap *param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   Object *pOVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined8 uVar13;
   int iVar14;
   char cVar15;
   void *pvVar16;
   ulong uVar17;
   undefined8 *puVar18;
   int iVar19;
   long lVar20;
   Object *pOVar21;
   long lVar22;
   uint uVar23;
   ulong uVar24;
   uint uVar25;
   ulong uVar26;
   long in_FS_OFFSET;
   long *local_98;
   Object *local_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined8 local_68;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (long*)0x0;
   Object::get_property_list((List*)this, SUB81((List<PropertyInfo,DefaultAllocator>*)&local_98, 0));
   if (*(code**)( *(long*)this + 0x160 ) != reset_local_to_scene) {
      ( **(code**)( *(long*)this + 0x160 ) )(this);
   }

   *(Node**)( this + 0x1b8 ) = param_1;
   if (local_98 != (long*)0x0) {
      for (lVar2 = *local_98; lVar2 != 0; lVar2 = *(long*)( lVar2 + 0x30 )) {
         if (( *(byte*)( lVar2 + 0x28 ) & 2 ) != 0) {
            StringName::StringName((StringName*)local_88, (String*)( lVar2 + 8 ), false);
            Object::get((StringName*)local_58, (bool*)this);
            if (( StringName::configured != '\0' ) && ( local_88._0_8_ != 0 )) {
               StringName::unref();
            }

            local_68 = 2;
            local_88 = (undefined1[16])0x0;
            local_78 = (undefined1[16])0x0;
            _find_sub_resources(this, (Variant*)local_58, (HashSet*)local_88);
            iVar14 = local_68._4_4_;
            if (local_68._4_4_ != 0) {
               uVar13 = local_88._0_8_;
               lVar22 = 0;
               do {
                  pOVar21 = *(Object**)( uVar13 + lVar22 * 8 );
                  if (( pOVar21 == (Object*)0x0 ) || ( local_90 = pOVar21 ),cVar15 = RefCounted::reference(),cVar15 == '\0') {
                     local_90 = (Object*)0x0;
                     pOVar21 = (Object*)0x0;
                  }

                  if (pOVar21[0x1b0] != (Object)0x0) {
                     if (( *(long*)( param_2 + 8 ) != 0 ) && ( *(int*)( param_2 + 0x2c ) != 0 )) {
                        uVar24 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( param_2 + 0x28 )]);
                        lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
                        uVar17 = (long)pOVar21 * 0x3ffff - 1;
                        uVar17 = ( uVar17 ^ uVar17 >> 0x1f ) * 0x15;
                        uVar17 = ( uVar17 ^ uVar17 >> 0xb ) * 0x41;
                        uVar17 = uVar17 >> 0x16 ^ uVar17;
                        uVar26 = uVar17 & 0xffffffff;
                        if ((int)uVar17 == 0) {
                           uVar26 = 1;
                        }

                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = uVar26 * lVar3;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = uVar24;
                        lVar20 = SUB168(auVar5 * auVar9, 8);
                        uVar23 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar20 * 4 );
                        iVar19 = SUB164(auVar5 * auVar9, 8);
                        if (uVar23 != 0) {
                           uVar25 = 0;
                           do {
                              if (( (uint)uVar26 == uVar23 ) && ( pOVar21 == *(Object**)( *(long*)( *(long*)( param_2 + 8 ) + lVar20 * 8 ) + 0x10 ) )) goto LAB_00102f60;
                              uVar25 = uVar25 + 1;
                              auVar6._8_8_ = 0;
                              auVar6._0_8_ = ( ulong )(iVar19 + 1) * lVar3;
                              auVar10._8_8_ = 0;
                              auVar10._0_8_ = uVar24;
                              lVar20 = SUB168(auVar6 * auVar10, 8);
                              uVar23 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar20 * 4 );
                              iVar19 = SUB164(auVar6 * auVar10, 8);
                           }
 while ( ( uVar23 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar23 * lVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar24,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(uint)(( ( &hash_table_size_primes )[*(uint*)( param_2 + 0x28 )] + iVar19 ) - SUB164(auVar7 * auVar11, 8)) * lVar3,auVar12._8_8_ = 0,auVar12._0_8_ = uVar24,uVar25 <= SUB164(auVar8 * auVar12, 8) );
                        }

                     }

                     configure_for_local_scene((Resource*)pOVar21, param_1, param_2);
                     puVar18 = (undefined8*)HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>::operator []((HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>*)param_2, (Ref*)&local_90);
                     pOVar4 = (Object*)*puVar18;
                     if (pOVar21 != pOVar4) {
                        *puVar18 = pOVar21;
                        cVar15 = RefCounted::reference();
                        if (cVar15 == '\0') {
                           *puVar18 = 0;
                        }

                        if (( ( pOVar4 != (Object*)0x0 ) && ( cVar15 = RefCounted::unreference() ),cVar15 != '\0' )) &&( cVar15 = cVar15 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
                        Memory::free_static(pOVar4, false);
                     }

                  }

               }
 while ( true );
            }

            pvVar16 = (void*)local_88._0_8_;
            if ((void*)local_88._0_8_ != (void*)0x0) {
               if (local_68._4_4_ != 0) {
                  if (( &hash_table_size_primes )[local_68 & 0xffffffff] != 0) {
                     memset((void*)local_78._8_8_, 0, ( ulong )(uint)(&hash_table_size_primes)[local_68 & 0xffffffff] * 4);
                     if (local_68._4_4_ == 0) goto LAB_0010305b;
                  }

                  lVar22 = 0;
                  do {
                     plVar1 = (long*)( (long)pvVar16 + lVar22 * 8 );
                     if (*plVar1 != 0) {
                        cVar15 = RefCounted::unreference();
                        if (cVar15 != '\0') {
                           pOVar21 = (Object*)*plVar1;
                           cVar15 = predelete_handler(pOVar21);
                           if (cVar15 != '\0') {
                              ( **(code**)( *(long*)pOVar21 + 0x140 ) )(pOVar21);
                              Memory::free_static(pOVar21, false);
                           }

                        }

                        pvVar16 = (void*)local_88._0_8_;
                     }

                     lVar22 = lVar22 + 1;
                  }
 while ( (uint)lVar22 < local_68._4_4_ );
                  local_68 = local_68 & 0xffffffff;
                  if (pvVar16 == (void*)0x0) goto LAB_00103089;
               }

               LAB_0010305b:Memory::free_static(pvVar16, false);
               Memory::free_static((void*)local_78._0_8_, false);
               Memory::free_static((void*)local_88._8_8_, false);
               Memory::free_static((void*)local_78._8_8_, false);
            }

            LAB_00103089:if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

         }

      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_98);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::duplicate(bool) const */undefined8 *Resource::duplicate(bool param_1) {
   String *pSVar1;
   char cVar2;
   StringName *pSVar3;
   long lVar4;
   long *plVar5;
   char in_DL;
   List *in_RSI;
   undefined7 in_register_00000039;
   undefined8 *puVar6;
   long lVar7;
   long in_FS_OFFSET;
   long *local_98;
   long *local_90;
   Object *local_88;
   long local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   puVar6 = (undefined8*)CONCAT71(in_register_00000039, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (long*)0x0;
   Object::get_property_list(in_RSI, SUB81((List<PropertyInfo,DefaultAllocator>*)&local_98, 0));
   ( **(code**)( *(long*)in_RSI + 0x48 ) )((String*)&local_88);
   StringName::StringName((StringName*)&local_80, (String*)&local_88, false);
   pSVar3 = (StringName*)ClassDB::instantiate((StringName*)&local_80);
   if (( pSVar3 == (StringName*)0x0 ) || ( cVar2 = RefCounted::init_ref() ),cVar2 == '\0') {
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      _err_print_error("duplicate", "core/io/resource.cpp", 0x177, "Condition \"r.is_null()\" is true. Returning: Ref<Resource>()", 0, 0);
      *puVar6 = 0;
   }
 else {
      if (( StringName::configured == '\0' ) || ( local_80 == 0 )) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      }
 else {
         StringName::unref();
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      }

      if (local_98 != (long*)0x0) {
         for (lVar7 = *local_98; lVar7 != 0; lVar7 = *(long*)( lVar7 + 0x30 )) {
            while (( *(byte*)( lVar7 + 0x28 ) & 2 ) != 0) {
               pSVar1 = (String*)( lVar7 + 8 );
               StringName::StringName((StringName*)&local_80, pSVar1, false);
               Object::get((StringName*)local_78, (bool*)in_RSI);
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

               if (local_78[0] == 0x18) {
                  if (( ( *(uint*)( lVar7 + 0x28 ) & 0x100000 ) != 0 ) || ( ( in_DL == '\0' && ( ( *(uint*)( lVar7 + 0x28 ) & 0x80000 ) == 0 ) ) )) {
                     LAB_00103678:StringName::StringName((StringName*)&local_80, pSVar1, false);
                     Object::set(pSVar3, (Variant*)&local_80, (bool*)local_78);
                     if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                        StringName::unref();
                     }

                     goto LAB_001033ef;
                  }

                  local_90 = (long*)0x0;
                  lVar4 = Variant::get_validated_object();
                  if (( lVar4 != 0 ) && ( plVar5 = (long*)__dynamic_cast(lVar4, &Object::typeinfo, &typeinfo, 0) ),plVar5 != (long*)0x0) {
                     local_90 = plVar5;
                     cVar2 = RefCounted::reference();
                     if (cVar2 == '\0') {
                        local_90 = (long*)0x0;
                     }
 else {
                        ( **(code**)( *plVar5 + 0x198 ) )((String*)&local_88, plVar5, in_DL);
                        Variant::Variant((Variant*)local_58, local_88);
                        StringName::StringName((StringName*)&local_80, pSVar1, false);
                        Object::set(pSVar3, (Variant*)&local_80, (bool*)local_58);
                        if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                           StringName::unref();
                        }

                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        Ref<Resource>::unref((Ref<Resource>*)&local_88);
                     }

                  }

                  Ref<Resource>::unref((Ref<Resource>*)&local_90);
                  cVar2 = Variant::needs_deinit[local_78[0]];
               }
 else {
                  if (0xb < local_78[0] - 0x1bU) goto LAB_00103678;
                  Variant::duplicate(SUB81(local_58, 0));
                  StringName::StringName((StringName*)&local_80, pSVar1, false);
                  Object::set(pSVar3, (Variant*)&local_80, (bool*)local_58);
                  if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                     StringName::unref();
                  }

                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  LAB_001033ef:cVar2 = Variant::needs_deinit[local_78[0]];
               }

               if (cVar2 == '\0') break;
               Variant::_clear_internal();
               lVar7 = *(long*)( lVar7 + 0x30 );
               if (lVar7 == 0) goto LAB_001035a6;
            }
;
         }

      }

      LAB_001035a6:*puVar6 = pSVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         *puVar6 = 0;
      }

      cVar2 = RefCounted::unreference();
      if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)pSVar3) ),cVar2 != '\0') {
         ( **(code**)( *(long*)pSVar3 + 0x140 ) )(pSVar3);
         Memory::free_static(pSVar3, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_98);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar6;
}
/* Resource::_dupe_sub_resources(Variant&, Node*, HashMap<Ref<Resource>, Ref<Resource>,
   HashMapHasherDefault, HashMapComparatorDefault<Ref<Resource> >,
   DefaultTypedAllocator<HashMapElement<Ref<Resource>, Ref<Resource> > > >&) */void Resource::_dupe_sub_resources(Resource *this, Variant *param_1, Node *param_2, HashMap *param_3) {
   char cVar1;
   int iVar2;
   long lVar3;
   Ref *pRVar4;
   Variant *pVVar5;
   Variant *pVVar6;
   Variant *pVVar7;
   undefined8 *puVar8;
   Ref<Resource> *pRVar9;
   int iVar10;
   long in_FS_OFFSET;
   Variant local_78[8];
   undefined8 *local_70;
   Ref *local_68;
   Object *local_60;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *(int*)param_1;
   if (iVar2 == 0x1b) {
      Variant::operator_cast_to_Dictionary(local_78);
      local_70 = (undefined8*)0x0;
      Dictionary::get_key_list((List*)local_78);
      if (local_70 != (undefined8*)0x0) {
         for (pVVar5 = (Variant*)*local_70; pVVar5 != (Variant*)0x0; pVVar5 = *(Variant**)( pVVar5 + 0x18 )) {
            if (*(int*)pVVar5 == 0x18) {
               local_68 = (Ref*)0x0;
               lVar3 = Variant::get_validated_object();
               if (( lVar3 != 0 ) && ( pRVar4 = (Ref*)__dynamic_cast(lVar3, &Object::typeinfo, &typeinfo, 0) ),pRVar4 != (Ref*)0x0) {
                  local_68 = pRVar4;
                  cVar1 = RefCounted::reference();
                  if (cVar1 == '\0') {
                     local_68 = (Ref*)0x0;
                  }
 else if (pRVar4[0x1b0] != (Ref)0x0) {
                     cVar1 = HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>::_lookup_pos((HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>*)param_3, pRVar4, (uint*)&local_60);
                     if (cVar1 == '\0') {
                        duplicate_for_local_scene((Resource*)&local_60, (Node*)pRVar4, (HashMap*)param_2);
                        pVVar6 = (Variant*)Dictionary::operator [](local_78);
                        Variant::Variant((Variant*)local_58, local_60);
                        pVVar7 = (Variant*)Dictionary::operator [](local_78);
                        Variant::operator =(pVVar7, pVVar6);
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        Dictionary::erase(local_78);
                        pRVar9 = (Ref<Resource>*)HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>::operator []((HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>*)param_3, (Ref*)&local_68);
                        Ref<Resource>::operator =(pRVar9, (Ref*)local_60);
                        Ref<Resource>::unref((Ref<Resource>*)&local_60);
                     }
 else {
                        pVVar6 = (Variant*)Dictionary::operator [](local_78);
                        puVar8 = (undefined8*)HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>::operator []((HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>*)param_3, (Ref*)&local_68);
                        Variant::Variant((Variant*)local_58, (Object*)*puVar8);
                        pVVar7 = (Variant*)Dictionary::operator [](local_78);
                        Variant::operator =(pVVar7, pVVar6);
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        Dictionary::erase(local_78);
                     }

                  }

               }

               Ref<Resource>::unref((Ref<Resource>*)&local_68);
            }
 else {
               _dupe_sub_resources(this, pVVar5, param_2, param_3);
            }

            pVVar6 = (Variant*)Dictionary::operator [](local_78);
            _dupe_sub_resources(this, pVVar6, param_2, param_3);
         }

      }

      List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator>*)&local_70);
      Dictionary::~Dictionary((Dictionary*)local_78);
   }
 else if (iVar2 == 0x1c) {
      iVar10 = 0;
      Variant::operator_cast_to_Array((Variant*)&local_60);
      iVar2 = Array::size();
      if (0 < iVar2) {
         do {
            iVar10 = iVar10 + 1;
            pVVar5 = (Variant*)Array::operator []((int)(Variant*)&local_60);
            _dupe_sub_resources(this, pVVar5, param_2, param_3);
            iVar2 = Array::size();
         }
 while ( iVar10 < iVar2 );
      }

      Array::~Array((Array*)&local_60);
   }
 else if (iVar2 == 0x18) {
      local_68 = (Ref*)0x0;
      lVar3 = Variant::get_validated_object();
      if (( lVar3 != 0 ) && ( pRVar4 = (Ref*)__dynamic_cast(lVar3, &Object::typeinfo, &typeinfo, 0) ),pRVar4 != (Ref*)0x0) {
         local_68 = pRVar4;
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            local_68 = (Ref*)0x0;
         }
 else if (pRVar4[0x1b0] != (Ref)0x0) {
            cVar1 = HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>::_lookup_pos((HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>*)param_3, pRVar4, (uint*)&local_60);
            if (cVar1 == '\0') {
               duplicate_for_local_scene((Resource*)&local_60, (Node*)pRVar4, (HashMap*)param_2);
               Variant::Variant((Variant*)local_58, local_60);
               if (Variant::needs_deinit[*(int*)param_1] != '\0') {
                  Variant::_clear_internal();
               }

               *(int*)param_1 = local_58[0];
               *(undefined8*)( param_1 + 8 ) = local_50;
               *(undefined8*)( param_1 + 0x10 ) = uStack_48;
               pRVar9 = (Ref<Resource>*)HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>::operator []((HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>*)param_3, (Ref*)&local_68);
               Ref<Resource>::operator =(pRVar9, (Ref*)local_60);
               Ref<Resource>::unref((Ref<Resource>*)&local_60);
            }
 else {
               puVar8 = (undefined8*)HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>::operator []((HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>*)param_3, (Ref*)&local_68);
               Variant::Variant((Variant*)local_58, (Object*)*puVar8);
               if (Variant::needs_deinit[*(int*)param_1] != '\0') {
                  Variant::_clear_internal();
               }

               *(int*)param_1 = local_58[0];
               *(undefined8*)( param_1 + 8 ) = local_50;
               *(undefined8*)( param_1 + 0x10 ) = uStack_48;
            }

         }

      }

      Ref<Resource>::unref((Ref<Resource>*)&local_68);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::duplicate_for_local_scene(Node*, HashMap<Ref<Resource>, Ref<Resource>,
   HashMapHasherDefault, HashMapComparatorDefault<Ref<Resource> >,
   DefaultTypedAllocator<HashMapElement<Ref<Resource>, Ref<Resource> > > >&) */Resource * __thiscall
Resource::duplicate_for_local_scene(Resource *this,Node *param_1,HashMap *param_2){
   char cVar1;
   long lVar2;
   StringName *pSVar3;
   HashMap *in_RCX;
   long in_FS_OFFSET;
   long *local_90;
   CowData<char32_t> local_88[8];
   long local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = (long*)0x0;
   Object::get_property_list((List*)param_1, SUB81((List<PropertyInfo,DefaultAllocator>*)&local_90, 0));
   ( **(code**)( *(long*)param_1 + 0x48 ) )(local_88, param_1);
   StringName::StringName((StringName*)&local_80, (String*)local_88, false);
   lVar2 = ClassDB::instantiate((StringName*)&local_80);
   if (( ( lVar2 == 0 ) || ( pSVar3 = (StringName*)__dynamic_cast(lVar2, &Object::typeinfo, &typeinfo, 0) ),pSVar3 == (StringName*)0x0 )) {
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref(local_88);
      _err_print_error("duplicate_for_local_scene", "core/io/resource.cpp", 0x129, "Condition \"r.is_null()\" is true. Returning: Ref<Resource>()", 0, 0);
      *(undefined8*)this = 0;
   }
 else {
      if (( StringName::configured == '\0' ) || ( local_80 == 0 )) {
         CowData<char32_t>::_unref(local_88);
      }
 else {
         StringName::unref();
         CowData<char32_t>::_unref(local_88);
      }

      *(HashMap**)( pSVar3 + 0x1b8 ) = param_2;
      if (local_90 != (long*)0x0) {
         for (lVar2 = *local_90; lVar2 != 0; lVar2 = *(long*)( lVar2 + 0x30 )) {
            if (( *(byte*)( lVar2 + 0x28 ) & 2 ) != 0) {
               StringName::StringName((StringName*)&local_80, (String*)( lVar2 + 8 ), false);
               Object::get((StringName*)local_58, (bool*)param_1);
               Variant::duplicate(SUB81((Variant*)local_78, 0));
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

               _dupe_sub_resources((Resource*)param_1, (Variant*)local_78, (Node*)param_2, in_RCX);
               StringName::StringName((StringName*)&local_80, (String*)( lVar2 + 8 ), false);
               Object::set(pSVar3, (Variant*)&local_80, (bool*)local_78);
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }

         }

      }

      *(StringName**)this = pSVar3;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      cVar1 = RefCounted::unreference();
      if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler((Object*)pSVar3) ),cVar1 != '\0') {
         ( **(code**)( *(long*)pSVar3 + 0x140 ) )(pSVar3);
         Memory::free_static(pSVar3, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_90);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* Resource::reset_state() */void Resource::reset_state(Resource *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   StringName local_d8[8];
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_001040ab:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x230] == (Resource)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         String::parse_latin1((String*)local_c8, "_reset_state");
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x238 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "Resource");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes(local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_001042f7;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_0010430c:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_00104249;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x228);
               *(undefined8*)( this + 0x238 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_001042f7:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_0010430c;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x228, uVar1);
            *(undefined8*)( this + 0x238 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_00104249:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x238 );
            plVar4[1] = (long)( this + 0x230 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x230] = (Resource)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x238 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010416c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010410d. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x228, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_0010437f;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x228, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_001040ab;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010437f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Resource::get_rid() const */undefined8 Resource::get_rid(Resource *this) {
   undefined4 uVar1;
   long lVar2;
   undefined8 uVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   undefined8 local_f8;
   long local_f0;
   undefined4 local_e8[2];
   long local_e0;
   long local_d8;
   undefined4 local_d0;
   long local_c8;
   undefined4 local_c0;
   int local_b8;
   undefined4 uStack_b4;
   undefined4 uStack_b0;
   undefined4 uStack_ac;
   undefined1 local_a8[16];
   undefined8 local_98;
   long local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_68;
   ulong local_60;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   plVar4 = *(long**)( this + 0x98 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 != (long*)0x0) {
      local_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      ( **(code**)( *plVar4 + 0x60 ) )((Variant*)local_48, plVar4, this + 0x1f8, 0, 0, &local_b8);
      if (local_b8 == 0) {
         uVar3 = Variant::operator_cast_to_RID((Variant*)local_48);
         if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001044ab;
      }

      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   lVar2 = *(long*)( this + 8 );
   if (lVar2 == 0) {
      pcVar5 = *(code**)( this + 0x208 );
      if (pcVar5 != (code*)0x0) {
         LAB_0010447f:local_b8 = 0;
         uStack_b4 = 0;
         if (*(code**)( lVar2 + 0xe0 ) == (code*)0x0) {
            ( *pcVar5 )(*(undefined8*)( this + 0x10 ), 0, &local_b8);
            uVar3 = CONCAT44(uStack_b4, local_b8);
         }
 else {
            ( **(code**)( lVar2 + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1f8, pcVar5, 0);
            uVar3 = CONCAT44(uStack_b4, local_b8);
         }

         goto LAB_001044ab;
      }

   }
 else {
      if (this[0x200] == (Resource)0x0) {
         local_b8 = 0;
         uStack_b4 = 0;
         local_a8 = (undefined1[16])0x0;
         uStack_b0 = 0;
         uStack_ac = 0;
         local_98 = 0;
         local_90 = 0;
         local_88 = 6;
         local_80 = 1;
         local_78 = 0;
         local_68 = 0;
         local_60 = 0;
         local_50 = 0;
         String::parse_latin1((String*)&local_b8, "_get_rid");
         local_80 = CONCAT44(local_80._4_4_, 0xc);
         GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void>*)local_e8);
         uStack_b0 = local_e8[0];
         if (local_a8._0_8_ != local_e0) {
            CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
            lVar2 = local_e0;
            local_e0 = 0;
            local_a8._0_8_ = lVar2;
         }

         if (local_a8._8_8_ != local_d8) {
            StringName::unref();
            lVar2 = local_d8;
            local_d8 = 0;
            local_a8._8_8_ = lVar2;
         }

         local_98 = CONCAT44(local_98._4_4_, local_d0);
         if (local_90 != local_c8) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            local_90 = local_c8;
            local_c8 = 0;
         }

         local_88 = CONCAT44(local_88._4_4_, local_c0);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_e8);
         local_60 = local_60 & 0xffffffff00000000;
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar2 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x208 ) = 0;
         pcVar5 = *(code**)( lVar2 + 0xd8 );
         if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar2 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar2 + 0xd0 ) ),pcVar5 == (code*)0x0) {
            local_f8 = 0;
            String::parse_latin1((String*)&local_f8, "Resource");
            StringName::StringName((StringName*)&local_f0, (String*)&local_f8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_e8, (StringName*)&local_f0);
            if (local_e0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_e0);
               if (( StringName::configured != '\0' ) && ( lVar2 = local_f0 != 0 )) goto LAB_00104823;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
            }
 else {
               lVar2 = *(long*)( local_e0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_e0);
               if (( StringName::configured != '\0' ) && ( local_f0 != 0 )) {
                  LAB_00104823:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
               if (lVar2 != 0) {
                  lVar2 = *(long*)( this + 8 );
                  goto LAB_001046bc;
               }

            }

            lVar2 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar2 + 200 );
            if (( ( pcVar5 != (code*)0x0 ) && ( *(long*)( lVar2 + 0xe0 ) != 0 ) ) || ( pcVar5 = *(code**)( lVar2 + 0xc0 ) ),pcVar5 != (code*)0x0) {
               uVar3 = ( *pcVar5 )(*(undefined8*)( lVar2 + 0xa0 ), this + 0x1f8);
               *(undefined8*)( this + 0x208 ) = uVar3;
               lVar2 = *(long*)( this + 8 );
            }

         }
 else {
            uVar3 = ( *pcVar5 )(*(undefined8*)( lVar2 + 0xa0 ), this + 0x1f8, uVar1);
            *(undefined8*)( this + 0x208 ) = uVar3;
            lVar2 = *(long*)( this + 8 );
         }

         LAB_001046bc:if (*(char*)( lVar2 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x208 );
            plVar4[1] = (long)( this + 0x200 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x200] = (Resource)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
         pcVar5 = *(code**)( this + 0x208 );
         lVar2 = *(long*)( this + 8 );
         if (pcVar5 != (code*)0x0) goto LAB_0010447f;
         if (lVar2 == 0) goto LAB_00104700;
      }
 else {
         pcVar5 = *(code**)( this + 0x208 );
         if (pcVar5 != (code*)0x0) goto LAB_0010447f;
      }

      if (*(code**)( lVar2 + 0x98 ) != (code*)0x0) {
         uVar3 = ( **(code**)( lVar2 + 0x98 ) )(*(undefined8*)( this + 0x10 ));
         goto LAB_001044ab;
      }

   }

   LAB_00104700:uVar3 = 0;
   LAB_001044ab:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* Resource::setup_local_to_scene() */void Resource::setup_local_to_scene(Resource *this) {
   int iVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   StringName local_d8[8];
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((setup_local_to_scene()::{lambda()
   #1
   ( iVar1 = __cxa_guard_acquire(&setup_local_to_scene()::{lambda()#1}::operator()()::sname),
     iVar1 != 0) );
   {
      _scs_create((char *)&setup_local_to_scene()::{lambda()
      #1
      __cxa_atexit(StringName::~StringName, &setup_local_to_scene()::, {
            lambda()
            #1
            &__dso_handle;
            __cxa_guard_release(&setup_local_to_scene()::{lambda()#1}::operator()()::sname);
  }
  local_50 = (undefined1  [16])0x0;, local_58 = 0(**(code**)( *(long*)this + 0xd0 ))(this, &setup_local_to_scene()::, {
                     lambda()
                     #1
                     if (Variant::needs_deinit[(int)local_58] != '\0') {
                        Variant::_clear_internal();
                     }

                     plVar5 = *(long**)( this + 0x98 );
                     if (plVar5 == (long*)0x0) {
                        LAB_00104a20:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1e8] == (Resource)0x0 )) {
                           local_c8[0] = 0;
                           local_c8[1] = 0;
                           local_b8 = (undefined1[16])0x0;
                           local_c8[2] = 0;
                           local_c8[3] = 0;
                           local_a8 = 0;
                           local_a0 = 0;
                           local_98 = 6;
                           local_90 = 1;
                           local_88 = 0;
                           local_78 = 0;
                           local_70 = 0;
                           local_60 = 0;
                           String::parse_latin1((String*)local_c8, "_setup_local_to_scene");
                           local_90 = CONCAT44(local_90._4_4_, 8);
                           uVar2 = MethodInfo::get_compatibility_hash();
                           lVar4 = *(long*)( this + 8 );
                           *(undefined8*)( this + 0x1f0 ) = 0;
                           UNRECOVERED_JUMPTABLE = *(code**)( lVar4 + 0xd8 );
                           if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar4 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
                              local_e8 = 0;
                              String::parse_latin1((String*)&local_e8, "Resource");
                              StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
                              ClassDB::get_virtual_method_compatibility_hashes(local_d8, (StringName*)&local_e0);
                              if (local_d0 == 0) {
                                 lVar4 = 0;
                                 CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
                                 if (StringName::configured != '\0') goto LAB_00104cdf;
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
                                 LAB_00104cfc:lVar4 = *(long*)( this + 8 );
                                 UNRECOVERED_JUMPTABLE = *(code**)( lVar4 + 200 );
                                 if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar4 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_00104c41;
                                 uVar3 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1e0);
                                 *(undefined8*)( this + 0x1f0 ) = uVar3;
                              }
 else {
                                 lVar4 = *(long*)( local_d0 + -8 );
                                 CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
                                 if (StringName::configured != '\0') {
                                    LAB_00104cdf:if (local_e0 != 0) {
                                       StringName::unref();
                                    }

                                 }

                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
                                 if (lVar4 == 0) goto LAB_00104cfc;
                              }

                              lVar4 = *(long*)( this + 8 );
                           }
 else {
                              uVar3 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1e0, uVar2);
                              *(undefined8*)( this + 0x1f0 ) = uVar3;
                              lVar4 = *(long*)( this + 8 );
                           }

                           LAB_00104c41:if (*(char*)( lVar4 + 0x29 ) != '\0') {
                              plVar5 = (long*)operator_new(0x18, "");
                              *plVar5 = (long)( this + 0x1f0 );
                              plVar5[1] = (long)( this + 0x1e8 );
                              plVar5[2] = *(long*)( this + 0x168 );
                              *(long**)( this + 0x168 ) = plVar5;
                           }

                           this[0x1e8] = (Resource)0x1;
                           MethodInfo::~MethodInfo((MethodInfo*)local_c8);
                        }

                        UNRECOVERED_JUMPTABLE = *(code**)( this + 0x1f0 );
                        if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
                           if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
                              if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                                 /* WARNING: Could not recover jumptable at 0x00104b44. Too many branches */
                                 /* WARNING: Treating indirect jump as call */
                                 ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
                                 return;
                              }

                           }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                              /* WARNING: Could not recover jumptable at 0x00104a86. Too many branches */
                              /* WARNING: Treating indirect jump as call */
                              ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1e0, UNRECOVERED_JUMPTABLE, 0, 0);
                              return;
                           }

                           goto LAB_00104d6f;
                        }

                     }
 else {
                        for (int i = 0; i < 3; i++) {
                           local_c8[i] = 0;
                        }

                        ( **(code**)( *plVar5 + 0x60 ) )(&local_58, plVar5, this + 0x1e0, 0, 0, local_c8);
                        if (Variant::needs_deinit[(int)local_58] != '\0') {
                           Variant::_clear_internal();
                        }

                        if (local_c8[0] != 0) goto LAB_00104a20;
                     }

                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        return;
                     }

                     LAB_00104d6f:/* WARNING: Subroutine does not return */__stack_chk_fail();
                  }
, /* Vector<int>::push_back(int) [clone .isra.0] */, void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)(*(long*)( this + 8 ) == 0) = 1);
         }
, else {
    lVar2 = *(long *)(*(long*)( this + 8 ) + -8) + 1;
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
/* Resource::_bind_methods() */void Resource::_bind_methods(void) {
   long *plVar1;
   CowData<char32_t> *this;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined *puVar5;
   undefined *puVar6;
   int *piVar7;
   int iVar8;
   MethodBind *pMVar9;
   uint uVar10;
   int *piVar11;
   long lVar12;
   long lVar13;
   long in_FS_OFFSET;
   undefined8 local_180;
   long local_178;
   long local_170;
   long local_168;
   long local_160;
   long local_158;
   long local_150;
   char *local_148;
   undefined1 local_140[16];
   int local_130;
   long local_128;
   undefined4 local_120;
   char *local_118;
   undefined8 local_110;
   undefined1 local_108[16];
   undefined8 local_f8;
   long local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   int *local_c8;
   ulong local_c0;
   Vector<int> local_b8[8];
   long local_b0;
   char *local_a8;
   undefined8 local_a0;
   Variant *local_98;
   undefined *puStack_90;
   undefined8 local_88;
   Variant **local_78;
   undefined1 auStack_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   puVar6 = PTR__LC75_00116590;
   puVar5 = PTR__LC74_00116588;
   local_140._8_8_ = local_140._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a0 = 0;
   local_a8 = "path";
   uVar10 = (uint)(Variant*)&local_78;
   local_78 = (Variant**)&local_a8;
   D_METHODP((char*)&local_118, (char***)"set_path", uVar10);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource,String_const&>(_set_path);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_a0 = 0;
   local_a8 = "path";
   local_78 = (Variant**)&local_a8;
   D_METHODP((char*)&local_118, (char***)"take_over_path", uVar10);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource,String_const&>(_take_over_path);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_path", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource,String>(get_path);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_a0 = 0;
   local_a8 = "path";
   local_78 = (Variant**)&local_a8;
   D_METHODP((char*)&local_118, (char***)"set_path_cache", uVar10);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource,String_const&>((_func_void_String_ptr*)0x191);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_a0 = 0;
   local_a8 = "name";
   local_78 = (Variant**)&local_a8;
   D_METHODP((char*)&local_118, (char***)"set_name", uVar10);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource,String_const&>(set_name);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_name", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource,String>(get_name);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_rid", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource,RID>((_func_RID*)0x1c1);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_a0 = 0;
   local_a8 = "enable";
   local_78 = (Variant**)&local_a8;
   D_METHODP((char*)&local_118, (char***)"set_local_to_scene", uVar10);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource,bool>(set_local_to_scene);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"is_local_to_scene", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource,bool>(is_local_to_scene);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_local_scene", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource,Node*>(get_local_scene);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"setup_local_to_scene", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource>((_func_void*)0x1a1);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"reset_state", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource>((_func_void*)0x171);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_88 = 0;
   auStack_70._0_8_ = &puStack_90;
   local_98 = (Variant*)puVar5;
   puStack_90 = puVar6;
   local_78 = &local_98;
   D_METHODP((char*)&local_118, (char***)"set_id_for_path", uVar10);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource,String_const&,String_const&>(set_id_for_path);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   puStack_90 = (undefined*)0x0;
   local_98 = (Variant*)&_LC74;
   local_78 = &local_98;
   D_METHODP((char*)&local_118, (char***)"get_id_for_path", uVar10);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource,String,String_const&>(get_id_for_path);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"is_built_in", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource,bool>(is_built_in);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"generate_scene_unique_id", 0);
   StringName::StringName((StringName*)&local_148, "Resource", false);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar9);
   *(undefined***)pMVar9 = &PTR__gen_argument_type_001162a8;
   *(code**)( pMVar9 + 0x58 ) = generate_scene_unique_id;
   MethodBind::_generate_argument_types((int)pMVar9);
   *(undefined4*)( pMVar9 + 0x34 ) = 0;
   MethodBind::_set_static(SUB81(pMVar9, 0));
   MethodBind::_set_returns(SUB81(pMVar9, 0));
   StringName::operator =((StringName*)( pMVar9 + 0x18 ), (StringName*)&local_148);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   puStack_90 = (undefined*)0x0;
   local_98 = (Variant*)&_LC75;
   local_78 = &local_98;
   D_METHODP((char*)&local_118, (char***)"set_scene_unique_id", uVar10);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource,String_const&>(set_scene_unique_id);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_scene_unique_id", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource,String>(get_scene_unique_id);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"emit_changed", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar9 = create_method_bind<Resource>(emit_changed);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   puStack_90 = (undefined*)0x0;
   local_98 = (Variant*)0x108bd6;
   local_78 = &local_98;
   D_METHODP((char*)&local_118, (char***)"duplicate", uVar10);
   Variant::Variant((Variant*)&local_78, false);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar9 = create_method_bind<Resource,Ref<Resource>,bool>((_func_Ref_bool*)0x199);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_158 = 0;
   local_118 = "changed";
   local_110 = 7;
   String::parse_latin1((StrRange*)&local_158);
   local_108 = (undefined1[16])0x0;
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = (int*)0x0;
   local_c0 = 0;
   local_b0 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_158);
   local_148 = "Resource";
   local_160 = 0;
   local_140._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_signal((StringName*)&local_148, (MethodInfo*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   lVar12 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   piVar7 = local_c8;
   if (local_c8 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_c8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar12 = *(long*)( local_c8 + -2 );
         lVar13 = 0;
         local_c8 = (int*)0x0;
         piVar11 = piVar7;
         if (lVar12 != 0) {
            do {
               if (Variant::needs_deinit[*piVar11] != '\0') {
                  Variant::_clear_internal();
               }

               lVar13 = lVar13 + 1;
               piVar11 = piVar11 + 6;
            }
 while ( lVar12 != lVar13 );
         }

         Memory::free_static(piVar7 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_108._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   local_118 = "setup_local_to_scene_requested";
   local_158 = 0;
   local_110 = 0x1e;
   String::parse_latin1((StrRange*)&local_158);
   local_108 = (undefined1[16])0x0;
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = (int*)0x0;
   local_c0 = 0;
   local_b0 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_158);
   local_148 = "Resource";
   local_160 = 0;
   local_140._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_signal((StringName*)&local_148, (MethodInfo*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   lVar12 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   piVar7 = local_c8;
   if (local_c8 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_c8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar12 = *(long*)( local_c8 + -2 );
         lVar13 = 0;
         local_c8 = (int*)0x0;
         piVar11 = piVar7;
         if (lVar12 != 0) {
            do {
               if (Variant::needs_deinit[*piVar11] != '\0') {
                  Variant::_clear_internal();
               }

               lVar13 = lVar13 + 1;
               piVar11 = piVar11 + 6;
            }
 while ( lVar12 != lVar13 );
         }

         Memory::free_static(piVar7 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_108._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   local_118 = "resource_";
   local_148 = (char*)0x0;
   local_110 = 9;
   String::parse_latin1((StrRange*)&local_148);
   local_158 = 0;
   local_118 = "Resource";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_158);
   local_160 = 0;
   local_118 = "Resource";
   local_110 = 8;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_118, (String*)&local_160, false);
   ClassDB::add_property_group((StringName*)&local_118, (String*)&local_158, (String*)&local_148, 0);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   _scs_create((char*)&local_158, true);
   _scs_create((char*)&local_160, true);
   local_170 = 0;
   local_118 = "";
   local_168 = 0;
   local_110 = 0;
   String::parse_latin1((StrRange*)&local_170);
   local_178 = 0;
   local_118 = "resource_local_to_scene";
   local_110 = 0x17;
   String::parse_latin1((StrRange*)&local_178);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_118, 1, (StrRange*)&local_178, 0, (StrRange*)&local_170, 6, (CowData<char32_t>*)&local_168);
   local_148 = "Resource";
   local_180 = 0;
   local_140._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_180);
   StringName::StringName((StringName*)&local_148, (String*)&local_180, false);
   ClassDB::add_property((StringName*)&local_148, (PropertyInfo*)&local_118, (StringName*)&local_160, (StringName*)&local_158, -1);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_160 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_158 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_158, true);
   _scs_create((char*)&local_160, true);
   local_168 = 0;
   local_170 = 0;
   String::parse_latin1((String*)&local_170, "");
   local_118 = "resource_path";
   local_178 = 0;
   local_110 = 0xd;
   String::parse_latin1((StrRange*)&local_178);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_118, 4, (StrRange*)&local_178, 0, (StrRange*)&local_170, 4, (CowData<char32_t>*)&local_168);
   local_148 = "Resource";
   local_180 = 0;
   local_140._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_180);
   StringName::StringName((StringName*)&local_148, (String*)&local_180, false);
   ClassDB::add_property((StringName*)&local_148, (PropertyInfo*)&local_118, (StringName*)&local_160, (StringName*)&local_158, -1);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_160 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_158 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_158, true);
   _scs_create((char*)&local_160, true);
   local_118 = "";
   local_168 = 0;
   local_170 = 0;
   local_110 = 0;
   String::parse_latin1((StrRange*)&local_170);
   local_118 = "resource_name";
   local_178 = 0;
   local_110 = 0xd;
   String::parse_latin1((StrRange*)&local_178);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_118, 4, (StrRange*)&local_178, 0, (StrRange*)&local_170, 6, (CowData<char32_t>*)&local_168);
   local_148 = "Resource";
   local_180 = 0;
   local_140._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_180);
   StringName::StringName((StringName*)&local_148, (String*)&local_180, false);
   ClassDB::add_property((StringName*)&local_148, (PropertyInfo*)&local_118, (StringName*)&local_160, (StringName*)&local_158, -1);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_160 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_158 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_158, true);
   _scs_create((char*)&local_160, true);
   local_118 = "";
   local_168 = 0;
   local_170 = 0;
   local_110 = 0;
   String::parse_latin1((StrRange*)&local_170);
   local_118 = "resource_scene_unique_id";
   local_178 = 0;
   local_110 = 0x18;
   String::parse_latin1((StrRange*)&local_178);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_118, 4, (StrRange*)&local_178, 0, (StrRange*)&local_170, 0, (CowData<char32_t>*)&local_168);
   local_148 = "Resource";
   local_180 = 0;
   local_140._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_180);
   StringName::StringName((StringName*)&local_148, (String*)&local_180, false);
   ClassDB::add_property((StringName*)&local_148, (PropertyInfo*)&local_118, (StringName*)&local_160, (StringName*)&local_158, -1);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (StringName::configured != '\0') {
      if (local_168 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001065ac;
      }

      if (local_160 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001065ac;
      }

      if (local_158 != 0) {
         StringName::unref();
      }

   }

   LAB_001065ac:local_108 = (undefined1[16])0x0;
   local_148 = "_setup_local_to_scene";
   local_150 = 0;
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = (int*)0x0;
   local_c0 = 0;
   local_b0 = 0;
   local_140._0_8_ = 0x15;
   String::parse_latin1((StrRange*)&local_118);
   local_148 = "Resource";
   local_e0 = CONCAT44(local_e0._4_4_, 8);
   local_160 = 0;
   local_140._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, (Vector*)&local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   lVar12 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   piVar7 = local_c8;
   if (local_c8 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_c8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar12 = *(long*)( local_c8 + -2 );
         lVar13 = 0;
         local_c8 = (int*)0x0;
         piVar11 = piVar7;
         if (lVar12 != 0) {
            do {
               if (Variant::needs_deinit[*piVar11] != '\0') {
                  Variant::_clear_internal();
               }

               lVar13 = lVar13 + 1;
               piVar11 = piVar11 + 6;
            }
 while ( lVar12 != lVar13 );
         }

         Memory::free_static(piVar7 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_108._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_108._0_8_ = 0;
   local_108._8_8_ = 0;
   local_148 = "_get_rid";
   local_150 = 0;
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = (int*)0x0;
   local_c0 = 0;
   local_b0 = 0;
   local_140._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   local_178 = 0;
   local_170 = 0;
   local_148 = "";
   auVar4._8_8_ = 0;
   auVar4._0_8_ = local_140._8_8_;
   local_140 = auVar4 << 0x40;
   String::parse_latin1((StrRange*)&local_170);
   local_168 = 0;
   local_148 = (char*)CONCAT44(local_148._4_4_, 0x17);
   local_130 = 0;
   local_128 = 0;
   local_140 = (undefined1[16])0x0;
   if (local_170 == 0) {
      LAB_0010699b:local_120 = 6;
      StringName::operator =((StringName*)( local_140 + 8 ), (StringName*)&local_178);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)&local_170);
      local_120 = 6;
      if (local_130 != 0x11) goto LAB_0010699b;
      StringName::StringName((StringName*)&local_160, (String*)&local_128, false);
      if (local_140._8_8_ == local_160) {
         if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_140._8_8_ = local_160;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( StringName::configured != '\0' ) && ( local_178 != 0 )) {
      StringName::unref();
   }

   local_110 = CONCAT44(local_110._4_4_, local_148._0_4_);
   if (local_108._0_8_ != local_140._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_108);
      local_108._0_8_ = local_140._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_140._8_8_;
      local_140 = auVar3 << 0x40;
   }

   if (local_108._8_8_ != local_140._8_8_) {
      StringName::unref();
      local_108._8_8_ = local_140._8_8_;
      local_140._8_8_ = 0;
   }

   local_f8 = CONCAT44(local_f8._4_4_, local_130);
   if (local_f0 != local_128) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      local_f0 = local_128;
      local_128 = 0;
   }

   local_e8 = CONCAT44(local_e8._4_4_, local_120);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   local_148 = "Resource";
   local_c0 = local_c0 & 0xffffffff00000000;
   local_160 = 0;
   local_140._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, (Vector*)&local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   lVar12 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   piVar7 = local_c8;
   if (local_c8 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_c8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar12 = *(long*)( local_c8 + -2 );
         lVar13 = 0;
         local_c8 = (int*)0x0;
         piVar11 = piVar7;
         if (lVar12 != 0) {
            do {
               if (Variant::needs_deinit[*piVar11] != '\0') {
                  Variant::_clear_internal();
               }

               lVar13 = lVar13 + 1;
               piVar11 = piVar11 + 6;
            }
 while ( lVar12 != lVar13 );
         }

         Memory::free_static(piVar7 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_108._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_108 = (undefined1[16])0x0;
   local_148 = "_reset_state";
   local_150 = 0;
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = (int*)0x0;
   local_c0 = 0;
   local_b0 = 0;
   local_140._0_8_ = 0xc;
   String::parse_latin1((StrRange*)&local_118);
   local_148 = "Resource";
   local_e0 = CONCAT44(local_e0._4_4_, 8);
   local_160 = 0;
   local_140._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, (Vector*)&local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   lVar12 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   piVar7 = local_c8;
   if (local_c8 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_c8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar12 = *(long*)( local_c8 + -2 );
         lVar13 = 0;
         local_c8 = (int*)0x0;
         piVar11 = piVar7;
         if (lVar12 != 0) {
            do {
               if (Variant::needs_deinit[*piVar11] != '\0') {
                  Variant::_clear_internal();
               }

               lVar13 = lVar13 + 1;
               piVar11 = piVar11 + 6;
            }
 while ( lVar12 != lVar13 );
         }

         Memory::free_static(piVar7 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_108._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   local_150 = 0;
   local_148 = (char*)0x0;
   local_118 = "path";
   local_110 = 4;
   String::parse_latin1((StrRange*)&local_148);
   local_118 = (char*)0x0;
   if (local_148 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_148);
   }

   if (local_150 == 0) {
      lVar12 = 1;
   }
 else {
      lVar12 = *(long*)( local_150 + -8 ) + 1;
   }

   iVar8 = CowData<String>::resize<false>((CowData<String>*)&local_150, lVar12);
   if (iVar8 == 0) {
      if (local_150 == 0) {
         lVar13 = -1;
         lVar12 = 0;
      }
 else {
         lVar12 = *(long*)( local_150 + -8 );
         lVar13 = lVar12 + -1;
         if (-1 < lVar13) {
            CowData<String>::_copy_on_write((CowData<String>*)&local_150);
            this(CowData<char32_t> * )(local_150 + lVar13 * 8);
            if ((char*)*(long*)this != local_118) {
               CowData<char32_t>::_ref(this, (CowData*)&local_118);
            }

            goto LAB_00106f66;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar13, lVar12, "p_index", "size()", "", false, false);
   }
 else {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   }

   LAB_00106f66:CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   local_108 = (undefined1[16])0x0;
   local_148 = "_set_path_cache";
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = 0;
   local_c8 = (int*)0x0;
   local_c0 = 0;
   local_b0 = 0;
   local_140._0_8_ = 0xf;
   String::parse_latin1((StrRange*)&local_118);
   local_e0 = CONCAT44(local_e0._4_4_, 0xc);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   Vector<int>::push_back(local_b8, 0);
   local_148 = "Resource";
   local_160 = 0;
   local_140._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   ClassDB::add_virtual_method((StringName*)&local_148, (MethodInfo*)&local_118, true, (Vector*)&local_158, false);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   lVar12 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   piVar7 = local_c8;
   if (local_c8 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_c8 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar12 = *(long*)( local_c8 + -2 );
         lVar13 = 0;
         local_c8 = (int*)0x0;
         piVar11 = piVar7;
         if (lVar12 != 0) {
            do {
               if (Variant::needs_deinit[*piVar11] != '\0') {
                  Variant::_clear_internal();
               }

               lVar13 = lVar13 + 1;
               piVar11 = piVar11 + 6;
            }
 while ( lVar12 != lVar13 );
         }

         Memory::free_static(piVar7 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_108._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<String>::_unref((CowData<String>*)&local_150);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Resource::set_path_cache(String const&) */void Resource::set_path_cache(Resource *this, String *param_1) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   undefined8 local_140;
   undefined8 local_138;
   long local_130;
   GetTypeInfo<String,void> local_128[8];
   long local_120[5];
   int local_f8[4];
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)param_1;
   if (*(long*)( this + 0x188 ) != lVar3) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x188 ), (CowData*)param_1);
      lVar3 = *(long*)param_1;
   }

   local_140 = 0;
   if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_140, (CowData*)param_1);
   }

   plVar4 = *(long**)( this + 0x98 );
   if (plVar4 != (long*)0x0) {
      for (int i = 0; i < 3; i++) {
         local_f8[i] = 0;
      }

      Variant::Variant((Variant*)local_78, (String*)&local_140);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x210, &local_80, 1, local_f8);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_f8[0] == 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00107661;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x218] == (Resource)0x0 )) {
      local_f8[0] = 0;
      local_f8[1] = 0;
      local_e8 = (undefined1[16])0x0;
      local_f8[2] = 0;
      local_f8[3] = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 6;
      local_c0 = 1;
      local_b8[0] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = 0;
      String::parse_latin1((String*)local_f8, "_set_path_cache");
      local_c0 = CONCAT44(local_c0._4_4_, 0xc);
      GetTypeInfo<String,void>::get_class_info(local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x220 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "Resource");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar3 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0010790f;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010792c:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_00107866;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x210);
            *(undefined8*)( this + 0x220 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0010790f:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar3 == 0) goto LAB_0010792c;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x210, uVar1);
         *(undefined8*)( this + 0x220 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_00107866:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x220 );
         plVar4[1] = (long)( this + 0x218 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x218] = (Resource)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_f8);
   }

   if (*(long*)( this + 0x220 ) != 0) {
      local_f8[0] = 0;
      local_f8[1] = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)local_f8, (CowData*)&local_140);
      local_58[0] = (CowData<char32_t>*)local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x220 ) )(*(undefined8*)( this + 0x10 ), local_58, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x210, *(undefined8*)( this + 0x220 ), local_58, 0);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_f8);
   }

   LAB_00107661:CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Resource::set_id_for_path(String const&, String const&) */void Resource::set_id_for_path(Resource *this, String *param_1, String *param_2) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   long lVar6;
   undefined8 uVar7;
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
   undefined1 auVar27[16];
   char cVar28;
   int iVar29;
   uint uVar30;
   long lVar31;
   HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> *this_00;
   CowData<char32_t> *this_01;
   uint uVar32;
   uint uVar33;
   long lVar34;
   long lVar35;
   long *plVar36;
   uint uVar37;
   ulong uVar38;
   long lVar39;
   uint *puVar40;
   long in_FS_OFFSET;
   CowData<char32_t> *local_60;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)param_2 == 0 ) || ( *(uint*)( *(long*)param_2 + -8 ) < 2 )) {
      iVar29 = pthread_rwlock_wrlock((pthread_rwlock_t*)ResourceCache::path_cache_lock);
      if (iVar29 == 0x23) goto LAB_00107dad;
      lVar31 = HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>::operator []((HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>*)ResourceCache::resource_path_cache, param_1);
      local_48 = 0;
      if (*(long*)( this + 0x188 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)( this + 0x188 ));
      }

      if (( *(long*)( lVar31 + 8 ) != 0 ) && ( *(int*)( lVar31 + 0x2c ) != 0 )) {
         uVar5 = ( &hash_table_size_primes )[*(uint*)( lVar31 + 0x28 )];
         lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar31 + 0x28 ) * 8 );
         uVar30 = String::hash();
         uVar38 = CONCAT44(0, uVar5);
         lVar39 = *(long*)( lVar31 + 0x10 );
         uVar32 = 1;
         if (uVar30 != 0) {
            uVar32 = uVar30;
         }

         auVar8._8_8_ = 0;
         auVar8._0_8_ = (ulong)uVar32 * lVar6;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = uVar38;
         lVar34 = SUB168(auVar8 * auVar18, 8);
         uVar30 = *(uint*)( lVar39 + lVar34 * 4 );
         uVar33 = SUB164(auVar8 * auVar18, 8);
         if (uVar30 != 0) {
            uVar37 = 0;
            do {
               if (uVar32 == uVar30) {
                  cVar28 = String::operator ==((String*)( *(long*)( *(long*)( lVar31 + 8 ) + lVar34 * 8 ) + 0x10 ), (String*)&local_48);
                  if (cVar28 != '\0') {
                     lVar6 = *(long*)( lVar31 + 0x10 );
                     lVar39 = *(long*)( lVar31 + 8 );
                     uVar5 = ( &hash_table_size_primes )[*(uint*)( lVar31 + 0x28 )];
                     uVar38 = CONCAT44(0, uVar5);
                     lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar31 + 0x28 ) * 8 );
                     auVar12._8_8_ = 0;
                     auVar12._0_8_ = ( ulong )(uVar33 + 1) * lVar34;
                     auVar22._8_8_ = 0;
                     auVar22._0_8_ = uVar38;
                     lVar35 = SUB168(auVar12 * auVar22, 8);
                     puVar40 = (uint*)( lVar6 + lVar35 * 4 );
                     uVar30 = SUB164(auVar12 * auVar22, 8);
                     uVar32 = *puVar40;
                     if (( uVar32 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar32 * lVar34,auVar23._8_8_ = 0,auVar23._0_8_ = uVar38,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar5 + uVar30 ) - SUB164(auVar13 * auVar23, 8)) * lVar34,auVar24._8_8_ = 0,auVar24._0_8_ = uVar38,uVar37 = uVar33,SUB164(auVar14 * auVar24, 8) == 0) goto LAB_00107c7c;
                     goto LAB_00107c35;
                  }

                  lVar39 = *(long*)( lVar31 + 0x10 );
               }

               uVar37 = uVar37 + 1;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = ( ulong )(uVar33 + 1) * lVar6;
               auVar19._8_8_ = 0;
               auVar19._0_8_ = uVar38;
               lVar34 = SUB168(auVar9 * auVar19, 8);
               uVar30 = *(uint*)( lVar39 + lVar34 * 4 );
               uVar33 = SUB164(auVar9 * auVar19, 8);
            }
 while ( ( uVar30 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar30 * lVar6,auVar20._8_8_ = 0,auVar20._0_8_ = uVar38,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar5 + uVar33 ) - SUB164(auVar10 * auVar20, 8)) * lVar6,auVar21._8_8_ = 0,auVar21._0_8_ = uVar38,uVar37 <= SUB164(auVar11 * auVar21, 8) );
         }

      }

   }
 else {
      iVar29 = pthread_rwlock_wrlock((pthread_rwlock_t*)ResourceCache::path_cache_lock);
      if (iVar29 == 0x23) {
         LAB_00107dad:/* WARNING: Subroutine does not return */std::__throw_system_error(0x23);
      }

      this_00 = (HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>::operator []((HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>*)ResourceCache::resource_path_cache, param_1);
      local_48 = 0;
      if (*(long*)( this + 0x188 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)( this + 0x188 ));
      }

      this_01 = (CowData<char32_t>*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this_00, (String*)&local_48);
      if (*(long*)this_01 != *(long*)param_2) {
         CowData<char32_t>::_ref(this_01, (CowData*)param_2);
      }

   }

   goto LAB_00107a7f;
   while (auVar15._8_8_ = 0,auVar15._0_8_ = (ulong)uVar32 * lVar34,auVar25._8_8_ = 0,auVar25._0_8_ = uVar38,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar30 + uVar5 ) - SUB164(auVar15 * auVar25, 8)) * lVar34,auVar26._8_8_ = 0,auVar26._0_8_ = uVar38,uVar37 = uVar33,SUB164(auVar16 * auVar26, 8) != 0) {
      LAB_00107c35:uVar33 = uVar30;
      puVar1 = (uint*)( lVar6 + (ulong)uVar37 * 4 );
      *puVar40 = *puVar1;
      puVar2 = (undefined8*)( lVar39 + lVar35 * 8 );
      *puVar1 = uVar32;
      puVar3 = (undefined8*)( lVar39 + (ulong)uVar37 * 8 );
      uVar7 = *puVar2;
      *puVar2 = *puVar3;
      *puVar3 = uVar7;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(uVar33 + 1) * lVar34;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar38;
      lVar35 = SUB168(auVar17 * auVar27, 8);
      puVar40 = (uint*)( lVar6 + lVar35 * 4 );
      uVar30 = SUB164(auVar17 * auVar27, 8);
      uVar32 = *puVar40;
      if (uVar32 == 0) break;
   }
;
   LAB_00107c7c:uVar38 = (ulong)uVar33;
   plVar4 = (long*)( lVar39 + uVar38 * 8 );
   *(undefined4*)( lVar6 + uVar38 * 4 ) = 0;
   plVar36 = (long*)*plVar4;
   if (*(long**)( lVar31 + 0x18 ) == plVar36) {
      *(long*)( lVar31 + 0x18 ) = *plVar36;
      plVar36 = (long*)*plVar4;
      if (*(long**)( lVar31 + 0x20 ) == plVar36) goto LAB_00107d08;
   }
 else if (*(long**)( lVar31 + 0x20 ) == plVar36) {
      LAB_00107d08:*(long*)( lVar31 + 0x20 ) = plVar36[1];
      plVar36 = (long*)*plVar4;
   }

   if ((long*)plVar36[1] != (long*)0x0) {
      *(long*)plVar36[1] = *plVar36;
      plVar36 = (long*)*plVar4;
   }

   if (*plVar36 != 0) {
      *(long*)( *plVar36 + 8 ) = plVar36[1];
      plVar36 = (long*)*plVar4;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( plVar36 + 3 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( plVar36 + 2 ));
   Memory::free_static(plVar36, false);
   *(undefined8*)( *(long*)( lVar31 + 8 ) + uVar38 * 8 ) = 0;
   *(int*)( lVar31 + 0x2c ) = *(int*)( lVar31 + 0x2c ) + -1;
   LAB_00107a7f:local_60 = (CowData<char32_t>*)&local_48;
   CowData<char32_t>::_unref(local_60);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   pthread_rwlock_unlock((pthread_rwlock_t*)ResourceCache::path_cache_lock);
   return;
}
/* Resource::get_id_for_path(String const&) const */String *Resource::get_id_for_path(String *param_1) {
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
   ulong uVar11;
   char cVar12;
   int iVar13;
   uint uVar14;
   long lVar15;
   HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> *this;
   CowData *pCVar16;
   uint uVar17;
   String *in_RDX;
   long lVar18;
   long in_RSI;
   long lVar19;
   uint uVar20;
   long in_FS_OFFSET;
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      iVar13 = pthread_rwlock_rdlock((pthread_rwlock_t*)ResourceCache::path_cache_lock);
   }
 while ( iVar13 == 0xb );
   if (iVar13 == 0x23) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
   }

   lVar15 = HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>::operator []((HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>*)ResourceCache::resource_path_cache, in_RDX);
   local_58 = (undefined*)0x0;
   if (*(long*)( in_RSI + 0x188 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( in_RSI + 0x188 ));
   }

   if (( *(long*)( lVar15 + 8 ) != 0 ) && ( *(int*)( lVar15 + 0x2c ) != 0 )) {
      uVar1 = ( &hash_table_size_primes )[*(uint*)( lVar15 + 0x28 )];
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar15 + 0x28 ) * 8 );
      uVar14 = String::hash();
      uVar11 = CONCAT44(0, uVar1);
      uVar17 = 1;
      if (uVar14 != 0) {
         uVar17 = uVar14;
      }

      lVar19 = *(long*)( lVar15 + 0x10 );
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar17 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar11;
      lVar18 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( lVar19 + lVar18 * 4 );
      iVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar20 = 0;
         do {
            if (uVar17 == uVar14) {
               cVar12 = String::operator ==((String*)( *(long*)( *(long*)( lVar15 + 8 ) + lVar18 * 8 ) + 0x10 ), (String*)&local_58);
               if (cVar12 != '\0') {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  this(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> * HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>::operator []((HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>*)ResourceCache::resource_path_cache, in_RDX));
                  local_58 = (undefined*)0x0;
                  if (*(long*)( in_RSI + 0x188 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( in_RSI + 0x188 ));
                  }

                  pCVar16 = (CowData*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](this, (String*)&local_58);
                  local_60 = 0;
                  lVar15 = *(long*)pCVar16;
                  if (*(long*)pCVar16 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, pCVar16);
                     lVar15 = local_60;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  pthread_rwlock_unlock((pthread_rwlock_t*)ResourceCache::path_cache_lock);
                  *(long*)param_1 = lVar15;
                  goto LAB_00107ead;
               }

               lVar19 = *(long*)( lVar15 + 0x10 );
            }

            uVar20 = uVar20 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar11;
            lVar18 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( lVar19 + lVar18 * 4 );
            iVar13 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar11,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar11,uVar20 <= SUB164(auVar6 * auVar10, 8) );
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         goto LAB_00107e7c;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   LAB_00107e7c:pthread_rwlock_unlock((pthread_rwlock_t*)ResourceCache::path_cache_lock);
   local_58 = &_LC30;
   *(undefined8*)param_1 = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)param_1);
   LAB_00107ead:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x1163, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1163, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}
/* Resource::is_class_ptr(void*) const */uint Resource::is_class_ptr(Resource *this, void *param_1) {
   return (uint)CONCAT71(0x1163, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1163, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1163, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* Resource::_getv(StringName const&, Variant&) const */undefined8 Resource::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Resource::_setv(StringName const&, Variant const&) */undefined8 Resource::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Resource::_validate_propertyv(PropertyInfo&) const */void Resource::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* Resource::_property_can_revertv(StringName const&) const */undefined8 Resource::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* Resource::_property_get_revertv(StringName const&, Variant&) const */undefined8 Resource::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Resource::_notificationv(int, bool) */void Resource::_notificationv(int param_1, bool param_2) {
   return;
}
/* Resource::is_built_in() const */undefined8 Resource::is_built_in(Resource *this) {
   int iVar1;
   undefined8 uVar2;
   if (( *(long*)( this + 0x188 ) != 0 ) && ( 1 < *(uint*)( *(long*)( this + 0x188 ) + -8 ) )) {
      iVar1 = String::find((char*)( this + 0x188 ), 0x108365);
      if (iVar1 != -1) {
         return 1;
      }

      uVar2 = String::begins_with((char*)( this + 0x188 ));
      return uVar2;
   }

   return 1;
}
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* MethodBindTRC<Ref<Resource>, bool>::_gen_argument_type(int) const */int MethodBindTRC<Ref<Resource>,bool>::_gen_argument_type(MethodBindTRC<Ref<Resource>,bool> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffe9 ) + 0x18;
}
/* MethodBindTRC<Ref<Resource>, bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<Resource>,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRS<String>::_gen_argument_type(int) const */undefined8 MethodBindTRS<String>::_gen_argument_type(int param_1) {
   return 4;
}
/* MethodBindTRS<String>::get_argument_meta(int) const */undefined8 MethodBindTRS<String>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<String, String const&>::_gen_argument_type(int) const */undefined8 MethodBindTRC<String,String_const&>::_gen_argument_type(int param_1) {
   return 4;
}
/* MethodBindTRC<String, String const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<String,String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<String const&, String const&>::_gen_argument_type(int) const */long MethodBindT<String_const&,String_const&>::_gen_argument_type(MethodBindT<String_const&,String_const&> *this, int param_1) {
   return ( ulong )((uint)param_1 < 2) << 2;
}
/* MethodBindT<String const&, String const&>::get_argument_meta(int) const */undefined8 MethodBindT<String_const&,String_const&>::get_argument_meta(int param_1) {
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
/* MethodBindTRC<Node*>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Node*>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Node*>::get_argument_meta(int) const */undefined8 MethodBindTRC<Node*>::get_argument_meta(int param_1) {
   return 0;
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
/* MethodBindTRC<RID>::_gen_argument_type(int) const */undefined8 MethodBindTRC<RID>::_gen_argument_type(int param_1) {
   return 0x17;
}
/* MethodBindTRC<RID>::get_argument_meta(int) const */undefined8 MethodBindTRC<RID>::get_argument_meta(int param_1) {
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
/* MethodBindTRC<RID>::~MethodBindTRC() */void MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116008;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<RID>::~MethodBindTRC() */void MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116008;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116068;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116068;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Node*>::~MethodBindTRC() */void MethodBindTRC<Node*>::~MethodBindTRC(MethodBindTRC<Node*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116128;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Node*>::~MethodBindTRC() */void MethodBindTRC<Node*>::~MethodBindTRC(MethodBindTRC<Node*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116128;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<String const&, String const&>::~MethodBindT() */void MethodBindT<String_const&,String_const&>::~MethodBindT(MethodBindT<String_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001161e8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&, String const&>::~MethodBindT() */void MethodBindT<String_const&,String_const&>::~MethodBindT(MethodBindT<String_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001161e8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<String, String const&>::~MethodBindTRC() */void MethodBindTRC<String,String_const&>::~MethodBindTRC(MethodBindTRC<String,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116248;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<String, String const&>::~MethodBindTRC() */void MethodBindTRC<String,String_const&>::~MethodBindTRC(MethodBindTRC<String,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116248;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001160c8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001160c8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRS<String>::~MethodBindTRS() */void MethodBindTRS<String>::~MethodBindTRS(MethodBindTRS<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001162a8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRS<String>::~MethodBindTRS() */void MethodBindTRS<String>::~MethodBindTRS(MethodBindTRS<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001162a8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115f48;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115f48;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115fa8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115fa8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116188;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116188;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Resource>, bool>::~MethodBindTRC() */void MethodBindTRC<Ref<Resource>,bool>::~MethodBindTRC(MethodBindTRC<Ref<Resource>,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116308;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Resource>, bool>::~MethodBindTRC() */void MethodBindTRC<Ref<Resource>,bool>::~MethodBindTRC(MethodBindTRC<Ref<Resource>,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00116308;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00115c10;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00115c10;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
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
/* Resource::_bind_methods() [clone .cold] */void Resource::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Resource::get_base_extension() const */Resource * __thiscall Resource::get_base_extension(Resource *this){
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
}
/* Resource::_get_class_namev() const */undefined8 *Resource::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00108d33:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00108d33;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Resource");
         goto LAB_00108d9e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Resource");
   LAB_00108d9e:return &_get_class_namev();
}
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00108e13:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00108e13;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_00108e7e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_00108e7e:return &_get_class_namev();
}
/* HashMap<String, Resource*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Resource*> > >::~HashMap() */void HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>::~HashMap(HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>> *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( this + 8 );
   if (pvVar5 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar2 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      if (uVar2 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar4 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar4 ) != 0) {
               pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar4 ) = 0;
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
               pvVar5 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
            }

            lVar4 = lVar4 + 4;
         }
 while ( lVar4 != (ulong)uVar2 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar5 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar5, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* MethodBindTRS<String>::ptrcall(Object*, void const**, void*) const */void MethodBindTRS<String>::ptrcall(MethodBindTRS<String> *this, Object *param_1, void **param_2, void *param_3) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_28, param_1, 0);
   /* WARNING: Load size is inaccurate */
   if (*param_3 != local_28) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_28);
   }

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
/* MethodBindTRS<String>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRS<String>::validated_call(MethodBindTRS<String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_28, param_1, 0);
   if (*(long*)( param_3 + 8 ) != local_28) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_28);
   }

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
/* MethodBindTRC<Node*>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Node*>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   bool bVar4;
   long local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 4;
   local_38 = &_LC9;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   *puVar3 = 0x18;
   *(undefined8*)( puVar3 + 2 ) = 0;
   StringName::StringName((StringName*)( puVar3 + 4 ), (StringName*)&local_38);
   bVar4 = StringName::configured != '\0';
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 6;
   if (( bVar4 ) && ( local_38 != (undefined*)0x0 )) {
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
/* RefCounted::get_class() const */void RefCounted::get_class(void) {
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
/* Resource::get_class() const */void Resource::get_class(void) {
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
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010949b;
   }

   cVar5 = String::operator ==(param_1, "RefCounted");
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

         if (cVar5 != '\0') goto LAB_0010949b;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_0010949b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<String, HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, HashMap<String,
   String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > > > > >::~HashMap() */void HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator < HashMapElement<String,String>>>>>>::~HashMap(HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator < HashMapElement<String,String>>>>> > *this) {
   long *plVar1;
   uint uVar2;
   uint uVar3;
   long lVar4;
   int *piVar5;
   long lVar6;
   void *pvVar7;
   void *pvVar8;
   long lVar9;
   pvVar8 = *(void**)( this + 8 );
   if (pvVar8 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar2 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      if (uVar2 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar6 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar6 ) != 0) {
               pvVar8 = *(void**)( (long)pvVar8 + lVar6 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar6 ) = 0;
               pvVar7 = *(void**)( (long)pvVar8 + 0x20 );
               if (pvVar7 != (void*)0x0) {
                  if (*(int*)( (long)pvVar8 + 0x44 ) != 0) {
                     uVar3 = ( &hash_table_size_primes )[*(uint*)( (long)pvVar8 + 0x40 )];
                     if (uVar3 == 0) {
                        *(undefined4*)( (long)pvVar8 + 0x44 ) = 0;
                        *(undefined1(*) [16])( (long)pvVar8 + 0x30 ) = (undefined1[16])0x0;
                     }
 else {
                        lVar9 = 0;
                        do {
                           piVar5 = (int*)( *(long*)( (long)pvVar8 + 0x28 ) + lVar9 );
                           if (*piVar5 != 0) {
                              *piVar5 = 0;
                              pvVar7 = *(void**)( (long)pvVar7 + lVar9 * 2 );
                              if (*(long*)( (long)pvVar7 + 0x18 ) != 0) {
                                 LOCK();
                                 plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x18 ) + -0x10 );
                                 *plVar1 = *plVar1 + -1;
                                 UNLOCK();
                                 if (*plVar1 == 0) {
                                    lVar4 = *(long*)( (long)pvVar7 + 0x18 );
                                    *(undefined8*)( (long)pvVar7 + 0x18 ) = 0;
                                    Memory::free_static((void*)( lVar4 + -0x10 ), false);
                                 }

                              }

                              if (*(long*)( (long)pvVar7 + 0x10 ) != 0) {
                                 LOCK();
                                 plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x10 ) + -0x10 );
                                 *plVar1 = *plVar1 + -1;
                                 UNLOCK();
                                 if (*plVar1 == 0) {
                                    lVar4 = *(long*)( (long)pvVar7 + 0x10 );
                                    *(undefined8*)( (long)pvVar7 + 0x10 ) = 0;
                                    Memory::free_static((void*)( lVar4 + -0x10 ), false);
                                 }

                              }

                              Memory::free_static(pvVar7, false);
                              pvVar7 = *(void**)( (long)pvVar8 + 0x20 );
                              *(undefined8*)( (long)pvVar7 + lVar9 * 2 ) = 0;
                           }

                           lVar9 = lVar9 + 4;
                        }
 while ( lVar9 != (ulong)uVar3 << 2 );
                        *(undefined4*)( (long)pvVar8 + 0x44 ) = 0;
                        *(undefined1(*) [16])( (long)pvVar8 + 0x30 ) = (undefined1[16])0x0;
                        if (pvVar7 == (void*)0x0) goto LAB_00109750;
                     }

                  }

                  Memory::free_static(pvVar7, false);
                  Memory::free_static(*(void**)( (long)pvVar8 + 0x28 ), false);
               }

               LAB_00109750:if (*(long*)( (long)pvVar8 + 0x10 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar8 + 0x10 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar9 = *(long*)( (long)pvVar8 + 0x10 );
                     *(undefined8*)( (long)pvVar8 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }

               }

               Memory::free_static(pvVar8, false);
               pvVar8 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar8 + lVar6 * 2 ) = 0;
            }

            lVar6 = lVar6 + 4;
         }
 while ( lVar6 != (ulong)uVar2 * 4 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar8 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar8, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* Resource::is_class(String const&) const */undefined8 Resource::is_class(Resource *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_001098af;
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

      LAB_001098af:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00109963;
   }

   cVar5 = String::operator ==(param_1, "Resource");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00109963:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

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
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* List<Variant, DefaultAllocator>::~List() */void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
   int *piVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)this;
   if (puVar2 == (undefined8*)0x0) {
      return;
   }

   do {
      piVar1 = (int*)*puVar2;
      if (piVar1 == (int*)0x0) {
         if (*(int*)( puVar2 + 2 ) != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(undefined8**)( piVar1 + 10 ) == puVar2) {
         *puVar2 = *(undefined8*)( piVar1 + 6 );
         if (piVar1 == (int*)puVar2[1]) {
            puVar2[1] = *(undefined8*)( piVar1 + 8 );
         }

         if (*(long*)( piVar1 + 8 ) != 0) {
            *(undefined8*)( *(long*)( piVar1 + 8 ) + 0x18 ) = *(undefined8*)( piVar1 + 6 );
         }

         if (*(long*)( piVar1 + 6 ) != 0) {
            *(undefined8*)( *(long*)( piVar1 + 6 ) + 0x20 ) = *(undefined8*)( piVar1 + 8 );
         }

         if (Variant::needs_deinit[*piVar1] != '\0') {
            Variant::_clear_internal();
         }

         Memory::free_static(piVar1, false);
         *(int*)( puVar2 + 2 ) = *(int*)( puVar2 + 2 ) + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      puVar2 = *(undefined8**)this;
   }
 while ( *(int*)( puVar2 + 2 ) != 0 );
   Memory::free_static(puVar2, false);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<Ref<Resource> >
   >::insert(Ref<Resource> const&) */undefined1[16];HashSet<Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>>::insert(Ref *param_1) {
   uint *puVar1;
   long *plVar2;
   uint uVar3;
   long lVar4;
   void *pvVar5;
   void *pvVar6;
   long lVar7;
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
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   char cVar32;
   uint uVar33;
   ulong uVar34;
   long lVar35;
   long lVar36;
   uint *puVar37;
   int iVar38;
   long *in_RDX;
   long lVar39;
   ulong uVar40;
   long *in_RSI;
   ulong uVar41;
   uint uVar42;
   undefined4 uVar43;
   ulong uVar44;
   uint uVar45;
   undefined1 auVar46[16];
   ulong uStack_98;
   ulong local_88;
   ulong local_70;
   lVar35 = *in_RSI;
   uVar33 = ( &hash_table_size_primes )[*(uint*)( in_RSI + 4 )];
   if (lVar35 == 0) {
      uVar34 = (ulong)uVar33 * 4;
      lVar35 = Memory::alloc_static(uVar34, false);
      in_RSI[3] = lVar35;
      lVar35 = Memory::alloc_static((ulong)uVar33 * 8, false);
      *in_RSI = lVar35;
      lVar35 = Memory::alloc_static(uVar34, false);
      in_RSI[2] = lVar35;
      lVar35 = Memory::alloc_static(uVar34, false);
      in_RSI[1] = lVar35;
      if (uVar33 != 0) {
         memset((void*)in_RSI[3], 0, uVar34);
      }

      lVar35 = *in_RSI;
      lVar36 = *in_RDX;
      uVar3 = *(uint*)( (long)in_RSI + 0x24 );
      local_88 = (ulong)uVar3;
      if (lVar35 != 0) goto LAB_0010a238;
   }
 else {
      lVar36 = *in_RDX;
      uVar3 = *(uint*)( (long)in_RSI + 0x24 );
      LAB_0010a238:local_88 = (ulong)uVar3;
      if (uVar3 != 0) {
         uVar40 = CONCAT44(0, ( &hash_table_size_primes )[*(uint*)( in_RSI + 4 )]);
         lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
         uVar34 = lVar36 * 0x3ffff - 1;
         uVar34 = ( uVar34 ^ uVar34 >> 0x1f ) * 0x15;
         uVar34 = ( uVar34 ^ uVar34 >> 0xb ) * 0x41;
         uVar34 = uVar34 >> 0x16 ^ uVar34;
         uVar44 = uVar34 & 0xffffffff;
         if ((int)uVar34 == 0) {
            uVar44 = 1;
         }

         auVar8._8_8_ = 0;
         auVar8._0_8_ = uVar44 * lVar4;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar40;
         lVar39 = SUB168(auVar8 * auVar20, 8);
         uVar42 = *(uint*)( in_RSI[3] + lVar39 * 4 );
         uVar34 = (ulong)uVar42;
         iVar38 = SUB164(auVar8 * auVar20, 8);
         if (uVar42 != 0) {
            uVar42 = 0;
            do {
               if ((int)uVar34 == (int)uVar44) {
                  uVar45 = *(uint*)( in_RSI[1] + lVar39 * 4 );
                  uStack_98 = (ulong)uVar45;
                  if (*(long*)( lVar35 + uStack_98 * 8 ) == lVar36) goto LAB_0010a34a;
               }

               uVar42 = uVar42 + 1;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = ( ulong )(iVar38 + 1) * lVar4;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar40;
               lVar39 = SUB168(auVar9 * auVar21, 8);
               uVar45 = *(uint*)( in_RSI[3] + lVar39 * 4 );
               uVar34 = (ulong)uVar45;
               iVar38 = SUB164(auVar9 * auVar21, 8);
            }
 while ( ( uVar45 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = uVar34 * lVar4,auVar22._8_8_ = 0,auVar22._0_8_ = uVar40,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(uint)(( ( &hash_table_size_primes )[*(uint*)( in_RSI + 4 )] + iVar38 ) - SUB164(auVar10 * auVar22, 8)) * lVar4,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,uVar42 <= SUB164(auVar11 * auVar23, 8) );
         }

      }

   }

   if ((float)uVar33 * __LC25 < (float)( uVar3 + 1 )) {
      if ((int)in_RSI[4] == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         lVar35 = *in_RSI;
         uVar45 = 0xffffffff;
         uVar3 = *(uint*)( (long)in_RSI + 0x24 );
         goto LAB_0010a34a;
      }

      uVar33 = (int)in_RSI[4] + 1;
      uVar34 = (ulong)uVar33;
      if (uVar33 < 2) {
         uVar34 = 2;
      }

      uVar33 = ( &hash_table_size_primes )[uVar34];
      *(int*)( in_RSI + 4 ) = (int)uVar34;
      pvVar5 = (void*)in_RSI[3];
      uVar34 = (ulong)uVar33 * 4;
      pvVar6 = (void*)in_RSI[2];
      lVar35 = Memory::alloc_static(uVar34, false);
      in_RSI[3] = lVar35;
      lVar35 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar33 * 8, false);
      *in_RSI = lVar35;
      lVar35 = Memory::alloc_static(uVar34, false);
      in_RSI[2] = lVar35;
      lVar35 = Memory::realloc_static((void*)in_RSI[1], uVar34, false);
      in_RSI[1] = lVar35;
      if (uVar33 != 0) {
         memset((void*)in_RSI[3], 0, uVar34);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         lVar36 = in_RSI[2];
         lVar4 = in_RSI[3];
         local_70 = 0;
         do {
            uVar45 = 0;
            uVar40 = local_70 & 0xffffffff;
            uVar43 = (undefined4)local_70;
            uVar33 = *(uint*)( (long)pvVar5 + ( ulong ) * (uint*)( (long)pvVar6 + local_70 * 4 ) * 4 );
            uVar34 = (ulong)uVar33;
            lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            uVar3 = ( &hash_table_size_primes )[*(uint*)( in_RSI + 4 )];
            uVar41 = CONCAT44(0, uVar3);
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar34 * lVar7;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar41;
            lVar39 = SUB168(auVar12 * auVar24, 8) * 4;
            iVar38 = SUB164(auVar12 * auVar24, 8);
            puVar1 = (uint*)( lVar4 + lVar39 );
            uVar42 = *puVar1;
            uVar44 = local_70;
            while (uVar42 != 0) {
               auVar13._8_8_ = 0;
               auVar13._0_8_ = (ulong)uVar42 * lVar7;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar41;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(( iVar38 + uVar3 ) - SUB164(auVar13 * auVar25, 8)) * lVar7;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar41;
               uVar33 = SUB164(auVar14 * auVar26, 8);
               if (uVar33 < uVar45) {
                  *(int*)( lVar36 + uVar40 * 4 ) = iVar38;
                  uVar42 = *puVar1;
                  *puVar1 = (uint)uVar34;
                  uVar45 = *(uint*)( lVar39 + lVar35 );
                  uVar34 = (ulong)uVar42;
                  *(uint*)( lVar39 + lVar35 ) = (uint)uVar40;
                  uVar40 = (ulong)uVar45;
                  uVar45 = uVar33;
               }

               uVar43 = (undefined4)uVar40;
               uVar33 = (uint)uVar34;
               uVar45 = uVar45 + 1;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = ( ulong )(iVar38 + 1) * lVar7;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar41;
               lVar39 = SUB168(auVar15 * auVar27, 8) * 4;
               iVar38 = SUB164(auVar15 * auVar27, 8);
               puVar1 = (uint*)( lVar4 + lVar39 );
               uVar44 = uVar40;
               uVar42 = *puVar1;
            }
;
            *puVar1 = uVar33;
            *(int*)( lVar36 + uVar44 * 4 ) = iVar38;
            local_70 = local_70 + 1;
            *(undefined4*)( lVar35 + lVar39 ) = uVar43;
         }
 while ( (uint)local_70 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(pvVar6, false);
      lVar35 = *in_RSI;
      local_88 = ( ulong ) * (uint*)( (long)in_RSI + 0x24 );
   }

   lVar36 = *in_RDX;
   plVar2 = (long*)( lVar35 + local_88 * 8 );
   *plVar2 = 0;
   uVar34 = lVar36 * 0x3ffff - 1;
   uVar34 = ( uVar34 ^ uVar34 >> 0x1f ) * 0x15;
   uVar34 = ( uVar34 ^ uVar34 >> 0xb ) * 0x41;
   uVar34 = uVar34 >> 0x16 ^ uVar34;
   uVar40 = uVar34 & 0xffffffff;
   if ((int)uVar34 == 0) {
      uVar40 = 1;
   }

   uVar33 = (uint)uVar40;
   if (*in_RDX != 0) {
      *plVar2 = *in_RDX;
      cVar32 = RefCounted::reference();
      if (cVar32 == '\0') {
         *plVar2 = 0;
      }

      lVar35 = *in_RSI;
      local_88 = ( ulong ) * (uint*)( (long)in_RSI + 0x24 );
   }

   uVar45 = 0;
   lVar4 = in_RSI[3];
   lVar39 = in_RSI[1];
   lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
   uVar3 = ( &hash_table_size_primes )[*(uint*)( in_RSI + 4 )];
   uVar41 = CONCAT44(0, uVar3);
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar40 * lVar7;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar41;
   lVar36 = SUB168(auVar16 * auVar28, 8) * 4;
   iVar38 = SUB164(auVar16 * auVar28, 8);
   uVar34 = in_RSI[2];
   puVar1 = (uint*)( lVar4 + lVar36 );
   uVar42 = *puVar1;
   uStack_98 = uVar34;
   uVar44 = local_88;
   while (uVar42 != 0) {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)uVar42 * lVar7;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar41;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(( uVar3 + iVar38 ) - SUB164(auVar17 * auVar29, 8)) * lVar7;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar41;
      uVar33 = SUB164(auVar18 * auVar30, 8);
      if (uVar33 < uVar45) {
         puVar37 = (uint*)( lVar36 + lVar39 );
         *(int*)( uVar34 + uVar44 * 4 ) = iVar38;
         uVar42 = *puVar1;
         *puVar1 = (uint)uVar40;
         uVar45 = *puVar37;
         uVar40 = (ulong)uVar42;
         *puVar37 = (uint)local_88;
         local_88 = (ulong)uVar45;
         uVar44 = local_88;
         uVar45 = uVar33;
      }

      uVar33 = (uint)uVar40;
      uVar45 = uVar45 + 1;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = ( ulong )(iVar38 + 1) * lVar7;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar41;
      uStack_98 = SUB168(auVar19 * auVar31, 8);
      lVar36 = uStack_98 * 4;
      iVar38 = SUB164(auVar19 * auVar31, 8);
      puVar1 = (uint*)( lVar4 + lVar36 );
      uVar42 = *puVar1;
   }
;
   *puVar1 = uVar33;
   *(int*)( uVar34 + uVar44 * 4 ) = iVar38;
   *(uint*)( lVar39 + lVar36 ) = (uint)local_88;
   uVar45 = *(uint*)( (long)in_RSI + 0x24 );
   *(uint*)( (long)in_RSI + 0x24 ) = uVar45 + 1;
   uVar3 = uVar45 + 1;
   LAB_0010a34a:local_88._0_4_ = uVar3;
   *(uint*)( param_1 + 0xc ) = uVar45;
   *(long*)param_1 = lVar35;
   *(uint*)( param_1 + 8 ) = (uint)local_88;
   auVar46._8_8_ = uStack_98;
   auVar46._0_8_ = param_1;
   return auVar46;
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
/* GetTypeInfo<String, void>::get_class_info() */GetTypeInfo<String,void> * __thiscall
GetTypeInfo<String,void>::get_class_info(GetTypeInfo<String,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC30;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *(undefined4*)this = 4;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
         }

         goto LAB_0010a975;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   LAB_0010a975:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<RID, void>::get_class_info() */GetTypeInfo<RID,void> * __thiscall
GetTypeInfo<RID,void>::get_class_info(GetTypeInfo<RID,void> *this){
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC30;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x17;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
         }

         goto LAB_0010ab05;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   LAB_0010ab05:CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x0010ad18) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* WARNING: Removing unreachable block (ram,0x0010b018) *//* String vformat<unsigned int>(String const&, unsigned int const) */String *vformat<unsigned_int>(String *param_1, uint param_2) {
   char cVar1;
   Variant *this;
   uint in_EDX;
   undefined4 in_register_00000034;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, in_EDX);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_c0[0];
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
/* WARNING: Removing unreachable block (ram,0x0010b350) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   int iVar3;
   long in_FS_OFFSET;
   Array local_d8[8];
   undefined8 local_d0[9];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_88, param_3);
   Variant::Variant(local_70, param_4);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, param_2);
   *param_1 = local_d0[0];
   local_d0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, Resource*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Resource*> > >::operator[](String const&) */undefined1 * __thiscallHashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>::operator [](HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>> * this, String * param_1) * puVar1 ;void *pvVar2void *__slong lVar3undefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]char cVar36uint uVar37uint uVar38ulong uVar39undefined8 uVar40void *__s_00undefined1(*pauVar41)[16];void *pvVar42ulong uVar43int iVar44long lVar45long lVar46ulong uVar47undefined8 uVar48uint *puVar49uint uVar50uint uVar51long lVar52uint uVar53uint uVar54undefined1(*pauVar55)[16];undefined1(*pauVar56)[16];long in_FS_OFFSETlong local_58[3]long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar54 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];if (*(long*)( this + 8 ) == 0) {
   LAB_0010bbf8:uVar39 = (ulong)uVar54;
   uVar43 = uVar39 * 4;
   uVar47 = uVar39 * 8;
   uVar40 = Memory::alloc_static(uVar43, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   pvVar42 = (void*)Memory::alloc_static(uVar47, false);
   *(void**)( this + 8 ) = pvVar42;
   if (uVar54 != 0) {
      pvVar2 = *(void**)( this + 0x10 );
      if (( pvVar2 < (void*)( (long)pvVar42 + uVar47 ) ) && ( pvVar42 < (void*)( (long)pvVar2 + uVar43 ) )) {
         uVar43 = 0;
         do {
            *(undefined4*)( (long)pvVar2 + uVar43 * 4 ) = 0;
            *(undefined8*)( (long)pvVar42 + uVar43 * 8 ) = 0;
            uVar43 = uVar43 + 1;
         }
 while ( uVar39 != uVar43 );
         goto LAB_0010ba7a;
      }

      memset(pvVar2, 0, uVar43);
      memset(pvVar42, 0, uVar47);
      iVar44 = *(int*)( this + 0x2c );
      LAB_0010ba7e:if (iVar44 != 0) {
         LAB_0010ba86:uVar37 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar51 = String::hash();
         uVar39 = CONCAT44(0, uVar37);
         lVar52 = *(long*)( this + 0x10 );
         uVar38 = 1;
         if (uVar51 != 0) {
            uVar38 = uVar51;
         }

         uVar53 = 0;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = (ulong)uVar38 * lVar3;
         auVar32._8_8_ = 0;
         auVar32._0_8_ = uVar39;
         lVar45 = SUB168(auVar16 * auVar32, 8);
         uVar51 = *(uint*)( lVar52 + lVar45 * 4 );
         uVar50 = SUB164(auVar16 * auVar32, 8);
         if (uVar51 != 0) {
            do {
               if (uVar38 == uVar51) {
                  cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar45 * 8 ) + 0x10 ), param_1);
                  if (cVar36 != '\0') {
                     pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                     *(undefined8*)( pauVar41[1] + 8 ) = 0;
                     goto LAB_0010b95b;
                  }

                  lVar52 = *(long*)( this + 0x10 );
               }

               uVar53 = uVar53 + 1;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( ulong )(uVar50 + 1) * lVar3;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar39;
               lVar45 = SUB168(auVar17 * auVar33, 8);
               uVar51 = *(uint*)( lVar52 + lVar45 * 4 );
               uVar50 = SUB164(auVar17 * auVar33, 8);
            }
 while ( ( uVar51 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar51 * lVar3,auVar34._8_8_ = 0,auVar34._0_8_ = uVar39,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar37 + uVar50 ) - SUB164(auVar18 * auVar34, 8)) * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar39,uVar53 <= SUB164(auVar19 * auVar35, 8) );
         }

         iVar44 = *(int*)( this + 0x2c );
      }

      uVar39 = (ulong)uVar54;
      goto LAB_0010b5a4;
   }

   iVar44 = *(int*)( this + 0x2c );
   if (pvVar42 == (void*)0x0) goto LAB_0010b5a4;
   if (iVar44 != 0) goto LAB_0010ba86;
   LAB_0010b5ca:uVar54 = *(uint*)( this + 0x28 );
   if (uVar54 == 0x1c) {
      pauVar41 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010b95b;
   }

   uVar39 = ( ulong )(uVar54 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar37 = ( &hash_table_size_primes )[uVar54];
   if (uVar54 + 1 < 2) {
      uVar39 = 2;
   }

   uVar54 = ( &hash_table_size_primes )[uVar39];
   uVar47 = (ulong)uVar54;
   *(int*)( this + 0x28 ) = (int)uVar39;
   pvVar42 = *(void**)( this + 8 );
   uVar39 = uVar47 * 4;
   uVar43 = uVar47 * 8;
   pvVar2 = *(void**)( this + 0x10 );
   uVar40 = Memory::alloc_static(uVar39, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   __s_00 = (void*)Memory::alloc_static(uVar43, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar54 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar43 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
         uVar39 = 0;
         do {
            *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
            uVar39 = uVar39 + 1;
         }
 while ( uVar39 != uVar47 );
      }
 else {
         memset(__s, 0, uVar39);
         memset(__s_00, 0, uVar43);
      }

   }

   if (uVar37 != 0) {
      uVar39 = 0;
      do {
         uVar54 = *(uint*)( (long)pvVar2 + uVar39 * 4 );
         if (uVar54 != 0) {
            lVar3 = *(long*)( this + 0x10 );
            uVar50 = 0;
            uVar38 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
            uVar43 = CONCAT44(0, uVar38);
            lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar54 * lVar52;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar43;
            lVar45 = SUB168(auVar4 * auVar20, 8);
            puVar49 = (uint*)( lVar3 + lVar45 * 4 );
            iVar44 = SUB164(auVar4 * auVar20, 8);
            uVar51 = *puVar49;
            uVar40 = *(undefined8*)( (long)pvVar42 + uVar39 * 8 );
            while (uVar51 != 0) {
               auVar5._8_8_ = 0;
               auVar5._0_8_ = (ulong)uVar51 * lVar52;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar43;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(( uVar38 + iVar44 ) - SUB164(auVar5 * auVar21, 8)) * lVar52;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar43;
               uVar53 = SUB164(auVar6 * auVar22, 8);
               uVar48 = uVar40;
               if (uVar53 < uVar50) {
                  *puVar49 = uVar54;
                  puVar1 = (undefined8*)( (long)__s_00 + lVar45 * 8 );
                  uVar48 = *puVar1;
                  *puVar1 = uVar40;
                  uVar54 = uVar51;
                  uVar50 = uVar53;
               }

               uVar50 = uVar50 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(iVar44 + 1) * lVar52;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar43;
               lVar45 = SUB168(auVar7 * auVar23, 8);
               puVar49 = (uint*)( lVar3 + lVar45 * 4 );
               iVar44 = SUB164(auVar7 * auVar23, 8);
               uVar40 = uVar48;
               uVar51 = *puVar49;
            }
;
            *(undefined8*)( (long)__s_00 + lVar45 * 8 ) = uVar40;
            *puVar49 = uVar54;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar39 = uVar39 + 1;
      }
 while ( uVar37 != uVar39 );
      Memory::free_static(pvVar42, false);
      Memory::free_static(pvVar2, false);
   }

}
 else {
   iVar44 = *(int*)( this + 0x2c );
   uVar39 = CONCAT44(0, uVar54);
   if (iVar44 != 0) {
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar38 = String::hash();
      lVar52 = *(long*)( this + 0x10 );
      uVar37 = 1;
      if (uVar38 != 0) {
         uVar37 = uVar38;
      }

      uVar50 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar45 = SUB168(auVar12 * auVar28, 8);
      uVar38 = *(uint*)( lVar52 + lVar45 * 4 );
      uVar51 = SUB164(auVar12 * auVar28, 8);
      if (uVar38 != 0) {
         do {
            if (uVar37 == uVar38) {
               cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar45 * 8 ) + 0x10 ), param_1);
               if (cVar36 != '\0') {
                  pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                  goto LAB_0010b95b;
               }

               lVar52 = *(long*)( this + 0x10 );
            }

            uVar50 = uVar50 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = ( ulong )(uVar51 + 1) * lVar3;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar39;
            lVar45 = SUB168(auVar13 * auVar29, 8);
            uVar38 = *(uint*)( lVar52 + lVar45 * 4 );
            uVar51 = SUB164(auVar13 * auVar29, 8);
         }
 while ( ( uVar38 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar38 * lVar3,auVar30._8_8_ = 0,auVar30._0_8_ = uVar39,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar51 + uVar54 ) - SUB164(auVar14 * auVar30, 8)) * lVar3,auVar31._8_8_ = 0,auVar31._0_8_ = uVar39,uVar50 <= SUB164(auVar15 * auVar31, 8) );
      }

      uVar54 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      if (*(long*)( this + 8 ) == 0) goto LAB_0010bbf8;
      LAB_0010ba7a:iVar44 = *(int*)( this + 0x2c );
      goto LAB_0010ba7e;
   }

   LAB_0010b5a4:if ((float)uVar39 * __LC25 < (float)( iVar44 + 1 )) goto LAB_0010b5ca;
}
local_58[0] = 0;if (*(long*)param_1 == 0) {
   local_58[1] = 0;
   pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar41[1] = 0;
   *pauVar41 = (undefined1[16])0x0;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
   lVar3 = local_58[0];
   local_58[1] = 0;
   pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar41[1] = 0;
   *(undefined8*)*pauVar41 = 0;
   *(undefined8*)( *pauVar41 + 8 ) = 0;
   if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar41 + 1 ), (CowData*)local_58);
   }

}
*(undefined8*)( pauVar41[1] + 8 ) = 0;CowData<char32_t>::_unref((CowData<char32_t>*)local_58);puVar1 = *(undefined8**)( this + 0x20 );if (puVar1 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar41;
}
 else {
   *puVar1 = pauVar41;
   *(undefined8**)( *pauVar41 + 8 ) = puVar1;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar41;uVar37 = String::hash();lVar3 = *(long*)( this + 0x10 );uVar54 = 1;if (uVar37 != 0) {
   uVar54 = uVar37;
}
uVar37 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];uVar39 = CONCAT44(0, uVar37);lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar8._8_8_ = 0;auVar8._0_8_ = (ulong)uVar54 * lVar52;auVar24._8_8_ = 0;auVar24._0_8_ = uVar39;lVar46 = SUB168(auVar8 * auVar24, 8);lVar45 = *(long*)( this + 8 );puVar49 = (uint*)( lVar3 + lVar46 * 4 );iVar44 = SUB164(auVar8 * auVar24, 8);uVar38 = *puVar49;pauVar56 = pauVar41;if (uVar38 != 0) {
   uVar51 = 0;
   pauVar55 = pauVar41;
   do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar52;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( uVar37 + iVar44 ) - SUB164(auVar9 * auVar25, 8)) * lVar52;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar50 = SUB164(auVar10 * auVar26, 8);
      pauVar56 = pauVar55;
      if (uVar50 < uVar51) {
         *puVar49 = uVar54;
         puVar1 = (undefined8*)( lVar45 + lVar46 * 8 );
         pauVar56 = (undefined1(*) [16])*puVar1;
         *puVar1 = pauVar55;
         uVar51 = uVar50;
         uVar54 = uVar38;
      }

      uVar51 = uVar51 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar44 + 1) * lVar52;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar46 = SUB168(auVar11 * auVar27, 8);
      puVar49 = (uint*)( lVar3 + lVar46 * 4 );
      iVar44 = SUB164(auVar11 * auVar27, 8);
      uVar38 = *puVar49;
      pauVar55 = pauVar56;
   }
 while ( uVar38 != 0 );
}
*(undefined1(**) [16])( lVar45 + lVar46 * 8 ) = pauVar56;*puVar49 = uVar54;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010b95b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar41[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* MethodBindTRS<String>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRS<String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   CowData<char32_t> local_40[8];
   undefined4 local_38[2];
   undefined8 local_30;
   undefined8 uStack_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         ( *(code*)pVVar1 )(local_40);
         Variant::Variant((Variant*)local_38, (String*)local_40);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_38[0];
         *(undefined8*)( param_1 + 8 ) = local_30;
         *(undefined8*)( param_1 + 0x10 ) = uStack_28;
         CowData<char32_t>::_unref(local_40);
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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if ((code*)PTR__bind_methods_0011b010 != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized = '\x01'
      ;;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC30;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
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

         goto LAB_0010c035;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_0010c035:CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RID>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<RID>::_gen_argument_type_info(int param_1) {
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
   local_58 = 0;
   local_50 = 0;
   local_48 = &_LC30;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_50);
   *puVar1 = 0x17;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_50 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_50);
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

         goto LAB_0010c183;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_58);
   LAB_0010c183:CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<String>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRS<String>::_gen_argument_type_info(int param_1) {
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
   local_58 = 0;
   local_50 = 0;
   local_48 = &_LC30;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_50);
   *puVar1 = 4;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_50 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_50);
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

         goto LAB_0010c2d3;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_58);
   LAB_0010c2d3:CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<String>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   local_58 = 0;
   local_48 = &_LC30;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_50 = 0;
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

         goto LAB_0010c435;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_60);
   LAB_0010c435:CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
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

   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   long *plVar1;
   int *piVar2;
   long lVar3;
   code *pcVar4;
   int *piVar5;
   long lVar6;
   if (*(long*)( this + 0x68 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x68 );
         *(undefined8*)( this + 0x68 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x50 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x50 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         piVar2 = *(int**)( this + 0x50 );
         if (piVar2 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( piVar2 + -2 );
         *(undefined8*)( this + 0x50 ) = 0;
         if (lVar3 != 0) {
            lVar6 = 0;
            piVar5 = piVar2;
            do {
               if (Variant::needs_deinit[*piVar5] != '\0') {
                  Variant::_clear_internal();
               }

               lVar6 = lVar6 + 1;
               piVar5 = piVar5 + 6;
            }
 while ( lVar3 != lVar6 );
         }

         Memory::free_static(piVar2 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)( this + 0x40 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x28 ));
   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x10 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
      LAB_0010c8ad:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010c8ad;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x0010c8cf;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x0010c8cf:if (lVar2 == 0) {
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
}
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
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
      LAB_0010cc2d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010cc2d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010cc4f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010cc4f:if (lVar2 == 0) {
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

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Resource>, bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Resource>,bool>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
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
   undefined1 local_90[16];
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
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
      local_78 = 0;
      local_70 = 6;
      local_a0 = 0;
      local_a8 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_a8);
      local_b0 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 1, (CowData<char32_t>*)&local_b0, 0, (StrRange*)&local_a8, 6, &local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
         StringName::unref();
      }

      local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
      if (local_90._0_8_ != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
         local_90._0_8_ = local_60;
         local_60 = 0;
      }

      if (local_90._8_8_ != local_58) {
         StringName::unref();
         local_90._8_8_ = local_58;
         local_58 = 0;
      }

      local_80 = CONCAT44(local_80._4_4_, local_50);
      if (local_78 != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         local_78 = local_48;
         local_48 = 0;
      }

      local_70 = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      uVar3 = local_90._8_8_;
      uVar2 = local_90._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_90._8_8_;
      local_90 = auVar1 << 0x40;
      *puVar4 = (undefined4)local_98;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_80;
      *(long*)( puVar4 + 8 ) = local_78;
      puVar4[10] = local_70;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      goto LAB_0010d104;
   }

   local_a0 = 0;
   local_60 = 8;
   local_68 = "Resource";
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_0010d137:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
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
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) goto LAB_0010d137;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_0010d104:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
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
   if (in_EDX != 0) goto LAB_0010d1e9;
   local_78 = 0;
   local_68 = &_LC30;
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
      LAB_0010d2e5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010d2e5;
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
   LAB_0010d1e9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* Ref<Resource>::unref() */void Ref<Resource>::unref(Ref<Resource> *this) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<Ref<Resource>, Ref<Resource>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<Resource> >, DefaultTypedAllocator<HashMapElement<Ref<Resource>,
   Ref<Resource> > > >::operator[](Ref<Resource> const&) */undefined1 * __thiscallHashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>>::operator [](HashMap<Ref<Resource>,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Resource>>,DefaultTypedAllocator<HashMapElement<Ref<Resource>,Ref<Resource>>>> * this, Ref * param_1) * puVar1 ;undefined8 *puVar2long lVar3long lVar4void *pvVar5void *__sundefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1(*pauVar30)[16];char cVar31ulong uVar32void *pvVar33ulong uVar34undefined8 uVar35void *__s_00undefined1(*pauVar36)[16];uint uVar37int iVar38long lVar39long lVar40uint uVar41Ref *pRVar42undefined8 uVar43uint uVar44uint uVar45uint uVar46ulong uVar47undefined1(*pauVar48)[16];long in_FS_OFFSETuint local_c8uint local_6cundefined1 local_68[16]Ref *local_58undefined8 local_50[2]long local_40lVar3 = *(long*)( this + 8 );pRVar42 = *(Ref**)param_1;local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar41 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];uVar34 = CONCAT44(0, uVar41);if (lVar3 == 0) {
   uVar32 = uVar34 * 4;
   uVar47 = uVar34 * 8;
   uVar35 = Memory::alloc_static(uVar32, false);
   *(undefined8*)( this + 0x10 ) = uVar35;
   pvVar33 = (void*)Memory::alloc_static(uVar47, false);
   *(void**)( this + 8 ) = pvVar33;
   if (uVar41 != 0) {
      pvVar5 = *(void**)( this + 0x10 );
      if (( pvVar5 < (void*)( (long)pvVar33 + uVar47 ) ) && ( pvVar33 < (void*)( (long)pvVar5 + uVar32 ) )) {
         uVar32 = 0;
         do {
            *(undefined4*)( (long)pvVar5 + uVar32 * 4 ) = 0;
            *(undefined8*)( (long)pvVar33 + uVar32 * 8 ) = 0;
            uVar32 = uVar32 + 1;
         }
 while ( uVar34 != uVar32 );
      }
 else {
         memset(pvVar5, 0, uVar32);
         memset(pvVar33, 0, uVar47);
      }

   }

   pRVar42 = *(Ref**)param_1;
}
 else if (*(int*)( this + 0x2c ) != 0) {
   lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar32 = (long)pRVar42 * 0x3ffff - 1;
   uVar32 = ( uVar32 ^ uVar32 >> 0x1f ) * 0x15;
   uVar32 = ( uVar32 ^ uVar32 >> 0xb ) * 0x41;
   uVar32 = uVar32 >> 0x16 ^ uVar32;
   uVar47 = uVar32 & 0xffffffff;
   if ((int)uVar32 == 0) {
      uVar47 = 1;
   }

   auVar6._8_8_ = 0;
   auVar6._0_8_ = uVar47 * lVar4;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar34;
   lVar39 = SUB168(auVar6 * auVar18, 8);
   uVar44 = *(uint*)( *(long*)( this + 0x10 ) + lVar39 * 4 );
   uVar37 = SUB164(auVar6 * auVar18, 8);
   if (uVar44 != 0) {
      uVar46 = 0;
      do {
         if (( uVar44 == (uint)uVar47 ) && ( pRVar42 == *(Ref**)( *(long*)( lVar3 + lVar39 * 8 ) + 0x10 ) )) {
            pauVar36 = *(undefined1(**) [16])( lVar3 + (ulong)uVar37 * 8 );
            goto LAB_0010da4e;
         }

         uVar46 = uVar46 + 1;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = ( ulong )(uVar37 + 1) * lVar4;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar34;
         lVar39 = SUB168(auVar7 * auVar19, 8);
         uVar44 = *(uint*)( *(long*)( this + 0x10 ) + lVar39 * 4 );
         uVar37 = SUB164(auVar7 * auVar19, 8);
      }
 while ( ( uVar44 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar44 * lVar4,auVar20._8_8_ = 0,auVar20._0_8_ = uVar34,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar37 + uVar41 ) - SUB164(auVar8 * auVar20, 8)) * lVar4,auVar21._8_8_ = 0,auVar21._0_8_ = uVar34,uVar46 <= SUB164(auVar9 * auVar21, 8) );
   }

}
local_6c = 0;cVar31 = _lookup_pos(this, pRVar42, &local_6c);if (cVar31 == '\0') {
   if ((float)uVar34 * __LC25 < (float)( *(int*)( this + 0x2c ) + 1 )) {
      uVar41 = *(uint*)( this + 0x28 );
      if (uVar41 == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pauVar36 = (undefined1(*) [16])0x0;
         goto LAB_0010da4e;
      }

      uVar34 = ( ulong )(uVar41 + 1);
      *(undefined4*)( this + 0x2c ) = 0;
      uVar44 = ( &hash_table_size_primes )[uVar41];
      if (uVar41 + 1 < 2) {
         uVar34 = 2;
      }

      uVar41 = ( &hash_table_size_primes )[uVar34];
      uVar47 = (ulong)uVar41;
      *(int*)( this + 0x28 ) = (int)uVar34;
      pvVar33 = *(void**)( this + 8 );
      uVar34 = uVar47 * 4;
      uVar32 = uVar47 * 8;
      pvVar5 = *(void**)( this + 0x10 );
      uVar35 = Memory::alloc_static(uVar34, false);
      *(undefined8*)( this + 0x10 ) = uVar35;
      __s_00 = (void*)Memory::alloc_static(uVar32, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar41 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar32 ) ) && ( __s_00 < (void*)( (long)__s + uVar34 ) )) {
            uVar34 = 0;
            do {
               *(undefined4*)( (long)__s + uVar34 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar34 * 8 ) = 0;
               uVar34 = uVar34 + 1;
            }
 while ( uVar47 != uVar34 );
         }
 else {
            memset(__s, 0, uVar34);
            memset(__s_00, 0, uVar32);
         }

      }

      if (uVar44 == 0) {
         pRVar42 = *(Ref**)param_1;
      }
 else {
         uVar34 = 0;
         do {
            uVar41 = *(uint*)( (long)pvVar5 + uVar34 * 4 );
            if (uVar41 != 0) {
               lVar3 = *(long*)( this + 0x10 );
               uVar45 = 0;
               uVar37 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
               uVar32 = CONCAT44(0, uVar37);
               lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar41 * lVar4;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar32;
               lVar39 = SUB168(auVar10 * auVar22, 8);
               puVar1 = (uint*)( lVar3 + lVar39 * 4 );
               iVar38 = SUB164(auVar10 * auVar22, 8);
               uVar46 = *puVar1;
               uVar35 = *(undefined8*)( (long)pvVar33 + uVar34 * 8 );
               while (uVar46 != 0) {
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = (ulong)uVar46 * lVar4;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar32;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(( uVar37 + iVar38 ) - SUB164(auVar11 * auVar23, 8)) * lVar4;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar32;
                  local_c8 = SUB164(auVar12 * auVar24, 8);
                  uVar43 = uVar35;
                  if (local_c8 < uVar45) {
                     *puVar1 = uVar41;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar39 * 8 );
                     uVar43 = *puVar2;
                     *puVar2 = uVar35;
                     uVar41 = uVar46;
                     uVar45 = local_c8;
                  }

                  uVar45 = uVar45 + 1;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = ( ulong )(iVar38 + 1) * lVar4;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar32;
                  lVar39 = SUB168(auVar13 * auVar25, 8);
                  puVar1 = (uint*)( lVar3 + lVar39 * 4 );
                  iVar38 = SUB164(auVar13 * auVar25, 8);
                  uVar35 = uVar43;
                  uVar46 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar39 * 8 ) = uVar35;
               *puVar1 = uVar41;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar34 = uVar34 + 1;
         }
 while ( uVar34 != uVar44 );
         Memory::free_static(pvVar33, false);
         Memory::free_static(pvVar5, false);
         pRVar42 = *(Ref**)param_1;
      }

   }

   local_68 = (undefined1[16])0x0;
   if (( pRVar42 == (Ref*)0x0 ) || ( local_58 = pRVar42 ),cVar31 = RefCounted::reference(),cVar31 == '\0') {
      local_58 = (Ref*)0x0;
      local_50[0] = 0;
      pauVar36 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)pauVar36[1] = 0;
      *pauVar36 = (undefined1[16])0x0;
   }
 else {
      local_50[0] = 0;
      pauVar36 = (undefined1(*) [16])operator_new(0x20, "");
      *(Ref**)pauVar36[1] = pRVar42;
      *pauVar36 = (undefined1[16])0x0;
      cVar31 = RefCounted::reference();
      if (cVar31 == '\0') {
         *(undefined8*)pauVar36[1] = 0;
      }

   }

   *(undefined8*)( pauVar36[1] + 8 ) = 0;
   Ref<Resource>::unref((Ref<Resource>*)local_50);
   Ref<Resource>::unref((Ref<Resource>*)&local_58);
   puVar2 = *(undefined8**)( this + 0x20 );
   if (puVar2 == (undefined8*)0x0) {
      *(undefined1(**) [16])( this + 0x18 ) = pauVar36;
   }
 else {
      *puVar2 = pauVar36;
      *(undefined8**)( *pauVar36 + 8 ) = puVar2;
   }

   lVar3 = *(long*)( this + 0x10 );
   *(undefined1(**) [16])( this + 0x20 ) = pauVar36;
   uVar34 = *(long*)param_1 * 0x3ffff - 1;
   uVar34 = ( uVar34 ^ uVar34 >> 0x1f ) * 0x15;
   uVar34 = ( uVar34 ^ uVar34 >> 0xb ) * 0x41;
   uVar34 = uVar34 >> 0x16 ^ uVar34;
   uVar32 = uVar34 & 0xffffffff;
   if ((int)uVar34 == 0) {
      uVar32 = 1;
   }

   uVar46 = 0;
   uVar41 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
   uVar34 = CONCAT44(0, uVar41);
   uVar37 = (uint)uVar32;
   lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   auVar14._8_8_ = 0;
   auVar14._0_8_ = uVar32 * lVar4;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar34;
   lVar40 = SUB168(auVar14 * auVar26, 8);
   lVar39 = *(long*)( this + 8 );
   puVar1 = (uint*)( lVar3 + lVar40 * 4 );
   iVar38 = SUB164(auVar14 * auVar26, 8);
   uVar44 = *puVar1;
   pauVar30 = pauVar36;
   while (uVar44 != 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)uVar44 * lVar4;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar34;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(( uVar41 + iVar38 ) - SUB164(auVar15 * auVar27, 8)) * lVar4;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar34;
      local_c8 = SUB164(auVar16 * auVar28, 8);
      pauVar48 = pauVar30;
      if (local_c8 < uVar46) {
         *puVar1 = (uint)uVar32;
         uVar32 = (ulong)uVar44;
         puVar2 = (undefined8*)( lVar39 + lVar40 * 8 );
         pauVar48 = (undefined1(*) [16])*puVar2;
         *puVar2 = pauVar30;
         uVar46 = local_c8;
      }

      uVar37 = (uint)uVar32;
      uVar46 = uVar46 + 1;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(iVar38 + 1) * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar34;
      lVar40 = SUB168(auVar17 * auVar29, 8);
      puVar1 = (uint*)( lVar3 + lVar40 * 4 );
      iVar38 = SUB164(auVar17 * auVar29, 8);
      pauVar30 = pauVar48;
      uVar44 = *puVar1;
   }
;
   *(undefined1(**) [16])( lVar39 + lVar40 * 8 ) = pauVar30;
   *puVar1 = uVar37;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
}
 else {
   uVar34 = (ulong)local_6c;
   Ref<Resource>::operator =((Ref<Resource>*)( *(long*)( *(long*)( this + 8 ) + uVar34 * 8 ) + 0x18 ), (Ref*)0x0);
   pauVar36 = *(undefined1(**) [16])( *(long*)( this + 8 ) + uVar34 * 8 );
}
LAB_0010da4e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar36[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* MethodBind* create_method_bind<Resource, String const&>(void (Resource::*)(String const&)) */MethodBind *create_method_bind<Resource,String_const&>(_func_void_String_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00115f48;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Resource";
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
/* MethodBind* create_method_bind<Resource, String>(String (Resource::*)() const) */MethodBind *create_method_bind<Resource,String>(_func_String *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00115fa8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Resource";
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
/* MethodBind* create_method_bind<Resource, RID>(RID (Resource::*)() const) */MethodBind *create_method_bind<Resource,RID>(_func_RID *param_1) {
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
   *(_func_RID**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116008;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Resource";
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
/* MethodBind* create_method_bind<Resource, bool>(void (Resource::*)(bool)) */MethodBind *create_method_bind<Resource,bool>(_func_void_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00116068;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Resource";
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
/* MethodBind* create_method_bind<Resource, bool>(bool (Resource::*)() const) */MethodBind *create_method_bind<Resource,bool>(_func_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001160c8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Resource";
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
/* MethodBind* create_method_bind<Resource, Node*>(Node* (Resource::*)() const) */MethodBind *create_method_bind<Resource,Node*>(_func_Node_ptr *param_1) {
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
   *(_func_Node_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116128;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Resource";
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
/* MethodBind* create_method_bind<Resource>(void (Resource::*)()) */MethodBind *create_method_bind<Resource>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00116188;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Resource";
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
/* MethodBind* create_method_bind<Resource, String const&, String const&>(void (Resource::*)(String
   const&, String const&)) */MethodBind *create_method_bind<Resource,String_const&,String_const&>(_func_void_String_ptr_String_ptr *param_1) {
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
   *(_func_void_String_ptr_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001161e8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "Resource";
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
/* MethodBind* create_method_bind<Resource, String, String const&>(String (Resource::*)(String
   const&) const) */MethodBind *create_method_bind<Resource,String,String_const&>(_func_String_String_ptr *param_1) {
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
   *(_func_String_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116248;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Resource";
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
/* MethodBind* create_method_bind<Resource, Ref<Resource>, bool>(Ref<Resource> (Resource::*)(bool)
   const) */MethodBind *create_method_bind<Resource,Ref<Resource>,bool>(_func_Ref_bool *param_1) {
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
   *(_func_Ref_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00116308;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Resource";
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
      LAB_0010eba0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar9 == 0) goto LAB_0010eba0;
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
      goto LAB_0010ebf6;
   }

   if (lVar9 == lVar5) {
      LAB_0010eb1b:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_0010ebf6:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_0010ea8f;
   }
 else {
      if (lVar4 != 0) {
         uVar3 = _realloc(this, lVar9);
         if ((int)uVar3 != 0) {
            return uVar3;
         }

         goto LAB_0010eb1b;
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
   LAB_0010ea8f:puVar7[-1] = param_1;
   return 0;
}
/* CowData<unsigned int>::_unref() */void CowData<unsigned_int>::_unref(CowData<unsigned_int> *this) {
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
      LAB_0010eec0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_0010eec0;
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
            goto LAB_0010edd1;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_0010edd1:puVar7[-1] = param_1;
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
/* Resource::_initialize_classv() */void Resource::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (RefCounted::initialize_class() == '\0') {
         Object::initialize_class();
         local_58 = 0;
         local_40 = 6;
         local_48 = "Object";
         String::parse_latin1((StrRange*)&local_58);
         StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
         local_48 = "RefCounted";
         local_60 = 0;
         local_40 = 10;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if ((code*)PTR__bind_methods_0011b010 != Object::_bind_methods) {
            RefCounted::_bind_methods();
         }

         RefCounted::initialize_class() {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         _bind_methods();
         initialize_class()::initialized = '\x01'
         ;;
      }

      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::_resize_and_rehash(unsigned int) */
   void HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::_resize_and_rehash(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> *this, uint param_1) {
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
      uVar3 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      if (param_1 < 2) {
         param_1 = 2;
      }

      *(uint*)( this + 0x28 ) = param_1;
      uVar21 = ( &hash_table_size_primes )[param_1];
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
               uVar4 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */
   undefined1 * __thiscallHashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> * this, String * param_1);
   {
      ulong __n;
      undefined8 *puVar1;
      long lVar2;
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
      undefined1 auVar19[16];
      undefined1 auVar20[16];
      undefined1 auVar21[16];
      undefined1 auVar22[16];
      undefined1 auVar23[16];
      undefined1 auVar24[16];
      undefined1 auVar25[16];
      undefined1 auVar26[16];
      undefined8 uVar27;
      char cVar28;
      uint uVar29;
      uint uVar30;
      uint uVar31;
      undefined1(*pauVar32)[16];
      undefined8 uVar33;
      void *__s_00;
      ulong uVar34;
      int iVar35;
      long lVar36;
      long lVar37;
      ulong uVar38;
      uint *puVar39;
      uint uVar40;
      long lVar41;
      undefined1(*pauVar42)[16];
      undefined1(*pauVar43)[16];
      uint uVar44;
      uint uVar45;
      long in_FS_OFFSET;
      undefined8 local_70;
      undefined1 local_68[16];
      long local_58;
      undefined8 local_50[2];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar30 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      uVar38 = (ulong)uVar30;
      if (*(long*)( this + 8 ) == 0) {
         LAB_0010f848:local_70 = 0;
         uVar34 = uVar38 * 4;
         __n = uVar38 * 8;
         uVar33 = Memory::alloc_static(uVar34, false);
         *(undefined8*)( this + 0x10 ) = uVar33;
         __s_00 = (void*)Memory::alloc_static(__n, false);
         *(void**)( this + 8 ) = __s_00;
         if ((int)uVar38 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + __n ) ) && ( __s_00 < (void*)( (long)__s + uVar34 ) )) {
               uVar34 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar34 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar34 * 8 ) = 0;
                  uVar34 = uVar34 + 1;
               }
 while ( uVar38 != uVar34 );
            }
 else {
               memset(__s, 0, uVar34);
               memset(__s_00, 0, __n);
            }

            LAB_0010f71a:uVar30 = (uint)uVar38;
            iVar35 = *(int*)( this + 0x2c );
            if (iVar35 != 0) {
               LAB_0010f727:uVar29 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
               lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               uVar40 = String::hash();
               uVar38 = CONCAT44(0, uVar29);
               lVar41 = *(long*)( this + 0x10 );
               uVar31 = 1;
               if (uVar40 != 0) {
                  uVar31 = uVar40;
               }

               uVar45 = 0;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar31 * lVar2;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar38;
               lVar37 = SUB168(auVar11 * auVar23, 8);
               uVar40 = *(uint*)( lVar41 + lVar37 * 4 );
               uVar44 = SUB164(auVar11 * auVar23, 8);
               if (uVar40 != 0) {
                  do {
                     if (uVar31 == uVar40) {
                        cVar28 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar37 * 8 ) + 0x10 ), param_1);
                        if (cVar28 != '\0') {
                           pauVar32 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar44 * 8 );
                           if (*(long*)( pauVar32[1] + 8 ) != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar32[1] + 8 ), (CowData*)&local_70);
                              pauVar32 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar44 * 8 );
                           }

                           goto LAB_0010f5cb;
                        }

                        lVar41 = *(long*)( this + 0x10 );
                     }

                     uVar45 = uVar45 + 1;
                     auVar12._8_8_ = 0;
                     auVar12._0_8_ = ( ulong )(uVar44 + 1) * lVar2;
                     auVar24._8_8_ = 0;
                     auVar24._0_8_ = uVar38;
                     lVar37 = SUB168(auVar12 * auVar24, 8);
                     uVar40 = *(uint*)( lVar41 + lVar37 * 4 );
                     uVar44 = SUB164(auVar12 * auVar24, 8);
                  }
 while ( ( uVar40 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar40 * lVar2,auVar25._8_8_ = 0,auVar25._0_8_ = uVar38,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar29 + uVar44 ) - SUB164(auVar13 * auVar25, 8)) * lVar2,auVar26._8_8_ = 0,auVar26._0_8_ = uVar38,uVar45 <= SUB164(auVar14 * auVar26, 8) );
               }

               uVar38 = (ulong)uVar30;
               iVar35 = *(int*)( this + 0x2c );
            }

            goto LAB_0010f3e8;
         }

         iVar35 = *(int*)( this + 0x2c );
         if (__s_00 == (void*)0x0) goto LAB_0010f3e8;
         uVar30 = 0;
         if (*(int*)( this + 0x2c ) != 0) goto LAB_0010f727;
         LAB_0010f40a:if (*(int*)( this + 0x28 ) == 0x1c) {
            pauVar32 = (undefined1(*) [16])0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_0010f5cb;
         }

         _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
      }
 else {
         if (*(int*)( this + 0x2c ) != 0) {
            lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            uVar31 = String::hash();
            uVar38 = CONCAT44(0, uVar30);
            lVar41 = *(long*)( this + 0x10 );
            uVar29 = 1;
            if (uVar31 != 0) {
               uVar29 = uVar31;
            }

            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar29 * lVar2;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar38;
            lVar37 = SUB168(auVar7 * auVar19, 8);
            uVar31 = *(uint*)( lVar41 + lVar37 * 4 );
            uVar40 = SUB164(auVar7 * auVar19, 8);
            if (uVar31 == 0) {
               lVar36 = *(long*)( this + 8 );
            }
 else {
               lVar36 = *(long*)( this + 8 );
               uVar44 = 0;
               do {
                  if (uVar29 == uVar31) {
                     cVar28 = String::operator ==((String*)( *(long*)( lVar36 + lVar37 * 8 ) + 0x10 ), param_1);
                     if (cVar28 != '\0') {
                        pauVar32 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar40 * 8 );
                        goto LAB_0010f5d7;
                     }

                     lVar41 = *(long*)( this + 0x10 );
                     lVar36 = *(long*)( this + 8 );
                  }

                  uVar44 = uVar44 + 1;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = ( ulong )(uVar40 + 1) * lVar2;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar38;
                  lVar37 = SUB168(auVar8 * auVar20, 8);
                  uVar31 = *(uint*)( lVar41 + lVar37 * 4 );
                  uVar40 = SUB164(auVar8 * auVar20, 8);
               }
 while ( ( uVar31 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar31 * lVar2,auVar21._8_8_ = 0,auVar21._0_8_ = uVar38,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar40 + uVar30 ) - SUB164(auVar9 * auVar21, 8)) * lVar2,auVar22._8_8_ = 0,auVar22._0_8_ = uVar38,uVar44 <= SUB164(auVar10 * auVar22, 8) );
            }

            local_70 = 0;
            uVar38 = ( ulong )(uint)(&hash_table_size_primes)[*(uint*)( this + 0x28 )];
            if (lVar36 == 0) goto LAB_0010f848;
            goto LAB_0010f71a;
         }

         local_70 = 0;
         iVar35 = 0;
         LAB_0010f3e8:if ((float)uVar38 * __LC25 < (float)( iVar35 + 1 )) goto LAB_0010f40a;
      }

      local_58 = 0;
      local_68 = (undefined1[16])0x0;
      if (*(long*)param_1 == 0) {
         local_50[0] = 0;
         pauVar32 = (undefined1(*) [16])operator_new(0x20, "");
         *(undefined8*)pauVar32[1] = 0;
         *pauVar32 = (undefined1[16])0x0;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
         lVar2 = local_58;
         uVar33 = local_68._0_8_;
         uVar27 = local_68._8_8_;
         local_50[0] = 0;
         pauVar32 = (undefined1(*) [16])operator_new(0x20, "");
         *(undefined8*)pauVar32[1] = 0;
         *(undefined8*)*pauVar32 = uVar33;
         *(undefined8*)( *pauVar32 + 8 ) = uVar27;
         if (lVar2 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar32 + 1 ), (CowData*)&local_58);
         }

      }

      *(undefined8*)( pauVar32[1] + 8 ) = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      puVar1 = *(undefined8**)( this + 0x20 );
      if (puVar1 == (undefined8*)0x0) {
         *(undefined1(**) [16])( this + 0x18 ) = pauVar32;
      }
 else {
         *puVar1 = pauVar32;
         *(undefined8**)( *pauVar32 + 8 ) = puVar1;
      }

      *(undefined1(**) [16])( this + 0x20 ) = pauVar32;
      uVar29 = String::hash();
      lVar2 = *(long*)( this + 0x10 );
      uVar30 = 1;
      if (uVar29 != 0) {
         uVar30 = uVar29;
      }

      uVar34 = (ulong)uVar30;
      uVar29 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      uVar38 = CONCAT44(0, uVar29);
      lVar41 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar34 * lVar41;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar38;
      lVar36 = SUB168(auVar3 * auVar15, 8);
      lVar37 = *(long*)( this + 8 );
      puVar39 = (uint*)( lVar2 + lVar36 * 4 );
      iVar35 = SUB164(auVar3 * auVar15, 8);
      uVar31 = *puVar39;
      pauVar43 = pauVar32;
      if (uVar31 != 0) {
         uVar40 = 0;
         pauVar42 = pauVar32;
         do {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar31 * lVar41;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar38;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(( uVar29 + iVar35 ) - SUB164(auVar4 * auVar16, 8)) * lVar41;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar38;
            uVar30 = SUB164(auVar5 * auVar17, 8);
            pauVar43 = pauVar42;
            if (uVar30 < uVar40) {
               *puVar39 = (uint)uVar34;
               uVar34 = (ulong)uVar31;
               puVar1 = (undefined8*)( lVar37 + lVar36 * 8 );
               pauVar43 = (undefined1(*) [16])*puVar1;
               *puVar1 = pauVar42;
               uVar40 = uVar30;
            }

            uVar30 = (uint)uVar34;
            uVar40 = uVar40 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(iVar35 + 1) * lVar41;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar38;
            lVar36 = SUB168(auVar6 * auVar18, 8);
            puVar39 = (uint*)( lVar2 + lVar36 * 4 );
            iVar35 = SUB164(auVar6 * auVar18, 8);
            uVar31 = *puVar39;
            pauVar42 = pauVar43;
         }
 while ( uVar31 != 0 );
      }

      *(undefined1(**) [16])( lVar37 + lVar36 * 8 ) = pauVar43;
      *puVar39 = uVar30;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      LAB_0010f5cb:CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      LAB_0010f5d7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return pauVar32[1] + 8;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::insert(String const&, String const&,
   bool) */
   String *HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::insert(String *param_1, String *param_2, bool param_3) {
      undefined8 *puVar1;
      void *__s;
      undefined1 auVar2[16];
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
      char cVar18;
      uint uVar19;
      long *plVar20;
      undefined8 uVar21;
      void *__s_00;
      ulong uVar22;
      CowData *in_RCX;
      uint uVar23;
      int iVar24;
      uint uVar25;
      undefined7 in_register_00000011;
      String *pSVar26;
      long lVar27;
      long lVar28;
      uint *puVar29;
      uint uVar30;
      char in_R8B;
      uint uVar31;
      long lVar32;
      ulong uVar33;
      long *plVar34;
      long *plVar35;
      uint uVar36;
      long lVar37;
      ulong uVar38;
      long in_FS_OFFSET;
      uint local_98;
      long local_58;
      long local_50[2];
      long local_40;
      pSVar26 = (String*)CONCAT71(in_register_00000011, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar23 = ( &hash_table_size_primes )[*(uint*)( param_2 + 0x28 )];
      if (*(long*)( param_2 + 8 ) == 0) {
         uVar33 = (ulong)uVar23;
         uVar22 = uVar33 * 4;
         uVar38 = uVar33 * 8;
         uVar21 = Memory::alloc_static(uVar22, false);
         *(undefined8*)( param_2 + 0x10 ) = uVar21;
         __s_00 = (void*)Memory::alloc_static(uVar38, false);
         *(void**)( param_2 + 8 ) = __s_00;
         if (uVar23 != 0) {
            __s = *(void**)( param_2 + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar38 ) ) && ( __s_00 < (void*)( (long)__s + uVar22 ) )) {
               uVar22 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar22 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar22 * 8 ) = 0;
                  uVar22 = uVar22 + 1;
               }
 while ( uVar33 != uVar22 );
            }
 else {
               memset(__s, 0, uVar22);
               memset(__s_00, 0, uVar38);
            }

            goto LAB_0010fa2f;
         }

         iVar24 = *(int*)( param_2 + 0x2c );
         if (__s_00 == (void*)0x0) goto LAB_0010fa3f;
         if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0010fca0;
         LAB_0010fa61:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
            plVar20 = (long*)0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_0010fc51;
         }

         _resize_and_rehash((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
      }
 else {
         LAB_0010fa2f:iVar24 = *(int*)( param_2 + 0x2c );
         if (iVar24 != 0) {
            LAB_0010fca0:uVar19 = ( &hash_table_size_primes )[*(uint*)( param_2 + 0x28 )];
            lVar37 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
            uVar31 = String::hash();
            uVar22 = CONCAT44(0, uVar19);
            lVar32 = *(long*)( param_2 + 0x10 );
            uVar30 = 1;
            if (uVar31 != 0) {
               uVar30 = uVar31;
            }

            uVar36 = 0;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar30 * lVar37;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar22;
            lVar28 = SUB168(auVar6 * auVar14, 8);
            uVar31 = *(uint*)( lVar32 + lVar28 * 4 );
            uVar25 = SUB164(auVar6 * auVar14, 8);
            if (uVar31 != 0) {
               do {
                  if (uVar30 == uVar31) {
                     cVar18 = String::operator ==((String*)( *(long*)( *(long*)( param_2 + 8 ) + lVar28 * 8 ) + 0x10 ), pSVar26);
                     if (cVar18 != '\0') {
                        plVar20 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar25 * 8 );
                        if (plVar20[3] != *(long*)in_RCX) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)( plVar20 + 3 ), in_RCX);
                           plVar20 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar25 * 8 );
                        }

                        goto LAB_0010fc51;
                     }

                     lVar32 = *(long*)( param_2 + 0x10 );
                  }

                  uVar36 = uVar36 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(uVar25 + 1) * lVar37;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = uVar22;
                  lVar28 = SUB168(auVar7 * auVar15, 8);
                  uVar31 = *(uint*)( lVar32 + lVar28 * 4 );
                  uVar25 = SUB164(auVar7 * auVar15, 8);
               }
 while ( ( uVar31 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar31 * lVar37,auVar16._8_8_ = 0,auVar16._0_8_ = uVar22,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar19 + uVar25 ) - SUB164(auVar8 * auVar16, 8)) * lVar37,auVar17._8_8_ = 0,auVar17._0_8_ = uVar22,uVar36 <= SUB164(auVar9 * auVar17, 8) );
            }

            iVar24 = *(int*)( param_2 + 0x2c );
         }

         LAB_0010fa3f:if ((float)uVar23 * __LC25 < (float)( iVar24 + 1 )) goto LAB_0010fa61;
      }

      local_58 = 0;
      if (*(long*)pSVar26 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)pSVar26);
      }

      local_50[0] = 0;
      lVar37 = *(long*)in_RCX;
      if (*(long*)in_RCX != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)local_50, in_RCX);
         lVar37 = local_50[0];
      }

      plVar20 = (long*)operator_new(0x20, "");
      plVar20[2] = 0;
      *plVar20 = 0;
      plVar20[1] = 0;
      if (local_58 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( plVar20 + 2 ), (CowData*)&local_58);
      }

      plVar20[3] = 0;
      if (lVar37 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( plVar20 + 3 ), (CowData*)local_50);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      puVar1 = *(undefined8**)( param_2 + 0x20 );
      if (puVar1 == (undefined8*)0x0) {
         *(long**)( param_2 + 0x18 ) = plVar20;
         *(long**)( param_2 + 0x20 ) = plVar20;
      }
 else if (in_R8B == '\0') {
         *puVar1 = plVar20;
         plVar20[1] = (long)puVar1;
         *(long**)( param_2 + 0x20 ) = plVar20;
      }
 else {
         lVar37 = *(long*)( param_2 + 0x18 );
         *(long**)( lVar37 + 8 ) = plVar20;
         *plVar20 = lVar37;
         *(long**)( param_2 + 0x18 ) = plVar20;
      }

      uVar19 = String::hash();
      lVar37 = *(long*)( param_2 + 0x10 );
      uVar23 = 1;
      if (uVar19 != 0) {
         uVar23 = uVar19;
      }

      uVar38 = (ulong)uVar23;
      uVar19 = ( &hash_table_size_primes )[*(uint*)( param_2 + 0x28 )];
      uVar22 = CONCAT44(0, uVar19);
      lVar32 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar38 * lVar32;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar22;
      lVar27 = SUB168(auVar2 * auVar10, 8);
      lVar28 = *(long*)( param_2 + 8 );
      puVar29 = (uint*)( lVar37 + lVar27 * 4 );
      iVar24 = SUB164(auVar2 * auVar10, 8);
      uVar30 = *puVar29;
      plVar35 = plVar20;
      if (uVar30 != 0) {
         uVar31 = 0;
         plVar34 = plVar20;
         do {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)uVar30 * lVar32;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar22;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(( uVar19 + iVar24 ) - SUB164(auVar3 * auVar11, 8)) * lVar32;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar22;
            local_98 = SUB164(auVar4 * auVar12, 8);
            plVar35 = plVar34;
            if (local_98 < uVar31) {
               *puVar29 = (uint)uVar38;
               uVar38 = (ulong)uVar30;
               puVar1 = (undefined8*)( lVar28 + lVar27 * 8 );
               plVar35 = (long*)*puVar1;
               *puVar1 = plVar34;
               uVar31 = local_98;
            }

            uVar23 = (uint)uVar38;
            uVar31 = uVar31 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(iVar24 + 1) * lVar32;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar22;
            lVar27 = SUB168(auVar5 * auVar13, 8);
            puVar29 = (uint*)( lVar37 + lVar27 * 4 );
            iVar24 = SUB164(auVar5 * auVar13, 8);
            uVar30 = *puVar29;
            plVar34 = plVar35;
         }
 while ( uVar30 != 0 );
      }

      *(long**)( lVar28 + lVar27 * 8 ) = plVar35;
      *puVar29 = uVar23;
      *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
      LAB_0010fc51:*(long**)param_1 = plVar20;
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<String, HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, HashMap<String,
   String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > > > > >::operator[](String const&) */
   undefined8 * __thiscallHashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>::operator [](HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>> * this, String * param_1);
   {
      undefined8 *puVar1;
      void *pvVar2;
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
      char cVar35;
      uint uVar36;
      uint uVar37;
      ulong uVar38;
      undefined8 uVar39;
      void *__s_00;
      undefined8 *puVar40;
      long lVar41;
      void *pvVar42;
      int *piVar43;
      int iVar44;
      long lVar45;
      long lVar46;
      ulong uVar47;
      undefined8 uVar48;
      uint *puVar49;
      uint uVar50;
      uint uVar51;
      ulong uVar52;
      long lVar53;
      uint uVar54;
      uint uVar55;
      undefined8 *puVar56;
      undefined8 *puVar57;
      long in_FS_OFFSET;
      long local_78[2];
      undefined1 local_68[16];
      undefined1 local_58[16];
      ulong local_48;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar55 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      if (*(long*)( this + 8 ) == 0) {
         LAB_001106a0:uVar47 = (ulong)uVar55;
         uVar38 = uVar47 * 4;
         uVar52 = uVar47 * 8;
         uVar39 = Memory::alloc_static(uVar38, false);
         *(undefined8*)( this + 0x10 ) = uVar39;
         pvVar42 = (void*)Memory::alloc_static(uVar52, false);
         *(void**)( this + 8 ) = pvVar42;
         if (uVar55 != 0) {
            pvVar2 = *(void**)( this + 0x10 );
            if (( pvVar2 < (void*)( (long)pvVar42 + uVar52 ) ) && ( pvVar42 < (void*)( (long)pvVar2 + uVar38 ) )) {
               uVar38 = 0;
               do {
                  *(undefined4*)( (long)pvVar2 + uVar38 * 4 ) = 0;
                  *(undefined8*)( (long)pvVar42 + uVar38 * 8 ) = 0;
                  uVar38 = uVar38 + 1;
               }
 while ( uVar47 != uVar38 );
            }
 else {
               memset(pvVar2, 0, uVar38);
               memset(pvVar42, 0, uVar52);
            }

            LAB_0011057b:iVar44 = *(int*)( this + 0x2c );
            if (iVar44 != 0) {
               LAB_00110587:uVar36 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
               lVar41 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               uVar51 = String::hash();
               uVar38 = CONCAT44(0, uVar36);
               lVar53 = *(long*)( this + 0x10 );
               uVar37 = 1;
               if (uVar51 != 0) {
                  uVar37 = uVar51;
               }

               uVar54 = 0;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = (ulong)uVar37 * lVar41;
               auVar31._8_8_ = 0;
               auVar31._0_8_ = uVar38;
               lVar45 = SUB168(auVar15 * auVar31, 8);
               uVar51 = *(uint*)( lVar53 + lVar45 * 4 );
               uVar50 = SUB164(auVar15 * auVar31, 8);
               if (uVar51 != 0) {
                  do {
                     if (uVar51 == uVar37) {
                        cVar35 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar45 * 8 ) + 0x10 ), param_1);
                        if (cVar35 != '\0') {
                           lVar41 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                           uVar55 = *(uint*)( lVar41 + 0x40 );
                           uVar36 = ( &hash_table_size_primes )[uVar55];
                           if (( *(int*)( lVar41 + 0x44 ) == 0 ) || ( *(long*)( lVar41 + 0x20 ) == 0 )) goto LAB_00110797;
                           lVar53 = 0;
                           if (uVar36 != 0) goto LAB_001108a8;
                           *(undefined4*)( lVar41 + 0x44 ) = 0;
                           *(undefined1(*) [16])( lVar41 + 0x30 ) = (undefined1[16])0x0;
                           goto LAB_0011079c;
                        }

                        lVar53 = *(long*)( this + 0x10 );
                     }

                     uVar54 = uVar54 + 1;
                     auVar16._8_8_ = 0;
                     auVar16._0_8_ = ( ulong )(uVar50 + 1) * lVar41;
                     auVar32._8_8_ = 0;
                     auVar32._0_8_ = uVar38;
                     lVar45 = SUB168(auVar16 * auVar32, 8);
                     uVar51 = *(uint*)( lVar53 + lVar45 * 4 );
                     uVar50 = SUB164(auVar16 * auVar32, 8);
                  }
 while ( ( uVar51 != 0 ) && ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar51 * lVar41,auVar33._8_8_ = 0,auVar33._0_8_ = uVar38,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar36 + uVar50 ) - SUB164(auVar17 * auVar33, 8)) * lVar41,auVar34._8_8_ = 0,auVar34._0_8_ = uVar38,uVar54 <= SUB164(auVar18 * auVar34, 8) );
               }

               iVar44 = *(int*)( this + 0x2c );
            }

            goto LAB_0010ffb4;
         }

         iVar44 = *(int*)( this + 0x2c );
         if (pvVar42 == (void*)0x0) goto LAB_0010ffb7;
         if (*(int*)( this + 0x2c ) != 0) goto LAB_00110587;
         LAB_0010ffdd:uVar55 = *(uint*)( this + 0x28 );
         if (uVar55 == 0x1c) {
            puVar40 = (undefined8*)0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_0011044b;
         }

         uVar38 = ( ulong )(uVar55 + 1);
         *(undefined4*)( this + 0x2c ) = 0;
         uVar36 = ( &hash_table_size_primes )[uVar55];
         if (uVar55 + 1 < 2) {
            uVar38 = 2;
         }

         uVar55 = ( &hash_table_size_primes )[uVar38];
         uVar47 = (ulong)uVar55;
         *(int*)( this + 0x28 ) = (int)uVar38;
         pvVar42 = *(void**)( this + 8 );
         uVar38 = uVar47 * 4;
         uVar52 = uVar47 * 8;
         pvVar2 = *(void**)( this + 0x10 );
         uVar39 = Memory::alloc_static(uVar38, false);
         *(undefined8*)( this + 0x10 ) = uVar39;
         __s_00 = (void*)Memory::alloc_static(uVar52, false);
         *(void**)( this + 8 ) = __s_00;
         if (uVar55 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar52 ) ) && ( __s_00 < (void*)( (long)__s + uVar38 ) )) {
               uVar38 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar38 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar38 * 8 ) = 0;
                  uVar38 = uVar38 + 1;
               }
 while ( uVar47 != uVar38 );
            }
 else {
               memset(__s, 0, uVar38);
               memset(__s_00, 0, uVar52);
            }

         }

         if (uVar36 != 0) {
            uVar38 = 0;
            do {
               uVar55 = *(uint*)( (long)pvVar2 + uVar38 * 4 );
               if (uVar55 != 0) {
                  lVar41 = *(long*)( this + 0x10 );
                  uVar50 = 0;
                  uVar37 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
                  uVar52 = CONCAT44(0, uVar37);
                  lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = (ulong)uVar55 * lVar53;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = uVar52;
                  lVar45 = SUB168(auVar3 * auVar19, 8);
                  puVar49 = (uint*)( lVar41 + lVar45 * 4 );
                  iVar44 = SUB164(auVar3 * auVar19, 8);
                  uVar51 = *puVar49;
                  uVar39 = *(undefined8*)( (long)pvVar42 + uVar38 * 8 );
                  while (uVar51 != 0) {
                     auVar4._8_8_ = 0;
                     auVar4._0_8_ = (ulong)uVar51 * lVar53;
                     auVar20._8_8_ = 0;
                     auVar20._0_8_ = uVar52;
                     auVar5._8_8_ = 0;
                     auVar5._0_8_ = ( ulong )(( uVar37 + iVar44 ) - SUB164(auVar4 * auVar20, 8)) * lVar53;
                     auVar21._8_8_ = 0;
                     auVar21._0_8_ = uVar52;
                     uVar54 = SUB164(auVar5 * auVar21, 8);
                     uVar48 = uVar39;
                     if (uVar54 < uVar50) {
                        *puVar49 = uVar55;
                        puVar40 = (undefined8*)( (long)__s_00 + lVar45 * 8 );
                        uVar48 = *puVar40;
                        *puVar40 = uVar39;
                        uVar55 = uVar51;
                        uVar50 = uVar54;
                     }

                     uVar50 = uVar50 + 1;
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = ( ulong )(iVar44 + 1) * lVar53;
                     auVar22._8_8_ = 0;
                     auVar22._0_8_ = uVar52;
                     lVar45 = SUB168(auVar6 * auVar22, 8);
                     puVar49 = (uint*)( lVar41 + lVar45 * 4 );
                     iVar44 = SUB164(auVar6 * auVar22, 8);
                     uVar39 = uVar48;
                     uVar51 = *puVar49;
                  }
;
                  *(undefined8*)( (long)__s_00 + lVar45 * 8 ) = uVar39;
                  *puVar49 = uVar55;
                  *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
               }

               uVar38 = uVar38 + 1;
            }
 while ( uVar36 != uVar38 );
            Memory::free_static(pvVar42, false);
            Memory::free_static(pvVar2, false);
         }

      }
 else {
         iVar44 = *(int*)( this + 0x2c );
         if (iVar44 != 0) {
            uVar38 = CONCAT44(0, uVar55);
            lVar41 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            uVar37 = String::hash();
            lVar53 = *(long*)( this + 0x10 );
            uVar36 = 1;
            if (uVar37 != 0) {
               uVar36 = uVar37;
            }

            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar36 * lVar41;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar38;
            lVar45 = SUB168(auVar11 * auVar27, 8);
            uVar37 = *(uint*)( lVar53 + lVar45 * 4 );
            uVar51 = SUB164(auVar11 * auVar27, 8);
            if (uVar37 == 0) {
               lVar46 = *(long*)( this + 8 );
            }
 else {
               lVar46 = *(long*)( this + 8 );
               uVar50 = 0;
               do {
                  if (uVar37 == uVar36) {
                     cVar35 = String::operator ==((String*)( *(long*)( lVar46 + lVar45 * 8 ) + 0x10 ), param_1);
                     if (cVar35 != '\0') {
                        puVar40 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                        goto LAB_0011044b;
                     }

                     lVar53 = *(long*)( this + 0x10 );
                     lVar46 = *(long*)( this + 8 );
                  }

                  uVar50 = uVar50 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(uVar51 + 1) * lVar41;
                  auVar28._8_8_ = 0;
                  auVar28._0_8_ = uVar38;
                  lVar45 = SUB168(auVar12 * auVar28, 8);
                  uVar37 = *(uint*)( lVar53 + lVar45 * 4 );
                  uVar51 = SUB164(auVar12 * auVar28, 8);
               }
 while ( ( uVar37 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar37 * lVar41,auVar29._8_8_ = 0,auVar29._0_8_ = uVar38,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar51 + uVar55 ) - SUB164(auVar13 * auVar29, 8)) * lVar41,auVar30._8_8_ = 0,auVar30._0_8_ = uVar38,uVar50 <= SUB164(auVar14 * auVar30, 8) );
            }

            uVar55 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
            if (lVar46 == 0) goto LAB_001106a0;
            goto LAB_0011057b;
         }

         LAB_0010ffb4:uVar47 = (ulong)uVar55;
         LAB_0010ffb7:if ((float)uVar47 * __LC25 < (float)( iVar44 + 1 )) goto LAB_0010ffdd;
      }

      local_78[0] = 0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)local_78, (CowData*)param_1);
      }

      lVar41 = local_78[0];
      local_48 = 0;
      uVar38 = 1;
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      do {
         if (0x16 < ( uint )(&hash_table_size_primes)[uVar38]) {
            local_48 = uVar38 & 0xffffffff;
            uVar38 = uVar38 & 0xffffffff;
            goto LAB_00110284;
         }

         uVar38 = uVar38 + 1;
      }
 while ( uVar38 != 0x1d );
      uVar38 = 0;
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      LAB_00110284:puVar40 = (undefined8*)operator_new(0x48, "");
      puVar40[2] = 0;
      *puVar40 = 0;
      puVar40[1] = 0;
      if (lVar41 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar40 + 2 ), (CowData*)local_78);
      }

      puVar40[8] = 0;
      uVar55 = ( &hash_table_size_primes )[uVar38];
      *(undefined1(*) [16])( puVar40 + 4 ) = (undefined1[16])0x0;
      lVar41 = 1;
      *(undefined1(*) [16])( puVar40 + 6 ) = (undefined1[16])0x0;
      if (5 < uVar55) {
         do {
            if (uVar55 <= ( uint )(&hash_table_size_primes)[lVar41]) {
               *(int*)( puVar40 + 8 ) = (int)lVar41;
               goto LAB_0011032f;
            }

            lVar41 = lVar41 + 1;
         }
 while ( lVar41 != 0x1d );
         _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      }

      LAB_0011032f:CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
      puVar57 = *(undefined8**)( this + 0x20 );
      if (puVar57 == (undefined8*)0x0) {
         *(undefined8**)( this + 0x18 ) = puVar40;
      }
 else {
         *puVar57 = puVar40;
         puVar40[1] = puVar57;
      }

      *(undefined8**)( this + 0x20 ) = puVar40;
      uVar36 = String::hash();
      lVar41 = *(long*)( this + 0x10 );
      uVar55 = 1;
      if (uVar36 != 0) {
         uVar55 = uVar36;
      }

      lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar36 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      uVar38 = CONCAT44(0, uVar36);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar55 * lVar53;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar38;
      lVar46 = SUB168(auVar7 * auVar23, 8);
      lVar45 = *(long*)( this + 8 );
      puVar49 = (uint*)( lVar41 + lVar46 * 4 );
      iVar44 = SUB164(auVar7 * auVar23, 8);
      uVar37 = *puVar49;
      puVar57 = puVar40;
      if (uVar37 != 0) {
         uVar51 = 0;
         puVar56 = puVar40;
         do {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar37 * lVar53;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar38;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = ( ulong )(( iVar44 + uVar36 ) - SUB164(auVar8 * auVar24, 8)) * lVar53;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar38;
            uVar50 = SUB164(auVar9 * auVar25, 8);
            puVar57 = puVar56;
            if (uVar50 < uVar51) {
               *puVar49 = uVar55;
               puVar1 = (undefined8*)( lVar45 + lVar46 * 8 );
               puVar57 = (undefined8*)*puVar1;
               *puVar1 = puVar56;
               uVar51 = uVar50;
               uVar55 = uVar37;
            }

            uVar51 = uVar51 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = ( ulong )(iVar44 + 1) * lVar53;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar38;
            lVar46 = SUB168(auVar10 * auVar26, 8);
            puVar49 = (uint*)( lVar41 + lVar46 * 4 );
            iVar44 = SUB164(auVar10 * auVar26, 8);
            uVar37 = *puVar49;
            puVar56 = puVar57;
         }
 while ( uVar37 != 0 );
      }

      *(undefined8**)( lVar45 + lVar46 * 8 ) = puVar57;
      *puVar49 = uVar55;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      LAB_0011044b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar40 + 3;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
      LAB_001108a8:do {
         piVar43 = (int*)( *(long*)( lVar41 + 0x28 ) + lVar53 );
         if (*piVar43 != 0) {
            *piVar43 = 0;
            pvVar42 = *(void**)( *(long*)( lVar41 + 0x20 ) + lVar53 * 2 );
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar42 + 0x18 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar42 + 0x10 ));
            Memory::free_static(pvVar42, false);
            *(undefined8*)( *(long*)( lVar41 + 0x20 ) + lVar53 * 2 ) = 0;
         }

         lVar53 = lVar53 + 4;
      }
 while ( (ulong)uVar36 << 2 != lVar53 );
      uVar55 = *(uint*)( lVar41 + 0x40 );
      *(undefined4*)( lVar41 + 0x44 ) = 0;
      *(undefined1(*) [16])( lVar41 + 0x30 ) = (undefined1[16])0x0;
      uVar36 = ( &hash_table_size_primes )[uVar55];
      LAB_00110797:if (uVar36 < 0x17) {
         LAB_0011079c:if (uVar55 != 0x1c) {
            uVar38 = (ulong)uVar55;
            do {
               uVar36 = (int)uVar38 + 1;
               uVar38 = (ulong)uVar36;
               if (0x16 < ( uint )(&hash_table_size_primes)[uVar38]) {
                  if (uVar36 != uVar55) {
                     if (*(long*)( lVar41 + 0x20 ) == 0) {
                        *(uint*)( lVar41 + 0x40 ) = uVar36;
                     }
 else {
                        HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::_resize_and_rehash((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)( lVar41 + 0x18 ), uVar36);
                     }

                  }

                  goto LAB_001107f2;
               }

            }
 while ( uVar36 != 0x1c );
         }

         _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      }

      LAB_001107f2:puVar40 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
      goto LAB_0011044b;
   }

   /* WARNING: Removing unreachable block (ram,0x00110a98) */
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

   /* MethodBindTRC<String, String const&>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<String,String_const&>::validated_call(MethodBindTRC<String,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
            vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_00110dc3;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
      if (*(char**)( param_3 + 8 ) != local_48) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      LAB_00110dc3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<String, String const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<String,String_const&>::ptrcall(MethodBindTRC<String,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
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
            vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_00110fbe;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
      /* WARNING: Load size is inaccurate */
      if (*param_3 != local_48) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      LAB_00110fbe:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<String const&, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */
   void MethodBindT<String_const&,String_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_001112ff;
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
         /* WARNING: Could not recover jumptable at 0x001111aa. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8, *(long*)( param_3 + 8 ) + 8);
         return;
      }

      LAB_001112ff:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<String const&, String const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<String_const&,String_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_001114e9;
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
         /* WARNING: Could not recover jumptable at 0x00111370. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, *(undefined8*)( (long)param_3 + 8 ));
         return;
      }

      LAB_001114e9:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC112, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_00111610;
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

      LAB_00111610:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_0011198f;
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
         /* WARNING: Could not recover jumptable at 0x00111836. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_0011198f:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_00111b4f;
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
         /* WARNING: Could not recover jumptable at 0x001119f6. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_00111b4f:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTRC<Node*>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<Node*>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC112, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00111cb0;
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

            pOVar2 = (Object*)( *(code*)pVVar3 )();
            Variant::Variant((Variant*)local_48, pOVar2);
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

      LAB_00111cb0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC112, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00111f40;
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

      LAB_00111f40:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_00112152;
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
      LAB_00112152:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_00112301;
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
      LAB_00112301:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_00112641;
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
         /* WARNING: Could not recover jumptable at 0x001124cd. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
         return;
      }

      LAB_00112641:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_00112829;
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
         /* WARNING: Could not recover jumptable at 0x001126b2. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
         return;
      }

      LAB_00112829:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTRC<RID>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<RID>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC112, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00112900;
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

            local_58 = (char*)( *(code*)pVVar2 )();
            Variant::Variant((Variant*)local_48, (RID*)&local_58);
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

      LAB_00112900:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<RID>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<RID>::validated_call(MethodBindTRC<RID> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      undefined8 uVar1;
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

            goto LAB_00112b12;
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
      *(undefined8*)( param_3 + 8 ) = uVar1;
      LAB_00112b12:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<RID>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<RID>::ptrcall(MethodBindTRC<RID> *this, Object *param_1, void **param_2, void *param_3) {
      undefined8 uVar1;
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

            goto LAB_00112cc1;
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
      *(undefined8*)param_3 = uVar1;
      LAB_00112cc1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
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
            _err_print_error(&_LC112, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00112f00;
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

      LAB_00112f00:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
            local_48 = (Variant**)0x110c68;
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

            goto LAB_0011313c;
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
      LAB_0011313c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
            local_48 = (void**)0x110c68;
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

            goto LAB_0011330d;
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
      LAB_0011330d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

            goto LAB_00113641;
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
         /* WARNING: Could not recover jumptable at 0x001134cd. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
         return;
      }

      LAB_00113641:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

            goto LAB_00113821;
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
         /* WARNING: Could not recover jumptable at 0x001136a9. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
         return;
      }

      LAB_00113821:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTRC<Ref<Resource>, bool>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Ref<Resource>,bool>::ptrcall(MethodBindTRC<Ref<Resource>,bool> *this, Object *param_1, void **param_2, void *param_3) {
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
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar4 = *(long**)( param_1 + 0x118 );
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (Object*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = (Object*)0x110c68;
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

            goto LAB_001138f0;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      /* WARNING: Load size is inaccurate */
      ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2 != '\0');
      if (local_48 == (Object*)0x0) {
         /* WARNING: Load size is inaccurate */
         pOVar5 = *param_3;
         if (pOVar5 == (Object*)0x0) goto LAB_001138f0;
         *(undefined8*)param_3 = 0;
         goto LAB_00113931;
      }

      pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 != pOVar3) {
         *(Object**)param_3 = pOVar3;
         if (pOVar3 == (Object*)0x0) {
            if (pOVar5 != (Object*)0x0) goto LAB_00113931;
         }
 else {
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
               *(undefined8*)param_3 = 0;
            }

            if (pOVar5 != (Object*)0x0) {
               LAB_00113931:cVar1 = RefCounted::unreference();
               if (cVar1 != '\0') {
                  cVar1 = predelete_handler(pOVar5);
                  if (cVar1 != '\0') {
                     ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                     Memory::free_static(pOVar5, false);
                  }

               }

            }

            if (local_48 == (Object*)0x0) goto LAB_001138f0;
         }

      }

      cVar1 = RefCounted::unreference();
      pOVar5 = local_48;
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_48);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

      LAB_001138f0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Node*>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<Node*>::validated_call(MethodBindTRC<Node*> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_00113ccf;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Variant::ObjData::ref_pointer((Object*)( param_3 + 8 ));
         return;
      }

      LAB_00113ccf:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTRC<Node*>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Node*>::ptrcall(MethodBindTRC<Node*> *this, Object *param_1, void **param_2, void *param_3) {
      undefined8 uVar1;
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

            goto LAB_00113d21;
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
      *(undefined8*)param_3 = uVar1;
      LAB_00113d21:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Ref<Resource>, bool>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindTRC<Ref<Resource>,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      Object *local_68;
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

         if (local_68 == (Object*)*plVar8) {
            if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_68 = (Object*)0x110c68;
            local_70 = 0;
            local_60 = 0x35;
            String::parse_latin1((StrRange*)&local_70);
            vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
            _err_print_error(&_LC112, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }

            goto LAB_00113fd0;
         }

         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar12 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 2) {
         pVVar11 = param_2[5];
         if (pVVar11 == (Variant*)0x0) {
            if (in_R8D != 1) goto LAB_00114020;
            LAB_00114010:pVVar11 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar11 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_00114020:uVar7 = 4;
               goto LAB_00113fc5;
            }

            if (in_R8D == 1) goto LAB_00114010;
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

         cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 1);
         uVar4 = _LC114;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         bVar6 = Variant::operator_cast_to_bool(pVVar11);
         ( *(code*)pVVar12 )((Ref<Resource>*)&local_68, (Variant*)( (long)plVar10 + (long)pVVar1 ), bVar6);
         Variant::Variant((Variant*)local_58, local_68);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         Ref<Resource>::unref((Ref<Resource>*)&local_68);
      }
 else {
         uVar7 = 3;
         LAB_00113fc5:*in_R9 = uVar7;
         in_R9[2] = 1;
      }

      LAB_00113fd0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* MethodBindTRC<String, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindTRC<String,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC112, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }

            goto LAB_00114380;
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
            if (in_R8D != 1) goto LAB_001143d0;
            LAB_001143c0:pVVar10 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar10 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_001143d0:uVar6 = 4;
               goto LAB_00114375;
            }

            if (in_R8D == 1) goto LAB_001143c0;
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
         uVar4 = _LC116;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_68);
         ( *(code*)pVVar11 )((CowData<char32_t>*)&local_70, (Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_68);
         Variant::Variant((Variant*)local_58, (String*)&local_70);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      }
 else {
         uVar6 = 3;
         LAB_00114375:*in_R9 = uVar6;
         in_R9[2] = 1;
      }

      LAB_00114380:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
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
            _err_print_error(&_LC112, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_001146f0;
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
            if (in_R8D != 1) goto LAB_00114740;
            LAB_00114730:pVVar10 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar10 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_00114740:uVar6 = 4;
               goto LAB_001146e5;
            }

            if (in_R8D == 1) goto LAB_00114730;
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
         uVar4 = _LC116;
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
         LAB_001146e5:*in_R9 = uVar6;
         in_R9[2] = 1;
      }

      LAB_001146f0:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Ref<Resource>, bool>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<Ref<Resource>,bool>::validated_call(MethodBindTRC<Ref<Resource>,bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar4 = *(long**)( param_1 + 0x118 );
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = (Object*)0x0;
            local_40 = (Object*)0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011498d;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar3 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), ( *param_2 )[8]);
      if (local_50 == (Object*)0x0) {
         Variant::ObjData::unref();
      }
 else {
         local_48 = *(char**)( local_50 + 0x60 );
         local_40 = local_50;
         Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
      }

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

      LAB_0011498d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_with_variant_args_dv<__UnexistingClass, String const&, String
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(String const&, String const&), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */
   void call_with_variant_args_dv<__UnexistingClass,String_const&,String_const&>(__UnexistingClass *param_1, _func_void_String_ptr_String_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      undefined4 *puVar13;
      long in_FS_OFFSET;
      long in_stack_00000008;
      Variant local_50[8];
      Variant local_48[8];
      long local_40;
      plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar11 = (uint)param_5;
      if (uVar11 < 3) {
         lVar1 = *(long*)( in_stack_00000008 + 8 );
         iVar6 = 2 - uVar11;
         if (lVar1 == 0) {
            if (iVar6 != 0) goto LAB_00114ca8;
            puVar10 = (undefined4*)*plVar8;
            LAB_00114cfd:puVar13 = (undefined4*)plVar8[1];
         }
 else {
            lVar2 = *(long*)( lVar1 + -8 );
            iVar12 = (int)lVar2;
            if (iVar12 < iVar6) {
               LAB_00114ca8:uVar7 = 4;
               goto LAB_00114cad;
            }

            if (uVar11 == 0) {
               lVar9 = (long)( iVar12 + -2 );
               if (lVar2 <= lVar9) goto LAB_00114d18;
               puVar10 = (undefined4*)( lVar1 + lVar9 * 0x18 );
            }
 else {
               puVar10 = (undefined4*)*plVar8;
               if (uVar11 == 2) goto LAB_00114cfd;
            }

            lVar9 = (long)(int)( ( uVar11 ^ 1 ) + ( iVar12 - iVar6 ) );
            if (lVar2 <= lVar9) {
               LAB_00114d18:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            puVar13 = (undefined4*)( lVar1 + lVar9 * 0x18 );
         }

         *(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_String_ptr_String_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*puVar13, 4);
         uVar4 = _LC117;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         Variant::operator_cast_to_String(local_50);
         cVar5 = Variant::can_convert_strict(*puVar10, 4);
         uVar4 = _LC116;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         Variant::operator_cast_to_String(local_48);
         ( *param_2 )((String*)( param_1 + (long)param_3 ), (String*)local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
      }
 else {
         uVar7 = 3;
         LAB_00114cad:*(undefined4*)param_6 = uVar7;
         *(undefined4*)( param_6 + 8 ) = 2;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<String const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindT<String_const&,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC112, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            *(undefined4*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
            goto LAB_00114db6;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      call_with_variant_args_dv<__UnexistingClass,String_const&,String_const&>(p_Var2, (_func_void_String_ptr_String_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_00114db6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */
   void call_with_variant_args_dv<__UnexistingClass,bool>(__UnexistingClass *param_1, _func_void_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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

      lVar1 = *(long*)( in_stack_00000008 + 8 );
      if (lVar1 == 0) {
         if (uVar8 != 1) goto LAB_001150e0;
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
            LAB_001150e0:uVar6 = 4;
            LAB_0011507d:*(undefined4*)param_6 = uVar6;
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
            goto LAB_00114ffb;
         }

      }

      this * (Variant**)CONCAT44(in_register_0000000c, param_4);
      LAB_00114ffb:*(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
      uVar4 = _LC114;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_bool(this);
      /* WARNING: Could not recover jumptable at 0x00115057. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
      return;
   }

   /* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC112, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            *(undefined4*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
            goto LAB_00115146;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      call_with_variant_args_dv<__UnexistingClass,bool>(p_Var2, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_00115146:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */
   void call_get_argument_type_info_helper<String_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
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
      if (iVar5 != param_1) goto LAB_00115347;
      local_78 = 0;
      local_68 = &_LC30;
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
         LAB_00115445:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_00115445;
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
      LAB_00115347:*param_2 = iVar5 + 1;
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* MethodBindT<String const&, String const&>::_gen_argument_type_info(int) const */
   PropertyInfo *MethodBindT<String_const&,String_const&>::_gen_argument_type_info(int param_1) {
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
      call_get_argument_type_info_helper<String_const&>(in_EDX, &local_24, pPVar1);
      call_get_argument_type_info_helper<String_const&>(in_EDX, &local_24, pPVar1);
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pPVar1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<String, String const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<String,String_const&>::_gen_argument_type_info(int param_1) {
      undefined1 auVar1[16];
      undefined1 auVar2[16];
      undefined8 uVar3;
      undefined8 uVar4;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar5;
      long in_FS_OFFSET;
      long local_80;
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
         call_get_argument_type_info_helper<String_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
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
         goto LAB_001156a8;
      }

      local_80 = 0;
      local_78 = 0;
      local_68 = &_LC30;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_78);
      local_70 = 0;
      *puVar5 = 4;
      puVar5[6] = 0;
      *(undefined8*)( puVar5 + 8 ) = 0;
      *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
      if (local_78 == 0) {
         puVar5[10] = 6;
         LAB_0011578f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_80);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
         puVar5[10] = 6;
         if (puVar5[6] != 0x11) goto LAB_0011578f;
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

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      LAB_001156a8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar5;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<String const&>::_gen_argument_type_info(int) const */
   PropertyInfo *MethodBindT<String_const&>::_gen_argument_type_info(int param_1) {
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
      call_get_argument_type_info_helper<String_const&>(in_EDX, &local_14, pPVar1);
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pPVar1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* Resource::emit_changed() */
   void Resource::_GLOBAL__sub_I_emit_changed(void) {
      undefined8 uVar1;
      uVar1 = _LC61;
      ResourceCache::resources._8_16_ = (undefined1[16])0x0;
      ResourceCache::resources._24_16_ = (undefined1[16])0x0;
      ResourceCache::resources._40_8_ = _LC61;
      __cxa_atexit(HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault < String>, DefaultTypedAllocator<HashMapElement<String,Resource*>> > ::~HashMap, ResourceCache::resources, &__dso_handle);
      ResourceCache::resource_path_cache._40_8_ = uVar1;
      ResourceCache::resource_path_cache._8_16_ = (undefined1[16])0x0;
      ResourceCache::resource_path_cache._24_16_ = (undefined1[16])0x0;
      __cxa_atexit(HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>::~HashMap, ResourceCache::resource_path_cache, &__dso_handle);
      return;
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodInfo::~MethodInfo() */
   void MethodInfo::~MethodInfo(MethodInfo *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* List<PropertyInfo, DefaultAllocator>::~List() */
   void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* List<Variant, DefaultAllocator>::~List() */
   void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
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
   /* HashMap<String, HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, HashMap<String,
   String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > > > > >::~HashMap() */
   void HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator < HashMapElement<String,String>>>>>>::~HashMap(HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator < HashMapElement<String,String>>>>> > *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* HashMap<String, Resource*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Resource*> > >::~HashMap() */
   void HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>>::~HashMap(HashMap<String,Resource*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Resource*>>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RefCounted::~RefCounted() */
   void RefCounted::~RefCounted(RefCounted *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Ref<Resource>, bool>::~MethodBindTRC() */
   void MethodBindTRC<Ref<Resource>,bool>::~MethodBindTRC(MethodBindTRC<Ref<Resource>,bool> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<>::~MethodBindT() */
   void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
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
   /* MethodBindTRS<String>::~MethodBindTRS() */
   void MethodBindTRS<String>::~MethodBindTRS(MethodBindTRS<String> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<bool>::~MethodBindTRC() */
   void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<String, String const&>::~MethodBindTRC() */
   void MethodBindTRC<String,String_const&>::~MethodBindTRC(MethodBindTRC<String,String_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<String const&, String const&>::~MethodBindT() */
   void MethodBindT<String_const&,String_const&>::~MethodBindT(MethodBindT<String_const&,String_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Node*>::~MethodBindTRC() */
   void MethodBindTRC<Node*>::~MethodBindTRC(MethodBindTRC<Node*> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<bool>::~MethodBindT() */
   void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<RID>::~MethodBindTRC() */
   void MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this) {
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


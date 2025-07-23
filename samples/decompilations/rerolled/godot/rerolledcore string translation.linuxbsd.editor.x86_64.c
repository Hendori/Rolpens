/* Translation::get_message_count() const */undefined4 Translation::get_message_count(Translation *this) {
   return *(undefined4*)( this + 0x274 );
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
/* Translation::get_message_list(List<StringName, DefaultAllocator>*) const */void Translation::get_message_list(Translation *this, List *param_1) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   StringName *this_00;
   undefined8 *puVar4;
   StringName *pSVar5;
   puVar4 = *(undefined8**)( this + 0x260 );
   if (puVar4 != (undefined8*)0x0) {
      pSVar5 = (StringName*)( puVar4 + 2 );
      if (*(long*)param_1 == 0) {
         pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])param_1 = pauVar3;
         *(undefined4*)pauVar3[1] = 0;
         *pauVar3 = (undefined1[16])0x0;
      }

      while (true) {
         this_00 = (StringName*)operator_new(0x20, DefaultAllocator::alloc);
         *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
         StringName::operator =(this_00, pSVar5);
         plVar1 = *(long**)param_1;
         lVar2 = plVar1[1];
         *(undefined8*)( this_00 + 8 ) = 0;
         *(long**)( this_00 + 0x18 ) = plVar1;
         *(long*)( this_00 + 0x10 ) = lVar2;
         if (lVar2 != 0) {
            *(StringName**)( lVar2 + 8 ) = this_00;
         }

         plVar1[1] = (long)this_00;
         if (*plVar1 == 0) {
            puVar4 = (undefined8*)*puVar4;
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            *plVar1 = (long)this_00;
         }
 else {
            puVar4 = (undefined8*)*puVar4;
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         }

         if (puVar4 == (undefined8*)0x0) break;
         pSVar5 = (StringName*)( puVar4 + 2 );
      }
;
   }

   return;
}
/* Translation::_get_messages() const */void Translation::_get_messages(void) {
   Variant *pVVar1;
   long *plVar2;
   long in_RSI;
   Dictionary *in_RDI;
   long in_FS_OFFSET;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(in_RDI);
   plVar2 = *(long**)( in_RSI + 0x260 );
   if (plVar2 != (long*)0x0) {
      do {
         Variant::Variant((Variant*)local_58, (StringName*)( plVar2 + 3 ));
         Variant::Variant((Variant*)local_78, (StringName*)( plVar2 + 2 ));
         pVVar1 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
         if (pVVar1 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar1 = 0;
            *(int*)pVVar1 = local_58[0];
            local_58[0] = 0;
            *(undefined8*)( pVVar1 + 8 ) = local_50;
            *(undefined8*)( pVVar1 + 0x10 ) = uStack_48;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         plVar2 = (long*)*plVar2;
      }
 while ( plVar2 != (long*)0x0 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Translation::erase_message(StringName const&, StringName const&) */void Translation::erase_message(Translation *this, StringName *param_1, StringName *param_2) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long *plVar3;
   uint *puVar4;
   uint uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   undefined8 uVar9;
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
   uint uVar30;
   uint uVar31;
   uint uVar32;
   long lVar33;
   ulong uVar34;
   long *plVar35;
   ulong uVar36;
   uint uVar37;
   ulong uVar38;
   ulong uVar39;
   uint *puVar40;
   if (*(long*)param_2 != 0) {
      _err_print_error("erase_message", "core/string/translation.cpp", 0x88, "Translation class doesn\'t handle context. Using context in erase_message() on a Translation instance is probably a mistake. \nUse a derived Translation class that handles context, such as TranslationPO class", 0);
   }

   if (( *(long*)( this + 0x250 ) != 0 ) && ( *(int*)( this + 0x274 ) != 0 )) {
      uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x270 ) * 4 );
      uVar38 = CONCAT44(0, uVar5);
      lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x270 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar30 = StringName::get_empty_hash();
      }
 else {
         uVar30 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      lVar7 = *(long*)( this + 600 );
      if (uVar30 == 0) {
         uVar30 = 1;
      }

      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar30 * lVar6;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar38;
      lVar33 = SUB168(auVar10 * auVar20, 8);
      uVar32 = *(uint*)( lVar7 + lVar33 * 4 );
      uVar31 = SUB164(auVar10 * auVar20, 8);
      if (uVar32 != 0) {
         uVar37 = 0;
         do {
            uVar36 = (ulong)uVar31;
            if (( uVar30 == uVar32 ) && ( lVar8 = *(long*)( this + 0x250 ) * (long*)( *(long*)( lVar8 + lVar33 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x270 ) * 8 );
               uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x270 ) * 4 );
               uVar39 = CONCAT44(0, uVar5);
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(uVar31 + 1) * lVar6;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar39;
               uVar34 = SUB168(auVar14 * auVar24, 8);
               puVar40 = (uint*)( lVar7 + uVar34 * 4 );
               uVar32 = SUB164(auVar14 * auVar24, 8);
               uVar38 = (ulong)uVar32;
               uVar30 = *puVar40;
               if (( uVar30 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar30 * lVar6,auVar25._8_8_ = 0,auVar25._0_8_ = uVar39,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar5 + uVar32 ) - SUB164(auVar15 * auVar25, 8)) * lVar6,auVar26._8_8_ = 0,auVar26._0_8_ = uVar39,SUB164(auVar16 * auVar26, 8) != 0) {
                  while (true) {
                     puVar4 = (uint*)( lVar7 + uVar36 * 4 );
                     *puVar40 = *puVar4;
                     puVar1 = (undefined8*)( lVar8 + uVar34 * 8 );
                     *puVar4 = uVar30;
                     puVar2 = (undefined8*)( lVar8 + uVar36 * 8 );
                     uVar9 = *puVar1;
                     *puVar1 = *puVar2;
                     uVar31 = (uint)uVar38;
                     *puVar2 = uVar9;
                     auVar19._8_8_ = 0;
                     auVar19._0_8_ = ( ulong )(uVar31 + 1) * lVar6;
                     auVar29._8_8_ = 0;
                     auVar29._0_8_ = uVar39;
                     uVar34 = SUB168(auVar19 * auVar29, 8);
                     puVar40 = (uint*)( lVar7 + uVar34 * 4 );
                     uVar30 = *puVar40;
                     if (( uVar30 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar30 * lVar6,auVar27._8_8_ = 0,auVar27._0_8_ = uVar39,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( SUB164(auVar19 * auVar29, 8) + uVar5 ) - SUB164(auVar17 * auVar27, 8)) * lVar6,auVar28._8_8_ = 0,auVar28._0_8_ = uVar39,SUB164(auVar18 * auVar28, 8) == 0) break;
                     uVar36 = uVar38;
                     uVar38 = uVar34 & 0xffffffff;
                  }
;
               }

               uVar38 = (ulong)uVar31;
               *(undefined4*)( lVar7 + uVar38 * 4 ) = 0;
               plVar3 = (long*)( lVar8 + uVar38 * 8 );
               plVar35 = (long*)*plVar3;
               if (*(long**)( this + 0x260 ) == plVar35) {
                  *(long*)( this + 0x260 ) = *plVar35;
                  plVar35 = (long*)*plVar3;
               }

               if (*(long**)( this + 0x268 ) == plVar35) {
                  *(long*)( this + 0x268 ) = plVar35[1];
                  plVar35 = (long*)*plVar3;
               }

               if ((long*)plVar35[1] != (long*)0x0) {
                  *(long*)plVar35[1] = *plVar35;
                  plVar35 = (long*)*plVar3;
               }

               if (*plVar35 != 0) {
                  *(long*)( *plVar35 + 8 ) = plVar35[1];
                  plVar35 = (long*)*plVar3;
               }

               if (( StringName::configured != '\0' ) && ( ( ( plVar35[3] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( plVar35[2] != 0 ) ) )) {
                  StringName::unref();
               }

               Memory::free_static(plVar35, false);
               *(undefined8*)( *(long*)( this + 0x250 ) + uVar38 * 8 ) = 0;
               *(int*)( this + 0x274 ) = *(int*)( this + 0x274 ) + -1;
               return;
            }

            uVar37 = uVar37 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )(uVar31 + 1) * lVar6;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar38;
            lVar33 = SUB168(auVar11 * auVar21, 8);
            uVar32 = *(uint*)( lVar7 + lVar33 * 4 );
            uVar31 = SUB164(auVar11 * auVar21, 8);
         }
 while ( ( uVar32 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar32 * lVar6,auVar22._8_8_ = 0,auVar22._0_8_ = uVar38,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar5 + uVar31 ) - SUB164(auVar12 * auVar22, 8)) * lVar6,auVar23._8_8_ = 0,auVar23._0_8_ = uVar38,uVar37 <= SUB164(auVar13 * auVar23, 8) );
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
/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */void PropertyInfo::operator =(PropertyInfo *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   lVar3 = *(long*)( param_1 + 8 );
   *(undefined4*)this = *(undefined4*)param_1;
   lVar2 = *(long*)( this + 8 );
   if (lVar2 != lVar3) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( this + 8 );
            *(undefined8*)( this + 8 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar3 = *(long*)( param_1 + 8 );
         }
 else {
            *(undefined8*)( this + 8 ) = 0;
            lVar3 = *(long*)( param_1 + 8 );
         }

      }

      *(long*)( this + 8 ) = lVar3;
      *(undefined8*)( param_1 + 8 ) = 0;
   }

   if (*(long*)( this + 0x10 ) != *(long*)( param_1 + 0x10 )) {
      StringName::unref();
      *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
      *(undefined8*)( param_1 + 0x10 ) = 0;
   }

   lVar3 = *(long*)( param_1 + 0x20 );
   *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_1 + 0x18 );
   lVar2 = *(long*)( this + 0x20 );
   if (lVar2 != lVar3) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( this + 0x20 );
            *(undefined8*)( this + 0x20 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar3 = *(long*)( param_1 + 0x20 );
         }
 else {
            *(undefined8*)( this + 0x20 ) = 0;
            lVar3 = *(long*)( param_1 + 0x20 );
         }

      }

      *(long*)( this + 0x20 ) = lVar3;
      *(undefined8*)( param_1 + 0x20 ) = 0;
   }

   *(undefined4*)( this + 0x28 ) = *(undefined4*)( param_1 + 0x28 );
   return;
}
/* Translation::add_message(StringName const&, StringName const&, StringName const&) */void Translation::add_message(StringName *param_1, StringName *param_2, StringName *param_3) {
   StringName *this;
   this(StringName * HashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,StringName>>>::operator []((HashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,StringName>>>*)( param_1 + 0x248 ), param_2));
   StringName::operator =(this, param_3);
   return;
}
/* Translation::add_plural_message(StringName const&, Vector<String> const&, StringName const&) */void Translation::add_plural_message(StringName *param_1, Vector *param_2, StringName *param_3) {
   String *pSVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   _err_print_error("add_plural_message", "core/string/translation.cpp", 0x65, "Translation class doesn\'t handle plural messages. Calling add_plural_message() on a Translation instance is probably a mistake. \nUse a derived Translation class that handles plurals, such as TranslationPO class", 0, 1);
   pSVar1 = *(String**)( param_3 + 8 );
   if (pSVar1 == (String*)0x0) {
      _err_print_error("add_plural_message", "core/string/translation.cpp", 0x66, "Condition \"p_plural_xlated_texts.is_empty()\" is true.", "Parameter vector p_plural_xlated_texts passed in is empty.", 0, 0);
   }
 else {
      if (*(long*)( pSVar1 + -8 ) < 1) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, *(long*)( pSVar1 + -8 ), "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      StringName::StringName((StringName*)&local_38, pSVar1, false);
      plVar3 = (long*)HashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,StringName>>>::operator []((HashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,StringName>>>*)( param_1 + 0x248 ), (StringName*)param_2);
      if (*plVar3 == local_38) {
         if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *plVar3 = local_38;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Translation::_set_messages(Dictionary const&) */void Translation::_set_messages(Translation *this, Dictionary *param_1) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long *local_58;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (long*)0x0;
   Dictionary::get_key_list((List*)param_1);
   if (( local_58 != (long*)0x0 ) && ( lVar2 = lVar2 != 0 )) {
      do {
         Dictionary::operator []((Variant*)param_1);
         Variant::operator_cast_to_StringName((Variant*)&local_48);
         Variant::operator_cast_to_StringName((Variant*)&local_50);
         plVar1 = (long*)HashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,StringName>>>::operator []((HashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,StringName>>>*)( this + 0x248 ), (StringName*)&local_50);
         if (*plVar1 != local_48) {
            StringName::unref();
            *plVar1 = local_48;
            local_48 = 0;
         }

         if (StringName::configured != '\0') {
            if (local_50 != 0) {
               StringName::unref();
               if (StringName::configured == '\0') goto LAB_00100b64;
            }

            if (local_48 != 0) {
               StringName::unref();
            }

         }

         LAB_00100b64:lVar2 = *(long*)( lVar2 + 0x18 );
      }
 while ( lVar2 != 0 );
   }

   List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator>*)&local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Translation::_notify_translation_changed_if_applies() */void Translation::_notify_translation_changed_if_applies(Translation *this) {
   char cVar1;
   int iVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   bool bVar6;
   long local_40[2];
   long local_30[2];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar3 = (long*)OS::get_singleton();
   lVar4 = ( **(code**)( *plVar3 + 0x1d0 ) )(plVar3);
   if (lVar4 != 0) {
      TranslationServer::get_loaded_locales();
      local_40[0] = 0;
      if (*(long*)( this + 0x240 ) == 0) {
         if (( local_30[0] == 0 ) || ( lVar4 = lVar4 == 0 )) goto LAB_00100cf8;
         LAB_00100c47:lVar5 = 0;
         while (lVar5 < lVar4) {
            cVar1 = String::operator ==((String*)( local_30[0] + lVar5 * 8 ), (String*)local_40);
            if (cVar1 != '\0') {
               if (local_40[0] != 0) goto LAB_00100c89;
               CowData<String>::_unref((CowData<String>*)local_30);
               goto LAB_00100ca3;
            }

            lVar5 = lVar5 + 1;
            if (local_30[0] == 0) break;
            lVar4 = *(long*)( local_30[0] + -8 );
         }
;
         cVar1 = '\0';
         if (local_40[0] != 0) {
            LAB_00100c89:LOCK();
            plVar3 = (long*)( local_40[0] + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               LAB_00100d40:lVar4 = local_40[0];
               local_40[0] = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

            CowData<String>::_unref((CowData<String>*)local_30);
            if (cVar1 != '\0') {
               LAB_00100ca3:plVar3 = (long*)OS::get_singleton();
               iVar2 = ( **(code**)( *plVar3 + 0x1d0 ) )(plVar3);
               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  Object::notification(iVar2, true);
                  return;
               }

               goto LAB_00100d7d;
            }

            goto LAB_00100d02;
         }

      }
 else {
         plVar3 = (long*)( *(long*)( this + 0x240 ) + -0x10 );
         do {
            lVar4 = *plVar3;
            if (lVar4 == 0) goto LAB_00100c2c;
            LOCK();
            lVar5 = *plVar3;
            bVar6 = lVar4 == lVar5;
            if (bVar6) {
               *plVar3 = lVar4 + 1;
               lVar5 = lVar4;
            }

            UNLOCK();
         }
 while ( !bVar6 );
         if (lVar5 != -1) {
            local_40[0] = *(long*)( this + 0x240 );
         }

         LAB_00100c2c:if (( local_30[0] != 0 ) && ( lVar4 = lVar4 != 0 )) goto LAB_00100c47;
         if (local_40[0] != 0) {
            LOCK();
            plVar3 = (long*)( local_40[0] + -0x10 );
            *plVar3 = *plVar3 + -1;
            cVar1 = *plVar3 != 0;
            UNLOCK();
            if ((bool)cVar1) goto LAB_00100cf8;
            goto LAB_00100d40;
         }

      }

      LAB_00100cf8:CowData<String>::_unref((CowData<String>*)local_30);
   }

   LAB_00100d02:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00100d7d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Translation::set_locale(String const&) */void Translation::set_locale(String *param_1) {
   Variant *pVVar1;
   long lVar2;
   undefined8 uVar3;
   Callable *pCVar4;
   Variant *pVVar5;
   CallableCustom *this;
   long in_FS_OFFSET;
   Variant *local_58[2];
   undefined8 local_48;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   TranslationServer::standardize_locale((String*)local_58, SUB81(TranslationServer::singleton, 0));
   pVVar5 = local_58[0];
   pVVar1 = *(Variant**)( param_1 + 0x240 );
   if (pVVar1 == local_58[0]) {
      if (pVVar1 != (Variant*)0x0) {
         LOCK();
         pVVar1 = pVVar1 + -0x10;
         *(long*)pVVar1 = *(long*)pVVar1 + -1;
         UNLOCK();
         if (*(long*)pVVar1 == 0) {
            local_58[0] = (Variant*)0x0;
            Memory::free_static(pVVar5 + -0x10, false);
         }

      }

   }
 else {
      if (pVVar1 != (Variant*)0x0) {
         LOCK();
         pVVar1 = pVVar1 + -0x10;
         *(long*)pVVar1 = *(long*)pVVar1 + -1;
         UNLOCK();
         if (*(long*)pVVar1 == 0) {
            lVar2 = *(long*)( param_1 + 0x240 );
            *(undefined8*)( param_1 + 0x240 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(Variant**)( param_1 + 0x240 ) = local_58[0];
   }

   if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
      Thread::caller_id();
   }

   pCVar4 = MessageQueue::main_singleton;
   if (*(long*)( in_FS_OFFSET + lRam0000000000100e29 ) == 1) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _notify_translation_changed_if_applies((Translation*)param_1);
         return;
      }

   }
 else {
      this(CallableCustom * operator_new(0x48, ""));
      CallableCustom::CallableCustom(this);
      *(undefined**)( this + 0x20 ) = &_LC12;
      *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
      *(undefined***)this = &PTR_hash_00111498;
      *(undefined8*)( this + 0x40 ) = 0;
      uVar3 = *(undefined8*)( param_1 + 0x60 );
      *(undefined8*)( this + 0x10 ) = 0;
      *(undefined8*)( this + 0x30 ) = uVar3;
      *(code**)( this + 0x38 ) = _notify_translation_changed_if_applies;
      *(String**)( this + 0x28 ) = param_1;
      CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
      *(char**)( this + 0x20 ) = "Translation::_notify_translation_changed_if_applies";
      Callable::Callable((Callable*)local_58, this);
      local_40 = (undefined1[16])0x0;
      local_48 = 0;
      CallQueue::push_callablep(pCVar4, local_58, 0, false);
      if (Variant::needs_deinit[(int)local_48] != '\0') {
         Variant::_clear_internal();
      }

      Callable::~Callable((Callable*)local_58);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* Translation::_get_message_list() const */void Translation::_get_message_list(void) {
   long *plVar1;
   CowData<char32_t> *this;
   uint uVar2;
   char *__s;
   long lVar3;
   long lVar4;
   long lVar5;
   long *plVar6;
   long lVar7;
   long in_RSI;
   long in_RDI;
   long in_FS_OFFSET;
   bool bVar8;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   uVar2 = *(uint*)( in_RSI + 0x274 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   CowData<String>::resize<false>((CowData<String>*)( in_RDI + 8 ), (ulong)uVar2);
   plVar6 = *(long**)( in_RSI + 0x260 );
   if (plVar6 != (long*)0x0) {
      lVar7 = 0;
      do {
         lVar4 = plVar6[2];
         if (lVar4 == 0) {
            local_60 = 0;
            lVar4 = *(long*)( in_RDI + 8 );
            if (lVar4 != 0) goto LAB_001011b3;
            LAB_00101244:lVar4 = 0;
            LAB_00101247:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar4, "p_index", "size()", "", false, false);
         }
 else {
            __s = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (__s == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar3 = *plVar1;
                     if (lVar3 == 0) goto LAB_001011a5;
                     LOCK();
                     lVar5 = *plVar1;
                     bVar8 = lVar3 == lVar5;
                     if (bVar8) {
                        *plVar1 = lVar3 + 1;
                        lVar5 = lVar3;
                     }

                     UNLOCK();
                  }
 while ( !bVar8 );
                  if (lVar5 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(__s);
               local_58 = __s;
               String::parse_latin1((StrRange*)&local_60);
            }

            LAB_001011a5:lVar4 = *(long*)( in_RDI + 8 );
            if (lVar4 == 0) goto LAB_00101244;
            LAB_001011b3:lVar4 = *(long*)( lVar4 + -8 );
            if (lVar4 <= lVar7) goto LAB_00101247;
            CowData<String>::_copy_on_write((CowData<String>*)( in_RDI + 8 ));
            this(CowData<char32_t> * )(*(long*)( in_RDI + 8 ) + lVar7 * 8);
            if (*(long*)this != local_60) {
               CowData<char32_t>::_ref(this, (CowData*)&local_60);
            }

         }

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

         plVar6 = (long*)*plVar6;
         lVar7 = lVar7 + 1;
      }
 while ( plVar6 != (long*)0x0 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Translation::get_translated_message_list() const */void Translation::get_translated_message_list(void) {
   long *plVar1;
   CowData<char32_t> *this;
   uint uVar2;
   char *__s;
   long lVar3;
   long lVar4;
   long lVar5;
   long *plVar6;
   long lVar7;
   long in_RSI;
   long in_RDI;
   long in_FS_OFFSET;
   bool bVar8;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   uVar2 = *(uint*)( in_RSI + 0x274 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   CowData<String>::resize<false>((CowData<String>*)( in_RDI + 8 ), (ulong)uVar2);
   plVar6 = *(long**)( in_RSI + 0x260 );
   if (plVar6 != (long*)0x0) {
      lVar7 = 0;
      do {
         lVar4 = plVar6[3];
         if (lVar4 == 0) {
            local_60 = 0;
            lVar4 = *(long*)( in_RDI + 8 );
            if (lVar4 != 0) goto LAB_001013a3;
            LAB_00101434:lVar4 = 0;
            LAB_00101437:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar4, "p_index", "size()", "", false, false);
         }
 else {
            __s = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (__s == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar3 = *plVar1;
                     if (lVar3 == 0) goto LAB_00101395;
                     LOCK();
                     lVar5 = *plVar1;
                     bVar8 = lVar3 == lVar5;
                     if (bVar8) {
                        *plVar1 = lVar3 + 1;
                        lVar5 = lVar3;
                     }

                     UNLOCK();
                  }
 while ( !bVar8 );
                  if (lVar5 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(__s);
               local_58 = __s;
               String::parse_latin1((StrRange*)&local_60);
            }

            LAB_00101395:lVar4 = *(long*)( in_RDI + 8 );
            if (lVar4 == 0) goto LAB_00101434;
            LAB_001013a3:lVar4 = *(long*)( lVar4 + -8 );
            if (lVar4 <= lVar7) goto LAB_00101437;
            CowData<String>::_copy_on_write((CowData<String>*)( in_RDI + 8 ));
            this(CowData<char32_t> * )(*(long*)( in_RDI + 8 ) + lVar7 * 8);
            if (*(long*)this != local_60) {
               CowData<char32_t>::_ref(this, (CowData*)&local_60);
            }

         }

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

         plVar6 = (long*)*plVar6;
         lVar7 = lVar7 + 1;
      }
 while ( plVar6 != (long*)0x0 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
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
/* Translation::_bind_methods() */void Translation::_bind_methods(void) {
   char cVar1;
   long lVar2;
   code *pcVar3;
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
   undefined *puVar17;
   undefined *puVar18;
   undefined *puVar19;
   undefined *puVar20;
   undefined8 uVar21;
   int *piVar22;
   MethodBind *pMVar23;
   uint uVar24;
   long lVar25;
   int *piVar26;
   long *plVar27;
   long in_FS_OFFSET;
   undefined8 local_210;
   long local_208;
   long local_200;
   long local_1f8;
   long local_1f0;
   long local_1e8;
   undefined8 local_1e0;
   char *local_1d8;
   undefined1 local_1d0[16];
   int local_1c0;
   long local_1b8;
   undefined4 local_1b0;
   char *local_1a8;
   undefined8 local_1a0;
   undefined1 local_198[16];
   int local_188[2];
   long local_180;
   undefined8 local_178;
   undefined8 local_170;
   undefined8 local_168[2];
   int *local_158;
   ulong local_150;
   Vector<int> local_148[8];
   long local_140;
   char *local_138;
   undefined8 local_130;
   undefined *local_128;
   undefined *puStack_120;
   undefined8 local_118;
   undefined *local_108;
   undefined *puStack_100;
   undefined8 local_f8;
   Variant *local_e8;
   char *pcStack_e0;
   char *local_d8;
   undefined8 local_d0;
   Variant *local_c8;
   char *pcStack_c0;
   char *local_b8;
   undefined8 local_b0;
   Variant *local_a8;
   undefined *puStack_a0;
   undefined *local_98;
   undefined *puStack_90;
   undefined8 local_88;
   Variant **local_78;
   undefined1 auStack_70[16];
   undefined **ppuStack_60;
   undefined1 local_58[16];
   long local_40;
   puVar20 = PTR__LC52_00111b58;
   puVar19 = PTR__LC51_00111b50;
   puVar18 = PTR__LC49_00111b48;
   puVar17 = PTR__LC50_00111b40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_130 = 0;
   local_138 = "locale";
   local_78 = (Variant**)&local_138;
   uVar24 = (uint)(Variant*)&local_78;
   D_METHODP((char*)&local_1a8, (char***)"set_locale", uVar24);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar23 = create_method_bind<Translation,String_const&>(set_locale);
   ClassDB::bind_methodfi(1, pMVar23, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar21 = local_198._0_8_;
   if ((long*)local_198._0_8_ != (long*)0x0) {
      LOCK();
      plVar27 = (long*)( local_198._0_8_ + -0x10 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         if ((long*)local_198._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_198._0_8_ + -8 );
         lVar25 = 0;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_198._8_8_;
         local_198 = auVar4 << 0x40;
         plVar27 = (long*)uVar21;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar27 != 0 )) {
                  StringName::unref();
               }

               lVar25 = lVar25 + 1;
               plVar27 = plVar27 + 1;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static((long*)( uVar21 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_1a8, (char***)"get_locale", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar23 = create_method_bind<Translation,String>(get_locale);
   ClassDB::bind_methodfi(1, pMVar23, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar21 = local_198._0_8_;
   if ((long*)local_198._0_8_ != (long*)0x0) {
      LOCK();
      plVar27 = (long*)( local_198._0_8_ + -0x10 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         if ((long*)local_198._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_198._0_8_ + -8 );
         lVar25 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_198._8_8_;
         local_198 = auVar5 << 0x40;
         plVar27 = (long*)uVar21;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar27 != 0 )) {
                  StringName::unref();
               }

               lVar25 = lVar25 + 1;
               plVar27 = plVar27 + 1;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static((long*)( uVar21 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_1d8 = (char*)0x0;
   local_d8 = "context";
   local_e8 = (Variant*)puVar17;
   pcStack_e0 = "xlated_message";
   auStack_70._8_8_ = &local_d8;
   auStack_70._0_8_ = &pcStack_e0;
   local_d0 = 0;
   local_78 = &local_e8;
   D_METHODP((char*)&local_1a8, (char***)"add_message", uVar24);
   Variant::Variant((Variant*)&local_78, (StringName*)&local_1d8);
   local_58 = (undefined1[16])0x0;
   ppuStack_60 = (undefined**)0x0;
   local_e8 = (Variant*)&local_78;
   pMVar23 = create_method_bind<Translation,StringName_const&,StringName_const&,StringName_const&>((_func_void_StringName_ptr_StringName_ptr_StringName_ptr*)0x1e1);
   ClassDB::bind_methodfi(1, pMVar23, false, (MethodDefinition*)&local_1a8, &local_e8, 1);
   if (Variant::needs_deinit[(int)ppuStack_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar21 = local_198._0_8_;
   if ((long*)local_198._0_8_ != (long*)0x0) {
      LOCK();
      plVar27 = (long*)( local_198._0_8_ + -0x10 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         if ((long*)local_198._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_198._0_8_ + -8 );
         lVar25 = 0;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = local_198._8_8_;
         local_198 = auVar6 << 0x40;
         plVar27 = (long*)uVar21;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar27 != 0 )) {
                  StringName::unref();
               }

               lVar25 = lVar25 + 1;
               plVar27 = plVar27 + 1;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static((long*)( uVar21 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( ( ( local_1a8 == (char*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1d8 != (char*)0x0 ) ) )) {
      StringName::unref();
   }

   local_1d8 = (char*)0x0;
   local_b8 = "context";
   local_c8 = (Variant*)puVar17;
   pcStack_c0 = "xlated_messages";
   auStack_70._8_8_ = &local_b8;
   auStack_70._0_8_ = &pcStack_c0;
   local_b0 = 0;
   local_78 = &local_c8;
   D_METHODP((char*)&local_1a8, (char***)"add_plural_message", uVar24);
   Variant::Variant((Variant*)&local_78, (StringName*)&local_1d8);
   local_58 = (undefined1[16])0x0;
   ppuStack_60 = (undefined**)0x0;
   local_c8 = (Variant*)&local_78;
   pMVar23 = create_method_bind<Translation,StringName_const&,Vector<String>const&,StringName_const&>((_func_void_StringName_ptr_Vector_ptr_StringName_ptr*)0x1e9);
   ClassDB::bind_methodfi(1, pMVar23, false, (MethodDefinition*)&local_1a8, &local_c8, 1);
   if (Variant::needs_deinit[(int)ppuStack_60] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   uVar21 = local_198._0_8_;
   if ((long*)local_198._0_8_ != (long*)0x0) {
      LOCK();
      plVar27 = (long*)( local_198._0_8_ + -0x10 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         if ((long*)local_198._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_198._0_8_ + -8 );
         lVar25 = 0;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = local_198._8_8_;
         local_198 = auVar7 << 0x40;
         plVar27 = (long*)uVar21;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar27 != 0 )) {
                  StringName::unref();
               }

               lVar25 = lVar25 + 1;
               plVar27 = plVar27 + 1;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static((long*)( uVar21 + -0x10 ), false);
      }

   }

   if (StringName::configured != '\0') {
      if (local_1a8 != (char*)0x0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101e93;
      }

      if (local_1d8 != (char*)0x0) {
         StringName::unref();
      }

   }

   LAB_00101e93:local_1d8 = (char*)0x0;
   local_128 = puVar17;
   puStack_120 = puVar18;
   auStack_70._0_8_ = &puStack_120;
   local_118 = 0;
   local_78 = (Variant**)&local_128;
   D_METHODP((char*)&local_1a8, (char***)"get_message", uVar24);
   Variant::Variant((Variant*)&local_78, (StringName*)&local_1d8);
   local_58 = (undefined1[16])0x0;
   ppuStack_60 = (undefined**)0x0;
   local_c8 = (Variant*)&local_78;
   pMVar23 = create_method_bind<Translation,StringName,StringName_const&,StringName_const&>((_func_StringName_StringName_ptr_StringName_ptr*)0x1f1);
   ClassDB::bind_methodfi(1, pMVar23, false, (MethodDefinition*)&local_1a8, &local_c8, 1);
   if (Variant::needs_deinit[(int)ppuStack_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar21 = local_198._0_8_;
   if ((long*)local_198._0_8_ != (long*)0x0) {
      LOCK();
      plVar27 = (long*)( local_198._0_8_ + -0x10 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         if ((long*)local_198._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_198._0_8_ + -8 );
         lVar25 = 0;
         auVar8._8_8_ = 0;
         auVar8._0_8_ = local_198._8_8_;
         local_198 = auVar8 << 0x40;
         plVar27 = (long*)uVar21;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar27 != 0 )) {
                  StringName::unref();
               }

               lVar25 = lVar25 + 1;
               plVar27 = plVar27 + 1;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static((long*)( uVar21 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( ( ( local_1a8 == (char*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1d8 != (char*)0x0 ) ) )) {
      StringName::unref();
   }

   local_a8 = (Variant*)puVar17;
   puStack_a0 = puVar19;
   local_98 = puVar20;
   puStack_90 = puVar18;
   auStack_70._8_8_ = &local_98;
   auStack_70._0_8_ = &puStack_a0;
   local_1d8 = (char*)0x0;
   local_88 = 0;
   local_78 = &local_a8;
   ppuStack_60 = &puStack_90;
   D_METHODP((char*)&local_1a8, (char***)"get_plural_message", uVar24);
   Variant::Variant((Variant*)&local_78, (StringName*)&local_1d8);
   local_58 = (undefined1[16])0x0;
   ppuStack_60 = (undefined**)0x0;
   local_a8 = (Variant*)&local_78;
   pMVar23 = create_method_bind<Translation,StringName,StringName_const&,StringName_const&,int,StringName_const&>((_func_StringName_StringName_ptr_StringName_ptr_int_StringName_ptr*)0x1f9);
   ClassDB::bind_methodfi(1, pMVar23, false, (MethodDefinition*)&local_1a8, &local_a8, 1);
   if (Variant::needs_deinit[(int)ppuStack_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar21 = local_198._0_8_;
   if ((long*)local_198._0_8_ != (long*)0x0) {
      LOCK();
      plVar27 = (long*)( local_198._0_8_ + -0x10 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         if ((long*)local_198._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_198._0_8_ + -8 );
         lVar25 = 0;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = local_198._8_8_;
         local_198 = auVar9 << 0x40;
         plVar27 = (long*)uVar21;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar27 != 0 )) {
                  StringName::unref();
               }

               lVar25 = lVar25 + 1;
               plVar27 = plVar27 + 1;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static((long*)( uVar21 + -0x10 ), false);
      }

   }

   if (StringName::configured != '\0') {
      if (local_1a8 != (char*)0x0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001021e4;
      }

      if (local_1d8 != (char*)0x0) {
         StringName::unref();
      }

   }

   LAB_001021e4:local_1d8 = (char*)0x0;
   local_108 = puVar17;
   puStack_100 = puVar18;
   auStack_70._0_8_ = &puStack_100;
   local_f8 = 0;
   local_78 = (Variant**)&local_108;
   D_METHODP((char*)&local_1a8, (char***)"erase_message", uVar24);
   Variant::Variant((Variant*)&local_78, (StringName*)&local_1d8);
   local_58 = (undefined1[16])0x0;
   ppuStack_60 = (undefined**)0x0;
   local_a8 = (Variant*)&local_78;
   pMVar23 = create_method_bind<Translation,StringName_const&,StringName_const&>((_func_void_StringName_ptr_StringName_ptr*)0x201);
   ClassDB::bind_methodfi(1, pMVar23, false, (MethodDefinition*)&local_1a8, &local_a8, 1);
   if (Variant::needs_deinit[(int)ppuStack_60] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   uVar21 = local_198._0_8_;
   if ((long*)local_198._0_8_ != (long*)0x0) {
      LOCK();
      plVar27 = (long*)( local_198._0_8_ + -0x10 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         if ((long*)local_198._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_198._0_8_ + -8 );
         lVar25 = 0;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = local_198._8_8_;
         local_198 = auVar10 << 0x40;
         plVar27 = (long*)uVar21;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar27 != 0 )) {
                  StringName::unref();
               }

               lVar25 = lVar25 + 1;
               plVar27 = plVar27 + 1;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static((long*)( uVar21 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( ( ( local_1a8 == (char*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1d8 != (char*)0x0 ) ) )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_1a8, (char***)"get_message_list", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar23 = create_method_bind<Translation,Vector<String>>((_func_Vector*)0x1c9);
   ClassDB::bind_methodfi(1, pMVar23, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar21 = local_198._0_8_;
   if ((long*)local_198._0_8_ != (long*)0x0) {
      LOCK();
      plVar27 = (long*)( local_198._0_8_ + -0x10 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         if ((long*)local_198._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_198._0_8_ + -8 );
         lVar25 = 0;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = local_198._8_8_;
         local_198 = auVar11 << 0x40;
         plVar27 = (long*)uVar21;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar27 != 0 )) {
                  StringName::unref();
               }

               lVar25 = lVar25 + 1;
               plVar27 = plVar27 + 1;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static((long*)( uVar21 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_1a8, (char***)"get_translated_message_list", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar23 = create_method_bind<Translation,Vector<String>>((_func_Vector*)0x219);
   ClassDB::bind_methodfi(1, pMVar23, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar21 = local_198._0_8_;
   if ((long*)local_198._0_8_ != (long*)0x0) {
      LOCK();
      plVar27 = (long*)( local_198._0_8_ + -0x10 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         if ((long*)local_198._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_198._0_8_ + -8 );
         lVar25 = 0;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = local_198._8_8_;
         local_198 = auVar12 << 0x40;
         plVar27 = (long*)uVar21;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar27 != 0 )) {
                  StringName::unref();
               }

               lVar25 = lVar25 + 1;
               plVar27 = plVar27 + 1;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static((long*)( uVar21 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_1a8, (char***)"get_message_count", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar23 = create_method_bind<Translation,int>((_func_int*)0x211);
   ClassDB::bind_methodfi(1, pMVar23, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar21 = local_198._0_8_;
   if ((long*)local_198._0_8_ != (long*)0x0) {
      LOCK();
      plVar27 = (long*)( local_198._0_8_ + -0x10 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         if ((long*)local_198._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_198._0_8_ + -8 );
         lVar25 = 0;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = local_198._8_8_;
         local_198 = auVar13 << 0x40;
         plVar27 = (long*)uVar21;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar27 != 0 )) {
                  StringName::unref();
               }

               lVar25 = lVar25 + 1;
               plVar27 = plVar27 + 1;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static((long*)( uVar21 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_a8 = (Variant*)0x10560a;
   puStack_a0 = (undefined*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_1a8, (char***)"_set_messages", uVar24);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar23 = create_method_bind<Translation,Dictionary_const&>((_func_void_Dictionary_ptr*)0x1d9);
   ClassDB::bind_methodfi(1, pMVar23, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar21 = local_198._0_8_;
   if ((long*)local_198._0_8_ != (long*)0x0) {
      LOCK();
      plVar27 = (long*)( local_198._0_8_ + -0x10 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         if ((long*)local_198._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_198._0_8_ + -8 );
         lVar25 = 0;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = local_198._8_8_;
         local_198 = auVar14 << 0x40;
         plVar27 = (long*)uVar21;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar27 != 0 )) {
                  StringName::unref();
               }

               lVar25 = lVar25 + 1;
               plVar27 = plVar27 + 1;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static((long*)( uVar21 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_1a8, (char***)"_get_messages", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar23 = create_method_bind<Translation,Dictionary>((_func_Dictionary*)0x1d1);
   ClassDB::bind_methodfi(1, pMVar23, false, (MethodDefinition*)&local_1a8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar21 = local_198._0_8_;
   if ((long*)local_198._0_8_ != (long*)0x0) {
      LOCK();
      plVar27 = (long*)( local_198._0_8_ + -0x10 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         if ((long*)local_198._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_198._0_8_ + -8 );
         lVar25 = 0;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = local_198._8_8_;
         local_198 = auVar15 << 0x40;
         plVar27 = (long*)uVar21;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar27 != 0 )) {
                  StringName::unref();
               }

               lVar25 = lVar25 + 1;
               plVar27 = plVar27 + 1;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static((long*)( uVar21 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_1e0 = 0;
   local_1d8 = (char*)0x0;
   local_1a8 = "src_message";
   local_1a0 = 0xb;
   String::parse_latin1((StrRange*)&local_1d8);
   local_1a8 = (char*)0x0;
   if (local_1d8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a8, (CowData*)&local_1d8);
   }

   Vector<String>::push_back((Vector<String>*)&local_1e8, (MethodDefinition*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   local_200 = 0;
   local_1a8 = "src_plural_message";
   local_1a0 = 0x12;
   String::parse_latin1((StrRange*)&local_200);
   local_1a8 = (char*)0x0;
   if (local_200 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a8, (CowData*)&local_200);
   }

   Vector<String>::push_back((Vector<String>*)&local_1e8, (MethodDefinition*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   local_1f0 = 0;
   local_1a8 = "n";
   local_1a0 = 1;
   String::parse_latin1((StrRange*)&local_1f0);
   local_1a8 = (char*)0x0;
   if (local_1f0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a8, (CowData*)&local_1f0);
   }

   Vector<String>::push_back((Vector<String>*)&local_1e8, (MethodDefinition*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   local_1f8 = 0;
   local_1a8 = "context";
   local_1a0 = 7;
   String::parse_latin1((StrRange*)&local_1f8);
   local_1a8 = (char*)0x0;
   if (local_1f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a8, (CowData*)&local_1f8);
   }

   Vector<String>::push_back((Vector<String>*)&local_1e8, (MethodDefinition*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
   local_198._0_8_ = 0;
   local_198._8_8_ = 0;
   local_1d8 = "_get_plural_message";
   local_1a8 = (char*)0x0;
   local_1a0 = 0;
   local_188[0] = 0;
   local_188[1] = 0;
   local_180 = 0;
   local_178 = 6;
   local_170 = 1;
   local_168[0] = 0;
   local_158 = (int*)0x0;
   local_150 = 0;
   local_140 = 0;
   local_1d0._0_8_ = 0x13;
   String::parse_latin1((StrRange*)&local_1a8);
   local_170 = CONCAT44(local_170._4_4_, 0xc);
   GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)&local_1d8);
   local_1a0 = CONCAT44(local_1a0._4_4_, local_1d8._0_4_);
   if (local_198._0_8_ != local_1d0._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_198);
      local_198._0_8_ = local_1d0._0_8_;
      local_1d0._0_8_ = 0;
   }

   if (local_198._8_8_ != local_1d0._8_8_) {
      StringName::unref();
      local_198._8_8_ = local_1d0._8_8_;
      local_1d0._8_8_ = 0;
   }

   local_188[0] = local_1c0;
   if (local_180 != local_1b8) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
      local_180 = local_1b8;
      local_1b8 = 0;
   }

   local_178 = CONCAT44(local_178._4_4_, local_1b0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1d8);
   local_150 = local_150 & 0xffffffff00000000;
   GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)&local_1d8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_168, (PropertyInfo*)&local_1d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1d8);
   Vector<int>::push_back(local_148, 0);
   GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)&local_1d8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_168, (PropertyInfo*)&local_1d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1d8);
   Vector<int>::push_back(local_148, 0);
   local_208 = 0;
   local_200 = 0;
   local_1d8 = "";
   auVar16._8_8_ = 0;
   auVar16._0_8_ = local_1d0._8_8_;
   local_1d0 = auVar16 << 0x40;
   String::parse_latin1((StrRange*)&local_200);
   local_1f8 = 0;
   local_1d8 = (char*)CONCAT44(local_1d8._4_4_, 2);
   local_1c0 = 0;
   local_1b8 = 0;
   local_1d0 = (undefined1[16])0x0;
   if (local_200 == 0) {
      LAB_00102e13:local_1b0 = 6;
      StringName::operator =((StringName*)( local_1d0 + 8 ), (StringName*)&local_208);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1b8, (CowData*)&local_200);
      local_1b0 = 6;
      if (local_1c0 != 0x11) goto LAB_00102e13;
      StringName::StringName((StringName*)&local_1f0, (String*)&local_1b8, false);
      if (local_1d0._8_8_ == local_1f0) {
         if (( StringName::configured != '\0' ) && ( local_1f0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_1d0._8_8_ = local_1f0;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
   if (( StringName::configured != '\0' ) && ( local_208 != 0 )) {
      StringName::unref();
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_168, (PropertyInfo*)&local_1d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1d8);
   Vector<int>::push_back(local_148, 3);
   GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)&local_1d8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_168, (PropertyInfo*)&local_1d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1d8);
   Vector<int>::push_back(local_148, 0);
   local_1d8 = "Translation";
   local_1f0 = 0;
   local_1d0._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_1f0);
   StringName::StringName((StringName*)&local_1d8, (String*)&local_1f0, false);
   ClassDB::add_virtual_method((StringName*)&local_1d8, (MethodInfo*)&local_1a8, true, (Vector*)&local_1e8, false);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
   lVar2 = local_140;
   if (local_140 != 0) {
      LOCK();
      plVar27 = (long*)( local_140 + -0x10 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         local_140 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   piVar22 = local_158;
   if (local_158 != (int*)0x0) {
      LOCK();
      plVar27 = (long*)( local_158 + -4 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         if (local_158 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_158 + -2 );
         lVar25 = 0;
         local_158 = (int*)0x0;
         piVar26 = piVar22;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar26] != '\0') {
                  Variant::_clear_internal();
               }

               lVar25 = lVar25 + 1;
               piVar26 = piVar26 + 6;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static(piVar22 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_168);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   CowData<String>::_unref((CowData<String>*)&local_1e0);
   local_1e0 = 0;
   local_1d8 = (char*)0x0;
   local_1a8 = "src_message";
   local_1a0 = 0xb;
   String::parse_latin1((StrRange*)&local_1d8);
   local_1a8 = (char*)0x0;
   if (local_1d8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a8, (CowData*)&local_1d8);
   }

   Vector<String>::push_back((Vector<String>*)&local_1e8, (MethodDefinition*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   local_1f0 = 0;
   local_1a8 = "context";
   local_1a0 = 7;
   String::parse_latin1((StrRange*)&local_1f0);
   local_1a8 = (char*)0x0;
   if (local_1f0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a8, (CowData*)&local_1f0);
   }

   Vector<String>::push_back((Vector<String>*)&local_1e8, (MethodDefinition*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
   local_198._0_8_ = 0;
   local_198._8_8_ = 0;
   local_1d8 = "_get_message";
   local_1a8 = (char*)0x0;
   local_1a0 = 0;
   local_188[0] = 0;
   local_188[1] = 0;
   local_180 = 0;
   local_178 = 6;
   local_170 = 1;
   local_168[0] = 0;
   local_158 = (int*)0x0;
   local_150 = 0;
   local_140 = 0;
   local_1d0._0_8_ = 0xc;
   String::parse_latin1((StrRange*)&local_1a8);
   local_170 = CONCAT44(local_170._4_4_, 0xc);
   GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)&local_1d8);
   local_1a0 = CONCAT44(local_1a0._4_4_, local_1d8._0_4_);
   if (local_198._0_8_ != local_1d0._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_198);
      local_198._0_8_ = local_1d0._0_8_;
      local_1d0._0_8_ = 0;
   }

   if (local_198._8_8_ != local_1d0._8_8_) {
      StringName::unref();
      local_198._8_8_ = local_1d0._8_8_;
      local_1d0._8_8_ = 0;
   }

   local_188[0] = local_1c0;
   if (local_180 != local_1b8) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
      local_180 = local_1b8;
      local_1b8 = 0;
   }

   local_178 = CONCAT44(local_178._4_4_, local_1b0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1d8);
   local_150 = local_150 & 0xffffffff00000000;
   GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)&local_1d8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_168, (PropertyInfo*)&local_1d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1d8);
   Vector<int>::push_back(local_148, 0);
   GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)&local_1d8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_168, (PropertyInfo*)&local_1d8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1d8);
   Vector<int>::push_back(local_148, 0);
   local_1d8 = "Translation";
   local_1f0 = 0;
   local_1d0._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_1f0);
   StringName::StringName((StringName*)&local_1d8, (String*)&local_1f0, false);
   ClassDB::add_virtual_method((StringName*)&local_1d8, (MethodInfo*)&local_1a8, true, (Vector*)&local_1e8, false);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
   lVar2 = local_140;
   if (local_140 != 0) {
      LOCK();
      plVar27 = (long*)( local_140 + -0x10 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         local_140 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   piVar22 = local_158;
   if (local_158 != (int*)0x0) {
      LOCK();
      plVar27 = (long*)( local_158 + -4 );
      *plVar27 = *plVar27 + -1;
      UNLOCK();
      if (*plVar27 == 0) {
         if (local_158 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_158 + -2 );
         lVar25 = 0;
         local_158 = (int*)0x0;
         piVar26 = piVar22;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar26] != '\0') {
                  Variant::_clear_internal();
               }

               lVar25 = lVar25 + 1;
               piVar26 = piVar26 + 6;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static(piVar22 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_168);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   CowData<String>::_unref((CowData<String>*)&local_1e0);
   _scs_create((char*)&local_1e8, true);
   _scs_create((char*)&local_1f0, true);
   local_1a8 = "";
   local_1f8 = 0;
   local_200 = 0;
   local_1a0 = 0;
   String::parse_latin1((StrRange*)&local_200);
   local_208 = 0;
   local_1a8 = "messages";
   local_1a0 = 8;
   String::parse_latin1((StrRange*)&local_208);
   local_1a8 = (char*)CONCAT44(local_1a8._4_4_, 0x1b);
   local_1a0 = 0;
   if (local_208 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a0, (CowData*)&local_208);
   }

   local_198._0_12_ = ZEXT812(0);
   local_188[0] = 0;
   local_188[1] = 0;
   if (local_200 == 0) {
      local_180 = CONCAT44(local_180._4_4_, 10);
      LAB_001035d3:StringName::operator =((StringName*)local_198, (StringName*)&local_1f8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_188, (CowData*)&local_200);
      local_180 = CONCAT44(local_180._4_4_, 10);
      if (local_198._8_4_ != 0x11) goto LAB_001035d3;
      StringName::StringName((StringName*)&local_1d8, (String*)local_188, false);
      if ((char*)local_198._0_8_ == local_1d8) {
         if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_198._0_8_ = local_1d8;
      }

   }

   local_210 = 0;
   local_1d8 = "Translation";
   local_1d0._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_210);
   StringName::StringName((StringName*)&local_1d8, (String*)&local_210, false);
   ClassDB::add_property((StringName*)&local_1d8, (PropertyInfo*)&local_1a8, (StringName*)&local_1f0, (StringName*)&local_1e8, -1);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_210);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_1f8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1e8, true);
   _scs_create((char*)&local_1f0, true);
   local_1a8 = "";
   local_1f8 = 0;
   local_200 = 0;
   local_1a0 = 0;
   String::parse_latin1((StrRange*)&local_200);
   local_208 = 0;
   local_1a8 = "locale";
   local_1a0 = 6;
   String::parse_latin1((StrRange*)&local_208);
   local_1a8 = (char*)CONCAT44(local_1a8._4_4_, 4);
   local_1a0 = 0;
   if (local_208 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a0, (CowData*)&local_208);
   }

   local_198._0_12_ = ZEXT812(0);
   local_188[0] = 0;
   local_188[1] = 0;
   if (local_200 == 0) {
      local_180 = CONCAT44(local_180._4_4_, 6);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_188, (CowData*)&local_200);
      local_180 = CONCAT44(local_180._4_4_, 6);
      if (local_198._8_4_ == 0x11) {
         StringName::StringName((StringName*)&local_1d8, (String*)local_188, false);
         if ((char*)local_198._0_8_ == local_1d8) {
            if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_198._0_8_ = local_1d8;
         }

         goto LAB_0010385d;
      }

   }

   StringName::operator =((StringName*)local_198, (StringName*)&local_1f8);
   LAB_0010385d:local_210 = 0;
   local_1d8 = "Translation";
   local_1d0._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_210);
   StringName::StringName((StringName*)&local_1d8, (String*)&local_210, false);
   ClassDB::add_property((StringName*)&local_1d8, (PropertyInfo*)&local_1a8, (StringName*)&local_1f0, (StringName*)&local_1e8, -1);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_210);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
   if (( ( StringName::configured != '\0' ) && ( ( local_1f8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_1f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1e8 != 0 ) ) )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x001040d6) *//* WARNING: Removing unreachable block (ram,0x0010434e) *//* Translation::get_plural_message(StringName const&, StringName const&, int, StringName const&)
   const */StringName *Translation::get_plural_message(StringName *param_1, StringName *param_2, int param_3, StringName *param_4) {
   Variant *pVVar1;
   bool bVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   undefined4 in_register_00000014;
   int in_R8D;
   StringName *in_R9;
   Variant *pVVar8;
   long in_FS_OFFSET;
   long local_1c8;
   long local_1c0;
   long local_1b8;
   long local_1b0;
   long local_1a8;
   long local_1a0;
   long local_198;
   long local_190;
   long local_188;
   long local_180[5];
   int local_158;
   undefined4 uStack_154;
   undefined4 uStack_150;
   undefined4 uStack_14c;
   undefined1 local_148[16];
   undefined8 local_138;
   undefined8 local_130;
   undefined8 local_128;
   undefined8 local_120;
   undefined8 local_118[2];
   undefined8 local_108;
   ulong local_100;
   Vector<int> local_f8[8];
   undefined8 local_f0;
   int local_e8[8];
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   Variant *pVStack_b0;
   StringName *local_a8;
   StringName *pSStack_a0;
   long *local_98;
   StringName *apSStack_90[3];
   Variant local_78[24];
   Variant local_60[24];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1c8 = 0;
   StringName::StringName((StringName*)&local_1b0, in_R9);
   StringName::StringName((StringName*)&local_1b8, param_4);
   StringName::StringName((StringName*)&local_1c0, (StringName*)CONCAT44(in_register_00000014, param_3));
   plVar6 = *(long**)( param_2 + 0x98 );
   if (plVar6 == (long*)0x0) {
      LAB_00103d5d:if (( *(long*)( param_2 + 8 ) != 0 ) && ( param_2[0x298] == (StringName)0x0 )) {
         local_158 = 0;
         uStack_154 = 0;
         local_148 = (undefined1[16])0x0;
         uStack_150 = 0;
         uStack_14c = 0;
         local_138 = 0;
         local_130 = 0;
         local_128 = 6;
         local_120 = 1;
         local_118[0] = 0;
         local_108 = 0;
         local_100 = 0;
         local_f0 = 0;
         String::parse_latin1((String*)&local_158, "_get_plural_message");
         local_120 = CONCAT44(local_120._4_4_, 0xc);
         GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)&local_188);
         PropertyInfo::operator =((PropertyInfo*)&uStack_150, (PropertyInfo*)&local_188);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
         local_100 = local_100 & 0xffffffff00000000;
         GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)&local_188);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
         Vector<int>::push_back(local_f8, 0);
         GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)&local_188);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
         Vector<int>::push_back(local_f8, 0);
         GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_188);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
         Vector<int>::push_back(local_f8, 3);
         GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)&local_188);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_118, (PropertyInfo*)&local_188);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_188);
         Vector<int>::push_back(local_f8, 0);
         uVar3 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( param_2 + 0x2a0 ) = 0;
         lVar5 = *(long*)( param_2 + 8 );
         pcVar7 = *(code**)( lVar5 + 0xd8 );
         if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
            local_198 = 0;
            String::parse_latin1((String*)&local_198, "Translation");
            StringName::StringName((StringName*)&local_190, (String*)&local_198, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_188, (StringName*)&local_190);
            if (local_180[0] == 0) {
               lVar5 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_180);
               if (StringName::configured != '\0') goto LAB_001043e6;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
               LAB_00104403:lVar5 = *(long*)( param_2 + 8 );
               pcVar7 = *(code**)( lVar5 + 200 );
               if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_001042f3;
               uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), param_2 + 0x290);
               *(undefined8*)( param_2 + 0x2a0 ) = uVar4;
            }
 else {
               lVar5 = *(long*)( local_180[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_180);
               if (StringName::configured != '\0') {
                  LAB_001043e6:if (local_190 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
               if (lVar5 == 0) goto LAB_00104403;
            }

            lVar5 = *(long*)( param_2 + 8 );
         }
 else {
            uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), param_2 + 0x290, uVar3);
            *(undefined8*)( param_2 + 0x2a0 ) = uVar4;
            lVar5 = *(long*)( param_2 + 8 );
         }

         LAB_001042f3:if (*(char*)( lVar5 + 0x29 ) != '\0') {
            plVar6 = (long*)operator_new(0x18, "");
            *plVar6 = (long)( param_2 + 0x2a0 );
            plVar6[1] = (long)( param_2 + 0x298 );
            plVar6[2] = *(long*)( param_2 + 0x168 );
            *(long**)( param_2 + 0x168 ) = plVar6;
         }

         param_2[0x298] = (StringName)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_158);
      }

      if (*(long*)( param_2 + 0x2a0 ) == 0) {
         bVar2 = false;
         if (StringName::configured != '\0') goto LAB_00103d85;
         LAB_00103f90:_err_print_error("get_plural_message", "core/string/translation.cpp", 0x82, "Translation class doesn\'t handle plural messages. Calling get_plural_message() on a Translation instance is probably a mistake. \nUse a derived Translation class that handles plurals, such as TranslationPO class", 0, 1);
         pcVar7 = *(code**)( *(long*)param_2 + 0x1f0 );
         StringName::StringName((StringName*)&local_158, "", false);
         ( *pcVar7 )(param_1, param_2, (StringName*)CONCAT44(in_register_00000014, param_3), (StringName*)&local_158);
         if (( StringName::configured != '\0' ) && ( ( ( CONCAT44(uStack_154, local_158) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1c8 != 0 ) ) )) {
            StringName::unref();
         }

         goto LAB_00103de0;
      }

      StringName::StringName((StringName*)&local_1a8, (StringName*)&local_1c0);
      StringName::StringName((StringName*)&local_1a0, (StringName*)&local_1b8);
      local_198 = (long)in_R8D;
      StringName::StringName((StringName*)&local_190, (StringName*)&local_1b0);
      local_98 = &local_198;
      local_188 = 0;
      local_a8 = (StringName*)&local_1a8;
      pSStack_a0 = (StringName*)&local_1a0;
      apSStack_90[0] = (StringName*)&local_190;
      if (*(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( param_2 + 0x2a0 ) )(*(undefined8*)( param_2 + 0x10 ), &local_a8, (StringName*)&local_188);
      }
 else {
         ( **(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) )(*(undefined8*)( param_2 + 0x10 ), param_2 + 0x290, *(undefined8*)( param_2 + 0x2a0 ), &local_a8, (StringName*)&local_188);
      }

      StringName::StringName((StringName*)&local_158, (StringName*)&local_188);
      if (CONCAT44(uStack_154, local_158) != 0) {
         StringName::unref();
         local_1c8 = CONCAT44(uStack_154, local_158);
      }

      if (( ( ( StringName::configured != '\0' ) && ( ( local_188 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_190 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1a0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) )) {
         if (local_1a8 != 0) {
            StringName::unref();
            goto LAB_00103f71;
         }

         goto LAB_00103f7e;
      }

   }
 else {
      local_158 = 0;
      uStack_154 = 0;
      uStack_150 = 0;
      Variant::Variant((Variant*)&local_a8, (StringName*)&local_1c0);
      Variant::Variant((Variant*)apSStack_90, (StringName*)&local_1b8);
      Variant::Variant(local_78, in_R8D);
      Variant::Variant(local_60, (StringName*)&local_1b0);
      local_c8 = (Variant*)&local_a8;
      pVStack_c0 = (Variant*)apSStack_90;
      local_b8 = local_78;
      pVStack_b0 = local_60;
      ( **(code**)( *plVar6 + 0x60 ) )(local_e8, plVar6, param_2 + 0x290, &local_c8, 4, &local_158);
      if (local_158 != 0) {
         if (Variant::needs_deinit[local_e8[0]] != '\0') {
            Variant::_clear_internal();
         }

         pVVar8 = local_48;
         do {
            pVVar1 = pVVar8 + -0x18;
            pVVar8 = pVVar8 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar8 != (Variant*)&local_a8 );
         goto LAB_00103d5d;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_188);
      if (local_188 != 0) {
         StringName::unref();
         local_1c8 = local_188;
      }

      if (Variant::needs_deinit[local_e8[0]] != '\0') {
         Variant::_clear_internal();
      }

      pVVar8 = local_48;
      do {
         pVVar1 = pVVar8 + -0x18;
         pVVar8 = pVVar8 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar8 != (Variant*)&local_a8 );
      LAB_00103f71:if (StringName::configured != '\0') {
         LAB_00103f7e:bVar2 = true;
         LAB_00103d85:if (( ( ( local_1c0 == 0 ) || ( StringName::unref(),StringName::configured != '\0' ) ) && ( ( local_1b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1b0 != 0 )) {
            StringName::unref();
         }

         if (!bVar2) goto LAB_00103f90;
      }

   }

   *(long*)param_1 = local_1c8;
   LAB_00103de0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x001047a5) *//* WARNING: Removing unreachable block (ram,0x00104c46) *//* WARNING: Removing unreachable block (ram,0x001049de) *//* Translation::get_message(StringName const&, StringName const&) const */StringName *Translation::get_message(StringName *param_1, StringName *param_2) {
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
   undefined8 uVar11;
   long lVar12;
   long *plVar13;
   StringName *in_RCX;
   code *pcVar14;
   uint uVar15;
   StringName *in_RDX;
   long lVar16;
   uint uVar17;
   uint uVar18;
   ulong uVar19;
   long in_FS_OFFSET;
   long local_170;
   long local_168;
   long local_160;
   long local_158;
   long local_150;
   long local_148;
   long local_140[5];
   int local_118;
   undefined4 uStack_114;
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   ulong local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   StringName *local_78;
   StringName *pSStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_170 = 0;
   StringName::StringName((StringName*)&local_160, in_RCX);
   StringName::StringName((StringName*)&local_168, in_RDX);
   plVar13 = *(long**)( param_2 + 0x98 );
   if (plVar13 == (long*)0x0) {
      LAB_0010460c:if (( *(long*)( param_2 + 8 ) != 0 ) && ( param_2[0x280] == (StringName)0x0 )) {
         local_118 = 0;
         uStack_114 = 0;
         local_108 = (undefined1[16])0x0;
         uStack_110 = 0;
         uStack_10c = 0;
         local_f8 = 0;
         local_f0 = 0;
         local_e8 = 6;
         local_e0 = 1;
         local_d8[0] = 0;
         local_c8 = 0;
         local_c0 = 0;
         local_b0 = 0;
         String::parse_latin1((String*)&local_118, "_get_message");
         local_e0 = CONCAT44(local_e0._4_4_, 0xc);
         GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)&local_148);
         PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
         local_c0 = local_c0 & 0xffffffff00000000;
         GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)&local_148);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
         Vector<int>::push_back(local_b8, 0);
         GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)&local_148);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
         Vector<int>::push_back(local_b8, 0);
         MethodInfo::get_compatibility_hash();
         *(undefined8*)( param_2 + 0x288 ) = 0;
         lVar12 = *(long*)( param_2 + 8 );
         pcVar14 = *(code**)( lVar12 + 0xd8 );
         if (( ( pcVar14 == (code*)0x0 ) || ( *(long*)( lVar12 + 0xe0 ) == 0 ) ) && ( pcVar14 = *(code**)( lVar12 + 0xd0 ) ),pcVar14 == (code*)0x0) {
            local_158 = 0;
            String::parse_latin1((String*)&local_158, "Translation");
            StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
            if (local_140[0] == 0) {
               lVar12 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
               if (StringName::configured != '\0') goto LAB_00104d11;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
               LAB_00104d32:lVar12 = *(long*)( param_2 + 8 );
               pcVar14 = *(code**)( lVar12 + 200 );
               if (( ( pcVar14 == (code*)0x0 ) || ( *(long*)( lVar12 + 0xe0 ) == 0 ) ) && ( pcVar14 = *(code**)( lVar12 + 0xc0 ) ),pcVar14 == (code*)0x0) goto LAB_00104bbc;
               uVar11 = ( *pcVar14 )(*(undefined8*)( lVar12 + 0xa0 ), param_2 + 0x278);
               *(undefined8*)( param_2 + 0x288 ) = uVar11;
            }
 else {
               lVar12 = *(long*)( local_140[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
               if (StringName::configured != '\0') {
                  LAB_00104d11:if (local_150 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
               if (lVar12 == 0) goto LAB_00104d32;
            }

            lVar12 = *(long*)( param_2 + 8 );
         }
 else {
            uVar11 = ( *pcVar14 )(*(undefined8*)( lVar12 + 0xa0 ), param_2 + 0x278);
            *(undefined8*)( param_2 + 0x288 ) = uVar11;
            lVar12 = *(long*)( param_2 + 8 );
         }

         LAB_00104bbc:if (*(char*)( lVar12 + 0x29 ) != '\0') {
            plVar13 = (long*)operator_new(0x18, "");
            *plVar13 = (long)( param_2 + 0x288 );
            plVar13[1] = (long)( param_2 + 0x280 );
            plVar13[2] = *(long*)( param_2 + 0x168 );
            *(long**)( param_2 + 0x168 ) = plVar13;
         }

         param_2[0x280] = (StringName)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_118);
      }

      if (*(long*)( param_2 + 0x288 ) == 0) {
         if (( ( StringName::configured != '\0' ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
            StringName::unref();
         }

         if (*(long*)in_RCX != 0) {
            _err_print_error("get_message", "core/string/translation.cpp", 0x71, "Translation class doesn\'t handle context. Using context in get_message() on a Translation instance is probably a mistake. \nUse a derived Translation class that handles context, such as TranslationPO class", 0, 1);
         }

         if (( *(long*)( param_2 + 0x250 ) != 0 ) && ( *(int*)( param_2 + 0x274 ) != 0 )) {
            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x270 ) * 4 );
            uVar19 = CONCAT44(0, uVar1);
            lVar12 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x270 ) * 8 );
            if (*(long*)in_RDX == 0) {
               uVar10 = StringName::get_empty_hash();
            }
 else {
               uVar10 = *(uint*)( *(long*)in_RDX + 0x20 );
            }

            if (uVar10 == 0) {
               uVar10 = 1;
            }

            auVar2._8_8_ = 0;
            auVar2._0_8_ = (ulong)uVar10 * lVar12;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar19;
            lVar16 = SUB168(auVar2 * auVar6, 8);
            uVar17 = *(uint*)( *(long*)( param_2 + 600 ) + lVar16 * 4 );
            uVar15 = SUB164(auVar2 * auVar6, 8);
            if (uVar17 != 0) {
               uVar18 = 0;
               while (( uVar10 != uVar17 || ( *(long*)( *(long*)( *(long*)( param_2 + 0x250 ) + lVar16 * 8 ) + 0x10 ) != *(long*)in_RDX ) )) {
                  uVar18 = uVar18 + 1;
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = ( ulong )(uVar15 + 1) * lVar12;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = uVar19;
                  lVar16 = SUB168(auVar3 * auVar7, 8);
                  uVar17 = *(uint*)( *(long*)( param_2 + 600 ) + lVar16 * 4 );
                  uVar15 = SUB164(auVar3 * auVar7, 8);
                  if (( uVar17 == 0 ) || ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar17 * lVar12,auVar8._8_8_ = 0,auVar8._0_8_ = uVar19,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + uVar15 ) - SUB164(auVar4 * auVar8, 8)) * lVar12,auVar9._8_8_ = 0,auVar9._0_8_ = uVar19,SUB164(auVar5 * auVar9, 8) < uVar18) goto LAB_00104788;
               }
;
               lVar12 = *(long*)( *(long*)( param_2 + 0x250 ) + (ulong)uVar15 * 8 );
               if (lVar12 != 0) {
                  StringName::StringName(param_1, (StringName*)( lVar12 + 0x18 ));
                  goto LAB_001047af;
               }

            }

         }

         LAB_00104788:*(undefined8*)param_1 = 0;
         goto LAB_001047af;
      }

      StringName::StringName((StringName*)&local_158, (StringName*)&local_168);
      StringName::StringName((StringName*)&local_150, (StringName*)&local_160);
      local_148 = 0;
      local_78 = (StringName*)&local_158;
      pSStack_70 = (StringName*)&local_150;
      if (*(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( param_2 + 0x288 ) )(*(undefined8*)( param_2 + 0x10 ), &local_78, (StringName*)&local_148);
      }
 else {
         ( **(code**)( *(long*)( param_2 + 8 ) + 0xe0 ) )(*(undefined8*)( param_2 + 0x10 ), param_2 + 0x278, *(undefined8*)( param_2 + 0x288 ), &local_78, (StringName*)&local_148);
      }

      StringName::StringName((StringName*)&local_118, (StringName*)&local_148);
      if (CONCAT44(uStack_114, local_118) != 0) {
         StringName::unref();
         local_170 = CONCAT44(uStack_114, local_118);
      }

      if (( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_150 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) )) {
         if (local_158 != 0) {
            StringName::unref();
            goto LAB_001048eb;
         }

         goto LAB_001048f4;
      }

   }
 else {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, (StringName*)&local_168);
      Variant::Variant((Variant*)local_60, (StringName*)&local_160);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar13 + 0x60 ) )(local_98, plVar13, param_2 + 0x278, &local_a8, 2, &local_118);
      if (local_118 != 0) {
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010460c;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_148);
      if (local_148 != 0) {
         StringName::unref();
         local_170 = local_148;
      }

      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      LAB_001048eb:if (StringName::configured != '\0') {
         LAB_001048f4:if (( ( local_168 == 0 ) || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_160 != 0 )) {
            StringName::unref();
         }

      }

   }

   *(long*)param_1 = local_170;
   LAB_001047af:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
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
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* Translation::is_class_ptr(void*) const */uint Translation::is_class_ptr(Translation *this, void *param_1) {
   return (uint)CONCAT71(0x1119, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1119, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1119, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1119, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* Translation::_getv(StringName const&, Variant&) const */undefined8 Translation::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Translation::_setv(StringName const&, Variant const&) */undefined8 Translation::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Translation::_validate_propertyv(PropertyInfo&) const */void Translation::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* Translation::_property_can_revertv(StringName const&) const */undefined8 Translation::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* Translation::_property_get_revertv(StringName const&, Variant&) const */undefined8 Translation::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Translation::_notificationv(int, bool) */void Translation::_notificationv(int param_1, bool param_2) {
   return;
}
/* Translation::get_locale() const */void Translation::get_locale(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x240 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x240 ));
   }

   return;
}
/* CallableCustomMethodPointer<Translation, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Translation,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Translation,void> *this) {
   return;
}
/* MethodBindTRC<Dictionary>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Dictionary>::_gen_argument_type(int param_1) {
   return 0x1b;
}
/* MethodBindTRC<Dictionary>::get_argument_meta(int) const */undefined8 MethodBindTRC<Dictionary>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Dictionary const&>::_gen_argument_type(int) const */byte MethodBindT<Dictionary_const&>::_gen_argument_type(MethodBindT<Dictionary_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x1b;
}
/* MethodBindT<Dictionary const&>::get_argument_meta(int) const */undefined8 MethodBindT<Dictionary_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindTRC<Vector<String>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector<String>>::_gen_argument_type(int param_1) {
   return 0x22;
}
/* MethodBindTRC<Vector<String>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector<String>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<StringName const&, StringName const&>::_gen_argument_type(int) const */byte MethodBindT<StringName_const&,StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&,StringName_const&> *this, int param_1) {
   return -((uint)param_1 < 2) & 0x15;
}
/* MethodBindT<StringName const&, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::_gen_argument_type(int) const */undefined8 MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::_gen_argument_type(MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0x15;
   if (param_1 == 2) {
      uVar1 = 2;
   }

   return uVar1;
}
/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::get_argument_meta(int) const */char MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::get_argument_meta(MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this, int param_1) {
   return ( param_1 == 2 ) * '\x03';
}
/* MethodBindTRC<StringName, StringName const&, StringName const&>::_gen_argument_type(int) const */undefined8 MethodBindTRC<StringName,StringName_const&,StringName_const&>::_gen_argument_type(int param_1) {
   return 0x15;
}
/* MethodBindTRC<StringName, StringName const&, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<StringName,StringName_const&,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<StringName const&, Vector<String> const&, StringName const&>::get_argument_meta(int)
   const */undefined8 MethodBindT<StringName_const&,Vector<String>const&,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<StringName const&, StringName const&, StringName const&>::get_argument_meta(int)
   const */undefined8 MethodBindT<StringName_const&,StringName_const&,StringName_const&>::get_argument_meta(int param_1) {
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
/* CallableCustomMethodPointer<Translation, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<Translation,void>::get_argument_count(CallableCustomMethodPointer<Translation,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<Translation, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Translation,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Translation,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111528;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111528;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111588;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111588;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&, StringName const&, StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&,StringName_const&,StringName_const&>::~MethodBindT(MethodBindT<StringName_const&,StringName_const&,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001115e8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&, StringName const&, StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&,StringName_const&,StringName_const&>::~MethodBindT(MethodBindT<StringName_const&,StringName_const&,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001115e8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&, Vector<String> const&, StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&,Vector<String>const&,StringName_const&>::~MethodBindT(MethodBindT<StringName_const&,Vector<String>const&,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111648;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&, Vector<String> const&, StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&,Vector<String>const&,StringName_const&>::~MethodBindT(MethodBindT<StringName_const&,Vector<String>const&,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111648;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<StringName, StringName const&, StringName const&>::~MethodBindTRC() */void MethodBindTRC<StringName,StringName_const&,StringName_const&>::~MethodBindTRC(MethodBindTRC<StringName,StringName_const&,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001116a8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<StringName, StringName const&, StringName const&>::~MethodBindTRC() */void MethodBindTRC<StringName,StringName_const&,StringName_const&>::~MethodBindTRC(MethodBindTRC<StringName,StringName_const&,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001116a8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::~MethodBindTRC() */void MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::~MethodBindTRC(MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111708;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::~MethodBindTRC() */void MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::~MethodBindTRC(MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111708;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&, StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&,StringName_const&>::~MethodBindT(MethodBindT<StringName_const&,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111768;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&, StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&,StringName_const&>::~MethodBindT(MethodBindT<StringName_const&,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111768;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */void MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001117c8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */void MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001117c8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111828;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111828;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Dictionary const&>::~MethodBindT() */void MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111888;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Dictionary const&>::~MethodBindT() */void MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00111888;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Dictionary>::~MethodBindTRC() */void MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001118e8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Dictionary>::~MethodBindTRC() */void MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001118e8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&, StringName const&, StringName const&>::_gen_argument_type(int)
   const */byte MethodBindT<StringName_const&,StringName_const&,StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&,StringName_const&,StringName_const&> *this, int param_1) {
   return -((uint)param_1 < 3) & 0x15;
}
/* MethodBindT<StringName const&, Vector<String> const&, StringName const&>::_gen_argument_type(int)
   const */undefined8 MethodBindT<StringName_const&,Vector<String>const&,StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&,Vector<String>const&,StringName_const&> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( (uint)param_1 < 3 ) && ( uVar1 = param_1 == 1 )) {
      uVar1 = 0x22;
   }

   return uVar1;
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
/* Translation::_bind_methods() [clone .cold] */void Translation::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CallableCustomMethodPointer<Translation, void>::get_object() const */undefined8 CallableCustomMethodPointer<Translation,void>::get_object(CallableCustomMethodPointer<Translation,void> *this) {
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
         goto LAB_001057dd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001057dd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001057dd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* Translation::get_base_extension() const */Translation * __thiscall Translation::get_base_extension(Translation *this){
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
/* Translation::get_save_class() const */Translation * __thiscall Translation::get_save_class(Translation *this){
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
/* Translation::_get_class_namev() const */undefined8 *Translation::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001059d3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001059d3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Translation");
         goto LAB_00105a3e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Translation");
   LAB_00105a3e:return &_get_class_namev();
}
/* Translation::get_class() const */void Translation::get_class(void) {
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
/* MethodBindTRC<Vector<String>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector<String>>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC12;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x22;
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

         goto joined_r0x001060bc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001060bc:local_58 = lVar2;
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
/* MethodBindTRC<Dictionary>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Dictionary>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC12;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x1b;
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

         goto joined_r0x0010623c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010623c:local_58 = lVar2;
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
   local_48 = &_LC12;
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

         goto joined_r0x001063bc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001063bc:local_58 = lVar2;
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
/* MethodBindTRC<String>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<String>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC12;
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

         goto joined_r0x0010653c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010653c:local_58 = lVar2;
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
/* Translation::~Translation() */void Translation::~Translation(Translation *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   void *pvVar4;
   bool bVar5;
   bVar5 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_00111268;
   if (bVar5) {
      if (*(long*)( this + 0x290 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001065d7;
      }

      if (*(long*)( this + 0x278 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001065d7:pvVar4 = *(void**)( this + 0x250 );
   if (pvVar4 != (void*)0x0) {
      if (*(int*)( this + 0x274 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x270 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x274 ) = 0;
            *(undefined1(*) [16])( this + 0x260 ) = (undefined1[16])0x0;
         }
 else {
            lVar3 = 0;
            do {
               if (*(int*)( *(long*)( this + 600 ) + lVar3 ) != 0) {
                  bVar5 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 600 ) + lVar3 ) = 0;
                  pvVar4 = *(void**)( (long)pvVar4 + lVar3 * 2 );
                  if (bVar5) {
                     if (*(long*)( (long)pvVar4 + 0x18 ) != 0) {
                        StringName::unref();
                        if (StringName::configured == '\0') goto LAB_0010666c;
                     }

                     if (*(long*)( (long)pvVar4 + 0x10 ) != 0) {
                        StringName::unref();
                     }

                  }

                  LAB_0010666c:Memory::free_static(pvVar4, false);
                  pvVar4 = *(void**)( this + 0x250 );
                  *(undefined8*)( (long)pvVar4 + lVar3 * 2 ) = 0;
               }

               lVar3 = lVar3 + 4;
            }
 while ( lVar3 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x274 ) = 0;
            *(undefined1(*) [16])( this + 0x260 ) = (undefined1[16])0x0;
            if (pvVar4 == (void*)0x0) goto LAB_001066a8;
         }

      }

      Memory::free_static(pvVar4, false);
      Memory::free_static(*(void**)( this + 600 ), false);
   }

   LAB_001066a8:if (*(long*)( this + 0x240 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x240 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x240 );
         *(undefined8*)( this + 0x240 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* Translation::~Translation() */void Translation::~Translation(Translation *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   void *pvVar4;
   bool bVar5;
   bVar5 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_00111268;
   if (bVar5) {
      if (*(long*)( this + 0x290 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106787;
      }

      if (*(long*)( this + 0x278 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00106787:pvVar4 = *(void**)( this + 0x250 );
   if (pvVar4 != (void*)0x0) {
      if (*(int*)( this + 0x274 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x270 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x274 ) = 0;
            *(undefined1(*) [16])( this + 0x260 ) = (undefined1[16])0x0;
         }
 else {
            lVar3 = 0;
            do {
               if (*(int*)( *(long*)( this + 600 ) + lVar3 ) != 0) {
                  bVar5 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 600 ) + lVar3 ) = 0;
                  pvVar4 = *(void**)( (long)pvVar4 + lVar3 * 2 );
                  if (bVar5) {
                     if (*(long*)( (long)pvVar4 + 0x18 ) != 0) {
                        StringName::unref();
                        if (StringName::configured == '\0') goto LAB_0010681c;
                     }

                     if (*(long*)( (long)pvVar4 + 0x10 ) != 0) {
                        StringName::unref();
                     }

                  }

                  LAB_0010681c:Memory::free_static(pvVar4, false);
                  pvVar4 = *(void**)( this + 0x250 );
                  *(undefined8*)( (long)pvVar4 + lVar3 * 2 ) = 0;
               }

               lVar3 = lVar3 + 4;
            }
 while ( lVar3 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x274 ) = 0;
            *(undefined1(*) [16])( this + 0x260 ) = (undefined1[16])0x0;
            if (pvVar4 == (void*)0x0) goto LAB_00106858;
         }

      }

      Memory::free_static(pvVar4, false);
      Memory::free_static(*(void**)( this + 600 ), false);
   }

   LAB_00106858:if (*(long*)( this + 0x240 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x240 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x240 );
         *(undefined8*)( this + 0x240 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x2a8);
   return;
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
/* GetTypeInfo<int, void>::get_class_info() */GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC12;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 2;
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
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00106afc;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00106afc:local_58 = lVar2;
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<StringName, void>::get_class_info() */GetTypeInfo<StringName,void> * __thiscall
GetTypeInfo<StringName,void>::get_class_info(GetTypeInfo<StringName,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC12;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x15;
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
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00106c7c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00106c7c:local_58 = lVar2;
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
   local_88 = 0;
   local_90 = 0;
   local_78 = "RefCounted";
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
      LAB_00106e38:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00106e38;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00106e56;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00106e56:if (lVar2 == 0) {
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
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
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

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
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
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
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
      LAB_00107238:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00107238;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00107255;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00107255:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
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
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
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
/* Translation::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Translation::_get_property_listv(Translation *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Translation";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Translation";
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
   if (local_90 == 0) {
      LAB_00107688:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00107688;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001076a5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001076a5:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
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
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
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

   StringName::StringName((StringName*)&local_78, "Translation", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Resource::_get_property_listv((Resource*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
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
   if (*(long*)( this + 0x28 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x28 );
         *(undefined8*)( this + 0x28 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x10 );
         *(undefined8*)( this + 0x10 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, StringName> > >::operator[](StringName const&)
    */StringName * __thiscallHashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,StringName>>>::operator [](HashMap<StringName,StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,StringName>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]uint uVar36uint uVar37uint uVar38ulong uVar39undefined8 uVar40void *__s_00undefined8 *puVar41long lVar42void *pvVar43ulong uVar44int iVar45long lVar46long lVar47long lVar48ulong uVar49undefined8 uVar50uint uVar51uint uVar52uint uVar53undefined8 *puVar54long in_FS_OFFSETStringName *local_a8long local_70undefined1 local_68[16]long local_58long local_50[2]long local_40lVar42 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar39 = CONCAT44(0, uVar37);if (lVar42 == 0) {
   LAB_001085d0:local_70 = 0;
   uVar44 = uVar39 * 4;
   uVar49 = uVar39 * 8;
   uVar40 = Memory::alloc_static(uVar44, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   pvVar43 = (void*)Memory::alloc_static(uVar49, false);
   *(void**)( this + 8 ) = pvVar43;
   if ((int)uVar39 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar43 + uVar49 ) ) && ( pvVar43 < (void*)( (long)pvVar3 + uVar44 ) )) {
         uVar44 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar44 * 4 ) = 0;
            *(undefined8*)( (long)pvVar43 + uVar44 * 8 ) = 0;
            uVar44 = uVar44 + 1;
         }
 while ( uVar39 != uVar44 );
      }
 else {
         memset(pvVar3, 0, uVar44);
         memset(pvVar43, 0, uVar49);
      }

      LAB_00108051:iVar45 = *(int*)( this + 0x2c );
      if (iVar45 != 0) {
         LAB_0010805d:uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar44 = CONCAT44(0, uVar37);
         lVar42 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar38 = StringName::get_empty_hash();
         }
 else {
            uVar38 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar38 == 0) {
            uVar38 = 1;
         }

         uVar53 = 0;
         auVar8._8_8_ = 0;
         auVar8._0_8_ = (ulong)uVar38 * lVar42;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar44;
         lVar47 = SUB168(auVar8 * auVar24, 8);
         uVar51 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
         uVar52 = SUB164(auVar8 * auVar24, 8);
         if (uVar51 != 0) {
            do {
               if (( uVar38 == uVar51 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar47 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  StringName::operator =((StringName*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar52 * 8 ) + 0x18 ), (StringName*)&local_70);
                  local_a8 = (StringName*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar52 * 8 ) + 0x18 );
                  goto LAB_0010851b;
               }

               uVar53 = uVar53 + 1;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = ( ulong )(uVar52 + 1) * lVar42;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar44;
               lVar47 = SUB168(auVar9 * auVar25, 8);
               uVar51 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
               uVar52 = SUB164(auVar9 * auVar25, 8);
            }
 while ( ( uVar51 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar51 * lVar42,auVar26._8_8_ = 0,auVar26._0_8_ = uVar44,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar37 + uVar52 ) - SUB164(auVar10 * auVar26, 8)) * lVar42,auVar27._8_8_ = 0,auVar27._0_8_ = uVar44,uVar53 <= SUB164(auVar11 * auVar27, 8) );
         }

         iVar45 = *(int*)( this + 0x2c );
      }

      goto LAB_0010815c;
   }

   iVar45 = *(int*)( this + 0x2c );
   if (pvVar43 == (void*)0x0) goto LAB_0010815c;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_0010805d;
   LAB_00108182:uVar37 = *(uint*)( this + 0x28 );
   if (uVar37 == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      local_a8 = (StringName*)0x18;
      goto LAB_0010851b;
   }

   uVar39 = ( ulong )(uVar37 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar37 * 4 );
   if (uVar37 + 1 < 2) {
      uVar39 = 2;
   }

   uVar37 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
   uVar49 = (ulong)uVar37;
   *(int*)( this + 0x28 ) = (int)uVar39;
   pvVar43 = *(void**)( this + 8 );
   uVar39 = uVar49 * 4;
   uVar44 = uVar49 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar40 = Memory::alloc_static(uVar39, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   __s_00 = (void*)Memory::alloc_static(uVar44, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar37 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar44 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
         uVar39 = 0;
         do {
            *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
            uVar39 = uVar39 + 1;
         }
 while ( uVar39 != uVar49 );
      }
 else {
         memset(__s, 0, uVar39);
         memset(__s_00, 0, uVar44);
      }

   }

   if (uVar38 != 0) {
      uVar39 = 0;
      do {
         uVar37 = *(uint*)( (long)pvVar3 + uVar39 * 4 );
         if (uVar37 != 0) {
            lVar42 = *(long*)( this + 0x10 );
            uVar53 = 0;
            uVar51 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar44 = CONCAT44(0, uVar51);
            lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar37 * lVar47;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar44;
            lVar46 = SUB168(auVar12 * auVar28, 8);
            puVar1 = (uint*)( lVar42 + lVar46 * 4 );
            iVar45 = SUB164(auVar12 * auVar28, 8);
            uVar52 = *puVar1;
            uVar40 = *(undefined8*)( (long)pvVar43 + uVar39 * 8 );
            while (uVar52 != 0) {
               auVar13._8_8_ = 0;
               auVar13._0_8_ = (ulong)uVar52 * lVar47;
               auVar29._8_8_ = 0;
               auVar29._0_8_ = uVar44;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(( uVar51 + iVar45 ) - SUB164(auVar13 * auVar29, 8)) * lVar47;
               auVar30._8_8_ = 0;
               auVar30._0_8_ = uVar44;
               uVar36 = SUB164(auVar14 * auVar30, 8);
               uVar50 = uVar40;
               if (uVar36 < uVar53) {
                  *puVar1 = uVar37;
                  puVar41 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                  uVar50 = *puVar41;
                  *puVar41 = uVar40;
                  uVar37 = uVar52;
                  uVar53 = uVar36;
               }

               uVar53 = uVar53 + 1;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = ( ulong )(iVar45 + 1) * lVar47;
               auVar31._8_8_ = 0;
               auVar31._0_8_ = uVar44;
               lVar46 = SUB168(auVar15 * auVar31, 8);
               puVar1 = (uint*)( lVar42 + lVar46 * 4 );
               iVar45 = SUB164(auVar15 * auVar31, 8);
               uVar40 = uVar50;
               uVar52 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar40;
            *puVar1 = uVar37;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar39 = uVar39 + 1;
      }
 while ( uVar38 != uVar39 );
      Memory::free_static(pvVar43, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar38 = StringName::get_empty_hash();
         lVar42 = *(long*)( this + 8 );
      }
 else {
         uVar38 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar38 == 0) {
         uVar38 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar38 * lVar47;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      lVar46 = SUB168(auVar4 * auVar20, 8);
      uVar51 = *(uint*)( *(long*)( this + 0x10 ) + lVar46 * 4 );
      uVar52 = SUB164(auVar4 * auVar20, 8);
      if (uVar51 != 0) {
         uVar53 = 0;
         do {
            if (( uVar38 == uVar51 ) && ( *(long*)( *(long*)( lVar42 + lVar46 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               local_a8 = (StringName*)( *(long*)( lVar42 + (ulong)uVar52 * 8 ) + 0x18 );
               goto LAB_00107ffc;
            }

            uVar53 = uVar53 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(uVar52 + 1) * lVar47;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar39;
            lVar46 = SUB168(auVar5 * auVar21, 8);
            uVar51 = *(uint*)( *(long*)( this + 0x10 ) + lVar46 * 4 );
            uVar52 = SUB164(auVar5 * auVar21, 8);
         }
 while ( ( uVar51 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar51 * lVar47,auVar22._8_8_ = 0,auVar22._0_8_ = uVar39,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar52 + uVar37 ) - SUB164(auVar6 * auVar22, 8)) * lVar47,auVar23._8_8_ = 0,auVar23._0_8_ = uVar39,uVar53 <= SUB164(auVar7 * auVar23, 8) );
      }

      local_70 = 0;
      uVar39 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar42 == 0) goto LAB_001085d0;
      goto LAB_00108051;
   }

   local_70 = 0;
   iVar45 = 0;
   LAB_0010815c:if ((float)uVar39 * __LC20 < (float)( iVar45 + 1 )) goto LAB_00108182;
}
local_68 = (undefined1[16])0x0;StringName::StringName((StringName*)&local_58, param_1);StringName::StringName((StringName*)local_50, (StringName*)&local_70);puVar41 = (undefined8*)operator_new(0x20, "");*puVar41 = local_68._0_8_;puVar41[1] = local_68._8_8_;StringName::StringName((StringName*)( puVar41 + 2 ), (StringName*)&local_58);local_a8 = (StringName*)( puVar41 + 3 );StringName::StringName(local_a8, (StringName*)local_50);if (( StringName::configured != '\0' ) && ( ( ( local_50[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_58 != 0 ) ) )) {
   StringName::unref();
}
puVar54 = *(undefined8**)( this + 0x20 );if (puVar54 == (undefined8*)0x0) {
   lVar42 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar41;
   *(undefined8**)( this + 0x20 ) = puVar41;
   if (lVar42 == 0) goto LAB_0010858d;
   LAB_00108444:uVar37 = *(uint*)( lVar42 + 0x20 );
}
 else {
   *puVar54 = puVar41;
   puVar41[1] = puVar54;
   lVar42 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar41;
   if (lVar42 != 0) goto LAB_00108444;
   LAB_0010858d:uVar37 = StringName::get_empty_hash();
}
lVar42 = *(long*)( this + 0x10 );if (uVar37 == 0) {
   uVar37 = 1;
}
uVar39 = (ulong)uVar37;uVar52 = 0;uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar44 = CONCAT44(0, uVar38);lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar16._8_8_ = 0;auVar16._0_8_ = uVar39 * lVar47;auVar32._8_8_ = 0;auVar32._0_8_ = uVar44;lVar48 = SUB168(auVar16 * auVar32, 8);lVar46 = *(long*)( this + 8 );puVar1 = (uint*)( lVar42 + lVar48 * 4 );iVar45 = SUB164(auVar16 * auVar32, 8);uVar51 = *puVar1;while (uVar51 != 0) {
   auVar17._8_8_ = 0;
   auVar17._0_8_ = (ulong)uVar51 * lVar47;
   auVar33._8_8_ = 0;
   auVar33._0_8_ = uVar44;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = ( ulong )(( uVar38 + iVar45 ) - SUB164(auVar17 * auVar33, 8)) * lVar47;
   auVar34._8_8_ = 0;
   auVar34._0_8_ = uVar44;
   uVar37 = SUB164(auVar18 * auVar34, 8);
   puVar54 = puVar41;
   if (uVar37 < uVar52) {
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar51;
      puVar2 = (undefined8*)( lVar46 + lVar48 * 8 );
      puVar54 = (undefined8*)*puVar2;
      *puVar2 = puVar41;
      uVar52 = uVar37;
   }

   uVar37 = (uint)uVar39;
   uVar52 = uVar52 + 1;
   auVar19._8_8_ = 0;
   auVar19._0_8_ = ( ulong )(iVar45 + 1) * lVar47;
   auVar35._8_8_ = 0;
   auVar35._0_8_ = uVar44;
   lVar48 = SUB168(auVar19 * auVar35, 8);
   puVar1 = (uint*)( lVar42 + lVar48 * 4 );
   iVar45 = SUB164(auVar19 * auVar35, 8);
   puVar41 = puVar54;
   uVar51 = *puVar1;
}
;*(undefined8**)( lVar46 + lVar48 * 8 ) = puVar41;*puVar1 = uVar37;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010851b:if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
   StringName::unref();
}
LAB_00107ffc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_a8;
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
/* CallableCustomMethodPointer<Translation, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<Translation,void>::call(CallableCustomMethodPointer<Translation,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0010892f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010892f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00108908. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_001089f1;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010892f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC37, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001089f1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Translation::is_class(String const&) const */undefined8 Translation::is_class(Translation *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_00108a6f;
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

      LAB_00108a6f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00108b23;
   }

   cVar6 = String::operator ==(param_1, "Translation");
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
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar5);
               local_58 = pcVar5;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00108b23;
      }

      cVar6 = String::operator ==(param_1, "Resource");
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
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
                  }

               }
 else {
                  local_50 = strlen(pcVar5);
                  local_58 = pcVar5;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar6 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar6 != '\0') goto LAB_00108b23;
         }

         cVar6 = String::operator ==(param_1, "RefCounted");
         if (cVar6 == '\0') {
            for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
               lVar4 = *(long*)( lVar2 + 0x20 );
               if (lVar4 == 0) {
                  local_58 = (char*)0x0;
               }
 else {
                  local_58 = (char*)0x0;
                  if (*(char**)( lVar4 + 8 ) == (char*)0x0) {
                     if (*(long*)( lVar4 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar4 + 0x10 ));
                     }

                  }
 else {
                     String::parse_latin1((String*)&local_58, *(char**)( lVar4 + 8 ));
                  }

               }

               cVar6 = String::operator ==(param_1, (String*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               if (cVar6 != '\0') goto LAB_00108b23;
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar8 = String::operator ==(param_1, "Object");
               return uVar8;
            }

            goto LAB_00108dae;
         }

      }

   }

   LAB_00108b23:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00108dae:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<String_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
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
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00108e09;
   local_78 = 0;
   local_68 = &_LC12;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 4);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00108f00:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00108f00;
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

   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }

   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }

   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }

   }

   LAB_00108e09:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* MethodBindT<Dictionary const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Dictionary_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
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
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar7 = 0;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   puVar7[10] = 6;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_001090b9;
   local_78 = 0;
   local_68 = &_LC12;
   local_80 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._8_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x1b);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001091b0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001091b0;
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

   *puVar7 = local_68._0_4_;
   if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
      uVar5 = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
   }

   if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar7 + 4 ) = uVar5;
   }

   lVar6 = local_48;
   puVar7[6] = local_50;
   if (*(long*)( puVar7 + 8 ) == local_48) {
      puVar7[10] = local_40;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
      *(long*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar5 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_60._8_8_;
         local_60 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar5 + -0x10 ), false);
      }

   }

   LAB_001090b9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* MethodBind* create_method_bind<Translation, String const&>(void (Translation::*)(String const&))
    */MethodBind *create_method_bind<Translation,String_const&>(_func_void_String_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00111528;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Translation";
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
/* MethodBind* create_method_bind<Translation, String>(String (Translation::*)() const) */MethodBind *create_method_bind<Translation,String>(_func_String *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00111588;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Translation";
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
/* MethodBind* create_method_bind<Translation, StringName const&, StringName const&, StringName
   const&>(void (Translation::*)(StringName const&, StringName const&, StringName const&)) */MethodBind *create_method_bind<Translation,StringName_const&,StringName_const&,StringName_const&>(_func_void_StringName_ptr_StringName_ptr_StringName_ptr *param_1) {
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
   *(_func_void_StringName_ptr_StringName_ptr_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001115e8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "Translation";
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
/* MethodBind* create_method_bind<Translation, StringName const&, Vector<String> const&, StringName
   const&>(void (Translation::*)(StringName const&, Vector<String> const&, StringName const&)) */MethodBind *create_method_bind<Translation,StringName_const&,Vector<String>const&,StringName_const&>(_func_void_StringName_ptr_Vector_ptr_StringName_ptr *param_1) {
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
   *(_func_void_StringName_ptr_Vector_ptr_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00111648;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "Translation";
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
/* MethodBind* create_method_bind<Translation, StringName, StringName const&, StringName
   const&>(StringName (Translation::*)(StringName const&, StringName const&) const) */MethodBind *create_method_bind<Translation,StringName,StringName_const&,StringName_const&>(_func_StringName_StringName_ptr_StringName_ptr *param_1) {
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
   *(_func_StringName_StringName_ptr_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001116a8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "Translation";
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
/* MethodBind* create_method_bind<Translation, StringName, StringName const&, StringName const&,
   int, StringName const&>(StringName (Translation::*)(StringName const&, StringName const&, int,
   StringName const&) const) */MethodBind *create_method_bind<Translation,StringName,StringName_const&,StringName_const&,int,StringName_const&>(_func_StringName_StringName_ptr_StringName_ptr_int_StringName_ptr *param_1) {
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
   *(_func_StringName_StringName_ptr_StringName_ptr_int_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00111708;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 4;
   local_40 = 0;
   local_38 = "Translation";
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
/* MethodBind* create_method_bind<Translation, StringName const&, StringName const&>(void
   (Translation::*)(StringName const&, StringName const&)) */MethodBind *create_method_bind<Translation,StringName_const&,StringName_const&>(_func_void_StringName_ptr_StringName_ptr *param_1) {
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
   *(_func_void_StringName_ptr_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00111768;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "Translation";
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
/* MethodBind* create_method_bind<Translation, Vector<String>>(Vector<String> (Translation::*)()
   const) */MethodBind *create_method_bind<Translation,Vector<String>>(_func_Vector *param_1) {
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
   *(_func_Vector**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001117c8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Translation";
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
/* MethodBind* create_method_bind<Translation, int>(int (Translation::*)() const) */MethodBind *create_method_bind<Translation,int>(_func_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00111828;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Translation";
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
/* MethodBind* create_method_bind<Translation, Dictionary const&>(void (Translation::*)(Dictionary
   const&)) */MethodBind *create_method_bind<Translation,Dictionary_const&>(_func_void_Dictionary_ptr *param_1) {
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
   *(_func_void_Dictionary_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00111888;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Translation";
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
/* MethodBind* create_method_bind<Translation, Dictionary>(Dictionary (Translation::*)() const) */MethodBind *create_method_bind<Translation,Dictionary>(_func_Dictionary *param_1) {
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
   *(_func_Dictionary**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001118e8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Translation";
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
      LAB_0010a450:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_0010a450;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_0010a329:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_0010a329;
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
      goto LAB_0010a4a6;
   }

   if (lVar10 == lVar7) {
      LAB_0010a3cf:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_0010a4a6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0010a3ba;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0010a3cf;
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
   LAB_0010a3ba:puVar9[-1] = param_1;
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
      LAB_0010a770:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_0010a770;
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
            goto LAB_0010a681;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_0010a681:puVar7[-1] = param_1;
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
/* Translation::_initialize_classv() */void Translation::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
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
        if ((code *)PTR__bind_methods_00115010 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00115008 != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Translation";
    local_70 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010acd8) */
/* WARNING: Removing unreachable block (ram,0x0010ae6d) */
/* WARNING: Removing unreachable block (ram,0x0010ae79) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Dictionary>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Dictionary>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC37,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b080;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((Dictionary *)&local_58);
      Variant::Variant((Variant *)local_48,(Dictionary *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Dictionary::~Dictionary((Dictionary *)&local_58);
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
LAB_0010b080:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Dictionary>::validated_call
          (MethodBindTRC<Dictionary> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x10aec8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b389;
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
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010b389:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Dictionary>::ptrcall
          (MethodBindTRC<Dictionary> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x10aec8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b55a;
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
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010b55a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Dictionary_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010b8c4;
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
                    /* WARNING: Could not recover jumptable at 0x0010b72d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010b8c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Dictionary_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010bac4;
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
                    /* WARNING: Could not recover jumptable at 0x0010b929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010bac4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC37,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bb90;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_0010bb90:
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
  long lVar1;
  int iVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bdf4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar2;
LAB_0010bdf4:
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
  char *pcVar1;
  int iVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bfd3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar2;
LAB_0010bfd3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector<String>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC37,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c240;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((Vector *)&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<String>::_unref((CowData<String> *)&local_50);
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
LAB_0010c240:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<String>>::validated_call
          (MethodBindTRC<Vector<String>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  long local_40 [2];
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
      local_48 = (Variant **)0x10aec8;
      local_40[0] = 0x35;
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
      goto LAB_0010c4d7;
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
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_0010c4d7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<String>>::ptrcall
          (MethodBindTRC<Vector<String>> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  long local_40 [2];
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
      local_48 = (void **)0x10aec8;
      local_40[0] = 0x35;
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
      goto LAB_0010c6b3;
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
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)((long)param_3 + 8),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_0010c6b3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, StringName const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<StringName_const&,StringName_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010c9f2;
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
                    /* WARNING: Could not recover jumptable at 0x0010c87a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8);
    return;
  }
LAB_0010c9f2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, StringName const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<StringName_const&,StringName_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010cbfc;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010ca60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0010cbfc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::validated_call
          (MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this
          ,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010cc9e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8,
            *(undefined4 *)(param_2[2] + 8),param_2[3] + 8);
  StringName::operator=((StringName *)(param_3 + 8),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0010cc9e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::ptrcall
          (MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this
          ,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010ceae;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1],*param_2[2]
            ,param_2[3]);
  StringName::operator=((StringName *)param_3,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0010ceae:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&, StringName const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&>::validated_call
          (MethodBindTRC<StringName,StringName_const&,StringName_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010d0ba;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1] + 8);
  StringName::operator=((StringName *)(param_3 + 8),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0010d0ba:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&, StringName const&>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&>::ptrcall
          (MethodBindTRC<StringName,StringName_const&,StringName_const&> *this,Object *param_1,
          void **param_2,void *param_3)

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
      goto LAB_0010d2c0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  StringName::operator=((StringName *)param_3,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
LAB_0010d2c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Vector<String> const&, StringName const&>::validated_call(Object*,
   Variant const**, Variant*) const */

void MethodBindT<StringName_const&,Vector<String>const&,StringName_const&>::validated_call
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
      goto LAB_0010d61f;
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
                    /* WARNING: Could not recover jumptable at 0x0010d4c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(*(long *)(param_3 + 8) + 8) + 0x10,*(long *)(param_3 + 0x10) + 8);
    return;
  }
LAB_0010d61f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Vector<String> const&, StringName const&>::ptrcall(Object*, void
   const**, void*) const */

void MethodBindT<StringName_const&,Vector<String>const&,StringName_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010d811;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010d694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8),*(undefined8 *)((long)param_3 + 0x10));
    return;
  }
LAB_0010d811:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, StringName const&, StringName const&>::validated_call(Object*,
   Variant const**, Variant*) const */

void MethodBindT<StringName_const&,StringName_const&,StringName_const&>::validated_call
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
      goto LAB_0010d9e7;
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
                    /* WARNING: Could not recover jumptable at 0x0010d893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8,*(long *)(param_3 + 0x10) + 8);
    return;
  }
LAB_0010d9e7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, StringName const&, StringName const&>::ptrcall(Object*, void
   const**, void*) const */

void MethodBindT<StringName_const&,StringName_const&,StringName_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010dbd1;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010da54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8),*(undefined8 *)((long)param_3 + 0x10));
    return;
  }
LAB_0010dbd1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC37,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dcb0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((CowData<char32_t> *)&local_58);
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
LAB_0010dcb0:
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
  Variant **ppVVar1;
  Variant **ppVVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10aec8;
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
      goto LAB_0010df61;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar2 = local_48;
  if (local_48 != (Variant **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant *)0x0) {
      local_48 = (Variant **)0x0;
      Memory::free_static(ppVVar2 + -2,false);
    }
  }
LAB_0010df61:
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
  void **ppvVar1;
  void **ppvVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10aec8;
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
      goto LAB_0010e14e;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar2 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar2 + -2,false);
    }
  }
LAB_0010e14e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
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
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e4a4;
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
                    /* WARNING: Could not recover jumptable at 0x0010e30d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010e4a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
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
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e6a4;
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
                    /* WARNING: Could not recover jumptable at 0x0010e509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010e6a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Dictionary_const&>::call
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
  long local_50;
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
      _err_print_error(&_LC37,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar9 = (long *)(local_50 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e860;
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
      if (in_R8D != 1) goto LAB_0010e8b0;
LAB_0010e8a0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010e8b0:
        uVar6 = 4;
        goto LAB_0010e855;
      }
      if (in_R8D == 1) goto LAB_0010e8a0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1b);
    uVar4 = _LC89;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Dictionary((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    Dictionary::~Dictionary((Dictionary *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_0010e855:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010e860:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, StringName const&, StringName const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindT<StringName_const&,StringName_const&,StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 *local_58 [3];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 == (long *)0x0) || (plVar12[1] == 0)) || (*(char *)(plVar12[1] + 0x2e) == '\0')) {
LAB_0010eaea:
    pVVar15 = param_2[0xb];
    pVVar1 = param_2[0xc];
    uVar7 = 3;
    if (in_R8D < 4) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant *)0x0) {
        iVar11 = 0;
        lVar14 = 0;
      }
      else {
        lVar14 = *(long *)(pVVar2 + -8);
        iVar11 = (int)lVar14;
      }
      if ((int)(3 - in_R8D) <= iVar11) {
        lVar8 = 0;
        do {
          if ((int)lVar8 < (int)in_R8D) {
            pVVar13 = *(Variant **)(param_4 + lVar8 * 8);
          }
          else {
            uVar10 = iVar11 + -3 + (int)lVar8;
            if (lVar14 <= (int)uVar10) {
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar14,"p_index",
                         "size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            pVVar13 = pVVar2 + (ulong)uVar10 * 0x18;
          }
          local_58[lVar8] = (undefined4 *)pVVar13;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        *in_R9 = 0;
        if (((ulong)pVVar15 & 1) != 0) {
          pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
        }
        cVar6 = Variant::can_convert_strict(*local_58[2],0x15);
        uVar4 = _LC91;
        if (cVar6 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        Variant::operator_cast_to_StringName((Variant *)&local_78);
        cVar6 = Variant::can_convert_strict(*local_58[1],0x15);
        uVar4 = _LC92;
        if (cVar6 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        Variant::operator_cast_to_StringName((Variant *)&local_70);
        cVar6 = Variant::can_convert_strict(*local_58[0],0x15);
        uVar4 = _LC93;
        if (cVar6 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        Variant::operator_cast_to_StringName((Variant *)&local_68);
        (*(code *)pVVar15)((Variant *)((long)plVar12 + (long)pVVar1),(Variant *)&local_68,
                           (Variant *)&local_70,(Variant *)&local_78);
        if (StringName::configured == '\0') goto LAB_0010ec92;
        if (local_68 != (char *)0x0) {
          StringName::unref();
          if (StringName::configured == '\0') goto LAB_0010ec92;
        }
        if (local_70 != 0) {
          StringName::unref();
          goto LAB_0010ec5f;
        }
        goto LAB_0010ec68;
      }
      uVar7 = 4;
    }
    *in_R9 = uVar7;
    in_R9[2] = 3;
  }
  else {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_68 != (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      goto LAB_0010eaea;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    MethodBind::get_name();
    local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
    local_70 = 0;
    local_60 = 0x35;
    String::parse_latin1((StrRange *)&local_70);
    vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
    _err_print_error(&_LC37,"./core/object/method_bind.h",0x154,
                     "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                     ,(StringName *)&local_68,0);
    pcVar5 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar12 = (long *)(local_68 + -0x10);
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar14 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar12 = (long *)(local_70 + -0x10);
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
LAB_0010ec5f:
    if (StringName::configured == '\0') goto LAB_0010ec92;
LAB_0010ec68:
    if (local_78 != 0) {
      StringName::unref();
    }
  }
LAB_0010ec92:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&, StringName const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindTRC<StringName,StringName_const&,StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  int iVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  bool bVar16;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC37,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_68 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar11 = (long *)(local_70 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f0c0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar14 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar14 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_0010f108;
      pVVar13 = *(Variant **)param_4;
LAB_0010f11d:
      pVVar14 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar14 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar7) {
LAB_0010f108:
        uVar8 = 4;
        goto LAB_0010f0f5;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar2 <= lVar10) goto LAB_0010f1f0;
        pVVar13 = pVVar14 + lVar10 * 0x18;
      }
      else {
        pVVar13 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010f11d;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar7));
      if (lVar2 <= lVar10) {
LAB_0010f1f0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar14 = pVVar14 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar15 & 1) != 0) {
      pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar14,0x15);
    uVar4 = _LC92;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_70);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13,0x15);
    uVar4 = _LC93;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    (*(code *)pVVar15)((StringName *)&local_78,(Variant *)((long)plVar11 + (long)pVVar1),
                       (Variant *)&local_68,(Variant *)&local_70);
    Variant::Variant((Variant *)local_58,(StringName *)&local_78);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    bVar16 = StringName::configured != '\0';
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (bVar16) {
      if (local_78 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_0010f0c0;
      }
      if (local_68 != (char *)0x0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_0010f0c0;
      }
      if (local_70 != 0) {
        StringName::unref();
      }
    }
  }
  else {
    uVar8 = 3;
LAB_0010f0f5:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_0010f0c0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<StringName_const&,StringName_const&>::call
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
  Variant *pVVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC37,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f510;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar10 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar10 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_0010f560;
      pVVar12 = *(Variant **)param_4;
LAB_0010f57d:
      pVVar10 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar6) {
LAB_0010f560:
        uVar7 = 4;
        goto LAB_0010f54d;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar13 + -2);
        if (lVar2 <= lVar9) goto LAB_0010f640;
        pVVar12 = pVVar10 + lVar9 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010f57d;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0010f640:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x15);
    uVar4 = _LC92;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_60);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x15);
    uVar4 = _LC93;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_58);
    (*(code *)pVVar14)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_58,
                       (Variant *)&local_60);
    if (StringName::configured != '\0') {
      if (local_58 != (char *)0x0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_0010f510;
      }
      if (local_60 != 0) {
        StringName::unref();
      }
    }
  }
  else {
    uVar7 = 3;
LAB_0010f54d:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0010f510:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  Variant *pVVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  bool bVar16;
  long local_b0;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Variant *local_68 [5];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 == (long *)0x0) || (plVar13[1] == 0)) || (*(char *)(plVar13[1] + 0x2e) == '\0')) {
LAB_0010f7ce:
    pVVar15 = param_2[0xb];
    pVVar1 = param_2[0xc];
    if (in_R8D < 5) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant *)0x0) {
        iVar7 = 0;
        lVar14 = 0;
      }
      else {
        lVar14 = *(long *)(pVVar2 + -8);
        iVar7 = (int)lVar14;
      }
      if ((int)(4 - in_R8D) <= iVar7) {
        lVar9 = 0;
        do {
          if ((int)lVar9 < (int)in_R8D) {
            pVVar12 = *(Variant **)(param_4 + lVar9 * 8);
          }
          else {
            uVar11 = iVar7 + -4 + (int)lVar9;
            if (lVar14 <= (int)uVar11) {
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar14,"p_index",
                         "size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            pVVar12 = pVVar2 + (ulong)uVar11 * 0x18;
          }
          local_68[lVar9] = pVVar12;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 4);
        *in_R9 = 0;
        if (((ulong)pVVar15 & 1) != 0) {
          pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[3],0x15);
        uVar4 = _LC94;
        if (cVar6 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        Variant::operator_cast_to_StringName((Variant *)&local_a8);
        cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[2],2);
        uVar4 = _LC95;
        if (cVar6 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        iVar7 = Variant::operator_cast_to_int(local_68[2]);
        cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[1],0x15);
        uVar4 = _LC92;
        if (cVar6 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        Variant::operator_cast_to_StringName((Variant *)&local_a0);
        cVar6 = Variant::can_convert_strict(*(undefined4 *)local_68[0],0x15);
        uVar4 = _LC93;
        if (cVar6 == '\0') {
          *in_R9 = 2;
          *(undefined8 *)(in_R9 + 1) = uVar4;
        }
        Variant::operator_cast_to_StringName((Variant *)&local_98);
        (*(code *)pVVar15)((StringName *)&local_b0,(Variant *)((long)plVar13 + (long)pVVar1),
                           (Variant *)&local_98,(Variant *)&local_a0,iVar7,(Variant *)&local_a8);
        Variant::Variant((Variant *)local_88,(StringName *)&local_b0);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        bVar16 = StringName::configured == '\0';
        *(undefined4 *)param_1 = local_88[0];
        *(undefined8 *)(param_1 + 8) = local_80;
        *(undefined8 *)(param_1 + 0x10) = uStack_78;
        if (bVar16) goto LAB_0010fa20;
        if (local_b0 != 0) {
          StringName::unref();
          if (StringName::configured == '\0') goto LAB_0010fa20;
        }
        if (local_98 != (char *)0x0) {
          StringName::unref();
          if (StringName::configured == '\0') goto LAB_0010fa20;
        }
        if (local_a0 != 0) {
          StringName::unref();
          goto LAB_0010f9d3;
        }
        goto LAB_0010f9dc;
      }
      uVar8 = 4;
    }
    else {
      uVar8 = 3;
    }
    *in_R9 = uVar8;
    in_R9[2] = 4;
  }
  else {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))();
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_98 != (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      goto LAB_0010f7ce;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    MethodBind::get_name();
    local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
    local_a0 = 0;
    local_90 = 0x35;
    String::parse_latin1((StrRange *)&local_a0);
    vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
    _err_print_error(&_LC37,"./core/object/method_bind.h",0x267,
                     "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                     ,(StringName *)&local_98,0);
    pcVar5 = local_98;
    if (local_98 != (char *)0x0) {
      LOCK();
      plVar13 = (long *)(local_98 + -0x10);
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (*plVar13 == 0) {
        local_98 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar14 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar13 = (long *)(local_a0 + -0x10);
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (*plVar13 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar14 + -0x10),false);
      }
    }
LAB_0010f9d3:
    if (StringName::configured == '\0') goto LAB_0010fa20;
LAB_0010f9dc:
    if (local_a8 != 0) {
      StringName::unref();
    }
  }
LAB_0010fa20:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Vector<String> const&, StringName const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindT<StringName_const&,Vector<String>const&,StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  Variant *pVVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  long lVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 *local_58 [3];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar8 = (long *)plVar12[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar12 + 0x40))();
      }
    }
    else {
      plVar8 = (long *)(plVar12[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC37,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fe62;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar6 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar9 = 0;
      lVar13 = 0;
    }
    else {
      lVar13 = *(long *)(pVVar2 + -8);
      iVar9 = (int)lVar13;
    }
    if ((int)(3 - in_R8D) <= iVar9) {
      lVar7 = 0;
      do {
        if ((int)lVar7 < (int)in_R8D) {
          pVVar11 = *(Variant **)(param_4 + lVar7 * 8);
        }
        else {
          uVar10 = iVar9 + -3 + (int)lVar7;
          if (lVar13 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar13,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar11 = pVVar2 + (ulong)uVar10 * 0x18;
        }
        local_58[lVar7] = (undefined4 *)pVVar11;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar14 & 1) != 0) {
        pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*local_58[2],0x15);
      uVar4 = _LC91;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant *)&local_78);
      cVar5 = Variant::can_convert_strict(*local_58[1],0x22);
      uVar4 = _LC96;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Vector((Variant *)&local_68);
      cVar5 = Variant::can_convert_strict(*local_58[0],0x15);
      uVar4 = _LC93;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant *)&local_70);
      (*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),(Variant *)&local_70,
                         (Variant *)&local_68,(Variant *)&local_78);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      CowData<String>::_unref((CowData<String> *)&local_60);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fe62;
    }
    uVar6 = 4;
  }
  *in_R9 = uVar6;
  in_R9[2] = 3;
LAB_0010fe62:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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
  char *pcVar5;
  char cVar6;
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
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC37,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar5 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_48 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001101b0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00110200;
LAB_001101f0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00110200:
        uVar7 = 4;
        goto LAB_001101a5;
      }
      if (in_R8D == 1) goto LAB_001101f0;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC97;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar7 = 3;
LAB_001101a5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_001101b0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<StringName_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_00110427;
  local_78 = 0;
  local_68 = &_LC12;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x15);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00110520:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00110520;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar5;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
  iVar7 = *param_2;
LAB_00110427:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<StringName const&, StringName const&, StringName
   const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<StringName_const&,StringName_const&,StringName_const&>::_gen_argument_type_info
          (int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&, StringName const&>::_gen_argument_type_info(int)
   const */

GetTypeInfo<StringName,void> *
MethodBindTRC<StringName,StringName_const&,StringName_const&>::_gen_argument_type_info(int param_1)

{
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<StringName,void> *this;
  long in_FS_OFFSET;
  int local_6c;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  this = (GetTypeInfo<StringName,void> *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_6c = 0;
    call_get_argument_type_info_helper<StringName_const&>
              (in_EDX,&local_6c,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<StringName_const&>
              (in_EDX,&local_6c,(PropertyInfo *)&local_68);
    *(undefined4 *)this = (undefined4)local_68;
    *(undefined8 *)(this + 8) = local_60._0_8_;
    *(undefined8 *)(this + 0x10) = local_60._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_50;
    *(undefined8 *)(this + 0x20) = local_48;
    *(undefined4 *)(this + 0x28) = local_40;
  }
  else {
    GetTypeInfo<StringName,void>::get_class_info(this);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::_gen_argument_type_info(int) const */

GetTypeInfo<StringName,void> *
MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::
_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  undefined8 uVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<StringName,void> *this;
  long in_FS_OFFSET;
  uint local_cc;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  this = (GetTypeInfo<StringName,void> *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (3 < in_EDX) {
    GetTypeInfo<StringName,void>::get_class_info(this);
    goto LAB_001108e5;
  }
  local_a0 = (undefined1  [16])0x0;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 6;
  local_cc = 0;
  call_get_argument_type_info_helper<StringName_const&>
            (in_EDX,(int *)&local_cc,(PropertyInfo *)&local_a8);
  call_get_argument_type_info_helper<StringName_const&>
            (in_EDX,(int *)&local_cc,(PropertyInfo *)&local_a8);
  uVar3 = local_cc;
  if (in_EDX == local_cc) {
    local_c8 = 0;
    local_78 = &_LC12;
    local_c0 = 0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_c0 == 0) {
LAB_00110a1b:
      local_50 = 6;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_c8);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_c0);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_00110a1b;
      StringName::StringName((StringName *)&local_b0,(String *)&local_58,false);
      if (local_70._8_8_ == local_b0) {
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_70._8_8_ = local_b0;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    if ((StringName::configured != '\0') && (local_c8 != 0)) {
      StringName::unref();
    }
    local_a8 = CONCAT44(local_a8._4_4_,local_78._0_4_);
    if (local_a0._0_8_ != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      uVar4 = local_70._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70._8_8_;
      local_70 = auVar2 << 0x40;
      local_a0._0_8_ = uVar4;
    }
    if (local_a0._8_8_ != local_70._8_8_) {
      StringName::unref();
      uVar4 = local_70._8_8_;
      local_70._8_8_ = 0;
      local_a0._8_8_ = uVar4;
    }
    local_90 = CONCAT44(local_90._4_4_,local_60);
    if (local_88 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = local_58;
      local_58 = 0;
    }
    local_80 = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  local_cc = uVar3 + 1;
  call_get_argument_type_info_helper<StringName_const&>
            (in_EDX,(int *)&local_cc,(PropertyInfo *)&local_a8);
  *(undefined4 *)this = (undefined4)local_a8;
  *(undefined8 *)(this + 8) = local_a0._0_8_;
  *(undefined8 *)(this + 0x10) = local_a0._8_8_;
  *(undefined4 *)(this + 0x18) = (undefined4)local_90;
  *(long *)(this + 0x20) = local_88;
  *(undefined4 *)(this + 0x28) = local_80;
LAB_001108e5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* void call_get_argument_type_info<StringName const&, Vector<String> const&, StringName
   const&>(int, PropertyInfo&) */

void call_get_argument_type_info<StringName_const&,Vector<String>const&,StringName_const&>
               (int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_9c;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0;
  call_get_argument_type_info_helper<StringName_const&>(param_1,&local_9c,param_2);
  if (param_1 != local_9c) goto LAB_00110b89;
  local_88 = 0;
  local_78 = &_LC12;
  local_90 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_70._8_8_;
  local_70 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x22);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00110c98:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00110c98;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_2 = local_78._0_4_;
  if (*(long *)(param_2 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar5 = local_70._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_70._8_8_;
    local_70 = auVar3 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar5;
  }
  if (*(long *)(param_2 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar5 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar5;
  }
  lVar6 = local_58;
  *(int *)(param_2 + 0x18) = local_60;
  if (*(long *)(param_2 + 0x20) == local_58) {
    *(undefined4 *)(param_2 + 0x28) = local_50;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    *(long *)(param_2 + 0x20) = local_58;
    *(undefined4 *)(param_2 + 0x28) = local_50;
  }
  if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_70._0_8_;
  if (local_70._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_70._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_70._8_8_;
      local_70 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00110b89:
  local_9c = local_9c + 1;
  call_get_argument_type_info_helper<StringName_const&>(param_1,&local_9c,param_2);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<StringName const&, Vector<String> const&, StringName
   const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<StringName_const&,Vector<String>const&,StringName_const&>::_gen_argument_type_info
          (int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<StringName_const&,Vector<String>const&,StringName_const&>
            (in_EDX,pPVar1);
  return pPVar1;
}



/* MethodBindT<StringName const&, StringName const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<StringName_const&,StringName_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

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
/* Translation::~Translation() */

void __thiscall Translation::~Translation(Translation *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

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
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,StringName_const&>::~MethodBindT
          (MethodBindT<StringName_const&,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this
          )

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<StringName, StringName const&, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<StringName,StringName_const&,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<StringName,StringName_const&,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, Vector<String> const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,Vector<String>const&,StringName_const&>::~MethodBindT
          (MethodBindT<StringName_const&,Vector<String>const&,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, StringName const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,StringName_const&,StringName_const&>::~MethodBindT
          (MethodBindT<StringName_const&,StringName_const&,StringName_const&> *this)

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
/* CallableCustomMethodPointer<Translation, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Translation,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Translation,void> *this)

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

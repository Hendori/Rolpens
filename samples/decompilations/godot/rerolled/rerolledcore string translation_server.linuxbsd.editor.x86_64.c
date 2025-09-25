/* TranslationServer::get_loaded_locales() const */TranslationServer * __thiscall TranslationServer::get_loaded_locales(TranslationServer *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   TranslationDomain::get_loaded_locales();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::add_translation(Ref<Translation> const&) */void TranslationServer::add_translation(Ref *param_1) {
   TranslationDomain::add_translation(*(Ref**)( param_1 + 0x188 ));
   return;
}
/* TranslationServer::remove_translation(Ref<Translation> const&) */void TranslationServer::remove_translation(Ref *param_1) {
   TranslationDomain::remove_translation(*(Ref**)( param_1 + 0x188 ));
   return;
}
/* TranslationServer::get_translation_object(String const&) */String *TranslationServer::get_translation_object(String *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   TranslationDomain::get_translation_object(param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::clear() */void TranslationServer::clear(void) {
   TranslationDomain::clear();
   return;
}
/* TranslationServer::translate(StringName const&, StringName const&) const */TranslationServer * __thiscall
TranslationServer::translate(TranslationServer *this,StringName *param_1,StringName *param_2){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1[0x208] == (StringName)0x0) {
      StringName::StringName((StringName*)this, param_2);
   }
 else {
      TranslationDomain::translate((StringName*)this, *(StringName**)( param_1 + 0x188 ));
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::translate_plural(StringName const&, StringName const&, int, StringName const&)
   const */TranslationServer * __thiscall
TranslationServer::translate_plural
          (TranslationServer *this,StringName *param_1,StringName *param_2,int param_3,
          StringName *param_4){
   long lVar1;
   undefined4 in_register_0000000c;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1[0x208] == (StringName)0x0) {
      if ((int)param_4 == 1) {
         StringName::StringName((StringName*)this, param_2);
      }
 else {
         StringName::StringName((StringName*)this, (StringName*)CONCAT44(in_register_0000000c, param_3));
      }

   }
 else {
      TranslationDomain::translate_plural((StringName*)this, *(StringName**)( param_1 + 0x188 ), (int)param_2, (StringName*)CONCAT44(in_register_0000000c, param_3));
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::is_pseudolocalization_enabled() const */void TranslationServer::is_pseudolocalization_enabled(void) {
   TranslationDomain::is_pseudolocalization_enabled();
   return;
}
/* TranslationServer::pseudolocalize(StringName const&) const */StringName *TranslationServer::pseudolocalize(StringName *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   TranslationDomain::pseudolocalize(param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::set_pseudolocalization_enabled(bool) */void TranslationServer::set_pseudolocalization_enabled(bool param_1) {
   int iVar1;
   long *plVar2;
   long lVar3;
   undefined7 in_register_00000039;
   TranslationDomain::set_pseudolocalization_enabled(SUB81(*(undefined8*)( CONCAT71(in_register_00000039, param_1) + 0x188 ), 0));
   ResourceLoader::reload_translation_remaps();
   plVar2 = (long*)OS::get_singleton();
   lVar3 = ( **(code**)( *plVar2 + 0x1d0 ) )(plVar2);
   if (lVar3 != 0) {
      plVar2 = (long*)OS::get_singleton();
      iVar1 = ( **(code**)( *plVar2 + 0x1d0 ) )(plVar2);
      Object::notification(iVar1, true);
      return;
   }

   return;
}
/* TranslationServer::has_domain(StringName const&) const */undefined8 TranslationServer::has_domain(TranslationServer *this, StringName *param_1) {
   long lVar1;
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
   undefined8 uVar14;
   uint uVar15;
   ulong uVar16;
   uint uVar17;
   lVar1 = *(long*)param_1;
   uVar14 = 1;
   if (lVar1 != 0) {
      uVar14 = 0;
      if (( *(long*)( this + 0x1b0 ) != 0 ) && ( *(int*)( this + 0x1d4 ) != 0 )) {
         uVar16 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 ));
         lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1d0 ) * 8 );
         uVar11 = *(uint*)( lVar1 + 0x20 );
         if (*(uint*)( lVar1 + 0x20 ) == 0) {
            uVar11 = 1;
         }

         auVar3._8_8_ = 0;
         auVar3._0_8_ = (ulong)uVar11 * lVar2;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar16;
         lVar13 = SUB168(auVar3 * auVar7, 8);
         uVar15 = *(uint*)( *(long*)( this + 0x1b8 ) + lVar13 * 4 );
         iVar12 = SUB164(auVar3 * auVar7, 8);
         if (uVar15 != 0) {
            uVar17 = 0;
            while (( uVar15 != uVar11 || ( lVar1 != *(long*)( *(long*)( *(long*)( this + 0x1b0 ) + lVar13 * 8 ) + 0x10 ) ) )) {
               uVar17 = uVar17 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar16;
               lVar13 = SUB168(auVar4 * auVar8, 8);
               uVar15 = *(uint*)( *(long*)( this + 0x1b8 ) + lVar13 * 4 );
               iVar12 = SUB164(auVar4 * auVar8, 8);
               if (( uVar15 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 ) + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,SUB164(auVar6 * auVar10, 8) < uVar17) {
                  return 0;
               }

            }
;
            uVar14 = 1;
         }

      }

   }

   return uVar14;
}
/* TranslationServer::remove_domain(StringName const&) */void TranslationServer::remove_domain(TranslationServer *this, StringName *param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   undefined8 uVar10;
   Object *pOVar11;
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
   char cVar30;
   uint uVar31;
   ulong uVar32;
   ulong uVar33;
   uint uVar34;
   long *plVar35;
   ulong uVar36;
   ulong uVar37;
   ulong uVar38;
   uint uVar39;
   uint uVar40;
   uint *puVar41;
   lVar6 = *(long*)param_1;
   if (lVar6 == 0) {
      _err_print_error("remove_domain", "core/string/translation_server.cpp", 0x1d9, "Condition \"p_domain == StringName()\" is true.", "Cannot remove main translation domain.", 0, 0);
      return;
   }

   lVar7 = *(long*)( this + 0x1b0 );
   if (( lVar7 != 0 ) && ( *(int*)( this + 0x1d4 ) != 0 )) {
      lVar8 = *(long*)( this + 0x1b8 );
      uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 );
      uVar38 = CONCAT44(0, uVar5);
      lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1d0 ) * 8 );
      uVar34 = *(uint*)( lVar6 + 0x20 );
      if (*(uint*)( lVar6 + 0x20 ) == 0) {
         uVar34 = 1;
      }

      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar34 * lVar9;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar38;
      uVar32 = SUB168(auVar12 * auVar21, 8);
      uVar40 = *(uint*)( lVar8 + uVar32 * 4 );
      uVar36 = (ulong)SUB164(auVar12 * auVar21, 8);
      if (uVar40 != 0) {
         uVar39 = 0;
         do {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = ( ulong )((int)uVar36 + 1) * lVar9;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar38;
            uVar33 = SUB168(auVar15 * auVar24, 8);
            uVar31 = SUB164(auVar15 * auVar24, 8);
            if (( uVar34 == uVar40 ) && ( lVar6 == *(long*)( *(long*)( lVar7 + uVar32 * 8 ) + 0x10 ) )) {
               puVar41 = (uint*)( lVar8 + uVar33 * 4 );
               uVar34 = *puVar41;
               if (( uVar34 != 0 ) && ( auVar16._8_8_ = 0 ),auVar16._0_8_ = (ulong)uVar34 * lVar9,auVar25._8_8_ = 0,auVar25._0_8_ = uVar38,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( uVar31 + uVar5 ) - SUB164(auVar16 * auVar25, 8)) * lVar9,auVar26._8_8_ = 0,auVar26._0_8_ = uVar38,uVar32 = (ulong)uVar31,uVar37 = uVar36,SUB164(auVar17 * auVar26, 8) != 0) {
                  while (true) {
                     uVar36 = uVar32;
                     puVar1 = (uint*)( lVar8 + uVar37 * 4 );
                     *puVar41 = *puVar1;
                     puVar2 = (undefined8*)( lVar7 + uVar33 * 8 );
                     *puVar1 = uVar34;
                     puVar3 = (undefined8*)( lVar7 + uVar37 * 8 );
                     uVar10 = *puVar2;
                     *puVar2 = *puVar3;
                     *puVar3 = uVar10;
                     auVar20._8_8_ = 0;
                     auVar20._0_8_ = ( ulong )((int)uVar36 + 1) * lVar9;
                     auVar29._8_8_ = 0;
                     auVar29._0_8_ = uVar38;
                     uVar33 = SUB168(auVar20 * auVar29, 8);
                     puVar41 = (uint*)( lVar8 + uVar33 * 4 );
                     uVar34 = *puVar41;
                     if (( uVar34 == 0 ) || ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar34 * lVar9,auVar27._8_8_ = 0,auVar27._0_8_ = uVar38,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( SUB164(auVar20 * auVar29, 8) + uVar5 ) - SUB164(auVar18 * auVar27, 8)) * lVar9,auVar28._8_8_ = 0,auVar28._0_8_ = uVar38,SUB164(auVar19 * auVar28, 8) == 0) break;
                     uVar32 = uVar33 & 0xffffffff;
                     uVar37 = uVar36;
                  }
;
               }

               plVar4 = (long*)( lVar7 + uVar36 * 8 );
               *(undefined4*)( lVar8 + uVar36 * 4 ) = 0;
               plVar35 = (long*)*plVar4;
               if (*(long**)( this + 0x1c0 ) == plVar35) {
                  *(long*)( this + 0x1c0 ) = *plVar35;
                  plVar35 = (long*)*plVar4;
                  if (*(long**)( this + 0x1c8 ) != plVar35) goto LAB_0010055b;
               }
 else if (*(long**)( this + 0x1c8 ) != plVar35) goto LAB_0010055b;
               *(long*)( this + 0x1c8 ) = plVar35[1];
               plVar35 = (long*)*plVar4;
               LAB_0010055b:if ((long*)plVar35[1] != (long*)0x0) {
                  *(long*)plVar35[1] = *plVar35;
                  plVar35 = (long*)*plVar4;
               }

               if (*plVar35 != 0) {
                  *(long*)( *plVar35 + 8 ) = plVar35[1];
                  plVar35 = (long*)*plVar4;
               }

               if (( plVar35[3] != 0 ) && ( cVar30 = cVar30 != '\0' )) {
                  pOVar11 = (Object*)plVar35[3];
                  cVar30 = predelete_handler(pOVar11);
                  if (cVar30 != '\0') {
                     ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
                     Memory::free_static(pOVar11, false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( plVar35[2] != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(plVar35, false);
               *(undefined8*)( *(long*)( this + 0x1b0 ) + uVar36 * 8 ) = 0;
               *(int*)( this + 0x1d4 ) = *(int*)( this + 0x1d4 ) + -1;
               return;
            }

            uVar40 = *(uint*)( lVar8 + uVar33 * 4 );
            uVar36 = uVar33 & 0xffffffff;
            uVar39 = uVar39 + 1;
         }
 while ( ( uVar40 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar40 * lVar9,auVar22._8_8_ = 0,auVar22._0_8_ = uVar38,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar5 + uVar31 ) - SUB164(auVar13 * auVar22, 8)) * lVar9,auVar23._8_8_ = 0,auVar23._0_8_ = uVar38,uVar32 = uVar33,uVar39 <= SUB164(auVar14 * auVar23, 8) );
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
/* TranslationServer::get_locale() const */void TranslationServer::get_locale(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x178 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x178 ));
   }

   return;
}
/* TranslationServer::get_argument_options(StringName const&, int, List<String, DefaultAllocator>*)
   const */void TranslationServer::get_argument_options(TranslationServer *this, StringName *param_1, int param_2, List *param_3) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   char cVar4;
   undefined1 *puVar5;
   CowData<char32_t> *this_00;
   undefined1(*pauVar6)[16];
   long *plVar7;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   lVar1 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar1 == 0) {
      local_68 = 0;
   }
 else {
      pcVar2 = *(char**)( lVar1 + 8 );
      local_68 = 0;
      if (pcVar2 == (char*)0x0) {
         if (*(long*)( lVar1 + 0x10 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)( lVar1 + 0x10 ));
         }

      }
 else {
         local_50 = strlen(pcVar2);
         local_58 = pcVar2;
         String::parse_latin1((StrRange*)&local_68);
      }

   }

   if (param_2 == 0) {
      cVar4 = String::operator ==((String*)&local_68, "get_language_name");
      puVar5 = language_map;
      if (cVar4 == '\0') {
         cVar4 = String::operator ==((String*)&local_68, "get_script_name");
         puVar5 = script_map;
         if (cVar4 == '\0') {
            cVar4 = String::operator ==((String*)&local_68, "get_country_name");
            if (cVar4 == '\0') goto LAB_001007f1;
            puVar5 = country_name_map;
         }

      }

      plVar7 = *(long**)( puVar5 + 0x18 );
      if (plVar7 != (long*)0x0) {
         do {
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

            pcVar2 = local_58;
            plVar3 = *(long**)param_3;
            lVar1 = plVar3[1];
            *(undefined8*)( this_00 + 8 ) = 0;
            *(long**)( this_00 + 0x18 ) = plVar3;
            *(long*)( this_00 + 0x10 ) = lVar1;
            if (lVar1 != 0) {
               *(CowData<char32_t>**)( lVar1 + 8 ) = this_00;
            }

            plVar3[1] = (long)this_00;
            if (*plVar3 == 0) {
               *plVar3 = (long)this_00;
            }

            *(int*)( plVar3 + 2 ) = (int)plVar3[2] + 1;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar3 = (long*)( local_58 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }

            }

            lVar1 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar3 = (long*)( local_60 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }

            }

            plVar7 = (long*)*plVar7;
         }
 while ( plVar7 != (long*)0x0 );
      }

   }

   LAB_001007f1:Object::get_argument_options((StringName*)this, (int)param_1, (List*)(ulong)(uint)param_2);
   lVar1 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar7 = (long*)( local_68 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* TranslationServer::get_fallback_locale() const */void TranslationServer::get_fallback_locale(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x180 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x180 ));
   }

   return;
}
/* TranslationServer::tool_translate(StringName const&, StringName const&) const */StringName *TranslationServer::tool_translate(StringName *param_1, StringName *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   TranslationDomain::translate(param_1, *(StringName**)( param_2 + 400 ));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::tool_translate_plural(StringName const&, StringName const&, int, StringName
   const&) const */StringName *TranslationServer::tool_translate_plural(StringName *param_1, StringName *param_2, int param_3, StringName *param_4) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   TranslationDomain::translate_plural(param_1, *(StringName**)( param_2 + 400 ), param_3, param_4);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::property_translate(StringName const&, StringName const&) const */StringName *TranslationServer::property_translate(StringName *param_1, StringName *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   TranslationDomain::translate(param_1, *(StringName**)( param_2 + 0x198 ));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::doc_translate(StringName const&, StringName const&) const */StringName *TranslationServer::doc_translate(StringName *param_1, StringName *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   TranslationDomain::translate(param_1, *(StringName**)( param_2 + 0x1a0 ));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::doc_translate_plural(StringName const&, StringName const&, int, StringName
   const&) const */StringName *TranslationServer::doc_translate_plural(StringName *param_1, StringName *param_2, int param_3, StringName *param_4) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   TranslationDomain::translate_plural(param_1, *(StringName**)( param_2 + 0x1a0 ), param_3, param_4);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::get_or_add_domain(StringName const&) */StringName *TranslationServer::get_or_add_domain(StringName *param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   uint uVar12;
   char cVar13;
   TranslationDomain *this;
   undefined8 *puVar14;
   uint uVar15;
   StringName *in_RDX;
   long lVar16;
   TranslationDomain *pTVar17;
   long in_RSI;
   uint uVar18;
   ulong uVar19;
   uint uVar20;
   Object *pOVar21;
   lVar1 = *(long*)in_RDX;
   if (lVar1 == 0) {
      *(undefined8*)param_1 = 0;
      lVar1 = *(long*)( in_RSI + 0x188 );
      joined_r0x00100e91:if (lVar1 == 0) {
         return param_1;
      }

      *(long*)param_1 = lVar1;
      cVar13 = RefCounted::reference();
      if (cVar13 != '\0') {
         return param_1;
      }

      goto LAB_00100d6a;
   }

   lVar2 = *(long*)( in_RSI + 0x1b0 );
   if (( lVar2 != 0 ) && ( *(int*)( in_RSI + 0x1d4 ) != 0 )) {
      uVar19 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x1d0 ) * 4 ));
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x1d0 ) * 8 );
      uVar12 = *(uint*)( lVar1 + 0x20 );
      if (*(uint*)( lVar1 + 0x20 ) == 0) {
         uVar12 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar12 * lVar3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar19;
      lVar16 = SUB168(auVar4 * auVar8, 8);
      uVar18 = *(uint*)( *(long*)( in_RSI + 0x1b8 ) + lVar16 * 4 );
      uVar15 = SUB164(auVar4 * auVar8, 8);
      if (uVar18 != 0) {
         uVar20 = 0;
         while (( uVar12 != uVar18 || ( lVar1 != *(long*)( *(long*)( lVar2 + lVar16 * 8 ) + 0x10 ) ) )) {
            uVar20 = uVar20 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(uVar15 + 1) * lVar3;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar19;
            lVar16 = SUB168(auVar5 * auVar9, 8);
            uVar18 = *(uint*)( *(long*)( in_RSI + 0x1b8 ) + lVar16 * 4 );
            uVar15 = SUB164(auVar5 * auVar9, 8);
            if (( uVar18 == 0 ) || ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar18 * lVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar19,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x1d0 ) * 4 ) + uVar15 ) - SUB164(auVar6 * auVar10, 8)) * lVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar19,SUB164(auVar7 * auVar11, 8) < uVar20) goto LAB_00100d8d;
         }
;
         lVar1 = *(long*)( lVar2 + (ulong)uVar15 * 8 );
         if (*(long*)( lVar1 + 0x18 ) != 0) {
            *(undefined8*)param_1 = 0;
            lVar1 = *(long*)( lVar1 + 0x18 );
            goto joined_r0x00100e91;
         }

         _err_print_error("get_or_add_domain", "core/string/translation_server.cpp", 0x1d1, "Bug (please report): Found invalid translation domain.", 0, 0);
      }

   }

   LAB_00100d8d = (TranslationDomain*)operator_new(0x1c8, "");
   TranslationDomain::TranslationDomain(this);
   postinitialize_handler((Object*)this);
   cVar13 = RefCounted::init_ref();
   if (cVar13 == '\0') {
      puVar14 = (undefined8*)HashMap<StringName,Ref<TranslationDomain>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<TranslationDomain>>>>::operator []((HashMap<StringName,Ref<TranslationDomain>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<TranslationDomain>>>>*)( in_RSI + 0x1a8 ), in_RDX);
      pOVar21 = (Object*)*puVar14;
      if (pOVar21 == (Object*)0x0) {
         LAB_00100d6a:*(undefined8*)param_1 = 0;
         return param_1;
      }

      *puVar14 = 0;
      cVar13 = RefCounted::unreference();
      if (( cVar13 == '\0' ) || ( cVar13 = cVar13 == '\0' )) goto LAB_00100d6a;
      this(TranslationDomain * 0x0);
   }
 else {
      puVar14 = (undefined8*)HashMap<StringName,Ref<TranslationDomain>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<TranslationDomain>>>>::operator []((HashMap<StringName,Ref<TranslationDomain>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<TranslationDomain>>>>*)( in_RSI + 0x1a8 ), in_RDX);
      pOVar21 = (Object*)*puVar14;
      pTVar17 = (TranslationDomain*)pOVar21;
      if (this == (TranslationDomain*)pOVar21) goto LAB_00100e2d;
      *puVar14 = this;
      cVar13 = RefCounted::reference();
      if (cVar13 == '\0') {
         *puVar14 = 0;
      }

      pTVar17 = this;
      if (( ( pOVar21 == (Object*)0x0 ) || ( cVar13 = RefCounted::unreference() ),cVar13 == '\0' )) goto LAB_00100e2d;
   }

   ( **(code**)( *(long*)pOVar21 + 0x140 ) )(pOVar21);
   Memory::free_static(pOVar21, false);
   *(undefined8*)param_1 = 0;
   pTVar17 = this;
   if (this == (TranslationDomain*)0x0) {
      return param_1;
   }

   LAB_00100e2d:*(TranslationDomain**)param_1 = pTVar17;
   cVar13 = RefCounted::reference();
   if (cVar13 == '\0') {
      *(undefined8*)param_1 = 0;
   }

   cVar13 = RefCounted::unreference();
   if (cVar13 == '\0') {
      return param_1;
   }

   cVar13 = predelete_handler((Object*)pTVar17);
   if (cVar13 == '\0') {
      return param_1;
   }

   ( **(code**)( *(long*)pTVar17 + 0x140 ) )(pTVar17);
   Memory::free_static(pTVar17, false);
   return param_1;
}
/* TranslationServer::reload_pseudolocalization() */void TranslationServer::reload_pseudolocalization(TranslationServer *this) {
   undefined8 uVar1;
   String *pSVar2;
   int iVar3;
   long *plVar4;
   long lVar5;
   long in_FS_OFFSET;
   float fVar6;
   long local_68;
   long local_60;
   int local_58[6];
   long local_40;
   uVar1 = *(undefined8*)( this + 0x188 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_60, "internationalization/pseudolocalization/replace_with_accents", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   Variant::operator_cast_to_bool((Variant*)local_58);
   TranslationDomain::set_pseudolocalization_accents_enabled(SUB81(uVar1, 0));
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   uVar1 = *(undefined8*)( this + 0x188 );
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_60, "internationalization/pseudolocalization/double_vowels", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   Variant::operator_cast_to_bool((Variant*)local_58);
   TranslationDomain::set_pseudolocalization_double_vowels_enabled(SUB81(uVar1, 0));
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   uVar1 = *(undefined8*)( this + 0x188 );
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_60, "internationalization/pseudolocalization/fake_bidi", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   Variant::operator_cast_to_bool((Variant*)local_58);
   TranslationDomain::set_pseudolocalization_fake_bidi_enabled(SUB81(uVar1, 0));
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   uVar1 = *(undefined8*)( this + 0x188 );
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_60, "internationalization/pseudolocalization/override", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   Variant::operator_cast_to_bool((Variant*)local_58);
   TranslationDomain::set_pseudolocalization_override_enabled(SUB81(uVar1, 0));
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_60, "internationalization/pseudolocalization/expansion_ratio", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   fVar6 = Variant::operator_cast_to_float((Variant*)local_58);
   TranslationDomain::set_pseudolocalization_expansion_ratio(fVar6);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   pSVar2 = *(String**)( this + 0x188 );
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_68, "internationalization/pseudolocalization/prefix", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   Variant::operator_cast_to_String((Variant*)&local_60);
   TranslationDomain::set_pseudolocalization_prefix(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   pSVar2 = *(String**)( this + 0x188 );
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_68, "internationalization/pseudolocalization/suffix", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   Variant::operator_cast_to_String((Variant*)&local_60);
   TranslationDomain::set_pseudolocalization_suffix(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   uVar1 = *(undefined8*)( this + 0x188 );
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_60, "internationalization/pseudolocalization/skip_placeholders", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   Variant::operator_cast_to_bool((Variant*)local_58);
   TranslationDomain::set_pseudolocalization_skip_placeholders_enabled(SUB81(uVar1, 0));
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   ResourceLoader::reload_translation_remaps();
   plVar4 = (long*)OS::get_singleton();
   lVar5 = ( **(code**)( *plVar4 + 0x1d0 ) )(plVar4);
   if (lVar5 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      plVar4 = (long*)OS::get_singleton();
      iVar3 = ( **(code**)( *plVar4 + 0x1d0 ) )(plVar4);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Object::notification(iVar3, true);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::get_language_name(String const&) const */String *TranslationServer::get_language_name(String *param_1) {
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
   uint uVar12;
   uint uVar13;
   int iVar14;
   CowData *in_RDX;
   long lVar15;
   long lVar16;
   ulong uVar17;
   uint uVar18;
   if (( language_map._8_8_ != 0 ) && ( language_map._44_4_ != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + (ulong)(uint)language_map._40_4_ * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)language_map._40_4_ * 8 );
      uVar12 = String::hash();
      uVar17 = CONCAT44(0, uVar1);
      uVar13 = 1;
      if (uVar12 != 0) {
         uVar13 = uVar12;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar12 = *(uint*)( language_map._16_8_ + lVar15 * 4 );
      iVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar12 != 0) {
         uVar18 = 0;
         lVar16 = language_map._16_8_;
         do {
            if (( uVar13 == uVar12 ) && ( cVar11 = String::operator ==((String*)( *(long*)( language_map._8_8_ + lVar15 * 8 ) + 0x10 ), (String*)in_RDX) ),lVar16 = language_map._16_8_,cVar11 != '\0') {
               in_RDX = (CowData*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)language_map, (String*)in_RDX);
               *(undefined8*)param_1 = 0;
               if (*(long*)in_RDX == 0) {
                  return param_1;
               }

               goto LAB_0010144d;
            }

            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar14 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar12 = *(uint*)( lVar16 + lVar15 * 4 );
            iVar14 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar12 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar12 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,uVar18 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   *(undefined8*)param_1 = 0;
   if (*(long*)in_RDX != 0) {
      LAB_0010144d:CowData<char32_t>::_ref((CowData<char32_t>*)param_1, in_RDX);
   }

   return param_1;
}
/* TranslationServer::get_script_name(String const&) const */String *TranslationServer::get_script_name(String *param_1) {
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
   uint uVar12;
   uint uVar13;
   int iVar14;
   CowData *in_RDX;
   long lVar15;
   long lVar16;
   ulong uVar17;
   uint uVar18;
   if (( script_map._8_8_ != 0 ) && ( script_map._44_4_ != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + (ulong)(uint)script_map._40_4_ * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)script_map._40_4_ * 8 );
      uVar12 = String::hash();
      uVar17 = CONCAT44(0, uVar1);
      uVar13 = 1;
      if (uVar12 != 0) {
         uVar13 = uVar12;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar12 = *(uint*)( script_map._16_8_ + lVar15 * 4 );
      iVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar12 != 0) {
         uVar18 = 0;
         lVar16 = script_map._16_8_;
         do {
            if (( uVar13 == uVar12 ) && ( cVar11 = String::operator ==((String*)( *(long*)( script_map._8_8_ + lVar15 * 8 ) + 0x10 ), (String*)in_RDX) ),lVar16 = script_map._16_8_,cVar11 != '\0') {
               in_RDX = (CowData*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)script_map, (String*)in_RDX);
               *(undefined8*)param_1 = 0;
               if (*(long*)in_RDX == 0) {
                  return param_1;
               }

               goto LAB_001015cd;
            }

            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar14 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar12 = *(uint*)( lVar16 + lVar15 * 4 );
            iVar14 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar12 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar12 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,uVar18 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   *(undefined8*)param_1 = 0;
   if (*(long*)in_RDX != 0) {
      LAB_001015cd:CowData<char32_t>::_ref((CowData<char32_t>*)param_1, in_RDX);
   }

   return param_1;
}
/* TranslationServer::get_country_name(String const&) const */String *TranslationServer::get_country_name(String *param_1) {
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
   uint uVar12;
   uint uVar13;
   int iVar14;
   CowData *in_RDX;
   long lVar15;
   long lVar16;
   ulong uVar17;
   uint uVar18;
   if (( country_name_map._8_8_ != 0 ) && ( country_name_map._44_4_ != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + (ulong)(uint)country_name_map._40_4_ * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)country_name_map._40_4_ * 8 );
      uVar12 = String::hash();
      uVar17 = CONCAT44(0, uVar1);
      uVar13 = 1;
      if (uVar12 != 0) {
         uVar13 = uVar12;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar12 = *(uint*)( country_name_map._16_8_ + lVar15 * 4 );
      iVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar12 != 0) {
         uVar18 = 0;
         lVar16 = country_name_map._16_8_;
         do {
            if (( uVar13 == uVar12 ) && ( cVar11 = String::operator ==((String*)( *(long*)( country_name_map._8_8_ + lVar15 * 8 ) + 0x10 ), (String*)in_RDX) ),lVar16 = country_name_map._16_8_,cVar11 != '\0') {
               in_RDX = (CowData*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)country_name_map, (String*)in_RDX);
               *(undefined8*)param_1 = 0;
               if (*(long*)in_RDX == 0) {
                  return param_1;
               }

               goto LAB_0010174d;
            }

            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar14 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar12 = *(uint*)( lVar16 + lVar15 * 4 );
            iVar14 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar12 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar12 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,uVar18 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   *(undefined8*)param_1 = 0;
   if (*(long*)in_RDX != 0) {
      LAB_0010174d:CowData<char32_t>::_ref((CowData<char32_t>*)param_1, in_RDX);
   }

   return param_1;
}
/* TranslationServer::Locale::operator String() const */Locale * __thiscall TranslationServer::Locale::operator_cast_to_String(Locale *this){
   undefined *puVar1;
   CowData *in_RSI;
   long in_FS_OFFSET;
   undefined8 local_58;
   String local_50[8];
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   if (*(long*)in_RSI != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)this, in_RSI);
   }

   for (int i = 0; i < 3; i++) {
      if (( *(long*)( in_RSI + ( 8*i + 8 ) ) != 0 ) && ( 1 < *(uint*)( *(long*)( in_RSI + ( 8*i + 8 ) ) + -8 ) )) {
         local_58 = 0;
         local_48 = &_LC29;
         local_40 = 1;
         String::parse_latin1((StrRange*)&local_58);
         String::operator +(local_50, (String*)this);
         String::operator +((String*)&local_48, local_50);
         if (*(undefined**)this != local_48) {
            CowData<char32_t>::_unref((CowData<char32_t>*)this);
            puVar1 = local_48;
            local_48 = (undefined*)0;
            *(undefined**)this = puVar1;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::_bind_compatibility_methods() */void TranslationServer::_bind_compatibility_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   long *plVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_78[2];
   long *local_68;
   char *local_58;
   undefined8 local_50;
   char **local_48;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = "locale";
   local_48 = &local_58;
   local_50 = 0;
   D_METHODP((char*)local_78, (char***)"standardize_locale", ( uint ) & local_48);
   local_40 = (undefined1[16])0x0;
   local_48 = (char**)0x0;
   pMVar4 = create_method_bind<TranslationServer,String,String_const&>(_standardize_locale_bind_compat_98972);
   ClassDB::bind_methodfi(1, pMVar4, true, (MethodDefinition*)local_78, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_48] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_68;
   if (local_68 != (long*)0x0) {
      LOCK();
      plVar5 = local_68 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_68 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_68[-1];
         local_68 = (long*)0x0;
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

   if (( StringName::configured != '\0' ) && ( local_78[0] != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::_bind_methods() */void TranslationServer::_bind_methods(void) {
   long *plVar1;
   char cVar2;
   undefined *puVar3;
   undefined *puVar4;
   long lVar5;
   MethodBind *pMVar6;
   uint uVar7;
   long in_FS_OFFSET;
   undefined8 local_188;
   long local_180;
   long local_178;
   long local_170;
   long local_168;
   long local_160;
   char *local_158;
   undefined8 local_150;
   char *local_148;
   long local_140;
   long local_138;
   int local_130;
   long local_128;
   undefined4 local_120;
   char *local_118;
   undefined8 local_110;
   undefined *local_108;
   char *pcStack_100;
   undefined8 local_f8;
   undefined *local_e8;
   char *pcStack_e0;
   undefined8 local_d8;
   Variant *local_c8;
   char *pcStack_c0;
   undefined8 local_b8;
   Variant *local_a8;
   char *pcStack_a0;
   undefined *local_98;
   char *pcStack_90;
   undefined8 local_88;
   Variant **local_78;
   undefined1 auStack_70[16];
   char **ppcStack_60;
   undefined1 local_58[16];
   long local_40;
   puVar4 = PTR__LC31_00122cb8;
   puVar3 = PTR__LC34_00122cb0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_110 = 0;
   local_118 = "locale";
   local_78 = (Variant**)&local_118;
   uVar7 = (uint)(Variant*)&local_78;
   D_METHODP((char*)&local_148, (char***)"set_locale", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,String_const&>(set_locale);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"get_locale", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,String>(get_locale);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"get_tool_locale", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,String>(get_tool_locale);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   local_b8 = 0;
   auStack_70._0_8_ = &pcStack_c0;
   local_c8 = (Variant*)0x10981b;
   pcStack_c0 = "locale_b";
   local_78 = &local_c8;
   D_METHODP((char*)&local_148, (char***)"compare_locales", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,int,String_const&,String_const&>(compare_locales);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   local_d8 = 0;
   local_e8 = puVar4;
   pcStack_e0 = "add_defaults";
   auStack_70._0_8_ = &pcStack_e0;
   local_78 = (Variant**)&local_e8;
   D_METHODP((char*)&local_148, (char***)"standardize_locale", uVar7);
   Variant::Variant((Variant*)&local_78, false);
   local_58 = (undefined1[16])0x0;
   ppcStack_60 = (char**)0x0;
   local_c8 = (Variant*)&local_78;
   pMVar6 = create_method_bind<TranslationServer,String,String_const&,bool>(standardize_locale);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, &local_c8, 1);
   if (Variant::needs_deinit[(int)ppcStack_60] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"get_all_languages", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,Vector<String>>(get_all_languages);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   pcStack_c0 = (char*)0x0;
   local_c8 = (Variant*)0x109875;
   local_78 = &local_c8;
   D_METHODP((char*)&local_148, (char***)"get_language_name", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,String,String_const&>(get_language_name);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"get_all_scripts", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,Vector<String>>(get_all_scripts);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   pcStack_c0 = (char*)0x0;
   local_c8 = (Variant*)0x10988e;
   local_78 = &local_c8;
   D_METHODP((char*)&local_148, (char***)"get_script_name", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,String,String_const&>(get_script_name);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"get_all_countries", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,Vector<String>>(get_all_countries);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   pcStack_c0 = (char*)0x0;
   local_c8 = (Variant*)0x1098a7;
   local_78 = &local_c8;
   D_METHODP((char*)&local_148, (char***)"get_country_name", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,String,String_const&>(get_country_name);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   pcStack_c0 = (char*)0x0;
   local_c8 = (Variant*)0x1097d3;
   local_78 = &local_c8;
   D_METHODP((char*)&local_148, (char***)"get_locale_name", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,String,String_const&>(get_locale_name);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   local_158 = (char*)0x0;
   local_f8 = 0;
   local_108 = puVar3;
   pcStack_100 = "context";
   auStack_70._0_8_ = &pcStack_100;
   local_78 = (Variant**)&local_108;
   D_METHODP((char*)&local_148, (char***)"translate", uVar7);
   Variant::Variant((Variant*)&local_78, (StringName*)&local_158);
   local_58 = (undefined1[16])0x0;
   ppcStack_60 = (char**)0x0;
   local_c8 = (Variant*)&local_78;
   pMVar6 = create_method_bind<TranslationServer,StringName,StringName_const&,StringName_const&>(translate);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, &local_c8, 1);
   if (Variant::needs_deinit[(int)ppcStack_60] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   local_158 = (char*)0x0;
   local_a8 = (Variant*)puVar3;
   pcStack_a0 = "plural_message";
   local_98 = &_LC37;
   pcStack_90 = "context";
   auStack_70._8_8_ = &local_98;
   auStack_70._0_8_ = &pcStack_a0;
   local_88 = 0;
   local_78 = &local_a8;
   ppcStack_60 = &pcStack_90;
   D_METHODP((char*)&local_148, (char***)"translate_plural", uVar7);
   Variant::Variant((Variant*)&local_78, (StringName*)&local_158);
   local_58 = (undefined1[16])0x0;
   ppcStack_60 = (char**)0x0;
   local_a8 = (Variant*)&local_78;
   pMVar6 = create_method_bind<TranslationServer,StringName,StringName_const&,StringName_const&,int,StringName_const&>(translate_plural);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, &local_a8, 1);
   if (Variant::needs_deinit[(int)ppcStack_60] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   pcStack_a0 = (char*)0x0;
   local_a8 = (Variant*)0x1098da;
   local_78 = &local_a8;
   D_METHODP((char*)&local_148, (char***)"add_translation", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,Ref<Translation>const&>(add_translation);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   local_a8 = (Variant*)0x1098da;
   pcStack_a0 = (char*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_148, (char***)"remove_translation", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,Ref<Translation>const&>(remove_translation);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   pcStack_a0 = (char*)0x0;
   local_a8 = (Variant*)0x1097d3;
   local_78 = &local_a8;
   D_METHODP((char*)&local_148, (char***)"get_translation_object", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,Ref<Translation>,String_const&>(get_translation_object);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   local_a8 = (Variant*)0x109920;
   pcStack_a0 = (char*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_148, (char***)"has_domain", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,bool,StringName_const&>(has_domain);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   local_a8 = (Variant*)0x109920;
   pcStack_a0 = (char*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_148, (char***)"get_or_add_domain", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,Ref<TranslationDomain>,StringName_const&>(get_or_add_domain);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   local_a8 = (Variant*)0x109920;
   pcStack_a0 = (char*)0x0;
   local_78 = &local_a8;
   D_METHODP((char*)&local_148, (char***)"remove_domain", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,StringName_const&>(remove_domain);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"clear", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer>(clear);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"get_loaded_locales", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,Vector<String>>(get_loaded_locales);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"is_pseudolocalization_enabled", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,bool>(is_pseudolocalization_enabled);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   pcStack_a0 = (char*)0x0;
   local_a8 = (Variant*)0x109969;
   local_78 = &local_a8;
   D_METHODP((char*)&local_148, (char***)"set_pseudolocalization_enabled", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,bool>(set_pseudolocalization_enabled);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"reload_pseudolocalization", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer>(reload_pseudolocalization);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   pcStack_a0 = (char*)0x0;
   local_a8 = (Variant*)0x1097ed;
   local_78 = &local_a8;
   D_METHODP((char*)&local_148, (char***)"pseudolocalize", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<TranslationServer,StringName,StringName_const&>(pseudolocalize);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "";
   local_170 = 0;
   local_178 = 0;
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_180 = 0;
   local_148 = "pseudolocalization_enabled";
   local_140 = 0x1a;
   String::parse_latin1((StrRange*)&local_180);
   local_148 = (char*)CONCAT44(local_148._4_4_, 1);
   local_140 = 0;
   if (local_180 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_140, (CowData*)&local_180);
   }

   local_138 = 0;
   local_130 = 0;
   local_128 = 0;
   if (local_178 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)&local_178);
      local_120 = 6;
      if (local_130 == 0x11) {
         StringName::StringName((StringName*)&local_158, (String*)&local_128, false);
         if ((char*)local_138 == local_158) {
            if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_138 = (long)local_158;
         }

         goto LAB_00102e10;
      }

   }

   local_120 = 6;
   StringName::operator =((StringName*)&local_138, (StringName*)&local_170);
   LAB_00102e10:local_188 = 0;
   local_158 = "TranslationServer";
   local_150 = 0x11;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, -1);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   lVar5 = local_128;
   if (local_128 != 0) {
      LOCK();
      plVar1 = (long*)( local_128 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_128 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   lVar5 = local_140;
   if (local_140 != 0) {
      LOCK();
      plVar1 = (long*)( local_140 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_140 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* TranslationServer::get_tool_locale() */void TranslationServer::get_tool_locale(void) {
   code *pcVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   long in_RSI;
   CowData<char32_t> *in_RDI;
   long in_FS_OFFSET;
   CowData *local_40;
   Object *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = Engine::get_singleton();
   if (*(char*)( lVar4 + 0xc0 ) == '\0') {
      lVar4 = Engine::get_singleton();
      if (*(char*)( lVar4 + 0xc1 ) == '\0') {
         TranslationDomain::get_translation_object((String*)&local_38);
         if (local_38 == (Object*)0x0) {
            *(undefined8*)in_RDI = 0;
            if (*(long*)( in_RSI + 0x180 ) == 0) goto LAB_00103295;
            CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x180 ));
            LAB_001032fe:if (local_38 == (Object*)0x0) goto LAB_00103295;
         }
 else {
            *(undefined8*)in_RDI = 0;
            if (*(long*)( local_38 + 0x240 ) != 0) {
               CowData<char32_t>::_ref(in_RDI, (CowData*)( local_38 + 0x240 ));
               goto LAB_001032fe;
            }

         }

         cVar3 = RefCounted::unreference();
         pOVar2 = local_38;
         if (cVar3 != '\0') {
            cVar3 = predelete_handler(local_38);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

         goto LAB_00103295;
      }

   }

   TranslationDomain::get_loaded_locales();
   if (local_40 == (CowData*)0x0) {
      *(undefined8*)in_RDI = 0;
      local_38 = (Object*)&_LC70;
      local_30 = 2;
      String::parse_latin1((StrRange*)in_RDI);
   }
 else {
      if (*(long*)( local_40 + -8 ) < 1) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, *(long*)( local_40 + -8 ), "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      *(undefined8*)in_RDI = 0;
      if (*(long*)local_40 != 0) {
         CowData<char32_t>::_ref(in_RDI, local_40);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_40);
   LAB_00103295:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::_load_translations(String const&) [clone .part.0] */undefined8 TranslationServer::_load_translations(TranslationServer *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   Object *pOVar5;
   long lVar6;
   long in_FS_OFFSET;
   Object *local_88;
   long local_80;
   Variant local_78[8];
   long local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_68, param_1, false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   Variant::operator_cast_to_Vector(local_78);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
      StringName::unref();
   }

   if (( local_70 != 0 ) && ( iVar4= (int)*(undefined8 *)(local_70 + -8),0 < iVar4 )) {
      lVar6 = local_70;
      do {
         local_68 = (Object*)&_LC5;
         local_80 = 0;
         local_60 = 0;
         String::parse_latin1((StrRange*)&local_80);
         ResourceLoader::load((StringName*)&local_68, lVar6, (StrRange*)&local_80, 1, 0);
         local_88 = (Object*)0x0;
         if (local_68 != (Object*)0x0) {
            pOVar5 = (Object*)__dynamic_cast(local_68, &Object::typeinfo, &Translation::typeinfo, 0);
            if (pOVar5 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               local_88 = pOVar5;
               if (cVar3 == '\0') {
                  local_88 = (Object*)0x0;
               }

               if (local_68 == (Object*)0x0) goto LAB_001034c0;
            }

            cVar3 = RefCounted::unreference();
            pOVar5 = local_68;
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(local_68);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )();
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         LAB_001034c0:lVar2 = local_80;
         if (local_80 != 0) {
            LOCK();
            plVar1 = (long*)( local_80 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_80 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (local_88 != (Object*)0x0) {
            TranslationDomain::add_translation(*(Ref**)( this + 0x188 ));
            if (local_88 != (Object*)0x0) {
               cVar3 = RefCounted::unreference();
               if (cVar3 != '\0') {
                  cVar3 = predelete_handler(local_88);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)local_88 + 0x140 ) )();
                     Memory::free_static(local_88, false);
                  }

               }

            }

         }

         lVar6 = lVar6 + 8;
      }
 while ( local_70 + 8 + ( ulong )(iVar4 - 1) * 8 != lVar6 );
   }

   CowData<String>::_unref((CowData<String>*)&local_70);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::_load_translations(String const&) */undefined8 TranslationServer::_load_translations(TranslationServer *this, String *param_1) {
   char cVar1;
   String *pSVar2;
   undefined8 uVar3;
   pSVar2 = (String*)ProjectSettings::get_singleton();
   cVar1 = ProjectSettings::has_setting(pSVar2);
   if (cVar1 == '\0') {
      return 0;
   }

   uVar3 = _load_translations(this, param_1);
   return uVar3;
}
/* TranslationServer::load_translations() */void TranslationServer::load_translations(TranslationServer *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   char cVar4;
   String *pSVar5;
   int iVar6;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_40 = 0x28;
   local_48 = "internationalization/locale/translations";
   String::parse_latin1((StrRange*)&local_50);
   pSVar5 = (String*)ProjectSettings::get_singleton();
   cVar4 = ProjectSettings::has_setting(pSVar5);
   if (cVar4 != '\0') {
      _load_translations(this, (String*)&local_50);
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

   iVar6 = (int)(String*)( this + 0x178 );
   String::substr((int)(StrRange*)&local_50, iVar6);
   operator+((char *)&
   local_48,(String*)"internationalization/locale/translations_";
   pSVar5 = (String*)ProjectSettings::get_singleton();
   cVar4 = ProjectSettings::has_setting(pSVar5);
   if (cVar4 != '\0') {
      _load_translations(this, (String*)&local_48);
   }

   pcVar3 = local_48;
   if (local_48 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
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

   String::substr((int)(String*)&local_48, iVar6);
   cVar4 = String::operator !=((String*)&local_48, (String*)( this + 0x178 ));
   pcVar3 = local_48;
   if (local_48 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }

   }

   if (cVar4 != '\0') {
      operator+((char *)&
      local_48,(String*)"internationalization/locale/translations_";
      pSVar5 = (String*)ProjectSettings::get_singleton();
      cVar4 = ProjectSettings::has_setting(pSVar5);
      if (cVar4 != '\0') {
         _load_translations(this, (String*)&local_48);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
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
/* TranslationServer::Locale::Locale(TranslationServer const&, String const&, bool) */void TranslationServer::Locale::Locale(Locale *this, TranslationServer *param_1, String *param_2, bool param_3) {
   CowData<char32_t> *this_00;
   uint uVar1;
   int *piVar2;
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
   code *pcVar19;
   undefined *puVar20;
   char cVar21;
   uint uVar22;
   String *pSVar23;
   CowData *pCVar24;
   uint uVar25;
   int iVar26;
   long lVar27;
   long lVar28;
   uint uVar29;
   bool bVar30;
   ulong uVar31;
   long lVar32;
   StrRange *this_01;
   long lVar33;
   long in_FS_OFFSET;
   CowData<char32_t> local_88[8];
   String local_80[8];
   char local_78[8];
   CowData *local_70;
   CowData<char32_t> local_68[8];
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (CowData<char32_t>*)( this + 0x10 );
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   String::replace((char*)local_88, (char*)param_2);
   iVar26 = (int)local_88;
   String::get_slice((char*)&local_58, iVar26);
   bVar30 = SUB81((CowData<char32_t>*)&local_58, 0);
   String::split(local_78, bVar30, 0x1097d1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (local_70 == (CowData*)0x0) {
      lVar33 = 0;
   }
 else {
      lVar33 = *(long*)( local_70 + -8 );
      if (0 < lVar33) {
         if (*(long*)this == *(long*)local_70) {
            LAB_00103a61:if (1 < lVar33) {
               piVar2 = *(int**)( local_70 + 8 );
               if (( piVar2 == (int*)0x0 ) || ( lVar33 = *(long*)( piVar2 + -2 ) ),(int)lVar33 != 5) goto LAB_00103a7e;
               if (lVar33 < 1) goto LAB_0010439b;
               if (( ( ( *piVar2 - 0x41U < 0x1a ) && ( piVar2[1] - 0x61U < 0x1a ) ) && ( piVar2[2] - 0x61U < 0x1a ) ) && ( piVar2[3] - 0x61U < 0x1a )) {
                  if (( piVar2 == *(int**)( this + 8 ) ) || ( CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), local_70 + 8),local_70 != (CowData*)0x0 )) goto LAB_00103a7e;
                  lVar33 = 0;
               }
 else {
                  LAB_00103a7e:lVar33 = *(long*)( local_70 + -8 );
                  if (1 < lVar33) {
                     piVar2 = *(int**)( local_70 + 8 );
                     if (( piVar2 != (int*)0x0 ) && ( lVar33 = *(long*)( piVar2 + -2 ) ),(int)lVar33 == 3) {
                        if (lVar33 < 1) goto LAB_0010439b;
                        if (( ( ( *piVar2 - 0x41U < 0x1a ) && ( piVar2[1] - 0x41U < 0x1a ) ) && ( piVar2 != *(int**)( this + 0x10 ) ) ) && ( CowData<char32_t>::_ref(this_00, local_70 + 8),local_70 == (CowData*)0x0 )) goto LAB_00103abe;
                     }

                     goto LAB_00103aa3;
                  }

               }

               lVar32 = 1;
               goto LAB_00104271;
            }

            LAB_00103aa3:if (*(long*)( local_70 + -8 ) < 3) {
               LAB_00103aae:lVar33 = *(long*)( local_70 + -8 );
            }
 else {
               piVar2 = *(int**)( local_70 + 0x10 );
               if (( piVar2 == (int*)0x0 ) || ( lVar33 = *(long*)( piVar2 + -2 ) ),(int)lVar33 != 3) {
                  LAB_00103d47:String::to_lower();
                  local_58 = (undefined*)( (ulong)local_58 & 0xffffffff00000000 );
                  cVar21 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)variant_map, (String*)local_68, (uint*)&local_58);
                  if (cVar21 != '\0') {
                     if (local_70 == (CowData*)0x0) {
                        LAB_001045e9:lVar33 = 0;
                     }
 else {
                        lVar33 = *(long*)( local_70 + -8 );
                        if (2 < lVar33) {
                           String::to_lower();
                           pSVar23 = (String*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)variant_map, (String*)&local_58);
                           cVar21 = String::operator ==(pSVar23, (String*)this);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                           CowData<char32_t>::_unref(local_68);
                           if (cVar21 != '\0') {
                              if (local_70 == (CowData*)0x0) goto LAB_001045e9;
                              lVar33 = *(long*)( local_70 + -8 );
                              if (lVar33 < 3) goto LAB_001045ec;
                              String::to_lower();
                              if (*(undefined**)( this + 0x18 ) != local_58) {
                                 CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x18 ));
                                 puVar20 = local_58;
                                 local_58 = (undefined*)0x0;
                                 *(undefined**)( this + 0x18 ) = puVar20;
                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                           }

                           goto joined_r0x00103e3a;
                        }

                     }

                     LAB_001045ec:lVar32 = 2;
                     goto LAB_00104271;
                  }

                  CowData<char32_t>::_unref(local_68);
               }
 else {
                  if (lVar33 < 1) goto LAB_0010439b;
                  if (( 0x19 < *piVar2 - 0x41U ) || ( 0x19 < piVar2[1] - 0x41U )) goto LAB_00103d47;
                  if (piVar2 == *(int**)( this + 0x10 )) goto LAB_00103aae;
                  CowData<char32_t>::_ref(this_00, local_70 + 0x10);
               }

               joined_r0x00103e3a:if (local_70 == (CowData*)0x0) goto LAB_00103abe;
               lVar33 = *(long*)( local_70 + -8 );
            }

            if (3 < lVar33) {
               String::to_lower();
               local_58 = (undefined*)( (ulong)local_58 & 0xffffffff00000000 );
               cVar21 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)variant_map, (String*)local_68, (uint*)&local_58);
               if (cVar21 != '\0') {
                  if (local_70 == (CowData*)0x0) {
                     LAB_0010469d:lVar33 = 0;
                  }
 else {
                     lVar33 = *(long*)( local_70 + -8 );
                     if (3 < lVar33) {
                        String::to_lower();
                        pSVar23 = (String*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)variant_map, (String*)&local_58);
                        cVar21 = String::operator ==(pSVar23, (String*)this);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                        CowData<char32_t>::_unref(local_68);
                        if (cVar21 != '\0') {
                           if (local_70 == (CowData*)0x0) goto LAB_0010469d;
                           lVar33 = *(long*)( local_70 + -8 );
                           if (lVar33 < 4) goto LAB_001046a0;
                           String::to_lower();
                           if (*(undefined**)( this + 0x18 ) != local_58) {
                              CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x18 ));
                              puVar20 = local_58;
                              local_58 = (undefined*)0x0;
                              *(undefined**)( this + 0x18 ) = puVar20;
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                        }

                        goto LAB_00103abe;
                     }

                  }

                  LAB_001046a0:lVar32 = 3;
                  goto LAB_00104271;
               }

               CowData<char32_t>::_unref(local_68);
            }

         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)this, local_70);
            if (local_70 != (CowData*)0x0) {
               lVar33 = *(long*)( local_70 + -8 );
               goto LAB_00103a61;
            }

         }

         LAB_00103abe:String::get_slice((char*)&local_58, iVar26);
         lVar32 = 0;
         String::split((char*)local_68, bVar30, 0x1099ea);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         while (true) {
            if (( local_60 == 0 ) || ( *(long*)( local_60 + -8 ) <= lVar32 )) goto LAB_0010401f;
            String::to_lower();
            cVar21 = String::operator ==((String*)&local_58, "cyrillic");
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar21 != '\0') break;
            if (local_60 == 0) {
               LAB_00104250:lVar33 = 0;
               goto LAB_00104271;
            }

            lVar33 = *(long*)( local_60 + -8 );
            if (lVar33 <= lVar32) goto LAB_00104271;
            String::to_lower();
            cVar21 = String::operator ==((String*)&local_58, "latin");
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar21 != '\0') {
               local_58 = &_LC83;
               goto LAB_00104622;
            }

            if (local_60 == 0) goto LAB_00104250;
            lVar33 = *(long*)( local_60 + -8 );
            if (lVar33 <= lVar32) goto LAB_00104271;
            String::to_lower();
            cVar21 = String::operator ==((String*)&local_58, "devanagari");
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar21 != '\0') {
               local_58 = &_LC85;
               goto LAB_00104622;
            }

            if (local_60 == 0) goto LAB_00104250;
            lVar33 = *(long*)( local_60 + -8 );
            if (lVar33 <= lVar32) goto LAB_00104271;
            String::to_lower();
            if (( variant_map._8_8_ != 0 ) && ( variant_map._44_4_ != 0 )) {
               uVar1 = *(uint*)( hash_table_size_primes + (ulong)(uint)variant_map._40_4_ * 4 );
               lVar33 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)variant_map._40_4_ * 8 );
               uVar22 = String::hash();
               uVar31 = CONCAT44(0, uVar1);
               uVar25 = 1;
               if (uVar22 != 0) {
                  uVar25 = uVar22;
               }

               auVar3._8_8_ = 0;
               auVar3._0_8_ = (ulong)uVar25 * lVar33;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = uVar31;
               lVar27 = SUB168(auVar3 * auVar11, 8);
               uVar22 = *(uint*)( variant_map._16_8_ + lVar27 * 4 );
               iVar26 = SUB164(auVar3 * auVar11, 8);
               if (uVar22 != 0) {
                  uVar29 = 0;
                  lVar28 = variant_map._16_8_;
                  do {
                     if (( uVar22 == uVar25 ) && ( cVar21 = String::operator ==((String*)( *(long*)( variant_map._8_8_ + lVar27 * 8 ) + 0x10 ), local_80) ),lVar28 = variant_map._16_8_,cVar21 != '\0') {
                        if (local_60 == 0) goto LAB_00104250;
                        lVar33 = *(long*)( local_60 + -8 );
                        if (lVar33 <= lVar32) goto LAB_00104271;
                        String::to_lower();
                        pSVar23 = (String*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)variant_map, (String*)&local_58);
                        cVar21 = String::operator ==(pSVar23, (String*)this);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                        CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
                        if (cVar21 == '\0') goto LAB_00103ffb;
                        if (local_60 == 0) goto LAB_00104250;
                        lVar33 = *(long*)( local_60 + -8 );
                        if (lVar33 <= lVar32) goto LAB_00104271;
                        String::to_lower();
                        if (*(undefined**)( this + 0x18 ) != local_58) {
                           CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x18 ));
                           puVar20 = local_58;
                           local_58 = (undefined*)0x0;
                           *(undefined**)( this + 0x18 ) = puVar20;
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                        goto LAB_00103ffb;
                     }

                     uVar29 = uVar29 + 1;
                     auVar4._8_8_ = 0;
                     auVar4._0_8_ = ( ulong )(iVar26 + 1) * lVar33;
                     auVar12._8_8_ = 0;
                     auVar12._0_8_ = uVar31;
                     lVar27 = SUB168(auVar4 * auVar12, 8);
                     uVar22 = *(uint*)( lVar28 + lVar27 * 4 );
                     iVar26 = SUB164(auVar4 * auVar12, 8);
                  }
 while ( ( uVar22 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar22 * lVar33,auVar13._8_8_ = 0,auVar13._0_8_ = uVar31,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar26 ) - SUB164(auVar5 * auVar13, 8)) * lVar33,auVar14._8_8_ = 0,auVar14._0_8_ = uVar31,uVar29 <= SUB164(auVar6 * auVar14, 8) );
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
            LAB_00103ffb:lVar32 = lVar32 + 1;
         }
;
         local_58 = &_LC81;
         LAB_00104622:local_50 = 4;
         String::parse_latin1((StrRange*)( this + 8 ));
         LAB_0010401f:this_01 = (StrRange*)( this + 8 );
         local_58 = (undefined*)( (ulong)local_58 & 0xffffffff00000000 );
         cVar21 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)locale_rename_map, (String*)this, (uint*)&local_58);
         if (( cVar21 != '\0' ) && ( pCVar24 = (CowData*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)locale_rename_map, (String*)this) * (long*)this != *(long*)pCVar24 )) {
            CowData<char32_t>::_ref((CowData<char32_t>*)this, pCVar24);
         }

         local_58 = (undefined*)( (ulong)local_58 & 0xffffffff00000000 );
         cVar21 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)country_rename_map, (String*)this_00, (uint*)&local_58);
         if (( cVar21 != '\0' ) && ( pCVar24 = (CowData*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)country_rename_map, (String*)this_00) * (long*)( this + 0x10 ) != *(long*)pCVar24 )) {
            CowData<char32_t>::_ref(this_00, pCVar24);
         }

         local_58 = (undefined*)( (ulong)local_58 & 0xffffffff00000000 );
         cVar21 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)script_map, (String*)this_01, (uint*)&local_58);
         if (cVar21 == '\0') {
            local_50 = 0;
            local_58 = &_LC5;
            String::parse_latin1(this_01);
         }

         if (!param_3) goto LAB_00104350;
         if (( *(long*)( this + 8 ) == 0 ) || ( *(uint*)( *(long*)( this + 8 ) + -8 ) < 2 )) {
            if (locale_script_info._8_8_ == 0) goto LAB_00104350;
            lVar33 = 0;
            while (lVar33 < *(long*)( locale_script_info._8_8_ + -8 )) {
               pSVar23 = (String*)( locale_script_info._8_8_ + lVar33 * 0x40 );
               cVar21 = String::operator ==(pSVar23, (String*)this);
               if (cVar21 != '\0') {
                  if (( *(long*)( this + 0x10 ) == 0 ) || ( *(uint*)( *(long*)( this + 0x10 ) + -8 ) < 2 )) {
                     LAB_00104663:lVar33 = *(long*)( pSVar23 + 8 );
                     if (*(long*)( this + 8 ) != lVar33) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)this_01, (CowData*)( pSVar23 + 8 ));
                        lVar33 = *(long*)( this + 8 );
                     }

                     goto LAB_00104339;
                  }

                  if (( *(long*)( pSVar23 + 0x18 ) != 0 ) && ( *(int*)( pSVar23 + 0x3c ) != 0 )) {
                     uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pSVar23 + 0x38 ) * 4 );
                     lVar32 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( pSVar23 + 0x38 ) * 8 );
                     uVar22 = String::hash();
                     uVar31 = CONCAT44(0, uVar1);
                     lVar27 = *(long*)( pSVar23 + 0x30 );
                     uVar25 = 1;
                     if (uVar22 != 0) {
                        uVar25 = uVar22;
                     }

                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = (ulong)uVar25 * lVar32;
                     auVar15._8_8_ = 0;
                     auVar15._0_8_ = uVar31;
                     lVar28 = SUB168(auVar7 * auVar15, 8);
                     uVar22 = *(uint*)( lVar27 + lVar28 * 4 );
                     iVar26 = SUB164(auVar7 * auVar15, 8);
                     if (uVar22 != 0) {
                        uVar29 = 0;
                        do {
                           if (uVar22 == uVar25) {
                              cVar21 = String::operator ==((String*)( *(long*)( pSVar23 + 0x18 ) + ( ulong ) * (uint*)( *(long*)( pSVar23 + 0x20 ) + lVar28 * 4 ) * 8 ), (String*)this_00);
                              if (cVar21 != '\0') goto LAB_00104663;
                              lVar27 = *(long*)( pSVar23 + 0x30 );
                           }

                           uVar29 = uVar29 + 1;
                           auVar8._8_8_ = 0;
                           auVar8._0_8_ = ( ulong )(iVar26 + 1) * lVar32;
                           auVar16._8_8_ = 0;
                           auVar16._0_8_ = uVar31;
                           lVar28 = SUB168(auVar8 * auVar16, 8);
                           uVar22 = *(uint*)( lVar27 + lVar28 * 4 );
                           iVar26 = SUB164(auVar8 * auVar16, 8);
                        }
 while ( ( uVar22 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar22 * lVar32,auVar17._8_8_ = 0,auVar17._0_8_ = uVar31,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar1 + iVar26 ) - SUB164(auVar9 * auVar17, 8)) * lVar32,auVar18._8_8_ = 0,auVar18._0_8_ = uVar31,uVar29 <= SUB164(auVar10 * auVar18, 8) );
                     }

                  }

               }

               lVar33 = lVar33 + 1;
               if (locale_script_info._8_8_ == 0) break;
            }
;
            lVar33 = *(long*)( this + 8 );
            LAB_00104339:if (( lVar33 == 0 ) || ( *(uint*)( lVar33 + -8 ) < 2 )) goto LAB_00104350;
         }

         if (( ( *(long*)( this + 0x10 ) == 0 ) || ( *(uint*)( *(long*)( this + 0x10 ) + -8 ) < 2 ) ) && ( locale_script_info._8_8_ != 0 )) {
            lVar33 = 0;
            while (lVar33 < *(long*)( locale_script_info._8_8_ + -8 )) {
               pSVar23 = (String*)( locale_script_info._8_8_ + lVar33 * 0x40 );
               cVar21 = String::operator ==(pSVar23, (String*)this);
               if (( cVar21 != '\0' ) && ( cVar21 = String::operator ==(pSVar23 + 8, (String*)this_01) ),cVar21 != '\0') {
                  if (*(long*)( this + 0x10 ) != *(long*)( pSVar23 + 0x10 )) {
                     CowData<char32_t>::_ref(this_00, (CowData*)( pSVar23 + 0x10 ));
                  }

                  break;
               }

               lVar33 = lVar33 + 1;
               if (locale_script_info._8_8_ == 0) break;
            }
;
         }

         LAB_00104350:CowData<String>::_unref((CowData<String>*)&local_60);
         CowData<String>::_unref((CowData<String>*)&local_70);
         CowData<char32_t>::_unref(local_88);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }

   LAB_0010439b:lVar32 = 0;
   LAB_00104271:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar32, lVar33, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar19 = (code*)invalidInstructionException();
   ( *pcVar19 )();
}
/* TranslationServer::standardize_locale(String const&, bool) const */String *TranslationServer::standardize_locale(String *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   bool in_CL;
   String *in_RDX;
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   long local_38;
   long local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Locale::Locale((Locale*)&local_48, (TranslationServer*)CONCAT71(in_register_00000031, param_2), in_RDX, in_CL);
   Locale::operator_cast_to_String((Locale*)param_1);
   lVar2 = local_30;
   if (local_30 != 0) {
      LOCK();
      plVar1 = (long*)( local_30 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_30 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_38;
   if (local_38 != 0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::compare_locales(String const&, String const&) const */int TranslationServer::compare_locales(TranslationServer *this, String *param_1, String *param_2) {
   TranslationServer *pTVar1;
   uint uVar2;
   long lVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   ulong uVar12;
   char cVar13;
   uint uVar14;
   bool bVar15;
   uint uVar16;
   uint uVar17;
   long lVar18;
   long lVar19;
   uint uVar20;
   int iVar21;
   long in_FS_OFFSET;
   String *local_c0;
   String *local_b8;
   String local_98[8];
   String local_90[8];
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   long local_60;
   long local_58;
   long local_50[2];
   long local_40;
   iVar21 = 10;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar13 = String::operator ==(param_1, param_2);
   if (cVar13 != '\0') goto LAB_00104a50;
   local_88 = 0;
   local_60 = 1;
   local_68 = &_LC86;
   String::parse_latin1((StrRange*)&local_88);
   String::operator +((String*)&local_68, param_1);
   String::operator +(local_98, (String*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( *(long*)( this + 0x1e0 ) != 0 ) && ( *(int*)( this + 0x204 ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x200 ) * 4 );
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x200 ) * 8 );
      uVar14 = String::hash();
      uVar12 = CONCAT44(0, uVar2);
      lVar19 = *(long*)( this + 0x1e8 );
      uVar16 = 1;
      if (uVar14 != 0) {
         uVar16 = uVar14;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar16 * lVar3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar12;
      lVar18 = SUB168(auVar4 * auVar8, 8);
      uVar14 = *(uint*)( lVar19 + lVar18 * 4 );
      uVar17 = SUB164(auVar4 * auVar8, 8);
      if (uVar14 != 0) {
         uVar20 = 0;
         do {
            if (uVar14 == uVar16) {
               cVar13 = String::operator ==((String*)( *(long*)( *(long*)( this + 0x1e0 ) + lVar18 * 8 ) + 0x10 ), local_98);
               if (cVar13 != '\0') {
                  iVar21 = *(int*)( *(long*)( *(long*)( this + 0x1e0 ) + (ulong)uVar17 * 8 ) + 0x18 );
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
                  goto LAB_00104a50;
               }

               lVar19 = *(long*)( this + 0x1e8 );
            }

            uVar20 = uVar20 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(uVar17 + 1) * lVar3;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar12;
            lVar18 = SUB168(auVar5 * auVar9, 8);
            uVar14 = *(uint*)( lVar19 + lVar18 * 4 );
            uVar17 = SUB164(auVar5 * auVar9, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar14 * lVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar12,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar2 + uVar17 ) - SUB164(auVar6 * auVar10, 8)) * lVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar12,uVar20 <= SUB164(auVar7 * auVar11, 8) );
      }

   }

   pTVar1 = this + 0x1d8;
   Locale::Locale((Locale*)&local_88, this, param_1, true);
   Locale::Locale((Locale*)&local_68, this, param_2, true);
   cVar13 = String::operator ==((String*)&local_68, (String*)&local_88);
   bVar15 = SUB81(local_98, 0);
   if (cVar13 == '\0') {
      LAB_0010497e:local_b8 = (String*)&local_70;
      local_c0 = (String*)local_50;
      cVar13 = String::operator !=((String*)&local_88, (String*)&local_68);
      if (cVar13 == '\0') {
         iVar21 = 5;
         if (( ( ( local_80 != 0 ) && ( 1 < *(uint*)( local_80 + -8 ) ) ) && ( local_60 != 0 ) ) && ( 1 < *(uint*)( local_60 + -8 ) )) {
            cVar13 = String::operator ==((String*)&local_80, (String*)&local_60);
            if (cVar13 == '\0') {
               iVar21 = 4;
            }
 else {
               iVar21 = 6;
            }

         }

         if (( ( local_78 != 0 ) && ( 1 < *(uint*)( local_78 + -8 ) ) ) && ( ( local_58 != 0 && ( 1 < *(uint*)( local_58 + -8 ) ) ) )) {
            cVar13 = String::operator ==((String*)&local_78, (String*)&local_58);
            if (cVar13 == '\0') {
               iVar21 = iVar21 + -1;
            }
 else {
               iVar21 = iVar21 + 1;
            }

         }

         if (( ( local_70 != 0 ) && ( 1 < *(uint*)( local_70 + -8 ) ) ) && ( ( local_50[0] != 0 && ( 1 < *(uint*)( local_50[0] + -8 ) ) ) )) {
            cVar13 = String::operator ==(local_b8, local_c0);
            if (cVar13 == '\0') {
               iVar21 = iVar21 + -1;
            }
 else {
               iVar21 = iVar21 + 1;
            }

         }

         HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>::insert(local_90, (int*)pTVar1, bVar15);
      }
 else {
         iVar21 = 0;
         HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>::insert(local_90, (int*)pTVar1, bVar15);
      }

   }
 else {
      cVar13 = String::operator ==((String*)&local_60, (String*)&local_80);
      if (cVar13 == '\0') goto LAB_0010497e;
      cVar13 = String::operator ==((String*)&local_58, (String*)&local_78);
      if (( cVar13 == '\0' ) || ( cVar13 = String::operator ==((String*)local_50, (String*)&local_70) ),cVar13 == '\0') goto LAB_0010497e;
      iVar21 = 10;
      HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>::insert(local_90, (int*)pTVar1, bVar15);
   }

   local_b8 = (String*)&local_70;
   local_c0 = (String*)local_50;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   LAB_00104a50:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar21;
}
/* TranslationServer::_standardize_locale_bind_compat_98972(String const&) const */String *TranslationServer::_standardize_locale_bind_compat_98972(String *param_1) {
   long *plVar1;
   long lVar2;
   String *in_RDX;
   TranslationServer *in_RSI;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   long local_38;
   long local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Locale::Locale((Locale*)&local_48, in_RSI, in_RDX, false);
   Locale::operator_cast_to_String((Locale*)param_1);
   lVar2 = local_30;
   if (local_30 != 0) {
      LOCK();
      plVar1 = (long*)( local_30 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_30 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_38;
   if (local_38 != 0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::set_locale(String const&) */void TranslationServer::set_locale(TranslationServer *this, String *param_1) {
   char cVar1;
   int iVar2;
   long *plVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   long local_38;
   long local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Locale::Locale((Locale*)&local_48, this, param_1, false);
   Locale::operator_cast_to_String((Locale*)&local_50);
   lVar4 = local_30;
   if (local_30 != 0) {
      LOCK();
      plVar3 = (long*)( local_30 + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_30 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   lVar4 = local_38;
   if (local_38 != 0) {
      LOCK();
      plVar3 = (long*)( local_38 + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_38 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   lVar4 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar3 = (long*)( local_40 + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   lVar4 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar3 = (long*)( local_48 + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   cVar1 = String::operator ==((String*)( this + 0x178 ), (String*)&local_50);
   if (cVar1 == '\0') {
      if (*(long*)( this + 0x178 ) != local_50) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x178 ), (CowData*)&local_50);
      }

      ResourceLoader::reload_translation_remaps();
      plVar3 = (long*)OS::get_singleton();
      lVar4 = ( **(code**)( *plVar3 + 0x1d0 ) )(plVar3);
      if (lVar4 != 0) {
         plVar3 = (long*)OS::get_singleton();
         iVar2 = ( **(code**)( *plVar3 + 0x1d0 ) )(plVar3);
         Object::notification(iVar2, true);
      }

      lVar4 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar3 = (long*)( local_50 + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::setup() */void TranslationServer::setup(TranslationServer *this) {
   undefined8 uVar1;
   String *pSVar2;
   char *pcVar3;
   long lVar4;
   long *plVar5;
   PropertyInfo *pPVar6;
   bool bVar7;
   long in_FS_OFFSET;
   float fVar8;
   char *local_d0;
   long local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   char *local_a8;
   long local_a0;
   long local_98;
   int local_90;
   long local_88;
   undefined4 local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, "");
   local_b0 = 0;
   local_a8 = "internationalization/locale/test";
   local_a0 = 0x20;
   String::parse_latin1((StrRange*)&local_b0);
   bVar7 = SUB81((Variant*)local_78, 0);
   _GLOBAL_DEF((String*)local_58, (Variant*)&local_b0, bVar7, false, false, false);
   Variant::operator_cast_to_String((Variant*)&local_d0);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   String::strip_edges(SUB81((CowData<char32_t>*)&local_a8, 0), SUB81((Variant*)&local_d0, 0));
   if (local_d0 != local_a8) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
      local_d0 = local_a8;
      local_a8 = (char*)0x0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (( local_d0 == (char*)0x0 ) || ( *(uint*)( local_d0 + -8 ) < 2 )) {
      plVar5 = (long*)OS::get_singleton();
      ( **(code**)( *plVar5 + 600 ) )((CowData<char32_t>*)&local_a8, plVar5);
      set_locale(this, (String*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   }
 else {
      set_locale(this, (String*)&local_d0);
   }

   Variant::Variant((Variant*)local_78, "en");
   local_b0 = 0;
   local_a8 = "internationalization/locale/fallback";
   local_a0 = 0x24;
   String::parse_latin1((StrRange*)&local_b0);
   _GLOBAL_DEF((String*)local_58, (Variant*)&local_b0, bVar7, false, false, false);
   Variant::operator_cast_to_String((Variant*)&local_a8);
   if (*(char**)( this + 0x180 ) != local_a8) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x180 ));
      pcVar3 = local_a8;
      local_a8 = (char*)0x0;
      *(char**)( this + 0x180 ) = pcVar3;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   uVar1 = *(undefined8*)( this + 0x188 );
   Variant::Variant((Variant*)local_78, false);
   local_a8 = "internationalization/pseudolocalization/use_pseudolocalization";
   local_b0 = 0;
   local_a0 = 0x3e;
   String::parse_latin1((StrRange*)&local_b0);
   _GLOBAL_DEF((String*)local_58, (Variant*)&local_b0, bVar7, false, false, false);
   Variant::operator_cast_to_bool((Variant*)local_58);
   TranslationDomain::set_pseudolocalization_enabled(SUB81(uVar1, 0));
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   uVar1 = *(undefined8*)( this + 0x188 );
   Variant::Variant((Variant*)local_78, true);
   local_a8 = "internationalization/pseudolocalization/replace_with_accents";
   local_b0 = 0;
   local_a0 = 0x3c;
   String::parse_latin1((StrRange*)&local_b0);
   _GLOBAL_DEF((String*)local_58, (Variant*)&local_b0, bVar7, false, false, false);
   Variant::operator_cast_to_bool((Variant*)local_58);
   TranslationDomain::set_pseudolocalization_accents_enabled(SUB81(uVar1, 0));
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   uVar1 = *(undefined8*)( this + 0x188 );
   Variant::Variant((Variant*)local_78, false);
   local_a8 = "internationalization/pseudolocalization/double_vowels";
   local_b0 = 0;
   local_a0 = 0x35;
   String::parse_latin1((StrRange*)&local_b0);
   _GLOBAL_DEF((String*)local_58, (Variant*)&local_b0, bVar7, false, false, false);
   Variant::operator_cast_to_bool((Variant*)local_58);
   TranslationDomain::set_pseudolocalization_double_vowels_enabled(SUB81(uVar1, 0));
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   uVar1 = *(undefined8*)( this + 0x188 );
   Variant::Variant((Variant*)local_78, false);
   local_a8 = "internationalization/pseudolocalization/fake_bidi";
   local_b0 = 0;
   local_a0 = 0x31;
   String::parse_latin1((StrRange*)&local_b0);
   _GLOBAL_DEF((String*)local_58, (Variant*)&local_b0, bVar7, false, false, false);
   Variant::operator_cast_to_bool((Variant*)local_58);
   TranslationDomain::set_pseudolocalization_fake_bidi_enabled(SUB81(uVar1, 0));
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   uVar1 = *(undefined8*)( this + 0x188 );
   Variant::Variant((Variant*)local_78, false);
   local_a8 = "internationalization/pseudolocalization/override";
   local_b0 = 0;
   local_a0 = 0x30;
   String::parse_latin1((StrRange*)&local_b0);
   _GLOBAL_DEF((String*)local_58, (Variant*)&local_b0, bVar7, false, false, false);
   Variant::operator_cast_to_bool((Variant*)local_58);
   TranslationDomain::set_pseudolocalization_override_enabled(SUB81(uVar1, 0));
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, 0.0);
   local_a8 = "internationalization/pseudolocalization/expansion_ratio";
   local_b0 = 0;
   local_a0 = 0x37;
   String::parse_latin1((StrRange*)&local_b0);
   _GLOBAL_DEF((String*)local_58, (Variant*)&local_b0, bVar7, false, false, false);
   fVar8 = Variant::operator_cast_to_float((Variant*)local_58);
   TranslationDomain::set_pseudolocalization_expansion_ratio(fVar8);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   pSVar2 = *(String**)( this + 0x188 );
   Variant::Variant((Variant*)local_78, "[");
   local_a8 = "internationalization/pseudolocalization/prefix";
   local_b0 = 0;
   local_a0 = 0x2e;
   String::parse_latin1((StrRange*)&local_b0);
   _GLOBAL_DEF((String*)local_58, (Variant*)&local_b0, bVar7, false, false, false);
   Variant::operator_cast_to_String((Variant*)&local_a8);
   TranslationDomain::set_pseudolocalization_prefix(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   pSVar2 = *(String**)( this + 0x188 );
   Variant::Variant((Variant*)local_78, "]");
   local_a8 = "internationalization/pseudolocalization/suffix";
   local_b0 = 0;
   local_a0 = 0x2e;
   String::parse_latin1((StrRange*)&local_b0);
   _GLOBAL_DEF((String*)local_58, (Variant*)&local_b0, bVar7, false, false, false);
   Variant::operator_cast_to_String((Variant*)&local_a8);
   TranslationDomain::set_pseudolocalization_suffix(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   uVar1 = *(undefined8*)( this + 0x188 );
   Variant::Variant((Variant*)local_78, true);
   local_b0 = 0;
   local_a8 = "internationalization/pseudolocalization/skip_placeholders";
   local_a0 = 0x39;
   String::parse_latin1((StrRange*)&local_b0);
   _GLOBAL_DEF((String*)local_58, (Variant*)&local_b0, bVar7, false, false, false);
   Variant::operator_cast_to_bool((Variant*)local_58);
   TranslationDomain::set_pseudolocalization_skip_placeholders_enabled(SUB81(uVar1, 0));
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   pPVar6 = (PropertyInfo*)ProjectSettings::get_singleton();
   local_b8 = 0;
   local_a8 = "";
   local_c0 = 0;
   local_a0 = 0;
   String::parse_latin1((StrRange*)&local_c0);
   local_c8 = 0;
   local_a8 = "internationalization/locale/test";
   local_a0 = 0x20;
   String::parse_latin1((StrRange*)&local_c8);
   local_a8 = (char*)CONCAT44(local_a8._4_4_, 4);
   local_a0 = 0;
   if (local_c8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)&local_c8);
   }

   local_98 = 0;
   local_90 = 0x20;
   local_88 = 0;
   if (local_c0 == 0) {
      LAB_00105c20:local_80 = 6;
      StringName::operator =((StringName*)&local_98, (StringName*)&local_b8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)&local_c0);
      local_80 = 6;
      if (local_90 != 0x11) goto LAB_00105c20;
      StringName::StringName((StringName*)&local_b0, (String*)&local_88, false);
      if (local_98 == local_b0) {
         if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_98 = local_b0;
      }

   }

   ProjectSettings::set_custom_property_info(pPVar6);
   lVar4 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar5 = (long*)( local_88 + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   lVar4 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar5 = (long*)( local_a0 + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   pPVar6 = (PropertyInfo*)ProjectSettings::get_singleton();
   local_b8 = 0;
   local_c0 = 0;
   local_a8 = "";
   local_a0 = 0;
   String::parse_latin1((StrRange*)&local_c0);
   local_c8 = 0;
   local_a8 = "internationalization/locale/fallback";
   local_a0 = 0x24;
   String::parse_latin1((StrRange*)&local_c8);
   local_a8 = (char*)CONCAT44(local_a8._4_4_, 4);
   local_a0 = 0;
   if (local_c8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)&local_c8);
   }

   local_98 = 0;
   local_90 = 0x20;
   local_88 = 0;
   if (local_c0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)&local_c0);
      local_80 = 6;
      if (local_90 == 0x11) {
         StringName::StringName((StringName*)&local_b0, (String*)&local_88, false);
         if (local_98 == local_b0) {
            if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_98 = local_b0;
         }

         goto LAB_00105b27;
      }

   }

   local_80 = 6;
   StringName::operator =((StringName*)&local_98, (StringName*)&local_b8);
   LAB_00105b27:ProjectSettings::set_custom_property_info(pPVar6);
   lVar4 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar5 = (long*)( local_88 + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   lVar4 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar5 = (long*)( local_a0 + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* TranslationServer::get_locale_name(String const&) const */String *TranslationServer::get_locale_name(String *param_1) {
   int *piVar1;
   code *pcVar2;
   undefined *puVar3;
   long lVar4;
   String *in_RDX;
   TranslationServer *in_RSI;
   long lVar5;
   long in_FS_OFFSET;
   CowData<char32_t> *local_e0;
   CowData<char32_t> *local_d8;
   long local_b8;
   int *local_b0;
   int *local_a8;
   undefined8 local_a0;
   String local_98[8];
   undefined8 local_90;
   String local_88[8];
   undefined8 local_80;
   char local_78[8];
   CowData *local_70;
   undefined *local_68;
   undefined8 local_60;
   CowData<char32_t> local_58[8];
   CowData<char32_t> local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b8 = 0;
   local_b0 = (int*)0x0;
   local_a8 = (int*)0x0;
   Locale::Locale((Locale*)&local_68, in_RSI, in_RDX, false);
   Locale::operator_cast_to_String((Locale*)&local_80);
   CowData<char32_t>::_unref(local_50);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   String::split(local_78, SUB81((Locale*)&local_80, 0), 0x1097d1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (local_70 == (CowData*)0x0) {
      lVar5 = 0;
   }
 else {
      lVar5 = *(long*)( local_70 + -8 );
      if (0 < lVar5) {
         if (local_b8 != *(long*)local_70) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, local_70);
            if (local_70 == (CowData*)0x0) goto LAB_00105f6a;
            lVar5 = *(long*)( local_70 + -8 );
         }

         if (1 < lVar5) {
            piVar1 = *(int**)( local_70 + 8 );
            if (( piVar1 == (int*)0x0 ) || ( lVar5 = *(long*)( piVar1 + -2 ) ),(int)lVar5 != 5) {
               LAB_00105f2b:lVar5 = *(long*)( local_70 + -8 );
               if (1 < lVar5) {
                  piVar1 = *(int**)( local_70 + 8 );
                  if (( piVar1 != (int*)0x0 ) && ( lVar5 = *(long*)( piVar1 + -2 ) ),(int)lVar5 == 3) {
                     if (lVar5 < 1) goto LAB_001062c3;
                     if (( ( ( *piVar1 - 0x41U < 0x1a ) && ( piVar1[1] - 0x41U < 0x1a ) ) && ( piVar1 != local_a8 ) ) && ( CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, local_70 + 8),local_70 == (CowData*)0x0 )) goto LAB_00105f6a;
                  }

                  goto LAB_00105f50;
               }

            }
 else {
               if (lVar5 < 1) goto LAB_001062c3;
               if (( ( ( ( 0x19 < *piVar1 - 0x41U ) || ( 0x19 < piVar1[1] - 0x61U ) ) || ( 0x19 < piVar1[2] - 0x61U ) ) || ( ( 0x19 < piVar1[3] - 0x61U || ( piVar1 == local_b0 ) ) ) ) || ( CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, local_70 + 8),local_70 != (CowData*)0x0 )) goto LAB_00105f2b;
               lVar5 = 0;
            }

            lVar4 = 1;
            goto LAB_001062e0;
         }

         LAB_00105f50:if (( *(long*)( local_70 + -8 ) < 3 ) || ( piVar1 = *(int**)( local_70 + 0x10 ) ),piVar1 == (int*)0x0) {
            LAB_00105f6a:local_e0 = (CowData<char32_t>*)&local_a8;
            get_language_name(param_1);
            if (( local_b0 != (int*)0x0 ) && ( 1 < (uint)local_b0[-2] )) {
               local_80 = 0;
               local_68 = &_LC93;
               local_60 = 1;
               String::parse_latin1((StrRange*)&local_80);
               get_script_name((String*)&local_90);
               local_a0 = 0;
               local_68 = &_LC94;
               local_60 = 2;
               String::parse_latin1((StrRange*)&local_a0);
               String::operator +(local_98, param_1);
               String::operator +(local_88, local_98);
               String::operator +((String*)&local_68, local_88);
               if (*(undefined**)param_1 != local_68) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
                  puVar3 = local_68;
                  local_68 = (undefined*)0x0;
                  *(undefined**)param_1 = puVar3;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            }

            local_d8 = (CowData<char32_t>*)&local_b0;
            if (( local_a8 != (int*)0x0 ) && ( 1 < (uint)local_a8[-2] )) {
               get_country_name((String*)&local_80);
               local_90 = 0;
               local_68 = &_LC95;
               local_60 = 2;
               String::parse_latin1((StrRange*)&local_90);
               String::operator +(local_88, param_1);
               String::operator +((String*)&local_68, local_88);
               if (*(undefined**)param_1 != local_68) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
                  puVar3 = local_68;
                  local_68 = (undefined*)0x0;
                  *(undefined**)param_1 = puVar3;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            }

            CowData<String>::_unref((CowData<String>*)&local_70);
            CowData<char32_t>::_unref(local_e0);
            CowData<char32_t>::_unref(local_d8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return param_1;
         }

         lVar5 = *(long*)( piVar1 + -2 );
         if ((int)lVar5 != 3) goto LAB_00105f6a;
         if (0 < lVar5) {
            if (( ( *piVar1 - 0x41U < 0x1a ) && ( piVar1[1] - 0x41U < 0x1a ) ) && ( piVar1 != local_a8 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, local_70 + 0x10);
            }

            goto LAB_00105f6a;
         }

      }

   }

   LAB_001062c3:lVar4 = 0;
   LAB_001062e0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar5, "p_index", "size()", "", false, true);
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
/* TranslationServer::get_all_countries() const */TranslationServer * __thiscall TranslationServer::get_all_countries(TranslationServer *this){
   long *plVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_38;
   long local_30;
   plVar4 = (long*)country_name_map._24_8_;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   if (plVar4 != (long*)0x0) {
      do {
         while (true) {
            local_38 = 0;
            plVar1 = (long*)( plVar4[2] + -0x10 );
            if (plVar4[2] != 0) break;
            Vector<String>::push_back((Vector<String>*)this, &local_38);
            plVar4 = (long*)*plVar4;
            if (plVar4 == (long*)0x0) goto LAB_001066b0;
         }
;
         do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_00106659;
            LOCK();
            lVar3 = *plVar1;
            bVar5 = lVar2 == lVar3;
            if (bVar5) {
               *plVar1 = lVar2 + 1;
               lVar3 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar5 );
         if (lVar3 != -1) {
            local_38 = plVar4[2];
         }

         LAB_00106659:lVar2 = local_38;
         Vector<String>::push_back((Vector<String>*)this);
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_38 + -0x10 ), false);
            }

         }

         plVar4 = (long*)*plVar4;
      }
 while ( plVar4 != (long*)0x0 );
   }

   LAB_001066b0:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* TranslationServer::get_all_scripts() const */TranslationServer * __thiscall TranslationServer::get_all_scripts(TranslationServer *this){
   long *plVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_38;
   long local_30;
   plVar4 = (long*)script_map._24_8_;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   if (plVar4 != (long*)0x0) {
      do {
         while (true) {
            local_38 = 0;
            plVar1 = (long*)( plVar4[2] + -0x10 );
            if (plVar4[2] != 0) break;
            Vector<String>::push_back((Vector<String>*)this, &local_38);
            plVar4 = (long*)*plVar4;
            if (plVar4 == (long*)0x0) goto LAB_001067a0;
         }
;
         do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_00106749;
            LOCK();
            lVar3 = *plVar1;
            bVar5 = lVar2 == lVar3;
            if (bVar5) {
               *plVar1 = lVar2 + 1;
               lVar3 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar5 );
         if (lVar3 != -1) {
            local_38 = plVar4[2];
         }

         LAB_00106749:lVar2 = local_38;
         Vector<String>::push_back((Vector<String>*)this);
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_38 + -0x10 ), false);
            }

         }

         plVar4 = (long*)*plVar4;
      }
 while ( plVar4 != (long*)0x0 );
   }

   LAB_001067a0:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* TranslationServer::get_all_languages() const */TranslationServer * __thiscall TranslationServer::get_all_languages(TranslationServer *this){
   long *plVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_38;
   long local_30;
   plVar4 = (long*)language_map._24_8_;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   if (plVar4 != (long*)0x0) {
      do {
         while (true) {
            local_38 = 0;
            plVar1 = (long*)( plVar4[2] + -0x10 );
            if (plVar4[2] != 0) break;
            Vector<String>::push_back((Vector<String>*)this, &local_38);
            plVar4 = (long*)*plVar4;
            if (plVar4 == (long*)0x0) goto LAB_00106890;
         }
;
         do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_00106839;
            LOCK();
            lVar3 = *plVar1;
            bVar5 = lVar2 == lVar3;
            if (bVar5) {
               *plVar1 = lVar2 + 1;
               lVar3 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar5 );
         if (lVar3 != -1) {
            local_38 = plVar4[2];
         }

         LAB_00106839:lVar2 = local_38;
         Vector<String>::push_back((Vector<String>*)this);
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_38 + -0x10 ), false);
            }

         }

         plVar4 = (long*)*plVar4;
      }
 while ( plVar4 != (long*)0x0 );
   }

   LAB_00106890:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* CowData<TranslationServer::LocaleScriptInfo>::_copy_on_write() [clone .isra.0] */void CowData<TranslationServer::LocaleScriptInfo>::_copy_on_write(CowData<TranslationServer::LocaleScriptInfo> *this) {
   uint uVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   code *pcVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   long lVar9;
   CowData *pCVar10;
   CowData *pCVar11;
   ulong uVar12;
   CowData<char32_t> *this_00;
   long lVar13;
   long lVar14;
   CowData<char32_t> *this_01;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar6 = (code*)invalidInstructionException();
      ( *pcVar6 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar12 = 0x10;
   if (lVar2 * 0x40 != 0) {
      uVar12 = lVar2 * 0x40 - 1;
      uVar12 = uVar12 | uVar12 >> 1;
      uVar12 = uVar12 | uVar12 >> 2;
      uVar12 = uVar12 | uVar12 >> 4;
      uVar12 = uVar12 | uVar12 >> 8;
      uVar12 = uVar12 | uVar12 >> 0x10;
      uVar12 = ( uVar12 | uVar12 >> 0x20 ) + 0x11;
   }

   puVar7 = (undefined8*)Memory::alloc_static(uVar12, false);
   if (puVar7 != (undefined8*)0x0) {
      lVar13 = 0;
      *puVar7 = 1;
      puVar7[1] = lVar2;
      this_01 = (CowData<char32_t>*)( puVar7 + 2 );
      if (lVar2 != 0) {
         do {
            pCVar10 = (CowData*)( lVar13 * 0x40 + *(long*)this );
            *(undefined8*)this_01 = 0;
            if (*(long*)pCVar10 != 0) {
               CowData<char32_t>::_ref(this_01, pCVar10);
            }

            *(undefined8*)( this_01 + 8 ) = 0;
            if (*(long*)( pCVar10 + 8 ) != 0) {
               CowData<char32_t>::_ref(this_01 + 8, pCVar10 + 8);
            }

            *(undefined8*)( this_01 + 0x10 ) = 0;
            if (*(long*)( pCVar10 + 0x10 ) != 0) {
               CowData<char32_t>::_ref(this_01 + 0x10, pCVar10 + 0x10);
            }

            *(undefined8*)( this_01 + 0x38 ) = 0;
            *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
            uVar12 = *(ulong*)( pCVar10 + 0x38 );
            *(ulong*)( this_01 + 0x38 ) = uVar12;
            if ((int)( uVar12 >> 0x20 ) != 0) {
               uVar1 = *(uint*)( hash_table_size_primes + ( uVar12 & 0xffffffff ) * 4 );
               uVar12 = (ulong)uVar1 * 4;
               uVar8 = Memory::alloc_static(uVar12, false);
               lVar14 = 0;
               *(undefined8*)( this_01 + 0x30 ) = uVar8;
               uVar8 = Memory::alloc_static((ulong)uVar1 * 8, false);
               *(undefined8*)( this_01 + 0x18 ) = uVar8;
               uVar8 = Memory::alloc_static(uVar12, false);
               *(undefined8*)( this_01 + 0x28 ) = uVar8;
               uVar8 = Memory::alloc_static(uVar12, false);
               *(undefined8*)( this_01 + 0x20 ) = uVar8;
               if (*(int*)( this_01 + 0x3c ) != 0) {
                  do {
                     this_00 = (CowData<char32_t>*)( *(long*)( this_01 + 0x18 ) + lVar14 * 8 );
                     pCVar11 = (CowData*)( lVar14 * 8 + *(long*)( pCVar10 + 0x18 ) );
                     *(undefined8*)this_00 = 0;
                     if (*(long*)pCVar11 != 0) {
                        CowData<char32_t>::_ref(this_00, pCVar11);
                     }

                     *(undefined4*)( *(long*)( this_01 + 0x28 ) + lVar14 * 4 ) = *(undefined4*)( *(long*)( pCVar10 + 0x28 ) + lVar14 * 4 );
                     lVar14 = lVar14 + 1;
                  }
 while ( (uint)lVar14 < *(uint*)( this_01 + 0x3c ) );
               }

               if (uVar1 != 0) {
                  lVar14 = *(long*)( pCVar10 + 0x30 );
                  lVar3 = *(long*)( this_01 + 0x30 );
                  lVar9 = 0;
                  lVar4 = *(long*)( pCVar10 + 0x20 );
                  lVar5 = *(long*)( this_01 + 0x20 );
                  do {
                     *(undefined4*)( lVar3 + lVar9 ) = *(undefined4*)( lVar14 + lVar9 );
                     *(undefined4*)( lVar5 + lVar9 ) = *(undefined4*)( lVar4 + lVar9 );
                     lVar9 = lVar9 + 4;
                  }
 while ( uVar12 - lVar9 != 0 );
               }

            }

            lVar13 = lVar13 + 1;
            this_01 = this_01 + 0x40;
         }
 while ( lVar2 != lVar13 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar7 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* TranslationServer::init_locale_info() */void TranslationServer::init_locale_info(void) {
   long *plVar1;
   CowData<char32_t> *this;
   ulong uVar2;
   uint uVar3;
   char *pcVar4;
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
   int iVar18;
   long *plVar19;
   size_t sVar20;
   CowData<char32_t> *pCVar21;
   long lVar22;
   long lVar23;
   ulong uVar24;
   undefined8 uVar25;
   StrRange *pSVar26;
   long lVar27;
   long lVar28;
   char *pcVar29;
   CowData *pCVar30;
   void *pvVar31;
   undefined1 *puVar32;
   undefined8 *puVar33;
   CowData *pCVar34;
   long in_FS_OFFSET;
   uint uVar35;
   undefined8 *local_150;
   undefined8 local_148;
   long local_e0;
   long local_d8;
   long local_d0;
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   undefined1 local_a8[16];
   void *local_98;
   undefined8 local_90;
   char *local_88;
   size_t local_80;
   long local_78;
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( language_map._8_8_ != 0 ) && ( language_map._44_4_ != 0 )) {
      lVar27 = 0;
      uVar35 = *(uint*)( hash_table_size_primes + (ulong)(uint)language_map._40_4_ * 4 );
      if (uVar35 != 0) {
         do {
            if (*(int*)( language_map._16_8_ + lVar27 ) != 0) {
               *(int*)( language_map._16_8_ + lVar27 ) = 0;
               pvVar31 = *(void**)( language_map._8_8_ + lVar27 * 2 );
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x18 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x10 ));
               Memory::free_static(pvVar31, false);
               *(undefined8*)( language_map._8_8_ + lVar27 * 2 ) = 0;
            }

            lVar27 = lVar27 + 4;
         }
 while ( (ulong)uVar35 << 2 != lVar27 );
      }

      language_map._44_4_ = 0;
      language_map._24_16_ = (undefined1[16])0x0;
   }

   puVar33 = (undefined8*)( language_list + 8 );
   pcVar29 = "aa";
   do {
      String::utf8((char*)local_c8, (int)*puVar33);
      local_d8 = 0;
      local_80 = strlen(pcVar29);
      local_88 = pcVar29;
      String::parse_latin1((StrRange*)&local_d8);
      plVar19 = (long*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)language_map, (String*)&local_d8);
      lVar27 = *plVar19;
      if (lVar27 != local_c8._0_8_) {
         if (lVar27 != 0) {
            LOCK();
            plVar1 = (long*)( lVar27 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar27 = *plVar19;
               *plVar19 = 0;
               Memory::free_static((void*)( lVar27 + -0x10 ), false);
            }
 else {
               *plVar19 = 0;
            }

         }

         *plVar19 = local_c8._0_8_;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = local_c8._8_8_;
         local_c8 = auVar15 << 0x40;
      }

      lVar27 = local_d8;
      if (local_d8 != 0) {
         LOCK();
         plVar19 = (long*)( local_d8 + -0x10 );
         *plVar19 = *plVar19 + -1;
         UNLOCK();
         if (*plVar19 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar27 + -0x10 ), false);
         }

      }

      uVar25 = local_c8._0_8_;
      if (local_c8._0_8_ != 0) {
         LOCK();
         plVar19 = (long*)( local_c8._0_8_ + -0x10 );
         *plVar19 = *plVar19 + -1;
         UNLOCK();
         if (*plVar19 == 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = local_c8._8_8_;
            local_c8 = auVar5 << 0x40;
            Memory::free_static((void*)( uVar25 + -0x10 ), false);
         }

      }

      pcVar29 = (char*)puVar33[1];
      puVar33 = puVar33 + 2;
   }
 while ( pcVar29 != (char*)0x0 );
   if (( locale_script_info._8_8_ != 0 ) && ( *(long*)( locale_script_info._8_8_ + -8 ) != 0 )) {
      CowData<TranslationServer::LocaleScriptInfo>::_unref((CowData<TranslationServer::LocaleScriptInfo>*)( locale_script_info + 8 ));
   }

   pcVar29 = "az";
   local_150 = (undefined8*)( locale_scripts + 8 );
   do {
      local_98 = (void*)0x0;
      local_c8 = (undefined1[16])0x0;
      local_b8 = (undefined1[16])0x0;
      local_a8 = (undefined1[16])0x0;
      local_90 = _LC108;
      local_80 = strlen(pcVar29);
      local_88 = pcVar29;
      String::parse_latin1((StrRange*)local_c8);
      pcVar29 = (char*)*local_150;
      sVar20 = 0;
      if (pcVar29 != (char*)0x0) {
         sVar20 = strlen(pcVar29);
      }

      local_88 = pcVar29;
      local_80 = sVar20;
      String::parse_latin1((StrRange*)( local_c8 + 8 ));
      pcVar29 = (char*)local_150[1];
      sVar20 = 0;
      if (pcVar29 != (char*)0x0) {
         sVar20 = strlen(pcVar29);
      }

      local_88 = pcVar29;
      local_80 = sVar20;
      String::parse_latin1((StrRange*)local_b8);
      local_e0 = 0;
      pcVar29 = (char*)local_150[2];
      sVar20 = 0;
      if (pcVar29 != (char*)0x0) {
         sVar20 = strlen(pcVar29);
      }

      local_88 = pcVar29;
      local_80 = sVar20;
      String::parse_latin1((StrRange*)&local_e0);
      String::split((char*)&local_d8, SUB81((StrRange*)&local_e0, 0), 0x109a95);
      lVar27 = local_e0;
      if (local_e0 != 0) {
         LOCK();
         plVar19 = (long*)( local_e0 + -0x10 );
         *plVar19 = *plVar19 + -1;
         UNLOCK();
         if (*plVar19 == 0) {
            local_e0 = 0;
            Memory::free_static((void*)( lVar27 + -0x10 ), false);
         }

      }

      for (lVar27 = 0; ( local_d0 != 0 && ( lVar27 < *(long*)( local_d0 + -8 ) ) ); lVar27 = lVar27 + 1) {
         HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String*)&local_88);
      }

      local_88 = (char*)0x0;
      if (local_c8._0_8_ != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)local_c8);
      }

      local_80 = 0;
      if (local_c8._8_8_ != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( local_c8 + 8 ));
      }

      local_78 = 0;
      if (local_b8._0_8_ != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)local_b8);
      }

      local_70 = (undefined1[16])0x0;
      local_148 = local_90;
      uVar35 = ( uint )(local_90 >> 0x20);
      local_50 = local_90;
      local_60 = (undefined1[16])0x0;
      if (uVar35 != 0) {
         lVar28 = 0;
         uVar3 = *(uint*)( hash_table_size_primes + ( local_90 & 0xffffffff ) * 4 );
         uVar2 = (ulong)uVar3 * 4;
         lVar27 = Memory::alloc_static(uVar2, false);
         local_60._8_8_ = lVar27;
         pCVar21 = (CowData<char32_t>*)Memory::alloc_static((ulong)uVar3 * 8, false);
         local_70._0_8_ = pCVar21;
         lVar22 = Memory::alloc_static(uVar2, false);
         local_60._0_8_ = lVar22;
         lVar23 = Memory::alloc_static(uVar2, false);
         local_70._8_8_ = lVar23;
         do {
            *(undefined8*)pCVar21 = 0;
            pCVar34 = (CowData*)( local_b8._8_8_ + lVar28 * 2 );
            if (*(long*)pCVar34 != 0) {
               CowData<char32_t>::_ref(pCVar21, pCVar34);
            }

            pCVar21 = pCVar21 + 8;
            *(undefined4*)( lVar22 + lVar28 ) = *(undefined4*)( local_a8._8_8_ + lVar28 );
            lVar28 = lVar28 + 4;
         }
 while ( lVar28 != (ulong)uVar35 << 2 );
         if (uVar3 != 0) {
            uVar24 = 0;
            do {
               *(undefined4*)( lVar27 + uVar24 ) = *(undefined4*)( (long)local_98 + uVar24 );
               *(undefined4*)( lVar23 + uVar24 ) = *(undefined4*)( local_a8._0_8_ + uVar24 );
               uVar24 = uVar24 + 4;
            }
 while ( uVar2 != uVar24 );
         }

      }

      if (locale_script_info._8_8_ == 0) {
         lVar27 = 1;
      }
 else {
         lVar27 = *(long*)( locale_script_info._8_8_ + -8 ) + 1;
      }

      iVar18 = CowData<TranslationServer::LocaleScriptInfo>::resize<false>((CowData<TranslationServer::LocaleScriptInfo>*)( locale_script_info + 8 ), lVar27);
      if (iVar18 != 0) {
         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         pCVar34 = (CowData*)local_70._0_8_;
         goto LAB_0010748f;
      }

      if (locale_script_info._8_8_ == 0) {
         lVar22 = -1;
         lVar27 = 0;
         LAB_001080ac:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar22, lVar27, "p_index", "size()", "", false, false);
         pCVar34 = (CowData*)local_70._0_8_;
         LAB_0010748f:if (pCVar34 != (CowData*)0x0) {
            if (local_50._4_4_ != 0) {
               if (*(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) != 0) {
                  memset((void*)local_60._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) * 4);
               }

               LAB_001074d3:lVar27 = 0;
               do {
                  pCVar30 = pCVar34 + lVar27 * 8;
                  if (*(long*)pCVar30 != 0) {
                     LOCK();
                     plVar19 = (long*)( *(long*)pCVar30 + -0x10 );
                     *plVar19 = *plVar19 + -1;
                     UNLOCK();
                     if (*plVar19 == 0) {
                        lVar22 = *(long*)pCVar30;
                        *(long*)pCVar30 = 0;
                        Memory::free_static((void*)( lVar22 + -0x10 ), false);
                     }

                     pCVar34 = (CowData*)local_70._0_8_;
                  }

                  lVar27 = lVar27 + 1;
               }
 while ( (uint)lVar27 < local_50._4_4_ );
               local_50 = local_50 & 0xffffffff;
               if (pCVar34 == (CowData*)0x0) goto LAB_00107533;
            }

            Memory::free_static(pCVar34, false);
            Memory::free_static((void*)local_60._0_8_, false);
            Memory::free_static((void*)local_70._8_8_, false);
            Memory::free_static((void*)local_60._8_8_, false);
         }

      }
 else {
         lVar27 = *(long*)( locale_script_info._8_8_ + -8 );
         lVar22 = lVar27 + -1;
         if (lVar22 < 0) goto LAB_001080ac;
         CowData<TranslationServer::LocaleScriptInfo>::_copy_on_write((CowData<TranslationServer::LocaleScriptInfo>*)( locale_script_info + 8 ));
         pCVar21 = (CowData<char32_t>*)( lVar22 * 0x40 + locale_script_info._8_8_ );
         if (*(char**)pCVar21 != local_88) {
            CowData<char32_t>::_ref(pCVar21, (CowData*)&local_88);
         }

         if (*(size_t*)( pCVar21 + 8 ) != local_80) {
            CowData<char32_t>::_ref(pCVar21 + 8, (CowData*)&local_80);
         }

         if (*(long*)( pCVar21 + 0x10 ) != local_78) {
            CowData<char32_t>::_ref(pCVar21 + 0x10, (CowData*)&local_78);
         }

         pvVar31 = *(void**)( pCVar21 + 0x18 );
         uVar2 = local_148;
         if (pvVar31 != (void*)0x0) {
            if (( *(int*)( pCVar21 + 0x3c ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pCVar21 + 0x38 ) * 4 ) == 0 || ( memset(*(void**)( pCVar21 + 0x30 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pCVar21 + 0x38 ) * 4 ) * 4),*(int*)( pCVar21 + 0x3c ) != 0 ) ) )) {
               lVar27 = 0;
               do {
                  plVar19 = (long*)( (long)pvVar31 + lVar27 * 8 );
                  if (*plVar19 != 0) {
                     LOCK();
                     plVar1 = (long*)( *plVar19 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar22 = *plVar19;
                        *plVar19 = 0;
                        Memory::free_static((void*)( lVar22 + -0x10 ), false);
                     }

                     pvVar31 = *(void**)( pCVar21 + 0x18 );
                  }

                  lVar27 = lVar27 + 1;
               }
 while ( (uint)lVar27 < *(uint*)( pCVar21 + 0x3c ) );
               *(undefined4*)( pCVar21 + 0x3c ) = 0;
               local_148 = local_50;
               uVar2 = local_148;
               local_148._4_4_ = ( uint )(local_50 >> 0x20);
               uVar35 = local_148._4_4_;
               if (pvVar31 == (void*)0x0) goto LAB_00107346;
            }

            local_148 = uVar2;
            Memory::free_static(pvVar31, false);
            Memory::free_static(*(void**)( pCVar21 + 0x28 ), false);
            Memory::free_static(*(void**)( pCVar21 + 0x20 ), false);
            Memory::free_static(*(void**)( pCVar21 + 0x30 ), false);
            *(undefined1(*) [16])( pCVar21 + 0x18 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( pCVar21 + 0x28 ) = (undefined1[16])0x0;
            uVar2 = local_148;
         }

         LAB_00107346:local_148 = uVar2;
         pCVar34 = (CowData*)local_70._0_8_;
         *(ulong*)( pCVar21 + 0x38 ) = local_148;
         if (uVar35 == 0) goto LAB_0010748f;
         uVar35 = *(uint*)( hash_table_size_primes + ( local_148 & 0xffffffff ) * 4 );
         uVar2 = (ulong)uVar35 * 4;
         uVar25 = Memory::alloc_static(uVar2, false);
         *(undefined8*)( pCVar21 + 0x30 ) = uVar25;
         uVar25 = Memory::alloc_static((ulong)uVar35 * 8, false);
         *(undefined8*)( pCVar21 + 0x18 ) = uVar25;
         uVar25 = Memory::alloc_static(uVar2, false);
         *(undefined8*)( pCVar21 + 0x28 ) = uVar25;
         uVar25 = Memory::alloc_static(uVar2, false);
         *(undefined8*)( pCVar21 + 0x20 ) = uVar25;
         if (*(int*)( pCVar21 + 0x3c ) != 0) {
            uVar25 = local_60._0_8_;
            lVar27 = 0;
            pCVar30 = pCVar34;
            do {
               this(CowData<char32_t> * )(*(long*)( pCVar21 + 0x18 ) + lVar27 * 8);
               *(undefined8*)this = 0;
               if (*(long*)pCVar30 != 0) {
                  CowData<char32_t>::_ref(this, pCVar30);
               }

               pCVar30 = pCVar30 + 8;
               *(undefined4*)( *(long*)( pCVar21 + 0x28 ) + lVar27 * 4 ) = *(undefined4*)( uVar25 + lVar27 * 4 );
               lVar27 = lVar27 + 1;
            }
 while ( (uint)lVar27 < *(uint*)( pCVar21 + 0x3c ) );
         }

         if (uVar35 != 0) {
            lVar27 = *(long*)( pCVar21 + 0x30 );
            uVar24 = 0;
            lVar22 = *(long*)( pCVar21 + 0x20 );
            do {
               *(undefined4*)( lVar27 + uVar24 ) = *(undefined4*)( local_60._8_8_ + uVar24 );
               *(undefined4*)( lVar22 + uVar24 ) = *(undefined4*)( local_70._8_8_ + uVar24 );
               uVar24 = uVar24 + 4;
            }
 while ( uVar24 != uVar2 );
            goto LAB_0010748f;
         }

         if (pCVar34 != (CowData*)0x0) goto LAB_001074d3;
      }

      LAB_00107533:if (local_78 != 0) {
         LOCK();
         plVar19 = (long*)( local_78 + -0x10 );
         *plVar19 = *plVar19 + -1;
         UNLOCK();
         if (*plVar19 == 0) {
            Memory::free_static((void*)( local_78 + -0x10 ), false);
         }

      }

      if (local_80 != 0) {
         LOCK();
         plVar19 = (long*)( local_80 - 0x10 );
         *plVar19 = *plVar19 + -1;
         UNLOCK();
         if (*plVar19 == 0) {
            Memory::free_static((void*)( local_80 - 0x10 ), false);
         }

      }

      if (local_88 != (char*)0x0) {
         LOCK();
         plVar19 = (long*)( local_88 + -0x10 );
         *plVar19 = *plVar19 + -1;
         UNLOCK();
         if (*plVar19 == 0) {
            Memory::free_static(local_88 + -0x10, false);
         }

      }

      CowData<String>::_unref((CowData<String>*)&local_d0);
      pvVar31 = (void*)local_b8._8_8_;
      if ((void*)local_b8._8_8_ != (void*)0x0) {
         if (local_90._4_4_ != 0) {
            if (*(uint*)( hash_table_size_primes + ( local_90 & 0xffffffff ) * 4 ) != 0) {
               memset(local_98, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_90 & 0xffffffff ) * 4 ) * 4);
               if (local_90._4_4_ == 0) goto LAB_00107940;
            }

            lVar27 = 0;
            do {
               plVar19 = (long*)( (long)pvVar31 + lVar27 * 8 );
               if (*plVar19 != 0) {
                  LOCK();
                  plVar1 = (long*)( *plVar19 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar22 = *plVar19;
                     *plVar19 = 0;
                     Memory::free_static((void*)( lVar22 + -0x10 ), false);
                  }

                  pvVar31 = (void*)local_b8._8_8_;
               }

               lVar27 = lVar27 + 1;
            }
 while ( (uint)lVar27 < local_90._4_4_ );
            local_90 = local_90 & 0xffffffff;
            if (pvVar31 == (void*)0x0) goto LAB_00107674;
         }

         LAB_00107940:Memory::free_static(pvVar31, false);
         Memory::free_static((void*)local_a8._8_8_, false);
         Memory::free_static((void*)local_a8._0_8_, false);
         Memory::free_static(local_98, false);
      }

      LAB_00107674:uVar25 = local_b8._0_8_;
      if (local_b8._0_8_ != 0) {
         LOCK();
         plVar19 = (long*)( local_b8._0_8_ + -0x10 );
         *plVar19 = *plVar19 + -1;
         UNLOCK();
         if (*plVar19 == 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = local_b8._8_8_;
            local_b8 = auVar6 << 0x40;
            Memory::free_static((void*)( uVar25 + -0x10 ), false);
         }

      }

      uVar25 = local_c8._8_8_;
      if (local_c8._8_8_ != 0) {
         LOCK();
         plVar19 = (long*)( local_c8._8_8_ + -0x10 );
         *plVar19 = *plVar19 + -1;
         UNLOCK();
         if (*plVar19 == 0) {
            local_c8._8_8_ = 0;
            Memory::free_static((void*)( uVar25 + -0x10 ), false);
         }

      }

      uVar25 = local_c8._0_8_;
      if (local_c8._0_8_ != 0) {
         LOCK();
         plVar19 = (long*)( local_c8._0_8_ + -0x10 );
         *plVar19 = *plVar19 + -1;
         UNLOCK();
         if (*plVar19 == 0) {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = local_c8._8_8_;
            local_c8 = auVar7 << 0x40;
            Memory::free_static((void*)( uVar25 + -0x10 ), false);
         }

      }

      pcVar29 = (char*)local_150[3];
      local_150 = local_150 + 4;
   }
 while ( pcVar29 != (char*)0x0 );
   if (( script_map._8_8_ != 0 ) && ( script_map._44_4_ != 0 )) {
      lVar27 = 0;
      uVar35 = *(uint*)( hash_table_size_primes + (ulong)(uint)script_map._40_4_ * 4 );
      if (uVar35 != 0) {
         do {
            if (*(int*)( script_map._16_8_ + lVar27 ) != 0) {
               *(int*)( script_map._16_8_ + lVar27 ) = 0;
               pvVar31 = *(void**)( script_map._8_8_ + lVar27 * 2 );
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x18 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x10 ));
               Memory::free_static(pvVar31, false);
               *(undefined8*)( script_map._8_8_ + lVar27 * 2 ) = 0;
            }

            lVar27 = lVar27 + 4;
         }
 while ( (ulong)uVar35 << 2 != lVar27 );
      }

      script_map._44_4_ = 0;
      script_map._24_16_ = (undefined1[16])0x0;
   }

   puVar33 = (undefined8*)( script_list + 8 );
   pcVar29 = "Adlam";
   do {
      String::utf8((char*)local_c8, (int)pcVar29);
      pcVar29 = (char*)*puVar33;
      sVar20 = 0;
      local_d8 = 0;
      if (pcVar29 != (char*)0x0) {
         sVar20 = strlen(pcVar29);
      }

      local_88 = pcVar29;
      local_80 = sVar20;
      String::parse_latin1((StrRange*)&local_d8);
      plVar19 = (long*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)script_map, (String*)&local_d8);
      lVar27 = *plVar19;
      if (lVar27 != local_c8._0_8_) {
         if (lVar27 != 0) {
            LOCK();
            plVar1 = (long*)( lVar27 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar27 = *plVar19;
               *plVar19 = 0;
               Memory::free_static((void*)( lVar27 + -0x10 ), false);
            }
 else {
               *plVar19 = 0;
            }

         }

         *plVar19 = local_c8._0_8_;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = local_c8._8_8_;
         local_c8 = auVar16 << 0x40;
      }

      lVar27 = local_d8;
      if (local_d8 != 0) {
         LOCK();
         plVar19 = (long*)( local_d8 + -0x10 );
         *plVar19 = *plVar19 + -1;
         UNLOCK();
         if (*plVar19 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar27 + -0x10 ), false);
         }

      }

      uVar25 = local_c8._0_8_;
      if (local_c8._0_8_ != 0) {
         LOCK();
         plVar19 = (long*)( local_c8._0_8_ + -0x10 );
         *plVar19 = *plVar19 + -1;
         UNLOCK();
         if (*plVar19 == 0) {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = local_c8._8_8_;
            local_c8 = auVar8 << 0x40;
            Memory::free_static((void*)( uVar25 + -0x10 ), false);
         }

      }

      pcVar29 = (char*)puVar33[1];
      puVar33 = puVar33 + 2;
   }
 while ( pcVar29 != (char*)0x0 );
   if (( variant_map._8_8_ != 0 ) && ( variant_map._44_4_ != 0 )) {
      lVar27 = 0;
      uVar35 = *(uint*)( hash_table_size_primes + (ulong)(uint)variant_map._40_4_ * 4 );
      if (uVar35 != 0) {
         do {
            if (*(int*)( variant_map._16_8_ + lVar27 ) != 0) {
               *(int*)( variant_map._16_8_ + lVar27 ) = 0;
               pvVar31 = *(void**)( variant_map._8_8_ + lVar27 * 2 );
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x18 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x10 ));
               Memory::free_static(pvVar31, false);
               *(undefined8*)( variant_map._8_8_ + lVar27 * 2 ) = 0;
            }

            lVar27 = lVar27 + 4;
         }
 while ( (ulong)uVar35 << 2 != lVar27 );
      }

      variant_map._44_4_ = 0;
      variant_map._24_16_ = (undefined1[16])0x0;
   }

   puVar32 = locale_variants;
   pcVar29 = "valencia";
   do {
      pcVar4 = *(char**)( (long)puVar32 + 8 );
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_c8._8_8_;
      local_c8 = auVar9 << 0x40;
      local_80 = strlen(pcVar29);
      local_88 = pcVar29;
      String::parse_latin1((StrRange*)local_c8);
      pSVar26 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)variant_map, (String*)local_c8);
      sVar20 = 0;
      if (pcVar4 != (char*)0x0) {
         sVar20 = strlen(pcVar4);
      }

      puVar32 = (undefined1*)( (long)puVar32 + 0x10 );
      local_88 = pcVar4;
      local_80 = sVar20;
      String::parse_latin1(pSVar26);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
      pcVar29 = *(char**)puVar32;
   }
 while ( pcVar29 != (char*)0x0 );
   if (( locale_rename_map._8_8_ != 0 ) && ( locale_rename_map._44_4_ != 0 )) {
      uVar35 = *(uint*)( hash_table_size_primes + (ulong)(uint)locale_rename_map._40_4_ * 4 );
      lVar27 = 0;
      if (uVar35 != 0) {
         do {
            if (*(int*)( locale_rename_map._16_8_ + lVar27 ) != 0) {
               *(int*)( locale_rename_map._16_8_ + lVar27 ) = 0;
               pvVar31 = *(void**)( locale_rename_map._8_8_ + lVar27 * 2 );
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x18 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x10 ));
               Memory::free_static(pvVar31, false);
               *(undefined8*)( locale_rename_map._8_8_ + lVar27 * 2 ) = 0;
            }

            lVar27 = lVar27 + 4;
         }
 while ( (ulong)uVar35 << 2 != lVar27 );
      }

      locale_rename_map._44_4_ = 0;
      locale_rename_map._24_16_ = (undefined1[16])0x0;
   }

   puVar32 = locale_renames;
   pcVar29 = "in";
   do {
      pcVar4 = *(char**)( puVar32 + 8 );
      sVar20 = 0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_c8._8_8_;
      local_c8 = auVar10 << 0x40;
      if (pcVar4 != (char*)0x0) {
         sVar20 = strlen(pcVar4);
      }

      local_88 = pcVar4;
      local_80 = sVar20;
      String::parse_latin1((StrRange*)local_c8);
      if (( local_c8._0_8_ == 0 ) || ( iVar18 = iVar18 == 0 )) {
         LAB_00107c8a:CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         if (iVar18 != 1) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = local_c8._8_8_;
            local_c8 = auVar11 << 0x40;
            local_80 = strlen(pcVar29);
            local_88 = pcVar29;
            String::parse_latin1((StrRange*)local_c8);
            pSVar26 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)locale_rename_map, (String*)local_c8);
            sVar20 = 0;
            if (pcVar4 != (char*)0x0) {
               sVar20 = strlen(pcVar4);
            }

            local_88 = pcVar4;
            local_80 = sVar20;
            String::parse_latin1(pSVar26);
            goto LAB_00107c8a;
         }

      }

      pcVar29 = *(char**)( puVar32 + 0x10 );
      puVar32 = puVar32 + 0x10;
   }
 while ( pcVar29 != (char*)0x0 );
   if (( country_name_map._8_8_ != 0 ) && ( country_name_map._44_4_ != 0 )) {
      lVar27 = 0;
      uVar35 = *(uint*)( hash_table_size_primes + (ulong)(uint)country_name_map._40_4_ * 4 );
      if (uVar35 != 0) {
         do {
            if (*(int*)( country_name_map._16_8_ + lVar27 ) != 0) {
               *(int*)( country_name_map._16_8_ + lVar27 ) = 0;
               pvVar31 = *(void**)( country_name_map._8_8_ + lVar27 * 2 );
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x18 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x10 ));
               Memory::free_static(pvVar31, false);
               *(undefined8*)( country_name_map._8_8_ + lVar27 * 2 ) = 0;
            }

            lVar27 = lVar27 + 4;
         }
 while ( (ulong)uVar35 << 2 != lVar27 );
      }

      country_name_map._44_4_ = 0;
      country_name_map._24_16_ = (undefined1[16])0x0;
   }

   puVar33 = (undefined8*)( country_names + 8 );
   pcVar29 = "AC";
   do {
      String::utf8((char*)local_c8, (int)*puVar33);
      local_d8 = 0;
      local_80 = strlen(pcVar29);
      local_88 = pcVar29;
      String::parse_latin1((StrRange*)&local_d8);
      plVar19 = (long*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)country_name_map, (String*)&local_d8);
      lVar27 = *plVar19;
      if (lVar27 != local_c8._0_8_) {
         if (lVar27 != 0) {
            LOCK();
            plVar1 = (long*)( lVar27 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar27 = *plVar19;
               *plVar19 = 0;
               Memory::free_static((void*)( lVar27 + -0x10 ), false);
            }
 else {
               *plVar19 = 0;
            }

         }

         *plVar19 = local_c8._0_8_;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = local_c8._8_8_;
         local_c8 = auVar17 << 0x40;
      }

      lVar27 = local_d8;
      if (local_d8 != 0) {
         LOCK();
         plVar19 = (long*)( local_d8 + -0x10 );
         *plVar19 = *plVar19 + -1;
         UNLOCK();
         if (*plVar19 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar27 + -0x10 ), false);
         }

      }

      uVar25 = local_c8._0_8_;
      if (local_c8._0_8_ != 0) {
         LOCK();
         plVar19 = (long*)( local_c8._0_8_ + -0x10 );
         *plVar19 = *plVar19 + -1;
         UNLOCK();
         if (*plVar19 == 0) {
            auVar12._8_8_ = 0;
            auVar12._0_8_ = local_c8._8_8_;
            local_c8 = auVar12 << 0x40;
            Memory::free_static((void*)( uVar25 + -0x10 ), false);
         }

      }

      pcVar29 = (char*)puVar33[1];
      puVar33 = puVar33 + 2;
   }
 while ( pcVar29 != (char*)0x0 );
   if (( country_rename_map._8_8_ != 0 ) && ( country_rename_map._44_4_ != 0 )) {
      uVar35 = *(uint*)( hash_table_size_primes + (ulong)(uint)country_rename_map._40_4_ * 4 );
      lVar27 = 0;
      if (uVar35 != 0) {
         do {
            if (*(int*)( country_rename_map._16_8_ + lVar27 ) != 0) {
               *(int*)( country_rename_map._16_8_ + lVar27 ) = 0;
               pvVar31 = *(void**)( country_rename_map._8_8_ + lVar27 * 2 );
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x18 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x10 ));
               Memory::free_static(pvVar31, false);
               *(undefined8*)( country_rename_map._8_8_ + lVar27 * 2 ) = 0;
            }

            lVar27 = lVar27 + 4;
         }
 while ( (ulong)uVar35 << 2 != lVar27 );
      }

      country_rename_map._44_4_ = 0;
      country_rename_map._24_16_ = (undefined1[16])0x0;
   }

   puVar32 = country_renames;
   pcVar29 = "BU";
   do {
      pcVar4 = *(char**)( puVar32 + 8 );
      sVar20 = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = local_c8._8_8_;
      local_c8 = auVar13 << 0x40;
      if (pcVar4 != (char*)0x0) {
         sVar20 = strlen(pcVar4);
      }

      local_88 = pcVar4;
      local_80 = sVar20;
      String::parse_latin1((StrRange*)local_c8);
      if (( local_c8._0_8_ == 0 ) || ( iVar18 = iVar18 == 0 )) {
         LAB_00108028:CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         if (iVar18 != 1) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = local_c8._8_8_;
            local_c8 = auVar14 << 0x40;
            local_80 = strlen(pcVar29);
            local_88 = pcVar29;
            String::parse_latin1((StrRange*)local_c8);
            pSVar26 = (StrRange*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)country_rename_map, (String*)local_c8);
            sVar20 = 0;
            if (pcVar4 != (char*)0x0) {
               sVar20 = strlen(pcVar4);
            }

            local_88 = pcVar4;
            local_80 = sVar20;
            String::parse_latin1(pSVar26);
            goto LAB_00108028;
         }

      }

      pcVar29 = *(char**)( puVar32 + 0x10 );
      puVar32 = puVar32 + 0x10;
      if (pcVar29 == (char*)0x0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }
 while ( true );
}
/* TranslationServer::TranslationServer() */void TranslationServer::TranslationServer(TranslationServer *this) {
   undefined8 uVar1;
   char cVar2;
   TranslationDomain *this_00;
   Object *pOVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   Object *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Object::Object((Object*)this);
   *(undefined***)this = &PTR__initialize_classv_0011de10;
   *(undefined8*)( this + 0x178 ) = 0;
   local_48 = &_LC70;
   local_40 = 2;
   String::parse_latin1((StrRange*)( this + 0x178 ));
   uVar1 = _LC108;
   *(undefined8*)( this + 0x1a0 ) = 0;
   this[0x208] = (TranslationServer)0x1;
   *(undefined8*)( this + 0x1d0 ) = uVar1;
   *(undefined8*)( this + 0x200 ) = uVar1;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 48*i + 384 ) ) = (undefined1[16])0;
      *(undefined1(*) [16])( this + ( 48*i + 400 ) ) = (undefined1[16])0;
   }

   singleton = this;
   this_00 = (TranslationDomain*)operator_new(0x1c8, "");
   TranslationDomain::TranslationDomain(this_00);
   postinitialize_handler((Object*)this_00);
   cVar2 = RefCounted::init_ref();
   if (cVar2 == '\0') {
      pOVar4 = *(Object**)( this + 0x188 );
      if (pOVar4 != (Object*)0x0) {
         *(undefined8*)( this + 0x188 ) = 0;
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            this_00 = (TranslationDomain*)0x0;
            cVar2 = predelete_handler(pOVar4);
            if (cVar2 != '\0') goto LAB_001086a3;
         }

      }

   }
 else {
      pOVar4 = *(Object**)( this + 0x188 );
      pOVar3 = pOVar4;
      if (this_00 != (TranslationDomain*)pOVar4) {
         *(TranslationDomain**)( this + 0x188 ) = this_00;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)( this + 0x188 ) = 0;
         }

         pOVar3 = (Object*)this_00;
         if (( ( pOVar4 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) {
            LAB_001086a3:( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
            pOVar3 = (Object*)this_00;
            if (this_00 == (TranslationDomain*)0x0) goto LAB_0010822d;
         }

      }

      cVar2 = RefCounted::unreference();
      if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
         ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
         Memory::free_static(pOVar3, false);
      }

   }

   LAB_0010822d:StringName::StringName((StringName*)&local_48, "godot.editor", false);
   get_or_add_domain((StringName*)&local_50);
   pOVar3 = local_50;
   pOVar4 = *(Object**)( this + 400 );
   if (local_50 == pOVar4) {
      LAB_001085d6:if (pOVar3 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         joined_r0x001085e9:if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }
 else {
      *(Object**)( this + 400 ) = local_50;
      if (local_50 != (Object*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)( this + 400 ) = 0;
         }

         if (( ( pOVar4 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) goto LAB_001085c0;
         cVar2 = RefCounted::unreference();
         goto joined_r0x001085e9;
      }

      if (( ( pOVar4 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) {
         LAB_001085c0:( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
         goto LAB_001085d6;
      }

   }

   if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "godot.properties", false);
   get_or_add_domain((StringName*)&local_50);
   pOVar3 = local_50;
   pOVar4 = *(Object**)( this + 0x198 );
   if (local_50 == pOVar4) {
      LAB_00108566:if (pOVar3 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         joined_r0x00108579:if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }
 else {
      *(Object**)( this + 0x198 ) = local_50;
      if (local_50 != (Object*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)( this + 0x198 ) = 0;
         }

         if (( ( pOVar4 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) goto LAB_00108550;
         cVar2 = RefCounted::unreference();
         goto joined_r0x00108579;
      }

      if (( ( pOVar4 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) {
         LAB_00108550:( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
         goto LAB_00108566;
      }

   }

   if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_48, "godot.documentation", false);
   get_or_add_domain((StringName*)&local_50);
   pOVar4 = *(Object**)( this + 0x1a0 );
   if (local_50 == pOVar4) {
      LAB_00108647:if (local_50 == (Object*)0x0) goto LAB_001083e4;
      cVar2 = RefCounted::unreference();
   }
 else {
      *(Object**)( this + 0x1a0 ) = local_50;
      if (local_50 == (Object*)0x0) {
         if (( ( pOVar4 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0' )) goto LAB_001083e4;
         LAB_00108630:( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
         goto LAB_00108647;
      }

      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         *(undefined8*)( this + 0x1a0 ) = 0;
      }

      if (( ( pOVar4 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) goto LAB_00108630;
      cVar2 = RefCounted::unreference();
   }

   if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
      ( **(code**)( *(long*)local_50 + 0x140 ) )(local_50);
      Memory::free_static(local_50, false);
   }

   LAB_001083e4:if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      init_locale_info();
      return;
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
/* TranslationServer::is_class_ptr(void*) const */uint TranslationServer::is_class_ptr(TranslationServer *this, void *param_1) {
   return (uint)CONCAT71(0x122c, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x122c, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* TranslationServer::_getv(StringName const&, Variant&) const */undefined8 TranslationServer::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* TranslationServer::_setv(StringName const&, Variant const&) */undefined8 TranslationServer::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* TranslationServer::_validate_propertyv(PropertyInfo&) const */void TranslationServer::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* TranslationServer::_property_can_revertv(StringName const&) const */undefined8 TranslationServer::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* TranslationServer::_property_get_revertv(StringName const&, Variant&) const */undefined8 TranslationServer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* TranslationServer::_notificationv(int, bool) */void TranslationServer::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindTRC<StringName, StringName const&>::_gen_argument_type(int) const */undefined8 MethodBindTRC<StringName,StringName_const&>::_gen_argument_type(int param_1) {
   return 0x15;
}
/* MethodBindTRC<StringName, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<StringName,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
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
/* MethodBindT<StringName const&>::_gen_argument_type(int) const */byte MethodBindT<StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x15;
}
/* MethodBindT<StringName const&>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Ref<TranslationDomain>, StringName const&>::_gen_argument_type(int) const */int MethodBindTR<Ref<TranslationDomain>,StringName_const&>::_gen_argument_type(MethodBindTR<Ref<TranslationDomain>,StringName_const&> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xfffffffd ) + 0x18;
}
/* MethodBindTR<Ref<TranslationDomain>, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Ref<TranslationDomain>,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool, StringName const&>::_gen_argument_type(int) const */char MethodBindTRC<bool,StringName_const&>::_gen_argument_type(MethodBindTRC<bool,StringName_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 0x14U ) + 1;
}
/* MethodBindTRC<bool, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Ref<Translation>, String const&>::_gen_argument_type(int) const */int MethodBindTR<Ref<Translation>,String_const&>::_gen_argument_type(MethodBindTR<Ref<Translation>,String_const&> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffec ) + 0x18;
}
/* MethodBindTR<Ref<Translation>, String const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Ref<Translation>,String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Ref<Translation> const&>::_gen_argument_type(int) const */byte MethodBindT<Ref<Translation>const&>::_gen_argument_type(MethodBindT<Ref<Translation>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Ref<Translation> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Ref<Translation>const&>::get_argument_meta(int param_1) {
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
/* MethodBindTRC<Vector<String>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector<String>>::_gen_argument_type(int param_1) {
   return 0x22;
}
/* MethodBindTRC<Vector<String>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector<String>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<String, String const&, bool>::_gen_argument_type(int) const */char MethodBindTRC<String,String_const&,bool>::_gen_argument_type(MethodBindTRC<String,String_const&,bool> *this, int param_1) {
   return ( param_1 != 1 ) * '\x03' + '\x01';
}
/* MethodBindTRC<String, String const&, bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<String,String_const&,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<int, String const&, String const&>::_gen_argument_type(int) const */char MethodBindTRC<int,String_const&,String_const&>::_gen_argument_type(MethodBindTRC<int,String_const&,String_const&> *this, int param_1) {
   return ( -((uint)param_1 < 2) & 2U ) + 2;
}
/* MethodBindTRC<int, String const&, String const&>::get_argument_meta(int) const */uint MethodBindTRC<int,String_const&,String_const&>::get_argument_meta(MethodBindTRC<int,String_const&,String_const&> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindTR<String>::_gen_argument_type(int) const */undefined8 MethodBindTR<String>::_gen_argument_type(int param_1) {
   return 4;
}
/* MethodBindTR<String>::get_argument_meta(int) const */undefined8 MethodBindTR<String>::get_argument_meta(int param_1) {
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
/* MethodBindTRC<String, String const&>::_gen_argument_type(int) const */undefined8 MethodBindTRC<String,String_const&>::_gen_argument_type(int param_1) {
   return 4;
}
/* MethodBindTRC<String, String const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<String,String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* Vector<TranslationServer::LocaleScriptInfo>::~Vector() */void Vector<TranslationServer::LocaleScriptInfo>::~Vector(Vector<TranslationServer::LocaleScriptInfo> *this) {
   CowData<TranslationServer::LocaleScriptInfo>::_unref((CowData<TranslationServer::LocaleScriptInfo>*)( this + 8 ));
   return;
}
/* MethodBindTRC<String, String const&>::~MethodBindTRC() */void MethodBindTRC<String,String_const&>::~MethodBindTRC(MethodBindTRC<String,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011df70;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<String, String const&>::~MethodBindTRC() */void MethodBindTRC<String,String_const&>::~MethodBindTRC(MethodBindTRC<String,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011df70;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011dfd0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011dfd0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e030;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e030;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<String>::~MethodBindTR() */void MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e090;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<String>::~MethodBindTR() */void MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e090;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int, String const&, String const&>::~MethodBindTRC() */void MethodBindTRC<int,String_const&,String_const&>::~MethodBindTRC(MethodBindTRC<int,String_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e0f0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int, String const&, String const&>::~MethodBindTRC() */void MethodBindTRC<int,String_const&,String_const&>::~MethodBindTRC(MethodBindTRC<int,String_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e0f0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<String, String const&, bool>::~MethodBindTRC() */void MethodBindTRC<String,String_const&,bool>::~MethodBindTRC(MethodBindTRC<String,String_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e150;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<String, String const&, bool>::~MethodBindTRC() */void MethodBindTRC<String,String_const&,bool>::~MethodBindTRC(MethodBindTRC<String,String_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e150;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<StringName, StringName const&, StringName const&>::~MethodBindTRC() */void MethodBindTRC<StringName,StringName_const&,StringName_const&>::~MethodBindTRC(MethodBindTRC<StringName,StringName_const&,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e210;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<StringName, StringName const&, StringName const&>::~MethodBindTRC() */void MethodBindTRC<StringName,StringName_const&,StringName_const&>::~MethodBindTRC(MethodBindTRC<StringName,StringName_const&,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e210;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::~MethodBindTRC() */void MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::~MethodBindTRC(MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e270;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::~MethodBindTRC() */void MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::~MethodBindTRC(MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e270;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Ref<Translation> const&>::~MethodBindT() */void MethodBindT<Ref<Translation>const&>::~MethodBindT(MethodBindT<Ref<Translation>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e2d0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<Translation> const&>::~MethodBindT() */void MethodBindT<Ref<Translation>const&>::~MethodBindT(MethodBindT<Ref<Translation>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e2d0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Ref<Translation>, String const&>::~MethodBindTR() */void MethodBindTR<Ref<Translation>,String_const&>::~MethodBindTR(MethodBindTR<Ref<Translation>,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e330;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Ref<Translation>, String const&>::~MethodBindTR() */void MethodBindTR<Ref<Translation>,String_const&>::~MethodBindTR(MethodBindTR<Ref<Translation>,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e330;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e390;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e390;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Ref<TranslationDomain>, StringName const&>::~MethodBindTR() */void MethodBindTR<Ref<TranslationDomain>,StringName_const&>::~MethodBindTR(MethodBindTR<Ref<TranslationDomain>,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e3f0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Ref<TranslationDomain>, StringName const&>::~MethodBindTR() */void MethodBindTR<Ref<TranslationDomain>,StringName_const&>::~MethodBindTR(MethodBindTR<Ref<TranslationDomain>,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e3f0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e450;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e450;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */void MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e1b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */void MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e1b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e510;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e510;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e570;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e570;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e4b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e4b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<StringName, StringName const&>::~MethodBindTRC() */void MethodBindTRC<StringName,StringName_const&>::~MethodBindTRC(MethodBindTRC<StringName,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e5d0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<StringName, StringName const&>::~MethodBindTRC() */void MethodBindTRC<StringName,StringName_const&>::~MethodBindTRC(MethodBindTRC<StringName,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011e5d0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* TranslationServer::_get_class_namev() const */undefined8 *TranslationServer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00109233:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00109233;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "TranslationServer");
         goto LAB_0010929e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "TranslationServer");
   LAB_0010929e:return &_get_class_namev();
}
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::~HashMap() */void HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::~HashMap(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> *this) {
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
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
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
               if (*(long*)( (long)pvVar5 + 0x18 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x18 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( (long)pvVar5 + 0x18 );
                     *(undefined8*)( (long)pvVar5 + 0x18 ) = 0;
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
/* TranslationServer::get_class() const */void TranslationServer::get_class(void) {
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
   local_48 = &_LC5;
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

         goto joined_r0x0010d37c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d37c:local_58 = lVar2;
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
   local_48 = &_LC5;
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

         goto joined_r0x0010d4fc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d4fc:local_58 = lVar2;
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
/* MethodBindTR<String>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<String>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC5;
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

         goto joined_r0x0010d67c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d67c:local_58 = lVar2;
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
   local_48 = &_LC5;
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

         goto joined_r0x0010d7fc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d7fc:local_58 = lVar2;
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
/* TranslationServer::is_class(String const&) const */undefined8 TranslationServer::is_class(TranslationServer *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_0010d8bf;
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

      LAB_0010d8bf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010d973;
   }

   cVar6 = String::operator ==(param_1, "TranslationServer");
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

         if (cVar6 != '\0') goto LAB_0010d973;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar8 = String::operator ==(param_1, "Object");
         return uVar8;
      }

   }
 else {
      LAB_0010d973:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TranslationServer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void TranslationServer::_get_property_listv(List *param_1, bool param_2) {
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
   local_78 = "TranslationServer";
   local_70 = 0x11;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "TranslationServer";
   local_98 = 0;
   local_70 = 0x11;
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
      LAB_0010dc18:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010dc18;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x0010dc36;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x0010dc36:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "TranslationServer", false);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */String *HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(String *param_1) {
   CowData<char32_t> *this;
   void *pvVar1;
   void *pvVar2;
   long lVar3;
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
   char cVar28;
   uint uVar29;
   uint uVar30;
   int iVar31;
   ulong uVar32;
   long lVar33;
   long lVar34;
   long lVar35;
   uint *puVar36;
   int iVar37;
   uint uVar38;
   String *in_RDX;
   ulong uVar39;
   long lVar40;
   long *in_RSI;
   long lVar41;
   ulong uVar42;
   ulong uVar43;
   undefined4 uVar44;
   uint uVar45;
   uint uVar46;
   uint local_88;
   uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   if (*in_RSI == 0) {
      uVar32 = (ulong)uVar29 * 4;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[3] = lVar33;
      lVar33 = Memory::alloc_static((ulong)uVar29 * 8, false);
      *in_RSI = lVar33;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[2] = lVar33;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[1] = lVar33;
      if (uVar29 != 0) {
         memset((void*)in_RSI[3], 0, uVar32);
      }

      iVar37 = *(int*)( (long)in_RSI + 0x24 );
      if (*in_RSI != 0) goto LAB_0010e0bc;
   }
 else {
      iVar37 = *(int*)( (long)in_RSI + 0x24 );
      LAB_0010e0bc:if (iVar37 != 0) {
         uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
         lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
         uVar45 = String::hash();
         uVar32 = CONCAT44(0, uVar30);
         lVar41 = in_RSI[3];
         uVar38 = 1;
         if (uVar45 != 0) {
            uVar38 = uVar45;
         }

         uVar46 = 0;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar38 * lVar33;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar32;
         lVar40 = SUB168(auVar12 * auVar24, 8);
         uVar45 = *(uint*)( lVar41 + lVar40 * 4 );
         iVar37 = SUB164(auVar12 * auVar24, 8);
         if (uVar45 == 0) {
            iVar37 = *(int*)( (long)in_RSI + 0x24 );
         }
 else {
            do {
               if (uVar38 == uVar45) {
                  cVar28 = String::operator ==((String*)( *in_RSI + ( ulong ) * (uint*)( in_RSI[1] + lVar40 * 4 ) * 8 ), in_RDX);
                  if (cVar28 != '\0') {
                     iVar37 = *(int*)( (long)in_RSI + 0x24 );
                     lVar33 = *in_RSI;
                     iVar31 = *(int*)( in_RSI[1] + lVar40 * 4 );
                     goto LAB_0010e439;
                  }

                  lVar41 = in_RSI[3];
               }

               uVar46 = uVar46 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar37 + 1) * lVar33;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar32;
               lVar40 = SUB168(auVar13 * auVar25, 8);
               uVar45 = *(uint*)( lVar41 + lVar40 * 4 );
               iVar37 = SUB164(auVar13 * auVar25, 8);
            }
 while ( ( uVar45 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar45 * lVar33,auVar26._8_8_ = 0,auVar26._0_8_ = uVar32,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar30 + iVar37 ) - SUB164(auVar14 * auVar26, 8)) * lVar33,auVar27._8_8_ = 0,auVar27._0_8_ = uVar32,uVar46 <= SUB164(auVar15 * auVar27, 8) );
            iVar37 = *(int*)( (long)in_RSI + 0x24 );
         }

      }

   }

   if ((float)uVar29 * __LC11 < (float)( iVar37 + 1 )) {
      if ((int)in_RSI[4] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         iVar37 = *(int*)( (long)in_RSI + 0x24 );
         lVar33 = *in_RSI;
         iVar31 = -1;
         goto LAB_0010e439;
      }

      uVar29 = (int)in_RSI[4] + 1;
      uVar32 = (ulong)uVar29;
      if (uVar29 < 2) {
         uVar32 = 2;
      }

      uVar29 = *(uint*)( hash_table_size_primes + uVar32 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar32;
      pvVar1 = (void*)in_RSI[3];
      uVar32 = (ulong)uVar29 * 4;
      pvVar2 = (void*)in_RSI[2];
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[3] = lVar33;
      lVar33 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar29 * 8, false);
      *in_RSI = lVar33;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[2] = lVar33;
      lVar33 = Memory::realloc_static((void*)in_RSI[1], uVar32, false);
      in_RSI[1] = lVar33;
      if (uVar29 != 0) {
         memset((void*)in_RSI[3], 0, uVar32);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         uVar32 = 0;
         lVar41 = in_RSI[3];
         lVar40 = in_RSI[2];
         do {
            uVar43 = uVar32 & 0xffffffff;
            uVar44 = (undefined4)uVar32;
            uVar45 = 0;
            uVar29 = *(uint*)( (long)pvVar1 + ( ulong ) * (uint*)( (long)pvVar2 + uVar32 * 4 ) * 4 );
            uVar39 = (ulong)uVar29;
            uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar42 = CONCAT44(0, uVar30);
            lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar39 * lVar34;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar42;
            lVar35 = SUB168(auVar4 * auVar16, 8) * 4;
            iVar37 = SUB164(auVar4 * auVar16, 8);
            puVar36 = (uint*)( lVar41 + lVar35 );
            uVar38 = *puVar36;
            if (uVar38 == 0) {
               lVar34 = uVar32 * 4;
            }
 else {
               do {
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar38 * lVar34;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar42;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(( uVar30 + iVar37 ) - SUB164(auVar5 * auVar17, 8)) * lVar34;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar42;
                  local_88 = SUB164(auVar6 * auVar18, 8);
                  if (local_88 < uVar45) {
                     *(int*)( lVar40 + uVar43 * 4 ) = iVar37;
                     uVar29 = *puVar36;
                     *puVar36 = (uint)uVar39;
                     uVar38 = *(uint*)( lVar35 + lVar33 );
                     uVar39 = (ulong)uVar29;
                     *(uint*)( lVar35 + lVar33 ) = (uint)uVar43;
                     uVar43 = (ulong)uVar38;
                     uVar45 = local_88;
                  }

                  uVar44 = (undefined4)uVar43;
                  uVar29 = (uint)uVar39;
                  uVar45 = uVar45 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(iVar37 + 1) * lVar34;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = uVar42;
                  lVar35 = SUB168(auVar7 * auVar19, 8) * 4;
                  iVar37 = SUB164(auVar7 * auVar19, 8);
                  puVar36 = (uint*)( lVar41 + lVar35 );
                  uVar38 = *puVar36;
               }
 while ( uVar38 != 0 );
               lVar34 = uVar43 << 2;
            }

            *puVar36 = uVar29;
            uVar32 = uVar32 + 1;
            *(int*)( lVar40 + lVar34 ) = iVar37;
            *(undefined4*)( lVar33 + lVar35 ) = uVar44;
         }
 while ( (uint)uVar32 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar1, false);
      Memory::free_static(pvVar2, false);
   }

   uVar30 = String::hash();
   uVar32 = ( ulong ) * (uint*)( (long)in_RSI + 0x24 );
   lVar33 = *in_RSI;
   uVar29 = 1;
   if (uVar30 != 0) {
      uVar29 = uVar30;
   }

   this(CowData<char32_t> * )(lVar33 + uVar32 * 8);
   uVar39 = (ulong)uVar29;
   *(undefined8*)this = 0;
   if (*(long*)in_RDX != 0) {
      CowData<char32_t>::_ref(this, (CowData*)in_RDX);
      uVar32 = ( ulong ) * (uint*)( (long)in_RSI + 0x24 );
      lVar33 = *in_RSI;
   }

   uVar44 = (undefined4)uVar32;
   uVar45 = 0;
   lVar40 = in_RSI[3];
   uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   uVar43 = CONCAT44(0, uVar30);
   lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar39 * lVar35;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar43;
   lVar41 = SUB168(auVar8 * auVar20, 8) * 4;
   iVar37 = SUB164(auVar8 * auVar20, 8);
   lVar34 = in_RSI[2];
   lVar3 = in_RSI[1];
   puVar36 = (uint*)( lVar40 + lVar41 );
   uVar38 = *puVar36;
   uVar42 = uVar32;
   while (uVar38 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar35;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar43;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( uVar30 + iVar37 ) - SUB164(auVar9 * auVar21, 8)) * lVar35;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar43;
      local_88 = SUB164(auVar10 * auVar22, 8);
      if (local_88 < uVar45) {
         *(int*)( lVar34 + uVar42 * 4 ) = iVar37;
         uVar29 = *puVar36;
         *puVar36 = (uint)uVar39;
         puVar36 = (uint*)( lVar41 + lVar3 );
         uVar38 = *puVar36;
         uVar39 = (ulong)uVar29;
         *puVar36 = (uint)uVar32;
         uVar32 = (ulong)uVar38;
         uVar42 = uVar32;
         uVar45 = local_88;
      }

      uVar44 = (undefined4)uVar32;
      uVar29 = (uint)uVar39;
      uVar45 = uVar45 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar37 + 1) * lVar35;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar43;
      lVar41 = SUB168(auVar11 * auVar23, 8) * 4;
      iVar37 = SUB164(auVar11 * auVar23, 8);
      puVar36 = (uint*)( lVar40 + lVar41 );
      uVar38 = *puVar36;
   }
;
   *puVar36 = uVar29;
   *(int*)( lVar34 + uVar42 * 4 ) = iVar37;
   *(undefined4*)( lVar3 + lVar41 ) = uVar44;
   iVar31 = *(int*)( (long)in_RSI + 0x24 );
   iVar37 = iVar31 + 1;
   *(int*)( (long)in_RSI + 0x24 ) = iVar37;
   LAB_0010e439:*(int*)( param_1 + 0xc ) = iVar31;
   *(long*)param_1 = lVar33;
   *(int*)( param_1 + 8 ) = iVar37;
   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Ref<TranslationDomain>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Ref<TranslationDomain> > > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,Ref<TranslationDomain>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<TranslationDomain>>>>::operator [](HashMap<StringName,Ref<TranslationDomain>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<TranslationDomain>>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined8 *puVar4Object *pOVar5undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]undefined1 auVar37[16]char cVar38uint uVar39uint uVar40uint uVar41ulong uVar42undefined8 uVar43void *__s_00undefined8 *puVar44long lVar45void *pvVar46ulong uVar47int iVar48long lVar49long lVar50long lVar51ulong uVar52undefined8 uVar53uint uVar54uint uVar55uint uVar56undefined8 *puVar57long in_FS_OFFSETlong local_58Object *local_50long local_40lVar45 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar42 = CONCAT44(0, uVar40);if (lVar45 == 0) {
   LAB_0010ee40:uVar47 = uVar42 * 4;
   uVar52 = uVar42 * 8;
   uVar43 = Memory::alloc_static(uVar47, false);
   *(undefined8*)( this + 0x10 ) = uVar43;
   pvVar46 = (void*)Memory::alloc_static(uVar52, false);
   *(void**)( this + 8 ) = pvVar46;
   if ((int)uVar42 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar46 + uVar52 ) ) && ( pvVar46 < (void*)( (long)pvVar3 + uVar47 ) )) {
         uVar47 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar47 * 4 ) = 0;
            *(undefined8*)( (long)pvVar46 + uVar47 * 8 ) = 0;
            uVar47 = uVar47 + 1;
         }
 while ( uVar42 != uVar47 );
         goto LAB_0010ec88;
      }

      memset(pvVar3, 0, uVar47);
      memset(pvVar46, 0, uVar52);
      iVar48 = *(int*)( this + 0x2c );
      LAB_0010ec8c:if (iVar48 != 0) {
         LAB_0010ec94:uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar47 = CONCAT44(0, uVar40);
         lVar45 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar41 = StringName::get_empty_hash();
         }
 else {
            uVar41 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar41 == 0) {
            uVar41 = 1;
         }

         uVar56 = 0;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = (ulong)uVar41 * lVar45;
         auVar34._8_8_ = 0;
         auVar34._0_8_ = uVar47;
         lVar51 = SUB168(auVar18 * auVar34, 8);
         uVar54 = *(uint*)( *(long*)( this + 0x10 ) + lVar51 * 4 );
         uVar55 = SUB164(auVar18 * auVar34, 8);
         if (uVar54 != 0) {
            do {
               if (( uVar54 == uVar41 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar51 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  puVar44 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar55 * 8 );
                  pOVar5 = (Object*)puVar44[3];
                  if (pOVar5 != (Object*)0x0) {
                     puVar44[3] = 0;
                     cVar38 = RefCounted::unreference();
                     if (( cVar38 != '\0' ) && ( cVar38 = cVar38 != '\0' )) {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                     puVar44 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar55 * 8 );
                  }

                  goto LAB_0010e85c;
               }

               uVar56 = uVar56 + 1;
               auVar19._8_8_ = 0;
               auVar19._0_8_ = ( ulong )(uVar55 + 1) * lVar45;
               auVar35._8_8_ = 0;
               auVar35._0_8_ = uVar47;
               lVar51 = SUB168(auVar19 * auVar35, 8);
               uVar54 = *(uint*)( *(long*)( this + 0x10 ) + lVar51 * 4 );
               uVar55 = SUB164(auVar19 * auVar35, 8);
            }
 while ( ( uVar54 != 0 ) && ( auVar20._8_8_ = 0 ),auVar20._0_8_ = (ulong)uVar54 * lVar45,auVar36._8_8_ = 0,auVar36._0_8_ = uVar47,auVar21._8_8_ = 0,auVar21._0_8_ = ( ulong )(( uVar40 + uVar55 ) - SUB164(auVar20 * auVar36, 8)) * lVar45,auVar37._8_8_ = 0,auVar37._0_8_ = uVar47,uVar56 <= SUB164(auVar21 * auVar37, 8) );
         }

         iVar48 = *(int*)( this + 0x2c );
      }

      goto LAB_0010e88f;
   }

   iVar48 = *(int*)( this + 0x2c );
   if (pvVar46 == (void*)0x0) goto LAB_0010e88f;
   if (iVar48 != 0) goto LAB_0010ec94;
   LAB_0010e8b5:uVar40 = *(uint*)( this + 0x28 );
   if (uVar40 == 0x1c) {
      puVar44 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010e85c;
   }

   uVar42 = ( ulong )(uVar40 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar41 = *(uint*)( hash_table_size_primes + (ulong)uVar40 * 4 );
   if (uVar40 + 1 < 2) {
      uVar42 = 2;
   }

   uVar40 = *(uint*)( hash_table_size_primes + uVar42 * 4 );
   uVar52 = (ulong)uVar40;
   *(int*)( this + 0x28 ) = (int)uVar42;
   pvVar46 = *(void**)( this + 8 );
   uVar42 = uVar52 * 4;
   uVar47 = uVar52 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar43 = Memory::alloc_static(uVar42, false);
   *(undefined8*)( this + 0x10 ) = uVar43;
   __s_00 = (void*)Memory::alloc_static(uVar47, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar40 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar47 ) ) && ( __s_00 < (void*)( (long)__s + uVar42 ) )) {
         uVar42 = 0;
         do {
            *(undefined4*)( (long)__s + uVar42 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar42 * 8 ) = 0;
            uVar42 = uVar42 + 1;
         }
 while ( uVar42 != uVar52 );
      }
 else {
         memset(__s, 0, uVar42);
         memset(__s_00, 0, uVar47);
      }

   }

   if (uVar41 != 0) {
      uVar42 = 0;
      do {
         uVar40 = *(uint*)( (long)pvVar3 + uVar42 * 4 );
         if (uVar40 != 0) {
            lVar45 = *(long*)( this + 0x10 );
            uVar56 = 0;
            uVar54 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar47 = CONCAT44(0, uVar54);
            lVar51 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar40 * lVar51;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar47;
            lVar49 = SUB168(auVar10 * auVar26, 8);
            puVar1 = (uint*)( lVar45 + lVar49 * 4 );
            iVar48 = SUB164(auVar10 * auVar26, 8);
            uVar55 = *puVar1;
            uVar43 = *(undefined8*)( (long)pvVar46 + uVar42 * 8 );
            while (uVar55 != 0) {
               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar55 * lVar51;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar47;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(( uVar54 + iVar48 ) - SUB164(auVar11 * auVar27, 8)) * lVar51;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar47;
               uVar39 = SUB164(auVar12 * auVar28, 8);
               uVar53 = uVar43;
               if (uVar39 < uVar56) {
                  *puVar1 = uVar40;
                  puVar44 = (undefined8*)( (long)__s_00 + lVar49 * 8 );
                  uVar53 = *puVar44;
                  *puVar44 = uVar43;
                  uVar40 = uVar55;
                  uVar56 = uVar39;
               }

               uVar56 = uVar56 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar48 + 1) * lVar51;
               auVar29._8_8_ = 0;
               auVar29._0_8_ = uVar47;
               lVar49 = SUB168(auVar13 * auVar29, 8);
               puVar1 = (uint*)( lVar45 + lVar49 * 4 );
               iVar48 = SUB164(auVar13 * auVar29, 8);
               uVar43 = uVar53;
               uVar55 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar49 * 8 ) = uVar43;
            *puVar1 = uVar40;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar42 = uVar42 + 1;
      }
 while ( uVar41 != uVar42 );
      Memory::free_static(pvVar46, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   iVar48 = *(int*)( this + 0x2c );
   if (iVar48 != 0) {
      lVar51 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar41 = StringName::get_empty_hash();
         lVar45 = *(long*)( this + 8 );
      }
 else {
         uVar41 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar41 == 0) {
         uVar41 = 1;
      }

      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar41 * lVar51;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar42;
      lVar49 = SUB168(auVar6 * auVar22, 8);
      uVar54 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
      uVar55 = SUB164(auVar6 * auVar22, 8);
      if (uVar54 != 0) {
         uVar56 = 0;
         do {
            if (( uVar41 == uVar54 ) && ( *(long*)( *(long*)( lVar45 + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar44 = *(undefined8**)( lVar45 + (ulong)uVar55 * 8 );
               goto LAB_0010e85c;
            }

            uVar56 = uVar56 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ulong )(uVar55 + 1) * lVar51;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar42;
            lVar49 = SUB168(auVar7 * auVar23, 8);
            uVar54 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
            uVar55 = SUB164(auVar7 * auVar23, 8);
         }
 while ( ( uVar54 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar54 * lVar51,auVar24._8_8_ = 0,auVar24._0_8_ = uVar42,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar55 + uVar40 ) - SUB164(auVar8 * auVar24, 8)) * lVar51,auVar25._8_8_ = 0,auVar25._0_8_ = uVar42,uVar56 <= SUB164(auVar9 * auVar25, 8) );
      }

      uVar42 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar45 == 0) goto LAB_0010ee40;
      LAB_0010ec88:iVar48 = *(int*)( this + 0x2c );
      goto LAB_0010ec8c;
   }

   LAB_0010e88f:if ((float)uVar42 * __LC11 < (float)( iVar48 + 1 )) goto LAB_0010e8b5;
}
StringName::StringName((StringName*)&local_58, param_1);local_50 = (Object*)0x0;puVar44 = (undefined8*)operator_new(0x20, "");*puVar44 = 0;puVar44[1] = 0;StringName::StringName((StringName*)( puVar44 + 2 ), (StringName*)&local_58);puVar44[3] = 0;if (local_50 != (Object*)0x0) {
   puVar44[3] = local_50;
   cVar38 = RefCounted::reference();
   if (cVar38 == '\0') {
      puVar44[3] = 0;
   }

   if (( ( local_50 != (Object*)0x0 ) && ( cVar38 = RefCounted::unreference() ),pOVar5 = local_50,cVar38 != '\0' )) &&( cVar38 = cVar38 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
   Memory::free_static(pOVar5, false);
}
}if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   lVar45 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar44;
   *(undefined8**)( this + 0x20 ) = puVar44;
   if (lVar45 == 0) goto LAB_0010ee05;
   LAB_0010eb78:uVar40 = *(uint*)( lVar45 + 0x20 );
}
 else {
   *puVar4 = puVar44;
   puVar44[1] = puVar4;
   lVar45 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar44;
   if (lVar45 != 0) goto LAB_0010eb78;
   LAB_0010ee05:uVar40 = StringName::get_empty_hash();
}
lVar45 = *(long*)( this + 0x10 );if (uVar40 == 0) {
   uVar40 = 1;
}
uVar42 = (ulong)uVar40;uVar55 = 0;uVar41 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar47 = CONCAT44(0, uVar41);lVar51 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar14._8_8_ = 0;auVar14._0_8_ = uVar42 * lVar51;auVar30._8_8_ = 0;auVar30._0_8_ = uVar47;lVar50 = SUB168(auVar14 * auVar30, 8);lVar49 = *(long*)( this + 8 );puVar1 = (uint*)( lVar45 + lVar50 * 4 );iVar48 = SUB164(auVar14 * auVar30, 8);uVar54 = *puVar1;puVar4 = puVar44;while (uVar54 != 0) {
   auVar15._8_8_ = 0;
   auVar15._0_8_ = (ulong)uVar54 * lVar51;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar47;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(( iVar48 + uVar41 ) - SUB164(auVar15 * auVar31, 8)) * lVar51;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar47;
   uVar40 = SUB164(auVar16 * auVar32, 8);
   puVar57 = puVar4;
   if (uVar40 < uVar55) {
      *puVar1 = (uint)uVar42;
      uVar42 = (ulong)uVar54;
      puVar2 = (undefined8*)( lVar49 + lVar50 * 8 );
      puVar57 = (undefined8*)*puVar2;
      *puVar2 = puVar4;
      uVar55 = uVar40;
   }

   uVar40 = (uint)uVar42;
   uVar55 = uVar55 + 1;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = ( ulong )(iVar48 + 1) * lVar51;
   auVar33._8_8_ = 0;
   auVar33._0_8_ = uVar47;
   lVar50 = SUB168(auVar17 * auVar33, 8);
   puVar1 = (uint*)( lVar45 + lVar50 * 4 );
   iVar48 = SUB164(auVar17 * auVar33, 8);
   puVar4 = puVar57;
   uVar54 = *puVar1;
}
;*(undefined8**)( lVar49 + lVar50 * 8 ) = puVar4;*puVar1 = uVar40;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010e85c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar44 + 3;
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
/* TranslationServer::~TranslationServer() */void TranslationServer::~TranslationServer(TranslationServer *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   Object *pOVar4;
   char cVar5;
   long lVar6;
   void *pvVar7;
   *(undefined***)this = &PTR__initialize_classv_0011de10;
   pvVar7 = *(void**)( this + 0x1e0 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x204 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x200 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x204 ) = 0;
            *(undefined1(*) [16])( this + 0x1f0 ) = (undefined1[16])0x0;
         }
 else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x1e8 ) + lVar6 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar6 * 2 );
                  *(int*)( *(long*)( this + 0x1e8 ) + lVar6 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar7 + 0x10 );
                        *(undefined8*)( (long)pvVar7 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x1e0 );
                  *(undefined8*)( (long)pvVar7 + lVar6 * 2 ) = 0;
               }

               lVar6 = lVar6 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar6 );
            *(undefined4*)( this + 0x204 ) = 0;
            *(undefined1(*) [16])( this + 0x1f0 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_0010f0b7;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x1e8 ), false);
   }

   LAB_0010f0b7:pvVar7 = *(void**)( this + 0x1b0 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x1d4 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x1d4 ) = 0;
            *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
         }
 else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x1b8 ) + lVar6 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar6 * 2 );
                  *(int*)( *(long*)( this + 0x1b8 ) + lVar6 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x18 ) != 0) {
                     cVar5 = RefCounted::unreference();
                     if (cVar5 != '\0') {
                        pOVar4 = *(Object**)( (long)pvVar7 + 0x18 );
                        cVar5 = predelete_handler(pOVar4);
                        if (cVar5 != '\0') {
                           ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                           Memory::free_static(pOVar4, false);
                        }

                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x1b0 );
                  *(undefined8*)( (long)pvVar7 + lVar6 * 2 ) = 0;
               }

               lVar6 = lVar6 + 4;
            }
 while ( lVar6 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x1d4 ) = 0;
            *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_0010f189;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x1b8 ), false);
   }

   LAB_0010f189:if (*(long*)( this + 0x1a0 ) != 0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
         pOVar4 = *(Object**)( this + 0x1a0 );
         cVar5 = predelete_handler(pOVar4);
         if (cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( -8*i + 408 ) ) != 0) {
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            pOVar4 = *(Object**)( this + ( -8*i + 408 ) );
            cVar5 = predelete_handler(pOVar4);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar4 + 320 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }

         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x180 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x178 ));
   Object::~Object((Object*)this);
   return;
}
/* TranslationServer::~TranslationServer() */void TranslationServer::~TranslationServer(TranslationServer *this) {
   ~TranslationServer(this)
   ;;
   operator_delete(this, 0x210);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1){
   uint *puVar1;
   undefined8 *puVar2;
   void *pvVar3;
   void *__s;
   long lVar4;
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
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1(*pauVar37)[16];
   char cVar38;
   uint uVar39;
   uint uVar40;
   ulong uVar41;
   undefined8 uVar42;
   void *__s_00;
   undefined1(*pauVar43)[16];
   void *pvVar44;
   int iVar45;
   long lVar46;
   long lVar47;
   ulong uVar48;
   undefined8 uVar49;
   uint uVar50;
   uint uVar51;
   ulong uVar52;
   long lVar53;
   uint uVar54;
   uint uVar55;
   undefined1(*pauVar56)[16];
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined1 local_68[16];
   long local_58;
   undefined8 local_50[2];
   long local_40;
   uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 8 ) == 0) {
      LAB_0010fa6c:local_70 = 0;
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

         LAB_0010f955:iVar45 = *(int*)( this + 0x2c );
         if (iVar45 != 0) {
            LAB_0010f965:uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
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
                        if (*(long*)( pauVar43[1] + 8 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar43[1] + 8 ), (CowData*)&local_70);
                           pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                        }

                        goto LAB_0010f803;
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
         goto LAB_0010f427;
      }

      iVar45 = *(int*)( this + 0x2c );
      if (pvVar44 == (void*)0x0) goto LAB_0010f427;
      if (*(int*)( this + 0x2c ) != 0) goto LAB_0010f965;
      LAB_0010f44d:uVar55 = *(uint*)( this + 0x28 );
      if (uVar55 == 0x1c) {
         pauVar43 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0010f803;
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
                     goto LAB_0010f80f;
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
         if (lVar47 == 0) goto LAB_0010fa6c;
         goto LAB_0010f955;
      }

      local_70 = 0;
      uVar48 = (ulong)uVar55;
      iVar45 = 0;
      LAB_0010f427:if ((float)uVar48 * __LC11 < (float)( iVar45 + 1 )) goto LAB_0010f44d;
   }

   local_58 = 0;
   local_68 = (undefined1[16])0x0;
   if (*(long*)param_1 == 0) {
      local_50[0] = 0;
      pauVar43 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)pauVar43[1] = 0;
      *pauVar43 = (undefined1[16])0x0;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
      lVar4 = local_58;
      uVar42 = local_68._0_8_;
      uVar49 = local_68._8_8_;
      local_50[0] = 0;
      pauVar43 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)pauVar43[1] = 0;
      *(undefined8*)*pauVar43 = uVar42;
      *(undefined8*)( *pauVar43 + 8 ) = uVar49;
      if (lVar4 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar43 + 1 ), (CowData*)&local_58);
      }

   }

   *(undefined8*)( pauVar43[1] + 8 ) = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   puVar2 = *(undefined8**)( this + 0x20 );
   if (puVar2 == (undefined8*)0x0) {
      *(undefined1(**) [16])( this + 0x18 ) = pauVar43;
   }
 else {
      *puVar2 = pauVar43;
      *(undefined8**)( *pauVar43 + 8 ) = puVar2;
   }

   *(undefined1(**) [16])( this + 0x20 ) = pauVar43;
   uVar39 = String::hash();
   lVar4 = *(long*)( this + 0x10 );
   uVar55 = 1;
   if (uVar39 != 0) {
      uVar55 = uVar39;
   }

   uVar51 = 0;
   uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar41 = CONCAT44(0, uVar39);
   lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   auVar9._8_8_ = 0;
   auVar9._0_8_ = (ulong)uVar55 * lVar53;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar41;
   lVar47 = SUB168(auVar9 * auVar25, 8);
   lVar46 = *(long*)( this + 8 );
   puVar1 = (uint*)( lVar4 + lVar47 * 4 );
   iVar45 = SUB164(auVar9 * auVar25, 8);
   uVar40 = *puVar1;
   pauVar37 = pauVar43;
   while (uVar40 != 0) {
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
;
   *(undefined1(**) [16])( lVar46 + lVar47 * 8 ) = pauVar37;
   *puVar1 = uVar55;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   LAB_0010f803:CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   LAB_0010f80f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pauVar43[1] + 8;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, int> > >::insert(String const&, int const&, bool) */String * HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>
         ::insert(String *param_1,int *param_2,bool param_3){
   undefined8 *puVar1;
   void *pvVar2;
   void *__s;
   long lVar3;
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
   char cVar28;
   uint uVar29;
   ulong uVar30;
   undefined8 uVar31;
   void *__s_00;
   void *pvVar32;
   undefined4 *in_RCX;
   int iVar33;
   undefined7 in_register_00000011;
   String *pSVar34;
   long lVar35;
   long lVar36;
   uint uVar37;
   ulong uVar38;
   undefined8 uVar39;
   uint *puVar40;
   uint uVar41;
   char in_R8B;
   uint uVar42;
   uint uVar43;
   ulong uVar44;
   long lVar45;
   undefined4 uVar46;
   uint uVar47;
   undefined1(*pauVar48)[16];
   undefined1(*pauVar49)[16];
   long in_FS_OFFSET;
   undefined1(*pauStack_c0)[16];
   long local_58;
   undefined4 local_50;
   long local_40;
   pSVar34 = (String*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar37 = *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[10] * 4 );
   if (*(long*)( param_2 + 2 ) == 0) {
      uVar38 = (ulong)uVar37;
      uVar30 = uVar38 * 4;
      uVar44 = uVar38 * 8;
      uVar31 = Memory::alloc_static(uVar30, false);
      *(undefined8*)( param_2 + 4 ) = uVar31;
      pvVar32 = (void*)Memory::alloc_static(uVar44, false);
      *(void**)( param_2 + 2 ) = pvVar32;
      if (uVar37 != 0) {
         pvVar2 = *(void**)( param_2 + 4 );
         if (( pvVar2 < (void*)( (long)pvVar32 + uVar44 ) ) && ( pvVar32 < (void*)( (long)pvVar2 + uVar30 ) )) {
            uVar30 = 0;
            do {
               *(undefined4*)( (long)pvVar2 + uVar30 * 4 ) = 0;
               *(undefined8*)( (long)pvVar32 + uVar30 * 8 ) = 0;
               uVar30 = uVar30 + 1;
            }
 while ( uVar38 != uVar30 );
         }
 else {
            memset(pvVar2, 0, uVar30);
            memset(pvVar32, 0, uVar44);
         }

         goto LAB_0010fc88;
      }

      iVar33 = param_2[0xb];
      if (pvVar32 == (void*)0x0) goto LAB_0010fc97;
      if (param_2[0xb] != 0) goto LAB_001100c8;
      LAB_0010fcbd:uVar37 = param_2[10];
      if (uVar37 == 0x1c) {
         pauStack_c0 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_00110077;
      }

      uVar30 = ( ulong )(uVar37 + 1);
      param_2[0xb] = 0;
      uVar29 = *(uint*)( hash_table_size_primes + (ulong)uVar37 * 4 );
      if (uVar37 + 1 < 2) {
         uVar30 = 2;
      }

      uVar37 = *(uint*)( hash_table_size_primes + uVar30 * 4 );
      uVar38 = (ulong)uVar37;
      param_2[10] = (int)uVar30;
      pvVar32 = *(void**)( param_2 + 2 );
      uVar30 = uVar38 * 4;
      uVar44 = uVar38 * 8;
      pvVar2 = *(void**)( param_2 + 4 );
      uVar31 = Memory::alloc_static(uVar30, false);
      *(undefined8*)( param_2 + 4 ) = uVar31;
      __s_00 = (void*)Memory::alloc_static(uVar44, false);
      *(void**)( param_2 + 2 ) = __s_00;
      if (uVar37 != 0) {
         __s = *(void**)( param_2 + 4 );
         if (( __s < (void*)( (long)__s_00 + uVar44 ) ) && ( __s_00 < (void*)( (long)__s + uVar30 ) )) {
            uVar30 = 0;
            do {
               *(undefined4*)( (long)__s + uVar30 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar30 * 8 ) = 0;
               uVar30 = uVar30 + 1;
            }
 while ( uVar30 != uVar38 );
         }
 else {
            memset(__s, 0, uVar30);
            memset(__s_00, 0, uVar44);
         }

      }

      if (uVar29 != 0) {
         uVar30 = 0;
         do {
            uVar37 = *(uint*)( (long)pvVar2 + uVar30 * 4 );
            if (uVar37 != 0) {
               lVar3 = *(long*)( param_2 + 4 );
               uVar42 = 0;
               uVar41 = *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[10] * 4 );
               uVar44 = CONCAT44(0, uVar41);
               lVar45 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8 );
               auVar4._8_8_ = 0;
               auVar4._0_8_ = (ulong)uVar37 * lVar45;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar44;
               lVar35 = SUB168(auVar4 * auVar16, 8);
               puVar40 = (uint*)( lVar3 + lVar35 * 4 );
               iVar33 = SUB164(auVar4 * auVar16, 8);
               uVar43 = *puVar40;
               uVar31 = *(undefined8*)( (long)pvVar32 + uVar30 * 8 );
               while (uVar43 != 0) {
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar43 * lVar45;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar44;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(( uVar41 + iVar33 ) - SUB164(auVar5 * auVar17, 8)) * lVar45;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar44;
                  uVar47 = SUB164(auVar6 * auVar18, 8);
                  uVar39 = uVar31;
                  if (uVar47 < uVar42) {
                     *puVar40 = uVar37;
                     puVar1 = (undefined8*)( (long)__s_00 + lVar35 * 8 );
                     uVar39 = *puVar1;
                     *puVar1 = uVar31;
                     uVar37 = uVar43;
                     uVar42 = uVar47;
                  }

                  uVar42 = uVar42 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(iVar33 + 1) * lVar45;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = uVar44;
                  lVar35 = SUB168(auVar7 * auVar19, 8);
                  puVar40 = (uint*)( lVar3 + lVar35 * 4 );
                  iVar33 = SUB164(auVar7 * auVar19, 8);
                  uVar31 = uVar39;
                  uVar43 = *puVar40;
               }
;
               *(undefined8*)( (long)__s_00 + lVar35 * 8 ) = uVar31;
               *puVar40 = uVar37;
               param_2[0xb] = param_2[0xb] + 1;
            }

            uVar30 = uVar30 + 1;
         }
 while ( uVar29 != uVar30 );
         Memory::free_static(pvVar32, false);
         Memory::free_static(pvVar2, false);
      }

   }
 else {
      LAB_0010fc88:iVar33 = param_2[0xb];
      if (iVar33 != 0) {
         LAB_001100c8:uVar29 = *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[10] * 4 );
         uVar30 = CONCAT44(0, uVar29);
         lVar3 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8 );
         uVar43 = String::hash();
         lVar45 = *(long*)( param_2 + 4 );
         uVar41 = 1;
         if (uVar43 != 0) {
            uVar41 = uVar43;
         }

         uVar47 = 0;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar41 * lVar3;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar30;
         lVar35 = SUB168(auVar12 * auVar24, 8);
         uVar43 = *(uint*)( lVar45 + lVar35 * 4 );
         uVar42 = SUB164(auVar12 * auVar24, 8);
         if (uVar43 != 0) {
            do {
               if (uVar41 == uVar43) {
                  cVar28 = String::operator ==((String*)( *(long*)( *(long*)( param_2 + 2 ) + lVar35 * 8 ) + 0x10 ), pSVar34);
                  if (cVar28 != '\0') {
                     pauStack_c0 = *(undefined1(**) [16])( *(long*)( param_2 + 2 ) + (ulong)uVar42 * 8 );
                     *(undefined4*)( pauStack_c0[1] + 8 ) = *in_RCX;
                     goto LAB_00110077;
                  }

                  lVar45 = *(long*)( param_2 + 4 );
               }

               uVar47 = uVar47 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(uVar42 + 1) * lVar3;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar30;
               lVar35 = SUB168(auVar13 * auVar25, 8);
               uVar43 = *(uint*)( lVar45 + lVar35 * 4 );
               uVar42 = SUB164(auVar13 * auVar25, 8);
            }
 while ( ( uVar43 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar43 * lVar3,auVar26._8_8_ = 0,auVar26._0_8_ = uVar30,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar29 + uVar42 ) - SUB164(auVar14 * auVar26, 8)) * lVar3,auVar27._8_8_ = 0,auVar27._0_8_ = uVar30,uVar47 <= SUB164(auVar15 * auVar27, 8) );
         }

         iVar33 = param_2[0xb];
      }

      LAB_0010fc97:if ((float)uVar37 * __LC11 < (float)( iVar33 + 1 )) goto LAB_0010fcbd;
   }

   local_58 = 0;
   if (*(long*)pSVar34 == 0) {
      uVar46 = *in_RCX;
      local_50 = uVar46;
      pauStack_c0 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)pauStack_c0[1] = 0;
      *pauStack_c0 = (undefined1[16])0x0;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)pSVar34);
      lVar3 = local_58;
      uVar46 = *in_RCX;
      local_50 = uVar46;
      pauStack_c0 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)pauStack_c0[1] = 0;
      *(undefined8*)*pauStack_c0 = 0;
      *(undefined8*)( *pauStack_c0 + 8 ) = 0;
      if (lVar3 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( pauStack_c0 + 1 ), (CowData*)&local_58);
      }

   }

   *(undefined4*)( pauStack_c0[1] + 8 ) = uVar46;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   puVar1 = *(undefined8**)( param_2 + 8 );
   if (puVar1 == (undefined8*)0x0) {
      *(undefined1(**) [16])( param_2 + 6 ) = pauStack_c0;
      *(undefined1(**) [16])( param_2 + 8 ) = pauStack_c0;
   }
 else if (in_R8B == '\0') {
      *puVar1 = pauStack_c0;
      *(undefined8**)( *pauStack_c0 + 8 ) = puVar1;
      *(undefined1(**) [16])( param_2 + 8 ) = pauStack_c0;
   }
 else {
      lVar3 = *(long*)( param_2 + 6 );
      *(undefined1(**) [16])( lVar3 + 8 ) = pauStack_c0;
      *(long*)*pauStack_c0 = lVar3;
      *(undefined1(**) [16])( param_2 + 6 ) = pauStack_c0;
   }

   uVar29 = String::hash();
   lVar3 = *(long*)( param_2 + 4 );
   uVar37 = 1;
   if (uVar29 != 0) {
      uVar37 = uVar29;
   }

   lVar45 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8 );
   uVar29 = *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[10] * 4 );
   uVar30 = CONCAT44(0, uVar29);
   auVar8._8_8_ = 0;
   auVar8._0_8_ = (ulong)uVar37 * lVar45;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar30;
   lVar36 = SUB168(auVar8 * auVar20, 8);
   lVar35 = *(long*)( param_2 + 2 );
   puVar40 = (uint*)( lVar3 + lVar36 * 4 );
   iVar33 = SUB164(auVar8 * auVar20, 8);
   uVar41 = *puVar40;
   pauVar49 = pauStack_c0;
   if (uVar41 != 0) {
      uVar43 = 0;
      pauVar48 = pauStack_c0;
      do {
         auVar9._8_8_ = 0;
         auVar9._0_8_ = (ulong)uVar41 * lVar45;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar30;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = ( ulong )(( uVar29 + iVar33 ) - SUB164(auVar9 * auVar21, 8)) * lVar45;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar30;
         uVar42 = SUB164(auVar10 * auVar22, 8);
         pauVar49 = pauVar48;
         if (uVar42 < uVar43) {
            *puVar40 = uVar37;
            puVar1 = (undefined8*)( lVar35 + lVar36 * 8 );
            pauVar49 = (undefined1(*) [16])*puVar1;
            *puVar1 = pauVar48;
            uVar43 = uVar42;
            uVar37 = uVar41;
         }

         uVar43 = uVar43 + 1;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = ( ulong )(iVar33 + 1) * lVar45;
         auVar23._8_8_ = 0;
         auVar23._0_8_ = uVar30;
         lVar36 = SUB168(auVar11 * auVar23, 8);
         puVar40 = (uint*)( lVar3 + lVar36 * 4 );
         iVar33 = SUB164(auVar11 * auVar23, 8);
         uVar41 = *puVar40;
         pauVar48 = pauVar49;
      }
 while ( uVar41 != 0 );
   }

   *(undefined1(**) [16])( lVar35 + lVar36 * 8 ) = pauVar49;
   *puVar40 = uVar37;
   param_2[0xb] = param_2[0xb] + 1;
   LAB_00110077:*(undefined1(**) [16])param_1 = pauStack_c0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Translation> const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<Translation>const&>::_gen_argument_type_info(int param_1) {
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
   if (in_EDX != 0) goto LAB_001103b9;
   local_78 = 0;
   local_68 = "Translation";
   local_80 = 0;
   local_60._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00110575:local_40 = 6;
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
      if (local_50 == 0x11) goto LAB_00110575;
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
   LAB_001103b9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar4;
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
   if (in_EDX != 0) goto LAB_00110629;
   local_78 = 0;
   local_68 = &_LC5;
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
      LAB_00110725:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00110725;
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
   LAB_00110629:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBind* create_method_bind<TranslationServer, String, String const&>(String
   (TranslationServer::*)(String const&) const) */MethodBind *create_method_bind<TranslationServer,String,String_const&>(_func_String_String_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011df70;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* TranslationServer::_bind_compatibility_methods() [clone .cold] */void TranslationServer::_bind_compatibility_methods(void) {
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
/* CowData<TranslationServer::LocaleScriptInfo>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<TranslationServer::LocaleScriptInfo>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::_lookup_pos(String const&, unsigned
   int&) const */undefined8 HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::_lookup_pos(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> *this, String *param_1, uint *param_2) {
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
   undefined8 uVar12;
   uint uVar13;
   uint uVar14;
   long lVar15;
   ulong uVar16;
   long lVar17;
   uint uVar18;
   if (( *(long*)( this + 8 ) != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar11 = String::hash();
      uVar13 = 1;
      if (uVar11 != 0) {
         uVar13 = uVar11;
      }

      lVar17 = *(long*)( this + 0x10 );
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
      uVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar11 != 0) {
         uVar18 = 0;
         do {
            if (uVar13 == uVar11) {
               uVar12 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar15 * 8 ) + 0x10 ), param_1);
               if ((char)uVar12 != '\0') {
                  *param_2 = uVar14;
                  return uVar12;
               }

               lVar17 = *(long*)( this + 0x10 );
            }

            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar14 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
            uVar14 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar11 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar11 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar18 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* MethodBind* create_method_bind<TranslationServer, String const&>(void
   (TranslationServer::*)(String const&)) */MethodBind *create_method_bind<TranslationServer,String_const&>(_func_void_String_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011dfd0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer, String>(String (TranslationServer::*)() const)
    */MethodBind *create_method_bind<TranslationServer,String>(_func_String *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011e030;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer, String>(String (TranslationServer::*)()) */MethodBind *create_method_bind<TranslationServer,String>(_func_String *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011e090;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer, int, String const&, String const&>(int
   (TranslationServer::*)(String const&, String const&) const) */MethodBind *create_method_bind<TranslationServer,int,String_const&,String_const&>(_func_int_String_ptr_String_ptr *param_1) {
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
   *(_func_int_String_ptr_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011e0f0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer, String, String const&, bool>(String
   (TranslationServer::*)(String const&, bool) const) */MethodBind *create_method_bind<TranslationServer,String,String_const&,bool>(_func_String_String_ptr_bool *param_1) {
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
   *(_func_String_String_ptr_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011e150;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer, Vector<String>>(Vector<String>
   (TranslationServer::*)() const) */MethodBind *create_method_bind<TranslationServer,Vector<String>>(_func_Vector *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011e1b0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer, StringName, StringName const&, StringName
   const&>(StringName (TranslationServer::*)(StringName const&, StringName const&) const) */MethodBind *create_method_bind<TranslationServer,StringName,StringName_const&,StringName_const&>(_func_StringName_StringName_ptr_StringName_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011e210;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer, StringName, StringName const&, StringName
   const&, int, StringName const&>(StringName (TranslationServer::*)(StringName const&, StringName
   const&, int, StringName const&) const) */MethodBind *create_method_bind<TranslationServer,StringName,StringName_const&,StringName_const&,int,StringName_const&>(_func_StringName_StringName_ptr_StringName_ptr_int_StringName_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011e270;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 4;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer, Ref<Translation> const&>(void
   (TranslationServer::*)(Ref<Translation> const&)) */MethodBind *create_method_bind<TranslationServer,Ref<Translation>const&>(_func_void_Ref_ptr *param_1) {
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
   *(_func_void_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011e2d0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer, Ref<Translation>, String
   const&>(Ref<Translation> (TranslationServer::*)(String const&)) */MethodBind *create_method_bind<TranslationServer,Ref<Translation>,String_const&>(_func_Ref_String_ptr *param_1) {
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
   *(_func_Ref_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011e330;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer, bool, StringName const&>(bool
   (TranslationServer::*)(StringName const&) const) */MethodBind *create_method_bind<TranslationServer,bool,StringName_const&>(_func_bool_StringName_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011e390;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer, Ref<TranslationDomain>, StringName
   const&>(Ref<TranslationDomain> (TranslationServer::*)(StringName const&)) */MethodBind *create_method_bind<TranslationServer,Ref<TranslationDomain>,StringName_const&>(_func_Ref_StringName_ptr *param_1) {
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
   *(_func_Ref_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011e3f0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer, StringName const&>(void
   (TranslationServer::*)(StringName const&)) */MethodBind *create_method_bind<TranslationServer,StringName_const&>(_func_void_StringName_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011e450;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer>(void (TranslationServer::*)()) */MethodBind *create_method_bind<TranslationServer>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011e4b0;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer, bool>(bool (TranslationServer::*)() const) */MethodBind *create_method_bind<TranslationServer,bool>(_func_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011e510;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer, bool>(void (TranslationServer::*)(bool)) */MethodBind *create_method_bind<TranslationServer,bool>(_func_void_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011e570;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* MethodBind* create_method_bind<TranslationServer, StringName, StringName const&>(StringName
   (TranslationServer::*)(StringName const&) const) */MethodBind *create_method_bind<TranslationServer,StringName,StringName_const&>(_func_StringName_StringName_ptr *param_1) {
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
   *(_func_StringName_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011e5d0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "TranslationServer";
   local_30 = 0x11;
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
/* TranslationServer::_initialize_classv() */void TranslationServer::_initialize_classv(void) {
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
      local_38 = "TranslationServer";
      local_50 = 0;
      local_30 = 0x11;
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
      LAB_00112500:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_00112500;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_001123d9:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_001123d9;
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
      goto LAB_00112556;
   }

   if (lVar10 == lVar7) {
      LAB_0011247f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00112556:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0011246a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0011247f;
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
   LAB_0011246a:puVar9[-1] = param_1;
   return 0;
}
/* CowData<TranslationServer::LocaleScriptInfo>::_unref() */void CowData<TranslationServer::LocaleScriptInfo>::_unref(CowData<TranslationServer::LocaleScriptInfo> *this) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   code *pcVar6;
   long *plVar7;
   long lVar8;
   long lVar9;
   void *pvVar10;
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
      pcVar6 = (code*)invalidInstructionException();
      ( *pcVar6 )();
   }

   lVar4 = plVar1[-1];
   lVar9 = 0;
   *(undefined8*)this = 0;
   plVar7 = plVar1;
   if (lVar4 != 0) {
      do {
         pvVar10 = (void*)plVar7[3];
         if (pvVar10 != (void*)0x0) {
            if (*(int*)( (long)plVar7 + 0x3c ) != 0) {
               if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar7 + 7 ) * 4 ) != 0) {
                  memset((void*)plVar7[6], 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar7 + 7 ) * 4 ) << 2);
                  if (*(int*)( (long)plVar7 + 0x3c ) == 0) goto LAB_001126f8;
               }

               lVar8 = 0;
               do {
                  plVar3 = (long*)( (long)pvVar10 + lVar8 * 8 );
                  if (*plVar3 != 0) {
                     LOCK();
                     plVar2 = (long*)( *plVar3 + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar5 = *plVar3;
                        *plVar3 = 0;
                        Memory::free_static((void*)( lVar5 + -0x10 ), false);
                     }

                     pvVar10 = (void*)plVar7[3];
                  }

                  lVar8 = lVar8 + 1;
               }
 while ( (uint)lVar8 < *(uint*)( (long)plVar7 + 0x3c ) );
               *(undefined4*)( (long)plVar7 + 0x3c ) = 0;
               if (pvVar10 == (void*)0x0) goto LAB_00112646;
            }

            LAB_001126f8:Memory::free_static(pvVar10, false);
            Memory::free_static((void*)plVar7[5], false);
            Memory::free_static((void*)plVar7[4], false);
            Memory::free_static((void*)plVar7[6], false);
         }

         LAB_00112646:if (plVar7[2] != 0) {
            LOCK();
            plVar3 = (long*)( plVar7[2] + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               lVar8 = plVar7[2];
               plVar7[2] = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         if (plVar7[1] != 0) {
            LOCK();
            plVar3 = (long*)( plVar7[1] + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               lVar8 = plVar7[1];
               plVar7[1] = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         if (*plVar7 != 0) {
            LOCK();
            plVar3 = (long*)( *plVar7 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               lVar8 = *plVar7;
               *plVar7 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

         lVar9 = lVar9 + 1;
         plVar7 = plVar7 + 8;
      }
 while ( lVar4 != lVar9 );
   }

   Memory::free_static(plVar1 + -2, false);
   return;
}
/* CowData<TranslationServer::LocaleScriptInfo>::_realloc(long) */undefined8 CowData<TranslationServer::LocaleScriptInfo>::_realloc(CowData<TranslationServer::LocaleScriptInfo> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<TranslationServer::LocaleScriptInfo>::resize<false>(long) */undefined8 CowData<TranslationServer::LocaleScriptInfo>::resize<false>(CowData<TranslationServer::LocaleScriptInfo> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   long lVar4;
   code *pcVar5;
   undefined8 *puVar6;
   undefined1(*pauVar7)[16];
   undefined1(*pauVar8)[16];
   undefined8 uVar9;
   long lVar10;
   undefined8 *puVar11;
   ulong uVar12;
   long lVar13;
   ulong uVar14;
   void *pvVar15;
   long local_48;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar13 = 0;
      local_48 = 0;
   }
 else {
      lVar13 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar13) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      local_48 = lVar13 * 0x40;
      if (local_48 != 0) {
         uVar12 = local_48 - 1U | local_48 - 1U >> 1;
         uVar12 = uVar12 | uVar12 >> 2;
         uVar12 = uVar12 | uVar12 >> 4;
         uVar12 = uVar12 | uVar12 >> 8;
         uVar12 = uVar12 | uVar12 >> 0x10;
         local_48 = ( uVar12 | uVar12 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x40 == 0) {
      LAB_00112bc0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar12 = param_1 * 0x40 - 1;
   uVar12 = uVar12 >> 1 | uVar12;
   uVar12 = uVar12 | uVar12 >> 2;
   uVar12 = uVar12 | uVar12 >> 4;
   uVar12 = uVar12 | uVar12 >> 8;
   uVar12 = uVar12 | uVar12 >> 0x10;
   uVar12 = uVar12 | uVar12 >> 0x20;
   lVar10 = uVar12 + 1;
   if (lVar10 == 0) goto LAB_00112bc0;
   uVar14 = param_1;
   if (param_1 <= lVar13) {
      while (puVar11 = *(undefined8**)this,puVar11 != (undefined8*)0x0) {
         if ((ulong)puVar11[-1] <= uVar14) {
            if (lVar10 != local_48) {
               uVar9 = _realloc(this, lVar10);
               if ((int)uVar9 != 0) {
                  return uVar9;
               }

               puVar11 = *(undefined8**)this;
               if (puVar11 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }

            }

            goto LAB_00112941;
         }

         plVar2 = puVar11 + uVar14 * 8;
         pvVar15 = (void*)plVar2[3];
         if (pvVar15 != (void*)0x0) {
            if (( *(int*)( (long)plVar2 + 0x3c ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar2 + 7 ) * 4 ) == 0 || ( memset((void*)plVar2[6], 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar2 + 7 ) * 4 ) << 2),*(int*)( (long)plVar2 + 0x3c ) != 0 ) ) )) {
               lVar13 = 0;
               do {
                  plVar3 = (long*)( (long)pvVar15 + lVar13 * 8 );
                  if (*plVar3 != 0) {
                     LOCK();
                     plVar1 = (long*)( *plVar3 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar4 = *plVar3;
                        *plVar3 = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                     pvVar15 = (void*)plVar2[3];
                  }

                  lVar13 = lVar13 + 1;
               }
 while ( (uint)lVar13 < *(uint*)( (long)plVar2 + 0x3c ) );
               *(undefined4*)( (long)plVar2 + 0x3c ) = 0;
               if (pvVar15 == (void*)0x0) goto LAB_00112a30;
            }

            Memory::free_static(pvVar15, false);
            Memory::free_static((void*)plVar2[5], false);
            Memory::free_static((void*)plVar2[4], false);
            Memory::free_static((void*)plVar2[6], false);
         }

         LAB_00112a30:if (plVar2[2] != 0) {
            LOCK();
            plVar3 = (long*)( plVar2[2] + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               lVar13 = plVar2[2];
               plVar2[2] = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

         }

         if (plVar2[1] != 0) {
            LOCK();
            plVar3 = (long*)( plVar2[1] + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               lVar13 = plVar2[1];
               plVar2[1] = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

         }

         if (*plVar2 != 0) {
            LOCK();
            plVar3 = (long*)( *plVar2 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               lVar13 = *plVar2;
               *plVar2 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

         }

         uVar14 = uVar14 + 1;
      }
;
      goto LAB_00112c16;
   }

   if (lVar10 == local_48) {
      LAB_00112af5:puVar11 = *(undefined8**)this;
      if (puVar11 == (undefined8*)0x0) {
         LAB_00112c16:/* WARNING: Does not return */pcVar5 = (code*)invalidInstructionException();
         ( *pcVar5 )();
      }

      lVar13 = puVar11[-1];
      if (param_1 <= lVar13) goto LAB_00112941;
   }
 else {
      if (lVar13 != 0) {
         uVar9 = _realloc(this, lVar10);
         if ((int)uVar9 != 0) {
            return uVar9;
         }

         goto LAB_00112af5;
      }

      puVar6 = (undefined8*)Memory::alloc_static(uVar12 + 0x11, false);
      if (puVar6 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar11 = puVar6 + 2;
      *puVar6 = 1;
      puVar6[1] = 0;
      *(undefined8**)this = puVar11;
      lVar13 = 0;
   }

   uVar9 = _LC108;
   pauVar7 = (undefined1(*) [16])( puVar11 + lVar13 * 8 );
   do {
      *(undefined8*)pauVar7[3] = 0;
      pauVar8 = pauVar7 + 4;
      *pauVar7 = (undefined1[16])0x0;
      pauVar7[1] = (undefined1[16])0x0;
      pauVar7[2] = (undefined1[16])0x0;
      *(undefined8*)( pauVar7[3] + 8 ) = uVar9;
      pauVar7 = pauVar8;
   }
 while ( (undefined1(*) [16])( puVar11 + param_1 * 8 ) != pauVar8 );
   LAB_00112941:puVar11[-1] = param_1;
   return 0;
}
/* WARNING: Removing unreachable block (ram,0x00112db8) *//* WARNING: Removing unreachable block (ram,0x00112f4d) *//* WARNING: Removing unreachable block (ram,0x00112f59) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTRC<StringName, StringName const&>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRC<StringName,StringName_const&>::validated_call(MethodBindTRC<StringName,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113102;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   StringName::operator =((StringName*)( param_3 + 8 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   LAB_00113102:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<StringName, StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<StringName,StringName_const&>::ptrcall(MethodBindTRC<StringName,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
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
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011330c;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   StringName::operator =((StringName*)param_3, (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   LAB_0011330c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00113671;
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
      /* WARNING: Could not recover jumptable at 0x001134fd. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00113671:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00113859;
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
      /* WARNING: Could not recover jumptable at 0x001136e2. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }

   LAB_00113859:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001139b0;
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

   LAB_001139b0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00113bc2;
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
   LAB_00113bc2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00113d71;
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
   LAB_00113d71:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113ff0;
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

   LAB_00113ff0:*(undefined4*)param_1 = 0;
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

         goto LAB_0011436f;
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
      /* WARNING: Could not recover jumptable at 0x00114216. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011436f:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_0011452f;
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
      /* WARNING: Could not recover jumptable at 0x001143d6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011452f:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00114711;
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
      /* WARNING: Could not recover jumptable at 0x0011459d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00114711:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_001148f1;
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
      /* WARNING: Could not recover jumptable at 0x00114779. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_001148f1:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00114949;
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
   LAB_00114949:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00114b25;
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
   LAB_00114b25:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::validated_call(MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00114d3e;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8, param_2[1] + 8, *(undefined4*)( param_2[2] + 8 ), param_2[3] + 8);
   StringName::operator =((StringName*)( param_3 + 8 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   LAB_00114d3e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::ptrcall(MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
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
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00114f4e;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2, param_2[1], *param_2[2], param_2[3]);
   StringName::operator =((StringName*)param_3, (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   LAB_00114f4e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<StringName, StringName const&, StringName const&>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTRC<StringName,StringName_const&,StringName_const&>::validated_call(MethodBindTRC<StringName,StringName_const&,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011515a;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8, param_2[1] + 8);
   StringName::operator =((StringName*)( param_3 + 8 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   LAB_0011515a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<StringName, StringName const&, StringName const&>::ptrcall(Object*, void const**,
   void*) const */void MethodBindTRC<StringName,StringName_const&,StringName_const&>::ptrcall(MethodBindTRC<StringName,StringName_const&,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
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
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00115360;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2, param_2[1]);
   StringName::operator =((StringName*)param_3, (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   LAB_00115360:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<String>>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Vector<String>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001155c0;
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

         ( *(code*)pVVar2 )(&local_58);
         Variant::Variant((Variant*)local_48, (Vector*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         CowData<String>::_unref((CowData<String>*)&local_50);
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

   LAB_001155c0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<String>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector<String>>::validated_call(MethodBindTRC<Vector<String>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
   long local_40[2];
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
         local_48 = (Variant**)0x112fa8;
         local_40[0] = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00115807;
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

   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(long*)( *(long*)( param_3 + 8 ) + 0x18 ) != local_40[0]) {
      CowData<String>::_ref((CowData<String>*)( *(long*)( param_3 + 8 ) + 0x18 ), (CowData*)local_40);
   }

   CowData<String>::_unref((CowData<String>*)local_40);
   LAB_00115807:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<String>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector<String>>::ptrcall(MethodBindTRC<Vector<String>> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
   long local_40[2];
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
         local_48 = (void**)0x112fa8;
         local_40[0] = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001159e3;
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

   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(long*)( (long)param_3 + 8 ) != local_40[0]) {
      CowData<String>::_ref((CowData<String>*)( (long)param_3 + 8 ), (CowData*)local_40);
   }

   CowData<String>::_unref((CowData<String>*)local_40);
   LAB_001159e3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String, String const&, bool>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRC<String,String_const&,bool>::validated_call(MethodBindTRC<String,String_const&,bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   char *pcVar1;
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

         goto LAB_00115be4;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8, param_2[1][8]);
   if (*(char**)( param_3 + 8 ) != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
   }

   pcVar1 = local_48;
   if (local_48 != (char*)0x0) {
      LOCK();
      plVar3 = (long*)( local_48 + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_48 = (char*)0x0;
         Memory::free_static(pcVar1 + -0x10, false);
      }

   }

   LAB_00115be4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String, String const&, bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<String,String_const&,bool>::ptrcall(MethodBindTRC<String,String_const&,bool> *this, Object *param_1, void **param_2, void *param_3) {
   char *pcVar1;
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00115e12;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2, *param_2[1] != '\0');
   /* WARNING: Load size is inaccurate */
   if (*param_3 != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
   }

   pcVar1 = local_48;
   if (local_48 != (char*)0x0) {
      LOCK();
      plVar3 = (long*)( local_48 + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_48 = (char*)0x0;
         Memory::free_static(pcVar1 + -0x10, false);
      }

   }

   LAB_00115e12:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int, String const&, String const&>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<int,String_const&,String_const&>::validated_call(MethodBindTRC<int,String_const&,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
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

         goto LAB_00115ff9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8, param_2[1] + 8);
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_00115ff9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int, String const&, String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int,String_const&,String_const&>::ptrcall(MethodBindTRC<int,String_const&,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
   int iVar1;
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001161bd;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2, param_2[1]);
   *(long*)param_3 = (long)iVar1;
   LAB_001161bd:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<String>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTR<String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116420;
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

   LAB_00116420:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<String>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<String>::validated_call(MethodBindTR<String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

      if (local_48 == (Variant**)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x112fa8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116681;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
   }

   ( *pcVar3 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(Variant***)( param_3 + 8 ) != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
   }

   ppVVar2 = local_48;
   if (local_48 != (Variant**)0x0) {
      LOCK();
      ppVVar1 = local_48 + -2;
      *ppVVar1 = *ppVVar1 + -1;
      UNLOCK();
      if (*ppVVar1 == (Variant*)0x0) {
         local_48 = (Variant**)0x0;
         Memory::free_static(ppVVar2 + -2, false);
      }

   }

   LAB_00116681:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<String>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<String>::ptrcall(MethodBindTR<String> *this, Object *param_1, void **param_2, void *param_3) {
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

      if (local_48 == (void**)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x112fa8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011686e;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
   }

   ( *pcVar3 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   /* WARNING: Load size is inaccurate */
   if (*param_3 != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
   }

   ppvVar2 = local_48;
   if (local_48 != (void**)0x0) {
      LOCK();
      ppvVar1 = local_48 + -2;
      *ppvVar1 = (void*)( (long)*ppvVar1 + -1 );
      UNLOCK();
      if (*ppvVar1 == (void*)0x0) {
         local_48 = (void**)0x0;
         Memory::free_static(ppvVar2 + -2, false);
      }

   }

   LAB_0011686e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116aa0;
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

   LAB_00116aa0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<String>::validated_call(MethodBindTRC<String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

      if (local_48 == (Variant**)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x112fa8;
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

         goto LAB_00116d01;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
   }

   ( *pcVar3 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(Variant***)( param_3 + 8 ) != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
   }

   ppVVar2 = local_48;
   if (local_48 != (Variant**)0x0) {
      LOCK();
      ppVVar1 = local_48 + -2;
      *ppVVar1 = *ppVVar1 + -1;
      UNLOCK();
      if (*ppVVar1 == (Variant*)0x0) {
         local_48 = (Variant**)0x0;
         Memory::free_static(ppVVar2 + -2, false);
      }

   }

   LAB_00116d01:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<String>::ptrcall(MethodBindTRC<String> *this, Object *param_1, void **param_2, void *param_3) {
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

      if (local_48 == (void**)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x112fa8;
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

         goto LAB_00116eee;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
   }

   ( *pcVar3 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   /* WARNING: Load size is inaccurate */
   if (*param_3 != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
   }

   ppvVar2 = local_48;
   if (local_48 != (void**)0x0) {
      LOCK();
      ppvVar1 = local_48 + -2;
      *ppvVar1 = (void*)( (long)*ppvVar1 + -1 );
      UNLOCK();
      if (*ppvVar1 == (void*)0x0) {
         local_48 = (void**)0x0;
         Memory::free_static(ppvVar2 + -2, false);
      }

   }

   LAB_00116eee:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<String_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00117221;
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
      /* WARNING: Could not recover jumptable at 0x001170ad. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00117221:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<String_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00117401;
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
      /* WARNING: Could not recover jumptable at 0x00117289. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00117401:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<String, String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<String,String_const&>::validated_call(MethodBindTRC<String,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   char *pcVar1;
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

         goto LAB_001174ac;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   if (*(char**)( param_3 + 8 ) != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
   }

   pcVar1 = local_48;
   if (local_48 != (char*)0x0) {
      LOCK();
      plVar3 = (long*)( local_48 + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_48 = (char*)0x0;
         Memory::free_static(pcVar1 + -0x10, false);
      }

   }

   LAB_001174ac:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String, String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<String,String_const&>::ptrcall(MethodBindTRC<String,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
   char *pcVar1;
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001176c1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   /* WARNING: Load size is inaccurate */
   if (*param_3 != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
   }

   pcVar1 = local_48;
   if (local_48 != (char*)0x0) {
      LOCK();
      plVar3 = (long*)( local_48 + -0x10 );
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
         local_48 = (char*)0x0;
         Memory::free_static(pcVar1 + -0x10, false);
      }

   }

   LAB_001176c1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<TranslationDomain>, StringName const&>::ptrcall(Object*, void const**, void*)
   const */void MethodBindTR<Ref<TranslationDomain>,StringName_const&>::ptrcall(MethodBindTR<Ref<TranslationDomain>,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x112fa8;
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

         goto LAB_001178f7;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_001178f7;
      *(undefined8*)param_3 = 0;
      goto LAB_00117941;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_00117941;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_00117941:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_001178f7;
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

   LAB_001178f7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<Translation>, String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Ref<Translation>,String_const&>::ptrcall(MethodBindTR<Ref<Translation>,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x112fa8;
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

         goto LAB_00117bd7;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_00117bd7;
      *(undefined8*)param_3 = 0;
      goto LAB_00117c21;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_00117c21;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_00117c21:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_00117bd7;
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

   LAB_00117bd7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Translation> const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Ref<Translation>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar5 = param_2[0x23];
         if (pVVar5 == (Variant*)0x0) {
            pVVar5 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar5 = param_2[1] + 0x20;
      }

      if (local_58 == (Object*)*(long*)pVVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x112fa8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117ef8;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_48, *(Object**)( *(long*)param_3 + 0x10 ));
   local_58 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_58;
   if (pOVar4 != local_58) {
      if (pOVar4 == (Object*)0x0) {
         if (local_58 != (Object*)0x0) {
            local_58 = (Object*)0x0;
            LAB_00117eb6:cVar3 = RefCounted::unreference();
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
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &Translation::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_58 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_58 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_00117eb6;
         }

      }

   }

   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar6 )((long*)( (long)param_2 + lVar1 ));
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

   LAB_00117ef8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Translation> const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Ref<Translation>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x112fa8;
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

         goto LAB_001181bc;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   if (( *param_3 == (long*)0x0 ) || ( local_48 = (Object*)**param_3 ),local_48 == (Object*)0x0) {
      LAB_00118198:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_00118198;
   }

   ( *pcVar5 )((long*)( (long)param_2 + lVar1 ));
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

   LAB_001181bc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<StringName, StringName const&, StringName const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */Object *MethodBindTRC<StringName,StringName_const&,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   Variant *pVVar11;
   int iVar12;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar13;
   Variant *pVVar14;
   long in_FS_OFFSET;
   bool bVar15;
   long local_78;
   long local_70;
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
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118550;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 3) {
      pVVar14 = param_2[5];
      iVar6 = 2 - in_R8D;
      if (pVVar14 == (Variant*)0x0) {
         if (iVar6 != 0) goto LAB_00118598;
         pVVar11 = *(Variant**)param_4;
         LAB_001185ad:pVVar14 = *(Variant**)( param_4 + 8 );
      }
 else {
         lVar2 = *(long*)( pVVar14 + -8 );
         iVar12 = (int)lVar2;
         if (iVar12 < iVar6) {
            LAB_00118598:uVar7 = 4;
            goto LAB_00118585;
         }

         if (in_R8D == 0) {
            lVar9 = (long)( iVar12 + -2 );
            if (lVar2 <= lVar9) goto LAB_00118680;
            pVVar11 = pVVar14 + lVar9 * 0x18;
         }
 else {
            pVVar11 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_001185ad;
         }

         lVar9 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar12 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_00118680:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar14 = pVVar14 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar14, 0x15);
      uVar4 = _LC134;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_70);
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x15);
      uVar4 = _LC135;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_68);
      ( *(code*)pVVar13 )((StringName*)&local_78, (Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68, (Variant*)&local_70);
      Variant::Variant((Variant*)local_58, (StringName*)&local_78);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      bVar15 = StringName::configured != '\0';
      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (bVar15) {
         if (local_78 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00118550;
         }

         if (local_68 != (char*)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00118550;
         }

         if (local_70 != 0) {
            StringName::unref();
         }

      }

   }
 else {
      uVar7 = 3;
      LAB_00118585:*in_R9 = uVar7;
      in_R9[2] = 2;
   }

   LAB_00118550:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
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
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118930;
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
         if (in_R8D != 1) goto LAB_00118980;
         LAB_00118970:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00118980:uVar7 = 4;
            goto LAB_00118925;
         }

         if (in_R8D == 1) goto LAB_00118970;
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
      uVar4 = _LC135;
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
      LAB_00118925:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_00118930:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTR<Ref<TranslationDomain>, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<Ref<TranslationDomain>,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
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
   long local_78;
   Object *local_70;
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
         local_70 = (Object*)0x0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118d20;
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
         if (in_R8D != 1) goto LAB_00118d70;
         LAB_00118d60:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00118d70:uVar7 = 4;
            goto LAB_00118d15;
         }

         if (in_R8D == 1) goto LAB_00118d60;
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

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x15);
      uVar4 = _LC135;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_68);
      ( *(code*)pVVar12 )(&local_70, (Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, local_70);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (( ( local_70 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_70,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
      Memory::free_static(pOVar5, false);
   }

   if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }

}
else{uVar7 = 3;LAB_00118d15:*in_R9 = uVar7;in_R9[2] = 1;}LAB_00118d20:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* MethodBindT<StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const
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
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119090;
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
         if (in_R8D != 1) goto LAB_001190e0;
         LAB_001190d0:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_001190e0:uVar6 = 4;
            goto LAB_00119085;
         }

         if (in_R8D == 1) goto LAB_001190d0;
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
      uVar4 = _LC135;
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
      LAB_00119085:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_00119090:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<StringName, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<StringName,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   long local_78;
   long local_70;
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
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119440;
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
         if (in_R8D != 1) goto LAB_00119490;
         LAB_00119480:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00119490:uVar6 = 4;
            goto LAB_00119435;
         }

         if (in_R8D == 1) goto LAB_00119480;
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
      uVar4 = _LC135;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_68);
      ( *(code*)pVVar11 )((StringName*)&local_70, (Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, (StringName*)&local_70);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      bVar12 = StringName::configured != '\0';
      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (( bVar12 ) && ( ( ( local_70 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_68 != (char*)0x0 ) ) )) {
         StringName::unref();
      }

   }
 else {
      uVar6 = 3;
      LAB_00119435:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_00119440:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<String, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<String,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_001197f0;
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
         if (in_R8D != 1) goto LAB_00119840;
         LAB_00119830:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00119840:uVar6 = 4;
            goto LAB_001197e5;
         }

         if (in_R8D == 1) goto LAB_00119830;
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
      uVar4 = _LC137;
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
      LAB_001197e5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_001197f0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119b60;
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
         if (in_R8D != 1) goto LAB_00119bb0;
         LAB_00119ba0:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00119bb0:uVar6 = 4;
            goto LAB_00119b55;
         }

         if (in_R8D == 1) goto LAB_00119ba0;
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
      uVar4 = _LC137;
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
      LAB_00119b55:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_00119b60:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int, String const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<int,String_const&,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   Variant *pVVar11;
   int iVar12;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar13;
   Variant *pVVar14;
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
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119f17;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 3) {
      pVVar14 = param_2[5];
      iVar6 = 2 - in_R8D;
      if (pVVar14 == (Variant*)0x0) {
         if (iVar6 != 0) goto LAB_00119f58;
         pVVar11 = *(Variant**)param_4;
         LAB_00119f6d:pVVar14 = *(Variant**)( param_4 + 8 );
      }
 else {
         lVar2 = *(long*)( pVVar14 + -8 );
         iVar12 = (int)lVar2;
         if (iVar12 < iVar6) {
            LAB_00119f58:uVar7 = 4;
            goto LAB_00119f45;
         }

         if (in_R8D == 0) {
            lVar9 = (long)( iVar12 + -2 );
            if (lVar2 <= lVar9) goto LAB_0011a040;
            pVVar11 = pVVar14 + lVar9 * 0x18;
         }
 else {
            pVVar11 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_00119f6d;
         }

         lVar9 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar12 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_0011a040:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar14 = pVVar14 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar14, 4);
      uVar4 = _LC138;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_70);
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 4);
      uVar4 = _LC137;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_68);
      iVar6 = ( *(code*)pVVar13 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68, (Variant*)&local_70);
      Variant::Variant((Variant*)local_58, iVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   }
 else {
      uVar7 = 3;
      LAB_00119f45:*in_R9 = uVar7;
      in_R9[2] = 2;
   }

   LAB_00119f17:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String, String const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<String,String_const&,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   int iVar7;
   undefined4 uVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   Variant *pVVar12;
   int iVar13;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar14;
   Variant *pVVar15;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a33c;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar14 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 3) {
      pVVar15 = param_2[5];
      iVar7 = 2 - in_R8D;
      if (pVVar15 == (Variant*)0x0) {
         if (iVar7 != 0) goto LAB_0011a380;
         pVVar12 = *(Variant**)param_4;
         LAB_0011a39d:pVVar15 = *(Variant**)( param_4 + 8 );
      }
 else {
         lVar2 = *(long*)( pVVar15 + -8 );
         iVar13 = (int)lVar2;
         if (iVar13 < iVar7) {
            LAB_0011a380:uVar8 = 4;
            goto LAB_0011a36d;
         }

         if (in_R8D == 0) {
            lVar10 = (long)( iVar13 + -2 );
            if (lVar2 <= lVar10) goto LAB_0011a470;
            pVVar12 = pVVar15 + lVar10 * 0x18;
         }
 else {
            pVVar12 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_0011a39d;
         }

         lVar10 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar13 - iVar7 ) );
         if (lVar2 <= lVar10) {
            LAB_0011a470:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar15 = pVVar15 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar14 & 1 ) != 0) {
         pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar15, 1);
      uVar4 = _LC139;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      bVar6 = Variant::operator_cast_to_bool(pVVar15);
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar12, 4);
      uVar4 = _LC137;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_68);
      ( *(code*)pVVar14 )((CowData<char32_t>*)&local_70, (Variant*)( (long)plVar11 + (long)pVVar1 ), (Variant*)&local_68, bVar6);
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
      uVar8 = 3;
      LAB_0011a36d:*in_R9 = uVar8;
      in_R9[2] = 2;
   }

   LAB_0011a33c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<Translation>, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<Ref<Translation>,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
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
   long local_78;
   Object *local_70;
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
         local_70 = (Object*)0x0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a750;
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
         if (in_R8D != 1) goto LAB_0011a7a0;
         LAB_0011a790:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011a7a0:uVar7 = 4;
            goto LAB_0011a745;
         }

         if (in_R8D == 1) goto LAB_0011a790;
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

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 4);
      uVar4 = _LC137;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_68);
      ( *(code*)pVVar12 )(&local_70, (Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, local_70);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (( ( local_70 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_70,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
      Memory::free_static(pOVar5, false);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
}
else{uVar7 = 3;LAB_0011a745:*in_R9 = uVar7;in_R9[2] = 1;}LAB_0011a750:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* MethodBindT<Ref<Translation> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<Ref<Translation>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x112fa8;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011ab40;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_0011ab35:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_0011ab40;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_0011ab90;
      LAB_0011ab80:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar12 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_0011ab90:uVar7 = 4;
         goto LAB_0011ab35;
      }

      if (in_R8D == 1) goto LAB_0011ab80;
      lVar10 = (long)( (int)lVar2 + -1 );
      if (lVar2 <= lVar10) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      pVVar12 = pVVar12 + lVar10 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar13 & 1 ) != 0) {
      pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
   }

   cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12);
   uVar4 = _LC140;
   if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar4;
   }

   local_48 = (Object*)0x0;
   pOVar8 = (Object*)Variant::get_validated_object();
   pOVar5 = local_48;
   if (pOVar8 != local_48) {
      if (pOVar8 == (Object*)0x0) {
         if (local_48 != (Object*)0x0) {
            local_48 = (Object*)0x0;
            LAB_0011acad:cVar6 = RefCounted::unreference();
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
         pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &Translation::typeinfo, 0);
         if (pOVar5 != pOVar8) {
            local_48 = pOVar8;
            if (pOVar8 != (Object*)0x0) {
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') {
                  local_48 = (Object*)0x0;
               }

            }

            if (pOVar5 != (Object*)0x0) goto LAB_0011acad;
         }

      }

   }

   ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ));
   if (local_48 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_48;
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_48);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   LAB_0011ab40:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   long lVar8;
   long *plVar9;
   uint uVar10;
   Variant *pVVar11;
   undefined4 in_register_00000014;
   long *plVar12;
   long lVar13;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar14;
   long in_FS_OFFSET;
   bool bVar15;
   long local_b0;
   long local_a8;
   long local_a0;
   char *local_98;
   undefined8 local_90;
   undefined4 local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   Variant *local_68[5];
   long local_40;
   plVar12 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar12 != (long*)0x0 ) && ( plVar12[1] != 0 ) ) && ( *(char*)( plVar12[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
      if (plVar12[1] == 0) {
         plVar9 = (long*)plVar12[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar12 + 0x40 ) )();
         }

      }
 else {
         plVar9 = (long*)( plVar12[1] + 0x20 );
      }

      if (local_98 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_a0 = 0;
         local_90 = 0x35;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_98, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b080;
      }

      if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar14 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 5) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar6 = 0;
         lVar13 = 0;
      }
 else {
         lVar13 = *(long*)( pVVar2 + -8 );
         iVar6 = (int)lVar13;
      }

      if ((int)( 4 - in_R8D ) <= iVar6) {
         lVar8 = 0;
         do {
            if ((int)lVar8 < (int)in_R8D) {
               pVVar11 = *(Variant**)( param_4 + lVar8 * 8 );
            }
 else {
               uVar10 = iVar6 + -4 + (int)lVar8;
               if (lVar13 <= (int)uVar10) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar10, lVar13, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar11 = pVVar2 + (ulong)uVar10 * 0x18;
            }

            local_68[lVar8] = pVVar11;
            lVar8 = lVar8 + 1;
         }
 while ( lVar8 != 4 );
         *in_R9 = 0;
         if (( (ulong)pVVar14 & 1 ) != 0) {
            pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar12 + (long)pVVar1 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[3], 0x15);
         uVar4 = _LC141;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_StringName((Variant*)&local_a8);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[2], 2);
         uVar4 = _LC142;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar6 = Variant::operator_cast_to_int(local_68[2]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[1], 0x15);
         uVar4 = _LC134;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_StringName((Variant*)&local_a0);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[0], 0x15);
         uVar4 = _LC135;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_StringName((Variant*)&local_98);
         ( *(code*)pVVar14 )((StringName*)&local_b0, (Variant*)( (long)plVar12 + (long)pVVar1 ), (Variant*)&local_98, (Variant*)&local_a0, iVar6, (Variant*)&local_a8);
         Variant::Variant((Variant*)local_88, (StringName*)&local_b0);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         bVar15 = StringName::configured != '\0';
         *(undefined4*)param_1 = local_88[0];
         *(undefined8*)( param_1 + 8 ) = local_80;
         *(undefined8*)( param_1 + 0x10 ) = uStack_78;
         if (bVar15) {
            if (local_b0 != 0) {
               StringName::unref();
               if (StringName::configured == '\0') goto LAB_0011b080;
            }

            if (local_98 != (char*)0x0) {
               StringName::unref();
               if (StringName::configured == '\0') goto LAB_0011b080;
            }

            if (local_a0 != 0) {
               StringName::unref();
               if (StringName::configured == '\0') goto LAB_0011b080;
            }

            if (local_a8 != 0) {
               StringName::unref();
            }

         }

         goto LAB_0011b080;
      }

      uVar7 = 4;
   }
 else {
      uVar7 = 3;
   }

   *in_R9 = uVar7;
   in_R9[2] = 4;
   LAB_0011b080:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<TranslationDomain>, StringName const&>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTR<Ref<TranslationDomain>,StringName_const&>::validated_call(MethodBindTR<Ref<TranslationDomain>,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b33d;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
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

   LAB_0011b33d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<Translation>, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTR<Ref<Translation>,String_const&>::validated_call(MethodBindTR<Ref<Translation>,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b58d;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
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

   LAB_0011b58d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_0011b84d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011b8b0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011b8b0:uVar6 = 4;
         LAB_0011b84d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011b7cb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011b7cb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC143;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x0011b827. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
   return;
}
/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC132, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
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
         goto LAB_0011b916;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool>(p_Var3, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011b916:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
   if (iVar5 != param_1) goto LAB_0011bb37;
   local_78 = 0;
   local_68 = &_LC5;
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
      LAB_0011bc35:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0011bc35;
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
   LAB_0011bb37:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTRC<StringName, StringName const&, StringName const&>::_gen_argument_type_info(int)
   const */undefined4 *MethodBindTRC<StringName,StringName_const&,StringName_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   long lVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 2) {
      local_60 = (undefined1[16])0x0;
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      call_get_argument_type_info_helper<StringName_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      call_get_argument_type_info_helper<StringName_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar5 = local_60._0_8_;
      uVar6 = local_60._8_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *puVar7 = local_68._0_4_;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
      *(undefined8*)( puVar7 + 4 ) = uVar6;
      puVar7[6] = (undefined4)local_50;
      *(undefined8*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_0011bed4;
   }

   local_70 = 0;
   local_68 = &_LC5;
   local_78 = 0;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_60._0_8_;
   local_60 = auVar3 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   *puVar7 = 0x15;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar7[10] = 6;
      LAB_0011bf07:StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 8 ), (CowData*)&local_78);
      puVar7[10] = 6;
      if (puVar7[6] != 0x11) goto LAB_0011bf07;
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

   lVar4 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0011bed4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
      goto LAB_0011c028;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC5;
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
      LAB_0011c10f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0011c10f;
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

   LAB_0011c028:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<TranslationDomain>, StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Ref<TranslationDomain>,StringName_const&>::_gen_argument_type_info(int param_1) {
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
      goto LAB_0011c238;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = "TranslationDomain";
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 0x11;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_0011c337:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
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
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) goto LAB_0011c337;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0011c238:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
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
/* MethodBindTRC<StringName, StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<StringName,StringName_const&>::_gen_argument_type_info(int param_1) {
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
      goto LAB_0011c4b8;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC5;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 0x15;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_0011c59f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0011c59f;
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

   LAB_0011c4b8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   uint uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   uint local_cc;
   undefined8 local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   long local_a8;
   undefined1 local_a0[16];
   undefined8 local_90;
   long local_88;
   undefined4 local_80;
   undefined *local_78;
   undefined1 local_70[16];
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 4) {
      local_a0._0_8_ = 0;
      local_a0._8_8_ = 0;
      local_a8 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 6;
      local_cc = 0;
      call_get_argument_type_info_helper<StringName_const&>(in_EDX, (int*)&local_cc, (PropertyInfo*)&local_a8);
      call_get_argument_type_info_helper<StringName_const&>(in_EDX, (int*)&local_cc, (PropertyInfo*)&local_a8);
      uVar5 = local_cc;
      if (in_EDX == local_cc) {
         local_b8 = 0;
         local_78 = &_LC5;
         local_c0 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_70._8_8_;
         local_70 = auVar3 << 0x40;
         String::parse_latin1((StrRange*)&local_c0);
         local_c8 = 0;
         local_78 = (undefined*)CONCAT44(local_78._4_4_, 2);
         local_60 = 0;
         local_58 = 0;
         local_70 = (undefined1[16])0x0;
         if (local_c0 == 0) {
            LAB_0011c973:local_50 = 6;
            StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_b8);
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_c0);
            local_50 = 6;
            if (local_60 != 0x11) goto LAB_0011c973;
            StringName::StringName((StringName*)&local_b0, (String*)&local_58, false);
            if (local_70._8_8_ == local_b0) {
               if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_70._8_8_ = local_b0;
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
         if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
            StringName::unref();
         }

         local_a8 = CONCAT44(local_a8._4_4_, local_78._0_4_);
         if (local_a0._0_8_ != local_70._0_8_) {
            CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
            local_a0._0_8_ = local_70._0_8_;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_70._8_8_;
            local_70 = auVar4 << 0x40;
         }

         if (local_a0._8_8_ != local_70._8_8_) {
            StringName::unref();
            local_a0._8_8_ = local_70._8_8_;
            local_70._8_8_ = 0;
         }

         local_90 = CONCAT44(local_90._4_4_, local_60);
         if (local_88 != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            local_88 = local_58;
            local_58 = 0;
         }

         local_80 = local_50;
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      }

      local_cc = uVar5 + 1;
      call_get_argument_type_info_helper<StringName_const&>(in_EDX, (int*)&local_cc, (PropertyInfo*)&local_a8);
      uVar7 = local_a0._8_8_;
      uVar6 = local_a0._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_a0._8_8_;
      local_a0 = auVar1 << 0x40;
      *puVar8 = (undefined4)local_a8;
      *(undefined8*)( puVar8 + 2 ) = uVar6;
      *(undefined8*)( puVar8 + 4 ) = uVar7;
      puVar8[6] = (undefined4)local_90;
      *(long*)( puVar8 + 8 ) = local_88;
      puVar8[10] = local_80;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
      goto LAB_0011c6ff;
   }

   local_a8 = 0;
   local_b0 = 0;
   local_78 = &_LC5;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_70._8_8_;
   local_70 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   *puVar8 = 0x15;
   puVar8[6] = 0;
   *(undefined8*)( puVar8 + 8 ) = 0;
   *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
   if (local_b0 == 0) {
      puVar8[10] = 6;
      LAB_0011c7f7:StringName::operator =((StringName*)( puVar8 + 4 ), (StringName*)&local_a8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 8 ), (CowData*)&local_b0);
      puVar8[10] = 6;
      if (puVar8[6] != 0x11) goto LAB_0011c7f7;
      StringName::StringName((StringName*)&local_78, (String*)( puVar8 + 8 ), false);
      if (*(undefined**)( puVar8 + 4 ) == local_78) {
         if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar8 + 4 ) = local_78;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   LAB_0011c6ff:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar8;
}
/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<String_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
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
   if (iVar5 != param_1) goto LAB_0011cac7;
   local_78 = 0;
   local_68 = &_LC5;
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
      LAB_0011cbc5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0011cbc5;
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
   LAB_0011cac7:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTRC<String, String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<String,String_const&>::_gen_argument_type_info(int param_1) {
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
      goto LAB_0011cd98;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC5;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 4;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_0011ce7f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0011ce7f;
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

   LAB_0011cd98:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<String const&>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<String_const&>::_gen_argument_type_info(int param_1) {
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
/* MethodBindTR<Ref<Translation>, String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Ref<Translation>,String_const&>::_gen_argument_type_info(int param_1) {
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
      call_get_argument_type_info_helper<String_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
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
      goto LAB_0011d018;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = "Translation";
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_0011d117:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
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
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) goto LAB_0011d117;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0011d018:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int, String const&, String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int,String_const&,String_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   long lVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 2) {
      local_60 = (undefined1[16])0x0;
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      call_get_argument_type_info_helper<String_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      call_get_argument_type_info_helper<String_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar5 = local_60._0_8_;
      uVar6 = local_60._8_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *puVar7 = local_68._0_4_;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
      *(undefined8*)( puVar7 + 4 ) = uVar6;
      puVar7[6] = (undefined4)local_50;
      *(undefined8*)( puVar7 + 8 ) = local_48;
      puVar7[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_0011d2e4;
   }

   local_70 = 0;
   local_68 = &_LC5;
   local_78 = 0;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_60._0_8_;
   local_60 = auVar3 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   *puVar7 = 2;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar7[10] = 6;
      LAB_0011d317:StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 8 ), (CowData*)&local_78);
      puVar7[10] = 6;
      if (puVar7[6] != 0x11) goto LAB_0011d317;
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

   lVar4 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0011d2e4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String, String const&, bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<String,String_const&,bool>::_gen_argument_type_info(int param_1) {
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
   if (in_EDX < 2) {
      local_98 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 6;
      local_bc = 0;
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
      call_get_argument_type_info_helper<String_const&>(in_EDX, (int*)&local_bc, (PropertyInfo*)&local_98);
      if (in_EDX == local_bc) {
         local_a8 = 0;
         local_b0 = 0;
         local_68 = &_LC5;
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
            LAB_0011d67b:local_40 = 6;
            StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
            local_40 = 6;
            if (local_50 != 0x11) goto LAB_0011d67b;
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
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      }

      uVar6 = local_90._8_8_;
      uVar5 = local_90._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_90._8_8_;
      local_90 = auVar2 << 0x40;
      *puVar7 = (undefined4)local_98;
      *(undefined8*)( puVar7 + 2 ) = uVar5;
      *(undefined8*)( puVar7 + 4 ) = uVar6;
      puVar7[6] = (undefined4)local_80;
      *(long*)( puVar7 + 8 ) = local_78;
      puVar7[10] = local_70;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      goto LAB_0011d516;
   }

   local_98 = 0;
   local_a0 = 0;
   local_68 = &_LC5;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar7 = 4;
   puVar7[6] = 0;
   *(undefined8*)( puVar7 + 8 ) = 0;
   *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar7[10] = 6;
      LAB_0011d547:StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)&local_98);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 8 ), (CowData*)&local_a0);
      puVar7[10] = 6;
      if (puVar7[6] != 0x11) goto LAB_0011d547;
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

   LAB_0011d516:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* TranslationServer::_standardize_locale_bind_compat_98972(String const&) const */void TranslationServer::_GLOBAL__sub_I__standardize_locale_bind_compat_98972(void) {
   undefined8 uVar1;
   locale_script_info._8_8_ = 0;
   __cxa_atexit(Vector<TranslationServer::LocaleScriptInfo>::~Vector, locale_script_info, &__dso_handle);
   uVar1 = _LC108;
   language_map._8_16_ = (undefined1[16])0x0;
   language_map._24_16_ = (undefined1[16])0x0;
   language_map._40_8_ = _LC108;
   __cxa_atexit(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault < String>, DefaultTypedAllocator<HashMapElement<String,String>> > ::~HashMap, language_map, &__dso_handle);
   script_map._40_8_ = uVar1;
   script_map._8_16_ = (undefined1[16])0x0;
   script_map._24_16_ = (undefined1[16])0x0;
   __cxa_atexit(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault < String>, DefaultTypedAllocator<HashMapElement<String,String>> > ::~HashMap, script_map, &__dso_handle);
   locale_rename_map._40_8_ = uVar1;
   locale_rename_map._8_16_ = (undefined1[16])0x0;
   locale_rename_map._24_16_ = (undefined1[16])0x0;
   __cxa_atexit(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault < String>, DefaultTypedAllocator<HashMapElement<String,String>> > ::~HashMap, locale_rename_map, &__dso_handle);
   country_name_map._40_8_ = uVar1;
   country_name_map._8_16_ = (undefined1[16])0x0;
   country_name_map._24_16_ = (undefined1[16])0x0;
   __cxa_atexit(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault < String>, DefaultTypedAllocator<HashMapElement<String,String>> > ::~HashMap, country_name_map, &__dso_handle);
   variant_map._40_8_ = uVar1;
   variant_map._8_16_ = (undefined1[16])0x0;
   variant_map._24_16_ = (undefined1[16])0x0;
   __cxa_atexit(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault < String>, DefaultTypedAllocator<HashMapElement<String,String>> > ::~HashMap, variant_map, &__dso_handle);
   country_rename_map._40_8_ = uVar1;
   country_rename_map._8_16_ = (undefined1[16])0x0;
   country_rename_map._24_16_ = (undefined1[16])0x0;
   __cxa_atexit(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault < String>, DefaultTypedAllocator<HashMapElement<String,String>> > ::~HashMap, country_rename_map, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* TranslationServer::~TranslationServer() */void TranslationServer::~TranslationServer(TranslationServer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::~HashMap() */void HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::~HashMap(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<StringName, StringName const&>::~MethodBindTRC() */void MethodBindTRC<StringName,StringName_const&>::~MethodBindTRC(MethodBindTRC<StringName,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector<String>>::~MethodBindTRC() */void MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Ref<TranslationDomain>, StringName const&>::~MethodBindTR() */void MethodBindTR<Ref<TranslationDomain>,StringName_const&>::~MethodBindTR(MethodBindTR<Ref<TranslationDomain>,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Ref<Translation>, String const&>::~MethodBindTR() */void MethodBindTR<Ref<Translation>,String_const&>::~MethodBindTR(MethodBindTR<Ref<Translation>,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Ref<Translation> const&>::~MethodBindT() */void MethodBindT<Ref<Translation>const&>::~MethodBindT(MethodBindT<Ref<Translation>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<StringName, StringName const&, StringName const&, int, StringName
   const&>::~MethodBindTRC() */void MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&>::~MethodBindTRC(MethodBindTRC<StringName,StringName_const&,StringName_const&,int,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<StringName, StringName const&, StringName const&>::~MethodBindTRC() */void MethodBindTRC<StringName,StringName_const&,StringName_const&>::~MethodBindTRC(MethodBindTRC<StringName,StringName_const&,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<String, String const&, bool>::~MethodBindTRC() */void MethodBindTRC<String,String_const&,bool>::~MethodBindTRC(MethodBindTRC<String,String_const&,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int, String const&, String const&>::~MethodBindTRC() */void MethodBindTRC<int,String_const&,String_const&>::~MethodBindTRC(MethodBindTRC<int,String_const&,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<String>::~MethodBindTR() */void MethodBindTR<String>::~MethodBindTR(MethodBindTR<String> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<String, String const&>::~MethodBindTRC() */void MethodBindTRC<String,String_const&>::~MethodBindTRC(MethodBindTRC<String,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Vector<TranslationServer::LocaleScriptInfo>::~Vector() */void Vector<TranslationServer::LocaleScriptInfo>::~Vector(Vector<TranslationServer::LocaleScriptInfo> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


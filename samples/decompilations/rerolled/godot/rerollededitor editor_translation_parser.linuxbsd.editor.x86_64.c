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
/* EditorTranslationParser::get_singleton() */void EditorTranslationParser::get_singleton(void) {
   if (singleton != (void*)0x0) {
      return;
   }

   singleton = operator_new(0x20, "");
   *(undefined8*)( (long)singleton + 8 ) = 0;
   *(undefined8*)( (long)singleton + 0x18 ) = 0;
   return;
}
/* EditorTranslationParser::EditorTranslationParser() */void EditorTranslationParser::EditorTranslationParser(EditorTranslationParser *this) {
   *(undefined8*)( this + 8 ) = 0;
   *(undefined8*)( this + 0x18 ) = 0;
   return;
}
/* EditorTranslationParser::get_parser(String const&) const */String *EditorTranslationParser::get_parser(String *param_1) {
   long *plVar1;
   String *pSVar2;
   code *pcVar3;
   char *pcVar4;
   char cVar5;
   long lVar6;
   String *in_RDX;
   long lVar7;
   long in_RSI;
   long lVar8;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = *(long*)( in_RSI + 0x18 );
   if (lVar6 != 0) {
      lVar7 = 0;
      while (lVar7 < *(long*)( lVar6 + -8 )) {
         plVar1 = *(long**)( lVar6 + lVar7 * 8 );
         local_58 = (char*)0x0;
         ( **(code**)( *plVar1 + 0x158 ) )(plVar1, (List<String,DefaultAllocator>*)&local_58);
         if (local_58 != (char*)0x0) {
            for (pSVar2 = *(String**)local_58; pSVar2 != (String*)0x0; pSVar2 = *(String**)( pSVar2 + 8 )) {
               cVar5 = String::operator ==(pSVar2, in_RDX);
               if (cVar5 != '\0') {
                  lVar6 = *(long*)( in_RSI + 0x18 );
                  if (lVar6 == 0) goto LAB_00100524;
                  lVar8 = *(long*)( lVar6 + -8 );
                  if (lVar8 <= lVar7) goto LAB_00100527;
                  *(undefined8*)param_1 = 0;
                  lVar6 = *(long*)( lVar6 + lVar7 * 8 );
                  if (lVar6 == 0) goto LAB_001002fe;
                  goto LAB_001002ed;
               }

            }

         }

         lVar7 = lVar7 + 1;
         List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_58);
         lVar6 = *(long*)( in_RSI + 0x18 );
         if (lVar6 == 0) break;
      }
;
   }

   lVar6 = *(long*)( in_RSI + 8 );
   for (lVar7 = 0; ( lVar6 != 0 && ( lVar7 < *(long*)( lVar6 + -8 ) ) ); lVar7 = lVar7 + 1) {
      plVar1 = *(long**)( lVar6 + lVar7 * 8 );
      local_58 = (char*)0x0;
      ( **(code**)( *plVar1 + 0x158 ) )(plVar1, (List<String,DefaultAllocator>*)&local_58);
      if (local_58 != (char*)0x0) {
         for (pSVar2 = *(String**)local_58; pSVar2 != (String*)0x0; pSVar2 = *(String**)( pSVar2 + 8 )) {
            cVar5 = String::operator ==(pSVar2, in_RDX);
            if (cVar5 != '\0') {
               lVar6 = *(long*)( in_RSI + 8 );
               if (lVar6 == 0) {
                  LAB_00100524:lVar8 = 0;
               }
 else {
                  lVar8 = *(long*)( lVar6 + -8 );
                  if (lVar7 < lVar8) {
                     *(undefined8*)param_1 = 0;
                     lVar6 = *(long*)( lVar6 + lVar7 * 8 );
                     if (lVar6 != 0) {
                        LAB_001002ed:*(long*)param_1 = lVar6;
                        cVar5 = RefCounted::reference();
                        if (cVar5 == '\0') {
                           *(undefined8*)param_1 = 0;
                        }

                     }

                     LAB_001002fe:List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_58);
                     goto LAB_00100306;
                  }

               }

               LAB_00100527:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar8, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

         }

      }

      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_58);
      lVar6 = *(long*)( in_RSI + 8 );
   }

   local_60 = 0;
   local_58 = "\" extension.";
   local_50 = 0xc;
   String::parse_latin1((StrRange*)&local_60);
   operator+((char *)&
   local_68,(String*)"No translation parser available for \"";
   String::operator +((String*)&local_58, (String*)&local_68);
   _err_print_error("get_parser", "editor/editor_translation_parser.cpp", 0x95, (List<String,DefaultAllocator>*)&local_58, 0, 1);
   pcVar4 = local_58;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static(pcVar4 + -0x10, false);
      }

   }

   lVar6 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   lVar6 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   *(undefined8*)param_1 = 0;
   LAB_00100306:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* EditorTranslationParser::get_recognized_extensions(List<String, DefaultAllocator>*) const */void EditorTranslationParser::get_recognized_extensions(EditorTranslationParser *this, List *param_1) {
   long *plVar1;
   int iVar2;
   CowData<char32_t> *this_00;
   undefined1(*pauVar3)[16];
   long lVar4;
   long lVar5;
   CowData *pCVar6;
   int iVar7;
   CowData *pCVar8;
   long in_FS_OFFSET;
   long *local_80;
   String local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *(long*)( this + 8 );
   local_68 = (undefined1[16])0x0;
   local_48 = 2;
   local_80 = (long*)0x0;
   local_58 = (undefined1[16])0x0;
   if (lVar5 == 0) {
      lVar5 = *(long*)( this + 0x18 );
      if (lVar5 != 0) goto LAB_001005fe;
   }
 else {
      lVar4 = 0;
      do {
         if (*(long*)( lVar5 + -8 ) <= lVar4) break;
         plVar1 = *(long**)( lVar5 + lVar4 * 8 );
         lVar4 = lVar4 + 1;
         ( **(code**)( *plVar1 + 0x158 ) )(plVar1, &local_80);
         lVar5 = *(long*)( this + 8 );
      }
 while ( lVar5 != 0 );
      lVar5 = *(long*)( this + 0x18 );
      if (lVar5 != 0) {
         LAB_001005fe:lVar4 = 0;
         do {
            if (*(long*)( lVar5 + -8 ) <= lVar4) break;
            plVar1 = *(long**)( lVar5 + lVar4 * 8 );
            lVar4 = lVar4 + 1;
            ( **(code**)( *plVar1 + 0x158 ) )(plVar1, &local_80);
            lVar5 = *(long*)( this + 0x18 );
         }
 while ( lVar5 != 0 );
      }

      if (( local_80 != (long*)0x0 ) && ( lVar5 = lVar5 != 0 )) {
         do {
            HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(local_78);
            lVar5 = *(long*)( lVar5 + 8 );
         }
 while ( lVar5 != 0 );
         iVar2 = local_48._4_4_;
         pCVar8 = (CowData*)local_68._0_8_;
         if (local_48._4_4_ == 0) {
            List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_80);
         }
 else {
            plVar1 = *(long**)param_1;
            iVar7 = 1;
            pCVar6 = (CowData*)local_68._0_8_;
            while (true) {
               if (plVar1 == (long*)0x0) {
                  pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])param_1 = pauVar3;
                  *(undefined4*)pauVar3[1] = 0;
                  *pauVar3 = (undefined1[16])0x0;
               }

               this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
               *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
               *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
               if (*(long*)pCVar6 != 0) {
                  CowData<char32_t>::_ref(this_00, pCVar6);
               }

               plVar1 = *(long**)param_1;
               lVar5 = plVar1[1];
               *(undefined8*)( this_00 + 8 ) = 0;
               *(long**)( this_00 + 0x18 ) = plVar1;
               *(long*)( this_00 + 0x10 ) = lVar5;
               if (lVar5 != 0) {
                  *(CowData<char32_t>**)( lVar5 + 8 ) = this_00;
               }

               plVar1[1] = (long)this_00;
               if (*plVar1 == 0) {
                  *plVar1 = (long)this_00;
               }

               *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
               if (iVar2 <= iVar7) break;
               iVar7 = iVar7 + 1;
               pCVar6 = pCVar6 + 8;
            }
;
            List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_80);
            if (pCVar8 == (CowData*)0x0) goto LAB_001007b8;
            if (*(uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) != 0) {
               memset((void*)local_58._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) * 4);
            }

            lVar5 = 0;
            do {
               pCVar8 = pCVar8 + lVar5 * 8;
               if (*(long*)pCVar8 != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)pCVar8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)pCVar8;
                     *(long*)pCVar8 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar5 = lVar5 + 1;
               pCVar8 = (CowData*)local_68._0_8_;
            }
 while ( (uint)lVar5 < local_48._4_4_ );
            local_48 = local_48 & 0xffffffff;
         }

         if (pCVar8 != (CowData*)0x0) {
            Memory::free_static(pCVar8, false);
            Memory::free_static((void*)local_58._0_8_, false);
            Memory::free_static((void*)local_68._8_8_, false);
            Memory::free_static((void*)local_58._8_8_, false);
         }

         goto LAB_001007b8;
      }

   }

   List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_80);
   LAB_001007b8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorTranslationParser::can_parse(String const&) const */char EditorTranslationParser::can_parse(EditorTranslationParser *this, String *param_1) {
   String *pSVar1;
   char cVar2;
   long in_FS_OFFSET;
   undefined8 *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = (undefined8*)0x0;
   get_recognized_extensions(this, (List*)&local_28);
   if (local_28 != (undefined8*)0x0) {
      for (pSVar1 = (String*)*local_28; pSVar1 != (String*)0x0; pSVar1 = *(String**)( pSVar1 + 8 )) {
         cVar2 = String::operator ==(param_1, pSVar1);
         if (cVar2 != '\0') goto LAB_001008d8;
      }

   }

   cVar2 = '\0';
   LAB_001008d8:List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_28);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return cVar2;
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
/* EditorTranslationParserPlugin::get_recognized_extensions(List<String, DefaultAllocator>*) const
    */void EditorTranslationParserPlugin::get_recognized_extensions(EditorTranslationParserPlugin *this, List *param_1) {
   long lVar1;
   undefined1 auVar2[16];
   undefined4 uVar3;
   CowData<char32_t> *this_00;
   undefined1(*pauVar4)[16];
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   code *pcVar8;
   long lVar9;
   long in_FS_OFFSET;
   undefined8 local_118;
   long local_110[2];
   long local_100;
   int local_f8[2];
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   long local_e8;
   undefined4 local_e0;
   long local_d8;
   undefined4 local_d0;
   undefined8 local_c8;
   long local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   long local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   ulong local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar7 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_100 = 0;
   if (plVar7 == (long*)0x0) {
      LAB_00100c3b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1a0] == (EditorTranslationParserPlugin)0x0 )) {
         local_c8 = 0;
         local_f8[0] = 0x10599f;
         local_f8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_c0 = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         uStack_f0 = 0x1a;
         uStack_ec = 0;
         String::parse_latin1((StrRange*)&local_c8);
         local_90 = CONCAT44(local_90._4_4_, 0xc);
         GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)local_f8);
         lVar6 = CONCAT44(uStack_ec, uStack_f0);
         local_c0 = CONCAT44(local_c0._4_4_, local_f8[0]);
         uVar5 = local_b8._0_8_;
         if (local_b8._0_8_ != lVar6) {
            if (local_b8._0_8_ != 0) {
               LOCK();
               plVar7 = (long*)( local_b8._0_8_ + -0x10 );
               *plVar7 = *plVar7 + -1;
               UNLOCK();
               if (*plVar7 == 0) {
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = local_b8._8_8_;
                  local_b8 = auVar2 << 0x40;
                  Memory::free_static((void*)( uVar5 + -0x10 ), false);
               }

               lVar6 = CONCAT44(uStack_ec, uStack_f0);
            }

            local_b8._0_8_ = lVar6;
            uStack_f0 = 0;
            uStack_ec = 0;
         }

         if (local_b8._8_8_ != local_e8) {
            StringName::unref();
            lVar6 = local_e8;
            local_e8 = 0;
            local_b8._8_8_ = lVar6;
         }

         lVar9 = local_a0;
         lVar6 = local_d8;
         local_a8 = CONCAT44(local_a8._4_4_, local_e0);
         if (local_a0 == local_d8) {
            local_98 = CONCAT44(local_98._4_4_, local_d0);
            if (local_a0 != 0) {
               LOCK();
               plVar7 = (long*)( local_a0 + -0x10 );
               *plVar7 = *plVar7 + -1;
               UNLOCK();
               if (*plVar7 == 0) {
                  local_d8 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

         }
 else {
            if (local_a0 != 0) {
               LOCK();
               plVar7 = (long*)( local_a0 + -0x10 );
               *plVar7 = *plVar7 + -1;
               UNLOCK();
               if (*plVar7 == 0) {
                  local_a0 = 0;
                  Memory::free_static((void*)( lVar9 + -0x10 ), false);
               }

            }

            local_a0 = local_d8;
            local_98 = CONCAT44(local_98._4_4_, local_d0);
         }

         if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
            StringName::unref();
         }

         if (CONCAT44(uStack_ec, uStack_f0) != 0) {
            LOCK();
            plVar7 = (long*)( CONCAT44(uStack_ec, uStack_f0) + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               lVar6 = CONCAT44(uStack_ec, uStack_f0);
               uStack_f0 = 0;
               uStack_ec = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

         local_70 = local_70 & 0xffffffff00000000;
         uVar3 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 0x1a8 ) = 0;
         lVar6 = *(long*)( this + 8 );
         pcVar8 = *(code**)( lVar6 + 0xd8 );
         if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xd0 ) ),pcVar8 == (code*)0x0) {
            local_118 = 0;
            local_f8[0] = 0x105a54;
            local_f8[1] = 0;
            uStack_f0 = 0x1d;
            uStack_ec = 0;
            String::parse_latin1((StrRange*)&local_118);
            StringName::StringName((StringName*)local_110, (String*)&local_118, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_f8, (StringName*)local_110);
            if (CONCAT44(uStack_ec, uStack_f0) == 0) {
               lVar6 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_f0);
               if (StringName::configured != '\0') goto LAB_00101201;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               LAB_0010121e:lVar6 = *(long*)( this + 8 );
               pcVar8 = *(code**)( lVar6 + 200 );
               if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_0010110e;
               uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x198);
               *(undefined8*)( this + 0x1a8 ) = uVar5;
            }
 else {
               lVar6 = *(long*)( CONCAT44(uStack_ec, uStack_f0) + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_f0);
               if (StringName::configured != '\0') {
                  LAB_00101201:if (local_110[0] != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               if (lVar6 == 0) goto LAB_0010121e;
            }

            lVar6 = *(long*)( this + 8 );
         }
 else {
            uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x198, uVar3);
            *(undefined8*)( this + 0x1a8 ) = uVar5;
            lVar6 = *(long*)( this + 8 );
         }

         LAB_0010110e:if (*(char*)( lVar6 + 0x29 ) != '\0') {
            plVar7 = (long*)operator_new(0x18, "");
            *plVar7 = (long)( this + 0x1a8 );
            plVar7[1] = (long)( this + 0x1a0 );
            plVar7[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar7;
         }

         this[0x1a0] = (EditorTranslationParserPlugin)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
      }

      pcVar8 = *(code**)( this + 0x1a8 );
      if (pcVar8 == (code*)0x0) {
         _err_print_error("get_recognized_extensions", "editor/editor_translation_parser.cpp", 0x53, "Custom translation parser plugin\'s \"func get_recognized_extensions()\" is undefined.", 0, 0);
         goto LAB_00100dba;
      }

      uStack_f0 = 0;
      uStack_ec = 0;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar8 )(*(undefined8*)( this + 0x10 ), 0, local_f8);
         lVar6 = CONCAT44(uStack_ec, uStack_f0);
         if (lVar6 != 0) goto LAB_00100ca2;
         LAB_00100e38:local_c0 = 0;
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x198, pcVar8, 0, local_f8);
         lVar6 = CONCAT44(uStack_ec, uStack_f0);
         if (lVar6 == 0) goto LAB_00100e38;
         LAB_00100ca2:local_c0 = 0;
         CowData<String>::_ref((CowData<String>*)&local_c0, (CowData*)&uStack_f0);
         lVar6 = local_c0;
      }

      if (lVar6 != local_100) {
         CowData<String>::_unref((CowData<String>*)&local_100);
         local_c0 = 0;
         local_100 = lVar6;
      }

      CowData<String>::_unref((CowData<String>*)&local_c0);
      CowData<String>::_unref((CowData<String>*)&uStack_f0);
   }
 else {
      local_f8[0] = 0;
      local_f8[1] = 0;
      uStack_f0 = 0;
      ( **(code**)( *plVar7 + 0x60 ) )(local_58, plVar7, this + 0x198, 0, 0, local_f8);
      if (local_f8[0] != 0) {
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00100c3b;
      }

      Variant::operator_cast_to_Vector((Variant*)&local_c8);
      if (local_c0 == 0) {
         CowData<String>::_unref((CowData<String>*)&local_c0);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00100dba;
      }

      CowData<String>::_unref((CowData<String>*)&local_100);
      lVar6 = local_c0;
      local_c0 = 0;
      local_100 = lVar6;
      CowData<String>::_unref((CowData<String>*)&local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( lVar6 != 0 ) && ( lVar9 = 0 ),0 < *(long*)( lVar6 + -8 )) {
      do {
         if (*(long*)param_1 == 0) {
            pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar4;
            *(undefined4*)pauVar4[1] = 0;
            *pauVar4 = (undefined1[16])0x0;
         }

         this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
         *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
         if (*(long*)( lVar6 + lVar9 * 8 ) != 0) {
            CowData<char32_t>::_ref(this_00, (CowData*)( lVar6 + lVar9 * 8 ));
         }

         plVar7 = *(long**)param_1;
         lVar1 = plVar7[1];
         *(undefined8*)( this_00 + 8 ) = 0;
         *(long**)( this_00 + 0x18 ) = plVar7;
         *(long*)( this_00 + 0x10 ) = lVar1;
         if (lVar1 != 0) {
            *(CowData<char32_t>**)( lVar1 + 8 ) = this_00;
         }

         plVar7[1] = (long)this_00;
         if (*plVar7 == 0) {
            *plVar7 = (long)this_00;
         }

         *(int*)( plVar7 + 2 ) = (int)plVar7[2] + 1;
         lVar9 = lVar9 + 1;
      }
 while ( lVar9 < *(long*)( lVar6 + -8 ) );
   }

   LAB_00100dba:CowData<String>::_unref((CowData<String>*)&local_100);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<Ref<EditorTranslationParserPlugin> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<EditorTranslationParserPlugin>>::_copy_on_write(CowData<Ref<EditorTranslationParserPlugin>> *this) {
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
      }
 while ( lVar1 != lVar8 );
   }

   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}
/* EditorTranslationParser::~EditorTranslationParser() */void EditorTranslationParser::~EditorTranslationParser(EditorTranslationParser *this) {
   CowData<Ref<EditorTranslationParserPlugin>> *this_00;
   CowData<Ref<EditorTranslationParserPlugin>> *this_01;
   EditorTranslationParser *pEVar1;
   pEVar1 = singleton;
   this_00 = (CowData<Ref<EditorTranslationParserPlugin>>*)( singleton + 0x18 );
   this_01 = (CowData<Ref<EditorTranslationParserPlugin>>*)( singleton + 8 );
   ~EditorTranslationParser(singleton)
   ;;
   Memory::free_static(pEVar1, false);
   singleton = (EditorTranslationParser*)0x0;
   for (int i = 0; i < 4; i++) {
      CowData<Ref<EditorTranslationParserPlugin>>::_unref(this_00);
      CowData<Ref<EditorTranslationParserPlugin>>::_unref(this_01);
      Memory::free_static(pEVar1, false);
      singleton = (EditorTranslationParser*)0;
   }

   CowData<Ref<EditorTranslationParserPlugin>>::_unref((CowData<Ref<EditorTranslationParserPlugin>>*)( this + 0x18 ));
   CowData<Ref<EditorTranslationParserPlugin>>::_unref((CowData<Ref<EditorTranslationParserPlugin>>*)( this + 8 ));
   return;
}
/* EditorTranslationParser::clean_parsers() */void EditorTranslationParser::clean_parsers(EditorTranslationParser *this) {
   if (( *(long*)( this + 8 ) != 0 ) && ( *(long*)( *(long*)( this + 8 ) + -8 ) != 0 )) {
      CowData<Ref<EditorTranslationParserPlugin>>::_unref((CowData<Ref<EditorTranslationParserPlugin>>*)( this + 8 ));
   }

   if (( *(long*)( this + 0x18 ) != 0 ) && ( *(long*)( *(long*)( this + 0x18 ) + -8 ) != 0 )) {
      CowData<Ref<EditorTranslationParserPlugin>>::_unref((CowData<Ref<EditorTranslationParserPlugin>>*)( this + 0x18 ));
      return;
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
/* EditorTranslationParserPlugin::_bind_methods() */void EditorTranslationParserPlugin::_bind_methods(void) {
   long *plVar1;
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
   ulong uVar12;
   char *pcVar13;
   undefined8 uVar14;
   int *piVar15;
   undefined4 *puVar16;
   long lVar17;
   int *piVar18;
   StringName *this;
   long in_FS_OFFSET;
   bool bVar19;
   Vector<String> *local_158;
   long local_110;
   long local_108;
   ulong local_100;
   Vector<String> local_f8[8];
   undefined8 local_f0;
   char *local_e8;
   undefined1 local_e0[16];
   int local_d0;
   long local_c8;
   undefined4 local_c0;
   char *local_b8;
   undefined8 local_b0;
   undefined1 local_a8[16];
   undefined8 local_98;
   long local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined1(*local_78[2])[16];
   int *local_68;
   ulong local_60;
   Vector<int> local_58[8];
   long local_50;
   long local_40;
   local_e0._8_8_ = local_e0._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_f0 = 0;
   local_e8 = (char*)0x0;
   local_b8 = "path";
   local_b0 = 4;
   String::parse_latin1((StrRange*)&local_e8);
   local_b8 = (char*)0x0;
   plVar1 = (long*)( (long)local_e8 + -0x10 );
   if (local_e8 == (char*)0x0) {
      Vector<String>::push_back(local_f8);
   }
 else {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00101749;
         LOCK();
         lVar17 = *plVar1;
         bVar19 = lVar2 == lVar17;
         if (bVar19) {
            *plVar1 = lVar2 + 1;
            lVar17 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar19 );
      if (lVar17 != -1) {
         local_b8 = local_e8;
      }

      LAB_00101749:pcVar13 = local_b8;
      Vector<String>::push_back(local_f8);
      if (pcVar13 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)pcVar13 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( (long)local_b8 + -0x10 ), false);
         }

      }

   }

   pcVar13 = local_e8;
   local_158 = local_f8;
   if (local_e8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_e8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar13 + -0x10 ), false);
      }

   }

   local_a8._0_8_ = 0;
   local_a8._8_8_ = 0;
   local_e8 = "_parse_file";
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = (undefined1(*) [16])0x0;
   local_68 = (int*)0x0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_b8);
   local_80 = CONCAT44(local_80._4_4_, 8);
   local_110 = 0;
   Variant::get_type_name((StrRange*)&local_108, 0x22);
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 0x1c);
   local_d0 = 0x1f;
   local_c8 = 0;
   local_e0._0_8_ = 0;
   local_e0._8_8_ = 0;
   if (local_108 == 0) {
      LAB_0010322b:local_c0 = 6;
      StringName::operator =((StringName*)( local_e0 + 8 ), (StringName*)&local_110);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_108);
      local_c0 = 6;
      if (local_d0 != 0x11) goto LAB_0010322b;
      StringName::StringName((StringName*)&local_100, (String*)&local_c8, false);
      if (local_e0._8_8_ == local_100) {
         if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_e0._8_8_ = local_100;
      }

   }

   lVar2 = local_108;
   this(StringName * )(local_e0 + 8);
   if (local_108 != 0) {
      LOCK();
      plVar1 = (long*)( local_108 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_108 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   uVar14 = local_a8._0_8_;
   local_b0 = CONCAT44(local_b0._4_4_, local_e8._0_4_);
   if (local_a8._0_8_ != local_e0._0_8_) {
      if (local_a8._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_a8._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a8._0_8_ = 0;
            Memory::free_static((void*)( uVar14 + -0x10 ), false);
         }

      }

      local_a8._0_8_ = local_e0._0_8_;
      local_e0._0_8_ = 0;
   }

   if (local_a8._8_8_ != local_e0._8_8_) {
      StringName::unref();
      local_a8._8_8_ = local_e0._8_8_;
      local_e0._8_8_ = 0;
   }

   lVar17 = local_90;
   lVar2 = local_c8;
   local_98 = CONCAT44(local_98._4_4_, local_d0);
   if (local_90 == local_c8) {
      local_88 = CONCAT44(local_88._4_4_, local_c0);
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }
 else {
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar17 + -0x10 ), false);
         }

      }

      local_90 = local_c8;
      local_88 = CONCAT44(local_88._4_4_, local_c0);
   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar14 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e0._0_8_ = 0;
         Memory::free_static((void*)( uVar14 + -0x10 ), false);
      }

   }

   local_60 = local_60 & 0xffffffff00000000;
   local_110 = 0;
   local_108 = 0;
   local_e8 = "";
   auVar9._8_8_ = 0;
   auVar9._0_8_ = local_e0._8_8_;
   local_e0 = auVar9 << 0x40;
   String::parse_latin1((StrRange*)&local_108);
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 4);
   local_d0 = 0;
   local_c8 = 0;
   local_e0 = (undefined1[16])0x0;
   if (local_108 == 0) {
      LAB_0010325b:local_c0 = 6;
      StringName::operator =(this, (StringName*)&local_110);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_108);
      local_c0 = 6;
      if (local_d0 != 0x11) goto LAB_0010325b;
      StringName::StringName((StringName*)&local_100, (String*)&local_c8, false);
      if (local_e0._8_8_ == local_100) {
         if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_e0._8_8_ = local_100;
      }

   }

   lVar2 = local_108;
   if (local_108 != 0) {
      LOCK();
      plVar1 = (long*)( local_108 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_108 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar16 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar16 + 8 ) = 0;
   *(undefined1(*) [16])( puVar16 + 2 ) = (undefined1[16])0x0;
   *puVar16 = 0;
   puVar16[6] = 0;
   puVar16[10] = 6;
   *(undefined8*)( puVar16 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar16 + 0xc ) = (undefined1[16])0x0;
   *puVar16 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar16 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar16 + 4 ), this);
   puVar16[6] = local_d0;
   if (*(long*)( puVar16 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar16 + 8 ), (CowData*)&local_c8);
   }

   lVar17 = local_c8;
   puVar16[10] = local_c0;
   lVar2 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar16 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar16 + 0x10 ) = local_78[0];
   *(long*)( puVar16 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar16;
   }

   lVar2 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar16;
   if (lVar2 == 0) {
      *(undefined4**)*local_78[0] = puVar16;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar17 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar14 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_e0._8_8_;
         local_e0 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar14 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_58, 0);
   local_e8 = "EditorTranslationParserPlugin";
   local_100 = 0;
   local_e0._0_8_ = 0x1d;
   String::parse_latin1((StrRange*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   uVar12 = local_100;
   if (local_100 != 0) {
      LOCK();
      plVar1 = (long*)( local_100 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_100 = 0;
         Memory::free_static((void*)( uVar12 + -0x10 ), false);
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

   piVar15 = local_68;
   if (local_68 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_68 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_68 + -2 );
         lVar17 = 0;
         local_68 = (int*)0x0;
         piVar18 = piVar15;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar18] != '\0') {
                  Variant::_clear_internal();
               }

               lVar17 = lVar17 + 1;
               piVar18 = piVar18 + 6;
            }
 while ( lVar2 != lVar17 );
         }

         Memory::free_static(piVar15 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_78);
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

   if (( StringName::configured != '\0' ) && ( local_a8._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar14 = local_a8._0_8_;
   if (local_a8._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_a8._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a8._0_8_ = 0;
         Memory::free_static((void*)( uVar14 + -0x10 ), false);
      }

   }

   pcVar13 = local_b8;
   if (local_b8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar13 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_f0);
   local_a8._0_8_ = 0;
   local_a8._8_8_ = 0;
   local_e8 = "_get_recognized_extensions";
   local_f0 = 0;
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = (undefined1(*) [16])0x0;
   local_68 = (int*)0x0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 0x1a;
   String::parse_latin1((StrRange*)&local_b8);
   local_80 = CONCAT44(local_80._4_4_, 0xc);
   local_110 = 0;
   local_108 = 0;
   local_e8 = "";
   auVar10._8_8_ = 0;
   auVar10._0_8_ = local_e0._8_8_;
   local_e0 = auVar10 << 0x40;
   String::parse_latin1((StrRange*)&local_108);
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 0x22);
   local_d0 = 0;
   local_c8 = 0;
   local_e0._0_8_ = 0;
   local_e0._8_8_ = 0;
   if (local_108 == 0) {
      LAB_0010327b:local_c0 = 6;
      StringName::operator =(this, (StringName*)&local_110);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_108);
      local_c0 = 6;
      if (local_d0 != 0x11) goto LAB_0010327b;
      StringName::StringName((StringName*)&local_100, (String*)&local_c8, false);
      if (local_e0._8_8_ == local_100) {
         if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_e0._8_8_ = local_100;
      }

   }

   lVar2 = local_108;
   if (local_108 != 0) {
      LOCK();
      plVar1 = (long*)( local_108 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_108 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   uVar14 = local_a8._0_8_;
   local_b0 = CONCAT44(local_b0._4_4_, local_e8._0_4_);
   if (local_a8._0_8_ != local_e0._0_8_) {
      if (local_a8._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_a8._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a8._0_8_ = 0;
            Memory::free_static((void*)( uVar14 + -0x10 ), false);
         }

      }

      local_a8._0_8_ = local_e0._0_8_;
      local_e0._0_8_ = 0;
   }

   if (local_a8._8_8_ != local_e0._8_8_) {
      StringName::unref();
      local_a8._8_8_ = local_e0._8_8_;
      local_e0._8_8_ = 0;
   }

   lVar17 = local_90;
   lVar2 = local_c8;
   local_98 = CONCAT44(local_98._4_4_, local_d0);
   if (local_90 == local_c8) {
      local_88 = CONCAT44(local_88._4_4_, local_c0);
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }
 else {
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar17 + -0x10 ), false);
         }

      }

      local_90 = local_c8;
      local_88 = CONCAT44(local_88._4_4_, local_c0);
   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar14 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e0._0_8_ = 0;
         Memory::free_static((void*)( uVar14 + -0x10 ), false);
      }

   }

   local_60 = local_60 & 0xffffffff00000000;
   local_e8 = "EditorTranslationParserPlugin";
   local_100 = 0;
   local_e0._0_8_ = 0x1d;
   String::parse_latin1((StrRange*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   uVar12 = local_100;
   if (local_100 != 0) {
      LOCK();
      plVar1 = (long*)( local_100 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_100 = 0;
         Memory::free_static((void*)( uVar12 + -0x10 ), false);
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

   piVar15 = local_68;
   if (local_68 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_68 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_68 + -2 );
         lVar17 = 0;
         local_68 = (int*)0x0;
         piVar18 = piVar15;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar18] != '\0') {
                  Variant::_clear_internal();
               }

               lVar17 = lVar17 + 1;
               piVar18 = piVar18 + 6;
            }
 while ( lVar2 != lVar17 );
         }

         Memory::free_static(piVar15 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_78);
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

   if (( StringName::configured != '\0' ) && ( local_a8._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar14 = local_a8._0_8_;
   if (local_a8._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_a8._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a8._0_8_ = 0;
         Memory::free_static((void*)( uVar14 + -0x10 ), false);
      }

   }

   pcVar13 = local_b8;
   if (local_b8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar13 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_f0);
   local_b8 = "path";
   local_f0 = 0;
   local_e8 = (char*)0x0;
   local_b0 = 4;
   String::parse_latin1((StrRange*)&local_e8);
   local_b8 = (char*)0x0;
   plVar1 = (long*)( (long)local_e8 + -0x10 );
   if (local_e8 == (char*)0x0) {
      Vector<String>::push_back(local_158, (StrRange*)&local_b8);
   }
 else {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00102595;
         LOCK();
         lVar17 = *plVar1;
         bVar19 = lVar2 == lVar17;
         if (bVar19) {
            *plVar1 = lVar2 + 1;
            lVar17 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar19 );
      if (lVar17 != -1) {
         local_b8 = local_e8;
      }

      LAB_00102595:pcVar13 = local_b8;
      Vector<String>::push_back(local_158);
      if (pcVar13 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)pcVar13 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( (long)local_b8 + -0x10 ), false);
         }

      }

   }

   local_108 = 0;
   local_b8 = "msgids";
   local_b0 = 6;
   String::parse_latin1((StrRange*)&local_108);
   local_b8 = (char*)0x0;
   plVar1 = (long*)( local_108 + -0x10 );
   if (local_108 == 0) {
      Vector<String>::push_back(local_158, (StrRange*)&local_b8);
   }
 else {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_0010263c;
         LOCK();
         lVar17 = *plVar1;
         bVar19 = lVar2 == lVar17;
         if (bVar19) {
            *plVar1 = lVar2 + 1;
            lVar17 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar19 );
      if (lVar17 != -1) {
         local_b8 = (char*)local_108;
      }

      LAB_0010263c:pcVar13 = local_b8;
      Vector<String>::push_back(local_158);
      if (pcVar13 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)pcVar13 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( (long)local_b8 + -0x10 ), false);
         }

      }

   }

   local_100 = 0;
   local_b8 = "msgids_context_plural";
   local_b0 = 0x15;
   String::parse_latin1((StrRange*)&local_100);
   local_b8 = (char*)0x0;
   plVar1 = (long*)( local_100 + -0x10 );
   if (local_100 == 0) {
      Vector<String>::push_back(local_158);
   }
 else {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_001026e3;
         LOCK();
         lVar17 = *plVar1;
         bVar19 = lVar2 == lVar17;
         if (bVar19) {
            *plVar1 = lVar2 + 1;
            lVar17 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar19 );
      if (lVar17 != -1) {
         local_b8 = (char*)local_100;
      }

      LAB_001026e3:pcVar13 = local_b8;
      Vector<String>::push_back(local_158);
      if (pcVar13 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)pcVar13 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( (long)local_b8 + -0x10 ), false);
         }

      }

   }

   uVar12 = local_100;
   if (local_100 != 0) {
      LOCK();
      plVar1 = (long*)( local_100 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_100 = 0;
         Memory::free_static((void*)( uVar12 + -0x10 ), false);
      }

   }

   lVar2 = local_108;
   if (local_108 != 0) {
      LOCK();
      plVar1 = (long*)( local_108 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_108 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   pcVar13 = local_e8;
   if (local_e8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_e8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar13 + -0x10 ), false);
      }

   }

   local_a8 = (undefined1[16])0x0;
   local_e8 = "_parse_file";
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = (undefined1(*) [16])0x0;
   local_68 = (int*)0x0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_b8);
   local_80 = CONCAT44(local_80._4_4_, 8);
   local_110 = 0;
   local_108 = 0;
   local_e8 = "";
   auVar11._8_8_ = 0;
   auVar11._0_8_ = local_e0._8_8_;
   local_e0 = auVar11 << 0x40;
   String::parse_latin1((StrRange*)&local_108);
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 4);
   local_d0 = 0;
   local_c8 = 0;
   local_e0 = (undefined1[16])0x0;
   if (local_108 == 0) {
      LAB_0010320b:local_c0 = 6;
      StringName::operator =(this, (StringName*)&local_110);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_108);
      local_c0 = 6;
      if (local_d0 != 0x11) goto LAB_0010320b;
      StringName::StringName((StringName*)&local_100, (String*)&local_c8, false);
      if (local_e0._8_8_ == local_100) {
         if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_e0._8_8_ = local_100;
      }

   }

   lVar2 = local_108;
   if (local_108 != 0) {
      LOCK();
      plVar1 = (long*)( local_108 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_108 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar16 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar16 + 8 ) = 0;
   *(undefined1(*) [16])( puVar16 + 2 ) = (undefined1[16])0x0;
   *puVar16 = 0;
   puVar16[6] = 0;
   puVar16[10] = 6;
   *(undefined8*)( puVar16 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar16 + 0xc ) = (undefined1[16])0x0;
   *puVar16 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar16 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar16 + 4 ), this);
   puVar16[6] = local_d0;
   if (*(long*)( puVar16 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar16 + 8 ), (CowData*)&local_c8);
   }

   lVar17 = local_c8;
   puVar16[10] = local_c0;
   lVar2 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar16 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar16 + 0x10 ) = local_78[0];
   *(long*)( puVar16 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar16;
   }

   lVar2 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar16;
   if (lVar2 == 0) {
      *(undefined4**)*local_78[0] = puVar16;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar17 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar14 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_e0._8_8_;
         local_e0 = auVar5 << 0x40;
         Memory::free_static((void*)( uVar14 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_58, 0);
   local_110 = 0;
   Variant::get_type_name((StrRange*)&local_108, 4);
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 0x1c);
   local_d0 = 0x1f;
   local_c8 = 0;
   local_e0 = (undefined1[16])0x0;
   if (local_108 == 0) {
      LAB_001031eb:local_c0 = 6;
      StringName::operator =(this, (StringName*)&local_110);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_108);
      local_c0 = 6;
      if (local_d0 != 0x11) goto LAB_001031eb;
      StringName::StringName((StringName*)&local_100, (String*)&local_c8, false);
      if (local_e0._8_8_ == local_100) {
         if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_e0._8_8_ = local_100;
      }

   }

   lVar2 = local_108;
   if (local_108 != 0) {
      LOCK();
      plVar1 = (long*)( local_108 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_108 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar16 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar16 + 8 ) = 0;
   *(undefined1(*) [16])( puVar16 + 2 ) = (undefined1[16])0x0;
   *puVar16 = 0;
   puVar16[6] = 0;
   puVar16[10] = 6;
   *(undefined8*)( puVar16 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar16 + 0xc ) = (undefined1[16])0x0;
   *puVar16 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar16 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar16 + 4 ), this);
   puVar16[6] = local_d0;
   if (*(long*)( puVar16 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar16 + 8 ), (CowData*)&local_c8);
   }

   lVar17 = local_c8;
   puVar16[10] = local_c0;
   lVar2 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar16 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar16 + 0x10 ) = local_78[0];
   *(long*)( puVar16 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar16;
   }

   lVar2 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar16;
   if (lVar2 == 0) {
      *(undefined4**)*local_78[0] = puVar16;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar17 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar14 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar6._8_8_ = 0;
         auVar6._0_8_ = local_e0._8_8_;
         local_e0 = auVar6 << 0x40;
         Memory::free_static((void*)( uVar14 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_58, 0);
   local_110 = 0;
   Variant::get_type_name((StrRange*)&local_108, 0x1c);
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 0x1c);
   local_d0 = 0x1f;
   local_c8 = 0;
   local_e0 = (undefined1[16])0x0;
   if (local_108 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_108);
      local_c0 = 6;
      if (local_d0 == 0x11) {
         StringName::StringName((StringName*)&local_100, (String*)&local_c8, false);
         if (local_e0._8_8_ == local_100) {
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_e0._8_8_ = local_100;
         }

         goto LAB_00102dc6;
      }

   }

   local_c0 = 6;
   StringName::operator =(this, (StringName*)&local_110);
   LAB_00102dc6:lVar2 = local_108;
   if (local_108 != 0) {
      LOCK();
      plVar1 = (long*)( local_108 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_108 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar16 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar16 + 8 ) = 0;
   *(undefined1(*) [16])( puVar16 + 2 ) = (undefined1[16])0x0;
   *puVar16 = 0;
   puVar16[6] = 0;
   puVar16[10] = 6;
   *(undefined8*)( puVar16 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar16 + 0xc ) = (undefined1[16])0x0;
   *puVar16 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar16 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar16 + 4 ), this);
   puVar16[6] = local_d0;
   if (*(long*)( puVar16 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar16 + 8 ), (CowData*)&local_c8);
   }

   lVar17 = local_c8;
   puVar16[10] = local_c0;
   lVar2 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar16 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar16 + 0x10 ) = local_78[0];
   *(long*)( puVar16 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar16;
   }

   lVar2 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar16;
   if (lVar2 == 0) {
      *(undefined4**)*local_78[0] = puVar16;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar17 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar14 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar7._8_8_ = 0;
         auVar7._0_8_ = local_e0._8_8_;
         local_e0 = auVar7 << 0x40;
         Memory::free_static((void*)( uVar14 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_58, 0);
   local_e8 = "EditorTranslationParserPlugin";
   local_100 = 0;
   local_e0._0_8_ = 0x1d;
   String::parse_latin1((StrRange*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_compatibility_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, local_158, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   uVar12 = local_100;
   if (local_100 != 0) {
      LOCK();
      plVar1 = (long*)( local_100 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_100 = 0;
         Memory::free_static((void*)( uVar12 + -0x10 ), false);
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

   piVar15 = local_68;
   if (local_68 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_68 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_68 + -2 );
         lVar17 = 0;
         local_68 = (int*)0x0;
         piVar18 = piVar15;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar18] != '\0') {
                  Variant::_clear_internal();
               }

               lVar17 = lVar17 + 1;
               piVar18 = piVar18 + 6;
            }
 while ( lVar2 != lVar17 );
         }

         Memory::free_static(piVar15 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_78);
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

   if (( StringName::configured != '\0' ) && ( local_a8._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar14 = local_a8._0_8_;
   if (local_a8._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_a8._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar8._8_8_ = 0;
         auVar8._0_8_ = local_a8._8_8_;
         local_a8 = auVar8 << 0x40;
         Memory::free_static((void*)( uVar14 + -0x10 ), false);
      }

   }

   pcVar13 = local_b8;
   if (local_b8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar13 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_f0);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<Vector<String> >::_copy_on_write() [clone .isra.0] */void CowData<Vector<String>>::_copy_on_write(CowData<Vector<String>> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   long lVar4;
   ulong uVar5;
   CowData<String> *this_00;
   long lVar6;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   if (lVar1 * 0x10 != 0) {
      uVar5 = lVar1 * 0x10 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar3 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   this_00 = (CowData<String>*)( puVar3 + 3 );
   lVar6 = 0;
   *puVar3 = 1;
   puVar3[1] = lVar1;
   if (lVar1 != 0) {
      do {
         lVar4 = lVar6 * 0x10 + *(long*)this;
         *(undefined8*)this_00 = 0;
         if (*(long*)( lVar4 + 8 ) != 0) {
            CowData<String>::_ref(this_00, (CowData*)( lVar4 + 8 ));
         }

         lVar6 = lVar6 + 1;
         this_00 = this_00 + 0x10;
      }
 while ( lVar1 != lVar6 );
   }

   _unref(this);
   *(undefined8**)this = puVar3 + 2;
   return;
}
/* Vector<Vector<String> >::push_back(Vector<String>) [clone .isra.0] */void Vector<Vector<String>>::push_back(Vector<Vector<String>> *this, long param_2) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar3 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<Vector<String>>::resize<false>((CowData<Vector<String>>*)( this + 8 ), lVar3);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar2 = -1;
         lVar3 = 0;
      }
 else {
         lVar3 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar2 = lVar3 + -1;
         if (-1 < lVar2) {
            CowData<Vector<String>>::_copy_on_write((CowData<Vector<String>>*)( this + 8 ));
            lVar3 = *(long*)( this + 8 ) + lVar2 * 0x10;
            if (*(long*)( lVar3 + 8 ) == *(long*)( param_2 + 8 )) {
               return;
            }

            CowData<String>::_ref((CowData<String>*)( lVar3 + 8 ), (CowData*)( param_2 + 8 ));
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar2, lVar3, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* EditorTranslationParserPlugin::parse_file(String const&, Vector<Vector<String> >*) */undefined8 EditorTranslationParserPlugin::parse_file(EditorTranslationParserPlugin *this, String *param_1, Vector *param_2) {
   Variant *pVVar1;
   Variant *pVVar2;
   Variant **ppVVar3;
   CowData<char32_t> *this_00;
   undefined1 auVar4[16];
   Variant **ppVVar5;
   char cVar6;
   int iVar7;
   int iVar8;
   undefined4 uVar9;
   long lVar10;
   undefined4 *puVar11;
   long *plVar12;
   code *pcVar13;
   undefined8 uVar14;
   Variant *pVVar15;
   uint uVar16;
   uint uVar17;
   long lVar18;
   long in_FS_OFFSET;
   bool bVar19;
   Array *local_1c0;
   Array local_188[8];
   Array local_180[8];
   Array local_178[8];
   long local_170;
   long local_168;
   long local_160;
   Variant *local_158;
   Variant *local_150;
   Variant *local_148;
   long local_140;
   long local_138;
   undefined4 local_130;
   long local_128;
   undefined4 local_120;
   int local_118;
   undefined4 uStack_114;
   undefined4 local_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   long local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined1(*local_d8)[16];
   undefined8 local_c8;
   ulong local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a0;
   int local_98[8];
   Array *local_78[4];
   Variant **local_58;
   undefined1 auStack_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_188);
   local_58 = (Variant**)0x0;
   local_118 = 0;
   uStack_114 = 0;
   auStack_50 = (undefined1[16])0x0;
   Array::set_typed((uint)local_188, (StringName*)0x22, (Variant*)&local_118);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_114, local_118) != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   local_170 = 0;
   plVar12 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
      do {
         lVar18 = *plVar12;
         if (lVar18 == 0) goto LAB_00103929;
         LOCK();
         lVar10 = *plVar12;
         bVar19 = lVar18 == lVar10;
         if (bVar19) {
            *plVar12 = lVar18 + 1;
            lVar10 = lVar18;
         }

         UNLOCK();
      }
 while ( !bVar19 );
      if (lVar10 != -1) {
         local_170 = *(long*)param_1;
      }

   }

   LAB_00103929:plVar12 = *(long**)( this + 0x98 );
   if (plVar12 == (long*)0x0) {
      LAB_001039ea:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x188] == (EditorTranslationParserPlugin)0x0 )) {
         local_148 = (Variant*)0x1059d9;
         local_108 = (undefined1[16])0x0;
         local_118 = 0;
         uStack_114 = 0;
         local_110 = 0;
         uStack_10c = 0;
         local_f8 = 0;
         local_f0 = 0;
         local_e8 = 6;
         local_e0 = 1;
         local_d8 = (undefined1(*) [16])0x0;
         local_c8 = 0;
         local_c0 = 0;
         local_b0 = 0;
         local_140 = 0xb;
         String::parse_latin1((StrRange*)&local_118);
         local_e0 = CONCAT44(local_e0._4_4_, 8);
         GetTypeInfo<TypedArray<Vector<String>>,void>::get_class_info((GetTypeInfo<TypedArray<Vector<String>>,void>*)&local_148);
         local_110 = local_148._0_4_;
         uVar14 = local_108._0_8_;
         if (local_108._0_8_ != local_140) {
            if (local_108._0_8_ != 0) {
               LOCK();
               plVar12 = (long*)( local_108._0_8_ + -0x10 );
               *plVar12 = *plVar12 + -1;
               UNLOCK();
               if (*plVar12 == 0) {
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = local_108._8_8_;
                  local_108 = auVar4 << 0x40;
                  Memory::free_static((void*)( uVar14 + -0x10 ), false);
               }

            }

            local_108._0_8_ = local_140;
            local_140 = 0;
         }

         if (local_108._8_8_ != local_138) {
            StringName::unref();
            lVar18 = local_138;
            local_138 = 0;
            local_108._8_8_ = lVar18;
         }

         lVar10 = local_f0;
         lVar18 = local_128;
         local_f8 = CONCAT44(local_f8._4_4_, local_130);
         if (local_f0 == local_128) {
            local_e8 = CONCAT44(local_e8._4_4_, local_120);
            if (local_f0 != 0) {
               LOCK();
               plVar12 = (long*)( local_f0 + -0x10 );
               *plVar12 = *plVar12 + -1;
               UNLOCK();
               if (*plVar12 == 0) {
                  local_128 = 0;
                  Memory::free_static((void*)( lVar18 + -0x10 ), false);
               }

            }

         }
 else {
            if (local_f0 != 0) {
               LOCK();
               plVar12 = (long*)( local_f0 + -0x10 );
               *plVar12 = *plVar12 + -1;
               UNLOCK();
               if (*plVar12 == 0) {
                  local_f0 = 0;
                  Memory::free_static((void*)( lVar10 + -0x10 ), false);
               }

            }

            local_f0 = local_128;
            local_e8 = CONCAT44(local_e8._4_4_, local_120);
         }

         if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
            StringName::unref();
         }

         lVar18 = local_140;
         if (local_140 != 0) {
            LOCK();
            plVar12 = (long*)( local_140 + -0x10 );
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
               local_140 = 0;
               Memory::free_static((void*)( lVar18 + -0x10 ), false);
            }

         }

         local_c0 = local_c0 & 0xffffffff00000000;
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
         if (local_d8 == (undefined1(*) [16])0x0) {
            local_d8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined4*)local_d8[1] = 0;
            *local_d8 = (undefined1[16])0x0;
         }

         puVar11 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined8*)( puVar11 + 8 ) = 0;
         *(undefined1(*) [16])( puVar11 + 2 ) = (undefined1[16])0x0;
         *puVar11 = 0;
         puVar11[6] = 0;
         puVar11[10] = 6;
         *(undefined8*)( puVar11 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar11 + 0xc ) = (undefined1[16])0x0;
         *puVar11 = local_148._0_4_;
         if (local_140 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar11 + 2 ), (CowData*)&local_140);
         }

         StringName::operator =((StringName*)( puVar11 + 4 ), (StringName*)&local_138);
         puVar11[6] = local_130;
         if (*(long*)( puVar11 + 8 ) != local_128) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar11 + 8 ), (CowData*)&local_128);
         }

         lVar10 = local_128;
         puVar11[10] = local_120;
         lVar18 = *(long*)( *local_d8 + 8 );
         *(undefined8*)( puVar11 + 0xc ) = 0;
         *(undefined1(**) [16])( puVar11 + 0x10 ) = local_d8;
         *(long*)( puVar11 + 0xe ) = lVar18;
         if (lVar18 != 0) {
            *(undefined4**)( lVar18 + 0x30 ) = puVar11;
         }

         lVar18 = *(long*)*local_d8;
         *(undefined4**)( *local_d8 + 8 ) = puVar11;
         if (lVar18 == 0) {
            *(undefined4**)*local_d8 = puVar11;
         }

         *(int*)local_d8[1] = *(int*)local_d8[1] + 1;
         if (local_128 != 0) {
            LOCK();
            plVar12 = (long*)( local_128 + -0x10 );
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
               local_128 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
            StringName::unref();
         }

         lVar18 = local_140;
         if (local_140 != 0) {
            LOCK();
            plVar12 = (long*)( local_140 + -0x10 );
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
               local_140 = 0;
               Memory::free_static((void*)( lVar18 + -0x10 ), false);
            }

         }

         Vector<int>::push_back(local_b8, 0);
         uVar9 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 400 ) = 0;
         lVar18 = *(long*)( this + 8 );
         pcVar13 = *(code**)( lVar18 + 0xd8 );
         if (( ( pcVar13 == (code*)0x0 ) || ( *(long*)( lVar18 + 0xe0 ) == 0 ) ) && ( pcVar13 = *(code**)( lVar18 + 0xd0 ) ),pcVar13 == (code*)0x0) {
            local_140 = 0x1d;
            local_168 = 0;
            local_148 = (Variant*)0x105a54;
            String::parse_latin1((StrRange*)&local_168);
            StringName::StringName((StringName*)&local_158, (String*)&local_168, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_158);
            if (local_140 == 0) {
               lVar18 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_140);
               if (StringName::configured != '\0') goto LAB_001050da;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
               LAB_001050fc:lVar18 = *(long*)( this + 8 );
               pcVar13 = *(code**)( lVar18 + 200 );
               if (( ( pcVar13 == (code*)0x0 ) || ( *(long*)( lVar18 + 0xe0 ) == 0 ) ) && ( pcVar13 = *(code**)( lVar18 + 0xc0 ) ),pcVar13 == (code*)0x0) goto LAB_0010493c;
               uVar14 = ( *pcVar13 )(*(undefined8*)( lVar18 + 0xa0 ));
               *(undefined8*)( this + 400 ) = uVar14;
            }
 else {
               lVar18 = *(long*)( local_140 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_140);
               if (StringName::configured != '\0') {
                  LAB_001050da:if (local_158 != (Variant*)0x0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
               if (lVar18 == 0) goto LAB_001050fc;
            }

            lVar18 = *(long*)( this + 8 );
         }
 else {
            uVar14 = ( *pcVar13 )(*(undefined8*)( lVar18 + 0xa0 ), this + 0x180, uVar9);
            *(undefined8*)( this + 400 ) = uVar14;
            lVar18 = *(long*)( this + 8 );
         }

         LAB_0010493c:if (*(char*)( lVar18 + 0x29 ) != '\0') {
            plVar12 = (long*)operator_new(0x18, "");
            *plVar12 = (long)( this + 400 );
            plVar12[1] = (long)( this + 0x188 );
            plVar12[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar12;
         }

         this[0x188] = (EditorTranslationParserPlugin)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_118);
      }

      lVar18 = local_170;
      local_1c0 = (Array*)&local_168;
      if (*(long*)( this + 400 ) == 0) {
         if (local_170 != 0) {
            LOCK();
            plVar12 = (long*)( local_170 + -0x10 );
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (*plVar12 == 0) {
               local_170 = 0;
               Memory::free_static((void*)( lVar18 + -0x10 ), false);
            }

         }

         Array::Array(local_180);
         local_58 = (Variant**)0x0;
         local_118 = 0;
         uStack_114 = 0;
         auStack_50 = (undefined1[16])0x0;
         uVar16 = (uint)local_180;
         Array::set_typed(uVar16, (StringName*)0x4, (Variant*)&local_118);
         if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_114, local_118) != 0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
         }

         Array::Array(local_178);
         local_58 = (Variant**)0x0;
         local_118 = 0;
         uStack_114 = 0;
         auStack_50 = (undefined1[16])0x0;
         uVar17 = (uint)local_178;
         Array::set_typed(uVar17, (StringName*)0x1c, (Variant*)&local_118);
         if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_114, local_118) != 0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
         }

         Array::Array(local_1c0, local_178);
         Array::Array((Array*)&local_170, local_180);
         plVar12 = (long*)( *(long*)param_1 + -0x10 );
         if (*(long*)param_1 == 0) {
            if (*(long*)( this + 8 ) != 0) {
               LAB_001049b7:if (this[0x1b8] == (EditorTranslationParserPlugin)0x0) {
                  pVVar15 = (Variant*)0x0;
                  goto LAB_001049c8;
               }

               goto LAB_00103eec;
            }

            if (*(long*)( this + 0x1c0 ) == 0) goto LAB_00103bcd;
            local_158 = (Variant*)0x0;
            pVVar15 = (Variant*)0x0;
            LAB_00104068:Array::Array((Array*)&local_148, (Array*)&local_170);
            Array::Array((Array*)&local_118, local_1c0);
            local_58 = &local_158;
            auStack_50._8_8_ = (Array*)&local_118;
            auStack_50._0_8_ = (Array*)&local_148;
            if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
               ( **(code**)( this + 0x1c0 ) )(*(undefined8*)( this + 0x10 ), (Variant*)&local_58, 0);
            }
 else {
               ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1b0, *(undefined8*)( this + 0x1c0 ));
            }

            Array::~Array((Array*)&local_118);
            Array::~Array((Array*)&local_148);
            pVVar1 = local_158;
            if (local_158 != (Variant*)0x0) {
               LOCK();
               pVVar2 = local_158 + -0x10;
               *(long*)pVVar2 = *(long*)pVVar2 + -1;
               UNLOCK();
               if (*(long*)pVVar2 == 0) {
                  local_158 = (Variant*)0x0;
                  Memory::free_static(pVVar1 + -0x10, false);
               }

            }

            if (pVVar15 == (Variant*)0x0) {
               LAB_0010413a:Array::~Array((Array*)&local_170);
               Array::~Array(local_1c0);
            }
 else {
               pVVar15 = pVVar15 + -0x10;
               LOCK();
               *(long*)pVVar15 = *(long*)pVVar15 + -1;
               UNLOCK();
               if (*(long*)pVVar15 != 0) goto LAB_0010413a;
               Memory::free_static(pVVar15, false);
               Array::~Array((Array*)&local_170);
               Array::~Array(local_1c0);
            }

            for (iVar8 = 0; iVar7 = Array::size(),iVar8 < iVar7; iVar8 = iVar8 + 1) {
               Array::operator [](uVar16);
               Variant::operator_cast_to_String((Variant*)&local_58);
               local_110 = 0;
               uStack_10c = 0;
               iVar7 = CowData<String>::resize<false>((CowData<String>*)&local_110, 1);
               if (iVar7 == 0) {
                  if (CONCAT44(uStack_10c, local_110) == 0) {
                     lVar18 = 0;
                  }
 else {
                     lVar18 = *(long*)( CONCAT44(uStack_10c, local_110) + -8 );
                     if (0 < lVar18) {
                        CowData<String>::_copy_on_write((CowData<String>*)&local_110);
                        if (local_58 != *(Variant***)CONCAT44(uStack_10c, local_110)) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)CONCAT44(uStack_10c, local_110), (CowData*)&local_58);
                        }

                        goto LAB_001041e5;
                     }

                  }

                  _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar18, "p_index", "size()", "", false, false);
               }

               LAB_001041e5:Vector<Vector<String>>::push_back((Vector<Vector<String>>*)param_2);
               CowData<String>::_unref((CowData<String>*)&local_110);
               if (local_58 != (Variant**)0x0) {
                  LOCK();
                  ppVVar3 = local_58 + -2;
                  *ppVVar3 = *ppVVar3 + -1;
                  ppVVar5 = local_58;
                  UNLOCK();
                  if (*ppVVar3 == (Variant*)0x0) {
                     local_58 = (Variant**)0x0;
                     Memory::free_static(ppVVar5 + -2, false);
                  }

               }

            }

            iVar7 = 0;
            iVar8 = Array::size();
            if (0 < iVar8) {
               do {
                  Array::operator [](uVar17);
                  Variant::operator_cast_to_Array((Variant*)&local_148);
                  iVar8 = Array::size();
                  if (iVar8 != 3) {
                     uVar14 = 0x1e;
                     _err_print_error("parse_file", "editor/editor_translation_parser.cpp", 0x40, "Condition \"arr.size() != 3\" is true. Returning: ERR_INVALID_DATA", "Array entries written into `msgids_context_plural` in `_parse_file` method should have the form [\"message\", \"context\", \"plural message\"]", 0, 0);
                     Array::~Array((Array*)&local_148);
                     goto LAB_00103c0b;
                  }

                  iVar8 = (int)(Array*)&local_148;
                  Array::operator [](iVar8);
                  Variant::operator_cast_to_String((Variant*)&local_58);
                  Array::operator [](iVar8);
                  Variant::operator_cast_to_String((Variant*)auStack_50);
                  Array::operator [](iVar8);
                  Variant::operator_cast_to_String((Variant*)( auStack_50 + 8 ));
                  local_110 = 0;
                  uStack_10c = 0;
                  iVar8 = CowData<String>::resize<false>((CowData<String>*)&local_110, 3);
                  if (iVar8 == 0) {
                     lVar18 = 0;
                     pVVar15 = (Variant*)&local_58;
                     do {
                        if (CONCAT44(uStack_10c, local_110) == 0) {
                           lVar10 = 0;
                           LAB_001043e3:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar18, lVar10, "p_index", "size()", "", false, false);
                        }
 else {
                           lVar10 = *(long*)( CONCAT44(uStack_10c, local_110) + -8 );
                           if (lVar10 <= lVar18) goto LAB_001043e3;
                           CowData<String>::_copy_on_write((CowData<String>*)&local_110);
                           this_00 = (CowData<char32_t>*)( CONCAT44(uStack_10c, local_110) + lVar18 * 8 );
                           if (*(long*)this_00 != *(long*)pVVar15) {
                              CowData<char32_t>::_ref(this_00, (CowData*)pVVar15);
                           }

                        }

                        lVar18 = lVar18 + 1;
                        pVVar15 = (Variant*)( (CowData*)pVVar15 + 8 );
                     }
 while ( lVar18 != 3 );
                  }

                  Vector<Vector<String>>::push_back((Vector<Vector<String>>*)param_2);
                  pVVar15 = (Variant*)local_40;
                  CowData<String>::_unref((CowData<String>*)&local_110);
                  do {
                     pVVar1 = pVVar15 + -8;
                     pVVar15 = pVVar15 + -8;
                     if (*(long*)pVVar1 != 0) {
                        LOCK();
                        plVar12 = (long*)( *(long*)pVVar1 + -0x10 );
                        *plVar12 = *plVar12 + -1;
                        UNLOCK();
                        if (*plVar12 == 0) {
                           lVar18 = *(long*)pVVar15;
                           *(undefined8*)pVVar15 = 0;
                           Memory::free_static((void*)( lVar18 + -0x10 ), false);
                        }

                     }

                  }
 while ( pVVar15 != (Variant*)&local_58 );
                  iVar7 = iVar7 + 1;
                  Array::~Array((Array*)&local_148);
                  iVar8 = Array::size();
               }
 while ( iVar7 < iVar8 );
            }

            uVar14 = 0;
         }
 else {
            do {
               lVar18 = *plVar12;
               if (lVar18 == 0) goto LAB_00103ee0;
               LOCK();
               lVar10 = *plVar12;
               bVar19 = lVar18 == lVar10;
               if (bVar19) {
                  *plVar12 = lVar18 + 1;
                  lVar10 = lVar18;
               }

               UNLOCK();
            }
 while ( !bVar19 );
            if (lVar10 == -1) {
               LAB_00103ee0:if (*(long*)( this + 8 ) != 0) goto LAB_001049b7;
               LAB_00103eec:if (*(long*)( this + 0x1c0 ) != 0) goto LAB_00103f07;
            }
 else {
               pVVar15 = *(Variant**)param_1;
               if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1b8] == (EditorTranslationParserPlugin)0x0 )) {
                  LAB_001049c8:local_148 = (Variant*)0x1059d9;
                  local_108 = (undefined1[16])0x0;
                  local_118 = 0;
                  uStack_114 = 0;
                  local_110 = 0;
                  uStack_10c = 0;
                  local_f8 = 0;
                  local_f0 = 0;
                  local_e8 = 6;
                  local_e0 = 1;
                  local_d8 = (undefined1(*) [16])0x0;
                  local_c8 = 0;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_140 = 0xb;
                  String::parse_latin1((StrRange*)&local_118);
                  local_e0 = CONCAT44(local_e0._4_4_, 8);
                  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
                  if (local_d8 == (undefined1(*) [16])0x0) {
                     local_d8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined4*)local_d8[1] = 0;
                     *local_d8 = (undefined1[16])0x0;
                  }

                  puVar11 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
                  *(undefined8*)( puVar11 + 8 ) = 0;
                  *(undefined1(*) [16])( puVar11 + 2 ) = (undefined1[16])0x0;
                  *puVar11 = 0;
                  puVar11[6] = 0;
                  puVar11[10] = 6;
                  *(undefined8*)( puVar11 + 0x10 ) = 0;
                  *(undefined1(*) [16])( puVar11 + 0xc ) = (undefined1[16])0x0;
                  *puVar11 = local_148._0_4_;
                  if (local_140 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( puVar11 + 2 ), (CowData*)&local_140);
                  }

                  StringName::operator =((StringName*)( puVar11 + 4 ), (StringName*)&local_138);
                  puVar11[6] = local_130;
                  if (*(long*)( puVar11 + 8 ) != local_128) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( puVar11 + 8 ), (CowData*)&local_128);
                  }

                  lVar10 = local_128;
                  puVar11[10] = local_120;
                  lVar18 = *(long*)( *local_d8 + 8 );
                  *(undefined8*)( puVar11 + 0xc ) = 0;
                  *(undefined1(**) [16])( puVar11 + 0x10 ) = local_d8;
                  *(long*)( puVar11 + 0xe ) = lVar18;
                  if (lVar18 != 0) {
                     *(undefined4**)( lVar18 + 0x30 ) = puVar11;
                  }

                  lVar18 = *(long*)*local_d8;
                  *(undefined4**)( *local_d8 + 8 ) = puVar11;
                  if (lVar18 == 0) {
                     *(undefined4**)*local_d8 = puVar11;
                  }

                  *(int*)local_d8[1] = *(int*)local_d8[1] + 1;
                  if (local_128 != 0) {
                     LOCK();
                     plVar12 = (long*)( local_128 + -0x10 );
                     *plVar12 = *plVar12 + -1;
                     UNLOCK();
                     if (*plVar12 == 0) {
                        local_128 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
                     StringName::unref();
                  }

                  lVar18 = local_140;
                  if (local_140 != 0) {
                     LOCK();
                     plVar12 = (long*)( local_140 + -0x10 );
                     *plVar12 = *plVar12 + -1;
                     UNLOCK();
                     if (*plVar12 == 0) {
                        local_140 = 0;
                        Memory::free_static((void*)( lVar18 + -0x10 ), false);
                     }

                  }

                  Vector<int>::push_back(local_b8, 0);
                  GetTypeInfo<TypedArray<String>,void>::get_class_info((GetTypeInfo<TypedArray<String>,void>*)&local_148);
                  if (local_d8 == (undefined1(*) [16])0x0) {
                     local_d8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined4*)local_d8[1] = 0;
                     *local_d8 = (undefined1[16])0x0;
                  }

                  puVar11 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
                  *(undefined8*)( puVar11 + 8 ) = 0;
                  *(undefined1(*) [16])( puVar11 + 2 ) = (undefined1[16])0x0;
                  *puVar11 = 0;
                  puVar11[6] = 0;
                  puVar11[10] = 6;
                  *(undefined8*)( puVar11 + 0x10 ) = 0;
                  *(undefined1(*) [16])( puVar11 + 0xc ) = (undefined1[16])0x0;
                  *puVar11 = local_148._0_4_;
                  if (local_140 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( puVar11 + 2 ), (CowData*)&local_140);
                  }

                  StringName::operator =((StringName*)( puVar11 + 4 ), (StringName*)&local_138);
                  puVar11[6] = local_130;
                  if (*(long*)( puVar11 + 8 ) != local_128) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( puVar11 + 8 ), (CowData*)&local_128);
                  }

                  lVar10 = local_128;
                  puVar11[10] = local_120;
                  lVar18 = *(long*)( *local_d8 + 8 );
                  *(undefined8*)( puVar11 + 0xc ) = 0;
                  *(undefined1(**) [16])( puVar11 + 0x10 ) = local_d8;
                  *(long*)( puVar11 + 0xe ) = lVar18;
                  if (lVar18 != 0) {
                     *(undefined4**)( lVar18 + 0x30 ) = puVar11;
                  }

                  lVar18 = *(long*)*local_d8;
                  *(undefined4**)( *local_d8 + 8 ) = puVar11;
                  if (lVar18 == 0) {
                     *(undefined4**)*local_d8 = puVar11;
                  }

                  *(int*)local_d8[1] = *(int*)local_d8[1] + 1;
                  if (local_128 != 0) {
                     LOCK();
                     plVar12 = (long*)( local_128 + -0x10 );
                     *plVar12 = *plVar12 + -1;
                     UNLOCK();
                     if (*plVar12 == 0) {
                        local_128 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
                     StringName::unref();
                  }

                  lVar18 = local_140;
                  if (local_140 != 0) {
                     LOCK();
                     plVar12 = (long*)( local_140 + -0x10 );
                     *plVar12 = *plVar12 + -1;
                     UNLOCK();
                     if (*plVar12 == 0) {
                        local_140 = 0;
                        Memory::free_static((void*)( lVar18 + -0x10 ), false);
                     }

                  }

                  Vector<int>::push_back(local_b8, 0);
                  GetTypeInfo<TypedArray<Array>,void>::get_class_info((GetTypeInfo<TypedArray<Array>,void>*)&local_148);
                  if (local_d8 == (undefined1(*) [16])0x0) {
                     local_d8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined4*)local_d8[1] = 0;
                     *local_d8 = (undefined1[16])0x0;
                  }

                  puVar11 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
                  *(undefined8*)( puVar11 + 8 ) = 0;
                  *(undefined1(*) [16])( puVar11 + 2 ) = (undefined1[16])0x0;
                  *puVar11 = 0;
                  puVar11[6] = 0;
                  puVar11[10] = 6;
                  *(undefined8*)( puVar11 + 0x10 ) = 0;
                  *(undefined1(*) [16])( puVar11 + 0xc ) = (undefined1[16])0x0;
                  *puVar11 = local_148._0_4_;
                  if (local_140 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( puVar11 + 2 ), (CowData*)&local_140);
                  }

                  StringName::operator =((StringName*)( puVar11 + 4 ), (StringName*)&local_138);
                  puVar11[6] = local_130;
                  if (*(long*)( puVar11 + 8 ) != local_128) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( puVar11 + 8 ), (CowData*)&local_128);
                  }

                  lVar10 = local_128;
                  puVar11[10] = local_120;
                  lVar18 = *(long*)( *local_d8 + 8 );
                  *(undefined8*)( puVar11 + 0xc ) = 0;
                  *(undefined1(**) [16])( puVar11 + 0x10 ) = local_d8;
                  *(long*)( puVar11 + 0xe ) = lVar18;
                  if (lVar18 != 0) {
                     *(undefined4**)( lVar18 + 0x30 ) = puVar11;
                  }

                  lVar18 = *(long*)*local_d8;
                  *(undefined4**)( *local_d8 + 8 ) = puVar11;
                  if (lVar18 == 0) {
                     *(undefined4**)*local_d8 = puVar11;
                  }

                  *(int*)local_d8[1] = *(int*)local_d8[1] + 1;
                  if (local_128 != 0) {
                     LOCK();
                     plVar12 = (long*)( local_128 + -0x10 );
                     *plVar12 = *plVar12 + -1;
                     UNLOCK();
                     if (*plVar12 == 0) {
                        local_128 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
                     StringName::unref();
                  }

                  lVar18 = local_140;
                  if (local_140 != 0) {
                     LOCK();
                     plVar12 = (long*)( local_140 + -0x10 );
                     *plVar12 = *plVar12 + -1;
                     UNLOCK();
                     if (*plVar12 == 0) {
                        local_140 = 0;
                        Memory::free_static((void*)( lVar18 + -0x10 ), false);
                     }

                  }

                  Vector<int>::push_back(local_b8, 0);
                  uVar9 = MethodInfo::get_compatibility_hash();
                  *(undefined8*)( this + 0x1c0 ) = 0;
                  lVar18 = *(long*)( this + 8 );
                  pcVar13 = *(code**)( lVar18 + 0xd8 );
                  if (( ( pcVar13 == (code*)0x0 ) || ( *(long*)( lVar18 + 0xe0 ) == 0 ) ) && ( pcVar13 = *(code**)( lVar18 + 0xd0 ) ),pcVar13 == (code*)0x0) {
                     pcVar13 = *(code**)( lVar18 + 200 );
                     if (( ( pcVar13 != (code*)0x0 ) && ( *(long*)( lVar18 + 0xe0 ) != 0 ) ) || ( pcVar13 = *(code**)( lVar18 + 0xc0 ) ),pcVar13 != (code*)0x0) {
                        uVar14 = ( *pcVar13 )(*(undefined8*)( lVar18 + 0xa0 ));
                        *(undefined8*)( this + 0x1c0 ) = uVar14;
                        lVar18 = *(long*)( this + 8 );
                     }

                  }
 else {
                     uVar14 = ( *pcVar13 )(*(undefined8*)( lVar18 + 0xa0 ), this + 0x1b0, uVar9);
                     *(undefined8*)( this + 0x1c0 ) = uVar14;
                     lVar18 = *(long*)( this + 8 );
                  }

                  if (*(char*)( lVar18 + 0x29 ) != '\0') {
                     plVar12 = (long*)operator_new(0x18, "");
                     *plVar12 = (long)( this + 0x1c0 );
                     plVar12[1] = (long)( this + 0x1b8 );
                     plVar12[2] = *(long*)( this + 0x168 );
                     *(long**)( this + 0x168 ) = plVar12;
                  }

                  this[0x1b8] = (EditorTranslationParserPlugin)0x1;
                  MethodInfo::~MethodInfo((MethodInfo*)&local_118);
               }

               if (*(long*)( this + 0x1c0 ) != 0) {
                  local_158 = (Variant*)0x0;
                  if (pVVar15 != (Variant*)0x0) {
                     pVVar1 = pVVar15 + -0x10;
                     do {
                        lVar18 = *(long*)pVVar1;
                        if (lVar18 == 0) goto LAB_00104068;
                        LOCK();
                        lVar10 = *(long*)pVVar1;
                        bVar19 = lVar18 == lVar10;
                        if (bVar19) {
                           *(long*)pVVar1 = lVar18 + 1;
                           lVar10 = lVar18;
                        }

                        UNLOCK();
                     }
 while ( !bVar19 );
                     if (lVar10 != -1) {
                        local_158 = pVVar15;
                     }

                     goto LAB_00104068;
                  }

                  LAB_00103f07:local_158 = (Variant*)0x0;
                  pVVar15 = (Variant*)0x0;
                  goto LAB_00104068;
               }

               if (pVVar15 != (Variant*)0x0) {
                  pVVar15 = pVVar15 + -0x10;
                  LOCK();
                  *(long*)pVVar15 = *(long*)pVVar15 + -1;
                  UNLOCK();
                  if (*(long*)pVVar15 == 0) {
                     Memory::free_static(pVVar15, false);
                  }

               }

            }

            LAB_00103bcd:uVar14 = 2;
            Array::~Array((Array*)&local_170);
            Array::~Array(local_1c0);
            _err_print_error("parse_file", "editor/editor_translation_parser.cpp", 0x48, "Custom translation parser plugin\'s \"_parse_file\" is undefined.", 0, 0);
         }

         LAB_00103c0b:Array::~Array(local_178);
         Array::~Array(local_180);
         goto LAB_00103c1d;
      }

      local_168 = 0;
      plVar12 = (long*)( local_170 + -0x10 );
      if (local_170 != 0) {
         do {
            lVar18 = *plVar12;
            if (lVar18 == 0) goto LAB_00103c8d;
            LOCK();
            lVar10 = *plVar12;
            bVar19 = lVar18 == lVar10;
            if (bVar19) {
               *plVar12 = lVar18 + 1;
               lVar10 = lVar18;
            }

            UNLOCK();
         }
 while ( !bVar19 );
         if (lVar10 != -1) {
            local_168 = local_170;
         }

      }

      LAB_00103c8d:local_78[0] = local_1c0;
      Array::Array((Array*)&local_158);
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 400 ) )(*(undefined8*)( this + 0x10 ), local_78, (Array*)&local_158);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x180, *(undefined8*)( this + 400 ), local_78, (Array*)&local_158);
      }

      Array::Array((Array*)&local_118);
      local_58 = (Variant**)0x0;
      local_148 = (Variant*)0x0;
      auStack_50 = (undefined1[16])0x0;
      Array::set_typed((uint)(Array*)&local_118, (StringName*)0x22, (Variant*)&local_148);
      if (( StringName::configured != '\0' ) && ( local_148 != (Variant*)0x0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      cVar6 = Array::is_same_typed((Array*)&local_118);
      if (cVar6 == '\0') {
         Array::assign((Array*)&local_118);
      }
 else {
         Array::_ref((Array*)&local_118);
      }

      Array::operator =(local_188, (Array*)&local_118);
      Array::~Array((Array*)&local_118);
      Array::~Array((Array*)&local_158);
      lVar18 = local_168;
      if (local_168 != 0) {
         LOCK();
         plVar12 = (long*)( local_168 + -0x10 );
         *plVar12 = *plVar12 + -1;
         UNLOCK();
         if (*plVar12 == 0) {
            local_168 = 0;
            Memory::free_static((void*)( lVar18 + -0x10 ), false);
         }

      }

   }
 else {
      local_118 = 0;
      uStack_114 = 0;
      local_110 = 0;
      Variant::Variant((Variant*)local_98, (String*)&local_170);
      local_a0 = (Variant*)local_98;
      ( **(code**)( *plVar12 + 0x60 ) )(local_78, plVar12, this + 0x180, &local_a0, 1, (Array*)&local_118);
      if (local_118 != 0) {
         if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001039ea;
      }

      Variant::operator_cast_to_Array((Variant*)&local_158);
      Array::Array((Array*)&local_148);
      local_58 = (Variant**)0x0;
      local_168 = 0;
      auStack_50 = (undefined1[16])0x0;
      Array::set_typed((uint)(Array*)&local_148, (StringName*)0x22, (Variant*)&local_168);
      if (( StringName::configured != '\0' ) && ( local_168 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      cVar6 = Array::is_same_typed((Array*)&local_148);
      if (cVar6 == '\0') {
         Array::assign((Array*)&local_148);
      }
 else {
         Array::_ref((Array*)&local_148);
      }

      Array::~Array((Array*)&local_158);
      Array::operator =(local_188, (Array*)&local_148);
      Array::~Array((Array*)&local_148);
      if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   lVar18 = local_170;
   local_1c0 = (Array*)&local_168;
   if (local_170 != 0) {
      LOCK();
      plVar12 = (long*)( local_170 + -0x10 );
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
         local_170 = 0;
         Memory::free_static((void*)( lVar18 + -0x10 ), false);
      }

   }

   Array::begin();
   Array::end();
   if (local_148 != local_158) {
      do {
         if (local_150 != (Variant*)0x0) {
            Variant::operator =(local_150, local_158);
         }

         Variant::operator_cast_to_Vector((Variant*)local_1c0);
         local_110 = 0;
         uStack_10c = 0;
         if (local_160 != 0) {
            CowData<String>::_ref((CowData<String>*)&local_110, (CowData*)&local_160);
         }

         Vector<Vector<String>>::push_back((Vector<Vector<String>>*)param_2, (Array*)&local_118);
         CowData<String>::_unref((CowData<String>*)&local_110);
         CowData<String>::_unref((CowData<String>*)&local_160);
         local_158 = local_158 + 0x18;
      }
 while ( local_158 != local_148 );
   }

   uVar14 = 0;
   LAB_00103c1d:Array::~Array(local_188);
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar14;
}
/* EditorTranslationParser::remove_parser(Ref<EditorTranslationParserPlugin> const&,
   EditorTranslationParser::ParserType) */void EditorTranslationParser::remove_parser(EditorTranslationParser *this, long *param_1, int param_3) {
   long lVar1;
   long lVar2;
   if (param_3 == 0) {
      lVar1 = *(long*)( this + 8 );
      if (( lVar1 != 0 ) && ( 0 < *(long*)( lVar1 + -8 ) )) {
         lVar2 = 0;
         while (*param_1 != *(long*)( lVar1 + lVar2 * 8 )) {
            lVar2 = lVar2 + 1;
            if (*(long*)( lVar1 + -8 ) == lVar2) {
               return;
            }

         }
;
         LAB_001053df:Vector<Ref<EditorTranslationParserPlugin>>::remove_at((Vector<Ref<EditorTranslationParserPlugin>>*)this, lVar2);
         return;
      }

   }
 else if (param_3 == 1) {
      lVar1 = *(long*)( this + 0x18 );
      if (( lVar1 != 0 ) && ( 0 < *(long*)( lVar1 + -8 ) )) {
         lVar2 = 0;
         while (*param_1 != *(long*)( lVar1 + lVar2 * 8 )) {
            lVar2 = lVar2 + 1;
            if (*(long*)( lVar1 + -8 ) == lVar2) {
               return;
            }

         }
;
         this =
         this + 0x10;
         goto LAB_001053df;
      }

   }

   return;
}
/* Vector<Ref<EditorTranslationParserPlugin> >::push_back(Ref<EditorTranslationParserPlugin>) [clone
   .isra.0] */void Vector<Ref<EditorTranslationParserPlugin>>::push_back(Vector<Ref<EditorTranslationParserPlugin>> *this, long *param_2) {
   long *plVar1;
   Object *pOVar2;
   Object *pOVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   if (*(long*)( this + 8 ) == 0) {
      lVar6 = 1;
   }
 else {
      lVar6 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar5 = CowData<Ref<EditorTranslationParserPlugin>>::resize<false>((CowData<Ref<EditorTranslationParserPlugin>>*)( this + 8 ), lVar6);
   if (iVar5 != 0) {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }

   if (*(long*)( this + 8 ) == 0) {
      lVar7 = -1;
      lVar6 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)( this + 8 ) + -8 );
      lVar7 = lVar6 + -1;
      if (-1 < lVar7) {
         CowData<Ref<EditorTranslationParserPlugin>>::_copy_on_write((CowData<Ref<EditorTranslationParserPlugin>>*)( this + 8 ));
         pOVar2 = (Object*)*param_2;
         plVar1 = (long*)( *(long*)( this + 8 ) + lVar7 * 8 );
         pOVar3 = (Object*)*plVar1;
         if (pOVar2 == pOVar3) {
            return;
         }

         *plVar1 = (long)pOVar2;
         if (( pOVar2 != (Object*)0x0 ) && ( cVar4 = RefCounted::reference() ),cVar4 == '\0') {
            *plVar1 = 0;
         }

         if (pOVar3 == (Object*)0x0) {
            return;
         }

         cVar4 = RefCounted::unreference();
         if (cVar4 == '\0') {
            return;
         }

         cVar4 = predelete_handler(pOVar3);
         if (cVar4 == '\0') {
            return;
         }

         ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
         Memory::free_static(pOVar3, false);
         return;
      }

   }

   _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar6, "p_index", "size()", "", false, false);
   return;
}
/* EditorTranslationParser::add_parser(Ref<EditorTranslationParserPlugin> const&,
   EditorTranslationParser::ParserType) */void EditorTranslationParser::add_parser(EditorTranslationParser *this, undefined8 *param_1, int param_3) {
   Object *pOVar1;
   char cVar2;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) {
      LAB_001055ec:pOVar1 = (Object*)*param_1;
      if (( pOVar1 == (Object*)0x0 ) || ( local_28 = pOVar1 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
         local_28 = (Object*)0x0;
         Vector<Ref<EditorTranslationParserPlugin>>::push_back((Vector<Ref<EditorTranslationParserPlugin>>*)this, &local_28);
      }
 else {
         Vector<Ref<EditorTranslationParserPlugin>>::push_back((Vector<Ref<EditorTranslationParserPlugin>>*)this);
         cVar2 = RefCounted::unreference();
         if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static(pOVar1, false);
               return;
            }

            goto LAB_0010567c;
         }

      }

   }
 else if (param_3 == 1) {
      this =
      this + 0x10;
      goto LAB_001055ec;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010567c:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x1099, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1099, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* EditorTranslationParserPlugin::is_class_ptr(void*) const */uint EditorTranslationParserPlugin::is_class_ptr(EditorTranslationParserPlugin *this, void *param_1) {
   return (uint)CONCAT71(0x1099, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1099, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1099, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* EditorTranslationParserPlugin::_getv(StringName const&, Variant&) const */undefined8 EditorTranslationParserPlugin::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorTranslationParserPlugin::_setv(StringName const&, Variant const&) */undefined8 EditorTranslationParserPlugin::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorTranslationParserPlugin::_validate_propertyv(PropertyInfo&) const */void EditorTranslationParserPlugin::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* EditorTranslationParserPlugin::_property_can_revertv(StringName const&) const */undefined8 EditorTranslationParserPlugin::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorTranslationParserPlugin::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorTranslationParserPlugin::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorTranslationParserPlugin::_notificationv(int, bool) */void EditorTranslationParserPlugin::_notificationv(int param_1, bool param_2) {
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001096a8;
   Object::~Object((Object*)this);
   return;
}
/* EditorTranslationParserPlugin::~EditorTranslationParserPlugin() */void EditorTranslationParserPlugin::~EditorTranslationParserPlugin(EditorTranslationParserPlugin *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_00109808;
   if (bVar1) {
      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001058bf;
      }

      if (*(long*)( this + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001058bf;
      }

      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001058bf:*(undefined***)this = &PTR__initialize_classv_001096a8;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001096a8;
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
/* CowData<Ref<EditorTranslationParserPlugin> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Ref<EditorTranslationParserPlugin>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* EditorTranslationParserPlugin::_bind_methods() [clone .cold] */void EditorTranslationParserPlugin::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Vector<String> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector<String>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* EditorTranslationParserPlugin::_get_class_namev() const */undefined8 *EditorTranslationParserPlugin::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00105ab3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00105ab3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorTranslationParserPlugin");
         goto LAB_00105b1e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorTranslationParserPlugin");
   LAB_00105b1e:return &_get_class_namev();
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
         LAB_00105b93:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00105b93;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_00105bfe;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_00105bfe:return &_get_class_namev();
}
/* EditorTranslationParserPlugin::~EditorTranslationParserPlugin() */void EditorTranslationParserPlugin::~EditorTranslationParserPlugin(EditorTranslationParserPlugin *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_00109808;
   if (bVar1) {
      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105caf;
      }

      if (*(long*)( this + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105caf;
      }

      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00105caf:*(undefined***)this = &PTR__initialize_classv_001096a8;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1c8);
   return;
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
/* EditorTranslationParserPlugin::get_class() const */void EditorTranslationParserPlugin::get_class(void) {
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
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
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
      local_38 = "RefCounted";
      local_50 = 0;
      local_30 = 10;
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

      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized = '\x01'
      ;;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
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
      LAB_00106188:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00106188;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x001061a6;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x001061a6:if (lVar2 == 0) {
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
/* EditorTranslationParserPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void EditorTranslationParserPlugin::_get_property_listv(EditorTranslationParserPlugin *this, List *param_1, bool param_2) {
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
   local_78 = "EditorTranslationParserPlugin";
   local_70 = 0x1d;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorTranslationParserPlugin";
   local_98 = 0;
   local_70 = 0x1d;
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
      LAB_00106588:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00106588;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001065a5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001065a5:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "EditorTranslationParserPlugin", false);
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
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_001068cf;
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

      LAB_001068cf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00106983;
   }

   cVar6 = String::operator ==(param_1, "RefCounted");
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
                     if (lVar5 == 0) goto LAB_00106a33;
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

         LAB_00106a33:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00106983;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00106983:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorTranslationParserPlugin::is_class(String const&) const */undefined8 EditorTranslationParserPlugin::is_class(EditorTranslationParserPlugin *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_00106b5f;
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

      LAB_00106b5f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00106c13;
   }

   cVar5 = String::operator ==(param_1, "EditorTranslationParserPlugin");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00106c13:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<String, void>::get_class_info() */GetTypeInfo<String,void> * __thiscall
GetTypeInfo<String,void>::get_class_info(GetTypeInfo<String,void> *this){
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
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
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

         goto joined_r0x00106dac;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00106dac:local_58 = lVar2;
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
/* GetTypeInfo<Vector<String>, void>::get_class_info() */GetTypeInfo<Vector<String>,void> * __thiscall
GetTypeInfo<Vector<String>,void>::get_class_info(GetTypeInfo<Vector<String>,void> *this){
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
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x22;
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

         goto joined_r0x00106f2c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00106f2c:local_58 = lVar2;
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
/* GetTypeInfo<TypedArray<String>, void>::get_class_info() */GetTypeInfo<TypedArray<String>,void> * __thiscall
GetTypeInfo<TypedArray<String>,void>::get_class_info(GetTypeInfo<TypedArray<String>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0;
   Variant::get_type_name(&local_38, 4);
   *(undefined4*)this = 0x1c;
   *(undefined4*)( this + 0x18 ) = 0x1f;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_38 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_38);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_28, (String*)( this + 0x20 ), false);
         if (*(long*)( this + 0x10 ) == local_28) {
            lVar2 = local_38;
            if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
               StringName::unref();
               lVar2 = local_38;
            }

         }
 else {
            StringName::unref();
            *(long*)( this + 0x10 ) = local_28;
            lVar2 = local_38;
         }

         goto joined_r0x0010708c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_30);
   lVar2 = local_38;
   joined_r0x0010708c:local_38 = lVar2;
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<TypedArray<Array>, void>::get_class_info() */GetTypeInfo<TypedArray<Array>,void> * __thiscall
GetTypeInfo<TypedArray<Array>,void>::get_class_info(GetTypeInfo<TypedArray<Array>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0;
   Variant::get_type_name(&local_38, 0x1c);
   *(undefined4*)this = 0x1c;
   *(undefined4*)( this + 0x18 ) = 0x1f;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_38 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_38);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_28, (String*)( this + 0x20 ), false);
         if (*(long*)( this + 0x10 ) == local_28) {
            lVar2 = local_38;
            if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
               StringName::unref();
               lVar2 = local_38;
            }

         }
 else {
            StringName::unref();
            *(long*)( this + 0x10 ) = local_28;
            lVar2 = local_38;
         }

         goto joined_r0x001071ec;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_30);
   lVar2 = local_38;
   joined_r0x001071ec:local_38 = lVar2;
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<TypedArray<Vector<String> >, void>::get_class_info() */GetTypeInfo<TypedArray<Vector<String>>,void> * __thiscall
GetTypeInfo<TypedArray<Vector<String>>,void>::get_class_info
          (GetTypeInfo<TypedArray<Vector<String>>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0;
   Variant::get_type_name(&local_38, 0x22);
   *(undefined4*)this = 0x1c;
   *(undefined4*)( this + 0x18 ) = 0x1f;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_38 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_38);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_28, (String*)( this + 0x20 ), false);
         if (*(long*)( this + 0x10 ) == local_28) {
            lVar2 = local_38;
            if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
               StringName::unref();
               lVar2 = local_38;
            }

         }
 else {
            StringName::unref();
            *(long*)( this + 0x10 ) = local_28;
            lVar2 = local_38;
         }

         goto joined_r0x0010734c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_30);
   lVar2 = local_38;
   joined_r0x0010734c:local_38 = lVar2;
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
      return this;
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
/* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return;
   }

   do {
      plVar2 = (long*)*plVar5;
      if (plVar2 == (long*)0x0) {
         if ((int)plVar5[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if ((long*)plVar2[3] == plVar5) {
         lVar4 = plVar2[1];
         lVar3 = plVar2[2];
         *plVar5 = lVar4;
         if (plVar2 == (long*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 8 ) = lVar4;
            lVar4 = plVar2[1];
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x10 ) = lVar3;
         }

         if (*plVar2 != 0) {
            LOCK();
            plVar1 = (long*)( *plVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *plVar2;
               *plVar2 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         Memory::free_static(plVar2, false);
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
      if (*in_RSI != 0) goto LAB_00107b4c;
   }
 else {
      iVar37 = *(int*)( (long)in_RSI + 0x24 );
      LAB_00107b4c:if (iVar37 != 0) {
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
                     goto LAB_00107ec9;
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

   if ((float)uVar29 * __LC20 < (float)( iVar37 + 1 )) {
      if ((int)in_RSI[4] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         iVar37 = *(int*)( (long)in_RSI + 0x24 );
         lVar33 = *in_RSI;
         iVar31 = -1;
         goto LAB_00107ec9;
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
   LAB_00107ec9:*(int*)( param_1 + 0xc ) = iVar31;
   *(long*)param_1 = lVar33;
   *(int*)( param_1 + 8 ) = iVar37;
   return param_1;
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
      LAB_00108600:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_00108600;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_001084d9:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_001084d9;
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
      goto LAB_00108656;
   }

   if (lVar10 == lVar7) {
      LAB_0010857f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00108656:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0010856a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0010857f;
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
   LAB_0010856a:puVar9[-1] = param_1;
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
/* CowData<Ref<EditorTranslationParserPlugin> >::_unref() */void CowData<Ref<EditorTranslationParserPlugin>>::_unref(CowData<Ref<EditorTranslationParserPlugin>> *this) {
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
      LAB_001086fd:do {
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
                  goto LAB_001086fd;
               }

            }

         }

         lVar7 = lVar7 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar2 != lVar7 );
   }

   Memory::free_static(plVar1 + -2, false);
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
      LAB_00108a00:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00108a00;
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
            goto LAB_00108911;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00108911:puVar7[-1] = param_1;
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
/* EditorTranslationParserPlugin::_initialize_classv() */void EditorTranslationParserPlugin::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() != '\0') goto LAB_00108bb9;
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

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_58;
      if (local_58 == 0) {
         LAB_00108cca:if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
            LAB_00108cda:RefCounted::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00108cca;
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_00108cda;
      }

      RefCounted::initialize_class() {
         StringName::unref();
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

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
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

      _bind_methods();
      initialize_class() {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* CowData<Vector<String> >::_unref() */
   void CowData<Vector<String>>::_unref(CowData<Vector<String>> *this) {
      long *plVar1;
      long lVar2;
      long lVar3;
      code *pcVar4;
      long lVar5;
      CowData<String> *this_00;
      if (*(long*)this == 0) {
         return;
      }

      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         if (lVar2 != 0) {
            lVar3 = *(long*)( lVar2 + -8 );
            *(undefined8*)this = 0;
            if (lVar3 != 0) {
               lVar5 = 0;
               this_00 = (CowData<String>*)( lVar2 + 8 );
               do {
                  lVar5 = lVar5 + 1;
                  CowData<String>::_unref(this_00);
                  this_00 = this_00 + 0x10;
               }
 while ( lVar3 != lVar5 );
            }

            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            return;
         }

         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      *(undefined8*)this = 0;
      return;
   }

   /* CowData<Vector<String> >::_realloc(long) */
   undefined8 CowData<Vector<String>>::_realloc(CowData<Vector<String>> *this, long param_1) {
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Error CowData<Vector<String> >::resize<false>(long) */
   undefined8 CowData<Vector<String>>::resize<false>(CowData<Vector<String>> *this, long param_1) {
      code *pcVar1;
      undefined8 *puVar2;
      undefined8 *puVar3;
      undefined8 uVar4;
      long lVar5;
      undefined8 *puVar6;
      long lVar7;
      ulong uVar8;
      ulong uVar9;
      long lVar10;
      undefined8 *puVar11;
      if (param_1 < 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         return 0x1f;
      }

      if (*(long*)this == 0) {
         if (param_1 == 0) {
            return 0;
         }

         _copy_on_write(this);
         lVar5 = 0;
         lVar7 = 0;
      }
 else {
         lVar5 = *(long*)( *(long*)this + -8 );
         if (param_1 == lVar5) {
            return 0;
         }

         if (param_1 == 0) {
            _unref(this);
            return 0;
         }

         _copy_on_write(this);
         lVar7 = lVar5 * 0x10;
         if (lVar7 != 0) {
            uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
            uVar8 = uVar8 | uVar8 >> 2;
            uVar8 = uVar8 | uVar8 >> 4;
            uVar8 = uVar8 | uVar8 >> 8;
            uVar8 = uVar8 | uVar8 >> 0x10;
            lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
         }

      }

      if (param_1 * 0x10 == 0) {
         LAB_001090f0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         return 6;
      }

      uVar8 = param_1 * 0x10 - 1;
      uVar8 = uVar8 >> 1 | uVar8;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      uVar8 = uVar8 | uVar8 >> 0x20;
      lVar10 = uVar8 + 1;
      if (lVar10 == 0) goto LAB_001090f0;
      uVar9 = param_1;
      if (param_1 <= lVar5) {
         while (lVar5 = *(long*)this,lVar5 != 0) {
            if (*(ulong*)( lVar5 + -8 ) <= uVar9) {
               if (lVar10 != lVar7) {
                  uVar4 = _realloc(this, lVar10);
                  if ((int)uVar4 != 0) {
                     return uVar4;
                  }

                  lVar5 = *(long*)this;
                  if (lVar5 == 0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar1 = (code*)invalidInstructionException();
                     ( *pcVar1 )();
                  }

               }

               *(long*)( lVar5 + -8 ) = param_1;
               return 0;
            }

            CowData<String>::_unref((CowData<String>*)( lVar5 + 8 + uVar9 * 0x10 ));
            uVar9 = uVar9 + 1;
         }
;
         goto LAB_00109146;
      }

      if (lVar10 == lVar7) {
         LAB_00109063:puVar6 = *(undefined8**)this;
         if (puVar6 == (undefined8*)0x0) {
            LAB_00109146:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         lVar5 = puVar6[-1];
         if (param_1 <= lVar5) goto LAB_00108fc9;
      }
 else {
         if (lVar5 != 0) {
            uVar4 = _realloc(this, lVar10);
            if ((int)uVar4 != 0) {
               return uVar4;
            }

            goto LAB_00109063;
         }

         puVar2 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
         if (puVar2 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar6 = puVar2 + 2;
         *puVar2 = 1;
         puVar2[1] = 0;
         *(undefined8**)this = puVar6;
         lVar5 = 0;
      }

      puVar11 = puVar6 + param_1 * 2;
      puVar2 = puVar6 + lVar5 * 2;
      if (( (int)puVar11 - (int)puVar2 & 0x10U ) != 0) {
         puVar2[1] = 0;
         puVar2 = puVar2 + 2;
         if (puVar2 == puVar11) goto LAB_00108fc9;
      }

      do {
         puVar2[1] = 0;
         puVar3 = puVar2 + 4;
         puVar2[3] = 0;
         puVar2 = puVar3;
      }
 while ( puVar3 != puVar11 );
      LAB_00108fc9:puVar6[-1] = param_1;
      return 0;
   }

   /* CowData<Ref<EditorTranslationParserPlugin> >::_realloc(long) */
   undefined8 CowData<Ref<EditorTranslationParserPlugin>>::_realloc(CowData<Ref<EditorTranslationParserPlugin>> *this, long param_1) {
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Error CowData<Ref<EditorTranslationParserPlugin> >::resize<false>(long) */
   undefined8 CowData<Ref<EditorTranslationParserPlugin>>::resize<false>(CowData<Ref<EditorTranslationParserPlugin>> *this, long param_1) {
      long *plVar1;
      Object *pOVar2;
      code *pcVar3;
      char cVar4;
      undefined8 uVar5;
      undefined8 *puVar6;
      long lVar7;
      long lVar8;
      ulong uVar9;
      undefined8 *puVar10;
      long lVar11;
      if (param_1 < 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         return 0x1f;
      }

      if (*(long*)this == 0) {
         if (param_1 == 0) {
            return 0;
         }

         _copy_on_write(this);
         lVar7 = 0;
         lVar8 = 0;
      }
 else {
         lVar7 = *(long*)( *(long*)this + -8 );
         if (param_1 == lVar7) {
            return 0;
         }

         if (param_1 == 0) {
            _unref(this);
            return 0;
         }

         _copy_on_write(this);
         lVar8 = lVar7 * 8;
         if (lVar8 != 0) {
            uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
            uVar9 = uVar9 | uVar9 >> 2;
            uVar9 = uVar9 | uVar9 >> 4;
            uVar9 = uVar9 | uVar9 >> 8;
            uVar9 = uVar9 | uVar9 >> 0x10;
            lVar8 = ( uVar9 | uVar9 >> 0x20 ) + 1;
         }

      }

      if (param_1 * 8 == 0) {
         LAB_00109480:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         return 6;
      }

      uVar9 = param_1 * 8 - 1;
      uVar9 = uVar9 >> 1 | uVar9;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      uVar9 = uVar9 | uVar9 >> 0x20;
      lVar11 = uVar9 + 1;
      if (lVar11 == 0) goto LAB_00109480;
      if (param_1 <= lVar7) {
         lVar7 = *(long*)this;
         uVar9 = param_1;
         while (lVar7 != 0) {
            if (*(ulong*)( lVar7 + -8 ) <= uVar9) {
               LAB_0010932a:if (lVar11 != lVar8) {
                  uVar5 = _realloc(this, lVar11);
                  if ((int)uVar5 != 0) {
                     return uVar5;
                  }

                  lVar7 = *(long*)this;
                  if (lVar7 == 0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

               }

               *(long*)( lVar7 + -8 ) = param_1;
               return 0;
            }

            while (plVar1 = (long*)( lVar7 + uVar9 * 8 ),*plVar1 == 0) {
               uVar9 = uVar9 + 1;
               if (*(ulong*)( lVar7 + -8 ) <= uVar9) goto LAB_0010932a;
            }
;
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               pOVar2 = (Object*)*plVar1;
               cVar4 = predelete_handler(pOVar2);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

            uVar9 = uVar9 + 1;
            lVar7 = *(long*)this;
         }
;
         goto LAB_001092f0;
      }

      if (lVar11 == lVar8) {
         LAB_001093fb:puVar10 = *(undefined8**)this;
         if (puVar10 == (undefined8*)0x0) {
            LAB_001092f0:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar7 = puVar10[-1];
         if (param_1 <= lVar7) goto LAB_001093db;
      }
 else {
         if (lVar7 != 0) {
            uVar5 = _realloc(this, lVar11);
            if ((int)uVar5 != 0) {
               return uVar5;
            }

            goto LAB_001093fb;
         }

         puVar6 = (undefined8*)Memory::alloc_static(uVar9 + 0x11, false);
         if (puVar6 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar10 = puVar6 + 2;
         *puVar6 = 1;
         puVar6[1] = 0;
         *(undefined8**)this = puVar10;
         lVar7 = 0;
      }

      memset(puVar10 + lVar7, 0, ( param_1 - lVar7 ) * 8);
      LAB_001093db:puVar10[-1] = param_1;
      return 0;
   }

   /* Vector<Ref<EditorTranslationParserPlugin> >::remove_at(long) */
   void Vector<Ref<EditorTranslationParserPlugin>>::remove_at(Vector<Ref<EditorTranslationParserPlugin>> *this, long param_1) {
      Object *pOVar1;
      Object *pOVar2;
      char cVar3;
      long lVar4;
      long lVar5;
      lVar4 = *(long*)( this + 8 );
      if (param_1 < 0) {
         if (lVar4 != 0) {
            lVar4 = *(long*)( lVar4 + -8 );
            goto LAB_001095d1;
         }

      }
 else if (lVar4 != 0) {
         lVar4 = *(long*)( lVar4 + -8 );
         if (param_1 < lVar4) {
            CowData<Ref<EditorTranslationParserPlugin>>::_copy_on_write((CowData<Ref<EditorTranslationParserPlugin>>*)( this + 8 ));
            lVar4 = *(long*)( this + 8 );
            if (lVar4 == 0) {
               lVar5 = -1;
            }
 else {
               lVar5 = *(long*)( lVar4 + -8 ) + -1;
               if (param_1 < lVar5) {
                  do {
                     while (true) {
                        pOVar1 = *(Object**)( lVar4 + 8 + param_1 * 8 );
                        pOVar2 = *(Object**)( lVar4 + param_1 * 8 );
                        if (pOVar1 != pOVar2) break;
                        LAB_00109540:param_1 = param_1 + 1;
                        if (param_1 == lVar5) goto LAB_001095ae;
                     }
;
                     *(Object**)( lVar4 + param_1 * 8 ) = pOVar1;
                     if (( pOVar1 != (Object*)0x0 ) && ( cVar3 = RefCounted::reference() ),cVar3 == '\0') {
                        *(undefined8*)( lVar4 + param_1 * 8 ) = 0;
                     }

                     if (( ( pOVar2 == (Object*)0x0 ) || ( cVar3 = RefCounted::unreference() ),cVar3 == '\0' )) goto LAB_00109540;
                     param_1 = param_1 + 1;
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }
 while ( param_1 != lVar5 );
               }

            }

            LAB_001095ae:CowData<Ref<EditorTranslationParserPlugin>>::resize<false>((CowData<Ref<EditorTranslationParserPlugin>>*)( this + 8 ), lVar5);
            return;
         }

         goto LAB_001095d1;
      }

      lVar4 = 0;
      LAB_001095d1:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, param_1, lVar4, "p_index", "size()", "", false, false);
      return;
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* List<String, DefaultAllocator>::~List() */
   void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
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
   /* EditorTranslationParserPlugin::~EditorTranslationParserPlugin() */
   void EditorTranslationParserPlugin::~EditorTranslationParserPlugin(EditorTranslationParserPlugin *this) {
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
   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

}


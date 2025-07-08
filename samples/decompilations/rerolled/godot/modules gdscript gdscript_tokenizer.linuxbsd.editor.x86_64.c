/* GDScriptTokenizerText::set_cursor_position(int, int) */void GDScriptTokenizerText::set_cursor_position(GDScriptTokenizerText *this, int param_1, int param_2) {
   *(int*)( this + 0x28 ) = param_1;
   *(int*)( this + 0x2c ) = param_2;
   return;
}
/* GDScriptTokenizerText::set_multiline_mode(bool) */void GDScriptTokenizerText::set_multiline_mode(GDScriptTokenizerText *this, bool param_1) {
   this[0x51] = (GDScriptTokenizerText)param_1;
   return;
}
/* GDScriptTokenizerText::get_cursor_line() const */undefined4 GDScriptTokenizerText::get_cursor_line(GDScriptTokenizerText *this) {
   return *(undefined4*)( this + 0x28 );
}
/* GDScriptTokenizerText::get_cursor_column() const */undefined4 GDScriptTokenizerText::get_cursor_column(GDScriptTokenizerText *this) {
   return *(undefined4*)( this + 0x2c );
}
/* GDScriptTokenizerText::is_past_cursor() const */undefined4 GDScriptTokenizerText::is_past_cursor(GDScriptTokenizerText *this) {
   undefined4 uVar1;
   uVar1 = 0;
   if (( *(int*)( this + 0x28 ) <= *(int*)( this + 0x20 ) ) && ( uVar1 = 1 * (int*)( this + 0x20 ) <= *(int*)( this + 0x28 ) )) {
      uVar1 = CONCAT31(( int3 )(( uint ) * (int*)( this + 0x2c ) >> 8), *(int*)( this + 0x2c ) <= *(int*)( this + 0x24 ));
   }

   return uVar1;
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
/* List<char32_t, DefaultAllocator>::push_back(char32_t const&) [clone .isra.0] */void List<char32_t,DefaultAllocator>::push_back(List<char32_t,DefaultAllocator> *this, wchar32 *param_1) {
   wchar32 wVar1;
   long *plVar2;
   long lVar3;
   wchar32 *pwVar4;
   undefined1(*pauVar5)[16];
   if (*(long*)this == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }

   pwVar4 = (wchar32*)operator_new(0x20, DefaultAllocator::alloc);
   wVar1 = *param_1;
   pwVar4[2] = L'\0';
   pwVar4[3] = L'\0';
   *pwVar4 = wVar1;
   plVar2 = *(long**)this;
   lVar3 = plVar2[1];
   *(long**)( pwVar4 + 6 ) = plVar2;
   *(long*)( pwVar4 + 4 ) = lVar3;
   if (lVar3 != 0) {
      *(wchar32**)( lVar3 + 8 ) = pwVar4;
   }

   plVar2[1] = (long)pwVar4;
   if (*plVar2 != 0) {
      *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      return;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   *plVar2 = (long)pwVar4;
   return;
}
/* GDScriptTokenizerText::push_expression_indented_block() */void GDScriptTokenizerText::push_expression_indented_block(GDScriptTokenizerText *this) {
   undefined4 uVar1;
   long *plVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined1(*pauVar5)[16];
   undefined4 *puVar6;
   undefined4 *puVar7;
   if (*(long*)( this + 0x108 ) == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( this + 0x108 ) = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   pauVar4 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
   *pauVar4 = (undefined1[16])0x0;
   pauVar4[1] = (undefined1[16])0x0;
   if (( *(undefined8**)( this + 0x100 ) != (undefined8*)0x0 ) && ( puVar7 = (undefined4*)**(undefined8**)( this + 0x100 ) ),puVar7 != (undefined4*)0x0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])*pauVar4 = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
      do {
         while (true) {
            puVar6 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
            uVar1 = *puVar7;
            *(undefined8*)( puVar6 + 2 ) = 0;
            *puVar6 = uVar1;
            plVar2 = *(long**)*pauVar4;
            lVar3 = plVar2[1];
            *(long**)( puVar6 + 6 ) = plVar2;
            *(long*)( puVar6 + 4 ) = lVar3;
            if (lVar3 != 0) {
               *(undefined4**)( lVar3 + 8 ) = puVar6;
            }

            plVar2[1] = (long)puVar6;
            if (*plVar2 != 0) break;
            puVar7 = *(undefined4**)( puVar7 + 2 );
            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            *plVar2 = (long)puVar6;
            if (puVar7 == (undefined4*)0x0) goto LAB_001002fa;
         }
;
         puVar7 = *(undefined4**)( puVar7 + 2 );
         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      }
 while ( puVar7 != (undefined4*)0x0 );
   }

   LAB_001002fa:plVar2 = *(long**)( this + 0x108 );
   lVar3 = plVar2[1];
   *(undefined8*)( *pauVar4 + 8 ) = 0;
   *(long**)( pauVar4[1] + 8 ) = plVar2;
   *(long*)pauVar4[1] = lVar3;
   if (lVar3 != 0) {
      *(undefined1(**) [16])( lVar3 + 8 ) = pauVar4;
   }

   plVar2[1] = (long)pauVar4;
   if (*plVar2 != 0) {
      *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      return;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   *plVar2 = (long)pauVar4;
   return;
}
/* GDScriptTokenizerText::pop_expression_indented_block() */void GDScriptTokenizerText::pop_expression_indented_block(GDScriptTokenizerText *this) {
   undefined4 uVar1;
   undefined8 *puVar2;
   void *pvVar3;
   long lVar4;
   long *plVar5;
   undefined1(*pauVar6)[16];
   undefined4 *puVar7;
   long lVar8;
   undefined4 *puVar9;
   long *plVar10;
   long *plVar11;
   lVar8 = *(long*)( this + 0x108 );
   if (( lVar8 == 0 ) || ( *(int*)( lVar8 + 0x10 ) == 0 )) {
      _err_print_error("pop_expression_indented_block", "modules/gdscript/gdscript_tokenizer.cpp", 0x128, "Condition \"indent_stack_stack.is_empty()\" is true.", 0, 0);
      return;
   }

   plVar10 = *(long**)( this + 0x100 );
   puVar2 = *(undefined8**)( lVar8 + 8 );
   if (plVar10 != (long*)0x0) {
      do {
         pvVar3 = (void*)*plVar10;
         if (pvVar3 == (void*)0x0) goto LAB_00100430;
         if (*(long**)( (long)pvVar3 + 0x18 ) == plVar10) {
            lVar8 = *(long*)( (long)pvVar3 + 8 );
            lVar4 = *(long*)( (long)pvVar3 + 0x10 );
            *plVar10 = lVar8;
            if (pvVar3 == (void*)plVar10[1]) {
               plVar10[1] = lVar4;
            }

            if (lVar4 != 0) {
               *(long*)( lVar4 + 8 ) = lVar8;
               lVar8 = *(long*)( (long)pvVar3 + 8 );
            }

            if (lVar8 != 0) {
               *(long*)( lVar8 + 0x10 ) = lVar4;
            }

            Memory::free_static(pvVar3, false);
            *(int*)( plVar10 + 2 ) = (int)plVar10[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar10 = *(long**)( this + 0x100 );
      }
 while ( (int)plVar10[2] != 0 );
      Memory::free_static(plVar10, false);
      *(undefined8*)( this + 0x100 ) = 0;
   }

   plVar10 = (long*)0x0;
   LAB_00100430:if (( (undefined8*)*puVar2 != (undefined8*)0x0 ) && ( puVar9 = *(undefined4**)*puVar2 ),puVar9 != (undefined4*)0x0) {
      if (plVar10 == (long*)0x0) {
         pauVar6 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( this + 0x100 ) = pauVar6;
         *(undefined4*)pauVar6[1] = 0;
         *pauVar6 = (undefined1[16])0x0;
      }

      do {
         while (true) {
            puVar7 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
            uVar1 = *puVar9;
            *(undefined8*)( puVar7 + 2 ) = 0;
            *puVar7 = uVar1;
            plVar10 = *(long**)( this + 0x100 );
            lVar8 = plVar10[1];
            *(long**)( puVar7 + 6 ) = plVar10;
            *(long*)( puVar7 + 4 ) = lVar8;
            if (lVar8 != 0) {
               *(undefined4**)( lVar8 + 8 ) = puVar7;
            }

            plVar10[1] = (long)puVar7;
            if (*plVar10 == 0) break;
            puVar9 = *(undefined4**)( puVar9 + 2 );
            *(int*)( plVar10 + 2 ) = (int)plVar10[2] + 1;
            if (puVar9 == (undefined4*)0x0) goto LAB_001004dc;
         }
;
         puVar9 = *(undefined4**)( puVar9 + 2 );
         *(int*)( plVar10 + 2 ) = (int)plVar10[2] + 1;
         *plVar10 = (long)puVar7;
      }
 while ( puVar9 != (undefined4*)0x0 );
   }

   LAB_001004dc:plVar10 = *(long**)( this + 0x108 );
   if (( plVar10 != (long*)0x0 ) && ( plVar5 = (long*)plVar10[1] ),plVar5 != (long*)0x0) {
      if (plVar10 == (long*)plVar5[3]) {
         lVar8 = plVar5[1];
         if (plVar5 == (long*)*plVar10) {
            *plVar10 = lVar8;
         }

         lVar4 = plVar5[2];
         plVar10[1] = lVar4;
         if (lVar4 != 0) {
            *(long*)( lVar4 + 8 ) = lVar8;
            lVar8 = plVar5[1];
         }

         if (lVar8 != 0) {
            *(long*)( lVar8 + 0x10 ) = lVar4;
         }

         plVar11 = (long*)*plVar5;
         if (plVar11 != (long*)0x0) {
            do {
               pvVar3 = (void*)*plVar11;
               if (pvVar3 == (void*)0x0) {
                  if ((int)plVar11[2] != 0) {
                     _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                     goto LAB_001005a0;
                  }

                  break;
               }

               if (*(long**)( (long)pvVar3 + 0x18 ) == plVar11) {
                  lVar8 = *(long*)( (long)pvVar3 + 8 );
                  lVar4 = *(long*)( (long)pvVar3 + 0x10 );
                  *plVar11 = lVar8;
                  if (pvVar3 == (void*)plVar11[1]) {
                     plVar11[1] = lVar4;
                  }

                  if (lVar4 != 0) {
                     *(long*)( lVar4 + 8 ) = lVar8;
                     lVar8 = *(long*)( (long)pvVar3 + 8 );
                  }

                  if (lVar8 != 0) {
                     *(long*)( lVar8 + 0x10 ) = lVar4;
                  }

                  Memory::free_static(pvVar3, false);
                  *(int*)( plVar11 + 2 ) = (int)plVar11[2] + -1;
               }
 else {
                  _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
               }

               plVar11 = (long*)*plVar5;
            }
 while ( (int)plVar11[2] != 0 );
            Memory::free_static(plVar11, false);
         }

         LAB_001005a0:Memory::free_static(plVar5, false);
         *(int*)( plVar10 + 2 ) = (int)plVar10[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      if (*(int*)( (long)*(void**)( this + 0x108 ) + 0x10 ) == 0) {
         Memory::free_static(*(void**)( this + 0x108 ), false);
         *(undefined8*)( this + 0x108 ) = 0;
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
/* List<GDScriptTokenizer::Token, DefaultAllocator>::push_back(GDScriptTokenizer::Token const&)
   [clone .isra.0] */void List<GDScriptTokenizer::Token,DefaultAllocator>::push_back(List<GDScriptTokenizer::Token,DefaultAllocator> *this, Token *param_1) {
   undefined8 uVar1;
   long *plVar2;
   undefined4 *puVar3;
   undefined1(*pauVar4)[16];
   if (*(long*)this == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar3 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined1(*) [16])( puVar3 + 4 ) = (undefined1[16])0x0;
   *puVar3 = 0;
   *(undefined1(*) [16])( puVar3 + 8 ) = (undefined1[16])0x0;
   puVar3[2] = 0;
   *(undefined8*)( puVar3 + 0xc ) = 0;
   *(undefined8*)( puVar3 + 0xe ) = 0xffffffff;
   *(undefined1(*) [16])( puVar3 + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar3 + 0x14 ) = (undefined1[16])0x0;
   *puVar3 = *(undefined4*)param_1;
   Variant::operator =((Variant*)( puVar3 + 2 ), (Variant*)( param_1 + 8 ));
   for (int i = 0; i < 8; i++) {
      puVar3[( i + 8 )] = *(undefined4*)( param_1 + ( 4*i + 32 ) );
   }

   if (*(long*)( puVar3 + 0x10 ) != *(long*)( param_1 + 0x40 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 0x10 ), (CowData*)( param_1 + 0x40 ));
   }

   uVar1 = *(undefined8*)( *(long*)this + 8 );
   *(long*)( puVar3 + 0x16 ) = *(long*)this;
   plVar2 = *(long**)this;
   *(undefined8*)( puVar3 + 0x12 ) = 0;
   *(undefined8*)( puVar3 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar3;
   }

   plVar2[1] = (long)puVar3;
   if (*plVar2 != 0) {
      *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      return;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   *plVar2 = (long)puVar3;
   return;
}
/* GDScriptTokenizer::Token::get_name() const */char *__thiscallGDScriptTokenizer::Token::get_name(Token *this) {
   uint uVar1;
   uVar1 = *(uint*)this;
   if (uVar1 < 99) {
      return *(char**)( token_names + (long)(int)uVar1 * 8 );
   }

   _err_print_index_error("get_name", "modules/gdscript/gdscript_tokenizer.cpp", 0xa3, (ulong)uVar1, 99, "type", "TK_MAX", "Using token type out of the enum.", false, false);
   return "<error>";
}
/* GDScriptTokenizer::Token::can_precede_bin_op() const */ulong GDScriptTokenizer::Token::can_precede_bin_op(void) {
   uint uVar1;
   undefined8 in_RDX;
   ulong uVar2;
   uint *in_RDI;
   uVar1 = *in_RDI;
   uVar2 = CONCAT71(( int7 )((ulong)in_RDX >> 8), 1 < uVar1);
   if (( 3 < uVar1 ) && ( uVar2 = CONCAT71(0x1e002a, ( 0x1e002a01UL >> ( ( ulong )(uVar1 - 0x41) & 0x3f ) & 1 ) != 0) ),0x1c < uVar1 - 0x41) {
      uVar2 = 0;
   }

   return uVar2 & 0xffffffff;
}
/* GDScriptTokenizer::Token::is_identifier() const */ulong GDScriptTokenizer::Token::is_identifier(void) {
   uint uVar1;
   undefined8 in_RDX;
   ulong uVar2;
   uint *in_RDI;
   uVar1 = *in_RDI;
   if (uVar1 < 0x33) {
      uVar2 = 1;
      if (uVar1 < 0x31) {
         uVar2 = ( ulong )(uVar1 == 2);
      }

      return uVar2;
   }

   return CONCAT71(( int7 )((ulong)in_RDX >> 8), uVar1 - 0x5a < 4) & 0xffffffff;
}
/* GDScriptTokenizer::Token::is_node_name() const */ulong GDScriptTokenizer::Token::is_node_name(Token *this) {
   uint uVar1;
   ulong uVar2;
   uVar1 = *(uint*)this;
   if (0x5d < uVar1) {
      return 0;
   }

   if (uVar1 < 0x28) {
      uVar2 = 1;
      if (uVar1 != 2) {
         uVar2 = ( ulong )(uVar1 - 10 < 3);
      }

      return uVar2;
   }

   return CONCAT71(0x3c4001ffffff, ( 0x3c4001ffffffffU >> ( ( ulong )(uVar1 - 0x28) & 0x3f ) & 1 ) != 0) & 0xffffffff;
}
/* GDScriptTokenizer::get_token_name(GDScriptTokenizer::Token::Type) */GDScriptTokenizer * __thiscall
GDScriptTokenizer::get_token_name(GDScriptTokenizer *this,uint param_2){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 < 99) {
      *(undefined8*)this = 0;
      if (*(char**)( token_names + (long)(int)param_2 * 8 ) != (char*)0x0) {
         strlen(*(char**)( token_names + (long)(int)param_2 * 8 ));
      }

      String::parse_latin1((StrRange*)this);
   }
 else {
      _err_print_index_error("get_token_name", "modules/gdscript/gdscript_tokenizer.cpp", 0x108, (ulong)param_2, 99, "p_token_type", "Token::TK_MAX", "Using token type out of the enum.", false, false);
      *(undefined8*)this = 0;
      String::parse_latin1((StrRange*)this);
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTokenizerText::set_source_code(String const&) */void GDScriptTokenizerText::set_source_code(GDScriptTokenizerText *this, String *param_1) {
   int iVar1;
   undefined *puVar2;
   puVar2 = *(undefined**)param_1;
   if (*(undefined**)( this + 8 ) != puVar2) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), (CowData*)param_1);
      puVar2 = *(undefined**)( this + 8 );
   }

   if (puVar2 == (undefined*)0x0) {
      puVar2 = &_LC20;
   }
 else if (*(uint*)( puVar2 + -8 ) < 2) {
      puVar2 = &_LC20;
   }

   *(undefined8*)( this + 0x20 ) = _LC21;
   *(undefined**)( this + 0x10 ) = puVar2;
   *(undefined**)( this + 0x18 ) = puVar2;
   if (*(long*)param_1 == 0) {
      iVar1 = 0;
   }
 else {
      iVar1 = (int)*(undefined8*)( *(long*)param_1 + -8 );
      iVar1 = iVar1 + -1 + ( uint )(iVar1 == 0);
   }

   *(int*)( this + 0x120 ) = iVar1;
   *(undefined4*)( this + 0x11c ) = 0;
   return;
}
/* GDScriptTokenizerText::push_paren(char32_t) */void GDScriptTokenizerText::push_paren(GDScriptTokenizerText *this, wchar32 param_1) {
   long *plVar1;
   long lVar2;
   wchar32 *pwVar3;
   undefined1(*pauVar4)[16];
   if (*(long*)( this + 0x110 ) == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( this + 0x110 ) = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   pwVar3 = (wchar32*)operator_new(0x20, DefaultAllocator::alloc);
   plVar1 = *(long**)( this + 0x110 );
   pwVar3[2] = L'\0';
   pwVar3[3] = L'\0';
   lVar2 = plVar1[1];
   *pwVar3 = param_1;
   *(long**)( pwVar3 + 6 ) = plVar1;
   *(long*)( pwVar3 + 4 ) = lVar2;
   if (lVar2 != 0) {
      *(wchar32**)( lVar2 + 8 ) = pwVar3;
   }

   plVar1[1] = (long)pwVar3;
   if (*plVar1 != 0) {
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      return;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   *plVar1 = (long)pwVar3;
   return;
}
/* GDScriptTokenizerText::pop_paren(char32_t) */bool GDScriptTokenizerText::pop_paren(GDScriptTokenizerText *this, wchar32 param_1) {
   wchar32 wVar1;
   long *plVar2;
   wchar32 *pwVar3;
   long lVar4;
   long lVar5;
   bool bVar6;
   bVar6 = false;
   plVar2 = *(long**)( this + 0x110 );
   if (( plVar2 != (long*)0x0 ) && ( (int)plVar2[2] != 0 )) {
      pwVar3 = (wchar32*)plVar2[1];
      wVar1 = *pwVar3;
      if (plVar2 == *(long**)( pwVar3 + 6 )) {
         lVar5 = *(long*)( pwVar3 + 2 );
         if (pwVar3 == (wchar32*)*plVar2) {
            *plVar2 = lVar5;
         }

         lVar4 = *(long*)( pwVar3 + 4 );
         plVar2[1] = lVar4;
         if (lVar4 != 0) {
            *(long*)( lVar4 + 8 ) = lVar5;
            lVar5 = *(long*)( pwVar3 + 2 );
         }

         if (lVar5 != 0) {
            *(long*)( lVar5 + 0x10 ) = lVar4;
         }

         Memory::free_static(pwVar3, false);
         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      if (*(int*)( (long)*(void**)( this + 0x110 ) + 0x10 ) == 0) {
         Memory::free_static(*(void**)( this + 0x110 ), false);
         *(undefined8*)( this + 0x110 ) = 0;
      }

      bVar6 = wVar1 == param_1;
   }

   return bVar6;
}
/* GDScriptTokenizerText::pop_error() */void GDScriptTokenizerText::pop_error(void) {
   long *plVar1;
   undefined4 *puVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   void *pvVar5;
   long lVar6;
   code *pcVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   long in_RSI;
   undefined4 *in_RDI;
   if (*(long*)( in_RSI + 0x58 ) != 0) {
      puVar2 = *(undefined4**)( *(long*)( in_RSI + 0x58 ) + 8 );
      *in_RDI = *puVar2;
      Variant::Variant((Variant*)( in_RDI + 2 ), (Variant*)( puVar2 + 2 ));
      uVar8 = *(undefined8*)( puVar2 + 8 );
      uVar9 = *(undefined8*)( puVar2 + 10 );
      *(undefined8*)( in_RDI + 0xc ) = *(undefined8*)( puVar2 + 0xc );
      uVar3 = *(undefined8*)( puVar2 + 0xe );
      *(undefined8*)( in_RDI + 0x10 ) = 0;
      *(undefined8*)( in_RDI + 0xe ) = uVar3;
      lVar6 = *(long*)( puVar2 + 0x10 );
      *(undefined8*)( in_RDI + 8 ) = uVar8;
      *(undefined8*)( in_RDI + 10 ) = uVar9;
      if (lVar6 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( in_RDI + 0x10 ), (CowData*)( puVar2 + 0x10 ));
      }

      puVar4 = *(undefined8**)( in_RSI + 0x58 );
      if (( puVar4 != (undefined8*)0x0 ) && ( pvVar5 = (void*)puVar4[1] ),pvVar5 != (void*)0x0) {
         if (puVar4 == *(undefined8**)( (long)pvVar5 + 0x58 )) {
            if (pvVar5 == (void*)*puVar4) {
               *puVar4 = *(undefined8*)( (long)pvVar5 + 0x48 );
            }

            lVar6 = *(long*)( (long)pvVar5 + 0x50 );
            puVar4[1] = lVar6;
            if (lVar6 != 0) {
               *(undefined8*)( lVar6 + 0x48 ) = *(undefined8*)( (long)pvVar5 + 0x48 );
            }

            if (*(long*)( (long)pvVar5 + 0x48 ) != 0) {
               *(undefined8*)( *(long*)( (long)pvVar5 + 0x48 ) + 0x50 ) = *(undefined8*)( (long)pvVar5 + 0x50 );
            }

            if (*(long*)( (long)pvVar5 + 0x40 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x40 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar6 = *(long*)( (long)pvVar5 + 0x40 );
                  *(undefined8*)( (long)pvVar5 + 0x40 ) = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            if (( &Variant::needs_deinit )[*(int*)( (long)pvVar5 + 8 )] != '\0') {
               Variant::_clear_internal();
            }

            Memory::free_static(pvVar5, false);
            *(int*)( puVar4 + 2 ) = *(int*)( puVar4 + 2 ) + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         if (*(int*)( (long)*(void**)( in_RSI + 0x58 ) + 0x10 ) == 0) {
            Memory::free_static(*(void**)( in_RSI + 0x58 ), false);
            *(undefined8*)( in_RSI + 0x58 ) = 0;
         }

      }

      return;
   }

   /* WARNING: Does not return */
   pcVar7 = (code*)invalidInstructionException();
   ( *pcVar7 )();
}
/* GDScriptTokenizerText::make_token(GDScriptTokenizer::Token::Type) */int *GDScriptTokenizerText::make_token(int *param_1, long param_2, int param_3) {
   long *plVar1;
   int *piVar2;
   int iVar3;
   long lVar4;
   int iVar5;
   int iVar6;
   int *piVar7;
   int iVar8;
   long lVar9;
   long in_FS_OFFSET;
   long local_40;
   int *local_38;
   long local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   param_1[0xc] = 0;
   param_1[0xd] = 0;
   param_1[0xe] = -1;
   param_1[0xf] = 0;
   iVar8 = *(int*)( param_2 + 0x40 );
   param_1[0x10] = 0;
   param_1[0x11] = 0;
   lVar9 = *(long*)( param_2 + 0x18 );
   param_1[8] = iVar8;
   iVar8 = *(int*)( param_2 + 0x20 );
   param_1[2] = 0;
   param_1[9] = iVar8;
   iVar8 = *(int*)( param_2 + 0x44 );
   *param_1 = param_3;
   param_1[10] = iVar8;
   local_40 = 0;
   param_1[0xb] = *(int*)( param_2 + 0x24 );
   param_1[0xc] = *(int*)( param_2 + 0x48 );
   local_38 = *(int**)( param_2 + 0x38 );
   param_1[0xd] = *(int*)( param_2 + 0x4c );
   local_30 = 0;
   if (local_38 != (int*)0x0) {
      iVar8 = (int)( lVar9 - (long)local_38 >> 2 );
      if (iVar8 < 0) {
         piVar7 = local_38;
         if (*local_38 != 0) {
            do {
               piVar2 = piVar7 + 1;
               piVar7 = piVar7 + 1;
            }
 while ( *piVar2 != 0 );
            local_30 = (long)piVar7 - (long)local_38 >> 2;
         }

      }
 else if (iVar8 != 0) {
         iVar5 = 0;
         piVar7 = local_38;
         do {
            iVar6 = *piVar7;
            piVar7 = piVar7 + 1;
            if (iVar6 == 0) {
               local_30 = (long)iVar5;
               goto LAB_00100f59;
            }

            iVar5 = iVar5 + 1;
         }
 while ( iVar8 != iVar5 );
         local_30 = (long)iVar8;
      }

   }

   LAB_00100f59:String::parse_utf32((StrRange*)&local_40);
   lVar4 = local_40;
   lVar9 = *(long*)( param_1 + 0x10 );
   if (lVar9 == local_40) {
      if (lVar9 != 0) {
         LOCK();
         plVar1 = (long*)( lVar9 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

   }
 else {
      if (lVar9 != 0) {
         LOCK();
         plVar1 = (long*)( lVar9 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar9 = *(long*)( param_1 + 0x10 );
            param_1[0x10] = 0;
            param_1[0x11] = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }

      }

      *(long*)( param_1 + 0x10 ) = local_40;
   }

   if (( param_3 == 0x61 ) || ( iVar8 = iVar8 < 0 )) goto LAB_00101030;
   iVar5 = *(int*)( param_2 + 0x11c );
   iVar6 = 0;
   if (-1 < iVar5) {
      lVar9 = 0;
      do {
         if (( *(int*)( param_2 + 0x120 ) <= iVar6 + iVar5 ) || ( ( iVar3 = *(int*)( *(long*)( param_2 + 0x18 ) + lVar9 ) ),iVar3 != 0x20 && ( iVar3 != 9 ) )) break;
         iVar6 = iVar6 + 1;
         lVar9 = lVar9 + 4;
      }
 while ( iVar6 != -0x80000000 - iVar5 );
   }

   iVar5 = *(int*)( param_2 + 0x40 );
   iVar3 = *(int*)( param_2 + 0x20 );
   iVar6 = iVar6 + *(int*)( param_2 + 0x24 );
   if (iVar5 == iVar3) {
      if (iVar8 != iVar5) goto LAB_00101030;
      iVar8 = *(int*)( param_2 + 0x2c );
      if (( iVar6 < iVar8 ) || ( iVar8 < *(int*)( param_2 + 0x44 ) )) goto LAB_00101030;
      param_1[0xe] = iVar8 - *(int*)( param_2 + 0x44 );
      if (*(int*)( param_2 + 0x2c ) == *(int*)( param_2 + 0x44 )) goto LAB_001011db;
      if (*(int*)( param_2 + 0x24 ) <= *(int*)( param_2 + 0x2c )) goto LAB_001011b0;
   }
 else if (iVar8 == iVar5) {
      if (*(int*)( param_2 + 0x2c ) < *(int*)( param_2 + 0x44 )) goto LAB_00101030;
      param_1[0xe] = *(int*)( param_2 + 0x2c ) - *(int*)( param_2 + 0x44 );
      if (*(int*)( param_2 + 0x2c ) == *(int*)( param_2 + 0x44 )) {
         LAB_001011db:param_1[0xf] = 1;
         goto LAB_00101030;
      }

   }
 else {
      if (iVar8 != iVar3) {
         if (( iVar8 < iVar3 ) && ( iVar5 < iVar8 )) {
            param_1[0xe] = 2;
         }

         goto LAB_00101030;
      }

      if (iVar6 < *(int*)( param_2 + 0x2c )) goto LAB_00101030;
      param_1[0xe] = *(int*)( param_2 + 0x2c ) - *(int*)( param_2 + 0x44 );
      if (*(int*)( param_2 + 0x24 ) <= *(int*)( param_2 + 0x2c )) {
         LAB_001011b0:param_1[0xf] = 3;
         goto LAB_00101030;
      }

   }

   param_1[0xf] = 2;
   LAB_00101030:*(int*)( param_2 + 0x68 ) = *param_1;
   Variant::operator =((Variant*)( param_2 + 0x70 ), (Variant*)( param_1 + 2 ));
   for (int i = 0; i < 8; i++) {
      *(int*)( param_2 + ( 4*i + 136 ) ) = param_1[( i + 8 )];
   }

   if (*(long*)( param_2 + 0xa8 ) != *(long*)( param_1 + 0x10 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_2 + 0xa8 ), (CowData*)( param_1 + 0x10 ));
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* GDScriptTokenizerText::make_literal(Variant const&) */Variant *GDScriptTokenizerText::make_literal(Variant *param_1) {
   long lVar1;
   Variant *in_RDX;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   make_token(param_1, in_RSI, 3);
   Variant::operator =(param_1 + 8, in_RDX);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTokenizerText::make_identifier(StringName const&) */StringName *GDScriptTokenizerText::make_identifier(StringName *param_1) {
   StringName *in_RDX;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined4 local_38[2];
   undefined8 local_30;
   undefined8 uStack_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   make_token(param_1, in_RSI, 2);
   Variant::Variant((Variant*)local_38, in_RDX);
   if (( &Variant::needs_deinit )[*(int*)( param_1 + 8 )] != '\0') {
      Variant::_clear_internal();
   }

   *(undefined4*)( param_1 + 8 ) = local_38[0];
   *(undefined8*)( param_1 + 0x10 ) = local_30;
   *(undefined8*)( param_1 + 0x18 ) = uStack_28;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTokenizerText::make_error(String const&) */String *GDScriptTokenizerText::make_error(String *param_1) {
   String *in_RDX;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined4 local_38[2];
   undefined8 local_30;
   undefined8 uStack_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   make_token(param_1, in_RSI, 0x61);
   Variant::Variant((Variant*)local_38, in_RDX);
   if (( &Variant::needs_deinit )[*(int*)( param_1 + 8 )] != '\0') {
      Variant::_clear_internal();
   }

   *(undefined4*)( param_1 + 8 ) = local_38[0];
   *(undefined8*)( param_1 + 0x10 ) = local_30;
   *(undefined8*)( param_1 + 0x18 ) = uStack_28;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTokenizerText::push_error(String const&) */void GDScriptTokenizerText::push_error(String *param_1) {
   undefined8 uVar1;
   long *plVar2;
   long lVar3;
   undefined4 *puVar4;
   undefined1(*pauVar5)[16];
   long in_FS_OFFSET;
   undefined4 local_68[2];
   int local_60[6];
   undefined4 local_48;
   undefined4 local_44;
   undefined4 local_40;
   undefined4 local_3c;
   undefined4 local_38;
   undefined4 local_34;
   undefined4 local_30;
   undefined4 local_2c;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   make_error((String*)local_68);
   if (*(long*)( param_1 + 0x58 ) == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( param_1 + 0x58 ) = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }

   puVar4 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined1(*) [16])( puVar4 + 4 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   *(undefined1(*) [16])( puVar4 + 8 ) = (undefined1[16])0x0;
   puVar4[2] = 0;
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(undefined8*)( puVar4 + 0xe ) = 0xffffffff;
   *(undefined1(*) [16])( puVar4 + 0x10 ) = (undefined1[16])0x0;
   *puVar4 = local_68[0];
   *(undefined1(*) [16])( puVar4 + 0x14 ) = (undefined1[16])0x0;
   Variant::operator =((Variant*)( puVar4 + 2 ), (Variant*)local_60);
   puVar4[8] = local_48;
   puVar4[9] = local_44;
   puVar4[10] = local_40;
   puVar4[0xb] = local_3c;
   puVar4[0xc] = local_38;
   puVar4[0xd] = local_34;
   puVar4[0xe] = local_30;
   puVar4[0xf] = local_2c;
   if (*(long*)( puVar4 + 0x10 ) != local_28) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 0x10 ), (CowData*)&local_28);
   }

   lVar3 = local_28;
   uVar1 = *(undefined8*)( *(long*)( param_1 + 0x58 ) + 8 );
   *(long*)( puVar4 + 0x16 ) = *(long*)( param_1 + 0x58 );
   plVar2 = *(long**)( param_1 + 0x58 );
   *(undefined8*)( puVar4 + 0x12 ) = 0;
   *(undefined8*)( puVar4 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar4;
   }

   plVar2[1] = (long)puVar4;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar4;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (local_28 != 0) {
      LOCK();
      plVar2 = (long*)( local_28 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( &Variant::needs_deinit )[local_60[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTokenizerText::push_error(GDScriptTokenizer::Token const&) */void GDScriptTokenizerText::push_error(GDScriptTokenizerText *this, Token *param_1) {
   undefined8 uVar1;
   long *plVar2;
   undefined4 *puVar3;
   undefined1(*pauVar4)[16];
   if (*(long*)( this + 0x58 ) == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( this + 0x58 ) = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar3 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined1(*) [16])( puVar3 + 4 ) = (undefined1[16])0x0;
   *puVar3 = 0;
   *(undefined1(*) [16])( puVar3 + 8 ) = (undefined1[16])0x0;
   puVar3[2] = 0;
   *(undefined8*)( puVar3 + 0xc ) = 0;
   *(undefined8*)( puVar3 + 0xe ) = 0xffffffff;
   *(undefined1(*) [16])( puVar3 + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar3 + 0x14 ) = (undefined1[16])0x0;
   *puVar3 = *(undefined4*)param_1;
   Variant::operator =((Variant*)( puVar3 + 2 ), (Variant*)( param_1 + 8 ));
   for (int i = 0; i < 8; i++) {
      puVar3[( i + 8 )] = *(undefined4*)( param_1 + ( 4*i + 32 ) );
   }

   if (*(long*)( puVar3 + 0x10 ) != *(long*)( param_1 + 0x40 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 0x10 ), (CowData*)( param_1 + 0x40 ));
   }

   uVar1 = *(undefined8*)( *(long*)( this + 0x58 ) + 8 );
   *(long*)( puVar3 + 0x16 ) = *(long*)( this + 0x58 );
   plVar2 = *(long**)( this + 0x58 );
   *(undefined8*)( puVar3 + 0x12 ) = 0;
   *(undefined8*)( puVar3 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar3;
   }

   plVar2[1] = (long)puVar3;
   if (*plVar2 != 0) {
      *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      return;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   *plVar2 = (long)puVar3;
   return;
}
/* GDScriptTokenizerText::newline(bool) */void GDScriptTokenizerText::newline(GDScriptTokenizerText *this, bool param_1) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   int local_60[2];
   undefined1 local_58[16];
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 ) && ( this[0x60] == (GDScriptTokenizerText)0x0 ) ) && ( this[0x50] == (GDScriptTokenizerText)0x0 )) {
      this[0x60] = (GDScriptTokenizerText)0x1;
      local_30 = 0xffffffff;
      local_58 = (undefined1[16])0x0;
      *(undefined4*)( this + 0x68 ) = 0x57;
      local_48 = CONCAT44(*(undefined4*)( this + 0x20 ), *(undefined4*)( this + 0x20 ));
      local_60[0] = 0;
      local_60[1] = 0;
      uStack_40 = CONCAT44(*(int*)( this + 0x24 ), *(int*)( this + 0x24 ) + -1);
      local_28 = 0;
      local_38 = uStack_40;
      Variant::operator =((Variant*)( this + 0x70 ), (Variant*)local_60);
      *(undefined8*)( this + 0x98 ) = local_38;
      *(undefined8*)( this + 0x88 ) = local_48;
      *(undefined8*)( this + 0x90 ) = uStack_40;
      *(undefined8*)( this + 0xa0 ) = local_30;
      if (*(long*)( this + 0xa8 ) != local_28) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xa8 ), (CowData*)&local_28);
      }

      *(undefined4*)( this + 0xb0 ) = 0x57;
      Variant::operator =((Variant*)( this + 0xb8 ), (Variant*)local_60);
      *(undefined8*)( this + 0xe0 ) = local_38;
      *(undefined8*)( this + 0xd0 ) = local_48;
      *(undefined8*)( this + 0xd8 ) = uStack_40;
      *(undefined8*)( this + 0xe8 ) = local_30;
      if (*(long*)( this + 0xf0 ) != local_28) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xf0 ), (CowData*)&local_28);
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

      if (( &Variant::needs_deinit )[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   *(undefined4*)( this + 0x24 ) = 1;
   *(undefined4*)( this + 0x48 ) = 1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTokenizerText::_get_indent_char_name(char32_t) */StrRange *GDScriptTokenizerText::_get_indent_char_name(wchar32 param_1) {
   long *plVar1;
   long lVar2;
   int in_EDX;
   undefined4 in_register_0000003c;
   StrRange *pSVar3;
   long in_FS_OFFSET;
   int local_4c[3];
   long local_40;
   int *local_38;
   ulong local_30;
   long local_20;
   pSVar3 = (StrRange*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0x20) {
      *(undefined8*)pSVar3 = 0;
      local_30 = 5;
      local_38 = (int*)0x109f10;
   }
 else {
      if (in_EDX != 9) {
         local_4c[0] = in_EDX;
         _err_print_error("_get_indent_char_name", "modules/gdscript/gdscript_tokenizer.cpp", 0x53c, "Condition \"ch != \' \' && ch != \'\\t\'\" is true. Returning: String(&ch, 1).c_escape()", 0, 0);
         local_40 = 0;
         local_38 = local_4c;
         local_30 = ( ulong )(local_4c[0] != 0);
         String::parse_utf32((StrRange*)&local_40);
         String::c_escape();
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

         goto LAB_0010189c;
      }

      *(undefined8*)pSVar3 = 0;
      local_30 = 3;
      local_38 = (int*)&_LC23;
   }

   String::parse_latin1(pSVar3);
   LAB_0010189c:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pSVar3;
}
/* GDScriptTokenizer::Token::get_debug_name() const */void GDScriptTokenizer::Token::get_debug_name(void) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   uint *in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   bool bVar5;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   uVar2 = *in_RSI;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar2 == 2) {
      local_40 = 0;
      plVar1 = (long*)( *(long*)( in_RSI + 0x10 ) + -0x10 );
      if (*(long*)( in_RSI + 0x10 ) != 0) {
         do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00101a90;
            LOCK();
            lVar4 = *plVar1;
            bVar5 = lVar3 == lVar4;
            if (bVar5) {
               *plVar1 = lVar3 + 1;
               lVar4 = lVar3;
            }

            UNLOCK();
         }
 while ( !bVar5 );
         if (lVar4 != -1) {
            local_40 = *(long*)( in_RSI + 0x10 );
         }

      }

      LAB_00101a90:local_48 = 0;
      local_38 = "identifier \"%s\"";
      local_30 = 0xf;
      String::parse_latin1((StrRange*)&local_48);
      vformat<String>();
      lVar3 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

   }
 else {
      if (0x62 < uVar2) {
         _err_print_index_error("get_name", "modules/gdscript/gdscript_tokenizer.cpp", 0xa3, (ulong)uVar2, 99, "type", "TK_MAX", "Using token type out of the enum.", false, false);
      }

      local_40 = 0;
      local_38 = "\"%s\"";
      local_30 = 4;
      String::parse_latin1((StrRange*)&local_40);
      vformat<char_const*>(in_RDI, (char*)&local_40);
   }

   lVar3 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GDScriptTokenizerText::make_paren_error(char32_t) */String *GDScriptTokenizerText::make_paren_error(wchar32 param_1) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   char *pcVar4;
   long lVar5;
   wchar32 in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   String *pSVar6;
   long in_FS_OFFSET;
   long local_a0;
   char *local_98;
   undefined8 local_90;
   undefined4 local_88[2];
   undefined4 local_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   pSVar6 = (String*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( in_RSI + 0x110 ) == 0 ) || ( *(int*)( *(long*)( in_RSI + 0x110 ) + 0x10 ) == 0 )) {
      local_a0 = 0;
      local_90 = 0x31;
      local_98 = "Closing \"%c\" doesn\'t have an opening counterpart.";
      String::parse_latin1((StrRange*)&local_a0);
      vformat<char32_t>((String*)&local_98, (wchar32)(StrRange*)&local_a0);
      make_error(pSVar6);
      pcVar4 = local_98;
      if (local_98 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      lVar5 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

   }
 else {
      local_a0 = 0;
      local_98 = "Closing \"%c\" doesn\'t match the opening \"%c\".";
      local_90 = 0x2c;
      String::parse_latin1((StrRange*)&local_a0);
      vformat<char32_t,char32_t>((String*)&local_98, (wchar32)(StrRange*)&local_a0, in_EDX);
      make_error((String*)local_88);
      pcVar4 = local_98;
      if (local_98 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      lVar5 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      plVar1 = *(long**)( in_RSI + 0x110 );
      if (( plVar1 != (long*)0x0 ) && ( pvVar2 = (void*)plVar1[1] ),pvVar2 != (void*)0x0) {
         if (plVar1 == *(long**)( (long)pvVar2 + 0x18 )) {
            lVar5 = *(long*)( (long)pvVar2 + 8 );
            if (pvVar2 == (void*)*plVar1) {
               *plVar1 = lVar5;
            }

            lVar3 = *(long*)( (long)pvVar2 + 0x10 );
            plVar1[1] = lVar3;
            if (lVar3 != 0) {
               *(long*)( lVar3 + 8 ) = lVar5;
               lVar5 = *(long*)( (long)pvVar2 + 8 );
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 0x10 ) = lVar3;
            }

            Memory::free_static(pvVar2, false);
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         if (*(int*)( (long)*(void**)( in_RSI + 0x110 ) + 0x10 ) == 0) {
            Memory::free_static(*(void**)( in_RSI + 0x110 ), false);
            *(undefined8*)( in_RSI + 0x110 ) = 0;
         }

      }

      *(undefined4*)pSVar6 = local_88[0];
      *(undefined8*)( pSVar6 + 0x10 ) = local_78;
      *(undefined8*)( pSVar6 + 0x18 ) = uStack_70;
      *(undefined4*)( pSVar6 + 8 ) = local_80;
      *(undefined8*)( pSVar6 + 0x20 ) = local_68;
      *(undefined8*)( pSVar6 + 0x28 ) = uStack_60;
      *(undefined8*)( pSVar6 + 0x30 ) = local_58;
      *(undefined8*)( pSVar6 + 0x38 ) = local_50;
      *(undefined8*)( pSVar6 + 0x40 ) = local_48;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pSVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTokenizerText::check_indent() */void GDScriptTokenizerText::check_indent(GDScriptTokenizerText *this) {
   long *plVar1;
   uint uVar2;
   uint uVar3;
   void *pvVar4;
   undefined8 uVar5;
   int iVar6;
   int iVar7;
   wchar32 wVar8;
   long lVar9;
   long *plVar10;
   long lVar11;
   undefined4 *puVar12;
   int *piVar13;
   undefined1(*pauVar14)[16];
   uint *puVar15;
   int iVar16;
   int iVar17;
   char *pcVar18;
   char *pcVar19;
   long in_FS_OFFSET;
   bool bVar20;
   long local_b0;
   long local_a8;
   long local_a0;
   char *local_98;
   undefined8 local_90;
   undefined4 local_88[2];
   int local_80[6];
   undefined4 local_68;
   undefined4 local_64;
   undefined4 local_60;
   int local_5c;
   undefined4 local_58;
   int local_54;
   undefined4 local_50;
   undefined4 local_4c;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x24 ) != 1) {
      _err_print_error("check_indent", "modules/gdscript/gdscript_tokenizer.cpp", 0x493, "Condition \"column != 1\" is true.", "Checking tokenizer indentation in the middle of a line.", 0, 0);
      goto LAB_00101f48;
   }

   iVar6 = *(int*)( this + 0x11c );
   if (iVar6 < *(int*)( this + 0x120 )) {
      LAB_00101e96:if (( -1 < iVar6 ) && ( iVar17 = iVar6 < iVar17 )) {
         puVar15 = *(uint**)( this + 0x18 );
         uVar2 = *puVar15;
         if (( uVar2 < 0x24 ) && ( ( 0xfffffff6ffffd9ffU >> ( (ulong)uVar2 & 0x3f ) & 1 ) == 0 )) {
            if (uVar2 == 0xd) {
               _advance(this);
               iVar6 = *(int*)( this + 0x11c );
               if (( ( -1 < iVar6 ) && ( iVar17 = *(int*)( this + 0x120 ) ),iVar6 < iVar17 )) goto LAB_00101f9f;
               local_a0 = 0;
               local_98 = "Stray carriage return character in source code.";
               local_90 = 0x2f;
               String::parse_latin1((StrRange*)&local_a0);
               push_error((String*)this);
               lVar11 = local_a0;
               if (local_a0 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_a0 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_a0 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               iVar6 = *(int*)( this + 0x11c );
               iVar17 = *(int*)( this + 0x120 );
               if (iVar6 < 0) {
                  if (iVar17 <= iVar6) goto LAB_0010235b;
                  goto LAB_001020fc;
               }

               if (iVar6 < iVar17) {
                  puVar15 = *(uint**)( this + 0x18 );
                  goto LAB_00101f9f;
               }

               LAB_0010235b:plVar10 = *(long**)( this + 0x100 );
               iVar6 = 0;
               if (plVar10 != (long*)0x0) {
                  iVar6 = (int)plVar10[2];
               }

               *(int*)( this + 0xf8 ) = *(int*)( this + 0xf8 ) - iVar6;
               if (plVar10 == (long*)0x0) goto LAB_00101f48;
               goto LAB_0010237f;
            }

            LAB_00101f9f:if (*puVar15 == 10) {
               LAB_00101fa8:_advance(this);
               newline(this, false);
               goto LAB_00101fba;
            }

            LAB_001020fc:iVar16 = 0;
            bVar20 = false;
            while (-1 < iVar6) {
               do {
                  uVar3 = **(uint**)( this + 0x18 );
                  if (uVar3 == 9) {
                     iVar16 = iVar16 + *(int*)( this + 0x30 );
                     iVar7 = *(int*)( this + 0x30 ) + -1 + *(int*)( this + 0x24 );
                  }
 else {
                     if (uVar3 != 0x20) {
                        if (iVar17 <= iVar6) goto LAB_0010235b;
                        if (uVar3 == 0xd) {
                           _advance(this);
                           iVar6 = *(int*)( this + 0x11c );
                           if (( ( -1 < iVar6 ) && ( iVar17 = *(int*)( this + 0x120 ) ),iVar6 < iVar17 )) goto LAB_0010212b;
                           local_a0 = 0;
                           local_98 = "Stray carriage return character in source code.";
                           local_90 = 0x2f;
                           String::parse_latin1((StrRange*)&local_a0);
                           push_error((String*)this);
                           lVar11 = local_a0;
                           if (local_a0 != 0) {
                              LOCK();
                              plVar10 = (long*)( local_a0 + -0x10 );
                              *plVar10 = *plVar10 + -1;
                              UNLOCK();
                              if (*plVar10 == 0) {
                                 local_a0 = 0;
                                 Memory::free_static((void*)( lVar11 + -0x10 ), false);
                              }

                           }

                        }

                        iVar6 = *(int*)( this + 0x11c );
                        goto LAB_00102111;
                     }

                     iVar7 = *(int*)( this + 0x24 );
                     iVar16 = iVar16 + 1;
                  }

                  iVar7 = iVar7 + 1;
                  iVar6 = iVar6 + 1;
                  *(uint**)( this + 0x18 ) = *(uint**)( this + 0x18 ) + 1;
                  bVar20 = (bool)( bVar20 | uVar2 != uVar3 );
                  *(int*)( this + 0x24 ) = iVar7;
                  *(int*)( this + 0x11c ) = iVar6;
                  if (*(int*)( this + 0x4c ) < iVar7) {
                     *(int*)( this + 0x4c ) = iVar7;
                  }

               }
 while ( iVar6 < iVar17 );
               newline(this, true);
               check_indent(this);
               iVar6 = *(int*)( this + 0x11c );
               iVar17 = *(int*)( this + 0x120 );
               if (iVar17 <= iVar6) goto LAB_0010235b;
            }
;
            if (iVar17 <= iVar6) goto LAB_0010235b;
            LAB_00102111:if (( -1 < iVar6 ) && ( iVar17 = iVar6 < iVar17 )) {
               piVar13 = *(int**)( this + 0x18 );
               LAB_0010212b:if (*piVar13 == 10) goto LAB_00101fa8;
               if (*piVar13 == 0x23) {
                  local_98 = (char*)0x0;
                  do {
                     pcVar19 = local_98;
                     if (iVar6 < 0) {
                        if (iVar17 <= iVar6) goto LAB_00102160;
                     }
 else if (( iVar17 <= iVar6 ) || ( **(int**)( this + 0x18 ) == 10 )) goto LAB_00102160;
                     wVar8 = _advance(this);
                     String::operator +=((String*)&local_98, wVar8);
                     iVar17 = *(int*)( this + 0x120 );
                     iVar6 = *(int*)( this + 0x11c );
                  }
 while ( true );
               }

            }

            if (bVar20) {
               if (( this[0x50] != (GDScriptTokenizerText)0x0 ) || ( this[0x51] != (GDScriptTokenizerText)0x0 )) goto LAB_00101f48;
               local_a0 = 0;
               local_98 = "Mixed use of tabs and spaces for indentation.";
               local_90 = 0x2d;
               String::parse_latin1((StrRange*)&local_a0);
               make_error((String*)local_88);
               lVar11 = local_a0;
               if (local_a0 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_a0 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_a0 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               local_68 = *(undefined4*)( this + 0x20 );
               local_60 = 1;
               local_58 = 1;
               local_54 = *(int*)( this + 0x24 );
               if (*(long*)( this + 0x58 ) == 0) {
                  pauVar14 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])( this + 0x58 ) = pauVar14;
                  *(undefined4*)pauVar14[1] = 0;
                  *pauVar14 = (undefined1[16])0x0;
               }

               puVar12 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
               *(undefined1(*) [16])( puVar12 + 4 ) = (undefined1[16])0x0;
               *puVar12 = 0;
               *(undefined1(*) [16])( puVar12 + 8 ) = (undefined1[16])0x0;
               puVar12[2] = 0;
               *(undefined8*)( puVar12 + 0xc ) = 0;
               *(undefined8*)( puVar12 + 0xe ) = 0xffffffff;
               *(undefined1(*) [16])( puVar12 + 0x10 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( puVar12 + 0x14 ) = (undefined1[16])0x0;
               *puVar12 = local_88[0];
               Variant::operator =((Variant*)( puVar12 + 2 ), (Variant*)local_80);
               puVar12[8] = local_68;
               puVar12[9] = local_64;
               puVar12[10] = local_60;
               puVar12[0xb] = local_5c;
               puVar12[0xc] = local_58;
               puVar12[0xd] = local_54;
               puVar12[0xe] = local_50;
               puVar12[0xf] = local_4c;
               if (*(long*)( puVar12 + 0x10 ) != local_48) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar12 + 0x10 ), (CowData*)&local_48);
               }

               lVar11 = local_48;
               uVar5 = *(undefined8*)( *(long*)( this + 0x58 ) + 8 );
               *(long*)( puVar12 + 0x16 ) = *(long*)( this + 0x58 );
               *(undefined8*)( puVar12 + 0x12 ) = 0;
               plVar10 = *(long**)( this + 0x58 );
               *(undefined8*)( puVar12 + 0x14 ) = uVar5;
               if (plVar10[1] != 0) {
                  *(undefined4**)( plVar10[1] + 0x48 ) = puVar12;
               }

               plVar10[1] = (long)puVar12;
               if (*plVar10 == 0) {
                  *plVar10 = (long)puVar12;
               }

               *(int*)( plVar10 + 2 ) = (int)plVar10[2] + 1;
               if (local_48 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_48 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_48 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               if (( &Variant::needs_deinit )[local_80[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }

            if (( this[0x50] != (GDScriptTokenizerText)0x0 ) || ( this[0x51] != (GDScriptTokenizerText)0x0 )) goto LAB_00101f48;
            if (*(uint*)( this + 0x118 ) == 0) {
               *(uint*)( this + 0x118 ) = uVar2;
            }
 else if (*(uint*)( this + 0x118 ) != uVar2) {
               _get_indent_char_name(( wchar32 ) & local_a8);
               _get_indent_char_name(( wchar32 ) & local_b0);
               local_98 = "Used %s character for indentation instead of %s as used before in the file.";
               local_a0 = 0;
               local_90 = 0x4b;
               String::parse_latin1((StrRange*)&local_a0);
               vformat<String,String>(&local_98, (StrRange*)&local_a0, &local_b0, &local_a8);
               make_error((String*)local_88);
               pcVar19 = local_98;
               if (local_98 != (char*)0x0) {
                  LOCK();
                  plVar10 = (long*)( local_98 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_98 = (char*)0x0;
                     Memory::free_static(pcVar19 + -0x10, false);
                  }

               }

               lVar11 = local_a0;
               if (local_a0 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_a0 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_a0 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               lVar11 = local_b0;
               if (local_b0 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_b0 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_b0 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               lVar11 = local_a8;
               if (local_a8 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_a8 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_a8 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               local_68 = *(undefined4*)( this + 0x20 );
               local_60 = 1;
               local_58 = 1;
               local_54 = *(int*)( this + 0x24 );
               if (*(long*)( this + 0x58 ) == 0) {
                  pauVar14 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])( this + 0x58 ) = pauVar14;
                  *(undefined4*)pauVar14[1] = 0;
                  *pauVar14 = (undefined1[16])0x0;
               }

               puVar12 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
               *(undefined1(*) [16])( puVar12 + 4 ) = (undefined1[16])0x0;
               *puVar12 = 0;
               *(undefined1(*) [16])( puVar12 + 8 ) = (undefined1[16])0x0;
               puVar12[2] = 0;
               *(undefined8*)( puVar12 + 0xc ) = 0;
               *(undefined8*)( puVar12 + 0xe ) = 0xffffffff;
               *(undefined1(*) [16])( puVar12 + 0x10 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( puVar12 + 0x14 ) = (undefined1[16])0x0;
               *puVar12 = local_88[0];
               Variant::operator =((Variant*)( puVar12 + 2 ), (Variant*)local_80);
               puVar12[8] = local_68;
               puVar12[9] = local_64;
               puVar12[10] = local_60;
               puVar12[0xb] = local_5c;
               puVar12[0xc] = local_58;
               puVar12[0xd] = local_54;
               puVar12[0xe] = local_50;
               puVar12[0xf] = local_4c;
               if (*(long*)( puVar12 + 0x10 ) != local_48) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar12 + 0x10 ), (CowData*)&local_48);
               }

               lVar11 = local_48;
               uVar5 = *(undefined8*)( *(long*)( this + 0x58 ) + 8 );
               *(long*)( puVar12 + 0x16 ) = *(long*)( this + 0x58 );
               *(undefined8*)( puVar12 + 0x12 ) = 0;
               plVar10 = *(long**)( this + 0x58 );
               *(undefined8*)( puVar12 + 0x14 ) = uVar5;
               if (plVar10[1] != 0) {
                  *(undefined4**)( plVar10[1] + 0x48 ) = puVar12;
               }

               plVar10[1] = (long)puVar12;
               if (*plVar10 == 0) {
                  *plVar10 = (long)puVar12;
               }

               *(int*)( plVar10 + 2 ) = (int)plVar10[2] + 1;
               if (local_48 != 0) {
                  LOCK();
                  plVar10 = (long*)( local_48 + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     local_48 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }

               }

               if (( &Variant::needs_deinit )[local_80[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }

            plVar10 = *(long**)( this + 0x100 );
            if (plVar10 == (long*)0x0) {
               if (iVar16 == 0) goto LAB_00101f48;
               if (iVar16 < 1) {
                  LAB_00102a9a:local_a0 = 0;
                  local_98 = "Tokenizer bug: trying to dedent without previous indent.";
                  local_90 = 0x38;
                  String::parse_latin1((StrRange*)&local_a0);
                  push_error((String*)this);
                  lVar11 = local_a0;
                  if (local_a0 != 0) {
                     LOCK();
                     plVar10 = (long*)( local_a0 + -0x10 );
                     *plVar10 = *plVar10 + -1;
                     UNLOCK();
                     if (*plVar10 == 0) {
                        local_a0 = 0;
                        Memory::free_static((void*)( lVar11 + -0x10 ), false);
                     }

                  }

                  goto LAB_00101f48;
               }

               pauVar14 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( this + 0x100 ) = pauVar14;
               *(undefined4*)pauVar14[1] = 0;
               *pauVar14 = (undefined1[16])0x0;
            }
 else {
               iVar6 = (int)plVar10[2];
               if (iVar6 < 1) {
                  if (iVar16 == 0) goto LAB_00101f48;
                  if (iVar16 < 1) {
                     if (iVar6 == 0) goto LAB_00102a9a;
                     goto LAB_00102661;
                  }

               }
 else {
                  if (*(int*)plVar10[1] == iVar16) goto LAB_00101f48;
                  if (iVar16 <= *(int*)plVar10[1]) goto LAB_00102661;
               }

            }

            piVar13 = (int*)operator_new(0x20, DefaultAllocator::alloc);
            plVar10 = *(long**)( this + 0x100 );
            piVar13[2] = 0;
            piVar13[3] = 0;
            lVar11 = plVar10[1];
            *piVar13 = iVar16;
            *(long**)( piVar13 + 6 ) = plVar10;
            *(long*)( piVar13 + 4 ) = lVar11;
            if (lVar11 != 0) {
               *(int**)( lVar11 + 8 ) = piVar13;
            }

            plVar10[1] = (long)piVar13;
            if (*plVar10 == 0) {
               *plVar10 = (long)piVar13;
            }

            *(int*)( plVar10 + 2 ) = (int)plVar10[2] + 1;
            *(int*)( this + 0xf8 ) = *(int*)( this + 0xf8 ) + 1;
            goto LAB_00101f48;
         }

      }

      if (( this[0x50] != (GDScriptTokenizerText)0x0 ) || ( this[0x51] != (GDScriptTokenizerText)0x0 )) goto LAB_00101f48;
      plVar10 = *(long**)( this + 0x100 );
      iVar6 = 0;
      if (plVar10 != (long*)0x0) {
         iVar6 = (int)plVar10[2];
      }

      *(int*)( this + 0xf8 ) = *(int*)( this + 0xf8 ) - iVar6;
      if (plVar10 == (long*)0x0) goto LAB_00101f48;
      do {
         pvVar4 = (void*)*plVar10;
         if (pvVar4 == (void*)0x0) goto LAB_00101f48;
         if (*(long**)( (long)pvVar4 + 0x18 ) == plVar10) {
            lVar11 = *(long*)( (long)pvVar4 + 8 );
            lVar9 = *(long*)( (long)pvVar4 + 0x10 );
            *plVar10 = lVar11;
            if (pvVar4 == (void*)plVar10[1]) {
               plVar10[1] = lVar9;
            }

            if (lVar9 != 0) {
               *(long*)( lVar9 + 8 ) = lVar11;
               lVar11 = *(long*)( (long)pvVar4 + 8 );
            }

            if (lVar11 != 0) {
               *(long*)( lVar11 + 0x10 ) = lVar9;
            }

            Memory::free_static(pvVar4, false);
            *(int*)( plVar10 + 2 ) = (int)plVar10[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar10 = *(long**)( this + 0x100 );
      }
 while ( (int)plVar10[2] != 0 );
   }
 else {
      plVar10 = *(long**)( this + 0x100 );
      iVar6 = 0;
      if (plVar10 != (long*)0x0) {
         iVar6 = (int)plVar10[2];
      }

      *(int*)( this + 0xf8 ) = *(int*)( this + 0xf8 ) - iVar6;
      if (plVar10 == (long*)0x0) goto LAB_00101f48;
      do {
         pvVar4 = (void*)*plVar10;
         if (pvVar4 == (void*)0x0) goto LAB_00101f48;
         if (*(long**)( (long)pvVar4 + 0x18 ) == plVar10) {
            lVar11 = *(long*)( (long)pvVar4 + 8 );
            lVar9 = *(long*)( (long)pvVar4 + 0x10 );
            *plVar10 = lVar11;
            if (pvVar4 == (void*)plVar10[1]) {
               plVar10[1] = lVar9;
            }

            if (lVar9 != 0) {
               *(long*)( lVar9 + 8 ) = lVar11;
               lVar11 = *(long*)( (long)pvVar4 + 8 );
            }

            if (lVar11 != 0) {
               *(long*)( lVar11 + 0x10 ) = lVar9;
            }

            Memory::free_static(pvVar4, false);
            *(int*)( plVar10 + 2 ) = (int)plVar10[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar10 = *(long**)( this + 0x100 );
      }
 while ( (int)plVar10[2] != 0 );
   }

   goto LAB_00101f30;
   LAB_00102160:if (local_98 == (char*)0x0) {
      LAB_001026e0:plVar10 = (long*)HashMap<int,GDScriptTokenizer::CommentData,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GDScriptTokenizer::CommentData>>>::operator []((HashMap<int,GDScriptTokenizer::CommentData,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GDScriptTokenizer::CommentData>>>*)( this + 0x148 ), (int*)( this + 0x20 ));
      pcVar18 = (char*)*plVar10;
      if (pcVar18 == (char*)0x0) {
         *(undefined1*)( plVar10 + 1 ) = 1;
         goto LAB_001021d2;
      }

      pcVar19 = (char*)0x0;
      LAB_00102702:LOCK();
      plVar1 = (long*)( pcVar18 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar11 = *plVar10;
         *plVar10 = 0;
         Memory::free_static((void*)( lVar11 + -0x10 ), false);
      }

   }
 else {
      plVar10 = (long*)( local_98 + -0x10 );
      do {
         lVar11 = *plVar10;
         if (lVar11 == 0) goto LAB_001026e0;
         LOCK();
         lVar9 = *plVar10;
         bVar20 = lVar11 == lVar9;
         if (bVar20) {
            *plVar10 = lVar11 + 1;
            lVar9 = lVar11;
         }

         UNLOCK();
      }
 while ( !bVar20 );
      if (lVar9 == -1) goto LAB_001026e0;
      plVar10 = (long*)HashMap<int,GDScriptTokenizer::CommentData,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GDScriptTokenizer::CommentData>>>::operator []((HashMap<int,GDScriptTokenizer::CommentData,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GDScriptTokenizer::CommentData>>>*)( this + 0x148 ), (int*)( this + 0x20 ));
      pcVar18 = (char*)*plVar10;
      if (pcVar18 == pcVar19) {
         *(undefined1*)( plVar10 + 1 ) = 1;
         if (pcVar18 != (char*)0x0) {
            plVar10 = (long*)( pcVar18 + -0x10 );
            LOCK();
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               Memory::free_static(plVar10, false);
            }

         }

         goto LAB_001021d2;
      }

      if (pcVar18 != (char*)0x0) goto LAB_00102702;
   }

   *plVar10 = (long)pcVar19;
   *(undefined1*)( plVar10 + 1 ) = 1;
   LAB_001021d2:if (*(int*)( this + 0x120 ) <= *(int*)( this + 0x11c )) {
      plVar10 = *(long**)( this + 0x100 );
      iVar6 = 0;
      if (plVar10 != (long*)0x0) {
         iVar6 = (int)plVar10[2];
      }

      *(int*)( this + 0xf8 ) = *(int*)( this + 0xf8 ) - iVar6;
      if (plVar10 == (long*)0x0) goto LAB_0010226d;
      goto LAB_00102200;
   }

   _advance(this);
   newline(this, false);
   pcVar19 = local_98;
   if (local_98 != (char*)0x0) {
      LOCK();
      plVar10 = (long*)( local_98 + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         local_98 = (char*)0x0;
         Memory::free_static(pcVar19 + -0x10, false);
      }

   }

   LAB_00101fba:iVar6 = *(int*)( this + 0x11c );
   goto LAB_00101e96;
   while (true) {
      if (*(long**)( (long)pvVar4 + 0x18 ) == plVar10) {
         lVar11 = *(long*)( (long)pvVar4 + 8 );
         lVar9 = *(long*)( (long)pvVar4 + 0x10 );
         *plVar10 = lVar11;
         if (pvVar4 == (void*)plVar10[1]) {
            plVar10[1] = lVar9;
         }

         if (lVar9 != 0) {
            *(long*)( lVar9 + 8 ) = lVar11;
            lVar11 = *(long*)( (long)pvVar4 + 8 );
         }

         if (lVar11 != 0) {
            *(long*)( lVar11 + 0x10 ) = lVar9;
         }

         Memory::free_static(pvVar4, false);
         *(int*)( plVar10 + 2 ) = (int)plVar10[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar10 = *(long**)( this + 0x100 );
      if ((int)plVar10[2] == 0) break;
      LAB_00102200:pvVar4 = (void*)*plVar10;
      if (pvVar4 == (void*)0x0) goto LAB_0010226d;
   }
;
   Memory::free_static(plVar10, false);
   *(undefined8*)( this + 0x100 ) = 0;
   LAB_0010226d:pcVar19 = local_98;
   if (local_98 != (char*)0x0) {
      LOCK();
      plVar10 = (long*)( local_98 + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         local_98 = (char*)0x0;
         Memory::free_static(pcVar19 + -0x10, false);
      }

   }

   goto LAB_00101f48;
   LAB_00102661:if (( iVar6 < 1 ) || ( piVar13 = (int*)plVar10[1] * piVar13 <= iVar16 )) goto LAB_00102be0;
   if (plVar10 == *(long**)( piVar13 + 6 )) {
      lVar11 = *(long*)( piVar13 + 2 );
      if (piVar13 == (int*)*plVar10) {
         *plVar10 = lVar11;
      }

      lVar9 = *(long*)( piVar13 + 4 );
      plVar10[1] = lVar9;
      if (lVar9 != 0) {
         *(long*)( lVar9 + 8 ) = lVar11;
         lVar11 = *(long*)( piVar13 + 2 );
      }

      if (lVar11 != 0) {
         *(long*)( lVar11 + 0x10 ) = lVar9;
      }

      Memory::free_static(piVar13, false);
      *(int*)( plVar10 + 2 ) = (int)plVar10[2] + -1;
   }
 else {
      _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
   }

   plVar10 = *(long**)( this + 0x100 );
   if ((int)plVar10[2] == 0) {
      Memory::free_static(plVar10, false);
      *(int*)( this + 0xf8 ) = *(int*)( this + 0xf8 ) + -1;
      *(undefined8*)( this + 0x100 ) = 0;
      goto LAB_00102e97;
   }

   *(int*)( this + 0xf8 ) = *(int*)( this + 0xf8 ) + -1;
   iVar6 = (int)plVar10[2];
   goto LAB_00102661;
   LAB_00102be0:if ((int)plVar10[2] < 1) {
      if ((int)plVar10[2] != 0) goto LAB_00101f48;
      LAB_00102e97:if (iVar16 == 0) goto LAB_00101f48;
   }
 else if (*(int*)plVar10[1] == iVar16) goto LAB_00101f48;
   local_a0 = 0;
   local_98 = "Unindent doesn\'t match the previous indentation level.";
   local_90 = 0x36;
   String::parse_latin1((StrRange*)&local_a0);
   make_error((String*)local_88);
   lVar11 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar10 = (long*)( local_a0 + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar11 + -0x10 ), false);
      }

   }

   local_68 = *(undefined4*)( this + 0x20 );
   local_60 = 1;
   local_58 = 1;
   local_5c = *(int*)( this + 0x24 ) + 1;
   local_54 = local_5c;
   if (*(long*)( this + 0x58 ) == 0) {
      pauVar14 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( this + 0x58 ) = pauVar14;
      *(undefined4*)pauVar14[1] = 0;
      *pauVar14 = (undefined1[16])0x0;
   }

   puVar12 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined1(*) [16])( puVar12 + 4 ) = (undefined1[16])0x0;
   *puVar12 = 0;
   *(undefined1(*) [16])( puVar12 + 8 ) = (undefined1[16])0x0;
   puVar12[2] = 0;
   *(undefined8*)( puVar12 + 0xc ) = 0;
   *(undefined8*)( puVar12 + 0xe ) = 0xffffffff;
   *(undefined1(*) [16])( puVar12 + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar12 + 0x14 ) = (undefined1[16])0x0;
   *puVar12 = local_88[0];
   Variant::operator =((Variant*)( puVar12 + 2 ), (Variant*)local_80);
   puVar12[8] = local_68;
   puVar12[9] = local_64;
   puVar12[10] = local_60;
   puVar12[0xb] = local_5c;
   puVar12[0xc] = local_58;
   puVar12[0xd] = local_54;
   puVar12[0xe] = local_50;
   puVar12[0xf] = local_4c;
   if (*(long*)( puVar12 + 0x10 ) != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar12 + 0x10 ), (CowData*)&local_48);
   }

   uVar5 = *(undefined8*)( *(long*)( this + 0x58 ) + 8 );
   *(long*)( puVar12 + 0x16 ) = *(long*)( this + 0x58 );
   *(undefined8*)( puVar12 + 0x12 ) = 0;
   plVar10 = *(long**)( this + 0x58 );
   *(undefined8*)( puVar12 + 0x14 ) = uVar5;
   if (plVar10[1] != 0) {
      *(undefined4**)( plVar10[1] + 0x48 ) = puVar12;
   }

   plVar10[1] = (long)puVar12;
   if (*plVar10 == 0) {
      *plVar10 = (long)puVar12;
   }

   *(int*)( plVar10 + 2 ) = (int)plVar10[2] + 1;
   if (*(long*)( this + 0x100 ) == 0) {
      pauVar14 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( this + 0x100 ) = pauVar14;
      *(undefined4*)pauVar14[1] = 0;
      *pauVar14 = (undefined1[16])0x0;
   }

   piVar13 = (int*)operator_new(0x20, DefaultAllocator::alloc);
   lVar9 = local_48;
   plVar10 = *(long**)( this + 0x100 );
   piVar13[2] = 0;
   piVar13[3] = 0;
   lVar11 = plVar10[1];
   *piVar13 = iVar16;
   *(long**)( piVar13 + 6 ) = plVar10;
   *(long*)( piVar13 + 4 ) = lVar11;
   if (lVar11 != 0) {
      *(int**)( lVar11 + 8 ) = piVar13;
   }

   plVar10[1] = (long)piVar13;
   if (*plVar10 == 0) {
      *plVar10 = (long)piVar13;
   }

   *(int*)( plVar10 + 2 ) = (int)plVar10[2] + 1;
   if (local_48 != 0) {
      LOCK();
      plVar10 = (long*)( local_48 + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
      }

   }

   if (( &Variant::needs_deinit )[local_80[0]] != '\0') {
      Variant::_clear_internal();
   }

   goto LAB_00101f48;
   while (true) {
      if (*(long**)( (long)pvVar4 + 0x18 ) == plVar10) {
         lVar11 = *(long*)( (long)pvVar4 + 8 );
         lVar9 = *(long*)( (long)pvVar4 + 0x10 );
         *plVar10 = lVar11;
         if (pvVar4 == (void*)plVar10[1]) {
            plVar10[1] = lVar9;
         }

         if (lVar9 != 0) {
            *(long*)( lVar9 + 8 ) = lVar11;
            lVar11 = *(long*)( (long)pvVar4 + 8 );
         }

         if (lVar11 != 0) {
            *(long*)( lVar11 + 0x10 ) = lVar9;
         }

         Memory::free_static(pvVar4, false);
         *(int*)( plVar10 + 2 ) = (int)plVar10[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar10 = *(long**)( this + 0x100 );
      if ((int)plVar10[2] == 0) break;
      LAB_0010237f:pvVar4 = (void*)*plVar10;
      if (pvVar4 == (void*)0x0) goto LAB_00101f48;
   }
;
   LAB_00101f30:Memory::free_static(plVar10, false);
   *(undefined8*)( this + 0x100 ) = 0;
   LAB_00101f48:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GDScriptTokenizerText::_advance() */undefined4 GDScriptTokenizerText::_advance(GDScriptTokenizerText *this) {
   int iVar1;
   int iVar2;
   iVar1 = *(int*)( this + 0x11c );
   if (*(int*)( this + 0x120 ) <= iVar1) {
      return 0;
   }

   *(long*)( this + 0x18 ) = *(long*)( this + 0x18 ) + 4;
   iVar2 = *(int*)( this + 0x24 ) + 1;
   *(int*)( this + 0x11c ) = iVar1 + 1;
   *(int*)( this + 0x24 ) = iVar2;
   if (*(int*)( this + 0x4c ) < iVar2) {
      *(int*)( this + 0x4c ) = iVar2;
   }

   if (iVar1 + 1 < *(int*)( this + 0x120 )) {
      if (-1 < iVar1) {
         LAB_00103180:return *(undefined4*)( *(long*)( this + 0x18 ) + -4 );
      }

   }
 else {
      newline(this, true);
      check_indent(this);
      if (( -1 < *(int*)( this + 0x11c ) + -1 ) && ( *(int*)( this + 0x11c ) + -1 < *(int*)( this + 0x120 ) )) goto LAB_00103180;
   }

   return 0;
}
/* GDScriptTokenizerText::annotation() */void GDScriptTokenizerText::annotation(void) {
   long *plVar1;
   long lVar2;
   int iVar3;
   uint uVar4;
   int iVar5;
   int iVar6;
   String *in_RSI;
   uint uVar7;
   long in_RDI;
   long in_FS_OFFSET;
   bool bVar8;
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = 0;
   if (( -1 < *(int*)( in_RSI + 0x11c ) ) && ( uVar7 = 0 * (int*)( in_RSI + 0x11c ) < *(int*)( in_RSI + 0x120 ) )) {
      uVar7 = **(uint**)( in_RSI + 0x18 );
   }

   uVar4 = 0xaaf2;
   iVar3 = 0x2ac;
   iVar6 = 0;
   iVar5 = 0x156;
   do {
      if (uVar7 < uVar4) {
         iVar3 = iVar5 + -1;
         iVar5 = iVar6 + iVar3;
         if (iVar3 < iVar6) break;
      }
 else {
         if (uVar7 <= *(uint*)( xid_start + (long)iVar5 * 8 + 4 )) {
            _advance((GDScriptTokenizerText*)in_RSI);
            goto LAB_0010328b;
         }

         iVar6 = iVar5 + 1;
         iVar5 = iVar6 + iVar3;
         if (iVar3 < iVar6) break;
      }

      iVar5 = iVar5 / 2;
      uVar4 = *(uint*)( xid_start + (long)iVar5 * 8 );
   }
 while ( true );
   local_60 = 0;
   local_50 = 0x29;
   local_58 = "Expected annotation identifier after \"@\".";
   String::parse_latin1((StrRange*)&local_60);
   push_error(in_RSI);
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

   LAB_0010328b:LAB_00103298:uVar7 = 0;
   if (( -1 < *(int*)( in_RSI + 0x11c ) ) && ( uVar7 = 0 * (int*)( in_RSI + 0x11c ) < *(int*)( in_RSI + 0x120 ) )) {
      uVar7 = **(uint**)( in_RSI + 0x18 );
   }

   uVar4 = 0xf900;
   iVar3 = 799;
   iVar6 = 0;
   iVar5 = 399;
   do {
      if (uVar7 < uVar4) {
         iVar3 = iVar5 + -1;
         iVar5 = iVar6 + iVar3;
         if (iVar3 < iVar6) goto LAB_00103310;
      }
 else {
         if (uVar7 <= *(uint*)( xid_continue + (long)iVar5 * 8 + 4 )) break;
         iVar6 = iVar5 + 1;
         iVar5 = iVar6 + iVar3;
         if (iVar3 < iVar6) {
            LAB_00103310:make_token();
            StringName::StringName((StringName*)&local_58, (String*)( in_RDI + 0x40 ), false);
            Variant::Variant((Variant*)local_48, (StringName*)&local_58);
            if (( &Variant::needs_deinit )[*(int*)( in_RDI + 8 )] != '\0') {
               Variant::_clear_internal();
            }

            bVar8 = StringName::configured != '\0';
            *(undefined4*)( in_RDI + 8 ) = local_48[0];
            *(undefined8*)( in_RDI + 0x10 ) = local_40;
            *(undefined8*)( in_RDI + 0x18 ) = uStack_38;
            if (( bVar8 ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

      }

      iVar5 = iVar5 / 2;
      uVar4 = *(uint*)( xid_continue + (long)iVar5 * 8 );
   }
 while ( true );
   _advance((GDScriptTokenizerText*)in_RSI);
   goto LAB_00103298;
}
/* WARNING: Type propagation algorithm not settling *//* GDScriptTokenizerText::potential_identifier() */void GDScriptTokenizerText::potential_identifier(void) {
   long *plVar1;
   int *piVar2;
   long *plVar3;
   int *piVar4;
   code *pcVar5;
   char cVar6;
   char cVar7;
   int iVar8;
   uint uVar9;
   int *piVar10;
   long lVar11;
   int iVar12;
   uint uVar13;
   int iVar14;
   Object *pOVar15;
   GDScriptTokenizerText *in_RSI;
   StringName *in_RDI;
   long lVar16;
   long lVar17;
   int iVar18;
   long in_FS_OFFSET;
   bool bVar19;
   long local_d8;
   long local_d0;
   long local_c8;
   long local_c0;
   int *local_b8;
   long local_b0;
   int local_a8[2];
   undefined8 local_a0;
   undefined8 uStack_98;
   undefined8 local_88;
   undefined1 local_80[16];
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   bVar19 = true;
   iVar8 = *(int*)( in_RSI + 0x11c );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( -1 < iVar8 + -1 ) && ( iVar8 + -1 < *(int*)( in_RSI + 0x120 ) )) {
      bVar19 = *(uint*)( *(long*)( in_RSI + 0x18 ) + -4 ) < 0x80;
   }

   LAB_00103458:uVar9 = 0;
   if (( -1 < iVar8 ) && ( uVar9 = 0 ),iVar8 < *(int*)( in_RSI + 0x120 )) {
      uVar9 = **(uint**)( in_RSI + 0x18 );
   }

   uVar13 = 0xf900;
   iVar12 = 799;
   iVar18 = 0;
   iVar14 = 399;
   do {
      if (uVar9 < uVar13) {
         iVar12 = iVar14 + -1;
         iVar14 = iVar18 + iVar12;
         if (iVar12 < iVar18) goto LAB_001034c8;
      }
 else {
         if (uVar9 <= *(uint*)( xid_continue + (long)iVar14 * 8 + 4 )) break;
         iVar18 = iVar14 + 1;
         iVar14 = iVar18 + iVar12;
         if (iVar12 < iVar18) {
            LAB_001034c8:piVar4 = *(int**)( in_RSI + 0x38 );
            iVar18 = (int)( *(long*)( in_RSI + 0x18 ) - (long)piVar4 >> 2 );
            if (iVar18 == 1) {
               if (( ( -1 < iVar8 + -1 ) && ( iVar8 + -1 < *(int*)( in_RSI + 0x120 ) ) ) && ( *(int*)( *(long*)( in_RSI + 0x18 ) + -4 ) == 0x5f )) {
                  make_token(&local_88);
                  Variant::Variant((Variant*)local_a8, "_");
                  if (( &Variant::needs_deinit )[(int)local_80._0_4_] != '\0') {
                     Variant::_clear_internal();
                  }

                  uStack_70 = uStack_98;
                  *(int*)in_RDI = (int)local_88;
                  local_80._8_8_ = local_a0;
                  *(int*)( in_RDI + 8 ) = local_a8[0];
                  *(undefined8*)( in_RDI + 0x10 ) = local_a0;
                  *(undefined8*)( in_RDI + 0x18 ) = uStack_98;
                  *(undefined8*)( in_RDI + 0x30 ) = local_58;
                  *(undefined8*)( in_RDI + 0x20 ) = local_68;
                  *(undefined8*)( in_RDI + 0x28 ) = uStack_60;
                  *(undefined8*)( in_RDI + 0x38 ) = local_50;
                  *(undefined8*)( in_RDI + 0x40 ) = local_48;
                  goto LAB_0010361d;
               }

               if (piVar4 != (int*)0x0) {
                  LAB_0010350e:iVar8 = 0;
                  piVar10 = piVar4;
                  goto LAB_0010351f;
               }

            }
 else if (piVar4 != (int*)0x0) {
               if (iVar18 < 0) {
                  piVar10 = piVar4;
                  if (*piVar4 != 0) goto LAB_00103670;
               }
 else if (iVar18 != 0) goto LAB_0010350e;
            }

            local_b0 = 0;
            goto LAB_0010352b;
         }

      }

      iVar14 = iVar14 / 2;
      uVar13 = *(uint*)( xid_continue + (long)iVar14 * 8 );
   }
 while ( true );
   uVar9 = _advance(in_RSI);
   iVar8 = *(int*)( in_RSI + 0x11c );
   bVar19 = (bool)( bVar19 & uVar9 < 0x80 );
   goto LAB_00103458;
   LAB_00103670:do {
      piVar2 = piVar10 + 1;
      piVar10 = piVar10 + 1;
   }
 while ( *piVar2 != 0 );
   local_b0 = (long)piVar10 - (long)piVar4 >> 2;
   goto LAB_0010352b;
   while (iVar8 = iVar8 + 1,iVar8 < iVar18) {
      LAB_0010351f:iVar14 = *piVar10;
      piVar10 = piVar10 + 1;
      if (iVar14 == 0) break;
   }
;
   local_b0 = (long)iVar8;
   LAB_0010352b:local_d8 = 0;
   local_b8 = piVar4;
   String::parse_utf32((StrRange*)&local_d8);
   if (8 < iVar18 - 2U) goto LAB_001035c1;
   if (!bVar19) {
      StringName::StringName((StringName*)&local_b8, (String*)&local_d8, false);
      make_identifier((StringName*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_b8 != (int*)0x0 )) {
         StringName::unref();
      }

      pOVar15 = *(Object**)( TextServerManager::singleton + 0x178 );
      if (pOVar15 == (Object*)0x0) {
         GDScriptTokenizerText_potential_identifier:/* WARNING: Does not return */pcVar5 = (code*)invalidInstructionException();
         ( *pcVar5 )();
      }

      cVar7 = RefCounted::reference();
      if (cVar7 == '\0') {
         pOVar15 = (Object*)0x0;
      }

      cVar7 = ( **(code**)( *(long*)pOVar15 + 0x150 ) )(pOVar15);
      cVar6 = RefCounted::unreference();
      if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler(pOVar15) ),cVar6 != '\0') {
         ( **(code**)( *(long*)pOVar15 + 0x140 ) )(pOVar15);
         Memory::free_static(pOVar15, false);
      }

      if (cVar7 != '\0') {
         pOVar15 = *(Object**)( TextServerManager::singleton + 0x178 );
         if (pOVar15 == (Object*)0x0) goto GDScriptTokenizerText_potential_identifier;
         cVar7 = RefCounted::reference();
         if (cVar7 == '\0') {
            pOVar15 = (Object*)0x0;
         }

         if (*(code**)( *(long*)pOVar15 + 0x7e8 ) == TextServer::is_confusable) {
            cVar7 = RefCounted::unreference();
            if (cVar7 != '\0') {
               lVar17 = -1;
               cVar7 = predelete_handler(pOVar15);
               if (cVar7 != '\0') goto LAB_001039b7;
            }

         }
 else {
            lVar17 = ( **(code**)( *(long*)pOVar15 + 0x7e8 ) )(pOVar15, &local_d8, in_RSI + 0x138);
            cVar7 = RefCounted::unreference();
            if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler(pOVar15) ),cVar7 != '\0') {
               LAB_001039b7:( **(code**)( *(long*)pOVar15 + 0x140 ) )(pOVar15);
               Memory::free_static(pOVar15, false);
            }

            if (-1 < lVar17) {
               lVar11 = *(long*)( in_RSI + 0x140 );
               if (lVar11 == 0) {
                  lVar16 = 0;
                  LAB_00104153:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar17, lVar16, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }

               lVar16 = *(long*)( lVar11 + -8 );
               if (lVar16 <= lVar17) goto LAB_00104153;
               local_c0 = 0;
               plVar3 = (long*)( lVar11 + lVar17 * 8 );
               lVar17 = *plVar3;
               plVar1 = (long*)( lVar17 + -0x10 );
               if (lVar17 != 0) {
                  do {
                     lVar17 = *plVar1;
                     if (lVar17 == 0) goto LAB_00103a2e;
                     LOCK();
                     lVar11 = *plVar1;
                     bVar19 = lVar17 == lVar11;
                     if (bVar19) {
                        *plVar1 = lVar17 + 1;
                        lVar11 = lVar17;
                     }

                     UNLOCK();
                  }
 while ( !bVar19 );
                  if (lVar11 != -1) {
                     local_c0 = *plVar3;
                  }

               }

               LAB_00103a2e:local_c8 = 0;
               plVar1 = (long*)( local_d8 + -0x10 );
               if (local_d8 != 0) {
                  do {
                     lVar17 = *plVar1;
                     if (lVar17 == 0) goto LAB_00103a66;
                     LOCK();
                     lVar11 = *plVar1;
                     bVar19 = lVar17 == lVar11;
                     if (bVar19) {
                        *plVar1 = lVar17 + 1;
                        lVar11 = lVar17;
                     }

                     UNLOCK();
                  }
 while ( !bVar19 );
                  if (lVar11 != -1) {
                     local_c8 = local_d8;
                  }

               }

               LAB_00103a66:local_d0 = 0;
               local_b8 = (int*)0x10a578;
               local_b0 = 0x56;
               String::parse_latin1((StrRange*)&local_d0);
               vformat<String,String>((StringName*)&local_b8, (StrRange*)&local_d0, &local_c8, &local_c0);
               push_error((String*)in_RSI);
               piVar4 = local_b8;
               if (local_b8 != (int*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_b8 + -4 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_b8 = (int*)0x0;
                     Memory::free_static(piVar4 + -4, false);
                  }

               }

               lVar17 = local_d0;
               if (local_d0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_d0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_d0 = 0;
                     Memory::free_static((void*)( lVar17 + -0x10 ), false);
                  }

               }

               lVar17 = local_c8;
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

               lVar17 = local_c0;
               if (local_c0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_c0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_c0 = 0;
                     Memory::free_static((void*)( lVar17 + -0x10 ), false);
                  }

               }

            }

         }

      }

      *(int*)in_RDI = (int)local_88;
      *(undefined8*)( in_RDI + 0x10 ) = local_80._8_8_;
      *(undefined8*)( in_RDI + 0x18 ) = uStack_70;
      *(undefined4*)( in_RDI + 8 ) = local_80._0_4_;
      *(undefined8*)( in_RDI + 0x20 ) = local_68;
      *(undefined8*)( in_RDI + 0x28 ) = uStack_60;
      *(undefined8*)( in_RDI + 0x30 ) = local_58;
      *(undefined8*)( in_RDI + 0x38 ) = local_50;
      *(undefined8*)( in_RDI + 0x40 ) = local_48;
      goto LAB_001035f5;
   }

   switch (**(undefined4**)( in_RSI + 0x38 )) {
      case 0x49:
    if (iVar18 != 3) goto switchD_00103576_caseD_4a;
    cVar7 = String::operator==((String *)&local_d8,"INF");
    break;
      default:
switchD_00103576_caseD_4a:
    if (iVar18 == 4) {
LAB_001038cd:
      cVar7 = String::operator==((String *)&local_d8,"true");
      if (cVar7 != '\0') {
        bVar19 = true;
        goto LAB_00103986;
      }
      cVar7 = String::operator==((String *)&local_d8,"null");
      if (cVar7 == '\0') goto LAB_001035c1;
      local_88 = 0;
      local_80 = (undefined1  [16])0x0;
      make_token();
      goto LAB_00103922;
    }
LAB_001035b7:
    if (iVar18 == 5) goto LAB_00103878;
    goto LAB_001035c1;
      case 0x4e:
    if (iVar18 != 3) goto switchD_00103576_caseD_4a;
    cVar7 = String::operator==((String *)&local_d8,"NAN");
    break;
      case 0x50:
    if (iVar18 != 2) goto switchD_00103576_caseD_4a;
    cVar7 = String::operator==((String *)&local_d8,"PI");
    break;
      case 0x54:
    if (iVar18 != 3) goto switchD_00103576_caseD_4a;
    cVar7 = String::operator==((String *)&local_d8,"TAU");
    if (cVar7 == '\0') goto LAB_001035c1;
LAB_00103b98:
    make_token(&local_88);
    Variant::Variant((Variant *)local_a8,(String *)&local_d8);
    if ((&Variant::needs_deinit)[(int)local_80._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    local_80._0_4_ = local_a8[0];
    local_80._8_8_ = local_a0;
    uStack_70 = uStack_98;
    goto LAB_00103bd9;
      case 0x61:
    if (iVar18 == 2) {
      cVar7 = String::operator==((String *)&local_d8,"as");
      if (cVar7 != '\0') {
LAB_0010424d:
        make_token(&local_88);
        Variant::Variant((Variant *)local_a8,(String *)&local_d8);
        if ((&Variant::needs_deinit)[(int)local_80._0_4_] != '\0') {
          Variant::_clear_internal();
        }
        local_80._0_4_ = local_a8[0];
        local_80._8_8_ = local_a0;
        uStack_70 = uStack_98;
        goto LAB_00103bd9;
      }
    }
    else {
      if (iVar18 != 3) {
        if (iVar18 != 6) {
          if (iVar18 != 5) goto LAB_001038c3;
          cVar7 = String::operator==((String *)&local_d8,"await");
          goto joined_r0x00103872;
        }
        cVar7 = String::operator==((String *)&local_d8,"assert");
        break;
      }
      cVar7 = String::operator==((String *)&local_d8,"and");
joined_r0x00103eb7:
      if (cVar7 != '\0') goto LAB_00103c30;
    }
    goto LAB_001035c1;
      case 0x62:
    if (iVar18 == 5) {
      cVar7 = String::operator==((String *)&local_d8,"break");
      goto joined_r0x00103872;
    }
    if (iVar18 == 10) {
      cVar7 = String::operator==((String *)&local_d8,"breakpoint");
      goto joined_r0x00103eb7;
    }
LAB_001038c3:
    if (iVar18 == 4) goto LAB_001038cd;
    goto LAB_001035c1;
      case 99:
    if (iVar18 == 5) {
      cVar7 = String::operator==((String *)&local_d8,"class");
      if (cVar7 == '\0') {
        cVar7 = String::operator==((String *)&local_d8,"const");
        goto joined_r0x00103872;
      }
      goto LAB_00103c30;
    }
    if (iVar18 == 10) {
      cVar7 = String::operator==((String *)&local_d8,"class_name");
    }
    else {
      if (iVar18 != 8) goto LAB_001038c3;
      cVar7 = String::operator==((String *)&local_d8,"continue");
    }
    break;
      case 0x65:
    if (iVar18 != 4) {
      if (iVar18 == 7) {
        cVar7 = String::operator==((String *)&local_d8,"extends");
        break;
      }
      goto LAB_001035b7;
    }
    cVar7 = String::operator==((String *)&local_d8,"elif");
    if (cVar7 == '\0') {
      cVar7 = String::operator==((String *)&local_d8,"else");
      if (cVar7 == '\0') {
        cVar7 = String::operator==((String *)&local_d8,"enum");
        goto joined_r0x00103d67;
      }
      goto LAB_00103c30;
    }
LAB_00103e0b:
    make_token(&local_88);
    Variant::Variant((Variant *)local_a8,(String *)&local_d8);
    if ((&Variant::needs_deinit)[(int)local_80._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    uStack_70 = uStack_98;
    local_80._0_4_ = local_a8[0];
    local_80._8_8_ = local_a0;
    goto LAB_00103bd9;
      case 0x66:
    if (iVar18 != 3) {
      if (iVar18 != 4) goto LAB_001035b7;
      cVar7 = String::operator==((String *)&local_d8,"func");
joined_r0x00103d67:
      if (cVar7 != '\0') goto LAB_00103c30;
      goto LAB_001038cd;
    }
    cVar7 = String::operator==((String *)&local_d8,"for");
    if (cVar7 != '\0') goto LAB_00103b98;
    goto LAB_001035c1;
      case 0x69:
    if (iVar18 != 2) goto switchD_00103576_caseD_4a;
    cVar7 = String::operator==((String *)&local_d8,"if");
    if (cVar7 == '\0') {
      cVar7 = String::operator==((String *)&local_d8,"in");
      if (cVar7 != '\0') goto LAB_00103c30;
      cVar7 = String::operator==((String *)&local_d8,"is");
      break;
    }
    make_token(&local_88);
    Variant::Variant((Variant *)local_a8,(String *)&local_d8);
    if ((&Variant::needs_deinit)[(int)local_80._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    local_80._0_4_ = local_a8[0];
    local_80._8_8_ = local_a0;
    uStack_70 = uStack_98;
    goto LAB_00103bd9;
      case 0x6d:
    if (iVar18 != 5) goto LAB_001038c3;
    cVar7 = String::operator==((String *)&local_d8,"match");
    if (cVar7 == '\0') goto LAB_00103878;
    make_token(&local_88);
    Variant::Variant((Variant *)local_a8,(String *)&local_d8);
    if ((&Variant::needs_deinit)[(int)local_80._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    local_80._0_4_ = local_a8[0];
    local_80._8_8_ = local_a0;
    uStack_70 = uStack_98;
    goto LAB_00103bd9;
      case 0x6e:
    if (iVar18 != 9) {
      if (iVar18 == 3) {
        cVar7 = String::operator==((String *)&local_d8,"not");
        goto joined_r0x00103eb7;
      }
      goto switchD_00103576_caseD_4a;
    }
    cVar7 = String::operator==((String *)&local_d8,"namespace");
    if (cVar7 == '\0') goto LAB_001035c1;
    make_token(&local_88);
    Variant::Variant((Variant *)local_a8,(String *)&local_d8);
    if ((&Variant::needs_deinit)[(int)local_80._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    local_80._0_4_ = local_a8[0];
    local_80._8_8_ = local_a0;
    uStack_70 = uStack_98;
    goto LAB_00103bd9;
      case 0x6f:
    if (iVar18 != 2) goto switchD_00103576_caseD_4a;
    cVar7 = String::operator==((String *)&local_d8,"or");
    break;
      case 0x70:
    if (iVar18 == 4) {
      cVar7 = String::operator==((String *)&local_d8,"pass");
joined_r0x00103d27:
      if (cVar7 == '\0') goto LAB_001038cd;
      goto LAB_00103c30;
    }
    if (iVar18 != 7) goto LAB_001035b7;
    cVar7 = String::operator==((String *)&local_d8,"preload");
    break;
      case 0x72:
    if (iVar18 != 6) goto switchD_00103576_caseD_4a;
    cVar7 = String::operator==((String *)&local_d8,"return");
    if (cVar7 == '\0') goto LAB_001035c1;
    make_token(&local_88);
    Variant::Variant((Variant *)local_a8,(String *)&local_d8);
    if ((&Variant::needs_deinit)[(int)local_80._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    local_80._0_4_ = local_a8[0];
    local_80._8_8_ = local_a0;
    uStack_70 = uStack_98;
    goto LAB_00103bd9;
      case 0x73:
    if (iVar18 == 4) {
      cVar7 = String::operator==((String *)&local_d8,"self");
      goto joined_r0x00103d27;
    }
    if (iVar18 != 6) {
      if (iVar18 != 5) goto LAB_001035c1;
      cVar7 = String::operator==((String *)&local_d8,"super");
      goto joined_r0x00103872;
    }
    cVar7 = String::operator==((String *)&local_d8,"signal");
    if (cVar7 != '\0') goto LAB_00103c30;
    cVar7 = String::operator==((String *)&local_d8,"static");
    break;
      case 0x74:
    if (iVar18 != 5) goto LAB_001038c3;
    cVar7 = String::operator==((String *)&local_d8,"trait");
joined_r0x00103872:
    if (cVar7 == '\0') goto LAB_00103878;
    goto LAB_00103c30;
      case 0x76:
    if (iVar18 != 3) {
      if (iVar18 != 4) goto LAB_001035b7;
      cVar7 = String::operator==((String *)&local_d8,"void");
      goto joined_r0x00103d27;
    }
    cVar7 = String::operator==((String *)&local_d8,"var");
    break;
      case 0x77:
    if (iVar18 == 5) {
      cVar7 = String::operator==((String *)&local_d8,"while");
      if (cVar7 != '\0') goto LAB_0010424d;
      goto LAB_00103878;
    }
    if (iVar18 == 4) {
      cVar7 = String::operator==((String *)&local_d8,"when");
      goto joined_r0x00103d27;
    }
    goto LAB_001035c1;
      case 0x79:
    if (iVar18 != 5) goto LAB_001038c3;
    cVar7 = String::operator==((String *)&local_d8,"yield");
    if (cVar7 != '\0') goto LAB_00103e0b;
LAB_00103878:
    cVar7 = String::operator==((String *)&local_d8,"false");
    if (cVar7 != '\0') {
      bVar19 = false;
LAB_00103986:
      Variant::Variant((Variant *)&local_88,bVar19);
      make_token();
LAB_00103922:
      Variant::operator=((Variant *)(in_RDI + 8),(Variant *)&local_88);
      if ((&Variant::needs_deinit)[(int)local_88] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001035f5;
    }
    goto LAB_001035c1;
   }

   if (cVar7 == '\0') {
      LAB_001035c1:StringName::StringName((StringName*)&local_b8, (String*)&local_d8, false);
      make_identifier(in_RDI);
      if (( StringName::configured != '\0' ) && ( local_b8 != (int*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      LAB_00103c30:make_token(&local_88);
      Variant::Variant((Variant*)local_a8, (String*)&local_d8);
      Variant::operator =((Variant*)local_80, (Variant*)local_a8);
      if (( &Variant::needs_deinit )[local_a8[0]] != '\0') {
         Variant::_clear_internal();
      }

      LAB_00103bd9:GDScriptTokenizer::Token::Token((Token*)in_RDI, (Token*)&local_88);
      GDScriptTokenizer::Token::~Token((Token*)&local_88);
   }

   LAB_001035f5:lVar17 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar1 = (long*)( local_d8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar17 + -0x10 ), false);
      }

   }

   LAB_0010361d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GDScriptTokenizerText::check_vcs_marker(char32_t, GDScriptTokenizer::Token::Type) */undefined8 GDScriptTokenizerText::check_vcs_marker(undefined8 param_1, GDScriptTokenizerText *param_2, int param_3, undefined4 param_4) {
   int iVar1;
   long lVar2;
   int iVar3;
   int *piVar4;
   int iVar5;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == *(int*)( *(long*)( param_2 + 0x18 ) + 4 )) {
      piVar4 = (int*)( *(long*)( param_2 + 0x18 ) + 4 );
      iVar5 = 2;
      do {
         piVar4 = piVar4 + 1;
         iVar5 = iVar5 + 1;
      }
 while ( *piVar4 == param_3 );
      if (6 < iVar5) {
         do {
            if (*(int*)( param_2 + 0x11c ) < *(int*)( param_2 + 0x120 )) {
               iVar3 = *(int*)( param_2 + 0x11c ) + 1;
               *(long*)( param_2 + 0x18 ) = *(long*)( param_2 + 0x18 ) + 4;
               *(int*)( param_2 + 0x11c ) = iVar3;
               iVar1 = *(int*)( param_2 + 0x24 ) + 1;
               *(int*)( param_2 + 0x24 ) = iVar1;
               if (*(int*)( param_2 + 0x4c ) < iVar1) {
                  *(int*)( param_2 + 0x4c ) = iVar1;
               }

               if (*(int*)( param_2 + 0x120 ) <= iVar3) {
                  newline(param_2, true);
                  check_indent(param_2);
               }

            }

            iVar5 = iVar5 + -1;
         }
 while ( iVar5 != 1 );
         make_token(param_1, param_2, 0x5e);
         goto LAB_00104663;
      }

   }

   _advance(param_2);
   make_token(param_1, param_2, param_4);
   LAB_00104663:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GDScriptTokenizerText::number() */int *GDScriptTokenizerText::number(void) {
   long *plVar1;
   int *piVar2;
   bool bVar3;
   bool bVar4;
   bool bVar5;
   bool bVar6;
   bool bVar7;
   char cVar8;
   int iVar9;
   int iVar10;
   uint *puVar11;
   long lVar12;
   int *piVar13;
   undefined1(*pauVar14)[16];
   int iVar15;
   int iVar16;
   GDScriptTokenizerText *in_RSI;
   uint uVar17;
   int *in_RDI;
   uint uVar18;
   bool bVar19;
   code *pcVar20;
   long in_FS_OFFSET;
   undefined8 uVar21;
   double dVar22;
   int local_d4;
   StrRange *local_d0;
   String *local_c8;
   long local_a0;
   int *local_98;
   long local_90;
   int local_88[2];
   int local_80[2];
   undefined8 local_78;
   undefined8 uStack_70;
   int local_68;
   int local_64;
   int local_60;
   int iStack_5c;
   int iStack_58;
   int iStack_54;
   int local_50;
   int iStack_4c;
   long local_48;
   long local_40;
   iVar10 = *(int*)( in_RSI + 0x11c );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( iVar10 + -1 < 0 ) || ( iVar15 = *(int*)( in_RSI + 0x120 ) ),iVar15 <= iVar10 + -1) {
      LAB_0010470a:bVar4 = false;
      bVar19 = false;
      pcVar20 = is_digit;
      local_d4 = 10;
   }
 else {
      puVar11 = *(uint**)( in_RSI + 0x18 );
      if (( ( puVar11[-1] - 0x2b & 0xfffffffd ) == 0 ) && ( ( iVar10 < iVar15 && ( *puVar11 == 0x30 ) ) )) {
         _advance(in_RSI);
         iVar10 = *(int*)( in_RSI + 0x11c );
         if (iVar10 + -1 < 0) {
            bVar19 = false;
            bVar4 = false;
            local_d4 = 10;
            pcVar20 = is_digit;
            bVar7 = false;
            goto LAB_00104741;
         }

         iVar15 = *(int*)( in_RSI + 0x120 );
         if (iVar15 <= iVar10 + -1) goto LAB_0010470a;
         puVar11 = *(uint**)( in_RSI + 0x18 );
      }

      uVar17 = puVar11[-1];
      if (uVar17 == 0x2e) {
         bVar4 = true;
         bVar19 = false;
         pcVar20 = is_digit;
         local_d4 = 10;
      }
 else {
         bVar19 = iVar10 < iVar15 && uVar17 == 0x30;
         if (iVar10 >= iVar15 || uVar17 != 0x30) goto LAB_0010470a;
         if (( *puVar11 & 0xffffffdf ) == 0x58) {
            pcVar20 = is_hex_digit;
            _advance(in_RSI);
            local_d4 = 0x10;
         }
 else {
            if (( *puVar11 & 0xffffffdf ) != 0x42) goto LAB_0010470a;
            pcVar20 = is_binary_digit;
            _advance(in_RSI);
            local_d4 = 2;
         }

         if (( ( -1 < *(int*)( in_RSI + 0x11c ) ) && ( *(int*)( in_RSI + 0x11c ) < *(int*)( in_RSI + 0x120 ) ) ) && ( **(int**)( in_RSI + 0x18 ) == 0x5f )) {
            local_a0 = 0;
            local_98 = (int*)0x10a5d0;
            local_90 = 0x22;
            String::parse_latin1((StrRange*)&local_a0);
            vformat<char32_t>((String*)&local_98, (wchar32)(StrRange*)&local_a0);
            make_error((String*)local_88);
            piVar13 = local_98;
            if (local_98 != (int*)0x0) {
               LOCK();
               plVar1 = (long*)( (long)local_98 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98 = (int*)0x0;
                  Memory::free_static((char*)( (long)piVar13 + -0x10 ), false);
               }

            }

            lVar12 = local_a0;
            if (local_a0 != 0) {
               LOCK();
               plVar1 = (long*)( local_a0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_a0 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            iStack_54 = *(int*)( in_RSI + 0x24 );
            local_60 = iStack_54 + __LC105;
            iStack_5c = iStack_54 + _UNK_00111b04;
            iStack_58 = iStack_54 + _UNK_00111b08;
            iStack_54 = iStack_54 + _UNK_00111b0c;
            if (*(long*)( in_RSI + 0x58 ) == 0) {
               pauVar14 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( in_RSI + 0x58 ) = pauVar14;
               *(undefined4*)pauVar14[1] = 0;
               *pauVar14 = (undefined1[16])0x0;
            }

            piVar13 = (int*)operator_new(0x60, DefaultAllocator::alloc);
            *(undefined1(*) [16])( piVar13 + 4 ) = (undefined1[16])0x0;
            *piVar13 = 0;
            *(undefined1(*) [16])( piVar13 + 8 ) = (undefined1[16])0x0;
            piVar13[2] = 0;
            piVar13[0xc] = 0;
            piVar13[0xd] = 0;
            piVar13[0xe] = -1;
            piVar13[0xf] = 0;
            *(undefined1(*) [16])( piVar13 + 0x10 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( piVar13 + 0x14 ) = (undefined1[16])0x0;
            *piVar13 = local_88[0];
            Variant::operator =((Variant*)( piVar13 + 2 ), (Variant*)local_80);
            piVar13[8] = local_68;
            piVar13[9] = local_64;
            piVar13[10] = local_60;
            piVar13[0xb] = iStack_5c;
            piVar13[0xc] = iStack_58;
            piVar13[0xd] = iStack_54;
            piVar13[0xe] = local_50;
            piVar13[0xf] = iStack_4c;
            if (*(long*)( piVar13 + 0x10 ) != local_48) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( piVar13 + 0x10 ), (CowData*)&local_48);
            }

            lVar12 = local_48;
            uVar21 = *(undefined8*)( *(long*)( in_RSI + 0x58 ) + 8 );
            *(long*)( piVar13 + 0x16 ) = *(long*)( in_RSI + 0x58 );
            plVar1 = *(long**)( in_RSI + 0x58 );
            piVar13[0x12] = 0;
            piVar13[0x13] = 0;
            *(undefined8*)( piVar13 + 0x14 ) = uVar21;
            if (plVar1[1] != 0) {
               *(int**)( plVar1[1] + 0x48 ) = piVar13;
            }

            plVar1[1] = (long)piVar13;
            if (*plVar1 == 0) {
               *plVar1 = (long)piVar13;
            }

            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            if (local_48 != 0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            if (( &Variant::needs_deinit )[local_80[0]] != '\0') {
               Variant::_clear_internal();
            }

            bVar4 = false;
            bVar7 = bVar19;
            goto LAB_00104741;
         }

         bVar4 = false;
      }

   }

   bVar7 = false;
   LAB_00104741:local_c8 = (String*)local_88;
   local_d0 = (StrRange*)&local_a0;
   bVar3 = false;
   do {
      cVar8 = ( *pcVar20 )();
      if (cVar8 == '\0') {
         iVar10 = *(int*)( in_RSI + 0x11c );
         bVar5 = false;
         bVar6 = bVar4;
         if (iVar10 < 0) {
            if (local_d4 == 10) goto LAB_0010494b;
            goto LAB_00104790;
         }

         iVar15 = *(int*)( in_RSI + 0x120 );
         if (iVar15 <= iVar10) {
            if (local_d4 != 10) goto LAB_00104790;
            goto LAB_00104ac5;
         }

         puVar11 = *(uint**)( in_RSI + 0x18 );
         if (*puVar11 != 0x5f) break;
         if (*puVar11 != 0x5f) goto LAB_00104853;
         LAB_00104882:if (bVar3) {
            local_a0 = 0;
            local_98 = (int*)0x10a5f8;
            local_90 = 0x3d;
            String::parse_latin1(local_d0);
            make_error(local_c8);
            lVar12 = local_a0;
            if (local_a0 != 0) {
               LOCK();
               plVar1 = (long*)( local_a0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_a0 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            iStack_54 = *(int*)( in_RSI + 0x24 );
            local_60 = iStack_54 + __LC105;
            iStack_5c = iStack_54 + _UNK_00111b04;
            iStack_58 = iStack_54 + _UNK_00111b08;
            iStack_54 = iStack_54 + _UNK_00111b0c;
            if (*(long*)( in_RSI + 0x58 ) == 0) {
               pauVar14 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( in_RSI + 0x58 ) = pauVar14;
               *(undefined4*)pauVar14[1] = 0;
               *pauVar14 = (undefined1[16])0x0;
            }

            piVar13 = (int*)operator_new(0x60, DefaultAllocator::alloc);
            *(undefined1(*) [16])( piVar13 + 4 ) = (undefined1[16])0x0;
            *piVar13 = 0;
            *(undefined1(*) [16])( piVar13 + 8 ) = (undefined1[16])0x0;
            piVar13[2] = 0;
            piVar13[0xc] = 0;
            piVar13[0xd] = 0;
            piVar13[0xe] = -1;
            piVar13[0xf] = 0;
            *(undefined1(*) [16])( piVar13 + 0x10 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( piVar13 + 0x14 ) = (undefined1[16])0x0;
            *piVar13 = local_88[0];
            Variant::operator =((Variant*)( piVar13 + 2 ), (Variant*)local_80);
            piVar13[8] = local_68;
            piVar13[9] = local_64;
            piVar13[10] = local_60;
            piVar13[0xb] = iStack_5c;
            piVar13[0xc] = iStack_58;
            piVar13[0xd] = iStack_54;
            piVar13[0xe] = local_50;
            piVar13[0xf] = iStack_4c;
            if (*(long*)( piVar13 + 0x10 ) != local_48) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( piVar13 + 0x10 ), (CowData*)&local_48);
            }

            lVar12 = local_48;
            uVar21 = *(undefined8*)( *(long*)( in_RSI + 0x58 ) + 8 );
            *(long*)( piVar13 + 0x16 ) = *(long*)( in_RSI + 0x58 );
            plVar1 = *(long**)( in_RSI + 0x58 );
            piVar13[0x12] = 0;
            piVar13[0x13] = 0;
            *(undefined8*)( piVar13 + 0x14 ) = uVar21;
            if (plVar1[1] != 0) {
               *(int**)( plVar1[1] + 0x48 ) = piVar13;
            }

            plVar1[1] = (long)piVar13;
            if (*plVar1 == 0) {
               *plVar1 = (long)piVar13;
            }

            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            if (local_48 != 0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            if (( &Variant::needs_deinit )[local_80[0]] != '\0') {
               Variant::_clear_internal();
            }

         }

         bVar3 = true;
      }
 else {
         if (( ( -1 < *(int*)( in_RSI + 0x11c ) ) && ( *(int*)( in_RSI + 0x11c ) < *(int*)( in_RSI + 0x120 ) ) ) && ( **(int**)( in_RSI + 0x18 ) == 0x5f )) goto LAB_00104882;
         LAB_00104853:bVar3 = false;
         bVar19 = false;
      }

      _advance(in_RSI);
   }
 while ( true );
   if (( *puVar11 == 0x2e ) && ( ( iVar15 <= iVar10 + 1 || ( puVar11[1] != 0x2e ) ) )) {
      bVar6 = (bool)( local_d4 == 10 & ( bVar4 ^ 1U ) );
      if (bVar6) {
         bVar4 = bVar7;
         if (bVar7) goto LAB_00104ab7;
         _advance(in_RSI);
         iVar10 = *(int*)( in_RSI + 0x11c );
         if (-1 < iVar10) {
            if (*(int*)( in_RSI + 0x120 ) <= iVar10) {
               bVar7 = false;
               goto LAB_00105bb6;
            }

            bVar7 = false;
            if (**(int**)( in_RSI + 0x18 ) == 0x5f) {
               local_a0 = 0;
               local_98 = (int*)0x10a6d0;
               local_90 = 0x2a;
               String::parse_latin1(local_d0);
               make_error(local_c8);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
               iStack_54 = *(int*)( in_RSI + 0x24 );
               local_60 = iStack_54 + __LC105;
               iStack_5c = iStack_54 + _UNK_00111b04;
               iStack_58 = iStack_54 + _UNK_00111b08;
               iStack_54 = iStack_54 + _UNK_00111b0c;
               List<GDScriptTokenizer::Token,DefaultAllocator>::push_back((List<GDScriptTokenizer::Token,DefaultAllocator>*)( in_RSI + 0x58 ), (Token*)local_c8);
               GDScriptTokenizer::Token::~Token((Token*)local_c8);
               iVar10 = *(int*)( in_RSI + 0x11c );
               bVar7 = bVar6;
               if (iVar10 < 0) goto LAB_0010494b;
            }

            bVar4 = false;
            do {
               if (*(int*)( in_RSI + 0x120 ) <= iVar10) goto LAB_00105bb6;
               if (**(int**)( in_RSI + 0x18 ) - 0x30U < 10) {
                  bVar3 = false;
               }
 else {
                  if (**(int**)( in_RSI + 0x18 ) != 0x5f) goto LAB_00105bb6;
                  bVar3 = bVar6;
                  if (bVar4) {
                     local_a0 = 0;
                     local_98 = (int*)0x10a5f8;
                     local_90 = 0x3d;
                     String::parse_latin1(local_d0);
                     make_error(local_c8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
                     iStack_54 = *(int*)( in_RSI + 0x24 );
                     local_60 = iStack_54 + __LC105;
                     iStack_5c = iStack_54 + _UNK_00111b04;
                     iStack_58 = iStack_54 + _UNK_00111b08;
                     iStack_54 = iStack_54 + _UNK_00111b0c;
                     List<GDScriptTokenizer::Token,DefaultAllocator>::push_back((List<GDScriptTokenizer::Token,DefaultAllocator>*)( in_RSI + 0x58 ), (Token*)local_c8);
                     GDScriptTokenizer::Token::~Token((Token*)local_c8);
                  }

               }

               bVar4 = bVar3;
               _advance(in_RSI);
               iVar10 = *(int*)( in_RSI + 0x11c );
            }
 while ( -1 < iVar10 );
         }

         LAB_0010494b:if (bVar19) goto LAB_00104990;
         bVar5 = false;
         bVar19 = (bool)( ( bVar7 ^ 1U ) & bVar6 );
         LAB_001047a8:if (bVar19) {
            if (-1 < iVar10) {
               iVar15 = *(int*)( in_RSI + 0x120 );
               bVar19 = bVar6;
               goto LAB_001047c0;
            }

            uVar17 = 0;
            goto LAB_001047e8;
         }

      }
 else {
         if (local_d4 == 10) {
            local_98 = (int*)0x10a638;
            local_a0 = 0;
            local_90 = 0x2d;
            String::parse_latin1(local_d0);
            make_error(local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
            iStack_54 = *(int*)( in_RSI + 0x24 );
            local_60 = iStack_54 + __LC105;
            iStack_5c = iStack_54 + _UNK_00111b04;
            iStack_58 = iStack_54 + _UNK_00111b08;
            iStack_54 = iStack_54 + _UNK_00111b0c;
            List<GDScriptTokenizer::Token,DefaultAllocator>::push_back((List<GDScriptTokenizer::Token,DefaultAllocator>*)( in_RSI + 0x58 ), (Token*)local_c8);
            lVar12 = local_48;
            if (local_48 != 0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            if (( &Variant::needs_deinit )[local_80[0]] != '\0') {
               Variant::_clear_internal();
            }

            iVar10 = *(int*)( in_RSI + 0x11c );
            bVar7 = true;
            bVar6 = bVar4;
            LAB_00105bb6:if (iVar10 < 0) goto LAB_0010494b;
            iVar15 = *(int*)( in_RSI + 0x120 );
            if (iVar10 < iVar15) {
               puVar11 = *(uint**)( in_RSI + 0x18 );
               bVar4 = bVar6;
               goto LAB_00104ab7;
            }

            goto LAB_00104ac5;
         }

         local_a0 = 0;
         if (local_d4 != 0x10) {
            local_90 = 0x2e;
            local_98 = (int*)0x10a6a0;
            String::parse_latin1(local_d0);
            make_error(local_c8);
            lVar12 = local_a0;
            if (local_a0 != 0) {
               LOCK();
               plVar1 = (long*)( local_a0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_a0 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            iStack_54 = *(int*)( in_RSI + 0x24 );
            local_60 = iStack_54 + __LC105;
            iStack_5c = iStack_54 + _UNK_00111b04;
            iStack_58 = iStack_54 + _UNK_00111b08;
            iStack_54 = iStack_54 + _UNK_00111b0c;
            if (*(long*)( in_RSI + 0x58 ) == 0) {
               pauVar14 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( in_RSI + 0x58 ) = pauVar14;
               *(undefined4*)pauVar14[1] = 0;
               *pauVar14 = (undefined1[16])0x0;
            }

            piVar13 = (int*)operator_new(0x60, DefaultAllocator::alloc);
            *(undefined1(*) [16])( piVar13 + 4 ) = (undefined1[16])0x0;
            *piVar13 = 0;
            *(undefined1(*) [16])( piVar13 + 8 ) = (undefined1[16])0x0;
            piVar13[2] = 0;
            piVar13[0xc] = 0;
            piVar13[0xd] = 0;
            piVar13[0xe] = -1;
            piVar13[0xf] = 0;
            *(undefined1(*) [16])( piVar13 + 0x10 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( piVar13 + 0x14 ) = (undefined1[16])0x0;
            *piVar13 = local_88[0];
            Variant::operator =((Variant*)( piVar13 + 2 ), (Variant*)local_80);
            piVar13[8] = local_68;
            piVar13[9] = local_64;
            piVar13[10] = local_60;
            piVar13[0xb] = iStack_5c;
            piVar13[0xc] = iStack_58;
            piVar13[0xd] = iStack_54;
            piVar13[0xe] = local_50;
            piVar13[0xf] = iStack_4c;
            if (*(long*)( piVar13 + 0x10 ) != local_48) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( piVar13 + 0x10 ), (CowData*)&local_48);
            }

            lVar12 = local_48;
            uVar21 = *(undefined8*)( *(long*)( in_RSI + 0x58 ) + 8 );
            *(long*)( piVar13 + 0x16 ) = *(long*)( in_RSI + 0x58 );
            plVar1 = *(long**)( in_RSI + 0x58 );
            piVar13[0x12] = 0;
            piVar13[0x13] = 0;
            *(undefined8*)( piVar13 + 0x14 ) = uVar21;
            if (plVar1[1] != 0) {
               *(int**)( plVar1[1] + 0x48 ) = piVar13;
            }

            plVar1[1] = (long)piVar13;
            if (*plVar1 == 0) {
               *plVar1 = (long)piVar13;
            }

            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            if (local_48 != 0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            if (( &Variant::needs_deinit )[local_80[0]] != '\0') {
               Variant::_clear_internal();
            }

            bVar7 = true;
            bVar5 = false;
            bVar6 = bVar4;
            LAB_00105099:if (bVar19) goto LAB_00104990;
            iVar10 = *(int*)( in_RSI + 0x11c );
            bVar19 = (bool)( ( bVar7 ^ 1U ) & bVar6 );
            goto LAB_001047a8;
         }

         local_90 = 0x33;
         local_98 = (int*)0x10a668;
         String::parse_latin1(local_d0);
         make_error(local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
         iStack_54 = *(int*)( in_RSI + 0x24 );
         local_60 = iStack_54 + __LC105;
         iStack_5c = iStack_54 + _UNK_00111b04;
         iStack_58 = iStack_54 + _UNK_00111b08;
         iStack_54 = iStack_54 + _UNK_00111b0c;
         List<GDScriptTokenizer::Token,DefaultAllocator>::push_back((List<GDScriptTokenizer::Token,DefaultAllocator>*)( in_RSI + 0x58 ), (Token*)local_c8);
         lVar12 = local_48;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar12 + -0x10 ), false);
            }

         }

         if (( &Variant::needs_deinit )[local_80[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (bVar19) goto LAB_00104977;
         iVar10 = *(int*)( in_RSI + 0x11c );
         bVar5 = false;
         bVar6 = bVar4;
      }

      LAB_00104afa:uVar17 = 0;
      if (( -1 < iVar10 ) && ( uVar17 = 0 ),iVar10 < *(int*)( in_RSI + 0x120 )) {
         LAB_00104b15:uVar17 = **(uint**)( in_RSI + 0x18 );
      }

   }
 else {
      if (local_d4 != 10) {
         LAB_00104790:if (bVar19) {
            if (local_d4 != 0x10) goto LAB_00104990;
            LAB_00104977:cVar8 = 'T';
            LAB_0010499d:local_a0 = 0;
            local_98 = (int*)0x10a728;
            local_90 = 0x1e;
            String::parse_latin1(local_d0);
            vformat<char_const*,char>((String*)&local_98, (char*)local_d0, cVar8);
            make_error(local_c8);
            piVar13 = local_98;
            if (local_98 != (int*)0x0) {
               LOCK();
               plVar1 = (long*)( local_98 + -4 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98 = (int*)0x0;
                  Memory::free_static(piVar13 + -4, false);
               }

            }

            lVar12 = local_a0;
            if (local_a0 != 0) {
               LOCK();
               plVar1 = (long*)( local_a0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_a0 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            iVar10 = *(int*)( in_RSI + 0x24 );
            *in_RDI = local_88[0];
            uVar21 = CONCAT44(iVar10 + 1, iVar10);
            in_RDI[2] = local_80[0];
            *(ulong*)( in_RDI + 0xe ) = CONCAT44(iStack_4c, local_50);
            *(undefined8*)( in_RDI + 4 ) = local_78;
            *(undefined8*)( in_RDI + 6 ) = uStack_70;
            *(long*)( in_RDI + 0x10 ) = local_48;
            *(ulong*)( in_RDI + 8 ) = CONCAT44(local_64, local_68);
            *(undefined8*)( in_RDI + 10 ) = uVar21;
            *(undefined8*)( in_RDI + 0xc ) = uVar21;
            goto LAB_00104a77;
         }

         bVar19 = (bool)( ( bVar7 ^ 1U ) & bVar6 );
         goto LAB_001047a8;
      }

      LAB_00104ab7:bVar6 = bVar4;
      if (( *puVar11 & 0xffffffdf ) == 0x45) {
         _advance(in_RSI);
         iVar10 = *(int*)( in_RSI + 0x11c );
         if (( iVar10 < 0 ) || ( *(int*)( in_RSI + 0x120 ) <= iVar10 )) {
            LAB_0010546e:local_a0 = 0;
            local_98 = (int*)0x10a700;
            local_90 = 0x22;
            String::parse_latin1(local_d0);
            make_error(local_c8);
            lVar12 = local_a0;
            if (local_a0 != 0) {
               LOCK();
               plVar1 = (long*)( local_a0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_a0 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            iStack_54 = *(int*)( in_RSI + 0x24 );
            local_60 = iStack_54 + __LC105;
            iStack_5c = iStack_54 + _UNK_00111b04;
            iStack_58 = iStack_54 + _UNK_00111b08;
            iStack_54 = iStack_54 + _UNK_00111b0c;
            if (*(long*)( in_RSI + 0x58 ) == 0) {
               pauVar14 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( in_RSI + 0x58 ) = pauVar14;
               *(undefined4*)pauVar14[1] = 0;
               *pauVar14 = (undefined1[16])0x0;
            }

            piVar13 = (int*)operator_new(0x60, DefaultAllocator::alloc);
            *(undefined1(*) [16])( piVar13 + 4 ) = (undefined1[16])0x0;
            *piVar13 = 0;
            *(undefined1(*) [16])( piVar13 + 8 ) = (undefined1[16])0x0;
            piVar13[2] = 0;
            piVar13[0xc] = 0;
            piVar13[0xd] = 0;
            piVar13[0xe] = -1;
            piVar13[0xf] = 0;
            *(undefined1(*) [16])( piVar13 + 0x10 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( piVar13 + 0x14 ) = (undefined1[16])0x0;
            *piVar13 = local_88[0];
            Variant::operator =((Variant*)( piVar13 + 2 ), (Variant*)local_80);
            piVar13[8] = local_68;
            piVar13[9] = local_64;
            piVar13[10] = local_60;
            piVar13[0xb] = iStack_5c;
            piVar13[0xc] = iStack_58;
            piVar13[0xd] = iStack_54;
            piVar13[0xe] = local_50;
            piVar13[0xf] = iStack_4c;
            if (*(long*)( piVar13 + 0x10 ) != local_48) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( piVar13 + 0x10 ), (CowData*)&local_48);
            }

            lVar12 = local_48;
            uVar21 = *(undefined8*)( *(long*)( in_RSI + 0x58 ) + 8 );
            *(long*)( piVar13 + 0x16 ) = *(long*)( in_RSI + 0x58 );
            plVar1 = *(long**)( in_RSI + 0x58 );
            piVar13[0x12] = 0;
            piVar13[0x13] = 0;
            *(undefined8*)( piVar13 + 0x14 ) = uVar21;
            if (plVar1[1] != 0) {
               *(int**)( plVar1[1] + 0x48 ) = piVar13;
            }

            plVar1[1] = (long)piVar13;
            if (*plVar1 == 0) {
               *plVar1 = (long)piVar13;
            }

            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            if (local_48 != 0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            if (( &Variant::needs_deinit )[local_80[0]] != '\0') {
               Variant::_clear_internal();
            }

            iVar10 = *(int*)( in_RSI + 0x11c );
         }
 else {
            piVar13 = *(int**)( in_RSI + 0x18 );
            if (( *piVar13 - 0x2bU & 0xfffffffd ) == 0) {
               _advance(in_RSI);
               iVar10 = *(int*)( in_RSI + 0x11c );
               if (( iVar10 < 0 ) || ( *(int*)( in_RSI + 0x120 ) <= iVar10 )) goto LAB_0010546e;
               piVar13 = *(int**)( in_RSI + 0x18 );
            }

            if (9 < *piVar13 - 0x30U) goto LAB_0010546e;
         }

         bVar4 = false;
         if (iVar10 < 0) {
            bVar5 = true;
            goto LAB_00105099;
         }

         do {
            if (*(int*)( in_RSI + 0x120 ) <= iVar10) break;
            if (**(int**)( in_RSI + 0x18 ) - 0x30U < 10) {
               bVar4 = false;
            }
 else {
               if (**(int**)( in_RSI + 0x18 ) != 0x5f) break;
               if (bVar4) {
                  local_a0 = 0;
                  local_98 = (int*)0x10a5f8;
                  local_90 = 0x3d;
                  String::parse_latin1(local_d0);
                  make_error(local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
                  iStack_54 = *(int*)( in_RSI + 0x24 );
                  local_60 = iStack_54 + __LC105;
                  iStack_5c = iStack_54 + _UNK_00111b04;
                  iStack_58 = iStack_54 + _UNK_00111b08;
                  iStack_54 = iStack_54 + _UNK_00111b0c;
                  List<GDScriptTokenizer::Token,DefaultAllocator>::push_back((List<GDScriptTokenizer::Token,DefaultAllocator>*)( in_RSI + 0x58 ), (Token*)local_c8);
                  lVar12 = local_48;
                  if (local_48 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_48 = 0;
                        Memory::free_static((void*)( lVar12 + -0x10 ), false);
                     }

                  }

                  if (( &Variant::needs_deinit )[local_80[0]] != '\0') {
                     Variant::_clear_internal();
                  }

               }

               bVar4 = true;
            }

            _advance(in_RSI);
            iVar10 = *(int*)( in_RSI + 0x11c );
         }
 while ( -1 < iVar10 );
         bVar5 = true;
         goto LAB_00104790;
      }

      LAB_00104ac5:if (bVar19) {
         LAB_00104990:cVar8 = '`';
         goto LAB_0010499d;
      }

      bVar19 = (bool)( ( bVar7 ^ 1U ) & bVar6 );
      if (!bVar19) {
         bVar5 = false;
         goto LAB_00104afa;
      }

      LAB_001047c0:if (( ( iVar10 < iVar15 ) && ( **(int**)( in_RSI + 0x18 ) == 0x2e ) ) && ( ( iVar15 <= iVar10 + 1 || ( ( *(int**)( in_RSI + 0x18 ) )[1] != 0x2e ) ) )) {
         local_98 = (int*)0x10a638;
         local_a0 = 0;
         local_90 = 0x2d;
         String::parse_latin1(local_d0);
         make_error(local_c8);
         lVar12 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar12 + -0x10 ), false);
            }

         }

         iStack_54 = *(int*)( in_RSI + 0x24 );
         local_60 = iStack_54 + __LC105;
         iStack_5c = iStack_54 + _UNK_00111b04;
         iStack_58 = iStack_54 + _UNK_00111b08;
         iStack_54 = iStack_54 + _UNK_00111b0c;
         if (*(long*)( in_RSI + 0x58 ) == 0) {
            pauVar14 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])( in_RSI + 0x58 ) = pauVar14;
            *(undefined4*)pauVar14[1] = 0;
            *pauVar14 = (undefined1[16])0x0;
         }

         piVar13 = (int*)operator_new(0x60, DefaultAllocator::alloc);
         *(undefined1(*) [16])( piVar13 + 4 ) = (undefined1[16])0x0;
         *piVar13 = 0;
         *(undefined1(*) [16])( piVar13 + 8 ) = (undefined1[16])0x0;
         piVar13[2] = 0;
         piVar13[0xc] = 0;
         piVar13[0xd] = 0;
         piVar13[0xe] = -1;
         piVar13[0xf] = 0;
         *(undefined1(*) [16])( piVar13 + 0x10 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( piVar13 + 0x14 ) = (undefined1[16])0x0;
         *piVar13 = local_88[0];
         Variant::operator =((Variant*)( piVar13 + 2 ), (Variant*)local_80);
         piVar13[8] = local_68;
         piVar13[9] = local_64;
         piVar13[10] = local_60;
         piVar13[0xb] = iStack_5c;
         piVar13[0xc] = iStack_58;
         piVar13[0xd] = iStack_54;
         piVar13[0xe] = local_50;
         piVar13[0xf] = iStack_4c;
         if (*(long*)( piVar13 + 0x10 ) != local_48) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( piVar13 + 0x10 ), (CowData*)&local_48);
         }

         lVar12 = local_48;
         uVar21 = *(undefined8*)( *(long*)( in_RSI + 0x58 ) + 8 );
         *(long*)( piVar13 + 0x16 ) = *(long*)( in_RSI + 0x58 );
         piVar13[0x12] = 0;
         piVar13[0x13] = 0;
         plVar1 = *(long**)( in_RSI + 0x58 );
         *(undefined8*)( piVar13 + 0x14 ) = uVar21;
         if (plVar1[1] != 0) {
            *(int**)( plVar1[1] + 0x48 ) = piVar13;
         }

         plVar1[1] = (long)piVar13;
         if (*plVar1 == 0) {
            *plVar1 = (long)piVar13;
         }

         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar12 + -0x10 ), false);
            }

         }

         if (( &Variant::needs_deinit )[local_80[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00104bda;
      }

      uVar17 = 0;
      bVar6 = bVar19;
      if (iVar10 < iVar15) goto LAB_00104b15;
   }

   LAB_001047e8:uVar18 = 0xaaf2;
   iVar16 = 0x2ac;
   iVar15 = 0;
   iVar9 = 0x156;
   while (true) {
      bVar19 = bVar6;
      if (uVar17 < uVar18) {
         iVar16 = iVar9 + -1;
      }
 else {
         if (uVar17 <= *(uint*)( xid_start + (long)iVar9 * 8 + 4 )) goto LAB_00104b80;
         iVar15 = iVar9 + 1;
      }

      iVar9 = ( iVar15 + iVar16 ) / 2;
      if (iVar16 < iVar15) break;
      uVar18 = *(uint*)( xid_start + (long)iVar9 * 8 );
   }
;
   uVar17 = 0;
   if (( -1 < iVar10 ) && ( uVar17 = 0 ),iVar10 < *(int*)( in_RSI + 0x120 )) {
      uVar17 = **(uint**)( in_RSI + 0x18 );
   }

   uVar18 = 0xf900;
   iVar9 = 799;
   iVar15 = 0;
   iVar10 = 399;
   while (true) {
      if (uVar17 < uVar18) {
         iVar9 = iVar10 + -1;
      }
 else {
         if (uVar17 <= *(uint*)( xid_continue + (long)iVar10 * 8 + 4 )) goto LAB_00104b80;
         iVar15 = iVar10 + 1;
      }

      iVar10 = ( iVar15 + iVar9 ) / 2;
      if (iVar9 < iVar15) break;
      uVar18 = *(uint*)( xid_continue + (long)iVar10 * 8 );
   }
;
   goto LAB_00104bda;
   LAB_00104b80:local_98 = (int*)0x10a067;
   local_a0 = 0;
   local_90 = 0x19;
   String::parse_latin1(local_d0);
   push_error((String*)in_RSI);
   lVar12 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   LAB_00104bda:local_98 = *(int**)( in_RSI + 0x38 );
   local_90 = 0;
   local_a0 = 0;
   if (local_98 != (int*)0x0) {
      iVar10 = (int)( *(long*)( in_RSI + 0x18 ) - (long)local_98 >> 2 );
      if (iVar10 < 0) {
         piVar13 = local_98;
         if (*local_98 != 0) {
            do {
               piVar2 = piVar13 + 1;
               piVar13 = piVar13 + 1;
            }
 while ( *piVar2 != 0 );
            local_90 = (long)piVar13 - (long)local_98 >> 2;
         }

      }
 else if (iVar10 != 0) {
         iVar15 = 0;
         piVar13 = local_98;
         do {
            iVar9 = *piVar13;
            piVar13 = piVar13 + 1;
            if (iVar9 == 0) {
               local_90 = (long)iVar15;
               goto LAB_00104c29;
            }

            iVar15 = iVar15 + 1;
         }
 while ( iVar10 != iVar15 );
         local_90 = (long)iVar10;
      }

   }

   LAB_00104c29:String::parse_utf32(local_d0);
   String::replace((char*)&local_98, (char*)local_d0);
   lVar12 = local_a0;
   if (local_a0 == 0) {
      LAB_00104c7d:if (local_d4 != 0x10) goto LAB_00104c8b;
      LAB_00104da2:lVar12 = String::hex_to_int();
      LAB_00104caf:Variant::Variant((Variant*)local_c8, lVar12);
   }
 else {
      LOCK();
      plVar1 = (long*)( local_a0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00104c7d;
      local_a0 = 0;
      Memory::free_static((void*)( lVar12 + -0x10 ), false);
      if (local_d4 == 0x10) goto LAB_00104da2;
      LAB_00104c8b:if (local_d4 == 2) {
         lVar12 = String::bin_to_int();
         goto LAB_00104caf;
      }

      if (( !bVar5 ) && ( !bVar19 )) {
         lVar12 = String::to_int();
         goto LAB_00104caf;
      }

      dVar22 = (double)String::to_float();
      Variant::Variant((Variant*)local_c8, dVar22);
   }

   make_token(in_RDI, in_RSI, 3);
   Variant::operator =((Variant*)( in_RDI + 2 ), (Variant*)local_c8);
   if (( &Variant::needs_deinit )[local_88[0]] != '\0') {
      Variant::_clear_internal();
   }

   piVar13 = local_98;
   if (local_98 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_98 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = (int*)0x0;
         Memory::free_static(piVar13 + -4, false);
      }

   }

   LAB_00104a77:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return in_RDI;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GDScriptTokenizerText::string() */String *GDScriptTokenizerText::string(void) {
   long *plVar1;
   char cVar2;
   undefined8 uVar3;
   bool bVar4;
   bool bVar5;
   long lVar6;
   char *pcVar7;
   int iVar8;
   uint uVar9;
   undefined4 *puVar10;
   undefined1(*pauVar11)[16];
   wchar32 *pwVar12;
   long lVar13;
   int iVar14;
   wchar32 wVar15;
   wchar32 wVar16;
   GDScriptTokenizerText *in_RSI;
   String *in_RDI;
   int iVar17;
   wchar32 wVar18;
   long in_FS_OFFSET;
   bool bVar19;
   int local_11c;
   long local_108;
   long local_100;
   long local_f8;
   long local_f0;
   char *local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   int local_d0;
   undefined4 uStack_cc;
   undefined8 uStack_c8;
   undefined8 uStack_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   long local_98[2];
   undefined4 local_88[2];
   int local_80;
   undefined4 uStack_7c;
   undefined8 uStack_78;
   undefined8 uStack_70;
   undefined4 local_68;
   undefined4 uStack_64;
   int iStack_60;
   int iStack_5c;
   int local_58;
   int iStack_54;
   undefined4 local_50;
   undefined4 uStack_4c;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar8 = *(int*)( in_RSI + 0x11c );
   if (iVar8 + -1 < 0) {
      bVar5 = false;
      iVar14 = 0;
      LAB_00107337:if (iVar8 == 0) {
         iVar17 = *(int*)( in_RSI + 0x120 );
         if (0 < iVar17) {
            pwVar12 = *(wchar32**)( in_RSI + 0x18 );
            wVar18 = L'\0';
            goto LAB_001061c0;
         }

      }
 else if (( iVar8 == -1 ) && ( 0 < *(int*)( in_RSI + 0x120 ) )) goto LAB_00107358;
      LAB_001066d2:wVar18 = L'\0';
   }
 else {
      iVar17 = *(int*)( in_RSI + 0x120 );
      if (iVar8 + -1 < iVar17) {
         pwVar12 = *(wchar32**)( in_RSI + 0x18 );
         wVar18 = pwVar12[-1];
         if (wVar18 == L'r') {
            iVar14 = 0;
            _advance(in_RSI);
            bVar5 = true;
            LAB_00107c6a:iVar8 = *(int*)( in_RSI + 0x11c );
            if (iVar8 + -1 < 0) goto LAB_00107337;
            iVar17 = *(int*)( in_RSI + 0x120 );
            if (iVar17 <= iVar8 + -1) goto LAB_001066c7;
            pwVar12 = *(wchar32**)( in_RSI + 0x18 );
         }
 else {
            if (wVar18 == L'&') {
               iVar14 = 1;
               _advance(in_RSI);
               bVar5 = false;
               goto LAB_00107c6a;
            }

            if (wVar18 == L'^') {
               iVar14 = 2;
               _advance(in_RSI);
               bVar5 = false;
               goto LAB_00107c6a;
            }

            bVar5 = false;
            iVar14 = 0;
         }

         wVar18 = pwVar12[-1];
         if (iVar17 <= iVar8) {
            bVar4 = false;
            if (wVar18 != L'\0') goto LAB_001061e6;
            goto LAB_001066c7;
         }

         LAB_001061c0:bVar4 = false;
         if (*pwVar12 != wVar18) goto LAB_001061e6;
         wVar16 = L'\0';
         if (iVar8 + 1 < iVar17) goto LAB_001061d1;
      }
 else {
         bVar5 = false;
         iVar14 = 0;
         LAB_001066c7:if (iVar17 <= iVar8 + 1) goto LAB_001066d2;
         LAB_00107358:pwVar12 = *(wchar32**)( in_RSI + 0x18 );
         wVar18 = L'\0';
         LAB_001061d1:wVar16 = pwVar12[1];
      }

      if (wVar16 != wVar18) {
         iVar17 = *(int*)( in_RSI + 0x120 );
         bVar4 = false;
         goto LAB_001061e6;
      }

   }

   _advance(in_RSI);
   _advance(in_RSI);
   iVar17 = *(int*)( in_RSI + 0x120 );
   iVar8 = *(int*)( in_RSI + 0x11c );
   bVar4 = true;
   LAB_001061e6:local_108 = 0;
   if (iVar17 <= iVar8) {
      LAB_00106cb5:local_f0 = 0;
      local_e8 = "Unterminated string.";
      local_e0 = 0x14;
      String::parse_latin1((StrRange*)&local_f0);
      make_error(in_RDI);
      lVar6 = local_f0;
      if (local_f0 != 0) {
         LOCK();
         plVar1 = (long*)( local_f0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      LAB_00106d1e:lVar6 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar1 = (long*)( local_108 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return in_RDI;
   }

   local_11c = 0;
   wVar16 = L'\0';
   LAB_001065ab:if (iVar8 < 0) {
      wVar15 = L'\0';
      if (wVar18 == L'\0') goto LAB_001065ba;
      LAB_00106567:if (wVar16 != L'\0') {
         local_f0 = 0;
         local_e8 = "Invalid UTF-16 sequence in string, unpaired lead surrogate";
         local_e0 = 0x3a;
         String::parse_latin1((StrRange*)&local_f0);
         make_error((String*)local_88);
         lVar6 = local_f0;
         if (local_f0 != 0) {
            LOCK();
            plVar1 = (long*)( local_f0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_f0 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

         iStack_60 = local_11c;
         local_58 = local_11c;
         if (*(long*)( in_RSI + 0x58 ) == 0) {
            pauVar11 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])( in_RSI + 0x58 ) = pauVar11;
            *(undefined4*)pauVar11[1] = 0;
            *pauVar11 = (undefined1[16])0x0;
         }

         puVar10 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
         *(undefined1(*) [16])( puVar10 + 4 ) = (undefined1[16])0x0;
         *puVar10 = 0;
         *(undefined1(*) [16])( puVar10 + 8 ) = (undefined1[16])0x0;
         puVar10[2] = 0;
         *(undefined8*)( puVar10 + 0xc ) = 0;
         *(undefined8*)( puVar10 + 0xe ) = 0xffffffff;
         *(undefined1(*) [16])( puVar10 + 0x10 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( puVar10 + 0x14 ) = (undefined1[16])0x0;
         *puVar10 = local_88[0];
         Variant::operator =((Variant*)( puVar10 + 2 ), (Variant*)&local_80);
         puVar10[8] = local_68;
         puVar10[9] = uStack_64;
         puVar10[10] = iStack_60;
         puVar10[0xb] = iStack_5c;
         puVar10[0xc] = local_58;
         puVar10[0xd] = iStack_54;
         puVar10[0xe] = local_50;
         puVar10[0xf] = uStack_4c;
         if (*(long*)( puVar10 + 0x10 ) != local_48) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar10 + 0x10 ), (CowData*)&local_48);
         }

         lVar6 = local_48;
         uVar3 = *(undefined8*)( *(long*)( in_RSI + 0x58 ) + 8 );
         *(long*)( puVar10 + 0x16 ) = *(long*)( in_RSI + 0x58 );
         plVar1 = *(long**)( in_RSI + 0x58 );
         *(undefined8*)( puVar10 + 0x12 ) = 0;
         *(undefined8*)( puVar10 + 0x14 ) = uVar3;
         if (plVar1[1] != 0) {
            *(undefined4**)( plVar1[1] + 0x48 ) = puVar10;
         }

         plVar1[1] = (long)puVar10;
         if (*plVar1 == 0) {
            *plVar1 = (long)puVar10;
         }

         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

         if (( &Variant::needs_deinit )[local_80] != '\0') {
            Variant::_clear_internal();
         }

      }

      String::operator +=((String*)&local_108, wVar15);
      _advance(in_RSI);
      if (wVar15 == L'\n') {
         newline(in_RSI, false);
      }

      goto LAB_00106592;
   }

   wVar15 = **(wchar32**)( in_RSI + 0x18 );
   if (( ( ( uint )(wVar15 + L'\xffffdff2') < 2 ) || ( ( uint )(wVar15 + L'\xffffdfd6') < 5 ) ) || ( ( uint )(wVar15 + L'\xffffdf9a') < 4 )) {
      local_d8 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      local_d0 = 0;
      uStack_cc = 0;
      local_a8 = 0;
      local_a0 = 0xffffffff;
      local_98[0] = 0;
      local_f0 = 0;
      local_b8 = (undefined1[16])0x0;
      if (bVar5) {
         local_e0 = 0x71;
         local_e8 = "Invisible text direction control character present in the string, use regular string literal instead of r-string.";
         String::parse_latin1((StrRange*)&local_f0);
         make_error((String*)local_88);
         local_d8 = CONCAT44(local_d8._4_4_, local_88[0]);
         if (( &Variant::needs_deinit )[local_d0] != '\0') {
            Variant::_clear_internal();
         }

         lVar13 = local_48;
         local_d0 = local_80;
         lVar6 = local_98[0];
         local_80 = 0;
         local_b8._4_4_ = uStack_64;
         local_b8._0_4_ = local_68;
         local_b8._12_4_ = iStack_5c;
         local_b8._8_4_ = iStack_60;
         local_a8 = CONCAT44(iStack_54, local_58);
         uStack_c8 = uStack_78;
         uStack_c0 = uStack_70;
         local_a0 = CONCAT44(uStack_4c, local_50);
         if (local_98[0] == local_48) {
            if (local_98[0] == 0) goto LAB_001063b9;
            LOCK();
            plVar1 = (long*)( local_98[0] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

            cVar2 = ( &Variant::needs_deinit )[local_80];
         }
 else {
            lVar13 = 0;
            if (local_98[0] != 0) {
               LOCK();
               plVar1 = (long*)( local_98[0] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98[0] = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

               lVar13 = (long)local_80;
            }

            cVar2 = ( &Variant::needs_deinit )[lVar13];
            local_98[0] = local_48;
         }

         if (cVar2 != '\0') {
            Variant::_clear_internal();
         }

      }
 else {
         local_e0 = 0x16;
         local_e8 = "\") to avoid confusion.";
         String::parse_latin1((StrRange*)&local_f0);
         String::num_int64((long)&local_100, wVar15, true);
         operator+((char *)&
         local_f8,(String*)"Invisible text direction control character present in the string, escape it (\"\\u";
         String::operator +((String*)&local_e8, (String*)&local_f8);
         make_error((String*)local_88);
         local_d8 = CONCAT44(local_d8._4_4_, local_88[0]);
         if (( &Variant::needs_deinit )[local_d0] != '\0') {
            Variant::_clear_internal();
         }

         lVar13 = local_48;
         local_d0 = local_80;
         lVar6 = local_98[0];
         local_80 = 0;
         local_b8._4_4_ = uStack_64;
         local_b8._0_4_ = local_68;
         local_b8._12_4_ = iStack_5c;
         local_b8._8_4_ = iStack_60;
         local_a8 = CONCAT44(iStack_54, local_58);
         uStack_c8 = uStack_78;
         uStack_c0 = uStack_70;
         local_a0 = CONCAT44(uStack_4c, local_50);
         if (local_98[0] == local_48) {
            if (local_98[0] != 0) {
               LOCK();
               plVar1 = (long*)( local_98[0] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }

               cVar2 = ( &Variant::needs_deinit )[local_80];
               goto joined_r0x00106975;
            }

         }
 else {
            lVar13 = 0;
            if (local_98[0] != 0) {
               LOCK();
               plVar1 = (long*)( local_98[0] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98[0] = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

               lVar13 = (long)local_80;
            }

            cVar2 = ( &Variant::needs_deinit )[lVar13];
            local_98[0] = local_48;
            joined_r0x00106975:if (cVar2 != '\0') {
               Variant::_clear_internal();
            }

         }

         pcVar7 = local_e8;
         if (local_e8 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_e8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_e8 = (char*)0x0;
               Memory::free_static(pcVar7 + -0x10, false);
            }

         }

         lVar6 = local_f8;
         if (local_f8 != 0) {
            LOCK();
            plVar1 = (long*)( local_f8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_f8 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

         lVar6 = local_100;
         if (local_100 != 0) {
            LOCK();
            plVar1 = (long*)( local_100 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_100 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      LAB_001063b9:lVar6 = local_f0;
      if (local_f0 != 0) {
         LOCK();
         plVar1 = (long*)( local_f0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      iVar8 = *(int*)( in_RSI + 0x24 );
      local_b8._8_4_ = iVar8 + __LC105;
      local_b8._12_4_ = iVar8 + _UNK_00111b04;
      local_a8 = CONCAT44(iVar8 + _UNK_00111b0c, iVar8 + _UNK_00111b08);
      if (*(long*)( in_RSI + 0x58 ) == 0) {
         pauVar11 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( in_RSI + 0x58 ) = pauVar11;
         *(undefined4*)pauVar11[1] = 0;
         *pauVar11 = (undefined1[16])0x0;
      }

      puVar10 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
      *(undefined1(*) [16])( puVar10 + 4 ) = (undefined1[16])0x0;
      *puVar10 = 0;
      *(undefined1(*) [16])( puVar10 + 8 ) = (undefined1[16])0x0;
      puVar10[2] = 0;
      *(undefined8*)( puVar10 + 0xc ) = 0;
      *(undefined8*)( puVar10 + 0xe ) = 0xffffffff;
      *(undefined1(*) [16])( puVar10 + 0x10 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( puVar10 + 0x14 ) = (undefined1[16])0x0;
      *puVar10 = (int)local_d8;
      Variant::operator =((Variant*)( puVar10 + 2 ), (Variant*)&local_d0);
      puVar10[8] = local_b8._0_4_;
      puVar10[9] = local_b8._4_4_;
      puVar10[10] = local_b8._8_4_;
      puVar10[0xb] = local_b8._12_4_;
      puVar10[0xc] = (undefined4)local_a8;
      puVar10[0xd] = local_a8._4_4_;
      puVar10[0xe] = (undefined4)local_a0;
      puVar10[0xf] = local_a0._4_4_;
      if (*(long*)( puVar10 + 0x10 ) != local_98[0]) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar10 + 0x10 ), (CowData*)local_98);
      }

      lVar6 = local_98[0];
      uVar3 = *(undefined8*)( *(long*)( in_RSI + 0x58 ) + 8 );
      *(long*)( puVar10 + 0x16 ) = *(long*)( in_RSI + 0x58 );
      plVar1 = *(long**)( in_RSI + 0x58 );
      *(undefined8*)( puVar10 + 0x12 ) = 0;
      *(undefined8*)( puVar10 + 0x14 ) = uVar3;
      if (plVar1[1] != 0) {
         *(undefined4**)( plVar1[1] + 0x48 ) = puVar10;
      }

      plVar1[1] = (long)puVar10;
      if (*plVar1 == 0) {
         *plVar1 = (long)puVar10;
      }

      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      if (local_98[0] != 0) {
         LOCK();
         plVar1 = (long*)( local_98[0] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98[0] = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      if (( &Variant::needs_deinit )[local_d0] != '\0') {
         Variant::_clear_internal();
      }

      LAB_00106562:if (wVar15 != wVar18) goto LAB_00106567;
      LAB_001065ba:if (wVar16 == L'\0') {
         LAB_001065c5:_advance(in_RSI);
      }
 else {
         local_f0 = 0;
         local_e8 = "Invalid UTF-16 sequence in string, unpaired lead surrogate";
         local_e0 = 0x3a;
         String::parse_latin1((StrRange*)&local_f0);
         make_error((String*)local_88);
         lVar6 = local_f0;
         if (local_f0 != 0) {
            LOCK();
            plVar1 = (long*)( local_f0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_f0 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

         iStack_60 = local_11c;
         local_58 = local_11c;
         if (*(long*)( in_RSI + 0x58 ) == 0) {
            pauVar11 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])( in_RSI + 0x58 ) = pauVar11;
            *(undefined4*)pauVar11[1] = 0;
            *pauVar11 = (undefined1[16])0x0;
         }

         puVar10 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
         *(undefined1(*) [16])( puVar10 + 4 ) = (undefined1[16])0x0;
         *puVar10 = 0;
         *(undefined1(*) [16])( puVar10 + 8 ) = (undefined1[16])0x0;
         puVar10[2] = 0;
         *(undefined8*)( puVar10 + 0xc ) = 0;
         *(undefined8*)( puVar10 + 0xe ) = 0xffffffff;
         *(undefined1(*) [16])( puVar10 + 0x10 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( puVar10 + 0x14 ) = (undefined1[16])0x0;
         *puVar10 = local_88[0];
         Variant::operator =((Variant*)( puVar10 + 2 ), (Variant*)&local_80);
         puVar10[8] = local_68;
         puVar10[9] = uStack_64;
         puVar10[10] = iStack_60;
         puVar10[0xb] = iStack_5c;
         puVar10[0xc] = local_58;
         puVar10[0xd] = iStack_54;
         puVar10[0xe] = local_50;
         puVar10[0xf] = uStack_4c;
         if (*(long*)( puVar10 + 0x10 ) != local_48) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar10 + 0x10 ), (CowData*)&local_48);
         }

         lVar6 = local_48;
         uVar3 = *(undefined8*)( *(long*)( in_RSI + 0x58 ) + 8 );
         *(long*)( puVar10 + 0x16 ) = *(long*)( in_RSI + 0x58 );
         plVar1 = *(long**)( in_RSI + 0x58 );
         *(undefined8*)( puVar10 + 0x12 ) = 0;
         *(undefined8*)( puVar10 + 0x14 ) = uVar3;
         if (plVar1[1] != 0) {
            *(undefined4**)( plVar1[1] + 0x48 ) = puVar10;
         }

         plVar1[1] = (long)puVar10;
         if (*plVar1 == 0) {
            *plVar1 = (long)puVar10;
         }

         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

         if (( &Variant::needs_deinit )[local_80] == '\0') goto LAB_001065c5;
         Variant::_clear_internal();
         _advance(in_RSI);
      }

      if (bVar4) {
         iVar8 = *(int*)( in_RSI + 0x11c );
         if (iVar8 < 0) {
            if (wVar18 == L'\0') {
               if (( iVar8 == -1 ) && ( 0 < *(int*)( in_RSI + 0x120 ) )) {
                  pwVar12 = *(wchar32**)( in_RSI + 0x18 );
                  LAB_00106910:wVar16 = pwVar12[1];
                  goto LAB_00106913;
               }

               LAB_001065fd:_advance(in_RSI);
               _advance(in_RSI);
               goto LAB_00106616;
            }

         }
 else if (iVar8 < *(int*)( in_RSI + 0x120 )) {
            pwVar12 = *(wchar32**)( in_RSI + 0x18 );
            if (*pwVar12 == wVar18) {
               wVar16 = L'\0';
               if (iVar8 + 1 < *(int*)( in_RSI + 0x120 )) goto LAB_00106910;
               LAB_00106913:if (wVar16 == wVar18) goto LAB_001065fd;
            }

         }
 else if (wVar18 == L'\0') goto LAB_001065fd;
         String::operator +=((String*)&local_108, wVar18);
         goto LAB_00106592;
      }

      LAB_00106616:local_d8 = 0;
      local_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      if (iVar14 == 1) {
         StringName::StringName((StringName*)&local_e8, (String*)&local_108, false);
         Variant::Variant((Variant*)local_88, (StringName*)&local_e8);
         if (( &Variant::needs_deinit )[(int)local_d8] != '\0') {
            Variant::_clear_internal();
         }

         uStack_c8 = uStack_78;
         local_d8 = CONCAT44(local_d8._4_4_, local_88[0]);
         local_d0 = local_80;
         uStack_cc = uStack_7c;
         if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else if (iVar14 == 2) {
         NodePath::NodePath((NodePath*)&local_e8, (String*)&local_108);
         Variant::Variant((Variant*)local_88, (NodePath*)&local_e8);
         if (( &Variant::needs_deinit )[(int)local_d8] != '\0') {
            Variant::_clear_internal();
         }

         local_d8 = CONCAT44(local_d8._4_4_, local_88[0]);
         local_d0 = local_80;
         uStack_cc = uStack_7c;
         uStack_c8 = uStack_78;
         NodePath::~NodePath((NodePath*)&local_e8);
      }
 else {
         Variant::Variant((Variant*)local_88, (String*)&local_108);
         if (( &Variant::needs_deinit )[(int)local_d8] != '\0') {
            Variant::_clear_internal();
         }

         local_d8 = CONCAT44(local_d8._4_4_, local_88[0]);
         local_d0 = local_80;
         uStack_cc = uStack_7c;
         uStack_c8 = uStack_78;
      }

      make_token(in_RDI);
      Variant::operator =((Variant*)( in_RDI + 8 ), (Variant*)&local_d8);
      if (( &Variant::needs_deinit )[(int)local_d8] != '\0') {
         Variant::_clear_internal();
      }

      goto LAB_00106d1e;
   }

   if (wVar15 != L'\\') goto LAB_00106562;
   _advance(in_RSI);
   iVar8 = *(int*)( in_RSI + 0x11c );
   if (*(int*)( in_RSI + 0x120 ) <= iVar8) goto LAB_00106cb5;
   if (bVar5) {
      if (iVar8 < 0) {
         if (wVar18 == L'\0') goto LAB_00107259;
         LAB_00106c89:String::operator +=((String*)&local_108, L'\\');
         iVar8 = *(int*)( in_RSI + 0x11c );
         if (*(int*)( in_RSI + 0x120 ) <= iVar8) goto LAB_00106cb5;
         goto LAB_001065ab;
      }

      if (**(wchar32**)( in_RSI + 0x18 ) == wVar18) {
         LAB_00107259:_advance(in_RSI);
         if (*(int*)( in_RSI + 0x11c ) < *(int*)( in_RSI + 0x120 )) {
            String::operator +=((String*)&local_108, L'\\');
            String::operator +=((String*)&local_108, wVar18);
            goto LAB_00106599;
         }

         LAB_00107d11:local_f0 = 0;
         local_e0 = 0x14;
         local_e8 = "Unterminated string.";
         String::parse_latin1((StrRange*)&local_f0);
         make_error(in_RDI);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
         goto LAB_00106d1e;
      }

      if (**(wchar32**)( in_RSI + 0x18 ) != L'\\') goto LAB_00106c89;
      _advance(in_RSI);
      if (*(int*)( in_RSI + 0x120 ) <= *(int*)( in_RSI + 0x11c )) goto LAB_00107d11;
      String::operator +=((String*)&local_108, L'\\');
      String::operator +=((String*)&local_108, L'\\');
   }
 else {
      if (iVar8 < 0) {
         _advance(in_RSI);
         if (*(int*)( in_RSI + 0x11c ) < *(int*)( in_RSI + 0x120 )) {
            switchD_00106dba_caseD_b:local_f0 = 0;
            local_e8 = "Invalid escape in string.";
            local_e0 = 0x19;
            String::parse_latin1((StrRange*)&local_f0);
            make_error((String*)local_88);
            lVar6 = local_f0;
            if (local_f0 != 0) {
               LOCK();
               plVar1 = (long*)( local_f0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_f0 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            iStack_60 = *(int*)( in_RSI + 0x24 ) + -2;
            local_58 = iStack_60;
            if (*(long*)( in_RSI + 0x58 ) == 0) {
               pauVar11 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( in_RSI + 0x58 ) = pauVar11;
               *(undefined4*)pauVar11[1] = 0;
               *pauVar11 = (undefined1[16])0x0;
            }

            puVar10 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
            *(undefined1(*) [16])( puVar10 + 4 ) = (undefined1[16])0x0;
            *puVar10 = 0;
            *(undefined1(*) [16])( puVar10 + 8 ) = (undefined1[16])0x0;
            puVar10[2] = 0;
            *(undefined8*)( puVar10 + 0xc ) = 0;
            *(undefined8*)( puVar10 + 0xe ) = 0xffffffff;
            *(undefined1(*) [16])( puVar10 + 0x10 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( puVar10 + 0x14 ) = (undefined1[16])0x0;
            *puVar10 = local_88[0];
            Variant::operator =((Variant*)( puVar10 + 2 ), (Variant*)&local_80);
            puVar10[8] = local_68;
            puVar10[9] = uStack_64;
            puVar10[10] = iStack_60;
            puVar10[0xb] = iStack_5c;
            puVar10[0xc] = local_58;
            puVar10[0xd] = iStack_54;
            puVar10[0xe] = local_50;
            puVar10[0xf] = uStack_4c;
            if (*(long*)( puVar10 + 0x10 ) != local_48) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar10 + 0x10 ), (CowData*)&local_48);
            }

            uVar3 = *(undefined8*)( *(long*)( in_RSI + 0x58 ) + 8 );
            *(long*)( puVar10 + 0x16 ) = *(long*)( in_RSI + 0x58 );
            plVar1 = *(long**)( in_RSI + 0x58 );
            *(undefined8*)( puVar10 + 0x12 ) = 0;
            *(undefined8*)( puVar10 + 0x14 ) = uVar3;
            if (plVar1[1] != 0) {
               *(undefined4**)( plVar1[1] + 0x48 ) = puVar10;
            }

            plVar1[1] = (long)puVar10;
            if (*plVar1 == 0) {
               *plVar1 = (long)puVar10;
            }

            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            if (local_48 != 0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  LAB_00107202:lVar6 = local_48;
                  local_48 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            LAB_00107221:if (( &Variant::needs_deinit )[local_80] != '\0') {
               Variant::_clear_internal();
            }

            goto LAB_00106599;
         }

         goto LAB_00106cb5;
      }

      wVar15 = **(wchar32**)( in_RSI + 0x18 );
      _advance(in_RSI);
      iVar8 = *(int*)( in_RSI + 0x11c );
      if (*(int*)( in_RSI + 0x120 ) <= iVar8) goto LAB_00106cb5;
      switch (wVar15) {
         case L'\n':
      goto switchD_00106dba_caseD_a;
         default:
      goto switchD_00106dba_caseD_b;
         case L'\r':
      if ((iVar8 < 0) || (**(int **)(in_RSI + 0x18) != 10)) {
        wVar15 = L'\0';
        String::operator+=((String *)&local_108,L'\\');
        _advance(in_RSI);
        break;
      }
      goto switchD_00106dba_caseD_a;
         case L'\"':
         case L'\'':
         case L'\\':
switchD_00106dba_caseD_22:
      break;
         case L'U':
         case L'u':
      bVar19 = wVar15 == L'U';
      iVar17 = 0;
      wVar15 = L'\0';
      while (-1 < iVar8) {
        iVar8 = **(int **)(in_RSI + 0x18);
        uVar9 = iVar8 - 0x30;
        if (9 < uVar9) {
          if (iVar8 - 0x61U < 6) {
            uVar9 = iVar8 - 0x57;
          }
          else {
            if (5 < iVar8 - 0x41U) break;
            uVar9 = iVar8 - 0x37;
          }
        }
        iVar17 = iVar17 + 1;
        wVar15 = wVar15 << 4 | uVar9;
        _advance(in_RSI);
        if (iVar17 == bVar19 + 4 + (uint)bVar19) {
          if ((wVar15 & 0xfffffc00U) == 0xd800) {
            if (wVar16 == L'\0') {
              local_11c = *(int *)(in_RSI + 0x24) + -2;
              wVar16 = wVar15;
              goto LAB_00106599;
            }
            local_e8 = "Invalid UTF-16 sequence in string, unpaired lead surrogate.";
            local_e0 = 0x3b;
          }
          else {
            if ((wVar15 & 0xfffffc00U) != 0xdc00) goto switchD_00106dba_caseD_22;
            if (wVar16 != L'\0') {
              wVar15 = wVar15 + L'\xfca02400' + wVar16 * 0x400;
              goto LAB_00107687;
            }
            local_e8 = "Invalid UTF-16 sequence in string, unpaired trail surrogate.";
            local_e0 = 0x3c;
          }
          local_f0 = 0;
          String::parse_latin1((StrRange *)&local_f0);
          make_error((String *)local_88);
          lVar6 = local_f0;
          if (local_f0 != 0) {
            LOCK();
            plVar1 = (long *)(local_f0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_f0 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          iStack_60 = *(int *)(in_RSI + 0x24) + -2;
          local_58 = iStack_60;
          if (*(long *)(in_RSI + 0x58) == 0) {
            pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])(in_RSI + 0x58) = pauVar11;
            *(undefined4 *)pauVar11[1] = 0;
            *pauVar11 = (undefined1  [16])0x0;
          }
          puVar10 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
          *(undefined1 (*) [16])(puVar10 + 4) = (undefined1  [16])0x0;
          *puVar10 = 0;
          *(undefined1 (*) [16])(puVar10 + 8) = (undefined1  [16])0x0;
          puVar10[2] = 0;
          *(undefined8 *)(puVar10 + 0xc) = 0;
          *(undefined8 *)(puVar10 + 0xe) = 0xffffffff;
          *(undefined1 (*) [16])(puVar10 + 0x10) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar10 + 0x14) = (undefined1  [16])0x0;
          *puVar10 = local_88[0];
          Variant::operator=((Variant *)(puVar10 + 2),(Variant *)&local_80);
          puVar10[8] = local_68;
          puVar10[9] = uStack_64;
          puVar10[10] = iStack_60;
          puVar10[0xb] = iStack_5c;
          puVar10[0xc] = local_58;
          puVar10[0xd] = iStack_54;
          puVar10[0xe] = local_50;
          puVar10[0xf] = uStack_4c;
          if (*(long *)(puVar10 + 0x10) != local_48) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(puVar10 + 0x10),(CowData *)&local_48);
          }
          lVar6 = local_48;
          uVar3 = *(undefined8 *)(*(long *)(in_RSI + 0x58) + 8);
          *(long *)(puVar10 + 0x16) = *(long *)(in_RSI + 0x58);
          plVar1 = *(long **)(in_RSI + 0x58);
          *(undefined8 *)(puVar10 + 0x12) = 0;
          *(undefined8 *)(puVar10 + 0x14) = uVar3;
          if (plVar1[1] != 0) {
            *(undefined4 **)(plVar1[1] + 0x48) = puVar10;
          }
          plVar1[1] = (long)puVar10;
          if (*plVar1 == 0) {
            *plVar1 = (long)puVar10;
          }
          *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
          if ((&Variant::needs_deinit)[local_80] != '\0') {
            Variant::_clear_internal();
          }
          goto LAB_00106592;
        }
        iVar8 = *(int *)(in_RSI + 0x11c);
        if (*(int *)(in_RSI + 0x120) <= iVar8) goto LAB_00106cb5;
      }
      local_f0 = 0;
      local_e8 = "Invalid hexadecimal digit in unicode escape sequence.";
      local_e0 = 0x35;
      String::parse_latin1((StrRange *)&local_f0);
      make_error((String *)local_88);
      lVar6 = local_f0;
      if (local_f0 != 0) {
        LOCK();
        plVar1 = (long *)(local_f0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      iStack_54 = *(int *)(in_RSI + 0x24);
      iStack_60 = iStack_54 + __LC105;
      iStack_5c = iStack_54 + _UNK_00111b04;
      local_58 = iStack_54 + _UNK_00111b08;
      iStack_54 = iStack_54 + _UNK_00111b0c;
      if (*(long *)(in_RSI + 0x58) == 0) {
        pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(in_RSI + 0x58) = pauVar11;
        *(undefined4 *)pauVar11[1] = 0;
        *pauVar11 = (undefined1  [16])0x0;
      }
      puVar10 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
      *(undefined1 (*) [16])(puVar10 + 4) = (undefined1  [16])0x0;
      *puVar10 = 0;
      *(undefined1 (*) [16])(puVar10 + 8) = (undefined1  [16])0x0;
      puVar10[2] = 0;
      *(undefined8 *)(puVar10 + 0xc) = 0;
      *(undefined8 *)(puVar10 + 0xe) = 0xffffffff;
      *(undefined1 (*) [16])(puVar10 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar10 + 0x14) = (undefined1  [16])0x0;
      *puVar10 = local_88[0];
      Variant::operator=((Variant *)(puVar10 + 2),(Variant *)&local_80);
      puVar10[8] = local_68;
      puVar10[9] = uStack_64;
      puVar10[10] = iStack_60;
      puVar10[0xb] = iStack_5c;
      puVar10[0xc] = local_58;
      puVar10[0xd] = iStack_54;
      puVar10[0xe] = local_50;
      puVar10[0xf] = uStack_4c;
      if (*(long *)(puVar10 + 0x10) != local_48) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar10 + 0x10),(CowData *)&local_48);
      }
      uVar3 = *(undefined8 *)(*(long *)(in_RSI + 0x58) + 8);
      *(long *)(puVar10 + 0x16) = *(long *)(in_RSI + 0x58);
      plVar1 = *(long **)(in_RSI + 0x58);
      *(undefined8 *)(puVar10 + 0x12) = 0;
      *(undefined8 *)(puVar10 + 0x14) = uVar3;
      if (plVar1[1] != 0) {
        *(undefined4 **)(plVar1[1] + 0x48) = puVar10;
      }
      plVar1[1] = (long)puVar10;
      if (*plVar1 == 0) {
        *plVar1 = (long)puVar10;
      }
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_00107221;
        goto LAB_00107202;
      }
      goto LAB_00107221;
         case L'a':
      wVar15 = L'\a';
      break;
         case L'b':
      wVar15 = L'\b';
      break;
         case L'f':
      wVar15 = L'\f';
      break;
         case L'n':
      wVar15 = L'\n';
      break;
         case L'r':
      wVar15 = L'\r';
      break;
         case L't':
      wVar15 = L'\t';
      break;
         case L'v':
      wVar15 = L'\v';
      }

      if (wVar16 != L'\0') {
         local_e8 = "Invalid UTF-16 sequence in string, unpaired lead surrogate.";
         local_f0 = 0;
         local_e0 = 0x3b;
         String::parse_latin1((StrRange*)&local_f0);
         make_error((String*)local_88);
         lVar6 = local_f0;
         if (local_f0 != 0) {
            LOCK();
            plVar1 = (long*)( local_f0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_f0 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

         iStack_60 = local_11c;
         local_58 = local_11c;
         if (*(long*)( in_RSI + 0x58 ) == 0) {
            pauVar11 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])( in_RSI + 0x58 ) = pauVar11;
            *(undefined4*)pauVar11[1] = 0;
            *pauVar11 = (undefined1[16])0x0;
         }

         puVar10 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
         *(undefined1(*) [16])( puVar10 + 4 ) = (undefined1[16])0x0;
         *puVar10 = 0;
         *(undefined1(*) [16])( puVar10 + 8 ) = (undefined1[16])0x0;
         puVar10[2] = 0;
         *(undefined8*)( puVar10 + 0xc ) = 0;
         *(undefined8*)( puVar10 + 0xe ) = 0xffffffff;
         *(undefined1(*) [16])( puVar10 + 0x10 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( puVar10 + 0x14 ) = (undefined1[16])0x0;
         *puVar10 = local_88[0];
         Variant::operator =((Variant*)( puVar10 + 2 ), (Variant*)&local_80);
         puVar10[8] = local_68;
         puVar10[9] = uStack_64;
         puVar10[10] = iStack_60;
         puVar10[0xb] = iStack_5c;
         puVar10[0xc] = local_58;
         puVar10[0xd] = iStack_54;
         puVar10[0xe] = local_50;
         puVar10[0xf] = uStack_4c;
         if (*(long*)( puVar10 + 0x10 ) != local_48) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar10 + 0x10 ), (CowData*)&local_48);
         }

         lVar6 = local_48;
         uVar3 = *(undefined8*)( *(long*)( in_RSI + 0x58 ) + 8 );
         *(long*)( puVar10 + 0x16 ) = *(long*)( in_RSI + 0x58 );
         plVar1 = *(long**)( in_RSI + 0x58 );
         *(undefined8*)( puVar10 + 0x12 ) = 0;
         *(undefined8*)( puVar10 + 0x14 ) = uVar3;
         if (plVar1[1] != 0) {
            *(undefined4**)( plVar1[1] + 0x48 ) = puVar10;
         }

         plVar1[1] = (long)puVar10;
         if (*plVar1 == 0) {
            *plVar1 = (long)puVar10;
         }

         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

         if (( &Variant::needs_deinit )[local_80] != '\0') {
            Variant::_clear_internal();
         }

      }

      LAB_00107687:String::operator +=((String*)&local_108, wVar15);
      LAB_00106592:wVar16 = L'\0';
   }

   LAB_00106599:iVar8 = *(int*)( in_RSI + 0x11c );
   if (*(int*)( in_RSI + 0x120 ) <= iVar8) goto LAB_00106cb5;
   goto LAB_001065ab;
   switchD_00106dba_caseD_a:newline(in_RSI, false);
   goto LAB_00106599;
}
/* GDScriptTokenizerText::_skip_whitespace() [clone .part.0] */void GDScriptTokenizerText::_skip_whitespace(GDScriptTokenizerText *this) {
   long *plVar1;
   long lVar2;
   int iVar3;
   wchar32 wVar4;
   long lVar5;
   long *plVar6;
   int iVar7;
   char *pcVar8;
   char *pcVar9;
   long in_FS_OFFSET;
   bool bVar10;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = *(int*)( this + 0x11c );
   joined_r0x00107e51:if (-1 < iVar3) {
      do {
         iVar7 = *(int*)( this + 0x120 );
         if (iVar7 <= iVar3) break;
         switch (**(undefined4**)( this + 0x18 )) {
            case 9:
        goto switchD_00107e79_caseD_9;
            case 10:
        _advance(this);
        newline(this,true);
        check_indent(this);
        iVar3 = *(int *)(this + 0x11c);
        goto joined_r0x00107e51;
            default:
        goto switchD_00107e79_caseD_b;
            case 0xd:
        _advance(this);
        iVar3 = *(int *)(this + 0x11c);
        if (((iVar3 < 0) || (*(int *)(this + 0x120) <= iVar3)) || (**(int **)(this + 0x18) != 10)) {
          local_40 = 0;
          local_38 = "Stray carriage return character in source code.";
          local_30 = 0x2f;
          String::parse_latin1((StrRange *)&local_40);
          push_error((String *)this);
          lVar2 = local_40;
          if (local_40 != 0) {
            LOCK();
            plVar6 = (long *)(local_40 + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              local_40 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          goto switchD_00107e79_caseD_b;
        }
        break;
            case 0x20:
        _advance(this);
        iVar3 = *(int *)(this + 0x11c);
        goto joined_r0x00107e51;
            case 0x23:
        local_38 = (char *)0x0;
        goto LAB_00107ed0;
         }

      }
 while ( true );
   }

   goto switchD_00107e79_caseD_b;
   LAB_00107ed0:pcVar9 = local_38;
   if (iVar3 < 0) {
      if (iVar7 <= iVar3) goto LAB_00107ee0;
   }
 else if (( iVar7 <= iVar3 ) || ( **(int**)( this + 0x18 ) == 10 )) goto LAB_00107ee0;
   wVar4 = _advance(this);
   String::operator +=((String*)&local_38, wVar4);
   iVar7 = *(int*)( this + 0x120 );
   iVar3 = *(int*)( this + 0x11c );
   goto LAB_00107ed0;
   LAB_00107ee0:if (local_38 == (char*)0x0) {
      plVar6 = (long*)HashMap<int,GDScriptTokenizer::CommentData,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GDScriptTokenizer::CommentData>>>::operator []((HashMap<int,GDScriptTokenizer::CommentData,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GDScriptTokenizer::CommentData>>>*)( this + 0x148 ), (int*)( this + 0x20 ));
      pcVar8 = (char*)*plVar6;
      if (pcVar8 == (char*)0x0) {
         LAB_00108170:*(undefined1*)( plVar6 + 1 ) = 0;
         goto LAB_00107f49;
      }

      LAB_001080fb:LOCK();
      plVar1 = (long*)( pcVar8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *plVar6;
         *plVar6 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }
 else {
      plVar6 = (long*)( local_38 + -0x10 );
      do {
         lVar2 = *plVar6;
         if (lVar2 == 0) goto LAB_00108128;
         LOCK();
         lVar5 = *plVar6;
         bVar10 = lVar2 == lVar5;
         if (bVar10) {
            *plVar6 = lVar2 + 1;
            lVar5 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar10 );
      if (lVar5 == -1) {
         LAB_00108128:plVar6 = (long*)HashMap<int,GDScriptTokenizer::CommentData,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GDScriptTokenizer::CommentData>>>::operator []((HashMap<int,GDScriptTokenizer::CommentData,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GDScriptTokenizer::CommentData>>>*)( this + 0x148 ), (int*)( this + 0x20 ));
         pcVar8 = (char*)*plVar6;
         if (pcVar8 == (char*)0x0) goto LAB_00108170;
         pcVar9 = (char*)0x0;
         goto LAB_001080fb;
      }

      plVar6 = (long*)HashMap<int,GDScriptTokenizer::CommentData,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GDScriptTokenizer::CommentData>>>::operator []((HashMap<int,GDScriptTokenizer::CommentData,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GDScriptTokenizer::CommentData>>>*)( this + 0x148 ), (int*)( this + 0x20 ));
      pcVar8 = (char*)*plVar6;
      if (pcVar8 == pcVar9) {
         *(undefined1*)( plVar6 + 1 ) = 0;
         if (pcVar8 != (char*)0x0) {
            plVar6 = (long*)( pcVar8 + -0x10 );
            LOCK();
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               Memory::free_static(plVar6, false);
            }

         }

         goto LAB_00107f49;
      }

      if (pcVar8 != (char*)0x0) goto LAB_001080fb;
   }

   *plVar6 = (long)pcVar9;
   *(undefined1*)( plVar6 + 1 ) = 0;
   LAB_00107f49:if (*(int*)( this + 0x120 ) <= *(int*)( this + 0x11c )) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
      switchD_00107e79_caseD_b:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   _advance(this);
   newline(this, true);
   check_indent(this);
   pcVar9 = local_38;
   if (local_38 != (char*)0x0) {
      LOCK();
      plVar6 = (long*)( local_38 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_38 = (char*)0x0;
         Memory::free_static(pcVar9 + -0x10, false);
      }

   }

   iVar3 = *(int*)( this + 0x11c );
   goto joined_r0x00107e51;
   switchD_00107e79_caseD_9:_advance(this);
   *(int*)( this + 0x24 ) = *(int*)( this + 0x24 ) + *(int*)( this + 0x30 ) + -1;
   iVar3 = *(int*)( this + 0x11c );
   goto joined_r0x00107e51;
}
/* GDScriptTokenizerText::_skip_whitespace() */void GDScriptTokenizerText::_skip_whitespace(GDScriptTokenizerText *this) {
   if (*(int*)( this + 0xf8 ) != 0) {
      return;
   }

   if (*(int*)( this + 0x24 ) != 1) {
      _skip_whitespace(this);
      return;
   }

   check_indent(this);
   return;
}
/* GDScriptTokenizerText::make_keyword_list() */void GDScriptTokenizerText::make_keyword_list(GDScriptTokenizerText *this) {
   long *plVar1;
   code *pcVar2;
   undefined8 *puVar3;
   CowData *pCVar4;
   ulong uVar5;
   long lVar6;
   CowData *this_00;
   long lVar7;
   undefined8 *puVar8;
   long lVar9;
   CowData *pCVar10;
   StrRange *pSVar11;
   long in_FS_OFFSET;
   bool bVar12;
   byte bVar13;
   CowData *local_190;
   undefined8 local_188;
   undefined8 local_180;
   undefined8 local_178;
   undefined8 local_170;
   undefined8 local_168;
   undefined8 local_160;
   undefined8 local_158;
   undefined8 local_150;
   undefined8 local_148;
   undefined8 local_140;
   undefined8 local_138;
   undefined8 local_130;
   undefined8 local_128;
   undefined8 local_120;
   undefined8 local_118;
   undefined8 local_110;
   undefined8 local_108;
   undefined8 local_100;
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   CowData local_48[8];
   long local_40;
   bVar13 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_188 = 0;
   local_190 = (CowData*)0x2;
   String::parse_latin1((StrRange*)&local_188);
   local_180 = 0;
   local_190 = (CowData*)0x3;
   String::parse_latin1((StrRange*)&local_180);
   local_178 = 0;
   local_190 = (CowData*)0x6;
   String::parse_latin1((StrRange*)&local_178);
   local_170 = 0;
   local_190 = (CowData*)0x5;
   String::parse_latin1((StrRange*)&local_170);
   local_168 = 0;
   local_190 = (CowData*)0x5;
   String::parse_latin1((StrRange*)&local_168);
   local_160 = 0;
   local_190 = (CowData*)0xa;
   String::parse_latin1((StrRange*)&local_160);
   local_158 = 0;
   local_190 = (CowData*)0x5;
   String::parse_latin1((StrRange*)&local_158);
   local_150 = 0;
   local_190 = (CowData*)0xa;
   String::parse_latin1((StrRange*)&local_150);
   local_148 = 0;
   local_190 = (CowData*)0x5;
   String::parse_latin1((StrRange*)&local_148);
   local_140 = 0;
   local_190 = (CowData*)0x8;
   String::parse_latin1((StrRange*)&local_140);
   local_138 = 0;
   local_190 = (CowData*)0x4;
   String::parse_latin1((StrRange*)&local_138);
   local_130 = 0;
   local_190 = (CowData*)0x4;
   String::parse_latin1((StrRange*)&local_130);
   local_128 = 0;
   local_190 = (CowData*)0x4;
   String::parse_latin1((StrRange*)&local_128);
   local_120 = 0;
   local_190 = (CowData*)0x7;
   String::parse_latin1((StrRange*)&local_120);
   local_118 = 0;
   local_190 = (CowData*)0x3;
   String::parse_latin1((StrRange*)&local_118);
   local_110 = 0;
   local_190 = (CowData*)0x4;
   String::parse_latin1((StrRange*)&local_110);
   local_108 = 0;
   local_190 = (CowData*)0x2;
   String::parse_latin1((StrRange*)&local_108);
   local_100 = 0;
   local_190 = (CowData*)0x2;
   String::parse_latin1((StrRange*)&local_100);
   local_f8 = 0;
   local_190 = (CowData*)0x2;
   String::parse_latin1((StrRange*)&local_f8);
   local_f0 = 0;
   local_190 = (CowData*)0x5;
   String::parse_latin1((StrRange*)&local_f0);
   local_e8 = 0;
   local_190 = (CowData*)0x9;
   String::parse_latin1((StrRange*)&local_e8);
   local_e0 = 0;
   local_190 = (CowData*)0x3;
   String::parse_latin1((StrRange*)&local_e0);
   local_d8 = 0;
   local_190 = (CowData*)0x2;
   String::parse_latin1((StrRange*)&local_d8);
   local_d0 = 0;
   local_190 = (CowData*)0x4;
   String::parse_latin1((StrRange*)&local_d0);
   local_c8 = 0;
   local_190 = (CowData*)0x7;
   String::parse_latin1((StrRange*)&local_c8);
   local_c0 = 0;
   local_190 = (CowData*)0x6;
   String::parse_latin1((StrRange*)&local_c0);
   local_b8 = 0;
   local_190 = (CowData*)0x4;
   String::parse_latin1((StrRange*)&local_b8);
   local_b0 = 0;
   local_190 = (CowData*)0x6;
   String::parse_latin1((StrRange*)&local_b0);
   local_a8 = 0;
   local_190 = (CowData*)0x6;
   String::parse_latin1((StrRange*)&local_a8);
   local_a0 = 0;
   local_190 = (CowData*)0x5;
   String::parse_latin1((StrRange*)&local_a0);
   local_98 = 0;
   local_190 = (CowData*)0x5;
   String::parse_latin1((StrRange*)&local_98);
   local_90 = 0;
   local_190 = (CowData*)0x3;
   String::parse_latin1((StrRange*)&local_90);
   local_88 = 0;
   local_190 = (CowData*)0x4;
   String::parse_latin1((StrRange*)&local_88);
   local_80 = 0;
   local_190 = (CowData*)0x5;
   String::parse_latin1((StrRange*)&local_80);
   local_78 = 0;
   local_190 = (CowData*)0x4;
   String::parse_latin1((StrRange*)&local_78);
   local_70 = 0;
   local_190 = (CowData*)0x5;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = 0;
   local_190 = (CowData*)0x3;
   String::parse_latin1((StrRange*)&local_68);
   local_60 = 0;
   local_190 = (CowData*)0x3;
   String::parse_latin1((StrRange*)&local_60);
   local_58 = 0;
   local_190 = (CowData*)0x2;
   String::parse_latin1((StrRange*)&local_58);
   local_50 = 0;
   local_190 = (CowData*)0x3;
   String::parse_latin1((StrRange*)&local_50);
   local_190 = (CowData*)0x0;
   puVar3 = (undefined8*)Memory::alloc_static(0x210, false);
   if (puVar3 == (undefined8*)0x0) {
      pCVar4 = (CowData*)0x0;
      _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
   }
 else {
      pCVar4 = (CowData*)( puVar3 + 2 );
      lVar7 = 0;
      *puVar3 = 1;
      puVar3[2] = 0;
      puVar3[0x29] = 0;
      puVar8 = (undefined8*)( ( ulong )(puVar3 + 3) & 0xfffffffffffffff8 );
      for (uVar5 = ( ulong )(( (int)pCVar4 - (int)(undefined8*)( ( ulong )(puVar3 + 3) & 0xfffffffffffffff8 ) ) + 0x140U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
         *puVar8 = 0;
         puVar8 = puVar8 + (ulong)bVar13 * -2 + 1;
      }

      puVar3[1] = 0x28;
      pSVar11 = (StrRange*)&local_188;
      local_190 = pCVar4;
      do {
         pCVar10 = local_190;
         if (pCVar4 == (CowData*)0x0) {
            lVar9 = 0;
            LAB_00108ad5:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar9, "p_index", "size()", "", false, false);
         }
 else {
            lVar9 = *(long*)( pCVar4 + -8 );
            if (lVar9 <= lVar7) goto LAB_00108ad5;
            if (1 < *(ulong*)( pCVar4 + -0x10 )) {
               if (local_190 == (CowData*)0x0) {
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar9 = *(long*)( local_190 + -8 );
               uVar5 = 0x10;
               if (lVar9 * 8 != 0) {
                  uVar5 = lVar9 * 8 - 1;
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
               }
 else {
                  pCVar10 = (CowData*)( puVar3 + 2 );
                  *puVar3 = 1;
                  puVar3[1] = lVar9;
                  if (lVar9 != 0) {
                     lVar6 = 0;
                     pCVar4 = local_190;
                     this_00 = pCVar10;
                     do {
                        *(undefined8*)this_00 = 0;
                        if (*(long*)pCVar4 != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)this_00, pCVar4);
                        }

                        lVar6 = lVar6 + 1;
                        this_00 = (CowData*)( (CowData<char32_t>*)this_00 + 8 );
                        pCVar4 = pCVar4 + 8;
                     }
 while ( lVar9 != lVar6 );
                  }

                  CowData<String>::_unref((CowData<String>*)&local_190);
                  local_190 = pCVar10;
               }

            }

            pCVar4 = pCVar10;
            if (*(long*)( pCVar10 + lVar7 * 8 ) != *(long*)pSVar11) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( pCVar10 + lVar7 * 8 ), (CowData*)pSVar11);
            }

         }

         pSVar11 = (StrRange*)( (CowData*)pSVar11 + 8 );
         lVar7 = lVar7 + 1;
      }
 while ( pSVar11 != (StrRange*)local_48 );
   }

   if (*(CowData**)( this + 0x140 ) != pCVar4) {
      CowData<String>::_unref((CowData<String>*)( this + 0x140 ));
      *(CowData**)( this + 0x140 ) = pCVar4;
      local_190 = (CowData*)0x0;
   }

   CowData<String>::_unref((CowData<String>*)&local_190);
   pSVar11 = (StrRange*)&local_50;
   do {
      if (*(long*)pSVar11 != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)pSVar11 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar7 = *(long*)pSVar11;
            *(undefined8*)pSVar11 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      bVar12 = pSVar11 != (StrRange*)&local_188;
      pSVar11 = pSVar11 + -8;
   }
 while ( bVar12 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GDScriptTokenizerText::GDScriptTokenizerText() */void GDScriptTokenizerText::GDScriptTokenizerText(GDScriptTokenizerText *this) {
   long *plVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( this + ( 4*i + 32 ) ) = 4294967295;
   }

   *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x88 ) = (undefined1[16])0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 8 ) ) = 0;
   }

   *(undefined***)this = &PTR_get_comments_0010e740;
   *(undefined2*)( this + 0x50 ) = 0;
   *(undefined4*)( this + 0x30 ) = 4;
   *(undefined8*)( this + 0x38 ) = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   this[0x60] = (GDScriptTokenizerText)0x0;
   *(undefined4*)( this + 0x68 ) = 0;
   *(undefined4*)( this + 0x70 ) = 0;
   *(undefined8*)( this + 0x98 ) = 0;
   *(undefined8*)( this + 0xa0 ) = 0xffffffff;
   *(undefined8*)( this + 0xa8 ) = 0;
   *(undefined4*)( this + 0xb0 ) = 0;
   *(undefined4*)( this + 0xb8 ) = 0;
   *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xc0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0xe0 ) = 0;
   *(undefined8*)( this + 0xe8 ) = 0xffffffff;
   *(undefined8*)( this + 0xf0 ) = 0;
   *(undefined4*)( this + 0xf8 ) = 0;
   *(undefined8*)( this + 0x110 ) = 0;
   *(undefined4*)( this + 0x118 ) = 0;
   *(undefined8*)( this + 0x11c ) = 0;
   *(undefined8*)( this + 0x130 ) = 0;
   *(undefined8*)( this + 0x140 ) = 0;
   *(undefined8*)( this + 0x170 ) = 2;
   *(undefined1(*) [16])( this + 0xd0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x100 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x150 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x160 ) = (undefined1[16])0x0;
   lVar3 = EditorSettings::get_singleton();
   if (lVar3 != 0) {
      EditorSettings::get_singleton();
      local_60 = 0;
      local_50 = 0x20;
      local_58 = "text_editor/behavior/indent/size";
      String::parse_latin1((StrRange*)&local_60);
      EditorSettings::get_setting((String*)local_48);
      iVar2 = Variant::operator_cast_to_int((Variant*)local_48);
      *(int*)( this + 0x30 ) = iVar2;
      if (( &Variant::needs_deinit )[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

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

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      make_keyword_list(this);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTokenizerText::scan() */void GDScriptTokenizerText::scan(void) {
   long *plVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   char cVar6;
   uint uVar7;
   int iVar8;
   int iVar9;
   long lVar10;
   int iVar11;
   int *piVar12;
   uint uVar13;
   GDScriptTokenizerText *in_RSI;
   wchar32 wVar14;
   String *in_RDI;
   long lVar15;
   long in_FS_OFFSET;
   undefined1 auVar16[16];
   long local_90;
   char *local_88;
   undefined8 local_80;
   undefined4 local_78[2];
   undefined4 local_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined4 local_50;
   int local_4c;
   undefined4 local_48;
   int local_44;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( in_RSI + 0x58 ) != 0 ) && ( *(int*)( *(long*)( in_RSI + 0x58 ) + 0x10 ) != 0 )) {
      LAB_00108ee6:pop_error();
      goto LAB_00108ef1;
   }

   if (*(int*)( in_RSI + 0xf8 ) == 0) {
      if (*(int*)( in_RSI + 0x24 ) == 1) {
         check_indent(in_RSI);
      }
 else {
         _skip_whitespace(in_RSI);
      }

   }

   if (( in_RSI[0x60] != (GDScriptTokenizerText)0x0 ) && ( in_RSI[0x60] = (GDScriptTokenizerText)0x0 ),in_RSI[0x51] == (GDScriptTokenizerText)0x0) {
      *(undefined4*)in_RDI = *(undefined4*)( in_RSI + 0xb0 );
      Variant::Variant((Variant*)( in_RDI + 8 ), (Variant*)( in_RSI + 0xb8 ));
      uVar4 = *(undefined8*)( in_RSI + 0xd0 );
      uVar5 = *(undefined8*)( in_RSI + 0xd8 );
      *(undefined8*)( in_RDI + 0x30 ) = *(undefined8*)( in_RSI + 0xe0 );
      uVar3 = *(undefined8*)( in_RSI + 0xe8 );
      *(undefined8*)( in_RDI + 0x40 ) = 0;
      *(undefined8*)( in_RDI + 0x38 ) = uVar3;
      lVar10 = *(long*)( in_RSI + 0xf0 );
      *(undefined8*)( in_RDI + 0x20 ) = uVar4;
      *(undefined8*)( in_RDI + 0x28 ) = uVar5;
      if (lVar10 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( in_RDI + 0x40 ), (CowData*)( in_RSI + 0xf0 ));
      }

      goto LAB_00108ef1;
   }

   if (( *(long*)( in_RSI + 0x58 ) != 0 ) && ( *(int*)( *(long*)( in_RSI + 0x58 ) + 0x10 ) != 0 )) goto LAB_00108ee6;
   iVar9 = *(int*)( in_RSI + 0xf8 );
   iVar8 = SUB164(*(undefined1(*) [16])( in_RSI + 0x20 ), 4);
   auVar16._0_8_ = SUB168(*(undefined1(*) [16])( in_RSI + 0x20 ), 0);
   auVar16._8_4_ = iVar8;
   auVar16._12_4_ = iVar8;
   *(long*)( in_RSI + 0x38 ) = *(long*)( in_RSI + 0x18 );
   *(undefined1(*) [16])( in_RSI + 0x40 ) = auVar16;
   if (iVar9 != 0) {
      *(long*)( in_RSI + 0x38 ) = *(long*)( in_RSI + 0x18 ) + ( 1 - (long)iVar8 ) * 4;
      *(undefined8*)( in_RSI + 0x44 ) = _LC21;
      if (iVar9 < 1) {
         *(int*)( in_RSI + 0xf8 ) = iVar9 + 1;
         make_token(local_78);
         *(undefined4*)in_RDI = local_78[0];
         *(undefined4*)( in_RDI + 8 ) = local_70;
         *(undefined8*)( in_RDI + 0x20 ) = local_58;
         *(ulong*)( in_RDI + 0x28 ) = CONCAT44(local_4c + 1, local_50);
         *(undefined8*)( in_RDI + 0x38 ) = local_40;
         *(undefined8*)( in_RDI + 0x10 ) = local_68;
         *(undefined8*)( in_RDI + 0x18 ) = uStack_60;
         *(undefined8*)( in_RDI + 0x40 ) = local_38;
         *(ulong*)( in_RDI + 0x30 ) = CONCAT44(local_44 + 1, local_48);
      }
 else {
         *(int*)( in_RSI + 0xf8 ) = iVar9 + -1;
         make_token();
      }

      goto LAB_00108ef1;
   }

   if (*(int*)( in_RSI + 0x120 ) <= *(int*)( in_RSI + 0x11c )) {
      make_token();
      goto LAB_00108ef1;
   }

   uVar7 = _advance(in_RSI);
   if (uVar7 == 0x5c) {
      iVar9 = *(int*)( in_RSI + 0x11c );
      if (( -1 < iVar9 ) && ( iVar9 < *(int*)( in_RSI + 0x120 ) )) {
         piVar12 = *(int**)( in_RSI + 0x18 );
         if (*piVar12 == 0xd) {
            if (( *(int*)( in_RSI + 0x120 ) <= iVar9 + 1 ) || ( piVar12[1] != 10 )) {
               local_90 = 0;
               local_88 = "Unexpected carriage return character.";
               local_80 = 0x25;
               String::parse_latin1((StrRange*)&local_90);
               make_error(in_RDI);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               goto LAB_00108ef1;
            }

            _advance(in_RSI);
            if (( *(int*)( in_RSI + 0x11c ) < 0 ) || ( *(int*)( in_RSI + 0x120 ) <= *(int*)( in_RSI + 0x11c ) )) goto LAB_001091da;
            piVar12 = *(int**)( in_RSI + 0x18 );
         }

         if (*piVar12 == 10) {
            _advance(in_RSI);
            newline(in_RSI, false);
            in_RSI[0x50] = (GDScriptTokenizerText)0x1;
            if (*(int*)( in_RSI + 0xf8 ) == 0) {
               if (*(int*)( in_RSI + 0x24 ) == 1) {
                  check_indent(in_RSI);
               }
 else {
                  _skip_whitespace(in_RSI);
               }

            }

            uVar2 = *(undefined4*)( in_RSI + 0x20 );
            if (*(long*)( in_RSI + 0x130 ) == 0) {
               lVar10 = 0;
            }
 else {
               lVar10 = *(long*)( *(long*)( in_RSI + 0x130 ) + -8 );
            }

            iVar9 = CowData<int>::resize<false>((CowData<int>*)( in_RSI + 0x130 ), lVar10 + 1);
            if (iVar9 == 0) {
               if (*(long*)( in_RSI + 0x130 ) == 0) {
                  lVar15 = -1;
                  lVar10 = 0;
               }
 else {
                  lVar10 = *(long*)( *(long*)( in_RSI + 0x130 ) + -8 );
                  lVar15 = lVar10 + -1;
                  if (-1 < lVar15) {
                     CowData<int>::_copy_on_write((CowData<int>*)( in_RSI + 0x130 ));
                     *(undefined4*)( *(long*)( in_RSI + 0x130 ) + lVar15 * 4 ) = uVar2;
                     goto LAB_00109954;
                  }

               }

               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar15, lVar10, "p_index", "size()", "", false, false);
            }
 else {
               _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            }

            LAB_00109954:( **(code**)( *(long*)in_RSI + 0x48 ) )();
            goto LAB_00108ef1;
         }

      }

      LAB_001091da:local_90 = 0;
      local_88 = "Expected new line after \"\\\".";
      local_80 = 0x1c;
      String::parse_latin1((StrRange*)&local_90);
      make_error(in_RDI);
      lVar10 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }

      }

      goto LAB_00108ef1;
   }

   in_RSI[0x50] = (GDScriptTokenizerText)0x0;
   if (uVar7 - 0x30 < 10) {
      LAB_00109190:number();
      goto LAB_00108ef1;
   }

   if (( ( ( uVar7 == 0x72 ) && ( -1 < *(int*)( in_RSI + 0x11c ) ) ) && ( *(int*)( in_RSI + 0x11c ) < *(int*)( in_RSI + 0x120 ) ) ) && ( ( **(int**)( in_RSI + 0x18 ) == 0x22 || ( **(int**)( in_RSI + 0x18 ) == 0x27 ) ) )) {
      switchD_00109267_caseD_22:string();
   }
 else {
      uVar13 = 0xaaf2;
      iVar11 = 0x2ac;
      iVar8 = 0x156;
      iVar9 = 0;
      while (true) {
         if (uVar7 < uVar13) {
            iVar11 = iVar8 + -1;
         }
 else {
            if (uVar7 <= *(uint*)( xid_start + (long)iVar8 * 8 + 4 )) {
               potential_identifier();
               goto LAB_00108ef1;
            }

            iVar9 = iVar8 + 1;
         }

         iVar8 = ( iVar9 + iVar11 ) / 2;
         if (iVar11 < iVar9) break;
         uVar13 = *(uint*)( xid_start + (long)iVar8 * 8 );
      }
;
      wVar14 = (wchar32)in_RDI;
      switch (uVar7) {
         case 0x21:
      if (((*(int *)(in_RSI + 0x11c) < 0) || (*(int *)(in_RSI + 0x120) <= *(int *)(in_RSI + 0x11c)))
         || (**(int **)(in_RSI + 0x18) != 0x3d)) {
        make_token();
      }
      else {
        _advance(in_RSI);
        make_token();
      }
      break;
         case 0x22:
         case 0x27:
      goto switchD_00109267_caseD_22;
         default:
      if (uVar7 < 0x200c) {
        if ((uVar7 < 0x2000) && (uVar7 != 0x85)) {
          if (uVar7 < 0x86) {
            if (uVar7 < 0xe) {
              if (uVar7 < 9) goto LAB_001092ab;
            }
            else if (uVar7 != 0x20) goto LAB_001092ab;
          }
          else if ((uVar7 != 0xa0) && (uVar7 != 0x1680)) goto LAB_001092ab;
        }
LAB_00109a09:
        local_80 = 0x25;
        local_90 = 0;
        local_88 = "Invalid white space character U+%04X.";
        String::parse_latin1((StrRange *)&local_90);
        vformat<int>((String *)&local_88,(int)(StrRange *)&local_90);
      }
      else {
        if (0x205f < uVar7) {
          if (uVar7 != 0x3000) goto LAB_001092ab;
          goto LAB_00109a09;
        }
        if ((0x2027 < uVar7) && ((0x80000000000083U >> ((ulong)(uVar7 - 0x2028) & 0x3f) & 1) != 0))
        goto LAB_00109a09;
LAB_001092ab:
        local_80 = 0x20;
        local_90 = 0;
        local_88 = "Invalid character \"%c\" (U+%04X).";
        String::parse_latin1((StrRange *)&local_90);
        vformat<char32_t,int>((String *)&local_88,(wchar32)(StrRange *)&local_90,uVar7);
      }
      make_error(in_RDI);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      break;
         case 0x24:
      make_token();
      break;
         case 0x25:
      if (((*(int *)(in_RSI + 0x11c) < 0) || (*(int *)(in_RSI + 0x120) <= *(int *)(in_RSI + 0x11c)))
         || (**(int **)(in_RSI + 0x18) != 0x3d)) {
        make_token();
      }
      else {
        _advance(in_RSI);
        make_token();
      }
      break;
         case 0x26:
      if ((-1 < *(int *)(in_RSI + 0x11c)) && (*(int *)(in_RSI + 0x11c) < *(int *)(in_RSI + 0x120)))
      {
        iVar9 = **(int **)(in_RSI + 0x18);
        if (iVar9 == 0x26) {
          _advance(in_RSI);
          make_token();
          break;
        }
        if (iVar9 == 0x3d) {
          _advance(in_RSI);
          make_token();
          break;
        }
        if ((iVar9 == 0x22) || (iVar9 == 0x27)) goto switchD_00109267_caseD_22;
      }
      make_token();
      break;
         case 0x28:
      local_88 = (char *)CONCAT44(local_88._4_4_,0x28);
      List<char32_t,DefaultAllocator>::push_back
                ((List<char32_t,DefaultAllocator> *)(in_RSI + 0x110),(wchar32 *)&local_88);
      make_token();
      break;
         case 0x29:
      cVar6 = pop_paren(in_RSI,L'(');
      if (cVar6 == '\0') {
        make_paren_error(wVar14);
      }
      else {
        make_token();
      }
      break;
         case 0x2a:
      iVar9 = *(int *)(in_RSI + 0x11c);
      if ((-1 < iVar9) && (iVar9 < *(int *)(in_RSI + 0x120))) {
        iVar8 = **(int **)(in_RSI + 0x18);
        if (iVar8 == 0x3d) {
          _advance(in_RSI);
          make_token();
          break;
        }
        if (iVar8 == 0x2a) {
          if ((iVar9 + 1 < *(int *)(in_RSI + 0x120)) && ((*(int **)(in_RSI + 0x18))[1] == 0x3d)) {
            _advance(in_RSI);
            _advance(in_RSI);
            make_token();
          }
          else {
            _advance(in_RSI);
            make_token();
          }
          break;
        }
      }
      make_token();
      break;
         case 0x2b:
      if ((-1 < *(int *)(in_RSI + 0x11c)) && (*(int *)(in_RSI + 0x11c) < *(int *)(in_RSI + 0x120)))
      {
        if (**(int **)(in_RSI + 0x18) == 0x3d) {
          _advance(in_RSI);
          make_token();
          break;
        }
        if ((**(int **)(in_RSI + 0x18) - 0x30U < 10) &&
           (cVar6 = GDScriptTokenizer::Token::can_precede_bin_op(), cVar6 == '\0'))
        goto LAB_00109190;
      }
      make_token();
      break;
         case 0x2c:
      make_token();
      break;
         case 0x2d:
      if ((-1 < *(int *)(in_RSI + 0x11c)) && (*(int *)(in_RSI + 0x11c) < *(int *)(in_RSI + 0x120)))
      {
        piVar12 = *(int **)(in_RSI + 0x18);
        if (*piVar12 == 0x3d) {
          _advance(in_RSI);
          make_token();
          break;
        }
        if ((*piVar12 - 0x30U < 10) &&
           (cVar6 = GDScriptTokenizer::Token::can_precede_bin_op(), cVar6 == '\0'))
        goto LAB_00109190;
        if (*piVar12 == 0x3e) {
          _advance(in_RSI);
          make_token();
          break;
        }
      }
      make_token();
      break;
         case 0x2e:
      if ((-1 < *(int *)(in_RSI + 0x11c)) && (*(int *)(in_RSI + 0x11c) < *(int *)(in_RSI + 0x120)))
      {
        if (**(int **)(in_RSI + 0x18) == 0x2e) {
          _advance(in_RSI);
          make_token();
          break;
        }
        if (**(int **)(in_RSI + 0x18) - 0x30U < 10) goto LAB_00109190;
      }
      make_token();
      break;
         case 0x2f:
      if (((*(int *)(in_RSI + 0x11c) < 0) || (*(int *)(in_RSI + 0x120) <= *(int *)(in_RSI + 0x11c)))
         || (**(int **)(in_RSI + 0x18) != 0x3d)) {
        make_token();
      }
      else {
        _advance(in_RSI);
        make_token();
      }
      break;
         case 0x3a:
      make_token();
      break;
         case 0x3b:
      make_token();
      break;
         case 0x3c:
      iVar9 = *(int *)(in_RSI + 0x11c);
      if ((-1 < iVar9) && (iVar9 < *(int *)(in_RSI + 0x120))) {
        iVar8 = **(int **)(in_RSI + 0x18);
        if (iVar8 == 0x3d) {
          _advance(in_RSI);
          make_token();
          break;
        }
        if (iVar8 == 0x3c) {
          if ((iVar9 + 1 < *(int *)(in_RSI + 0x120)) && ((*(int **)(in_RSI + 0x18))[1] == 0x3d)) {
            _advance(in_RSI);
            _advance(in_RSI);
            make_token();
          }
          else {
            check_vcs_marker();
          }
          break;
        }
      }
      make_token();
      break;
         case 0x3d:
      if (((*(int *)(in_RSI + 0x11c) < 0) || (*(int *)(in_RSI + 0x120) <= *(int *)(in_RSI + 0x11c)))
         || (**(int **)(in_RSI + 0x18) != 0x3d)) {
        make_token();
      }
      else {
        check_vcs_marker();
      }
      break;
         case 0x3e:
      iVar9 = *(int *)(in_RSI + 0x11c);
      if ((-1 < iVar9) && (iVar9 < *(int *)(in_RSI + 0x120))) {
        iVar8 = **(int **)(in_RSI + 0x18);
        if (iVar8 == 0x3d) {
          _advance(in_RSI);
          make_token();
          break;
        }
        if (iVar8 == 0x3e) {
          if ((iVar9 + 1 < *(int *)(in_RSI + 0x120)) && ((*(int **)(in_RSI + 0x18))[1] == 0x3d)) {
            _advance(in_RSI);
            _advance(in_RSI);
            make_token();
          }
          else {
            check_vcs_marker();
          }
          break;
        }
      }
      make_token();
      break;
         case 0x3f:
      make_token();
      break;
         case 0x40:
      annotation();
      break;
         case 0x5b:
      local_88 = (char *)CONCAT44(local_88._4_4_,0x5b);
      List<char32_t,DefaultAllocator>::push_back
                ((List<char32_t,DefaultAllocator> *)(in_RSI + 0x110),(wchar32 *)&local_88);
      make_token();
      break;
         case 0x5d:
      cVar6 = pop_paren(in_RSI,L'[');
      if (cVar6 == '\0') {
        make_paren_error(wVar14);
      }
      else {
        make_token();
      }
      break;
         case 0x5e:
      if ((-1 < *(int *)(in_RSI + 0x11c)) && (*(int *)(in_RSI + 0x11c) < *(int *)(in_RSI + 0x120)))
      {
        iVar9 = **(int **)(in_RSI + 0x18);
        if (iVar9 == 0x3d) {
          _advance(in_RSI);
          make_token();
          break;
        }
        if ((iVar9 == 0x22) || (iVar9 == 0x27)) goto switchD_00109267_caseD_22;
      }
      make_token();
      break;
         case 0x60:
      make_token();
      break;
         case 0x7b:
      local_88 = (char *)CONCAT44(local_88._4_4_,0x7b);
      List<char32_t,DefaultAllocator>::push_back
                ((List<char32_t,DefaultAllocator> *)(in_RSI + 0x110),(wchar32 *)&local_88);
      make_token();
      break;
         case 0x7c:
      if ((-1 < *(int *)(in_RSI + 0x11c)) && (*(int *)(in_RSI + 0x11c) < *(int *)(in_RSI + 0x120)))
      {
        if (**(int **)(in_RSI + 0x18) == 0x7c) {
          _advance(in_RSI);
          make_token();
          break;
        }
        if (**(int **)(in_RSI + 0x18) == 0x3d) {
          _advance(in_RSI);
          make_token();
          break;
        }
      }
      make_token();
      break;
         case 0x7d:
      cVar6 = pop_paren(in_RSI,L'{');
      if (cVar6 == '\0') {
        make_paren_error(wVar14);
      }
      else {
        make_token();
      }
      break;
         case 0x7e:
      make_token();
      }

   }

   LAB_00108ef1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* is_digit(char32_t) */bool is_digit(wchar32 param_1) {
   return ( uint )(param_1 + L'\xffffffd0') < 10;
}
/* is_hex_digit(char32_t) */undefined8 is_hex_digit(wchar32 param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( uint )(param_1 + L'\xffffffd0') < 0x37) {
      uVar1 = CONCAT71(0x7e0000007e03, ( 0x7e0000007e03ffU >> ( ( ulong )(uint)(param_1 + L'\xffffffd0') & 0x3f ) & 1 ) != 0);
   }

   return uVar1;
}
/* is_binary_digit(char32_t) */bool is_binary_digit(wchar32 param_1) {
   return ( uint )(param_1 + L'\xffffffd0') < 2;
}
/* GDScriptTokenizerText::is_text() */undefined8 GDScriptTokenizerText::is_text(void) {
   return 1;
}
/* GDScriptTokenizerText::get_comments() const */GDScriptTokenizerText * __thiscall GDScriptTokenizerText::get_comments(GDScriptTokenizerText *this){
   return this + 0x148;
}
/* TextServer::is_confusable(String const&, Vector<String> const&) const */undefined8 TextServer::is_confusable(String *param_1, Vector *param_2) {
   return 0xffffffffffffffff;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GDScriptTokenizerText::pop_error() [clone .cold] */void GDScriptTokenizerText::pop_error(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GDScriptTokenizerText::potential_identifier() [clone .cold] */void GDScriptTokenizerText::potential_identifier(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GDScriptTokenizerText::make_keyword_list() [clone .cold] */void GDScriptTokenizerText::make_keyword_list(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */void Variant::operator =(Variant *this, Variant *param_1) {
   undefined8 uVar1;
   if (this != param_1) {
      if (( &needs_deinit )[*(int*)this] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)this = 0;
      *(undefined4*)this = *(undefined4*)param_1;
      uVar1 = *(undefined8*)( param_1 + 0x10 );
      *(undefined8*)( this + 8 ) = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( this + 0x10 ) = uVar1;
      *(undefined4*)param_1 = 0;
      return;
   }

   return;
}
/* GDScriptTokenizer::Token::~Token() */void GDScriptTokenizer::Token::~Token(Token *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 0x40 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x40 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x40 );
         *(undefined8*)( this + 0x40 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( &Variant::needs_deinit )[*(int*)( this + 8 )] == '\0') {
      return;
   }

   Variant::_clear_internal();
   return;
}
/* GDScriptTokenizer::Token::Token(GDScriptTokenizer::Token&&) */void GDScriptTokenizer::Token::Token(Token *this, Token *param_1) {
   undefined4 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   uVar1 = *(undefined4*)param_1;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   *(undefined4*)this = uVar1;
   uVar1 = *(undefined4*)( param_1 + 8 );
   uVar2 = *(undefined8*)( param_1 + 0x10 );
   uVar3 = *(undefined8*)( param_1 + 0x18 );
   *(undefined4*)( param_1 + 8 ) = 0;
   *(undefined4*)( this + 8 ) = uVar1;
   *(undefined8*)( this + 0x10 ) = uVar2;
   *(undefined8*)( this + 0x18 ) = uVar3;
   uVar3 = *(undefined8*)( param_1 + 0x20 );
   uVar4 = *(undefined8*)( param_1 + 0x28 );
   *(undefined8*)( this + 0x30 ) = *(undefined8*)( param_1 + 0x30 );
   uVar2 = *(undefined8*)( param_1 + 0x38 );
   *(undefined8*)( this + 0x20 ) = uVar3;
   *(undefined8*)( this + 0x28 ) = uVar4;
   *(undefined8*)( this + 0x38 ) = uVar2;
   uVar2 = *(undefined8*)( param_1 + 0x40 );
   *(undefined8*)( param_1 + 0x40 ) = 0;
   *(undefined8*)( this + 0x40 ) = uVar2;
   return;
}
/* WARNING: Removing unreachable block (ram,0x0010ac98) *//* WARNING: Removing unreachable block (ram,0x0010adc8) *//* WARNING: Removing unreachable block (ram,0x0010af90) *//* WARNING: Removing unreachable block (ram,0x0010add4) *//* WARNING: Removing unreachable block (ram,0x0010adde) *//* WARNING: Removing unreachable block (ram,0x0010af70) *//* WARNING: Removing unreachable block (ram,0x0010adea) *//* WARNING: Removing unreachable block (ram,0x0010adf4) *//* WARNING: Removing unreachable block (ram,0x0010af50) *//* WARNING: Removing unreachable block (ram,0x0010ae00) *//* WARNING: Removing unreachable block (ram,0x0010ae0a) *//* WARNING: Removing unreachable block (ram,0x0010af30) *//* WARNING: Removing unreachable block (ram,0x0010ae16) *//* WARNING: Removing unreachable block (ram,0x0010ae20) *//* WARNING: Removing unreachable block (ram,0x0010af10) *//* WARNING: Removing unreachable block (ram,0x0010ae2c) *//* WARNING: Removing unreachable block (ram,0x0010ae36) *//* WARNING: Removing unreachable block (ram,0x0010aef0) *//* WARNING: Removing unreachable block (ram,0x0010ae42) *//* WARNING: Removing unreachable block (ram,0x0010ae4c) *//* WARNING: Removing unreachable block (ram,0x0010aed0) *//* WARNING: Removing unreachable block (ram,0x0010ae54) *//* WARNING: Removing unreachable block (ram,0x0010ae6a) *//* WARNING: Removing unreachable block (ram,0x0010ae76) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
   Array::~Array(local_c8);
   if (( &Variant::needs_deinit )[(int)local_60] == '\0') {
      cVar1 = ( &Variant::needs_deinit )[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = ( &Variant::needs_deinit )[local_78[0]];
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
/* WARNING: Removing unreachable block (ram,0x0010b0d8) *//* WARNING: Removing unreachable block (ram,0x0010b208) *//* WARNING: Removing unreachable block (ram,0x0010b3d0) *//* WARNING: Removing unreachable block (ram,0x0010b214) *//* WARNING: Removing unreachable block (ram,0x0010b21e) *//* WARNING: Removing unreachable block (ram,0x0010b3b0) *//* WARNING: Removing unreachable block (ram,0x0010b22a) *//* WARNING: Removing unreachable block (ram,0x0010b234) *//* WARNING: Removing unreachable block (ram,0x0010b390) *//* WARNING: Removing unreachable block (ram,0x0010b240) *//* WARNING: Removing unreachable block (ram,0x0010b24a) *//* WARNING: Removing unreachable block (ram,0x0010b370) *//* WARNING: Removing unreachable block (ram,0x0010b256) *//* WARNING: Removing unreachable block (ram,0x0010b260) *//* WARNING: Removing unreachable block (ram,0x0010b350) *//* WARNING: Removing unreachable block (ram,0x0010b26c) *//* WARNING: Removing unreachable block (ram,0x0010b276) *//* WARNING: Removing unreachable block (ram,0x0010b330) *//* WARNING: Removing unreachable block (ram,0x0010b282) *//* WARNING: Removing unreachable block (ram,0x0010b28c) *//* WARNING: Removing unreachable block (ram,0x0010b310) *//* WARNING: Removing unreachable block (ram,0x0010b294) *//* WARNING: Removing unreachable block (ram,0x0010b2aa) *//* WARNING: Removing unreachable block (ram,0x0010b2b6) *//* String vformat<char const*>(String const&, char const* const) */String *vformat<char_const*>(String *param_1, char *param_2) {
   char cVar1;
   Variant *this;
   char *in_RDX;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, in_RDX);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, (bool*)param_2);
   *(undefined8*)param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (( &Variant::needs_deinit )[(int)local_60] == '\0') {
      cVar1 = ( &Variant::needs_deinit )[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = ( &Variant::needs_deinit )[local_78[0]];
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
/* WARNING: Removing unreachable block (ram,0x0010b518) *//* WARNING: Removing unreachable block (ram,0x0010b648) *//* WARNING: Removing unreachable block (ram,0x0010b810) *//* WARNING: Removing unreachable block (ram,0x0010b654) *//* WARNING: Removing unreachable block (ram,0x0010b65e) *//* WARNING: Removing unreachable block (ram,0x0010b7f0) *//* WARNING: Removing unreachable block (ram,0x0010b66a) *//* WARNING: Removing unreachable block (ram,0x0010b674) *//* WARNING: Removing unreachable block (ram,0x0010b7d0) *//* WARNING: Removing unreachable block (ram,0x0010b680) *//* WARNING: Removing unreachable block (ram,0x0010b68a) *//* WARNING: Removing unreachable block (ram,0x0010b7b0) *//* WARNING: Removing unreachable block (ram,0x0010b696) *//* WARNING: Removing unreachable block (ram,0x0010b6a0) *//* WARNING: Removing unreachable block (ram,0x0010b790) *//* WARNING: Removing unreachable block (ram,0x0010b6ac) *//* WARNING: Removing unreachable block (ram,0x0010b6b6) *//* WARNING: Removing unreachable block (ram,0x0010b770) *//* WARNING: Removing unreachable block (ram,0x0010b6c2) *//* WARNING: Removing unreachable block (ram,0x0010b6cc) *//* WARNING: Removing unreachable block (ram,0x0010b750) *//* WARNING: Removing unreachable block (ram,0x0010b6d4) *//* WARNING: Removing unreachable block (ram,0x0010b6ea) *//* WARNING: Removing unreachable block (ram,0x0010b6f6) *//* String vformat<char32_t>(String const&, char32_t const) */String *vformat<char32_t>(String *param_1, wchar32 param_2) {
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
   Array::~Array(local_c8);
   if (( &Variant::needs_deinit )[(int)local_60] == '\0') {
      cVar1 = ( &Variant::needs_deinit )[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = ( &Variant::needs_deinit )[local_78[0]];
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
/* WARNING: Removing unreachable block (ram,0x0010b990) *//* WARNING: Removing unreachable block (ram,0x0010bac0) *//* WARNING: Removing unreachable block (ram,0x0010bc39) *//* WARNING: Removing unreachable block (ram,0x0010bacc) *//* WARNING: Removing unreachable block (ram,0x0010bad6) *//* WARNING: Removing unreachable block (ram,0x0010bc1b) *//* WARNING: Removing unreachable block (ram,0x0010bae2) *//* WARNING: Removing unreachable block (ram,0x0010baec) *//* WARNING: Removing unreachable block (ram,0x0010bbfd) *//* WARNING: Removing unreachable block (ram,0x0010baf8) *//* WARNING: Removing unreachable block (ram,0x0010bb02) *//* WARNING: Removing unreachable block (ram,0x0010bbdf) *//* WARNING: Removing unreachable block (ram,0x0010bb0e) *//* WARNING: Removing unreachable block (ram,0x0010bb18) *//* WARNING: Removing unreachable block (ram,0x0010bbc1) *//* WARNING: Removing unreachable block (ram,0x0010bb24) *//* WARNING: Removing unreachable block (ram,0x0010bb2e) *//* WARNING: Removing unreachable block (ram,0x0010bba3) *//* WARNING: Removing unreachable block (ram,0x0010bb36) *//* WARNING: Removing unreachable block (ram,0x0010bb40) *//* WARNING: Removing unreachable block (ram,0x0010bb88) *//* WARNING: Removing unreachable block (ram,0x0010bb48) *//* WARNING: Removing unreachable block (ram,0x0010bb5e) *//* WARNING: Removing unreachable block (ram,0x0010bb6a) *//* String vformat<char32_t, char32_t>(String const&, char32_t const, char32_t const) */String *vformat<char32_t,char32_t>(String *param_1, wchar32 param_2, wchar32 param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   uint in_ECX;
   undefined4 in_register_00000034;
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
   Variant::Variant(local_70, in_ECX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (( &Variant::needs_deinit )[*(int*)pVVar1] != '\0') {
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
/* WARNING: Removing unreachable block (ram,0x0010bdb0) *//* WARNING: Removing unreachable block (ram,0x0010bee0) *//* WARNING: Removing unreachable block (ram,0x0010c059) *//* WARNING: Removing unreachable block (ram,0x0010beec) *//* WARNING: Removing unreachable block (ram,0x0010bef6) *//* WARNING: Removing unreachable block (ram,0x0010c03b) *//* WARNING: Removing unreachable block (ram,0x0010bf02) *//* WARNING: Removing unreachable block (ram,0x0010bf0c) *//* WARNING: Removing unreachable block (ram,0x0010c01d) *//* WARNING: Removing unreachable block (ram,0x0010bf18) *//* WARNING: Removing unreachable block (ram,0x0010bf22) *//* WARNING: Removing unreachable block (ram,0x0010bfff) *//* WARNING: Removing unreachable block (ram,0x0010bf2e) *//* WARNING: Removing unreachable block (ram,0x0010bf38) *//* WARNING: Removing unreachable block (ram,0x0010bfe1) *//* WARNING: Removing unreachable block (ram,0x0010bf44) *//* WARNING: Removing unreachable block (ram,0x0010bf4e) *//* WARNING: Removing unreachable block (ram,0x0010bfc3) *//* WARNING: Removing unreachable block (ram,0x0010bf56) *//* WARNING: Removing unreachable block (ram,0x0010bf60) *//* WARNING: Removing unreachable block (ram,0x0010bfa8) *//* WARNING: Removing unreachable block (ram,0x0010bf68) *//* WARNING: Removing unreachable block (ram,0x0010bf7e) *//* WARNING: Removing unreachable block (ram,0x0010bf8a) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4) {
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
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (( &Variant::needs_deinit )[*(int*)pVVar1] != '\0') {
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
/* WARNING: Removing unreachable block (ram,0x0010c1d0) *//* WARNING: Removing unreachable block (ram,0x0010c300) *//* WARNING: Removing unreachable block (ram,0x0010c479) *//* WARNING: Removing unreachable block (ram,0x0010c30c) *//* WARNING: Removing unreachable block (ram,0x0010c316) *//* WARNING: Removing unreachable block (ram,0x0010c45b) *//* WARNING: Removing unreachable block (ram,0x0010c322) *//* WARNING: Removing unreachable block (ram,0x0010c32c) *//* WARNING: Removing unreachable block (ram,0x0010c43d) *//* WARNING: Removing unreachable block (ram,0x0010c338) *//* WARNING: Removing unreachable block (ram,0x0010c342) *//* WARNING: Removing unreachable block (ram,0x0010c41f) *//* WARNING: Removing unreachable block (ram,0x0010c34e) *//* WARNING: Removing unreachable block (ram,0x0010c358) *//* WARNING: Removing unreachable block (ram,0x0010c401) *//* WARNING: Removing unreachable block (ram,0x0010c364) *//* WARNING: Removing unreachable block (ram,0x0010c36e) *//* WARNING: Removing unreachable block (ram,0x0010c3e3) *//* WARNING: Removing unreachable block (ram,0x0010c376) *//* WARNING: Removing unreachable block (ram,0x0010c380) *//* WARNING: Removing unreachable block (ram,0x0010c3c8) *//* WARNING: Removing unreachable block (ram,0x0010c388) *//* WARNING: Removing unreachable block (ram,0x0010c39e) *//* WARNING: Removing unreachable block (ram,0x0010c3aa) *//* String vformat<char const*, char>(String const&, char const* const, char const) */String *vformat<char_const*,char>(String *param_1, char *param_2, char param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   char in_CL;
   undefined7 in_register_00000011;
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
   Variant::Variant(local_88, (char*)CONCAT71(in_register_00000011, param_3));
   Variant::Variant(local_70, (int)in_CL);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)param_2);
   *(undefined8*)param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (( &Variant::needs_deinit )[*(int*)pVVar1] != '\0') {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<int, GDScriptTokenizer::CommentData, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, GDScriptTokenizer::CommentData> > >::operator[](int
   const&) */undefined1 * __thiscallHashMap<int,GDScriptTokenizer::CommentData,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GDScriptTokenizer::CommentData>>>::operator [](HashMap<int,GDScriptTokenizer::CommentData,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,GDScriptTokenizer::CommentData>>> * this, int, *param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1(*pauVar36)[16];uint uVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined1(*pauVar42)[16];ulong uVar43int iVar44ulong uVar45long lVar46long lVar47long lVar48ulong uVar49undefined8 uVar50uint uVar51ulong uVar52uint uVar53uint uVar54long lVar55undefined1(*pauVar56)[16];long in_FS_OFFSETvoid *local_88undefined8 local_58undefined1 local_50long local_40local_88 = *(void**)( this + 8 );uVar38 = *param_1;local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar40 = ( ulong ) * (uint*)( this + 0x28 );uVar39 = *(uint*)( hash_table_size_primes + uVar40 * 4 );uVar52 = CONCAT44(0, uVar39);if (local_88 == (void*)0x0) {
   local_50 = 0;
   uVar40 = uVar52 * 4;
   uVar49 = uVar52 * 8;
   local_58 = 0;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   local_88 = (void*)Memory::alloc_static(uVar49, false);
   *(void**)( this + 8 ) = local_88;
   if (uVar39 == 0) {
      uVar38 = *param_1;
      iVar44 = *(int*)( this + 0x2c );
      if (local_88 == (void*)0x0) goto LAB_0010c6d1;
   }
 else {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)local_88 + uVar49 ) ) && ( local_88 < (void*)( (long)pvVar3 + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)local_88 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar52 != uVar40 );
         uVar38 = *param_1;
         iVar44 = *(int*)( this + 0x2c );
      }
 else {
         memset(pvVar3, 0, uVar40);
         memset(local_88, 0, uVar49);
         uVar38 = *param_1;
         iVar44 = *(int*)( this + 0x2c );
      }

   }

   if (iVar44 != 0) {
      uVar40 = ( ulong ) * (uint*)( this + 0x28 );
      lVar55 = *(long*)( this + 0x10 );
      goto LAB_0010ca6e;
   }

}
 else {
   iVar44 = *(int*)( this + 0x2c );
   if (iVar44 == 0) {
      local_58 = 0;
      local_50 = 0;
   }
 else {
      uVar49 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
      uVar37 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
      uVar37 = ( uVar37 ^ uVar37 >> 0xd ) * -0x3d4d51cb;
      uVar53 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
         uVar53 = 1;
         uVar45 = uVar49;
      }
 else {
         uVar45 = uVar53 * uVar49;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar52;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar45;
      lVar46 = SUB168(auVar4 * auVar20, 8);
      lVar55 = *(long*)( this + 0x10 );
      uVar54 = SUB164(auVar4 * auVar20, 8);
      uVar37 = *(uint*)( lVar55 + lVar46 * 4 );
      if (uVar37 != 0) {
         uVar51 = 0;
         do {
            if (( uVar37 == uVar53 ) && ( uVar38 == *(uint*)( *(long*)( (long)local_88 + lVar46 * 8 ) + 0x10 ) )) {
               pauVar42 = *(undefined1(**) [16])( (long)local_88 + (ulong)uVar54 * 8 );
               goto LAB_0010c69a;
            }

            uVar51 = uVar51 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( uVar54 + 1 ) * uVar49;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar52;
            lVar46 = SUB168(auVar5 * auVar21, 8);
            uVar37 = *(uint*)( lVar55 + lVar46 * 4 );
            uVar54 = SUB164(auVar5 * auVar21, 8);
         }
 while ( ( uVar37 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar37 * uVar49,auVar22._8_8_ = 0,auVar22._0_8_ = uVar52,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( uVar54 + uVar39 ) - SUB164(auVar6 * auVar22, 8) ) * uVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar52,uVar51 <= SUB164(auVar7 * auVar23, 8) );
      }

      local_58 = 0;
      local_50 = 0;
      LAB_0010ca6e:uVar45 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar40 * 4 ));
      uVar49 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
      uVar39 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
      uVar39 = ( uVar39 ^ uVar39 >> 0xd ) * -0x3d4d51cb;
      uVar37 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
         uVar37 = 1;
         uVar43 = uVar49;
      }
 else {
         uVar43 = uVar37 * uVar49;
      }

      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar45;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar43;
      lVar46 = SUB168(auVar16 * auVar32, 8);
      uVar39 = *(uint*)( lVar55 + lVar46 * 4 );
      uVar53 = SUB164(auVar16 * auVar32, 8);
      if (uVar39 != 0) {
         uVar54 = 0;
         do {
            if (( uVar37 == uVar39 ) && ( *(uint*)( *(long*)( (long)local_88 + lVar46 * 8 ) + 0x10 ) == uVar38 )) {
               lVar55 = *(long*)( (long)local_88 + (ulong)uVar53 * 8 );
               if (*(long*)( lVar55 + 0x18 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( lVar55 + 0x18 ), (CowData*)&local_58);
               }

               *(undefined1*)( lVar55 + 0x20 ) = 0;
               pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
               goto LAB_0010c69a;
            }

            uVar54 = uVar54 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = ( uVar53 + 1 ) * uVar49;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar45;
            lVar46 = SUB168(auVar17 * auVar33, 8);
            uVar39 = *(uint*)( lVar55 + lVar46 * 4 );
            uVar53 = SUB164(auVar17 * auVar33, 8);
         }
 while ( ( uVar39 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = uVar39 * uVar49,auVar34._8_8_ = 0,auVar34._0_8_ = uVar45,auVar19._8_8_ = 0,auVar19._0_8_ = ( ( *(uint*)( hash_table_size_primes + uVar40 * 4 ) + uVar53 ) - SUB164(auVar18 * auVar34, 8) ) * uVar49,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,uVar54 <= SUB164(auVar19 * auVar35, 8) );
      }

   }

}
LAB_0010c6d1:if ((float)uVar52 * __LC37 < (float)( iVar44 + 1 )) {
   uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      pauVar42 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010c69a;
   }

   uVar40 = ( ulong )(uVar38 + 1);
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
   *(undefined4*)( this + 0x2c ) = 0;
   if (uVar38 + 1 < 2) {
      uVar40 = 2;
   }

   uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar3 = *(void**)( this + 0x10 );
   uVar49 = (ulong)uVar38;
   uVar40 = uVar49 * 4;
   uVar52 = uVar49 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar52, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar38 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar52 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar49 != uVar40 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar52);
      }

   }

   uVar40 = 0;
   if (uVar39 != 0) {
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar38 != 0) {
            uVar54 = 0;
            lVar55 = *(long*)( this + 0x10 );
            uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar52 = CONCAT44(0, uVar37);
            lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar38 * lVar46;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar52;
            lVar47 = SUB168(auVar8 * auVar24, 8);
            puVar1 = (uint*)( lVar55 + lVar47 * 4 );
            iVar44 = SUB164(auVar8 * auVar24, 8);
            uVar53 = *puVar1;
            uVar41 = *(undefined8*)( (long)local_88 + uVar40 * 8 );
            while (uVar53 != 0) {
               auVar9._8_8_ = 0;
               auVar9._0_8_ = (ulong)uVar53 * lVar46;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar52;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = ( ulong )(( uVar37 + iVar44 ) - SUB164(auVar9 * auVar25, 8)) * lVar46;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar52;
               uVar51 = SUB164(auVar10 * auVar26, 8);
               uVar50 = uVar41;
               if (uVar51 < uVar54) {
                  *puVar1 = uVar38;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar50 = *puVar2;
                  *puVar2 = uVar41;
                  uVar38 = uVar53;
                  uVar54 = uVar51;
               }

               uVar54 = uVar54 + 1;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(iVar44 + 1) * lVar46;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar52;
               lVar47 = SUB168(auVar11 * auVar27, 8);
               puVar1 = (uint*)( lVar55 + lVar47 * 4 );
               iVar44 = SUB164(auVar11 * auVar27, 8);
               uVar41 = uVar50;
               uVar53 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
            *puVar1 = uVar38;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar40 != uVar39 );
      Memory::free_static(local_88, false);
      Memory::free_static(pvVar3, false);
   }

}
iVar44 = *param_1;pauVar42 = (undefined1(*) [16])operator_new(0x28, "");pauVar42[2][0] = 0;*(int*)pauVar42[1] = iVar44;*(undefined8*)( pauVar42[1] + 8 ) = 0;*pauVar42 = (undefined1[16])0x0;puVar2 = *(undefined8**)( this + 0x20 );if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar42;
}
 else {
   *puVar2 = pauVar42;
   *(undefined8**)( *pauVar42 + 8 ) = puVar2;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar42;uVar38 = ( ( uint ) * param_1 >> 0x10 ^ *param_1 ) * -0x7a143595;uVar39 = ( uVar38 ^ uVar38 >> 0xd ) * -0x3d4d51cb;uVar38 = uVar39 ^ uVar39 >> 0x10;if (uVar39 == uVar39 >> 0x10) {
   uVar40 = 1;
   uVar38 = 1;
}
 else {
   uVar40 = (ulong)uVar38;
}
uVar53 = 0;lVar55 = *(long*)( this + 0x10 );uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar52 = CONCAT44(0, uVar39);lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar12._8_8_ = 0;auVar12._0_8_ = uVar40 * lVar46;auVar28._8_8_ = 0;auVar28._0_8_ = uVar52;lVar48 = SUB168(auVar12 * auVar28, 8);lVar47 = *(long*)( this + 8 );puVar1 = (uint*)( lVar55 + lVar48 * 4 );iVar44 = SUB164(auVar12 * auVar28, 8);uVar37 = *puVar1;pauVar36 = pauVar42;while (uVar37 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar37 * lVar46;
   auVar29._8_8_ = 0;
   auVar29._0_8_ = uVar52;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( uVar39 + iVar44 ) - SUB164(auVar13 * auVar29, 8)) * lVar46;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar52;
   uVar54 = SUB164(auVar14 * auVar30, 8);
   pauVar56 = pauVar36;
   if (uVar54 < uVar53) {
      *puVar1 = uVar38;
      puVar2 = (undefined8*)( lVar47 + lVar48 * 8 );
      pauVar56 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar38 = uVar37;
      uVar53 = uVar54;
   }

   uVar53 = uVar53 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar44 + 1) * lVar46;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar52;
   lVar48 = SUB168(auVar15 * auVar31, 8);
   puVar1 = (uint*)( lVar55 + lVar48 * 4 );
   iVar44 = SUB164(auVar15 * auVar31, 8);
   pauVar36 = pauVar56;
   uVar37 = *puVar1;
}
;*(undefined1(**) [16])( lVar47 + lVar48 * 8 ) = pauVar36;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010c69a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar42[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Removing unreachable block (ram,0x0010d2c8) *//* WARNING: Removing unreachable block (ram,0x0010d3f8) *//* WARNING: Removing unreachable block (ram,0x0010d5c0) *//* WARNING: Removing unreachable block (ram,0x0010d404) *//* WARNING: Removing unreachable block (ram,0x0010d40e) *//* WARNING: Removing unreachable block (ram,0x0010d5a0) *//* WARNING: Removing unreachable block (ram,0x0010d41a) *//* WARNING: Removing unreachable block (ram,0x0010d424) *//* WARNING: Removing unreachable block (ram,0x0010d580) *//* WARNING: Removing unreachable block (ram,0x0010d430) *//* WARNING: Removing unreachable block (ram,0x0010d43a) *//* WARNING: Removing unreachable block (ram,0x0010d560) *//* WARNING: Removing unreachable block (ram,0x0010d446) *//* WARNING: Removing unreachable block (ram,0x0010d450) *//* WARNING: Removing unreachable block (ram,0x0010d540) *//* WARNING: Removing unreachable block (ram,0x0010d45c) *//* WARNING: Removing unreachable block (ram,0x0010d466) *//* WARNING: Removing unreachable block (ram,0x0010d520) *//* WARNING: Removing unreachable block (ram,0x0010d472) *//* WARNING: Removing unreachable block (ram,0x0010d47c) *//* WARNING: Removing unreachable block (ram,0x0010d500) *//* WARNING: Removing unreachable block (ram,0x0010d484) *//* WARNING: Removing unreachable block (ram,0x0010d49a) *//* WARNING: Removing unreachable block (ram,0x0010d4a6) *//* String vformat<int>(String const&, int const) */String *vformat<int>(String *param_1, int param_2) {
   char cVar1;
   Variant *this;
   int in_EDX;
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
   Array::~Array(local_c8);
   if (( &Variant::needs_deinit )[(int)local_60] == '\0') {
      cVar1 = ( &Variant::needs_deinit )[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = ( &Variant::needs_deinit )[local_78[0]];
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
/* WARNING: Removing unreachable block (ram,0x0010d740) *//* WARNING: Removing unreachable block (ram,0x0010d870) *//* WARNING: Removing unreachable block (ram,0x0010d9e9) *//* WARNING: Removing unreachable block (ram,0x0010d87c) *//* WARNING: Removing unreachable block (ram,0x0010d886) *//* WARNING: Removing unreachable block (ram,0x0010d9cb) *//* WARNING: Removing unreachable block (ram,0x0010d892) *//* WARNING: Removing unreachable block (ram,0x0010d89c) *//* WARNING: Removing unreachable block (ram,0x0010d9ad) *//* WARNING: Removing unreachable block (ram,0x0010d8a8) *//* WARNING: Removing unreachable block (ram,0x0010d8b2) *//* WARNING: Removing unreachable block (ram,0x0010d98f) *//* WARNING: Removing unreachable block (ram,0x0010d8be) *//* WARNING: Removing unreachable block (ram,0x0010d8c8) *//* WARNING: Removing unreachable block (ram,0x0010d971) *//* WARNING: Removing unreachable block (ram,0x0010d8d4) *//* WARNING: Removing unreachable block (ram,0x0010d8de) *//* WARNING: Removing unreachable block (ram,0x0010d953) *//* WARNING: Removing unreachable block (ram,0x0010d8e6) *//* WARNING: Removing unreachable block (ram,0x0010d8f0) *//* WARNING: Removing unreachable block (ram,0x0010d938) *//* WARNING: Removing unreachable block (ram,0x0010d8f8) *//* WARNING: Removing unreachable block (ram,0x0010d90e) *//* WARNING: Removing unreachable block (ram,0x0010d91a) *//* String vformat<char32_t, int>(String const&, char32_t const, int const) */String *vformat<char32_t,int>(String *param_1, wchar32 param_2, int param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   int in_ECX;
   undefined4 in_register_00000034;
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
   Variant::Variant(local_70, in_ECX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (( &Variant::needs_deinit )[*(int*)pVVar1] != '\0') {
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
/* GDScriptTokenizerText::~GDScriptTokenizerText() */void GDScriptTokenizerText::~GDScriptTokenizerText(GDScriptTokenizerText *this) {
   char cVar1;
   uint uVar2;
   long lVar3;
   long *plVar4;
   long lVar5;
   long *plVar6;
   void *pvVar7;
   undefined8 *puVar8;
   long *plVar9;
   *(undefined***)this = &PTR_get_comments_0010e740;
   pvVar7 = *(void**)( this + 0x150 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x174 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x170 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x174 ) = 0;
            *(undefined1(*) [16])( this + 0x160 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x158 ) + lVar5 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x158 ) + lVar5 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x18 ) != 0) {
                     LOCK();
                     plVar6 = (long*)( *(long*)( (long)pvVar7 + 0x18 ) + -0x10 );
                     *plVar6 = *plVar6 + -1;
                     UNLOCK();
                     if (*plVar6 == 0) {
                        lVar3 = *(long*)( (long)pvVar7 + 0x18 );
                        *(undefined8*)( (long)pvVar7 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x150 );
                  *(undefined8*)( (long)pvVar7 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x174 ) = 0;
            *(undefined1(*) [16])( this + 0x160 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_0010dbe9;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x158 ), false);
   }

   LAB_0010dbe9:CowData<String>::_unref((CowData<String>*)( this + 0x140 ));
   if (*(long*)( this + 0x130 ) != 0) {
      LOCK();
      plVar6 = (long*)( *(long*)( this + 0x130 ) + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         lVar5 = *(long*)( this + 0x130 );
         *(undefined8*)( this + 0x130 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   plVar6 = *(long**)( this + 0x110 );
   if (plVar6 != (long*)0x0) {
      do {
         pvVar7 = (void*)*plVar6;
         if (pvVar7 == (void*)0x0) {
            if ((int)plVar6[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010dc81;
            }

            break;
         }

         if (plVar6 == *(long**)( (long)pvVar7 + 0x18 )) {
            lVar5 = *(long*)( (long)pvVar7 + 8 );
            lVar3 = *(long*)( (long)pvVar7 + 0x10 );
            *plVar6 = lVar5;
            if (pvVar7 == (void*)plVar6[1]) {
               plVar6[1] = lVar3;
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 8 ) = lVar5;
               lVar5 = *(long*)( (long)pvVar7 + 8 );
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 0x10 ) = lVar3;
            }

            Memory::free_static(pvVar7, false);
            *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar6 = *(long**)( this + 0x110 );
      }
 while ( (int)plVar6[2] != 0 );
      Memory::free_static(plVar6, false);
   }

   LAB_0010dc81:plVar6 = *(long**)( this + 0x108 );
   if (plVar6 != (long*)0x0) {
      do {
         plVar4 = (long*)*plVar6;
         if (plVar4 == (long*)0x0) {
            if ((int)plVar6[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010dd73;
            }

            break;
         }

         if (plVar6 == (long*)plVar4[3]) {
            lVar5 = plVar4[1];
            lVar3 = plVar4[2];
            *plVar6 = lVar5;
            if (plVar4 == (long*)plVar6[1]) {
               plVar6[1] = lVar3;
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 8 ) = lVar5;
               lVar5 = plVar4[1];
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 0x10 ) = lVar3;
            }

            plVar9 = (long*)*plVar4;
            if (plVar9 != (long*)0x0) {
               do {
                  pvVar7 = (void*)*plVar9;
                  if (pvVar7 == (void*)0x0) {
                     if ((int)plVar9[2] != 0) {
                        _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                        goto LAB_0010dd44;
                     }

                     break;
                  }

                  if (*(long**)( (long)pvVar7 + 0x18 ) == plVar9) {
                     lVar5 = *(long*)( (long)pvVar7 + 8 );
                     lVar3 = *(long*)( (long)pvVar7 + 0x10 );
                     *plVar9 = lVar5;
                     if (pvVar7 == (void*)plVar9[1]) {
                        plVar9[1] = lVar3;
                     }

                     if (lVar3 != 0) {
                        *(long*)( lVar3 + 8 ) = lVar5;
                        lVar5 = *(long*)( (long)pvVar7 + 8 );
                     }

                     if (lVar5 != 0) {
                        *(long*)( lVar5 + 0x10 ) = lVar3;
                     }

                     Memory::free_static(pvVar7, false);
                     *(int*)( plVar9 + 2 ) = (int)plVar9[2] + -1;
                  }
 else {
                     _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                  }

                  plVar9 = (long*)*plVar4;
               }
 while ( (int)plVar9[2] != 0 );
               Memory::free_static(plVar9, false);
            }

            LAB_0010dd44:Memory::free_static(plVar4, false);
            *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar6 = *(long**)( this + 0x108 );
      }
 while ( (int)plVar6[2] != 0 );
      Memory::free_static(plVar6, false);
   }

   LAB_0010dd73:plVar6 = *(long**)( this + 0x100 );
   if (plVar6 != (long*)0x0) {
      do {
         pvVar7 = (void*)*plVar6;
         if (pvVar7 == (void*)0x0) {
            if ((int)plVar6[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010dde5;
            }

            break;
         }

         if (plVar6 == *(long**)( (long)pvVar7 + 0x18 )) {
            lVar5 = *(long*)( (long)pvVar7 + 8 );
            lVar3 = *(long*)( (long)pvVar7 + 0x10 );
            *plVar6 = lVar5;
            if (pvVar7 == (void*)plVar6[1]) {
               plVar6[1] = lVar3;
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 8 ) = lVar5;
               lVar5 = *(long*)( (long)pvVar7 + 8 );
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 0x10 ) = lVar3;
            }

            Memory::free_static(pvVar7, false);
            *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar6 = *(long**)( this + 0x100 );
      }
 while ( (int)plVar6[2] != 0 );
      Memory::free_static(plVar6, false);
   }

   LAB_0010dde5:if (*(long*)( this + 0xf0 ) != 0) {
      LOCK();
      plVar6 = (long*)( *(long*)( this + 0xf0 ) + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         lVar5 = *(long*)( this + 0xf0 );
         *(undefined8*)( this + 0xf0 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (( &Variant::needs_deinit )[*(int*)( this + 0xb8 )] != '\0') {
      Variant::_clear_internal();
   }

   if (*(long*)( this + 0xa8 ) != 0) {
      LOCK();
      plVar6 = (long*)( *(long*)( this + 0xa8 ) + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         lVar5 = *(long*)( this + 0xa8 );
         *(undefined8*)( this + 0xa8 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
         cVar1 = ( &Variant::needs_deinit )[*(int*)( this + 0x70 )];
         goto joined_r0x0010e0b7;
      }

   }

   cVar1 = ( &Variant::needs_deinit )[*(int*)( this + 0x70 )];
   joined_r0x0010e0b7:if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   puVar8 = *(undefined8**)( this + 0x58 );
   if (puVar8 != (undefined8*)0x0) {
      do {
         pvVar7 = (void*)*puVar8;
         if (pvVar7 == (void*)0x0) {
            if (*(int*)( puVar8 + 2 ) != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010dee8;
            }

            break;
         }

         if (puVar8 == *(undefined8**)( (long)pvVar7 + 0x58 )) {
            *puVar8 = *(undefined8*)( (long)pvVar7 + 0x48 );
            if (pvVar7 == (void*)puVar8[1]) {
               puVar8[1] = *(undefined8*)( (long)pvVar7 + 0x50 );
            }

            if (*(long*)( (long)pvVar7 + 0x50 ) != 0) {
               *(undefined8*)( *(long*)( (long)pvVar7 + 0x50 ) + 0x48 ) = *(undefined8*)( (long)pvVar7 + 0x48 );
            }

            if (*(long*)( (long)pvVar7 + 0x48 ) != 0) {
               *(undefined8*)( *(long*)( (long)pvVar7 + 0x48 ) + 0x50 ) = *(undefined8*)( (long)pvVar7 + 0x50 );
            }

            if (*(long*)( (long)pvVar7 + 0x40 ) != 0) {
               LOCK();
               plVar6 = (long*)( *(long*)( (long)pvVar7 + 0x40 ) + -0x10 );
               *plVar6 = *plVar6 + -1;
               UNLOCK();
               if (*plVar6 == 0) {
                  lVar5 = *(long*)( (long)pvVar7 + 0x40 );
                  *(undefined8*)( (long)pvVar7 + 0x40 ) = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            if (( &Variant::needs_deinit )[*(int*)( (long)pvVar7 + 8 )] != '\0') {
               Variant::_clear_internal();
            }

            Memory::free_static(pvVar7, false);
            *(int*)( puVar8 + 2 ) = *(int*)( puVar8 + 2 ) + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         puVar8 = *(undefined8**)( this + 0x58 );
      }
 while ( *(int*)( puVar8 + 2 ) != 0 );
      Memory::free_static(puVar8, false);
   }

   LAB_0010dee8:if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar6 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         lVar5 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* GDScriptTokenizerText::~GDScriptTokenizerText() */void GDScriptTokenizerText::~GDScriptTokenizerText(GDScriptTokenizerText *this) {
   ~GDScriptTokenizerText(this)
   ;;
   operator_delete(this, 0x178);
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
      LAB_0010e670:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_0010e670;
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
            goto LAB_0010e581;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_0010e581:puVar7[-1] = param_1;
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
/* WARNING: Control flow encountered bad instruction data *//* GDScriptTokenizerText::~GDScriptTokenizerText() */void GDScriptTokenizerText::~GDScriptTokenizerText(GDScriptTokenizerText *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptTokenizer::Token::Token(GDScriptTokenizer::Token&&) */void GDScriptTokenizer::Token::Token(Token *this, Token *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptTokenizer::Token::~Token() */void GDScriptTokenizer::Token::~Token(Token *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


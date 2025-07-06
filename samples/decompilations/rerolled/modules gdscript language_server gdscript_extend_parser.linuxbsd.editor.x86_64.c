/* CowData<GDScriptParser::MatchBranchNode*>::_copy_on_write() [clone .isra.0] */void CowData<GDScriptParser::MatchBranchNode*>::_copy_on_write(CowData<GDScriptParser::MatchBranchNode*> *this) {
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
   __n = lVar2 * 8;
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
}/* CowData<GDScriptParser::ParameterNode*>::_copy_on_write() [clone .isra.0] */void CowData<GDScriptParser::ParameterNode*>::_copy_on_write(CowData<GDScriptParser::ParameterNode*> *this) {
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
   __n = lVar2 * 8;
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
}/* List<GDScriptParser::Node*, DefaultAllocator>::push_back(GDScriptParser::Node* const&) [clone
   .isra.0] */void List<GDScriptParser::Node*,DefaultAllocator>::push_back(List<GDScriptParser::Node*,DefaultAllocator> *this, Node **param_1) {
   Node *pNVar1;
   long *plVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined1(*pauVar5)[16];
   if (*(long*)this == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }
   puVar4 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
   pNVar1 = *param_1;
   puVar4[1] = 0;
   *puVar4 = pNVar1;
   plVar2 = *(long**)this;
   lVar3 = plVar2[1];
   puVar4[3] = plVar2;
   puVar4[2] = lVar3;
   if (lVar3 != 0) {
      *(undefined8**)( lVar3 + 8 ) = puVar4;
   }
   plVar2[1] = (long)puVar4;
   if (*plVar2 != 0) {
      *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      return;
   }
   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   *plVar2 = (long)puVar4;
   return;
}/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */void CowData<int>::_ref(CowData<int> *this, CowData *param_1) {
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
}/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* get_indent_size() */int get_indent_size(void) {
   long *plVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = EditorSettings::get_singleton();
   if (lVar3 == 0) {
      iVar2 = 4;
   } else {
      EditorSettings::get_singleton();
      local_50 = 0;
      local_40 = 0x20;
      local_48 = "text_editor/behavior/indent/size";
      String::parse_latin1((StrRange*)&local_50);
      EditorSettings::get_setting((String*)local_38);
      iVar2 = Variant::operator_cast_to_int((Variant*)local_38);
      if (Variant::needs_deinit[local_38[0]] != '\0') {
         Variant::_clear_internal();
      }
      lVar3 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ExtendGDScriptParser::get_text_for_completion(lsp::Position const&) const */Position *ExtendGDScriptParser::get_text_for_completion(Position *param_1) {
   long *plVar1;
   code *pcVar2;
   int iVar3;
   int *in_RDX;
   long in_RSI;
   long lVar4;
   wchar32 wVar5;
   long lVar6;
   int iVar7;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   ulong uVar8;
   lVar4 = *(long*)( in_RSI + 0xa38 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   if (( lVar4 != 0 ) && ( iVar3= (int)*(undefined8 *)(lVar4 + -8),0 < iVar3 )) {
      uVar8 = 0;
      do {
         iVar7 = (int)uVar8;
         if (*in_RDX == iVar7) {
            if (lVar4 != 0) {
               lVar6 = *(long*)( lVar4 + -8 );
               if (lVar6 <= (long)uVar8) goto LAB_001006d3;
               wVar5 = (wchar32)(String*)&local_48;
               String::substr(wVar5, (int)lVar4 + iVar7 * 8);
               String::operator +=((String*)param_1, (String*)&local_48);
               lVar4 = local_48;
               if (local_48 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_48 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_48 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
               String::chr(wVar5);
               String::operator +=((String*)param_1, (String*)&local_48);
               lVar4 = local_48;
               if (local_48 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_48 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_48 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
               lVar4 = *(long*)( in_RSI + 0xa38 );
               if (lVar4 != 0) {
                  lVar6 = *(long*)( lVar4 + -8 );
                  if (lVar6 <= (long)uVar8) goto LAB_001006d3;
                  String::substr(wVar5, (int)lVar4 + iVar7 * 8);
                  String::operator +=((String*)param_1, (String*)&local_48);
                  lVar4 = local_48;
                  if (local_48 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_48 = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }
                  }
                  goto LAB_00100562;
               }
            }
            LAB_001006d0:lVar6 = 0;
            LAB_001006d3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar8, lVar6, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         if (lVar4 == 0) goto LAB_001006d0;
         lVar6 = *(long*)( lVar4 + -8 );
         if (lVar6 <= (long)uVar8) goto LAB_001006d3;
         String::operator +=((String*)param_1, (String*)( lVar4 + uVar8 * 8 ));
         LAB_00100562:if (iVar3 + -1 != iVar7) {
            String::operator +=((String*)param_1, "\n");
         }
         if (iVar3 - 1 == uVar8) break;
         lVar4 = *(long*)( in_RSI + 0xa38 );
         uVar8 = uVar8 + 1;
      } while ( true );
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ExtendGDScriptParser::get_uri() const */ExtendGDScriptParser * __thiscall ExtendGDScriptParser::get_uri(ExtendGDScriptParser *this){
   long lVar1;
   char cVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   pOVar3 = *(Object**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   if (pOVar3 != (Object*)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         pOVar3 = (Object*)0x0;
      }
   }
   GDScriptWorkspace::get_file_uri((String*)this);
   cVar2 = RefCounted::unreference();
   if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar3);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
         Memory::free_static(pOVar3, false);
      }
   }
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ExtendGDScriptParser::search_symbol_defined_at_line(int, lsp::DocumentSymbol const&, String
   const&) const */DocumentSymbol * __thiscall
ExtendGDScriptParser::search_symbol_defined_at_line
          (ExtendGDScriptParser *this,int param_1,DocumentSymbol *param_2,String *param_3){
   char cVar1;
   long lVar2;
   DocumentSymbol *pDVar3;
   long lVar4;
   if (param_1 < *(int*)( param_2 + 0x28 )) {
      return (DocumentSymbol*)0x0;
   }
   if (( *(int*)( param_2 + 0x28 ) == param_1 ) && ( ( ( *(long*)param_3 == 0 || ( *(uint*)( *(long*)param_3 + -8 ) < 2 ) ) || ( cVar1 = String::operator ==((String*)param_2, param_3) ),cVar1 != '\0' ) )) {
      return param_2;
   }
   lVar2 = *(long*)( param_2 + 0x60 );
   if (lVar2 != 0) {
      lVar4 = 0;
      do {
         if (*(long*)( lVar2 + -8 ) <= lVar4) {
            return (DocumentSymbol*)0x0;
         }
         pDVar3 = (DocumentSymbol*)search_symbol_defined_at_line(this, param_1, (DocumentSymbol*)( lVar2 + lVar4 * 0x68 ), param_3);
         if (pDVar3 != (DocumentSymbol*)0x0) {
            return pDVar3;
         }
         lVar2 = *(long*)( param_2 + 0x60 );
         lVar4 = lVar4 + 1;
      } while ( lVar2 != 0 );
   }
   return (DocumentSymbol*)0x0;
}/* ExtendGDScriptParser::get_symbol_defined_at_line(int, String const&) const */void ExtendGDScriptParser::get_symbol_defined_at_line(ExtendGDScriptParser *this, int param_1, String *param_2) {
   if (0 < param_1) {
      search_symbol_defined_at_line(this, param_1, (DocumentSymbol*)( this + 0xa40 ), param_2);
      return;
   }
   return;
}/* ExtendGDScriptParser::get_member_symbol(String const&, String const&) const */undefined8 ExtendGDScriptParser::get_member_symbol(ExtendGDScriptParser *this, String *param_1, String *param_2) {
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
   char cVar27;
   uint uVar28;
   uint uVar29;
   uint uVar30;
   long lVar31;
   long lVar32;
   long lVar33;
   ulong uVar34;
   uint uVar35;
   if (( *(long*)param_2 == 0 ) || ( *(uint*)( *(long*)param_2 + -8 ) < 2 )) {
      if (( *(long*)( this + 0xac8 ) != 0 ) && ( *(int*)( this + 0xaec ) != 0 )) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xae8 ) * 4 );
         uVar34 = CONCAT44(0, uVar1);
         lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xae8 ) * 8 );
         uVar28 = String::hash();
         lVar33 = *(long*)( this + 0xad0 );
         uVar29 = 1;
         if (uVar28 != 0) {
            uVar29 = uVar28;
         }
         auVar3._8_8_ = 0;
         auVar3._0_8_ = (ulong)uVar29 * lVar2;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = uVar34;
         lVar31 = SUB168(auVar3 * auVar15, 8);
         uVar28 = *(uint*)( lVar33 + lVar31 * 4 );
         uVar30 = SUB164(auVar3 * auVar15, 8);
         if (uVar28 != 0) {
            uVar35 = 0;
            do {
               if (uVar29 == uVar28) {
                  cVar27 = String::operator ==((String*)( *(long*)( *(long*)( this + 0xac8 ) + lVar31 * 8 ) + 0x10 ), param_1);
                  if (cVar27 != '\0') {
                     return *(undefined8*)( *(long*)( *(long*)( this + 0xac8 ) + (ulong)uVar30 * 8 ) + 0x18 );
                  }
                  lVar33 = *(long*)( this + 0xad0 );
               }
               uVar35 = uVar35 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(uVar30 + 1) * lVar2;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar34;
               lVar31 = SUB168(auVar4 * auVar16, 8);
               uVar28 = *(uint*)( lVar33 + lVar31 * 4 );
               uVar30 = SUB164(auVar4 * auVar16, 8);
            } while ( ( uVar28 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar28 * lVar2,auVar17._8_8_ = 0,auVar17._0_8_ = uVar34,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar30 ) - SUB164(auVar5 * auVar17, 8)) * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar34,uVar35 <= SUB164(auVar6 * auVar18, 8) );
         }
      }
   } else if (( *(long*)( this + 0xaf8 ) != 0 ) && ( *(int*)( this + 0xb1c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb18 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xb18 ) * 8 );
      uVar28 = String::hash();
      uVar34 = CONCAT44(0, uVar1);
      lVar33 = *(long*)( this + 0xb00 );
      uVar29 = 1;
      if (uVar28 != 0) {
         uVar29 = uVar28;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar29 * lVar2;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar34;
      lVar31 = SUB168(auVar7 * auVar19, 8);
      uVar28 = *(uint*)( lVar33 + lVar31 * 4 );
      uVar30 = SUB164(auVar7 * auVar19, 8);
      if (uVar28 != 0) {
         uVar35 = 0;
         do {
            if (uVar29 == uVar28) {
               cVar27 = String::operator ==((String*)( *(long*)( *(long*)( this + 0xaf8 ) + lVar31 * 8 ) + 0x10 ), param_2);
               if (cVar27 != '\0') {
                  lVar2 = *(long*)( *(long*)( this + 0xaf8 ) + (ulong)uVar30 * 8 );
                  if (*(long*)( lVar2 + 0x20 ) == 0) {
                     return 0;
                  }
                  if (*(int*)( lVar2 + 0x44 ) == 0) {
                     return 0;
                  }
                  uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar2 + 0x40 ) * 4 );
                  lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar2 + 0x40 ) * 8 );
                  uVar28 = String::hash();
                  uVar34 = CONCAT44(0, uVar1);
                  lVar31 = *(long*)( lVar2 + 0x28 );
                  uVar29 = 1;
                  if (uVar28 != 0) {
                     uVar29 = uVar28;
                  }
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = (ulong)uVar29 * lVar33;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar34;
                  lVar32 = SUB168(auVar11 * auVar23, 8);
                  uVar28 = *(uint*)( lVar31 + lVar32 * 4 );
                  uVar30 = SUB164(auVar11 * auVar23, 8);
                  if (uVar28 == 0) {
                     return 0;
                  }
                  uVar35 = 0;
                  while (true) {
                     if (uVar29 == uVar28) {
                        cVar27 = String::operator ==((String*)( *(long*)( *(long*)( lVar2 + 0x20 ) + lVar32 * 8 ) + 0x10 ), param_1);
                        if (cVar27 != '\0') {
                           return *(undefined8*)( *(long*)( *(long*)( lVar2 + 0x20 ) + (ulong)uVar30 * 8 ) + 0x18 );
                        }
                        lVar31 = *(long*)( lVar2 + 0x28 );
                     }
                     uVar35 = uVar35 + 1;
                     auVar12._8_8_ = 0;
                     auVar12._0_8_ = ( ulong )(uVar30 + 1) * lVar33;
                     auVar24._8_8_ = 0;
                     auVar24._0_8_ = uVar34;
                     lVar32 = SUB168(auVar12 * auVar24, 8);
                     uVar28 = *(uint*)( lVar31 + lVar32 * 4 );
                     uVar30 = SUB164(auVar12 * auVar24, 8);
                     if (uVar28 == 0) break;
                     auVar13._8_8_ = 0;
                     auVar13._0_8_ = (ulong)uVar28 * lVar33;
                     auVar25._8_8_ = 0;
                     auVar25._0_8_ = uVar34;
                     auVar14._8_8_ = 0;
                     auVar14._0_8_ = ( ulong )(( uVar1 + uVar30 ) - SUB164(auVar13 * auVar25, 8)) * lVar33;
                     auVar26._8_8_ = 0;
                     auVar26._0_8_ = uVar34;
                     if (SUB164(auVar14 * auVar26, 8) < uVar35) {
                        return 0;
                     }
                  };
                  return 0;
               }
               lVar33 = *(long*)( this + 0xb00 );
            }
            uVar35 = uVar35 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = ( ulong )(uVar30 + 1) * lVar2;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar34;
            lVar31 = SUB168(auVar8 * auVar20, 8);
            uVar28 = *(uint*)( lVar33 + lVar31 * 4 );
            uVar30 = SUB164(auVar8 * auVar20, 8);
            if (uVar28 == 0) {
               return 0;
            }
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar28 * lVar2;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar34;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = ( ulong )(( uVar1 + uVar30 ) - SUB164(auVar9 * auVar21, 8)) * lVar2;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar34;
         } while ( uVar35 <= SUB164(auVar10 * auVar22, 8) );
         return 0;
      }
   }
   return 0;
}/* ExtendGDScriptParser::get_document_links() const */ExtendGDScriptParser * __thiscall
ExtendGDScriptParser::get_document_links(ExtendGDScriptParser *this){
   return this + 0xab8;
}/* GodotPosition::to_lsp(Vector<String> const&) const */ulong GodotPosition::to_lsp(GodotPosition *this, Vector *param_1) {
   CowData *pCVar1;
   long lVar2;
   code *pcVar3;
   int iVar4;
   ulong uVar5;
   ulong uVar6;
   int iVar7;
   ulong uVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   iVar4 = *(int*)this;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = 0;
   if (0 < iVar4) {
      lVar2 = *(long*)( param_1 + 8 );
      if (lVar2 == 0) {
         uVar5 = 0;
      } else {
         uVar5 = *(ulong*)( lVar2 + -8 );
         if ((long)iVar4 <= (long)uVar5) {
            iVar7 = *(int*)( this + 4 );
            uVar6 = ( ulong )(iVar4 - 1U);
            if (0 < iVar7) {
               uVar8 = (ulong)(int)( iVar4 - 1U );
               if ((long)uVar5 <= (long)uVar8) {
                  LAB_00100df3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar8, uVar5, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }
               pCVar1 = (CowData*)( lVar2 + uVar8 * 8 );
               local_38 = 0;
               if (*(long*)pCVar1 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_38, pCVar1);
               }
               iVar4 = String::find_char((wchar32)(CowData<char32_t>*)&local_38, 9);
               if (iVar4 == -1) {
                  uVar9 = ( ulong )(iVar7 - 1);
               } else {
                  iVar4 = get_indent_size();
                  if (local_38 == 0) {
                     uVar9 = 0;
                  } else {
                     uVar5 = *(ulong*)( local_38 + -8 );
                     uVar8 = 0;
                     iVar7 = 1;
                     while (( uVar9 = uVar8 & 0xffffffff ),(int)uVar8 < (int)uVar5 && ( iVar7 < *(int*)( this + 4 ) )) {
                        if (uVar8 == uVar5) {
                           LAB_00100d50:iVar7 = iVar7 + 1;
                        } else {
                           if ((long)uVar5 <= (long)uVar8) goto LAB_00100df3;
                           if (*(int*)( local_38 + uVar8 * 4 ) != 9) goto LAB_00100d50;
                           iVar7 = iVar7 + iVar4;
                        }
                        uVar8 = uVar8 + 1;
                     };
                  }
               }
               uVar6 = uVar6 | uVar9 << 0x20;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
            }
            goto LAB_00100d82;
         }
      }
      uVar6 = uVar5 & 0xffffffff;
   }
   LAB_00100d82:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar6;
}/* GodotRange::to_lsp(Vector<String> const&) const */undefined1  [16] __thiscallGodotRange::to_lsp(GodotRange *this, Vector *param_1) {
   undefined8 uVar1;
   undefined1 auVar2[16];
   auVar2._0_8_ = GodotPosition::to_lsp((GodotPosition*)this, param_1);
   uVar1 = GodotPosition::to_lsp((GodotPosition*)( this + 8 ), param_1);
   auVar2._8_8_ = uVar1;
   return auVar2;
}/* ExtendGDScriptParser::range_of_node(GDScriptParser::Node const*) const */undefined8 ExtendGDScriptParser::range_of_node(ExtendGDScriptParser *this, Node *param_1) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined4 local_38;
   undefined4 uStack_34;
   undefined4 uStack_30;
   undefined4 uStack_2c;
   long local_20;
   local_38 = *(undefined4*)( param_1 + 0xc );
   uStack_30 = *(undefined4*)( param_1 + 0x10 );
   uStack_34 = *(undefined4*)( param_1 + 0x14 );
   uStack_2c = *(undefined4*)( param_1 + 0x18 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = GodotPosition::to_lsp((GodotPosition*)&local_38, (Vector*)( this + 0xa30 ));
   GodotPosition::to_lsp((GodotPosition*)&uStack_30, (Vector*)( this + 0xa30 ));
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GodotPosition::from_lsp(lsp::Position, Vector<String> const&) */ulong GodotPosition::from_lsp(undefined8 param_1, long param_2) {
   CowData *pCVar1;
   long lVar2;
   code *pcVar3;
   int iVar4;
   long lVar5;
   ulong uVar6;
   int iVar7;
   long lVar8;
   long in_FS_OFFSET;
   int iVar9;
   uint uVar10;
   long local_28;
   long local_20;
   iVar7 = (int)param_1;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)( param_2 + 8 );
   iVar9 = (int)_LC22 + iVar7;
   iVar4 = (int)( (ulong)param_1 >> 0x20 );
   uVar10 = _LC22._4_4_ + iVar4;
   uVar6 = CONCAT44(uVar10, iVar9);
   if (lVar2 == 0) {
      if (iVar9 < 1) {
         lVar5 = (long)iVar7;
         lVar8 = 0;
         LAB_00101000:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar8, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }
   } else {
      lVar8 = *(long*)( lVar2 + -8 );
      if (iVar9 <= lVar8) {
         lVar5 = (long)iVar7;
         if (( lVar5 < 0 ) || ( lVar8 <= lVar5 )) goto LAB_00101000;
         local_28 = 0;
         pCVar1 = (CowData*)( lVar2 + lVar5 * 8 );
         if (*(long*)pCVar1 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_28, pCVar1);
         }
         uVar6 = (ulong)uVar10;
         if (( 0 < iVar4 ) && ( local_28 != 0 )) {
            lVar8 = *(long*)( local_28 + -8 );
            iVar9 = 0;
            lVar5 = 0;
            do {
               while (true) {
                  if (( (int)lVar8 == 0 ) || ( (int)lVar8 + -1 <= (int)lVar5 )) goto LAB_00101055;
                  if (lVar8 == lVar5) break;
                  if (lVar8 <= lVar5) goto LAB_00101000;
                  if (*(int*)( local_28 + lVar5 * 4 ) == 9) {
                     iVar9 = iVar9 + 1;
                  }
                  lVar5 = lVar5 + 1;
                  if (iVar4 == lVar5) goto LAB_00101055;
               };
               lVar5 = lVar8 + 1;
            } while ( lVar5 != iVar4 );
            LAB_00101055:if (0 < iVar9) {
               iVar4 = get_indent_size();
               uVar6 = ( ulong )(uVar10 + ( iVar4 + -1 ) * iVar9);
            }
         }
         uVar6 = ( ulong )(iVar7 + 1) | uVar6 << 0x20;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
      }
   }
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar6;
}/* GodotRange::from_lsp(lsp::Range const&, Vector<String> const&) */undefined1[16];GodotRange::from_lsp(Range *param_1, Vector *param_2) {
   undefined8 uVar1;
   undefined1 auVar2[16];
   auVar2._0_8_ = GodotPosition::from_lsp(*(undefined8*)param_1);
   uVar1 = GodotPosition::from_lsp(*(undefined8*)( param_1 + 8 ), param_2);
   auVar2._8_8_ = uVar1;
   return auVar2;
}/* ExtendGDScriptParser::get_identifier_under_position(lsp::Position const&, lsp::Range&) const */Position *ExtendGDScriptParser::get_identifier_under_position(Position *param_1, Range *param_2) {
   CowData *pCVar1;
   int iVar2;
   uint uVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   undefined8 *in_RCX;
   long lVar7;
   uint uVar8;
   int *in_RDX;
   long lVar9;
   int iVar10;
   int iVar11;
   long lVar12;
   int iVar13;
   int iVar14;
   long in_FS_OFFSET;
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   lVar7 = (long)*in_RDX;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)( param_2 + 0xa38 );
   if (*in_RDX < 0) {
      if (lVar4 == 0) goto LAB_001014a0;
      lVar6 = *(long*)( lVar4 + -8 );
   } else {
      if (lVar4 != 0) {
         lVar6 = *(long*)( lVar4 + -8 );
         if (lVar6 <= lVar7) goto LAB_0010134d;
         pCVar1 = (CowData*)( lVar4 + lVar7 * 8 );
         local_60 = 0;
         if (( *(long*)pCVar1 != 0 ) && ( CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, pCVar1),local_60 != 0 )) {
            lVar4 = *(long*)( local_60 + -8 );
            iVar11 = (int)lVar4;
            if (( iVar11 != 0 ) && ( iVar14 = iVar11 != 1 )) {
               iVar10 = in_RDX[1];
               if (( iVar10 < 0 ) || ( iVar11 <= iVar10 )) {
                  _err_print_index_error("get_identifier_under_position", "modules/gdscript/language_server/gdscript_extend_parser.cpp", 0x2b8, (long)iVar10, (long)iVar11, "p_position.character", "line.size()", "", false, false);
                  *(undefined8*)param_1 = 0;
                  String::parse_latin1((String*)param_1, "");
                  goto LAB_0010119f;
               }
               iVar2 = *in_RDX;
               if (iVar10 < iVar14) {
                  lVar7 = (long)iVar10;
                  if (lVar4 == lVar7) {
                     lVar6 = (long)( iVar10 + -1 );
                     if (lVar4 == lVar6) goto LAB_00101570;
                     LAB_00101458:if (lVar4 <= lVar6) goto LAB_001013ce;
                     uVar8 = *(uint*)( local_60 + lVar6 * 4 );
                     if (uVar8 < 0x3a) {
                        if (0x2f < uVar8) {
                           lVar7 = lVar6;
                           iVar10 = iVar10 + -1;
                        }
                     } else if (( uVar8 - 0x41 < 0x3a ) && ( ( 0x3ffffff43ffffffU >> ( ( ulong )(uVar8 - 0x41) & 0x3f ) & 1 ) != 0 )) {
                        lVar7 = lVar6;
                        iVar10 = iVar10 + -1;
                     }
                     goto LAB_00101200;
                  }
                  lVar6 = lVar7;
                  if (lVar4 <= lVar7) goto LAB_001013ce;
                  uVar8 = *(uint*)( local_60 + lVar7 * 4 );
                  if (uVar8 < 0x3a) {
                     if (uVar8 < 0x30) goto LAB_00101440;
                     goto LAB_00101209;
                  }
                  if (( uVar8 - 0x41 < 0x3a ) && ( ( 0x3ffffff43ffffffU >> ( ( ulong )(uVar8 - 0x41) & 0x3f ) & 1 ) != 0 )) goto LAB_00101209;
                  LAB_00101440:if (iVar10 != 0) {
                     lVar6 = (long)( iVar10 + -1 );
                     if (lVar4 != lVar6) goto LAB_00101458;
                     goto LAB_00101209;
                  }
               } else {
                  lVar7 = (long)( iVar10 + -1 );
                  iVar10 = iVar10 + -1;
                  LAB_00101200:if (lVar4 == lVar7) goto LAB_00101570;
                  LAB_00101209:lVar6 = lVar7;
                  if (lVar4 <= lVar7) goto LAB_001013ce;
                  lVar7 = (long)iVar10;
               }
               lVar12 = (long)( iVar10 + -1 );
               lVar9 = lVar7;
               do {
                  lVar6 = lVar12;
                  uVar8 = *(uint*)( local_60 + lVar9 * 4 );
                  iVar13 = (int)lVar9;
                  if (0x39 < uVar8) {
                     if (( uVar8 - 0x41 < 0x3a ) && ( ( 0x3ffffff43ffffffU >> ( ( ulong )(uVar8 - 0x41) & 0x3f ) & 1 ) != 0 )) goto LAB_0010123e;
                     LAB_00101274:if (( iVar14 <= iVar10 ) || ( lVar4 == lVar7 )) goto LAB_001012f3;
                     LAB_00101289:lVar6 = lVar7;
                     if (lVar7 < lVar4) {
                        uVar8 = ( iVar11 + -2 ) - iVar10;
                        lVar12 = lVar7;
                        goto LAB_001012e0;
                     }
                     break;
                  }
                  if (uVar8 < 0x30) goto LAB_00101274;
                  LAB_0010123e:if ((int)lVar6 == -1) {
                     if (( iVar10 < iVar14 ) && ( lVar4 != lVar7 )) {
                        iVar13 = 0;
                        goto LAB_00101289;
                     }
                     iVar13 = 0;
                     goto LAB_001012fc;
                  }
                  iVar13 = iVar11;
                  if (lVar6 == lVar4) goto LAB_00101274;
                  lVar9 = lVar9 + -1;
                  lVar12 = lVar6 + -1;
               } while ( lVar9 < lVar4 );
               LAB_001013ce:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar4, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar5 = (code*)invalidInstructionException();
               ( *pcVar5 )();
            }
         }
         *(undefined8*)param_1 = 0;
         local_58 = &_LC8;
         local_50 = 0;
         String::parse_latin1((StrRange*)param_1);
         goto LAB_0010119f;
      }
      LAB_001014a0:lVar6 = 0;
   }
   LAB_0010134d:_err_print_index_error("get_identifier_under_position", "modules/gdscript/language_server/gdscript_extend_parser.cpp", 0x2b3, lVar7, lVar6, "p_position.line", "lines.size()", "", false, false);
   *(undefined8*)param_1 = 0;
   local_58 = &_LC8;
   local_50 = 0;
   String::parse_latin1((StrRange*)param_1);
   goto LAB_001011a7;
   while (true) {
      iVar10 = iVar11;
      if (( lVar12 == (ulong)uVar8 + lVar7 ) || ( lVar9 = lVar4 + -1 == lVar12 )) goto LAB_001012f3;
      lVar6 = lVar4;
      lVar12 = lVar9;
      if (lVar9 == lVar4) break;
      LAB_001012e0:uVar3 = *(uint*)( local_60 + lVar12 * 4 );
      iVar11 = (int)lVar12;
      if (uVar3 < 0x3a) {
         if (uVar3 < 0x30) goto LAB_001012f3;
      } else if (( 0x39 < uVar3 - 0x41 ) || ( ( 0x3ffffff43ffffffU >> ( ( ulong )(uVar3 - 0x41) & 0x3f ) & 1 ) == 0 )) goto LAB_001012f3;
   };
   goto LAB_001013ce;
   LAB_001012f3:if (iVar13 < iVar10) {
      LAB_001012fc:*in_RCX = CONCAT44(iVar13 + 1, iVar2);
      in_RCX[1] = CONCAT44(iVar10 + 1, iVar2);
      String::substr((int)param_1, (int)(CowData<char32_t>*)&local_60);
   } else {
      LAB_00101570:*(undefined8*)param_1 = 0;
      String::parse_latin1((String*)param_1, "");
   }
   LAB_0010119f:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_001011a7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ExtendGDScriptParser::get_left_function_call(lsp::Position const&, lsp::Position&, int&) const */undefined8 ExtendGDScriptParser::get_left_function_call(ExtendGDScriptParser *this, Position *param_1, Position *param_2, int *param_3) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   undefined8 uVar6;
   int iVar7;
   ulong uVar8;
   int iVar9;
   ulong uVar10;
   ulong uVar11;
   int iVar12;
   ulong uVar13;
   int iVar14;
   long in_FS_OFFSET;
   bool bVar15;
   long local_48;
   long local_40;
   uVar10 = ( ulong ) * (int*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( this + 0xa38 );
   if (*(int*)param_1 < 0) {
      if (lVar3 != 0) {
         lVar5 = *(long*)( lVar3 + -8 );
         goto LAB_00101829;
      }
   } else if (lVar3 != 0) {
      lVar5 = *(long*)( lVar3 + -8 );
      if ((long)uVar10 < lVar5) {
         iVar14 = 0;
         iVar9 = 0;
         uVar13 = uVar10;
         do {
            uVar8 = uVar10;
            if (lVar3 == 0) {
               uVar11 = 0;
               LAB_001017fc:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar8, uVar11, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }
            uVar11 = *(ulong*)( lVar3 + -8 );
            if ((long)uVar11 <= (long)uVar10) goto LAB_001017fc;
            local_48 = 0;
            plVar2 = (long*)( lVar3 + uVar10 * 8 );
            lVar3 = *plVar2;
            plVar1 = (long*)( lVar3 + -0x10 );
            iVar12 = (int)uVar13;
            if (lVar3 != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_001016a7;
                  LOCK();
                  lVar5 = *plVar1;
                  bVar15 = lVar3 == lVar5;
                  if (bVar15) {
                     *plVar1 = lVar3 + 1;
                     lVar5 = lVar3;
                  }
                  UNLOCK();
               } while ( !bVar15 );
               if (lVar5 != -1) {
                  local_48 = *plVar2;
               }
               LAB_001016a7:if (local_48 != 0) {
                  uVar11 = *(ulong*)( local_48 + -8 );
                  if ((int)uVar11 != 0) {
                     iVar7 = (int)uVar11 + -2;
                     if (( *(int*)param_1 == iVar12 ) && ( *(int*)( param_1 + 4 ) + -1 < iVar7 )) {
                        iVar7 = *(int*)( param_1 + 4 ) + -1;
                     }
                     if (-1 < iVar7) {
                        uVar8 = (ulong)iVar7;
                        do {
                           for (; uVar8 == uVar11; uVar8 = uVar8 - 1) {}
                           if ((long)uVar11 <= (long)uVar8) goto LAB_001017fc;
                           iVar7 = *(int*)( local_48 + uVar8 * 4 );
                           if (iVar7 == 0x29) {
                              iVar9 = iVar9 + 1;
                           } else if (iVar7 == 0x28) {
                              iVar9 = iVar9 + -1;
                              if (iVar9 < 0) {
                                 *(int*)param_2 = iVar12;
                                 *(int*)( param_2 + 4 ) = (int)uVar8 + -1;
                                 *param_3 = iVar14;
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                                 uVar6 = 0;
                                 goto LAB_001017b1;
                              }
                           } else if (iVar9 < 1) {
                              iVar14 = ( iVar14 + 1 ) - ( uint )(iVar7 != 0x2c);
                           }
                           uVar8 = uVar8 - 1;
                        } while ( -1 < (int)uVar8 );
                     }
                  }
               }
            }
            uVar13 = ( ulong )(iVar12 - 1U);
            uVar10 = uVar10 - 1;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            if (iVar12 - 1U == 0xffffffff) {
               uVar6 = 0x25;
               goto LAB_001017b1;
            }
            lVar3 = *(long*)( this + 0xa38 );
         } while ( true );
      }
      goto LAB_00101829;
   }
   lVar5 = 0;
   LAB_00101829:_err_print_index_error("get_left_function_call", "modules/gdscript/language_server/gdscript_extend_parser.cpp", 0x306, uVar10, lVar5, "p_position.line", "lines.size()", "", false, false);
   uVar6 = 0x1f;
   LAB_001017b1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ExtendGDScriptParser::get_text_for_lookup_symbol(lsp::Position const&, String const&, bool) const
    */Position *ExtendGDScriptParser::get_text_for_lookup_symbol(Position *param_1, String *param_2, bool param_3) {
   long *plVar1;
   CowData *pCVar2;
   code *pcVar3;
   char cVar4;
   int iVar5;
   String *in_RCX;
   undefined7 in_register_00000011;
   long lVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   char in_R8B;
   long lVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   bool bVar12;
   String *local_a8;
   CowData<char32_t> *local_88;
   long local_68;
   long local_60;
   long local_58;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = *(long*)( param_2 + 0xa38 );
   *(undefined8*)param_1 = 0;
   if (( lVar6 != 0 ) && ( iVar5= (int)*(undefined8 *)(lVar6 + -8),0 < iVar5 )) {
      uVar11 = 0;
      do {
         if (*(int*)CONCAT71(in_register_00000011, param_3) == (int)uVar11) {
            if (lVar6 != 0) {
               lVar10 = *(long*)( lVar6 + -8 );
               if (lVar10 <= (long)uVar11) goto LAB_00101b63;
               local_68 = 0;
               pCVar2 = (CowData*)( lVar6 + uVar11 * 8 );
               if (*(long*)pCVar2 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, pCVar2);
               }
               iVar8 = (int)(CowData<char32_t>*)&local_68;
               String::substr((int)(CowData<char32_t>*)&local_60, iVar8);
               if (*(long*)( param_2 + 0xa38 ) != 0) {
                  lVar10 = *(long*)( *(long*)( param_2 + 0xa38 ) + -8 );
                  if (lVar10 <= (long)uVar11) goto LAB_00101b63;
                  String::substr((int)(String*)&local_58, iVar8);
                  if (( *(long*)in_RCX != 0 ) && ( 1 < *(uint*)( *(long*)in_RCX + -8 ) )) {
                     local_50 = 0;
                     iVar7 = ( (int*)CONCAT71(in_register_00000011, param_3) )[1] + -1;
                     if (-1 < iVar7) {
                        do {
                           iVar9 = (int)(CowData<char32_t>*)&local_48;
                           String::substr(iVar9, iVar8);
                           lVar10 = local_48;
                           lVar6 = local_50;
                           if (local_50 == local_48) {
                              if (local_50 == 0) goto LAB_00101c3b;
                              LOCK();
                              plVar1 = (long*)( local_50 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 != 0) goto LAB_00101c3b;
                              local_48 = 0;
                              Memory::free_static((void*)( lVar10 + -0x10 ), false);
                              cVar4 = String::begins_with(in_RCX);
                           } else {
                              if (local_50 != 0) {
                                 LOCK();
                                 plVar1 = (long*)( local_50 + -0x10 );
                                 *plVar1 = *plVar1 + -1;
                                 UNLOCK();
                                 if (*plVar1 == 0) {
                                    local_50 = 0;
                                    Memory::free_static((void*)( lVar6 + -0x10 ), false);
                                 }
                              }
                              local_50 = local_48;
                              LAB_00101c3b:cVar4 = String::begins_with(in_RCX);
                           }
                           if (cVar4 != '\0') {
                              String::substr(iVar9, iVar8);
                              if (local_60 != local_48) {
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                                 local_60 = local_48;
                                 local_48 = 0;
                              }
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                              String::operator +=((String*)&local_60, in_RCX);
                              break;
                           }
                           bVar12 = iVar7 != 0;
                           iVar7 = iVar7 + -1;
                        } while ( bVar12 );
                     }
                     local_88 = (CowData<char32_t>*)&local_50;
                     CowData<char32_t>::_unref(local_88);
                  }
                  local_a8 = (String*)&local_48;
                  String::operator +=((String*)param_1, (String*)&local_60);
                  String::chr((wchar32)local_a8);
                  String::operator +=((String*)param_1, local_a8);
                  lVar6 = local_48;
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
                  if (in_R8B != '\0') {
                     String::operator +=((String*)param_1, "(");
                  }
                  String::operator +=((String*)param_1, (String*)&local_58);
                  lVar6 = local_58;
                  if (local_58 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_58 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_58 = 0;
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
                  goto LAB_00101942;
               }
            }
            LAB_00101b60:lVar10 = 0;
            LAB_00101b63:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar11, lVar10, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         if (lVar6 == 0) goto LAB_00101b60;
         lVar10 = *(long*)( lVar6 + -8 );
         if (lVar10 <= (long)uVar11) goto LAB_00101b63;
         String::operator +=((String*)param_1, (String*)( lVar6 + uVar11 * 8 ));
         LAB_00101942:if (iVar5 + -1 != (int)uVar11) {
            String::operator +=((String*)param_1, "\n");
         }
         if (iVar5 - 1 == uVar11) break;
         lVar6 = *(long*)( param_2 + 0xa38 );
         uVar11 = uVar11 + 1;
      } while ( true );
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* CowData<Variant>::_ref(CowData<Variant> const&) [clone .part.0] */void CowData<Variant>::_ref(CowData<Variant> *this, CowData *param_1) {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* ExtendGDScriptParser::update_document_links(String const&) */void ExtendGDScriptParser::update_document_links(String *param_1) {
   void *pvVar1;
   long lVar2;
   undefined1 auVar3[16];
   char cVar4;
   long lVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   undefined1(*pauVar8)[16];
   long *plVar9;
   Object *pOVar10;
   long in_FS_OFFSET;
   String *local_280;
   Variant *local_278;
   long local_270;
   CowData *local_268;
   Object *local_258;
   long local_250;
   String local_248[8];
   undefined8 local_240;
   undefined8 local_238;
   undefined4 uStack_230;
   undefined4 uStack_22c;
   undefined1 local_228[16];
   long local_218[2];
   int local_208;
   int local_200;
   undefined4 local_1e8;
   undefined4 uStack_1e4;
   undefined4 uStack_1e0;
   long local_1c8[2];
   GDScriptTokenizerText local_1b8[376];
   long local_40;
   plVar9 = *(long**)( param_1 + 0xab8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar9 != (long*)0x0) {
      do {
         pvVar1 = (void*)*plVar9;
         if (pvVar1 == (void*)0x0) goto LAB_00101eb3;
         if (*(long**)( (long)pvVar1 + 0x28 ) == plVar9) {
            lVar5 = *(long*)( (long)pvVar1 + 0x18 );
            lVar2 = *(long*)( (long)pvVar1 + 0x20 );
            *plVar9 = lVar5;
            if (pvVar1 == (void*)plVar9[1]) {
               plVar9[1] = lVar2;
            }
            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x18 ) = lVar5;
               lVar5 = *(long*)( (long)pvVar1 + 0x18 );
            }
            if (lVar5 != 0) {
               *(long*)( lVar5 + 0x20 ) = lVar2;
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x10 ));
            Memory::free_static(pvVar1, false);
            *(int*)( plVar9 + 2 ) = (int)plVar9[2] + -1;
         } else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }
         plVar9 = *(long**)( param_1 + 0xab8 );
      } while ( (int)plVar9[2] != 0 );
      Memory::free_static(plVar9, false);
      *(undefined8*)( param_1 + 0xab8 ) = 0;
   }
   LAB_00101eb3:GDScriptTokenizerText::GDScriptTokenizerText(local_1b8);
   FileAccess::create(&local_258, 0);
   GDScriptTokenizerText::set_source_code((String*)local_1b8);
   do if (( local_208 == 3 ) && ( local_200 == 4 )) if (Variant::needs_deinit[local_200] != '\0') {
      Variant::_clear_internal();
   } while ( true );
}/* ExtendGDScriptParser::get_member_completions() */Variant * __thiscall ExtendGDScriptParser::get_member_completions(ExtendGDScriptParser *this){
   long *plVar1;
   Variant *pVVar2;
   CowData *pCVar3;
   long lVar4;
   long lVar5;
   undefined8 *puVar6;
   code *pcVar7;
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   long lVar10;
   undefined *puVar11;
   undefined8 uVar12;
   char cVar13;
   Variant *pVVar14;
   long lVar15;
   long lVar16;
   long *plVar17;
   long in_FS_OFFSET;
   long local_170;
   long local_168;
   long local_160;
   long local_158;
   long local_150;
   undefined *local_148;
   undefined8 local_140;
   int local_138[8];
   int local_118[2];
   undefined8 local_110;
   undefined8 uStack_108;
   long local_f8;
   int local_f0;
   undefined1 local_e8[16];
   long local_d8;
   undefined2 local_d0;
   undefined1 local_c8[16];
   long local_b8;
   undefined4 local_b0;
   undefined1 local_a8[16];
   long local_98[2];
   long local_88;
   undefined1 local_78[16];
   long local_68;
   Array local_60[8];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pVVar2 = (Variant*)( this + 0xb20 );
   cVar13 = Array::is_empty();
   if (cVar13 != '\0') {
      plVar17 = *(long**)( this + 0xad8 );
      if (plVar17 != (long*)0x0) {
         do {
            pCVar3 = (CowData*)plVar17[3];
            local_f8 = 0;
            local_e8 = (undefined1[16])0x0;
            local_f0 = 0;
            local_d8 = 0;
            if (lsp::MarkupKind::Markdown != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( local_e8 + 8 ), (CowData*)&lsp::MarkupKind::Markdown);
            }
            local_a8 = (undefined1[16])0x0;
            local_d0 = 0;
            local_b8 = 0;
            local_b0 = 0;
            local_98[0] = 0;
            local_88 = 0;
            local_68 = 0;
            local_c8 = (undefined1[16])0x0;
            local_78 = (undefined1[16])0x0;
            Array::Array(local_60);
            local_58 = 0;
            local_50 = (undefined1[16])0x0;
            if (local_f8 != *(long*)pCVar3) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, pCVar3);
            }
            switch (*(undefined4*)( pCVar3 + 0x20 )) {
               default:
          local_f0 = 1;
          break;
               case 1:
          local_f0 = 0x11;
          break;
               case 5:
          local_f0 = 7;
          break;
               case 6:
               case 0xc:
          local_f0 = 2;
          break;
               case 7:
          local_f0 = 10;
          break;
               case 10:
          local_f0 = 0xd;
          break;
               case 0xd:
          local_f0 = 6;
          break;
               case 0xe:
          local_f0 = 0x15;
          break;
               case 0x18:
          local_f0 = 0x17;
            }
            local_148 = &_LC32;
            local_158 = 0;
            local_140 = 2;
            String::parse_latin1((StrRange*)&local_158);
            String::operator +((String*)&local_150, (String*)( this + 0xa28 ));
            String::operator +((String*)&local_148, (String*)&local_150);
            Variant::Variant((Variant*)local_118, (String*)&local_148);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }
            local_58 = CONCAT44(local_58._4_4_, local_118[0]);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            Dictionary::Dictionary((Dictionary*)&local_148);
            Variant::Variant((Variant*)local_118, (String*)&local_f8);
            Variant::Variant((Variant*)local_138, "label");
            pVVar14 = (Variant*)Dictionary::operator []((Variant*)&local_148);
            if (pVVar14 != (Variant*)local_118) {
               if (Variant::needs_deinit[*(int*)pVVar14] != '\0') {
                  Variant::_clear_internal();
               }
               *(undefined4*)pVVar14 = 0;
               *(int*)pVVar14 = local_118[0];
               *(undefined8*)( pVVar14 + 8 ) = local_110;
               *(undefined8*)( pVVar14 + 0x10 ) = uStack_108;
               local_118[0] = 0;
            }
            if (Variant::needs_deinit[local_138[0]] != '\0') {
               Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_118[0]] != '\0') {
               Variant::_clear_internal();
            }
            Variant::Variant((Variant*)local_118, local_f0);
            Variant::Variant((Variant*)local_138, "kind");
            pVVar14 = (Variant*)Dictionary::operator []((Variant*)&local_148);
            if (pVVar14 != (Variant*)local_118) {
               if (Variant::needs_deinit[*(int*)pVVar14] != '\0') {
                  Variant::_clear_internal();
               }
               *(undefined4*)pVVar14 = 0;
               *(int*)pVVar14 = local_118[0];
               *(undefined8*)( pVVar14 + 8 ) = local_110;
               *(undefined8*)( pVVar14 + 0x10 ) = uStack_108;
               local_118[0] = 0;
            }
            if (Variant::needs_deinit[local_138[0]] == '\0') {
               cVar13 = Variant::needs_deinit[local_118[0]];
            } else {
               Variant::_clear_internal();
               cVar13 = Variant::needs_deinit[local_118[0]];
            }
            if (cVar13 != '\0') {
               Variant::_clear_internal();
            }
            Variant::Variant((Variant*)local_118, "data");
            pVVar14 = (Variant*)Dictionary::operator []((Variant*)&local_148);
            Variant::operator =(pVVar14, (Variant*)&local_58);
            if (Variant::needs_deinit[local_118[0]] != '\0') {
               Variant::_clear_internal();
            }
            if (( local_b8 != 0 ) && ( 1 < *(uint*)( local_b8 + -8 ) )) {
               Variant::Variant((Variant*)local_118, (String*)&local_b8);
               Variant::Variant((Variant*)local_138, "insertText");
               pVVar14 = (Variant*)Dictionary::operator []((Variant*)&local_148);
               if (pVVar14 != (Variant*)local_118) {
                  if (Variant::needs_deinit[*(int*)pVVar14] != '\0') {
                     Variant::_clear_internal();
                  }
                  *(undefined4*)pVVar14 = 0;
                  *(int*)pVVar14 = local_118[0];
                  *(undefined8*)( pVVar14 + 8 ) = local_110;
                  *(undefined8*)( pVVar14 + 0x10 ) = uStack_108;
                  local_118[0] = 0;
               }
               if (Variant::needs_deinit[local_138[0]] != '\0') {
                  Variant::_clear_internal();
               }
               if (Variant::needs_deinit[local_118[0]] != '\0') {
                  Variant::_clear_internal();
               }
            }
            Variant::Variant((Variant*)local_118, (Dictionary*)&local_148);
            Array::push_back(pVVar2);
            if (Variant::needs_deinit[local_118[0]] != '\0') {
               Variant::_clear_internal();
            }
            Dictionary::~Dictionary((Dictionary*)&local_148);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }
            Array::~Array(local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_78 + 8 ));
            CowData<String>::_unref((CowData<String>*)local_78);
            lVar10 = local_88;
            if (local_88 != 0) {
               LOCK();
               plVar1 = (long*)( local_88 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  if (local_88 == 0) {
                     /* WARNING: Does not return */
                     pcVar7 = (code*)invalidInstructionException();
                     ( *pcVar7 )();
                  }
                  lVar4 = *(long*)( local_88 + -8 );
                  local_88 = 0;
                  if (lVar4 != 0) {
                     lVar15 = 0;
                     lVar16 = lVar10;
                     do {
                        if (*(long*)( lVar16 + 0x10 ) != 0) {
                           LOCK();
                           plVar1 = (long*)( *(long*)( lVar16 + 0x10 ) + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              lVar5 = *(long*)( lVar16 + 0x10 );
                              *(undefined8*)( lVar16 + 0x10 ) = 0;
                              Memory::free_static((void*)( lVar5 + -0x10 ), false);
                           }
                        }
                        lVar15 = lVar15 + 1;
                        lVar16 = lVar16 + 0x18;
                     } while ( lVar4 != lVar15 );
                  }
                  Memory::free_static((void*)( lVar10 + -0x10 ), false);
               }
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_c8 + 8 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_e8 + 8 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)local_e8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
            plVar17 = (long*)*plVar17;
         } while ( plVar17 != (long*)0x0 );
      }
      for (puVar6 = *(undefined8**)( this + 0xb08 ); puVar6 != (undefined8*)0x0; puVar6 = (undefined8*)*puVar6) {
         plVar17 = (long*)puVar6[6];
         if (plVar17 != (long*)0x0) {
            do {
               pCVar3 = (CowData*)plVar17[3];
               local_f8 = 0;
               local_e8 = (undefined1[16])0x0;
               local_f0 = 0;
               local_d8 = 0;
               if (lsp::MarkupKind::Markdown != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( local_e8 + 8 ), (CowData*)&lsp::MarkupKind::Markdown);
               }
               local_d0 = 0;
               local_a8 = (undefined1[16])0x0;
               local_b8 = 0;
               local_b0 = 0;
               local_98[0] = 0;
               local_88 = 0;
               local_68 = 0;
               local_c8 = (undefined1[16])0x0;
               local_78 = (undefined1[16])0x0;
               Array::Array(local_60);
               local_58 = 0;
               local_50 = (undefined1[16])0x0;
               if (local_f8 != *(long*)pCVar3) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, pCVar3);
               }
               switch (*(undefined4*)( pCVar3 + 0x20 )) {
                  default:
            local_f0 = 1;
            break;
                  case 1:
            local_f0 = 0x11;
            break;
                  case 5:
            local_f0 = 7;
            break;
                  case 6:
                  case 0xc:
            local_f0 = 2;
            break;
                  case 7:
            local_f0 = 10;
            break;
                  case 10:
            local_f0 = 0xd;
            break;
                  case 0xd:
            local_f0 = 6;
            break;
                  case 0xe:
            local_f0 = 0x15;
            break;
                  case 0x18:
            local_f0 = 0x17;
               }
               local_148 = &_LC32;
               local_160 = 0;
               local_140 = 2;
               String::parse_latin1((StrRange*)&local_160);
               String::operator +((String*)&local_158, (String*)( puVar6 + 2 ));
               String::operator +((String*)&local_150, (String*)&local_158);
               local_148 = &_LC32;
               local_170 = 0;
               local_140 = 2;
               String::parse_latin1((StrRange*)&local_170);
               String::operator +((String*)&local_168, (String*)( this + 0xa28 ));
               String::operator +((String*)&local_148, (String*)&local_168);
               Variant::Variant((Variant*)local_118, (String*)&local_148);
               if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
               }
               puVar11 = local_148;
               local_58 = CONCAT44(local_58._4_4_, local_118[0]);
               if (local_148 != (undefined*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_148 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_148 = (undefined*)0x0;
                     Memory::free_static(puVar11 + -0x10, false);
                  }
               }
               lVar10 = local_168;
               if (local_168 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_168 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_168 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               lVar10 = local_170;
               if (local_170 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_170 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_170 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               lVar10 = local_150;
               if (local_150 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_150 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_150 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               lVar10 = local_158;
               if (local_158 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_158 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_158 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               lVar10 = local_160;
               if (local_160 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_160 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_160 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               Dictionary::Dictionary((Dictionary*)&local_148);
               Variant::Variant((Variant*)local_118, (String*)&local_f8);
               Variant::Variant((Variant*)local_138, "label");
               pVVar14 = (Variant*)Dictionary::operator []((Variant*)&local_148);
               if (pVVar14 != (Variant*)local_118) {
                  if (Variant::needs_deinit[*(int*)pVVar14] != '\0') {
                     Variant::_clear_internal();
                  }
                  *(undefined4*)pVVar14 = 0;
                  *(int*)pVVar14 = local_118[0];
                  *(undefined8*)( pVVar14 + 8 ) = local_110;
                  *(undefined8*)( pVVar14 + 0x10 ) = uStack_108;
                  local_118[0] = 0;
               }
               if (Variant::needs_deinit[local_138[0]] != '\0') {
                  Variant::_clear_internal();
               }
               if (Variant::needs_deinit[local_118[0]] != '\0') {
                  Variant::_clear_internal();
               }
               Variant::Variant((Variant*)local_118, local_f0);
               Variant::Variant((Variant*)local_138, "kind");
               pVVar14 = (Variant*)Dictionary::operator []((Variant*)&local_148);
               if (pVVar14 != (Variant*)local_118) {
                  if (Variant::needs_deinit[*(int*)pVVar14] != '\0') {
                     Variant::_clear_internal();
                  }
                  *(undefined4*)pVVar14 = 0;
                  *(int*)pVVar14 = local_118[0];
                  *(undefined8*)( pVVar14 + 8 ) = local_110;
                  *(undefined8*)( pVVar14 + 0x10 ) = uStack_108;
                  local_118[0] = 0;
               }
               if (Variant::needs_deinit[local_138[0]] == '\0') {
                  cVar13 = Variant::needs_deinit[local_118[0]];
               } else {
                  Variant::_clear_internal();
                  cVar13 = Variant::needs_deinit[local_118[0]];
               }
               if (cVar13 != '\0') {
                  Variant::_clear_internal();
               }
               Variant::Variant((Variant*)local_118, "data");
               pVVar14 = (Variant*)Dictionary::operator []((Variant*)&local_148);
               Variant::operator =(pVVar14, (Variant*)&local_58);
               if (Variant::needs_deinit[local_118[0]] != '\0') {
                  Variant::_clear_internal();
               }
               if (( local_b8 != 0 ) && ( 1 < *(uint*)( local_b8 + -8 ) )) {
                  Variant::Variant((Variant*)local_118, (String*)&local_b8);
                  Variant::Variant((Variant*)local_138, "insertText");
                  pVVar14 = (Variant*)Dictionary::operator []((Variant*)&local_148);
                  if (pVVar14 != (Variant*)local_118) {
                     if (Variant::needs_deinit[*(int*)pVVar14] != '\0') {
                        Variant::_clear_internal();
                     }
                     *(undefined4*)pVVar14 = 0;
                     *(int*)pVVar14 = local_118[0];
                     *(undefined8*)( pVVar14 + 8 ) = local_110;
                     *(undefined8*)( pVVar14 + 0x10 ) = uStack_108;
                     local_118[0] = 0;
                  }
                  if (Variant::needs_deinit[local_138[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  if (Variant::needs_deinit[local_118[0]] != '\0') {
                     Variant::_clear_internal();
                  }
               }
               Variant::Variant((Variant*)local_118, (Dictionary*)&local_148);
               Array::push_back(pVVar2);
               if (Variant::needs_deinit[local_118[0]] != '\0') {
                  Variant::_clear_internal();
               }
               Dictionary::~Dictionary((Dictionary*)&local_148);
               if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
               }
               Array::~Array(local_60);
               lVar10 = local_68;
               if (local_68 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               uVar12 = local_78._8_8_;
               if (local_78._8_8_ != 0) {
                  LOCK();
                  plVar1 = (long*)( local_78._8_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_78._8_8_ = 0;
                     Memory::free_static((void*)( uVar12 + -0x10 ), false);
                  }
               }
               CowData<String>::_unref((CowData<String>*)local_78);
               lVar10 = local_88;
               if (local_88 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_88 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     if (local_88 == 0) {
                        /* WARNING: Does not return */
                        pcVar7 = (code*)invalidInstructionException();
                        ( *pcVar7 )();
                     }
                     lVar4 = *(long*)( local_88 + -8 );
                     local_88 = 0;
                     if (lVar4 != 0) {
                        lVar15 = 0;
                        lVar16 = lVar10;
                        do {
                           if (*(long*)( lVar16 + 0x10 ) != 0) {
                              LOCK();
                              plVar1 = (long*)( *(long*)( lVar16 + 0x10 ) + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 lVar5 = *(long*)( lVar16 + 0x10 );
                                 *(undefined8*)( lVar16 + 0x10 ) = 0;
                                 Memory::free_static((void*)( lVar5 + -0x10 ), false);
                              }
                           }
                           lVar15 = lVar15 + 1;
                           lVar16 = lVar16 + 0x18;
                        } while ( lVar4 != lVar15 );
                     }
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               lVar10 = local_98[0];
               if (local_98[0] != 0) {
                  LOCK();
                  plVar1 = (long*)( local_98[0] + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_98[0] = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               lVar10 = local_b8;
               if (local_b8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_b8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_b8 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               uVar12 = local_c8._8_8_;
               if (local_c8._8_8_ != 0) {
                  LOCK();
                  plVar1 = (long*)( local_c8._8_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_c8._8_8_ = 0;
                     Memory::free_static((void*)( uVar12 + -0x10 ), false);
                  }
               }
               uVar12 = local_c8._0_8_;
               if (local_c8._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long*)( local_c8._0_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = local_c8._8_8_;
                     local_c8 = auVar8 << 0x40;
                     Memory::free_static((void*)( uVar12 + -0x10 ), false);
                  }
               }
               lVar10 = local_d8;
               if (local_d8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_d8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_d8 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               uVar12 = local_e8._8_8_;
               if (local_e8._8_8_ != 0) {
                  LOCK();
                  plVar1 = (long*)( local_e8._8_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_e8._8_8_ = 0;
                     Memory::free_static((void*)( uVar12 + -0x10 ), false);
                  }
               }
               uVar12 = local_e8._0_8_;
               if (local_e8._0_8_ != 0) {
                  LOCK();
                  plVar1 = (long*)( local_e8._0_8_ + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = local_e8._8_8_;
                     local_e8 = auVar9 << 0x40;
                     Memory::free_static((void*)( uVar12 + -0x10 ), false);
                  }
               }
               lVar10 = local_f8;
               if (local_f8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_f8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_f8 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               plVar17 = (long*)*plVar17;
            } while ( plVar17 != (long*)0x0 );
         }
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return pVVar2;
}/* CowData<GDScriptParser::DataType>::_ref(CowData<GDScriptParser::DataType> const&) [clone .part.0]
    */void CowData<GDScriptParser::DataType>::_ref(CowData<GDScriptParser::DataType> *this, CowData *param_1) {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* ExtendGDScriptParser::dump_function_api(GDScriptParser::FunctionNode const*) const */FunctionNode *ExtendGDScriptParser::dump_function_api(FunctionNode *param_1) {
   long *plVar1;
   long lVar2;
   undefined8 *puVar3;
   code *pcVar4;
   Variant *pVVar5;
   ExtendGDScriptParser *pEVar6;
   undefined8 *in_RDX;
   int iVar7;
   ExtendGDScriptParser *in_RSI;
   long lVar8;
   long lVar9;
   long in_FS_OFFSET;
   DataType *local_1b8;
   Array local_180[8];
   Dictionary local_178[8];
   long local_170;
   undefined8 local_168;
   undefined8 local_160;
   undefined8 local_158;
   undefined8 local_150;
   undefined8 local_148;
   undefined1 local_140[16];
   undefined1 local_130[16];
   undefined1 local_120[16];
   undefined8 local_110;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b0;
   undefined1 local_a0[16];
   undefined1 local_90[16];
   undefined8 local_80;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary((Dictionary*)param_1);
   if (in_RDX == (undefined8*)0x0) {
      _err_print_error("dump_function_api", "modules/gdscript/language_server/gdscript_extend_parser.cpp", 0x368, "Parameter \"p_func\" is null.", 0, 0);
      goto LAB_00103ed5;
   }
   Variant::Variant((Variant*)local_58, (StringName*)( in_RDX[0x25] + 0x148 ));
   Variant::Variant((Variant*)local_78, "name");
   pVVar5 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar5 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)pVVar5 = 0;
      *(int*)pVVar5 = local_58[0];
      *(undefined8*)( pVVar5 + 8 ) = local_50;
      *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (*(code**)*in_RDX == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType*)&local_168, (DataType*)( in_RDX + 7 ));
   } else {
      ( **(code**)*in_RDX )(&local_168);
   }
   local_1b8 = (DataType*)&local_168;
   GDScriptParser::DataType::to_string();
   Variant::Variant((Variant*)local_58, (String*)&local_170);
   Variant::Variant((Variant*)local_78, "return_type");
   pVVar5 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar5 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)pVVar5 = 0;
      *(int*)pVVar5 = local_58[0];
      *(undefined8*)( pVVar5 + 8 ) = local_50;
      *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   GDScriptParser::DataType::~DataType(local_1b8);
   Variant::Variant((Variant*)local_58, "rpc_config");
   pVVar5 = (Variant*)Dictionary::operator []((Variant*)param_1);
   Variant::operator =(pVVar5, (Variant*)( in_RDX + 0x31 ));
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   Array::Array(local_180);
   lVar2 = in_RDX[0x27];
   for (lVar9 = 0; ( lVar2 != 0 && ( lVar9 < *(long*)( lVar2 + -8 ) ) ); lVar9 = lVar9 + 1) {
      Dictionary::Dictionary(local_178);
      lVar2 = in_RDX[0x27];
      if (lVar2 == 0) {
         LAB_00103d90:lVar8 = 0;
         LAB_00103d93:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar8, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }
      lVar8 = *(long*)( lVar2 + -8 );
      if (lVar8 <= lVar9) goto LAB_00103d93;
      Variant::Variant((Variant*)local_58, (StringName*)( *(long*)( *(long*)( lVar2 + lVar9 * 8 ) + 0x128 ) + 0x148 ));
      Variant::Variant((Variant*)local_78, "name");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_178);
      if (pVVar5 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)pVVar5 = 0;
         *(int*)pVVar5 = local_58[0];
         *(undefined8*)( pVVar5 + 8 ) = local_50;
         *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      lVar2 = in_RDX[0x27];
      if (lVar2 == 0) goto LAB_00103d90;
      lVar8 = *(long*)( lVar2 + -8 );
      if (lVar8 <= lVar9) goto LAB_00103d93;
      puVar3 = *(undefined8**)( lVar2 + lVar9 * 8 );
      pcVar4 = *(code**)*puVar3;
      if (pcVar4 == GDScriptParser::Node::get_datatype) {
         local_160 = 0;
         local_158 = _LC56;
         local_150 = 0;
         local_148 = 0;
         local_110 = 0;
         local_f8 = 0;
         local_f0 = 0;
         local_e8 = 6;
         local_e0 = 1;
         local_d8 = 0;
         local_c8 = 0;
         local_c0 = 0;
         local_b0 = 0;
         local_80 = _LC44;
         local_140 = (undefined1[16])0x0;
         local_130 = (undefined1[16])0x0;
         local_120 = (undefined1[16])0x0;
         local_108 = (undefined1[16])0x0;
         local_a0 = (undefined1[16])0x0;
         local_90 = (undefined1[16])0x0;
         GDScriptParser::DataType::operator =(local_1b8, (DataType*)( puVar3 + 7 ));
      } else {
         ( *pcVar4 )(local_1b8);
      }
      GDScriptParser::DataType::to_string();
      Variant::Variant((Variant*)local_58, (String*)&local_170);
      Variant::Variant((Variant*)local_78, "type");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_178);
      if (pVVar5 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)pVVar5 = 0;
         *(int*)pVVar5 = local_58[0];
         *(undefined8*)( pVVar5 + 8 ) = local_50;
         *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      lVar2 = local_170;
      if (local_170 != 0) {
         LOCK();
         plVar1 = (long*)( local_170 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_170 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      GDScriptParser::DataType::~DataType(local_1b8);
      lVar2 = in_RDX[0x27];
      if (lVar2 == 0) goto LAB_00103d90;
      lVar8 = *(long*)( lVar2 + -8 );
      if (lVar8 <= lVar9) goto LAB_00103d93;
      lVar2 = *(long*)( *(long*)( lVar2 + lVar9 * 8 ) + 0x130 );
      if (lVar2 != 0) {
         Variant::Variant((Variant*)local_58, "default_value");
         pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_178);
         Variant::operator =(pVVar5, (Variant*)( lVar2 + 0x130 ));
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
      }
      Variant::Variant((Variant*)local_58, local_178);
      Array::push_back((Variant*)local_180);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      Dictionary::~Dictionary(local_178);
      lVar2 = in_RDX[0x27];
   }
   local_168 = 0;
   String::parse_latin1((String*)local_1b8, "");
   iVar7 = *(int*)( (long)in_RDX + 0xc ) + -1;
   if (iVar7 < 1) {
      pEVar6 = in_RSI + 0xa40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_1b8);
      LAB_00103fa6:Variant::Variant((Variant*)local_58, (String*)( pEVar6 + 8 ));
      Variant::Variant((Variant*)local_78, "signature");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)param_1);
      Variant::operator =(pVVar5, (Variant*)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      Variant::Variant((Variant*)local_58, (String*)( pEVar6 + 0x10 ));
      Variant::Variant((Variant*)local_78, "description");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)param_1);
      Variant::operator =(pVVar5, (Variant*)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
   } else {
      pEVar6 = (ExtendGDScriptParser*)search_symbol_defined_at_line(in_RSI, iVar7, (DocumentSymbol*)( in_RSI + 0xa40 ), (String*)local_1b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_1b8);
      if (pEVar6 != (ExtendGDScriptParser*)0x0) goto LAB_00103fa6;
   }
   Variant::Variant((Variant*)local_58, local_180);
   Variant::Variant((Variant*)local_78, "arguments");
   pVVar5 = (Variant*)Dictionary::operator []((Variant*)param_1);
   Variant::operator =(pVVar5, (Variant*)local_58);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   Array::~Array(local_180);
   LAB_00103ed5:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ExtendGDScriptParser::dump_class_api(GDScriptParser::ClassNode const*) const */ClassNode *ExtendGDScriptParser::dump_class_api(ClassNode *param_1) {
   undefined4 *puVar1;
   char cVar2;
   char *pcVar3;
   code *pcVar4;
   bool bVar5;
   Variant *pVVar6;
   ExtendGDScriptParser *pEVar7;
   DocumentSymbol *pDVar8;
   long lVar9;
   long in_RDX;
   int iVar10;
   ExtendGDScriptParser *in_RSI;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   String *local_258;
   Dictionary *local_248;
   long local_230;
   long local_228;
   DocumentSymbol *local_208;
   Array local_1c0[8];
   Array local_1b8[8];
   Array local_1b0[8];
   Array local_1a8[8];
   Array local_1a0[8];
   Array local_198[8];
   Array local_190[8];
   Dictionary local_188[8];
   undefined8 local_180;
   Dictionary local_178[8];
   undefined8 local_170;
   char *local_168;
   size_t local_160;
   int local_78[8];
   ulong local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary((Dictionary*)param_1);
   if (in_RDX == 0) {
      _err_print_error("dump_class_api", "modules/gdscript/language_server/gdscript_extend_parser.cpp", 0x381, "Parameter \"p_class\" is null.", 0, 0);
      goto LAB_00104bec;
   }
   if (( *(long*)( in_RDX + 0x128 ) == 0 ) || ( lVar9 = *(long*)( *(long*)( in_RDX + 0x128 ) + 0x148 ) ),lVar9 == 0) {
      local_168 = (char*)0x0;
   } else {
      local_168 = (char*)0x0;
      if (*(char**)( lVar9 + 8 ) == (char*)0x0) {
         if (*(long*)( lVar9 + 0x10 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_168, (CowData*)( lVar9 + 0x10 ));
         }
      } else {
         String::parse_latin1((String*)&local_168, *(char**)( lVar9 + 8 ));
      }
   }
   local_258 = (String*)&local_168;
   Variant::Variant((Variant*)&local_58, local_258);
   Variant::Variant((Variant*)local_78, "name");
   pVVar6 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar6 != (Variant*)&local_58) {
      if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)pVVar6 = 0;
      *(int*)pVVar6 = (int)local_58;
      *(undefined8*)( pVVar6 + 8 ) = local_50._0_8_;
      *(undefined8*)( pVVar6 + 0x10 ) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
   }
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)local_258);
   Variant::Variant((Variant*)&local_58, (String*)( in_RSI + 0xa28 ));
   Variant::Variant((Variant*)local_78, "path");
   pVVar6 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar6 != (Variant*)&local_58) {
      if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)pVVar6 = 0;
      *(int*)pVVar6 = (int)local_58;
      *(undefined8*)( pVVar6 + 8 ) = local_50._0_8_;
      *(undefined8*)( pVVar6 + 0x10 ) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
   }
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   Array::Array(local_1c0);
   lVar9 = *(long*)( in_RDX + 0x1a0 );
   for (lVar12 = 0; ( lVar9 != 0 && ( lVar12 < *(long*)( lVar9 + -8 ) ) ); lVar12 = lVar12 + 1) {
      lVar9 = *(long*)( *(long*)( lVar9 + lVar12 * 8 ) + 0x148 );
      if (lVar9 == 0) {
         local_170 = 0;
      } else {
         pcVar3 = *(char**)( lVar9 + 8 );
         local_170 = 0;
         if (pcVar3 == (char*)0x0) {
            if (*(long*)( lVar9 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_170, (CowData*)( lVar9 + 0x10 ));
            }
         } else {
            local_160 = strlen(pcVar3);
            local_168 = pcVar3;
            String::parse_latin1((StrRange*)&local_170);
         }
      }
      Variant::Variant((Variant*)&local_58, (String*)&local_170);
      Array::push_back((Variant*)local_1c0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
      lVar9 = *(long*)( in_RDX + 0x1a0 );
   }
   Variant::Variant((Variant*)&local_58, local_1c0);
   Variant::Variant((Variant*)local_78, "extends_class");
   pVVar6 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar6 != (Variant*)&local_58) {
      if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)pVVar6 = 0;
      *(int*)pVVar6 = (int)local_58;
      *(undefined8*)( pVVar6 + 8 ) = local_50._0_8_;
      *(undefined8*)( pVVar6 + 0x10 ) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
   }
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   local_168 = (char*)0x0;
   if (*(long*)( in_RDX + 400 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_258, (CowData*)( in_RDX + 400 ));
   }
   Variant::Variant((Variant*)&local_58, local_258);
   Variant::Variant((Variant*)local_78, "extends_file");
   pVVar6 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar6 != (Variant*)&local_58) {
      if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)pVVar6 = 0;
      *(int*)pVVar6 = (int)local_58;
      *(undefined8*)( pVVar6 + 8 ) = local_50._0_8_;
      *(undefined8*)( pVVar6 + 0x10 ) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
   }
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)local_258);
   local_168 = (char*)0x0;
   if (*(long*)( in_RDX + 0x130 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_258, (CowData*)( in_RDX + 0x130 ));
   }
   Variant::Variant((Variant*)&local_58, local_258);
   Variant::Variant((Variant*)local_78, "icon");
   pVVar6 = (Variant*)Dictionary::operator []((Variant*)param_1);
   if (pVVar6 != (Variant*)&local_58) {
      if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)pVVar6 = 0;
      *(int*)pVVar6 = (int)local_58;
      *(undefined8*)( pVVar6 + 8 ) = local_50._0_8_;
      *(undefined8*)( pVVar6 + 0x10 ) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
   }
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)local_258);
   local_168 = "";
   local_170 = 0;
   local_160 = 0;
   String::parse_latin1((StrRange*)&local_170);
   iVar10 = *(int*)( in_RDX + 0xc ) + -1;
   if (iVar10 < 1) {
      pEVar7 = in_RSI + 0xa40;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
      LAB_001055db:Variant::Variant((Variant*)&local_58, (String*)( pEVar7 + 8 ));
      Variant::Variant((Variant*)local_78, "signature");
      pVVar6 = (Variant*)Dictionary::operator []((Variant*)param_1);
      Variant::operator =(pVVar6, (Variant*)&local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }
      Variant::Variant((Variant*)&local_58, (String*)( pEVar7 + 0x10 ));
      Variant::Variant((Variant*)local_78, "description");
      pVVar6 = (Variant*)Dictionary::operator []((Variant*)param_1);
      Variant::operator =(pVVar6, (Variant*)&local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }
   } else {
      pEVar7 = (ExtendGDScriptParser*)search_symbol_defined_at_line(in_RSI, iVar10, (DocumentSymbol*)( in_RSI + 0xa40 ), (String*)&local_170);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
      if (pEVar7 != (ExtendGDScriptParser*)0x0) goto LAB_001055db;
   }
   local_208 = (DocumentSymbol*)( in_RSI + 0xa40 );
   Array::Array(local_1b8);
   Array::Array(local_1b0);
   Array::Array(local_1a8);
   Array::Array(local_1a0);
   Array::Array(local_198);
   Array::Array(local_190);
   lVar9 = *(long*)( in_RDX + 0x148 );
   if (lVar9 != 0) {
      local_228 = 0;
      local_230 = 0;
      do {
         if (*(long*)( lVar9 + -8 ) <= local_230) break;
         puVar1 = (undefined4*)( lVar9 + local_228 );
         switch (*puVar1) {
            case 1:
        dump_class_api((ClassNode *)local_258);
        Variant::Variant((Variant *)&local_58,(Dictionary *)local_258);
        Array::push_back((Variant *)local_1b8);
        cVar2 = Variant::needs_deinit[(int)local_58];
        goto joined_r0x00105a51;
            case 2:
        Dictionary::Dictionary(local_178);
        Variant::Variant((Variant *)&local_58,
                         (StringName *)(*(long *)(*(long *)(puVar1 + 2) + 0x128) + 0x148));
        Variant::Variant((Variant *)local_78,"name");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_178);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_248 = local_178;
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        lVar9 = *(long *)(*(long *)(puVar1 + 2) + 0x130);
        Variant::Variant((Variant *)&local_58,"value");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_248);
        Variant::operator=(pVVar6,(Variant *)(lVar9 + 0x130));
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        pcVar4 = *(code **)**(undefined8 **)(puVar1 + 2);
        if (pcVar4 == GDScriptParser::Node::get_datatype) {
          GDScriptParser::DataType::DataType
                    ((DataType *)local_258,(DataType *)(*(undefined8 **)(puVar1 + 2) + 7));
        }
        else {
          (*pcVar4)(local_258);
        }
        GDScriptParser::DataType::to_string();
        Variant::Variant((Variant *)&local_58,(String *)&local_170);
        Variant::Variant((Variant *)local_78,"data_type");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_248);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
        GDScriptParser::DataType::~DataType((DataType *)local_258);
        local_168 = "";
        local_170 = 0;
        local_160 = 0;
        String::parse_latin1((StrRange *)&local_170);
        iVar10 = *(int *)(*(long *)(puVar1 + 2) + 0xc) + -1;
        if (iVar10 < 1) goto LAB_00105343;
LAB_001048f2:
        pDVar8 = (DocumentSymbol *)
                 search_symbol_defined_at_line(in_RSI,iVar10,local_208,(String *)&local_170);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
        if (pDVar8 != (DocumentSymbol *)0x0) goto LAB_00105350;
        goto LAB_00104918;
            case 3:
        if (*(char *)(*(long *)(puVar1 + 2) + 0x180) == '\0') {
          dump_function_api((FunctionNode *)local_258);
          Variant::Variant((Variant *)&local_58,(Dictionary *)local_258);
          Array::push_back((Variant *)local_198);
          cVar2 = Variant::needs_deinit[(int)local_58];
        }
        else {
          dump_function_api((FunctionNode *)local_258);
          Variant::Variant((Variant *)&local_58,(Dictionary *)local_258);
          Array::push_back((Variant *)local_190);
          cVar2 = Variant::needs_deinit[(int)local_58];
        }
joined_r0x00105a51:
        if (cVar2 != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary((Dictionary *)local_258);
        lVar9 = *(long *)(in_RDX + 0x148);
        break;
            case 4:
        Dictionary::Dictionary((Dictionary *)&local_180);
        Variant::Variant((Variant *)&local_58,
                         (StringName *)(*(long *)(*(long *)(puVar1 + 2) + 0x128) + 0x148));
        Variant::Variant((Variant *)local_78,"name");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_180);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Array::Array((Array *)local_178);
        lVar9 = *(long *)(*(long *)(puVar1 + 2) + 0x138);
        for (lVar12 = 0; (lVar9 != 0 && (lVar12 < *(long *)(lVar9 + -8))); lVar12 = lVar12 + 1) {
          lVar9 = *(long *)(*(long *)(*(long *)(lVar9 + lVar12 * 8) + 0x128) + 0x148);
          if (lVar9 == 0) {
            local_170 = 0;
          }
          else {
            pcVar3 = *(char **)(lVar9 + 8);
            local_170 = 0;
            if (pcVar3 == (char *)0x0) {
              if (*(long *)(lVar9 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_170,(CowData *)(lVar9 + 0x10));
              }
            }
            else {
              local_160 = strlen(pcVar3);
              local_168 = pcVar3;
              String::parse_latin1((StrRange *)&local_170);
            }
          }
          Variant::Variant((Variant *)&local_58,(String *)&local_170);
          Array::push_back((Variant *)local_178);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
          lVar9 = *(long *)(*(long *)(puVar1 + 2) + 0x138);
        }
        Variant::Variant((Variant *)&local_58,(Array *)local_178);
        Variant::Variant((Variant *)local_78,"arguments");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_180);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        local_170 = 0;
        local_168 = "";
        local_160 = 0;
        String::parse_latin1((StrRange *)&local_170);
        iVar10 = *(int *)(*(long *)(puVar1 + 2) + 0xc) + -1;
        if (iVar10 < 1) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
          pDVar8 = local_208;
LAB_001058dd:
          Variant::Variant((Variant *)&local_58,(String *)(pDVar8 + 8));
          Variant::Variant((Variant *)local_78,"signature");
          pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_180);
          Variant::operator=(pVVar6,(Variant *)&local_58);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_58,(String *)(pDVar8 + 0x10));
          Variant::Variant((Variant *)local_78,"description");
          pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_180);
          Variant::operator=(pVVar6,(Variant *)&local_58);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          pDVar8 = (DocumentSymbol *)
                   search_symbol_defined_at_line(in_RSI,iVar10,local_208,(String *)&local_170);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
          if (pDVar8 != (DocumentSymbol *)0x0) goto LAB_001058dd;
        }
        Variant::Variant((Variant *)&local_58,(Dictionary *)&local_180);
        Array::push_back((Variant *)local_1a0);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Array::~Array((Array *)local_178);
        Dictionary::~Dictionary((Dictionary *)&local_180);
        lVar9 = *(long *)(in_RDX + 0x148);
        break;
            case 5:
        Dictionary::Dictionary(local_188);
        Variant::Variant((Variant *)&local_58,
                         (StringName *)(*(long *)(*(long *)(puVar1 + 2) + 0x128) + 0x148));
        Variant::Variant((Variant *)local_78,"name");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_188);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        pcVar4 = *(code **)**(undefined8 **)(puVar1 + 2);
        if (pcVar4 == GDScriptParser::Node::get_datatype) {
          GDScriptParser::DataType::DataType
                    ((DataType *)local_258,(DataType *)(*(undefined8 **)(puVar1 + 2) + 7));
        }
        else {
          (*pcVar4)(local_258);
        }
        GDScriptParser::DataType::to_string();
        Variant::Variant((Variant *)&local_58,(String *)&local_170);
        Variant::Variant((Variant *)local_78,"data_type");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_188);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
        GDScriptParser::DataType::~DataType((DataType *)local_258);
        if (*(long *)(*(long *)(puVar1 + 2) + 0x130) == 0) {
          local_58 = 0;
          local_50 = (undefined1  [16])0x0;
        }
        else {
          Variant::Variant((Variant *)&local_58,
                           (Variant *)(*(long *)(*(long *)(puVar1 + 2) + 0x130) + 0x130));
        }
        Variant::Variant((Variant *)local_78,"default_value");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_188);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        if (*(long *)(*(long *)(puVar1 + 2) + 0x150) == 0) {
          local_168 = (char *)0x0;
          bVar5 = false;
        }
        else {
          local_170 = 0;
          String::parse_latin1((String *)&local_170,"_setter");
          lVar9 = *(long *)(*(long *)(*(long *)(puVar1 + 2) + 0x128) + 0x148);
          if (lVar9 == 0) {
            local_180 = 0;
          }
          else {
            local_180 = 0;
            if (*(char **)(lVar9 + 8) == (char *)0x0) {
              if (*(long *)(lVar9 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_180,(CowData *)(lVar9 + 0x10));
              }
            }
            else {
              String::parse_latin1((String *)&local_180,*(char **)(lVar9 + 8));
            }
          }
          operator+((char *)local_178,(String *)&_LC72);
          bVar5 = true;
          String::operator+(local_258,(String *)local_178);
        }
        Variant::Variant((Variant *)&local_58,local_258);
        Variant::Variant((Variant *)local_78,"setter");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_188);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_258);
        if (bVar5) {
          CowData<char32_t>::_unref((CowData<char32_t> *)local_178);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
        }
        if (*(long *)(*(long *)(puVar1 + 2) + 0x160) == 0) {
          local_168 = (char *)0x0;
          bVar5 = false;
        }
        else {
          local_170 = 0;
          String::parse_latin1((String *)&local_170,"_getter");
          lVar9 = *(long *)(*(long *)(*(long *)(puVar1 + 2) + 0x128) + 0x148);
          if (lVar9 == 0) {
            local_180 = 0;
          }
          else {
            local_180 = 0;
            if (*(char **)(lVar9 + 8) == (char *)0x0) {
              if (*(long *)(lVar9 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_180,(CowData *)(lVar9 + 0x10));
              }
            }
            else {
              String::parse_latin1((String *)&local_180,*(char **)(lVar9 + 8));
            }
          }
          operator+((char *)local_178,(String *)&_LC72);
          bVar5 = true;
          String::operator+(local_258,(String *)local_178);
        }
        Variant::Variant((Variant *)&local_58,local_258);
        Variant::Variant((Variant *)local_78,"getter");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_188);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_258);
        if (bVar5) {
          CowData<char32_t>::_unref((CowData<char32_t> *)local_178);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
        }
        Variant::Variant((Variant *)&local_58,*(bool *)(*(long *)(puVar1 + 2) + 0x168));
        Variant::Variant((Variant *)local_78,"export");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_188);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        local_170 = 0;
        local_168 = "";
        local_160 = 0;
        String::parse_latin1((StrRange *)&local_170);
        iVar10 = *(int *)(*(long *)(puVar1 + 2) + 0xc) + -1;
        if (iVar10 < 1) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
          pDVar8 = local_208;
LAB_00105d3d:
          Variant::Variant((Variant *)&local_58,(String *)(pDVar8 + 8));
          Variant::Variant((Variant *)local_78,"signature");
          pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_188);
          Variant::operator=(pVVar6,(Variant *)&local_58);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_58,(String *)(pDVar8 + 0x10));
          Variant::Variant((Variant *)local_78,"description");
          pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_188);
          Variant::operator=(pVVar6,(Variant *)&local_58);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          pDVar8 = (DocumentSymbol *)
                   search_symbol_defined_at_line(in_RSI,iVar10,local_208,(String *)&local_170);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
          if (pDVar8 != (DocumentSymbol *)0x0) goto LAB_00105d3d;
        }
        Variant::Variant((Variant *)&local_58,local_188);
        Array::push_back((Variant *)local_1a8);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary(local_188);
        lVar9 = *(long *)(in_RDX + 0x148);
        break;
            case 6:
        Dictionary::Dictionary((Dictionary *)&local_180);
        lVar9 = *(long *)(*(long *)(puVar1 + 2) + 0x138);
        for (lVar12 = 0; (lVar9 != 0 && (lVar12 < *(long *)(lVar9 + -8))); lVar12 = lVar12 + 1) {
          Variant::Variant((Variant *)&local_58,*(long *)(lVar9 + 0x20 + lVar12 * 0x60));
          lVar9 = *(long *)(*(long *)(puVar1 + 2) + 0x138);
          if (lVar9 == 0) {
            lVar11 = 0;
LAB_001059b6:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar11,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar11 = *(long *)(lVar9 + -8);
          if (lVar11 <= lVar12) goto LAB_001059b6;
          Variant::Variant((Variant *)local_78,
                           (StringName *)(*(long *)(lVar9 + lVar12 * 0x60) + 0x148));
          pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_180);
          if (pVVar6 != (Variant *)&local_58) {
            if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar6 = 0;
            *(int *)pVVar6 = (int)local_58;
            *(undefined8 *)(pVVar6 + 8) = local_50._0_8_;
            *(undefined8 *)(pVVar6 + 0x10) = local_50._8_8_;
            local_58 = local_58 & 0xffffffff00000000;
          }
          if (Variant::needs_deinit[local_78[0]] == '\0') {
            cVar2 = Variant::needs_deinit[(int)local_58];
          }
          else {
            Variant::_clear_internal();
            cVar2 = Variant::needs_deinit[(int)local_58];
          }
          if (cVar2 != '\0') {
            Variant::_clear_internal();
          }
          lVar9 = *(long *)(*(long *)(puVar1 + 2) + 0x138);
        }
        Dictionary::Dictionary(local_178);
        Variant::Variant((Variant *)&local_58,
                         (StringName *)(*(long *)(*(long *)(puVar1 + 2) + 0x128) + 0x148));
        Variant::Variant((Variant *)local_78,"name");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_178);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_58,(Dictionary *)&local_180);
        Variant::Variant((Variant *)local_78,"value");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_178);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        GDScriptParser::ClassNode::Member::get_datatype();
        GDScriptParser::DataType::to_string();
        Variant::Variant((Variant *)&local_58,(String *)&local_170);
        Variant::Variant((Variant *)local_78,"data_type");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_178);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
        GDScriptParser::DataType::~DataType((DataType *)local_258);
        local_168 = (char *)0x0;
        String::parse_latin1(local_258,"");
        iVar10 = *(int *)(*(long *)(puVar1 + 2) + 0xc) + -1;
        if (iVar10 < 1) {
          CowData<char32_t>::_unref((CowData<char32_t> *)local_258);
          pDVar8 = local_208;
LAB_00105e15:
          Variant::Variant((Variant *)&local_58,(String *)(pDVar8 + 8));
          Variant::Variant((Variant *)local_78,"signature");
          pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_178);
          Variant::operator=(pVVar6,(Variant *)&local_58);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_58,(String *)(pDVar8 + 0x10));
          Variant::Variant((Variant *)local_78,"description");
          pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_178);
          Variant::operator=(pVVar6,(Variant *)&local_58);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          pDVar8 = (DocumentSymbol *)
                   search_symbol_defined_at_line(in_RSI,iVar10,local_208,local_258);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_258);
          if (pDVar8 != (DocumentSymbol *)0x0) goto LAB_00105e15;
        }
        Variant::Variant((Variant *)&local_58,local_178);
        Array::push_back((Variant *)local_1b0);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary(local_178);
        Dictionary::~Dictionary((Dictionary *)&local_180);
        lVar9 = *(long *)(in_RDX + 0x148);
        break;
            case 7:
        Dictionary::Dictionary(local_178);
        Variant::Variant((Variant *)&local_58,(StringName *)(*(long *)(puVar1 + 4) + 0x148));
        Variant::Variant((Variant *)local_78,"name");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_178);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_58,*(long *)(puVar1 + 0xc));
        Variant::Variant((Variant *)local_78,"value");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_178);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        GDScriptParser::ClassNode::Member::get_datatype();
        GDScriptParser::DataType::to_string();
        Variant::Variant((Variant *)&local_58,(String *)&local_170);
        Variant::Variant((Variant *)local_78,"data_type");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_178);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
        GDScriptParser::DataType::~DataType((DataType *)local_258);
        local_170 = 0;
        local_168 = "";
        local_160 = 0;
        String::parse_latin1((StrRange *)&local_170);
        iVar10 = puVar1[0xe] + -1;
        if (0 < iVar10) goto LAB_001048f2;
LAB_00105343:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
        pDVar8 = local_208;
LAB_00105350:
        local_248 = local_178;
        Variant::Variant((Variant *)&local_58,(String *)(pDVar8 + 8));
        Variant::Variant((Variant *)local_78,"signature");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_248);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_58,(String *)(pDVar8 + 0x10));
        Variant::Variant((Variant *)local_78,"description");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_248);
        Variant::operator=(pVVar6,(Variant *)&local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
LAB_00104918:
        local_248 = local_178;
        Variant::Variant((Variant *)&local_58,local_248);
        Array::push_back((Variant *)local_1b0);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary(local_248);
        lVar9 = *(long *)(in_RDX + 0x148);
         }
         local_230 = local_230 + 1;
         local_228 = local_228 + 0x70;
      } while ( lVar9 != 0 );
   }
   Variant::Variant((Variant*)&local_58, local_1b8);
   Variant::Variant((Variant*)local_78, "sub_classes");
   pVVar6 = (Variant*)Dictionary::operator []((Variant*)param_1);
   Variant::operator =(pVVar6, (Variant*)&local_58);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   Variant::Variant((Variant*)&local_58, local_1b0);
   Variant::Variant((Variant*)local_78, "constants");
   pVVar6 = (Variant*)Dictionary::operator []((Variant*)param_1);
   Variant::operator =(pVVar6, (Variant*)&local_58);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   Variant::Variant((Variant*)&local_58, local_1a8);
   Variant::Variant((Variant*)local_78, "members");
   pVVar6 = (Variant*)Dictionary::operator []((Variant*)param_1);
   Variant::operator =(pVVar6, (Variant*)&local_58);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   Variant::Variant((Variant*)&local_58, local_1a0);
   Variant::Variant((Variant*)local_78, "signals");
   pVVar6 = (Variant*)Dictionary::operator []((Variant*)param_1);
   Variant::operator =(pVVar6, (Variant*)&local_58);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   Variant::Variant((Variant*)&local_58, local_198);
   Variant::Variant((Variant*)local_78, "methods");
   pVVar6 = (Variant*)Dictionary::operator []((Variant*)param_1);
   Variant::operator =(pVVar6, (Variant*)&local_58);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   Variant::Variant((Variant*)&local_58, local_190);
   Variant::Variant((Variant*)local_78, "static_functions");
   pVVar6 = (Variant*)Dictionary::operator []((Variant*)param_1);
   Variant::operator =(pVVar6, (Variant*)&local_58);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   Array::~Array(local_190);
   Array::~Array(local_198);
   Array::~Array(local_1a0);
   Array::~Array(local_1a8);
   Array::~Array(local_1b0);
   Array::~Array(local_1b8);
   Array::~Array(local_1c0);
   LAB_00104bec:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ExtendGDScriptParser::generate_api() const */void ExtendGDScriptParser::generate_api(void) {
   long in_RSI;
   Dictionary *in_RDI;
   long in_FS_OFFSET;
   ClassNode aCStack_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(in_RDI);
   if (*(long*)( in_RSI + 0x50 ) != 0) {
      dump_class_api(aCStack_28);
      Dictionary::operator =(in_RDI, (Dictionary*)aCStack_28);
      Dictionary::~Dictionary((Dictionary*)aCStack_28);
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* CowData<GDScriptParser::EnumNode::Value>::_copy_on_write() [clone .isra.0] */void CowData<GDScriptParser::EnumNode::Value>::_copy_on_write(CowData<GDScriptParser::EnumNode::Value> *this) {
   undefined1 uVar1;
   undefined4 uVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   long lVar10;
   ulong uVar11;
   undefined8 *puVar12;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }
   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }
   lVar3 = *(long*)( *(long*)this + -8 );
   uVar11 = 0x10;
   if (lVar3 * 0x60 != 0) {
      uVar11 = lVar3 * 0x60 - 1;
      uVar11 = uVar11 | uVar11 >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      uVar11 = ( uVar11 | uVar11 >> 0x20 ) + 0x11;
   }
   puVar8 = (undefined8*)Memory::alloc_static(uVar11, false);
   if (puVar8 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }
   lVar10 = 0;
   *puVar8 = 1;
   puVar8[1] = lVar3;
   puVar12 = puVar8 + 2;
   if (lVar3 != 0) {
      do {
         puVar9 = (undefined8*)( (long)puVar12 + *(long*)this + ( -0x10 - (long)puVar8 ) );
         uVar6 = *puVar9;
         uVar7 = puVar9[1];
         puVar12[2] = puVar9[2];
         uVar2 = *(undefined4*)( puVar9 + 3 );
         *puVar12 = uVar6;
         puVar12[1] = uVar7;
         *(undefined4*)( puVar12 + 3 ) = uVar2;
         *(undefined1*)( (long)puVar12 + 0x1c ) = *(undefined1*)( (long)puVar9 + 0x1c );
         puVar12[4] = puVar9[4];
         puVar12[5] = puVar9[5];
         uVar2 = *(undefined4*)( puVar9 + 6 );
         puVar12[7] = 0;
         lVar4 = puVar9[7];
         *(undefined4*)( puVar12 + 6 ) = uVar2;
         if (lVar4 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar12 + 7 ), (CowData*)( puVar9 + 7 ));
         }
         uVar1 = *(undefined1*)( puVar9 + 8 );
         puVar12[9] = 0;
         lVar4 = puVar9[9];
         *(undefined1*)( puVar12 + 8 ) = uVar1;
         if (lVar4 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar12 + 9 ), (CowData*)( puVar9 + 9 ));
         }
         uVar1 = *(undefined1*)( puVar9 + 10 );
         puVar12[0xb] = 0;
         lVar4 = puVar9[0xb];
         *(undefined1*)( puVar12 + 10 ) = uVar1;
         if (lVar4 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar12 + 0xb ), (CowData*)( puVar9 + 0xb ));
         }
         lVar10 = lVar10 + 1;
         puVar12 = puVar12 + 0xc;
      } while ( lVar3 != lVar10 );
   }
   _unref(this);
   *(undefined8**)this = puVar8 + 2;
   return;
}/* CowData<lsp::DiagnosticRelatedInformation>::_ref(CowData<lsp::DiagnosticRelatedInformation>
   const&) [clone .part.0] */void CowData<lsp::DiagnosticRelatedInformation>::_ref(CowData<lsp::DiagnosticRelatedInformation> *this, CowData *param_1) {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* CowData<lsp::DocumentSymbol>::_ref(CowData<lsp::DocumentSymbol> const&) [clone .part.0] */void CowData<lsp::DocumentSymbol>::_ref(CowData<lsp::DocumentSymbol> *this, CowData *param_1) {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* CowData<lsp::DocumentSymbol>::_copy_on_write() [clone .isra.0] */void CowData<lsp::DocumentSymbol>::_copy_on_write(CowData<lsp::DocumentSymbol> *this) {
   undefined2 uVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 *puVar9;
   CowData *pCVar10;
   ulong uVar11;
   long lVar12;
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
   uVar11 = 0x10;
   if (lVar2 * 0x68 != 0) {
      uVar11 = lVar2 * 0x68 - 1;
      uVar11 = uVar11 | uVar11 >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      uVar11 = ( uVar11 | uVar11 >> 0x20 ) + 0x11;
   }
   puVar9 = (undefined8*)Memory::alloc_static(uVar11, false);
   if (puVar9 != (undefined8*)0x0) {
      lVar12 = 0;
      *puVar9 = 1;
      puVar9[1] = lVar2;
      this_00 = (CowData<char32_t>*)( puVar9 + 2 );
      if (lVar2 != 0) {
         do {
            pCVar10 = (CowData*)( this_00 + *(long*)this + ( -0x10 - (long)puVar9 ) );
            *(undefined8*)this_00 = 0;
            if (*(long*)pCVar10 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar10);
            }
            for (int i = 0; i < 3; i++) {
               *(undefined8*)( this_00 + ( 8*i + 8 ) ) = 0;
               if (*(long*)( pCVar10 + ( 8*i + 8 ) ) != 0) {
                  CowData<char32_t>::_ref(this_00 + ( 8*i + 8 ), pCVar10 + ( 8*i + 8 ));
               }
            }
            uVar5 = *(undefined8*)( pCVar10 + 0x28 );
            uVar6 = *(undefined8*)( pCVar10 + 0x30 );
            uVar7 = *(undefined8*)( pCVar10 + 0x38 );
            uVar8 = *(undefined8*)( pCVar10 + 0x40 );
            *(undefined4*)( this_00 + 0x20 ) = *(undefined4*)( pCVar10 + 0x20 );
            uVar1 = *(undefined2*)( pCVar10 + 0x24 );
            *(undefined8*)( this_00 + 0x48 ) = 0;
            lVar3 = *(long*)( pCVar10 + 0x48 );
            *(undefined2*)( this_00 + 0x24 ) = uVar1;
            *(undefined8*)( this_00 + 0x28 ) = uVar5;
            *(undefined8*)( this_00 + 0x30 ) = uVar6;
            *(undefined8*)( this_00 + 0x38 ) = uVar7;
            *(undefined8*)( this_00 + 0x40 ) = uVar8;
            if (lVar3 != 0) {
               CowData<char32_t>::_ref(this_00 + 0x48, pCVar10 + 0x48);
            }
            *(undefined8*)( this_00 + 0x50 ) = 0;
            if (*(long*)( pCVar10 + 0x50 ) != 0) {
               CowData<char32_t>::_ref(this_00 + 0x50, pCVar10 + 0x50);
            }
            *(undefined8*)( this_00 + 0x60 ) = 0;
            if (*(long*)( pCVar10 + 0x60 ) != 0) {
               _ref((CowData<lsp::DocumentSymbol>*)( this_00 + 0x60 ), pCVar10 + 0x60);
            }
            lVar12 = lVar12 + 1;
            this_00 = this_00 + 0x68;
         } while ( lVar2 != lVar12 );
      }
      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar9 + 2 );
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* CowData<lsp::Diagnostic>::_copy_on_write() [clone .isra.0] */void CowData<lsp::Diagnostic>::_copy_on_write(CowData<lsp::Diagnostic> *this) {
   long lVar1;
   undefined8 uVar2;
   long lVar3;
   code *pcVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   CowData<lsp::DiagnosticRelatedInformation> *pCVar8;
   long lVar9;
   ulong uVar10;
   CowData<lsp::DiagnosticRelatedInformation> *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }
   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   lVar1 = *(long*)( *(long*)this + -8 );
   uVar10 = 0x10;
   if (lVar1 * 0x38 != 0) {
      uVar10 = lVar1 * 0x38 - 1;
      uVar10 = uVar10 | uVar10 >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      uVar10 = ( uVar10 | uVar10 >> 0x20 ) + 0x11;
   }
   puVar7 = (undefined8*)Memory::alloc_static(uVar10, false);
   if (puVar7 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }
   this_00 = (CowData<lsp::DiagnosticRelatedInformation>*)( puVar7 + 8 );
   lVar9 = 0;
   *puVar7 = 1;
   puVar7[1] = lVar1;
   if (lVar1 != 0) {
      do {
         pCVar8 = this_00 + *(long*)this + ( -0x40 - (long)puVar7 );
         uVar5 = *(undefined8*)pCVar8;
         uVar6 = *(undefined8*)( pCVar8 + 8 );
         uVar2 = *(undefined8*)( pCVar8 + 0x10 );
         *(undefined8*)( this_00 + -0x18 ) = 0;
         lVar3 = *(long*)( pCVar8 + 0x18 );
         *(undefined8*)( this_00 + -0x20 ) = uVar2;
         *(undefined8*)( this_00 + -0x30 ) = uVar5;
         *(undefined8*)( this_00 + -0x28 ) = uVar6;
         if (lVar3 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( this_00 + -0x18 ), (CowData*)( pCVar8 + 0x18 ));
         }
         *(undefined8*)( this_00 + -0x10 ) = 0;
         if (*(long*)( pCVar8 + 0x20 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( this_00 + -0x10 ), (CowData*)( pCVar8 + 0x20 ));
         }
         *(undefined8*)this_00 = 0;
         if (*(long*)( pCVar8 + 0x30 ) != 0) {
            CowData<lsp::DiagnosticRelatedInformation>::_ref(this_00, (CowData*)( pCVar8 + 0x30 ));
         }
         lVar9 = lVar9 + 1;
         this_00 = this_00 + 0x38;
      } while ( lVar1 != lVar9 );
   }
   _unref(this);
   *(undefined8**)this = puVar7 + 2;
   return;
}/* Vector<lsp::Diagnostic>::push_back(lsp::Diagnostic) [clone .isra.0] */void Vector<lsp::Diagnostic>::push_back(Vector<lsp::Diagnostic> *this, undefined8 *param_2) {
   undefined8 *puVar1;
   undefined8 uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   if (*(long*)( this + 8 ) == 0) {
      lVar4 = 1;
   } else {
      lVar4 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }
   iVar3 = CowData<lsp::Diagnostic>::resize<false>((CowData<lsp::Diagnostic>*)( this + 8 ), lVar4);
   if (iVar3 != 0) {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }
   if (*(long*)( this + 8 ) == 0) {
      lVar5 = -1;
      lVar4 = 0;
   } else {
      lVar4 = *(long*)( *(long*)( this + 8 ) + -8 );
      lVar5 = lVar4 + -1;
      if (-1 < lVar5) {
         CowData<lsp::Diagnostic>::_copy_on_write((CowData<lsp::Diagnostic>*)( this + 8 ));
         uVar2 = param_2[1];
         puVar1 = (undefined8*)( *(long*)( this + 8 ) + lVar5 * 0x38 );
         *puVar1 = *param_2;
         puVar1[1] = uVar2;
         puVar1[2] = param_2[2];
         if (puVar1[3] != param_2[3]) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 3 ), (CowData*)( param_2 + 3 ));
         }
         if (puVar1[4] != param_2[4]) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 4 ), (CowData*)( param_2 + 4 ));
         }
         if (puVar1[6] == param_2[6]) {
            return;
         }
         CowData<lsp::DiagnosticRelatedInformation>::_ref((CowData<lsp::DiagnosticRelatedInformation>*)( puVar1 + 6 ), (CowData*)( param_2 + 6 ));
         return;
      }
   }
   _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar5, lVar4, "p_index", "size()", "", false, false);
   return;
}/* ExtendGDScriptParser::update_diagnostics() */void ExtendGDScriptParser::update_diagnostics(ExtendGDScriptParser *this) {
   long *plVar1;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   long lVar5;
   int iVar6;
   long lVar7;
   int iVar8;
   bool bVar9;
   long lVar10;
   int iVar11;
   ulong *puVar12;
   undefined4 *puVar13;
   long in_FS_OFFSET;
   bool bVar14;
   char *pcVar15;
   undefined8 uVar16;
   CowData<lsp::DiagnosticRelatedInformation> *local_f8;
   CowData<lsp::DiagnosticRelatedInformation> *local_f0;
   CowData<char32_t> local_e8[8];
   CowData<char32_t> local_e0[8];
   undefined8 local_d8;
   String local_d0[8];
   CowData<char32_t> local_c8[8];
   long local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined1 local_a0[24];
   long local_88[2];
   char *local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   long local_60;
   long local_58[2];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0xab0 ) != 0 ) && ( *(long*)( *(long*)( this + 0xab0 ) + -8 ) != 0 )) {
      CowData<lsp::Diagnostic>::_unref((CowData<lsp::Diagnostic>*)( this + 0xab0 ));
   }
   if (( *(long**)( this + 0x60 ) != (long*)0x0 ) && ( puVar12 = (ulong*)**(long**)( this + 0x60 ) ),puVar12 != (ulong*)0x0) {
      do {
         local_88[0] = 0;
         local_a0._0_16_ = (undefined1[16])0x0;
         local_a8 = _LC93;
         local_b8 = (undefined1[16])0x0;
         plVar1 = (long*)( *puVar12 - 0x10 );
         if (*puVar12 != 0) {
            do {
               lVar10 = *plVar1;
               if (lVar10 == 0) goto LAB_00106ddb;
               LOCK();
               lVar7 = *plVar1;
               bVar14 = lVar10 == lVar7;
               if (bVar14) {
                  *plVar1 = lVar10 + 1;
                  lVar7 = lVar10;
               }
               UNLOCK();
            } while ( !bVar14 );
            if (lVar7 != -1) {
               auVar4._8_8_ = 0;
               auVar4._0_8_ = *puVar12;
               local_a0._0_16_ = auVar4 << 0x40;
            }
         }
         LAB_00106ddb:uStack_70 = 8;
         local_78 = "gdscript";
         String::parse_latin1((StrRange*)local_a0);
         local_a8 = CONCAT44(0xffffffff, (undefined4)local_a8);
         local_c0 = 0;
         if (*(long*)( this + 0xa38 ) == 0) {
            LAB_00107528:lVar10 = 0;
            lVar7 = ( ulong )((int)puVar12[1] < 1) - 1;
            goto LAB_00107555;
         }
         plVar1 = (long*)( *(long*)( this + 0xa38 ) + -0x10 );
         do {
            lVar10 = *plVar1;
            if (lVar10 == 0) goto LAB_00106e5c;
            LOCK();
            lVar7 = *plVar1;
            bVar14 = lVar10 == lVar7;
            if (bVar14) {
               *plVar1 = lVar10 + 1;
               lVar7 = lVar10;
            }
            UNLOCK();
         } while ( !bVar14 );
         if (lVar7 != -1) {
            local_c0 = *(long*)( this + 0xa38 );
         }
         LAB_00106e5c:if (local_c0 == 0) goto LAB_00107528;
         lVar10 = *(long*)( local_c0 + -8 );
         if ((int)puVar12[1] < 1) {
            iVar6 = 0;
            lVar7 = 0;
         } else {
            lVar5 = (long)( (int)puVar12[1] + -1 );
            lVar7 = lVar10 + -1;
            if (lVar5 < lVar10 + -1) {
               lVar7 = lVar5;
            }
            iVar6 = (int)lVar7;
            lVar7 = (long)iVar6;
            if (lVar7 < 0) goto LAB_00107555;
         }
         if (lVar10 <= lVar7) goto LAB_00107555;
         plVar1 = (long*)( local_c0 + (long)iVar6 * 8 );
         lVar10 = *plVar1;
         if (lVar10 == 0) {
            iVar8 = 0;
         } else {
            iVar8 = (int)*(undefined8*)( lVar10 + -8 );
            iVar8 = iVar8 + -1 + ( uint )(iVar8 == 0);
         }
         bVar14 = SUB81(plVar1, 0);
         String::strip_edges(SUB81(&local_78, 0), bVar14);
         pcVar15 = local_78;
         if (local_78 != (char*)0x0) {
            if ((int)*(undefined8*)( local_78 + -8 ) != 0) {
               iVar8 = iVar8 - ( (int)*(undefined8*)( local_78 + -8 ) + -1 );
            }
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = (char*)0x0;
               Memory::free_static(pcVar15 + -0x10, false);
            }
         }
         String::strip_edges(SUB81(&local_78, 0), bVar14);
         pcVar15 = local_78;
         if (local_78 == (char*)0x0) {
            iVar11 = 0;
         } else {
            iVar11 = (int)*(undefined8*)( local_78 + -8 ) + -1 + ( uint )((int)*(undefined8*)( local_78 + -8 ) == 0);
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = (char*)0x0;
               Memory::free_static(pcVar15 + -0x10, false);
            }
         }
         uStack_70 = CONCAT44(iVar11, iVar6);
         local_60 = 0;
         local_78 = (char*)CONCAT44(iVar8, iVar6);
         local_68 = local_a8;
         local_b8._8_8_ = uStack_70;
         local_b8._0_8_ = local_78;
         if (local_a0._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)local_a0);
         }
         local_58[0] = 0;
         if (local_a0._8_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)( local_a0 + 8 ));
         }
         local_48 = 0;
         if (local_88[0] != 0) {
            CowData<lsp::DiagnosticRelatedInformation>::_ref((CowData<lsp::DiagnosticRelatedInformation>*)&local_48, (CowData*)local_88);
         }
         Vector<lsp::Diagnostic>::push_back((Vector<lsp::Diagnostic>*)( this + 0xaa8 ));
         CowData<lsp::DiagnosticRelatedInformation>::_unref((CowData<lsp::DiagnosticRelatedInformation>*)&local_48);
         if (local_58[0] != 0) {
            LOCK();
            plVar1 = (long*)( local_58[0] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_58[0] + -0x10 ), false);
            }
         }
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_60 + -0x10 ), false);
            }
         }
         CowData<String>::_unref((CowData<String>*)&local_c0);
         CowData<lsp::DiagnosticRelatedInformation>::_unref((CowData<lsp::DiagnosticRelatedInformation>*)local_88);
         uVar16 = local_a0._8_8_;
         if (local_a0._8_8_ != 0) {
            LOCK();
            plVar1 = (long*)( local_a0._8_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0._8_8_ = 0;
               Memory::free_static((void*)( uVar16 + -0x10 ), false);
            }
         }
         uVar16 = local_a0._0_8_;
         if (local_a0._0_8_ != 0) {
            LOCK();
            plVar1 = (long*)( local_a0._0_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               auVar3._8_8_ = 0;
               auVar3._0_8_ = local_a0._8_8_;
               local_a0._0_16_ = auVar3 << 0x40;
               Memory::free_static((void*)( uVar16 + -0x10 ), false);
            }
         }
         puVar12 = (ulong*)puVar12[2];
      } while ( puVar12 != (ulong*)0x0 );
   }
   if (( *(undefined8**)( this + 0x70 ) != (undefined8*)0x0 ) && ( puVar13 = (undefined4*)**(undefined8**)( this + 0x70 ) ),puVar13 != (undefined4*)0x0) {
      do {
         local_b8 = (undefined1[16])0x0;
         local_a0._0_16_ = (undefined1[16])0x0;
         local_a8 = _LC44;
         local_88[0] = 0;
         GDScriptWarning::get_message();
         local_78 = "): ";
         local_d8 = 0;
         uStack_70 = 3;
         String::parse_latin1((StrRange*)&local_d8);
         GDScriptWarning::get_name();
         operator+((char *)
         local_e0,(String*)&_LC30;
         String::operator +(local_d0, (String*)local_e0);
         String::operator +((String*)&local_78, local_d0);
         if ((char*)local_a0._8_8_ != local_78) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_a0 + 8 ));
            pcVar15 = local_78;
            local_78 = (char*)0x0;
            local_a0._8_8_ = pcVar15;
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
         CowData<char32_t>::_unref(local_e0);
         CowData<char32_t>::_unref(local_e8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         CowData<char32_t>::_unref(local_c8);
         uStack_70 = 8;
         local_78 = "gdscript";
         String::parse_latin1((StrRange*)local_a0);
         lVar10 = *(long*)( this + 0xa38 );
         local_a8 = CONCAT44(*puVar13, (undefined4)local_a8);
         iVar6 = puVar13[1] + -1;
         lVar7 = (long)iVar6;
         if (iVar6 < 0) {
            if (lVar10 == 0) {
               LAB_00107600:lVar10 = 0;
            } else {
               LAB_001075d5:lVar10 = *(long*)( lVar10 + -8 );
            }
            LAB_00107555:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar10, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         if (lVar10 == 0) goto LAB_00107600;
         if (*(long*)( lVar10 + -8 ) <= lVar7) goto LAB_001075d5;
         plVar1 = (long*)( lVar10 + lVar7 * 8 );
         lVar10 = *plVar1;
         if (lVar10 == 0) {
            iVar8 = 0;
         } else {
            iVar8 = (int)*(undefined8*)( lVar10 + -8 );
            iVar8 = iVar8 + -1 + ( uint )(iVar8 == 0);
         }
         bVar14 = SUB81(plVar1, 0);
         bVar9 = SUB81((String*)&local_78, 0);
         String::strip_edges(bVar9, bVar14);
         if (( local_78 != (char*)0x0 ) && ( (int)*(undefined8*)( local_78 + -8 ) != 0 )) {
            iVar8 = iVar8 - ( (int)*(undefined8*)( local_78 + -8 ) + -1 );
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         String::strip_edges(bVar9, bVar14);
         if (local_78 == (char*)0x0) {
            iVar11 = 0;
         } else {
            iVar11 = (int)*(undefined8*)( local_78 + -8 ) + -1 + ( uint )((int)*(undefined8*)( local_78 + -8 ) == 0);
         }
         uVar16 = CONCAT44(iVar11, iVar6);
         pcVar15 = (char*)CONCAT44(iVar8, iVar6);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         local_60 = 0;
         local_68 = local_a8;
         local_b8._8_8_ = uVar16;
         local_b8._0_8_ = pcVar15;
         local_78 = pcVar15;
         uStack_70 = uVar16;
         if (local_a0._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)local_a0);
         }
         local_58[0] = 0;
         if (local_a0._8_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)( local_a0 + 8 ));
         }
         local_48 = 0;
         if (local_88[0] != 0) {
            CowData<lsp::DiagnosticRelatedInformation>::_ref((CowData<lsp::DiagnosticRelatedInformation>*)&local_48, (CowData*)local_88);
         }
         local_f0 = (CowData<lsp::DiagnosticRelatedInformation>*)local_88;
         local_f8 = (CowData<lsp::DiagnosticRelatedInformation>*)&local_48;
         Vector<lsp::Diagnostic>::push_back((Vector<lsp::Diagnostic>*)( this + 0xaa8 ), (String*)&local_78);
         CowData<lsp::DiagnosticRelatedInformation>::_unref(local_f8);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         CowData<lsp::DiagnosticRelatedInformation>::_unref(local_f0);
         CowData<char32_t>::_unref((CowData<char32_t>*)( local_a0 + 8 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
         puVar13 = *(undefined4**)( puVar13 + 10 );
      } while ( puVar13 != (undefined4*)0x0 );
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* Vector<lsp::DocumentSymbol>::push_back(lsp::DocumentSymbol) [clone .isra.0] */void Vector<lsp::DocumentSymbol>::push_back(Vector<lsp::DocumentSymbol> *this, CowData *param_2) {
   CowData<char32_t> *this_00;
   undefined2 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   if (*(long*)( this + 8 ) == 0) {
      lVar7 = 1;
   } else {
      lVar7 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }
   iVar6 = CowData<lsp::DocumentSymbol>::resize<false>((CowData<lsp::DocumentSymbol>*)( this + 8 ), lVar7);
   if (iVar6 != 0) {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }
   if (*(long*)( this + 8 ) == 0) {
      lVar8 = -1;
      lVar7 = 0;
   } else {
      lVar7 = *(long*)( *(long*)( this + 8 ) + -8 );
      lVar8 = lVar7 + -1;
      if (-1 < lVar8) {
         CowData<lsp::DocumentSymbol>::_copy_on_write((CowData<lsp::DocumentSymbol>*)( this + 8 ));
         this_00 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar8 * 0x68 );
         if (*(long*)this_00 != *(long*)param_2) {
            CowData<char32_t>::_ref(this_00, param_2);
         }
         for (int i = 0; i < 3; i++) {
            if (*(long*)( this_00 + ( 8*i + 8 ) ) != *(long*)( param_2 + ( 8*i + 8 ) )) {
               CowData<char32_t>::_ref(this_00 + ( 8*i + 8 ), param_2 + ( 8*i + 8 ));
            }
         }
         uVar2 = *(undefined8*)( param_2 + 0x28 );
         uVar3 = *(undefined8*)( param_2 + 0x30 );
         uVar4 = *(undefined8*)( param_2 + 0x38 );
         uVar5 = *(undefined8*)( param_2 + 0x40 );
         *(undefined4*)( this_00 + 0x20 ) = *(undefined4*)( param_2 + 0x20 );
         uVar1 = *(undefined2*)( param_2 + 0x24 );
         *(undefined8*)( this_00 + 0x28 ) = uVar2;
         *(undefined8*)( this_00 + 0x30 ) = uVar3;
         *(undefined2*)( this_00 + 0x24 ) = uVar1;
         lVar7 = *(long*)( param_2 + 0x48 );
         *(undefined8*)( this_00 + 0x38 ) = uVar4;
         *(undefined8*)( this_00 + 0x40 ) = uVar5;
         if (*(long*)( this_00 + 0x48 ) != lVar7) {
            CowData<char32_t>::_ref(this_00 + 0x48, param_2 + 0x48);
         }
         if (*(long*)( this_00 + 0x50 ) != *(long*)( param_2 + 0x50 )) {
            CowData<char32_t>::_ref(this_00 + 0x50, param_2 + 0x50);
         }
         if (*(long*)( this_00 + 0x60 ) == *(long*)( param_2 + 0x60 )) {
            return;
         }
         CowData<lsp::DocumentSymbol>::_ref((CowData<lsp::DocumentSymbol>*)( this_00 + 0x60 ), param_2 + 0x60);
         return;
      }
   }
   _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar8, lVar7, "p_index", "size()", "", false, false);
   return;
}/* ExtendGDScriptParser::parse_function_symbol(GDScriptParser::FunctionNode const*,
   lsp::DocumentSymbol&) */void ExtendGDScriptParser::parse_function_symbol(ExtendGDScriptParser *this, FunctionNode *param_1, DocumentSymbol *param_2) {
   StrRange *pSVar1;
   long *plVar2;
   undefined1(*pauVar3)[16];
   long lVar4;
   uint *puVar5;
   char *pcVar6;
   Node *pNVar7;
   Object *pOVar8;
   void *pvVar9;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined4 uVar17;
   char cVar18;
   int iVar19;
   uint uVar20;
   undefined4 *puVar21;
   undefined1(*pauVar23)[16];
   undefined8 *puVar24;
   undefined8 uVar25;
   long *plVar26;
   undefined1(*pauVar27)[16];
   long lVar28;
   long lVar29;
   uint uVar30;
   long lVar31;
   undefined8 *puVar32;
   undefined4 *puVar33;
   long in_FS_OFFSET;
   undefined1 auVar34[16];
   CowData<char32_t> *local_238;
   long local_1d8;
   undefined8 local_1d0;
   undefined1(*local_1c8)[16];
   CowData<char32_t> local_1c0[8];
   long local_1b8;
   undefined8 local_1b0;
   undefined1 local_1a8[16];
   undefined1 local_198[16];
   undefined4 local_188;
   undefined2 local_184;
   undefined1 local_180[16];
   undefined1 local_170[16];
   undefined1 local_160[16];
   Vector<lsp::DocumentSymbol> local_150[8];
   long local_148[2];
   undefined1 local_138[16];
   undefined1 local_128[16];
   undefined8 local_118;
   StringName local_110[16];
   undefined1 local_100[16];
   undefined1 local_f0[16];
   undefined8 local_e0;
   undefined1 local_d8[16];
   undefined8 local_c8;
   long local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined1(*local_a8)[16];
   long local_98;
   undefined8 local_90;
   long local_80;
   HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>> local_78[8];
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   ulong uVar22;
   local_1a8._8_8_ = local_1a8._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   get_uri((ExtendGDScriptParser*)&local_1d8);
   lVar28 = *(long*)( param_1 + 0x128 );
   if (lVar28 == 0) {
      StringName::StringName((StringName*)&local_1b8, "", false);
   } else {
      StringName::StringName((StringName*)&local_1b8, (StringName*)( lVar28 + 0x148 ));
   }
   local_238 = (CowData<char32_t>*)&local_1b8;
   if (local_1b8 != 0) {
      pcVar6 = *(char**)( local_1b8 + 8 );
      local_1a8._0_8_ = 0;
      if (pcVar6 != (char*)0x0) {
         local_138._8_8_ = strlen(pcVar6);
         local_138._0_8_ = pcVar6;
         String::parse_latin1((StrRange*)local_1a8);
         goto LAB_001078d1;
      }
      if (*(long*)( local_1b8 + 0x10 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)local_1a8, (CowData*)( local_1b8 + 0x10 ));
         goto LAB_001078d1;
      }
   }
   local_1a8._0_8_ = 0;
   LAB_001078d1:if (local_1a8._0_8_ != *(long*)param_2) {
      CowData<char32_t>::_unref((CowData<char32_t>*)param_2);
      uVar25 = local_1a8._0_8_;
      local_1a8._0_8_ = 0;
      *(undefined8*)param_2 = uVar25;
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);
   if (( StringName::configured != '\0' ) && ( local_1b8 != 0 )) {
      StringName::unref();
   }
   iVar19 = 0xc;
   if (param_1[0x180] == (FunctionNode)0x0) {
      iVar19 = ( -(uint)(*(long *)(param_1 + 0x210) == 0) & 0xfffffffa ) + 0xc;
   }
   *(int*)( param_2 + 0x20 ) = iVar19;
   pSVar1 = (StrRange*)( param_2 + 8 );
   local_138._8_8_ = 4;
   local_138._0_8_ = &_LC99;
   String::parse_latin1(pSVar1);
   if (lVar28 == 0) {
      String::operator +=((String*)pSVar1, "(");
      param_2[0x24] = (DocumentSymbol)0x0;
      auVar34 = range_of_node(this, (Node*)param_1);
      *(undefined1(*) [16])( param_2 + 0x28 ) = auVar34;
      *(long*)( param_2 + 0x40 ) = auVar34._0_8_;
      *(long*)( param_2 + 0x38 ) = auVar34._0_8_;
   } else {
      lVar28 = *(long*)( *(long*)( param_1 + 0x128 ) + 0x148 );
      if (lVar28 == 0) {
         local_1a8._0_8_ = 0;
      } else {
         local_1a8._0_8_ = 0;
         if (*(char**)( lVar28 + 8 ) == (char*)0x0) {
            if (*(long*)( lVar28 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)local_1a8, (CowData*)( lVar28 + 0x10 ));
            }
         } else {
            String::parse_latin1((String*)local_1a8, *(char**)( lVar28 + 8 ));
         }
      }
      operator+((char *)
      local_138,(String*)&_LC100;
      String::operator +=((String*)pSVar1, (String*)local_138);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_138);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);
      String::operator +=((String*)pSVar1, "(");
      param_2[0x24] = (DocumentSymbol)0x0;
      auVar34 = range_of_node(this, (Node*)param_1);
      pNVar7 = *(Node**)( param_1 + 0x128 );
      *(undefined1(*) [16])( param_2 + 0x28 ) = auVar34;
      auVar34 = range_of_node(this, pNVar7);
      *(undefined1(*) [16])( param_2 + 0x38 ) = auVar34;
   }
   if (*(long*)( param_2 + 0x10 ) != *(long*)( param_1 + 0x228 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_2 + 0x10 ), (CowData*)( param_1 + 0x228 ));
   }
   if (*(long*)( param_2 + 0x48 ) != local_1d8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_2 + 0x48 ), (CowData*)&local_1d8);
   }
   if (*(long*)( param_2 + 0x50 ) != *(long*)( this + 0xa28 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_2 + 0x50 ), (CowData*)( this + 0xa28 ));
   }
   local_1d0 = 0;
   lVar28 = *(long*)( param_1 + 0x138 );
   for (lVar31 = 0; ( lVar28 != 0 && ( lVar31 < *(long*)( lVar28 + -8 ) ) ); lVar31 = lVar31 + 1) {
      puVar24 = *(undefined8**)( lVar28 + lVar31 * 8 );
      if (lVar31 != 0) {
         String::operator +=((String*)&local_1d0, ", ");
      }
      lVar28 = *(long*)( puVar24[0x25] + 0x148 );
      if (lVar28 == 0) {
         local_1a8._0_8_ = 0;
      } else {
         pcVar6 = *(char**)( lVar28 + 8 );
         local_1a8._0_8_ = 0;
         if (pcVar6 == (char*)0x0) {
            if (*(long*)( lVar28 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)local_1a8, (CowData*)( lVar28 + 0x10 ));
            }
         } else {
            local_138._8_8_ = strlen(pcVar6);
            local_138._0_8_ = pcVar6;
            String::parse_latin1((StrRange*)local_1a8);
         }
      }
      String::operator +=((String*)&local_1d0, (String*)local_1a8);
      uVar25 = local_1a8._0_8_;
      if (local_1a8._0_8_ != 0) {
         LOCK();
         plVar26 = (long*)( local_1a8._0_8_ + -0x10 );
         *plVar26 = *plVar26 + -1;
         UNLOCK();
         if (*plVar26 == 0) {
            local_1a8._0_8_ = 0;
            Memory::free_static((void*)( uVar25 + -0x10 ), false);
         }
      }
      if (*(code**)*puVar24 == GDScriptParser::Node::get_datatype) {
         local_e0 = 0;
         for (int i = 0; i < 16; i++) {
            local_110[i] = (StringName)0;
         }
         local_100 = (undefined1[16])0x0;
         local_f0 = (undefined1[16])0x0;
         local_d8 = (undefined1[16])0x0;
         local_70 = (undefined1[16])0x0;
         local_60 = (undefined1[16])0x0;
         local_c8 = 0;
         local_b8 = 6;
         local_b0 = 1;
         local_90 = 0;
         local_138._8_8_ = 0;
         local_c0 = 0;
         local_a8 = (undefined1(*) [16])0x0;
         local_98 = 0;
         local_80 = 0;
         local_50 = _LC44;
         local_128._0_13_ = *(undefined1(*) [13])( puVar24 + 9 );
         local_118 = CONCAT44(local_118._4_4_, *(undefined4*)( puVar24 + 0xb ));
         StringName::operator =(local_110, (StringName*)( puVar24 + 0xc ));
         StringName::operator =(local_110 + 8, (StringName*)( puVar24 + 0xd ));
         pOVar8 = (Object*)puVar24[0xe];
         uVar25 = local_100._0_8_;
         if (pOVar8 != (Object*)local_100._0_8_) {
            local_100._0_8_ = pOVar8;
            if (( pOVar8 != (Object*)0x0 ) && ( cVar18 = RefCounted::reference() ),cVar18 == '\0') {
               auVar34._8_8_ = 0;
               auVar34._0_8_ = local_100._8_8_;
               local_100 = auVar34 << 0x40;
            }
            if (( ( (Object*)uVar25 != (Object*)0x0 ) && ( cVar18 = RefCounted::unreference() ),cVar18 != '\0' )) &&( cVar18 = cVar18 != '\0' )(**(code**)( *(long*)uVar25 + 0x140 ))(uVar25);
            Memory::free_static((void*)uVar25, false);
         }
      }
      if (local_100._8_8_ != puVar24[0xf]) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( local_100 + 8 ), (CowData*)( puVar24 + 0xf ));
      }
      local_f0._0_8_ = puVar24[0x10];
      if (local_f0._8_8_ != puVar24[0x11]) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( local_f0 + 8 ), (CowData*)( puVar24 + 0x11 ));
      }
      local_e0 = CONCAT44(local_e0._4_4_, *(undefined4*)( puVar24 + 0x12 ));
      if (local_d8._0_8_ != puVar24[0x13]) {
         CowData<char32_t>::_ref((CowData<char32_t>*)local_d8, (CowData*)( puVar24 + 0x13 ));
      }
      StringName::operator =((StringName*)( local_d8 + 8 ), (StringName*)( puVar24 + 0x14 ));
      local_c8 = CONCAT44(local_c8._4_4_, *(undefined4*)( puVar24 + 0x15 ));
      if (local_c0 != puVar24[0x16]) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_c0, (CowData*)( puVar24 + 0x16 ));
      }
      local_b8 = CONCAT44(local_b8._4_4_, *(undefined4*)( puVar24 + 0x17 ));
      local_b0 = puVar24[0x18];
      if (local_a8 != (undefined1(*) [16])0x0) {
         do {
            pauVar23 = local_a8;
            pvVar9 = *(void**)*local_a8;
            if (pvVar9 == (void*)0x0) goto LAB_00107eb0;
            if (*(undefined1(**) [16])( (long)pvVar9 + 0x40 ) == local_a8) {
               lVar28 = *(long*)( (long)pvVar9 + 0x30 );
               lVar29 = *(long*)( (long)pvVar9 + 0x38 );
               *(long*)*local_a8 = lVar28;
               if (pvVar9 == *(void**)( *local_a8 + 8 )) {
                  *(long*)( *local_a8 + 8 ) = lVar29;
               }
               if (lVar29 != 0) {
                  *(long*)( lVar29 + 0x30 ) = lVar28;
                  lVar28 = *(long*)( (long)pvVar9 + 0x30 );
               }
               if (lVar28 != 0) {
                  *(long*)( lVar28 + 0x38 ) = lVar29;
               }
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar9 + 0x20 ));
               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
                  StringName::unref();
               }
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar9 + 8 ));
               Memory::free_static(pvVar9, false);
               *(int*)pauVar23[1] = *(int*)pauVar23[1] + -1;
            } else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }
         } while ( *(int*)local_a8[1] != 0 );
         Memory::free_static(local_a8, false);
         local_a8 = (undefined1(*) [16])0x0;
      }
      pauVar23 = (undefined1(*) [16])0x0;
      LAB_00107eb0:if (( (undefined8*)puVar24[0x19] != (undefined8*)0x0 ) && ( puVar33 = *(undefined4**)puVar24[0x19] ),puVar33 != (undefined4*)0x0) {
         if (pauVar23 == (undefined1(*) [16])0x0) {
            local_a8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined4*)local_a8[1] = 0;
            *local_a8 = (undefined1[16])0x0;
         }
         do {
            while (true) {
               puVar21 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
               *(undefined8*)( puVar21 + 8 ) = 0;
               *(undefined1(*) [16])( puVar21 + 2 ) = (undefined1[16])0x0;
               lVar28 = *(long*)( puVar33 + 2 );
               *puVar21 = 0;
               puVar21[6] = 0;
               puVar21[10] = 6;
               *(undefined8*)( puVar21 + 0x10 ) = 0;
               *(undefined1(*) [16])( puVar21 + 0xc ) = (undefined1[16])0x0;
               *puVar21 = *puVar33;
               if (lVar28 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar21 + 2 ), (CowData*)( puVar33 + 2 ));
               }
               StringName::operator =((StringName*)( puVar21 + 4 ), (StringName*)( puVar33 + 4 ));
               puVar21[6] = puVar33[6];
               if (*(long*)( puVar21 + 8 ) != *(long*)( puVar33 + 8 )) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( puVar21 + 8 ), (CowData*)( puVar33 + 8 ));
               }
               puVar21[10] = puVar33[10];
               lVar28 = *(long*)( *local_a8 + 8 );
               *(undefined8*)( puVar21 + 0xc ) = 0;
               *(undefined1(**) [16])( puVar21 + 0x10 ) = local_a8;
               *(long*)( puVar21 + 0xe ) = lVar28;
               if (lVar28 != 0) {
                  *(undefined4**)( lVar28 + 0x30 ) = puVar21;
               }
               lVar28 = *(long*)*local_a8;
               *(undefined4**)( *local_a8 + 8 ) = puVar21;
               if (lVar28 != 0) break;
               puVar33 = *(undefined4**)( puVar33 + 0xc );
               *(int*)local_a8[1] = *(int*)local_a8[1] + 1;
               *(undefined4**)*local_a8 = puVar21;
               if (puVar33 == (undefined4*)0x0) goto LAB_00107fe3;
            };
            puVar33 = *(undefined4**)( puVar33 + 0xc );
            *(int*)local_a8[1] = *(int*)local_a8[1] + 1;
         } while ( puVar33 != (undefined4*)0x0 );
      }
      LAB_00107fe3:if (local_98 != puVar24[0x1b]) {
         CowData<Variant>::_ref((CowData<Variant>*)&local_98, (CowData*)( puVar24 + 0x1b ));
      }
      local_90 = CONCAT44(local_90._4_4_, *(undefined4*)( puVar24 + 0x1c ));
      if (local_80 != puVar24[0x1e]) {
         CowData<int>::_ref((CowData<int>*)&local_80, (CowData*)( puVar24 + 0x1e ));
      }
      if (local_78 != (HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>*)( puVar24 + 0x1f )) {
         uVar20 = *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 );
         uVar30 = (uint)local_50;
         if (( local_50._4_4_ != 0 ) && ( local_70._0_8_ != 0 )) {
            if (uVar20 != 0) {
               lVar28 = 0;
               do {
                  if (*(int*)( local_70._8_8_ + lVar28 ) != 0) {
                     *(int*)( local_70._8_8_ + lVar28 ) = 0;
                     pvVar9 = *(void**)( local_70._0_8_ + lVar28 * 2 );
                     if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
                        StringName::unref();
                     }
                     Memory::free_static(pvVar9, false);
                     *(undefined8*)( local_70._0_8_ + lVar28 * 2 ) = 0;
                  }
                  lVar28 = lVar28 + 4;
               } while ( (ulong)uVar20 * 4 - lVar28 != 0 );
               uVar20 = *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 );
               uVar30 = (uint)local_50;
            }
            local_50 = local_50 & 0xffffffff;
            local_60 = (undefined1[16])0x0;
         }
         if (uVar20 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( puVar24 + 0x24 ) * 4 )) {
            if (uVar30 != 0x1c) {
               uVar22 = (ulong)uVar30;
               do {
                  uVar20 = (int)uVar22 + 1;
                  uVar22 = (ulong)uVar20;
                  if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( puVar24 + 0x24 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar22 * 4 )) {
                     if (uVar20 != uVar30) {
                        if (local_70._0_8_ == 0) {
                           local_50 = CONCAT44(local_50._4_4_, uVar20);
                        } else {
                           HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::_resize_and_rehash(local_78, uVar20);
                        }
                     }
                     goto LAB_001080d4;
                  }
               } while ( uVar20 != 0x1c );
            }
            _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
         }
         LAB_001080d4:if (puVar24[0x20] != 0) {
            for (puVar32 = (undefined8*)puVar24[0x22]; puVar32 != (undefined8*)0x0; puVar32 = (undefined8*)*puVar32) {
               HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::insert((StringName*)local_1a8, (long*)local_78, (bool)( (char)puVar32 + '\x10' ));
            }
         }
      }
      if (local_138._8_8_ != puVar24[8]) {
         CowData<GDScriptParser::DataType>::_ref((CowData<GDScriptParser::DataType>*)( local_138 + 8 ), (CowData*)( puVar24 + 8 ));
      }
   }
   else{( **(code**)*puVar24 )((CowData<char32_t>*)local_138, puVar24);
}uVar17 = local_128._4_4_;GDScriptParser::DataType::~DataType((DataType*)local_138);if (1 < (int)uVar17) {
   if (*(code**)*puVar24 == GDScriptParser::Node::get_datatype) {
      local_138._8_8_ = 0;
      local_128._8_8_ = 0;
      local_128._0_8_ = _LC56;
      local_118 = 0;
      local_e0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 6;
      local_b0 = 1;
      local_a8 = (undefined1(*) [16])0x0;
      local_98 = 0;
      local_90 = 0;
      local_80 = 0;
      local_50 = _LC44;
      for (int i = 0; i < 16; i++) {
         local_110[i] = (StringName)0;
      }
      local_100 = (undefined1[16])0x0;
      local_f0 = (undefined1[16])0x0;
      local_d8 = (undefined1[16])0x0;
      local_70 = (undefined1[16])0x0;
      local_60 = (undefined1[16])0x0;
      GDScriptParser::DataType::operator =((DataType*)local_138, (DataType*)( puVar24 + 7 ));
   } else {
      ( **(code**)*puVar24 )((CowData<char32_t>*)local_138, puVar24);
   }
   GDScriptParser::DataType::to_string();
   operator+((char *)
   local_1a8,(String*)&_LC103;
   String::operator +=((String*)&local_1d0, (String*)local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);
   CowData<char32_t>::_unref(local_238);
   GDScriptParser::DataType::~DataType((DataType*)local_138);
}if (puVar24[0x26] != 0) {
   Variant::to_json_string();
   operator+((char *)
   local_138,(String*)&_LC104;
   String::operator +=((String*)&local_1d0, (String*)local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);
}lVar28 = *(long*)( param_1 + 0x138 );}auVar12._8_8_ = 0;auVar12._0_8_ = local_1a8._8_8_;local_1a8 = auVar12 << 0x40;local_138._0_8_ = &_LC101;local_138._8_8_ = 1;String::parse_latin1((StrRange*)local_1a8);String::operator +((String*)local_138, (String*)&local_1d0);String::operator +=((String*)pSVar1, (String*)local_138);CowData<char32_t>::_unref((CowData<char32_t>*)local_138);CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);if ((code*)**(undefined8**)param_1 == GDScriptParser::Node::get_datatype) {
   GDScriptParser::DataType::DataType((DataType*)local_138, (DataType*)( param_1 + 0x38 ));
} else {
   ( *(code*)**(undefined8**)param_1 )((CowData<char32_t>*)local_138, param_1);
}uVar17 = local_128._4_4_;GDScriptParser::DataType::~DataType((DataType*)local_138);if (1 < (int)uVar17) {
   if ((code*)**(undefined8**)param_1 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType*)local_138, (DataType*)( param_1 + 0x38 ));
   } else {
      ( *(code*)**(undefined8**)param_1 )((CowData<char32_t>*)local_138, param_1);
   }
   GDScriptParser::DataType::to_string();
   operator+((char *)
   local_1a8,(String*)&_LC105;
   String::operator +=((String*)pSVar1, (String*)local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);
   CowData<char32_t>::_unref(local_238);
   GDScriptParser::DataType::~DataType((DataType*)local_138);
}uVar25 = *(undefined8*)( param_1 + 0x178 );pauVar23 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);*(undefined4*)pauVar23[1] = 0;*pauVar23 = (undefined1[16])0x0;local_1c8 = pauVar23;puVar24 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);puVar24[1] = 0;lVar28 = *(long*)( *pauVar23 + 8 );*puVar24 = uVar25;puVar24[3] = pauVar23;puVar24[2] = lVar28;if (lVar28 != 0) {
   *(undefined8**)( lVar28 + 8 ) = puVar24;
}lVar28 = *(long*)*pauVar23;*(undefined8**)( *pauVar23 + 8 ) = puVar24;if (lVar28 == 0) {
   *(undefined8**)*pauVar23 = puVar24;
}*(int*)pauVar23[1] = *(int*)pauVar23[1] + 1;pauVar27 = (undefined1(*) [16])0x0;while (( pauVar23 != (undefined1(*) [16])0x0 && ( *(int*)pauVar23[1] != 0 ) )) {
   plVar26 = *(long**)*pauVar23;
   lVar28 = *plVar26;
   if ((undefined1(*) [16])plVar26[3] == pauVar23) {
      lVar31 = plVar26[1];
      lVar29 = plVar26[2];
      *(long*)*pauVar23 = lVar31;
      if (plVar26 == *(long**)( *pauVar23 + 8 )) {
         *(long*)( *pauVar23 + 8 ) = lVar29;
      }
      if (lVar29 != 0) {
         *(long*)( lVar29 + 8 ) = lVar31;
         lVar31 = plVar26[1];
      }
      if (lVar31 != 0) {
         *(long*)( lVar31 + 0x10 ) = lVar29;
      }
      Memory::free_static(plVar26, false);
      iVar19 = *(int*)pauVar23[1] + -1;
      *(int*)pauVar23[1] = iVar19;
   } else {
      _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      iVar19 = *(int*)pauVar23[1];
   }
   if (iVar19 == 0) {
      Memory::free_static(pauVar23, false);
      local_1c8 = (undefined1(*) [16])0x0;
   }
   switch (*(undefined4*)( lVar28 + 8 )) {
      case 0x10:
      local_138._0_8_ = *(undefined8 *)(lVar28 + 0x148);
      List<GDScriptParser::Node*,DefaultAllocator>::push_back
                ((List<GDScriptParser::Node*,DefaultAllocator> *)&local_1c8,(Node **)local_138);
      break;
      case 0x14:
      local_138._0_8_ = *(undefined8 *)(lVar28 + 0x130);
      List<GDScriptParser::Node*,DefaultAllocator>::push_back
                ((List<GDScriptParser::Node*,DefaultAllocator> *)&local_1c8,(Node **)local_138);
      if (*(char **)(lVar28 + 0x138) != (char *)0x0) {
        local_138._0_8_ = *(char **)(lVar28 + 0x138);
        List<GDScriptParser::Node*,DefaultAllocator>::push_back
                  ((List<GDScriptParser::Node*,DefaultAllocator> *)&local_1c8,(Node **)local_138);
      }
      break;
      case 0x17:
      CowData<GDScriptParser::MatchBranchNode*>::_copy_on_write
                ((CowData<GDScriptParser::MatchBranchNode*> *)(lVar28 + 0x138));
      puVar32 = *(undefined8 **)(lVar28 + 0x138);
      CowData<GDScriptParser::MatchBranchNode*>::_copy_on_write
                ((CowData<GDScriptParser::MatchBranchNode*> *)(lVar28 + 0x138));
      puVar24 = *(undefined8 **)(lVar28 + 0x138);
      if (puVar24 != (undefined8 *)0x0) {
        puVar24 = puVar24 + puVar24[-1];
      }
      if (puVar32 != puVar24) {
        do {
          local_138._0_8_ = *puVar32;
          puVar32 = puVar32 + 1;
          List<GDScriptParser::Node*,DefaultAllocator>::push_back
                    ((List<GDScriptParser::Node*,DefaultAllocator> *)&local_1c8,(Node **)local_138);
        } while (puVar24 != puVar32);
      }
      break;
      case 0x18:
      local_138._0_8_ = *(undefined8 *)(lVar28 + 0x138);
      List<GDScriptParser::Node*,DefaultAllocator>::push_back
                ((List<GDScriptParser::Node*,DefaultAllocator> *)&local_1c8,(Node **)local_138);
      break;
      case 0x21:
      if (pauVar27 == (undefined1 (*) [16])0x0) {
        pauVar27 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar27[1] = 0;
        *pauVar27 = (undefined1  [16])0x0;
      }
      plVar26 = (long *)operator_new(0x20,DefaultAllocator::alloc);
      lVar31 = *(long *)(*pauVar27 + 8);
      plVar26[1] = 0;
      *plVar26 = lVar28;
      plVar26[2] = lVar31;
      plVar26[3] = (long)pauVar27;
      if (lVar31 != 0) {
        *(long **)(lVar31 + 8) = plVar26;
      }
      lVar31 = *(long *)*pauVar27;
      *(long **)(*pauVar27 + 8) = plVar26;
      if (lVar31 == 0) {
        *(long **)*pauVar27 = plVar26;
      }
      lVar31 = *(long *)(lVar28 + 0x138);
      *(int *)pauVar27[1] = *(int *)pauVar27[1] + 1;
      if (lVar31 != 0) {
        lVar29 = 0;
        do {
          if (*(long *)(lVar31 + -8) <= lVar29) break;
          lVar4 = lVar29 * 8;
          lVar29 = lVar29 + 1;
          List<GDScriptParser::Node*,DefaultAllocator>::push_back
                    ((List<GDScriptParser::Node*,DefaultAllocator> *)&local_1c8,
                     (Node **)(lVar31 + lVar4));
          lVar31 = *(long *)(lVar28 + 0x138);
        } while (lVar31 != 0);
      }
      break;
      case 0x27:
      local_138._0_8_ = *(undefined8 *)(lVar28 + 0x130);
      List<GDScriptParser::Node*,DefaultAllocator>::push_back
                ((List<GDScriptParser::Node*,DefaultAllocator> *)&local_1c8,(Node **)local_138);
   }
   pauVar23 = local_1c8;
};if (pauVar27 != (undefined1(*) [16])0x0) {
   for (plVar26 = *(long**)*pauVar27; plVar26 != (long*)0x0; plVar26 = (long*)plVar26[1]) {
      lVar28 = *plVar26;
      lVar31 = *(long*)( lVar28 + 0x180 );
      for (lVar29 = 0; ( lVar31 != 0 && ( lVar29 < *(long*)( lVar31 + -8 ) ) ); lVar29 = lVar29 + 1) {
         local_188 = 1;
         puVar5 = (uint*)( lVar31 + lVar29 * 0x38 );
         local_1a8 = (undefined1[16])0x0;
         lVar31 = *(long*)( puVar5 + 4 );
         local_198 = (undefined1[16])0x0;
         local_184 = 0;
         local_148[0] = 0;
         local_180 = (undefined1[16])0x0;
         local_170 = (undefined1[16])0x0;
         local_160 = (undefined1[16])0x0;
         if (lVar31 != 0) {
            pcVar6 = *(char**)( lVar31 + 8 );
            local_1b8 = 0;
            if (pcVar6 == (char*)0x0) {
               if (*(long*)( lVar31 + 0x10 ) == 0) goto LAB_001088a4;
               CowData<char32_t>::_ref(local_238, (CowData*)( lVar31 + 0x10 ));
            } else {
               local_138._8_8_ = strlen(pcVar6);
               local_138._0_8_ = pcVar6;
               String::parse_latin1((StrRange*)local_238);
            }
            lVar31 = local_1b8;
            uVar25 = local_1a8._0_8_;
            if (local_1a8._0_8_ == local_1b8) {
               if (local_1a8._0_8_ != 0) {
                  LOCK();
                  plVar2 = (long*)( local_1a8._0_8_ + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     local_1b8 = 0;
                     Memory::free_static((void*)( lVar31 + -0x10 ), false);
                  }
               }
            } else {
               if (local_1a8._0_8_ != 0) {
                  LOCK();
                  plVar2 = (long*)( local_1a8._0_8_ + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = local_1a8._8_8_;
                     local_1a8 = auVar10 << 0x40;
                     Memory::free_static((void*)( uVar25 + -0x10 ), false);
                  }
               }
               local_1a8._0_8_ = local_1b8;
            }
         }
         LAB_001088a4:uVar20 = *puVar5;
         if (uVar20 == 1) {
            local_188 = 0xe;
            LAB_00108d5b:local_180 = range_of_node(this, *(Node**)( puVar5 + 2 ));
            local_170 = range_of_node(this, *(Node**)( *(long*)( puVar5 + 2 ) + 0x128 ));
         } else {
            local_188 = 0xd;
            if (uVar20 == 3) goto LAB_00108d5b;
            if (uVar20 < 4) {
               if (uVar20 == 2) {
                  local_180 = range_of_node(this, *(Node**)( puVar5 + 2 ));
                  local_170 = range_of_node(this, *(Node**)( *(long*)( puVar5 + 2 ) + 0x128 ));
                  lVar31 = *(long*)( *(long*)( puVar5 + 2 ) + 0x130 );
                  if (( lVar31 != 0 ) && ( *(int*)( lVar31 + 8 ) == 0x15 )) {
                     local_118._4_4_ = ( uint )((ulong)local_118 >> 0x20) & 0xffff0000;
                     local_118 = CONCAT44(local_118._4_4_, 1);
                     auVar11._8_8_ = 0;
                     auVar11._0_8_ = local_d8._8_8_;
                     local_d8 = auVar11 << 0x40;
                     local_138._0_8_ = (char*)0x0;
                     local_138._8_8_ = 0;
                     local_128 = (undefined1[16])0x0;
                     for (int i = 0; i < 16; i++) {
                        local_110[i] = (StringName)0;
                     }
                     local_100 = (undefined1[16])0x0;
                     local_f0 = (undefined1[16])0x0;
                     parse_function_symbol(this, *(FunctionNode**)( lVar31 + 0x148 ), (DocumentSymbol*)local_138);
                     local_1b0 = 0;
                     if (local_d8._0_8_ != 0) {
                        CowData<lsp::DocumentSymbol>::_ref((CowData<lsp::DocumentSymbol>*)&local_1b0, (CowData*)local_d8);
                     }
                     Vector<lsp::DocumentSymbol>::append_array(local_150, local_238);
                     CowData<lsp::DocumentSymbol>::_unref((CowData<lsp::DocumentSymbol>*)&local_1b0);
                     lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)local_138);
                  }
               } else {
                  LAB_00108e80:local_138._0_8_ = CONCAT44(puVar5[10], puVar5[8]);
                  uVar25 = GodotPosition::to_lsp((GodotPosition*)local_138, (Vector*)( this + 0xa30 ));
                  local_180._0_8_ = uVar25;
                  local_138._0_8_ = CONCAT44(puVar5[0xb], puVar5[9]);
                  local_170._8_8_ = GodotPosition::to_lsp((GodotPosition*)local_138, (Vector*)( this + 0xa30 ));
                  local_180._8_8_ = local_170._8_8_;
                  local_170._0_8_ = local_180._0_8_;
               }
            } else {
               if (1 < uVar20 - 4) goto LAB_00108e80;
               local_180 = range_of_node(this, *(Node**)( puVar5 + 2 ));
               local_170 = range_of_node(this, *(Node**)( puVar5 + 2 ));
            }
         }
         local_184 = CONCAT11(1, (undefined1)local_184);
         if (local_160._0_8_ != local_1d8) {
            CowData<char32_t>::_ref((CowData<char32_t>*)local_160, (CowData*)&local_1d8);
         }
         if (local_160._8_8_ != *(long*)( this + 0xa28 )) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( local_160 + 8 ), (CowData*)( this + 0xa28 ));
         }
         local_138._0_8_ = "var ";
         pSVar1 = (StrRange*)( local_1a8 + 8 );
         if (*puVar5 == 1) {
            local_138._0_8_ = "const ";
         }
         local_138._8_8_ = ( ulong )(*puVar5 == 1) * 2 + 4;
         String::parse_latin1(pSVar1);
         String::operator +=((String*)pSVar1, (String*)local_1a8);
         GDScriptParser::SuiteNode::Local::get_datatype();
         uVar17 = local_128._4_4_;
         GDScriptParser::DataType::~DataType((DataType*)local_138);
         if (1 < (int)uVar17) {
            GDScriptParser::SuiteNode::Local::get_datatype();
            GDScriptParser::DataType::to_string();
            operator+((char *)
            local_238,(String*)&_LC103;
            String::operator +=((String*)pSVar1, (String*)local_238);
            CowData<char32_t>::_unref(local_238);
            CowData<char32_t>::_unref(local_1c0);
            GDScriptParser::DataType::~DataType((DataType*)local_138);
         }
         if (*puVar5 == 1) {
            if (local_198._0_8_ != *(long*)( *(long*)( puVar5 + 2 ) + 0x148 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)local_198, (CowData*)( *(long*)( puVar5 + 2 ) + 0x148 ));
            }
         } else if (( *puVar5 == 2 ) && ( local_198._0_8_ != *(long*)( *(long*)( puVar5 + 2 ) + 0x1a8 ) )) {
            CowData<char32_t>::_ref((CowData<char32_t>*)local_198, (CowData*)( *(long*)( puVar5 + 2 ) + 0x1a8 ));
         }
         auVar13._8_8_ = 0;
         auVar13._0_8_ = local_138._8_8_;
         local_138 = auVar13 << 0x40;
         pcVar6 = (char*)0x0;
         if (local_1a8._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)local_138, (CowData*)local_1a8);
            pcVar6 = (char*)local_138._0_8_;
         }
         local_138._0_8_ = pcVar6;
         local_138._8_8_ = 0;
         if (local_1a8._8_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( local_138 + 8 ), (CowData*)pSVar1);
         }
         auVar14._8_8_ = 0;
         auVar14._0_8_ = local_128._8_8_;
         local_128 = auVar14 << 0x40;
         uVar22 = 0;
         if (local_198._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)local_128, (CowData*)local_198);
            uVar22 = local_128._0_8_;
         }
         local_128._0_8_ = uVar22;
         local_128._8_8_ = 0;
         if (local_198._8_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( local_128 + 8 ), (CowData*)( local_198 + 8 ));
         }
         auVar15._8_8_ = 0;
         auVar15._0_8_ = local_f0._8_8_;
         local_f0 = auVar15 << 0x40;
         for (int i = 0; i < 16; i++) {
            local_110[i] = (StringName)local_180[i];
         }
         local_118._0_6_ = CONCAT24(local_184, local_188);
         local_100 = local_170;
         uVar22 = 0;
         if (local_160._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)local_f0, (CowData*)local_160);
            uVar22 = local_f0._0_8_;
         }
         local_f0._0_8_ = uVar22;
         local_f0._8_8_ = 0;
         if (local_160._8_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( local_f0 + 8 ), (CowData*)( local_160 + 8 ));
         }
         auVar16._8_8_ = 0;
         auVar16._0_8_ = local_d8._8_8_;
         local_d8 = auVar16 << 0x40;
         if (local_148[0] != 0) {
            CowData<lsp::DocumentSymbol>::_ref((CowData<lsp::DocumentSymbol>*)local_d8, (CowData*)local_148);
         }
         Vector<lsp::DocumentSymbol>::push_back((Vector<lsp::DocumentSymbol>*)( param_2 + 0x58 ));
         lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)local_138);
         lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)local_1a8);
         lVar31 = *(long*)( lVar28 + 0x180 );
      }
      pauVar23 = local_1c8;
   }
}if (pauVar23 != (undefined1(*) [16])0x0) {
   do {
      while (true) {
         pvVar9 = *(void**)*pauVar23;
         if (pvVar9 == (void*)0x0) {
            if (*(int*)pauVar23[1] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_00108cab;
            }
            goto LAB_00108ca1;
         }
         if (*(undefined1(**) [16])( (long)pvVar9 + 0x18 ) != pauVar23) break;
         lVar28 = *(long*)( (long)pvVar9 + 8 );
         lVar31 = *(long*)( (long)pvVar9 + 0x10 );
         *(long*)*pauVar23 = lVar28;
         if (pvVar9 == *(void**)( *pauVar23 + 8 )) {
            *(long*)( *pauVar23 + 8 ) = lVar31;
         }
         if (lVar31 != 0) {
            *(long*)( lVar31 + 8 ) = lVar28;
            lVar28 = *(long*)( (long)pvVar9 + 8 );
         }
         if (lVar28 != 0) {
            *(long*)( lVar28 + 0x10 ) = lVar31;
         }
         Memory::free_static(pvVar9, false);
         pauVar3 = pauVar23 + 1;
         *(int*)*pauVar3 = *(int*)*pauVar3 + -1;
         if (*(int*)*pauVar3 == 0) goto LAB_00108ca1;
      };
      _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
   } while ( *(int*)pauVar23[1] != 0 );
   LAB_00108ca1:Memory::free_static(pauVar23, false);
}LAB_00108cab:if (pauVar27 != (undefined1(*) [16])0x0) {
   do {
      while (true) {
         pvVar9 = *(void**)*pauVar27;
         if (pvVar9 == (void*)0x0) {
            if (*(int*)pauVar27[1] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_00108d09;
            }
            goto LAB_00108cff;
         }
         if (pauVar27 != *(undefined1(**) [16])( (long)pvVar9 + 0x18 )) break;
         lVar28 = *(long*)( (long)pvVar9 + 8 );
         lVar31 = *(long*)( (long)pvVar9 + 0x10 );
         *(long*)*pauVar27 = lVar28;
         if (pvVar9 == *(void**)( *pauVar27 + 8 )) {
            *(long*)( *pauVar27 + 8 ) = lVar31;
         }
         if (lVar31 != 0) {
            *(long*)( lVar31 + 8 ) = lVar28;
            lVar28 = *(long*)( (long)pvVar9 + 8 );
         }
         if (lVar28 != 0) {
            *(long*)( lVar28 + 0x10 ) = lVar31;
         }
         Memory::free_static(pvVar9, false);
         pauVar23 = pauVar27 + 1;
         *(int*)*pauVar23 = *(int*)*pauVar23 + -1;
         if (*(int*)*pauVar23 == 0) goto LAB_00108cff;
      };
      _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
   } while ( *(int*)pauVar27[1] != 0 );
   LAB_00108cff:Memory::free_static(pauVar27, false);
}LAB_00108d09:CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d0);CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ExtendGDScriptParser::parse_class_symbol(GDScriptParser::ClassNode const*, lsp::DocumentSymbol&)
    */void ExtendGDScriptParser::parse_class_symbol(ExtendGDScriptParser *this, ClassNode *param_1, DocumentSymbol *param_2) {
   CowData *pCVar1;
   CowData *pCVar2;
   String *this_00;
   uint uVar3;
   Node *pNVar4;
   char *pcVar5;
   FunctionNode *pFVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   code *pcVar15;
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   ulong uVar22;
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined4 uVar27;
   char cVar28;
   uint uVar29;
   undefined8 uVar30;
   long lVar31;
   long lVar32;
   Object *pOVar33;
   uint uVar34;
   uint uVar35;
   undefined4 *puVar36;
   StrRange *this_01;
   undefined8 *puVar37;
   undefined8 *puVar38;
   uint uVar39;
   long lVar40;
   CowData *pCVar41;
   Object *pOVar42;
   long in_FS_OFFSET;
   undefined1 auVar43[16];
   String *local_310;
   long local_2f8;
   String *local_2e8;
   long local_298;
   undefined8 local_290;
   char *local_288;
   long local_280;
   Node *local_278;
   undefined8 uStack_270;
   undefined8 local_268;
   undefined4 local_260;
   undefined1 local_25c;
   undefined8 local_258;
   undefined8 local_250;
   undefined4 local_248;
   long local_240;
   undefined1 local_238;
   undefined8 local_230;
   undefined1 local_228;
   undefined8 local_220;
   undefined1 local_218[16];
   undefined1 local_208[16];
   int local_1f8;
   ushort local_1f4;
   undefined1 local_1f0[16];
   undefined1 local_1e0[16];
   undefined1 local_1d0[16];
   Vector<lsp::DocumentSymbol> local_1c0[8];
   undefined8 local_1b8;
   undefined1 local_1a8[16];
   undefined1 local_198[16];
   undefined4 local_188;
   undefined2 local_184;
   undefined1 local_180[16];
   undefined1 local_170[16];
   undefined1 local_160[16];
   undefined8 local_148;
   char *local_138;
   size_t sStack_130;
   undefined1 local_128[16];
   undefined4 local_118;
   undefined2 local_114;
   undefined1 local_110[16];
   undefined1 local_100[16];
   undefined1 local_f0[16];
   long local_d8[19];
   long local_40;
   sStack_130 = (size_t)local_138;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   get_uri((ExtendGDScriptParser*)&local_298);
   if (*(long*)( param_2 + 0x48 ) != local_298) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_2 + 0x48 ), (CowData*)&local_298);
   }
   pCVar1 = (CowData*)( this + 0xa28 );
   if (*(long*)( param_2 + 0x50 ) != *(long*)( this + 0xa28 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_2 + 0x50 ), pCVar1);
   }
   CowData<lsp::DocumentSymbol>::resize<false>((CowData<lsp::DocumentSymbol>*)( param_2 + 0x60 ), 0);
   if (( *(long*)( param_1 + 0x128 ) != 0 ) && ( lVar32 = *(long*)( *(long*)( param_1 + 0x128 ) + 0x148 ) ),lVar32 != 0) {
      local_138 = (char*)0x0;
      if (*(char**)( lVar32 + 8 ) != (char*)0x0) {
         String::parse_latin1((String*)&local_138, *(char**)( lVar32 + 8 ));
         goto LAB_00109511;
      }
      if (*(long*)( lVar32 + 0x10 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_138, (CowData*)( lVar32 + 0x10 ));
         goto LAB_00109511;
      }
   }
   local_138 = (char*)0x0;
   LAB_00109511:if (*(char**)param_2 != local_138) {
      CowData<char32_t>::_unref((CowData<char32_t>*)param_2);
      pcVar5 = local_138;
      local_138 = (char*)0x0;
      *(char**)param_2 = pcVar5;
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( *(long*)param_2 == 0 ) || ( *(uint*)( *(long*)param_2 + -8 ) < 2 )) {
      String::get_file();
      if (*(char**)param_2 != local_138) {
         CowData<char32_t>::_unref((CowData<char32_t>*)param_2);
         pcVar5 = local_138;
         local_138 = (char*)0x0;
         *(char**)param_2 = pcVar5;
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   }
   *(undefined4*)( param_2 + 0x20 ) = 5;
   param_2[0x24] = (DocumentSymbol)0x0;
   auVar43 = range_of_node(this, (Node*)param_1);
   pNVar4 = *(Node**)( param_1 + 0x128 );
   *(undefined1(*) [16])( param_2 + 0x28 ) = auVar43;
   if (pNVar4 == (Node*)0x0) {
      *(undefined8*)( param_2 + 0x38 ) = *(undefined8*)( param_2 + 0x28 );
      *(undefined8*)( param_2 + 0x40 ) = *(undefined8*)( param_2 + 0x28 );
   } else {
      auVar43 = range_of_node(this, pNVar4);
      *(undefined1(*) [16])( param_2 + 0x38 ) = auVar43;
   }
   operator+((char *)&
   local_138,(String*)"class ";
   if (*(char**)( param_2 + 8 ) != local_138) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
      pcVar5 = local_138;
      local_138 = (char*)0x0;
      *(char**)( param_2 + 8 ) = pcVar5;
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   local_280 = 0;
   if (*(long*)( param_1 + 0x2a8 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_280, (CowData*)( param_1 + 0x2a8 ));
      if (( *(long*)( param_1 + 0x2a8 ) != 0 ) && ( 1 < *(uint*)( *(long*)( param_1 + 0x2a8 ) + -8 ) )) {
         operator+((char *)&
         local_138,(String*)&_LC107;
         String::operator +=((String*)&local_280, (String*)&local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
      }
   }
   local_310 = (String*)&local_280;
   if (*(long*)( param_1 + 0x2b8 ) != 0) {
      String::operator +=(local_310, "\n");
      pCVar41 = *(CowData**)( param_1 + 0x2b8 );
      if (( pCVar41 != (CowData*)0x0 ) && ( pCVar2 = pCVar2 != pCVar41 )) {
         do {
            if (( *(long*)pCVar41 == 0 ) || ( *(uint*)( *(long*)pCVar41 + -8 ) < 2 )) {
               auVar43._8_8_ = 0;
               auVar43._0_8_ = local_1a8._8_8_;
               local_1a8 = auVar43 << 0x40;
               if (*(long*)( pCVar41 + 8 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)local_1a8, pCVar41 + 8);
               }
               auVar23._8_8_ = 0;
               auVar23._0_8_ = local_218._8_8_;
               local_218 = auVar23 << 0x40;
               local_138 = "\n@tutorial: %s";
               sStack_130 = 0xe;
               String::parse_latin1((StrRange*)local_218);
               vformat<String>((CowData<char32_t>*)&local_138, (StrRange*)local_218, (CowData<char32_t>*)local_1a8);
               String::operator +=(local_310, (String*)&local_138);
               this_01 = (StrRange*)&local_138;
            } else {
               auVar16._8_8_ = 0;
               auVar16._0_8_ = local_1a8._8_8_;
               local_1a8 = auVar16 << 0x40;
               if (*(long*)( pCVar41 + 8 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)local_1a8, pCVar41 + 8);
               }
               auVar24._8_8_ = 0;
               auVar24._0_8_ = local_218._8_8_;
               local_218 = auVar24 << 0x40;
               if (*(long*)pCVar41 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)local_218, pCVar41);
               }
               local_278 = (Node*)0x0;
               local_138 = "\n@tutorial(%s): %s";
               sStack_130 = 0x12;
               String::parse_latin1((StrRange*)&local_278);
               vformat<String,String>((CowData<char32_t>*)&local_138, (StrRange*)&local_278, (StrRange*)local_218, (CowData<char32_t>*)local_1a8);
               String::operator +=(local_310, (String*)&local_138);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               this_01 = (StrRange*)&local_278;
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)this_01);
            pCVar41 = pCVar41 + 0x10;
            CowData<char32_t>::_unref((CowData<char32_t>*)local_218);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);
         } while ( pCVar2 != pCVar41 );
      }
   }
   if (*(long*)( param_2 + 0x10 ) != local_280) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_2 + 0x10 ), (CowData*)local_310);
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)local_310);
   local_2f8 = 0;
   lVar32 = *(long*)( param_1 + 0x148 );
   joined_r0x001098e0:if (( lVar32 == 0 ) || ( *(long*)( lVar32 + -8 ) <= local_2f8 )) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_298);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   puVar36 = (undefined4*)( local_2f8 * 0x70 + lVar32 );
   switch (*puVar36) {
      default:
    goto switchD_00109925_caseD_0;
      case 1:
    local_188 = 1;
    local_184 = 0;
    local_148 = 0;
    local_1a8 = (undefined1  [16])0x0;
    local_198 = (undefined1  [16])0x0;
    local_180 = (undefined1  [16])0x0;
    local_170 = (undefined1  [16])0x0;
    local_160 = (undefined1  [16])0x0;
    parse_class_symbol(this,*(ClassNode **)(puVar36 + 2),(DocumentSymbol *)local_1a8);
    break;
      case 2:
    local_188 = 1;
    local_184 = 0;
    local_148 = 0;
    lVar32 = *(long *)(*(long *)(*(long *)(puVar36 + 2) + 0x128) + 0x148);
    local_1a8 = (undefined1  [16])0x0;
    local_198 = (undefined1  [16])0x0;
    local_180 = (undefined1  [16])0x0;
    local_170 = (undefined1  [16])0x0;
    local_160 = (undefined1  [16])0x0;
    if (lVar32 == 0) {
      local_138 = (char *)0x0;
    }
    else {
      local_138 = (char *)0x0;
      if (*(char **)(lVar32 + 8) == (char *)0x0) {
        if (*(long *)(lVar32 + 0x10) == 0) goto LAB_0010adfb;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)(lVar32 + 0x10));
      }
      else {
        String::parse_latin1((String *)&local_138,*(char **)(lVar32 + 8));
      }
      if ((char *)local_1a8._0_8_ != local_138) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_1a8);
        pcVar5 = local_138;
        local_138 = (char *)0x0;
        local_1a8._0_8_ = pcVar5;
      }
    }
LAB_0010adfb:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    local_188 = 0xe;
    local_184 = local_184 & 0xff00;
    local_180 = range_of_node(this,*(Node **)(puVar36 + 2));
    local_170 = range_of_node(this,*(Node **)(*(long *)(puVar36 + 2) + 0x128));
    if (local_198._0_8_ != *(long *)(*(long *)(puVar36 + 2) + 0x148)) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)local_198,(CowData *)(*(long *)(puVar36 + 2) + 0x148));
    }
    if (local_160._0_8_ != local_298) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_160,(CowData *)&local_298);
    }
    if (local_160._8_8_ != *(long *)(this + 0xa28)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(local_160 + 8),pCVar1);
    }
      operator+((char *)&
      local_138,(String*)"const ";
      if ((char*)local_1a8._8_8_ != local_138) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( local_1a8 + 8 ));
         pcVar5 = local_138;
         local_138 = (char*)0x0;
         local_1a8._8_8_ = pcVar5;
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
      pcVar15 = *(code**)**(undefined8**)( puVar36 + 2 );
      if (pcVar15 == GDScriptParser::Node::get_datatype) {
         GDScriptParser::DataType::DataType((DataType*)&local_138, (DataType*)( *(undefined8**)( puVar36 + 2 ) + 7 ));
      } else {
         ( *pcVar15 )((CowData<char32_t>*)&local_138);
      }
      uVar27 = local_128._4_4_;
      GDScriptParser::DataType::~DataType((DataType*)&local_138);
      if (1 < (int)uVar27) {
         pcVar15 = *(code**)**(undefined8**)( puVar36 + 2 );
         if (pcVar15 == GDScriptParser::Node::get_datatype) {
            GDScriptParser::DataType::DataType((DataType*)&local_138, (DataType*)( *(undefined8**)( puVar36 + 2 ) + 7 ));
         } else {
            ( *pcVar15 )((CowData<char32_t>*)&local_138);
         }
         GDScriptParser::DataType::to_string();
         operator+((char *)
         local_218,(String*)&_LC103;
         String::operator +=((String*)( local_1a8 + 8 ), (String*)local_218);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_218);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_278);
         GDScriptParser::DataType::~DataType((DataType*)&local_138);
      }
      local_288 = (char*)0x0;
      if (*(int*)( *(long*)( *(long*)( puVar36 + 2 ) + 0x130 ) + 0x130 ) == 0x18) {
         lVar32 = Variant::get_validated_object();
         if (( ( lVar32 == 0 ) || ( pOVar33 = (Object*)__dynamic_cast(lVar32, &Object::typeinfo, &Resource::typeinfo, 0) ),pOVar33 == (Object*)0x0 )) {
            Variant::to_json_string();
            if (local_138 != local_288) goto LAB_0010b034;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
         } else {
            Resource::get_path();
            if (( local_138 == (char*)0x0 ) || ( *(uint*)( local_138 + -8 ) < 2 )) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               Variant::to_json_string();
               if (local_288 != local_138) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
                  local_288 = local_138;
                  local_138 = (char*)0x0;
               }
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            } else {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               auVar21._8_8_ = 0;
               auVar21._0_8_ = local_218._8_8_;
               local_218 = auVar21 << 0x40;
               String::parse_latin1((String*)local_218, "\")");
               Resource::get_path();
               operator+((char *)&
               local_278,(String*)"preload(\"";
               String::operator +((String*)&local_138, (String*)&local_278);
               if (local_288 != local_138) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
                  local_288 = local_138;
                  local_138 = (char*)0x0;
               }
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_278);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_310);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_218);
               if (( local_198._0_8_ == 0 ) || ( *(uint*)( local_198._0_8_ + -8 ) < 2 )) {
                  pOVar42 = *(Object**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
                  if (pOVar42 == (Object*)0x0) {
                     Resource::get_path();
                     /* WARNING: Does not return */
                     pcVar15 = (code*)invalidInstructionException();
                     ( *pcVar15 )();
                  }
                  cVar28 = RefCounted::reference();
                  if (cVar28 == '\0') {
                     pOVar42 = (Object*)0x0;
                  }
                  Resource::get_path();
                  if (( *(long*)( pOVar42 + 0x1c8 ) != 0 ) && ( *(int*)( pOVar42 + 0x1ec ) != 0 )) {
                     uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pOVar42 + 0x1e8 ) * 4 );
                     lVar32 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( pOVar42 + 0x1e8 ) * 8 );
                     uVar29 = String::hash();
                     uVar22 = CONCAT44(0, uVar3);
                     lVar31 = *(long*)( pOVar42 + 0x1d0 );
                     uVar34 = 1;
                     if (uVar29 != 0) {
                        uVar34 = uVar29;
                     }
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = (ulong)uVar34 * lVar32;
                     auVar11._8_8_ = 0;
                     auVar11._0_8_ = uVar22;
                     lVar40 = SUB168(auVar7 * auVar11, 8);
                     uVar29 = *(uint*)( lVar31 + lVar40 * 4 );
                     uVar35 = SUB164(auVar7 * auVar11, 8);
                     if (uVar29 != 0) {
                        uVar39 = 0;
                        do {
                           if (uVar29 == uVar34) {
                              cVar28 = String::operator ==((String*)( *(long*)( *(long*)( pOVar42 + 0x1c8 ) + lVar40 * 8 ) + 0x10 ), (String*)&local_138);
                              if (cVar28 != '\0') {
                                 lVar32 = *(long*)( *(long*)( pOVar42 + 0x1c8 ) + (ulong)uVar35 * 8 );
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
                                 cVar28 = RefCounted::unreference();
                                 if (( cVar28 == '\0' ) || ( cVar28 = predelete_handler(pOVar42) ),cVar28 == '\0') goto LAB_0010ba51;
                                 goto LAB_0010ba3b;
                              }
                              lVar31 = *(long*)( pOVar42 + 0x1d0 );
                           }
                           uVar39 = uVar39 + 1;
                           auVar8._8_8_ = 0;
                           auVar8._0_8_ = ( ulong )(uVar35 + 1) * lVar32;
                           auVar12._8_8_ = 0;
                           auVar12._0_8_ = uVar22;
                           lVar40 = SUB168(auVar8 * auVar12, 8);
                           uVar29 = *(uint*)( lVar31 + lVar40 * 4 );
                           uVar35 = SUB164(auVar8 * auVar12, 8);
                        } while ( ( uVar29 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar29 * lVar32,auVar13._8_8_ = 0,auVar13._0_8_ = uVar22,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar3 + uVar35 ) - SUB164(auVar9 * auVar13, 8)) * lVar32,auVar14._8_8_ = 0,auVar14._0_8_ = uVar22,uVar39 <= SUB164(auVar10 * auVar14, 8) );
                     }
                  }
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
                  cVar28 = RefCounted::unreference();
                  if (cVar28 != '\0') {
                     lVar32 = 0;
                     cVar28 = predelete_handler(pOVar42);
                     if (cVar28 != '\0') {
                        LAB_0010ba3b:( **(code**)( *(long*)pOVar42 + 0x140 ) )(pOVar42);
                        Memory::free_static(pOVar42, false);
                        LAB_0010ba51:if (lVar32 != 0) {
                           if (local_198._0_8_ != *(long*)( *(long*)( lVar32 + 0x18 ) + 0xa50 )) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)local_198, (CowData*)( *(long*)( lVar32 + 0x18 ) + 0xa50 ));
                           }
                        }
                     }
                  }
               }
            }
            cVar28 = RefCounted::unreference();
            if (( cVar28 != '\0' ) && ( cVar28 = predelete_handler(pOVar33) ),cVar28 != '\0') {
               ( **(code**)( *(long*)pOVar33 + 0x140 ) )(pOVar33);
               Memory::free_static(pOVar33, false);
            }
         }
      } else {
         Variant::to_json_string();
         if (local_288 != local_138) {
            LAB_0010b034:CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
            local_288 = local_138;
            local_138 = (char*)0x0;
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
      }
      if (( local_288 != (char*)0x0 ) && ( 1 < *(uint*)( local_288 + -8 ) )) {
         operator+((char *)&
         local_138,(String*)&_LC104;
         String::operator +=((String*)( local_1a8 + 8 ), (String*)&local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
      }
      lsp::DocumentSymbol::DocumentSymbol((DocumentSymbol*)&local_138, (DocumentSymbol*)local_1a8);
      Vector<lsp::DocumentSymbol>::push_back((Vector<lsp::DocumentSymbol>*)( param_2 + 0x58 ));
      lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
      lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)local_1a8);
      lVar32 = *(long*)( param_1 + 0x148 );
      goto switchD_00109925_caseD_0;
      case 3:
    local_184 = 0;
    local_1a8 = (undefined1  [16])0x0;
    local_188 = 1;
    local_148 = 0;
    local_198 = (undefined1  [16])0x0;
    local_180 = (undefined1  [16])0x0;
    local_170 = (undefined1  [16])0x0;
    local_160 = (undefined1  [16])0x0;
    parse_function_symbol(this,*(FunctionNode **)(puVar36 + 2),(DocumentSymbol *)local_1a8);
    break;
      case 4:
    local_1f8 = 1;
    local_218 = (undefined1  [16])0x0;
    local_1f4 = 0;
    lVar32 = *(long *)(*(long *)(*(long *)(puVar36 + 2) + 0x128) + 0x148);
    local_208 = (undefined1  [16])0x0;
    local_1b8 = 0;
    local_1f0 = (undefined1  [16])0x0;
    local_1e0 = (undefined1  [16])0x0;
    local_1d0 = (undefined1  [16])0x0;
    if (lVar32 == 0) {
LAB_0010a8c2:
      local_138 = (char *)0x0;
    }
    else {
      local_138 = (char *)0x0;
      if (*(char **)(lVar32 + 8) == (char *)0x0) {
        if (*(long *)(lVar32 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)(lVar32 + 0x10));
          goto LAB_0010a893;
        }
      }
      else {
        String::parse_latin1((String *)&local_138,*(char **)(lVar32 + 8));
LAB_0010a893:
        if ((char *)local_218._0_8_ != local_138) {
          CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
          local_218._0_8_ = local_138;
          goto LAB_0010a8c2;
        }
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    local_1f8 = 0x18;
    local_1f4 = local_1f4 & 0xff00;
    local_1f0 = range_of_node(this,*(Node **)(puVar36 + 2));
    local_1e0 = range_of_node(this,*(Node **)(*(long *)(puVar36 + 2) + 0x128));
    if (local_208._0_8_ != *(long *)(*(long *)(puVar36 + 2) + 0x1e0)) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)local_208,(CowData *)(*(long *)(puVar36 + 2) + 0x1e0));
    }
    if (local_1d0._0_8_ != local_298) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_1d0,(CowData *)&local_298);
    }
    if (local_1d0._8_8_ != *(long *)(this + 0xa28)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(local_1d0 + 8),pCVar1);
    }
    auVar26._8_8_ = 0;
    auVar26._0_8_ = local_1a8._8_8_;
    local_1a8 = auVar26 << 0x40;
    local_138 = "(";
    sStack_130 = 1;
    String::parse_latin1((StrRange *)local_1a8);
    lVar32 = *(long *)(*(long *)(*(long *)(puVar36 + 2) + 0x128) + 0x148);
    if (lVar32 == 0) {
      local_280 = 0;
    }
    else {
      local_280 = 0;
      if (*(char **)(lVar32 + 8) == (char *)0x0) {
        if (*(long *)(lVar32 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_310,(CowData *)(lVar32 + 0x10));
        }
      }
      else {
        String::parse_latin1(local_310,*(char **)(lVar32 + 8));
      }
    }
      operator+((char *)&
      local_278,(String*)"signal ";
      String::operator +((String*)&local_138, (String*)&local_278);
      if ((char*)local_218._8_8_ != local_138) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( local_218 + 8 ));
         pcVar5 = local_138;
         local_138 = (char*)0x0;
         local_218._8_8_ = pcVar5;
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_278);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_310);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);
      lVar32 = *(long*)( puVar36 + 2 );
      lVar31 = *(long*)( lVar32 + 0x138 );
      for (lVar40 = 0; ( lVar31 != 0 && ( lVar40 < *(long*)( lVar31 + -8 ) ) ); lVar40 = lVar40 + 1) {
         if (lVar40 == 0) {
            lVar31 = *(long*)( lVar32 + 0x138 );
         } else {
            String::operator +=((String*)( local_218 + 8 ), ", ");
            lVar31 = *(long*)( *(long*)( puVar36 + 2 ) + 0x138 );
         }
         if (lVar31 == 0) {
            LAB_0010abb0:lVar32 = 0;
            LAB_0010abb6:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar40, lVar32, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar15 = (code*)invalidInstructionException();
            ( *pcVar15 )();
         }
         lVar32 = *(long*)( lVar31 + -8 );
         if (lVar32 <= lVar40) goto LAB_0010abb6;
         lVar32 = *(long*)( *(long*)( *(long*)( lVar31 + lVar40 * 8 ) + 0x128 ) + 0x148 );
         if (lVar32 == 0) {
            auVar19._8_8_ = 0;
            auVar19._0_8_ = local_1a8._8_8_;
            local_1a8 = auVar19 << 0x40;
         } else {
            pcVar5 = *(char**)( lVar32 + 8 );
            auVar18._8_8_ = 0;
            auVar18._0_8_ = local_1a8._8_8_;
            local_1a8 = auVar18 << 0x40;
            if (pcVar5 == (char*)0x0) {
               if (*(long*)( lVar32 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)local_1a8, (CowData*)( lVar32 + 0x10 ));
               }
            } else {
               sStack_130 = strlen(pcVar5);
               local_138 = pcVar5;
               String::parse_latin1((StrRange*)local_1a8);
            }
         }
         String::operator +=((String*)( local_218 + 8 ), (String*)local_1a8);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);
         lVar32 = *(long*)( puVar36 + 2 );
         lVar31 = *(long*)( lVar32 + 0x138 );
      }
      String::operator +=((String*)( local_218 + 8 ), ")");
      lVar32 = *(long*)( puVar36 + 2 );
      CowData<GDScriptParser::ParameterNode*>::_copy_on_write((CowData<GDScriptParser::ParameterNode*>*)( lVar32 + 0x138 ));
      puVar37 = *(undefined8**)( lVar32 + 0x138 );
      CowData<GDScriptParser::ParameterNode*>::_copy_on_write((CowData<GDScriptParser::ParameterNode*>*)( lVar32 + 0x138 ));
      puVar38 = *(undefined8**)( lVar32 + 0x138 );
      if (puVar38 != (undefined8*)0x0) {
         puVar38 = puVar38 + puVar38[-1];
      }
      if (puVar38 != puVar37) {
         do {
            pNVar4 = (Node*)*puVar37;
            local_188 = 1;
            local_1a8 = (undefined1[16])0x0;
            local_184 = 0;
            lVar32 = *(long*)( *(long*)( pNVar4 + 0x128 ) + 0x148 );
            local_198 = (undefined1[16])0x0;
            local_148 = 0;
            local_180 = (undefined1[16])0x0;
            local_170 = (undefined1[16])0x0;
            local_160 = (undefined1[16])0x0;
            if (lVar32 == 0) {
               LAB_0010b295:local_278 = (Node*)0x0;
            } else {
               pcVar5 = *(char**)( lVar32 + 8 );
               local_278 = (Node*)0x0;
               if (pcVar5 == (char*)0x0) {
                  if (*(long*)( lVar32 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_278, (CowData*)( lVar32 + 0x10 ));
                     goto LAB_0010b26b;
                  }
               } else {
                  sStack_130 = strlen(pcVar5);
                  local_138 = pcVar5;
                  String::parse_latin1((StrRange*)&local_278);
                  LAB_0010b26b:if ((Node*)local_1a8._0_8_ != local_278) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);
                     local_1a8._0_8_ = local_278;
                     goto LAB_0010b295;
                  }
               }
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_278);
            local_184 = _LC114;
            local_188 = 0xd;
            local_180 = range_of_node(this, pNVar4);
            local_170 = range_of_node(this, *(Node**)( pNVar4 + 0x128 ));
            if (local_160._0_8_ != local_298) {
               CowData<char32_t>::_ref((CowData<char32_t>*)local_160, (CowData*)&local_298);
            }
            if (local_160._8_8_ != *(long*)( this + 0xa28 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( local_160 + 8 ), pCVar1);
            }
            operator+((char *)&
            local_138,(String*)&_LC98;
            if ((char*)local_1a8._8_8_ != local_138) {
               CowData<char32_t>::_unref((CowData<char32_t>*)( local_1a8 + 8 ));
               pcVar5 = local_138;
               local_138 = (char*)0x0;
               local_1a8._8_8_ = pcVar5;
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if ((code*)**(undefined8**)pNVar4 == GDScriptParser::Node::get_datatype) {
               GDScriptParser::DataType::DataType((DataType*)&local_138, (DataType*)( pNVar4 + 0x38 ));
            } else {
               ( *(code*)**(undefined8**)pNVar4 )((CowData<char32_t>*)&local_138, pNVar4);
            }
            uVar27 = local_128._4_4_;
            GDScriptParser::DataType::~DataType((DataType*)&local_138);
            if (1 < (int)uVar27) {
               if ((code*)**(undefined8**)pNVar4 == GDScriptParser::Node::get_datatype) {
                  GDScriptParser::DataType::DataType((DataType*)&local_138, (DataType*)( pNVar4 + 0x38 ));
               } else {
                  ( *(code*)**(undefined8**)pNVar4 )((CowData<char32_t>*)&local_138, pNVar4);
               }
               GDScriptParser::DataType::to_string();
               operator+((char *)&
               local_278,(String*)&_LC103;
               String::operator +=((String*)( local_1a8 + 8 ), (String*)&local_278);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_278);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_310);
               GDScriptParser::DataType::~DataType((DataType*)&local_138);
            }
            puVar37 = puVar37 + 1;
            lsp::DocumentSymbol::DocumentSymbol((DocumentSymbol*)&local_138, (DocumentSymbol*)local_1a8);
            Vector<lsp::DocumentSymbol>::push_back(local_1c0, (CowData<char32_t>*)&local_138);
            lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)&local_138);
            lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)local_1a8);
         } while ( puVar38 != puVar37 );
      }
      goto LAB_0010a786;
      case 5:
    local_1f8 = 1;
    local_1f4 = 0;
    local_1b8 = 0;
    local_218 = (undefined1  [16])0x0;
    local_208 = (undefined1  [16])0x0;
    lVar32 = *(long *)(*(long *)(*(long *)(puVar36 + 2) + 0x128) + 0x148);
    local_1f0 = (undefined1  [16])0x0;
    local_1e0 = (undefined1  [16])0x0;
    local_1d0 = (undefined1  [16])0x0;
    if (lVar32 == 0) {
      local_138 = (char *)0x0;
    }
    else {
      local_138 = (char *)0x0;
      if (*(char **)(lVar32 + 8) == (char *)0x0) {
        if (*(long *)(lVar32 + 0x10) == 0) goto LAB_0010a54b;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)(lVar32 + 0x10));
      }
      else {
        String::parse_latin1((String *)&local_138,*(char **)(lVar32 + 8));
      }
      if ((char *)local_218._0_8_ != local_138) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
        pcVar5 = local_138;
        local_138 = (char *)0x0;
        local_218._0_8_ = pcVar5;
      }
    }
LAB_0010a54b:
    this_00 = (String *)(local_218 + 8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    local_1f4 = local_1f4 & 0xff00;
    local_1f8 = (-(uint)(*(int *)(*(Node **)(puVar36 + 2) + 0x148) == 0) & 6) + 7;
    local_1f0 = range_of_node(this,*(Node **)(puVar36 + 2));
    local_1e0 = range_of_node(this,*(Node **)(*(long *)(puVar36 + 2) + 0x128));
    lVar32 = *(long *)(puVar36 + 2);
    if (*(char *)(lVar32 + 0x168) != '\0') {
      String::operator+=(this_00,"@export ");
      lVar32 = *(long *)(puVar36 + 2);
    }
    lVar32 = *(long *)(*(long *)(lVar32 + 0x128) + 0x148);
    if (lVar32 == 0) {
      auVar20._8_8_ = 0;
      auVar20._0_8_ = local_1a8._8_8_;
      local_1a8 = auVar20 << 0x40;
    }
    else {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = local_1a8._8_8_;
      local_1a8 = auVar17 << 0x40;
      if (*(char **)(lVar32 + 8) == (char *)0x0) {
        if (*(long *)(lVar32 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_1a8,(CowData *)(lVar32 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)local_1a8,*(char **)(lVar32 + 8));
      }
    }
      operator+((char *)&
      local_138,(String*)&_LC98;
      String::operator +=(this_00, (String*)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);
      GDScriptParser::ClassNode::Member::get_datatype();
      uVar27 = local_128._4_4_;
      GDScriptParser::DataType::~DataType((DataType*)&local_138);
      if (1 < (int)uVar27) {
         GDScriptParser::ClassNode::Member::get_datatype();
         GDScriptParser::DataType::to_string();
         operator+((char *)
         local_1a8,(String*)&_LC103;
         String::operator +=(this_00, (String*)local_1a8);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_278);
         GDScriptParser::DataType::~DataType((DataType*)&local_138);
      }
      lVar32 = *(long*)( puVar36 + 2 );
      if (( *(long*)( lVar32 + 0x130 ) != 0 ) && ( *(char*)( *(long*)( lVar32 + 0x130 ) + 0x129 ) != '\0' )) {
         Variant::to_json_string();
         operator+((char *)&
         local_138,(String*)&_LC104;
         String::operator +=(this_00, (String*)&local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);
         lVar32 = *(long*)( puVar36 + 2 );
      }
      if (local_208._0_8_ != *(long*)( lVar32 + 0x1a8 )) {
         CowData<char32_t>::_ref((CowData<char32_t>*)local_208, (CowData*)( lVar32 + 0x1a8 ));
      }
      if (local_1d0._0_8_ != local_298) {
         CowData<char32_t>::_ref((CowData<char32_t>*)local_1d0, (CowData*)&local_298);
      }
      if (local_1d0._8_8_ != *(long*)( this + 0xa28 )) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( local_1d0 + 8 ), pCVar1);
      }
      lVar31 = *(long*)( puVar36 + 2 );
      lVar32 = *(long*)( lVar31 + 0x130 );
      if (( lVar32 != 0 ) && ( *(int*)( lVar32 + 8 ) == 0x15 )) {
         local_114 = 0;
         local_118 = 1;
         local_d8[0] = 0;
         local_138 = (char*)0x0;
         sStack_130 = 0;
         local_128 = (undefined1[16])0x0;
         local_110 = (undefined1[16])0x0;
         local_100 = (undefined1[16])0x0;
         local_f0 = (undefined1[16])0x0;
         parse_function_symbol(this, *(FunctionNode**)( lVar32 + 0x148 ), (DocumentSymbol*)&local_138);
         local_1a8._8_8_ = 0;
         if (local_d8[0] != 0) {
            CowData<lsp::DocumentSymbol>::_ref((CowData<lsp::DocumentSymbol>*)( local_1a8 + 8 ), (CowData*)local_d8);
         }
         Vector<lsp::DocumentSymbol>::append_array(local_1c0, (CowData<char32_t>*)local_1a8);
         CowData<lsp::DocumentSymbol>::_unref((CowData<lsp::DocumentSymbol>*)( local_1a8 + 8 ));
         lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)&local_138);
         lVar31 = *(long*)( puVar36 + 2 );
      }
      pFVar6 = *(FunctionNode**)( lVar31 + 0x160 );
      if (( pFVar6 != (FunctionNode*)0x0 ) && ( *(int*)( pFVar6 + 8 ) == 0x11 )) {
         local_1a8 = (undefined1[16])0x0;
         local_198 = (undefined1[16])0x0;
         local_180 = (undefined1[16])0x0;
         local_170 = (undefined1[16])0x0;
         local_160 = (undefined1[16])0x0;
         local_188 = 1;
         local_184 = 0;
         local_148 = 0;
         parse_function_symbol(this, pFVar6, (DocumentSymbol*)local_1a8);
         local_184 = CONCAT11(1, (undefined1)local_184);
         lsp::DocumentSymbol::DocumentSymbol((DocumentSymbol*)&local_138, (DocumentSymbol*)local_1a8);
         Vector<lsp::DocumentSymbol>::push_back(local_1c0, (CowData<char32_t>*)&local_138);
         lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)&local_138);
         lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)local_1a8);
         lVar31 = *(long*)( puVar36 + 2 );
      }
      pFVar6 = *(FunctionNode**)( lVar31 + 0x150 );
      if (( pFVar6 != (FunctionNode*)0x0 ) && ( *(int*)( pFVar6 + 8 ) == 0x11 )) {
         local_1a8 = (undefined1[16])0x0;
         local_198 = (undefined1[16])0x0;
         local_180 = (undefined1[16])0x0;
         local_170 = (undefined1[16])0x0;
         local_160 = (undefined1[16])0x0;
         local_188 = 1;
         local_184 = 0;
         local_148 = 0;
         parse_function_symbol(this, pFVar6, (DocumentSymbol*)local_1a8);
         local_184 = CONCAT11(1, (undefined1)local_184);
         lsp::DocumentSymbol::DocumentSymbol((DocumentSymbol*)&local_138, (DocumentSymbol*)local_1a8);
         Vector<lsp::DocumentSymbol>::push_back(local_1c0, (CowData<char32_t>*)&local_138);
         lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)&local_138);
         lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)local_1a8);
      }
      goto LAB_0010a786;
      case 6:
    local_1f8 = 1;
    local_1f4 = 0;
    local_1b8 = 0;
    lVar32 = *(long *)(*(long *)(*(long *)(puVar36 + 2) + 0x128) + 0x148);
    local_218 = (undefined1  [16])0x0;
    local_208 = (undefined1  [16])0x0;
    local_1f0 = (undefined1  [16])0x0;
    local_1e0 = (undefined1  [16])0x0;
    local_1d0 = (undefined1  [16])0x0;
    if (lVar32 == 0) {
LAB_00109c78:
      local_138 = (char *)0x0;
    }
    else {
      local_138 = (char *)0x0;
      if (*(char **)(lVar32 + 8) == (char *)0x0) {
        if (*(long *)(lVar32 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)(lVar32 + 0x10));
          goto LAB_00109c49;
        }
      }
      else {
        String::parse_latin1((String *)&local_138,*(char **)(lVar32 + 8));
LAB_00109c49:
        if ((char *)local_218._0_8_ != local_138) {
          CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
          local_218._0_8_ = local_138;
          goto LAB_00109c78;
        }
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    local_1f8 = 10;
    local_1f0 = range_of_node(this,*(Node **)(puVar36 + 2));
    local_1e0 = range_of_node(this,*(Node **)(*(long *)(puVar36 + 2) + 0x128));
    if (local_208._0_8_ != *(long *)(*(long *)(puVar36 + 2) + 0x158)) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)local_208,(CowData *)(*(long *)(puVar36 + 2) + 0x158));
    }
    if (local_1d0._0_8_ != local_298) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_1d0,(CowData *)&local_298);
    }
    if (local_1d0._8_8_ != *(long *)(this + 0xa28)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(local_1d0 + 8),pCVar1);
    }
    auVar25._8_8_ = 0;
    auVar25._0_8_ = local_1a8._8_8_;
    local_1a8 = auVar25 << 0x40;
    local_138 = "{";
    sStack_130 = 1;
    String::parse_latin1((StrRange *)local_1a8);
    lVar32 = *(long *)(*(long *)(*(long *)(puVar36 + 2) + 0x128) + 0x148);
    if (lVar32 == 0) {
      local_280 = 0;
    }
    else {
      local_280 = 0;
      if (*(char **)(lVar32 + 8) == (char *)0x0) {
        if (*(long *)(lVar32 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_310,(CowData *)(lVar32 + 0x10));
        }
      }
      else {
        String::parse_latin1(local_310,*(char **)(lVar32 + 8));
      }
    }
      operator+((char *)&
      local_278,(String*)"enum ";
      String::operator +((String*)&local_138, (String*)&local_278);
      if ((char*)local_218._8_8_ != local_138) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( local_218 + 8 ));
         pcVar5 = local_138;
         local_138 = (char*)0x0;
         local_218._8_8_ = pcVar5;
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_278);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_310);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);
      lVar31 = *(long*)( puVar36 + 2 );
      lVar32 = *(long*)( lVar31 + 0x138 );
      for (lVar40 = 0; ( lVar32 != 0 && ( local_2e8 = (String*)&local_278 ),lVar40 < *(long*)( lVar32 + -8 ) ); lVar40 = lVar40 + 1) {
         if (lVar40 != 0) {
            String::operator +=((String*)( local_218 + 8 ), ", ");
            lVar31 = *(long*)( puVar36 + 2 );
         }
         if (*(long*)( lVar31 + 0x138 ) == 0) goto LAB_0010abb0;
         lVar32 = *(long*)( *(long*)( lVar31 + 0x138 ) + -8 );
         if (lVar32 <= lVar40) goto LAB_0010abb6;
         itos((long)local_1a8);
         local_280 = 0;
         local_138 = " = ";
         sStack_130 = 3;
         String::parse_latin1((StrRange*)local_310);
         lVar31 = *(long*)( *(long*)( puVar36 + 2 ) + 0x138 );
         if (lVar31 == 0) goto LAB_0010abb0;
         lVar32 = *(long*)( lVar31 + -8 );
         if (lVar32 <= lVar40) goto LAB_0010abb6;
         lVar32 = *(long*)( *(long*)( lVar31 + lVar40 * 0x60 ) + 0x148 );
         if (lVar32 == 0) {
            local_288 = (char*)0x0;
         } else {
            pcVar5 = *(char**)( lVar32 + 8 );
            local_288 = (char*)0x0;
            if (pcVar5 == (char*)0x0) {
               if (*(long*)( lVar32 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)( lVar32 + 0x10 ));
               }
            } else {
               sStack_130 = strlen(pcVar5);
               local_138 = pcVar5;
               String::parse_latin1((StrRange*)&local_288);
            }
         }
         String::operator +(local_2e8, (String*)&local_288);
         String::operator +((String*)&local_138, local_2e8);
         String::operator +=((String*)( local_218 + 8 ), (String*)&local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_2e8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_310);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);
         lVar31 = *(long*)( puVar36 + 2 );
         lVar32 = *(long*)( lVar31 + 0x138 );
      }
      String::operator +=((String*)( local_218 + 8 ), "}");
      lVar32 = *(long*)( puVar36 + 2 );
      CowData<GDScriptParser::EnumNode::Value>::_copy_on_write((CowData<GDScriptParser::EnumNode::Value>*)( lVar32 + 0x138 ));
      puVar38 = *(undefined8**)( lVar32 + 0x138 );
      CowData<GDScriptParser::EnumNode::Value>::_copy_on_write((CowData<GDScriptParser::EnumNode::Value>*)( lVar32 + 0x138 ));
      puVar37 = *(undefined8**)( lVar32 + 0x138 );
      if (puVar37 != (undefined8*)0x0) {
         puVar37 = puVar37 + puVar37[-1] * 0xc;
      }
      if (puVar37 != puVar38) {
         do {
            local_278 = (Node*)*puVar38;
            uStack_270 = puVar38[1];
            local_268 = puVar38[2];
            local_260 = *(undefined4*)( puVar38 + 3 );
            local_25c = *(undefined1*)( (long)puVar38 + 0x1c );
            local_258 = puVar38[4];
            local_250 = puVar38[5];
            local_248 = *(undefined4*)( puVar38 + 6 );
            local_240 = 0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_240, (CowData*)( puVar38 + 7 ));
            local_238 = *(undefined1*)( puVar38 + 8 );
            local_230 = 0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_230, (CowData*)( puVar38 + 9 ));
            local_228 = *(undefined1*)( puVar38 + 10 );
            local_220 = 0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_220, (CowData*)( puVar38 + 0xb ));
            pNVar4 = local_278;
            local_188 = 1;
            local_184 = 0;
            lVar32 = *(long*)( local_278 + 0x148 );
            local_1a8 = (undefined1[16])0x0;
            local_148 = 0;
            local_198 = (undefined1[16])0x0;
            local_180 = (undefined1[16])0x0;
            local_170 = (undefined1[16])0x0;
            local_160 = (undefined1[16])0x0;
            if (lVar32 == 0) {
               LAB_0010a0fd:local_138 = (char*)0x0;
               pcVar5 = local_138;
            } else {
               local_138 = (char*)0x0;
               pcVar5 = local_138;
               local_138 = (char*)0x0;
               if (*(char**)( lVar32 + 8 ) == (char*)0x0) {
                  if (*(long*)( lVar32 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_138, (CowData*)( lVar32 + 0x10 ));
                     goto LAB_0010a0d3;
                  }
               } else {
                  local_138 = pcVar5;
                  String::parse_latin1((String*)&local_138, *(char**)( lVar32 + 8 ));
                  LAB_0010a0d3:pcVar5 = local_138;
                  if ((char*)local_1a8._0_8_ != local_138) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_1a8);
                     local_1a8._0_8_ = local_138;
                     goto LAB_0010a0fd;
                  }
               }
            }
            local_138 = pcVar5;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            uVar27 = (undefined4)local_250;
            local_184 = local_184 & 0xff00;
            local_188 = 0x16;
            local_138 = (char*)local_250;
            uVar30 = GodotPosition::to_lsp((GodotPosition*)&local_138, (Vector*)( this + 0xa30 ));
            local_180._0_8_ = uVar30;
            local_138._4_4_ = local_248;
            local_138._0_4_ = uVar27;
            uVar30 = GodotPosition::to_lsp((GodotPosition*)&local_138, (Vector*)( this + 0xa30 ));
            local_180._8_8_ = uVar30;
            local_170 = range_of_node(this, pNVar4);
            if (local_198._0_8_ != local_240) {
               CowData<char32_t>::_ref((CowData<char32_t>*)local_198, (CowData*)&local_240);
            }
            if (local_160._0_8_ != local_298) {
               CowData<char32_t>::_ref((CowData<char32_t>*)local_160, (CowData*)&local_298);
            }
            if (local_160._8_8_ != *(long*)( this + 0xa28 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( local_160 + 8 ), pCVar1);
            }
            itos((long)local_310);
            local_290 = 0;
            local_138 = " = ";
            sStack_130 = 3;
            String::parse_latin1((StrRange*)&local_290);
            String::operator +((String*)&local_288, (String*)local_1a8);
            String::operator +((String*)&local_138, (String*)&local_288);
            if ((char*)local_1a8._8_8_ != local_138) {
               CowData<char32_t>::_unref((CowData<char32_t>*)( local_1a8 + 8 ));
               pcVar5 = local_138;
               local_138 = (char*)0x0;
               local_1a8._8_8_ = pcVar5;
            }
            puVar38 = puVar38 + 0xc;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_290);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_310);
            lsp::DocumentSymbol::DocumentSymbol((DocumentSymbol*)&local_138, (DocumentSymbol*)local_1a8);
            Vector<lsp::DocumentSymbol>::push_back(local_1c0, (CowData<char32_t>*)&local_138);
            lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)&local_138);
            lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)local_1a8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_220);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
         } while ( puVar37 != puVar38 );
      }
      LAB_0010a786:lsp::DocumentSymbol::DocumentSymbol((DocumentSymbol*)&local_138, (DocumentSymbol*)local_218);
      Vector<lsp::DocumentSymbol>::push_back((Vector<lsp::DocumentSymbol>*)( param_2 + 0x58 ));
      lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)&local_138);
      lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)local_218);
      local_2f8 = local_2f8 + 1;
      lVar32 = *(long*)( param_1 + 0x148 );
      goto joined_r0x001098e0;
      case 7:
    local_188 = 1;
    lVar32 = *(long *)(*(long *)(puVar36 + 4) + 0x148);
    local_184 = 0;
    local_148 = 0;
    local_1a8 = (undefined1  [16])0x0;
    local_198 = (undefined1  [16])0x0;
    local_180 = (undefined1  [16])0x0;
    local_170 = (undefined1  [16])0x0;
    local_160 = (undefined1  [16])0x0;
    if (lVar32 == 0) {
      local_138 = (char *)0x0;
    }
    else {
      local_138 = (char *)0x0;
      if (*(char **)(lVar32 + 8) == (char *)0x0) {
        if (*(long *)(lVar32 + 0x10) == 0) goto LAB_001099f4;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)(lVar32 + 0x10));
      }
      else {
        String::parse_latin1((String *)&local_138,*(char **)(lVar32 + 8));
      }
      if ((char *)local_1a8._0_8_ != local_138) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_1a8);
        pcVar5 = local_138;
        local_138 = (char *)0x0;
        local_1a8._0_8_ = pcVar5;
      }
    }
LAB_001099f4:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    local_188 = 0x16;
    local_138 = *(char **)(puVar36 + 0xe);
    local_184 = local_184 & 0xff00;
    uVar30 = GodotPosition::to_lsp((GodotPosition *)&local_138,(Vector *)(this + 0xa30));
    local_180._0_8_ = uVar30;
    local_138._4_4_ = puVar36[0x10];
    local_138._0_4_ = puVar36[0xe];
    uVar30 = GodotPosition::to_lsp((GodotPosition *)&local_138,(Vector *)(this + 0xa30));
    local_180._8_8_ = uVar30;
    local_170 = range_of_node(this,*(Node **)(puVar36 + 4));
    if (local_198._0_8_ != *(long *)(puVar36 + 0x12)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_198,(CowData *)(puVar36 + 0x12));
    }
    if (local_160._0_8_ != local_298) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_160,(CowData *)&local_298);
    }
    if (local_160._8_8_ != *(long *)(this + 0xa28)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(local_160 + 8),pCVar1);
    }
    itos((long)local_218);
    local_280 = 0;
    local_138 = " = ";
    sStack_130 = 3;
    String::parse_latin1((StrRange *)local_310);
    String::operator+((String *)&local_278,(String *)local_1a8);
    String::operator+((String *)&local_138,(String *)&local_278);
    if ((char *)local_1a8._8_8_ != local_138) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(local_1a8 + 8));
      pcVar5 = local_138;
      local_138 = (char *)0x0;
      local_1a8._8_8_ = pcVar5;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_310);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
   }
   lsp::DocumentSymbol::DocumentSymbol((DocumentSymbol*)&local_138, (DocumentSymbol*)local_1a8);
   Vector<lsp::DocumentSymbol>::push_back((Vector<lsp::DocumentSymbol>*)( param_2 + 0x58 ));
   lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)&local_138);
   lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)local_1a8);
   lVar32 = *(long*)( param_1 + 0x148 );
   switchD_00109925_caseD_0:local_2f8 = local_2f8 + 1;
   goto joined_r0x001098e0;
}/* ExtendGDScriptParser::update_symbols() */void ExtendGDScriptParser::update_symbols(ExtendGDScriptParser *this) {
   long *plVar1;
   uint uVar2;
   void *pvVar3;
   long lVar4;
   bool bVar5;
   bool bVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   void *pvVar10;
   char cVar11;
   long lVar12;
   undefined8 *puVar13;
   long in_FS_OFFSET;
   long local_80;
   String local_78[8];
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0xac8 ) != 0 ) && ( *(int*)( this + 0xaec ) != 0 )) {
      lVar7 = 0;
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xae8 ) * 4 );
      if (uVar2 != 0) {
         do {
            if (*(int*)( *(long*)( this + 0xad0 ) + lVar7 ) != 0) {
               *(int*)( *(long*)( this + 0xad0 ) + lVar7 ) = 0;
               pvVar10 = *(void**)( *(long*)( this + 0xac8 ) + lVar7 * 2 );
               if (*(long*)( (long)pvVar10 + 0x10 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar10 + 0x10 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar8 = *(long*)( (long)pvVar10 + 0x10 );
                     *(undefined8*)( (long)pvVar10 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }
               }
               Memory::free_static(pvVar10, false);
               *(undefined8*)( *(long*)( this + 0xac8 ) + lVar7 * 2 ) = 0;
            }
            lVar7 = lVar7 + 4;
         } while ( (ulong)uVar2 << 2 != lVar7 );
      }
      *(undefined4*)( this + 0xaec ) = 0;
      *(undefined1(*) [16])( this + 0xad8 ) = (undefined1[16])0x0;
   }
   if (*(ClassNode**)( this + 0x50 ) != (ClassNode*)0x0) {
      parse_class_symbol(this, *(ClassNode**)( this + 0x50 ), (DocumentSymbol*)( this + 0xa40 ));
      lVar7 = *(long*)( this + 0xaa0 );
      if (lVar7 != 0) {
         lVar12 = 0;
         lVar8 = 0;
         do {
            if (*(long*)( lVar7 + -8 ) <= lVar8) break;
            lVar7 = lVar7 + lVar12;
            bVar5 = SUB81(lVar7, 0);
            local_80 = lVar7;
            HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>::insert(local_78, (DocumentSymbol**)( this + 0xac0 ), bVar5);
            if (*(int*)( lVar7 + 0x20 ) == 5) {
               cVar11 = '\0';
               lVar9 = 0;
               local_70 = (undefined1[16])0x0;
               local_50 = _LC44;
               lVar4 = *(long*)( lVar7 + 0x60 );
               local_60 = (undefined1[16])0x0;
               if (lVar4 == 0) {
                  HashMap<String,HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>>>>::insert((String*)&local_80, (HashMap*)( this + 0xaf0 ), bVar5);
               } else {
                  do {
                     if (*(long*)( lVar4 + -8 ) <= lVar9) break;
                     bVar6 = (bool)( (char)lVar4 + cVar11 );
                     lVar9 = lVar9 + 1;
                     cVar11 = cVar11 + 'h';
                     HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>::insert((String*)&local_80, (DocumentSymbol**)local_78, bVar6);
                     lVar4 = *(long*)( lVar7 + 0x60 );
                  } while ( lVar4 != 0 );
                  pvVar10 = (void*)local_70._0_8_;
                  HashMap<String,HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>>>>::insert((String*)&local_80, (HashMap*)( this + 0xaf0 ), bVar5);
                  if (pvVar10 != (void*)0x0) {
                     if (( local_50._4_4_ != 0 ) && ( uVar2 = *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) ),uVar2 != 0) {
                        lVar7 = 0;
                        do {
                           if (*(int*)( local_70._8_8_ + lVar7 ) != 0) {
                              *(int*)( local_70._8_8_ + lVar7 ) = 0;
                              puVar13 = (undefined8*)( (long)pvVar10 + lVar7 * 2 );
                              pvVar3 = (void*)*puVar13;
                              if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                                 LOCK();
                                 plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                                 *plVar1 = *plVar1 + -1;
                                 UNLOCK();
                                 if (*plVar1 == 0) {
                                    lVar4 = *(long*)( (long)pvVar3 + 0x10 );
                                    *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                                    Memory::free_static((void*)( lVar4 + -0x10 ), false);
                                 }
                                 puVar13 = (undefined8*)( local_70._0_8_ + lVar7 * 2 );
                                 pvVar10 = (void*)local_70._0_8_;
                              }
                              Memory::free_static(pvVar3, false);
                              *puVar13 = 0;
                           }
                           lVar7 = lVar7 + 4;
                        } while ( lVar7 != (ulong)uVar2 * 4 );
                        local_50 = local_50 & 0xffffffff;
                        local_60 = (undefined1[16])0x0;
                        if (pvVar10 == (void*)0x0) goto LAB_0010bfd8;
                     }
                     Memory::free_static(pvVar10, false);
                     Memory::free_static((void*)local_70._8_8_, false);
                  }
               }
            }
            LAB_0010bfd8:lVar8 = lVar8 + 1;
            lVar12 = lVar12 + 0x68;
            lVar7 = *(long*)( this + 0xaa0 );
         } while ( lVar7 != 0 );
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* ExtendGDScriptParser::parse(String const&, String const&) */int ExtendGDScriptParser::parse(ExtendGDScriptParser *this, String *param_1, String *param_2) {
   uint uVar1;
   long lVar2;
   Object *pOVar3;
   long *plVar4;
   char cVar5;
   int iVar6;
   long lVar7;
   void *pvVar8;
   long in_FS_OFFSET;
   GDScriptAnalyzer aGStack_98[8];
   long local_90[2];
   long *local_80;
   void *local_70;
   void *local_68;
   undefined1 local_60[16];
   uint local_50;
   int local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xa28 ) != *(long*)param_2) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xa28 ), (CowData*)param_2);
   }
   String::split((char*)aGStack_98, SUB81(param_1, 0), 0x10c5c6);
   if (*(long*)( this + 0xa38 ) != local_90[0]) {
      CowData<String>::_unref((CowData<String>*)( this + 0xa38 ));
      lVar7 = local_90[0];
      local_90[0] = 0;
      *(long*)( this + 0xa38 ) = lVar7;
   }
   CowData<String>::_unref((CowData<String>*)local_90);
   iVar6 = GDScriptParser::parse((String*)this, param_1, SUB81(param_2, 0), false);
   GDScriptAnalyzer::GDScriptAnalyzer(aGStack_98, (GDScriptParser*)this);
   if (iVar6 == 0) {
      iVar6 = GDScriptAnalyzer::analyze();
   }
   update_diagnostics(this);
   update_symbols(this);
   update_document_links((String*)this);
   if (local_70 != (void*)0x0) {
      if (local_4c != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + (ulong)local_50 * 4 );
         if (uVar1 == 0) {
            local_4c = 0;
            local_60 = (undefined1[16])0x0;
         } else {
            lVar7 = 0;
            pvVar8 = local_70;
            do {
               if (*(int*)( (long)local_68 + lVar7 ) != 0) {
                  pvVar8 = *(void**)( (long)pvVar8 + lVar7 * 2 );
                  *(int*)( (long)local_68 + lVar7 ) = 0;
                  if (*(long*)( (long)pvVar8 + 0x18 ) != 0) {
                     cVar5 = RefCounted::unreference();
                     if (cVar5 != '\0') {
                        pOVar3 = *(Object**)( (long)pvVar8 + 0x18 );
                        cVar5 = predelete_handler(pOVar3);
                        if (cVar5 != '\0') {
                           ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                           Memory::free_static(pOVar3, false);
                        }
                     }
                  }
                  Memory::free_static(pvVar8, false);
                  *(undefined8*)( (long)local_70 + lVar7 * 2 ) = 0;
                  pvVar8 = local_70;
               }
               lVar7 = lVar7 + 4;
            } while ( lVar7 != (ulong)uVar1 << 2 );
            local_4c = 0;
            local_60 = (undefined1[16])0x0;
            local_70 = pvVar8;
            if (pvVar8 == (void*)0x0) goto LAB_0010c3bc;
         }
      }
      Memory::free_static(local_70, false);
      Memory::free_static(local_68, false);
   }
   LAB_0010c3bc:if (local_80 != (long*)0x0) {
      do {
         plVar4 = local_80;
         pvVar8 = (void*)*local_80;
         if (pvVar8 == (void*)0x0) {
            if ((int)local_80[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010c428;
            }
            break;
         }
         if (*(long**)( (long)pvVar8 + 0x18 ) == local_80) {
            lVar7 = *(long*)( (long)pvVar8 + 8 );
            lVar2 = *(long*)( (long)pvVar8 + 0x10 );
            *local_80 = lVar7;
            if (pvVar8 == (void*)local_80[1]) {
               local_80[1] = lVar2;
            }
            if (lVar2 != 0) {
               *(long*)( lVar2 + 8 ) = lVar7;
               lVar7 = *(long*)( (long)pvVar8 + 8 );
            }
            if (lVar7 != 0) {
               *(long*)( lVar7 + 0x10 ) = lVar2;
            }
            Memory::free_static(pvVar8, false);
            *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
         } else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }
      } while ( (int)local_80[2] != 0 );
      Memory::free_static(local_80, false);
   }
   LAB_0010c428:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar6;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* CowData<GDScriptParser::MatchBranchNode*>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<GDScriptParser::MatchBranchNode*>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<GDScriptParser::ParameterNode*>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<GDScriptParser::ParameterNode*>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* ExtendGDScriptParser::get_member_completions() [clone .cold] */void ExtendGDScriptParser::get_member_completions(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<GDScriptParser::EnumNode::Value>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<GDScriptParser::EnumNode::Value>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<lsp::DocumentSymbol>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<lsp::DocumentSymbol>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<lsp::Diagnostic>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<lsp::Diagnostic>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* ExtendGDScriptParser::parse_class_symbol(GDScriptParser::ClassNode const*, lsp::DocumentSymbol&)
   [clone .cold] */void ExtendGDScriptParser::parse_class_symbol(ClassNode *param_1, DocumentSymbol *param_2) {
   code *pcVar1;
   Resource::get_path();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* String::~String() */void String::~String(String *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
   }
   return;
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
}/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */void Variant::operator =(Variant *this, Variant *param_1) {
   undefined8 uVar1;
   if (this != param_1) {
      if (needs_deinit[*(int*)this] != '\0') {
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
}/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }
   return;
}/* List<GDScriptTokenizer::Token, DefaultAllocator>::~List() */void List<GDScriptTokenizer::Token,DefaultAllocator>::~List(List<GDScriptTokenizer::Token,DefaultAllocator> *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   undefined8 *puVar4;
   puVar4 = *(undefined8**)this;
   if (puVar4 == (undefined8*)0x0) {
      return;
   }
   do {
      pvVar2 = (void*)*puVar4;
      if (pvVar2 == (void*)0x0) {
         if (*(int*)( puVar4 + 2 ) != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }
         break;
      }
      if (*(undefined8**)( (long)pvVar2 + 0x58 ) == puVar4) {
         *puVar4 = *(undefined8*)( (long)pvVar2 + 0x48 );
         if (pvVar2 == (void*)puVar4[1]) {
            puVar4[1] = *(undefined8*)( (long)pvVar2 + 0x50 );
         }
         if (*(long*)( (long)pvVar2 + 0x50 ) != 0) {
            *(undefined8*)( *(long*)( (long)pvVar2 + 0x50 ) + 0x48 ) = *(undefined8*)( (long)pvVar2 + 0x48 );
         }
         if (*(long*)( (long)pvVar2 + 0x48 ) != 0) {
            *(undefined8*)( *(long*)( (long)pvVar2 + 0x48 ) + 0x50 ) = *(undefined8*)( (long)pvVar2 + 0x50 );
         }
         if (*(long*)( (long)pvVar2 + 0x40 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x40 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( (long)pvVar2 + 0x40 );
               *(undefined8*)( (long)pvVar2 + 0x40 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }
         }
         if (Variant::needs_deinit[*(int*)( (long)pvVar2 + 8 )] != '\0') {
            Variant::_clear_internal();
         }
         Memory::free_static(pvVar2, false);
         *(int*)( puVar4 + 2 ) = *(int*)( puVar4 + 2 ) + -1;
      } else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
      puVar4 = *(undefined8**)this;
   } while ( *(int*)( puVar4 + 2 ) != 0 );
   Memory::free_static(puVar4, false);
   return;
}/* List<List<int, DefaultAllocator>, DefaultAllocator>::~List() */undefined8 List<List<int,DefaultAllocator>,DefaultAllocator>::~List(List<List<int,DefaultAllocator>,DefaultAllocator> *this) {
   long *plVar1;
   long lVar2;
   void *pvVar3;
   long lVar4;
   undefined8 uVar5;
   long *plVar6;
   long *plVar7;
   undefined8 uStack_28;
   plVar6 = *(long**)this;
   if (plVar6 == (long*)0x0) {
      return uStack_28;
   }
   do {
      plVar1 = (long*)*plVar6;
      if (plVar1 == (long*)0x0) {
         if ((int)plVar6[2] != 0) {
            uVar5 = _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return uVar5;
         }
         break;
      }
      if ((long*)plVar1[3] == plVar6) {
         lVar4 = plVar1[1];
         lVar2 = plVar1[2];
         *plVar6 = lVar4;
         if (plVar1 == (long*)plVar6[1]) {
            plVar6[1] = lVar2;
         }
         if (lVar2 != 0) {
            *(long*)( lVar2 + 8 ) = lVar4;
            lVar4 = plVar1[1];
         }
         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x10 ) = lVar2;
         }
         plVar7 = (long*)*plVar1;
         if (plVar7 != (long*)0x0) {
            do {
               pvVar3 = (void*)*plVar7;
               if (pvVar3 == (void*)0x0) {
                  if ((int)plVar7[2] != 0) {
                     _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                     goto LAB_0010cd5f;
                  }
                  break;
               }
               if (plVar7 == *(long**)( (long)pvVar3 + 0x18 )) {
                  lVar4 = *(long*)( (long)pvVar3 + 8 );
                  lVar2 = *(long*)( (long)pvVar3 + 0x10 );
                  *plVar7 = lVar4;
                  if (pvVar3 == (void*)plVar7[1]) {
                     plVar7[1] = lVar2;
                  }
                  if (lVar2 != 0) {
                     *(long*)( lVar2 + 8 ) = lVar4;
                     lVar4 = *(long*)( (long)pvVar3 + 8 );
                  }
                  if (lVar4 != 0) {
                     *(long*)( lVar4 + 0x10 ) = lVar2;
                  }
                  Memory::free_static(pvVar3, false);
                  *(int*)( plVar7 + 2 ) = (int)plVar7[2] + -1;
               } else {
                  _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
               }
               plVar7 = (long*)*plVar1;
            } while ( (int)plVar7[2] != 0 );
            Memory::free_static(plVar7, false);
         }
         LAB_0010cd5f:Memory::free_static(plVar1, false);
         *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
      } else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
      plVar6 = *(long**)this;
   } while ( (int)plVar6[2] != 0 );
   uVar5 = Memory::free_static(plVar6, false);
   return uVar5;
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
}/* WARNING: Removing unreachable block (ram,0x0010d0a0) *//* WARNING: Removing unreachable block (ram,0x0010d235) *//* WARNING: Removing unreachable block (ram,0x0010d241) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4) {
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
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* WARNING: Removing unreachable block (ram,0x0010d398) *//* WARNING: Removing unreachable block (ram,0x0010d52d) *//* WARNING: Removing unreachable block (ram,0x0010d539) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
}/* CowData<Variant>::_unref() */void CowData<Variant>::_unref(CowData<Variant> *this) {
   long *plVar1;
   int *piVar2;
   long lVar3;
   code *pcVar4;
   int *piVar5;
   long lVar6;
   if (*(long*)this == 0) {
      return;
   }
   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      piVar2 = *(int**)this;
      if (piVar2 != (int*)0x0) {
         lVar3 = *(long*)( piVar2 + -2 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar6 = 0;
            piVar5 = piVar2;
            do {
               if (Variant::needs_deinit[*piVar5] != '\0') {
                  Variant::_clear_internal();
               }
               lVar6 = lVar6 + 1;
               piVar5 = piVar5 + 6;
            } while ( lVar3 != lVar6 );
         }
         Memory::free_static(piVar2 + -4, false);
         return;
      }
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   *(undefined8*)this = 0;
   return;
}/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
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
            } while ( lVar3 != lVar7 );
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
}/* GDScriptTokenizerText::~GDScriptTokenizerText() */void GDScriptTokenizerText::~GDScriptTokenizerText(GDScriptTokenizerText *this) {
   uint uVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   void *pvVar5;
   *(code**)this = FileAccess::create;
   pvVar5 = *(void**)( this + 0x150 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x174 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x170 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x174 ) = 0;
            *(undefined1(*) [16])( this + 0x160 ) = (undefined1[16])0x0;
         } else {
            lVar3 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x158 ) + lVar3 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar3 * 2 );
                  *(int*)( *(long*)( this + 0x158 ) + lVar3 ) = 0;
                  if (*(long*)( (long)pvVar5 + 0x18 ) != 0) {
                     LOCK();
                     plVar4 = (long*)( *(long*)( (long)pvVar5 + 0x18 ) + -0x10 );
                     *plVar4 = *plVar4 + -1;
                     UNLOCK();
                     if (*plVar4 == 0) {
                        lVar2 = *(long*)( (long)pvVar5 + 0x18 );
                        *(undefined8*)( (long)pvVar5 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar2 + -0x10 ), false);
                     }
                  }
                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x150 );
                  *(undefined8*)( (long)pvVar5 + lVar3 * 2 ) = 0;
               }
               lVar3 = lVar3 + 4;
            } while ( lVar3 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x174 ) = 0;
            *(undefined1(*) [16])( this + 0x160 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_0010d7c9;
         }
      }
      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x158 ), false);
   }
   LAB_0010d7c9:CowData<String>::_unref((CowData<String>*)( this + 0x140 ));
   if (*(long*)( this + 0x130 ) != 0) {
      LOCK();
      plVar4 = (long*)( *(long*)( this + 0x130 ) + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         lVar3 = *(long*)( this + 0x130 );
         *(undefined8*)( this + 0x130 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   plVar4 = *(long**)( this + 0x110 );
   if (plVar4 != (long*)0x0) {
      do {
         pvVar5 = (void*)*plVar4;
         if (pvVar5 == (void*)0x0) {
            if ((int)plVar4[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010d85f;
            }
            break;
         }
         if (plVar4 == *(long**)( (long)pvVar5 + 0x18 )) {
            lVar3 = *(long*)( (long)pvVar5 + 8 );
            lVar2 = *(long*)( (long)pvVar5 + 0x10 );
            *plVar4 = lVar3;
            if (pvVar5 == (void*)plVar4[1]) {
               plVar4[1] = lVar2;
            }
            if (lVar2 != 0) {
               *(long*)( lVar2 + 8 ) = lVar3;
               lVar3 = *(long*)( (long)pvVar5 + 8 );
            }
            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x10 ) = lVar2;
            }
            Memory::free_static(pvVar5, false);
            *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
         } else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }
         plVar4 = *(long**)( this + 0x110 );
      } while ( (int)plVar4[2] != 0 );
      Memory::free_static(plVar4, false);
   }
   LAB_0010d85f:List<List<int,DefaultAllocator>,DefaultAllocator>::~List((List<List<int,DefaultAllocator>,DefaultAllocator>*)( this + 0x108 ));
   plVar4 = *(long**)( this + 0x100 );
   if (plVar4 != (long*)0x0) {
      do {
         pvVar5 = (void*)*plVar4;
         if (pvVar5 == (void*)0x0) {
            if ((int)plVar4[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010d8dd;
            }
            break;
         }
         if (plVar4 == *(long**)( (long)pvVar5 + 0x18 )) {
            lVar3 = *(long*)( (long)pvVar5 + 8 );
            lVar2 = *(long*)( (long)pvVar5 + 0x10 );
            *plVar4 = lVar3;
            if (pvVar5 == (void*)plVar4[1]) {
               plVar4[1] = lVar2;
            }
            if (lVar2 != 0) {
               *(long*)( lVar2 + 8 ) = lVar3;
               lVar3 = *(long*)( (long)pvVar5 + 8 );
            }
            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x10 ) = lVar2;
            }
            Memory::free_static(pvVar5, false);
            *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
         } else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }
         plVar4 = *(long**)( this + 0x100 );
      } while ( (int)plVar4[2] != 0 );
      Memory::free_static(plVar4, false);
   }
   LAB_0010d8dd:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xf0 ));
   if (Variant::needs_deinit[*(int*)( this + 0xb8 )] != '\0') {
      Variant::_clear_internal();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xa8 ));
   if (Variant::needs_deinit[*(int*)( this + 0x70 )] != '\0') {
      Variant::_clear_internal();
   }
   List<GDScriptTokenizer::Token,DefaultAllocator>::~List((List<GDScriptTokenizer::Token,DefaultAllocator>*)( this + 0x58 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
   return;
}/* GDScriptTokenizerText::~GDScriptTokenizerText() */void GDScriptTokenizerText::~GDScriptTokenizerText(GDScriptTokenizerText *this) {
   ~GDScriptTokenizerText(this)
   ;;
   operator_delete(this, 0x178);
   return;
}/* CowData<GDScriptParser::DataType>::_unref() */void CowData<GDScriptParser::DataType>::_unref(CowData<GDScriptParser::DataType> *this) {
   long *plVar1;
   DataType *pDVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   DataType *this_00;
   if (*(long*)this == 0) {
      return;
   }
   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      pDVar2 = *(DataType**)this;
      if (pDVar2 != (DataType*)0x0) {
         lVar3 = *(long*)( pDVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar5 = 0;
            this_00 = pDVar2;
            do {
               lVar5 = lVar5 + 1;
               GDScriptParser::DataType::~DataType(this_00);
               this_00 = this_00 + 0xf0;
            } while ( lVar3 != lVar5 );
         }
         Memory::free_static(pDVar2 + -0x10, false);
         return;
      }
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   *(undefined8*)this = 0;
   return;
}/* GDScriptParser::DataType::~DataType() */void GDScriptParser::DataType::~DataType(DataType *this) {
   uint uVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   void *pvVar6;
   long *plVar7;
   bool bVar8;
   pvVar6 = *(void**)( this + 200 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0xec ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xe8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0xec ) = 0;
            *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
         } else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xd0 ) + lVar5 ) != 0) {
                  bVar8 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0xd0 ) + lVar5 ) = 0;
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  if (( bVar8 ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }
                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 200 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }
               lVar5 = lVar5 + 4;
            } while ( lVar5 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0xec ) = 0;
            *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0010ddaa;
         }
      }
      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0xd0 ), false);
   }
   LAB_0010ddaa:if (*(long*)( this + 0xb8 ) != 0) {
      LOCK();
      plVar7 = (long*)( *(long*)( this + 0xb8 ) + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         lVar5 = *(long*)( this + 0xb8 );
         *(undefined8*)( this + 0xb8 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }
   }
   CowData<Variant>::_unref((CowData<Variant>*)( this + 0xa0 ));
   plVar7 = *(long**)( this + 0x90 );
   if (plVar7 != (long*)0x0) {
      do {
         pvVar6 = (void*)*plVar7;
         if (pvVar6 == (void*)0x0) {
            if ((int)plVar7[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010de7b;
            }
            break;
         }
         if (*(long**)( (long)pvVar6 + 0x40 ) == plVar7) {
            lVar5 = *(long*)( (long)pvVar6 + 0x30 );
            lVar2 = *(long*)( (long)pvVar6 + 0x38 );
            *plVar7 = lVar5;
            if (pvVar6 == (void*)plVar7[1]) {
               plVar7[1] = lVar2;
            }
            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x30 ) = lVar5;
               lVar5 = *(long*)( (long)pvVar6 + 0x30 );
            }
            if (lVar5 != 0) {
               *(long*)( lVar5 + 0x38 ) = lVar2;
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar6 + 0x20 ));
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
               StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar6 + 8 ));
            Memory::free_static(pvVar6, false);
            *(int*)( plVar7 + 2 ) = (int)plVar7[2] + -1;
         } else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }
         plVar7 = *(long**)( this + 0x90 );
      } while ( (int)plVar7[2] != 0 );
      Memory::free_static(plVar7, false);
   }
   LAB_0010de7b:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x78 ));
   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x68 ) != 0 )) {
      StringName::unref();
   }
   for (int i = 0; i < 3; i++) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + ( -16*i + 96 ) ));
   }
   if (*(long*)( this + 0x38 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x38 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }
      }
   }
   if (StringName::configured != '\0') {
      if (*(long*)( this + 0x30 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010df00;
      }
      if (*(long*)( this + 0x28 ) != 0) {
         StringName::unref();
      }
   }
   LAB_0010df00:CowData<GDScriptParser::DataType>::_unref((CowData<GDScriptParser::DataType>*)( this + 8 ));
   return;
}/* HashMap<StringName, long, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, long> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::_resize_and_rehash(HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>> *this, uint param_1) {
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
         } while ( uVar22 != uVar26 );
      } else {
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
            };
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }
         uVar26 = uVar26 + 1;
      } while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, long, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, long> > >::insert(StringName const&, long
   const&, bool) */StringName *
HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>
::insert(StringName *param_1,long *param_2,bool param_3){
   uint *puVar1;
   uint uVar2;
   undefined8 *puVar3;
   long lVar4;
   void *__s;
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
   ulong uVar21;
   long *plVar22;
   uint uVar23;
   uint uVar24;
   long lVar25;
   void *__s_00;
   long *in_RCX;
   uint uVar26;
   int iVar27;
   undefined7 in_register_00000011;
   StringName *pSVar28;
   long lVar29;
   long lVar30;
   ulong uVar31;
   char in_R8B;
   uint uVar32;
   ulong uVar33;
   uint uVar34;
   long *plVar35;
   long in_FS_OFFSET;
   bool bVar36;
   long *local_80;
   long local_58;
   long local_50;
   long local_40;
   pSVar28 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   if (param_2[1] == 0) {
      uVar21 = (ulong)uVar23;
      uVar31 = uVar21 * 4;
      uVar33 = uVar21 * 8;
      lVar25 = Memory::alloc_static(uVar31, false);
      param_2[2] = lVar25;
      __s_00 = (void*)Memory::alloc_static(uVar33, false);
      param_2[1] = (long)__s_00;
      if (uVar23 != 0) {
         __s = (void*)param_2[2];
         if (( __s < (void*)( (long)__s_00 + uVar33 ) ) && ( __s_00 < (void*)( (long)__s + uVar31 ) )) {
            uVar31 = 0;
            do {
               *(undefined4*)( (long)__s + uVar31 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar31 * 8 ) = 0;
               uVar31 = uVar31 + 1;
            } while ( uVar21 != uVar31 );
         } else {
            memset(__s, 0, uVar31);
            memset(__s_00, 0, uVar33);
         }
         goto LAB_0010e372;
      }
      iVar27 = *(int*)( (long)param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_0010e499;
      if (*(int*)( (long)param_2 + 0x2c ) != 0) goto LAB_0010e37e;
      LAB_0010e4bb:if ((int)param_2[5] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_80 = (long*)0x0;
         goto LAB_0010e451;
      }
      _resize_and_rehash((HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>*)param_2, (int)param_2[5] + 1);
   } else {
      LAB_0010e372:iVar27 = *(int*)( (long)param_2 + 0x2c );
      if (iVar27 != 0) {
         LAB_0010e37e:uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
         uVar31 = CONCAT44(0, uVar2);
         lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
         if (*(long*)pSVar28 == 0) {
            uVar24 = StringName::get_empty_hash();
         } else {
            uVar24 = *(uint*)( *(long*)pSVar28 + 0x20 );
         }
         if (uVar24 == 0) {
            uVar24 = 1;
         }
         uVar34 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = (ulong)uVar24 * lVar25;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = uVar31;
         lVar29 = SUB168(auVar5 * auVar13, 8);
         uVar32 = *(uint*)( param_2[2] + lVar29 * 4 );
         uVar26 = SUB164(auVar5 * auVar13, 8);
         if (uVar32 != 0) {
            do {
               if (( uVar24 == uVar32 ) && ( *(long*)( *(long*)( param_2[1] + lVar29 * 8 ) + 0x10 ) == *(long*)pSVar28 )) {
                  local_80 = *(long**)( param_2[1] + (ulong)uVar26 * 8 );
                  local_80[3] = *in_RCX;
                  goto LAB_0010e451;
               }
               uVar34 = uVar34 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar26 + 1) * lVar25;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = uVar31;
               lVar29 = SUB168(auVar6 * auVar14, 8);
               uVar32 = *(uint*)( param_2[2] + lVar29 * 4 );
               uVar26 = SUB164(auVar6 * auVar14, 8);
            } while ( ( uVar32 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar32 * lVar25,auVar15._8_8_ = 0,auVar15._0_8_ = uVar31,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar2 + uVar26 ) - SUB164(auVar7 * auVar15, 8)) * lVar25,auVar16._8_8_ = 0,auVar16._0_8_ = uVar31,uVar34 <= SUB164(auVar8 * auVar16, 8) );
         }
         iVar27 = *(int*)( (long)param_2 + 0x2c );
      }
      LAB_0010e499:if ((float)uVar23 * __LC38 < (float)( iVar27 + 1 )) goto LAB_0010e4bb;
   }
   StringName::StringName((StringName*)&local_58, pSVar28);
   local_50 = *in_RCX;
   local_80 = (long*)operator_new(0x20, "");
   *local_80 = 0;
   local_80[1] = 0;
   StringName::StringName((StringName*)( local_80 + 2 ), (StringName*)&local_58);
   bVar36 = StringName::configured != '\0';
   local_80[3] = local_50;
   if (( bVar36 ) && ( local_58 != 0 )) {
      StringName::unref();
   }
   puVar3 = (undefined8*)param_2[4];
   if (puVar3 == (undefined8*)0x0) {
      param_2[3] = (long)local_80;
      param_2[4] = (long)local_80;
      LAB_0010e574:lVar25 = *(long*)pSVar28;
      if (lVar25 != 0) goto LAB_0010e581;
      LAB_0010e67d:uVar23 = StringName::get_empty_hash();
   } else {
      if (in_R8B != '\0') {
         lVar25 = param_2[3];
         *(long**)( lVar25 + 8 ) = local_80;
         *local_80 = lVar25;
         param_2[3] = (long)local_80;
         goto LAB_0010e574;
      }
      *puVar3 = local_80;
      local_80[1] = (long)puVar3;
      lVar25 = *(long*)pSVar28;
      param_2[4] = (long)local_80;
      if (lVar25 == 0) goto LAB_0010e67d;
      LAB_0010e581:uVar23 = *(uint*)( lVar25 + 0x20 );
   }
   lVar25 = param_2[2];
   if (uVar23 == 0) {
      uVar23 = 1;
   }
   uVar31 = (ulong)uVar23;
   uVar32 = 0;
   lVar29 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
   uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   uVar33 = CONCAT44(0, uVar2);
   auVar9._8_8_ = 0;
   auVar9._0_8_ = uVar31 * lVar29;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar33;
   lVar30 = SUB168(auVar9 * auVar17, 8);
   lVar4 = param_2[1];
   puVar1 = (uint*)( lVar25 + lVar30 * 4 );
   iVar27 = SUB164(auVar9 * auVar17, 8);
   uVar24 = *puVar1;
   plVar22 = local_80;
   while (uVar24 != 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar24 * lVar29;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar33;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(( uVar2 + iVar27 ) - SUB164(auVar10 * auVar18, 8)) * lVar29;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar33;
      uVar23 = SUB164(auVar11 * auVar19, 8);
      plVar35 = plVar22;
      if (uVar23 < uVar32) {
         *puVar1 = (uint)uVar31;
         uVar31 = (ulong)uVar24;
         puVar3 = (undefined8*)( lVar4 + lVar30 * 8 );
         plVar35 = (long*)*puVar3;
         *puVar3 = plVar22;
         uVar32 = uVar23;
      }
      uVar23 = (uint)uVar31;
      uVar32 = uVar32 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar27 + 1) * lVar29;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar33;
      lVar30 = SUB168(auVar12 * auVar20, 8);
      puVar1 = (uint*)( lVar25 + lVar30 * 4 );
      iVar27 = SUB164(auVar12 * auVar20, 8);
      plVar22 = plVar35;
      uVar24 = *puVar1;
   };
   *(long**)( lVar4 + lVar30 * 8 ) = plVar22;
   *puVar1 = uVar23;
   *(int*)( (long)param_2 + 0x2c ) = *(int*)( (long)param_2 + 0x2c ) + 1;
   LAB_0010e451:*(long**)param_1 = local_80;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GDScriptParser::DataType::DataType(GDScriptParser::DataType const&) */void GDScriptParser::DataType::DataType(DataType *this, DataType *param_1) {
   HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>> *this_00;
   Object *pOVar1;
   Object *pOVar2;
   void *pvVar3;
   long lVar4;
   char cVar5;
   uint uVar6;
   undefined1(*pauVar7)[16];
   undefined4 *puVar8;
   uint uVar10;
   long *plVar11;
   undefined4 *puVar12;
   long lVar13;
   long in_FS_OFFSET;
   StringName local_48[8];
   long local_40;
   ulong uVar9;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x60 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 200 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 8 ) = 0;
   *(undefined4*)( this + 0x58 ) = 0;
   *(undefined4*)( this + 0x70 ) = 0;
   *(undefined8*)( this + 0x78 ) = 0;
   *(undefined4*)( this + 0x80 ) = 6;
   *(undefined8*)( this + 0x88 ) = 1;
   *(undefined8*)( this + 0x90 ) = 0;
   *(undefined8*)( this + 0xa0 ) = 0;
   *(undefined4*)( this + 0xa8 ) = 0;
   *(undefined8*)( this + 0xb8 ) = 0;
   *(undefined8*)( this + 0xe8 ) = 2;
   *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
   *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_1 + 0x18 );
   this[0x1c] = param_1[0x1c];
   *(undefined4*)( this + 0x20 ) = *(undefined4*)( param_1 + 0x20 );
   StringName::operator =((StringName*)( this + 0x28 ), (StringName*)( param_1 + 0x28 ));
   StringName::operator =((StringName*)( this + 0x30 ), (StringName*)( param_1 + 0x30 ));
   pOVar1 = *(Object**)( param_1 + 0x38 );
   pOVar2 = *(Object**)( this + 0x38 );
   if (pOVar1 != pOVar2) {
      *(Object**)( this + 0x38 ) = pOVar1;
      if (pOVar1 != (Object*)0x0) {
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            *(undefined8*)( this + 0x38 ) = 0;
         }
      }
      if (pOVar2 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(pOVar2);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }
         }
      }
   }
   if (*(long*)( this + 0x40 ) != *(long*)( param_1 + 0x40 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x40 ), (CowData*)( param_1 + 0x40 ));
   }
   *(undefined8*)( this + 0x48 ) = *(undefined8*)( param_1 + 0x48 );
   if (*(long*)( this + 0x50 ) != *(long*)( param_1 + 0x50 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x50 ), (CowData*)( param_1 + 0x50 ));
   }
   *(undefined4*)( this + 0x58 ) = *(undefined4*)( param_1 + 0x58 );
   if (*(long*)( this + 0x60 ) != *(long*)( param_1 + 0x60 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x60 ), (CowData*)( param_1 + 0x60 ));
   }
   StringName::operator =((StringName*)( this + 0x68 ), (StringName*)( param_1 + 0x68 ));
   *(undefined4*)( this + 0x70 ) = *(undefined4*)( param_1 + 0x70 );
   if (*(long*)( this + 0x78 ) != *(long*)( param_1 + 0x78 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x78 ), (CowData*)( param_1 + 0x78 ));
   }
   plVar11 = *(long**)( this + 0x90 );
   *(undefined4*)( this + 0x80 ) = *(undefined4*)( param_1 + 0x80 );
   *(undefined8*)( this + 0x88 ) = *(undefined8*)( param_1 + 0x88 );
   if (plVar11 != (long*)0x0) {
      do {
         pvVar3 = (void*)*plVar11;
         if (pvVar3 == (void*)0x0) goto LAB_0010eaa0;
         if (*(long**)( (long)pvVar3 + 0x40 ) == plVar11) {
            lVar13 = *(long*)( (long)pvVar3 + 0x30 );
            lVar4 = *(long*)( (long)pvVar3 + 0x38 );
            *plVar11 = lVar13;
            if (pvVar3 == (void*)plVar11[1]) {
               plVar11[1] = lVar4;
            }
            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x30 ) = lVar13;
               lVar13 = *(long*)( (long)pvVar3 + 0x30 );
            }
            if (lVar13 != 0) {
               *(long*)( lVar13 + 0x38 ) = lVar4;
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x20 ));
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
               StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 8 ));
            Memory::free_static(pvVar3, false);
            *(int*)( plVar11 + 2 ) = (int)plVar11[2] + -1;
         } else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }
         plVar11 = *(long**)( this + 0x90 );
      } while ( (int)plVar11[2] != 0 );
      Memory::free_static(plVar11, false);
      *(undefined8*)( this + 0x90 ) = 0;
   }
   plVar11 = (long*)0x0;
   LAB_0010eaa0:if (( *(undefined8**)( param_1 + 0x90 ) != (undefined8*)0x0 ) && ( puVar12 = (undefined4*)**(undefined8**)( param_1 + 0x90 ) ),puVar12 != (undefined4*)0x0) {
      if (plVar11 == (long*)0x0) {
         pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( this + 0x90 ) = pauVar7;
         *(undefined4*)pauVar7[1] = 0;
         *pauVar7 = (undefined1[16])0x0;
      }
      do {
         while (true) {
            puVar8 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
            *(undefined8*)( puVar8 + 8 ) = 0;
            *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
            lVar13 = *(long*)( puVar12 + 2 );
            *puVar8 = 0;
            puVar8[6] = 0;
            puVar8[10] = 6;
            *(undefined8*)( puVar8 + 0x10 ) = 0;
            *(undefined1(*) [16])( puVar8 + 0xc ) = (undefined1[16])0x0;
            *puVar8 = *puVar12;
            if (lVar13 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 2 ), (CowData*)( puVar12 + 2 ));
            }
            StringName::operator =((StringName*)( puVar8 + 4 ), (StringName*)( puVar12 + 4 ));
            puVar8[6] = puVar12[6];
            if (*(long*)( puVar8 + 8 ) != *(long*)( puVar12 + 8 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 8 ), (CowData*)( puVar12 + 8 ));
            }
            puVar8[10] = puVar12[10];
            plVar11 = *(long**)( this + 0x90 );
            lVar13 = plVar11[1];
            *(undefined8*)( puVar8 + 0xc ) = 0;
            *(long**)( puVar8 + 0x10 ) = plVar11;
            *(long*)( puVar8 + 0xe ) = lVar13;
            if (lVar13 != 0) {
               *(undefined4**)( lVar13 + 0x30 ) = puVar8;
            }
            plVar11[1] = (long)puVar8;
            if (*plVar11 == 0) break;
            puVar12 = *(undefined4**)( puVar12 + 0xc );
            *(int*)( plVar11 + 2 ) = (int)plVar11[2] + 1;
            if (puVar12 == (undefined4*)0x0) goto LAB_0010ebd1;
         };
         puVar12 = *(undefined4**)( puVar12 + 0xc );
         *(int*)( plVar11 + 2 ) = (int)plVar11[2] + 1;
         *plVar11 = (long)puVar8;
      } while ( puVar12 != (undefined4*)0x0 );
   }
   LAB_0010ebd1:if (*(long*)( this + 0xa0 ) != *(long*)( param_1 + 0xa0 )) {
      CowData<Variant>::_ref((CowData<Variant>*)( this + 0xa0 ), (CowData*)( param_1 + 0xa0 ));
   }
   *(undefined4*)( this + 0xa8 ) = *(undefined4*)( param_1 + 0xa8 );
   if (*(long*)( this + 0xb8 ) != *(long*)( param_1 + 0xb8 )) {
      CowData<int>::_ref((CowData<int>*)( this + 0xb8 ), (CowData*)( param_1 + 0xb8 ));
   }
   this_00 = (HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>*)( this + 0xc0 );
   if (this_00 != (HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>*)( param_1 + 0xc0 )) {
      uVar10 = *(uint*)( this + 0xe8 );
      uVar6 = *(uint*)( hash_table_size_primes + (ulong)uVar10 * 4 );
      if (( *(int*)( this + 0xec ) != 0 ) && ( *(long*)( this + 200 ) != 0 )) {
         if (uVar6 != 0) {
            lVar13 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xd0 ) + lVar13 ) != 0) {
                  *(int*)( *(long*)( this + 0xd0 ) + lVar13 ) = 0;
                  pvVar3 = *(void**)( *(long*)( this + 200 ) + lVar13 * 2 );
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }
                  Memory::free_static(pvVar3, false);
                  *(undefined8*)( *(long*)( this + 200 ) + lVar13 * 2 ) = 0;
               }
               lVar13 = lVar13 + 4;
            } while ( lVar13 != (ulong)uVar6 * 4 );
            uVar10 = *(uint*)( this + 0xe8 );
            uVar6 = *(uint*)( hash_table_size_primes + (ulong)uVar10 * 4 );
         }
         *(undefined4*)( this + 0xec ) = 0;
         *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
      }
      if (uVar6 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0xe8 ) * 4 )) {
         if (uVar10 != 0x1c) {
            uVar9 = (ulong)uVar10;
            do {
               uVar6 = (int)uVar9 + 1;
               uVar9 = (ulong)uVar6;
               if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0xe8 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar9 * 4 )) {
                  if (uVar10 != uVar6) {
                     if (*(long*)( this + 200 ) == 0) {
                        *(uint*)( this + 0xe8 ) = uVar6;
                     } else {
                        HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::_resize_and_rehash(this_00, uVar6);
                     }
                  }
                  goto LAB_0010ecc1;
               }
            } while ( uVar6 != 0x1c );
         }
         _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      }
      LAB_0010ecc1:if (( *(long*)( param_1 + 200 ) != 0 ) && ( plVar11 = *(long**)( param_1 + 0xd8 ) ),plVar11 != (long*)0x0) {
         do {
            HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::insert(local_48, (long*)this_00, (bool)( (char)plVar11 + '\x10' ));
            plVar11 = (long*)*plVar11;
         } while ( plVar11 != (long*)0x0 );
      }
   }
   if (*(long*)( this + 8 ) == *(long*)( param_1 + 8 )) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CowData<GDScriptParser::DataType>::_ref((CowData<GDScriptParser::DataType>*)( this + 8 ), (CowData*)( param_1 + 8 ));
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GDScriptParser::ClassNode::Member::get_datatype() const */void GDScriptParser::ClassNode::Member::get_datatype(void) {
   long lVar1;
   long lVar2;
   undefined4 *in_RSI;
   undefined8 *puVar3;
   DataType *in_RDI;
   DataType *pDVar4;
   long in_FS_OFFSET;
   byte bVar5;
   bVar5 = 0;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (*in_RSI) {
      case 0:
      case 8:
    pDVar4 = in_RDI;
    for (lVar2 = 0x1e; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined8 *)pDVar4 = 0;
      pDVar4 = pDVar4 + 8;
    }
    *(undefined4 *)(in_RDI + 0x10) = 7;
    *(undefined4 *)(in_RDI + 0x80) = 6;
    *(undefined4 *)(in_RDI + 0x88) = 1;
    *(undefined4 *)(in_RDI + 0xe8) = 2;
    goto LAB_0010efd2;
      for (int i = 0; i < 5; i++) {
         case 1:
      }
      case 6:
    puVar3 = *(undefined8 **)(in_RSI + 2);
    break;
      case 7:
    puVar3 = *(undefined8 **)(in_RSI + 4);
    break;
      default:
    _err_print_error("get_datatype","modules/gdscript/language_server/../gdscript_parser.h",0x2a9,
                     "Method/function failed. Returning: DataType()","Reaching unhandled type.",0,0)
    ;
    pDVar4 = in_RDI;
    for (lVar2 = 0x1e; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined8 *)pDVar4 = 0;
      pDVar4 = pDVar4 + (ulong)bVar5 * -0x10 + 8;
    }
    *(undefined4 *)(in_RDI + 0x10) = 7;
    *(undefined4 *)(in_RDI + 0x80) = 6;
    *(undefined4 *)(in_RDI + 0x88) = 1;
    *(undefined4 *)(in_RDI + 0xe8) = 2;
    goto LAB_0010efd2;
   }
   if (*(code**)*puVar3 == Node::get_datatype) {
      DataType::DataType(in_RDI, (DataType*)( puVar3 + 7 ));
   } else {
      ( **(code**)*puVar3 )();
   }
   LAB_0010efd2:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* GDScriptParser::DataType::TEMPNAMEPLACEHOLDERVALUE(GDScriptParser::DataType const&) */void GDScriptParser::DataType::operator =(DataType *this, DataType *param_1) {
   HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>> *this_00;
   Object *pOVar1;
   Object *pOVar2;
   void *pvVar3;
   long lVar4;
   char cVar5;
   uint uVar6;
   undefined1(*pauVar7)[16];
   undefined4 *puVar8;
   uint uVar10;
   long *plVar11;
   undefined4 *puVar12;
   long lVar13;
   long in_FS_OFFSET;
   StringName local_48[8];
   long local_40;
   ulong uVar9;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
   *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_1 + 0x18 );
   this[0x1c] = param_1[0x1c];
   *(undefined4*)( this + 0x20 ) = *(undefined4*)( param_1 + 0x20 );
   StringName::operator =((StringName*)( this + 0x28 ), (StringName*)( param_1 + 0x28 ));
   StringName::operator =((StringName*)( this + 0x30 ), (StringName*)( param_1 + 0x30 ));
   pOVar1 = *(Object**)( param_1 + 0x38 );
   pOVar2 = *(Object**)( this + 0x38 );
   if (pOVar1 != pOVar2) {
      *(Object**)( this + 0x38 ) = pOVar1;
      if (pOVar1 != (Object*)0x0) {
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            *(undefined8*)( this + 0x38 ) = 0;
         }
      }
      if (pOVar2 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(pOVar2);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }
         }
      }
   }
   if (*(long*)( this + 0x40 ) != *(long*)( param_1 + 0x40 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x40 ), (CowData*)( param_1 + 0x40 ));
   }
   *(undefined8*)( this + 0x48 ) = *(undefined8*)( param_1 + 0x48 );
   if (*(long*)( this + 0x50 ) != *(long*)( param_1 + 0x50 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x50 ), (CowData*)( param_1 + 0x50 ));
   }
   *(undefined4*)( this + 0x58 ) = *(undefined4*)( param_1 + 0x58 );
   if (*(long*)( this + 0x60 ) != *(long*)( param_1 + 0x60 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x60 ), (CowData*)( param_1 + 0x60 ));
   }
   StringName::operator =((StringName*)( this + 0x68 ), (StringName*)( param_1 + 0x68 ));
   *(undefined4*)( this + 0x70 ) = *(undefined4*)( param_1 + 0x70 );
   if (*(long*)( this + 0x78 ) != *(long*)( param_1 + 0x78 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x78 ), (CowData*)( param_1 + 0x78 ));
   }
   plVar11 = *(long**)( this + 0x90 );
   *(undefined4*)( this + 0x80 ) = *(undefined4*)( param_1 + 0x80 );
   *(undefined4*)( this + 0x88 ) = *(undefined4*)( param_1 + 0x88 );
   *(undefined4*)( this + 0x8c ) = *(undefined4*)( param_1 + 0x8c );
   if (plVar11 != (long*)0x0) {
      do {
         pvVar3 = (void*)*plVar11;
         if (pvVar3 == (void*)0x0) goto LAB_0010f2e0;
         if (*(long**)( (long)pvVar3 + 0x40 ) == plVar11) {
            lVar13 = *(long*)( (long)pvVar3 + 0x30 );
            lVar4 = *(long*)( (long)pvVar3 + 0x38 );
            *plVar11 = lVar13;
            if (pvVar3 == (void*)plVar11[1]) {
               plVar11[1] = lVar4;
            }
            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x30 ) = lVar13;
               lVar13 = *(long*)( (long)pvVar3 + 0x30 );
            }
            if (lVar13 != 0) {
               *(long*)( lVar13 + 0x38 ) = lVar4;
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x20 ));
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
               StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 8 ));
            Memory::free_static(pvVar3, false);
            *(int*)( plVar11 + 2 ) = (int)plVar11[2] + -1;
         } else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }
         plVar11 = *(long**)( this + 0x90 );
      } while ( (int)plVar11[2] != 0 );
      Memory::free_static(plVar11, false);
      *(undefined8*)( this + 0x90 ) = 0;
   }
   plVar11 = (long*)0x0;
   LAB_0010f2e0:if (( *(undefined8**)( param_1 + 0x90 ) != (undefined8*)0x0 ) && ( puVar12 = (undefined4*)**(undefined8**)( param_1 + 0x90 ) ),puVar12 != (undefined4*)0x0) {
      if (plVar11 == (long*)0x0) {
         pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( this + 0x90 ) = pauVar7;
         *(undefined4*)pauVar7[1] = 0;
         *pauVar7 = (undefined1[16])0x0;
      }
      do {
         while (true) {
            puVar8 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
            *(undefined8*)( puVar8 + 8 ) = 0;
            *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
            lVar13 = *(long*)( puVar12 + 2 );
            *puVar8 = 0;
            puVar8[6] = 0;
            puVar8[10] = 6;
            *(undefined8*)( puVar8 + 0x10 ) = 0;
            *(undefined1(*) [16])( puVar8 + 0xc ) = (undefined1[16])0x0;
            *puVar8 = *puVar12;
            if (lVar13 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 2 ), (CowData*)( puVar12 + 2 ));
            }
            StringName::operator =((StringName*)( puVar8 + 4 ), (StringName*)( puVar12 + 4 ));
            puVar8[6] = puVar12[6];
            if (*(long*)( puVar8 + 8 ) != *(long*)( puVar12 + 8 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 8 ), (CowData*)( puVar12 + 8 ));
            }
            puVar8[10] = puVar12[10];
            plVar11 = *(long**)( this + 0x90 );
            lVar13 = plVar11[1];
            *(undefined8*)( puVar8 + 0xc ) = 0;
            *(long**)( puVar8 + 0x10 ) = plVar11;
            *(long*)( puVar8 + 0xe ) = lVar13;
            if (lVar13 != 0) {
               *(undefined4**)( lVar13 + 0x30 ) = puVar8;
            }
            plVar11[1] = (long)puVar8;
            if (*plVar11 == 0) break;
            puVar12 = *(undefined4**)( puVar12 + 0xc );
            *(int*)( plVar11 + 2 ) = (int)plVar11[2] + 1;
            if (puVar12 == (undefined4*)0x0) goto LAB_0010f411;
         };
         puVar12 = *(undefined4**)( puVar12 + 0xc );
         *(int*)( plVar11 + 2 ) = (int)plVar11[2] + 1;
         *plVar11 = (long)puVar8;
      } while ( puVar12 != (undefined4*)0x0 );
   }
   LAB_0010f411:if (*(long*)( this + 0xa0 ) != *(long*)( param_1 + 0xa0 )) {
      CowData<Variant>::_ref((CowData<Variant>*)( this + 0xa0 ), (CowData*)( param_1 + 0xa0 ));
   }
   *(undefined4*)( this + 0xa8 ) = *(undefined4*)( param_1 + 0xa8 );
   if (*(long*)( this + 0xb8 ) != *(long*)( param_1 + 0xb8 )) {
      CowData<int>::_ref((CowData<int>*)( this + 0xb8 ), (CowData*)( param_1 + 0xb8 ));
   }
   this_00 = (HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>*)( this + 0xc0 );
   if (this_00 != (HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>*)( param_1 + 0xc0 )) {
      uVar10 = *(uint*)( this + 0xe8 );
      uVar6 = *(uint*)( hash_table_size_primes + (ulong)uVar10 * 4 );
      if (( *(int*)( this + 0xec ) != 0 ) && ( *(long*)( this + 200 ) != 0 )) {
         if (uVar6 != 0) {
            lVar13 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xd0 ) + lVar13 ) != 0) {
                  *(int*)( *(long*)( this + 0xd0 ) + lVar13 ) = 0;
                  pvVar3 = *(void**)( *(long*)( this + 200 ) + lVar13 * 2 );
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }
                  Memory::free_static(pvVar3, false);
                  *(undefined8*)( *(long*)( this + 200 ) + lVar13 * 2 ) = 0;
               }
               lVar13 = lVar13 + 4;
            } while ( lVar13 != (ulong)uVar6 * 4 );
            uVar10 = *(uint*)( this + 0xe8 );
            uVar6 = *(uint*)( hash_table_size_primes + (ulong)uVar10 * 4 );
         }
         *(undefined4*)( this + 0xec ) = 0;
         *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
      }
      if (uVar6 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0xe8 ) * 4 )) {
         if (uVar10 != 0x1c) {
            uVar9 = (ulong)uVar10;
            do {
               uVar6 = (int)uVar9 + 1;
               uVar9 = (ulong)uVar6;
               if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0xe8 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar9 * 4 )) {
                  if (uVar10 != uVar6) {
                     if (*(long*)( this + 200 ) == 0) {
                        *(uint*)( this + 0xe8 ) = uVar6;
                     } else {
                        HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::_resize_and_rehash(this_00, uVar6);
                     }
                  }
                  goto LAB_0010f501;
               }
            } while ( uVar6 != 0x1c );
         }
         _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      }
      LAB_0010f501:if (( *(long*)( param_1 + 200 ) != 0 ) && ( plVar11 = *(long**)( param_1 + 0xd8 ) ),plVar11 != (long*)0x0) {
         do {
            HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::insert(local_48, (long*)this_00, (bool)( (char)plVar11 + '\x10' ));
            plVar11 = (long*)*plVar11;
         } while ( plVar11 != (long*)0x0 );
      }
   }
   if (*(long*)( this + 8 ) == *(long*)( param_1 + 8 )) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CowData<GDScriptParser::DataType>::_ref((CowData<GDScriptParser::DataType>*)( this + 8 ), (CowData*)( param_1 + 8 ));
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GDScriptParser::Node::get_datatype() const */void GDScriptParser::Node::get_datatype(void) {
   HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>> *this;
   Object *pOVar1;
   Object *pOVar2;
   void *pvVar3;
   long lVar4;
   char cVar5;
   uint uVar6;
   undefined1(*pauVar7)[16];
   undefined4 *puVar8;
   uint uVar10;
   int *piVar11;
   long *plVar12;
   undefined4 *puVar13;
   long in_RSI;
   long in_RDI;
   long lVar14;
   long in_FS_OFFSET;
   StringName local_48[8];
   long local_40;
   ulong uVar9;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( in_RDI + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( in_RDI + 0x38 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( in_RDI + 0x48 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( in_RDI + 0x60 ) = (undefined1[16])0x0;
   *(undefined8*)( in_RDI + 8 ) = 0;
   *(undefined8*)( in_RDI + 0x10 ) = 7;
   *(undefined4*)( in_RDI + 0x18 ) = 0;
   *(undefined1*)( in_RDI + 0x1c ) = 0;
   *(undefined4*)( in_RDI + 0x20 ) = 0;
   *(undefined4*)( in_RDI + 0x58 ) = 0;
   *(undefined4*)( in_RDI + 0x70 ) = 0;
   *(undefined8*)( in_RDI + 0x78 ) = 0;
   *(undefined4*)( in_RDI + 0x80 ) = 6;
   *(undefined8*)( in_RDI + 0x88 ) = 1;
   *(undefined8*)( in_RDI + 0x90 ) = 0;
   *(undefined8*)( in_RDI + 0xa0 ) = 0;
   *(undefined4*)( in_RDI + 0xa8 ) = 0;
   *(undefined1(*) [16])( in_RDI + 200 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( in_RDI + 0xd8 ) = (undefined1[16])0x0;
   *(undefined8*)( in_RDI + 0xb8 ) = 0;
   *(undefined8*)( in_RDI + 0xe8 ) = 2;
   *(undefined8*)( in_RDI + 0x10 ) = *(undefined8*)( in_RSI + 0x48 );
   *(undefined4*)( in_RDI + 0x18 ) = *(undefined4*)( in_RSI + 0x50 );
   *(undefined1*)( in_RDI + 0x1c ) = *(undefined1*)( in_RSI + 0x54 );
   *(undefined4*)( in_RDI + 0x20 ) = *(undefined4*)( in_RSI + 0x58 );
   StringName::operator =((StringName*)( in_RDI + 0x28 ), (StringName*)( in_RSI + 0x60 ));
   StringName::operator =((StringName*)( in_RDI + 0x30 ), (StringName*)( in_RSI + 0x68 ));
   pOVar1 = *(Object**)( in_RSI + 0x70 );
   pOVar2 = *(Object**)( in_RDI + 0x38 );
   if (pOVar1 != pOVar2) {
      *(Object**)( in_RDI + 0x38 ) = pOVar1;
      if (pOVar1 != (Object*)0x0) {
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            *(undefined8*)( in_RDI + 0x38 ) = 0;
         }
      }
      if (pOVar2 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(pOVar2);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }
         }
      }
   }
   if (*(long*)( in_RDI + 0x40 ) != *(long*)( in_RSI + 0x78 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( in_RDI + 0x40 ), (CowData*)( in_RSI + 0x78 ));
   }
   *(undefined8*)( in_RDI + 0x48 ) = *(undefined8*)( in_RSI + 0x80 );
   if (*(long*)( in_RDI + 0x50 ) != *(long*)( in_RSI + 0x88 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( in_RDI + 0x50 ), (CowData*)( in_RSI + 0x88 ));
   }
   *(undefined4*)( in_RDI + 0x58 ) = *(undefined4*)( in_RSI + 0x90 );
   if (*(long*)( in_RDI + 0x60 ) != *(long*)( in_RSI + 0x98 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( in_RDI + 0x60 ), (CowData*)( in_RSI + 0x98 ));
   }
   StringName::operator =((StringName*)( in_RDI + 0x68 ), (StringName*)( in_RSI + 0xa0 ));
   *(undefined4*)( in_RDI + 0x70 ) = *(undefined4*)( in_RSI + 0xa8 );
   if (*(long*)( in_RDI + 0x78 ) != *(long*)( in_RSI + 0xb0 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( in_RDI + 0x78 ), (CowData*)( in_RSI + 0xb0 ));
   }
   plVar12 = *(long**)( in_RDI + 0x90 );
   *(undefined4*)( in_RDI + 0x80 ) = *(undefined4*)( in_RSI + 0xb8 );
   *(undefined4*)( in_RDI + 0x88 ) = *(undefined4*)( in_RSI + 0xc0 );
   *(undefined4*)( in_RDI + 0x8c ) = *(undefined4*)( in_RSI + 0xc4 );
   if (plVar12 != (long*)0x0) {
      do {
         pvVar3 = (void*)*plVar12;
         if (pvVar3 == (void*)0x0) goto LAB_0010f9f0;
         if (plVar12 == *(long**)( (long)pvVar3 + 0x40 )) {
            lVar14 = *(long*)( (long)pvVar3 + 0x30 );
            lVar4 = *(long*)( (long)pvVar3 + 0x38 );
            *plVar12 = lVar14;
            if (pvVar3 == (void*)plVar12[1]) {
               plVar12[1] = lVar4;
            }
            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x30 ) = lVar14;
               lVar14 = *(long*)( (long)pvVar3 + 0x30 );
            }
            if (lVar14 != 0) {
               *(long*)( lVar14 + 0x38 ) = lVar4;
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x20 ));
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
               StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 8 ));
            Memory::free_static(pvVar3, false);
            *(int*)( plVar12 + 2 ) = (int)plVar12[2] + -1;
         } else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }
         plVar12 = *(long**)( in_RDI + 0x90 );
      } while ( (int)plVar12[2] != 0 );
      Memory::free_static(plVar12, false);
      *(undefined8*)( in_RDI + 0x90 ) = 0;
   }
   plVar12 = (long*)0x0;
   LAB_0010f9f0:if (( *(undefined8**)( in_RSI + 200 ) != (undefined8*)0x0 ) && ( puVar13 = (undefined4*)**(undefined8**)( in_RSI + 200 ) ),puVar13 != (undefined4*)0x0) {
      if (plVar12 == (long*)0x0) {
         pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( in_RDI + 0x90 ) = pauVar7;
         *(undefined4*)pauVar7[1] = 0;
         *pauVar7 = (undefined1[16])0x0;
      }
      do {
         while (true) {
            puVar8 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
            *(undefined8*)( puVar8 + 8 ) = 0;
            *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
            lVar14 = *(long*)( puVar13 + 2 );
            *puVar8 = 0;
            puVar8[6] = 0;
            puVar8[10] = 6;
            *(undefined8*)( puVar8 + 0x10 ) = 0;
            *(undefined1(*) [16])( puVar8 + 0xc ) = (undefined1[16])0x0;
            *puVar8 = *puVar13;
            if (lVar14 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 2 ), (CowData*)( puVar13 + 2 ));
            }
            StringName::operator =((StringName*)( puVar8 + 4 ), (StringName*)( puVar13 + 4 ));
            puVar8[6] = puVar13[6];
            if (*(long*)( puVar8 + 8 ) != *(long*)( puVar13 + 8 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 8 ), (CowData*)( puVar13 + 8 ));
            }
            puVar8[10] = puVar13[10];
            plVar12 = *(long**)( in_RDI + 0x90 );
            lVar14 = plVar12[1];
            *(undefined8*)( puVar8 + 0xc ) = 0;
            *(long**)( puVar8 + 0x10 ) = plVar12;
            *(long*)( puVar8 + 0xe ) = lVar14;
            if (lVar14 != 0) {
               *(undefined4**)( lVar14 + 0x30 ) = puVar8;
            }
            plVar12[1] = (long)puVar8;
            if (*plVar12 == 0) break;
            puVar13 = *(undefined4**)( puVar13 + 0xc );
            *(int*)( plVar12 + 2 ) = (int)plVar12[2] + 1;
            if (puVar13 == (undefined4*)0x0) goto LAB_0010fb21;
         };
         puVar13 = *(undefined4**)( puVar13 + 0xc );
         *(int*)( plVar12 + 2 ) = (int)plVar12[2] + 1;
         *plVar12 = (long)puVar8;
      } while ( puVar13 != (undefined4*)0x0 );
   }
   LAB_0010fb21:if (*(long*)( in_RDI + 0xa0 ) != *(long*)( in_RSI + 0xd8 )) {
      CowData<Variant>::_ref((CowData<Variant>*)( in_RDI + 0xa0 ), (CowData*)( in_RSI + 0xd8 ));
   }
   *(undefined4*)( in_RDI + 0xa8 ) = *(undefined4*)( in_RSI + 0xe0 );
   if (*(long*)( in_RDI + 0xb8 ) != *(long*)( in_RSI + 0xf0 )) {
      CowData<int>::_ref((CowData<int>*)( in_RDI + 0xb8 ), (CowData*)( in_RSI + 0xf0 ));
   }
   this(HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>> * )(in_RDI + 0xc0);
   if (this != (HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>*)( in_RSI + 0xf8 )) {
      uVar10 = *(uint*)( in_RDI + 0xe8 );
      uVar6 = *(uint*)( hash_table_size_primes + (ulong)uVar10 * 4 );
      if (( *(int*)( in_RDI + 0xec ) != 0 ) && ( *(long*)( in_RDI + 200 ) != 0 )) {
         if (uVar6 != 0) {
            lVar14 = 0;
            do {
               piVar11 = (int*)( *(long*)( in_RDI + 0xd0 ) + lVar14 );
               if (*piVar11 != 0) {
                  *piVar11 = 0;
                  pvVar3 = *(void**)( *(long*)( in_RDI + 200 ) + lVar14 * 2 );
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }
                  Memory::free_static(pvVar3, false);
                  *(undefined8*)( *(long*)( in_RDI + 200 ) + lVar14 * 2 ) = 0;
               }
               lVar14 = lVar14 + 4;
            } while ( lVar14 != (ulong)uVar6 * 4 );
            uVar10 = *(uint*)( in_RDI + 0xe8 );
            uVar6 = *(uint*)( hash_table_size_primes + (ulong)uVar10 * 4 );
         }
         *(undefined4*)( in_RDI + 0xec ) = 0;
         *(undefined1(*) [16])( in_RDI + 0xd8 ) = (undefined1[16])0x0;
      }
      if (uVar6 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x120 ) * 4 )) {
         if (uVar10 != 0x1c) {
            uVar9 = (ulong)uVar10;
            do {
               uVar6 = (int)uVar9 + 1;
               uVar9 = (ulong)uVar6;
               if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x120 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar9 * 4 )) {
                  if (uVar10 != uVar6) {
                     if (*(long*)( in_RDI + 200 ) == 0) {
                        *(uint*)( in_RDI + 0xe8 ) = uVar6;
                     } else {
                        HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::_resize_and_rehash(this, uVar6);
                     }
                  }
                  goto LAB_0010fc11;
               }
            } while ( uVar6 != 0x1c );
         }
         _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      }
      LAB_0010fc11:if (( *(long*)( in_RSI + 0x100 ) != 0 ) && ( plVar12 = *(long**)( in_RSI + 0x110 ) ),plVar12 != (long*)0x0) {
         do {
            HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::insert(local_48, (long*)this, (bool)( (char)plVar12 + '\x10' ));
            plVar12 = (long*)*plVar12;
         } while ( plVar12 != (long*)0x0 );
      }
   }
   if (*(long*)( in_RDI + 8 ) != *(long*)( in_RSI + 0x40 )) {
      CowData<GDScriptParser::DataType>::_ref((CowData<GDScriptParser::DataType>*)( in_RDI + 8 ), (CowData*)( in_RSI + 0x40 ));
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* CowData<GDScriptParser::EnumNode::Value>::_unref() */void CowData<GDScriptParser::EnumNode::Value>::_unref(CowData<GDScriptParser::EnumNode::Value> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
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
            lVar7 = 0;
            lVar6 = lVar2;
            do {
               for (int i = 0; i < 3; i++) {
                  if (*(long*)( lVar6 + ( -16*i + 88 ) ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( lVar6 + ( -16*i + 88 ) ) + -16 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar4 = *(long*)( lVar6 + ( -16*i + 88 ) );
                        *(undefined8*)( lVar6 + ( -16*i + 88 ) ) = 0;
                        Memory::free_static((void*)( lVar4 + -16 ), false);
                     }
                  }
               }
               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x60;
            } while ( lVar3 != lVar7 );
         }
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }
   *(undefined8*)this = 0;
   return;
}/* CowData<lsp::DiagnosticRelatedInformation>::_unref() */void CowData<lsp::DiagnosticRelatedInformation>::_unref(CowData<lsp::DiagnosticRelatedInformation> *this) {
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
               if (plVar6[3] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[3] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[3];
                     plVar6[3] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
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
               plVar6 = plVar6 + 4;
            } while ( lVar3 != lVar7 );
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
}/* HashMap<String, lsp::DocumentSymbol const*, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   lsp::DocumentSymbol const*> > >::_resize_and_rehash(unsigned int) */void HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>::_resize_and_rehash(HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>> *this, uint param_1) {
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
         } while ( uVar22 != uVar26 );
      } else {
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
            };
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }
         uVar26 = uVar26 + 1;
      } while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, lsp::DocumentSymbol const*, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   lsp::DocumentSymbol const*> > >::insert(String const&, lsp::DocumentSymbol const* const&, bool)
    */String * HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>
         ::insert(String *param_1,DocumentSymbol **param_2,bool param_3){
   long lVar1;
   DocumentSymbol *pDVar2;
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
   DocumentSymbol *pDVar22;
   ulong uVar23;
   undefined8 *in_RCX;
   int iVar24;
   uint uVar25;
   undefined7 in_register_00000011;
   String *pSVar26;
   long lVar27;
   DocumentSymbol *pDVar28;
   uint uVar29;
   char in_R8B;
   uint uVar30;
   ulong uVar31;
   undefined8 uVar32;
   DocumentSymbol *pDVar33;
   DocumentSymbol *pDVar34;
   uint uVar35;
   ulong uVar36;
   long in_FS_OFFSET;
   DocumentSymbol *pDStack_a0;
   long local_58;
   undefined8 local_50;
   long local_40;
   pSVar26 = (String*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar21 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   if (param_2[1] == (DocumentSymbol*)0x0) {
      uVar31 = (ulong)uVar21;
      uVar23 = uVar31 * 4;
      uVar36 = uVar31 * 8;
      pDVar22 = (DocumentSymbol*)Memory::alloc_static(uVar23, false);
      param_2[2] = pDVar22;
      pDVar22 = (DocumentSymbol*)Memory::alloc_static(uVar36, false);
      param_2[1] = pDVar22;
      if (uVar21 != 0) {
         pDVar28 = param_2[2];
         if (( pDVar28 < pDVar22 + uVar36 ) && ( pDVar22 < pDVar28 + uVar23 )) {
            uVar23 = 0;
            do {
               *(undefined4*)( pDVar28 + uVar23 * 4 ) = 0;
               *(undefined8*)( pDVar22 + uVar23 * 8 ) = 0;
               uVar23 = uVar23 + 1;
            } while ( uVar31 != uVar23 );
         } else {
            memset(pDVar28, 0, uVar23);
            memset(pDVar22, 0, uVar36);
         }
         goto LAB_0011027f;
      }
      iVar24 = *(int*)( (long)param_2 + 0x2c );
      if (pDVar22 == (DocumentSymbol*)0x0) goto LAB_0011028f;
      if (*(int*)( (long)param_2 + 0x2c ) != 0) goto LAB_001104d8;
      LAB_001102b1:if (*(int*)( param_2 + 5 ) == 0x1c) {
         pDStack_a0 = (DocumentSymbol*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_00110488;
      }
      _resize_and_rehash((HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>*)param_2, *(int*)( param_2 + 5 ) + 1);
   } else {
      LAB_0011027f:iVar24 = *(int*)( (long)param_2 + 0x2c );
      if (iVar24 != 0) {
         LAB_001104d8:uVar20 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
         lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
         uVar30 = String::hash();
         uVar23 = CONCAT44(0, uVar20);
         pDVar22 = param_2[2];
         uVar29 = 1;
         if (uVar30 != 0) {
            uVar29 = uVar30;
         }
         uVar35 = 0;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = (ulong)uVar29 * lVar1;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = uVar23;
         lVar27 = SUB168(auVar7 * auVar15, 8);
         uVar30 = *(uint*)( pDVar22 + lVar27 * 4 );
         uVar25 = SUB164(auVar7 * auVar15, 8);
         if (uVar30 != 0) {
            do {
               if (uVar29 == uVar30) {
                  cVar19 = String::operator ==((String*)( *(long*)( param_2[1] + lVar27 * 8 ) + 0x10 ), pSVar26);
                  if (cVar19 != '\0') {
                     pDStack_a0 = *(DocumentSymbol**)( param_2[1] + (ulong)uVar25 * 8 );
                     *(undefined8*)( pDStack_a0 + 0x18 ) = *in_RCX;
                     goto LAB_00110488;
                  }
                  pDVar22 = param_2[2];
               }
               uVar35 = uVar35 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(uVar25 + 1) * lVar1;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar23;
               lVar27 = SUB168(auVar8 * auVar16, 8);
               uVar30 = *(uint*)( pDVar22 + lVar27 * 4 );
               uVar25 = SUB164(auVar8 * auVar16, 8);
            } while ( ( uVar30 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar30 * lVar1,auVar17._8_8_ = 0,auVar17._0_8_ = uVar23,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar20 + uVar25 ) - SUB164(auVar9 * auVar17, 8)) * lVar1,auVar18._8_8_ = 0,auVar18._0_8_ = uVar23,uVar35 <= SUB164(auVar10 * auVar18, 8) );
         }
         iVar24 = *(int*)( (long)param_2 + 0x2c );
      }
      LAB_0011028f:if ((float)uVar21 * __LC38 < (float)( iVar24 + 1 )) goto LAB_001102b1;
   }
   local_58 = 0;
   if (*(long*)pSVar26 == 0) {
      uVar32 = *in_RCX;
      local_50 = uVar32;
      pDStack_a0 = (DocumentSymbol*)operator_new(0x20, "");
      *(undefined8*)( pDStack_a0 + 0x10 ) = 0;
      *(undefined1(*) [16])pDStack_a0 = (undefined1[16])0x0;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)pSVar26);
      lVar1 = local_58;
      uVar32 = *in_RCX;
      local_50 = uVar32;
      pDStack_a0 = (DocumentSymbol*)operator_new(0x20, "");
      *(undefined8*)( pDStack_a0 + 0x10 ) = 0;
      *(undefined8*)pDStack_a0 = 0;
      *(undefined8*)( pDStack_a0 + 8 ) = 0;
      if (lVar1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( pDStack_a0 + 0x10 ), (CowData*)&local_58);
      }
   }
   *(undefined8*)( pDStack_a0 + 0x18 ) = uVar32;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   pDVar22 = param_2[4];
   if (pDVar22 == (DocumentSymbol*)0x0) {
      param_2[3] = pDStack_a0;
      param_2[4] = pDStack_a0;
   } else if (in_R8B == '\0') {
      *(DocumentSymbol**)pDVar22 = pDStack_a0;
      *(DocumentSymbol**)( pDStack_a0 + 8 ) = pDVar22;
      param_2[4] = pDStack_a0;
   } else {
      pDVar22 = param_2[3];
      *(DocumentSymbol**)( pDVar22 + 8 ) = pDStack_a0;
      *(DocumentSymbol**)pDStack_a0 = pDVar22;
      param_2[3] = pDStack_a0;
   }
   uVar20 = String::hash();
   pDVar22 = param_2[2];
   uVar21 = 1;
   if (uVar20 != 0) {
      uVar21 = uVar20;
   }
   uVar36 = (ulong)uVar21;
   uVar20 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   uVar23 = CONCAT44(0, uVar20);
   lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
   auVar3._8_8_ = 0;
   auVar3._0_8_ = uVar36 * lVar1;
   auVar11._8_8_ = 0;
   auVar11._0_8_ = uVar23;
   lVar27 = SUB168(auVar3 * auVar11, 8);
   pDVar2 = param_2[1];
   pDVar28 = pDVar22 + lVar27 * 4;
   iVar24 = SUB164(auVar3 * auVar11, 8);
   uVar29 = *(uint*)pDVar28;
   pDVar34 = pDStack_a0;
   if (uVar29 != 0) {
      uVar30 = 0;
      pDVar33 = pDStack_a0;
      do {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = (ulong)uVar29 * lVar1;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = uVar23;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = ( ulong )(( uVar20 + iVar24 ) - SUB164(auVar4 * auVar12, 8)) * lVar1;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = uVar23;
         uVar21 = SUB164(auVar5 * auVar13, 8);
         pDVar34 = pDVar33;
         if (uVar21 < uVar30) {
            *(uint*)pDVar28 = (uint)uVar36;
            uVar36 = (ulong)uVar29;
            pDVar28 = pDVar2 + lVar27 * 8;
            pDVar34 = *(DocumentSymbol**)pDVar28;
            *(DocumentSymbol**)pDVar28 = pDVar33;
            uVar30 = uVar21;
         }
         uVar21 = (uint)uVar36;
         uVar30 = uVar30 + 1;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = ( ulong )(iVar24 + 1) * lVar1;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar23;
         lVar27 = SUB168(auVar6 * auVar14, 8);
         pDVar28 = pDVar22 + lVar27 * 4;
         iVar24 = SUB164(auVar6 * auVar14, 8);
         uVar29 = *(uint*)pDVar28;
         pDVar33 = pDVar34;
      } while ( uVar29 != 0 );
   }
   *(DocumentSymbol**)( pDVar2 + lVar27 * 8 ) = pDVar34;
   *(uint*)pDVar28 = uVar21;
   *(int*)( (long)param_2 + 0x2c ) = *(int*)( (long)param_2 + 0x2c ) + 1;
   LAB_00110488:*(DocumentSymbol**)param_1 = pDStack_a0;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, HashMap<String, lsp::DocumentSymbol const*, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   lsp::DocumentSymbol const*> > >, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, HashMap<String, lsp::DocumentSymbol const*,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, lsp::DocumentSymbol const*> > > > > >::insert(String
   const&, HashMap<String, lsp::DocumentSymbol const*, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   lsp::DocumentSymbol const*> > > const&, bool) */String *HashMap<String,HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>>>>::insert(String *param_1, HashMap *param_2, bool param_3) {
   HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>> *this;
   uint *puVar1;
   int *piVar2;
   void *pvVar3;
   void *__s;
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
   long *plVar28;
   char cVar29;
   uint uVar30;
   ulong uVar31;
   undefined8 uVar32;
   void *__s_00;
   long *plVar33;
   long lVar34;
   int *piVar35;
   void *pvVar36;
   HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>> *in_RCX;
   uint uVar37;
   undefined7 in_register_00000011;
   String *pSVar38;
   long lVar39;
   long lVar40;
   uint uVar41;
   int iVar42;
   ulong uVar43;
   int *piVar44;
   undefined8 uVar45;
   char in_R8B;
   uint uVar46;
   uint uVar47;
   ulong uVar48;
   long lVar49;
   undefined8 *puVar50;
   uint uVar51;
   undefined8 *puVar52;
   long *plVar53;
   long in_FS_OFFSET;
   String local_90[8];
   undefined1 local_88[16];
   long local_78;
   DocumentSymbol *local_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   pSVar38 = (String*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar41 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar43 = (ulong)uVar41;
      uVar31 = uVar43 * 4;
      uVar48 = uVar43 * 8;
      uVar32 = Memory::alloc_static(uVar31, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar32;
      pvVar36 = (void*)Memory::alloc_static(uVar48, false);
      *(void**)( param_2 + 8 ) = pvVar36;
      if (uVar41 != 0) {
         pvVar3 = *(void**)( param_2 + 0x10 );
         if (( pvVar3 < (void*)( (long)pvVar36 + uVar48 ) ) && ( pvVar36 < (void*)( (long)pvVar3 + uVar31 ) )) {
            uVar31 = 0;
            do {
               *(undefined4*)( (long)pvVar3 + uVar31 * 4 ) = 0;
               *(undefined8*)( (long)pvVar36 + uVar31 * 8 ) = 0;
               uVar31 = uVar31 + 1;
            } while ( uVar43 != uVar31 );
         } else {
            memset(pvVar3, 0, uVar31);
            memset(pvVar36, 0, uVar48);
         }
         goto LAB_001107ca;
      }
      iVar42 = *(int*)( param_2 + 0x2c );
      if (pvVar36 == (void*)0x0) goto LAB_001107dd;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_00110e18;
      LAB_00110803:uVar41 = *(uint*)( param_2 + 0x28 );
      if (uVar41 == 0x1c) {
         plVar33 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_00110dc0;
      }
      uVar31 = ( ulong )(uVar41 + 1);
      uVar30 = *(uint*)( hash_table_size_primes + (ulong)uVar41 * 4 );
      *(undefined4*)( param_2 + 0x2c ) = 0;
      if (uVar41 + 1 < 2) {
         uVar31 = 2;
      }
      uVar41 = *(uint*)( hash_table_size_primes + uVar31 * 4 );
      *(int*)( param_2 + 0x28 ) = (int)uVar31;
      pvVar36 = *(void**)( param_2 + 8 );
      uVar43 = (ulong)uVar41;
      uVar31 = uVar43 * 4;
      pvVar3 = *(void**)( param_2 + 0x10 );
      uVar48 = uVar43 * 8;
      uVar32 = Memory::alloc_static(uVar31, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar32;
      __s_00 = (void*)Memory::alloc_static(uVar48, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar41 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar48 ) ) && ( __s_00 < (void*)( (long)__s + uVar31 ) )) {
            uVar31 = 0;
            do {
               *(undefined4*)( (long)__s + uVar31 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar31 * 8 ) = 0;
               uVar31 = uVar31 + 1;
            } while ( uVar43 != uVar31 );
         } else {
            memset(__s, 0, uVar31);
            memset(__s_00, 0, uVar48);
         }
      }
      uVar31 = 0;
      if (uVar30 != 0) {
         do {
            uVar41 = *(uint*)( (long)pvVar3 + uVar31 * 4 );
            if (uVar41 != 0) {
               uVar46 = 0;
               lVar34 = *(long*)( param_2 + 0x10 );
               uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
               uVar48 = CONCAT44(0, uVar37);
               lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
               auVar4._8_8_ = 0;
               auVar4._0_8_ = (ulong)uVar41 * lVar49;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar48;
               lVar39 = SUB168(auVar4 * auVar16, 8);
               puVar1 = (uint*)( lVar34 + lVar39 * 4 );
               iVar42 = SUB164(auVar4 * auVar16, 8);
               uVar47 = *puVar1;
               uVar32 = *(undefined8*)( (long)pvVar36 + uVar31 * 8 );
               while (uVar47 != 0) {
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar47 * lVar49;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar48;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(( uVar37 + iVar42 ) - SUB164(auVar5 * auVar17, 8)) * lVar49;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar48;
                  uVar51 = SUB164(auVar6 * auVar18, 8);
                  uVar45 = uVar32;
                  if (uVar51 < uVar46) {
                     *puVar1 = uVar41;
                     puVar50 = (undefined8*)( (long)__s_00 + lVar39 * 8 );
                     uVar45 = *puVar50;
                     *puVar50 = uVar32;
                     uVar41 = uVar47;
                     uVar46 = uVar51;
                  }
                  uVar46 = uVar46 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(iVar42 + 1) * lVar49;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = uVar48;
                  lVar39 = SUB168(auVar7 * auVar19, 8);
                  puVar1 = (uint*)( lVar34 + lVar39 * 4 );
                  iVar42 = SUB164(auVar7 * auVar19, 8);
                  uVar32 = uVar45;
                  uVar47 = *puVar1;
               };
               *(undefined8*)( (long)__s_00 + lVar39 * 8 ) = uVar32;
               *puVar1 = uVar41;
               *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
            }
            uVar31 = uVar31 + 1;
         } while ( uVar30 != uVar31 );
         Memory::free_static(pvVar36, false);
         Memory::free_static(pvVar3, false);
      }
   } else {
      LAB_001107ca:iVar42 = *(int*)( param_2 + 0x2c );
      if (iVar42 != 0) {
         LAB_00110e18:uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar31 = CONCAT44(0, uVar30);
         lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar47 = String::hash();
         lVar49 = *(long*)( param_2 + 0x10 );
         uVar37 = 1;
         if (uVar47 != 0) {
            uVar37 = uVar47;
         }
         uVar51 = 0;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar37 * lVar34;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar31;
         lVar39 = SUB168(auVar12 * auVar24, 8);
         uVar47 = *(uint*)( lVar49 + lVar39 * 4 );
         uVar46 = SUB164(auVar12 * auVar24, 8);
         if (uVar47 != 0) {
            do {
               if (uVar47 == uVar37) {
                  cVar29 = String::operator ==((String*)( *(long*)( *(long*)( param_2 + 8 ) + lVar39 * 8 ) + 0x10 ), pSVar38);
                  if (cVar29 != '\0') {
                     plVar33 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar46 * 8 );
                     this(HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>> * )(plVar33 + 3);
                     if (in_RCX != this) {
                        uVar41 = *(uint*)( plVar33 + 8 );
                        uVar30 = *(uint*)( hash_table_size_primes + (ulong)uVar41 * 4 );
                        if (( *(int*)( (long)plVar33 + 0x44 ) != 0 ) && ( plVar33[4] != 0 )) {
                           if (uVar30 != 0) {
                              lVar34 = 0;
                              do {
                                 if (*(int*)( plVar33[5] + lVar34 ) != 0) {
                                    *(int*)( plVar33[5] + lVar34 ) = 0;
                                    pvVar36 = *(void**)( plVar33[4] + lVar34 * 2 );
                                    CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar36 + 0x10 ));
                                    Memory::free_static(pvVar36, false);
                                    *(undefined8*)( plVar33[4] + lVar34 * 2 ) = 0;
                                 }
                                 lVar34 = lVar34 + 4;
                              } while ( (ulong)uVar30 * 4 - lVar34 != 0 );
                              uVar41 = *(uint*)( plVar33 + 8 );
                              uVar30 = *(uint*)( hash_table_size_primes + (ulong)uVar41 * 4 );
                           }
                           *(undefined4*)( (long)plVar33 + 0x44 ) = 0;
                           *(undefined1(*) [16])( plVar33 + 6 ) = (undefined1[16])0x0;
                        }
                        if (uVar30 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x28 ) * 4 )) {
                           if (uVar41 != 0x1c) {
                              uVar31 = (ulong)uVar41;
                              do {
                                 uVar30 = (int)uVar31 + 1;
                                 uVar31 = (ulong)uVar30;
                                 if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x28 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar31 * 4 )) {
                                    if (uVar30 != uVar41) {
                                       if (plVar33[4] == 0) {
                                          *(uint*)( plVar33 + 8 ) = uVar30;
                                       } else {
                                          HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>::_resize_and_rehash(this, uVar30);
                                       }
                                    }
                                    goto LAB_0011103a;
                                 }
                              } while ( uVar30 != 0x1c );
                           }
                           _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
                        }
                        LAB_0011103a:if (*(long*)( in_RCX + 8 ) != 0) {
                           for (puVar50 = *(undefined8**)( in_RCX + 0x18 ); puVar50 != (undefined8*)0x0; puVar50 = (undefined8*)*puVar50) {
                              HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>::insert((String*)local_88, (DocumentSymbol**)this, (bool)( (char)puVar50 + '\x10' ));
                           }
                        }
                        plVar33 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar46 * 8 );
                     }
                     goto LAB_00110dc0;
                  }
                  lVar49 = *(long*)( param_2 + 0x10 );
               }
               uVar51 = uVar51 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(uVar46 + 1) * lVar34;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar31;
               lVar39 = SUB168(auVar13 * auVar25, 8);
               uVar47 = *(uint*)( lVar49 + lVar39 * 4 );
               uVar46 = SUB164(auVar13 * auVar25, 8);
            } while ( ( uVar47 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar47 * lVar34,auVar26._8_8_ = 0,auVar26._0_8_ = uVar31,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar30 + uVar46 ) - SUB164(auVar14 * auVar26, 8)) * lVar34,auVar27._8_8_ = 0,auVar27._0_8_ = uVar31,uVar51 <= SUB164(auVar15 * auVar27, 8) );
         }
         iVar42 = *(int*)( param_2 + 0x2c );
      }
      LAB_001107dd:if ((float)uVar41 * __LC38 < (float)( iVar42 + 1 )) goto LAB_00110803;
   }
   local_78 = 0;
   local_88 = (undefined1[16])0x0;
   if (*(long*)pSVar38 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)pSVar38);
   }
   local_48 = 0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   uVar31 = 1;
   if (5 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x28 ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x28 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar31 * 4 )) {
            local_48 = uVar31 & 0xffffffff;
            puVar50 = (undefined8*)0x0;
            if (*(int*)( in_RCX + 0x2c ) != 0) goto LAB_00110ad6;
            iVar42 = 0;
            goto LAB_00110b20;
         }
         uVar31 = uVar31 + 1;
      } while ( uVar31 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }
   puVar50 = (undefined8*)0x0;
   iVar42 = *(int*)( in_RCX + 0x2c );
   if (*(int*)( in_RCX + 0x2c ) != 0) {
      LAB_00110ad6:plVar33 = *(long**)( in_RCX + 0x18 );
      if (plVar33 == (long*)0x0) {
         iVar42 = 0;
         puVar50 = (undefined8*)0x0;
      } else {
         do {
            HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>::insert(local_90, &local_70, (bool)( (char)plVar33 + '\x10' ));
            plVar33 = (long*)*plVar33;
         } while ( plVar33 != (long*)0x0 );
         puVar50 = (undefined8*)local_68._0_8_;
         iVar42 = local_48._4_4_;
      }
   }
   LAB_00110b20:plVar33 = (long*)operator_new(0x48, "");
   plVar33[2] = 0;
   *plVar33 = local_88._0_8_;
   plVar33[1] = local_88._8_8_;
   if (local_78 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar33 + 2 ), (CowData*)&local_78);
   }
   plVar33[8] = 0;
   *(undefined1(*) [16])( plVar33 + 4 ) = (undefined1[16])0x0;
   uVar41 = *(uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 );
   *(undefined1(*) [16])( plVar33 + 6 ) = (undefined1[16])0x0;
   lVar34 = 1;
   if (5 < uVar41) {
      do {
         if (uVar41 <= *(uint*)( hash_table_size_primes + lVar34 * 4 )) {
            *(int*)( plVar33 + 8 ) = (int)lVar34;
            if (iVar42 != 0) goto LAB_00110be0;
            goto LAB_00110f00;
         }
         lVar34 = lVar34 + 1;
      } while ( lVar34 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }
   if (iVar42 == 0) {
      LAB_00110f00:piVar35 = (int*)local_68._8_8_;
      if (puVar50 != (undefined8*)0x0) goto LAB_00110c7b;
   } else {
      LAB_00110be0:for (puVar52 = (undefined8*)local_58._0_8_; puVar52 != (undefined8*)0x0; puVar52 = (undefined8*)*puVar52) {
         HashMap<String,lsp::DocumentSymbol_const*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,lsp::DocumentSymbol_const*>>>::insert(local_90, (DocumentSymbol**)( plVar33 + 3 ), (bool)( (char)puVar52 + '\x10' ));
      }
      if (puVar50 != (undefined8*)0x0) {
         piVar35 = (int*)local_68._8_8_;
         if (uVar41 != 0) {
            piVar2 = (int*)( local_68._8_8_ + (ulong)uVar41 * 4 );
            piVar44 = (int*)local_68._8_8_;
            puVar52 = puVar50;
            do {
               if (*piVar44 != 0) {
                  pvVar36 = (void*)*puVar52;
                  *piVar44 = 0;
                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar36 + 0x10 ));
                  Memory::free_static(pvVar36, false);
                  *puVar52 = 0;
               }
               piVar44 = piVar44 + 1;
               puVar52 = puVar52 + 1;
            } while ( piVar44 != piVar2 );
         }
         LAB_00110c7b:Memory::free_static(puVar50, false);
         Memory::free_static(piVar35, false);
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   puVar50 = *(undefined8**)( param_2 + 0x20 );
   if (puVar50 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = plVar33;
      *(long**)( param_2 + 0x20 ) = plVar33;
   } else if (in_R8B == '\0') {
      *puVar50 = plVar33;
      plVar33[1] = (long)puVar50;
      *(long**)( param_2 + 0x20 ) = plVar33;
   } else {
      lVar34 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar34 + 8 ) = plVar33;
      *plVar33 = lVar34;
      *(long**)( param_2 + 0x18 ) = plVar33;
   }
   uVar30 = String::hash();
   uVar41 = 1;
   if (uVar30 != 0) {
      uVar41 = uVar30;
   }
   lVar34 = *(long*)( param_2 + 0x10 );
   uVar47 = 0;
   lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar31 = CONCAT44(0, uVar30);
   auVar8._8_8_ = 0;
   auVar8._0_8_ = (ulong)uVar41 * lVar49;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar31;
   lVar40 = SUB168(auVar8 * auVar20, 8);
   lVar39 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar34 + lVar40 * 4 );
   iVar42 = SUB164(auVar8 * auVar20, 8);
   uVar37 = *puVar1;
   plVar28 = plVar33;
   while (uVar37 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar37 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar31;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( uVar30 + iVar42 ) - SUB164(auVar9 * auVar21, 8)) * lVar49;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar31;
      uVar46 = SUB164(auVar10 * auVar22, 8);
      plVar53 = plVar28;
      if (uVar46 < uVar47) {
         *puVar1 = uVar41;
         puVar50 = (undefined8*)( lVar39 + lVar40 * 8 );
         plVar53 = (long*)*puVar50;
         *puVar50 = plVar28;
         uVar47 = uVar46;
         uVar41 = uVar37;
      }
      uVar47 = uVar47 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar42 + 1) * lVar49;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar31;
      lVar40 = SUB168(auVar11 * auVar23, 8);
      puVar1 = (uint*)( lVar34 + lVar40 * 4 );
      iVar42 = SUB164(auVar11 * auVar23, 8);
      plVar28 = plVar53;
      uVar37 = *puVar1;
   };
   *(long**)( lVar39 + lVar40 * 8 ) = plVar28;
   *puVar1 = uVar41;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_00110dc0:*(long**)param_1 = plVar33;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* CowData<lsp::DocumentSymbol>::_unref() */void CowData<lsp::DocumentSymbol>::_unref(CowData<lsp::DocumentSymbol> *this) {
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
               _unref((CowData<lsp::DocumentSymbol>*)( plVar6 + 0xc ));
               if (plVar6[10] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[10] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[10];
                     plVar6[10] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
               if (plVar6[9] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[9] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[9];
                     plVar6[9] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
               if (plVar6[3] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[3] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[3];
                     plVar6[3] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
               if (plVar6[2] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[2] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[2];
                     plVar6[2] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
               if (plVar6[1] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[1] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[1];
                     plVar6[1] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
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
               plVar6 = plVar6 + 0xd;
            } while ( lVar3 != lVar7 );
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
}/* lsp::DocumentSymbol::~DocumentSymbol() */void lsp::DocumentSymbol::~DocumentSymbol(DocumentSymbol *this) {
   long *plVar1;
   long lVar2;
   CowData<lsp::DocumentSymbol>::_unref((CowData<lsp::DocumentSymbol>*)( this + 0x60 ));
   if (*(long*)( this + 0x50 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x50 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x50 );
         *(undefined8*)( this + 0x50 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (*(long*)( this + 0x48 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x48 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x48 );
         *(undefined8*)( this + 0x48 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x10 );
         *(undefined8*)( this + 0x10 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
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
      }
   }
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
   }
   return;
}/* lsp::DocumentSymbol::DocumentSymbol(lsp::DocumentSymbol const&) */void lsp::DocumentSymbol::DocumentSymbol(DocumentSymbol *this, DocumentSymbol *param_1) {
   undefined2 uVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   *(undefined8*)this = 0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)param_1);
   }
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 8 ) ) = 0;
      if (*(long*)( param_1 + ( 8*i + 8 ) ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( this + ( 8*i + 8 ) ), (CowData*)( param_1 + ( 8*i + 8 ) ));
      }
   }
   uVar3 = *(undefined8*)( param_1 + 0x28 );
   uVar4 = *(undefined8*)( param_1 + 0x30 );
   uVar5 = *(undefined8*)( param_1 + 0x38 );
   uVar6 = *(undefined8*)( param_1 + 0x40 );
   *(undefined4*)( this + 0x20 ) = *(undefined4*)( param_1 + 0x20 );
   uVar1 = *(undefined2*)( param_1 + 0x24 );
   *(undefined8*)( this + 0x48 ) = 0;
   lVar2 = *(long*)( param_1 + 0x48 );
   *(undefined2*)( this + 0x24 ) = uVar1;
   *(undefined8*)( this + 0x28 ) = uVar3;
   *(undefined8*)( this + 0x30 ) = uVar4;
   *(undefined8*)( this + 0x38 ) = uVar5;
   *(undefined8*)( this + 0x40 ) = uVar6;
   if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x48 ), (CowData*)( param_1 + 0x48 ));
   }
   *(undefined8*)( this + 0x50 ) = 0;
   if (*(long*)( param_1 + 0x50 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x50 ), (CowData*)( param_1 + 0x50 ));
   }
   *(undefined8*)( this + 0x60 ) = 0;
   if (*(long*)( param_1 + 0x60 ) != 0) {
      CowData<lsp::DocumentSymbol>::_ref((CowData<lsp::DocumentSymbol>*)( this + 0x60 ), (CowData*)( param_1 + 0x60 ));
      return;
   }
   return;
}/* CowData<lsp::Diagnostic>::_unref() */void CowData<lsp::Diagnostic>::_unref(CowData<lsp::Diagnostic> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   CowData<lsp::DiagnosticRelatedInformation> *this_00;
   long lVar6;
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
            this_00 = (CowData<lsp::DiagnosticRelatedInformation>*)( lVar2 + 0x30 );
            lVar6 = 0;
            do {
               CowData<lsp::DiagnosticRelatedInformation>::_unref(this_00);
               if (*(long*)( this_00 + -0x10 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( this_00 + -0x10 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( this_00 + -0x10 );
                     *(undefined8*)( this_00 + -0x10 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
               if (*(long*)( this_00 + -0x18 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( this_00 + -0x18 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( this_00 + -0x18 );
                     *(undefined8*)( this_00 + -0x18 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
               lVar6 = lVar6 + 1;
               this_00 = this_00 + 0x38;
            } while ( lVar3 != lVar6 );
         }
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }
   *(undefined8*)this = 0;
   return;
}/* CowData<lsp::Diagnostic>::_realloc(long) */undefined8 CowData<lsp::Diagnostic>::_realloc(CowData<lsp::Diagnostic> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }
   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<lsp::Diagnostic>::resize<false>(long) */undefined8 CowData<lsp::Diagnostic>::resize<false>(CowData<lsp::Diagnostic> *this, long param_1) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined1(*pauVar4)[16];
   undefined8 *puVar5;
   undefined1(*pauVar6)[16];
   undefined8 uVar7;
   long lVar8;
   undefined8 *puVar9;
   long lVar10;
   ulong uVar11;
   ulong uVar12;
   long lVar13;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }
   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }
      _copy_on_write(this);
      lVar8 = 0;
      lVar10 = 0;
   } else {
      lVar8 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar8) {
         return 0;
      }
      if (param_1 == 0) {
         _unref(this);
         return 0;
      }
      _copy_on_write(this);
      lVar10 = lVar8 * 0x38;
      if (lVar10 != 0) {
         uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
         uVar11 = uVar11 | uVar11 >> 2;
         uVar11 = uVar11 | uVar11 >> 4;
         uVar11 = uVar11 | uVar11 >> 8;
         uVar11 = uVar11 | uVar11 >> 0x10;
         lVar10 = ( uVar11 | uVar11 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 0x38 == 0) {
      LAB_00111b60:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }
   uVar11 = param_1 * 0x38 - 1;
   uVar11 = uVar11 >> 1 | uVar11;
   uVar11 = uVar11 | uVar11 >> 2;
   uVar11 = uVar11 | uVar11 >> 4;
   uVar11 = uVar11 | uVar11 >> 8;
   uVar11 = uVar11 | uVar11 >> 0x10;
   uVar11 = uVar11 | uVar11 >> 0x20;
   lVar13 = uVar11 + 1;
   if (lVar13 == 0) goto LAB_00111b60;
   uVar12 = param_1;
   if (param_1 <= lVar8) {
      while (lVar8 = *(long*)this,lVar8 != 0) {
         if (*(ulong*)( lVar8 + -8 ) <= uVar12) {
            if (lVar13 != lVar10) {
               uVar7 = _realloc(this, lVar13);
               if ((int)uVar7 != 0) {
                  return uVar7;
               }
               lVar8 = *(long*)this;
               if (lVar8 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }
            }
            *(long*)( lVar8 + -8 ) = param_1;
            return 0;
         }
         lVar8 = lVar8 + uVar12 * 0x38;
         CowData<lsp::DiagnosticRelatedInformation>::_unref((CowData<lsp::DiagnosticRelatedInformation>*)( lVar8 + 0x30 ));
         if (*(long*)( lVar8 + 0x20 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar8 + 0x20 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar8 + 0x20 );
               *(undefined8*)( lVar8 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         if (*(long*)( lVar8 + 0x18 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar8 + 0x18 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar8 + 0x18 );
               *(undefined8*)( lVar8 + 0x18 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         uVar12 = uVar12 + 1;
      };
      goto LAB_00111bb6;
   }
   if (lVar13 == lVar10) {
      LAB_00111acb:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00111bb6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }
      lVar8 = puVar9[-1];
      if (param_1 <= lVar8) goto LAB_001119d1;
   } else {
      if (lVar8 != 0) {
         uVar7 = _realloc(this, lVar13);
         if ((int)uVar7 != 0) {
            return uVar7;
         }
         goto LAB_00111acb;
      }
      puVar5 = (undefined8*)Memory::alloc_static(uVar11 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }
      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar8 = 0;
   }
   pauVar6 = (undefined1(*) [16])( puVar9 + lVar8 * 7 );
   do {
      *(undefined8*)pauVar6[1] = 0;
      pauVar4 = pauVar6 + 3;
      *pauVar6 = (undefined1[16])0x0;
      *(undefined1(*) [16])( pauVar6[1] + 8 ) = (undefined1[16])0x0;
      *(undefined8*)pauVar6[3] = 0;
      pauVar6 = (undefined1(*) [16])( *pauVar4 + 8 );
   } while ( (undefined1(*) [16])( *pauVar4 + 8 ) != (undefined1(*) [16])( puVar9 + param_1 * 7 ) );
   LAB_001119d1:puVar9[-1] = param_1;
   return 0;
}/* CowData<lsp::DocumentSymbol>::_realloc(long) */undefined8 CowData<lsp::DocumentSymbol>::_realloc(CowData<lsp::DocumentSymbol> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }
   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<lsp::DocumentSymbol>::resize<false>(long) */undefined8 CowData<lsp::DocumentSymbol>::resize<false>(CowData<lsp::DocumentSymbol> *this, long param_1) {
   code *pcVar1;
   undefined8 *puVar2;
   undefined1(*pauVar3)[16];
   undefined8 *puVar4;
   undefined8 uVar5;
   long lVar6;
   ulong uVar7;
   long lVar8;
   ulong uVar9;
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
      lVar8 = 0;
   } else {
      lVar6 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar6) {
         return 0;
      }
      if (param_1 == 0) {
         _unref(this);
         return 0;
      }
      _copy_on_write(this);
      lVar8 = lVar6 * 0x68;
      if (lVar8 != 0) {
         uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
         uVar9 = uVar9 | uVar9 >> 2;
         uVar9 = uVar9 | uVar9 >> 4;
         uVar9 = uVar9 | uVar9 >> 8;
         uVar9 = uVar9 | uVar9 >> 0x10;
         lVar8 = ( uVar9 | uVar9 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 0x68 == 0) {
      LAB_00111eb0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }
   uVar9 = param_1 * 0x68 - 1;
   uVar9 = uVar9 >> 1 | uVar9;
   uVar9 = uVar9 | uVar9 >> 2;
   uVar9 = uVar9 | uVar9 >> 4;
   uVar9 = uVar9 | uVar9 >> 8;
   uVar9 = uVar9 | uVar9 >> 0x10;
   uVar9 = uVar9 | uVar9 >> 0x20;
   lVar10 = uVar9 + 1;
   if (lVar10 == 0) goto LAB_00111eb0;
   uVar7 = param_1;
   if (param_1 <= lVar6) {
      while (puVar4 = *(undefined8**)this,puVar4 != (undefined8*)0x0) {
         if ((ulong)puVar4[-1] <= uVar7) {
            if (lVar10 == lVar8) goto LAB_00111e21;
            uVar5 = _realloc(this, lVar10);
            if ((int)uVar5 != 0) {
               return uVar5;
            }
            puVar4 = *(undefined8**)this;
            goto LAB_00111e18;
         }
         lsp::DocumentSymbol::~DocumentSymbol((DocumentSymbol*)( puVar4 + uVar7 * 0xd ));
         uVar7 = uVar7 + 1;
      };
      goto LAB_00111f12;
   }
   if (lVar10 == lVar8) {
      LAB_00111e3f:puVar4 = *(undefined8**)this;
      if (puVar4 == (undefined8*)0x0) {
         LAB_00111f12:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }
      lVar6 = puVar4[-1];
      if (param_1 <= lVar6) goto LAB_00111e21;
   } else {
      if (lVar6 != 0) {
         uVar5 = _realloc(this, lVar10);
         if ((int)uVar5 != 0) {
            return uVar5;
         }
         goto LAB_00111e3f;
      }
      puVar2 = (undefined8*)Memory::alloc_static(uVar9 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }
      puVar4 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar4;
      lVar6 = 0;
   }
   lVar8 = lVar6 * 0x68;
   do {
      pauVar3 = (undefined1(*) [16])( (long)puVar4 + lVar8 );
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x68;
      *(undefined4*)pauVar3[2] = 1;
      *(undefined2*)( pauVar3[2] + 4 ) = 0;
      *(undefined8*)pauVar3[6] = 0;
      *pauVar3 = (undefined1[16])0x0;
      pauVar3[1] = (undefined1[16])0x0;
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( pauVar3[( i + 2 )] + 8 ) = (undefined1[16])0;
      }
      puVar4 = *(undefined8**)this;
   } while ( param_1 != lVar6 );
   LAB_00111e18:if (puVar4 == (undefined8*)0x0) {
      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }
   LAB_00111e21:puVar4[-1] = param_1;
   return 0;
}/* Vector<lsp::DocumentSymbol>::append_array(Vector<lsp::DocumentSymbol>) */void Vector<lsp::DocumentSymbol>::append_array(Vector<lsp::DocumentSymbol> *this, long param_2) {
   CowData *pCVar1;
   undefined2 uVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   CowData<char32_t> *this_00;
   long lVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   if (( *(long*)( param_2 + 8 ) != 0 ) && ( lVar3 = lVar3 != 0 )) {
      if (*(long*)( this + 8 ) == 0) {
         lVar11 = 0;
         lVar10 = lVar3;
      } else {
         lVar11 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar10 = lVar3 + lVar11;
      }
      CowData<lsp::DocumentSymbol>::resize<false>((CowData<lsp::DocumentSymbol>*)( this + 8 ), lVar10);
      if (0 < lVar3) {
         lVar12 = 0;
         lVar10 = 0;
         do {
            lVar4 = *(long*)( param_2 + 8 );
            if (lVar4 == 0) {
               lVar13 = 0;
               LAB_001120c5:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar13, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar5 = (code*)invalidInstructionException();
               ( *pcVar5 )();
            }
            lVar13 = *(long*)( lVar4 + -8 );
            if (lVar13 <= lVar10) goto LAB_001120c5;
            pCVar1 = (CowData*)( lVar4 + lVar12 );
            CowData<lsp::DocumentSymbol>::_copy_on_write((CowData<lsp::DocumentSymbol>*)( this + 8 ));
            this_00 = (CowData<char32_t>*)( lVar12 + lVar11 * 0x68 + *(long*)( this + 8 ) );
            if (*(long*)this_00 != *(long*)pCVar1) {
               CowData<char32_t>::_ref(this_00, pCVar1);
            }
            for (int i = 0; i < 3; i++) {
               if (*(long*)( this_00 + ( 8*i + 8 ) ) != *(long*)( pCVar1 + ( 8*i + 8 ) )) {
                  CowData<char32_t>::_ref(this_00 + ( 8*i + 8 ), pCVar1 + ( 8*i + 8 ));
               }
            }
            uVar6 = *(undefined8*)( pCVar1 + 0x28 );
            uVar7 = *(undefined8*)( pCVar1 + 0x30 );
            uVar8 = *(undefined8*)( pCVar1 + 0x38 );
            uVar9 = *(undefined8*)( pCVar1 + 0x40 );
            lVar4 = *(long*)( pCVar1 + 0x48 );
            *(undefined4*)( this_00 + 0x20 ) = *(undefined4*)( pCVar1 + 0x20 );
            uVar2 = *(undefined2*)( pCVar1 + 0x24 );
            *(undefined8*)( this_00 + 0x28 ) = uVar6;
            *(undefined8*)( this_00 + 0x30 ) = uVar7;
            *(undefined2*)( this_00 + 0x24 ) = uVar2;
            *(undefined8*)( this_00 + 0x38 ) = uVar8;
            *(undefined8*)( this_00 + 0x40 ) = uVar9;
            if (*(long*)( this_00 + 0x48 ) != lVar4) {
               CowData<char32_t>::_ref(this_00 + 0x48, pCVar1 + 0x48);
            }
            if (*(long*)( this_00 + 0x50 ) != *(long*)( pCVar1 + 0x50 )) {
               CowData<char32_t>::_ref(this_00 + 0x50, pCVar1 + 0x50);
            }
            if (*(long*)( this_00 + 0x60 ) != *(long*)( pCVar1 + 0x60 )) {
               CowData<lsp::DocumentSymbol>::_ref((CowData<lsp::DocumentSymbol>*)( this_00 + 0x60 ), pCVar1 + 0x60);
            }
            lVar10 = lVar10 + 1;
            lVar12 = lVar12 + 0x68;
         } while ( lVar10 != lVar3 );
      }
   }
   return;
}/* WARNING: Control flow encountered bad instruction data *//* lsp::DocumentSymbol::DocumentSymbol(lsp::DocumentSymbol const&) */void lsp::DocumentSymbol::DocumentSymbol(DocumentSymbol *this, DocumentSymbol *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* lsp::DocumentSymbol::~DocumentSymbol() */void lsp::DocumentSymbol::~DocumentSymbol(DocumentSymbol *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* GDScriptParser::DataType::DataType(GDScriptParser::DataType const&) */void GDScriptParser::DataType::DataType(DataType *this, DataType *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* GDScriptParser::DataType::~DataType() */void GDScriptParser::DataType::~DataType(DataType *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* GDScriptTokenizerText::~GDScriptTokenizerText() */void GDScriptTokenizerText::~GDScriptTokenizerText(GDScriptTokenizerText *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* List<List<int, DefaultAllocator>, DefaultAllocator>::~List() */void List<List<int,DefaultAllocator>,DefaultAllocator>::~List(List<List<int,DefaultAllocator>,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* List<GDScriptTokenizer::Token, DefaultAllocator>::~List() */void List<GDScriptTokenizer::Token,DefaultAllocator>::~List(List<GDScriptTokenizer::Token,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

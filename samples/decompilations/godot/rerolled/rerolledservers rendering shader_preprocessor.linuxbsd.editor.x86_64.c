/* CowData<Pair<int, int> >::_copy_on_write() [clone .isra.0] */void CowData<Pair<int,int>>::_copy_on_write(CowData<Pair<int,int>> *this) {
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
}
/* CowData<Pair<int, int> >::_ref(CowData<Pair<int, int> > const&) [clone .part.0] */void CowData<Pair<int,int>>::_ref(CowData<Pair<int,int>> *this, CowData *param_1) {
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
/* CowData<bool>::_copy_on_write() [clone .isra.0] */void CowData<bool>::_copy_on_write(CowData<bool> *this) {
   long *plVar1;
   size_t __n;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   __n = *(size_t*)( *(long*)this + -8 );
   uVar5 = 0x10;
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
      puVar4[1] = __n;
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
/* ShaderPreprocessor::Tokenizer::add_generated(ShaderPreprocessor::Token const&) */void ShaderPreprocessor::Tokenizer::add_generated(Tokenizer *this, Token *param_1) {
   uint uVar1;
   undefined8 uVar2;
   code *pcVar3;
   void *pvVar4;
   ulong uVar5;
   uVar1 = *(uint*)( this + 0x18 );
   uVar2 = *(undefined8*)param_1;
   pvVar4 = *(void**)( this + 0x20 );
   if (uVar1 == *(uint*)( this + 0x1c )) {
      uVar5 = ( ulong )(uVar1 * 2);
      if (uVar1 * 2 == 0) {
         uVar5 = 1;
      }

      *(int*)( this + 0x1c ) = (int)uVar5;
      pvVar4 = (void*)Memory::realloc_static(pvVar4, uVar5 * 8, false);
      *(void**)( this + 0x20 ) = pvVar4;
      if (pvVar4 == (void*)0x0) {
         _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      uVar1 = *(uint*)( this + 0x18 );
   }

   *(uint*)( this + 0x18 ) = uVar1 + 1;
   *(undefined8*)( (long)pvVar4 + (ulong)uVar1 * 8 ) = uVar2;
   return;
}
/* ShaderPreprocessor::Tokenizer::next() */undefined4 ShaderPreprocessor::Tokenizer::next(Tokenizer *this) {
   int iVar1;
   long lVar2;
   code *pcVar3;
   long lVar4;
   long lVar5;
   iVar1 = *(int*)( this + 0xc );
   lVar4 = (long)iVar1;
   if (iVar1 < *(int*)( this + 0x10 )) {
      *(int*)( this + 0xc ) = iVar1 + 1;
      lVar2 = *(long*)this;
      if (lVar2 == 0) {
         lVar5 = 0;
      }
 else {
         lVar5 = *(long*)( lVar2 + -8 );
      }

      if (lVar4 != lVar5) {
         if (( lVar4 < lVar5 ) && ( -1 < lVar4 )) {
            return *(undefined4*)( lVar2 + lVar4 * 4 );
         }

         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar5, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

   }

   return 0;
}
/* ShaderPreprocessor::Tokenizer::get_line() const */undefined4 ShaderPreprocessor::Tokenizer::get_line(Tokenizer *this) {
   return *(undefined4*)( this + 8 );
}
/* ShaderPreprocessor::Tokenizer::get_index() const */undefined4 ShaderPreprocessor::Tokenizer::get_index(Tokenizer *this) {
   return *(undefined4*)( this + 0xc );
}
/* ShaderPreprocessor::Tokenizer::get_and_clear_generated(LocalVector<char32_t, unsigned int, false,
   false>*) */void ShaderPreprocessor::Tokenizer::get_and_clear_generated(Tokenizer *this, LocalVector *param_1) {
   undefined4 uVar1;
   uint uVar2;
   code *pcVar3;
   ulong uVar4;
   void *pvVar5;
   long lVar6;
   if (*(int*)( this + 0x18 ) == 0) {
      return;
   }

   lVar6 = 0;
   pvVar5 = *(void**)( param_1 + 8 );
   do {
      uVar1 = *(undefined4*)( *(long*)( this + 0x20 ) + lVar6 * 8 );
      uVar2 = *(uint*)param_1;
      if (uVar2 == *(uint*)( param_1 + 4 )) {
         uVar4 = ( ulong )(uVar2 * 2);
         if (uVar2 * 2 == 0) {
            uVar4 = 1;
         }

         *(int*)( param_1 + 4 ) = (int)uVar4;
         pvVar5 = (void*)Memory::realloc_static(pvVar5, uVar4 * 4, false);
         *(void**)( param_1 + 8 ) = pvVar5;
         if (pvVar5 == (void*)0x0) {
            _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         uVar2 = *(uint*)param_1;
      }

      lVar6 = lVar6 + 1;
      *(uint*)param_1 = uVar2 + 1;
      *(undefined4*)( (long)pvVar5 + (ulong)uVar2 * 4 ) = uVar1;
      if (*(uint*)( this + 0x18 ) <= (uint)lVar6) {
         if (*(uint*)( this + 0x18 ) != 0) {
            *(undefined4*)( this + 0x18 ) = 0;
         }

         return;
      }

   }
 while ( true );
}
/* ShaderPreprocessor::Tokenizer::backtrack(char32_t) */void ShaderPreprocessor::Tokenizer::backtrack(Tokenizer *this, wchar32 param_1) {
   long lVar1;
   code *pcVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   lVar4 = (long)*(int*)( this + 0xc );
   if (-1 < *(int*)( this + 0xc )) {
      lVar1 = *(long*)this;
      if (lVar1 == 0) {
         if (lVar4 != 0) {
            lVar5 = 0;
            LAB_00100528:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar5, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         if (param_1 != L'\0') {
            *(undefined4*)( this + 0xc ) = 0xffffffff;
            return;
         }

      }
 else {
         lVar5 = *(long*)( lVar1 + -8 );
         do {
            if (lVar5 == lVar4) {
               if (param_1 == L'\0') {
                  return;
               }

            }
 else {
               if (lVar5 <= lVar4) goto LAB_00100528;
               if (param_1 == *(wchar32*)( lVar1 + lVar4 * 4 )) {
                  return;
               }

            }

            iVar3 = (int)lVar4;
            lVar4 = lVar4 + -1;
            *(int*)( this + 0xc ) = iVar3 + -1;
         }
 while ( -1 < (int)lVar4 );
      }

   }

   return;
}
/* ShaderPreprocessor::Tokenizer::peek() */undefined4 ShaderPreprocessor::Tokenizer::peek(Tokenizer *this) {
   long lVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   lVar3 = (long)*(int*)( this + 0xc );
   if (*(int*)( this + 0xc ) < *(int*)( this + 0x10 )) {
      lVar1 = *(long*)this;
      if (lVar1 == 0) {
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( lVar1 + -8 );
      }

      if (lVar3 != lVar4) {
         if (( lVar3 < lVar4 ) && ( -1 < lVar3 )) {
            return *(undefined4*)( lVar1 + lVar3 * 4 );
         }

         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar4, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   return 0;
}
/* ShaderPreprocessor::Tokenizer::consume_line_continuations(int) */int ShaderPreprocessor::Tokenizer::consume_line_continuations(Tokenizer *this, int param_1) {
   long lVar1;
   uint uVar2;
   code *pcVar3;
   long lVar4;
   long lVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   long lVar9;
   long in_FS_OFFSET;
   undefined4 local_28;
   undefined4 local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = *(int*)( this + 0xc ) + param_1;
   iVar8 = *(int*)( this + 0x10 );
   if (iVar6 < iVar8) {
      lVar4 = *(long*)this;
      lVar5 = (long)iVar6;
      iVar7 = 0;
      if (lVar4 == 0) {
         lVar9 = 0;
         goto LAB_00100654;
      }

      while (true) {
         lVar9 = *(long*)( lVar4 + -8 );
         LAB_00100654:if (lVar5 == lVar9) break;
         do {
            if (( lVar5 < 0 ) || ( lVar9 <= lVar5 )) {
               LAB_00100750:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar9, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            uVar2 = *(uint*)( lVar4 + lVar5 * 4 );
            lVar1 = lVar5 * 4;
            if (uVar2 == 0x5c) {
               if (( iVar8 <= iVar6 + 1 ) || ( lVar5 = lVar5 == lVar9 )) goto LAB_001006b8;
               if (lVar9 <= lVar5) goto LAB_00100750;
               if (*(int*)( lVar4 + 4 + lVar1 ) != 10) goto LAB_001006b8;
               local_24 = *(undefined4*)( this + 8 );
               iVar6 = iVar6 + 2;
               local_28 = 10;
               iVar7 = iVar7 + 1;
               add_generated(this, (Token*)&local_28);
               *(int*)( this + 8 ) = *(int*)( this + 8 ) + 1;
               iVar8 = *(int*)( this + 0x10 );
               *(int*)( this + 0xc ) = iVar6;
            }
 else if (uVar2 < 0x200c) {
               if (( uVar2 < 0x2000 ) && ( uVar2 != 0x85 )) {
                  if (uVar2 < 0x86) {
                     if (uVar2 < 0xe) {
                        if (uVar2 < 9) goto LAB_001006b8;
                     }
 else if (uVar2 != 0x20) goto LAB_001006b8;
                  }
 else if (( uVar2 != 0xa0 ) && ( uVar2 != 0x1680 )) goto LAB_001006b8;
               }

            }
 else if (uVar2 < 0x2060) {
               if (( uVar2 < 0x2028 ) || ( ( 0x80000000000083U >> ( ( ulong )(uVar2 - 0x2028) & 0x3f ) & 1 ) == 0 )) goto LAB_001006b8;
            }
 else if (uVar2 != 0x3000) goto LAB_001006b8;
            iVar6 = iVar6 + 1;
            if (iVar8 <= iVar6) goto LAB_001006b8;
            lVar4 = *(long*)this;
            lVar5 = (long)iVar6;
            lVar9 = 0;
         }
 while ( lVar4 == 0 );
      }
;
   }
 else {
      iVar7 = 0;
   }

   LAB_001006b8:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::Tokenizer::skip_whitespace() */void ShaderPreprocessor::Tokenizer::skip_whitespace(Tokenizer *this) {
   int iVar1;
   long lVar2;
   code *pcVar3;
   uint uVar4;
   ulong uVar6;
   ulong uVar7;
   ulong uVar5;
   uVar4 = *(uint*)( this + 0xc );
   uVar6 = (ulong)(int)uVar4;
   uVar5 = uVar6;
   while (true) {
      if (*(int*)( this + 0x10 ) <= (int)uVar4) {
         return;
      }

      lVar2 = *(long*)this;
      if (lVar2 == 0) {
         uVar7 = 0;
      }
 else {
         uVar7 = *(ulong*)( lVar2 + -8 );
      }

      if (uVar6 == uVar7) {
         return;
      }

      if (( (long)uVar6 < 0 ) || ( (long)uVar7 <= (long)uVar6 )) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar6, uVar7, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      iVar1 = *(int*)( lVar2 + uVar6 * 4 );
      if (( iVar1 != 0x20 ) && ( iVar1 != 9 )) break;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar4;
      uVar6 = uVar6 + 1;
      *(uint*)( this + 0xc ) = uVar4;
   }
;
   return;
}
/* ShaderPreprocessor::Tokenizer::get_token() */ulong ShaderPreprocessor::Tokenizer::get_token(Tokenizer *this) {
   int iVar1;
   long lVar2;
   code *pcVar3;
   long lVar4;
   ulong uVar5;
   long lVar6;
   iVar1 = *(int*)( this + 0xc );
   lVar4 = (long)iVar1;
   if (*(int*)( this + 0x10 ) <= iVar1) {
      return ( ulong ) * (uint*)( this + 8 ) << 0x20;
   }

   *(int*)( this + 0xc ) = iVar1 + 1;
   lVar2 = *(long*)this;
   if (lVar2 == 0) {
      lVar6 = 0;
   }
 else {
      lVar6 = *(long*)( lVar2 + -8 );
   }

   if (lVar4 == lVar6) {
      uVar5 = ( ulong ) * (uint*)( this + 8 ) << 0x20;
   }
 else {
      if (( lVar6 <= lVar4 ) || ( lVar4 < 0 )) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar6, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      iVar1 = *(int*)( lVar2 + lVar4 * 4 );
      uVar5 = CONCAT44(*(int*)( this + 8 ), iVar1);
      if (iVar1 == 10) {
         *(int*)( this + 8 ) = *(int*)( this + 8 ) + 1;
         return uVar5;
      }

      if (( iVar1 == 0x20 ) || ( iVar1 == 9 )) {
         skip_whitespace(this);
         return ( ulong ) * (uint*)( this + 8 ) << 0x20 | 0x20;
      }

   }

   return uVar5;
}
/* ShaderPreprocessor::CommentRemover::get_error() const */void ShaderPreprocessor::CommentRemover::get_error(void) {
   int iVar1;
   long lVar2;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)( in_RSI + 0x24 );
   *(undefined8*)in_RDI = 0;
   if (iVar1 == 0) {
      String::parse_latin1(in_RDI);
   }
 else {
      String::parse_latin1(in_RDI);
   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::CommentRemover::get_error_line() const */undefined4 ShaderPreprocessor::CommentRemover::get_error_line(CommentRemover *this) {
   if (*(int*)( this + 0x24 ) != 0) {
      return *(undefined4*)( this + 0x20 );
   }

   return 0xffffffff;
}
/* ShaderPreprocessor::CommentRemover::peek() const */undefined4 ShaderPreprocessor::CommentRemover::peek(CommentRemover *this) {
   int iVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   long lVar5;
   long lVar6;
   lVar2 = *(long*)( this + 0x10 );
   iVar1 = *(int*)( this + 0x18 );
   lVar5 = (long)iVar1;
   if (lVar2 == 0) {
      lVar6 = 0;
      if (iVar1 < 0) {
         LAB_00100ac0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar6, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

   }
 else {
      lVar6 = *(long*)( lVar2 + -8 );
      if (iVar1 < (int)lVar6) {
         if (lVar6 == lVar5) {
            puVar4 = &String::_null;
         }
 else {
            if (( lVar6 <= lVar5 ) || ( lVar5 < 0 )) goto LAB_00100ac0;
            puVar4 = (undefined8*)( lVar2 + lVar5 * 4 );
         }

         return *(undefined4*)puVar4;
      }

   }

   return 0;
}
/* ShaderPreprocessor::CommentRemover::advance(char32_t) */undefined8 ShaderPreprocessor::CommentRemover::advance(CommentRemover *this, wchar32 param_1) {
   int iVar1;
   uint uVar2;
   long lVar3;
   code *pcVar4;
   void *pvVar5;
   long lVar6;
   ulong uVar7;
   wchar32 wVar8;
   long lVar9;
   while (true) {
      lVar3 = *(long*)( this + 0x10 );
      iVar1 = *(int*)( this + 0x18 );
      lVar6 = (long)iVar1;
      if (lVar3 == 0) break;
      lVar9 = *(long*)( lVar3 + -8 );
      if ((int)lVar9 <= iVar1) {
         return 0;
      }

      *(int*)( this + 0x18 ) = iVar1 + 1;
      if (lVar6 == lVar9) {
         wVar8 = L'\0';
      }
 else {
         if (( lVar9 <= lVar6 ) || ( lVar6 < 0 )) goto LAB_00100bb1;
         wVar8 = *(wchar32*)( lVar3 + lVar6 * 4 );
         if (wVar8 == L'\n') {
            *(int*)( this + 0x1c ) = *(int*)( this + 0x1c ) + 1;
            uVar2 = *(uint*)this;
            pvVar5 = *(void**)( this + 8 );
            if (uVar2 == *(uint*)( this + 4 )) {
               uVar7 = ( ulong )(uVar2 * 2);
               if (uVar2 * 2 == 0) {
                  uVar7 = 1;
               }

               *(int*)( this + 4 ) = (int)uVar7;
               pvVar5 = (void*)Memory::realloc_static(pvVar5, uVar7 * 4, false);
               *(void**)( this + 8 ) = pvVar5;
               if (pvVar5 == (void*)0x0) {
                  _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

               uVar2 = *(uint*)this;
            }

            *(uint*)this = uVar2 + 1;
            *(undefined4*)( (long)pvVar5 + (ulong)uVar2 * 4 ) = 10;
         }

      }

      if (param_1 == wVar8) {
         return 1;
      }

   }
;
   if (-1 < iVar1) {
      return 0;
   }

   lVar9 = 0;
   *(int*)( this + 0x18 ) = iVar1 + 1;
   LAB_00100bb1:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar9, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar4 = (code*)invalidInstructionException();
   ( *pcVar4 )();
}
/* ShaderPreprocessor::Token::Token() */void ShaderPreprocessor::Token::Token(Token *this) {
   *(undefined8*)this = 0xffffffff00000000;
   return;
}
/* ShaderPreprocessor::Token::Token(char32_t, int) */void ShaderPreprocessor::Token::Token(Token *this, wchar32 param_1, int param_2) {
   *(wchar32*)this = param_1;
   *(int*)( this + 4 ) = param_2;
   return;
}
/* ShaderPreprocessor::is_char_word(char32_t) */bool ShaderPreprocessor::is_char_word(wchar32 param_1) {
   if (0x39 < (uint)param_1) {
      return ( uint )(param_1 + L'\xffffffbf') < 0x3a && ( 0x3ffffff43ffffffU >> ( ( ulong )(uint)(param_1 + L'\xffffffbf') & 0x3f ) & 1 ) != 0;
   }

   return 0x2f < (uint)param_1;
}
/* ShaderPreprocessor::is_char_space(char32_t) */uint ShaderPreprocessor::is_char_space(wchar32 param_1) {
   undefined8 in_RAX;
   undefined4 in_EDX;
   return (uint)CONCAT71(( int7 )((ulong)in_RAX >> 8), param_1 == L' ') | CONCAT31(( int3 )((uint)in_EDX >> 8), param_1 == L'\t');
}
/* ShaderPreprocessor::is_char_end(char32_t) */uint ShaderPreprocessor::is_char_end(wchar32 param_1) {
   undefined8 in_RAX;
   undefined4 in_EDX;
   return (uint)CONCAT71(( int7 )((ulong)in_RAX >> 8), param_1 == L'\n') | CONCAT31(( int3 )((uint)in_EDX >> 8), param_1 == L'\0');
}
/* ShaderPreprocessor::find_match(String const&, String const&, int&, int&) */undefined8 ShaderPreprocessor::find_match(ShaderPreprocessor *this, String *param_1, String *param_2, int *param_3, int *param_4) {
   uint uVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   int iVar6;
   int iVar7;
   long lVar8;
   uint *puVar9;
   long lVar10;
   bool bVar11;
   bool bVar12;
   iVar6 = String::find(param_1, (int)param_2);
   do {
      *param_3 = iVar6;
      if (iVar6 < 0) {
         return 0;
      }

      lVar2 = *(long*)param_1;
      if (iVar6 == 0) {
         LAB_00100db0:lVar3 = *(long*)param_2;
         joined_r0x00100ec8:if (lVar3 != 0) {
            iVar7 = (int)*(undefined8*)( lVar3 + -8 );
            if (iVar7 == 0) {
               if (lVar2 != 0) {
                  lVar10 = *(long*)( lVar2 + -8 );
                  if (( (int)lVar10 != 0 ) && ( iVar6 < (int)lVar10 + -1 )) goto LAB_00100de8;
                  goto LAB_00100e55;
               }

            }
 else {
               iVar7 = iVar6 + -1 + iVar7;
               if (lVar2 == 0) {
                  if (iVar7 < 0) {
                     lVar8 = (long)iVar7;
                     lVar10 = 0;
                     goto LAB_00100f24;
                  }

               }
 else {
                  lVar10 = *(long*)( lVar2 + -8 );
                  if ((int)lVar10 == 0) {
                     if (iVar7 < 0) {
                        LAB_00100e9a:lVar8 = (long)iVar7;
                        bVar12 = SBORROW8(lVar10, lVar8);
                        lVar4 = lVar10 - lVar8;
                        bVar11 = lVar4 == 0;
                        if (bVar11) goto LAB_00100ea6;
                        goto LAB_00100df1;
                     }

                  }
 else if (iVar7 < (int)lVar10 + -1) goto LAB_00100e9a;
               }

            }

            LAB_00100e5a:iVar7 = (int)*(undefined8*)( lVar3 + -8 );
            if (iVar7 != 0) {
               iVar6 = iVar6 + -1 + iVar7;
            }

            LAB_00100e67:*param_4 = iVar6 + 1;
            return 1;
         }

         if (lVar2 == 0) goto LAB_00100e67;
         lVar10 = *(long*)( lVar2 + -8 );
         if (( (int)lVar10 == 0 ) || ( (int)lVar10 + -1 <= iVar6 )) goto LAB_00100e67;
         LAB_00100de8:lVar8 = (long)iVar6;
         bVar12 = SBORROW8(lVar10, lVar8);
         lVar4 = lVar10 - lVar8;
         bVar11 = lVar10 == lVar8;
         iVar7 = iVar6;
         if (bVar11) {
            LAB_00100ea6:puVar9 = (uint*)&String::_null;
         }
 else {
            LAB_00100df1:if (( bVar11 || bVar12 != lVar4 < 0 ) || ( lVar8 < 0 )) {
               LAB_00100f24:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar10, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar5 = (code*)invalidInstructionException();
               ( *pcVar5 )();
            }

            puVar9 = (uint*)( lVar2 + (long)iVar7 * 4 );
         }

         uVar1 = *puVar9;
         if (uVar1 < 0x3a) {
            if (uVar1 < 0x30) goto LAB_00100e55;
         }
 else if (( 0x39 < uVar1 - 0x41 ) || ( ( 0x3ffffff43ffffffU >> ( ( ulong )(uVar1 - 0x41) & 0x3f ) & 1 ) == 0 )) {
            LAB_00100e55:if (lVar3 == 0) goto LAB_00100e67;
            goto LAB_00100e5a;
         }

         if (( lVar3 != 0 ) && ( iVar7 = iVar7 != 0 )) {
            iVar6 = iVar6 + -1 + iVar7;
         }

      }
 else {
         lVar8 = (long)( iVar6 + -1 );
         if (lVar2 == 0) {
            if (iVar6 + -1 != 0) {
               lVar10 = 0;
               goto LAB_00100f24;
            }

            LAB_00100f50:puVar9 = (uint*)&String::_null;
         }
 else {
            lVar10 = *(long*)( lVar2 + -8 );
            if (lVar10 == lVar8) goto LAB_00100f50;
            if (lVar10 <= lVar8) goto LAB_00100f24;
            puVar9 = (uint*)( lVar2 + lVar8 * 4 );
         }

         uVar1 = *puVar9;
         if (uVar1 < 0x3a) {
            if (uVar1 < 0x30) {
               lVar3 = *(long*)param_2;
               goto joined_r0x00100ec8;
            }

         }
 else if (( 0x39 < uVar1 - 0x41 ) || ( ( 0x3ffffff43ffffffU >> ( ( ulong )(uVar1 - 0x41) & 0x3f ) & 1 ) == 0 )) goto LAB_00100db0;
      }

      *param_4 = iVar6 + 1;
      iVar6 = String::find(param_1, (int)param_2);
   }
 while ( true );
}
/* ShaderPreprocessor::add_to_output(String const&) */void ShaderPreprocessor::add_to_output(ShaderPreprocessor *this, String *param_1) {
   long lVar1;
   code *pcVar2;
   void *pvVar3;
   long lVar4;
   uint uVar5;
   ulong uVar6;
   long lVar7;
   undefined4 uVar8;
   lVar4 = *(long*)param_1;
   if (lVar4 == 0) {
      return;
   }

   lVar7 = 0;
   do {
      lVar1 = *(long*)( lVar4 + -8 );
      if (( (int)lVar1 == 0 ) || ( (int)lVar1 + -1 <= (int)lVar7 )) {
         return;
      }

      if (lVar1 == lVar7) {
         uVar5 = *(uint*)this;
         uVar6 = (ulong)uVar5;
         pvVar3 = *(void**)( this + 8 );
         uVar8 = (undefined4)String::_null;
         if (uVar5 == *(uint*)( this + 4 )) goto LAB_00101050;
      }
 else {
         if (lVar1 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar1, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         uVar5 = *(uint*)this;
         uVar6 = (ulong)uVar5;
         pvVar3 = *(void**)( this + 8 );
         uVar8 = *(undefined4*)( lVar4 + lVar7 * 4 );
         if (uVar5 == *(uint*)( this + 4 )) {
            LAB_00101050:uVar6 = ( ulong )(uVar5 * 2);
            if (uVar5 * 2 == 0) {
               uVar6 = 1;
            }

            *(int*)( this + 4 ) = (int)uVar6;
            pvVar3 = (void*)Memory::realloc_static(pvVar3, uVar6 * 4, false);
            *(void**)( this + 8 ) = pvVar3;
            if (pvVar3 == (void*)0x0) {
               _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            uVar6 = ( ulong ) * (uint*)this;
            lVar4 = *(long*)param_1;
         }

      }

      lVar7 = lVar7 + 1;
      *(int*)this = (int)uVar6 + 1;
      *(undefined4*)( (long)pvVar3 + uVar6 * 4 ) = uVar8;
      if (lVar4 == 0) {
         return;
      }

   }
 while ( true );
}
/* ShaderPreprocessor::ShaderPreprocessor() */void ShaderPreprocessor::ShaderPreprocessor(ShaderPreprocessor *this) {
   *(undefined8*)this = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   return;
}
/* ShaderPreprocessor::~ShaderPreprocessor() */void ShaderPreprocessor::~ShaderPreprocessor(ShaderPreprocessor *this) {
   if (*(void**)( this + 8 ) != (void*)0x0) {
      if (*(int*)this != 0) {
         *(undefined4*)this = 0;
      }

      Memory::free_static(*(void**)( this + 8 ), false);
      return;
   }

   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
/* ShaderPreprocessor::create_define(String const&) */void *ShaderPreprocessor::create_define(String *param_1) {
   long lVar1;
   void *pvVar2;
   pvVar2 = operator_new(0x20, "");
   *(undefined1(*) [16])( (long)pvVar2 + 8 ) = (undefined1[16])0x0;
   lVar1 = *(long*)param_1;
   *(undefined1*)( (long)pvVar2 + 0x18 ) = 0;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( (long)pvVar2 + 0x10 ), (CowData*)param_1);
   }

   return pvVar2;
}
/* ShaderPreprocessor::CommentRemover::CommentRemover(String const&) */void ShaderPreprocessor::CommentRemover::CommentRemover(CommentRemover *this, String *param_1) {
   long lVar1;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   lVar1 = *(long*)param_1;
   *(undefined8*)this = 0;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x10 ), (CowData*)param_1);
   }

   *(undefined4*)( this + 0x28 ) = 0;
   *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
   return;
}
/* ShaderPreprocessor::Tokenizer::Tokenizer(String const&) */void ShaderPreprocessor::Tokenizer::Tokenizer(Tokenizer *this, String *param_1) {
   long lVar1;
   undefined4 uVar2;
   *(undefined8*)this = 0;
   lVar1 = *(long*)param_1;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   if (lVar1 == 0) {
      *(undefined8*)( this + 8 ) = 0;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)param_1);
      *(undefined8*)( this + 8 ) = 0;
      if (*(long*)this != 0) {
         uVar2 = *(undefined4*)( *(long*)this + -8 );
         goto LAB_0010127d;
      }

   }

   uVar2 = 0;
   LAB_0010127d:*(undefined4*)( this + 0x10 ) = uVar2;
   return;
}
/* List<String, DefaultAllocator>::push_back(String const&) [clone .isra.0] */void List<String,DefaultAllocator>::push_back(List<String,DefaultAllocator> *this, String *param_1) {
   long *plVar1;
   long lVar2;
   CowData<char32_t> *this_00;
   undefined1(*pauVar3)[16];
   if (*(long*)this == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref(this_00, (CowData*)param_1);
   }

   plVar1 = *(long**)this;
   lVar2 = plVar1[1];
   *(undefined8*)( this_00 + 8 ) = 0;
   *(long**)( this_00 + 0x18 ) = plVar1;
   *(long*)( this_00 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = this_00;
   }

   plVar1[1] = (long)this_00;
   if (*plVar1 != 0) {
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      return;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   *plVar1 = (long)this_00;
   return;
}
/* ShaderPreprocessor::get_keyword_list(List<String, DefaultAllocator>*, bool, bool) */void ShaderPreprocessor::get_keyword_list(List *param_1, bool param_2, bool param_3) {
   long in_FS_OFFSET;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_40 = 6;
   local_48 = "define";
   String::parse_latin1((StrRange*)&local_50);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)param_1, (String*)&local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (!param_3) {
      local_50 = 0;
      local_48 = "defined";
      local_40 = 7;
      String::parse_latin1((StrRange*)&local_50);
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)param_1, (String*)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   local_50 = 0;
   local_48 = "elif";
   local_40 = 4;
   String::parse_latin1((StrRange*)&local_50);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)param_1, (String*)&local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (param_2) {
      local_50 = 0;
      local_48 = "else";
      local_40 = 4;
      String::parse_latin1((StrRange*)&local_50);
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)param_1, (String*)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   local_50 = 0;
   local_48 = "endif";
   local_40 = 5;
   String::parse_latin1((StrRange*)&local_50);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)param_1, (String*)&local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = "error";
   local_50 = 0;
   local_40 = 5;
   String::parse_latin1((StrRange*)&local_50);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)param_1, (String*)&local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (param_2) {
      local_50 = 0;
      local_48 = "if";
      local_40 = 2;
      String::parse_latin1((StrRange*)&local_50);
      List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)param_1, (String*)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   local_50 = 0;
   local_48 = "ifdef";
   local_40 = 5;
   String::parse_latin1((StrRange*)&local_50);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)param_1, (String*)&local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = "ifndef";
   local_50 = 0;
   local_40 = 6;
   String::parse_latin1((StrRange*)&local_50);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)param_1, (String*)&local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = "include";
   local_50 = 0;
   local_40 = 7;
   String::parse_latin1((StrRange*)&local_50);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)param_1, (String*)&local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = "pragma";
   local_50 = 0;
   local_40 = 6;
   String::parse_latin1((StrRange*)&local_50);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)param_1, (String*)&local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_48 = "undef";
   local_50 = 0;
   local_40 = 5;
   String::parse_latin1((StrRange*)&local_50);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)param_1, (String*)&local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::set_error(String const&, int) */void ShaderPreprocessor::set_error(ShaderPreprocessor *this, String *param_1, int param_2) {
   int iVar1;
   long *plVar2;
   CowData<char32_t> *this_00;
   undefined1(*pauVar3)[16];
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_48;
   int local_40;
   long local_30;
   lVar4 = *(long*)( this + 0x10 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *(long*)( lVar4 + 0x68 );
   if (( lVar5 == 0 ) || ( *(uint*)( lVar5 + -8 ) < 2 )) {
      if (lVar5 != *(long*)param_1) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( lVar4 + 0x68 ), (CowData*)param_1);
         lVar4 = *(long*)( this + 0x10 );
      }

      local_48 = 0;
      local_40 = 0;
      lVar5 = *(long*)( lVar4 + 0x58 );
      if (*(long*)( lVar4 + 0x58 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)( lVar4 + 0x58 ));
         lVar4 = *(long*)( this + 0x10 );
         lVar5 = local_48;
      }

      iVar1 = param_2 + 1;
      local_40 = iVar1;
      if (*(long*)( lVar4 + 0x70 ) == 0) {
         pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( lVar4 + 0x70 ) = pauVar3;
         *(undefined4*)pauVar3[1] = 0;
         *pauVar3 = (undefined1[16])0x0;
      }

      this_00 = (CowData<char32_t>*)operator_new(0x28, DefaultAllocator::alloc);
      *(undefined8*)this_00 = 0;
      *(undefined4*)( this_00 + 8 ) = 0;
      *(undefined8*)( this_00 + 0x20 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
      if (lVar5 != 0) {
         CowData<char32_t>::_ref(this_00, (CowData*)&local_48);
      }

      plVar2 = *(long**)( lVar4 + 0x70 );
      *(int*)( this_00 + 8 ) = iVar1;
      lVar5 = plVar2[1];
      *(undefined8*)( this_00 + 0x10 ) = 0;
      *(long**)( this_00 + 0x20 ) = plVar2;
      *(long*)( this_00 + 0x18 ) = lVar5;
      if (lVar5 != 0) {
         *(CowData<char32_t>**)( lVar5 + 0x10 ) = this_00;
      }

      plVar2[1] = (long)this_00;
      if (*plVar2 == 0) {
         *plVar2 = (long)this_00;
      }

      *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::get_pragma_list(List<String, DefaultAllocator>*) */void ShaderPreprocessor::get_pragma_list(List *param_1) {
   long *plVar1;
   long lVar2;
   CowData<char32_t> *this;
   undefined1(*pauVar3)[16];
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_38 = "disable_preprocessor";
   local_30 = 0x14;
   String::parse_latin1((StrRange*)&local_40);
   if (*(long*)param_1 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   this(CowData<char32_t> * operator_new(0x20, DefaultAllocator::alloc));
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   if (local_40 != 0) {
      CowData<char32_t>::_ref(this, (CowData*)&local_40);
   }

   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( this + 8 ) = 0;
   *(long**)( this + 0x18 ) = plVar1;
   *(long*)( this + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = this;
   }

   plVar1[1] = (long)this;
   if (*plVar1 == 0) {
      *plVar1 = (long)this;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_copy_on_write() [clone .isra.0] */void CowData<char32_t>::_copy_on_write(CowData<char32_t> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   ulong uVar4;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar4 = 0x10;
   __n = lVar1 * 4;
   if (__n != 0) {
      uVar4 = __n - 1 | __n - 1 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = ( uVar4 | uVar4 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar4, false);
   if (puVar3 != (undefined8*)0x0) {
      *puVar3 = 1;
      puVar3[1] = lVar1;
      memcpy(puVar3 + 2, *(void**)this, __n);
      _unref(this);
      *(undefined8**)this = puVar3 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* ShaderPreprocessor::concatenate_macro_body(String&) */void ShaderPreprocessor::concatenate_macro_body(ShaderPreprocessor *this, String *param_1) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   bool bVar4;
   int iVar5;
   int iVar6;
   long lVar7;
   int iVar8;
   long lVar9;
   long in_FS_OFFSET;
   CowData<char32_t> aCStack_58[8];
   CowData<char32_t> local_50[8];
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = String::find((char*)param_1, 0x10a3be);
   do {
      if (iVar5 < 0) {
         LAB_00101af8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      lVar9 = *(long*)param_1;
      iVar6 = iVar5 + 2;
      if (lVar9 == 0) {
         lVar9 = 0;
         LAB_00101c73:_err_print_index_error("concatenate_macro_body", "servers/rendering/shader_preprocessor.cpp", 0x484, (long)iVar6, lVar9, "index_end", "r_body.size()", "", false, false);
         goto LAB_00101af8;
      }

      lVar2 = *(long*)( lVar9 + -8 );
      iVar8 = (int)lVar2;
      if (iVar8 <= iVar6) {
         lVar9 = (long)iVar8;
         goto LAB_00101c73;
      }

      lVar7 = (long)iVar6;
      bVar4 = true;
      while (( iVar6 = (int)lVar7 ),iVar6 < iVar8 && ( lVar2 != lVar7 )) {
         if (lVar2 <= lVar7) goto LAB_00101b3b;
         lVar1 = lVar7 * 4;
         lVar7 = lVar7 + 1;
         if (*(int*)( lVar9 + lVar1 ) != 0x23) break;
         bVar4 = false;
      }
;
      if (bVar4) {
         lVar7 = (long)iVar6;
         do {
            if (( iVar8 + -1 <= (int)lVar7 ) || ( lVar2 == lVar7 )) break;
            if (lVar2 <= lVar7) goto LAB_00101b3b;
            iVar6 = *(int*)( lVar9 + lVar7 * 4 );
            lVar7 = lVar7 + 1;
         }
 while ( ( iVar6 == 0x20 ) || ( iVar6 == 9 ) );
         lVar7 = (long)( iVar5 + -1 );
         do {
            if (( iVar5 == 0 ) || ( iVar5 = lVar2 == lVar7 )) break;
            if (lVar2 <= lVar7) {
               LAB_00101b3b:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            iVar6 = *(int*)( lVar9 + lVar7 * 4 );
            lVar7 = lVar7 + -1;
         }
 while ( ( iVar6 == 0x20 ) || ( iVar6 == 9 ) );
         String::substr((int)local_50, (int)param_1);
         String::substr((int)aCStack_58, (int)param_1);
         String::operator +((String*)&local_48, (String*)aCStack_58);
         if (*(long*)param_1 != local_48) {
            CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
            lVar9 = local_48;
            local_48 = 0;
            *(long*)param_1 = lVar9;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref(aCStack_58);
         CowData<char32_t>::_unref(local_50);
      }

      iVar5 = String::find((char*)param_1, 0x10a3be);
   }
 while ( true );
}
/* ShaderPreprocessor::vector_to_string(LocalVector<char32_t, unsigned int, false, false> const&,
   int, int) */ShaderPreprocessor * __thiscall
ShaderPreprocessor::vector_to_string
          (ShaderPreprocessor *this,LocalVector *param_1,int param_2,int param_3){
   code *pcVar1;
   undefined8 *puVar2;
   long lVar3;
   ulong uVar4;
   long lVar5;
   long lVar6;
   int iVar7;
   int iVar8;
   if (param_3 == -1) {
      param_3 = *(int*)param_1;
   }

   iVar7 = param_3 - param_2;
   *(undefined8*)this = 0;
   iVar8 = iVar7 + 1;
   if (iVar8 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      lVar3 = (long)iVar7;
      if (*(long*)this == 0) {
         lVar6 = 0;
      }
 else {
         lVar6 = *(long*)( *(long*)this + -8 );
      }

   }
 else if (iVar8 == 0) {
      lVar3 = -1;
      lVar6 = 0;
   }
 else {
      CowData<char32_t>::_copy_on_write((CowData<char32_t>*)this);
      uVar4 = (long)iVar8 * 4 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      puVar2 = (undefined8*)Memory::alloc_static(( uVar4 | uVar4 >> 0x20 ) + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
      }
 else {
         *puVar2 = 1;
         *(undefined8**)this = puVar2 + 2;
         puVar2[1] = (long)iVar8;
      }

      if (iVar7 == 0) {
         lVar3 = 0;
      }
 else {
         lVar6 = 0;
         do {
            while (true) {
               lVar3 = lVar6;
               if (*(uint*)param_1 <= (uint)param_2) {
                  _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, (ulong)(uint)param_2, ( ulong ) * (uint*)param_1, "p_index", "count", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

               lVar6 = *(long*)( param_1 + 8 );
               uVar4 = (ulong)(uint)param_2;
               if (*(long*)this != 0) break;
               lVar5 = 0;
               LAB_00101e2b:param_2 = param_2 + 1;
               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar5, "p_index", "size()", "", false, false);
               lVar6 = lVar3 + 1;
               if (lVar3 + 1 == (long)iVar7) goto LAB_00101e80;
            }
;
            lVar5 = *(long*)( *(long*)this + -8 );
            if (lVar5 <= lVar3) goto LAB_00101e2b;
            param_2 = param_2 + 1;
            CowData<char32_t>::_copy_on_write((CowData<char32_t>*)this);
            *(undefined4*)( *(long*)this + lVar3 * 4 ) = *(undefined4*)( lVar6 + uVar4 * 4 );
            lVar6 = lVar3 + 1;
         }
 while ( lVar3 + 1 != (long)iVar7 );
         LAB_00101e80:lVar3 = lVar3 + 1;
      }

      if (*(long*)this == 0) {
         lVar6 = 0;
      }
 else {
         lVar6 = *(long*)( *(long*)this + -8 );
         if (lVar3 < lVar6) {
            CowData<char32_t>::_copy_on_write((CowData<char32_t>*)this);
            *(undefined4*)( *(long*)this + (long)iVar7 * 4 ) = 0;
            return this;
         }

      }

   }

   _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar6, "p_index", "size()", "", false, false);
   return this;
}
/* ShaderPreprocessor::Tokenizer::get_identifier(bool*, bool) */bool *ShaderPreprocessor::Tokenizer::get_identifier(bool *param_1, bool param_2) {
   code *pcVar1;
   undefined8 uVar2;
   int iVar3;
   char cVar4;
   uint uVar5;
   int iVar6;
   ulong uVar7;
   ulong uVar8;
   void *pvVar9;
   char in_CL;
   undefined1 *in_RDX;
   undefined7 in_register_00000031;
   Tokenizer *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   void *local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   this(Tokenizer * CONCAT71(in_register_00000031, param_2));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_RDX != (undefined1*)0x0) {
      *in_RDX = 0;
   }

   local_68 = 0;
   pvVar9 = (void*)0x0;
   local_60 = (void*)0x0;
   LAB_00102010:uVar7 = peek(this);
   if ((int)uVar7 == 0x5c) goto LAB_0010206f;
   do {
      uVar5 = (uint)uVar7;
      if (uVar5 < 0x3c) {
         if (( 0x800130000000401U >> ( uVar7 & 0x3f ) & 1 ) != 0) goto LAB_001020f8;
         if (uVar5 < 0xe) {
            if (uVar5 < 9) goto LAB_0010207d;
         }
 else {
            LAB_001021d0:if (uVar5 != 0x20) goto LAB_0010207d;
         }

      }
 else if (uVar5 < 0x200c) {
         if (( uVar5 < 0x2000 ) && ( uVar5 != 0x85 )) {
            if (uVar5 < 0x86) goto LAB_001021d0;
            if (( uVar5 != 0xa0 ) && ( uVar5 != 0x1680 )) goto LAB_0010207d;
         }

      }
 else if (uVar5 < 0x2060) {
         if (uVar5 < 0x2028) goto LAB_0010207d;
         if (( 0x80000000000083U >> ( ( ulong )(uVar5 - 0x2028) & 0x3f ) & 1 ) == 0) goto LAB_0010207d;
      }
 else if (uVar5 != 0x3000) goto LAB_0010207d;
      if (in_CL != '\0') {
         LAB_001020f8:vector_to_string((ShaderPreprocessor*)&local_70, (LocalVector*)&local_68, 0, -1);
         cVar4 = String::is_valid_ascii_identifier();
         uVar2 = local_70;
         if (cVar4 == '\0') {
            local_50 = 0;
            local_58 = &_LC14;
            for (int i = 0; i < 8; i++) {
               param_1[i] = false;
            }

            String::parse_latin1((StrRange*)param_1);
         }
 else {
            local_70 = 0;
            *(undefined8*)param_1 = uVar2;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (pvVar9 != (void*)0x0) {
            Memory::free_static(pvVar9, false);
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return param_1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      iVar6 = next(this);
      if (iVar6 != 0xffff) goto LAB_00102010;
      while (true) {
         if (in_RDX == (undefined1*)0x0) goto LAB_00102010;
         *in_RDX = 1;
         uVar7 = peek(this);
         if ((int)uVar7 != 0x5c) break;
         LAB_0010206f:iVar6 = consume_line_continuations(this, 0);
         if (0 < iVar6) goto LAB_00102010;
         LAB_0010207d:iVar6 = next(this);
         uVar7 = local_68;
         if (iVar6 != 0xffff) {
            iVar3 = (int)local_68;
            if (local_68._4_4_ == (int)local_68) {
               uVar8 = ( ulong )(uint)(local_68._4_4_ * 2);
               if (local_68._4_4_ * 2 == 0) {
                  uVar8 = 1;
               }

               local_68 = CONCAT44((int)uVar8, (int)local_68);
               pvVar9 = (void*)Memory::realloc_static(pvVar9, uVar8 * 4, false);
               local_60 = pvVar9;
               if (pvVar9 == (void*)0x0) {
                  _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            *(int*)( (long)pvVar9 + ( uVar7 & 0xffffffff ) * 4 ) = iVar6;
            in_CL = '\x01';
            local_68 = CONCAT44(local_68._4_4_, iVar3 + 1);
            goto LAB_00102010;
         }

         in_CL = '\x01';
      }
;
   }
 while ( true );
}
/* ShaderPreprocessor::Tokenizer::peek_identifier() */void ShaderPreprocessor::Tokenizer::peek_identifier(void) {
   undefined8 uVar1;
   long lVar2;
   bool in_SIL;
   undefined7 in_register_00000031;
   bool *in_RDI;
   long in_FS_OFFSET;
   uVar1 = *(undefined8*)( CONCAT71(in_register_00000031, in_SIL) + 8 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   get_identifier(in_RDI, in_SIL);
   *(undefined8*)( CONCAT71(in_register_00000031, in_SIL) + 8 ) = uVar1;
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::CommentRemover::strip() */void ShaderPreprocessor::CommentRemover::strip(void) {
   uint uVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   void *pvVar7;
   long lVar8;
   ulong uVar9;
   int iVar10;
   LocalVector<char32_t,unsigned_int,false,false> *in_RSI;
   long lVar11;
   ShaderPreprocessor *in_RDI;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   LocalVector<char32_t,unsigned_int,false,false>::resize(in_RSI, 0);
   lVar11 = *(long*)( in_RSI + 0x10 );
   iVar5 = 0;
   *(undefined4*)( in_RSI + 0x28 ) = 0;
   *(undefined1(*) [16])( in_RSI + 0x18 ) = (undefined1[16])0x0;
   LAB_00102331:if (lVar11 == 0) {
      if (iVar5 < 0) {
         lVar6 = 0;
         lVar8 = (long)iVar5;
         *(int*)( in_RSI + 0x18 ) = iVar5 + 1;
         LAB_0010245c:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar6, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      LAB_001025c8:vector_to_string(in_RDI, (LocalVector*)in_RSI, 0, -1);
      if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   lVar6 = *(long*)( lVar11 + -8 );
   LAB_00102341:if ((int)lVar6 <= iVar5) goto LAB_001025c8;
   lVar8 = (long)iVar5;
   *(int*)( in_RSI + 0x18 ) = iVar5 + 1;
   if (lVar8 == lVar6) {
      iVar5 = 0;
   }
 else {
      if (( lVar6 <= lVar8 ) || ( lVar8 < 0 )) goto LAB_0010245c;
      iVar5 = *(int*)( lVar11 + lVar8 * 4 );
      if (iVar5 == 0xffff) {
         uVar1 = *(uint*)in_RSI;
         if (uVar1 == *(uint*)( in_RSI + 4 )) goto LAB_00102580;
         *(uint*)in_RSI = uVar1 + 1;
         *(undefined4*)( (long)*(void**)( in_RSI + 8 ) + (ulong)uVar1 * 4 ) = 0xffff;
         iVar5 = *(int*)( in_RSI + 0x18 );
         goto LAB_00102341;
      }

      if (iVar5 == 0x22) {
         iVar5 = *(int*)( in_RSI + 0x28 );
         iVar10 = iVar5 + -1;
         if (iVar5 < 1) {
            iVar10 = iVar5 + 1;
         }

         *(int*)( in_RSI + 0x28 ) = iVar10;
         uVar1 = *(uint*)in_RSI;
         if (uVar1 == *(uint*)( in_RSI + 4 )) {
            uVar9 = ( ulong )(uVar1 * 2);
            if (uVar1 * 2 == 0) {
               uVar9 = 1;
            }

            *(int*)( in_RSI + 4 ) = (int)uVar9;
            lVar6 = Memory::realloc_static(*(void**)( in_RSI + 8 ), uVar9 * 4, false);
            *(long*)( in_RSI + 8 ) = lVar6;
            if (lVar6 == 0) goto LAB_001026bd;
            uVar1 = *(uint*)in_RSI;
            lVar11 = *(long*)( in_RSI + 0x10 );
            *(uint*)in_RSI = uVar1 + 1;
            *(undefined4*)( lVar6 + (ulong)uVar1 * 4 ) = 0x22;
            iVar5 = *(int*)( in_RSI + 0x18 );
            goto LAB_00102331;
         }

         *(uint*)in_RSI = uVar1 + 1;
         *(undefined4*)( (long)*(void**)( in_RSI + 8 ) + (ulong)uVar1 * 4 ) = 0x22;
         iVar5 = *(int*)( in_RSI + 0x18 );
         goto LAB_00102341;
      }

      if (iVar5 == 0x2f) {
         if (*(int*)( in_RSI + 0x28 ) == 0) {
            iVar5 = peek((CommentRemover*)in_RSI);
            if (iVar5 == 0x2f) {
               advance((CommentRemover*)in_RSI, L'\n');
               iVar5 = *(int*)( in_RSI + 0x18 );
               lVar11 = *(long*)( in_RSI + 0x10 );
               goto LAB_00102331;
            }

            if (iVar5 == 0x2a) {
               *(int*)( in_RSI + 0x18 ) = *(int*)( in_RSI + 0x18 ) + 1;
               *(ulong*)( in_RSI + 0x20 ) = CONCAT44(*(int*)( in_RSI + 0x24 ) + 1, *(undefined4*)( in_RSI + 0x1c ));
               goto LAB_00102710;
            }

            uVar1 = *(uint*)in_RSI;
            pvVar7 = *(void**)( in_RSI + 8 );
            if (uVar1 == *(uint*)( in_RSI + 4 )) {
               uVar9 = ( ulong )(uVar1 * 2);
               if (uVar1 * 2 == 0) {
                  uVar9 = 1;
               }

               *(int*)( in_RSI + 4 ) = (int)uVar9;
               pvVar7 = (void*)Memory::realloc_static(pvVar7, uVar9 * 4, false);
               *(void**)( in_RSI + 8 ) = pvVar7;
               if (pvVar7 == (void*)0x0) goto LAB_001026bd;
               uVar1 = *(uint*)in_RSI;
            }

            lVar11 = *(long*)( in_RSI + 0x10 );
            *(uint*)in_RSI = uVar1 + 1;
            *(undefined4*)( (long)pvVar7 + (ulong)uVar1 * 4 ) = 0x2f;
            iVar5 = *(int*)( in_RSI + 0x18 );
            goto LAB_00102331;
         }

      }
 else {
         if (iVar5 != 0x2a) {
            if (iVar5 != 10) goto LAB_001023ea;
            uVar1 = *(uint*)in_RSI;
            *(int*)( in_RSI + 0x1c ) = *(int*)( in_RSI + 0x1c ) + 1;
            if (uVar1 == *(uint*)( in_RSI + 4 )) {
               uVar1 = *(uint*)( in_RSI + 4 ) * 2;
               uVar9 = (ulong)uVar1;
               if (uVar1 == 0) {
                  uVar9 = 1;
               }

               *(int*)( in_RSI + 4 ) = (int)uVar9;
               lVar6 = Memory::realloc_static(*(void**)( in_RSI + 8 ), uVar9 * 4, false);
               *(long*)( in_RSI + 8 ) = lVar6;
               if (lVar6 == 0) goto LAB_001026bd;
               uVar1 = *(uint*)in_RSI;
               lVar11 = *(long*)( in_RSI + 0x10 );
               *(uint*)in_RSI = uVar1 + 1;
               *(undefined4*)( lVar6 + (ulong)uVar1 * 4 ) = 10;
               iVar5 = *(int*)( in_RSI + 0x18 );
               goto LAB_00102331;
            }

            *(uint*)in_RSI = uVar1 + 1;
            *(undefined4*)( (long)*(void**)( in_RSI + 8 ) + (ulong)uVar1 * 4 ) = 10;
            iVar5 = *(int*)( in_RSI + 0x18 );
            goto LAB_00102341;
         }

         if (*(int*)( in_RSI + 0x28 ) == 0) {
            iVar5 = peek((CommentRemover*)in_RSI);
            if (iVar5 == 0x2f) {
               iVar5 = *(int*)( in_RSI + 0x18 );
               lVar11 = *(long*)( in_RSI + 0x10 );
               *(ulong*)( in_RSI + 0x20 ) = CONCAT44(*(int*)( in_RSI + 0x24 ) + -1, *(undefined4*)( in_RSI + 0x1c ));
               goto LAB_00102331;
            }

            uVar1 = *(uint*)in_RSI;
            pvVar7 = *(void**)( in_RSI + 8 );
            if (uVar1 == *(uint*)( in_RSI + 4 )) {
               uVar9 = ( ulong )(uVar1 * 2);
               if (uVar1 * 2 == 0) {
                  uVar9 = 1;
               }

               *(int*)( in_RSI + 4 ) = (int)uVar9;
               pvVar7 = (void*)Memory::realloc_static(pvVar7, uVar9 * 4, false);
               *(void**)( in_RSI + 8 ) = pvVar7;
               if (pvVar7 == (void*)0x0) goto LAB_001026bd;
               uVar1 = *(uint*)in_RSI;
            }

            *(uint*)in_RSI = uVar1 + 1;
            *(undefined4*)( (long)pvVar7 + (ulong)uVar1 * 4 ) = 0x2a;
            goto LAB_00102527;
         }

      }

   }

   LAB_001023ea:uVar1 = *(uint*)in_RSI;
   if (uVar1 == *(uint*)( in_RSI + 4 )) {
      uVar9 = ( ulong )(uVar1 * 2);
      if (uVar1 * 2 == 0) {
         uVar9 = 1;
      }

      *(int*)( in_RSI + 4 ) = (int)uVar9;
      lVar6 = Memory::realloc_static(*(void**)( in_RSI + 8 ), uVar9 * 4, false);
      *(long*)( in_RSI + 8 ) = lVar6;
      if (lVar6 == 0) goto LAB_001026bd;
      uVar1 = *(uint*)in_RSI;
      lVar11 = *(long*)( in_RSI + 0x10 );
      *(uint*)in_RSI = uVar1 + 1;
      *(int*)( lVar6 + (ulong)uVar1 * 4 ) = iVar5;
      iVar5 = *(int*)( in_RSI + 0x18 );
      goto LAB_00102331;
   }

   *(uint*)in_RSI = uVar1 + 1;
   *(int*)( (long)*(void**)( in_RSI + 8 ) + (ulong)uVar1 * 4 ) = iVar5;
   iVar5 = *(int*)( in_RSI + 0x18 );
   goto LAB_00102341;
   LAB_00102580:uVar9 = ( ulong )(uVar1 * 2);
   if (uVar1 * 2 == 0) {
      uVar9 = 1;
   }

   *(int*)( in_RSI + 4 ) = (int)uVar9;
   lVar6 = Memory::realloc_static(*(void**)( in_RSI + 8 ), uVar9 * 4, false);
   *(long*)( in_RSI + 8 ) = lVar6;
   if (lVar6 == 0) {
      LAB_001026bd:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   uVar1 = *(uint*)in_RSI;
   lVar11 = *(long*)( in_RSI + 0x10 );
   *(uint*)in_RSI = uVar1 + 1;
   *(undefined4*)( lVar6 + (ulong)uVar1 * 4 ) = 0xffff;
   iVar5 = *(int*)( in_RSI + 0x18 );
   goto LAB_00102331;
   while (true) {
      iVar5 = peek((CommentRemover*)in_RSI);
      if (iVar5 == 0x2f) break;
      LAB_00102710:cVar4 = advance((CommentRemover*)in_RSI, L'*');
      if (cVar4 == '\0') goto LAB_00102527;
   }
;
   *(int*)( in_RSI + 0x24 ) = *(int*)( in_RSI + 0x24 ) + -1;
   lVar11 = *(long*)( in_RSI + 0x10 );
   iVar5 = *(int*)( in_RSI + 0x18 ) + 1;
   *(int*)( in_RSI + 0x18 ) = iVar5;
   goto LAB_00102331;
   LAB_00102527:iVar5 = *(int*)( in_RSI + 0x18 );
   lVar11 = *(long*)( in_RSI + 0x10 );
   goto LAB_00102331;
}
/* ShaderPreprocessor::tokens_to_string(LocalVector<ShaderPreprocessor::Token, unsigned int, false,
   false> const&) */ShaderPreprocessor * __thiscall
ShaderPreprocessor::tokens_to_string(ShaderPreprocessor *this,LocalVector *param_1){
   undefined4 *puVar1;
   undefined4 uVar2;
   code *pcVar3;
   void *pvVar4;
   uint uVar5;
   int iVar6;
   ulong uVar7;
   undefined4 *puVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   uint local_58[2];
   void *local_50;
   long local_40;
   puVar8 = *(undefined4**)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58[0] = 0;
   local_58[1] = 0;
   local_50 = (void*)0x0;
   puVar1 = puVar8 + ( ulong ) * (uint*)param_1 * 2;
   if (puVar1 == puVar8) {
      vector_to_string(this, (LocalVector*)local_58, 0, -1);
   }
 else {
      pvVar4 = (void*)0x0;
      uVar7 = 0;
      uVar5 = 0;
      while (true) {
         uVar2 = *puVar8;
         iVar6 = (int)uVar7;
         if (iVar6 == uVar5) {
            uVar9 = ( ulong )(uint)(iVar6 * 2);
            if (iVar6 * 2 == 0) {
               uVar9 = 1;
            }

            local_58[1] = (int)uVar9;
            pvVar4 = (void*)Memory::realloc_static(pvVar4, uVar9 << 2, false);
            local_50 = pvVar4;
            if (pvVar4 == (void*)0x0) {
               _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

         }

         puVar8 = puVar8 + 2;
         *(undefined4*)( (long)pvVar4 + uVar7 * 4 ) = uVar2;
         local_58[0] = iVar6 + 1U;
         if (puVar1 == puVar8) break;
         uVar7 = ( ulong )(iVar6 + 1U);
         uVar5 = local_58[1];
      }
;
      vector_to_string(this, (LocalVector*)local_58, 0, -1);
      if (pvVar4 != (void*)0x0) {
         Memory::free_static(pvVar4, false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::expand_condition(String const&, int, String&) */undefined4 ShaderPreprocessor::expand_condition(ShaderPreprocessor *this, String *param_1, int param_2, String *param_3) {
   int iVar1;
   long *plVar2;
   code *pcVar3;
   wchar32 wVar4;
   byte bVar5;
   byte bVar6;
   char cVar7;
   wchar32 wVar8;
   undefined4 uVar9;
   int *piVar10;
   ulong uVar11;
   long lVar12;
   int *piVar13;
   wchar32 wVar14;
   wchar32 wVar15;
   wchar32 wVar16;
   ulong uVar17;
   char *pcVar18;
   int iVar19;
   long lVar20;
   int iVar21;
   byte bVar22;
   void *pvVar23;
   long in_FS_OFFSET;
   bool bVar24;
   bool bVar25;
   CowData *local_d0;
   wchar32 local_b0;
   wchar32 local_ac;
   byte local_a7;
   byte local_a6;
   int local_90;
   wchar32 local_8c;
   wchar32 *local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   void *local_60;
   wchar32 *local_58;
   undefined8 local_50;
   wchar32 local_48[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar10 = *(int**)param_1;
   if (piVar10 == (int*)0x0) {
      local_88 = (wchar32*)0x0;
      LAB_00102a1d:local_d0 = (CowData*)&local_88;
      local_8c = L'\0';
      local_b0 = L'\0';
      LAB_00102a65:local_58 = (wchar32*)0x0;
      String::parse_latin1((String*)&local_58, "defined");
      bVar5 = find_match(this, (String*)local_d0, (String*)&local_58, &local_90, &local_8c);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (bVar5 == 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_3, local_d0);
         uVar9 = 0;
      }
 else {
         local_68 = 0;
         local_60 = (void*)0x0;
         if (local_88 == (wchar32*)0x0) {
            wVar8 = L'\0';
         }
 else {
            wVar8 = local_88[-2];
         }

         if (local_8c + L'\xffffffff' < wVar8) {
            lVar12 = (long)( local_8c + L'\xffffffff' );
            local_a6 = 0;
            bVar22 = 0;
            local_a7 = 0;
            wVar15 = local_8c + L'\xffffffff';
            local_ac = L'\xffffffff';
            wVar14 = local_8c;
            if (local_88 == (wchar32*)0x0) goto LAB_00102c06;
            LAB_00102b25:lVar20 = *(long*)( local_88 + -2 );
            wVar16 = wVar15;
            wVar15 = wVar14;
            do {
               if (lVar12 == lVar20) {
                  LAB_00102d38:if (local_a6 == 0) {
                     LAB_00102d53:if (bVar22 == 0) break;
                  }

                  if (local_a7 != 0) {
                     local_58 = (wchar32*)0x0;
                     String::parse_latin1((String*)&local_58, ")");
                     _set_expected_error(this, (String*)&local_58, param_2);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     pvVar23 = local_60;
                     goto LAB_00103029;
                  }

                  LAB_00102d69:if (local_ac != L'\xffffffff') {
                     local_b0 = local_ac;
                  }

                  plVar2 = *(long**)( this + 0x10 );
                  vector_to_string((ShaderPreprocessor*)&local_58, (LocalVector*)&local_68, 0, -1);
                  if (( *plVar2 == 0 ) || ( lVar20 = *(long*)( *plVar2 + 0x10 ) ),plVar2[1] == lVar20) goto LAB_00102f70;
                  goto LAB_00102dc6;
               }

               if (( lVar20 <= lVar12 ) || ( lVar12 < 0 )) goto LAB_001029cb;
               wVar14 = local_88[lVar12];
               if (wVar14 == L'\0') goto LAB_00102d38;
               local_48[1] = 0;
               local_70 = 0;
               local_50 = 1;
               local_58 = local_48;
               local_48[0] = wVar14;
               String::parse_utf32((StrRange*)&local_70);
               bVar24 = wVar14 == L' ';
               bVar25 = wVar14 == L'\t';
               wVar4 = local_b0;
               if (bVar22 != 0) {
                  if (wVar14 == L')') {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     goto LAB_00102be1;
                  }

                  if (( wVar14 == L'|' ) || ( wVar14 == L'&' )) {
                     if (local_a7 != 0) goto LAB_0010300b;
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     goto LAB_00102d69;
                  }

                  bVar22 = bVar24 || bVar25;
                  if (bVar24 || bVar25) goto LAB_00102bd9;
                  LAB_0010300b:_set_unexpected_token_error(this, (String*)&local_70, param_2);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  pvVar23 = local_60;
                  goto LAB_00103029;
               }

               if (bVar24 || bVar25) {
                  bVar6 = ( local_a7 ^ 1 ) & local_a6;
                  if (bVar6 != 0) {
                     local_a7 = 0;
                     bVar22 = bVar6;
                     wVar4 = wVar16;
                     local_a6 = bVar6;
                  }

               }
 else if (wVar14 == L'(') {
                  bVar24 = local_a7 != 0;
                  local_a7 = bVar5;
                  if (bVar24) goto LAB_0010300b;
               }
 else if (wVar14 == L')') {
                  bVar22 = bVar5;
                  wVar4 = wVar16;
                  if (local_a7 != 0) {
                     if (local_a6 == 0) goto LAB_0010300b;
                     local_a7 = 0;
                     bVar22 = local_a6;
                     wVar4 = local_b0;
                     local_ac = wVar15;
                  }

               }
 else {
                  local_a6 = is_char_word(wVar14);
                  if (local_a6 == 0) goto LAB_0010300b;
                  iVar19 = (int)local_68;
                  uVar17 = local_68 & 0xffffffff;
                  if ((int)local_68 == local_68._4_4_) {
                     uVar11 = ( ulong )(uint)(local_68._4_4_ * 2);
                     if (local_68._4_4_ * 2 == 0) {
                        uVar11 = 1;
                     }

                     local_68 = CONCAT44((int)uVar11, (int)local_68);
                     local_60 = (void*)Memory::realloc_static(local_60, uVar11 * 4, false);
                     if (local_60 == (void*)0x0) {
                        _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, 0);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar3 = (code*)invalidInstructionException();
                        ( *pcVar3 )();
                     }

                  }

                  *(wchar32*)( (long)local_60 + uVar17 * 4 ) = wVar14;
                  local_68 = CONCAT44(local_68._4_4_, iVar19 + 1);
                  bVar22 = 0;
               }

               LAB_00102bd9:local_b0 = wVar4;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               LAB_00102be1:wVar14 = wVar15 + L'\x01';
               lVar12 = lVar12 + 1;
               if (wVar8 <= wVar15) goto LAB_00102d53;
               if (local_88 != (wchar32*)0x0) goto LAB_00102b25;
               LAB_00102c06:lVar20 = 0;
               wVar16 = wVar15;
               wVar15 = wVar14;
            }
 while ( true );
         }

         pvVar23 = local_60;
         local_70 = 0;
         String::parse_latin1((String*)&local_70, "");
         local_78 = 0;
         String::parse_latin1((String*)&local_78, "Invalid macro name.");
         RTR((String*)&local_58, (String*)&local_78);
         set_error(this, (String*)&local_58, param_2);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         LAB_00103029:if (( pvVar23 != (void*)0x0 ) && ( LocalVector<char32_t,unsigned_int,false,false>::resize((LocalVector<char32_t,unsigned_int,false,false>*)&local_68, 0),local_60 != (void*)0x0 )) {
            Memory::free_static(local_60, false);
         }

         uVar9 = 1;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
      goto LAB_00102c4e;
   }

   lVar20 = *(long*)( piVar10 + -2 );
   iVar21 = 0;
   iVar19 = 0;
   for (lVar12 = 0; (int)lVar12 < (int)lVar20; lVar12 = lVar12 + 1) {
      if (lVar12 == lVar20) {
         piVar13 = (int*)&String::_null;
      }
 else {
         piVar13 = piVar10;
         if (lVar20 <= lVar12) {
            LAB_001029cb:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar12, lVar20, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

      }

      iVar1 = *piVar13;
      if (iVar1 == 0x29) {
         iVar21 = iVar21 + 1;
      }
 else if (iVar1 == 0xffff) {
         *(undefined4*)( *(long*)( this + 0x10 ) + 0xa4 ) = 4;
      }
 else {
         iVar19 = iVar19 + ( uint )(iVar1 == 0x28);
      }

      piVar10 = piVar10 + 1;
   }

   if (iVar21 < iVar19) {
      pcVar18 = ")";
   }
 else {
      if (iVar21 <= iVar19) {
         local_88 = (wchar32*)0x0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)param_1);
         goto LAB_00102a1d;
      }

      pcVar18 = "(";
   }

   local_58 = (wchar32*)0x0;
   String::parse_latin1((String*)&local_58, pcVar18);
   _set_expected_error(this, (String*)&local_58, param_2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   uVar9 = 1;
   LAB_00102c4e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
   LAB_00102dc6:do {
      cVar7 = String::operator <((String*)&local_58, (String*)( lVar20 + 0x30 ));
      if (cVar7 == '\0') {
         cVar7 = String::operator <((String*)( lVar20 + 0x30 ), (String*)&local_58);
         if (cVar7 == '\0') {
            if (lVar20 != 0) {
               pcVar18 = "true";
               goto LAB_00102e40;
            }

            break;
         }

         lVar20 = *(long*)( lVar20 + 8 );
      }
 else {
         lVar20 = *(long*)( lVar20 + 0x10 );
      }

   }
 while ( lVar20 != plVar2[1] );
   LAB_00102f70:pcVar18 = "false";
   LAB_00102e40:local_80 = 0;
   String::parse_latin1((String*)&local_80, pcVar18);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_78 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, local_d0);
   String::substr((int)(CowData<char32_t>*)&local_70, (int)local_d0);
   String::operator +((String*)&local_58, (String*)&local_70);
   if (local_88 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
      local_88 = local_58;
      local_58 = (wchar32*)0x0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (local_88 == (wchar32*)0x0) {
      local_8c = L'\0';
   }
 else {
      local_8c = (int)*(undefined8*)( local_88 + -2 ) + -1 + ( uint )((int)*(undefined8*)( local_88 + -2 ) == 0);
   }

   if (L'\0' < local_b0) {
      String::substr((int)(String*)&local_58, (int)(CowData<char32_t>*)&local_78);
      String::operator +=((String*)local_d0, (String*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( local_60 != (void*)0x0 ) && ( LocalVector<char32_t,unsigned_int,false,false>::resize((LocalVector<char32_t,unsigned_int,false,false>*)&local_68, 0),local_60 != (void*)0x0 )) {
      Memory::free_static(local_60, false);
   }

   goto LAB_00102a65;
}
/* ShaderPreprocessor::Tokenizer::advance(char32_t) */undefined8 *ShaderPreprocessor::Tokenizer::advance(wchar32 param_1) {
   int *piVar1;
   long lVar2;
   code *pcVar3;
   uint uVar4;
   int iVar5;
   long lVar6;
   int in_EDX;
   int iVar7;
   ulong uVar8;
   Tokenizer *in_RSI;
   ulong uVar9;
   undefined4 in_register_0000003c;
   undefined8 *puVar10;
   long lVar11;
   int iVar12;
   long in_FS_OFFSET;
   undefined4 local_60;
   int local_5c;
   undefined8 local_58;
   void *local_50;
   long local_40;
   puVar10 = (undefined8*)CONCAT44(in_register_0000003c, param_1);
   iVar5 = *(int*)( in_RSI + 0xc );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_50 = (void*)0x0;
   if (iVar5 < *(int*)( in_RSI + 0x10 )) {
      do {
         lVar6 = (long)iVar5;
         *(int*)( in_RSI + 0xc ) = iVar5 + 1;
         lVar2 = *(long*)in_RSI;
         if (lVar2 == 0) {
            lVar11 = 0;
         }
 else {
            lVar11 = *(long*)( lVar2 + -8 );
         }

         if (lVar6 == lVar11) {
            iVar5 = *(int*)( in_RSI + 8 );
            iVar12 = 0;
            LAB_001032a4:uVar8 = local_58 & 0xffffffff;
            if ((int)local_58 == local_58._4_4_) {
               LAB_001033c8:uVar4 = (int)uVar8 * 2;
               uVar9 = (ulong)uVar4;
               if (uVar4 == 0) {
                  uVar9 = 1;
               }

               local_58 = CONCAT44((int)uVar9, (int)local_58);
               local_50 = (void*)Memory::realloc_static(local_50, uVar9 << 3, false);
               if (local_50 == (void*)0x0) {
                  _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            LAB_001032b7:piVar1 = (int*)( (long)local_50 + uVar8 * 8 );
            iVar7 = (int)uVar8 + 1;
            local_58 = CONCAT44(local_58._4_4_, iVar7);
            *piVar1 = iVar12;
            piVar1[1] = iVar5;
            if (( in_EDX == iVar12 ) || ( iVar12 == 0 )) {
               puVar10[1] = local_50;
               *puVar10 = CONCAT44(local_58._4_4_, iVar7);
               goto LAB_0010331e;
            }

         }
 else {
            if (( lVar11 <= lVar6 ) || ( lVar6 < 0 )) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar11, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            iVar12 = *(int*)( lVar2 + lVar6 * 4 );
            if (iVar12 != 0x5c) {
               iVar5 = *(int*)( in_RSI + 8 );
               if (iVar12 != 10) goto LAB_001032a4;
               local_60 = 10;
               local_5c = iVar5;
               add_generated(in_RSI, (Token*)&local_60);
               uVar8 = local_58 & 0xffffffff;
               iVar5 = *(int*)( in_RSI + 8 ) + 1;
               *(int*)( in_RSI + 8 ) = iVar5;
               if ((int)local_58 == local_58._4_4_) goto LAB_001033c8;
               goto LAB_001032b7;
            }

            iVar5 = consume_line_continuations(in_RSI, -1);
            if (iVar5 < 1) {
               iVar5 = *(int*)( in_RSI + 8 );
               goto LAB_001032a4;
            }

         }

         iVar5 = *(int*)( in_RSI + 0xc );
      }
 while ( iVar5 < *(int*)( in_RSI + 0x10 ) );
      *puVar10 = 0;
      puVar10[1] = 0;
      if (local_50 != (void*)0x0) {
         LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>::resize((LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_58, 0);
         if (local_50 != (void*)0x0) {
            Memory::free_static(local_50, false);
         }

      }

   }
 else {
      *puVar10 = 0;
      puVar10[1] = 0;
   }

   LAB_0010331e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::Tokenizer::consume_empty_line() */ulong ShaderPreprocessor::Tokenizer::consume_empty_line(void) {
   undefined8 unaff_R12;
   ulong uVar1;
   long in_FS_OFFSET;
   ShaderPreprocessor aSStack_48[8];
   long local_40;
   LocalVector local_38[8];
   void *local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   advance((wchar32)local_38);
   tokens_to_string(aSStack_48, local_38);
   String::strip_edges(SUB81((CowData<char32_t>*)&local_40, 0), SUB81(aSStack_48, 0));
   if (local_40 == 0) {
      uVar1 = 1;
   }
 else {
      uVar1 = CONCAT71(( int7 )((ulong)unaff_R12 >> 8), *(int*)( local_40 + -8 ) == 0);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   CowData<char32_t>::_unref((CowData<char32_t>*)aSStack_48);
   if (local_30 != (void*)0x0) {
      Memory::free_static(local_30, false);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1 & 0xffffffff;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::process_pragma(ShaderPreprocessor::Tokenizer*) */void ShaderPreprocessor::process_pragma(ShaderPreprocessor *this, Tokenizer *param_1) {
   int iVar1;
   char cVar2;
   long in_FS_OFFSET;
   char local_79;
   long local_78;
   undefined8 local_70;
   undefined8 local_68;
   String local_60[8];
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)( param_1 + 8 );
   Tokenizer::get_identifier((bool*)&local_78, SUB81(param_1, 0));
   if (local_79 != '\0') {
      *(undefined4*)( *(long*)( this + 0x10 ) + 0xa4 ) = 3;
   }

   if (( local_78 == 0 ) || ( *(uint*)( local_78 + -8 ) < 2 )) {
      local_68 = 0;
      local_50 = 0;
      local_58 = "";
      String::parse_latin1((StrRange*)&local_68);
      local_58 = "Invalid \'%s\' directive.";
      local_70 = 0;
      local_50 = 0x17;
      String::parse_latin1((StrRange*)&local_70);
      RTR(local_60, (String*)&local_70);
      vformat<char_const*>((String*)&local_58, (char*)local_60);
      set_error(this, (String*)&local_58, iVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }
 else {
      cVar2 = String::operator ==((String*)&local_78, "disable_preprocessor");
      if (cVar2 != '\0') {
         *(undefined1*)( *(long*)( this + 0x10 ) + 0xa0 ) = 1;
         cVar2 = Tokenizer::consume_empty_line();
         if (cVar2 != '\0') goto LAB_0010368f;
      }

      local_68 = 0;
      String::parse_latin1((String*)&local_68, "");
      local_70 = 0;
      String::parse_latin1((String*)&local_70, "Invalid \'%s\' directive.");
      RTR(local_60, (String*)&local_70);
      vformat<char_const*>((String*)&local_58, (char*)local_60);
      set_error(this, (String*)&local_58, iVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }

   LAB_0010368f:CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::process_endif(ShaderPreprocessor::Tokenizer*) */void ShaderPreprocessor::process_endif(ShaderPreprocessor *this, Tokenizer *param_1) {
   int *piVar1;
   long *plVar2;
   int iVar3;
   long lVar4;
   long *plVar5;
   void *pvVar6;
   long lVar7;
   char cVar8;
   long lVar9;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   String local_60[8];
   char *local_58;
   undefined8 local_50;
   long local_40;
   lVar4 = *(long*)( this + 0x10 );
   iVar3 = *(int*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar1 = (int*)( lVar4 + 0x28 );
   *piVar1 = *piVar1 + -1;
   if (*piVar1 < 0) {
      local_68 = 0;
      local_50 = 0;
      local_58 = "";
      String::parse_latin1((StrRange*)&local_68);
      local_70 = 0;
      String::parse_latin1((String*)&local_70, "Unmatched \'%s\' directive.");
      RTR(local_60, (String*)&local_70);
      vformat<char_const*>((String*)&local_58, (char*)local_60);
      set_error(this, (String*)&local_58, iVar3);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }
 else {
      lVar9 = *(long*)( lVar4 + 0x98 );
      if (lVar9 != 0) {
         *(int*)( lVar9 + 0xc ) = iVar3 + -1;
         *(undefined8*)( lVar4 + 0x98 ) = *(undefined8*)( lVar9 + 0x18 );
      }

      cVar8 = Tokenizer::consume_empty_line();
      if (cVar8 == '\0') {
         local_68 = 0;
         local_50 = 0;
         local_58 = "";
         String::parse_latin1((StrRange*)&local_68);
         local_58 = "Invalid \'%s\' directive.";
         local_70 = 0;
         local_50 = 0x17;
         String::parse_latin1((StrRange*)&local_70);
         RTR(local_60, (String*)&local_70);
         vformat<char_const*>((String*)&local_58, (char*)local_60);
         set_error(this, (String*)&local_58, iVar3);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      }

      lVar4 = *(long*)( this + 0x10 );
      plVar5 = *(long**)( lVar4 + 0x18 );
      *(undefined8*)( lVar4 + 0x20 ) = *(undefined8*)( *(long*)( lVar4 + 0x20 ) + 0x10 );
      if (( plVar5 != (long*)0x0 ) && ( pvVar6 = (void*)plVar5[1] ),pvVar6 != (void*)0x0) {
         if (plVar5 == *(long**)( (long)pvVar6 + 0x30 )) {
            lVar9 = *(long*)( (long)pvVar6 + 0x20 );
            if (pvVar6 == (void*)*plVar5) {
               *plVar5 = lVar9;
            }

            lVar7 = *(long*)( (long)pvVar6 + 0x28 );
            plVar5[1] = lVar7;
            if (lVar7 != 0) {
               *(long*)( lVar7 + 0x20 ) = lVar9;
               lVar9 = *(long*)( (long)pvVar6 + 0x20 );
            }

            if (lVar9 != 0) {
               *(long*)( lVar9 + 0x28 ) = lVar7;
            }

            if (*(long*)( (long)pvVar6 + 8 ) != 0) {
               LOCK();
               plVar2 = (long*)( *(long*)( (long)pvVar6 + 8 ) + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  lVar9 = *(long*)( (long)pvVar6 + 8 );
                  *(undefined8*)( (long)pvVar6 + 8 ) = 0;
                  Memory::free_static((void*)( lVar9 + -0x10 ), false);
               }

            }

            Memory::free_static(pvVar6, false);
            *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         if (*(int*)( (long)*(void**)( lVar4 + 0x18 ) + 0x10 ) == 0) {
            Memory::free_static(*(void**)( lVar4 + 0x18 ), false);
            *(undefined8*)( lVar4 + 0x18 ) = 0;
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::next_directive(ShaderPreprocessor::Tokenizer*, Vector<String> const&) */Tokenizer *ShaderPreprocessor::next_directive(Tokenizer *param_1, Vector *param_2) {
   int iVar1;
   undefined8 uVar2;
   char cVar3;
   long lVar4;
   long in_RCX;
   Tokenizer *in_RDX;
   int iVar5;
   long lVar6;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   void *local_50;
   long local_40;
   iVar5 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)( in_RDX + 8 );
   do {
      Tokenizer::advance((wchar32)(LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_58);
      if (( local_50 != (void*)0x0 ) && ( LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>::resize((LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_58, 0),local_50 != (void*)0x0 )) {
         Memory::free_static(local_50, false);
      }

      uVar2 = *(undefined8*)( in_RDX + 8 );
      Tokenizer::get_identifier((bool*)&local_58, SUB81(in_RDX, 0));
      *(undefined8*)( in_RDX + 8 ) = uVar2;
      if (( local_58 == (undefined*)0x0 ) || ( *(uint*)( local_58 + -8 ) < 2 )) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         local_60 = 0;
         local_58 = "";
         local_50 = (void*)0x0;
         String::parse_latin1((StrRange*)&local_60);
         local_58 = "Can\'t find matching branch directive.";
         local_68 = 0;
         local_50 = (void*)0x25;
         String::parse_latin1((StrRange*)&local_68);
         RTR((String*)&local_58, (String*)&local_68);
         set_error((ShaderPreprocessor*)param_2, (String*)&local_58, iVar1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         local_58 = "";
         *(undefined8*)param_1 = 0;
         local_50 = (void*)0x0;
         String::parse_latin1((StrRange*)param_1);
         LAB_00103c0c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return param_1;
      }

      if (( iVar5 == 0 ) && ( lVar4 = lVar4 != 0 )) {
         lVar6 = 0;
         do {
            if (*(long*)( lVar4 + -8 ) <= lVar6) break;
            cVar3 = String::operator ==((String*)( lVar4 + lVar6 * 8 ), (String*)&local_58);
            if (cVar3 != '\0') {
               Tokenizer::backtrack(in_RDX, L'#');
               *(char**)param_1 = local_58;
               goto LAB_00103c0c;
            }

            lVar4 = *(long*)( in_RCX + 8 );
            lVar6 = lVar6 + 1;
         }
 while ( lVar4 != 0 );
      }

      cVar3 = String::operator ==((String*)&local_58, "ifdef");
      if (( ( cVar3 == '\0' ) && ( cVar3 = String::operator ==((String*)&local_58, "ifndef") ),cVar3 == '\0' )) {
         cVar3 = String::operator ==((String*)&local_58, "endif");
         iVar5 = iVar5 + -1 + ( uint )(cVar3 == '\0');
      }
 else {
         iVar5 = iVar5 + 1;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   }
 while ( true );
}
/* ShaderPreprocessor::process_error(ShaderPreprocessor::Tokenizer*) */void ShaderPreprocessor::process_error(ShaderPreprocessor *this, Tokenizer *param_1) {
   int iVar1;
   char cVar2;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   void *local_50;
   long local_40;
   iVar1 = *(int*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Tokenizer::advance((wchar32)(LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_58);
   tokens_to_string((ShaderPreprocessor*)&local_60, (LocalVector*)&local_58);
   String::strip_edges(SUB81((CowData<char32_t>*)&local_78, 0), SUB81((ShaderPreprocessor*)&local_60, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (local_50 != (void*)0x0) {
      LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>::resize((LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_58, 0);
      if (local_50 != (void*)0x0) {
         Memory::free_static(local_50, false);
      }

   }

   if (( local_78 == 0 ) || ( *(uint*)( local_78 + -8 ) < 2 )) {
      local_60 = 0;
      local_58 = " ";
      local_50 = (void*)0x1;
      String::parse_latin1((StrRange*)&local_60);
      set_error(this, (String*)&local_60, iVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }
 else {
      set_error(this, (String*)&local_78, iVar1);
   }

   cVar2 = Tokenizer::consume_empty_line();
   if (cVar2 == '\0') {
      local_68 = 0;
      local_58 = "";
      local_50 = (void*)0x0;
      String::parse_latin1((StrRange*)&local_68);
      local_58 = "Invalid \'%s\' directive.";
      local_70 = 0;
      local_50 = (void*)0x17;
      String::parse_latin1((StrRange*)&local_70);
      RTR((String*)&local_60, (String*)&local_70);
      vformat<char_const*>((String*)&local_58, (char*)&local_60);
      set_error(this, (String*)&local_58, iVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
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
/* ShaderPreprocessor::clear_state() */void ShaderPreprocessor::clear_state(ShaderPreprocessor *this) {
   long *plVar1;
   long lVar2;
   void *pvVar3;
   long lVar4;
   RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator> *this_00;
   this_00 = *(RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>**)( this + 0x10 );
   if (this_00 != (RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>*)0x0) {
      if (*(long*)this_00 != 0) {
         lVar2 = *(long*)( *(long*)this_00 + 0x10 );
         if (*(long*)( this_00 + 8 ) != lVar2) {
            do {
               lVar4 = lVar2;
               lVar2 = *(long*)( lVar4 + 0x10 );
            }
 while ( *(long*)( this_00 + 8 ) != *(long*)( lVar4 + 0x10 ) );
            do {
               pvVar3 = *(void**)( lVar4 + 0x38 );
               if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar2 = *(long*)( (long)pvVar3 + 0x10 );
                     *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

               }

               CowData<String>::_unref((CowData<String>*)( (long)pvVar3 + 8 ));
               Memory::free_static(pvVar3, false);
               lVar4 = *(long*)( lVar4 + 0x20 );
            }
 while ( lVar4 != 0 );
            this_00 = *(RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>**)( this + 0x10 );
         }

      }

      RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>::clear(this_00);
   }

   *(undefined8*)( this + 0x10 ) = 0;
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
/* ShaderPreprocessor::expand_macros_once(String const&, int, RBMap<String,
   ShaderPreprocessor::Define*, Comparator<String>, DefaultAllocator>::Element const*, String&) */char ShaderPreprocessor::expand_macros_once(ShaderPreprocessor *this, String *param_1, int param_2, Element *param_3, String *param_4) {
   int iVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   char cVar5;
   long lVar6;
   long lVar7;
   int *piVar8;
   long lVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   int iVar14;
   char *pcVar15;
   long in_FS_OFFSET;
   long *local_f0;
   char local_d8;
   char local_bd;
   int local_b0;
   int local_ac;
   long local_a8;
   long local_a0;
   String local_98[8];
   int local_90[2];
   int local_88[2];
   undefined8 local_80;
   long local_78;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   long local_58;
   long *local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = 0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)param_1);
   }

   local_b0 = 0;
   lVar2 = *(long*)( param_3 + 0x38 );
   local_bd = find_match(this, (String*)&local_a8, (String*)( param_3 + 0x30 ), &local_ac, &local_b0);
   if (local_bd == '\0') goto LAB_00104504;
   local_a0 = 0;
   if (*(long*)( lVar2 + 0x10 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)( lVar2 + 0x10 ));
   }

   iVar13 = (int)(CowData<char32_t>*)&local_a8;
   if (( *(long*)( lVar2 + 8 ) == 0 ) || ( *(long*)( *(long*)( lVar2 + 8 ) + -8 ) < 1 )) {
      concatenate_macro_body(this, (String*)&local_a0);
      String::substr((int)(CowData<char32_t>*)&local_60, iVar13);
      local_70 = 0;
      String::parse_latin1((String*)&local_70, " ");
      local_88[0] = 0;
      local_88[1] = 0;
      String::parse_latin1((String*)local_88, " ");
      String::substr((int)(String*)local_90, iVar13);
      String::operator +((String*)&local_80, (String*)local_90);
      String::operator +((String*)&local_78, (String*)&local_80);
      String::operator +((String*)&local_68, (String*)&local_78);
      String::operator +((String*)&local_58, (String*)&local_68);
      if (local_a8 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         local_a8 = local_58;
         local_58 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      LAB_001044ed:CowData<char32_t>::_ref((CowData<char32_t>*)param_4, (CowData*)&local_a8);
   }
 else {
      lVar7 = *(long*)param_1;
      local_50[0] = (long*)0x0;
      iVar11 = local_b0 + -1;
      if (lVar7 == 0) {
         if (iVar11 < 0) goto LAB_001045a7;
         lVar7 = *(long*)( lVar2 + 8 );
         LAB_00104780:if (*(long*)( lVar7 + -8 ) != 0) goto LAB_00104b90;
         LAB_0010478b:concatenate_macro_body(this, (String*)&local_a0);
         String::substr((int)(CowData<char32_t>*)&local_68, iVar13);
         local_78 = 0;
         String::parse_latin1((String*)&local_78, " ");
         local_90[0] = 0;
         local_90[1] = 0;
         String::parse_latin1((String*)local_90, " ");
         String::substr((int)local_98, iVar13);
         String::operator +((String*)local_88, local_98);
         String::operator +((String*)&local_80, (String*)local_88);
         String::operator +((String*)&local_70, (String*)&local_80);
         String::operator +((String*)&local_60, (String*)&local_70);
         if (local_a8 != local_60) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
            local_a8 = local_60;
            local_60 = 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<String>::_unref((CowData<String>*)local_50);
         goto LAB_001044ed;
      }

      lVar6 = (long)iVar11;
      iVar12 = 0;
      iVar10 = -1;
      iVar14 = local_b0;
      do {
         iVar11 = iVar14;
         lVar9 = *(long*)( lVar7 + -8 );
         iVar14 = iVar11 + -1;
         if ((int)lVar9 == 0) {
            if (-1 < iVar14) goto LAB_00104933;
            lVar6 = (long)iVar14;
            goto LAB_00104316;
         }

         if ((int)lVar9 + -1 <= iVar14) goto LAB_00104933;
         if (lVar9 == lVar6) {
            piVar8 = (int*)&String::_null;
         }
 else {
            if (( lVar9 <= lVar6 ) || ( lVar6 < 0 )) goto LAB_00104316;
            piVar8 = (int*)( lVar7 + lVar6 * 4 );
         }

         iVar1 = *piVar8;
         if (iVar1 == 0x28) {
            iVar12 = iVar12 + 1;
            if (iVar12 == 1) {
               iVar10 = iVar11;
            }

         }
 else if (iVar1 == 0x29) {
            iVar12 = iVar12 + -1;
            local_d8 = local_bd;
            if (iVar12 == 0) goto LAB_001045de;
         }
 else if (( iVar12 == 1 ) && ( iVar1 == 0x2c )) {
            local_d8 = '\0';
            iVar12 = 1;
            LAB_001045de:if (( iVar10 == -1 ) || ( iVar14 == -1 )) {
               local_68 = 0;
               String::parse_latin1((String*)&local_68, "");
               pcVar15 = "Invalid macro argument list.";
               goto LAB_00104bce;
            }

            String::substr((int)(CowData<char32_t>*)&local_60, (int)param_1);
            String::strip_edges(SUB81((CowData<char32_t>*)&local_78, 0), SUB81((CowData<char32_t>*)&local_60, 0));
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( local_78 == 0 ) || ( *(uint*)( local_78 + -8 ) < 2 )) {
               local_68 = 0;
               String::parse_latin1((String*)&local_68, "");
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "Invalid macro argument.");
               RTR((String*)&local_60, (String*)&local_70);
               set_error(this, (String*)&local_60, param_2);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               goto LAB_001046c4;
            }

            local_60 = 0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)&local_78);
            Vector<String>::push_back((Vector<String>*)&local_58, (CowData<char32_t>*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            if (local_d8 != '\0') goto LAB_00104933;
            lVar7 = *(long*)param_1;
            iVar10 = iVar11;
         }

         lVar6 = lVar6 + 1;
         iVar14 = iVar11 + 1;
      }
 while ( lVar7 != 0 );
      if (iVar11 < 0) {
         LAB_001045a7:lVar6 = (long)iVar11;
         lVar9 = 0;
         LAB_00104316:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar9, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      LAB_00104933:plVar4 = local_50[0];
      lVar7 = *(long*)( lVar2 + 8 );
      if (local_50[0] == (long*)0x0) {
         if (lVar7 != 0) goto LAB_00104780;
         goto LAB_0010478b;
      }

      lVar9 = local_50[0][-1];
      if (lVar7 == 0) {
         if (lVar9 == 0) goto LAB_0010495f;
      }
 else if (lVar9 == *(long*)( lVar7 + -8 )) {
         LAB_0010495f:local_f0 = local_50[0];
         for (lVar6 = 0; lVar6 < lVar9; lVar6 = lVar6 + 1) {
            lVar7 = *(long*)( lVar2 + 8 );
            if (lVar7 == 0) {
               lVar9 = 0;
               goto LAB_00104316;
            }

            lVar9 = *(long*)( lVar7 + -8 );
            if (lVar9 <= lVar6) goto LAB_00104316;
            iVar11 = 0;
            local_80 = 0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( lVar7 + lVar6 * 8 ));
            while (true) {
               local_90[0] = iVar11;
               cVar5 = find_match(this, (String*)&local_a0, (String*)&local_80, local_88, local_90);
               if (cVar5 == '\0') break;
               iVar11 = local_88[0];
               iVar14 = (int)(CowData<char32_t>*)&local_a0;
               String::substr((int)(CowData<char32_t>*)&local_68, iVar14);
               lVar9 = plVar4[-1];
               if (lVar9 <= lVar6) goto LAB_00104316;
               String::substr((int)(CowData<char32_t>*)&local_78, iVar14);
               String::operator +((String*)&local_70, (String*)&local_78);
               String::operator +((String*)&local_60, (String*)&local_70);
               if (local_a0 != local_60) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
                  local_a0 = local_60;
                  local_60 = 0;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               lVar9 = plVar4[-1];
               if (lVar9 <= lVar6) goto LAB_00104316;
               if (( *local_f0 != 0 ) && ( iVar14 = iVar14 != 0 )) {
                  iVar11 = iVar11 + -1 + iVar14;
               }

               iVar11 = iVar11 + 1;
            }
;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            local_f0 = local_f0 + 1;
            lVar9 = plVar4[-1];
         }

         goto LAB_0010478b;
      }

      LAB_00104b90:local_68 = 0;
      String::parse_latin1((String*)&local_68, "");
      pcVar15 = "Invalid macro argument count.";
      LAB_00104bce:local_70 = 0;
      String::parse_latin1((String*)&local_70, pcVar15);
      RTR((String*)&local_60, (String*)&local_70);
      set_error(this, (String*)&local_60, param_2);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      LAB_001046c4:CowData<String>::_unref((CowData<String>*)local_50);
      local_bd = '\0';
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   LAB_00104504:CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_bd;
}
/* ShaderPreprocessor::expand_macros(String const&, int, String&) */bool ShaderPreprocessor::expand_macros(ShaderPreprocessor *this, String *param_1, int param_2, String *param_3) {
   long lVar1;
   Element *pEVar2;
   Element *pEVar3;
   char cVar4;
   bool bVar5;
   char cVar6;
   int iVar7;
   Element *pEVar8;
   long in_FS_OFFSET;
   long local_70;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)param_1);
   }

   iVar7 = 0x33;
   do {
      lVar1 = **(long**)( this + 0x10 );
      if (lVar1 == 0) {
         LAB_00104df8:if (iVar7 == 1) {
            LAB_00104dfe:local_60 = 0;
            local_58 = "";
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_60);
            local_58 = "Macro expansion limit exceeded.";
            local_68 = 0;
            local_50 = 0x1f;
            String::parse_latin1((StrRange*)&local_68);
            RTR((String*)&local_58, (String*)&local_68);
            set_error(this, (String*)&local_58, param_2);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         }

         break;
      }

      pEVar2 = *(Element**)( lVar1 + 0x10 );
      pEVar3 = (Element*)( *(long**)( this + 0x10 ) )[1];
      if (pEVar2 == pEVar3) goto LAB_00104df8;
      do {
         pEVar8 = pEVar2;
         pEVar2 = *(Element**)( pEVar8 + 0x10 );
      }
 while ( pEVar3 != *(Element**)( pEVar8 + 0x10 ) );
      cVar6 = '\0';
      do {
         cVar4 = expand_macros_once(this, (String*)&local_70, param_2, pEVar8, (String*)&local_70);
         pEVar8 = *(Element**)( pEVar8 + 0x20 );
         if (cVar4 != '\0') {
            cVar6 = cVar4;
         }

      }
 while ( pEVar8 != (Element*)0x0 );
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) goto LAB_00104dfe;
   }
 while ( cVar6 != '\0' );
   if (*(long*)param_3 != local_70) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_70);
   }

   if (*(long*)( *(long*)( this + 0x10 ) + 0x68 ) == 0) {
      bVar5 = false;
   }
 else {
      bVar5 = 1 < *(uint*)( *(long*)( *(long*)( this + 0x10 ) + 0x68 ) + -8 );
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::expand_output_macros(int, int) */void ShaderPreprocessor::expand_output_macros(ShaderPreprocessor *this, int param_1, int param_2) {
   code *pcVar1;
   int iVar2;
   uint uVar3;
   long lVar4;
   long in_FS_OFFSET;
   ShaderPreprocessor aSStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   vector_to_string(aSStack_38, (LocalVector*)this, param_1, *(int*)this);
   iVar2 = expand_macros(this, (String*)aSStack_38, param_2 + -1, (String*)aSStack_38);
   if (iVar2 != 0) goto LAB_00104f12;
   if ((uint)param_1 < *(uint*)this) {
      LAB_00104f04:*(int*)this = param_1;
   }
 else if (*(uint*)this < (uint)param_1) {
      if (*(uint*)( this + 4 ) < (uint)param_1) {
         uVar3 = param_1 - 1U | param_1 - 1U >> 1;
         uVar3 = uVar3 | uVar3 >> 2;
         uVar3 = uVar3 | uVar3 >> 4;
         uVar3 = uVar3 | uVar3 >> 8;
         uVar3 = ( uVar3 | uVar3 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar3;
         lVar4 = Memory::realloc_static(*(void**)( this + 8 ), (ulong)uVar3 * 4, false);
         *(long*)( this + 8 ) = lVar4;
         if (lVar4 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

      }

      goto LAB_00104f04;
   }

   add_to_output(this, (String*)aSStack_38);
   LAB_00104f12:CowData<char32_t>::_unref((CowData<char32_t>*)aSStack_38);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::process_define(ShaderPreprocessor::Tokenizer*) */void ShaderPreprocessor::process_define(ShaderPreprocessor *this, Tokenizer *param_1) {
   int iVar1;
   long *plVar2;
   char cVar3;
   int iVar4;
   void *pvVar5;
   long lVar6;
   undefined8 *puVar7;
   char *pcVar8;
   long lVar9;
   long in_FS_OFFSET;
   bool bVar10;
   long local_88;
   long local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   void *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)( param_1 + 8 );
   Tokenizer::get_identifier((bool*)&local_88, SUB81(param_1, 0));
   if (( local_88 == 0 ) || ( *(uint*)( local_88 + -8 ) < 2 )) {
      local_68 = 0;
      local_58 = "";
      local_50 = (void*)0x0;
      String::parse_latin1((StrRange*)&local_68);
      local_58 = "Invalid macro name.";
      local_70 = 0;
      local_50 = (void*)0x13;
      String::parse_latin1((StrRange*)&local_70);
      RTR((String*)&local_58, (String*)&local_70);
      set_error(this, (String*)&local_58, iVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      goto LAB_001050c8;
   }

   plVar2 = *(long**)( this + 0x10 );
   if (( *plVar2 != 0 ) && ( lVar9 = *(long*)( *plVar2 + 0x10 ) ),lVar9 != plVar2[1]) {
      do {
         while (true) {
            cVar3 = String::operator <((String*)&local_88, (String*)( lVar9 + 0x30 ));
            if (cVar3 != '\0') break;
            cVar3 = String::operator <((String*)( lVar9 + 0x30 ), (String*)&local_88);
            if (cVar3 == '\0') {
               if (lVar9 != 0) {
                  local_68 = 0;
                  String::parse_latin1((String*)&local_68, "");
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "Macro redefinition.");
                  RTR((String*)&local_58, (String*)&local_70);
                  set_error(this, (String*)&local_58, iVar1);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  goto LAB_001050c8;
               }

               goto LAB_0010514d;
            }

            lVar9 = *(long*)( lVar9 + 8 );
            if (plVar2[1] == lVar9) goto LAB_0010514d;
         }
;
         lVar9 = *(long*)( lVar9 + 0x10 );
      }
 while ( plVar2[1] != lVar9 );
   }

   LAB_0010514d:local_60 = 0;
   iVar4 = Tokenizer::peek(param_1);
   if (iVar4 == 0x28) {
      Tokenizer::get_token(param_1);
      while (( Tokenizer::get_identifier((bool*)&local_80, SUB81(param_1, 0)),local_80 != 0 && ( 1 < *(uint*)( local_80 + -8 ) ) )) {
         local_58 = (char*)0x0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_80);
         Vector<String>::push_back((Vector<String>*)&local_68, (LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         Tokenizer::skip_whitespace(param_1);
         iVar4 = Tokenizer::get_token(param_1);
         if (iVar4 == 0x29) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            goto LAB_00105171;
         }

         if (iVar4 != 0x2c) {
            local_70 = 0;
            String::parse_latin1((String*)&local_70, "");
            pcVar8 = "Expected a comma in the macro argument list.";
            goto LAB_00105388;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      }
;
      local_70 = 0;
      String::parse_latin1((String*)&local_70, "");
      pcVar8 = "Invalid argument name.";
      LAB_00105388:local_78 = 0;
      String::parse_latin1((String*)&local_78, pcVar8);
      RTR((String*)&local_58, (String*)&local_78);
      set_error(this, (String*)&local_58, iVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   }
 else {
      LAB_00105171:Tokenizer::advance((wchar32)(LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_58);
      tokens_to_string((ShaderPreprocessor*)&local_70, (LocalVector*)&local_58);
      String::strip_edges(SUB81((CowData<char32_t>*)&local_80, 0), SUB81((ShaderPreprocessor*)&local_70, 0));
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( local_50 != (void*)0x0 ) && ( LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>::resize((LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_58, 0),local_50 != (void*)0x0 )) {
         Memory::free_static(local_50, false);
      }

      cVar3 = String::begins_with((char*)&local_80);
      if (cVar3 == '\0') {
         cVar3 = String::ends_with((char*)&local_80);
         if (cVar3 == '\0') {
            pvVar5 = operator_new(0x20, "");
            lVar9 = local_60;
            *(undefined1(*) [16])( (long)pvVar5 + 8 ) = (undefined1[16])0x0;
            *(undefined1*)( (long)pvVar5 + 0x18 ) = 0;
            if (local_60 != 0) {
               CowData<String>::_unref((CowData<String>*)( (long)pvVar5 + 8 ));
               plVar2 = (long*)( lVar9 + -0x10 );
               do {
                  lVar9 = *plVar2;
                  if (lVar9 == 0) goto LAB_00105259;
                  LOCK();
                  lVar6 = *plVar2;
                  bVar10 = lVar9 == lVar6;
                  if (bVar10) {
                     *plVar2 = lVar9 + 1;
                     lVar6 = lVar9;
                  }

                  UNLOCK();
               }
 while ( !bVar10 );
               if (lVar6 != -1) {
                  *(long*)( (long)pvVar5 + 8 ) = local_60;
               }

               LAB_00105259:lVar9 = *(long*)( (long)pvVar5 + 0x10 );
            }

            if (local_80 != lVar9) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( (long)pvVar5 + 0x10 ), (CowData*)&local_80);
            }

            puVar7 = (undefined8*)RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>::operator [](*(RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>**)( this + 0x10 ), (String*)&local_88);
            *puVar7 = pvVar5;
            goto LAB_00105281;
         }

         local_70 = 0;
         String::parse_latin1((String*)&local_70, "");
         pcVar8 = "\'##\' must not appear at end of macro expansion.";
      }
 else {
         local_70 = 0;
         String::parse_latin1((String*)&local_70, "");
         pcVar8 = "\'##\' must not appear at beginning of macro expansion.";
      }

      local_78 = 0;
      String::parse_latin1((String*)&local_78, pcVar8);
      RTR((String*)&local_58, (String*)&local_78);
      set_error(this, (String*)&local_58, iVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   }

   LAB_00105281:CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<String>::_unref((CowData<String>*)&local_60);
   LAB_001050c8:CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ShaderPreprocessor::insert_builtin_define(String, String, ShaderPreprocessor::State&) */void ShaderPreprocessor::insert_builtin_define(undefined8 param_1, String *param_2, CowData *param_3, RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator> *param_4) {
   undefined8 uVar1;
   char cVar2;
   void *pvVar3;
   long lVar4;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   Define *local_58;
   undefined8 local_50;
   CowData<char32_t> local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pvVar3 = operator_new(0x20, "");
   *(undefined1(*) [16])( (long)pvVar3 + 8 ) = (undefined1[16])0x0;
   lVar4 = *(long*)param_3;
   *(undefined1*)( (long)pvVar3 + 0x18 ) = 1;
   if (lVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( (long)pvVar3 + 0x10 ), param_3);
   }

   if (*(long*)param_4 == 0) {
      puVar5 = (undefined4*)operator_new(0x40, DefaultAllocator::alloc);
      local_50 = 0;
      *puVar5 = 0;
      *(undefined8*)( puVar5 + 0xe ) = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( puVar5 + ( 4*i + 2 ) ) = (undefined1[16])0;
      }

      *(undefined4**)param_4 = puVar5;
      for (int i = 0; i < 16; i++) {
         local_48[i] = (CowData<char32_t>)0;
      }

      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      puVar5 = *(undefined4**)param_4;
      uVar1 = *(undefined8*)( param_4 + 8 );
      local_58 = (Define*)0x0;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( puVar5 + ( 2*i + 2 ) ) = uVar1;
      }

      *puVar5 = 1;
   }
 else {
      lVar4 = *(long*)( *(long*)param_4 + 0x10 );
      if (*(long*)( param_4 + 8 ) == lVar4) {
         local_58 = (Define*)0x0;
      }
 else {
         do {
            while (true) {
               cVar2 = String::operator <(param_2, (String*)( lVar4 + 0x30 ));
               if (cVar2 != '\0') break;
               cVar2 = String::operator <((String*)( lVar4 + 0x30 ), param_2);
               if (cVar2 == '\0') {
                  if (lVar4 != 0) goto LAB_00105605;
                  goto LAB_001055d6;
               }

               lVar4 = *(long*)( lVar4 + 8 );
               if (*(long*)( param_4 + 8 ) == lVar4) goto LAB_001055d6;
            }
;
            lVar4 = *(long*)( lVar4 + 0x10 );
         }
 while ( *(long*)( param_4 + 8 ) != lVar4 );
         LAB_001055d6:local_58 = (Define*)0x0;
         if (*(long*)param_4 == 0) {
            puVar5 = (undefined4*)operator_new(0x40, DefaultAllocator::alloc);
            local_50 = 0;
            for (int i = 0; i < 3; i++) {
               *(undefined1(*) [16])( puVar5 + ( 4*i + 2 ) ) = (undefined1[16])0;
            }

            *puVar5 = 0;
            *(undefined8*)( puVar5 + 0xe ) = 0;
            *(undefined4**)param_4 = puVar5;
            for (int i = 0; i < 16; i++) {
               local_48[i] = (CowData<char32_t>)0;
            }

            CowData<char32_t>::_unref(local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            uVar1 = *(undefined8*)( param_4 + 8 );
            puVar5 = *(undefined4**)param_4;
            *puVar5 = 1;
            *(undefined8*)( puVar5 + 6 ) = uVar1;
            *(undefined8*)( puVar5 + 2 ) = uVar1;
            *(undefined8*)( puVar5 + 4 ) = uVar1;
         }

      }

   }

   lVar4 = RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>::_insert(param_4, param_2, &local_58);
   LAB_00105605:*(void**)( lVar4 + 0x38 ) = pvVar3;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::process_undef(ShaderPreprocessor::Tokenizer*) */void ShaderPreprocessor::process_undef(ShaderPreprocessor *this, Tokenizer *param_1) {
   int iVar1;
   void *pvVar2;
   RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator> *this_00;
   char cVar3;
   long *plVar4;
   undefined8 *puVar5;
   long lVar6;
   Element *pEVar7;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   undefined8 local_68;
   String local_60[8];
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)( param_1 + 8 );
   Tokenizer::get_identifier((bool*)&local_78, SUB81(param_1, 0));
   if (( ( local_78 == 0 ) || ( *(uint*)( local_78 + -8 ) < 2 ) ) || ( cVar3 = Tokenizer::consume_empty_line() ),cVar3 == '\0') {
      local_68 = 0;
      local_50 = 0;
      local_58 = "";
      String::parse_latin1((StrRange*)&local_68);
      local_58 = "Invalid \'%s\' directive.";
      local_70 = 0;
      local_50 = 0x17;
      String::parse_latin1((StrRange*)&local_70);
      RTR(local_60, (String*)&local_70);
      vformat<char_const*>((String*)&local_58, (char*)local_60);
      set_error(this, (String*)&local_58, iVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }
 else {
      plVar4 = *(long**)( this + 0x10 );
      if (( *plVar4 != 0 ) && ( lVar6 = *(long*)( *plVar4 + 0x10 ) ),lVar6 != plVar4[1]) {
         do {
            cVar3 = String::operator <((String*)&local_78, (String*)( lVar6 + 0x30 ));
            if (cVar3 == '\0') {
               cVar3 = String::operator <((String*)( lVar6 + 0x30 ), (String*)&local_78);
               if (cVar3 == '\0') {
                  if (lVar6 != 0) {
                     plVar4 = (long*)RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>::operator [](*(RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>**)( this + 0x10 ), (String*)&local_78);
                     if (*(char*)( *plVar4 + 0x18 ) == '\0') {
                        puVar5 = (undefined8*)RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>::operator [](*(RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>**)( this + 0x10 ), (String*)&local_78);
                        pvVar2 = (void*)*puVar5;
                        CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar2 + 0x10 ));
                        CowData<String>::_unref((CowData<String>*)( (long)pvVar2 + 8 ));
                        Memory::free_static(pvVar2, false);
                        this_00 = *(RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>**)( this + 0x10 );
                        if (*(long*)this_00 != 0) {
                           pEVar7 = *(Element**)( *(long*)this_00 + 0x10 );
                           goto LAB_00105948;
                        }

                     }
 else {
                        local_68 = 0;
                        String::parse_latin1((String*)&local_68, "");
                        local_70 = 0;
                        String::parse_latin1((String*)&local_70, "Cannot use \'%s\' on built-in define.");
                        RTR(local_60, (String*)&local_70);
                        vformat<char_const*>((String*)&local_58, (char*)local_60);
                        set_error(this, (String*)&local_58, iVar1);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                        CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     }

                  }

                  break;
               }

               lVar6 = *(long*)( lVar6 + 8 );
            }
 else {
               lVar6 = *(long*)( lVar6 + 0x10 );
            }

         }
 while ( plVar4[1] != lVar6 );
      }

   }

   LAB_00105847:CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   LAB_00105948:if (pEVar7 == *(Element**)( this_00 + 8 )) goto LAB_00105847;
   while (true) {
      cVar3 = String::operator <((String*)&local_78, (String*)( pEVar7 + 0x30 ));
      if (cVar3 == '\0') break;
      pEVar7 = *(Element**)( pEVar7 + 0x10 );
      if (pEVar7 == *(Element**)( this_00 + 8 )) goto LAB_00105847;
   }
;
   cVar3 = String::operator <((String*)( pEVar7 + 0x30 ), (String*)&local_78);
   if (cVar3 == '\0') {
      if (( ( pEVar7 != (Element*)0x0 ) && ( RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>::_erase(this_00, pEVar7),*(int*)( this_00 + 0x10 ) == 0 ) ) && ( pvVar2 = *(void**)this_00 ),pvVar2 != (void*)0x0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar2 + 0x30 ));
         Memory::free_static(pvVar2, false);
         *(undefined8*)this_00 = 0;
      }

      goto LAB_00105847;
   }

   pEVar7 = *(Element**)( pEVar7 + 8 );
   goto LAB_00105948;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* List<ScriptLanguage::CodeCompletionOption,
   DefaultAllocator>::push_back(ScriptLanguage::CodeCompletionOption const&) [clone .isra.0] */void List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>::push_back(List<ScriptLanguage::CodeCompletionOption,DefaultAllocator> *this, CodeCompletionOption *param_1) {
   CowData<Pair<int,int>> *this_00;
   Array *this_01;
   undefined4 uVar1;
   Object *pOVar2;
   Object *pOVar3;
   undefined8 uVar4;
   long *plVar5;
   undefined8 uVar6;
   char cVar7;
   int iVar8;
   undefined4 *puVar9;
   undefined1(*pauVar10)[16];
   long lVar11;
   long in_FS_OFFSET;
   long local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)this == 0) {
      pauVar10 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar10;
      *(undefined4*)pauVar10[1] = 0;
      *pauVar10 = (undefined1[16])0x0;
   }

   puVar9 = (undefined4*)operator_new(0x98, DefaultAllocator::alloc);
   *(undefined1(*) [16])( puVar9 + 2 ) = (undefined1[16])0x0;
   uVar6 = _UNK_00110d88;
   uVar4 = __LC89;
   this_00 = (CowData<Pair<int,int>>*)( puVar9 + 0x18 );
   *puVar9 = 9;
   *(undefined8*)( puVar9 + 10 ) = 0;
   puVar9[0xc] = 0;
   *(undefined8*)( puVar9 + 0x14 ) = 0;
   *(undefined8*)( puVar9 + 0x18 ) = 0;
   *(undefined8*)( puVar9 + 6 ) = uVar4;
   *(undefined8*)( puVar9 + 8 ) = uVar6;
   *(undefined1(*) [16])( puVar9 + 0xe ) = (undefined1[16])0x0;
   iVar8 = CowData<Pair<int,int>>::resize<false>(this_00, 1);
   if (iVar8 == 0) {
      if (*(long*)( puVar9 + 0x18 ) == 0) {
         lVar11 = 0;
      }
 else {
         lVar11 = *(long*)( *(long*)( puVar9 + 0x18 ) + -8 );
         if (0 < lVar11) {
            CowData<Pair<int,int>>::_copy_on_write(this_00);
            **(undefined8**)( puVar9 + 0x18 ) = 0xffffffffffffffff;
            goto LAB_00105b54;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar11, "p_index", "size()", "", false, false);
   }

   LAB_00105b54:puVar9[0x1a] = 0x400;
   this_01 = (Array*)( puVar9 + 0x1e );
   *(undefined8*)( puVar9 + 0x1c ) = 0;
   Array::Array(this_01);
   local_58 = 0;
   local_60 = 0;
   local_50 = (undefined1[16])0x0;
   Array::set_typed((uint)this_01, (StringName*)0x2, (Variant*)&local_60);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar1 = *(undefined4*)param_1;
   *(undefined8*)( puVar9 + 0x24 ) = 0;
   *(undefined1(*) [16])( puVar9 + 0x20 ) = (undefined1[16])0x0;
   *puVar9 = uVar1;
   if (*(long*)( puVar9 + 2 ) != *(long*)( param_1 + 8 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 2 ), (CowData*)( param_1 + 8 ));
   }

   if (*(long*)( puVar9 + 4 ) != *(long*)( param_1 + 0x10 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 4 ), (CowData*)( param_1 + 0x10 ));
   }

   uVar4 = *(undefined8*)( param_1 + 0x20 );
   pOVar2 = *(Object**)( param_1 + 0x28 );
   pOVar3 = *(Object**)( puVar9 + 10 );
   *(undefined8*)( puVar9 + 6 ) = *(undefined8*)( param_1 + 0x18 );
   *(undefined8*)( puVar9 + 8 ) = uVar4;
   if (pOVar2 != pOVar3) {
      *(Object**)( puVar9 + 10 ) = pOVar2;
      if (pOVar2 != (Object*)0x0) {
         cVar7 = RefCounted::reference();
         if (cVar7 == '\0') {
            *(undefined8*)( puVar9 + 10 ) = 0;
         }

      }

      if (pOVar3 != (Object*)0x0) {
         cVar7 = RefCounted::unreference();
         if (cVar7 != '\0') {
            cVar7 = predelete_handler(pOVar3);
            if (cVar7 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

   }

   Variant::operator =((Variant*)( puVar9 + 0xc ), (Variant*)( param_1 + 0x30 ));
   if (*(long*)( puVar9 + 0x14 ) != *(long*)( param_1 + 0x50 )) {
      CowData<Pair<int,int>>::_ref((CowData<Pair<int,int>>*)( puVar9 + 0x14 ), (CowData*)( param_1 + 0x50 ));
   }

   if (*(long*)( puVar9 + 0x18 ) != *(long*)( param_1 + 0x60 )) {
      CowData<Pair<int,int>>::_ref(this_00, (CowData*)( param_1 + 0x60 ));
   }

   puVar9[0x1a] = *(undefined4*)( param_1 + 0x68 );
   if (*(long*)( puVar9 + 0x1c ) != *(long*)( param_1 + 0x70 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 0x1c ), (CowData*)( param_1 + 0x70 ));
   }

   Array::operator =(this_01, (Array*)( param_1 + 0x78 ));
   uVar4 = *(undefined8*)( *(long*)this + 8 );
   *(long*)( puVar9 + 0x24 ) = *(long*)this;
   *(undefined8*)( puVar9 + 0x20 ) = 0;
   plVar5 = *(long**)this;
   *(undefined8*)( puVar9 + 0x22 ) = uVar4;
   if (plVar5[1] != 0) {
      *(undefined4**)( plVar5[1] + 0x80 ) = puVar9;
   }

   plVar5[1] = (long)puVar9;
   if (*plVar5 == 0) {
      *plVar5 = (long)puVar9;
   }

   *(int*)( plVar5 + 2 ) = (int)plVar5[2] + 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Vector<bool>::push_back(bool) [clone .isra.0] */void Vector<bool>::push_back(Vector<bool> *this, bool param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar3 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<bool>::resize<false>((CowData<bool>*)( this + 8 ), lVar3);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar2 = -1;
         lVar3 = 0;
      }
 else {
         lVar3 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar2 = lVar3 + -1;
         if (-1 < lVar2) {
            CowData<bool>::_copy_on_write((CowData<bool>*)( this + 8 ));
            *(bool*)( *(long*)( this + 8 ) + -1 + lVar3 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar2, lVar3, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* ShaderPreprocessor::start_branch_condition(ShaderPreprocessor::Tokenizer*, bool, bool) */void ShaderPreprocessor::start_branch_condition(ShaderPreprocessor *this, Tokenizer *param_1, bool param_2, bool param_3) {
   long lVar1;
   long lVar2;
   void *pvVar3;
   long lVar4;
   undefined1(*pauVar5)[16];
   long *plVar6;
   long in_FS_OFFSET;
   bool bVar7;
   undefined8 local_70;
   Vector<String> local_68[8];
   undefined8 local_60;
   char *local_58;
   long local_50;
   Vector<bool> *local_48;
   undefined1 local_40;
   long local_30;
   lVar1 = *(long*)( this + 0x10 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3) {
      Vector<bool>::push_back(*(Vector<bool>**)( lVar1 + 0x20 ), param_2);
   }
 else {
      *(int*)( lVar1 + 0x28 ) = *(int*)( lVar1 + 0x28 ) + 1;
      local_50 = 0;
      local_40 = 0;
      local_48 = *(Vector<bool>**)( lVar1 + 0x20 );
      Vector<bool>::push_back((Vector<bool>*)&local_58, param_2);
      if (*(long*)( lVar1 + 0x18 ) == 0) {
         pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( lVar1 + 0x18 ) = pauVar5;
         *(undefined4*)pauVar5[1] = 0;
         *pauVar5 = (undefined1[16])0x0;
      }

      pvVar3 = operator_new(0x38, DefaultAllocator::alloc);
      *(undefined1(*) [16])( (long)pvVar3 + 8 ) = (undefined1[16])0x0;
      *(undefined1*)( (long)pvVar3 + 0x18 ) = 0;
      *(undefined8*)( (long)pvVar3 + 0x30 ) = 0;
      *(undefined1(*) [16])( (long)pvVar3 + 0x20 ) = (undefined1[16])0x0;
      if (local_50 != 0) {
         plVar6 = (long*)( local_50 + -0x10 );
         do {
            lVar2 = *plVar6;
            if (lVar2 == 0) goto LAB_00105fcb;
            LOCK();
            lVar4 = *plVar6;
            bVar7 = lVar2 == lVar4;
            if (bVar7) {
               *plVar6 = lVar2 + 1;
               lVar4 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar7 );
         if (lVar4 != -1) {
            *(long*)( (long)pvVar3 + 8 ) = local_50;
         }

      }

      LAB_00105fcb:*(Vector<bool>**)( (long)pvVar3 + 0x10 ) = local_48;
      *(undefined1*)( (long)pvVar3 + 0x18 ) = local_40;
      plVar6 = *(long**)( lVar1 + 0x18 );
      lVar1 = plVar6[1];
      *(undefined8*)( (long)pvVar3 + 0x20 ) = 0;
      *(long**)( (long)pvVar3 + 0x30 ) = plVar6;
      *(long*)( (long)pvVar3 + 0x28 ) = lVar1;
      if (lVar1 != 0) {
         *(void**)( lVar1 + 0x20 ) = pvVar3;
      }

      plVar6[1] = (long)pvVar3;
      if (*plVar6 == 0) {
         *plVar6 = (long)pvVar3;
      }

      *(int*)( plVar6 + 2 ) = (int)plVar6[2] + 1;
      *(void**)( *(long*)( this + 0x10 ) + 0x20 ) = pvVar3;
      if (local_50 != 0) {
         LOCK();
         plVar6 = (long*)( local_50 + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            Memory::free_static((void*)( local_50 + -0x10 ), false);
         }

      }

   }

   if (!param_2) {
      local_60 = 0;
      local_58 = "elif";
      local_70 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange*)&local_70);
      Vector<String>::push_back(local_68, (StrRange*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_58 = "else";
      local_70 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange*)&local_70);
      Vector<String>::push_back(local_68, (StrRange*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      local_58 = "endif";
      local_70 = 0;
      local_50 = 5;
      String::parse_latin1((StrRange*)&local_70);
      Vector<String>::push_back(local_68, (StrRange*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      next_directive((Tokenizer*)&local_58, (Vector*)this);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<String>::_unref((CowData<String>*)&local_60);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::add_region(int, bool, ShaderPreprocessor::Region*) */void ShaderPreprocessor::add_region(ShaderPreprocessor *this, int param_1, bool param_2, Region *param_3) {
   _Data *this_00;
   long *plVar1;
   undefined8 uVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   undefined1(*pauVar6)[16];
   CowData<char32_t> *this_01;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   undefined8 local_60;
   CowData<char32_t> local_58;
   Region *local_50;
   long local_40;
   uVar2 = _LC90;
   lVar7 = *(long*)( this + 0x10 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (CowData<char32_t>)0x0;
   local_60 = _LC90;
   local_68 = 0;
   local_50 = (Region*)0x0;
   if (*(long*)( lVar7 + 0x58 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)( lVar7 + 0x58 ));
      lVar7 = *(long*)( this + 0x10 );
   }

   this_00 = (_Data*)( lVar7 + 0x80 );
   lVar4 = *(long*)( lVar7 + 0x80 );
   local_60 = CONCAT44(local_60._4_4_, param_1);
   local_58 = (CowData<char32_t>)param_2;
   local_50 = param_3;
   if (lVar4 == 0) {
      RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>::_Data::_create_root(this_00);
      lVar4 = *(long*)( lVar7 + 0x80 );
      if (lVar4 != 0) goto LAB_00106250;
   }
 else {
      LAB_00106250:lVar5 = *(long*)( lVar4 + 0x10 );
      if (*(long*)( lVar7 + 0x88 ) != lVar5) {
         do {
            while (true) {
               cVar3 = String::operator <((String*)&local_68, (String*)( lVar5 + 0x30 ));
               if (cVar3 != '\0') break;
               cVar3 = String::operator <((String*)( lVar5 + 0x30 ), (String*)&local_68);
               if (cVar3 == '\0') {
                  if (lVar5 != 0) {
                     lVar7 = *(long*)( lVar5 + 0x38 );
                     goto joined_r0x00106321;
                  }

                  goto LAB_001062a0;
               }

               lVar5 = *(long*)( lVar5 + 8 );
               if (*(long*)( lVar7 + 0x88 ) == lVar5) goto LAB_001062a0;
            }
;
            lVar5 = *(long*)( lVar5 + 0x10 );
         }
 while ( *(long*)( lVar7 + 0x88 ) != lVar5 );
         LAB_001062a0:lVar4 = *(long*)( lVar7 + 0x80 );
      }

      local_70 = 0;
      if (lVar4 != 0) goto LAB_001062b9;
   }

   local_70 = 0;
   RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>::_Data::_create_root(this_00);
   LAB_001062b9:lVar5 = RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>::_insert((RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>*)this_00, (String*)&local_68, (List*)&local_70);
   List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)&local_70);
   lVar7 = *(long*)( lVar5 + 0x38 );
   joined_r0x00106321:if (lVar7 == 0) {
      pauVar6 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( lVar5 + 0x38 ) = pauVar6;
      *(undefined4*)pauVar6[1] = 0;
      *pauVar6 = (undefined1[16])0x0;
   }

   this_01 = (CowData<char32_t>*)operator_new(0x38, DefaultAllocator::alloc);
   *(undefined8*)this_01 = 0;
   *(undefined8*)( this_01 + 8 ) = uVar2;
   this_01[0x10] = (CowData<char32_t>)0x0;
   *(undefined1(*) [16])( this_01 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_01 + 0x28 ) = (undefined1[16])0x0;
   if (local_68 != 0) {
      CowData<char32_t>::_ref(this_01, (CowData*)&local_68);
   }

   *(undefined8*)( this_01 + 8 ) = local_60;
   this_01[0x10] = local_58;
   *(Region**)( this_01 + 0x18 ) = local_50;
   plVar1 = *(long**)( lVar5 + 0x38 );
   lVar7 = plVar1[1];
   *(undefined8*)( this_01 + 0x20 ) = 0;
   *(long**)( this_01 + 0x30 ) = plVar1;
   *(long*)( this_01 + 0x28 ) = lVar7;
   if (lVar7 != 0) {
      *(CowData<char32_t>**)( lVar7 + 0x20 ) = this_01;
   }

   plVar1[1] = (long)this_01;
   if (*plVar1 == 0) {
      *plVar1 = (long)this_01;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   *(CowData<char32_t>**)( *(long*)( this + 0x10 ) + 0x98 ) = this_01;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::process_elif(ShaderPreprocessor::Tokenizer*) */void ShaderPreprocessor::process_elif(ShaderPreprocessor *this, Tokenizer *param_1) {
   char cVar1;
   int iVar2;
   long lVar3;
   undefined1 uVar4;
   int iVar5;
   long lVar6;
   bool bVar7;
   long in_FS_OFFSET;
   long local_278;
   undefined8 local_270;
   undefined8 local_268;
   undefined8 local_260;
   char *local_258;
   void *local_250;
   int local_248[8];
   code *local_228[49];
   undefined8 local_a0;
   undefined4 local_98;
   undefined8 local_90;
   undefined1 local_88;
   undefined4 local_84;
   undefined1 local_80;
   undefined8 local_78;
   undefined1 local_70;
   undefined1 local_68[16];
   undefined8 local_50;
   undefined1 local_48;
   long local_40;
   iVar2 = *(int*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( *(long*)( this + 0x10 ) + 0x20 );
   if (( lVar3 == 0 ) || ( *(char*)( lVar3 + 0x18 ) != '\0' )) {
      local_268 = 0;
      local_250 = (void*)0x0;
      local_258 = "";
      String::parse_latin1((StrRange*)&local_268);
      local_258 = "Unmatched \'%s\' directive.";
      local_270 = 0;
      local_250 = (void*)0x19;
      String::parse_latin1((StrRange*)&local_270);
      RTR((String*)&local_260, (String*)&local_270);
      vformat<char_const*>((String*)&local_258, (char*)&local_260);
      set_error(this, (String*)&local_258, iVar2);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   }
 else {
      lVar3 = *(long*)( *(long*)( this + 0x10 ) + 0x98 );
      if (lVar3 != 0) {
         *(int*)( lVar3 + 0xc ) = iVar2 + -1;
      }

      Tokenizer::advance((wchar32)(LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_258);
      tokens_to_string((ShaderPreprocessor*)&local_260, (LocalVector*)&local_258);
      bVar7 = SUB81((ShaderPreprocessor*)&local_260, 0);
      String::strip_edges(SUB81((CowData<char32_t>*)&local_278, 0), bVar7);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
      if (( local_250 != (void*)0x0 ) && ( LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>::resize((LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_258, 0),local_250 != (void*)0x0 )) {
         Memory::free_static(local_250, false);
      }

      if (( local_278 == 0 ) || ( *(uint*)( local_278 + -8 ) < 2 )) {
         local_258 = "";
         local_260 = 0;
         local_250 = (void*)0x0;
         String::parse_latin1((StrRange*)&local_260);
         local_258 = "Missing condition.";
         local_268 = 0;
         local_250 = (void*)0x12;
         String::parse_latin1((StrRange*)&local_268);
         RTR((String*)&local_258, (String*)&local_268);
         set_error(this, (String*)&local_258, iVar2);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
      }
 else {
         iVar5 = expand_condition(this, (String*)&local_278, iVar2, (String*)&local_278);
         if (( iVar5 == 0 ) && ( iVar5 = expand_macros(this, (String*)&local_278, iVar2, (String*)&local_278) ),iVar5 == 0) {
            RefCounted::RefCounted((RefCounted*)local_228);
            local_a0 = 0;
            local_228[0] = Expression::execute;
            local_98 = 0;
            local_90 = 0;
            local_88 = 0;
            local_84 = 0;
            local_80 = 0;
            local_78 = 0;
            local_70 = 1;
            local_50 = 0;
            local_48 = 0;
            local_250 = (void*)0x0;
            local_68 = (undefined1[16])0x0;
            iVar5 = Expression::parse((String*)local_228, (Vector*)&local_278);
            if (iVar5 == 0) {
               Array::Array((Array*)&local_260);
               Expression::execute((Array*)local_248, (Object*)local_228, bVar7, false);
               Array::~Array((Array*)&local_260);
               if (local_248[0] == 0) {
                  local_268 = 0;
                  String::parse_latin1((String*)&local_268, "");
                  local_270 = 0;
                  String::parse_latin1((String*)&local_270, "Condition evaluation error.");
                  RTR((String*)&local_260, (String*)&local_270);
                  set_error(this, (String*)&local_260, iVar2);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
                  cVar1 = Variant::needs_deinit[local_248[0]];
               }
 else {
                  lVar3 = *(long*)( *(long*)( *(long*)( this + 0x10 ) + 0x20 ) + 8 );
                  if (lVar3 == 0) {
                     LAB_00106844:uVar4 = Variant::booleanize();
                  }
 else {
                     lVar6 = 0;
                     do {
                        if (*(long*)( lVar3 + -8 ) <= lVar6) goto LAB_00106844;
                        lVar6 = lVar6 + 1;
                     }
 while ( *(char*)( lVar3 + -1 + lVar6 ) == '\0' );
                     uVar4 = false;
                  }

                  start_branch_condition(this, param_1, (bool)uVar4, true);
                  if (*(char*)( *(long*)( this + 0x10 ) + 0x78 ) != '\0') {
                     add_region(this, iVar2 + 1, (bool)uVar4, *(Region**)( *(long*)( *(long*)( this + 0x10 ) + 0x98 ) + 0x18 ));
                  }

                  cVar1 = Variant::needs_deinit[local_248[0]];
               }

               if (cVar1 != '\0') {
                  Variant::_clear_internal();
               }

            }
 else {
               Expression::get_error_text();
               set_error(this, (String*)&local_260, iVar2);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
            }

            CowData<String>::_unref((CowData<String>*)&local_250);
            Expression::~Expression((Expression*)local_228);
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_278);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ShaderPreprocessor::process_else(ShaderPreprocessor::Tokenizer*) */void ShaderPreprocessor::process_else(ShaderPreprocessor *this, Tokenizer *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   char cVar5;
   long lVar6;
   byte bVar7;
   byte bVar8;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 local_70;
   Vector<String> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   iVar1 = *(int*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)( *(long*)( this + 0x10 ) + 0x20 );
   if (( lVar2 == 0 ) || ( *(char*)( lVar2 + 0x18 ) != '\0' )) {
      local_70 = 0;
      local_50 = 0;
      local_58 = "";
      String::parse_latin1((StrRange*)&local_70);
      local_58 = "Unmatched \'%s\' directive.";
      local_78 = 0;
      local_50 = 0x19;
      String::parse_latin1((StrRange*)&local_78);
      RTR((String*)local_68, (String*)&local_78);
      vformat<char_const*>((String*)&local_58, (char*)local_68);
      set_error(this, (String*)&local_58, iVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      goto LAB_00106b04;
   }

   lVar2 = *(long*)( *(long*)( this + 0x10 ) + 0x98 );
   if (lVar2 != 0) {
      *(int*)( lVar2 + 0xc ) = iVar1 + -1;
   }

   cVar5 = Tokenizer::consume_empty_line();
   if (cVar5 == '\0') {
      local_70 = 0;
      local_58 = "";
      local_50 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_58 = "Invalid \'%s\' directive.";
      local_78 = 0;
      local_50 = 0x17;
      String::parse_latin1((StrRange*)&local_78);
      RTR((String*)local_68, (String*)&local_78);
      vformat<char_const*>((String*)&local_58, (char*)local_68);
      set_error(this, (String*)&local_58, iVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   }

   lVar2 = *(long*)( this + 0x10 );
   lVar3 = *(long*)( lVar2 + 0x20 );
   bVar8 = *(byte*)( lVar2 + 0x78 );
   lVar4 = *(long*)( lVar3 + 8 );
   if (lVar4 == 0) {
      *(undefined1*)( lVar3 + 0x18 ) = 1;
      if (bVar8 == 0) goto LAB_00106b04;
      bVar8 = 0;
      bVar7 = true;
      LAB_00106c19:add_region(this, iVar1 + 1, (bool)bVar7, *(Region**)( *(long*)( lVar2 + 0x98 ) + 0x18 ));
      if (bVar8 == 0) goto LAB_00106b04;
   }
 else {
      lVar6 = 0;
      do {
         if (*(long*)( lVar4 + -8 ) <= lVar6) {
            *(undefined1*)( lVar3 + 0x18 ) = 1;
            if (bVar8 == 0) goto LAB_00106b04;
            bVar8 = 0;
            goto LAB_00106c10;
         }

         lVar6 = lVar6 + 1;
      }
 while ( *(char*)( lVar4 + -1 + lVar6 ) == '\0' );
      *(undefined1*)( lVar3 + 0x18 ) = 1;
      if (bVar8 != 0) {
         LAB_00106c10:bVar7 = bVar8 ^ 1;
         goto LAB_00106c19;
      }

   }

   local_60 = 0;
   local_58 = "endif";
   local_70 = 0;
   local_50 = 5;
   String::parse_latin1((StrRange*)&local_70);
   Vector<String>::push_back(local_68, (StrRange*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   next_directive((Tokenizer*)&local_58, (Vector*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<String>::_unref((CowData<String>*)&local_60);
   LAB_00106b04:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ShaderPreprocessor::process_if(ShaderPreprocessor::Tokenizer*) */void ShaderPreprocessor::process_if(ShaderPreprocessor *this, Tokenizer *param_1) {
   char cVar1;
   int iVar2;
   bool bVar3;
   int iVar4;
   long in_FS_OFFSET;
   long local_278;
   undefined8 local_270;
   undefined8 local_268;
   undefined8 local_260;
   char *local_258;
   void *local_250;
   int local_248[8];
   code *local_228[49];
   undefined8 local_a0;
   undefined4 local_98;
   undefined8 local_90;
   undefined1 local_88;
   undefined4 local_84;
   undefined1 local_80;
   undefined8 local_78;
   undefined1 local_70;
   undefined1 local_68[16];
   undefined8 local_50;
   undefined1 local_48;
   long local_40;
   iVar2 = *(int*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Tokenizer::advance((wchar32)(LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_258);
   tokens_to_string((ShaderPreprocessor*)&local_260, (LocalVector*)&local_258);
   bVar3 = SUB81((ShaderPreprocessor*)&local_260, 0);
   String::strip_edges(SUB81((CowData<char32_t>*)&local_278, 0), bVar3);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
   if (( local_250 != (void*)0x0 ) && ( LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>::resize((LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_258, 0),local_250 != (void*)0x0 )) {
      Memory::free_static(local_250, false);
   }

   if (( local_278 == 0 ) || ( *(uint*)( local_278 + -8 ) < 2 )) {
      local_258 = "";
      local_260 = 0;
      local_250 = (void*)0x0;
      String::parse_latin1((StrRange*)&local_260);
      local_258 = "Missing condition.";
      local_268 = 0;
      local_250 = (void*)0x12;
      String::parse_latin1((StrRange*)&local_268);
      RTR((String*)&local_258, (String*)&local_268);
      set_error(this, (String*)&local_258, iVar2);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
   }
 else {
      iVar4 = expand_condition(this, (String*)&local_278, iVar2, (String*)&local_278);
      if (( iVar4 == 0 ) && ( iVar4 = expand_macros(this, (String*)&local_278, iVar2, (String*)&local_278) ),iVar4 == 0) {
         RefCounted::RefCounted((RefCounted*)local_228);
         local_a0 = 0;
         local_228[0] = Expression::execute;
         local_98 = 0;
         local_90 = 0;
         local_88 = 0;
         local_84 = 0;
         local_80 = 0;
         local_78 = 0;
         local_70 = 1;
         local_50 = 0;
         local_48 = 0;
         local_250 = (void*)0x0;
         local_68 = (undefined1[16])0x0;
         iVar4 = Expression::parse((String*)local_228, (Vector*)&local_278);
         if (iVar4 == 0) {
            Array::Array((Array*)&local_260);
            Expression::execute((Array*)local_248, (Object*)local_228, bVar3, false);
            Array::~Array((Array*)&local_260);
            if (local_248[0] == 0) {
               local_268 = 0;
               String::parse_latin1((String*)&local_268, "");
               local_270 = 0;
               String::parse_latin1((String*)&local_270, "Condition evaluation error.");
               RTR((String*)&local_260, (String*)&local_270);
               set_error(this, (String*)&local_260, iVar2);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
               cVar1 = Variant::needs_deinit[local_248[0]];
            }
 else {
               bVar3 = (bool)Variant::booleanize();
               start_branch_condition(this, param_1, bVar3, false);
               if (*(char*)( *(long*)( this + 0x10 ) + 0x78 ) != '\0') {
                  add_region(this, iVar2 + 1, bVar3, *(Region**)( *(long*)( this + 0x10 ) + 0x98 ));
               }

               cVar1 = Variant::needs_deinit[local_248[0]];
            }

            if (cVar1 != '\0') {
               Variant::_clear_internal();
            }

         }
 else {
            Expression::get_error_text();
            set_error(this, (String*)&local_260, iVar2);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
         }

         CowData<String>::_unref((CowData<String>*)&local_250);
         Expression::~Expression((Expression*)local_228);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_278);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ShaderPreprocessor::process_ifdef(ShaderPreprocessor::Tokenizer*) */void ShaderPreprocessor::process_ifdef(ShaderPreprocessor *this, Tokenizer *param_1) {
   int iVar1;
   long *plVar2;
   char cVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)( param_1 + 8 );
   Tokenizer::get_identifier((bool*)&local_78, SUB81(param_1, 0));
   if (( local_78 == 0 ) || ( *(uint*)( local_78 + -8 ) < 2 )) {
      local_60 = 0;
      local_58 = "";
      local_50 = 0;
      String::parse_latin1((StrRange*)&local_60);
      local_58 = "Invalid macro name.";
      local_68 = 0;
      local_50 = 0x13;
      String::parse_latin1((StrRange*)&local_68);
      RTR((String*)&local_58, (String*)&local_68);
      set_error(this, (String*)&local_58, iVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }
 else {
      cVar3 = Tokenizer::consume_empty_line();
      if (cVar3 == '\0') {
         local_68 = 0;
         String::parse_latin1((String*)&local_68, "");
         local_70 = 0;
         String::parse_latin1((String*)&local_70, "Invalid \'%s\' directive.");
         RTR((String*)&local_60, (String*)&local_70);
         vformat<char_const*>((String*)&local_58, (char*)&local_60);
         set_error(this, (String*)&local_58, iVar1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      }
 else {
         plVar2 = *(long**)( this + 0x10 );
         if (*plVar2 != 0) {
            for (lVar4 = *(long*)( *plVar2 + 0x10 ); plVar2[1] != lVar4; lVar4 = *(long*)( lVar4 + 8 )) {
               while (true) {
                  cVar3 = String::operator <((String*)&local_78, (String*)( lVar4 + 0x30 ));
                  if (cVar3 == '\0') break;
                  lVar4 = *(long*)( lVar4 + 0x10 );
                  if (plVar2[1] == lVar4) goto LAB_00107191;
               }
;
               cVar3 = String::operator <((String*)( lVar4 + 0x30 ), (String*)&local_78);
               if (cVar3 == '\0') {
                  bVar5 = lVar4 != 0;
                  goto LAB_00107194;
               }

            }

         }

         LAB_00107191:bVar5 = false;
         LAB_00107194:start_branch_condition(this, param_1, bVar5, false);
         if (*(char*)( *(long*)( this + 0x10 ) + 0x78 ) != '\0') {
            add_region(this, iVar1 + 1, bVar5, *(Region**)( *(long*)( this + 0x10 ) + 0x98 ));
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::process_ifndef(ShaderPreprocessor::Tokenizer*) */void ShaderPreprocessor::process_ifndef(ShaderPreprocessor *this, Tokenizer *param_1) {
   int iVar1;
   long *plVar2;
   char cVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)( param_1 + 8 );
   Tokenizer::get_identifier((bool*)&local_78, SUB81(param_1, 0));
   if (( local_78 == 0 ) || ( *(uint*)( local_78 + -8 ) < 2 )) {
      local_60 = 0;
      local_58 = "";
      local_50 = 0;
      String::parse_latin1((StrRange*)&local_60);
      local_58 = "Invalid macro name.";
      local_68 = 0;
      local_50 = 0x13;
      String::parse_latin1((StrRange*)&local_68);
      RTR((String*)&local_58, (String*)&local_68);
      set_error(this, (String*)&local_58, iVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }
 else {
      cVar3 = Tokenizer::consume_empty_line();
      if (cVar3 == '\0') {
         local_68 = 0;
         String::parse_latin1((String*)&local_68, "");
         local_70 = 0;
         String::parse_latin1((String*)&local_70, "Invalid \'%s\' directive.");
         RTR((String*)&local_60, (String*)&local_70);
         vformat<char_const*>((String*)&local_58, (char*)&local_60);
         set_error(this, (String*)&local_58, iVar1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      }
 else {
         plVar2 = *(long**)( this + 0x10 );
         if (( *plVar2 != 0 ) && ( lVar4 = *(long*)( *plVar2 + 0x10 ) ),lVar4 != plVar2[1]) {
            do {
               cVar3 = String::operator <((String*)&local_78, (String*)( lVar4 + 0x30 ));
               if (cVar3 == '\0') {
                  cVar3 = String::operator <((String*)( lVar4 + 0x30 ), (String*)&local_78);
                  if (cVar3 == '\0') {
                     bVar5 = lVar4 == 0;
                     goto LAB_001074d6;
                  }

                  lVar4 = *(long*)( lVar4 + 8 );
               }
 else {
                  lVar4 = *(long*)( lVar4 + 0x10 );
               }

            }
 while ( plVar2[1] != lVar4 );
         }

         bVar5 = true;
         LAB_001074d6:start_branch_condition(this, param_1, bVar5, false);
         if (*(char*)( *(long*)( this + 0x10 ) + 0x78 ) != '\0') {
            add_region(this, iVar1 + 1, bVar5, *(Region**)( *(long*)( this + 0x10 ) + 0x98 ));
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ShaderPreprocessor::process_directive(ShaderPreprocessor::Tokenizer*) */void ShaderPreprocessor::process_directive(ShaderPreprocessor *this, Tokenizer *param_1) {
   int iVar1;
   char cVar2;
   long in_FS_OFFSET;
   char local_61;
   String local_60[8];
   undefined8 local_58;
   undefined8 local_50;
   String local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Tokenizer::get_identifier((bool*)local_60, SUB81(param_1, 0));
   if (local_61 != '\0') {
      *(undefined4*)( *(long*)( this + 0x10 ) + 0xa4 ) = 1;
   }

   cVar2 = String::operator ==(local_60, "if");
   if (cVar2 == '\0') {
      cVar2 = String::operator ==(local_60, "ifdef");
      if (cVar2 == '\0') {
         cVar2 = String::operator ==(local_60, "ifndef");
         if (cVar2 == '\0') {
            cVar2 = String::operator ==(local_60, "elif");
            if (cVar2 == '\0') {
               cVar2 = String::operator ==(local_60, "else");
               if (cVar2 == '\0') {
                  cVar2 = String::operator ==(local_60, "endif");
                  if (cVar2 == '\0') {
                     cVar2 = String::operator ==(local_60, "error");
                     if (cVar2 == '\0') {
                        cVar2 = String::operator ==(local_60, "define");
                        if (cVar2 == '\0') {
                           cVar2 = String::operator ==(local_60, "undef");
                           if (cVar2 == '\0') {
                              cVar2 = String::operator ==(local_60, "include");
                              if (cVar2 == '\0') {
                                 cVar2 = String::operator ==(local_60, "pragma");
                                 if (cVar2 == '\0') {
                                    iVar1 = *(int*)( param_1 + 8 );
                                    local_50 = 0;
                                    String::parse_latin1((String*)&local_50, "");
                                    local_58 = 0;
                                    String::parse_latin1((String*)&local_58, "Unknown directive.");
                                    RTR(local_48, (String*)&local_58);
                                    set_error(this, local_48, iVar1);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                                 }
 else {
                                    process_pragma(this, param_1);
                                 }

                              }
 else {
                                 process_include(this, param_1);
                              }

                           }
 else {
                              process_undef(this, param_1);
                           }

                        }
 else {
                           process_define(this, param_1);
                        }

                     }
 else {
                        process_error(this, param_1);
                     }

                  }
 else {
                     process_endif(this, param_1);
                  }

               }
 else {
                  process_else(this, param_1);
               }

            }
 else {
               process_elif(this, param_1);
            }

         }
 else {
            process_ifndef(this, param_1);
         }

      }
 else {
         process_ifdef(this, param_1);
      }

   }
 else {
      process_if(this, param_1);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::preprocess(ShaderPreprocessor::State*, String const&, String&) */undefined4 ShaderPreprocessor::preprocess(ShaderPreprocessor *this, State *param_1, String *param_2, String *param_3) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   bool bVar5;
   int iVar6;
   int iVar7;
   uint uVar8;
   long lVar9;
   long *plVar10;
   ulong uVar11;
   void *pvVar12;
   undefined1(*pauVar13)[16];
   long lVar14;
   long *plVar15;
   undefined4 uVar16;
   long in_FS_OFFSET;
   String *local_100;
   uint local_ec;
   long local_d0;
   long local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   long local_b0;
   char *local_a8;
   undefined8 local_a0;
   undefined4 local_98;
   undefined8 local_90;
   void *local_88;
   undefined8 local_78;
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   LocalVector<char32_t,unsigned_int,false,false>::resize((LocalVector<char32_t,unsigned_int,false,false>*)this, 0);
   lVar14 = *(long*)param_2;
   *(State**)( this + 0x10 ) = param_1;
   local_78 = 0;
   local_70 = (undefined1[16])0x0;
   if (lVar14 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( local_70 + 8 ), (CowData*)param_2);
   }

   local_50 = 0;
   local_60 = (undefined1[16])0x0;
   CommentRemover::strip();
   local_c8 = 0;
   if (local_60._12_4_ == 0) {
      local_a0 = 0;
      local_a8 = "";
      String::parse_latin1((StrRange*)&local_c8);
      if (( local_c8 == 0 ) || ( *(uint*)( local_c8 + -8 ) < 2 )) goto LAB_001079a3;
      iVar7 = -1;
   }
 else {
      local_a0 = 0x16;
      local_a8 = "Block comment mismatch";
      String::parse_latin1((StrRange*)&local_c8);
      if (( local_c8 == 0 ) || ( iVar7 = local_60._8_4_ * (uint*)( local_c8 + -8 ) < 2 )) {
         LAB_001079a3:lVar9 = String::hash64();
         lVar14 = *(long*)( this + 0x10 );
         if (*(long*)( lVar14 + 0x48 ) == 0) {
            pauVar13 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])( lVar14 + 0x48 ) = pauVar13;
            *(undefined4*)pauVar13[1] = 0;
            *pauVar13 = (undefined1[16])0x0;
         }

         plVar10 = (long*)operator_new(0x20, DefaultAllocator::alloc);
         plVar2 = *(long**)( lVar14 + 0x48 );
         plVar10[1] = 0;
         lVar14 = plVar2[1];
         *plVar10 = lVar9;
         plVar10[3] = (long)plVar2;
         plVar10[2] = lVar14;
         if (lVar14 != 0) {
            *(long**)( lVar14 + 8 ) = plVar10;
         }

         plVar2[1] = (long)plVar10;
         if (*plVar2 == 0) {
            *plVar2 = (long)plVar10;
         }

         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
         local_a8 = (char*)0x0;
         local_90 = 0;
         local_88 = (void*)0x0;
         if (( local_d0 == 0 ) || ( CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)&local_d0),local_a8 == (char*)0x0 )) {
            local_98 = 0;
         }
 else {
            local_98 = *(undefined4*)( local_a8 + -8 );
         }

         local_a0 = 0;
         bVar5 = false;
         local_ec = 0;
         do {
            while (true) {
               iVar7 = Tokenizer::get_token((Tokenizer*)&local_a8);
               if (iVar7 == 0) {
                  lVar14 = *(long*)( this + 0x10 );
                  plVar2 = *(long**)( lVar14 + 0x48 );
                  if (( plVar2 == (long*)0x0 ) || ( plVar10 = (long*)*plVar2 ),plVar15 = plVar10,plVar10 == (long*)0x0) goto LAB_00107d08;
                  goto LAB_00107ca9;
               }

               Tokenizer::get_and_clear_generated((Tokenizer*)&local_a8, (LocalVector*)this);
               if (*(char*)( *(long*)( this + 0x10 ) + 0xa0 ) == '\0') break;
               uVar8 = *(uint*)this;
               pvVar12 = *(void**)( this + 8 );
               if (uVar8 == *(uint*)( this + 4 )) {
                  uVar11 = ( ulong )(uVar8 * 2);
                  if (uVar8 * 2 == 0) {
                     uVar11 = 1;
                  }

                  *(int*)( this + 4 ) = (int)uVar11;
                  pvVar12 = (void*)Memory::realloc_static(pvVar12, uVar11 * 4, false);
                  *(void**)( this + 8 ) = pvVar12;
                  if (pvVar12 == (void*)0x0) goto LAB_00107dc8;
                  uVar8 = *(uint*)this;
               }

               *(uint*)this = uVar8 + 1;
               *(int*)( (long)pvVar12 + (ulong)uVar8 * 4 ) = iVar7;
            }
;
            iVar6 = (int)local_a0;
            if (iVar7 == 0x23) {
               if (bVar5) {
                  local_b8 = 0;
                  String::parse_latin1((String*)&local_b8, "");
                  local_c0 = 0;
                  String::parse_latin1((String*)&local_c0, "Invalid symbols placed before directive.");
                  RTR((String*)&local_b0, (String*)&local_c0);
                  set_error(this, (String*)&local_b0, iVar6);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                  lVar14 = *(long*)( this + 0x10 );
                  plVar2 = *(long**)( lVar14 + 0x48 );
                  if (( plVar2 == (long*)0x0 ) || ( plVar10 = (long*)*plVar2 ),plVar15 = plVar10,plVar10 == (long*)0x0) goto LAB_00107e9e;
                  goto LAB_00107f8d;
               }

               process_directive(this, (Tokenizer*)&local_a8);
            }
 else {
               if (iVar7 == 10) {
                  bVar5 = false;
                  expand_output_macros(this, local_ec, (int)local_a0);
                  uVar8 = *(uint*)this;
                  uVar11 = (ulong)uVar8;
                  pvVar12 = *(void**)( this + 8 );
                  local_ec = uVar8;
                  if (*(uint*)( this + 4 ) == uVar8) goto LAB_00107c00;
               }
 else {
                  uVar8 = *(uint*)this;
                  uVar11 = (ulong)uVar8;
                  if (( iVar7 != 0x20 ) && ( iVar7 != 9 )) {
                     bVar5 = true;
                  }

                  pvVar12 = *(void**)( this + 8 );
                  if (*(uint*)( this + 4 ) == uVar8) {
                     LAB_00107c00:uVar11 = ( ulong )(uVar8 * 2);
                     if (uVar8 * 2 == 0) {
                        uVar11 = 1;
                     }

                     *(int*)( this + 4 ) = (int)uVar11;
                     pvVar12 = (void*)Memory::realloc_static(pvVar12, uVar11 * 4, false);
                     *(void**)( this + 8 ) = pvVar12;
                     if (pvVar12 == (void*)0x0) {
                        LAB_00107dc8:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar4 = (code*)invalidInstructionException();
                        ( *pcVar4 )();
                     }

                     uVar11 = ( ulong ) * (uint*)this;
                  }

               }

               *(int*)this = (int)uVar11 + 1;
               *(int*)( (long)pvVar12 + uVar11 * 4 ) = iVar7;
            }

            lVar14 = *(long*)( this + 0x10 );
         }
 while ( ( *(long*)( lVar14 + 0x68 ) == 0 ) || ( *(uint*)( *(long*)( lVar14 + 0x68 ) + -8 ) < 2 ) );
         plVar2 = *(long**)( lVar14 + 0x48 );
         if (plVar2 != (long*)0x0) {
            for (plVar10 = (long*)*plVar2; plVar10 != (long*)0x0; plVar10 = (long*)plVar10[1]) {
               if (lVar9 == *plVar10) {
                  if (plVar2 == (long*)plVar10[3]) {
                     lVar9 = plVar10[1];
                     if (plVar10 == (long*)*plVar2) {
                        *plVar2 = lVar9;
                     }

                     lVar3 = plVar10[2];
                     if (plVar10 == (long*)plVar2[1]) {
                        plVar2[1] = lVar3;
                     }

                     if (lVar3 != 0) {
                        *(long*)( lVar3 + 8 ) = lVar9;
                        lVar9 = plVar10[1];
                     }

                     if (lVar9 != 0) {
                        *(long*)( lVar9 + 0x10 ) = lVar3;
                     }

                     Memory::free_static(plVar10, false);
                     *(int*)( plVar2 + 2 ) = (int)plVar2[2] + -1;
                  }
 else {
                     _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                  }

                  if (*(int*)( (long)*(void**)( lVar14 + 0x48 ) + 0x10 ) == 0) {
                     Memory::free_static(*(void**)( lVar14 + 0x48 ), false);
                     *(undefined8*)( lVar14 + 0x48 ) = 0;
                  }

                  break;
               }

            }

         }

         goto LAB_00107e9e;
      }

   }

   local_100 = (String*)&local_c8;
   uVar16 = 1;
   set_error(this, local_100, iVar7);
   goto LAB_001078df;
   while (plVar1 = plVar15 + 1,plVar15 = (long*)*plVar1,(long*)*plVar1 != (long*)0x0) {
      LAB_00107ca9:if (lVar9 == *plVar15) {
         if (plVar2 == (long*)plVar15[3]) {
            lVar9 = plVar15[1];
            if (plVar15 == plVar10) {
               *plVar2 = lVar9;
            }

            lVar3 = plVar15[2];
            if (plVar15 == (long*)plVar2[1]) {
               plVar2[1] = lVar3;
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 8 ) = lVar9;
               lVar9 = plVar15[1];
            }

            if (lVar9 != 0) {
               *(long*)( lVar9 + 0x10 ) = lVar3;
            }

            Memory::free_static(plVar15, false);
            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         if (*(int*)( (long)*(void**)( lVar14 + 0x48 ) + 0x10 ) == 0) {
            Memory::free_static(*(void**)( lVar14 + 0x48 ), false);
            *(undefined8*)( lVar14 + 0x48 ) = 0;
         }

         lVar14 = *(long*)( this + 0x10 );
         break;
      }

   }
;
   LAB_00107d08:if (*(char*)( lVar14 + 0xa0 ) == '\0') {
      iVar7 = (int)local_a0;
      if (*(int*)( lVar14 + 0x28 ) != 0) {
         local_b8 = 0;
         String::parse_latin1((String*)&local_b8, "");
         local_c0 = 0;
         String::parse_latin1((String*)&local_c0, "Unmatched conditional statement.");
         RTR((String*)&local_b0, (String*)&local_c0);
         set_error(this, (String*)&local_b0, iVar7);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         goto LAB_00107e9e;
      }

      expand_output_macros(this, local_ec, (int)local_a0);
   }

   vector_to_string((ShaderPreprocessor*)&local_b0, (LocalVector*)this, 0, -1);
   if (*(long*)param_3 != local_b0) {
      CowData<char32_t>::_unref((CowData<char32_t>*)param_3);
      *(long*)param_3 = local_b0;
      local_b0 = 0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   uVar16 = 0;
   goto LAB_00107d70;
   while (plVar1 = plVar15 + 1,plVar15 = (long*)*plVar1,(long*)*plVar1 != (long*)0x0) {
      LAB_00107f8d:if (lVar9 == *plVar15) {
         if (plVar2 == (long*)plVar15[3]) {
            lVar9 = plVar15[1];
            if (plVar15 == plVar10) {
               *plVar2 = lVar9;
            }

            lVar3 = plVar15[2];
            if (plVar15 == (long*)plVar2[1]) {
               plVar2[1] = lVar3;
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 8 ) = lVar9;
               lVar9 = plVar15[1];
            }

            if (lVar9 != 0) {
               *(long*)( lVar9 + 0x10 ) = lVar3;
            }

            Memory::free_static(plVar15, false);
            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         if (*(int*)( (long)*(void**)( lVar14 + 0x48 ) + 0x10 ) == 0) {
            Memory::free_static(*(void**)( lVar14 + 0x48 ), false);
            *(undefined8*)( lVar14 + 0x48 ) = 0;
         }

         break;
      }

   }
;
   LAB_00107e9e:uVar16 = 1;
   LAB_00107d70:if (( local_88 != (void*)0x0 ) && ( LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>::resize((LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_90, 0),local_88 != (void*)0x0 )) {
      Memory::free_static(local_88, false);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   LAB_001078df:local_100 = (String*)&local_c8;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)( local_70 + 8 ));
   if (local_70._0_8_ != 0) {
      LocalVector<char32_t,unsigned_int,false,false>::resize((LocalVector<char32_t,unsigned_int,false,false>*)&local_78, 0);
      if ((void*)local_70._0_8_ != (void*)0x0) {
         Memory::free_static((void*)local_70._0_8_, false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar16;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::process_include(ShaderPreprocessor::Tokenizer*) */void ShaderPreprocessor::process_include(ShaderPreprocessor *this, Tokenizer *param_1) {
   undefined8 uVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   char cVar5;
   int iVar6;
   long lVar7;
   undefined4 *puVar8;
   Element *pEVar9;
   Element *pEVar10;
   CowData<char32_t> *pCVar11;
   Element *pEVar12;
   undefined4 *puVar13;
   undefined1(*pauVar14)[16];
   long lVar15;
   Element *pEVar16;
   RBSet<String,Comparator<String>,DefaultAllocator> *this_00;
   int iVar17;
   wchar32 wVar18;
   long in_FS_OFFSET;
   bool bVar19;
   Ref<ShaderInclude> *local_e8;
   CowData *local_d0;
   undefined4 local_bc;
   long local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined1 local_50[16];
   long local_40;
   iVar17 = *(int*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   wVar18 = (wchar32)(LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_58;
   Tokenizer::advance(wVar18);
   if (local_50._0_8_ != 0) {
      LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>::resize((LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_58, 0);
      if ((void*)local_50._0_8_ != (void*)0x0) {
         Memory::free_static((void*)local_50._0_8_, false);
      }

   }

   Tokenizer::advance(wVar18);
   tokens_to_string((ShaderPreprocessor*)&local_b8, (LocalVector*)&local_58);
   if (local_50._0_8_ != 0) {
      LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>::resize((LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_58, 0);
      if ((void*)local_50._0_8_ != (void*)0x0) {
         Memory::free_static((void*)local_50._0_8_, false);
      }

   }

   if (local_b8 != 0) {
      lVar7 = *(long*)( local_b8 + -8 );
      if ((int)lVar7 != 0) {
         for (lVar15 = 0; (int)lVar15 < (int)lVar7 + -1; lVar15 = lVar15 + 1) {
            if (lVar7 != lVar15) {
               if (lVar7 <= lVar15) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar15, lVar7, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

               iVar6 = *(int*)( local_b8 + lVar15 * 4 );
               if (iVar6 == 10) break;
               if (iVar6 == 0xffff) {
                  *(undefined4*)( *(long*)( this + 0x10 ) + 0xa4 ) = 5;
                  break;
               }

            }

         }

      }

   }

   String::substr(wVar18, (int)(ShaderPreprocessor*)&local_b8);
   if (local_b8 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      local_b8 = local_58;
      local_58 = 0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( ( local_b8 == 0 ) || ( *(uint*)( local_b8 + -8 ) < 2 ) ) || ( cVar5 = Tokenizer::consume_empty_line() ),cVar5 == '\0') {
      local_68 = 0;
      String::parse_latin1((String*)&local_68, "");
      local_70 = 0;
      String::parse_latin1((String*)&local_70, "Invalid path.");
      RTR((String*)&local_58, (String*)&local_70);
      set_error(this, (String*)&local_58, iVar17);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      goto LAB_0010826b;
   }

   String::simplify_path();
   if (local_b8 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      local_b8 = local_58;
      local_58 = 0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   cVar5 = String::is_relative_path();
   if (cVar5 != '\0') {
      String::get_base_dir();
      String::path_join((String*)&local_58);
      if (local_b8 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         local_b8 = local_58;
         local_58 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }

   local_58 = 0;
   String::parse_latin1((String*)&local_58, "");
   cVar5 = ResourceLoader::exists((String*)&local_b8, (String*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (cVar5 == '\0') {
      local_70 = 0;
      String::parse_latin1((String*)&local_70, " ");
      local_80 = 0;
      String::parse_latin1((String*)&local_80, "");
      local_88 = 0;
      String::parse_latin1((String*)&local_88, "Shader include file does not exist:");
      RTR((String*)&local_78, (String*)&local_88);
      String::operator +((String*)&local_68, (String*)&local_78);
      String::operator +((String*)&local_58, (String*)&local_68);
      set_error(this, (String*)&local_58, iVar17);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      goto LAB_0010826b;
   }

   local_58 = 0;
   String::parse_latin1((String*)&local_58, "");
   ResourceLoader::load((Ref<Resource>*)&local_b0, (ShaderPreprocessor*)&local_b8, (LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>*)&local_58, 1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (local_b0 == 0) {
      local_68 = 0;
      String::parse_latin1((String*)&local_68, "");
      local_70 = 0;
      String::parse_latin1((String*)&local_70, "Shader include load failed. Does the shader include exist? Is there a cyclic dependency?");
      RTR((String*)&local_58, (String*)&local_70);
      set_error(this, (String*)&local_58, iVar17);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }
 else {
      local_a8 = 0;
      lVar7 = __dynamic_cast(local_b0, &Object::typeinfo, &ShaderInclude::typeinfo, 0);
      if (lVar7 == 0) {
         LAB_001083ee:local_68 = 0;
         String::parse_latin1((String*)&local_68, "");
         local_70 = 0;
         String::parse_latin1((String*)&local_70, "Shader include resource type is wrong.");
         RTR((String*)&local_58, (String*)&local_70);
         set_error(this, (String*)&local_58, iVar17);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      }
 else {
         local_58 = 0;
         local_a8 = lVar7;
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            local_a8 = 0;
            Ref<ShaderInclude>::unref((Ref<ShaderInclude>*)&local_58);
            goto LAB_001083ee;
         }

         Ref<ShaderInclude>::unref((Ref<ShaderInclude>*)&local_58);
         ShaderInclude::get_code();
         if (( local_a0 != 0 ) && ( 1 < *(uint*)( local_a0 + -8 ) )) {
            lVar7 = String::hash64();
            if (*(undefined8**)( *(long*)( this + 0x10 ) + 0x48 ) != (undefined8*)0x0) {
               for (plVar2 = (long*)**(undefined8**)( *(long*)( this + 0x10 ) + 0x48 ); plVar2 != (long*)0x0; plVar2 = (long*)plVar2[1]) {
                  if (lVar7 == *plVar2) {
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, ": ");
                     local_80 = 0;
                     String::parse_latin1((String*)&local_80, "");
                     local_88 = 0;
                     String::parse_latin1((String*)&local_88, "Cyclic include found");
                     RTR((String*)&local_78, (String*)&local_88);
                     String::operator +((String*)&local_68, (String*)&local_78);
                     String::operator +((String*)&local_58, (String*)&local_68);
                     set_error(this, (String*)&local_58, iVar17);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     goto LAB_00108890;
                  }

               }

            }

         }

         HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>::insert((Ref*)&local_58);
         Resource::get_path();
         lVar7 = *(long*)( this + 0x10 );
         puVar13 = *(undefined4**)( lVar7 + 0x30 );
         if (puVar13 == (undefined4*)0x0) {
            this_00 = (RBSet<String,Comparator<String>,DefaultAllocator>*)( lVar7 + 0x30 );
            LAB_00108f39:puVar13 = (undefined4*)operator_new(0x38, DefaultAllocator::alloc);
            *(undefined1(*) [16])( puVar13 + 8 ) = (undefined1[16])0x0;
            uVar1 = *(undefined8*)( lVar7 + 0x38 );
            *(undefined8*)( puVar13 + 0xc ) = 0;
            *(undefined4**)( lVar7 + 0x30 ) = puVar13;
            *puVar13 = 1;
            *(undefined8*)( puVar13 + 6 ) = uVar1;
            *(undefined8*)( puVar13 + 2 ) = uVar1;
            *(undefined8*)( puVar13 + 4 ) = uVar1;
         }
 else {
            lVar15 = *(long*)( puVar13 + 4 );
            if (*(long*)( lVar7 + 0x38 ) == lVar15) {
               this_00 = (RBSet<String,Comparator<String>,DefaultAllocator>*)( lVar7 + 0x30 );
            }
 else {
               do {
                  cVar5 = String::operator <((String*)&local_98, (String*)( lVar15 + 0x30 ));
                  if (cVar5 == '\0') {
                     cVar5 = String::operator <((String*)( lVar15 + 0x30 ), (String*)&local_98);
                     if (cVar5 == '\0') {
                        if (lVar15 != 0) goto LAB_0010891a;
                        break;
                     }

                     lVar15 = *(long*)( lVar15 + 8 );
                  }
 else {
                     lVar15 = *(long*)( lVar15 + 0x10 );
                  }

               }
 while ( *(long*)( lVar7 + 0x38 ) != lVar15 );
               lVar7 = *(long*)( this + 0x10 );
               puVar13 = *(undefined4**)( lVar7 + 0x30 );
               this_00 = (RBSet<String,Comparator<String>,DefaultAllocator>*)( lVar7 + 0x30 );
               if (puVar13 == (undefined4*)0x0) goto LAB_00108f39;
               puVar8 = *(undefined4**)( puVar13 + 4 );
               if (*(undefined4**)( lVar7 + 0x38 ) != *(undefined4**)( puVar13 + 4 )) {
                  do {
                     puVar13 = puVar8;
                     cVar5 = String::operator <((String*)&local_98, (String*)( puVar13 + 0xc ));
                     if (cVar5 == '\0') {
                        cVar5 = String::operator <((String*)( puVar13 + 0xc ), (String*)&local_98);
                        if (cVar5 == '\0') goto LAB_00108a4d;
                        puVar8 = *(undefined4**)( puVar13 + 2 );
                     }
 else {
                        puVar8 = *(undefined4**)( puVar13 + 4 );
                     }

                  }
 while ( *(undefined4**)( lVar7 + 0x38 ) != puVar8 );
               }

            }

         }

         pEVar9 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
         *(undefined1(*) [16])( pEVar9 + 0x20 ) = (undefined1[16])0x0;
         uVar1 = *(undefined8*)( lVar7 + 0x38 );
         *(undefined4*)pEVar9 = 0;
         *(undefined8*)( pEVar9 + 0x30 ) = 0;
         *(undefined4**)( pEVar9 + 0x18 ) = puVar13;
         *(undefined8*)( pEVar9 + 8 ) = uVar1;
         *(undefined8*)( pEVar9 + 0x10 ) = uVar1;
         if (local_98 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( pEVar9 + 0x30 ), (CowData*)&local_98);
         }

         if (( puVar13 == *(undefined4**)( lVar7 + 0x30 ) ) || ( cVar5 = String::operator <((String*)&local_98, (String*)( puVar13 + 0xc )) ),cVar5 != '\0') {
            *(Element**)( puVar13 + 4 ) = pEVar9;
         }
 else {
            *(Element**)( puVar13 + 2 ) = pEVar9;
         }

         pEVar12 = pEVar9;
         pEVar16 = *(Element**)( pEVar9 + 8 );
         if (*(Element**)( lVar7 + 0x38 ) == *(Element**)( pEVar9 + 8 )) {
            do {
               pEVar10 = *(Element**)( pEVar12 + 0x18 );
               bVar19 = pEVar12 == *(Element**)( pEVar10 + 8 );
               pEVar12 = pEVar10;
            }
 while ( bVar19 );
            if (*(Element**)( lVar7 + 0x30 ) == pEVar10) {
               pEVar10 = (Element*)0x0;
            }

         }
 else {
            do {
               pEVar12 = pEVar16 + 0x10;
               pEVar10 = pEVar16;
               pEVar16 = *(Element**)pEVar12;
            }
 while ( *(Element**)( lVar7 + 0x38 ) != *(Element**)pEVar12 );
         }

         *(Element**)( pEVar9 + 0x20 ) = pEVar10;
         pEVar12 = pEVar9;
         pEVar16 = *(Element**)( pEVar9 + 0x10 );
         if (*(Element**)( lVar7 + 0x38 ) == *(Element**)( pEVar9 + 0x10 )) {
            do {
               pEVar16 = pEVar12;
               pEVar12 = *(Element**)( pEVar16 + 0x18 );
            }
 while ( pEVar16 == *(Element**)( pEVar12 + 0x10 ) );
            if (*(Element**)( lVar7 + 0x30 ) != pEVar16) goto LAB_00108a22;
            *(undefined8*)( pEVar9 + 0x28 ) = 0;
            if (pEVar10 != (Element*)0x0) goto LAB_00108a2c;
         }
 else {
            do {
               pEVar12 = pEVar16;
               pEVar16 = *(Element**)( pEVar12 + 8 );
            }
 while ( *(Element**)( lVar7 + 0x38 ) != *(Element**)( pEVar12 + 8 ) );
            LAB_00108a22:*(Element**)( pEVar9 + 0x28 ) = pEVar12;
            if (pEVar10 != (Element*)0x0) {
               LAB_00108a2c:*(Element**)( pEVar10 + 0x28 ) = pEVar9;
               pEVar12 = *(Element**)( pEVar9 + 0x28 );
               if (pEVar12 == (Element*)0x0) goto LAB_00108a3e;
            }

            *(Element**)( pEVar12 + 0x20 ) = pEVar9;
         }

         LAB_00108a3e:*(int*)( lVar7 + 0x40 ) = *(int*)( lVar7 + 0x40 ) + 1;
         RBSet<String,Comparator<String>,DefaultAllocator>::_insert_rb_fix(this_00, pEVar9);
         LAB_00108a4d:lVar7 = *(long*)( this + 0x10 );
         iVar6 = *(int*)( lVar7 + 0x50 ) + 1;
         *(int*)( lVar7 + 0x50 ) = iVar6;
         if (iVar6 < 0x1a) {
            local_90 = 0;
            if (*(long*)( lVar7 + 0x58 ) == 0) {
               if (local_98 != 0) goto LAB_00108a9c;
               local_58 = 0;
               local_50 = (undefined1[16])0x0;
               local_bc = *(undefined4*)( lVar7 + 0x28 );
               *(undefined4*)( lVar7 + 0x28 ) = 0;
               local_68 = 0;
               lVar15 = 0;
            }
 else {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)( lVar7 + 0x58 ));
               lVar7 = *(long*)( this + 0x10 );
               lVar15 = *(long*)( lVar7 + 0x58 );
               if (local_98 != lVar15) {
                  LAB_00108a9c:CowData<char32_t>::_ref((CowData<char32_t>*)( lVar7 + 0x58 ), (CowData*)&local_98);
                  lVar7 = *(long*)( this + 0x10 );
                  lVar15 = *(long*)( lVar7 + 0x58 );
               }

               local_58 = 0;
               local_50 = (undefined1[16])0x0;
               local_bc = *(undefined4*)( lVar7 + 0x28 );
               *(undefined4*)( lVar7 + 0x28 ) = 0;
               local_68 = 0;
               local_60 = 0;
               if (lVar15 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)( lVar7 + 0x58 ));
                  lVar7 = *(long*)( this + 0x10 );
                  lVar15 = local_68;
               }

            }

            local_d0 = (CowData*)&local_90;
            iVar17 = iVar17 + 1;
            local_60 = iVar17;
            if (*(long*)( lVar7 + 0x70 ) == 0) {
               pauVar14 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( lVar7 + 0x70 ) = pauVar14;
               *(undefined4*)pauVar14[1] = 0;
               *pauVar14 = (undefined1[16])0x0;
            }

            pCVar11 = (CowData<char32_t>*)operator_new(0x28, DefaultAllocator::alloc);
            *(undefined8*)pCVar11 = 0;
            *(undefined4*)( pCVar11 + 8 ) = 0;
            *(undefined8*)( pCVar11 + 0x20 ) = 0;
            *(undefined1(*) [16])( pCVar11 + 0x10 ) = (undefined1[16])0x0;
            if (lVar15 != 0) {
               CowData<char32_t>::_ref(pCVar11, (CowData*)&local_68);
            }

            plVar2 = *(long**)( lVar7 + 0x70 );
            *(int*)( pCVar11 + 8 ) = iVar17;
            lVar7 = plVar2[1];
            *(undefined8*)( pCVar11 + 0x10 ) = 0;
            *(long**)( pCVar11 + 0x20 ) = plVar2;
            *(long*)( pCVar11 + 0x18 ) = lVar7;
            if (lVar7 != 0) {
               *(CowData<char32_t>**)( lVar7 + 0x10 ) = pCVar11;
            }

            plVar2[1] = (long)pCVar11;
            if (*plVar2 == 0) {
               *plVar2 = (long)pCVar11;
            }

            *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
            local_88 = 0;
            preprocess((ShaderPreprocessor*)&local_58, *(State**)( this + 0x10 ), (String*)&local_a0, (String*)&local_88);
            local_78 = 0;
            String::parse_latin1((String*)&local_78, "\n");
            operator+((char *)&
            local_80,(String*)&_LC104;
            String::operator +((String*)&local_70, (String*)&local_80);
            add_to_output(this, (String*)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            add_to_output(this, (String*)&local_88);
            local_78 = 0;
            String::parse_latin1((String*)&local_78, "\n");
            operator+((char *)&
            local_80,(String*)&_LC105;
            String::operator +((String*)&local_70, (String*)&local_80);
            add_to_output(this, (String*)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            lVar7 = *(long*)( this + 0x10 );
            if (( *(long*)( lVar7 + 0x68 ) == 0 ) || ( *(uint*)( *(long*)( lVar7 + 0x68 ) + -8 ) < 2 )) {
               if (*(long*)( lVar7 + 0x58 ) != local_90) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( lVar7 + 0x58 ), local_d0);
                  lVar7 = *(long*)( this + 0x10 );
               }

               plVar2 = *(long**)( lVar7 + 0x70 );
               if (( plVar2 != (long*)0x0 ) && ( pCVar11 = (CowData<char32_t>*)plVar2[1] ),pCVar11 != (CowData<char32_t>*)0x0) {
                  if (plVar2 == *(long**)( pCVar11 + 0x20 )) {
                     lVar15 = *(long*)( pCVar11 + 0x10 );
                     if (pCVar11 == (CowData<char32_t>*)*plVar2) {
                        *plVar2 = lVar15;
                     }

                     lVar3 = *(long*)( pCVar11 + 0x18 );
                     plVar2[1] = lVar3;
                     if (lVar3 != 0) {
                        *(long*)( lVar3 + 0x10 ) = lVar15;
                        lVar15 = *(long*)( pCVar11 + 0x10 );
                     }

                     if (lVar15 != 0) {
                        *(long*)( lVar15 + 0x18 ) = lVar3;
                     }

                     CowData<char32_t>::_unref(pCVar11);
                     Memory::free_static(pCVar11, false);
                     *(int*)( plVar2 + 2 ) = (int)plVar2[2] + -1;
                  }
 else {
                     _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                  }

                  if (*(int*)( (long)*(void**)( lVar7 + 0x70 ) + 0x10 ) == 0) {
                     Memory::free_static(*(void**)( lVar7 + 0x70 ), false);
                     *(undefined8*)( lVar7 + 0x70 ) = 0;
                  }

                  lVar7 = *(long*)( this + 0x10 );
               }

               *(int*)( lVar7 + 0x50 ) = *(int*)( lVar7 + 0x50 ) + -1;
               *(undefined4*)( lVar7 + 0x28 ) = local_bc;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            ~ShaderPreprocessor((ShaderPreprocessor *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
         }
 else {
            local_68 = 0;
            String::parse_latin1((String*)&local_68, "");
            local_70 = 0;
            String::parse_latin1((String*)&local_70, "Shader max include depth exceeded.");
            RTR((String*)&local_58, (String*)&local_70);
            set_error(this, (String*)&local_58, iVar17);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         }

         LAB_0010891a:CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         LAB_00108890:CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      }

      local_e8 = (Ref<ShaderInclude>*)&local_a8;
      Ref<ShaderInclude>::unref(local_e8);
   }

   Ref<Resource>::unref((Ref<Resource>*)&local_b0);
   LAB_0010826b:CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::preprocess(String const&, String const&, String&, String*,
   List<ShaderPreprocessor::FilePosition, DefaultAllocator>*, List<ShaderPreprocessor::Region,
   DefaultAllocator>*, HashSet<Ref<ShaderInclude>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<ShaderInclude> > >*, List<ScriptLanguage::CodeCompletionOption,
   DefaultAllocator>*, List<ScriptLanguage::CodeCompletionOption, DefaultAllocator>*, void
   (*)(List<ScriptLanguage::CodeCompletionOption, DefaultAllocator>*)) */int ShaderPreprocessor::preprocess(ShaderPreprocessor *this, String *param_1, String *param_2, String *param_3, String *param_4, List *param_5, List *param_6, HashSet *param_7, List *param_8, List *param_9, _func_void_List_ptr *param_10) {
   long lVar1;
   undefined8 uVar2;
   Object *pOVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   CowData<char32_t> *pCVar7;
   long *plVar8;
   undefined8 *puVar9;
   undefined1(*pauVar10)[16];
   CowData *pCVar11;
   long lVar12;
   long in_FS_OFFSET;
   List *local_228;
   State *local_1f8;
   undefined8 local_1c0;
   long *local_1b8;
   undefined8 local_1b0;
   char *local_1a8;
   undefined8 local_1a0;
   undefined8 local_198;
   undefined8 *local_190;
   undefined4 local_188;
   undefined1 local_180[16];
   undefined4 local_170;
   undefined8 local_168;
   undefined8 *local_160;
   undefined4 local_158;
   undefined8 local_150;
   undefined4 local_148;
   CowData<char32_t> local_140[16];
   undefined1 local_130[16];
   bool local_120;
   long local_118;
   undefined8 *local_110;
   undefined4 local_108;
   undefined8 local_100;
   undefined1 local_f8;
   uint local_f4;
   HashSet local_f0[16];
   undefined1 local_e0[16];
   undefined8 local_d0;
   CodeCompletionOption local_c8[8];
   CowData<char32_t> local_c0[8];
   CowData<char32_t> local_b8[24];
   Object *local_a0;
   int local_98;
   long local_78;
   long local_68;
   CowData<char32_t> local_58[8];
   Array local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_198 = 0;
   local_188 = 0;
   local_190 = &_GlobalNilClass::_nil;
   local_160 = &_GlobalNilClass::_nil;
   local_110 = &_GlobalNilClass::_nil;
   local_170 = 0;
   local_168 = 0;
   local_158 = 0;
   local_150 = 0;
   local_148 = 0;
   local_120 = false;
   local_118 = 0;
   local_108 = 0;
   local_100 = 0;
   local_f8 = 0;
   local_f4 = 0;
   local_d0 = 2;
   local_180 = (undefined1[16])0x0;
   for (int i = 0; i < 16; i++) {
      local_140[i] = (CowData<char32_t>)0;
   }

   local_130 = (undefined1[16])0x0;
   for (int i = 0; i < 16; i++) {
      local_f0[i] = (HashSet)0;
   }

   local_e0 = (undefined1[16])0x0;
   if (( *(long*)param_2 != 0 ) && ( 1 < *(uint*)( *(long*)param_2 + -8 ) )) {
      CowData<char32_t>::_ref(local_140, (CowData*)param_2);
      local_120 = param_6 != (List*)0x0;
   }

   lVar6 = OS::get_singleton();
   local_1c0 = 0;
   if (*(long*)( lVar6 + 0x68 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1c0, (CowData*)( lVar6 + 0x68 ));
   }

   cVar4 = String::operator ==((String*)&local_1c0, "forward_plus");
   if (cVar4 == '\0') {
      cVar4 = String::operator ==((String*)&local_1c0, "mobile");
      local_1a8 = (char*)0x0;
      if (cVar4 == '\0') {
         String::parse_latin1((String*)&local_1a8, "0");
         local_1b0 = 0;
         String::parse_latin1((String*)&local_1b0, "CURRENT_RENDERER");
         insert_builtin_define(this, (String*)&local_1b0, (String*)&local_1a8, &local_198);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
      }
 else {
         String::parse_latin1((String*)&local_1a8, "1");
         local_1b0 = 0;
         String::parse_latin1((String*)&local_1b0, "CURRENT_RENDERER");
         insert_builtin_define(this, (String*)&local_1b0, (String*)&local_1a8, &local_198);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
      }

   }
 else {
      local_1a8 = (char*)0x0;
      String::parse_latin1((String*)&local_1a8, "2");
      local_1b0 = 0;
      String::parse_latin1((String*)&local_1b0, "CURRENT_RENDERER");
      insert_builtin_define(this, (String*)&local_1b0, (String*)&local_1a8, &local_198);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   }

   local_1f8 = (State*)&local_198;
   local_228 = (List*)&local_1a8;
   local_1a8 = &_LC114;
   local_1b0 = 0;
   local_1a0 = 1;
   String::parse_latin1((StrRange*)&local_1b0);
   local_1b8 = (long*)0x0;
   local_1a8 = "RENDERER_COMPATIBILITY";
   local_1a0 = 0x16;
   String::parse_latin1((StrRange*)&local_1b8);
   insert_builtin_define(this, (StrRange*)&local_1b8, (StrRange*)&local_1b0, local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
   local_1a8 = "1";
   local_1b0 = 0;
   local_1a0 = 1;
   String::parse_latin1((StrRange*)&local_1b0);
   local_1b8 = (long*)0x0;
   local_1a8 = "RENDERER_MOBILE";
   local_1a0 = 0xf;
   String::parse_latin1((StrRange*)&local_1b8);
   insert_builtin_define(this, (StrRange*)&local_1b8, (StrRange*)&local_1b0, local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
   local_1a8 = "2";
   local_1b0 = 0;
   local_1a0 = 1;
   String::parse_latin1((StrRange*)&local_1b0);
   local_1a8 = "RENDERER_FORWARD_PLUS";
   local_1b8 = (long*)0x0;
   local_1a0 = 0x15;
   String::parse_latin1((StrRange*)&local_1b8);
   insert_builtin_define(this, (StrRange*)&local_1b8, (StrRange*)&local_1b0, local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c0);
   iVar5 = preprocess(this, local_1f8, param_1, param_3);
   if (iVar5 != 0) {
      if (( param_4 != (String*)0x0 ) && ( *(long*)param_4 != local_130._0_8_ )) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_4, (CowData*)local_130);
      }

      if (param_5 != (List*)0x0) {
         plVar8 = *(long**)param_5;
         if (plVar8 != (long*)0x0) {
            do {
               pCVar7 = (CowData<char32_t>*)*plVar8;
               if (pCVar7 == (CowData<char32_t>*)0x0) goto LAB_00109550;
               if (*(long**)( pCVar7 + 0x20 ) == plVar8) {
                  lVar6 = *(long*)( pCVar7 + 0x10 );
                  lVar1 = *(long*)( pCVar7 + 0x18 );
                  *plVar8 = lVar6;
                  if (pCVar7 == (CowData<char32_t>*)plVar8[1]) {
                     plVar8[1] = lVar1;
                  }

                  if (lVar1 != 0) {
                     *(long*)( lVar1 + 0x10 ) = lVar6;
                     lVar6 = *(long*)( pCVar7 + 0x10 );
                  }

                  if (lVar6 != 0) {
                     *(long*)( lVar6 + 0x18 ) = lVar1;
                  }

                  CowData<char32_t>::_unref(pCVar7);
                  Memory::free_static(pCVar7, false);
                  *(int*)( plVar8 + 2 ) = (int)plVar8[2] + -1;
               }
 else {
                  _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
               }

               plVar8 = *(long**)param_5;
            }
 while ( (int)plVar8[2] != 0 );
            Memory::free_static(plVar8, false);
            *(undefined8*)param_5 = 0;
         }

         plVar8 = (long*)0x0;
         LAB_00109550:if (( (long*)local_130._8_8_ != (long*)0x0 ) && ( pCVar11 = *(CowData**)local_130._8_8_ ),pCVar11 != (CowData*)0x0) {
            if (plVar8 == (long*)0x0) {
               pauVar10 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])param_5 = pauVar10;
               *(undefined4*)pauVar10[1] = 0;
               *pauVar10 = (undefined1[16])0x0;
            }

            do {
               while (true) {
                  pCVar7 = (CowData<char32_t>*)operator_new(0x28, DefaultAllocator::alloc);
                  *(undefined8*)pCVar7 = 0;
                  lVar6 = *(long*)pCVar11;
                  *(undefined4*)( pCVar7 + 8 ) = 0;
                  *(undefined8*)( pCVar7 + 0x20 ) = 0;
                  *(undefined1(*) [16])( pCVar7 + 0x10 ) = (undefined1[16])0x0;
                  if (lVar6 != 0) {
                     CowData<char32_t>::_ref(pCVar7, pCVar11);
                  }

                  *(undefined4*)( pCVar7 + 8 ) = *(undefined4*)( pCVar11 + 8 );
                  plVar8 = *(long**)param_5;
                  lVar6 = plVar8[1];
                  *(undefined8*)( pCVar7 + 0x10 ) = 0;
                  *(long**)( pCVar7 + 0x20 ) = plVar8;
                  *(long*)( pCVar7 + 0x18 ) = lVar6;
                  if (lVar6 != 0) {
                     *(CowData<char32_t>**)( lVar6 + 0x10 ) = pCVar7;
                  }

                  plVar8[1] = (long)pCVar7;
                  if (*plVar8 != 0) break;
                  pCVar11 = *(CowData**)( pCVar11 + 0x10 );
                  *(int*)( plVar8 + 2 ) = (int)plVar8[2] + 1;
                  *plVar8 = (long)pCVar7;
                  if (pCVar11 == (CowData*)0x0) goto LAB_0010962f;
               }
;
               pCVar11 = *(CowData**)( pCVar11 + 0x10 );
               *(int*)( plVar8 + 2 ) = (int)plVar8[2] + 1;
            }
 while ( pCVar11 != (CowData*)0x0 );
         }

      }

   }

   LAB_0010962f:if (param_6 != (List*)0x0) {
      if (( local_118 == 0 ) && ( RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>::_Data::_create_root((_Data*)&local_118),local_118 == 0 )) {
         LAB_00109ded:local_1a8 = (char*)0x0;
         RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>::_Data::_create_root((_Data*)&local_118);
      }
 else {
         puVar9 = *(undefined8**)( local_118 + 0x10 );
         if (puVar9 != local_110) {
            do {
               while (true) {
                  cVar4 = String::operator <(param_2, (String*)( puVar9 + 6 ));
                  if (cVar4 != '\0') break;
                  cVar4 = String::operator <((String*)( puVar9 + 6 ), param_2);
                  if (cVar4 == '\0') {
                     if (puVar9 != (undefined8*)0x0) goto LAB_00109d01;
                     goto LAB_001096aa;
                  }

                  puVar9 = (undefined8*)puVar9[1];
                  if (local_110 == puVar9) goto LAB_001096aa;
               }
;
               puVar9 = (undefined8*)puVar9[2];
            }
 while ( local_110 != puVar9 );
         }

         LAB_001096aa:local_1a8 = (char*)0x0;
         if (local_118 == 0) goto LAB_00109ded;
      }

      puVar9 = (undefined8*)RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>::_insert((RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>*)&local_118, param_2, local_228);
      List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)local_228);
      LAB_00109d01:plVar8 = *(long**)param_6;
      if (plVar8 != (long*)0x0) {
         do {
            pCVar7 = (CowData<char32_t>*)*plVar8;
            if (pCVar7 == (CowData<char32_t>*)0x0) goto LAB_0010a0b3;
            if (plVar8 == *(long**)( pCVar7 + 0x30 )) {
               lVar6 = *(long*)( pCVar7 + 0x20 );
               lVar1 = *(long*)( pCVar7 + 0x28 );
               *plVar8 = lVar6;
               if (pCVar7 == (CowData<char32_t>*)plVar8[1]) {
                  plVar8[1] = lVar1;
               }

               if (lVar1 != 0) {
                  *(long*)( lVar1 + 0x20 ) = lVar6;
                  lVar6 = *(long*)( pCVar7 + 0x20 );
               }

               if (lVar6 != 0) {
                  *(long*)( lVar6 + 0x28 ) = lVar1;
               }

               CowData<char32_t>::_unref(pCVar7);
               Memory::free_static(pCVar7, false);
               *(int*)( plVar8 + 2 ) = (int)plVar8[2] + -1;
            }
 else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }

            plVar8 = *(long**)param_6;
         }
 while ( (int)plVar8[2] != 0 );
         Memory::free_static(plVar8, false);
         *(undefined8*)param_6 = 0;
      }

      plVar8 = (long*)0x0;
      LAB_0010a0b3:if (( (long*)puVar9[7] != (long*)0x0 ) && ( pCVar11 = *(CowData**)puVar9[7] ),pCVar11 != (CowData*)0x0) {
         uVar2 = _LC90;
         if (plVar8 == (long*)0x0) {
            pauVar10 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_6 = pauVar10;
            *(undefined4*)pauVar10[1] = 0;
            *pauVar10 = (undefined1[16])0x0;
            uVar2 = _LC90;
         }

         do {
            pCVar7 = (CowData<char32_t>*)operator_new(0x38, DefaultAllocator::alloc);
            *(undefined8*)pCVar7 = 0;
            *(undefined1(*) [16])( pCVar7 + 0x18 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( pCVar7 + 0x28 ) = (undefined1[16])0x0;
            lVar6 = *(long*)pCVar11;
            *(undefined8*)( pCVar7 + 8 ) = uVar2;
            pCVar7[0x10] = (CowData<char32_t>)0x0;
            if (lVar6 != 0) {
               CowData<char32_t>::_ref(pCVar7, pCVar11);
            }

            *(undefined8*)( pCVar7 + 8 ) = *(undefined8*)( pCVar11 + 8 );
            pCVar7[0x10] = *(CowData<char32_t>*)( pCVar11 + 0x10 );
            *(undefined8*)( pCVar7 + 0x18 ) = *(undefined8*)( pCVar11 + 0x18 );
            plVar8 = *(long**)param_6;
            lVar6 = plVar8[1];
            *(undefined8*)( pCVar7 + 0x20 ) = 0;
            *(long**)( pCVar7 + 0x30 ) = plVar8;
            *(long*)( pCVar7 + 0x28 ) = lVar6;
            if (lVar6 != 0) {
               *(CowData<char32_t>**)( lVar6 + 0x20 ) = pCVar7;
            }

            plVar8[1] = (long)pCVar7;
            if (*plVar8 == 0) {
               *plVar8 = (long)pCVar7;
            }

            pCVar11 = *(CowData**)( pCVar11 + 0x20 );
            *(int*)( plVar8 + 2 ) = (int)plVar8[2] + 1;
         }
 while ( pCVar11 != (CowData*)0x0 );
      }

   }

   if (param_7 != (HashSet*)0x0) {
      HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>::operator =((HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>*)param_7, local_f0);
   }

   if (param_9 != (List*)0x0) {
      lVar6 = **(long**)( this + 0x10 );
      if (lVar6 != 0) {
         lVar6 = *(long*)( lVar6 + 0x10 );
         lVar1 = ( *(long**)( this + 0x10 ) )[1];
         if (lVar6 != lVar1) {
            do {
               lVar12 = lVar6;
               lVar6 = *(long*)( lVar12 + 0x10 );
            }
 while ( lVar1 != *(long*)( lVar12 + 0x10 ) );
            do {
               local_1b0 = 0;
               local_1a8 = "";
               local_1a0 = 0;
               String::parse_latin1((StrRange*)&local_1b0);
               ScriptLanguage::CodeCompletionOption::CodeCompletionOption(local_c8, lVar12 + 0x30, 6, 0x400, (StrRange*)&local_1b0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
               List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>::push_back((List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>*)param_9, local_c8);
               Array::~Array(local_50);
               CowData<char32_t>::_unref(local_58);
               lVar6 = local_68;
               if (local_68 != 0) {
                  LOCK();
                  plVar8 = (long*)( local_68 + -0x10 );
                  *plVar8 = *plVar8 + -1;
                  UNLOCK();
                  if (*plVar8 == 0) {
                     local_68 = 0;
                     Memory::free_static((void*)( lVar6 + -0x10 ), false);
                  }

               }

               lVar6 = local_78;
               if (local_78 != 0) {
                  LOCK();
                  plVar8 = (long*)( local_78 + -0x10 );
                  *plVar8 = *plVar8 + -1;
                  UNLOCK();
                  if (*plVar8 == 0) {
                     local_78 = 0;
                     Memory::free_static((void*)( lVar6 + -0x10 ), false);
                  }

               }

               if (Variant::needs_deinit[local_98] != '\0') {
                  Variant::_clear_internal();
               }

               if (( ( local_a0 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar3 = local_a0,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))();
               Memory::free_static(pOVar3, false);
            }
 while ( lVar12 != 0 );
         }

      }

   }

   if (param_8 != (List*)0x0) {
      if (local_f4 == 4) {
         local_1a8 = (char*)0x0;
         String::parse_latin1((String*)local_228, "");
         local_1b0 = 0;
         String::parse_latin1((String*)&local_1b0, "defined");
         ScriptLanguage::CodeCompletionOption::CodeCompletionOption(local_c8, (StrRange*)&local_1b0, 9, 0x400, local_228);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_228);
         List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>::push_back((List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>*)param_8, local_c8);
         ScriptLanguage::CodeCompletionOption::~CodeCompletionOption(local_c8);
      }
 else if (local_f4 < 5) {
         if (local_f4 == 1) {
            local_1b8 = (long*)0x0;
            get_keyword_list((List*)&local_1b8, true, true);
            if (( local_1b8 != (long*)0x0 ) && ( lVar6 = lVar6 != 0 )) {
               do {
                  local_1b0 = 0;
                  local_1a8 = "";
                  local_1a0 = 0;
                  String::parse_latin1((StrRange*)&local_1b0);
                  ScriptLanguage::CodeCompletionOption::CodeCompletionOption(local_c8, lVar6, 9, 0x400, (StrRange*)&local_1b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
                  List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>::push_back((List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>*)param_8, local_c8);
                  Array::~Array(local_50);
                  CowData<char32_t>::_unref(local_58);
                  lVar1 = local_68;
                  if (local_68 != 0) {
                     LOCK();
                     plVar8 = (long*)( local_68 + -0x10 );
                     *plVar8 = *plVar8 + -1;
                     UNLOCK();
                     if (*plVar8 == 0) {
                        local_68 = 0;
                        Memory::free_static((void*)( lVar1 + -0x10 ), false);
                     }

                  }

                  lVar1 = local_78;
                  if (local_78 != 0) {
                     LOCK();
                     plVar8 = (long*)( local_78 + -0x10 );
                     *plVar8 = *plVar8 + -1;
                     UNLOCK();
                     if (*plVar8 == 0) {
                        local_78 = 0;
                        Memory::free_static((void*)( lVar1 + -0x10 ), false);
                     }

                  }

                  if (Variant::needs_deinit[local_98] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( ( local_a0 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar3 = local_a0,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))();
                  Memory::free_static(pOVar3, false);
               }
 while ( lVar6 != 0 );
            }

         }
 else {
            if (local_f4 != 3) goto LAB_00109b3a;
            local_1b8 = (long*)0x0;
            local_1a8 = "disable_preprocessor";
            local_1b0 = 0;
            local_1a0 = 0x14;
            String::parse_latin1((StrRange*)&local_1b0);
            List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_1b8, (String*)&local_1b0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
            if (( local_1b8 != (long*)0x0 ) && ( lVar6 = lVar6 != 0 )) {
               do {
                  local_1b0 = 0;
                  local_1a8 = "";
                  local_1a0 = 0;
                  String::parse_latin1((StrRange*)&local_1b0);
                  ScriptLanguage::CodeCompletionOption::CodeCompletionOption(local_c8, lVar6, 9, 0x400, (StrRange*)&local_1b0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
                  List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>::push_back((List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>*)param_8, local_c8);
                  Array::~Array(local_50);
                  CowData<char32_t>::_unref(local_58);
                  lVar1 = local_68;
                  if (local_68 != 0) {
                     LOCK();
                     plVar8 = (long*)( local_68 + -0x10 );
                     *plVar8 = *plVar8 + -1;
                     UNLOCK();
                     if (*plVar8 == 0) {
                        local_68 = 0;
                        Memory::free_static((void*)( lVar1 + -0x10 ), false);
                     }

                  }

                  lVar1 = local_78;
                  if (local_78 != 0) {
                     LOCK();
                     plVar8 = (long*)( local_78 + -0x10 );
                     *plVar8 = *plVar8 + -1;
                     UNLOCK();
                     if (*plVar8 == 0) {
                        local_78 = 0;
                        Memory::free_static((void*)( lVar1 + -0x10 ), false);
                     }

                  }

                  if (Variant::needs_deinit[local_98] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( ( local_a0 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar3 = local_a0,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))();
                  Memory::free_static(pOVar3, false);
               }
 while ( lVar6 != 0 );
            }

         }

         List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_1b8);
      }
 else if (( local_f4 == 5 ) && ( param_10 != (_func_void_List_ptr*)0x0 )) {
         ( *param_10 )(param_8);
      }

   }

   LAB_00109b3a:clear_state(this);
   State::~State(local_1f8);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar5;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* RBMap<String, ShaderPreprocessor::Define*, Comparator<String>,
   DefaultAllocator>::_set_color(RBMap<String, ShaderPreprocessor::Define*, Comparator<String>,
   DefaultAllocator>::Element*, int) [clone .part.0] */void RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>::_set_color(Element *param_1, int param_2) {
   _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
   return;
}
/* CowData<Pair<int, int> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Pair<int,int>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<bool>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<bool>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<char32_t>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<char32_t>::_copy_on_write(void) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<Ref<ShaderInclude>, HashMapHasherDefault, HashMapComparatorDefault<Ref<ShaderInclude> >
   >::insert(Ref<ShaderInclude> const&) */undefined1[16];HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>::insert(Ref *param_1) {
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
   uVar33 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
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
      if (lVar35 != 0) goto LAB_0010aa88;
   }
 else {
      lVar36 = *in_RDX;
      uVar3 = *(uint*)( (long)in_RSI + 0x24 );
      LAB_0010aa88:local_88 = (ulong)uVar3;
      if (uVar3 != 0) {
         uVar40 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 ));
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
                  if (*(long*)( lVar35 + uStack_98 * 8 ) == lVar36) goto LAB_0010ab9a;
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
 while ( ( uVar45 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = uVar34 * lVar4,auVar22._8_8_ = 0,auVar22._0_8_ = uVar40,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 ) + iVar38 ) - SUB164(auVar10 * auVar22, 8)) * lVar4,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,uVar42 <= SUB164(auVar11 * auVar23, 8) );
         }

      }

   }

   if ((float)uVar33 * __LC17 < (float)( uVar3 + 1 )) {
      if ((int)in_RSI[4] == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         lVar35 = *in_RSI;
         uVar45 = 0xffffffff;
         uVar3 = *(uint*)( (long)in_RSI + 0x24 );
         goto LAB_0010ab9a;
      }

      uVar33 = (int)in_RSI[4] + 1;
      uVar34 = (ulong)uVar33;
      if (uVar33 < 2) {
         uVar34 = 2;
      }

      uVar33 = *(uint*)( hash_table_size_primes + uVar34 * 4 );
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
            uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
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
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
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
   LAB_0010ab9a:local_88._0_4_ = uVar3;
   *(uint*)( param_1 + 0xc ) = uVar45;
   *(long*)param_1 = lVar35;
   *(uint*)( param_1 + 8 ) = (uint)local_88;
   auVar46._8_8_ = uStack_98;
   auVar46._0_8_ = param_1;
   return auVar46;
}
/* LocalVector<char32_t, unsigned int, false, false>::resize(unsigned int) */void LocalVector<char32_t,unsigned_int,false,false>::resize(LocalVector<char32_t,unsigned_int,false,false> *this, uint param_1) {
   code *pcVar1;
   uint uVar2;
   long lVar3;
   if (*(uint*)this <= param_1) {
      if (param_1 <= *(uint*)this) {
         return;
      }

      if (*(uint*)( this + 4 ) < param_1) {
         uVar2 = param_1 - 1 | param_1 - 1 >> 1;
         uVar2 = uVar2 | uVar2 >> 2;
         uVar2 = uVar2 | uVar2 >> 4;
         uVar2 = uVar2 | uVar2 >> 8;
         uVar2 = ( uVar2 | uVar2 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar2;
         lVar3 = Memory::realloc_static(*(void**)( this + 8 ), (ulong)uVar2 * 4, false);
         *(long*)( this + 8 ) = lVar3;
         if (lVar3 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

      }

   }

   *(uint*)this = param_1;
   return;
}
/* HashSet<Ref<ShaderInclude>, HashMapHasherDefault, HashMapComparatorDefault<Ref<ShaderInclude> >
   >::TEMPNAMEPLACEHOLDERVALUE(HashSet<Ref<ShaderInclude>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<ShaderInclude> > > const&) */void HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>::operator =(HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>> *this, HashSet *param_1) {
   ulong uVar1;
   uint uVar2;
   Object *pOVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   char cVar7;
   undefined8 uVar8;
   ulong uVar9;
   long lVar10;
   void *pvVar11;
   long *plVar12;
   if (this == (HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>*)param_1) {
      return;
   }

   pvVar11 = *(void**)this;
   if (pvVar11 != (void*)0x0) {
      if (( *(int*)( this + 0x24 ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x18 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) << 2),*(int*)( this + 0x24 ) != 0 ) ) )) {
         lVar10 = 0;
         do {
            plVar12 = (long*)( (long)pvVar11 + lVar10 * 8 );
            if (*plVar12 != 0) {
               cVar7 = RefCounted::unreference();
               if (cVar7 != '\0') {
                  pOVar3 = (Object*)*plVar12;
                  cVar7 = predelete_handler(pOVar3);
                  if (cVar7 != '\0') {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }

               }

               pvVar11 = *(void**)this;
            }

            lVar10 = lVar10 + 1;
         }
 while ( (uint)lVar10 < *(uint*)( this + 0x24 ) );
         *(undefined4*)( this + 0x24 ) = 0;
         if (pvVar11 == (void*)0x0) goto LAB_0010b23a;
      }

      Memory::free_static(pvVar11, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
      Memory::free_static(*(void**)( this + 8 ), false);
      Memory::free_static(*(void**)( this + 0x18 ), false);
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   }

   LAB_0010b23a:uVar1 = *(ulong*)( param_1 + 0x20 );
   *(ulong*)( this + 0x20 ) = uVar1;
   if ((int)( uVar1 >> 0x20 ) != 0) {
      uVar2 = *(uint*)( hash_table_size_primes + ( uVar1 & 0xffffffff ) * 4 );
      uVar1 = (ulong)uVar2 * 4;
      uVar8 = Memory::alloc_static(uVar1, false);
      lVar10 = 0;
      *(undefined8*)( this + 0x18 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar2 * 8, false);
      *(undefined8*)this = uVar8;
      uVar8 = Memory::alloc_static(uVar1, false);
      *(undefined8*)( this + 0x10 ) = uVar8;
      uVar8 = Memory::alloc_static(uVar1, false);
      *(undefined8*)( this + 8 ) = uVar8;
      if (*(int*)( this + 0x24 ) != 0) {
         do {
            plVar12 = (long*)( *(long*)this + lVar10 * 8 );
            lVar4 = *(long*)param_1;
            *plVar12 = 0;
            lVar4 = *(long*)( lVar10 * 8 + lVar4 );
            if (lVar4 != 0) {
               *plVar12 = lVar4;
               cVar7 = RefCounted::reference();
               if (cVar7 == '\0') {
                  *plVar12 = 0;
               }

            }

            *(undefined4*)( *(long*)( this + 0x10 ) + lVar10 * 4 ) = *(undefined4*)( *(long*)( param_1 + 0x10 ) + lVar10 * 4 );
            lVar10 = lVar10 + 1;
         }
 while ( (uint)lVar10 < *(uint*)( this + 0x24 ) );
      }

      if (uVar2 != 0) {
         lVar10 = *(long*)( param_1 + 0x18 );
         lVar4 = *(long*)( this + 0x18 );
         uVar9 = 0;
         lVar5 = *(long*)( param_1 + 8 );
         lVar6 = *(long*)( this + 8 );
         do {
            *(undefined4*)( lVar4 + uVar9 ) = *(undefined4*)( lVar10 + uVar9 );
            *(undefined4*)( lVar6 + uVar9 ) = *(undefined4*)( lVar5 + uVar9 );
            uVar9 = uVar9 + 4;
         }
 while ( uVar9 != uVar1 );
         return;
      }

   }

   return;
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
/* WARNING: Removing unreachable block (ram,0x0010b558) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c0[8];
   undefined8 local_b8[8];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c0);
   iVar2 = (int)local_c0;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_b8, param_2);
   *param_1 = local_b8[0];
   local_b8[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Array::~Array(local_c0);
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
/* WARNING: Removing unreachable block (ram,0x0010b808) *//* String vformat<char const*>(String const&, char const* const) */String *vformat<char_const*>(String *param_1, char *param_2) {
   char cVar1;
   Variant *this;
   char *in_RDX;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c0[8];
   undefined8 local_b8[8];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, in_RDX);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c0);
   iVar2 = (int)local_c0;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_b8, (bool*)param_2);
   *(undefined8*)param_1 = local_b8[0];
   local_b8[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Array::~Array(local_c0);
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
/* ScriptLanguage::CodeCompletionOption::~CodeCompletionOption() */void ScriptLanguage::CodeCompletionOption::~CodeCompletionOption(CodeCompletionOption *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   Array::~Array((Array*)( this + 0x78 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x70 ));
   if (*(long*)( this + 0x60 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x60 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x60 );
         *(undefined8*)( this + 0x60 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

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

   if (Variant::needs_deinit[*(int*)( this + 0x30 )] != '\0') {
      Variant::_clear_internal();
   }

   if (*(long*)( this + 0x28 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x28 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x10 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* ShaderPreprocessor::_set_unexpected_token_error(String const&, int) */void ShaderPreprocessor::_set_unexpected_token_error(ShaderPreprocessor *this, String *param_1, int param_2) {
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 local_70;
   String local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)param_1);
   }

   local_70 = 0;
   local_50 = 0;
   local_58 = "";
   String::parse_latin1((StrRange*)&local_70);
   local_58 = "Unexpected token: \'%s\'.";
   local_78 = 0;
   local_50 = 0x17;
   String::parse_latin1((StrRange*)&local_78);
   RTR(local_68, (String*)&local_78);
   vformat<String>((CowData<char32_t>*)&local_58, local_68, (CowData<char32_t>*)&local_60);
   set_error(this, (String*)&local_58, param_2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderPreprocessor::_set_expected_error(String const&, int) */void ShaderPreprocessor::_set_expected_error(ShaderPreprocessor *this, String *param_1, int param_2) {
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 local_70;
   String local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)param_1);
   }

   local_70 = 0;
   local_50 = 0;
   local_58 = "";
   String::parse_latin1((StrRange*)&local_70);
   local_58 = "Expected a \'%s\'.";
   local_78 = 0;
   local_50 = 0x10;
   String::parse_latin1((StrRange*)&local_78);
   RTR(local_68, (String*)&local_78);
   vformat<String>((CowData<char32_t>*)&local_58, local_68, (CowData<char32_t>*)&local_60);
   set_error(this, (String*)&local_58, param_2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   CowData<char32_t> *this_00;
   long lVar1;
   long lVar2;
   long *plVar3;
   plVar3 = *(long**)this;
   if (plVar3 == (long*)0x0) {
      return;
   }

   do {
      this_00 = (CowData<char32_t>*)*plVar3;
      if (this_00 == (CowData<char32_t>*)0x0) {
         if ((int)plVar3[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( this_00 + 0x18 ) == plVar3) {
         lVar2 = *(long*)( this_00 + 8 );
         lVar1 = *(long*)( this_00 + 0x10 );
         *plVar3 = lVar2;
         if (this_00 == (CowData<char32_t>*)plVar3[1]) {
            plVar3[1] = lVar1;
         }

         if (lVar1 != 0) {
            *(long*)( lVar1 + 8 ) = lVar2;
            lVar2 = *(long*)( this_00 + 8 );
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x10 ) = lVar1;
         }

         CowData<char32_t>::_unref(this_00);
         Memory::free_static(this_00, false);
         *(int*)( plVar3 + 2 ) = (int)plVar3[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar3 = *(long**)this;
   }
 while ( (int)plVar3[2] != 0 );
   Memory::free_static(plVar3, false);
   return;
}
/* RBSet<String, Comparator<String>, DefaultAllocator>::_cleanup_tree(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) [clone .part.0] */void RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree(RBSet<String,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar2 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (pEVar4 != *(Element**)( pEVar6 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
               Memory::free_static(pEVar2, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
            Memory::free_static(pEVar2, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
         Memory::free_static(pEVar2, false);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar1 + 0x30 ));
      Memory::free_static(pEVar1, false);
      pEVar2 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
               Memory::free_static(pEVar2, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
            Memory::free_static(pEVar2, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
         Memory::free_static(pEVar2, false);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar1 + 0x30 ));
      Memory::free_static(pEVar1, false);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x30 ));
   Memory::free_static(param_1, false);
   return;
}
/* RBMap<String, ShaderPreprocessor::Define*, Comparator<String>,
   DefaultAllocator>::_cleanup_tree(RBMap<String, ShaderPreprocessor::Define*, Comparator<String>,
   DefaultAllocator>::Element*) [clone .part.0] */void RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>::_cleanup_tree(RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar2 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (pEVar4 != *(Element**)( pEVar6 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
               Memory::free_static(pEVar2, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
            Memory::free_static(pEVar2, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
         Memory::free_static(pEVar2, false);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar1 + 0x30 ));
      Memory::free_static(pEVar1, false);
      pEVar2 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar2) {
      pEVar3 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar3 + 0x10 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar2 != pEVar6) {
               pEVar4 = *(Element**)( pEVar6 + 0x10 );
               if (pEVar2 != pEVar4) {
                  _cleanup_tree(this, pEVar4);
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar5 + 8 );
            if (pEVar2 != pEVar6) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
               Memory::free_static(pEVar2, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar3 + 8 );
         if (pEVar2 != pEVar5) {
            pEVar6 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar2 + 8 );
            if (pEVar6 != pEVar5) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
            Memory::free_static(pEVar2, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
         Memory::free_static(pEVar3, false);
         pEVar3 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar3) {
         pEVar5 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar2 + 8 );
         if (pEVar5 != pEVar3) {
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar6 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar3) {
               if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
               Memory::free_static(pEVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
            Memory::free_static(pEVar5, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
         Memory::free_static(pEVar2, false);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar1 + 0x30 ));
      Memory::free_static(pEVar1, false);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x30 ));
   Memory::free_static(param_1, false);
   return;
}
/* RBMap<String, ShaderPreprocessor::Define*, Comparator<String>, DefaultAllocator>::clear() */void RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>::clear(RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator> *this) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   void *pvVar5;
   Element *pEVar6;
   Element *pEVar7;
   pvVar5 = *(void**)this;
   if (pvVar5 != (void*)0x0) {
      pEVar1 = *(Element**)( (long)pvVar5 + 0x10 );
      pEVar3 = *(Element**)( this + 8 );
      if (pEVar1 != pEVar3) {
         pEVar4 = *(Element**)( pEVar1 + 0x10 );
         if (pEVar3 != pEVar4) {
            pEVar7 = *(Element**)( pEVar4 + 0x10 );
            if (pEVar3 != pEVar7) {
               pEVar6 = *(Element**)( pEVar7 + 0x10 );
               if (pEVar3 != pEVar6) {
                  _cleanup_tree(this, pEVar6);
                  pEVar6 = *(Element**)( this + 8 );
               }

               pEVar3 = *(Element**)( pEVar7 + 8 );
               if (pEVar6 != pEVar3) {
                  pEVar2 = *(Element**)( pEVar3 + 0x10 );
                  if (pEVar6 != pEVar2) {
                     _cleanup_tree(this, pEVar2);
                     pEVar2 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar3 + 8 ) != pEVar2) {
                     _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
                  Memory::free_static(pEVar3, false);
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar7 + 0x30 ));
               Memory::free_static(pEVar7, false);
               pEVar7 = *(Element**)( this + 8 );
            }

            pEVar3 = *(Element**)( pEVar4 + 8 );
            if (pEVar3 != pEVar7) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar7 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
            Memory::free_static(pEVar4, false);
            pEVar4 = *(Element**)( this + 8 );
         }

         pEVar3 = *(Element**)( pEVar1 + 8 );
         if (pEVar4 != pEVar3) {
            pEVar7 = *(Element**)( pEVar3 + 0x10 );
            if (pEVar4 != pEVar7) {
               pEVar6 = *(Element**)( pEVar7 + 0x10 );
               if (pEVar4 != pEVar6) {
                  _cleanup_tree(this, pEVar6);
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar7 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar7 + 0x30 ));
               Memory::free_static(pEVar7, false);
               pEVar7 = *(Element**)( this + 8 );
            }

            pEVar4 = *(Element**)( pEVar3 + 8 );
            if (pEVar4 != pEVar7) {
               if (*(Element**)( pEVar4 + 0x10 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                  pEVar7 = *(Element**)( this + 8 );
               }

               pEVar6 = *(Element**)( pEVar4 + 8 );
               if (pEVar6 != pEVar7) {
                  if (*(Element**)( pEVar6 + 0x10 ) != pEVar7) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                     pEVar7 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar6 + 8 ) != pEVar7) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
               Memory::free_static(pEVar4, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
            Memory::free_static(pEVar3, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar1 + 0x30 ));
         Memory::free_static(pEVar1, false);
         pvVar5 = *(void**)this;
         pEVar3 = *(Element**)( this + 8 );
      }

      *(Element**)( (long)pvVar5 + 0x10 ) = pEVar3;
      *(undefined4*)( this + 0x10 ) = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar5 + 0x30 ));
      Memory::free_static(pvVar5, false);
      *(undefined8*)this = 0;
   }

   return;
}
/* CowData<char32_t>::_realloc(long) */undefined8 CowData<char32_t>::_realloc(CowData<char32_t> *this, long param_1) {
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
/* LocalVector<ShaderPreprocessor::Token, unsigned int, false, false>::resize(unsigned int) */void LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false>::resize(LocalVector<ShaderPreprocessor::Token,unsigned_int,false,false> *this, uint param_1) {
   code *pcVar1;
   uint uVar2;
   undefined4 *puVar3;
   undefined4 *puVar4;
   long lVar5;
   uint uVar6;
   uVar2 = *(uint*)this;
   if (uVar2 <= param_1) {
      if (param_1 <= uVar2) {
         return;
      }

      uVar6 = param_1 - 1;
      if (*(uint*)( this + 4 ) < param_1) {
         uVar2 = uVar6 >> 1 | uVar6;
         uVar2 = uVar2 | uVar2 >> 2;
         uVar2 = uVar2 | uVar2 >> 4;
         uVar2 = uVar2 | uVar2 >> 8;
         uVar2 = ( uVar2 | uVar2 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar2;
         lVar5 = Memory::realloc_static(*(void**)( this + 8 ), (ulong)uVar2 * 8, false);
         *(long*)( this + 8 ) = lVar5;
         if (lVar5 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         uVar2 = *(uint*)this;
         if (param_1 <= uVar2) goto LAB_0010d1ee;
      }

      lVar5 = *(long*)( this + 8 );
      puVar3 = (undefined4*)( lVar5 + (ulong)uVar2 * 8 );
      do {
         *puVar3 = 0;
         puVar4 = puVar3 + 2;
         puVar3[1] = 0xffffffff;
         puVar3 = puVar4;
      }
 while ( puVar4 != (undefined4*)( lVar5 + 8 + ( ( ulong )(uVar6 - uVar2) + (ulong)uVar2 ) * 8 ) );
   }

   LAB_0010d1ee:*(uint*)this = param_1;
   return;
}
/* Ref<ShaderInclude>::unref() */void Ref<ShaderInclude>::unref(Ref<ShaderInclude> *this) {
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
/* List<ShaderPreprocessor::Region, DefaultAllocator>::~List() */void List<ShaderPreprocessor::Region,DefaultAllocator>::~List(List<ShaderPreprocessor::Region,DefaultAllocator> *this) {
   CowData<char32_t> *this_00;
   long lVar1;
   long lVar2;
   long *plVar3;
   plVar3 = *(long**)this;
   if (plVar3 == (long*)0x0) {
      return;
   }

   do {
      this_00 = (CowData<char32_t>*)*plVar3;
      if (this_00 == (CowData<char32_t>*)0x0) {
         if ((int)plVar3[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( this_00 + 0x30 ) == plVar3) {
         lVar2 = *(long*)( this_00 + 0x20 );
         lVar1 = *(long*)( this_00 + 0x28 );
         *plVar3 = lVar2;
         if (this_00 == (CowData<char32_t>*)plVar3[1]) {
            plVar3[1] = lVar1;
         }

         if (lVar1 != 0) {
            *(long*)( lVar1 + 0x20 ) = lVar2;
            lVar2 = *(long*)( this_00 + 0x20 );
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x28 ) = lVar1;
         }

         CowData<char32_t>::_unref(this_00);
         Memory::free_static(this_00, false);
         *(int*)( plVar3 + 2 ) = (int)plVar3[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar3 = *(long**)this;
   }
 while ( (int)plVar3[2] != 0 );
   Memory::free_static(plVar3, false);
   return;
}
/* RBMap<String, List<ShaderPreprocessor::Region, DefaultAllocator>, Comparator<String>,
   DefaultAllocator>::_Data::_create_root() */void RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>::_Data::_create_root(_Data *this) {
   undefined8 uVar1;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 local_40;
   CowData<char32_t> local_38[8];
   List<ShaderPreprocessor::Region,DefaultAllocator> aLStack_30[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar2 = (undefined4*)operator_new(0x40, DefaultAllocator::alloc);
   local_40 = 0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( puVar2 + ( 4*i + 2 ) ) = (undefined1[16])0;
   }

   *puVar2 = 0;
   *(undefined8*)( puVar2 + 0xe ) = 0;
   *(undefined4**)this = puVar2;
   _local_38 = (undefined1[16])0x0;
   local_48 = 0;
   List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( local_38 + 8 ));
   CowData<char32_t>::_unref(local_38);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)&local_40);
   uVar1 = *(undefined8*)( this + 8 );
   puVar2 = *(undefined4**)this;
   *puVar2 = 1;
   *(undefined8*)( puVar2 + 6 ) = uVar1;
   *(undefined8*)( puVar2 + 2 ) = uVar1;
   *(undefined8*)( puVar2 + 4 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RBMap<String, List<ShaderPreprocessor::Region, DefaultAllocator>, Comparator<String>,
   DefaultAllocator>::_cleanup_tree(RBMap<String, List<ShaderPreprocessor::Region,
   DefaultAllocator>, Comparator<String>, DefaultAllocator>::Element*) [clone .part.0] */void RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>::_cleanup_tree(RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Element *pEVar2;
   Element *pEVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar2 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar2) {
      pEVar4 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar4) {
         pEVar6 = *(Element**)( pEVar4 + 0x10 );
         if (pEVar2 != pEVar6) {
            pEVar3 = *(Element**)( pEVar6 + 0x10 );
            if (pEVar2 != pEVar3) {
               pEVar5 = *(Element**)( pEVar3 + 0x10 );
               if (pEVar2 != pEVar5) {
                  _cleanup_tree(this, pEVar5);
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (pEVar5 != *(Element**)( pEVar3 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar3 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar6 + 8 );
            if (pEVar2 != pEVar3) {
               pEVar5 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar3 != pEVar5) {
                  _cleanup_tree(this, pEVar5);
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar2 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
               Memory::free_static(pEVar2, false);
            }

            List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar6 + 0x38 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
            Memory::free_static(pEVar6, false);
            pEVar6 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar4 + 8 );
         if (pEVar2 != pEVar6) {
            pEVar3 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar3 != pEVar6) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar3 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar3 = *(Element**)( pEVar2 + 8 );
            if (pEVar3 != pEVar6) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar3 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
            }

            List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar2 + 0x38 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
            Memory::free_static(pEVar2, false);
         }

         List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar4 + 0x38 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
         Memory::free_static(pEVar4, false);
         pEVar4 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar4) {
         pEVar6 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar6 != pEVar4) {
            pEVar3 = *(Element**)( pEVar6 + 0x10 );
            if (pEVar3 != pEVar4) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar3 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
               pEVar4 = *(Element**)( this + 8 );
            }

            pEVar3 = *(Element**)( pEVar6 + 8 );
            if (pEVar3 != pEVar4) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar3 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
            }

            List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar6 + 0x38 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
            Memory::free_static(pEVar6, false);
            pEVar4 = *(Element**)( this + 8 );
         }

         pEVar6 = *(Element**)( pEVar2 + 8 );
         if (pEVar6 != pEVar4) {
            pEVar3 = *(Element**)( pEVar6 + 0x10 );
            if (pEVar3 != pEVar4) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar3 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
               pEVar4 = *(Element**)( this + 8 );
            }

            pEVar3 = *(Element**)( pEVar6 + 8 );
            if (pEVar3 != pEVar4) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar3 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
            }

            List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar6 + 0x38 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
            Memory::free_static(pEVar6, false);
         }

         List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar2 + 0x38 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
         Memory::free_static(pEVar2, false);
      }

      List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar1 + 0x38 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar1 + 0x30 ));
      Memory::free_static(pEVar1, false);
      pEVar2 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar2) {
      pEVar4 = *(Element**)( pEVar1 + 0x10 );
      if (pEVar2 != pEVar4) {
         pEVar6 = *(Element**)( pEVar4 + 0x10 );
         if (pEVar2 != pEVar6) {
            pEVar3 = *(Element**)( pEVar6 + 0x10 );
            if (pEVar2 != pEVar3) {
               pEVar5 = *(Element**)( pEVar3 + 0x10 );
               if (pEVar2 != pEVar5) {
                  _cleanup_tree(this, pEVar5);
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar3 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar6 + 8 );
            if (pEVar2 != pEVar3) {
               if (*(Element**)( pEVar2 + 0x10 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                  pEVar3 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar2 + 8 ) != pEVar3) {
                  _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar2 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
               Memory::free_static(pEVar2, false);
            }

            List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar6 + 0x38 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
            Memory::free_static(pEVar6, false);
            pEVar6 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar4 + 8 );
         if (pEVar2 != pEVar6) {
            pEVar3 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar3 != pEVar6) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar3 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar3 = *(Element**)( pEVar2 + 8 );
            if (pEVar3 != pEVar6) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar3 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
            }

            List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar2 + 0x38 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
            Memory::free_static(pEVar2, false);
         }

         List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar4 + 0x38 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
         Memory::free_static(pEVar4, false);
         pEVar4 = *(Element**)( this + 8 );
      }

      pEVar2 = *(Element**)( pEVar1 + 8 );
      if (pEVar2 != pEVar4) {
         pEVar6 = *(Element**)( pEVar2 + 0x10 );
         if (pEVar6 != pEVar4) {
            pEVar3 = *(Element**)( pEVar6 + 0x10 );
            if (pEVar3 != pEVar4) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar3 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
               pEVar4 = *(Element**)( this + 8 );
            }

            pEVar3 = *(Element**)( pEVar6 + 8 );
            if (pEVar3 != pEVar4) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar3 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
            }

            List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar6 + 0x38 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
            Memory::free_static(pEVar6, false);
            pEVar4 = *(Element**)( this + 8 );
         }

         pEVar6 = *(Element**)( pEVar2 + 8 );
         if (pEVar6 != pEVar4) {
            pEVar3 = *(Element**)( pEVar6 + 0x10 );
            if (pEVar3 != pEVar4) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar3 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
               pEVar4 = *(Element**)( this + 8 );
            }

            pEVar3 = *(Element**)( pEVar6 + 8 );
            if (pEVar3 != pEVar4) {
               if (*(Element**)( pEVar3 + 0x10 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                  pEVar4 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar3 + 8 ) != pEVar4) {
                  _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
               }

               List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar3 + 0x38 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
            }

            List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar6 + 0x38 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
            Memory::free_static(pEVar6, false);
         }

         List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar2 + 0x38 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
         Memory::free_static(pEVar2, false);
      }

      List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar1 + 0x38 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar1 + 0x30 ));
      Memory::free_static(pEVar1, false);
   }

   List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( param_1 + 0x38 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x30 ));
   Memory::free_static(param_1, false);
   return;
}
/* ShaderPreprocessor::State::~State() */void ShaderPreprocessor::State::~State(State *this) {
   RBSet<String,Comparator<String>,DefaultAllocator> *this_00;
   long *plVar1;
   RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator> *this_01;
   Object *pOVar2;
   Element *pEVar3;
   CowData<char32_t> *this_02;
   long lVar4;
   Element *pEVar5;
   char cVar6;
   Element *pEVar7;
   Element *pEVar8;
   long lVar9;
   Element *pEVar10;
   long *plVar11;
   Element *pEVar12;
   void *pvVar13;
   Element *pEVar14;
   Element *pEVar15;
   Element *pEVar16;
   pvVar13 = *(void**)( this + 0xa8 );
   if (pvVar13 == (void*)0x0) goto LAB_0010df2b;
   if (*(int*)( this + 0xcc ) != 0) {
      if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 200 ) * 4 ) != 0) {
         memset(*(void**)( this + 0xc0 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 200 ) * 4 ) << 2);
         if (*(int*)( this + 0xcc ) == 0) goto LAB_0010def7;
      }

      lVar9 = 0;
      do {
         plVar11 = (long*)( (long)pvVar13 + lVar9 * 8 );
         if (*plVar11 != 0) {
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
               pOVar2 = (Object*)*plVar11;
               cVar6 = predelete_handler(pOVar2);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

            pvVar13 = *(void**)( this + 0xa8 );
         }

         lVar9 = lVar9 + 1;
      }
 while ( (uint)lVar9 < *(uint*)( this + 0xcc ) );
      *(undefined4*)( this + 0xcc ) = 0;
      if (pvVar13 == (void*)0x0) goto LAB_0010df2b;
   }

   LAB_0010def7:Memory::free_static(pvVar13, false);
   Memory::free_static(*(void**)( this + 0xb8 ), false);
   Memory::free_static(*(void**)( this + 0xb0 ), false);
   Memory::free_static(*(void**)( this + 0xc0 ), false);
   LAB_0010df2b:pvVar13 = *(void**)( this + 0x80 );
   if (pvVar13 != (void*)0x0) {
      pEVar3 = *(Element**)( (long)pvVar13 + 0x10 );
      pEVar7 = *(Element**)( this + 0x88 );
      if (pEVar3 != pEVar7) {
         pEVar10 = *(Element**)( pEVar3 + 0x10 );
         this_01 = (RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>*)( this + 0x80 );
         if (pEVar7 != pEVar10) {
            pEVar14 = *(Element**)( pEVar10 + 0x10 );
            if (pEVar7 != pEVar14) {
               RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>::_cleanup_tree(this_01, pEVar14);
               pEVar14 = *(Element**)( this + 0x88 );
            }

            if (*(Element**)( pEVar10 + 8 ) != pEVar14) {
               RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>::_cleanup_tree(this_01, *(Element**)( pEVar10 + 8 ));
            }

            List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar10 + 0x38 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar10 + 0x30 ));
            Memory::free_static(pEVar10, false);
            pEVar10 = *(Element**)( this + 0x88 );
         }

         pEVar7 = *(Element**)( pEVar3 + 8 );
         if (pEVar7 != pEVar10) {
            if (*(Element**)( pEVar7 + 0x10 ) != pEVar10) {
               RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>::_cleanup_tree(this_01, *(Element**)( pEVar7 + 0x10 ));
               pEVar10 = *(Element**)( this + 0x88 );
            }

            if (pEVar10 != *(Element**)( pEVar7 + 8 )) {
               RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>::_cleanup_tree(this_01, *(Element**)( pEVar7 + 8 ));
            }

            List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar7 + 0x38 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar7 + 0x30 ));
            Memory::free_static(pEVar7, false);
         }

         List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( pEVar3 + 0x38 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
         Memory::free_static(pEVar3, false);
         pvVar13 = *(void**)( this + 0x80 );
         pEVar7 = *(Element**)( this + 0x88 );
      }

      *(Element**)( (long)pvVar13 + 0x10 ) = pEVar7;
      *(undefined4*)( this + 0x90 ) = 0;
      List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)( (long)pvVar13 + 0x38 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar13 + 0x30 ));
      Memory::free_static(pvVar13, false);
   }

   plVar11 = *(long**)( this + 0x70 );
   if (plVar11 != (long*)0x0) {
      do {
         this_02 = (CowData<char32_t>*)*plVar11;
         if (this_02 == (CowData<char32_t>*)0x0) {
            if ((int)plVar11[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010e0dd;
            }

            break;
         }

         if (plVar11 == *(long**)( this_02 + 0x20 )) {
            lVar9 = *(long*)( this_02 + 0x10 );
            lVar4 = *(long*)( this_02 + 0x18 );
            *plVar11 = lVar9;
            if (this_02 == (CowData<char32_t>*)plVar11[1]) {
               plVar11[1] = lVar4;
            }

            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x10 ) = lVar9;
               lVar9 = *(long*)( this_02 + 0x10 );
            }

            if (lVar9 != 0) {
               *(long*)( lVar9 + 0x18 ) = lVar4;
            }

            CowData<char32_t>::_unref(this_02);
            Memory::free_static(this_02, false);
            *(int*)( plVar11 + 2 ) = (int)plVar11[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar11 = *(long**)( this + 0x70 );
      }
 while ( (int)plVar11[2] != 0 );
      Memory::free_static(plVar11, false);
   }

   LAB_0010e0dd:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x68 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x60 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x58 ));
   plVar11 = *(long**)( this + 0x48 );
   if (plVar11 != (long*)0x0) {
      do {
         pvVar13 = (void*)*plVar11;
         if (pvVar13 == (void*)0x0) {
            if ((int)plVar11[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010e164;
            }

            break;
         }

         if (*(long**)( (long)pvVar13 + 0x18 ) == plVar11) {
            lVar9 = *(long*)( (long)pvVar13 + 8 );
            lVar4 = *(long*)( (long)pvVar13 + 0x10 );
            *plVar11 = lVar9;
            if (pvVar13 == (void*)plVar11[1]) {
               plVar11[1] = lVar4;
            }

            if (lVar4 != 0) {
               *(long*)( lVar4 + 8 ) = lVar9;
               lVar9 = *(long*)( (long)pvVar13 + 8 );
            }

            if (lVar9 != 0) {
               *(long*)( lVar9 + 0x10 ) = lVar4;
            }

            Memory::free_static(pvVar13, false);
            *(int*)( plVar11 + 2 ) = (int)plVar11[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar11 = *(long**)( this + 0x48 );
      }
 while ( (int)plVar11[2] != 0 );
      Memory::free_static(plVar11, false);
   }

   LAB_0010e164:pvVar13 = *(void**)( this + 0x30 );
   if (pvVar13 != (void*)0x0) {
      pEVar5 = *(Element**)( (long)pvVar13 + 0x10 );
      pEVar8 = *(Element**)( this + 0x38 );
      if (pEVar5 != pEVar8) {
         pEVar12 = *(Element**)( pEVar5 + 0x10 );
         this_00 = (RBSet<String,Comparator<String>,DefaultAllocator>*)( this + 0x30 );
         if (pEVar8 != pEVar12) {
            pEVar16 = *(Element**)( pEVar12 + 0x10 );
            if (pEVar8 != pEVar16) {
               pEVar15 = *(Element**)( pEVar16 + 0x10 );
               if (pEVar8 != pEVar15) {
                  RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree(this_00, pEVar15);
                  pEVar15 = *(Element**)( this + 0x38 );
               }

               if (*(Element**)( pEVar16 + 8 ) != pEVar15) {
                  RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree(this_00, *(Element**)( pEVar16 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar16 + 0x30 ));
               Memory::free_static(pEVar16, false);
               pEVar16 = *(Element**)( this + 0x38 );
            }

            if (pEVar16 != *(Element**)( pEVar12 + 8 )) {
               RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree(this_00, *(Element**)( pEVar12 + 8 ));
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar12 + 0x30 ));
            Memory::free_static(pEVar12, false);
            pEVar12 = *(Element**)( this + 0x38 );
         }

         pEVar8 = *(Element**)( pEVar5 + 8 );
         if (pEVar12 != pEVar8) {
            pEVar16 = *(Element**)( pEVar8 + 0x10 );
            if (pEVar12 != pEVar16) {
               pEVar15 = *(Element**)( pEVar16 + 0x10 );
               if (pEVar12 != pEVar15) {
                  RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree(this_00, pEVar15);
                  pEVar15 = *(Element**)( this + 0x38 );
               }

               if (pEVar15 != *(Element**)( pEVar16 + 8 )) {
                  RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree(this_00, *(Element**)( pEVar16 + 8 ));
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar16 + 0x30 ));
               Memory::free_static(pEVar16, false);
               pEVar16 = *(Element**)( this + 0x38 );
            }

            if (pEVar16 != *(Element**)( pEVar8 + 8 )) {
               RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree(this_00, *(Element**)( pEVar8 + 8 ));
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar8 + 0x30 ));
            Memory::free_static(pEVar8, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
         Memory::free_static(pEVar5, false);
         pvVar13 = *(void**)( this + 0x30 );
         pEVar8 = *(Element**)( this + 0x38 );
      }

      *(Element**)( (long)pvVar13 + 0x10 ) = pEVar8;
      *(undefined4*)( this + 0x40 ) = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar13 + 0x30 ));
      Memory::free_static(pvVar13, false);
   }

   plVar11 = *(long**)( this + 0x18 );
   if (plVar11 != (long*)0x0) {
      do {
         pvVar13 = (void*)*plVar11;
         if (pvVar13 == (void*)0x0) {
            if ((int)plVar11[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010e33f;
            }

            break;
         }

         if (plVar11 == *(long**)( (long)pvVar13 + 0x30 )) {
            lVar9 = *(long*)( (long)pvVar13 + 0x20 );
            lVar4 = *(long*)( (long)pvVar13 + 0x28 );
            *plVar11 = lVar9;
            if (pvVar13 == (void*)plVar11[1]) {
               plVar11[1] = lVar4;
            }

            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x20 ) = lVar9;
               lVar9 = *(long*)( (long)pvVar13 + 0x20 );
            }

            if (lVar9 != 0) {
               *(long*)( lVar9 + 0x28 ) = lVar4;
            }

            if (*(long*)( (long)pvVar13 + 8 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( (long)pvVar13 + 8 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar9 = *(long*)( (long)pvVar13 + 8 );
                  *(undefined8*)( (long)pvVar13 + 8 ) = 0;
                  Memory::free_static((void*)( lVar9 + -0x10 ), false);
               }

            }

            Memory::free_static(pvVar13, false);
            *(int*)( plVar11 + 2 ) = (int)plVar11[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar11 = *(long**)( this + 0x18 );
      }
 while ( (int)plVar11[2] != 0 );
      Memory::free_static(plVar11, false);
   }

   LAB_0010e33f:RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>::clear((RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>*)this);
   pvVar13 = *(void**)this;
   if (pvVar13 != (void*)0x0) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar13 + 0x30 ));
      Memory::free_static(pvVar13, false);
      return;
   }

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
      LAB_0010e8e0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar9 == 0) goto LAB_0010e8e0;
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
      goto LAB_0010e936;
   }

   if (lVar9 == lVar5) {
      LAB_0010e85b:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_0010e936:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_0010e7cf;
   }
 else {
      if (lVar4 != 0) {
         uVar3 = _realloc(this, lVar9);
         if ((int)uVar3 != 0) {
            return uVar3;
         }

         goto LAB_0010e85b;
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
   LAB_0010e7cf:puVar7[-1] = param_1;
   return 0;
}
/* RBMap<String, ShaderPreprocessor::Define*, Comparator<String>, DefaultAllocator>::_insert(String
   const&, ShaderPreprocessor::Define* const&) */int *__thiscallRBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>::_insert(RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator> *this, String *param_1, Define **param_2) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   char cVar5;
   int *piVar6;
   Define *pDVar7;
   int *piVar8;
   int *piVar9;
   int *piVar10;
   int *piVar11;
   int *piVar12;
   long in_FS_OFFSET;
   bool bVar13;
   long local_58;
   Define *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar11 = *(int**)this;
   piVar6 = *(int**)( piVar11 + 4 );
   if (*(int**)( piVar11 + 4 ) != *(int**)( this + 8 )) {
      do {
         while (true) {
            piVar11 = piVar6;
            cVar5 = String::operator <(param_1, (String*)( piVar11 + 0xc ));
            if (cVar5 != '\0') break;
            cVar5 = String::operator <((String*)( piVar11 + 0xc ), param_1);
            if (cVar5 == '\0') {
               *(Define**)( piVar11 + 0xe ) = *param_2;
               goto LAB_0010ebc7;
            }

            piVar6 = *(int**)( piVar11 + 2 );
            if (*(int**)( piVar11 + 2 ) == *(int**)( this + 8 )) goto LAB_0010e9bf;
         }
;
         piVar6 = *(int**)( piVar11 + 4 );
      }
 while ( *(int**)( piVar11 + 4 ) != *(int**)( this + 8 ) );
   }

   LAB_0010e9bf:piVar6 = (int*)operator_new(0x40, DefaultAllocator::alloc);
   local_58 = 0;
   if (*(long*)param_1 == 0) {
      pDVar7 = *param_2;
      *piVar6 = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( piVar6 + ( 4*i + 2 ) ) = (undefined1[16])0;
      }

      local_50 = pDVar7;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
      pDVar7 = *param_2;
      *piVar6 = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( piVar6 + ( 4*i + 2 ) ) = (undefined1[16])0;
      }

      local_50 = pDVar7;
      if (local_58 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( piVar6 + 0xc ), (CowData*)&local_58);
      }

   }

   *(Define**)( piVar6 + 0xe ) = pDVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   *(int**)( piVar6 + 6 ) = piVar11;
   piVar8 = *(int**)( this + 8 );
   *(int**)( piVar6 + 2 ) = piVar8;
   *(int**)( piVar6 + 4 ) = piVar8;
   piVar12 = piVar11;
   if (*(int**)this == piVar11) {
      LAB_0010ea83:*(int**)( piVar11 + 4 ) = piVar6;
   }
 else {
      cVar5 = String::operator <(param_1, (String*)( piVar11 + 0xc ));
      if (cVar5 != '\0') {
         piVar8 = *(int**)( piVar6 + 2 );
         piVar12 = *(int**)( piVar6 + 6 );
         goto LAB_0010ea83;
      }

      *(int**)( piVar11 + 2 ) = piVar6;
      piVar12 = *(int**)( piVar6 + 6 );
      piVar8 = *(int**)( piVar6 + 2 );
   }

   if (*(int**)( this + 8 ) == piVar8) {
      piVar8 = piVar12;
      piVar11 = piVar12;
      if (piVar6 == *(int**)( piVar12 + 2 )) {
         do {
            piVar11 = *(int**)( piVar8 + 6 );
            bVar13 = *(int**)( piVar11 + 2 ) == piVar8;
            piVar8 = piVar11;
         }
 while ( bVar13 );
      }

      if (*(int**)this == piVar11) {
         piVar11 = (int*)0x0;
      }

   }
 else {
      do {
         piVar11 = piVar8;
         piVar8 = *(int**)( piVar11 + 4 );
      }
 while ( *(int**)( this + 8 ) != piVar8 );
   }

   *(int**)( piVar6 + 8 ) = piVar11;
   piVar8 = *(int**)this;
   piVar10 = *(int**)( piVar6 + 4 );
   if (*(int**)( this + 8 ) == *(int**)( piVar6 + 4 )) {
      piVar9 = piVar12;
      piVar10 = piVar6;
      if (piVar6 == *(int**)( piVar12 + 4 )) {
         do {
            piVar10 = piVar9;
            piVar9 = *(int**)( piVar10 + 6 );
         }
 while ( piVar10 == *(int**)( piVar9 + 4 ) );
      }

      if (piVar8 != piVar10) goto LAB_0010eadc;
      piVar6[10] = 0;
      piVar6[0xb] = 0;
      if (piVar11 == (int*)0x0) goto LAB_0010eaf6;
      LAB_0010eae5:*(int**)( piVar11 + 10 ) = piVar6;
      piVar9 = *(int**)( piVar6 + 10 );
      if (piVar9 == (int*)0x0) goto LAB_0010eaf6;
   }
 else {
      do {
         piVar9 = piVar10;
         piVar10 = *(int**)( piVar9 + 2 );
      }
 while ( *(int**)( this + 8 ) != *(int**)( piVar9 + 2 ) );
      LAB_0010eadc:*(int**)( piVar6 + 10 ) = piVar9;
      if (piVar11 != (int*)0x0) goto LAB_0010eae5;
   }

   *(int**)( piVar9 + 8 ) = piVar6;
   LAB_0010eaf6:iVar1 = *piVar12;
   *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
   piVar11 = piVar6;
   if (iVar1 == 0) {
      do {
         while (true) {
            piVar8 = *(int**)( piVar12 + 6 );
            piVar10 = *(int**)( piVar8 + 4 );
            piVar9 = piVar12;
            if (piVar10 != piVar12) break;
            piVar10 = *(int**)( piVar8 + 2 );
            if (*piVar10 == 0) goto LAB_0010eb8a;
            if (*(int**)( piVar12 + 2 ) == piVar11) {
               lVar2 = *(long*)( this + 8 );
               lVar3 = *(long*)( piVar11 + 4 );
               *(long*)( piVar12 + 2 ) = lVar3;
               if (lVar2 == lVar3) {
                  *(int**)( piVar11 + 6 ) = piVar8;
                  piVar10 = piVar8;
                  LAB_0010ee88:*(int**)( piVar10 + 4 ) = piVar11;
               }
 else {
                  *(int**)( lVar3 + 0x18 ) = piVar12;
                  piVar10 = *(int**)( piVar12 + 6 );
                  *(int**)( piVar11 + 6 ) = piVar10;
                  if (piVar12 == *(int**)( piVar10 + 4 )) goto LAB_0010ee88;
                  *(int**)( piVar10 + 2 ) = piVar11;
               }

               *(int**)( piVar11 + 4 ) = piVar12;
               *(int**)( piVar12 + 6 ) = piVar11;
               piVar9 = piVar11;
               piVar11 = piVar12;
            }

            piVar12 = *(int**)( this + 8 );
            *piVar9 = 1;
            if (piVar8 == piVar12) {
               _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
            }
 else {
               *piVar8 = 0;
            }

            lVar2 = *(long*)( piVar8 + 4 );
            lVar3 = *(long*)( this + 8 );
            lVar4 = *(long*)( lVar2 + 8 );
            *(long*)( piVar8 + 4 ) = lVar4;
            if (lVar3 != lVar4) {
               *(int**)( lVar4 + 0x18 ) = piVar8;
            }

            lVar3 = *(long*)( piVar8 + 6 );
            *(long*)( lVar2 + 0x18 ) = lVar3;
            if (piVar8 == *(int**)( lVar3 + 8 )) {
               *(long*)( lVar3 + 8 ) = lVar2;
            }
 else {
               *(long*)( lVar3 + 0x10 ) = lVar2;
            }

            *(int**)( lVar2 + 8 ) = piVar8;
            *(long*)( piVar8 + 6 ) = lVar2;
            LAB_0010eb70:piVar12 = piVar9;
            if (*piVar9 != 0) goto LAB_0010ebb9;
         }
;
         if (*piVar10 != 0) {
            piVar10 = *(int**)( piVar12 + 4 );
            if (piVar11 == piVar10) {
               lVar2 = *(long*)( this + 8 );
               lVar3 = *(long*)( piVar10 + 2 );
               *(long*)( piVar12 + 4 ) = lVar3;
               piVar11 = piVar8;
               if (lVar2 != lVar3) {
                  *(int**)( lVar3 + 0x18 ) = piVar12;
                  piVar11 = *(int**)( piVar12 + 6 );
               }

               *(int**)( piVar10 + 6 ) = piVar11;
               if (piVar12 == *(int**)( piVar11 + 2 )) {
                  *(int**)( piVar11 + 2 ) = piVar10;
               }
 else {
                  *(int**)( piVar11 + 4 ) = piVar10;
               }

               *(int**)( piVar10 + 2 ) = piVar12;
               *(int**)( piVar12 + 6 ) = piVar10;
               piVar9 = piVar10;
               piVar11 = piVar12;
            }

            piVar12 = *(int**)( this + 8 );
            *piVar9 = 1;
            if (piVar8 == piVar12) {
               _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
            }
 else {
               *piVar8 = 0;
            }

            lVar2 = *(long*)( piVar8 + 2 );
            lVar3 = *(long*)( this + 8 );
            lVar4 = *(long*)( lVar2 + 0x10 );
            *(long*)( piVar8 + 2 ) = lVar4;
            if (lVar3 != lVar4) {
               *(int**)( lVar4 + 0x18 ) = piVar8;
            }

            lVar3 = *(long*)( piVar8 + 6 );
            *(long*)( lVar2 + 0x18 ) = lVar3;
            if (piVar8 == *(int**)( lVar3 + 0x10 )) {
               *(long*)( lVar3 + 0x10 ) = lVar2;
            }
 else {
               *(long*)( lVar3 + 8 ) = lVar2;
            }

            *(int**)( lVar2 + 0x10 ) = piVar8;
            *(long*)( piVar8 + 6 ) = lVar2;
            goto LAB_0010eb70;
         }

         LAB_0010eb8a:piVar11 = *(int**)( this + 8 );
         *piVar12 = 1;
         *piVar10 = 1;
         if (piVar8 == piVar11) {
            _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }
 else {
            *piVar8 = 0;
         }

         piVar12 = *(int**)( piVar8 + 6 );
         piVar11 = piVar8;
      }
 while ( **(int**)( piVar8 + 6 ) == 0 );
      LAB_0010ebb9:piVar8 = *(int**)this;
   }

   **(undefined4**)( piVar8 + 4 ) = 1;
   piVar11 = piVar6;
   LAB_0010ebc7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return piVar11;
}
/* RBMap<String, ShaderPreprocessor::Define*, Comparator<String>,
   DefaultAllocator>::operator[](String const&) */long RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>::operator [](RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator> *this, String *param_1) {
   undefined8 uVar1;
   char cVar2;
   long lVar3;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   Define *local_58;
   undefined8 local_50;
   CowData<char32_t> local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)this == 0) {
      puVar4 = (undefined4*)operator_new(0x40, DefaultAllocator::alloc);
      local_50 = 0;
      *puVar4 = 0;
      *(undefined8*)( puVar4 + 0xe ) = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( puVar4 + ( 4*i + 2 ) ) = (undefined1[16])0;
      }

      *(undefined4**)this = puVar4;
      for (int i = 0; i < 16; i++) {
         local_48[i] = (CowData<char32_t>)0;
      }

      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      puVar4 = *(undefined4**)this;
      uVar1 = *(undefined8*)( this + 8 );
      local_58 = (Define*)0x0;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( puVar4 + ( 2*i + 2 ) ) = uVar1;
      }

      *puVar4 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)this + 0x10 );
      if (lVar3 == *(long*)( this + 8 )) {
         local_58 = (Define*)0x0;
      }
 else {
         do {
            while (true) {
               cVar2 = String::operator <(param_1, (String*)( lVar3 + 0x30 ));
               if (cVar2 != '\0') break;
               cVar2 = String::operator <((String*)( lVar3 + 0x30 ), param_1);
               if (cVar2 == '\0') {
                  if (lVar3 != 0) goto LAB_0010ef45;
                  goto LAB_0010ef16;
               }

               lVar3 = *(long*)( lVar3 + 8 );
               if (*(long*)( this + 8 ) == lVar3) goto LAB_0010ef16;
            }
;
            lVar3 = *(long*)( lVar3 + 0x10 );
         }
 while ( *(long*)( this + 8 ) != lVar3 );
         LAB_0010ef16:local_58 = (Define*)0x0;
         if (*(long*)this == 0) {
            puVar4 = (undefined4*)operator_new(0x40, DefaultAllocator::alloc);
            local_50 = 0;
            for (int i = 0; i < 3; i++) {
               *(undefined1(*) [16])( puVar4 + ( 4*i + 2 ) ) = (undefined1[16])0;
            }

            *puVar4 = 0;
            *(undefined8*)( puVar4 + 0xe ) = 0;
            *(undefined4**)this = puVar4;
            for (int i = 0; i < 16; i++) {
               local_48[i] = (CowData<char32_t>)0;
            }

            CowData<char32_t>::_unref(local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            uVar1 = *(undefined8*)( this + 8 );
            puVar4 = *(undefined4**)this;
            *puVar4 = 1;
            *(undefined8*)( puVar4 + 6 ) = uVar1;
            *(undefined8*)( puVar4 + 2 ) = uVar1;
            *(undefined8*)( puVar4 + 4 ) = uVar1;
         }

      }

   }

   lVar3 = _insert(this, param_1, &local_58);
   LAB_0010ef45:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar3 + 0x38;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RBSet<String, Comparator<String>, DefaultAllocator>::_insert_rb_fix(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) */void RBSet<String,Comparator<String>,DefaultAllocator>::_insert_rb_fix(RBSet<String,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   iVar1 = *(int*)*(Element**)( param_1 + 0x18 );
   pEVar7 = *(Element**)( param_1 + 0x18 );
   do {
      while (true) {
         pEVar8 = pEVar7;
         if (iVar1 != 0) {
            **(undefined4**)( *(long*)this + 0x10 ) = 1;
            return;
         }

         pEVar5 = *(Element**)( pEVar8 + 0x18 );
         pEVar6 = *(Element**)( pEVar5 + 0x10 );
         pEVar7 = pEVar8;
         if (pEVar6 == pEVar8) break;
         if (*(int*)pEVar6 == 0) goto LAB_0010f13d;
         if (*(Element**)( pEVar8 + 0x10 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 8 );
            *(long*)( pEVar8 + 0x10 ) = lVar3;
            pEVar7 = pEVar5;
            if (lVar2 != lVar3) {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
            }

            *(Element**)( param_1 + 0x18 ) = pEVar7;
            if (pEVar8 == *(Element**)( pEVar7 + 8 )) {
               *(Element**)( pEVar7 + 8 ) = param_1;
            }
 else {
               *(Element**)( pEVar7 + 0x10 ) = param_1;
            }

            *(Element**)( param_1 + 8 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_0010f260;
            LAB_0010f0e6:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_0010f0e6;
            LAB_0010f260:_err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 8 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 0x10 );
         *(long*)( pEVar5 + 8 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 0x10 )) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 8 ) = lVar2;
         }

         *(Element**)( lVar2 + 0x10 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         LAB_0010f123:iVar1 = *(int*)pEVar7;
         param_1 = pEVar8;
      }
;
      pEVar6 = *(Element**)( pEVar5 + 8 );
      if (*(int*)pEVar6 != 0) {
         if (*(Element**)( pEVar8 + 8 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 0x10 );
            *(long*)( pEVar8 + 8 ) = lVar3;
            if (lVar2 == lVar3) {
               *(Element**)( param_1 + 0x18 ) = pEVar5;
               pEVar7 = pEVar5;
               LAB_0010f352:*(Element**)( pEVar7 + 0x10 ) = param_1;
            }
 else {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_0010f352;
               *(Element**)( pEVar7 + 8 ) = param_1;
            }

            *(Element**)( param_1 + 0x10 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_0010f320;
            LAB_0010f1b0:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_0010f1b0;
            LAB_0010f320:_err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 0x10 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 8 );
         *(long*)( pEVar5 + 0x10 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 8 )) {
            *(long*)( lVar3 + 8 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         *(Element**)( lVar2 + 8 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         goto LAB_0010f123;
      }

      LAB_0010f13d:pEVar7 = *(Element**)( this + 8 );
      *(int*)pEVar8 = 1;
      *(int*)pEVar6 = 1;
      if (pEVar5 == pEVar7) {
         _err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
      }
 else {
         *(int*)pEVar5 = 0;
      }

      iVar1 = *(int*)*(Element**)( pEVar5 + 0x18 );
      pEVar7 = *(Element**)( pEVar5 + 0x18 );
      param_1 = pEVar5;
   }
 while ( true );
}
/* RBMap<String, ShaderPreprocessor::Define*, Comparator<String>,
   DefaultAllocator>::_erase_fix_rb(RBMap<String, ShaderPreprocessor::Define*, Comparator<String>,
   DefaultAllocator>::Element*) */void RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>::_erase_fix_rb(RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
   int iVar1;
   Element *pEVar2;
   long lVar3;
   long lVar4;
   undefined4 *puVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   Element *pEVar9;
   int iVar10;
   char *pcVar11;
   char *pcVar12;
   pEVar8 = *(Element**)( this + 8 );
   pEVar2 = *(Element**)( *(long*)this + 0x10 );
   pEVar9 = *(Element**)( param_1 + 0x18 );
   pcVar12 = (char*)this;
   pcVar11 = (char*)param_1;
   pEVar7 = pEVar8;
   do {
      pEVar6 = pEVar9;
      if (pEVar2 == pEVar7) {
         LAB_0010f4a0:iVar10 = *(int*)pEVar8;
         joined_r0x0010f563:if (iVar10 != 1) {
            _err_print_error("_erase_fix_rb", "./core/templates/rb_map.h", 0x202, "Condition \"_data._nil->color != BLACK\" is true.", 0, 0);
            return;
         }

         return;
      }

      pEVar9 = param_1;
      if (*(int*)param_1 != 0) {
         LAB_0010f449:iVar10 = (int)pcVar11;
         pEVar7 = *(Element**)( pEVar9 + 0x10 );
         if (*(int*)pEVar7 == 1) goto LAB_0010f456;
         LAB_0010f500:if (pEVar9 != *(Element**)( pEVar6 + 8 )) {
            iVar1 = *(int*)pEVar6;
            pEVar7 = pEVar9;
            goto joined_r0x0010f50f;
         }

         if (**(int**)( pEVar9 + 8 ) == 1) {
            *(int*)pEVar7 = 1;
            if (pEVar9 == pEVar8) {
               _set_color((Element*)pcVar12, iVar10);
               pEVar8 = *(Element**)( this + 8 );
               pEVar7 = *(Element**)( pEVar9 + 0x10 );
            }
 else {
               *(int*)pEVar9 = 0;
            }

            pEVar2 = *(Element**)( pEVar7 + 8 );
            *(Element**)( pEVar9 + 0x10 ) = pEVar2;
            if (pEVar2 != pEVar8) {
               *(Element**)( pEVar2 + 0x18 ) = pEVar9;
            }

            lVar3 = *(long*)( pEVar9 + 0x18 );
            *(long*)( pEVar7 + 0x18 ) = lVar3;
            if (pEVar9 == *(Element**)( lVar3 + 8 )) {
               *(Element**)( lVar3 + 8 ) = pEVar7;
            }
 else {
               *(Element**)( lVar3 + 0x10 ) = pEVar7;
            }

            *(Element**)( pEVar7 + 8 ) = pEVar9;
            *(Element**)( pEVar9 + 0x18 ) = pEVar7;
            pEVar9 = pEVar7;
         }

         LAB_0010f6f1:if (( pEVar9 == pEVar8 ) && ( *(int*)pEVar6 == 0 )) {
            _set_color((Element*)pcVar12, iVar10);
            pEVar8 = *(Element**)( this + 8 );
         }
 else {
            *(int*)pEVar9 = *(int*)pEVar6;
         }

         puVar5 = *(undefined4**)( pEVar9 + 8 );
         *(int*)pEVar6 = 1;
         *puVar5 = 1;
         lVar3 = *(long*)( pEVar6 + 8 );
         pEVar2 = *(Element**)( lVar3 + 0x10 );
         *(Element**)( pEVar6 + 8 ) = pEVar2;
         if (pEVar2 != pEVar8) {
            *(Element**)( pEVar2 + 0x18 ) = pEVar6;
         }

         lVar4 = *(long*)( pEVar6 + 0x18 );
         *(long*)( lVar3 + 0x18 ) = lVar4;
         if (pEVar6 == *(Element**)( lVar4 + 0x10 )) {
            *(long*)( lVar4 + 0x10 ) = lVar3;
         }
 else {
            *(long*)( lVar4 + 8 ) = lVar3;
         }

         *(Element**)( lVar3 + 0x10 ) = pEVar6;
         *(long*)( pEVar6 + 0x18 ) = lVar3;
         goto LAB_0010f4a0;
      }

      *(int*)param_1 = 1;
      if (pEVar6 == pEVar8) {
         pcVar11 = "./core/templates/rb_map.h";
         pcVar12 = "_set_color";
         _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         pEVar8 = *(Element**)( this + 8 );
      }
 else {
         *(int*)pEVar6 = 0;
      }

      iVar10 = (int)pcVar11;
      if (*(Element**)( pEVar6 + 8 ) != param_1) {
         lVar3 = *(long*)( pEVar6 + 0x10 );
         pEVar9 = *(Element**)( param_1 + 8 );
         pEVar7 = *(Element**)( lVar3 + 8 );
         *(Element**)( pEVar6 + 0x10 ) = pEVar7;
         if (pEVar7 != pEVar8) {
            *(Element**)( pEVar7 + 0x18 ) = pEVar6;
         }

         lVar4 = *(long*)( pEVar6 + 0x18 );
         *(long*)( lVar3 + 0x18 ) = lVar4;
         if (pEVar6 == *(Element**)( lVar4 + 8 )) {
            *(long*)( lVar4 + 8 ) = lVar3;
         }
 else {
            *(long*)( lVar4 + 0x10 ) = lVar3;
         }

         *(Element**)( lVar3 + 8 ) = pEVar6;
         *(long*)( pEVar6 + 0x18 ) = lVar3;
         goto LAB_0010f449;
      }

      pEVar9 = *(Element**)( param_1 + 0x10 );
      *(Element**)( pEVar6 + 8 ) = pEVar9;
      if (pEVar9 != pEVar8) {
         *(Element**)( pEVar9 + 0x18 ) = pEVar6;
      }

      lVar3 = *(long*)( pEVar6 + 0x18 );
      *(long*)( param_1 + 0x18 ) = lVar3;
      if (pEVar6 == *(Element**)( lVar3 + 0x10 )) {
         *(Element**)( lVar3 + 0x10 ) = param_1;
      }
 else {
         *(Element**)( lVar3 + 8 ) = param_1;
      }

      *(Element**)( param_1 + 0x10 ) = pEVar6;
      *(Element**)( pEVar6 + 0x18 ) = param_1;
      pEVar7 = *(Element**)( pEVar9 + 0x10 );
      if (*(int*)pEVar7 != 1) goto LAB_0010f500;
      LAB_0010f456:iVar10 = (int)pcVar11;
      pEVar7 = *(Element**)( pEVar9 + 8 );
      if (*(int*)pEVar7 != 1) {
         if (*(Element**)( pEVar6 + 8 ) == pEVar9) goto LAB_0010f6f1;
         *(int*)pEVar7 = 1;
         if (pEVar9 == pEVar8) {
            _set_color((Element*)pcVar12, iVar10);
            pEVar8 = *(Element**)( this + 8 );
            pEVar7 = *(Element**)( pEVar9 + 8 );
         }
 else {
            *(int*)pEVar9 = 0;
         }

         pEVar2 = *(Element**)( pEVar7 + 0x10 );
         *(Element**)( pEVar9 + 8 ) = pEVar2;
         if (pEVar2 != pEVar8) {
            *(Element**)( pEVar2 + 0x18 ) = pEVar9;
         }

         lVar3 = *(long*)( pEVar9 + 0x18 );
         *(long*)( pEVar7 + 0x18 ) = lVar3;
         if (pEVar9 == *(Element**)( lVar3 + 0x10 )) {
            *(Element**)( lVar3 + 0x10 ) = pEVar7;
         }
 else {
            *(Element**)( lVar3 + 8 ) = pEVar7;
         }

         *(Element**)( pEVar7 + 0x10 ) = pEVar9;
         *(Element**)( pEVar9 + 0x18 ) = pEVar7;
         iVar1 = *(int*)pEVar6;
         joined_r0x0010f50f:if (( iVar1 == 0 ) && ( pEVar7 == pEVar8 )) {
            _set_color((Element*)pcVar12, iVar10);
            pEVar8 = *(Element**)( this + 8 );
         }
 else {
            *(int*)pEVar7 = iVar1;
         }

         puVar5 = *(undefined4**)( pEVar7 + 0x10 );
         *(int*)pEVar6 = 1;
         *puVar5 = 1;
         lVar3 = *(long*)( pEVar6 + 0x10 );
         pEVar2 = *(Element**)( lVar3 + 8 );
         *(Element**)( pEVar6 + 0x10 ) = pEVar2;
         if (pEVar2 != pEVar8) {
            *(Element**)( pEVar2 + 0x18 ) = pEVar6;
         }

         lVar4 = *(long*)( pEVar6 + 0x18 );
         *(long*)( lVar3 + 0x18 ) = lVar4;
         if (pEVar6 == *(Element**)( lVar4 + 8 )) {
            *(long*)( lVar4 + 8 ) = lVar3;
         }
 else {
            *(long*)( lVar4 + 0x10 ) = lVar3;
         }

         iVar10 = *(int*)pEVar8;
         *(Element**)( lVar3 + 8 ) = pEVar6;
         *(long*)( pEVar6 + 0x18 ) = lVar3;
         goto joined_r0x0010f563;
      }

      if (pEVar9 == pEVar8) {
         pcVar11 = "./core/templates/rb_map.h";
         pcVar12 = "_set_color";
         _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         iVar10 = *(int*)pEVar6;
         pEVar8 = *(Element**)( this + 8 );
      }
 else {
         *(int*)pEVar9 = 0;
         iVar10 = *(int*)pEVar6;
      }

      if (iVar10 == 0) {
         *(int*)pEVar6 = 1;
         goto LAB_0010f4a0;
      }

      pEVar9 = *(Element**)( pEVar6 + 0x18 );
      param_1 = *(Element**)( pEVar9 + 0x10 );
      pEVar7 = pEVar6;
      if (param_1 == pEVar6) {
         param_1 = *(Element**)( pEVar9 + 8 );
      }

   }
 while ( true );
}
/* RBMap<String, ShaderPreprocessor::Define*, Comparator<String>,
   DefaultAllocator>::_erase(RBMap<String, ShaderPreprocessor::Define*, Comparator<String>,
   DefaultAllocator>::Element*) */void RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator>::_erase(RBMap<String,ShaderPreprocessor::Define*,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
   int *piVar1;
   Element *pEVar2;
   Element *pEVar3;
   int *piVar4;
   char *pcVar5;
   long lVar6;
   undefined8 uVar7;
   Element *pEVar8;
   Element *pEVar9;
   piVar4 = *(int**)( param_1 + 0x10 );
   piVar1 = *(int**)( this + 8 );
   pEVar8 = param_1;
   if (piVar4 == piVar1) {
      LAB_0010f940:lVar6 = *(long*)( pEVar8 + 0x18 );
      piVar4 = *(int**)( pEVar8 + 8 );
      pEVar9 = *(Element**)( lVar6 + 0x10 );
      if (pEVar9 == pEVar8) goto LAB_0010f955;
      LAB_0010f85d:*(int**)( lVar6 + 8 ) = piVar4;
   }
 else {
      if (piVar1 != *(int**)( param_1 + 8 )) {
         pEVar8 = *(Element**)( param_1 + 0x20 );
         piVar4 = *(int**)( pEVar8 + 0x10 );
         if (piVar1 == piVar4) goto LAB_0010f940;
      }

      lVar6 = *(long*)( pEVar8 + 0x18 );
      pEVar9 = *(Element**)( lVar6 + 0x10 );
      if (pEVar9 != pEVar8) goto LAB_0010f85d;
      LAB_0010f955:*(int**)( lVar6 + 0x10 ) = piVar4;
      pEVar9 = *(Element**)( lVar6 + 8 );
   }

   if (*piVar4 == 0) {
      *(long*)( piVar4 + 6 ) = lVar6;
      *piVar4 = 1;
   }
 else if (( *(int*)pEVar8 == 1 ) && ( lVar6 != *(long*)this )) {
      _erase_fix_rb(this, pEVar9);
   }

   if (pEVar8 != param_1) {
      pEVar9 = *(Element**)( this + 8 );
      if (pEVar9 == pEVar8) {
         uVar7 = 0x21a;
         pcVar5 = "Condition \"rp == _data._nil\" is true.";
         goto LAB_0010f98a;
      }

      uVar7 = *(undefined8*)( param_1 + 0x10 );
      pEVar2 = *(Element**)( param_1 + 0x10 );
      pEVar3 = *(Element**)( param_1 + 8 );
      *(undefined8*)( pEVar8 + 8 ) = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( pEVar8 + 0x10 ) = uVar7;
      *(undefined8*)( pEVar8 + 0x18 ) = *(undefined8*)( param_1 + 0x18 );
      *(int*)pEVar8 = *(int*)param_1;
      if (pEVar9 != pEVar2) {
         *(Element**)( pEVar2 + 0x18 ) = pEVar8;
      }

      if (pEVar9 != pEVar3) {
         *(Element**)( pEVar3 + 0x18 ) = pEVar8;
      }

      lVar6 = *(long*)( param_1 + 0x18 );
      if (*(Element**)( lVar6 + 0x10 ) == param_1) {
         *(Element**)( lVar6 + 0x10 ) = pEVar8;
      }
 else {
         *(Element**)( lVar6 + 8 ) = pEVar8;
      }

   }

   lVar6 = *(long*)( param_1 + 0x20 );
   if (lVar6 != 0) {
      *(undefined8*)( lVar6 + 0x28 ) = *(undefined8*)( param_1 + 0x28 );
   }

   if (*(long*)( param_1 + 0x28 ) != 0) {
      *(long*)( *(long*)( param_1 + 0x28 ) + 0x20 ) = lVar6;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x30 ));
   Memory::free_static(param_1, false);
   *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + -1;
   if (**(int**)( this + 8 ) != 0) {
      return;
   }

   uVar7 = 0x237;
   pcVar5 = "Condition \"_data._nil->color == RED\" is true.";
   LAB_0010f98a:_err_print_error("_erase", "./core/templates/rb_map.h", uVar7, pcVar5, 0, 0);
   return;
}
/* CowData<Pair<int, int> >::_realloc(long) */undefined8 CowData<Pair<int,int>>::_realloc(CowData<Pair<int,int>> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Pair<int, int> >::resize<false>(long) */undefined8 CowData<Pair<int,int>>::resize<false>(CowData<Pair<int,int>> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   long lVar9;
   long lVar10;
   undefined8 *puVar11;
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
      lVar10 = 0;
      lVar3 = 0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
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
      lVar3 = lVar10 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_0010fca0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar9 = uVar4 + 1;
   if (lVar9 == 0) goto LAB_0010fca0;
   if (param_1 <= lVar10) {
      if (( lVar9 != lVar3 ) && ( uVar7 = _realloc(this, lVar9) ),(int)uVar7 != 0) {
         return uVar7;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   if (lVar9 == lVar3) {
      LAB_0010fc0c:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar8[-1];
      if (param_1 <= lVar3) goto LAB_0010fba0;
   }
 else {
      if (lVar10 != 0) {
         uVar7 = _realloc(this, lVar9);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_0010fc0c;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar8 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar8;
      lVar3 = 0;
   }

   puVar11 = puVar8 + param_1;
   puVar5 = puVar8 + lVar3;
   puVar6 = puVar5;
   if (( (int)puVar11 - (int)puVar5 & 8U ) != 0) {
      *puVar5 = 0;
      puVar6 = puVar5 + 1;
      if (puVar5 + 1 == puVar11) goto LAB_0010fba0;
   }

   do {
      *puVar6 = 0;
      puVar5 = puVar6 + 2;
      puVar6[1] = 0;
      puVar6 = puVar5;
   }
 while ( puVar5 != puVar11 );
   LAB_0010fba0:puVar8[-1] = param_1;
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ScriptLanguage::CodeCompletionOption::CodeCompletionOption(String const&,
   ScriptLanguage::CodeCompletionKind, int, String const&) */void ScriptLanguage::CodeCompletionOption::CodeCompletionOption(CodeCompletionOption *this, CowData *param_1, undefined4 param_3, undefined4 param_4, CowData *param_5) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   uVar2 = _UNK_00110d88;
   uVar1 = __LC89;
   *(undefined4*)this = 9;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined4*)( this + 0x30 ) = 0;
   *(undefined8*)( this + 0x50 ) = 0;
   *(undefined8*)( this + 0x60 ) = 0;
   *(undefined8*)( this + 0x18 ) = uVar1;
   *(undefined8*)( this + 0x20 ) = uVar2;
   *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
   iVar3 = CowData<Pair<int,int>>::resize<false>((CowData<Pair<int,int>>*)( this + 0x60 ), 1);
   if (iVar3 == 0) {
      if (*(long*)( this + 0x60 ) == 0) {
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( *(long*)( this + 0x60 ) + -8 );
         if (0 < lVar4) {
            CowData<Pair<int,int>>::_copy_on_write((CowData<Pair<int,int>>*)( this + 0x60 ));
            **(undefined8**)( this + 0x60 ) = 0xffffffffffffffff;
            goto LAB_0010fdc3;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, 0, lVar4, "p_index", "size()", "", false, false);
   }

   LAB_0010fdc3:*(undefined4*)( this + 0x68 ) = 0x400;
   *(undefined8*)( this + 0x70 ) = 0;
   Array::Array((Array*)( this + 0x78 ));
   local_58 = 0;
   local_60 = 0;
   local_50 = (undefined1[16])0x0;
   Array::set_typed((uint)(Array*)( this + 0x78 ), (StringName*)0x2, (Variant*)&local_60);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   lVar4 = *(long*)param_1;
   if (*(long*)( this + 8 ) != lVar4) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), param_1);
      lVar4 = *(long*)param_1;
   }

   if (*(long*)( this + 0x10 ) != lVar4) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x10 ), param_1);
   }

   *(undefined4*)this = param_3;
   lVar4 = *(long*)param_5;
   *(undefined4*)( this + 0x68 ) = param_4;
   if (*(long*)( this + 0x70 ) == lVar4) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x70 ), param_5);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<bool>::_realloc(long) */undefined8 CowData<bool>::_realloc(CowData<bool> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<bool>::resize<false>(long) */undefined8 CowData<bool>::resize<false>(CowData<bool> *this, long param_1) {
   long lVar1;
   long *plVar2;
   code *pcVar3;
   ulong uVar4;
   long lVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   long lVar9;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar5 = *(long*)this;
   if (lVar5 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      LAB_0011017e:lVar9 = 0;
      lVar5 = 0;
   }
 else {
      lVar9 = *(long*)( lVar5 + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar2 = (long*)( lVar5 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar5 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      if (lVar9 == 0) goto LAB_0011017e;
      uVar4 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar5 = ( uVar4 | uVar4 >> 0x20 ) + 1;
   }

   uVar4 = param_1 - 1U | param_1 - 1U >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar1 = uVar4 + 1;
   if (lVar9 < param_1) {
      if (lVar1 != lVar5) {
         if (lVar9 == 0) {
            puVar6 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar6 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar8 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8**)this = puVar8;
            goto LAB_001100bc;
         }

         uVar7 = _realloc(this, lVar1);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

      }

      puVar8 = *(undefined8**)this;
      if (puVar8 != (undefined8*)0x0) {
         LAB_001100bc:puVar8[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar1 != lVar5 ) && ( uVar7 = _realloc(this, lVar1) ),(int)uVar7 != 0) {
         return uVar7;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* RBMap<String, List<ShaderPreprocessor::Region, DefaultAllocator>, Comparator<String>,
   DefaultAllocator>::_insert_rb_fix(RBMap<String, List<ShaderPreprocessor::Region,
   DefaultAllocator>, Comparator<String>, DefaultAllocator>::Element*) */void RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>::_insert_rb_fix(RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   iVar1 = *(int*)*(Element**)( param_1 + 0x18 );
   pEVar7 = *(Element**)( param_1 + 0x18 );
   do {
      while (true) {
         pEVar8 = pEVar7;
         if (iVar1 != 0) {
            **(undefined4**)( *(long*)this + 0x10 ) = 1;
            return;
         }

         pEVar5 = *(Element**)( pEVar8 + 0x18 );
         pEVar6 = *(Element**)( pEVar5 + 0x10 );
         pEVar7 = pEVar8;
         if (pEVar6 == pEVar8) break;
         if (*(int*)pEVar6 == 0) goto LAB_0011027d;
         if (*(Element**)( pEVar8 + 0x10 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 8 );
            *(long*)( pEVar8 + 0x10 ) = lVar3;
            pEVar7 = pEVar5;
            if (lVar2 != lVar3) {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
            }

            *(Element**)( param_1 + 0x18 ) = pEVar7;
            if (pEVar8 == *(Element**)( pEVar7 + 8 )) {
               *(Element**)( pEVar7 + 8 ) = param_1;
            }
 else {
               *(Element**)( pEVar7 + 0x10 ) = param_1;
            }

            *(Element**)( param_1 + 8 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_001103a0;
            LAB_00110226:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00110226;
            LAB_001103a0:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 8 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 0x10 );
         *(long*)( pEVar5 + 8 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 0x10 )) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 8 ) = lVar2;
         }

         *(Element**)( lVar2 + 0x10 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         LAB_00110263:iVar1 = *(int*)pEVar7;
         param_1 = pEVar8;
      }
;
      pEVar6 = *(Element**)( pEVar5 + 8 );
      if (*(int*)pEVar6 != 0) {
         if (*(Element**)( pEVar8 + 8 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 0x10 );
            *(long*)( pEVar8 + 8 ) = lVar3;
            if (lVar2 == lVar3) {
               *(Element**)( param_1 + 0x18 ) = pEVar5;
               pEVar7 = pEVar5;
               LAB_00110492:*(Element**)( pEVar7 + 0x10 ) = param_1;
            }
 else {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_00110492;
               *(Element**)( pEVar7 + 8 ) = param_1;
            }

            *(Element**)( param_1 + 0x10 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00110460;
            LAB_001102f0:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_001102f0;
            LAB_00110460:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 0x10 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 8 );
         *(long*)( pEVar5 + 0x10 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 8 )) {
            *(long*)( lVar3 + 8 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         *(Element**)( lVar2 + 8 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         goto LAB_00110263;
      }

      LAB_0011027d:pEVar7 = *(Element**)( this + 8 );
      *(int*)pEVar8 = 1;
      *(int*)pEVar6 = 1;
      if (pEVar5 == pEVar7) {
         _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
      }
 else {
         *(int*)pEVar5 = 0;
      }

      iVar1 = *(int*)*(Element**)( pEVar5 + 0x18 );
      pEVar7 = *(Element**)( pEVar5 + 0x18 );
      param_1 = pEVar5;
   }
 while ( true );
}
/* RBMap<String, List<ShaderPreprocessor::Region, DefaultAllocator>, Comparator<String>,
   DefaultAllocator>::_insert(String const&, List<ShaderPreprocessor::Region, DefaultAllocator>
   const&) */Element * __thiscall
RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>
::_insert(RBMap<String,List<ShaderPreprocessor::Region,DefaultAllocator>,Comparator<String>,DefaultAllocator>
          *this,String *param_1,List *param_2){
   long lVar1;
   undefined8 uVar2;
   char cVar3;
   Element *pEVar4;
   undefined1(*pauVar5)[16];
   CowData<char32_t> *pCVar6;
   Element *pEVar7;
   Element *pEVar8;
   long lVar9;
   Element *pEVar10;
   CowData *pCVar11;
   long *plVar12;
   long in_FS_OFFSET;
   bool bVar13;
   Element *local_70;
   long local_60;
   long local_58;
   undefined1(*local_50[2])[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pEVar8 = *(Element**)this;
   pEVar4 = *(Element**)( pEVar8 + 0x10 );
   if (*(Element**)( pEVar8 + 0x10 ) != *(Element**)( this + 8 )) {
      do {
         while (true) {
            pEVar8 = pEVar4;
            cVar3 = String::operator <(param_1, (String*)( pEVar8 + 0x30 ));
            if (cVar3 != '\0') break;
            cVar3 = String::operator <((String*)( pEVar8 + 0x30 ), param_1);
            if (cVar3 == '\0') {
               plVar12 = *(long**)( pEVar8 + 0x38 );
               if (plVar12 == (long*)0x0) goto LAB_001109ad;
               goto LAB_00110939;
            }

            pEVar4 = *(Element**)( pEVar8 + 8 );
            if (*(Element**)( this + 8 ) == *(Element**)( pEVar8 + 8 )) goto LAB_0011052d;
         }
;
         pEVar4 = *(Element**)( pEVar8 + 0x10 );
      }
 while ( *(Element**)( this + 8 ) != *(Element**)( pEVar8 + 0x10 ) );
   }

   LAB_0011052d:pEVar4 = (Element*)operator_new(0x40, DefaultAllocator::alloc);
   local_58 = 0;
   local_60 = *(long*)param_1;
   if (local_60 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
      local_60 = local_58;
   }

   local_50[0] = (undefined1(*) [16])0x0;
   if (( *(long**)param_2 == (long*)0x0 ) || ( pCVar11 = (CowData*)**(long**)param_2 ),pCVar11 == (CowData*)0x0) {
      *(undefined4*)pEVar4 = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( pEVar4 + ( 16*i + 8 ) ) = (undefined1[16])0;
      }

      if (local_60 == 0) {
         *(undefined8*)( pEVar4 + 0x38 ) = 0;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( pEVar4 + 0x30 ), (CowData*)&local_58);
         *(undefined8*)( pEVar4 + 0x38 ) = 0;
      }

   }
 else {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
      uVar2 = _LC90;
      local_50[0] = pauVar5;
      do {
         while (true) {
            pCVar6 = (CowData<char32_t>*)operator_new(0x38, DefaultAllocator::alloc);
            *(undefined8*)pCVar6 = 0;
            *(undefined1(*) [16])( pCVar6 + 0x18 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( pCVar6 + 0x28 ) = (undefined1[16])0x0;
            lVar9 = *(long*)pCVar11;
            *(undefined8*)( pCVar6 + 8 ) = uVar2;
            pCVar6[0x10] = (CowData<char32_t>)0x0;
            if (lVar9 != 0) {
               CowData<char32_t>::_ref(pCVar6, pCVar11);
            }

            *(undefined8*)( pCVar6 + 8 ) = *(undefined8*)( pCVar11 + 8 );
            pCVar6[0x10] = *(CowData<char32_t>*)( pCVar11 + 0x10 );
            *(undefined8*)( pCVar6 + 0x18 ) = *(undefined8*)( pCVar11 + 0x18 );
            lVar9 = *(long*)( *pauVar5 + 8 );
            *(undefined8*)( pCVar6 + 0x20 ) = 0;
            *(long*)( pCVar6 + 0x28 ) = lVar9;
            *(undefined1(**) [16])( pCVar6 + 0x30 ) = pauVar5;
            if (lVar9 != 0) {
               *(CowData<char32_t>**)( lVar9 + 0x20 ) = pCVar6;
            }

            lVar9 = *(long*)*pauVar5;
            *(CowData<char32_t>**)( *pauVar5 + 8 ) = pCVar6;
            if (lVar9 != 0) break;
            pCVar11 = *(CowData**)( pCVar11 + 0x20 );
            *(int*)pauVar5[1] = *(int*)pauVar5[1] + 1;
            *(CowData<char32_t>**)*pauVar5 = pCVar6;
            if (pCVar11 == (CowData*)0x0) goto LAB_00110685;
         }
;
         pCVar11 = *(CowData**)( pCVar11 + 0x20 );
         *(int*)pauVar5[1] = *(int*)pauVar5[1] + 1;
      }
 while ( pCVar11 != (CowData*)0x0 );
      LAB_00110685:*(undefined4*)pEVar4 = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( pEVar4 + ( 16*i + 8 ) ) = (undefined1[16])0;
      }

      if (local_60 == 0) {
         *(undefined8*)( pEVar4 + 0x38 ) = 0;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( pEVar4 + 0x30 ), (CowData*)&local_58);
         *(undefined8*)( pEVar4 + 0x38 ) = 0;
      }

      pCVar11 = *(CowData**)*pauVar5;
      if (pCVar11 != (CowData*)0x0) {
         pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( pEVar4 + 0x38 ) = pauVar5;
         *(undefined4*)pauVar5[1] = 0;
         *pauVar5 = (undefined1[16])0x0;
         do {
            while (true) {
               pCVar6 = (CowData<char32_t>*)operator_new(0x38, DefaultAllocator::alloc);
               *(undefined8*)pCVar6 = 0;
               *(undefined1(*) [16])( pCVar6 + 0x18 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( pCVar6 + 0x28 ) = (undefined1[16])0x0;
               lVar9 = *(long*)pCVar11;
               *(undefined8*)( pCVar6 + 8 ) = uVar2;
               pCVar6[0x10] = (CowData<char32_t>)0x0;
               if (lVar9 != 0) {
                  CowData<char32_t>::_ref(pCVar6, pCVar11);
               }

               *(undefined8*)( pCVar6 + 8 ) = *(undefined8*)( pCVar11 + 8 );
               pCVar6[0x10] = *(CowData<char32_t>*)( pCVar11 + 0x10 );
               *(undefined8*)( pCVar6 + 0x18 ) = *(undefined8*)( pCVar11 + 0x18 );
               plVar12 = *(long**)( pEVar4 + 0x38 );
               lVar9 = plVar12[1];
               *(undefined8*)( pCVar6 + 0x20 ) = 0;
               *(long**)( pCVar6 + 0x30 ) = plVar12;
               *(long*)( pCVar6 + 0x28 ) = lVar9;
               if (lVar9 != 0) {
                  *(CowData<char32_t>**)( lVar9 + 0x20 ) = pCVar6;
               }

               plVar12[1] = (long)pCVar6;
               if (*plVar12 != 0) break;
               pCVar11 = *(CowData**)( pCVar11 + 0x20 );
               *(int*)( plVar12 + 2 ) = (int)plVar12[2] + 1;
               *plVar12 = (long)pCVar6;
               if (pCVar11 == (CowData*)0x0) goto LAB_001107bc;
            }
;
            pCVar11 = *(CowData**)( pCVar11 + 0x20 );
            *(int*)( plVar12 + 2 ) = (int)plVar12[2] + 1;
         }
 while ( pCVar11 != (CowData*)0x0 );
      }

   }

   LAB_001107bc:local_70 = pEVar4 + 8;
   List<ShaderPreprocessor::Region,DefaultAllocator>::~List((List<ShaderPreprocessor::Region,DefaultAllocator>*)local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   *(Element**)( pEVar4 + 0x18 ) = pEVar8;
   pEVar10 = *(Element**)( this + 8 );
   *(Element**)local_70 = pEVar10;
   *(Element**)( pEVar4 + 0x10 ) = pEVar10;
   if (*(Element**)this == pEVar8) {
      LAB_0011080d:*(Element**)( pEVar8 + 0x10 ) = pEVar4;
   }
 else {
      cVar3 = String::operator <(param_1, (String*)( pEVar8 + 0x30 ));
      if (cVar3 != '\0') {
         pEVar10 = *(Element**)( pEVar4 + 8 );
         goto LAB_0011080d;
      }

      *(Element**)( pEVar8 + 8 ) = pEVar4;
      pEVar10 = *(Element**)( pEVar4 + 8 );
   }

   pEVar8 = pEVar4;
   if (*(Element**)( this + 8 ) == pEVar10) {
      do {
         pEVar7 = *(Element**)( pEVar8 + 0x18 );
         bVar13 = pEVar8 == *(Element**)( pEVar7 + 8 );
         pEVar8 = pEVar7;
      }
 while ( bVar13 );
      if (*(Element**)this == pEVar7) {
         pEVar7 = (Element*)0x0;
      }

   }
 else {
      do {
         pEVar8 = pEVar10 + 0x10;
         pEVar7 = pEVar10;
         pEVar10 = *(Element**)pEVar8;
      }
 while ( *(Element**)( this + 8 ) != *(Element**)pEVar8 );
   }

   *(Element**)( pEVar4 + 0x20 ) = pEVar7;
   pEVar10 = *(Element**)( pEVar4 + 0x10 );
   pEVar8 = pEVar4;
   if (*(Element**)( this + 8 ) == *(Element**)( pEVar4 + 0x10 )) {
      do {
         pEVar10 = pEVar8;
         pEVar8 = *(Element**)( pEVar10 + 0x18 );
      }
 while ( pEVar10 == *(Element**)( pEVar8 + 0x10 ) );
      if (*(Element**)this != pEVar10) goto LAB_0011085c;
      *(undefined8*)( pEVar4 + 0x28 ) = 0;
      if (pEVar7 != (Element*)0x0) goto LAB_00110866;
   }
 else {
      do {
         pEVar8 = pEVar10;
         pEVar10 = *(Element**)( pEVar8 + 8 );
      }
 while ( *(Element**)( this + 8 ) != *(Element**)( pEVar8 + 8 ) );
      LAB_0011085c:*(Element**)( pEVar4 + 0x28 ) = pEVar8;
      if (pEVar7 != (Element*)0x0) {
         LAB_00110866:*(Element**)( pEVar7 + 0x28 ) = pEVar4;
         pEVar8 = *(Element**)( pEVar4 + 0x28 );
         if (pEVar8 == (Element*)0x0) goto LAB_00110878;
      }

      *(Element**)( pEVar8 + 0x20 ) = pEVar4;
   }

   LAB_00110878:*(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
   _insert_rb_fix(this, pEVar4);
   pEVar8 = pEVar4;
   LAB_00110887:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pEVar8;
   while (true) {
      if (*(long**)( pCVar6 + 0x30 ) == plVar12) {
         lVar9 = *(long*)( pCVar6 + 0x20 );
         lVar1 = *(long*)( pCVar6 + 0x28 );
         *plVar12 = lVar9;
         if (pCVar6 == (CowData<char32_t>*)plVar12[1]) {
            plVar12[1] = lVar1;
         }

         if (lVar1 != 0) {
            *(long*)( lVar1 + 0x20 ) = lVar9;
            lVar9 = *(long*)( pCVar6 + 0x20 );
         }

         if (lVar9 != 0) {
            *(long*)( lVar9 + 0x28 ) = lVar1;
         }

         CowData<char32_t>::_unref(pCVar6);
         Memory::free_static(pCVar6, false);
         *(int*)( plVar12 + 2 ) = (int)plVar12[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar12 = *(long**)( pEVar8 + 0x38 );
      if ((int)plVar12[2] == 0) break;
      LAB_00110939:pCVar6 = (CowData<char32_t>*)*plVar12;
      if (pCVar6 == (CowData<char32_t>*)0x0) goto LAB_001109b0;
   }
;
   Memory::free_static(plVar12, false);
   *(undefined8*)( pEVar8 + 0x38 ) = 0;
   LAB_001109ad:plVar12 = (long*)0x0;
   LAB_001109b0:if (( *(long**)param_2 != (long*)0x0 ) && ( pCVar11 = (CowData*)**(long**)param_2 ),pCVar11 != (CowData*)0x0) {
      uVar2 = _LC90;
      if (plVar12 == (long*)0x0) {
         pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( pEVar8 + 0x38 ) = pauVar5;
         *(undefined4*)pauVar5[1] = 0;
         *pauVar5 = (undefined1[16])0x0;
         uVar2 = _LC90;
      }

      do {
         while (true) {
            pCVar6 = (CowData<char32_t>*)operator_new(0x38, DefaultAllocator::alloc);
            *(undefined8*)pCVar6 = 0;
            *(undefined1(*) [16])( pCVar6 + 0x18 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( pCVar6 + 0x28 ) = (undefined1[16])0x0;
            lVar9 = *(long*)pCVar11;
            *(undefined8*)( pCVar6 + 8 ) = uVar2;
            pCVar6[0x10] = (CowData<char32_t>)0x0;
            if (lVar9 != 0) {
               CowData<char32_t>::_ref(pCVar6, pCVar11);
            }

            *(undefined8*)( pCVar6 + 8 ) = *(undefined8*)( pCVar11 + 8 );
            pCVar6[0x10] = *(CowData<char32_t>*)( pCVar11 + 0x10 );
            *(undefined8*)( pCVar6 + 0x18 ) = *(undefined8*)( pCVar11 + 0x18 );
            plVar12 = *(long**)( pEVar8 + 0x38 );
            lVar9 = plVar12[1];
            *(undefined8*)( pCVar6 + 0x20 ) = 0;
            *(long**)( pCVar6 + 0x30 ) = plVar12;
            *(long*)( pCVar6 + 0x28 ) = lVar9;
            if (lVar9 != 0) {
               *(CowData<char32_t>**)( lVar9 + 0x20 ) = pCVar6;
            }

            plVar12[1] = (long)pCVar6;
            if (*plVar12 != 0) break;
            pCVar11 = *(CowData**)( pCVar11 + 0x20 );
            *(int*)( plVar12 + 2 ) = (int)plVar12[2] + 1;
            *plVar12 = (long)pCVar6;
            if (pCVar11 == (CowData*)0x0) goto LAB_00110887;
         }
;
         pCVar11 = *(CowData**)( pCVar11 + 0x20 );
         *(int*)( plVar12 + 2 ) = (int)plVar12[2] + 1;
      }
 while ( pCVar11 != (CowData*)0x0 );
   }

   goto LAB_00110887;
}
/* WARNING: Control flow encountered bad instruction data *//* ScriptLanguage::CodeCompletionOption::CodeCompletionOption(String const&,
   ScriptLanguage::CodeCompletionKind, int, String const&) */void ScriptLanguage::CodeCompletionOption::CodeCompletionOption(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<ShaderPreprocessor::Region, DefaultAllocator>::~List() */void List<ShaderPreprocessor::Region,DefaultAllocator>::~List(List<ShaderPreprocessor::Region,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderPreprocessor::State::~State() */void ShaderPreprocessor::State::~State(State *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ScriptLanguage::CodeCompletionOption::~CodeCompletionOption() */void ScriptLanguage::CodeCompletionOption::~CodeCompletionOption(CodeCompletionOption *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


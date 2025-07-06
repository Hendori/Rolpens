/* VariantParser::StreamFile::is_utf8() const */undefined8 VariantParser::StreamFile::is_utf8(void) {
   return 1;
}/* VariantParser::StreamFile::_is_eof() const */void VariantParser::StreamFile::_is_eof(StreamFile *this) {
   for (int i_385 = 0; i_385 < 2; i_385++) {
      /* WARNING: Could not recover jumptable at 0x0010001e. Too many branches */
   }
   ( **(code**)( **(long**)( this + 0x2018 ) + 0x1d8 ) )();
   return;
}/* VariantParser::StreamString::is_utf8() const */undefined8 VariantParser::StreamString::is_utf8(void) {
   return 0;
}/* VariantParser::StreamString::_is_eof() const */undefined8 VariantParser::StreamString::_is_eof(StreamString *this) {
   int iVar1;
   ulong uVar2;
   if (*(long*)( this + 0x2018 ) == 0) {
      uVar2 = 0;
   } else {
      iVar1 = (int)*(undefined8*)( *(long*)( this + 0x2018 ) + -8 );
      uVar2 = ( ulong )(iVar1 + -1 + ( uint )(iVar1 == 0));
   }
   return CONCAT71(( int7 )(uVar2 >> 8), (int)uVar2 < *(int*)( this + 0x2020 ));
}/* VariantParser::StreamFile::_read_buffer(char32_t*, unsigned int) */ulong VariantParser::StreamFile::_read_buffer(StreamFile *this, wchar32 *param_1, uint param_2) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   ulong uVar5;
   undefined1 *puVar6;
   undefined1 *puVar8;
   long in_FS_OFFSET;
   undefined1 auStack_28[8];
   long local_20;
   undefined1 *puVar7;
   puVar6 = auStack_28;
   puVar7 = auStack_28;
   puVar8 = auStack_28;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0) {
      _err_print_error("_read_buffer", "core/variant/variant_parser.cpp", 0x4a, "Condition \"!p_num_chars\" is true. Returning: 0", 0, 0);
      uVar4 = 0;
   } else {
      puVar8 = auStack_28;
      while (puVar7 != auStack_28 + -((ulong)param_2 + 0x17 & 0xfffffffffffff000)) {
         puVar6 = puVar8 + -0x1000;
         *(undefined8*)( puVar8 + -8 ) = *(undefined8*)( puVar8 + -8 );
         puVar7 = puVar8 + -0x1000;
         puVar8 = puVar8 + -0x1000;
      };
      uVar4 = ( ulong )(( uint )((ulong)param_2 + 0x17) & 0xff0);
      lVar3 = -uVar4;
      puVar8 = puVar6 + lVar3;
      if (uVar4 != 0) {
         *(undefined8*)( puVar6 + -8 ) = *(undefined8*)( puVar6 + -8 );
      }
      plVar1 = *(long**)( this + 0x2018 );
      pcVar2 = *(code**)( *plVar1 + 0x220 );
      *(undefined8*)( puVar6 + lVar3 + -8 ) = 0x10010a;
      uVar4 = ( *pcVar2 )(plVar1, ( ulong )(puVar6 + lVar3 + 0xf) & 0xfffffffffffffff0);
      if (uVar4 == 0xffffffffffffffff) {
         *(undefined8*)( puVar6 + lVar3 + -8 ) = 0x1001ae;
         _err_print_error("_read_buffer", "core/variant/variant_parser.cpp", 0x4e, "Condition \"num_read == (18446744073709551615UL)\" is true. Returning: 0", 0, 0);
         uVar4 = 0;
      } else {
         uVar5 = 0;
         puVar8 = puVar6 + lVar3;
         if (uVar4 != 0) {
            do {
               param_1[uVar5] = ( uint ) * (byte*)( ( ( ulong )(puVar6 + lVar3 + 0xf) & 0xfffffffffffffff0 ) + uVar5 );
               uVar5 = ( ulong )((int)uVar5 + 1);
               puVar8 = puVar6 + lVar3;
            } while ( uVar5 < uVar4 );
         }
      }
   }
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      *(undefined**)( puVar8 + -8 ) = &UNK_001001b7;
      __stack_chk_fail();
   }
   return uVar4;
}/* VariantParser::StreamString::_read_buffer(char32_t*, unsigned int) */uint VariantParser::StreamString::_read_buffer(StreamString *this, wchar32 *param_1, uint param_2) {
   int iVar1;
   long lVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   if (param_2 == 0) {
      _err_print_error("_read_buffer", "core/variant/variant_parser.cpp", 99, "Condition \"!p_num_chars\" is true. Returning: 0", 0, 0);
      uVar5 = 0;
   } else if (param_1 == (wchar32*)0x0) {
      _err_print_error("_read_buffer", "core/variant/variant_parser.cpp", 100, "Parameter \"p_buffer\" is null.", 0, 0);
      uVar5 = 0;
   } else {
      lVar2 = *(long*)( this + 0x2018 );
      if (lVar2 == 0) {
         iVar3 = 0;
      } else {
         iVar3 = (int)*(undefined8*)( lVar2 + -8 );
         iVar3 = iVar3 + -1 + ( uint )(iVar3 == 0);
      }
      iVar1 = *(int*)( this + 0x2020 );
      uVar4 = iVar3 - iVar1;
      uVar5 = 0;
      if (-1 < (int)uVar4) {
         uVar5 = uVar4;
      }
      if ((int)param_2 <= (int)uVar5) {
         memcpy(param_1, (void*)( lVar2 + (long)iVar1 * 4 ), (ulong)param_2 << 2);
         *(uint*)( this + 0x2020 ) = *(int*)( this + 0x2020 ) + param_2;
         return param_2;
      }
      if (0 < (int)uVar4) {
         param_1 = (wchar32*)memcpy(param_1, (void*)( lVar2 + (long)iVar1 * 4 ), (long)(int)uVar5 * 4);
         *(uint*)( this + 0x2020 ) = *(int*)( this + 0x2020 ) + uVar5;
      }
      param_1[(int)uVar5] = L'\0';
   }
   return uVar5;
}/* stor_fix(String const&) */undefined8 stor_fix(String *param_1) {
   char cVar1;
   undefined8 uVar2;
   cVar1 = String::operator ==(param_1, "inf");
   uVar2 = _LC5;
   if (cVar1 == '\0') {
      cVar1 = String::operator ==(param_1, "inf_neg");
      uVar2 = _LC6;
      if (cVar1 == '\0') {
         cVar1 = String::operator ==(param_1, "nan");
         if (cVar1 == '\0') {
            return _LC8;
         }
         return _LC7;
      }
   }
   return uVar2;
}/* StringName::TEMPNAMEPLACEHOLDERVALUE(StringName&&) [clone .part.0] */void StringName::operator =(StringName *this, StringName *param_1) {
   StringName::unref();
   *(undefined8*)this = *(undefined8*)param_1;
   *(undefined8*)param_1 = 0;
   return;
}/* VariantParser::Stream::is_eof() const [clone .part.0] */void VariantParser::Stream::is_eof(Stream *this) {
   for (int i_386 = 0; i_386 < 2; i_386++) {
      /* WARNING: Could not recover jumptable at 0x001003a3. Too many branches */
   }
   ( **(code**)( *(long*)this + 8 ) )();
   return;
}/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */void CowData<Vector3>::_copy_on_write(CowData<Vector3> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
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
   __n = lVar2 * 0xc;
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
}/* CowData<Color>::_copy_on_write() [clone .isra.0] */void CowData<Color>::_copy_on_write(CowData<Color> *this) {
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
   __n = lVar2 * 0x10;
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
}/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */void CowData<Vector2>::_copy_on_write(CowData<Vector2> *this) {
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
}/* CowData<Vector4>::_copy_on_write() [clone .isra.0] */void CowData<Vector4>::_copy_on_write(CowData<Vector4> *this) {
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
   __n = lVar2 * 0x10;
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
}/* CowData<char32_t>::TEMPNAMEPLACEHOLDERVALUE(CowData<char32_t>&&) [clone .part.0] */void CowData<char32_t>::operator =(CowData<char32_t> *this, CowData *param_1) {
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
      } else {
         *(undefined8*)this = 0;
      }
   }
   *(undefined8*)this = *(undefined8*)param_1;
   *(undefined8*)param_1 = 0;
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
}/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
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
}/* CowData<long>::_copy_on_write() [clone .isra.0] */void CowData<long>::_copy_on_write(CowData<long> *this) {
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
}/* CowData<double>::_copy_on_write() [clone .isra.0] */void CowData<double>::_copy_on_write(CowData<double> *this) {
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
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* rtos_fix(double) */void rtos_fix(double param_1) {
   long lVar1;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0.0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
      goto LAB_00100cc4;
   }
   if (NAN(param_1)) {
      *(undefined8*)in_RDI = 0;
   } else {
      if ((double)( (ulong)param_1 & __LC27 ) <= __LC28) {
         rtoss(param_1);
         goto LAB_00100cc4;
      }
      *(undefined8*)in_RDI = 0;
      if (param_1 <= 0.0) {
         String::parse_latin1(in_RDI);
         goto LAB_00100cc4;
      }
   }
   String::parse_latin1(in_RDI);
   LAB_00100cc4:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] */void CowData<Vector3>::resize<false>(CowData<Vector3> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 *puVar3;
   char *pcVar4;
   long lVar5;
   ulong uVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   char *pcVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }
   lVar5 = *(long*)this;
   if (lVar5 == 0) {
      if (param_1 == 0) {
         return;
      }
      _copy_on_write(this);
      lVar10 = 0;
      lVar5 = 0;
   } else {
      lVar10 = *(long*)( lVar5 + -8 );
      if (param_1 == lVar10) {
         return;
      }
      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar5 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }
         lVar5 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
         return;
      }
      _copy_on_write(this);
      lVar5 = lVar10 * 0xc;
      if (lVar5 != 0) {
         uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
         uVar6 = uVar6 | uVar6 >> 2;
         uVar6 = uVar6 | uVar6 >> 4;
         uVar6 = uVar6 | uVar6 >> 8;
         uVar6 = uVar6 | uVar6 >> 0x10;
         lVar5 = ( uVar6 | uVar6 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 0xc != 0) {
      uVar6 = param_1 * 0xc - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = uVar6 | uVar6 >> 0x20;
      if (uVar6 != 0xffffffffffffffff) {
         if (param_1 <= lVar10) {
            puVar8 = *(undefined8**)this;
            if (uVar6 + 1 == lVar5) {
               if (puVar8 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }
               LAB_00100ed2:puVar8[-1] = param_1;
               return;
            }
            puVar3 = (undefined8*)Memory::realloc_static(puVar8 + -2, uVar6 + 0x11, false);
            if (puVar3 != (undefined8*)0x0) {
               puVar8 = puVar3 + 2;
               *puVar3 = 1;
               *(undefined8**)this = puVar8;
               goto LAB_00100ed2;
            }
            LAB_00101030:pcVar4 = "Parameter \"mem_new\" is null.";
            uVar7 = 0x1a9;
            pcVar9 = "_realloc";
            goto LAB_00101018;
         }
         if (uVar6 + 1 == lVar5) {
            puVar8 = *(undefined8**)this;
            if (puVar8 == (undefined8*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }
            lVar5 = puVar8[-1];
            LAB_00100f41:if (param_1 <= lVar5) goto LAB_00100ea7;
         } else {
            if (lVar10 != 0) {
               puVar3 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar6 + 0x11, false);
               if (puVar3 == (undefined8*)0x0) goto LAB_00101030;
               puVar8 = puVar3 + 2;
               *puVar3 = 1;
               *(undefined8**)this = puVar8;
               lVar5 = puVar3[1];
               goto LAB_00100f41;
            }
            puVar3 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
            if (puVar3 == (undefined8*)0x0) {
               pcVar4 = "Parameter \"mem_new\" is null.";
               uVar7 = 0x171;
               pcVar9 = "resize";
               goto LAB_00101018;
            }
            puVar8 = puVar3 + 2;
            *puVar3 = 1;
            puVar3[1] = 0;
            *(undefined8**)this = puVar8;
            lVar5 = 0;
         }
         memset((void*)( (long)puVar8 + lVar5 * 0xc ), 0, ( param_1 - lVar5 ) * 0xc);
         LAB_00100ea7:puVar8[-1] = param_1;
         return;
      }
   }
   pcVar4 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   uVar7 = 0x16a;
   pcVar9 = "resize";
   LAB_00101018:_err_print_error(pcVar9, "./core/templates/cowdata.h", uVar7, pcVar4, 0, 0);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] */void CowData<Vector2>::resize<false>(CowData<Vector2> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   char *pcVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   char *pcVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }
   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }
      _copy_on_write(this);
      lVar10 = 0;
      lVar3 = 0;
   } else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }
      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }
         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
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
   if (param_1 * 8 != 0) {
      uVar4 = param_1 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (param_1 <= lVar10) {
            puVar8 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar8 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }
               LAB_001011e2:puVar8[-1] = param_1;
               return;
            }
            puVar5 = (undefined8*)Memory::realloc_static(puVar8 + -2, uVar4 + 0x11, false);
            if (puVar5 != (undefined8*)0x0) {
               puVar8 = puVar5 + 2;
               *puVar5 = 1;
               *(undefined8**)this = puVar8;
               goto LAB_001011e2;
            }
            LAB_00101340:pcVar6 = "Parameter \"mem_new\" is null.";
            uVar7 = 0x1a9;
            pcVar9 = "_realloc";
            goto LAB_00101328;
         }
         if (uVar4 + 1 == lVar3) {
            puVar8 = *(undefined8**)this;
            if (puVar8 == (undefined8*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }
            lVar3 = puVar8[-1];
            LAB_00101251:if (param_1 <= lVar3) goto LAB_001011bd;
         } else {
            if (lVar10 != 0) {
               puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) goto LAB_00101340;
               puVar8 = puVar5 + 2;
               *puVar5 = 1;
               *(undefined8**)this = puVar8;
               lVar3 = puVar5[1];
               goto LAB_00101251;
            }
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               pcVar6 = "Parameter \"mem_new\" is null.";
               uVar7 = 0x171;
               pcVar9 = "resize";
               goto LAB_00101328;
            }
            puVar8 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar8;
            lVar3 = 0;
         }
         memset(puVar8 + lVar3, 0, ( param_1 - lVar3 ) * 8);
         LAB_001011bd:puVar8[-1] = param_1;
         return;
      }
   }
   pcVar6 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   uVar7 = 0x16a;
   pcVar9 = "resize";
   LAB_00101328:_err_print_error(pcVar9, "./core/templates/cowdata.h", uVar7, pcVar6, 0, 0);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Vector4>::resize<false>(long) [clone .isra.0] */void CowData<Vector4>::resize<false>(CowData<Vector4> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined1(*pauVar6)[16];
   undefined1(*pauVar7)[16];
   undefined1(*pauVar8)[16];
   undefined8 *puVar9;
   char *pcVar10;
   undefined8 uVar11;
   long lVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }
   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }
      _copy_on_write(this);
      lVar12 = 0;
      lVar3 = 0;
   } else {
      lVar12 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar12) {
         return;
      }
      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }
         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }
      _copy_on_write(this);
      lVar3 = lVar12 * 0x10;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 0x10 != 0) {
      uVar4 = param_1 * 0x10 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (param_1 <= lVar12) {
            puVar9 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar9 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }
            } else {
               puVar5 = (undefined8*)Memory::realloc_static(puVar9 + -2, uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00101658:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return;
               }
               puVar9 = puVar5 + 2;
               *puVar5 = 1;
               *(undefined8**)this = puVar9;
            }
            puVar9[-1] = param_1;
            return;
         }
         if (uVar4 + 1 == lVar3) {
            puVar9 = *(undefined8**)this;
            if (puVar9 == (undefined8*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }
            lVar3 = puVar9[-1];
            LAB_00101581:if (param_1 <= lVar3) goto LAB_001014f8;
         } else {
            if (lVar12 != 0) {
               puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) goto LAB_00101658;
               puVar9 = puVar5 + 2;
               *puVar5 = 1;
               *(undefined8**)this = puVar9;
               lVar3 = puVar5[1];
               goto LAB_00101581;
            }
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               uVar11 = 0x171;
               pcVar10 = "Parameter \"mem_new\" is null.";
               goto LAB_0010163a;
            }
            puVar9 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar9;
            lVar3 = 0;
         }
         pauVar6 = (undefined1(*) [16])( puVar9 + lVar3 * 2 );
         pauVar7 = pauVar6;
         if (( ( param_1 - lVar3 ) * 0x10 & 0x10U ) != 0) {
            *pauVar6 = (undefined1[16])0x0;
            pauVar7 = pauVar6 + 1;
            if (pauVar6 + ( param_1 - lVar3 ) == pauVar7) goto LAB_001014f8;
         }
         do {
            *pauVar7 = (undefined1[16])0x0;
            pauVar8 = pauVar7 + 2;
            pauVar7[1] = (undefined1[16])0x0;
            pauVar7 = pauVar8;
         } while ( pauVar6 + ( param_1 - lVar3 ) != pauVar8 );
         LAB_001014f8:puVar9[-1] = param_1;
         return;
      }
   }
   uVar11 = 0x16a;
   pcVar10 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_0010163a:_err_print_error("resize", "./core/templates/cowdata.h", uVar11, pcVar10, 0, 0);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Color>::resize<false>(long) [clone .isra.0] */void CowData<Color>::resize<false>(CowData<Color> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   char *pcVar10;
   undefined8 uVar11;
   long lVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }
   lVar4 = *(long*)this;
   if (lVar4 == 0) {
      if (param_1 == 0) {
         return;
      }
      _copy_on_write(this);
      lVar12 = 0;
      lVar4 = 0;
   } else {
      lVar12 = *(long*)( lVar4 + -8 );
      if (param_1 == lVar12) {
         return;
      }
      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }
         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return;
      }
      _copy_on_write(this);
      lVar4 = lVar12 * 0x10;
      if (lVar4 != 0) {
         uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         lVar4 = ( uVar5 | uVar5 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 0x10 != 0) {
      uVar5 = param_1 * 0x10 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = uVar5 | uVar5 >> 0x20;
      if (uVar5 != 0xffffffffffffffff) {
         if (param_1 <= lVar12) {
            puVar9 = *(undefined8**)this;
            if (uVar5 + 1 == lVar4) {
               if (puVar9 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }
            } else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar9 + -2, uVar5 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00101968:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return;
               }
               puVar9 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar9;
            }
            puVar9[-1] = param_1;
            return;
         }
         if (uVar5 + 1 == lVar4) {
            puVar9 = *(undefined8**)this;
            if (puVar9 == (undefined8*)0x0) {
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }
            lVar4 = puVar9[-1];
            LAB_00101891:if (param_1 <= lVar4) goto LAB_00101808;
         } else {
            if (lVar12 != 0) {
               puVar6 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar5 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) goto LAB_00101968;
               puVar9 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar9;
               lVar4 = puVar6[1];
               goto LAB_00101891;
            }
            puVar6 = (undefined8*)Memory::alloc_static(uVar5 + 0x11, false);
            if (puVar6 == (undefined8*)0x0) {
               uVar11 = 0x171;
               pcVar10 = "Parameter \"mem_new\" is null.";
               goto LAB_0010194a;
            }
            puVar9 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8**)this = puVar9;
            lVar4 = 0;
         }
         uVar3 = _UNK_00119938;
         uVar11 = __LC36;
         puVar7 = puVar9 + lVar4 * 2;
         puVar6 = puVar7;
         if (( ( param_1 - lVar4 ) * 0x10 & 0x10U ) != 0) {
            *puVar7 = __LC36;
            puVar7[1] = uVar3;
            puVar6 = puVar7 + 2;
            if (puVar7 + ( param_1 - lVar4 ) * 2 == puVar7 + 2) goto LAB_00101808;
         }
         do {
            *puVar6 = uVar11;
            puVar6[1] = uVar3;
            puVar8 = puVar6 + 4;
            puVar6[2] = uVar11;
            puVar6[3] = uVar3;
            puVar6 = puVar8;
         } while ( puVar7 + ( param_1 - lVar4 ) * 2 != puVar8 );
         LAB_00101808:puVar9[-1] = param_1;
         return;
      }
   }
   uVar11 = 0x16a;
   pcVar10 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_0010194a:_err_print_error("resize", "./core/templates/cowdata.h", uVar11, pcVar10, 0, 0);
   return;
}/* CowData<int>::_copy_on_write() [clone .isra.0] */void CowData<int>::_copy_on_write(CowData<int> *this) {
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
}/* CowData<float>::_copy_on_write() [clone .isra.0] */void CowData<float>::_copy_on_write(CowData<float> *this) {
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
}/* CowData<char32_t>::_copy_on_write() [clone .isra.0] */void CowData<char32_t>::_copy_on_write(CowData<char32_t> *this) {
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
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<char32_t>::resize<false>(long) [clone .isra.0] */void CowData<char32_t>::resize<false>(CowData<char32_t> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 uVar8;
   CowData<char32_t> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }
   lVar3 = *(long*)this;
   pCVar9 = this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }
      _copy_on_write(this);
      lVar10 = 0;
      lVar3 = 0;
   } else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }
      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }
         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }
      _copy_on_write(this);
      lVar3 = lVar10 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 4 != 0) {
      uVar4 = param_1 * 4 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (param_1 <= lVar10) {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }
            } else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00101f80:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return;
               }
               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }
            puVar5[-1] = param_1;
            return;
         }
         if (uVar4 + 1 == lVar3) {
            puVar5 = *(undefined8**)this;
            if (puVar5 == (undefined8*)0x0) {
               resize<false>((long)pCVar9);
               return;
            }
         } else {
            if (lVar10 == 0) {
               puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) {
                  uVar8 = 0x171;
                  pcVar7 = "Parameter \"mem_new\" is null.";
                  goto LAB_00101f62;
               }
               *puVar5 = 1;
               puVar5[1] = 0;
            } else {
               puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) goto LAB_00101f80;
               *puVar5 = 1;
            }
            puVar5 = puVar5 + 2;
            *(undefined8**)this = puVar5;
         }
         puVar5[-1] = param_1;
         return;
      }
   }
   uVar8 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00101f62:_err_print_error("resize", "./core/templates/cowdata.h", uVar8, pcVar7, 0, 0);
   return;
}/* StringBuffer<64>::append(char32_t) [clone .isra.0] */void StringBuffer<64>::append(StringBuffer<64> *this, wchar32 param_1) {
   int iVar1;
   bool bVar2;
   StringBuffer<64> *pSVar3;
   long lVar4;
   uint uVar5;
   lVar4 = *(long*)( this + 0x100 );
   iVar1 = *(int*)( this + 0x108 ) + 2;
   pSVar3 = this;
   if (iVar1 < 0x40) {
      LAB_00102041:if (lVar4 == 0) goto LAB_00102052;
      uVar5 = ( uint ) * (undefined8*)( lVar4 + -8 );
   } else {
      if (lVar4 == 0) {
         bVar2 = true;
         LAB_00101ffc:uVar5 = *(int*)( this + 0x108 ) + 1;
         uVar5 = uVar5 | uVar5 >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         CowData<char32_t>::resize<false>((CowData<char32_t>*)( this + 0x100 ), (long)(int)( ( uVar5 | uVar5 >> 0x10 ) + 1 ));
         if (bVar2) {
            iVar1 = *(int*)( this + 0x108 );
            CowData<char32_t>::_copy_on_write((CowData<char32_t>*)( this + 0x100 ));
            memcpy(*(void**)( this + 0x100 ), this, (long)iVar1 << 2);
         }
         lVar4 = *(long*)( this + 0x100 );
         goto LAB_00102041;
      }
      uVar5 = ( uint ) * (undefined8*)( lVar4 + -8 );
      if ((int)uVar5 <= iVar1) {
         bVar2 = uVar5 < 2;
         goto LAB_00101ffc;
      }
   }
   if (1 < uVar5) {
      CowData<char32_t>::_copy_on_write((CowData<char32_t>*)( this + 0x100 ));
      pSVar3 = *(StringBuffer<64>**)( this + 0x100 );
   }
   LAB_00102052:iVar1 = *(int*)( this + 0x108 );
   *(int*)( this + 0x108 ) = iVar1 + 1;
   *(wchar32*)( pSVar3 + (long)iVar1 * 4 ) = param_1;
   return;
}/* VariantParser::Stream::get_char() */ulong VariantParser::Stream::get_char(Stream *this) {
   uint uVar1;
   ulong uVar2;
   int iVar3;
   ulong uVar4;
   uVar1 = *(uint*)( this + 0x2008 );
   uVar4 = (ulong)uVar1;
   if (uVar1 < *(uint*)( this + 0x200c )) {
      iVar3 = uVar1 + 1;
   } else {
      uVar2 = ( *(code*)**(undefined8**)this )(this, this + 8, ( -(uint)(this[0x2011] == (Stream)0x0) & 0xfffff801 ) + 0x800);
      iVar3 = 1;
      uVar4 = 0;
      *(int*)( this + 0x200c ) = (int)uVar2;
      if ((int)uVar2 == 0) {
         *(undefined4*)( this + 0x2008 ) = 1;
         this[0x2010] = (Stream)0x1;
         return uVar2;
      }
   }
   uVar1 = *(uint*)( this + uVar4 * 4 + 8 );
   *(int*)( this + 0x2008 ) = iVar3;
   return (ulong)uVar1;
}/* VariantParser::Stream::is_eof() const */ulong VariantParser::Stream::is_eof(Stream *this) {
   ulong uVar1;
   if (this[0x2011] == (Stream)0x0) {
      for (int i_387 = 0; i_387 < 2; i_387++) {
         /* WARNING: Could not recover jumptable at 0x00102150. Too many branches */
      }
      uVar1 = ( **(code**)( *(long*)this + 8 ) )();
      return uVar1;
   }
   return (ulong)(byte)this[0x2010];
}/* VariantParser::get_token(VariantParser::Stream*, VariantParser::Token&, int&, String&) */undefined4 VariantParser::get_token(Stream *param_1, Token *param_2, int *param_3, String *param_4) {
   wchar32 *pwVar1;
   long *plVar2;
   bool bVar3;
   char *pcVar4;
   Stream SVar5;
   char cVar6;
   wchar32 wVar7;
   int iVar8;
   undefined4 uVar9;
   wchar32 wVar10;
   ulong uVar11;
   long lVar12;
   uint uVar13;
   wchar32 *pwVar14;
   long in_FS_OFFSET;
   bool bVar15;
   bool bVar16;
   double dVar17;
   int local_1b0;
   long local_1a0;
   char *local_198;
   undefined8 local_190;
   undefined8 local_188[2];
   int local_178[2];
   undefined8 local_170;
   undefined8 uStack_168;
   wchar32 local_158[2];
   undefined8 local_150;
   undefined8 uStack_148;
   wchar32 *local_58;
   int local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   LAB_00102194:do {
      wVar7 = *(wchar32*)( param_1 + 0x2014 );
      if (wVar7 == L'\0') {
         wVar7 = Stream::get_char(param_1);
         if (param_1[0x2011] == (Stream)0x0) {
            SVar5 = ( Stream )(**(code**)( *(long*)param_1 + 8 ))();
         } else {
            SVar5 = param_1[0x2010];
         }
         if (SVar5 == (Stream)0x0) goto LAB_001021ab;
         switchD_001021c6_caseD_0:*(undefined4*)param_2 = 0xf;
         goto LAB_00102250;
      }
      *(undefined4*)( param_1 + 0x2014 ) = 0;
      LAB_001021ab:switch (wVar7) {
         case L'\0':
      goto switchD_001021c6_caseD_0;
         default:
      goto switchD_001021c6_caseD_1;
         case L'\"':
      bVar15 = false;
      goto LAB_00102635;
         case L'#':
      local_58 = (wchar32 *)0x0;
      local_50 = 0;
      StringBuffer<64>::append((StringBuffer<64> *)local_158,L'#');
      goto LAB_0010248b;
         case L'&':
         case L'@':
      iVar8 = Stream::get_char(param_1);
      if (iVar8 != 0x22) {
        local_190 = 0x16;
        local_198 = "Expected \'\"\' after \'&\'";
        String::parse_latin1((StrRange *)param_4);
        goto LAB_00102443;
      }
      bVar15 = true;
LAB_00102635:
      local_1a0 = 0;
      wVar7 = L'\0';
      goto LAB_0010266a;
         case L'(':
      *(undefined4 *)param_2 = 4;
      goto LAB_00102250;
         case L')':
      *(undefined4 *)param_2 = 5;
      goto LAB_00102250;
         case L',':
      *(undefined4 *)param_2 = 0xc;
      goto LAB_00102250;
         case L'.':
      *(undefined4 *)param_2 = 0xd;
      goto LAB_00102250;
         case L':':
      *(undefined4 *)param_2 = 0xb;
      goto LAB_00102250;
         case L';':
      do {
        iVar8 = Stream::get_char(param_1);
        if (param_1[0x2011] == (Stream)0x0) {
          SVar5 = (Stream)(**(code **)(*(long *)param_1 + 8))();
        }
        else {
          SVar5 = param_1[0x2010];
        }
        if (SVar5 != (Stream)0x0) goto switchD_001021c6_caseD_0;
      } while (iVar8 != 10);
         case L'\n':
      *param_3 = *param_3 + 1;
      break;
         case L'=':
      *(undefined4 *)param_2 = 0xe;
      goto LAB_00102250;
         case L'[':
      *(undefined4 *)param_2 = 2;
      goto LAB_00102250;
         case L']':
      *(undefined4 *)param_2 = 3;
      goto LAB_00102250;
         case L'{':
      *(undefined4 *)param_2 = 0;
      goto LAB_00102250;
         case L'}':
      *(undefined4 *)param_2 = 1;
      goto LAB_00102250;
      }
   } while ( true );
   LAB_0010248b:wVar7 = Stream::get_char(param_1);
   if (param_1[0x2011] == (Stream)0x0) {
      SVar5 = ( Stream )(**(code**)( *(long*)param_1 + 8 ))(param_1);
   } else {
      SVar5 = param_1[0x2010];
   }
   if (SVar5 != (Stream)0x0) {
      uVar9 = 0xf;
      goto LAB_001025e8;
   }
   if (( 0x36 < ( uint )(wVar7 + L'\xffffffd0') ) || ( ( 0x7e0000007e03ffU >> ( ( ulong )(uint)(wVar7 + L'\xffffffd0') & 0x3f ) & 1 ) == 0 )) goto LAB_00102558;
   StringBuffer<64>::append((StringBuffer<64>*)local_158, wVar7);
   goto LAB_0010248b;
   LAB_0010266a:do {
      wVar10 = Stream::get_char(param_1);
      if (wVar10 == L'\0') {
         LAB_00102838:local_190 = 0x13;
         local_198 = "Unterminated string";
         String::parse_latin1((StrRange*)param_4);
         goto LAB_001027a2;
      }
      if (wVar10 == L'\"') {
         if (wVar7 == L'\0') {
            cVar6 = ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1);
            if (cVar6 != '\0') {
               String::ascii(SUB81(&local_198, 0));
               iVar8 = CharString::get_data();
               String::parse_utf8((char*)&local_1a0, iVar8, true);
               pcVar4 = local_198;
               if (local_198 != (char*)0x0) {
                  LOCK();
                  plVar2 = (long*)( local_198 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     local_198 = (char*)0x0;
                     Memory::free_static(pcVar4 + -0x10, false);
                  }
               }
            }
            uVar9 = 0;
            if (bVar15) {
               *(undefined4*)param_2 = 8;
               StringName::StringName((StringName*)&local_198, (String*)&local_1a0, false);
               ::Variant::Variant((Variant*)local_158, (StringName*)&local_198);
               if (::Variant::needs_deinit[*(int*)( param_2 + 8 )] != '\0') {
                  ::Variant::_clear_internal();
               }
               bVar15 = StringName::configured != '\0';
               *(wchar32*)( param_2 + 8 ) = local_158[0];
               *(undefined8*)( param_2 + 0x10 ) = local_150;
               *(undefined8*)( param_2 + 0x18 ) = uStack_148;
               if (( bVar15 ) && ( local_198 != (char*)0x0 )) {
                  StringName::unref();
               }
            } else {
               *(undefined4*)param_2 = 7;
               ::Variant::Variant((Variant*)local_158, (String*)&local_1a0);
               if (::Variant::needs_deinit[*(int*)( param_2 + 8 )] != '\0') {
                  ::Variant::_clear_internal();
               }
               *(wchar32*)( param_2 + 8 ) = local_158[0];
               *(undefined8*)( param_2 + 0x10 ) = local_150;
               *(undefined8*)( param_2 + 0x18 ) = uStack_148;
            }
            goto LAB_001027b0;
         }
         goto LAB_00102780;
      }
      if (wVar10 != L'\\') {
         if (wVar7 == L'\0') {
            if (wVar10 == L'\n') {
               *param_3 = *param_3 + 1;
            }
            goto LAB_0010265a;
         }
         goto LAB_00102780;
      }
      wVar10 = Stream::get_char(param_1);
      if (wVar10 == L'\0') goto LAB_00102838;
      switch (wVar10) {
         case L'U':
         case L'u':
      local_1b0 = 0;
      bVar16 = wVar10 == L'U';
      wVar10 = L'\0';
      do {
        iVar8 = Stream::get_char(param_1);
        if (iVar8 == 0) goto LAB_00102838;
        uVar13 = iVar8 - 0x30;
        if ((0x36 < uVar13) || ((0x7e0000007e03ffU >> ((ulong)uVar13 & 0x3f) & 1) == 0)) {
          local_190 = 0x20;
          local_198 = "Malformed hex constant in string";
          String::parse_latin1((StrRange *)param_4);
          goto LAB_001027a2;
        }
        if (9 < uVar13) {
          uVar13 = iVar8 - 0x57;
          if (5 < iVar8 - 0x61U) {
            uVar13 = iVar8 - 0x37;
          }
        }
        local_1b0 = local_1b0 + 1;
        wVar10 = wVar10 << 4 | uVar13;
      } while (local_1b0 != bVar16 + 4 + (uint)bVar16);
         default:
      if ((wVar10 & 0xfffffc00U) == 0xd800) goto LAB_00102810;
      if ((wVar10 & 0xfffffc00U) != 0xdc00) break;
      if (wVar7 != L'\0') {
        wVar10 = wVar10 + L'\xfca02400' + wVar7 * 0x400;
        goto LAB_0010265a;
      }
      String::parse_latin1(param_4,"Invalid UTF-16 sequence in string, unpaired trail surrogate");
      goto LAB_001027a2;
         for (int i_388 = 0; i_388 < 4; i_388++) {
            case L'b':
      wVar10 = L'\b';
      break;
         }
         case L't':
      wVar10 = L'\t';
      }
      if (wVar7 != L'\0') goto LAB_00102780;
      LAB_0010265a:String::operator +=((String*)&local_1a0, wVar10);
      wVar7 = L'\0';
   } while ( true );
   LAB_00102810:bVar16 = wVar7 != L'\0';
   wVar7 = wVar10;
   if (bVar16) goto LAB_00102780;
   goto LAB_0010266a;
   LAB_00102780:local_190 = 0x3a;
   local_198 = "Invalid UTF-16 sequence in string, unpaired lead surrogate";
   String::parse_latin1((StrRange*)param_4);
   LAB_001027a2:*(undefined4*)param_2 = 0x10;
   uVar9 = 0x2b;
   LAB_001027b0:lVar12 = local_1a0;
   if (local_1a0 != 0) {
      LOCK();
      plVar2 = (long*)( local_1a0 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_1a0 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }
   }
   goto LAB_00102253;
   switchD_001021c6_caseD_1:if (0x20 < (uint)wVar7) goto code_r0x0010228a;
   goto LAB_00102194;
   code_r0x0010228a:if ((uint)wVar7 < 0x3a) {
      if (0x2f < (uint)wVar7) {
         local_58 = (wchar32*)0x0;
         local_50 = 0;
         LAB_001022d8:bVar3 = false;
         bVar15 = false;
         bVar16 = false;
         iVar8 = 1;
         do {
            if (iVar8 == 2) {
               if (wVar7 != L'E') {
                  if ((uint)wVar7 < 0x46) {
                     if (( uint )(wVar7 + L'\xffffffd0') < 10) goto LAB_00102325;
                     goto LAB_0010235b;
                  }
                  if (wVar7 != L'e') goto LAB_0010235b;
               }
               iVar8 = 3;
            } else if (iVar8 == 3) {
               if (( uint )(wVar7 + L'\xffffffd0') < 10) {
                  bVar16 = true;
               } else {
                  if (( ( wVar7 + L'\xffffffd5' & 0xfffffffdU ) != 0 ) || ( bVar16 || bVar3 )) goto LAB_0010235b;
                  bVar3 = true;
                  bVar16 = false;
               }
            } else if (iVar8 == 1) {
               if ((uint)wVar7 < 0x3a) {
                  if ((uint)wVar7 < 0x30) {
                     if (wVar7 != L'.') goto LAB_0010235b;
                     bVar15 = true;
                     iVar8 = 2;
                  }
               } else {
                  if (( wVar7 & 0xffffffdfU ) != 0x45) goto LAB_0010235b;
                  bVar15 = true;
                  iVar8 = 3;
               }
            }
            LAB_00102325:StringBuffer<64>::append((StringBuffer<64>*)local_158, wVar7);
            wVar7 = Stream::get_char(param_1);
         } while ( true );
      }
      if (wVar7 == L'-') {
         local_58 = (wchar32*)0x0;
         local_50 = 0;
         StringBuffer<64>::append((StringBuffer<64>*)local_158, L'-');
         wVar7 = Stream::get_char(param_1);
         goto LAB_001022d8;
      }
   } else {
      uVar11 = ( ulong )(uint)(wVar7 + L'\xffffffbf');
      if (( ( uint )(wVar7 + L'\xffffffbf') < 0x3a ) && ( bVar15 = bVar15 )) {
         local_58 = (wchar32*)0x0;
         local_50 = 0;
         do {
            if ((uint)uVar11 < 0x3a) {
               if (( 0x3ffffff43ffffffU >> ( uVar11 & 0x3f ) & 1 ) == 0) goto LAB_00102ac0;
            } else if (( bVar15 ) || ( 9 < ( uint )(wVar7 + L'\xffffffd0') )) goto LAB_00102ac0;
            StringBuffer<64>::append((StringBuffer<64>*)local_158, wVar7);
            wVar7 = Stream::get_char(param_1);
            bVar15 = false;
            uVar11 = ( ulong )(uint)(wVar7 + L'\xffffffbf');
         } while ( true );
      }
   }
   String::parse_latin1(param_4, "Unexpected character");
   LAB_00102443:*(undefined4*)param_2 = 0x10;
   uVar9 = 0x2b;
   goto LAB_00102253;
   LAB_00102ac0:*(wchar32*)( param_1 + 0x2014 ) = wVar7;
   *(undefined4*)param_2 = 6;
   StringBuffer<64>::as_string();
   ::Variant::Variant((Variant*)local_178, (String*)&local_198);
   ::Variant::operator =((Variant*)( param_2 + 8 ), (Variant*)local_178);
   if (::Variant::needs_deinit[local_178[0]] != '\0') {
      ::Variant::_clear_internal();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   goto LAB_00102250;
   LAB_0010235b:*(wchar32*)( param_1 + 0x2014 ) = wVar7;
   *(undefined4*)param_2 = 9;
   if (bVar15) {
      if (( local_58 == (wchar32*)0x0 ) || ( (uint)local_58[-2] < 2 )) {
         pwVar14 = local_158;
      } else {
         CowData<char32_t>::_copy_on_write((CowData<char32_t>*)&local_58);
         pwVar14 = local_58;
      }
      pwVar1 = local_58;
      pwVar14[local_50] = L'\0';
      pwVar14 = local_158;
      if (( pwVar1 != (wchar32*)0x0 ) && ( 1 < (uint)pwVar1[-2] )) {
         CowData<char32_t>::_copy_on_write((CowData<char32_t>*)&local_58);
         pwVar14 = local_58;
      }
      dVar17 = (double)String::to_float(pwVar14, (wchar32**)0x0);
      ::Variant::Variant((Variant*)local_178, dVar17);
   } else {
      if (( local_58 == (wchar32*)0x0 ) || ( (uint)local_58[-2] < 2 )) {
         pwVar14 = local_158;
      } else {
         CowData<char32_t>::_copy_on_write((CowData<char32_t>*)&local_58);
         pwVar14 = local_58;
      }
      pwVar1 = local_58;
      pwVar14[local_50] = L'\0';
      pwVar14 = local_158;
      if (( pwVar1 != (wchar32*)0x0 ) && ( 1 < (uint)pwVar1[-2] )) {
         CowData<char32_t>::_copy_on_write((CowData<char32_t>*)&local_58);
         pwVar14 = local_58;
      }
      lVar12 = String::to_int(pwVar14, -1, false);
      ::Variant::Variant((Variant*)local_178, lVar12);
   }
   ::Variant::operator =((Variant*)( param_2 + 8 ), (Variant*)local_178);
   if (::Variant::needs_deinit[local_178[0]] != '\0') {
      ::Variant::_clear_internal();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   goto LAB_00102250;
   LAB_00102558:*(wchar32*)( param_1 + 0x2014 ) = wVar7;
   StringBuffer<64>::as_string();
   local_188[0] = Color::html((String*)&local_198);
   ::Variant::Variant((Variant*)local_178, (Color*)local_188);
   if (::Variant::needs_deinit[*(int*)( param_2 + 8 )] != '\0') {
      ::Variant::_clear_internal();
   }
   pcVar4 = local_198;
   *(int*)( param_2 + 8 ) = local_178[0];
   *(undefined8*)( param_2 + 0x10 ) = local_170;
   *(undefined8*)( param_2 + 0x18 ) = uStack_168;
   if (local_198 != (char*)0x0) {
      LOCK();
      plVar2 = (long*)( local_198 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_198 = (char*)0x0;
         Memory::free_static(pcVar4 + -0x10, false);
      }
   }
   uVar9 = 10;
   LAB_001025e8:pwVar14 = local_58;
   *(undefined4*)param_2 = uVar9;
   if (local_58 != (wchar32*)0x0) {
      LOCK();
      pwVar1 = local_58 + -4;
      *(long*)pwVar1 = *(long*)pwVar1 + -1;
      UNLOCK();
      if (*(long*)pwVar1 == 0) {
         local_58 = (wchar32*)0x0;
         Memory::free_static(pwVar14 + -4, false);
      }
   }
   LAB_00102250:uVar9 = 0;
   LAB_00102253:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* VariantParser::_parse_byte_array(VariantParser::Stream*, Vector<unsigned char>&, int&, String&)
    */undefined8 VariantParser::_parse_byte_array(Stream *param_1, Vector *param_2, int *param_3, String *param_4) {
   long *plVar1;
   CowData<unsigned_char> *this;
   uchar *puVar2;
   char *pcVar3;
   uchar uVar4;
   int iVar5;
   uchar *puVar6;
   long lVar7;
   int iVar8;
   undefined8 uVar9;
   long lVar10;
   long in_FS_OFFSET;
   double dVar11;
   Variant *local_d0;
   long local_b0;
   long local_a8;
   ulong local_a0;
   char *local_98;
   undefined8 local_90;
   undefined4 local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   int local_68[2];
   int local_60[2];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_60[0] = 0;
   local_60[1] = 0;
   get_token(param_1, (Token*)local_68, param_3, param_4);
   if (local_68[0] == 4) {
      get_token(param_1, (Token*)local_68, param_3, param_4);
      if (local_68[0] == 7) {
         ::Variant::operator_cast_to_String((Variant*)&local_b0);
         if (local_b0 == 0) {
            lVar10 = 1;
            iVar5 = 0;
         } else {
            lVar10 = 1;
            iVar5 = (int)*(undefined8*)( local_b0 + -8 );
            if (iVar5 != 0) {
               iVar8 = iVar5 + 2;
               iVar5 = iVar5 + -1;
               if (-1 < iVar5) {
                  iVar8 = iVar5;
               }
               lVar10 = (long)( ( iVar8 >> 2 ) * 3 + 1 );
            }
         }
         this(CowData<unsigned_char> * )(param_2 + 8);
         String::ascii(SUB81(&local_a8, 0));
         local_a0 = 0;
         CowData<unsigned_char>::resize<false>(this, lVar10);
         CowData<unsigned_char>::_copy_on_write(this);
         puVar2 = *(uchar**)( param_2 + 8 );
         puVar6 = (uchar*)CharString::get_data();
         if (*(long*)( param_2 + 8 ) == 0) {
            iVar8 = 0;
         } else {
            iVar8 = *(int*)( *(long*)( param_2 + 8 ) + -8 );
         }
         iVar5 = CryptoCore::b64_decode(puVar2, iVar8, &local_a0, puVar6, iVar5);
         if (iVar5 == 0) {
            CowData<unsigned_char>::resize<false>(this, local_a0);
            get_token(param_1, (Token*)local_68, param_3, param_4);
            lVar10 = local_a8;
            if (local_68[0] == 5) {
               if (local_a8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               lVar10 = local_b0;
               if (local_b0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_b0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_b0 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               goto LAB_00102d0e;
            }
            local_90 = 0x1b;
            local_98 = "Expected \')\' in constructor";
            String::parse_latin1((StrRange*)param_4);
         } else {
            local_90 = 0x1d;
            local_98 = "Invalid base64-encoded string";
            String::parse_latin1((StrRange*)param_4);
         }
         lVar10 = local_a8;
         if (local_a8 != 0) {
            LOCK();
            plVar1 = (long*)( local_a8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a8 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }
         }
         lVar10 = local_b0;
         if (local_b0 != 0) {
            LOCK();
            plVar1 = (long*)( local_b0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_b0 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }
         }
      } else {
         if (( local_68[0] == 9 ) || ( local_68[0] == 6 )) {
            do {
               if (local_68[0] != 9) {
                  if (local_68[0] == 6) {
                     ::Variant::operator_cast_to_String((Variant*)&local_98);
                     dVar11 = (double)stor_fix((String*)&local_98);
                     pcVar3 = local_98;
                     if (local_98 != (char*)0x0) {
                        LOCK();
                        plVar1 = (long*)( local_98 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_98 = (char*)0x0;
                           Memory::free_static(pcVar3 + -0x10, false);
                        }
                     }
                     if (dVar11 != _LC8) {
                        local_68[0] = 9;
                        ::Variant::Variant((Variant*)local_88, dVar11);
                        if (::Variant::needs_deinit[local_60[0]] != '\0') {
                           ::Variant::_clear_internal();
                        }
                        local_60[0] = local_88[0];
                        local_58._8_8_ = uStack_78;
                        local_58._0_8_ = local_80;
                        goto LAB_00102e16;
                     }
                  }
                  local_90 = 0x1e;
                  local_98 = "Expected number in constructor";
                  String::parse_latin1((StrRange*)param_4);
                  goto LAB_00102f06;
               }
               LAB_00102e16:local_d0 = (Variant*)local_60;
               uVar4 = ::Variant::operator_cast_to_unsigned_char(local_d0);
               if (*(long*)( param_2 + 8 ) == 0) {
                  lVar10 = 1;
               } else {
                  lVar10 = *(long*)( *(long*)( param_2 + 8 ) + -8 ) + 1;
               }
               iVar5 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( param_2 + 8 ), lVar10);
               if (iVar5 == 0) {
                  if (*(long*)( param_2 + 8 ) == 0) {
                     lVar7 = -1;
                     lVar10 = 0;
                  } else {
                     lVar10 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
                     lVar7 = lVar10 + -1;
                     if (-1 < lVar7) {
                        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( param_2 + 8 ));
                        *(uchar*)( *(long*)( param_2 + 8 ) + -1 + lVar10 ) = uVar4;
                        goto LAB_00102e89;
                     }
                  }
                  _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar10, "p_index", "size()", "", false, false);
               } else {
                  _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
               }
               LAB_00102e89:get_token(param_1, (Token*)local_68, param_3, param_4);
               if (local_68[0] != 0xc) goto LAB_00103180;
               get_token(param_1, (Token*)local_68, param_3, param_4);
            } while ( true );
         }
         if (local_68[0] == 5) {
            LAB_00102d0e:uVar9 = 0;
            goto LAB_00102d10;
         }
         local_90 = 0x39;
         local_98 = "Expected base64 string, or list of numbers in constructor";
         String::parse_latin1((StrRange*)param_4);
      }
   } else {
      local_90 = 0x1b;
      local_98 = "Expected \'(\' in constructor";
      String::parse_latin1((StrRange*)param_4);
   }
   goto LAB_00102f06;
   LAB_00103180:if (local_68[0] == 5) goto LAB_00102d0e;
   local_90 = 0x22;
   local_98 = "Expected \',\' or \')\' in constructor";
   String::parse_latin1((StrRange*)param_4);
   LAB_00102f06:uVar9 = 0x2b;
   LAB_00102d10:if (::Variant::needs_deinit[local_60[0]] != '\0') {
      ::Variant::_clear_internal();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* VariantWriter::write(Variant const&, Error (*)(void*, String const&), void*, String (*)(void*,
   Ref<Resource> const&), void*, int, bool) */undefined8 VariantWriter::write(Variant *param_1, _func_Error_void_ptr_String_ptr *param_2, void *param_3, _func_String_void_ptr_Ref_ptr *param_4, void *param_5, int param_6, bool param_7) {
   long *plVar1;
   long *plVar2;
   float *pfVar3;
   undefined *puVar4;
   char cVar5;
   uint uVar6;
   undefined4 uVar7;
   Variant *pVVar8;
   List *pLVar9;
   Object *pOVar10;
   undefined8 uVar11;
   long lVar12;
   Object *pOVar13;
   Object *pOVar14;
   char *pcVar15;
   uint uVar16;
   float *pfVar17;
   ulong uVar18;
   long lVar19;
   char *pcVar20;
   wchar32 wVar21;
   int iVar22;
   Variant *pVVar23;
   long in_FS_OFFSET;
   bool bVar24;
   double dVar25;
   undefined8 in_XMM1_Qa;
   undefined1 auVar26[12];
   CowData<char32_t> *local_1c8;
   CowData<char32_t> *local_1c0;
   CowData<char32_t> *local_1b8;
   CowData<char32_t> *local_1b0;
   Object *local_198;
   CowData<char32_t> *local_178;
   CowData<char32_t> local_160[8];
   long local_158;
   long local_150;
   String local_148[8];
   CowData<char32_t> local_140[8];
   long local_138;
   long local_130;
   String local_128[8];
   CowData<char32_t> local_120[8];
   long local_118;
   long local_110;
   undefined *local_108;
   long local_100;
   long local_f8;
   long local_f0;
   long local_e8;
   long local_e0;
   long local_d8;
   Object *local_d0;
   char *local_c8;
   long *local_c0;
   Variant *local_b8;
   Variant *local_b0;
   Variant *local_a8;
   float *local_a0;
   char *local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   float local_78;
   float local_74;
   float local_64;
   float local_60;
   float local_5c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (*(undefined4*)param_1) {
      case 0:
switchD_0010330b_caseD_0:
    local_98 = "null";
    local_90 = 4;
    goto LAB_00103337;
      case 1:
    bVar24 = ::Variant::operator_cast_to_bool(param_1);
    if (bVar24) {
      local_90 = 4;
      local_98 = "true";
    }
    else {
      local_90 = 5;
      local_98 = "false";
    }
    goto LAB_00103337;
      case 2:
    ::Variant::operator_cast_to_long(param_1);
    local_1c0 = (CowData<char32_t> *)&local_98;
    itos((long)local_1c0);
    goto LAB_0010334f;
      case 3:
    dVar25 = ::Variant::operator_cast_to_double(param_1);
    local_1c0 = (CowData<char32_t> *)&local_98;
    rtos_fix(dVar25);
    cVar5 = String::operator!=((String *)local_1c0,"inf");
    if (((cVar5 != '\0') &&
        (cVar5 = String::operator!=((String *)local_1c0,"inf_neg"), cVar5 != '\0')) &&
       (cVar5 = String::operator!=((String *)local_1c0,"nan"), cVar5 != '\0')) {
      wVar21 = (wchar32)local_1c0;
      iVar22 = String::find_char(wVar21,0x2e);
      if (((iVar22 == -1) && (iVar22 = String::find_char(wVar21,0x65), iVar22 == -1)) &&
         (iVar22 = String::find_char(wVar21,0x45), iVar22 == -1)) {
        String::operator+=((String *)local_1c0,(char *)((long)&DAT_00111a56 + 1));
      }
    }
    goto LAB_0010334f;
      case 4:
    ::Variant::operator_cast_to_String((Variant *)&local_c8);
    local_98 = "\"";
    local_a8 = (Variant *)0x0;
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    String::c_escape_multiline();
      operator+((char *)&
      local_b8,(String*)&_LC91;
      goto LAB_00108963;
      case 5:
    uVar11 = ::Variant::operator_cast_to_Vector2(param_1);
    local_98 = ")";
    local_a8 = (Variant *)0x0;
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    rtos_fix((double)(float)((ulong)uVar11 >> 0x20));
    local_98 = ", ";
    local_d0 = (Object *)0x0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_d0);
    rtos_fix((double)(float)uVar11);
    pcVar20 = "Vector2(";
    goto LAB_0010874d;
      case 6:
    ::Variant::operator_cast_to_Vector2i(param_1);
    local_a8 = (Variant *)0x0;
    local_98 = ")";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    itos((long)&local_c0);
    local_98 = ", ";
    local_d0 = (Object *)0x0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_d0);
    itos((long)&local_e0);
    pcVar20 = "Vector2i(";
LAB_0010874d:
    local_1c8 = (CowData<char32_t> *)&local_c0;
      operator+((char *)&
      local_d8,(String*)pcVar20;
      String::operator +((String*)&local_c8, (String*)&local_d8);
      String::operator +((String*)&local_b8, (String*)&local_c8);
      String::operator +((String*)&local_98, (String*)&local_b8);
      ( *param_2 )(param_3, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
      CowData<char32_t>::_unref(local_1c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      break;
      case 7:
    uVar11 = ::Variant::operator_cast_to_Rect2(param_1);
    local_a8 = (Variant *)0x0;
    local_98 = ")";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    rtos_fix((double)(float)((ulong)in_XMM1_Qa >> 0x20));
    local_98 = ", ";
    local_d0 = (Object *)0x0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_d0);
    rtos_fix((double)(float)in_XMM1_Qa);
    local_98 = ", ";
    local_f0 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_f0);
    rtos_fix((double)(float)((ulong)uVar11 >> 0x20));
    local_98 = ", ";
    local_110 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_110);
    rtos_fix((double)(float)uVar11);
      operator+((char *)&
      local_118,(String*)"Rect2(";
      String::operator +((String*)&local_108, (String*)&local_118);
      String::operator +((String*)&local_f8, (String*)&local_108);
      String::operator +((String*)&local_e8, (String*)&local_f8);
      String::operator +((String*)&local_d8, (String*)&local_e8);
      String::operator +((String*)&local_c8, (String*)&local_d8);
      String::operator +((String*)&local_b8, (String*)&local_c8);
      String::operator +((String*)&local_98, (String*)&local_b8);
      ( *param_2 )(param_3, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
      lVar12 = local_118;
      if (local_118 != 0) {
         LOCK();
         plVar1 = (long*)( local_118 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_118 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
      lVar12 = local_f0;
      if (local_f0 != 0) {
         LOCK();
         plVar1 = (long*)( local_f0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      goto LAB_00105ed0;
      case 8:
    ::Variant::operator_cast_to_Rect2i(param_1);
    local_a8 = (Variant *)0x0;
    local_98 = ")";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    itos((long)&local_c0);
    local_98 = ", ";
    local_d0 = (Object *)0x0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_d0);
    itos((long)&local_e0);
    local_98 = ", ";
    local_f0 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_f0);
    itos((long)&local_100);
    local_98 = ", ";
    local_110 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_110);
    itos((long)local_120);
      operator+((char *)&
      local_118,(String*)"Rect2i(";
      String::operator +((String*)&local_108, (String*)&local_118);
      String::operator +((String*)&local_f8, (String*)&local_108);
      String::operator +((String*)&local_e8, (String*)&local_f8);
      String::operator +((String*)&local_d8, (String*)&local_e8);
      String::operator +((String*)&local_c8, (String*)&local_d8);
      String::operator +((String*)&local_b8, (String*)&local_c8);
      String::operator +((String*)&local_98, (String*)&local_b8);
      ( *param_2 )(param_3, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
      lVar12 = local_118;
      if (local_118 != 0) {
         LOCK();
         plVar1 = (long*)( local_118 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_118 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
      goto LAB_00107348;
      case 9:
    local_88 = ::Variant::operator_cast_to_Vector3(param_1);
    local_98 = ")";
    local_80 = CONCAT44(local_80._4_4_,(int)in_XMM1_Qa);
    local_a8 = (Variant *)0x0;
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    rtos_fix((double)(float)local_80);
    local_98 = ", ";
    local_d0 = (Object *)0x0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_d0);
    rtos_fix((double)local_88._4_4_);
    local_98 = ", ";
    local_f0 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_f0);
    rtos_fix((double)(float)local_88);
      operator+((char *)&
      local_f8,(String*)"Vector3(";
      String::operator +((String*)&local_e8, (String*)&local_f8);
      String::operator +((String*)&local_d8, (String*)&local_e8);
      String::operator +((String*)&local_c8, (String*)&local_d8);
      String::operator +((String*)&local_b8, (String*)&local_c8);
      String::operator +((String*)&local_98, (String*)&local_b8);
      ( *param_2 )(param_3, (String*)&local_98);
      pcVar20 = local_98;
      if (local_98 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = (char*)0x0;
            Memory::free_static(pcVar20 + -0x10, false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      pcVar20 = local_c8;
      if (local_c8 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_c8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c8 = (char*)0x0;
            Memory::free_static(pcVar20 + -0x10, false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      lVar12 = local_e8;
      if (local_e8 != 0) {
         LOCK();
         plVar1 = (long*)( local_e8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_e8 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      lVar12 = local_100;
      if (local_100 != 0) {
         LOCK();
         plVar1 = (long*)( local_100 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_100 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      lVar12 = local_e0;
      if (local_e0 != 0) {
         LOCK();
         plVar1 = (long*)( local_e0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_e0 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
      plVar1 = local_c0;
      if (local_c0 != (long*)0x0) {
         LOCK();
         plVar2 = local_c0 + -2;
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            local_c0 = (long*)0x0;
            Memory::free_static(plVar1 + -2, false);
         }
      }
      goto LAB_00107d4f;
      case 10:
    auVar26 = ::Variant::operator_cast_to_Vector3i(param_1);
    local_88 = auVar26._0_8_;
    local_a8 = (Variant *)0x0;
    local_80 = CONCAT44(local_80._4_4_,auVar26._8_4_);
    local_98 = ")";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    itos((long)&local_c0);
    local_98 = ", ";
    local_d0 = (Object *)0x0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_d0);
    itos((long)&local_e0);
    local_98 = ", ";
    local_f0 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_f0);
    itos((long)&local_100);
      operator+((char *)&
      local_f8,(String*)"Vector3i(";
      String::operator +((String*)&local_e8, (String*)&local_f8);
      String::operator +((String*)&local_d8, (String*)&local_e8);
      String::operator +((String*)&local_c8, (String*)&local_d8);
      String::operator +((String*)&local_b8, (String*)&local_c8);
      String::operator +((String*)&local_98, (String*)&local_b8);
      ( *param_2 )(param_3, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      pVVar23 = local_b8;
      if (local_b8 != (Variant*)0x0) {
         LOCK();
         pVVar8 = local_b8 + -0x10;
         *(long*)pVVar8 = *(long*)pVVar8 + -1;
         UNLOCK();
         if (*(long*)pVVar8 == 0) {
            local_b8 = (Variant*)0x0;
            Memory::free_static(pVVar23 + -0x10, false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      lVar12 = local_d8;
      if (local_d8 != 0) {
         LOCK();
         plVar1 = (long*)( local_d8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      lVar12 = local_f8;
      if (local_f8 != 0) {
         LOCK();
         plVar1 = (long*)( local_f8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f8 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
      lVar12 = local_f0;
      if (local_f0 != 0) {
         LOCK();
         plVar1 = (long*)( local_f0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      pOVar13 = local_d0;
      if (local_d0 != (Object*)0x0) {
         LOCK();
         pOVar14 = local_d0 + -0x10;
         *(long*)pOVar14 = *(long*)pOVar14 + -1;
         UNLOCK();
         if (*(long*)pOVar14 == 0) {
            local_d0 = (Object*)0x0;
            Memory::free_static(pOVar13 + -0x10, false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      LAB_00107d4f:local_178 = (CowData<char32_t>*)&local_a8;
      CowData<char32_t>::_unref(local_178);
      break;
      case 0xb:
    uVar16 = 0;
    local_b8 = (Variant *)0x0;
    local_90 = 0xc;
    pVVar23 = (Variant *)&local_88;
    local_98 = "Transform2D(";
    String::parse_latin1((StrRange *)&local_b8);
    ::Variant::operator_cast_to_Transform2D(pVVar23);
    do {
      lVar12 = 0;
      uVar6 = uVar16;
      while( true ) {
        if (uVar6 != 0) {
          String::operator+=((String *)&local_b8,", ");
        }
        rtos_fix((double)*(float *)(pVVar23 + lVar12 * 4));
        String::operator+=((String *)&local_b8,(String *)&local_98);
        pcVar20 = local_98;
        if (local_98 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (char *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        if (lVar12 != 0) break;
        lVar12 = 1;
        uVar6 = uVar16 | 1;
      }
      uVar16 = uVar16 + 1;
      pVVar23 = pVVar23 + 8;
    } while (uVar16 != 3);
    local_a8 = (Variant *)0x0;
    local_98 = ")";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    String::operator+((String *)&local_98,(String *)&local_b8);
    (*param_2)(param_3,(String *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    pVVar23 = local_b8;
    if (local_b8 != (Variant *)0x0) {
      LOCK();
      pVVar8 = local_b8 + -0x10;
      *(long *)pVVar8 = *(long *)pVVar8 + -1;
      UNLOCK();
      if (*(long *)pVVar8 == 0) {
        local_b8 = (Variant *)0x0;
        Memory::free_static(pVVar23 + -0x10,false);
      }
    }
    break;
      case 0xc:
    uVar11 = ::Variant::operator_cast_to_Vector4(param_1);
    local_a8 = (Variant *)0x0;
    local_98 = ")";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    rtos_fix((double)(float)((ulong)in_XMM1_Qa >> 0x20));
    local_98 = ", ";
    local_d0 = (Object *)0x0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_d0);
    rtos_fix((double)(float)in_XMM1_Qa);
    local_98 = ", ";
    local_f0 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_f0);
    rtos_fix((double)(float)((ulong)uVar11 >> 0x20));
    local_98 = ", ";
    local_110 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_110);
    rtos_fix((double)(float)uVar11);
      operator+((char *)&
      local_118,(String*)"Vector4(";
      String::operator +((String*)&local_108, (String*)&local_118);
      String::operator +((String*)&local_f8, (String*)&local_108);
      String::operator +((String*)&local_e8, (String*)&local_f8);
      String::operator +((String*)&local_d8, (String*)&local_e8);
      String::operator +((String*)&local_c8, (String*)&local_d8);
      String::operator +((String*)&local_b8, (String*)&local_c8);
      String::operator +((String*)&local_98, (String*)&local_b8);
      ( *param_2 )(param_3, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      if (local_a8 == (Variant*)0x0) break;
      goto LAB_00106c2b;
      case 0xd:
    ::Variant::operator_cast_to_Vector4i(param_1);
    local_a8 = (Variant *)0x0;
    local_98 = ")";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    itos((long)&local_c0);
    local_98 = ", ";
    local_d0 = (Object *)0x0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_d0);
    itos((long)&local_e0);
    local_98 = ", ";
    local_f0 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_f0);
    itos((long)&local_100);
    local_98 = ", ";
    local_110 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_110);
    itos((long)local_120);
      operator+((char *)&
      local_118,(String*)"Vector4i(";
      String::operator +((String*)&local_108, (String*)&local_118);
      String::operator +((String*)&local_f8, (String*)&local_108);
      String::operator +((String*)&local_e8, (String*)&local_f8);
      String::operator +((String*)&local_d8, (String*)&local_e8);
      String::operator +((String*)&local_c8, (String*)&local_d8);
      String::operator +((String*)&local_b8, (String*)&local_c8);
      String::operator +((String*)&local_98, (String*)&local_b8);
      ( *param_2 )(param_3, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      pVVar23 = local_b8;
      if (local_b8 != (Variant*)0x0) {
         LOCK();
         pVVar8 = local_b8 + -0x10;
         *(long*)pVVar8 = *(long*)pVVar8 + -1;
         UNLOCK();
         if (*(long*)pVVar8 == 0) {
            local_b8 = (Variant*)0x0;
            Memory::free_static(pVVar23 + -0x10, false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
      goto LAB_00106b94;
      case 0xe:
    local_88 = ::Variant::operator_cast_to_Plane(param_1);
    local_98 = ")";
    local_a8 = (Variant *)0x0;
    local_90 = 1;
    local_80 = in_XMM1_Qa;
    String::parse_latin1((StrRange *)&local_a8);
    rtos_fix((double)local_80._4_4_);
    local_98 = ", ";
    local_d0 = (Object *)0x0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_d0);
    rtos_fix((double)(float)local_80);
    local_98 = ", ";
    local_f0 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_f0);
    rtos_fix((double)local_88._4_4_);
    local_98 = ", ";
    local_110 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_110);
    rtos_fix((double)(float)local_88);
      operator+((char *)&
      local_118,(String*)"Plane(";
      String::operator +((String*)&local_108, (String*)&local_118);
      String::operator +((String*)&local_f8, (String*)&local_108);
      String::operator +((String*)&local_e8, (String*)&local_f8);
      String::operator +((String*)&local_d8, (String*)&local_e8);
      String::operator +((String*)&local_c8, (String*)&local_d8);
      String::operator +((String*)&local_b8, (String*)&local_c8);
      String::operator +((String*)&local_98, (String*)&local_b8);
      ( *param_2 )(param_3, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      pVVar23 = local_b8;
      if (local_b8 != (Variant*)0x0) {
         LOCK();
         pVVar8 = local_b8 + -0x10;
         *(long*)pVVar8 = *(long*)pVVar8 + -1;
         UNLOCK();
         if (*(long*)pVVar8 == 0) {
            local_b8 = (Variant*)0x0;
            Memory::free_static(pVVar23 + -0x10, false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      lVar12 = local_d8;
      if (local_d8 != 0) {
         LOCK();
         plVar1 = (long*)( local_d8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      lVar12 = local_f8;
      if (local_f8 != 0) {
         LOCK();
         plVar1 = (long*)( local_f8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f8 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
      lVar12 = local_118;
      if (local_118 != 0) {
         LOCK();
         plVar1 = (long*)( local_118 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_118 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref(local_120);
      lVar12 = local_110;
      if (local_110 != 0) {
         LOCK();
         plVar1 = (long*)( local_110 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_110 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      LAB_00107348:local_198 = (Object*)&local_100;
      local_1b0 = (CowData<char32_t>*)&local_e0;
      local_1b8 = (CowData<char32_t>*)&local_d0;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_198);
      lVar12 = local_f0;
      if (local_f0 != 0) {
         LOCK();
         plVar1 = (long*)( local_f0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref(local_1b0);
      CowData<char32_t>::_unref(local_1b8);
      LAB_00106c10:local_1c8 = (CowData<char32_t>*)&local_c0;
      CowData<char32_t>::_unref(local_1c8);
      if (local_a8 != (Variant*)0x0) {
         LAB_00106c2b:pVVar23 = local_a8;
         LOCK();
         plVar1 = (long*)( (long)local_a8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a8 = (Variant*)0x0;
            Memory::free_static((void*)( (long)pVVar23 + -0x10 ), false);
         }
      }
      break;
      case 0xf:
    ::Variant::operator_cast_to_Quaternion((Variant *)&local_88);
    local_98 = ")";
    local_a8 = (Variant *)0x0;
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    rtos_fix((double)local_80._4_4_);
    local_98 = ", ";
    local_d0 = (Object *)0x0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_d0);
    rtos_fix((double)(float)local_80);
    local_98 = ", ";
    local_f0 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_f0);
    rtos_fix((double)local_88._4_4_);
    local_98 = ", ";
    local_110 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_110);
    rtos_fix((double)(float)local_88);
      operator+((char *)&
      local_118,(String*)"Quaternion(";
      String::operator +((String*)&local_108, (String*)&local_118);
      String::operator +((String*)&local_f8, (String*)&local_108);
      String::operator +((String*)&local_e8, (String*)&local_f8);
      String::operator +((String*)&local_d8, (String*)&local_e8);
      String::operator +((String*)&local_c8, (String*)&local_d8);
      String::operator +((String*)&local_b8, (String*)&local_c8);
      String::operator +((String*)&local_98, (String*)&local_b8);
      ( *param_2 )(param_3, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      pVVar23 = local_b8;
      if (local_b8 != (Variant*)0x0) {
         LOCK();
         pVVar8 = local_b8 + -0x10;
         *(long*)pVVar8 = *(long*)pVVar8 + -1;
         UNLOCK();
         if (*(long*)pVVar8 == 0) {
            local_b8 = (Variant*)0x0;
            Memory::free_static(pVVar23 + -0x10, false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      lVar12 = local_d8;
      if (local_d8 != 0) {
         LOCK();
         plVar1 = (long*)( local_d8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      lVar12 = local_f8;
      if (local_f8 != 0) {
         LOCK();
         plVar1 = (long*)( local_f8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f8 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
      lVar12 = local_118;
      if (local_118 != 0) {
         LOCK();
         plVar1 = (long*)( local_118 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_118 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      goto LAB_00106b58;
      case 0x10:
    ::Variant::operator_cast_to_AABB((Variant *)&local_88);
    local_98 = ")";
    local_a8 = (Variant *)0x0;
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    rtos_fix((double)local_74);
    local_98 = ", ";
    local_d0 = (Object *)0x0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_d0);
    rtos_fix((double)local_78);
    local_98 = ", ";
    local_f0 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_f0);
    rtos_fix((double)local_80._4_4_);
    local_98 = ", ";
    local_110 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_110);
    rtos_fix((double)(float)local_80);
    local_98 = ", ";
    local_130 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_130);
    rtos_fix((double)local_88._4_4_);
    local_98 = ", ";
    local_150 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_150);
    rtos_fix((double)(float)local_88);
      operator+((char *)&
      local_158,(String*)&_LC103;
      String::operator +(local_148, (String*)&local_158);
      String::operator +((String*)&local_138, local_148);
      String::operator +(local_128, (String*)&local_138);
      String::operator +((String*)&local_118, local_128);
      String::operator +((String*)&local_108, (String*)&local_118);
      String::operator +((String*)&local_f8, (String*)&local_108);
      String::operator +((String*)&local_e8, (String*)&local_f8);
      String::operator +((String*)&local_d8, (String*)&local_e8);
      String::operator +((String*)&local_c8, (String*)&local_d8);
      String::operator +((String*)&local_b8, (String*)&local_c8);
      String::operator +((String*)&local_98, (String*)&local_b8);
      ( *param_2 )(param_3, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      pVVar23 = local_b8;
      if (local_b8 != (Variant*)0x0) {
         LOCK();
         pVVar8 = local_b8 + -0x10;
         *(long*)pVVar8 = *(long*)pVVar8 + -1;
         UNLOCK();
         if (*(long*)pVVar8 == 0) {
            local_b8 = (Variant*)0x0;
            Memory::free_static(pVVar23 + -0x10, false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      lVar12 = local_d8;
      if (local_d8 != 0) {
         LOCK();
         plVar1 = (long*)( local_d8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      lVar12 = local_f8;
      if (local_f8 != 0) {
         LOCK();
         plVar1 = (long*)( local_f8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f8 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
      lVar12 = local_118;
      if (local_118 != 0) {
         LOCK();
         plVar1 = (long*)( local_118 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_118 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)local_128);
      lVar12 = local_138;
      if (local_138 != 0) {
         LOCK();
         plVar1 = (long*)( local_138 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_138 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)local_148);
      lVar12 = local_158;
      if (local_158 != 0) {
         LOCK();
         plVar1 = (long*)( local_158 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_158 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref(local_160);
      lVar12 = local_150;
      if (local_150 != 0) {
         LOCK();
         plVar1 = (long*)( local_150 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_150 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref(local_140);
      lVar12 = local_130;
      if (local_130 != 0) {
         LOCK();
         plVar1 = (long*)( local_130 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_130 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      LAB_00106b58:CowData<char32_t>::_unref(local_120);
      lVar12 = local_110;
      if (local_110 != 0) {
         LOCK();
         plVar1 = (long*)( local_110 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_110 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      LAB_00106b94:local_198 = (Object*)&local_100;
      local_1b0 = (CowData<char32_t>*)&local_e0;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_198);
      lVar12 = local_f0;
      if (local_f0 != 0) {
         LOCK();
         plVar1 = (long*)( local_f0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref(local_1b0);
      pOVar13 = local_d0;
      if (local_d0 != (Object*)0x0) {
         LOCK();
         pOVar14 = local_d0 + -0x10;
         *(long*)pOVar14 = *(long*)pOVar14 + -1;
         UNLOCK();
         if (*(long*)pOVar14 == 0) {
            local_d0 = (Object*)0x0;
            Memory::free_static(pOVar13 + -0x10, false);
         }
      }
      goto LAB_00106c10;
      case 0x11:
    iVar22 = 0;
    local_b8 = (Variant *)0x0;
    local_90 = 6;
    pVVar23 = (Variant *)&local_88;
    local_98 = "Basis(";
    String::parse_latin1((StrRange *)&local_b8);
    ::Variant::operator_cast_to_Basis(pVVar23);
    do {
      lVar12 = 0;
      do {
        if (iVar22 != 0 || (int)lVar12 != 0) {
          String::operator+=((String *)&local_b8,", ");
        }
        rtos_fix((double)*(float *)(pVVar23 + lVar12 * 4));
        String::operator+=((String *)&local_b8,(String *)&local_98);
        pcVar20 = local_98;
        if (local_98 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (undefined *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      iVar22 = iVar22 + 1;
      pVVar23 = pVVar23 + 0xc;
    } while (iVar22 != 3);
    local_a8 = (Variant *)0x0;
    local_98 = ")";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    String::operator+((String *)&local_98,(String *)&local_b8);
    (*param_2)(param_3,(String *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    break;
      case 0x12:
    iVar22 = 0;
    local_108 = (undefined *)0x0;
    local_90 = 0xc;
    pVVar23 = (Variant *)&local_88;
    local_98 = "Transform3D(";
    String::parse_latin1((StrRange *)&local_108);
    ::Variant::operator_cast_to_Transform3D(pVVar23);
    do {
      lVar12 = 0;
      do {
        if (iVar22 != 0 || (int)lVar12 != 0) {
          String::operator+=((String *)&local_108,", ");
        }
        rtos_fix((double)*(float *)(pVVar23 + lVar12 * 4));
        String::operator+=((String *)&local_108,(String *)&local_98);
        pcVar20 = local_98;
        if (local_98 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (char *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      iVar22 = iVar22 + 1;
      pVVar23 = pVVar23 + 0xc;
    } while (iVar22 != 3);
    rtos_fix((double)local_5c);
    local_98 = ", ";
    local_c0 = (long *)0x0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_c0);
    rtos_fix((double)local_60);
    local_98 = ", ";
    local_e0 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_e0);
    rtos_fix((double)local_64);
    local_98 = ", ";
    local_100 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_100);
    String::operator+((String *)&local_f8,(String *)&local_108);
    String::operator+((String *)&local_e8,(String *)&local_f8);
    String::operator+((String *)&local_d8,(String *)&local_e8);
    String::operator+((String *)&local_c8,(String *)&local_d8);
    String::operator+((String *)&local_b8,(String *)&local_c8);
    String::operator+((String *)&local_98,(String *)&local_b8);
    if (local_108 != local_98) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      local_108 = local_98;
      local_98 = (undefined *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    lVar12 = local_f8;
    if (local_f8 != 0) {
      LOCK();
      plVar1 = (long *)(local_f8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f8 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    lVar12 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    pOVar13 = local_d0;
    if (local_d0 != (Object *)0x0) {
      LOCK();
      pOVar14 = local_d0 + -0x10;
      *(long *)pOVar14 = *(long *)pOVar14 + -1;
      UNLOCK();
      if (*(long *)pOVar14 == 0) {
        local_d0 = (Object *)0x0;
        Memory::free_static(pOVar13 + -0x10,false);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    pVVar23 = local_a8;
    if (local_a8 != (Variant *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = (Variant *)0x0;
        Memory::free_static((void *)((long)pVVar23 + -0x10),false);
      }
    }
    local_a8 = (Variant *)0x0;
    local_98 = ")";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    String::operator+((String *)&local_98,(String *)&local_108);
    (*param_2)(param_3,(String *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    break;
      case 0x13:
    iVar22 = 0;
    local_b8 = (Variant *)0x0;
    local_90 = 0xb;
    local_98 = "Projection(";
    String::parse_latin1((StrRange *)&local_b8);
    ::Variant::operator_cast_to_Projection((Variant *)&local_88);
    pVVar23 = (Variant *)&local_88;
    do {
      lVar12 = 0;
      do {
        if (iVar22 != 0 || (int)lVar12 != 0) {
          String::operator+=((String *)&local_b8,", ");
        }
        rtos_fix((double)*(float *)(pVVar23 + lVar12 * 4));
        String::operator+=((String *)&local_b8,(String *)&local_98);
        pcVar20 = local_98;
        if (local_98 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (char *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 4);
      iVar22 = iVar22 + 1;
      pVVar23 = pVVar23 + 0x10;
    } while (iVar22 != 4);
    local_a8 = (Variant *)0x0;
    local_98 = ")";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    String::operator+((String *)&local_98,(String *)&local_b8);
    (*param_2)(param_3,(String *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    Projection::~Projection((Projection *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    break;
      case 0x14:
    uVar11 = ::Variant::operator_cast_to_Color(param_1);
    local_a8 = (Variant *)0x0;
    local_98 = ")";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    rtos_fix((double)(float)((ulong)in_XMM1_Qa >> 0x20));
    local_98 = ", ";
    local_d0 = (Object *)0x0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_d0);
    rtos_fix((double)(float)in_XMM1_Qa);
    local_98 = ", ";
    local_f0 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_f0);
    rtos_fix((double)(float)((ulong)uVar11 >> 0x20));
    local_98 = ", ";
    local_110 = 0;
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_110);
    rtos_fix((double)(float)uVar11);
      operator+((char *)&
      local_118,(String*)"Color(";
      String::operator +((String*)&local_108, (String*)&local_118);
      String::operator +((String*)&local_f8, (String*)&local_108);
      String::operator +((String*)&local_e8, (String*)&local_f8);
      String::operator +((String*)&local_d8, (String*)&local_e8);
      String::operator +((String*)&local_c8, (String*)&local_d8);
      String::operator +((String*)&local_b8, (String*)&local_c8);
      String::operator +((String*)&local_98, (String*)&local_b8);
      ( *param_2 )(param_3, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      pVVar23 = local_b8;
      if (local_b8 != (Variant*)0x0) {
         LOCK();
         pVVar8 = local_b8 + -0x10;
         *(long*)pVVar8 = *(long*)pVVar8 + -1;
         UNLOCK();
         if (*(long*)pVVar8 == 0) {
            local_b8 = (Variant*)0x0;
            Memory::free_static(pVVar23 + -0x10, false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      lVar12 = local_d8;
      if (local_d8 != 0) {
         LOCK();
         plVar1 = (long*)( local_d8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_d8 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      lVar12 = local_f8;
      if (local_f8 != 0) {
         LOCK();
         plVar1 = (long*)( local_f8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f8 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
      lVar12 = local_118;
      if (local_118 != 0) {
         LOCK();
         plVar1 = (long*)( local_118 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_118 = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
         }
      }
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      LAB_00105ed0:local_178 = (CowData<char32_t>*)&local_a8;
      local_1b0 = (CowData<char32_t>*)&local_e0;
      local_1b8 = (CowData<char32_t>*)&local_d0;
      local_1c8 = (CowData<char32_t>*)&local_c0;
      CowData<char32_t>::_unref(local_1b0);
      CowData<char32_t>::_unref(local_1b8);
      CowData<char32_t>::_unref(local_1c8);
      CowData<char32_t>::_unref(local_178);
      break;
      case 0x15:
    ::Variant::operator_cast_to_String((Variant *)&local_c8);
    local_98 = "\"";
    local_a8 = (Variant *)0x0;
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a8);
    String::c_escape();
      operator+((char *)&
      local_b8,(String*)&_LC110;
      String::operator +((String*)&local_98, (String*)&local_b8);
      if (local_c8 != local_98) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         local_c8 = local_98;
         local_98 = (char*)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      pVVar23 = local_a8;
      if (local_a8 != (Variant*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)local_a8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a8 = (Variant*)0x0;
            Memory::free_static((void*)( (long)pVVar23 + -0x10 ), false);
         }
      }
      goto LAB_001089c8;
      case 0x16:
    ::Variant::operator_cast_to_String((Variant *)&local_c8);
    local_a8 = (Variant *)0x0;
    local_98 = "\")";
    local_90 = 2;
    String::parse_latin1((StrRange *)&local_a8);
    String::c_escape();
      operator+((char *)&
      local_b8,(String*)"NodePath(\"";
      LAB_00108963:local_178 = (CowData<char32_t>*)&local_a8;
      local_1c8 = (CowData<char32_t>*)&local_c0;
      String::operator +((String*)&local_98, (String*)&local_b8);
      if (local_c8 != local_98) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         local_c8 = local_98;
         local_98 = (char*)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      CowData<char32_t>::_unref(local_1c8);
      CowData<char32_t>::_unref(local_178);
      LAB_001089c8:local_1c0 = (CowData<char32_t>*)&local_c8;
      goto LAB_0010334f;
      case 0x17:
    lVar12 = ::Variant::operator_cast_to_RID(param_1);
    local_a8 = (Variant *)0x0;
    if (lVar12 == 0) {
      local_90 = 5;
      local_98 = "RID()";
      goto LAB_00103337;
    }
    local_90 = 1;
    local_98 = ")";
    String::parse_latin1((StrRange *)&local_a8);
    itos((long)&local_c0);
      operator+((char *)&
      local_b8,(String*)&_LC114;
      String::operator +((String*)&local_98, (String*)&local_b8);
      ( *param_2 )(param_3, (String*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      break;
      case 0x18:
    if (100 < param_6) {
      _err_print_error("write","core/variant/variant_parser.cpp",0x844,"Max recursion reached",0,0);
      local_98 = "null";
      local_90 = 4;
      goto LAB_00103337;
    }
    pLVar9 = (List *)::Variant::get_validated_object();
    if (pLVar9 == (List *)0x0) goto switchD_0010330b_caseD_0;
    local_d0 = (Object *)0x0;
    pOVar10 = (Object *)::Variant::get_validated_object();
    pOVar13 = local_d0;
    pOVar14 = pOVar13;
    if (pOVar10 == local_d0) {
LAB_001056d1:
      if (pOVar14 == (Object *)0x0) goto LAB_00105818;
      local_c8 = (char *)0x0;
      if (param_4 == (_func_String_void_ptr_Ref_ptr *)0x0) {
LAB_001057a3:
        Resource::get_path();
        cVar5 = String::is_resource_file();
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        if (cVar5 != '\0') {
          Resource::get_path();
          local_a8 = (Variant *)0x0;
          local_98 = "\")";
          local_90 = 2;
          String::parse_latin1((StrRange *)&local_a8);
          operator+((char *)&local_b8,(String *)"Resource(\"");
          String::operator+((String *)&local_98,(String *)&local_b8);
          pcVar20 = local_c8;
          if (local_c8 != local_98) {
            if (local_c8 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_c8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_c8 = (char *)0x0;
                Memory::free_static(pcVar20 + -0x10,false);
              }
            }
            local_c8 = local_98;
            local_98 = (char *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        }
        if ((local_c8 == (char *)0x0) || (*(uint *)(local_c8 + -8) < 2)) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          goto LAB_00105818;
        }
      }
      else {
        (*param_4)((String *)&local_98,param_5,(Ref *)&local_d0);
        pcVar20 = local_c8;
        if (local_c8 != local_98) {
          pcVar15 = local_98;
          if (local_c8 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_c8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c8 = (char *)0x0;
              Memory::free_static(pcVar20 + -0x10,false);
              pcVar15 = local_98;
            }
          }
          local_98 = (char *)0x0;
          local_c8 = pcVar15;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        if ((local_c8 == (char *)0x0) || (*(uint *)(local_c8 + -8) < 2)) goto LAB_001057a3;
      }
      (*param_2)(param_3,(String *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    }
    else {
      if (pOVar10 == (Object *)0x0) {
        if (local_d0 != (Object *)0x0) {
          local_d0 = (Object *)0x0;
LAB_001056a4:
          cVar5 = RefCounted::unreference();
          pOVar14 = local_d0;
          if ((cVar5 != '\0') &&
             (cVar5 = predelete_handler(pOVar13), pOVar14 = local_d0, cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
            Memory::free_static(pOVar13,false);
            pOVar14 = local_d0;
          }
          goto LAB_001056d1;
        }
      }
      else {
        pOVar10 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&Resource::typeinfo,0);
        if (pOVar13 == pOVar10) goto LAB_001056d1;
        local_d0 = pOVar10;
        if (pOVar10 != (Object *)0x0) {
          cVar5 = RefCounted::reference();
          if (cVar5 != '\0') {
            pOVar14 = local_d0;
            if (pOVar13 != (Object *)0x0) goto LAB_001056a4;
            goto LAB_001056d1;
          }
          local_d0 = (Object *)0x0;
        }
        if (pOVar13 != (Object *)0x0) goto LAB_001056a4;
      }
LAB_00105818:
      local_98 = &_LC120;
      local_a8 = (Variant *)0x0;
      local_90 = 1;
      String::parse_latin1((StrRange *)&local_a8);
      (**(code **)(*(long *)pLVar9 + 0x48))((CowData<char32_t> *)&local_c0,pLVar9);
      operator+((char *)&local_b8,(String *)"Object(");
      String::operator+((String *)&local_98,(String *)&local_b8);
      (*param_2)(param_3,(String *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      local_c0 = (long *)0x0;
      Object::get_property_list(pLVar9,SUB81((CowData<char32_t> *)&local_c0,0));
      if ((local_c0 != (long *)0x0) && (lVar12 = *local_c0, lVar12 != 0)) {
        bVar24 = true;
        do {
          if ((*(uint *)(lVar12 + 0x28) & 0x1002) != 0) {
            if (!bVar24) {
              local_a8 = (Variant *)0x0;
              local_98 = &_LC120;
              local_90 = 1;
              String::parse_latin1((StrRange *)&local_a8);
              (*param_2)(param_3,(String *)&local_a8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            }
            local_98 = "\":";
            local_a8 = (Variant *)0x0;
            local_90 = 2;
            String::parse_latin1((StrRange *)&local_a8);
            operator+((char *)&local_b8,(String *)&_LC91);
            String::operator+((String *)&local_98,(String *)&local_b8);
            (*param_2)(param_3,(String *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            StringName::StringName((StringName *)&local_98,(String *)(lVar12 + 8),false);
            Object::get((StringName *)&local_88,(bool *)pLVar9);
            write((Variant *)&local_88,param_2,param_3,param_4,param_5,param_6 + 1,param_7);
            if (::Variant::needs_deinit[(int)(float)local_88] != '\0') {
              ::Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_98 != (undefined *)0x0)) {
              StringName::unref();
            }
            bVar24 = false;
          }
          lVar12 = *(long *)(lVar12 + 0x30);
        } while (lVar12 != 0);
      }
      local_a8 = (Variant *)0x0;
      local_98 = ")\n";
      local_90 = 2;
      String::parse_latin1((StrRange *)&local_a8);
      (*param_2)(param_3,(String *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_c0);
    }
    if (((local_d0 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar13 = local_d0, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_d0), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
      Memory::free_static(pOVar13,false);
   }
   break;
   case 0x19:
    local_98 = "Callable()";
    local_90 = 10;
    goto LAB_00103337;
   case 0x1a:
    local_98 = "Signal()";
    local_90 = 8;
LAB_00103337:
    local_a8 = (Variant *)0x0;
    local_1c0 = (CowData<char32_t> *)&local_a8;
    String::parse_latin1((StrRange *)local_1c0);
LAB_0010334f:
    (*param_2)(param_3,(String *)local_1c0);
    CowData<char32_t>::_unref(local_1c0);
    break;
   case 0x1b:
    ::Variant::operator_cast_to_Dictionary((Variant *)&local_e0);
    cVar5 = Dictionary::is_typed();
    if (cVar5 != '\0') {
      local_98 = "Dictionary[";
      local_a8 = (Variant *)0x0;
      local_90 = 0xb;
      String::parse_latin1((StrRange *)&local_a8);
      (*param_2)(param_3,(String *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      iVar22 = Dictionary::get_typed_key_builtin();
      Dictionary::get_typed_key_class_name();
      Dictionary::get_typed_key_script();
      lVar12 = ::Variant::get_validated_object();
      if (lVar12 == 0) {
LAB_00109ff5:
        cVar5 = ::Variant::needs_deinit[(int)(float)local_88];
joined_r0x0010a6b9:
        if (cVar5 != '\0') {
          ::Variant::_clear_internal();
        }
        if (local_d8 == 0) {
          if (iVar22 == 0) {
            local_98 = (char *)0x0;
            String::parse_latin1((String *)&local_98,"Variant");
          }
          else {
            ::Variant::get_type_name((CowData<char32_t> *)&local_98,iVar22);
          }
        }
        else if (*(char **)(local_d8 + 8) == (char *)0x0) {
          local_98 = (char *)0x0;
          if (*(long *)(local_d8 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(local_d8 + 0x10));
          }
        }
        else {
          local_98 = (char *)0x0;
          String::parse_latin1((String *)&local_98,*(char **)(local_d8 + 8));
        }
        (*param_2)(param_3,(String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        local_198 = (Object *)0x0;
      }
      else {
        local_198 = (Object *)__dynamic_cast(lVar12,&Object::typeinfo,&Script::typeinfo,0);
        if (local_198 == (Object *)0x0) {
          cVar5 = ::Variant::needs_deinit[(int)(float)local_88];
          goto joined_r0x0010a6b9;
        }
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') goto LAB_00109ff5;
        if (::Variant::needs_deinit[(int)(float)local_88] != '\0') {
          ::Variant::_clear_internal();
        }
        local_c8 = (char *)0x0;
        if (param_4 == (_func_String_void_ptr_Ref_ptr *)0x0) {
LAB_0010946b:
          Resource::get_path();
          cVar5 = String::is_resource_file();
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          if (cVar5 != '\0') {
            local_98 = "\")";
            local_a8 = (Variant *)0x0;
            local_90 = 2;
            String::parse_latin1((StrRange *)&local_a8);
            Resource::get_path();
            operator+((char *)&local_b8,(String *)"Resource(\"");
            String::operator+((String *)&local_98,(String *)&local_b8);
            pcVar20 = local_c8;
            if (local_c8 != local_98) {
              if (local_c8 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_c8 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_c8 = (char *)0x0;
                  Memory::free_static(pcVar20 + -0x10,false);
                }
              }
              local_c8 = local_98;
              local_98 = (char *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          }
          if ((local_c8 != (char *)0x0) && (1 < *(uint *)(local_c8 + -8))) goto LAB_0010a121;
          _err_print_error("write","core/variant/variant_parser.cpp",0x898);
          if (local_d8 == 0) {
            local_98 = (char *)0x0;
          }
          else {
            local_98 = (char *)0x0;
            if (*(char **)(local_d8 + 8) == (char *)0x0) {
              if (*(long *)(local_d8 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(local_d8 + 0x10))
                ;
              }
            }
            else {
              String::parse_latin1((String *)&local_98,*(char **)(local_d8 + 8));
            }
          }
          (*param_2)(param_3,(String *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        }
        else {
          local_a8 = (Variant *)0x0;
          pOVar13 = (Object *)__dynamic_cast(local_198,&Object::typeinfo,&Resource::typeinfo,0);
          if ((pOVar13 != (Object *)0x0) &&
             (local_a8 = (Variant *)pOVar13, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
            local_a8 = (Variant *)0x0;
          }
          (*param_4)((String *)&local_98,param_5,(Ref *)&local_a8);
          pcVar20 = local_c8;
          if (local_c8 != local_98) {
            if (local_c8 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_c8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_c8 = (char *)0x0;
                Memory::free_static(pcVar20 + -0x10,false);
              }
            }
            local_c8 = local_98;
            local_98 = (char *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          if (((local_a8 != (Variant *)0x0) &&
              (cVar5 = RefCounted::unreference(), pVVar23 = local_a8, cVar5 != '\0')) &&
             (cVar5 = predelete_handler((Object *)local_a8), cVar5 != '\0')) {
            (**(code **)(*(long *)pVVar23 + 0x140))(pVVar23);
            Memory::free_static(pVVar23,false);
          }
          if ((local_c8 == (char *)0x0) || (*(uint *)(local_c8 + -8) < 2)) goto LAB_0010946b;
LAB_0010a121:
          (*param_2)(param_3,(String *)&local_c8);
        }
        local_1c0 = (CowData<char32_t> *)&local_c8;
        CowData<char32_t>::_unref(local_1c0);
      }
      local_98 = ", ";
      local_a8 = (Variant *)0x0;
      local_90 = 2;
      String::parse_latin1((StrRange *)&local_a8);
      (*param_2)(param_3,(String *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      iVar22 = Dictionary::get_typed_value_builtin();
      Dictionary::get_typed_value_class_name();
      Dictionary::get_typed_value_script();
      lVar12 = ::Variant::get_validated_object();
      if (lVar12 == 0) {
LAB_00109f26:
        cVar5 = ::Variant::needs_deinit[(int)(float)local_88];
joined_r0x0010a6e9:
        if (cVar5 != '\0') {
          ::Variant::_clear_internal();
        }
        if (local_d0 == (Object *)0x0) {
          if (iVar22 == 0) {
            local_98 = (char *)0x0;
            String::parse_latin1((String *)&local_98,"Variant");
          }
          else {
            ::Variant::get_type_name((CowData<char32_t> *)&local_98,iVar22);
          }
        }
        else if (*(char **)(local_d0 + 8) == (char *)0x0) {
          local_98 = (char *)0x0;
          if (*(long *)(local_d0 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(local_d0 + 0x10));
          }
        }
        else {
          local_98 = (char *)0x0;
          String::parse_latin1((String *)&local_98,*(char **)(local_d0 + 8));
        }
        (*param_2)(param_3,(String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        local_a8 = (Variant *)0x0;
        local_98 = "](";
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_a8);
        (*param_2)(param_3,(String *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      }
      else {
        pOVar13 = (Object *)__dynamic_cast(lVar12,&Object::typeinfo,&Script::typeinfo,0);
        if (pOVar13 == (Object *)0x0) {
          cVar5 = ::Variant::needs_deinit[(int)(float)local_88];
          goto joined_r0x0010a6e9;
        }
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') goto LAB_00109f26;
        if (::Variant::needs_deinit[(int)(float)local_88] != '\0') {
          ::Variant::_clear_internal();
        }
        local_c8 = (char *)0x0;
        if (param_4 == (_func_String_void_ptr_Ref_ptr *)0x0) {
LAB_00109783:
          Resource::get_path();
          cVar5 = String::is_resource_file();
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          if (cVar5 != '\0') {
            local_98 = "\")";
            local_a8 = (Variant *)0x0;
            local_90 = 2;
            String::parse_latin1((StrRange *)&local_a8);
            Resource::get_path();
            operator+((char *)&local_b8,(String *)"Resource(\"");
            String::operator+((String *)&local_98,(String *)&local_b8);
            pcVar20 = local_c8;
            if (local_c8 != local_98) {
              if (local_c8 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_c8 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_c8 = (char *)0x0;
                  Memory::free_static(pcVar20 + -0x10,false);
                }
              }
              local_c8 = local_98;
              local_98 = (char *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          }
          if ((local_c8 != (char *)0x0) && (1 < *(uint *)(local_c8 + -8))) goto LAB_0010a0f7;
          _err_print_error("write","core/variant/variant_parser.cpp",0x8b5,
                           "Failed to encode a path to a custom script for a dictionary value type."
                           ,0,0);
          if (local_d0 == (Object *)0x0) {
            local_98 = (char *)0x0;
          }
          else {
            local_98 = (char *)0x0;
            if (*(char **)(local_d0 + 8) == (char *)0x0) {
              if (*(long *)(local_d0 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(local_d0 + 0x10))
                ;
              }
            }
            else {
              String::parse_latin1((String *)&local_98,*(char **)(local_d0 + 8));
            }
          }
          (*param_2)(param_3,(String *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        }
        else {
          local_a8 = (Variant *)0x0;
          pOVar14 = (Object *)__dynamic_cast(pOVar13,&Object::typeinfo,&Resource::typeinfo,0);
          if ((pOVar14 != (Object *)0x0) &&
             (local_a8 = (Variant *)pOVar14, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
            local_a8 = (Variant *)0x0;
          }
          (*param_4)((String *)&local_98,param_5,(Ref *)&local_a8);
          pcVar20 = local_c8;
          if (local_c8 != local_98) {
            if (local_c8 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_c8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_c8 = (char *)0x0;
                Memory::free_static(pcVar20 + -0x10,false);
              }
            }
            local_c8 = local_98;
            local_98 = (char *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          if (((local_a8 != (Variant *)0x0) &&
              (cVar5 = RefCounted::unreference(), pVVar23 = local_a8, cVar5 != '\0')) &&
             (cVar5 = predelete_handler((Object *)local_a8), cVar5 != '\0')) {
            (**(code **)(*(long *)pVVar23 + 0x140))(pVVar23);
            Memory::free_static(pVVar23,false);
          }
          if ((local_c8 == (char *)0x0) || (*(uint *)(local_c8 + -8) < 2)) goto LAB_00109783;
LAB_0010a0f7:
          (*param_2)(param_3,(String *)&local_c8);
        }
        local_1c0 = (CowData<char32_t> *)&local_c8;
        CowData<char32_t>::_unref(local_1c0);
        local_98 = "](";
        local_a8 = (Variant *)0x0;
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_a8);
        (*param_2)(param_3,(String *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        cVar5 = RefCounted::unreference();
        if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar13), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
          Memory::free_static(pOVar13,false);
        }
}if (( StringName::configured != '\0' ) && ( local_d0 != (Object*)0x0 )) {
   StringName::unref();
}if (( ( local_198 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_198 + 0x140 ))(local_198);Memory::free_static(local_198, false);}if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
   StringName::unref();
}}if (param_6 < 0x65) {
   local_b8 = (Variant*)0x0;
   Dictionary::get_key_list((List*)&local_e0);
   List<Variant,DefaultAllocator>::sort_custom<StringLikeVariantOrder>((List<Variant,DefaultAllocator>*)&local_b8);
   if (( local_b8 == (Variant*)0x0 ) || ( *(int*)( local_b8 + 0x10 ) == 0 )) {
      local_98 = (char*)&_LC129;
      local_90 = 2;
   } else {
      local_98 = (undefined*)0x111b77;
      local_a8 = (Variant*)0x0;
      local_90 = 2;
      String::parse_latin1((StrRange*)&local_a8);
      ( *param_2 )(param_3, (String*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      if (local_b8 != (Variant*)0x0) {
         for (pVVar23 = *(Variant**)local_b8; pVVar23 != (Variant*)0x0; pVVar23 = *(Variant**)( pVVar23 + 0x18 )) {
            write(pVVar23, param_2, param_3, param_4, param_5, param_6 + 1, param_7);
            local_a8 = (Variant*)0x0;
            local_98 = ": ";
            local_90 = 2;
            String::parse_latin1((StrRange*)&local_a8);
            ( *param_2 )(param_3, (String*)&local_a8);
            pVVar8 = local_a8;
            if (local_a8 != (Variant*)0x0) {
               LOCK();
               plVar1 = (long*)( (long)local_a8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_a8 = (Variant*)0x0;
                  Memory::free_static((void*)( (long)pVVar8 + -0x10 ), false);
               }
            }
            pVVar8 = (Variant*)Dictionary::operator []((Variant*)&local_e0);
            write(pVVar8, param_2, param_3, param_4, param_5, param_6 + 1, param_7);
            local_a8 = (Variant*)0x0;
            if (*(long*)( pVVar23 + 0x18 ) == 0) {
               local_90 = 1;
               local_98 = "\n";
            } else {
               local_90 = 2;
               local_98 = (undefined*)0x111b7f;
            }
            String::parse_latin1((StrRange*)&local_a8);
            ( *param_2 )(param_3, (String*)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         }
      }
      local_98 = (char*)0x111b7a;
      local_90 = 1;
   }
   local_a8 = (Variant*)0x0;
   String::parse_latin1((StrRange*)&local_a8);
   ( *param_2 )(param_3, (String*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator>*)&local_b8);
} else {
   _err_print_error("write", "core/variant/variant_parser.cpp", 0x8c4, "Max recursion reached", 0, 0);
   local_98 = (char*)&_LC129;
   local_a8 = (Variant*)0x0;
   local_90 = 2;
   String::parse_latin1((StrRange*)&local_a8);
   ( *param_2 )(param_3, (String*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
}cVar5 = Dictionary::is_typed();if (cVar5 != '\0') {
   local_a8 = (Variant*)0x0;
   local_98 = ")";
   local_90 = 1;
   String::parse_latin1((StrRange*)&local_a8);
   ( *param_2 )(param_3, (String*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
}Dictionary::~Dictionary((Dictionary*)&local_e0);break;case 0x1c:
    ::Variant::operator_cast_to_Array((Variant *)&local_d8);
    cVar5 = Array::is_typed();
    if (cVar5 != '\0') {
      local_98 = "Array[";
      local_a8 = (Variant *)0x0;
      local_90 = 6;
      String::parse_latin1((StrRange *)&local_a8);
      (*param_2)(param_3,(String *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      uVar7 = Array::get_typed_builtin();
      Array::get_typed_class_name();
      Array::get_typed_script();
      lVar12 = ::Variant::get_validated_object();
      if (lVar12 == 0) {
LAB_00109d0f:
        cVar5 = ::Variant::needs_deinit[(int)(float)local_88];
joined_r0x0010a71b:
        if (cVar5 != '\0') {
          ::Variant::_clear_internal();
        }
        if (local_d0 == (Object *)0x0) {
          ::Variant::get_type_name((CowData<char32_t> *)&local_98,uVar7);
        }
        else if (*(char **)(local_d0 + 8) == (char *)0x0) {
          local_98 = (char *)0x0;
          if (*(long *)(local_d0 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(local_d0 + 0x10));
          }
        }
        else {
          local_98 = (char *)0x0;
          String::parse_latin1((String *)&local_98,*(char **)(local_d0 + 8));
        }
        (*param_2)(param_3,(String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        local_a8 = (Variant *)0x0;
        local_98 = "](";
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_a8);
        (*param_2)(param_3,(String *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      }
      else {
        pOVar13 = (Object *)__dynamic_cast(lVar12,&Object::typeinfo,&Script::typeinfo);
        if (pOVar13 == (Object *)0x0) {
          cVar5 = ::Variant::needs_deinit[(int)(float)local_88];
          goto joined_r0x0010a71b;
        }
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') goto LAB_00109d0f;
        if (::Variant::needs_deinit[(int)(float)local_88] != '\0') {
          ::Variant::_clear_internal();
        }
        local_c8 = (char *)0x0;
        if (param_4 == (_func_String_void_ptr_Ref_ptr *)0x0) {
LAB_00109b79:
          Resource::get_path();
          cVar5 = String::is_resource_file();
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          if (cVar5 != '\0') {
            local_98 = "\")";
            local_a8 = (Variant *)0x0;
            local_90 = 2;
            String::parse_latin1((StrRange *)&local_a8);
            Resource::get_path();
            operator+((char *)&local_b8,(String *)"Resource(\"");
            String::operator+((String *)&local_98,(String *)&local_b8);
            pcVar20 = local_c8;
            if (local_c8 != local_98) {
              if (local_c8 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_c8 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_c8 = (char *)0x0;
                  Memory::free_static(pcVar20 + -0x10,false);
                }
              }
              local_c8 = local_98;
              local_98 = (char *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          }
          if ((local_c8 != (char *)0x0) && (1 < *(uint *)(local_c8 + -8))) goto LAB_0010a0cd;
          _err_print_error("write","core/variant/variant_parser.cpp",0x8fd,
                           "Failed to encode a path to a custom script for an array type.",0,0);
          if (local_d0 == (Object *)0x0) {
            local_98 = (char *)0x0;
          }
          else {
            local_98 = (char *)0x0;
            if (*(char **)(local_d0 + 8) == (char *)0x0) {
              if (*(long *)(local_d0 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(local_d0 + 0x10))
                ;
              }
            }
            else {
              String::parse_latin1((String *)&local_98,*(char **)(local_d0 + 8));
            }
          }
          (*param_2)(param_3,(String *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        }
        else {
          local_a8 = (Variant *)0x0;
          pOVar14 = (Object *)__dynamic_cast(pOVar13,&Object::typeinfo,&Resource::typeinfo,0);
          if ((pOVar14 != (Object *)0x0) &&
             (local_a8 = (Variant *)pOVar14, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
            local_a8 = (Variant *)0x0;
          }
          (*param_4)((String *)&local_98,param_5,(Ref *)&local_a8);
          pcVar20 = local_c8;
          if (local_c8 != local_98) {
            if (local_c8 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_c8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_c8 = (char *)0x0;
                Memory::free_static(pcVar20 + -0x10,false);
              }
            }
            local_c8 = local_98;
            local_98 = (char *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          if (((local_a8 != (Variant *)0x0) &&
              (cVar5 = RefCounted::unreference(), pVVar23 = local_a8, cVar5 != '\0')) &&
             (cVar5 = predelete_handler((Object *)local_a8), cVar5 != '\0')) {
            (**(code **)(*(long *)pVVar23 + 0x140))(pVVar23);
            Memory::free_static(pVVar23,false);
          }
          if ((local_c8 == (char *)0x0) || (*(uint *)(local_c8 + -8) < 2)) goto LAB_00109b79;
LAB_0010a0cd:
          (*param_2)(param_3,(String *)&local_c8);
        }
        local_1c0 = (CowData<char32_t> *)&local_c8;
        CowData<char32_t>::_unref(local_1c0);
        local_98 = "](";
        local_a8 = (Variant *)0x0;
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_a8);
        (*param_2)(param_3,(String *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        cVar5 = RefCounted::unreference();
        if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar13), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
          Memory::free_static(pOVar13,false);
        }
      }
      if ((StringName::configured != '\0') && (local_d0 != (Object *)0x0)) {
        StringName::unref();
      }
    }
    if (param_6 < 0x65) {
      local_a8 = (Variant *)0x0;
      local_98 = "[";
      local_90 = 1;
      String::parse_latin1((StrRange *)&local_a8);
      (*param_2)(param_3,(String *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      Array::begin();
      Array::end();
      if (local_b8 != local_a8) {
        pVVar23 = local_b8;
        if (local_b0 != (Variant *)0x0) {
          ::Variant::operator=(local_b0,local_b8);
          pVVar23 = local_b0;
        }
        while( true ) {
          write(pVVar23,param_2,param_3,param_4,param_5,param_6 + 1,param_7);
          local_b8 = local_b8 + 0x18;
          if (local_b8 == local_a8) break;
          pVVar23 = local_b8;
          if (local_b0 != (Variant *)0x0) {
            ::Variant::operator=(local_b0,local_b8);
            pVVar23 = local_b0;
          }
          local_c0 = (long *)0x0;
          local_98 = ", ";
          local_90 = 2;
          String::parse_latin1((StrRange *)&local_c0);
          (*param_2)(param_3,(String *)&local_c0);
          plVar1 = local_c0;
          if (local_c0 != (long *)0x0) {
            LOCK();
            plVar2 = local_c0 + -2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_c0 = (long *)0x0;
              Memory::free_static(plVar1 + -2,false);
            }
          }
        }
      }
      local_98 = "]";
      local_90 = 1;
    }
    else {
      _err_print_error("write","core/variant/variant_parser.cpp",0x90a,"Max recursion reached",0,0);
      local_98 = "[]";
      local_90 = 2;
    }
    local_a8 = (Variant *)0x0;
    String::parse_latin1((StrRange *)&local_a8);
    (*param_2)(param_3,(String *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    cVar5 = Array::is_typed();
    if (cVar5 != '\0') {
      local_a8 = (Variant *)0x0;
      local_98 = ")";
      local_90 = 1;
      String::parse_latin1((StrRange *)&local_a8);
      (*param_2)(param_3,(String *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    }
    Array::~Array((Array *)&local_d8);
    break;case 0x1d:
    local_a8 = (Variant *)0x0;
    local_90 = 0x10;
    local_98 = "PackedByteArray(";
    String::parse_latin1((StrRange *)&local_a8);
    (*param_2)(param_3,(String *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    ::Variant::operator_cast_to_Vector((Variant *)&local_a8);
    if (param_7) {
      if ((local_a0 != (float *)0x0) && (uVar11 = *(undefined8 *)(local_a0 + -2), 0 < (int)uVar11))
      {
        uVar18 = 0;
        do {
          if (uVar18 != 0) {
            local_b8 = (Variant *)0x0;
            local_98 = ", ";
            local_90 = 2;
            String::parse_latin1((StrRange *)&local_b8);
            (*param_2)(param_3,(String *)&local_b8);
            pVVar23 = local_b8;
            if (local_b8 != (Variant *)0x0) {
              LOCK();
              pVVar8 = local_b8 + -0x10;
              *(long *)pVVar8 = *(long *)pVVar8 + -1;
              UNLOCK();
              if (*(long *)pVVar8 == 0) {
                local_b8 = (Variant *)0x0;
                Memory::free_static(pVVar23 + -0x10,false);
              }
            }
          }
          itos((long)&local_98);
          (*param_2)(param_3,(String *)&local_98);
          pcVar20 = local_98;
          if (local_98 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_98 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_98 = (char *)0x0;
              Memory::free_static(pcVar20 + -0x10,false);
            }
          }
          bVar24 = (int)uVar11 - 1 != uVar18;
          uVar18 = uVar18 + 1;
        } while (bVar24);
      }
    }
    else if ((local_a0 != (float *)0x0) && (0 < *(long *)(local_a0 + -2))) {
      local_b8 = (Variant *)0x0;
      local_98 = "\"";
      local_90 = 1;
      String::parse_latin1((StrRange *)&local_b8);
      (*param_2)(param_3,(String *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CryptoCore::b64_encode_str((uchar *)&local_98,(int)local_a0);
      (*param_2)(param_3,(String *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      local_b8 = (Variant *)0x0;
      local_98 = "\"";
      local_90 = 1;
      String::parse_latin1((StrRange *)&local_b8);
      (*param_2)(param_3,(String *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    }
    goto LAB_00108cc5;case 0x1e:
    local_a8 = (Variant *)0x0;
    local_90 = 0x11;
    local_98 = "PackedInt32Array(";
    String::parse_latin1((StrRange *)&local_a8);
    (*param_2)(param_3,(String *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    ::Variant::operator_cast_to_Vector((Variant *)&local_a8);
    if ((local_a0 != (float *)0x0) && (uVar11 = *(undefined8 *)(local_a0 + -2), 0 < (int)uVar11)) {
      uVar18 = 0;
      do {
        if (uVar18 != 0) {
          local_b8 = (Variant *)0x0;
          local_98 = ", ";
          local_90 = 2;
          String::parse_latin1((StrRange *)&local_b8);
          (*param_2)(param_3,(String *)&local_b8);
          pVVar23 = local_b8;
          if (local_b8 != (Variant *)0x0) {
            LOCK();
            pVVar8 = local_b8 + -0x10;
            *(long *)pVVar8 = *(long *)pVVar8 + -1;
            UNLOCK();
            if (*(long *)pVVar8 == 0) {
              local_b8 = (Variant *)0x0;
              Memory::free_static(pVVar23 + -0x10,false);
            }
          }
        }
        itos((long)&local_98);
        (*param_2)(param_3,(String *)&local_98);
        pcVar20 = local_98;
        if (local_98 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (char *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        bVar24 = (int)uVar11 - 1 != uVar18;
        uVar18 = uVar18 + 1;
      } while (bVar24);
    }
    goto LAB_00108cc5;case 0x1f:
    local_a8 = (Variant *)0x0;
    local_90 = 0x11;
    local_98 = "PackedInt64Array(";
    String::parse_latin1((StrRange *)&local_a8);
    (*param_2)(param_3,(String *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    ::Variant::operator_cast_to_Vector((Variant *)&local_a8);
    if (local_a0 != (float *)0x0) {
      lVar12 = *(long *)(local_a0 + -2);
      lVar19 = 0;
      if (0 < lVar12) {
        while( true ) {
          itos((long)&local_98);
          (*param_2)(param_3,(String *)&local_98);
          pcVar20 = local_98;
          if (local_98 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_98 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_98 = (char *)0x0;
              Memory::free_static(pcVar20 + -0x10,false);
            }
          }
          lVar19 = lVar19 + 1;
          if (lVar19 == lVar12) break;
          local_b8 = (Variant *)0x0;
          local_98 = ", ";
          local_90 = 2;
          String::parse_latin1((StrRange *)&local_b8);
          (*param_2)(param_3,(String *)&local_b8);
          pVVar23 = local_b8;
          if (local_b8 != (Variant *)0x0) {
            LOCK();
            pVVar8 = local_b8 + -0x10;
            *(long *)pVVar8 = *(long *)pVVar8 + -1;
            UNLOCK();
            if (*(long *)pVVar8 == 0) {
              local_b8 = (Variant *)0x0;
              Memory::free_static(pVVar23 + -0x10,false);
            }
          }
        }
      }
    }
    goto LAB_00108cc5;case 0x20:
    local_a8 = (Variant *)0x0;
    local_90 = 0x13;
    local_98 = "PackedFloat32Array(";
    String::parse_latin1((StrRange *)&local_a8);
    (*param_2)(param_3,(String *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    ::Variant::operator_cast_to_Vector((Variant *)&local_a8);
    pfVar17 = local_a0;
    if ((local_a0 != (float *)0x0) && (uVar11 = *(undefined8 *)(local_a0 + -2), 0 < (int)uVar11)) {
      uVar18 = 0;
      do {
        if (uVar18 != 0) {
          local_b8 = (Variant *)0x0;
          local_98 = ", ";
          local_90 = 2;
          String::parse_latin1((StrRange *)&local_b8);
          (*param_2)(param_3,(String *)&local_b8);
          pVVar23 = local_b8;
          if (local_b8 != (Variant *)0x0) {
            LOCK();
            pVVar8 = local_b8 + -0x10;
            *(long *)pVVar8 = *(long *)pVVar8 + -1;
            UNLOCK();
            if (*(long *)pVVar8 == 0) {
              local_b8 = (Variant *)0x0;
              Memory::free_static(pVVar23 + -0x10,false);
            }
          }
        }
        rtos_fix((double)pfVar17[uVar18]);
        (*param_2)(param_3,(String *)&local_98);
        pcVar20 = local_98;
        if (local_98 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (char *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        bVar24 = uVar18 != (int)uVar11 - 1;
        uVar18 = uVar18 + 1;
      } while (bVar24);
    }
    goto LAB_00108cc5;case 0x21:
    local_a8 = (Variant *)0x0;
    local_90 = 0x13;
    local_98 = "PackedFloat64Array(";
    String::parse_latin1((StrRange *)&local_a8);
    (*param_2)(param_3,(String *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    ::Variant::operator_cast_to_Vector((Variant *)&local_a8);
    pfVar17 = local_a0;
    if ((local_a0 != (float *)0x0) && (uVar11 = *(undefined8 *)(local_a0 + -2), 0 < (int)uVar11)) {
      uVar18 = 0;
      do {
        if (uVar18 != 0) {
          local_b8 = (Variant *)0x0;
          local_98 = ", ";
          local_90 = 2;
          String::parse_latin1((StrRange *)&local_b8);
          (*param_2)(param_3,(String *)&local_b8);
          pVVar23 = local_b8;
          if (local_b8 != (Variant *)0x0) {
            LOCK();
            pVVar8 = local_b8 + -0x10;
            *(long *)pVVar8 = *(long *)pVVar8 + -1;
            UNLOCK();
            if (*(long *)pVVar8 == 0) {
              local_b8 = (Variant *)0x0;
              Memory::free_static(pVVar23 + -0x10,false);
            }
          }
        }
        rtos_fix(*(double *)(pfVar17 + uVar18 * 2));
        (*param_2)(param_3,(String *)&local_98);
        pcVar20 = local_98;
        if (local_98 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (char *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        bVar24 = uVar18 != (int)uVar11 - 1;
        uVar18 = uVar18 + 1;
      } while (bVar24);
    }
    goto LAB_00108cc5;case 0x22:
    local_a8 = (Variant *)0x0;
    local_90 = 0x12;
    local_98 = "PackedStringArray(";
    String::parse_latin1((StrRange *)&local_a8);
    (*param_2)(param_3,(String *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    ::Variant::operator_cast_to_Vector((Variant *)&local_a8);
    if ((local_a0 != (float *)0x0) && (uVar11 = *(undefined8 *)(local_a0 + -2), 0 < (int)uVar11)) {
      iVar22 = 0;
      while( true ) {
        local_b8 = (Variant *)0x0;
        local_98 = "\"";
        local_90 = 1;
        String::parse_latin1((StrRange *)&local_b8);
        String::c_escape();
        operator+((char *)&local_c0,(String *)&_LC91);
        String::operator+((String *)&local_98,(String *)&local_c0);
        (*param_2)(param_3,(String *)&local_98);
        pcVar20 = local_98;
        if (local_98 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (undefined *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        plVar1 = local_c0;
        if (local_c0 != (long *)0x0) {
          LOCK();
          plVar2 = local_c0 + -2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_c0 = (long *)0x0;
            Memory::free_static(plVar1 + -2,false);
          }
        }
        pcVar20 = local_c8;
        if (local_c8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c8 = (char *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        pVVar23 = local_b8;
        if (local_b8 != (Variant *)0x0) {
          LOCK();
          local_b8 = local_b8 + -0x10;
          *(long *)local_b8 = *(long *)local_b8 + -1;
          UNLOCK();
          if (*(long *)local_b8 == 0) {
            local_b8 = (Variant *)0x0;
            Memory::free_static(pVVar23 + -0x10,false);
          }
        }
        iVar22 = iVar22 + 1;
        if ((int)uVar11 == iVar22) break;
        local_b8 = (Variant *)0x0;
        local_98 = ", ";
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_b8);
        (*param_2)(param_3,(String *)&local_b8);
        pVVar23 = local_b8;
        if (local_b8 != (Variant *)0x0) {
          LOCK();
          local_b8 = local_b8 + -0x10;
          *(long *)local_b8 = *(long *)local_b8 + -1;
          UNLOCK();
          if (*(long *)local_b8 == 0) {
            local_b8 = (Variant *)0x0;
            Memory::free_static(pVVar23 + -0x10,false);
          }
        }
      }
    }
    local_b8 = (Variant *)0x0;
    local_98 = ")";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_b8);
    (*param_2)(param_3,(String *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<String>::_unref((CowData<String> *)&local_a0);
    break;case 0x23:
    local_a8 = (Variant *)0x0;
    local_98 = "PackedVector2Array(";
    local_90 = 0x13;
    String::parse_latin1((StrRange *)&local_a8);
    (*param_2)(param_3,(String *)&local_a8);
    pVVar23 = local_a8;
    if (local_a8 != (Variant *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = (Variant *)0x0;
        Memory::free_static((void *)((long)pVVar23 + -0x10),false);
      }
    }
    ::Variant::operator_cast_to_Vector((Variant *)&local_a8);
    pfVar17 = local_a0;
    if ((local_a0 != (float *)0x0) && (uVar11 = *(undefined8 *)(local_a0 + -2), 0 < (int)uVar11)) {
      uVar18 = 0;
      do {
        if (uVar18 != 0) {
          local_b8 = (Variant *)0x0;
          local_98 = ", ";
          local_90 = 2;
          String::parse_latin1((StrRange *)&local_b8);
          (*param_2)(param_3,(String *)&local_b8);
          pVVar23 = local_b8;
          if (local_b8 != (Variant *)0x0) {
            LOCK();
            pVVar8 = local_b8 + -0x10;
            *(long *)pVVar8 = *(long *)pVVar8 + -1;
            UNLOCK();
            if (*(long *)pVVar8 == 0) {
              local_b8 = (Variant *)0x0;
              Memory::free_static(pVVar23 + -0x10,false);
            }
          }
        }
        rtos_fix((double)pfVar17[uVar18 * 2 + 1]);
        local_c8 = (char *)0x0;
        local_98 = ", ";
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_c8);
        rtos_fix((double)pfVar17[uVar18 * 2]);
        String::operator+((String *)&local_c0,(String *)&local_d0);
        String::operator+((String *)&local_98,(String *)&local_c0);
        (*param_2)(param_3,(String *)&local_98);
        pcVar20 = local_98;
        if (local_98 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (char *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        plVar1 = local_c0;
        if (local_c0 != (long *)0x0) {
          LOCK();
          plVar2 = local_c0 + -2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_c0 = (long *)0x0;
            Memory::free_static(plVar1 + -2,false);
          }
        }
        pOVar13 = local_d0;
        if (local_d0 != (Object *)0x0) {
          LOCK();
          pOVar14 = local_d0 + -0x10;
          *(long *)pOVar14 = *(long *)pOVar14 + -1;
          UNLOCK();
          if (*(long *)pOVar14 == 0) {
            local_d0 = (Object *)0x0;
            Memory::free_static(pOVar13 + -0x10,false);
          }
        }
        pcVar20 = local_c8;
        if (local_c8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c8 = (char *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        pVVar23 = local_b8;
        if (local_b8 != (Variant *)0x0) {
          LOCK();
          pVVar8 = local_b8 + -0x10;
          *(long *)pVVar8 = *(long *)pVVar8 + -1;
          UNLOCK();
          if (*(long *)pVVar8 == 0) {
            local_b8 = (Variant *)0x0;
            Memory::free_static(pVVar23 + -0x10,false);
          }
        }
        bVar24 = uVar18 != (int)uVar11 - 1;
        uVar18 = uVar18 + 1;
      } while (bVar24);
    }
    goto LAB_00108cc5;case 0x24:
    local_a8 = (Variant *)0x0;
    local_90 = 0x13;
    local_98 = "PackedVector3Array(";
    String::parse_latin1((StrRange *)&local_a8);
    (*param_2)(param_3,(String *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    ::Variant::operator_cast_to_Vector((Variant *)&local_a8);
    if ((local_a0 != (float *)0x0) && (uVar11 = *(undefined8 *)(local_a0 + -2), 0 < (int)uVar11)) {
      iVar22 = 0;
      pfVar17 = local_a0;
      while( true ) {
        rtos_fix((double)pfVar17[2]);
        local_c8 = (char *)0x0;
        local_98 = ", ";
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_c8);
        rtos_fix((double)pfVar17[1]);
        local_e8 = 0;
        local_98 = ", ";
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_e8);
        rtos_fix((double)*pfVar17);
        String::operator+((String *)&local_e0,(String *)&local_f0);
        String::operator+((String *)&local_d0,(String *)&local_e0);
        String::operator+((String *)&local_c0,(String *)&local_d0);
        String::operator+((String *)&local_98,(String *)&local_c0);
        (*param_2)(param_3,(String *)&local_98);
        pcVar20 = local_98;
        if (local_98 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (undefined *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        plVar1 = local_c0;
        if (local_c0 != (long *)0x0) {
          LOCK();
          plVar2 = local_c0 + -2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_c0 = (long *)0x0;
            Memory::free_static(plVar1 + -2,false);
          }
        }
        pOVar13 = local_d0;
        if (local_d0 != (Object *)0x0) {
          LOCK();
          pOVar14 = local_d0 + -0x10;
          *(long *)pOVar14 = *(long *)pOVar14 + -1;
          UNLOCK();
          if (*(long *)pOVar14 == 0) {
            local_d0 = (Object *)0x0;
            Memory::free_static(pOVar13 + -0x10,false);
          }
        }
        lVar12 = local_e0;
        if (local_e0 != 0) {
          LOCK();
          plVar1 = (long *)(local_e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar12 = local_f0;
        if (local_f0 != 0) {
          LOCK();
          plVar1 = (long *)(local_f0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar12 = local_e8;
        if (local_e8 != 0) {
          LOCK();
          plVar1 = (long *)(local_e8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e8 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar12 = local_d8;
        if (local_d8 != 0) {
          LOCK();
          plVar1 = (long *)(local_d8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_d8 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        pcVar20 = local_c8;
        if (local_c8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c8 = (char *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        pVVar23 = local_b8;
        if (local_b8 != (Variant *)0x0) {
          LOCK();
          local_b8 = local_b8 + -0x10;
          *(long *)local_b8 = *(long *)local_b8 + -1;
          UNLOCK();
          if (*(long *)local_b8 == 0) {
            local_b8 = (Variant *)0x0;
            Memory::free_static(pVVar23 + -0x10,false);
          }
        }
        iVar22 = iVar22 + 1;
        if ((int)uVar11 == iVar22) break;
        local_b8 = (Variant *)0x0;
        local_98 = ", ";
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_b8);
        (*param_2)(param_3,(String *)&local_b8);
        pVVar23 = local_b8;
        if (local_b8 != (Variant *)0x0) {
          LOCK();
          pVVar8 = local_b8 + -0x10;
          *(long *)pVVar8 = *(long *)pVVar8 + -1;
          UNLOCK();
          if (*(long *)pVVar8 == 0) {
            local_b8 = (Variant *)0x0;
            Memory::free_static(pVVar23 + -0x10,false);
          }
        }
        pfVar17 = pfVar17 + 3;
      }
    }
    goto LAB_00108cc5;case 0x25:
    local_a8 = (Variant *)0x0;
    local_90 = 0x11;
    local_98 = "PackedColorArray(";
    String::parse_latin1((StrRange *)&local_a8);
    (*param_2)(param_3,(String *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    ::Variant::operator_cast_to_Vector((Variant *)&local_a8);
    if ((local_a0 != (float *)0x0) && (uVar11 = *(undefined8 *)(local_a0 + -2), 0 < (int)uVar11)) {
      iVar22 = 0;
      pfVar17 = local_a0;
      while( true ) {
        rtos_fix((double)pfVar17[3]);
        local_c8 = (char *)0x0;
        local_98 = ", ";
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_c8);
        rtos_fix((double)pfVar17[2]);
        local_e8 = 0;
        local_98 = ", ";
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_e8);
        rtos_fix((double)pfVar17[1]);
        local_108 = (undefined *)0x0;
        local_98 = ", ";
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_108);
        rtos_fix((double)*pfVar17);
        String::operator+((String *)&local_100,(String *)&local_110);
        String::operator+((String *)&local_f0,(String *)&local_100);
        String::operator+((String *)&local_e0,(String *)&local_f0);
        String::operator+((String *)&local_d0,(String *)&local_e0);
        String::operator+((String *)&local_c0,(String *)&local_d0);
        String::operator+((String *)&local_98,(String *)&local_c0);
        (*param_2)(param_3,(String *)&local_98);
        pcVar20 = local_98;
        if (local_98 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (undefined *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        plVar1 = local_c0;
        if (local_c0 != (long *)0x0) {
          LOCK();
          plVar2 = local_c0 + -2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_c0 = (long *)0x0;
            Memory::free_static(plVar1 + -2,false);
          }
        }
        pOVar13 = local_d0;
        if (local_d0 != (Object *)0x0) {
          LOCK();
          pOVar14 = local_d0 + -0x10;
          *(long *)pOVar14 = *(long *)pOVar14 + -1;
          UNLOCK();
          if (*(long *)pOVar14 == 0) {
            local_d0 = (Object *)0x0;
            Memory::free_static(pOVar13 + -0x10,false);
          }
        }
        lVar12 = local_e0;
        if (local_e0 != 0) {
          LOCK();
          plVar1 = (long *)(local_e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar12 = local_f0;
        if (local_f0 != 0) {
          LOCK();
          plVar1 = (long *)(local_f0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar12 = local_100;
        if (local_100 != 0) {
          LOCK();
          plVar1 = (long *)(local_100 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_100 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar12 = local_110;
        if (local_110 != 0) {
          LOCK();
          plVar1 = (long *)(local_110 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_110 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        puVar4 = local_108;
        if (local_108 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_108 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_108 = (undefined *)0x0;
            Memory::free_static(puVar4 + -0x10,false);
          }
        }
        lVar12 = local_f8;
        if (local_f8 != 0) {
          LOCK();
          plVar1 = (long *)(local_f8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_f8 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar12 = local_e8;
        if (local_e8 != 0) {
          LOCK();
          plVar1 = (long *)(local_e8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e8 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar12 = local_d8;
        if (local_d8 != 0) {
          LOCK();
          plVar1 = (long *)(local_d8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_d8 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        pcVar20 = local_c8;
        if (local_c8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c8 = (char *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        pVVar23 = local_b8;
        if (local_b8 != (Variant *)0x0) {
          LOCK();
          local_b8 = local_b8 + -0x10;
          *(long *)local_b8 = *(long *)local_b8 + -1;
          UNLOCK();
          if (*(long *)local_b8 == 0) {
            local_b8 = (Variant *)0x0;
            Memory::free_static(pVVar23 + -0x10,false);
          }
        }
        iVar22 = iVar22 + 1;
        if ((int)uVar11 == iVar22) break;
        local_b8 = (Variant *)0x0;
        local_98 = ", ";
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_b8);
        (*param_2)(param_3,(String *)&local_b8);
        pVVar23 = local_b8;
        if (local_b8 != (Variant *)0x0) {
          LOCK();
          pVVar8 = local_b8 + -0x10;
          *(long *)pVVar8 = *(long *)pVVar8 + -1;
          UNLOCK();
          if (*(long *)pVVar8 == 0) {
            local_b8 = (Variant *)0x0;
            Memory::free_static(pVVar23 + -0x10,false);
          }
        }
        pfVar17 = pfVar17 + 4;
      }
    }
    goto LAB_00108cc5;case 0x26:
    local_a8 = (Variant *)0x0;
    local_90 = 0x13;
    local_98 = "PackedVector4Array(";
    String::parse_latin1((StrRange *)&local_a8);
    (*param_2)(param_3,(String *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    ::Variant::operator_cast_to_Vector((Variant *)&local_a8);
    if ((local_a0 != (float *)0x0) && (uVar11 = *(undefined8 *)(local_a0 + -2), 0 < (int)uVar11)) {
      iVar22 = 0;
      pfVar17 = local_a0;
      while( true ) {
        rtos_fix((double)pfVar17[3]);
        local_c8 = (char *)0x0;
        local_98 = ", ";
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_c8);
        rtos_fix((double)pfVar17[2]);
        local_e8 = 0;
        local_98 = ", ";
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_e8);
        rtos_fix((double)pfVar17[1]);
        local_108 = (undefined *)0x0;
        local_98 = ", ";
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_108);
        rtos_fix((double)*pfVar17);
        String::operator+((String *)&local_100,(String *)&local_110);
        String::operator+((String *)&local_f0,(String *)&local_100);
        String::operator+((String *)&local_e0,(String *)&local_f0);
        String::operator+((String *)&local_d0,(String *)&local_e0);
        String::operator+((String *)&local_c0,(String *)&local_d0);
        String::operator+((String *)&local_98,(String *)&local_c0);
        (*param_2)(param_3,(String *)&local_98);
        pcVar20 = local_98;
        if (local_98 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = (undefined *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        plVar1 = local_c0;
        if (local_c0 != (long *)0x0) {
          LOCK();
          plVar2 = local_c0 + -2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_c0 = (long *)0x0;
            Memory::free_static(plVar1 + -2,false);
          }
        }
        pOVar13 = local_d0;
        if (local_d0 != (Object *)0x0) {
          LOCK();
          pOVar14 = local_d0 + -0x10;
          *(long *)pOVar14 = *(long *)pOVar14 + -1;
          UNLOCK();
          if (*(long *)pOVar14 == 0) {
            local_d0 = (Object *)0x0;
            Memory::free_static(pOVar13 + -0x10,false);
          }
        }
        lVar12 = local_e0;
        if (local_e0 != 0) {
          LOCK();
          plVar1 = (long *)(local_e0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar12 = local_f0;
        if (local_f0 != 0) {
          LOCK();
          plVar1 = (long *)(local_f0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar12 = local_100;
        if (local_100 != 0) {
          LOCK();
          plVar1 = (long *)(local_100 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_100 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar12 = local_110;
        if (local_110 != 0) {
          LOCK();
          plVar1 = (long *)(local_110 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_110 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        puVar4 = local_108;
        if (local_108 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_108 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_108 = (undefined *)0x0;
            Memory::free_static(puVar4 + -0x10,false);
          }
        }
        lVar12 = local_f8;
        if (local_f8 != 0) {
          LOCK();
          plVar1 = (long *)(local_f8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_f8 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar12 = local_e8;
        if (local_e8 != 0) {
          LOCK();
          plVar1 = (long *)(local_e8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e8 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        lVar12 = local_d8;
        if (local_d8 != 0) {
          LOCK();
          plVar1 = (long *)(local_d8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_d8 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
        pcVar20 = local_c8;
        if (local_c8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c8 = (char *)0x0;
            Memory::free_static(pcVar20 + -0x10,false);
          }
        }
        pVVar23 = local_b8;
        if (local_b8 != (Variant *)0x0) {
          LOCK();
          local_b8 = local_b8 + -0x10;
          *(long *)local_b8 = *(long *)local_b8 + -1;
          UNLOCK();
          if (*(long *)local_b8 == 0) {
            local_b8 = (Variant *)0x0;
            Memory::free_static(pVVar23 + -0x10,false);
          }
        }
        iVar22 = iVar22 + 1;
        if ((int)uVar11 == iVar22) break;
        local_b8 = (Variant *)0x0;
        local_98 = ", ";
        local_90 = 2;
        String::parse_latin1((StrRange *)&local_b8);
        (*param_2)(param_3,(String *)&local_b8);
        pVVar23 = local_b8;
        if (local_b8 != (Variant *)0x0) {
          LOCK();
          pVVar8 = local_b8 + -0x10;
          *(long *)pVVar8 = *(long *)pVVar8 + -1;
          UNLOCK();
          if (*(long *)pVVar8 == 0) {
            local_b8 = (Variant *)0x0;
            Memory::free_static(pVVar23 + -0x10,false);
          }
        }
        pfVar17 = pfVar17 + 4;
      }
    }
LAB_00108cc5:
    local_b8 = (Variant *)0x0;
    local_98 = ")";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_b8);
    (*param_2)(param_3,(String *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    pfVar17 = local_a0;
    if (local_a0 != (float *)0x0) {
      LOCK();
      pfVar3 = local_a0 + -4;
      *(long *)pfVar3 = *(long *)pfVar3 + -1;
      UNLOCK();
      if (*(long *)pfVar3 == 0) {
        local_a0 = (float *)0x0;
        Memory::free_static(pfVar17 + -4,false);
      }
    }
    break;default:
    _err_print_error("write","core/variant/variant_parser.cpp",0x9c1,"Unknown variant type",0,0);
    uVar11 = 0x2f;
    goto LAB_00103367;
  }
  uVar11 = 0;
LAB_00103367:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



/* VariantWriter::write_to_string(Variant const&, String&, String (*)(void*, Ref<Resource> const&),
   void*, bool) */

void VariantWriter::write_to_string
               (Variant *param_1,String *param_2,_func_String_void_ptr_Ref_ptr *param_3,
               void *param_4,bool param_5)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)param_2 != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)param_2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)param_2;
      *(undefined8 *)param_2 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    *(undefined8 *)param_2 = 0;
  }
  write(param_1,_write_to_str,param_2,param_3,param_4,0,param_5);
  return;
}



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* VariantParser::_parse_enginecfg(VariantParser::Stream*, Vector<String>&, int&, String&) */

undefined8
VariantParser::_parse_enginecfg(Stream *param_1,Vector *param_2,int *param_3,String *param_4)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  Stream SVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_80;
  char *local_78;
  undefined8 local_70;
  int local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  get_token(param_1,(Token *)local_68,param_3,param_4);
  if (local_68[0] != 4) {
    local_70 = 0x31;
    local_78 = "Expected \'(\' in old-style project.godot construct";
    uVar6 = 0x2b;
    String::parse_latin1((StrRange *)param_4);
    goto LAB_0010ae93;
  }
  local_80 = 0;
  while( true ) {
    while( true ) {
      iVar5 = Stream::get_char(param_1);
      if (param_1[0x2011] == (Stream)0x0) {
        SVar4 = (Stream)(**(code **)(*(long *)param_1 + 8))(param_1);
      }
      else {
        SVar4 = param_1[0x2010];
      }
      if (SVar4 != (Stream)0x0) {
        local_70 = 0x3e;
        local_78 = "Unexpected EOF while parsing old-style project.godot construct";
        uVar6 = 0x2b;
        String::parse_latin1((StrRange *)param_4);
        goto LAB_0010ae68;
      }
      if (iVar5 != 0x2c) break;
      String::strip_edges(SUB81(&local_78,0),SUB81(&local_80,0));
      Vector<String>::push_back((Vector<String> *)param_2);
      pcVar3 = local_78;
      if (local_78 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
          local_80 = 0;
        }
        else {
          local_80 = 0;
        }
      }
    }
    if (iVar5 == 0x29) break;
    if (iVar5 == 10) {
      *param_3 = *param_3 + 1;
    }
  }
  String::strip_edges(SUB81(&local_78,0),SUB81(&local_80,0));
  Vector<String>::push_back((Vector<String> *)param_2);
  pcVar3 = local_78;
  if (local_78 == (char *)0x0) {
LAB_0010afa4:
    uVar6 = 0;
  }
  else {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0010afa4;
    uVar6 = 0;
    local_78 = (char *)0x0;
    Memory::free_static(pcVar3 + -0x10,false);
  }
LAB_0010ae68:
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
LAB_0010ae93:
  if (::Variant::needs_deinit[(int)local_60] != '\0') {
    ::Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* VariantParser::parse_value(VariantParser::Token&, Variant&, VariantParser::Stream*, int&,
   String&, VariantParser::ResourceParser*) */

StringName *
VariantParser::parse_value
          (Token *param_1,Variant *param_2,Stream *param_3,int *param_4,String *param_5,
          ResourceParser *param_6)

{
  Variant *this;
  long *plVar1;
  Object *pOVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  char cVar7;
  Stream SVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  code *pcVar12;
  StringName *pSVar13;
  RefCounted *pRVar14;
  ulong uVar15;
  uint *puVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  char cVar20;
  int iVar21;
  Object *pOVar22;
  long lVar23;
  StringName *pSVar24;
  long in_FS_OFFSET;
  bool bVar25;
  float fVar26;
  Ref<Resource> *local_1c8;
  char local_1b8;
  Ref<Script> *local_1b0;
  Variant *local_198;
  char local_188;
  bool local_180;
  long local_168;
  Dictionary local_160 [8];
  Object *local_158;
  Object *local_150;
  undefined8 local_148;
  undefined8 *local_140;
  Object *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined1 auStack_110 [16];
  undefined8 local_f8;
  undefined1 auStack_f0 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined4 local_68;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = *(uint *)param_1;
  if (10 < uVar9) {
LAB_0010b2d0:
    local_150 = (Object *)0x0;
    pOVar22 = *(Object **)(tk_name + (long)(int)uVar9 * 8);
    local_130 = (undefined8 *)0x0;
    if (pOVar22 != (Object *)0x0) {
      local_130 = (undefined8 *)strlen((char *)pOVar22);
    }
    local_138 = pOVar22;
    String::parse_latin1((StrRange *)&local_150);
    local_138 = (Object *)0x112008;
    local_148 = (Object *)0x0;
    local_130 = (undefined8 *)0x18;
    String::parse_latin1((StrRange *)&local_148);
    vformat<String>(&local_138,(StrRange *)&local_148,(StrRange *)&local_150);
    pOVar22 = *(Object **)param_5;
    if (pOVar22 == local_138) {
      if (pOVar22 != (Object *)0x0) {
        LOCK();
        pOVar22 = pOVar22 + -0x10;
        *(long *)pOVar22 = *(long *)pOVar22 + -1;
        UNLOCK();
        if (*(long *)pOVar22 == 0) {
          Memory::free_static(local_138 + -0x10,false);
        }
      }
    }
    else {
      if (pOVar22 != (Object *)0x0) {
        LOCK();
        pOVar22 = pOVar22 + -0x10;
        *(long *)pOVar22 = *(long *)pOVar22 + -1;
        UNLOCK();
        if (*(long *)pOVar22 == 0) {
          lVar18 = *(long *)param_5;
          *(undefined8 *)param_5 = 0;
          Memory::free_static((void *)(lVar18 + -0x10),false);
        }
      }
      *(Object **)param_5 = local_138;
    }
    pOVar22 = local_148;
    if (local_148 != (Object *)0x0) {
      LOCK();
      pOVar2 = local_148 + -0x10;
      *(long *)pOVar2 = *(long *)pOVar2 + -1;
      UNLOCK();
      if (*(long *)pOVar2 == 0) {
        local_148 = (Object *)0x0;
        Memory::free_static(pOVar22 + -0x10,false);
      }
    }
    pOVar22 = local_150;
    if (local_150 != (Object *)0x0) {
      LOCK();
      pOVar2 = local_150 + -0x10;
      *(long *)pOVar2 = *(long *)pOVar2 + -1;
      UNLOCK();
      if (*(long *)pOVar2 == 0) {
        local_150 = (Object *)0x0;
        Memory::free_static(pOVar22 + -0x10,false);
      }
    }
    pSVar24 = (StringName *)0x2b;
    goto LAB_0010b06e;
  }
  if (6 < uVar9) {
    pSVar24 = (StringName *)0x0;
    ::Variant::operator=(param_2,(Variant *)(param_1 + 8));
    goto LAB_0010b06e;
  }
  if (uVar9 == 2) {
    Array::Array((Array *)&local_138);
    uVar9 = _parse_array((Array *)&local_138,param_3,param_4,param_5,param_6);
    pSVar24 = (StringName *)(ulong)uVar9;
    if (uVar9 == 0) {
      ::Variant::Variant((Variant *)&local_88,(Array *)&local_138);
      if (::Variant::needs_deinit[*(int *)param_2] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined8 *)(param_2 + 8) = auStack_80._0_8_;
      *(undefined8 *)(param_2 + 0x10) = auStack_80._8_8_;
      *(int *)param_2 = (int)local_88;
    }
    Array::~Array((Array *)&local_138);
    goto LAB_0010b06e;
  }
  if (uVar9 != 6) {
    if (uVar9 == 0) {
      Dictionary::Dictionary((Dictionary *)&local_138);
      uVar9 = _parse_dictionary((Dictionary *)&local_138,param_3,param_4,param_5,param_6);
      pSVar24 = (StringName *)(ulong)uVar9;
      if (uVar9 == 0) {
        ::Variant::Variant((Variant *)&local_88,(Dictionary *)&local_138);
        if (::Variant::needs_deinit[*(int *)param_2] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined8 *)(param_2 + 8) = auStack_80._0_8_;
        *(undefined8 *)(param_2 + 0x10) = auStack_80._8_8_;
        *(int *)param_2 = (int)local_88;
      }
      Dictionary::~Dictionary((Dictionary *)&local_138);
      goto LAB_0010b06e;
    }
    goto LAB_0010b2d0;
  }
  this = (Variant *)(param_1 + 8);
  ::Variant::operator_cast_to_String((Variant *)&local_168);
  cVar7 = String::operator==((String *)&local_168,"true");
  if (cVar7 == '\0') {
    cVar7 = String::operator==((String *)&local_168,"false");
    if (cVar7 != '\0') {
      ::Variant::Variant((Variant *)&local_88,false);
      if (::Variant::needs_deinit[*(int *)param_2] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined8 *)(param_2 + 8) = auStack_80._0_8_;
      *(undefined8 *)(param_2 + 0x10) = auStack_80._8_8_;
      *(int *)param_2 = (int)local_88;
      goto LAB_0010b4eb;
    }
    cVar7 = String::operator==((String *)&local_168,"null");
    if ((cVar7 != '\0') || (cVar7 = String::operator==((String *)&local_168,"nil"), cVar7 != '\0'))
    {
      auStack_80 = (undefined1  [16])0x0;
      if (::Variant::needs_deinit[*(int *)param_2] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)param_2 = 0;
      *(undefined8 *)(param_2 + 8) = auStack_80._0_8_;
      *(undefined8 *)(param_2 + 0x10) = auStack_80._8_8_;
      goto LAB_0010b4eb;
    }
    cVar7 = String::operator==((String *)&local_168,"inf");
    fVar26 = _LC155;
    if (cVar7 != '\0') {
LAB_0010b60e:
      ::Variant::Variant((Variant *)&local_88,fVar26);
      if (::Variant::needs_deinit[*(int *)param_2] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined8 *)(param_2 + 8) = auStack_80._0_8_;
      *(undefined8 *)(param_2 + 0x10) = auStack_80._8_8_;
      *(int *)param_2 = (int)local_88;
      goto LAB_0010b4eb;
    }
    cVar7 = String::operator==((String *)&local_168,"inf_neg");
    if (cVar7 != '\0') {
      ::Variant::Variant((Variant *)&local_88,_LC156);
      if (::Variant::needs_deinit[*(int *)param_2] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined8 *)(param_2 + 8) = auStack_80._0_8_;
      *(undefined8 *)(param_2 + 0x10) = auStack_80._8_8_;
      *(int *)param_2 = (int)local_88;
      goto LAB_0010b4eb;
    }
    cVar7 = String::operator==((String *)&local_168,"nan");
    fVar26 = _LC157;
    if (cVar7 != '\0') goto LAB_0010b60e;
    cVar7 = String::operator==((String *)&local_168,"Vector2");
    if (cVar7 != '\0') {
      local_140 = (undefined8 *)0x0;
      uVar9 = _parse_construct<float>(param_3,(Vector *)&local_148,param_4,param_5);
      pSVar24 = (StringName *)(ulong)uVar9;
      if (uVar9 == 0) {
        if ((local_140 != (undefined8 *)0x0) && (local_140[-1] == 2)) {
          local_b8 = *local_140;
          ::Variant::Variant((Variant *)&local_88,(Vector2 *)&local_b8);
          ::Variant::operator=(param_2,(Variant *)&local_88);
          if (::Variant::needs_deinit[(int)local_88] != '\0') {
            ::Variant::_clear_internal();
          }
LAB_0010b8c2:
          CowData<float>::_unref((CowData<float> *)&local_140);
          goto LAB_0010b4eb;
        }
        local_130 = (undefined8 *)0x24;
        local_138 = (Object *)0x111578;
        pSVar24 = (StringName *)0x2b;
        String::parse_latin1((StrRange *)param_5);
      }
      goto LAB_0010b283;
    }
    cVar7 = String::operator==((String *)&local_168,"Vector2i");
    if (cVar7 == '\0') {
      cVar7 = String::operator==((String *)&local_168,"Rect2");
      if (cVar7 != '\0') {
        local_130 = (undefined8 *)0x0;
        uVar9 = _parse_construct<float>(param_3,(Vector *)&local_138,param_4,param_5);
        pSVar24 = (StringName *)(ulong)uVar9;
        if (uVar9 == 0) {
          if ((local_130 == (undefined8 *)0x0) || (local_130[-1] != 4)) goto LAB_0010b7b9;
          local_b8 = *local_130;
          auStack_b0._0_8_ = local_130[1];
          ::Variant::Variant((Variant *)&local_88,(Rect2 *)&local_b8);
          goto LAB_0010baaa;
        }
        goto LAB_0010b7ce;
      }
      cVar7 = String::operator==((String *)&local_168,"Rect2i");
      if (cVar7 != '\0') {
        local_130 = (undefined8 *)0x0;
        uVar9 = _parse_construct<int>(param_3,(Vector *)&local_138,param_4,param_5);
        pSVar24 = (StringName *)(ulong)uVar9;
        if (uVar9 == 0) {
          if ((local_130 != (undefined8 *)0x0) && (local_130[-1] == 4)) {
            local_b8 = *local_130;
            auStack_b0._0_8_ = local_130[1];
            ::Variant::Variant((Variant *)&local_88,(Rect2i *)&local_b8);
            goto LAB_0010b9eb;
          }
LAB_0010b84f:
          pSVar24 = (StringName *)0x2b;
          String::parse_latin1(param_5,"Expected 4 arguments for constructor");
        }
        goto LAB_0010b740;
      }
      cVar7 = String::operator==((String *)&local_168,"Vector3");
      if (cVar7 != '\0') {
        local_130 = (undefined8 *)0x0;
        uVar9 = _parse_construct<float>(param_3,(Vector *)&local_138,param_4,param_5);
        pSVar24 = (StringName *)(ulong)uVar9;
        if (uVar9 == 0) {
          if ((local_130 != (undefined8 *)0x0) && (local_130[-1] == 3)) {
            local_b8 = *local_130;
            auStack_b0._0_4_ = *(undefined4 *)(local_130 + 1);
            ::Variant::Variant((Variant *)&local_88,(Vector3 *)&local_b8);
            ::Variant::operator=(param_2,(Variant *)&local_88);
            if (::Variant::needs_deinit[(int)local_88] != '\0') {
              ::Variant::_clear_internal();
            }
LAB_0010bace:
            CowData<float>::_unref((CowData<float> *)&local_130);
            goto LAB_0010b4eb;
          }
          pSVar24 = (StringName *)0x2b;
          String::parse_latin1(param_5,"Expected 3 arguments for constructor");
        }
        goto LAB_0010b7ce;
      }
      cVar7 = String::operator==((String *)&local_168,"Vector3i");
      if (cVar7 != '\0') {
        local_130 = (undefined8 *)0x0;
        uVar9 = _parse_construct<int>(param_3,(Vector *)&local_138,param_4,param_5);
        pSVar24 = (StringName *)(ulong)uVar9;
        if (uVar9 == 0) {
          if ((local_130 != (undefined8 *)0x0) && (local_130[-1] == 3)) {
            local_b8 = *local_130;
            auStack_b0._0_4_ = *(undefined4 *)(local_130 + 1);
            ::Variant::Variant((Variant *)&local_88,(Vector3i *)&local_b8);
LAB_0010b9eb:
            ::Variant::operator=(param_2,(Variant *)&local_88);
            if (::Variant::needs_deinit[(int)local_88] != '\0') {
              ::Variant::_clear_internal();
            }
            CowData<int>::_unref((CowData<int> *)&local_130);
            goto LAB_0010b4eb;
          }
          pSVar24 = (StringName *)0x2b;
          String::parse_latin1(param_5,"Expected 3 arguments for constructor");
        }
        goto LAB_0010b740;
      }
      cVar7 = String::operator==((String *)&local_168,"Vector4");
      if (cVar7 != '\0') {
        local_130 = (undefined8 *)0x0;
        uVar9 = _parse_construct<float>(param_3,(Vector *)&local_138,param_4,param_5);
        pSVar24 = (StringName *)(ulong)uVar9;
        if (uVar9 == 0) {
          if ((local_130 == (undefined8 *)0x0) || (local_130[-1] != 4)) goto LAB_0010b7b9;
          local_b8 = *local_130;
          auStack_b0._0_8_ = local_130[1];
          ::Variant::Variant((Variant *)&local_88,(Vector4 *)&local_b8);
          goto LAB_0010baaa;
        }
        goto LAB_0010b7ce;
      }
      cVar7 = String::operator==((String *)&local_168,"Vector4i");
      if (cVar7 != '\0') {
        local_130 = (undefined8 *)0x0;
        uVar9 = _parse_construct<int>(param_3,(Vector *)&local_138,param_4,param_5);
        pSVar24 = (StringName *)(ulong)uVar9;
        if (uVar9 == 0) {
          if ((local_130 == (undefined8 *)0x0) || (local_130[-1] != 4)) goto LAB_0010b84f;
          local_b8 = *local_130;
          auStack_b0._0_8_ = local_130[1];
          ::Variant::Variant((Variant *)&local_88,(Vector4i *)&local_b8);
          goto LAB_0010b9eb;
        }
        goto LAB_0010b740;
      }
      cVar7 = String::operator==((String *)&local_168,"Transform2D");
      if ((cVar7 == '\0') &&
         (cVar7 = String::operator==((String *)&local_168,"Matrix32"), cVar7 == '\0')) {
        cVar7 = String::operator==((String *)&local_168,"Plane");
        if (cVar7 == '\0') {
          cVar7 = String::operator==((String *)&local_168,"Quaternion");
          if ((cVar7 == '\0') &&
             (cVar7 = String::operator==((String *)&local_168,"Quat"), cVar7 == '\0')) {
            cVar7 = String::operator==((String *)&local_168,"AABB");
            if ((cVar7 == '\0') &&
               (cVar7 = String::operator==((String *)&local_168,"Rect3"), cVar7 == '\0')) {
              cVar7 = String::operator==((String *)&local_168,"Basis");
              if ((cVar7 == '\0') &&
                 (cVar7 = String::operator==((String *)&local_168,"Matrix3"), cVar7 == '\0')) {
                cVar7 = String::operator==((String *)&local_168,"Transform3D");
                if ((cVar7 == '\0') &&
                   (cVar7 = String::operator==((String *)&local_168,"Transform"), cVar7 == '\0')) {
                  cVar7 = String::operator==((String *)&local_168,"Projection");
                  if (cVar7 == '\0') {
                    cVar7 = String::operator==((String *)&local_168,"Color");
                    if (cVar7 == '\0') {
                      cVar7 = String::operator==((String *)&local_168,"NodePath");
                      if (cVar7 == '\0') {
                        cVar7 = String::operator==((String *)&local_168,"RID");
                        if (cVar7 == '\0') {
                          cVar7 = String::operator==((String *)&local_168,"Signal");
                          if (cVar7 == '\0') {
                            cVar7 = String::operator==((String *)&local_168,"Callable");
                            if (cVar7 == '\0') {
                              cVar7 = String::operator==((String *)&local_168,"Object");
                              if (cVar7 != '\0') {
                                get_token(param_3,param_1,param_4,param_5);
                                if (*(int *)param_1 != 4) goto LAB_0010c4b2;
                                get_token(param_3,param_1,param_4,param_5);
                                if (*(int *)param_1 == 6) {
                                  ::Variant::operator_cast_to_String((Variant *)&local_158);
                                  StringName::StringName
                                            ((StringName *)&local_138,(String *)&local_158,false);
                                  pSVar13 = (StringName *)
                                            ClassDB::instantiate((StringName *)&local_138);
                                  if ((StringName::configured != '\0') &&
                                     (local_138 != (Object *)0x0)) {
                                    StringName::unref();
                                  }
                                  if (pSVar13 == (StringName *)0x0) {
                                    local_148 = (Object *)0x0;
                                    if (local_158 != (Object *)0x0) {
                                      CowData<char32_t>::_ref
                                                ((CowData<char32_t> *)&local_148,
                                                 (CowData *)&local_158);
                                    }
                                    local_150 = (Object *)0x0;
                                    String::parse_latin1
                                              ((String *)&local_150,
                                               "Can\'t instantiate Object() of type \'%s\'");
                                    vformat<String>((StringName *)&local_138,(String *)&local_150,
                                                    (CowData<char32_t> *)&local_148);
                                    if (*(Object **)param_5 != local_138) {
                                      CowData<char32_t>::operator=
                                                ((CowData<char32_t> *)param_5,(CowData *)&local_138)
                                      ;
                                    }
                                    pSVar24 = (StringName *)0x2b;
                                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
                                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
                                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
                                  }
                                  else {
                                    pRVar14 = (RefCounted *)
                                              __dynamic_cast(pSVar13,&Object::typeinfo,
                                                             &RefCounted::typeinfo,0);
                                    local_150 = (Object *)0x0;
                                    Ref<RefCounted>::operator=
                                              ((Ref<RefCounted> *)&local_150,pRVar14);
                                    get_token(param_3,param_1,param_4,param_5);
                                    if (*(int *)param_1 == 0xc) {
                                      local_148 = (Object *)0x0;
                                      cVar20 = cVar7;
                                      local_1b8 = '\0';
LAB_0010c952:
                                      do {
                                        while( true ) {
                                          if (param_3[0x2011] == (Stream)0x0) {
                                            SVar8 = (Stream)Stream::is_eof(param_3);
                                          }
                                          else {
                                            SVar8 = param_3[0x2010];
                                          }
                                          if (SVar8 != (Stream)0x0) {
                                            pSVar24 = (StringName *)0x10;
                                            String::parse_latin1
                                                      (param_5,
                                                  "Unexpected EOF while parsing Object()");
                                            goto LAB_0010c9da;
                                          }
                                          if (cVar20 != '\0') break;
                                          uVar9 = get_token(param_3,param_1,param_4,param_5);
                                          if (uVar9 != 0) {
LAB_0010cbbf:
                                            pSVar24 = (StringName *)(ulong)uVar9;
                                            goto LAB_0010c9da;
                                          }
                                          local_88 = 0;
                                          auStack_80 = (undefined1  [16])0x0;
                                          uVar9 = parse_value(param_1,(Variant *)&local_88,param_3,
                                                              param_4,param_5,param_6);
                                          if (uVar9 != 0) {
                                            pSVar24 = (StringName *)(ulong)uVar9;
                                            cVar7 = ::Variant::needs_deinit[(int)local_88];
joined_r0x0010cbaa:
                                            if (cVar7 != '\0') {
                                              ::Variant::_clear_internal();
                                            }
                                            goto LAB_0010c9da;
                                          }
                                          StringName::StringName
                                                    ((StringName *)&local_138,(String *)&local_148,
                                                     false);
                                          Object::set(pSVar13,(Variant *)&local_138,
                                                      (bool *)&local_88);
                                          if ((StringName::configured != '\0') &&
                                             (local_138 != (Object *)0x0)) {
                                            StringName::unref();
                                          }
                                          cVar20 = cVar7;
                                          local_1b8 = cVar7;
                                          if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                            ::Variant::_clear_internal();
                                          }
                                        }
                                        uVar15 = get_token(param_3,param_1,param_4,param_5);
                                        uVar9 = (uint)uVar15;
                                        if (uVar9 != 0) goto LAB_0010cbbf;
                                        iVar21 = *(int *)param_1;
                                        if (iVar21 == 5) {
                                          pSVar24 = (StringName *)(uVar15 & 0xffffffff);
                                          pOVar22 = local_150;
                                          if (local_150 == (Object *)0x0) {
                                            pOVar22 = (Object *)pSVar13;
                                          }
                                          ::Variant::Variant((Variant *)&local_88,pOVar22);
                                          ::Variant::operator=(param_2,(Variant *)&local_88);
                                          cVar7 = ::Variant::needs_deinit[(int)local_88];
                                          goto joined_r0x0010cbaa;
                                        }
                                        cVar20 = local_1b8;
                                        if (local_1b8 == '\0') {
                                          if (iVar21 != 7) {
                                            String::parse_latin1
                                                      (param_5,"Expected property name as string");
                                            goto LAB_0010c9d4;
                                          }
                                          ::Variant::operator_cast_to_String((Variant *)&local_138);
                                          if (local_148 != local_138) {
                                            CowData<char32_t>::operator=
                                                      ((CowData<char32_t> *)&local_148,
                                                       (CowData *)&local_138);
                                          }
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138)
                                          ;
                                          uVar9 = get_token(param_3,param_1,param_4,param_5);
                                          if (uVar9 != 0) goto LAB_0010cbbf;
                                          if (*(int *)param_1 != 0xb) {
                                            String::parse_latin1(param_5,"Expected \':\'");
                                            goto LAB_0010c9d4;
                                          }
                                          local_1b8 = '\0';
                                          goto LAB_0010c952;
                                        }
                                        local_1b8 = '\0';
                                      } while (iVar21 == 0xc);
                                      String::parse_latin1(param_5,"Expected \'}\' or \',\'");
LAB_0010c9d4:
                                      pSVar24 = (StringName *)0x2b;
LAB_0010c9da:
                                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
                                    }
                                    else {
                                      pSVar24 = (StringName *)0x2b;
                                      String::parse_latin1
                                                (param_5,"Expected \',\' after object type");
                                    }
                                    pOVar22 = local_150;
                                    if (((local_150 != (Object *)0x0) &&
                                        (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
                                       (cVar7 = predelete_handler(pOVar22), cVar7 != '\0')) {
                                      (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
                                      Memory::free_static(pOVar22,false);
                                    }
                                  }
                                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                  goto LAB_0010b290;
                                }
                                String::parse_latin1
                                          (param_5,"Expected identifier with type of object");
                                goto LAB_0010c354;
                              }
                              cVar7 = String::operator==((String *)&local_168,"Resource");
                              if (((cVar7 == '\0') &&
                                  (cVar7 = String::operator==((String *)&local_168,"SubResource"),
                                  cVar7 == '\0')) &&
                                 (cVar7 = String::operator==((String *)&local_168,"ExtResource"),
                                 cVar7 == '\0')) {
                                cVar7 = String::operator==((String *)&local_168,"Dictionary");
                                if (cVar7 == '\0') {
                                  cVar7 = String::operator==((String *)&local_168,"Array");
                                  if (cVar7 == '\0') {
                                    cVar7 = String::operator==((String *)&local_168,
                                                               "PackedByteArray");
                                    if (((cVar7 == '\0') &&
                                        (cVar7 = String::operator==((String *)&local_168,
                                                                    "PoolByteArray"), cVar7 == '\0')
                                        ) && (cVar7 = String::operator==((String *)&local_168,
                                                                         "ByteArray"), cVar7 == '\0'
                                             )) {
                                      cVar7 = String::operator==((String *)&local_168,
                                                                 "PackedInt32Array");
                                      if ((((cVar7 == '\0') &&
                                           (cVar7 = String::operator==((String *)&local_168,
                                                                       "PackedIntArray"),
                                           cVar7 == '\0')) &&
                                          (cVar7 = String::operator==((String *)&local_168,
                                                                      "PoolIntArray"), cVar7 == '\0'
                                          )) && (cVar7 = String::operator==((String *)&local_168,
                                                                            "IntArray"),
                                                cVar7 == '\0')) {
                                        cVar7 = String::operator==((String *)&local_168,
                                                                   "PackedInt64Array");
                                        if (cVar7 == '\0') {
                                          cVar7 = String::operator==((String *)&local_168,
                                                                     "PackedFloat32Array");
                                          if (((cVar7 != '\0') ||
                                              (cVar7 = String::operator==((String *)&local_168,
                                                                          "PackedRealArray"),
                                              cVar7 != '\0')) ||
                                             ((cVar7 = String::operator==((String *)&local_168,
                                                                          "PoolRealArray"),
                                              cVar7 != '\0' ||
                                              (cVar7 = String::operator==((String *)&local_168,
                                                                          "FloatArray"),
                                              cVar7 != '\0')))) {
                                            local_140 = (undefined8 *)0x0;
                                            uVar9 = _parse_construct<float>
                                                              (param_3,(Vector *)&local_148,param_4,
                                                               param_5);
                                            puVar6 = local_140;
                                            pSVar24 = (StringName *)(ulong)uVar9;
                                            if (uVar9 == 0) {
                                              local_130 = (undefined8 *)0x0;
                                              if (local_140 == (undefined8 *)0x0) {
                                                iVar21 = 0;
                                              }
                                              else {
                                                iVar21 = (int)local_140[-1];
                                              }
                                              CowData<float>::resize<false>
                                                        ((CowData<float> *)&local_130,(long)iVar21);
                                              CowData<float>::_copy_on_write
                                                        ((CowData<float> *)&local_130);
                                              for (lVar18 = 0; (int)lVar18 < iVar21;
                                                  lVar18 = lVar18 + 1) {
                                                if (puVar6 == (undefined8 *)0x0) goto LAB_0010ed3d;
                                                lVar23 = puVar6[-1];
                                                if (lVar23 <= lVar18) goto LAB_0010ed5b;
                                                *(undefined4 *)((long)local_130 + lVar18 * 4) =
                                                     *(undefined4 *)((long)puVar6 + lVar18 * 4);
                                              }
                                              ::Variant::Variant((Variant *)&local_88,
                                                                 (Vector *)&local_138);
                                              ::Variant::operator=(param_2,(Variant *)&local_88);
                                              if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                                ::Variant::_clear_internal();
                                              }
                                              CowData<float>::_unref((CowData<float> *)&local_130);
                                              goto LAB_0010b8c2;
                                            }
                                            goto LAB_0010b283;
                                          }
                                          cVar7 = String::operator==((String *)&local_168,
                                                                     "PackedFloat64Array");
                                          if (cVar7 == '\0') {
                                            cVar7 = String::operator==((String *)&local_168,
                                                                       "PackedStringArray");
                                            if (((cVar7 == '\0') &&
                                                (cVar7 = String::operator==((String *)&local_168,
                                                                            "PoolStringArray"),
                                                cVar7 == '\0')) &&
                                               (cVar7 = String::operator==((String *)&local_168,
                                                                           "StringArray"),
                                               cVar7 == '\0')) {
                                              cVar7 = String::operator==((String *)&local_168,
                                                                         "PackedVector2Array");
                                              if (((cVar7 == '\0') &&
                                                  (cVar7 = String::operator==((String *)&local_168,
                                                                              "PoolVector2Array"),
                                                  cVar7 == '\0')) &&
                                                 (cVar7 = String::operator==((String *)&local_168,
                                                                             "Vector2Array"),
                                                 cVar7 == '\0')) {
                                                cVar7 = String::operator==((String *)&local_168,
                                                                           "PackedVector3Array");
                                                if (((cVar7 == '\0') &&
                                                    (cVar7 = String::operator==((String *)&local_168
                                                                                ,"PoolVector3Array")
                                                    , cVar7 == '\0')) &&
                                                   (cVar7 = String::operator==((String *)&local_168,
                                                                               "Vector3Array"),
                                                   cVar7 == '\0')) {
                                                  cVar7 = String::operator==((String *)&local_168,
                                                                             "PackedVector4Array");
                                                  if (((cVar7 == '\0') &&
                                                      (cVar7 = String::operator==((String *)
                                                                                  &local_168,
                                                                                  "PoolVector4Array"
                                                                                 ), cVar7 == '\0'))
                                                     && (cVar7 = String::operator==((String *)
                                                                                    &local_168,
                                                                                    "Vector4Array"),
                                                        cVar7 == '\0')) {
                                                    cVar7 = String::operator==((String *)&local_168,
                                                                               "PackedColorArray");
                                                    if (((cVar7 == '\0') &&
                                                        (cVar7 = String::operator==((String *)
                                                                                    &local_168,
                                                                                    "PoolColorArray"
                                                                                   ), cVar7 == '\0')
                                                        ) && (cVar7 = String::operator==((String *)
                                                                                         &local_168,
                                                                                                                                                                                  
                                                  "ColorArray"), cVar7 == '\0')) {
                                                    local_148 = (Object *)0x0;
                                                    if (local_168 != 0) {
                                                      CowData<char32_t>::_ref
                                                                ((CowData<char32_t> *)&local_148,
                                                                 (CowData *)&local_168);
                                                    }
                                                    local_150 = (Object *)0x0;
                                                    String::parse_latin1
                                                              ((String *)&local_150,
                                                               "Unexpected identifier \'%s\'");
                                                    vformat<String>((CowData *)&local_138,
                                                                    (String *)&local_150,
                                                                    (CowData<char32_t> *)&local_148)
                                                    ;
                                                    if (*(Object **)param_5 != local_138) {
                                                      CowData<char32_t>::operator=
                                                                ((CowData<char32_t> *)param_5,
                                                                 (CowData *)&local_138);
                                                    }
                                                    CowData<char32_t>::_unref
                                                              ((CowData<char32_t> *)&local_138);
                                                    CowData<char32_t>::_unref
                                                              ((CowData<char32_t> *)&local_150);
                                                    CowData<char32_t>::_unref
                                                              ((CowData<char32_t> *)&local_148);
                                                    goto LAB_0010c354;
                                                  }
                                                  local_140 = (undefined8 *)0x0;
                                                  uVar9 = _parse_construct<float>
                                                                    (param_3,(Vector *)&local_148,
                                                                     param_4,param_5);
                                                  puVar6 = local_140;
                                                  pSVar24 = (StringName *)(ulong)uVar9;
                                                  if (uVar9 != 0) goto LAB_0010b283;
                                                  local_130 = (undefined8 *)0x0;
                                                  if (local_140 == (undefined8 *)0x0) {
                                                    lVar18 = 0;
                                                  }
                                                  else {
                                                    lVar18 = local_140[-1];
                                                  }
                                                  iVar21 = (int)(lVar18 / 4);
                                                  CowData<Color>::resize<false>
                                                            ((CowData<Color> *)&local_130,
                                                             (long)iVar21);
                                                  CowData<Color>::_copy_on_write
                                                            ((CowData<Color> *)&local_130);
                                                  lVar19 = 0;
                                                  for (iVar11 = 0; iVar11 < iVar21;
                                                      iVar11 = iVar11 + 1) {
                                                    lVar18 = lVar19 + 3;
                                                    if (puVar6 == (undefined8 *)0x0)
                                                    goto LAB_0010f551;
                                                    lVar23 = puVar6[-1];
                                                    if (lVar23 <= lVar18) goto LAB_0010ed5b;
                                                    uVar4 = *(undefined4 *)
                                                             ((long)puVar6 + lVar19 * 4 + 0xc);
                                                    lVar18 = lVar19 + 2;
                                                    if (lVar23 <= lVar19 + 2) goto LAB_0010ed5b;
                                                    uVar5 = *(undefined4 *)
                                                             ((long)puVar6 + lVar19 * 4 + 8);
                                                    lVar18 = lVar19 + 1;
                                                    if ((lVar23 <= lVar19 + 1) ||
                                                       (lVar18 = lVar19, lVar23 <= lVar19))
                                                    goto LAB_0010ed5b;
                                                    puVar3 = (undefined8 *)
                                                             ((long)local_130 + lVar19 * 4);
                                                    *puVar3 = CONCAT44(*(undefined4 *)
                                                                        ((long)puVar6 +
                                                                        lVar19 * 4 + 4),
                                                                       *(undefined4 *)
                                                                        ((long)puVar6 + lVar19 * 4))
                                                    ;
                                                    puVar3[1] = CONCAT44(uVar4,uVar5);
                                                    lVar19 = lVar19 + 4;
                                                  }
                                                  ::Variant::Variant((Variant *)&local_88,
                                                                     (Vector *)&local_138);
                                                  ::Variant::operator=(param_2,(Variant *)&local_88)
                                                  ;
                                                  if (::Variant::needs_deinit[(int)local_88] != '\0'
                                                     ) {
                                                    ::Variant::_clear_internal();
                                                  }
                                                  CowData<Color>::_unref
                                                            ((CowData<Color> *)&local_130);
                                                  CowData<float>::_unref
                                                            ((CowData<float> *)&local_140);
                                                  }
                                                  else {
                                                    local_140 = (undefined8 *)0x0;
                                                    uVar9 = _parse_construct<float>
                                                                      (param_3,(Vector *)&local_148,
                                                                       param_4,param_5);
                                                    puVar6 = local_140;
                                                    pSVar24 = (StringName *)(ulong)uVar9;
                                                    if (uVar9 != 0) goto LAB_0010b283;
                                                    local_130 = (undefined8 *)0x0;
                                                    if (local_140 == (undefined8 *)0x0) {
                                                      lVar18 = 0;
                                                    }
                                                    else {
                                                      lVar18 = local_140[-1];
                                                    }
                                                    iVar21 = (int)(lVar18 / 4);
                                                    CowData<Vector4>::resize<false>
                                                              ((CowData<Vector4> *)&local_130,
                                                               (long)iVar21);
                                                    CowData<Vector4>::_copy_on_write
                                                              ((CowData<Vector4> *)&local_130);
                                                    lVar19 = 0;
                                                    for (iVar11 = 0; iVar11 < iVar21;
                                                        iVar11 = iVar11 + 1) {
                                                      lVar18 = lVar19 + 3;
                                                      if (puVar6 == (undefined8 *)0x0)
                                                      goto LAB_0010f551;
                                                      lVar23 = puVar6[-1];
                                                      if (lVar23 <= lVar18) goto LAB_0010ed5b;
                                                      uVar4 = *(undefined4 *)
                                                               ((long)puVar6 + lVar19 * 4 + 0xc);
                                                      lVar18 = lVar19 + 2;
                                                      if (lVar23 <= lVar19 + 2) goto LAB_0010ed5b;
                                                      uVar5 = *(undefined4 *)
                                                               ((long)puVar6 + lVar19 * 4 + 8);
                                                      lVar18 = lVar19 + 1;
                                                      if ((lVar23 <= lVar19 + 1) ||
                                                         (lVar18 = lVar19, lVar23 <= lVar19))
                                                      goto LAB_0010ed5b;
                                                      puVar3 = (undefined8 *)
                                                               ((long)local_130 + lVar19 * 4);
                                                      *puVar3 = CONCAT44(*(undefined4 *)
                                                                          ((long)puVar6 +
                                                                          lVar19 * 4 + 4),
                                                                         *(undefined4 *)
                                                                          ((long)puVar6 + lVar19 * 4
                                                                          ));
                                                      puVar3[1] = CONCAT44(uVar4,uVar5);
                                                      lVar19 = lVar19 + 4;
                                                    }
                                                    ::Variant::Variant((Variant *)&local_88,
                                                                       (Vector *)&local_138);
                                                    ::Variant::operator=
                                                              (param_2,(Variant *)&local_88);
                                                    if (::Variant::needs_deinit[(int)local_88] !=
                                                        '\0') {
                                                      ::Variant::_clear_internal();
                                                    }
                                                    CowData<Vector4>::_unref
                                                              ((CowData<Vector4> *)&local_130);
                                                    CowData<float>::_unref
                                                              ((CowData<float> *)&local_140);
                                                  }
                                                }
                                                else {
                                                  local_140 = (undefined8 *)0x0;
                                                  uVar9 = _parse_construct<float>
                                                                    (param_3,(Vector *)&local_148,
                                                                     param_4,param_5);
                                                  puVar6 = local_140;
                                                  pSVar24 = (StringName *)(ulong)uVar9;
                                                  if (uVar9 != 0) goto LAB_0010b283;
                                                  local_130 = (undefined8 *)0x0;
                                                  if (local_140 == (undefined8 *)0x0) {
                                                    lVar18 = 0;
                                                  }
                                                  else {
                                                    lVar18 = local_140[-1];
                                                  }
                                                  iVar21 = (int)(lVar18 / 3);
                                                  CowData<Vector3>::resize<false>
                                                            ((CowData<Vector3> *)&local_130,
                                                             (long)iVar21);
                                                  CowData<Vector3>::_copy_on_write
                                                            ((CowData<Vector3> *)&local_130);
                                                  lVar19 = 0;
                                                  for (iVar11 = 0; iVar11 < iVar21;
                                                      iVar11 = iVar11 + 1) {
                                                    lVar18 = lVar19 + 2;
                                                    if (puVar6 == (undefined8 *)0x0)
                                                    goto LAB_0010f551;
                                                    lVar23 = puVar6[-1];
                                                    if (lVar23 <= lVar18) goto LAB_0010ed5b;
                                                    lVar18 = lVar19 + 1;
                                                    if ((lVar23 <= lVar19 + 1) ||
                                                       (uVar4 = *(undefined4 *)
                                                                 ((long)puVar6 + lVar19 * 4 + 4),
                                                       lVar18 = lVar19, lVar23 <= lVar19))
                                                    goto LAB_0010ed5b;
                                                    uVar5 = *(undefined4 *)
                                                             ((long)puVar6 + lVar19 * 4);
                                                    *(undefined4 *)
                                                     ((long)local_130 + lVar19 * 4 + 8) =
                                                         *(undefined4 *)
                                                          ((long)puVar6 + lVar19 * 4 + 8);
                                                    *(ulong *)((long)local_130 + lVar19 * 4) =
                                                         CONCAT44(uVar4,uVar5);
                                                    lVar19 = lVar19 + 3;
                                                  }
                                                  ::Variant::Variant((Variant *)&local_88,
                                                                     (Vector *)&local_138);
                                                  ::Variant::operator=(param_2,(Variant *)&local_88)
                                                  ;
                                                  if (::Variant::needs_deinit[(int)local_88] != '\0'
                                                     ) {
                                                    ::Variant::_clear_internal();
                                                  }
                                                  CowData<Vector3>::_unref
                                                            ((CowData<Vector3> *)&local_130);
                                                  CowData<float>::_unref
                                                            ((CowData<float> *)&local_140);
                                                }
                                              }
                                              else {
                                                local_140 = (undefined8 *)0x0;
                                                uVar9 = _parse_construct<float>
                                                                  (param_3,(Vector *)&local_148,
                                                                   param_4,param_5);
                                                puVar6 = local_140;
                                                pSVar24 = (StringName *)(ulong)uVar9;
                                                if (uVar9 != 0) {
LAB_0010b283:
                                                  CowData<float>::_unref
                                                            ((CowData<float> *)&local_140);
                                                  goto LAB_0010b290;
                                                }
                                                local_130 = (undefined8 *)0x0;
                                                if (local_140 == (undefined8 *)0x0) {
                                                  lVar18 = 0;
                                                }
                                                else {
                                                  lVar18 = local_140[-1];
                                                }
                                                iVar21 = (int)(lVar18 / 2);
                                                CowData<Vector2>::resize<false>
                                                          ((CowData<Vector2> *)&local_130,
                                                           (long)iVar21);
                                                CowData<Vector2>::_copy_on_write
                                                          ((CowData<Vector2> *)&local_130);
                                                lVar19 = 0;
                                                for (iVar11 = 0; iVar11 < iVar21;
                                                    iVar11 = iVar11 + 1) {
                                                  lVar18 = lVar19 + 1;
                                                  if (puVar6 == (undefined8 *)0x0)
                                                  goto LAB_0010f551;
                                                  lVar23 = puVar6[-1];
                                                  if ((lVar23 <= lVar18) ||
                                                     (lVar18 = lVar19, lVar23 <= lVar19))
                                                  goto LAB_0010ed5b;
                                                  *(ulong *)((long)local_130 + lVar19 * 4) =
                                                       CONCAT44(*(undefined4 *)
                                                                 ((long)puVar6 + lVar19 * 4 + 4),
                                                                *(undefined4 *)
                                                                 ((long)puVar6 + lVar19 * 4));
                                                  lVar19 = lVar19 + 2;
                                                }
                                                ::Variant::Variant((Variant *)&local_88,
                                                                   (Vector *)&local_138);
                                                ::Variant::operator=(param_2,(Variant *)&local_88);
                                                if (::Variant::needs_deinit[(int)local_88] != '\0')
                                                {
                                                  ::Variant::_clear_internal();
                                                }
                                                CowData<Vector2>::_unref
                                                          ((CowData<Vector2> *)&local_130);
                                                CowData<float>::_unref((CowData<float> *)&local_140)
                                                ;
                                              }
                                            }
                                            else {
                                              get_token(param_3,param_1,param_4,param_5);
                                              if (*(int *)param_1 != 4) goto LAB_0010c4b2;
                                              local_140 = (undefined8 *)0x0;
                                              do {
                                                get_token(param_3,param_1,param_4,param_5);
                                                if (*(int *)param_1 == 5) goto LAB_0010f31d;
                                                if (*(int *)param_1 != 7) {
                                                  String::parse_latin1(param_5,"Expected string");
                                                  goto LAB_0010f53f;
                                                }
                                                ::Variant::operator_cast_to_String
                                                          ((Variant *)&local_138);
                                                Vector<String>::push_back
                                                          ((Vector<String> *)&local_148,
                                                           (Variant *)&local_138);
                                                CowData<char32_t>::_unref
                                                          ((CowData<char32_t> *)&local_138);
                                                get_token(param_3,param_1,param_4,param_5);
                                              } while (*(int *)param_1 == 0xc);
                                              if (*(int *)param_1 != 5) {
                                                String::parse_latin1
                                                          (param_5,"Expected \',\' or \')\'");
LAB_0010f53f:
                                                CowData<String>::_unref
                                                          ((CowData<String> *)&local_140);
                                                goto LAB_0010c354;
                                              }
LAB_0010f31d:
                                              puVar6 = local_140;
                                              local_130 = (undefined8 *)0x0;
                                              if (local_140 == (undefined8 *)0x0) {
                                                iVar21 = 0;
                                              }
                                              else {
                                                iVar21 = (int)local_140[-1];
                                              }
                                              CowData<String>::resize<false>
                                                        ((CowData<String> *)&local_130,(long)iVar21)
                                              ;
                                              CowData<String>::_copy_on_write
                                                        ((CowData<String> *)&local_130);
                                              puVar3 = local_130;
                                              for (lVar18 = 0; (int)lVar18 < iVar21;
                                                  lVar18 = lVar18 + 1) {
                                                if (puVar6 == (undefined8 *)0x0) {
                                                  lVar23 = 0;
                                                  goto LAB_0010ed5b;
                                                }
                                                lVar23 = puVar6[-1];
                                                if (lVar23 <= lVar18) goto LAB_0010ed5b;
                                                if (puVar3[lVar18] != puVar6[lVar18]) {
                                                  CowData<char32_t>::_ref
                                                            ((CowData<char32_t> *)(puVar3 + lVar18),
                                                             (CowData *)(puVar6 + lVar18));
                                                }
                                              }
                                              ::Variant::Variant((Variant *)&local_88,
                                                                 (Vector *)&local_138);
                                              ::Variant::operator=(param_2,(Variant *)&local_88);
                                              if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                                ::Variant::_clear_internal();
                                              }
                                              CowData<String>::_unref((CowData<String> *)&local_130)
                                              ;
                                              CowData<String>::_unref((CowData<String> *)&local_140)
                                              ;
                                            }
                                          }
                                          else {
                                            local_140 = (undefined8 *)0x0;
                                            uVar9 = _parse_construct<double>
                                                              (param_3,(Vector *)&local_148,param_4,
                                                               param_5);
                                            puVar6 = local_140;
                                            pSVar24 = (StringName *)(ulong)uVar9;
                                            if (uVar9 != 0) {
                                              CowData<double>::_unref((CowData<double> *)&local_140)
                                              ;
                                              goto LAB_0010b290;
                                            }
                                            local_130 = (undefined8 *)0x0;
                                            if (local_140 == (undefined8 *)0x0) {
                                              iVar21 = 0;
                                            }
                                            else {
                                              iVar21 = (int)local_140[-1];
                                            }
                                            CowData<double>::resize<false>
                                                      ((CowData<double> *)&local_130,(long)iVar21);
                                            CowData<double>::_copy_on_write
                                                      ((CowData<double> *)&local_130);
                                            for (lVar18 = 0; (int)lVar18 < iVar21;
                                                lVar18 = lVar18 + 1) {
                                              if (puVar6 == (undefined8 *)0x0) goto LAB_0010ed3d;
                                              lVar23 = puVar6[-1];
                                              if (lVar23 <= lVar18) goto LAB_0010ed5b;
                                              local_130[lVar18] = puVar6[lVar18];
                                            }
                                            ::Variant::Variant((Variant *)&local_88,
                                                               (Vector *)&local_138);
                                            ::Variant::operator=(param_2,(Variant *)&local_88);
                                            if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                              ::Variant::_clear_internal();
                                            }
                                            CowData<double>::_unref((CowData<double> *)&local_130);
                                            CowData<double>::_unref((CowData<double> *)&local_140);
                                          }
                                        }
                                        else {
                                          local_140 = (undefined8 *)0x0;
                                          uVar9 = _parse_construct<long>
                                                            (param_3,(Vector *)&local_148,param_4,
                                                             param_5);
                                          puVar6 = local_140;
                                          pSVar24 = (StringName *)(ulong)uVar9;
                                          if (uVar9 != 0) {
                                            CowData<long>::_unref((CowData<long> *)&local_140);
                                            goto LAB_0010b290;
                                          }
                                          local_130 = (undefined8 *)0x0;
                                          if (local_140 == (undefined8 *)0x0) {
                                            lVar19 = 0;
                                          }
                                          else {
                                            lVar19 = local_140[-1];
                                          }
                                          CowData<long>::resize<false>
                                                    ((CowData<long> *)&local_130,lVar19);
                                          CowData<long>::_copy_on_write((CowData<long> *)&local_130)
                                          ;
                                          for (lVar18 = 0; lVar18 < lVar19; lVar18 = lVar18 + 1) {
                                            if (puVar6 == (undefined8 *)0x0) goto LAB_0010ed3d;
                                            lVar23 = puVar6[-1];
                                            if (lVar23 <= lVar18) goto LAB_0010ed5b;
                                            local_130[lVar18] = puVar6[lVar18];
                                          }
                                          ::Variant::Variant((Variant *)&local_88,
                                                             (Vector *)&local_138);
                                          ::Variant::operator=(param_2,(Variant *)&local_88);
                                          if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                            ::Variant::_clear_internal();
                                          }
                                          CowData<long>::_unref((CowData<long> *)&local_130);
                                          CowData<long>::_unref((CowData<long> *)&local_140);
                                        }
                                      }
                                      else {
                                        local_140 = (undefined8 *)0x0;
                                        uVar9 = _parse_construct<int>
                                                          (param_3,(Vector *)&local_148,param_4,
                                                           param_5);
                                        puVar6 = local_140;
                                        pSVar24 = (StringName *)(ulong)uVar9;
                                        if (uVar9 != 0) {
                                          CowData<int>::_unref((CowData<int> *)&local_140);
                                          goto LAB_0010b290;
                                        }
                                        local_130 = (undefined8 *)0x0;
                                        if (local_140 == (undefined8 *)0x0) {
                                          iVar21 = 0;
                                        }
                                        else {
                                          iVar21 = (int)local_140[-1];
                                        }
                                        CowData<int>::resize<false>
                                                  ((CowData<int> *)&local_130,(long)iVar21);
                                        CowData<int>::_copy_on_write((CowData<int> *)&local_130);
                                        for (lVar18 = 0; (int)lVar18 < iVar21; lVar18 = lVar18 + 1)
                                        {
                                          if (puVar6 == (undefined8 *)0x0) goto LAB_0010ed3d;
                                          lVar23 = puVar6[-1];
                                          if (lVar23 <= lVar18) goto LAB_0010ed5b;
                                          *(undefined4 *)((long)local_130 + lVar18 * 4) =
                                               *(undefined4 *)((long)puVar6 + lVar18 * 4);
                                        }
                                        ::Variant::Variant((Variant *)&local_88,(Vector *)&local_138
                                                          );
                                        ::Variant::operator=(param_2,(Variant *)&local_88);
                                        if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                          ::Variant::_clear_internal();
                                        }
                                        CowData<int>::_unref((CowData<int> *)&local_130);
                                        CowData<int>::_unref((CowData<int> *)&local_140);
                                      }
                                    }
                                    else {
                                      local_140 = (undefined8 *)0x0;
                                      uVar9 = _parse_byte_array(param_3,(Vector *)&local_148,param_4
                                                                ,param_5);
                                      puVar6 = local_140;
                                      pSVar24 = (StringName *)(ulong)uVar9;
                                      if (uVar9 != 0) {
                                        CowData<unsigned_char>::_unref
                                                  ((CowData<unsigned_char> *)&local_140);
                                        goto LAB_0010b290;
                                      }
                                      local_130 = (undefined8 *)0x0;
                                      if (local_140 == (undefined8 *)0x0) {
                                        iVar21 = 0;
                                      }
                                      else {
                                        iVar21 = (int)local_140[-1];
                                      }
                                      CowData<unsigned_char>::resize<false>
                                                ((CowData<unsigned_char> *)&local_130,(long)iVar21);
                                      CowData<unsigned_char>::_copy_on_write
                                                ((CowData<unsigned_char> *)&local_130);
                                      for (lVar18 = 0; (int)lVar18 < iVar21; lVar18 = lVar18 + 1) {
                                        if (puVar6 == (undefined8 *)0x0) goto LAB_0010ed3d;
                                        lVar23 = puVar6[-1];
                                        if (lVar23 <= lVar18) goto LAB_0010ed5b;
                                        *(undefined1 *)((long)local_130 + lVar18) =
                                             *(undefined1 *)((long)puVar6 + lVar18);
                                      }
                                      ::Variant::Variant((Variant *)&local_88,(Vector *)&local_138);
                                      ::Variant::operator=(param_2,(Variant *)&local_88);
                                      if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                        ::Variant::_clear_internal();
                                      }
                                      CowData<unsigned_char>::_unref
                                                ((CowData<unsigned_char> *)&local_130);
                                      CowData<unsigned_char>::_unref
                                                ((CowData<unsigned_char> *)&local_140);
                                    }
                                    goto LAB_0010b4eb;
                                  }
                                  get_token(param_3,param_1,param_4,param_5);
                                  if (*(int *)param_1 != 2) goto LAB_0010df94;
                                  get_token(param_3,param_1,param_4,param_5);
                                  if (*(int *)param_1 != 6) {
                                    String::parse_latin1(param_5,"Expected type identifier");
                                    goto LAB_0010c354;
                                  }
                                  if ((parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                       ::builtin_types == '\0') &&
                                     (iVar21 = __cxa_guard_acquire(&
                                                  parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                                  ::builtin_types), iVar21 != 0)) {
                                    parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                    ::builtin_types._40_8_ = 2;
                                    parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                    ::builtin_types._8_16_ = (undefined1  [16])0x0;
                                    parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                    ::builtin_types._24_16_ = (undefined1  [16])0x0;
                                    __cxa_atexit(HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
                                                 ::~HashMap,
                                                 parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                                 ::builtin_types,&__dso_handle);
                                    __cxa_guard_release(&
                                                  parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                                  ::builtin_types);
                                  }
                                  if (parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                      ::builtin_types._44_4_ == 0) {
                                    iVar21 = 1;
                                    do {
                                      local_1c8 = (Ref<Resource> *)&local_138;
                                      ::Variant::get_type_name(local_1c8,iVar21);
                                      piVar17 = (int *)
                                                  HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
                                                  ::operator[]((
                                                  HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
                                                  *)
                                                  parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                                  ::builtin_types,(String *)local_1c8);
                                      *piVar17 = iVar21;
                                      iVar21 = iVar21 + 1;
                                      CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
                                    } while (iVar21 != 0x27);
                                  }
                                  local_1c8 = (Ref<Resource> *)&local_138;
                                  Array::Array((Array *)&local_150);
                                  ::Variant::operator_cast_to_String((Variant *)local_1c8);
                                  local_148 = (Object *)((ulong)local_148._4_4_ << 0x20);
                                  cVar7 = HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
                                          ::_lookup_pos((
                                                  HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
                                                  *)
                                                  parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                                  ::builtin_types,(String *)local_1c8,
                                                  (uint *)&local_148);
                                  CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
                                  uVar9 = (uint)(Array *)&local_150;
                                  if (cVar7 == '\0') {
                                    ::Variant::Variant((Variant *)&local_d8,"Resource");
                                    cVar7 = ::Variant::operator==(this,(Variant *)&local_d8);
                                    if (cVar7 == '\0') {
                                      ::Variant::Variant((Variant *)&local_b8,"SubResource");
                                      cVar7 = ::Variant::operator==(this,(Variant *)&local_b8);
                                      if (cVar7 == '\0') {
                                        ::Variant::Variant((Variant *)&local_88,"ExtResource");
                                        cVar7 = ::Variant::operator==(this,(Variant *)&local_88);
                                        if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                          ::Variant::_clear_internal();
                                        }
                                      }
                                      if (::Variant::needs_deinit[(int)local_b8] != '\0') {
                                        ::Variant::_clear_internal();
                                      }
                                      if (::Variant::needs_deinit[(int)local_d8] != '\0')
                                      goto LAB_0010e786;
LAB_0010e7a1:
                                      if (cVar7 == '\0') {
                                        ::Variant::operator_cast_to_StringName((Variant *)local_1c8)
                                        ;
                                        cVar7 = ClassDB::class_exists((StringName *)local_1c8);
                                        if ((StringName::configured != '\0') &&
                                           (local_138 != (Object *)0x0)) {
                                          StringName::unref();
                                        }
                                        if (cVar7 != '\0') {
                                          auStack_80 = (undefined1  [16])0x0;
                                          local_88 = 0;
                                          ::Variant::operator_cast_to_StringName
                                                    ((Variant *)local_1c8);
                                          Array::set_typed(uVar9,(StringName *)0x18,
                                                           (Variant *)local_1c8);
                                          if ((StringName::configured != '\0') &&
                                             (local_138 != (Object *)0x0)) {
                                            StringName::unref();
                                          }
                                          cVar7 = ::Variant::needs_deinit[(int)local_88];
                                          goto joined_r0x0010e889;
                                        }
                                        goto LAB_0010e2f3;
                                      }
                                    }
                                    else {
                                      cVar7 = ::Variant::needs_deinit[(int)local_d8];
                                      if (cVar7 != '\0') {
LAB_0010e786:
                                        ::Variant::_clear_internal();
                                        goto LAB_0010e7a1;
                                      }
                                    }
                                    local_b8 = 0;
                                    auStack_b0 = (undefined1  [16])0x0;
                                    uVar10 = parse_value(param_1,(Variant *)&local_b8,param_3,
                                                         param_4,param_5,param_6);
                                    pSVar24 = (StringName *)(ulong)uVar10;
                                    if (uVar10 == 0) {
                                      local_148 = (Object *)0x0;
                                      Ref<Script>::operator=
                                                ((Ref<Script> *)&local_148,(Variant *)&local_b8);
                                      pOVar22 = local_148;
                                      if ((local_148 != (Object *)0x0) &&
                                         (cVar7 = (**(code **)(*(long *)local_148 + 0x278))
                                                            (local_148), cVar7 != '\0')) {
                                        ::Variant::Variant((Variant *)&local_88,pOVar22);
                                        (**(code **)(*(long *)pOVar22 + 0x1f0))(local_1c8,pOVar22);
                                        Array::set_typed(uVar9,(StringName *)0x18,
                                                         (Variant *)local_1c8);
                                        if ((StringName::configured != '\0') &&
                                           (local_138 != (Object *)0x0)) {
                                          StringName::unref();
                                        }
                                        if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                          ::Variant::_clear_internal();
                                        }
                                      }
                                      Ref<Script>::unref((Ref<Script> *)&local_148);
                                      if (::Variant::needs_deinit[(int)local_b8] != '\0') {
                                        ::Variant::_clear_internal();
                                      }
                                      goto LAB_0010e2f3;
                                    }
                                    ::Variant::Variant((Variant *)&local_88,"Resource");
                                    cVar7 = ::Variant::operator==(this,(Variant *)&local_88);
                                    if (((uVar10 == 0x2b) && (cVar7 != '\0')) &&
                                       (cVar7 = String::operator==(param_5,"Expected \'(\'"),
                                       cVar7 != '\0')) {
                                      bVar25 = *(int *)param_1 == 3;
                                      if (::Variant::needs_deinit[(int)local_88] != '\0')
                                      goto LAB_0010e54f;
LAB_0010e563:
                                      if (!bVar25) goto LAB_0010e463;
                                      local_138 = (Object *)0x0;
                                      if (*(long *)param_5 != 0) {
                                        CowData<char32_t>::operator=
                                                  ((CowData<char32_t> *)param_5,(CowData *)local_1c8
                                                  );
                                      }
                                      CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
                                      local_88 = 0;
                                      auStack_80 = (undefined1  [16])0x0;
                                      ::Variant::operator_cast_to_StringName((Variant *)local_1c8);
                                      Array::set_typed(uVar9,(StringName *)0x18,(Variant *)local_1c8
                                                      );
                                      if ((StringName::configured != '\0') &&
                                         (local_138 != (Object *)0x0)) {
                                        StringName::unref();
                                      }
                                      if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                        ::Variant::_clear_internal();
                                      }
                                      if (::Variant::needs_deinit[(int)local_b8] != '\0') {
                                        ::Variant::_clear_internal();
                                      }
                                      goto LAB_0010e318;
                                    }
                                    bVar25 = false;
                                    if (::Variant::needs_deinit[(int)local_88] != '\0') {
LAB_0010e54f:
                                      ::Variant::_clear_internal();
                                      goto LAB_0010e563;
                                    }
LAB_0010e463:
                                    if (::Variant::needs_deinit[(int)local_b8] != '\0') {
                                      ::Variant::_clear_internal();
                                    }
                                  }
                                  else {
                                    local_88 = 0;
                                    auStack_80 = (undefined1  [16])0x0;
                                    local_138 = (Object *)0x0;
                                    ::Variant::operator_cast_to_String((Variant *)&local_148);
                                    puVar16 = (uint *)
                                                  HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
                                                  ::get((
                                                  HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>
                                                  *)
                                                  parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                                  ::builtin_types,(String *)&local_148);
                                    Array::set_typed(uVar9,(StringName *)(ulong)*puVar16,
                                                     (Variant *)local_1c8);
                                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
                                    if ((StringName::configured != '\0') &&
                                       (local_138 != (Object *)0x0)) {
                                      StringName::unref();
                                    }
                                    cVar7 = ::Variant::needs_deinit[(int)local_88];
joined_r0x0010e889:
                                    if (cVar7 != '\0') {
                                      ::Variant::_clear_internal();
                                    }
LAB_0010e2f3:
                                    get_token(param_3,param_1,param_4,param_5);
                                    if (*(int *)param_1 == 3) {
LAB_0010e318:
                                      get_token(param_3,param_1,param_4,param_5);
                                      if (*(int *)param_1 == 4) {
                                        get_token(param_3,param_1,param_4,param_5);
                                        if (*(int *)param_1 == 2) {
                                          Array::Array((Array *)local_1c8);
                                          uVar9 = _parse_array((Array *)local_1c8,param_3,param_4,
                                                               param_5,param_6);
                                          pSVar24 = (StringName *)(ulong)uVar9;
                                          if (uVar9 == 0) {
                                            get_token(param_3,param_1,param_4,param_5);
                                            if (*(int *)param_1 == 5) {
                                              Array::assign((Array *)&local_150);
                                              ::Variant::Variant((Variant *)&local_88,
                                                                 (Array *)&local_150);
                                              ::Variant::operator=(param_2,(Variant *)&local_88);
                                              if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                                ::Variant::_clear_internal();
                                              }
                                              Array::~Array((Array *)local_1c8);
                                              Array::~Array((Array *)&local_150);
                                              goto LAB_0010b4eb;
                                            }
                                            pSVar24 = (StringName *)0x2b;
                                            String::parse_latin1(param_5,"Expected \')\'");
                                          }
                                          Array::~Array((Array *)local_1c8);
                                          goto LAB_0010e352;
                                        }
                                        String::parse_latin1(param_5,"Expected \'[\'");
                                      }
                                      else {
                                        String::parse_latin1(param_5,"Expected \'(\'");
                                      }
                                    }
                                    else {
                                      String::parse_latin1(param_5,"Expected \']\'");
                                    }
                                    pSVar24 = (StringName *)0x2b;
                                  }
LAB_0010e352:
                                  Array::~Array((Array *)&local_150);
                                  goto LAB_0010b290;
                                }
                                get_token(param_3,param_1,param_4,param_5);
                                if (*(int *)param_1 != 2) {
LAB_0010df94:
                                  String::parse_latin1(param_5,"Expected \'[\'");
                                  goto LAB_0010c354;
                                }
                                get_token(param_3,param_1,param_4,param_5);
                                if (*(int *)param_1 != 6) {
                                  String::parse_latin1(param_5,"Expected type identifier for key");
                                  goto LAB_0010c354;
                                }
                                if ((parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                     ::builtin_types == '\0') &&
                                   (iVar21 = __cxa_guard_acquire(&
                                                  parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                                  ::builtin_types), iVar21 != 0)) {
                                  parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                  ::builtin_types._40_8_ = 2;
                                  parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                  ::builtin_types._8_16_ = (undefined1  [16])0x0;
                                  parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                  ::builtin_types._24_16_ = (undefined1  [16])0x0;
                                  __cxa_atexit(HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>
                                               ::~HashMap,
                                               parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                               ::builtin_types,&__dso_handle);
                                  __cxa_guard_release(&
                                                  parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                                  ::builtin_types);
                                }
                                if (parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                    ::builtin_types._44_4_ == 0) {
                                  iVar21 = 1;
                                  do {
                                    local_1b0 = (Ref<Script> *)&local_148;
                                    local_1c8 = (Ref<Resource> *)&local_138;
                                    ::Variant::get_type_name(local_1b0,iVar21);
                                    StringName::StringName
                                              ((StringName *)local_1c8,(String *)local_1b0,false);
                                    piVar17 = (int *)
                                                  HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>
                                                  ::operator[]((
                                                  HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>
                                                  *)
                                                  parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                                  ::builtin_types,(StringName *)local_1c8);
                                    bVar25 = StringName::configured != '\0';
                                    *piVar17 = iVar21;
                                    if ((bVar25) && (local_138 != (Object *)0x0)) {
                                      StringName::unref();
                                    }
                                    iVar21 = iVar21 + 1;
                                    CowData<char32_t>::_unref((CowData<char32_t> *)local_1b0);
                                  } while (iVar21 != 0x27);
                                }
                                local_1b0 = (Ref<Script> *)&local_148;
                                local_1c8 = (Ref<Resource> *)&local_138;
                                Dictionary::Dictionary(local_160);
                                local_158 = (Object *)0x0;
                                local_118 = 0;
                                auStack_110 = (undefined1  [16])0x0;
                                ::Variant::operator_cast_to_StringName((Variant *)local_1c8);
                                local_148 = (Object *)((ulong)local_148._4_4_ << 0x20);
                                cVar7 = HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>
                                        ::_lookup_pos((
                                                  HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>
                                                  *)
                                                  parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                                  ::builtin_types,(StringName *)local_1c8,
                                                  (uint *)local_1b0);
                                if ((StringName::configured != '\0') && (local_138 != (Object *)0x0)
                                   ) {
                                  StringName::unref();
                                }
                                if (cVar7 == '\0') {
                                  ::Variant::Variant((Variant *)&local_d8,"Resource");
                                  cVar7 = ::Variant::operator==(this,(Variant *)&local_d8);
                                  if (cVar7 == '\0') {
                                    ::Variant::Variant((Variant *)&local_b8,"SubResource");
                                    cVar7 = ::Variant::operator==(this,(Variant *)&local_b8);
                                    if (cVar7 == '\0') {
                                      ::Variant::Variant((Variant *)&local_88,"ExtResource");
                                      cVar7 = ::Variant::operator==(this,(Variant *)&local_88);
                                      if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                        ::Variant::_clear_internal();
                                      }
                                    }
                                    if (::Variant::needs_deinit[(int)local_b8] != '\0') {
                                      ::Variant::_clear_internal();
                                    }
                                    if (::Variant::needs_deinit[(int)local_d8] != '\0')
                                    goto LAB_0010dc0b;
LAB_0010dc26:
                                    if (cVar7 == '\0') {
                                      ::Variant::operator_cast_to_StringName((Variant *)local_1c8);
                                      cVar7 = ClassDB::class_exists((StringName *)local_1c8);
                                      if ((StringName::configured != '\0') &&
                                         (local_138 != (Object *)0x0)) {
                                        StringName::unref();
                                      }
                                      uVar9 = 0;
                                      if (cVar7 != '\0') {
                                        ::Variant::operator_cast_to_StringName((Variant *)local_1c8)
                                        ;
                                        if (local_158 != local_138) {
                                          StringName::operator=
                                                    ((StringName *)&local_158,
                                                     (StringName *)local_1c8);
                                        }
                                        if ((StringName::configured != '\0') &&
                                           (local_138 != (Object *)0x0)) {
                                          StringName::unref();
                                        }
                                        uVar9 = 0x18;
                                      }
                                      goto LAB_0010cf09;
                                    }
                                  }
                                  else {
                                    cVar7 = ::Variant::needs_deinit[(int)local_d8];
                                    if (cVar7 != '\0') {
LAB_0010dc0b:
                                      ::Variant::_clear_internal();
                                      goto LAB_0010dc26;
                                    }
                                  }
                                  local_b8 = 0;
                                  auStack_b0 = (undefined1  [16])0x0;
                                  uVar9 = parse_value(param_1,(Variant *)&local_b8,param_3,param_4,
                                                      param_5,param_6);
                                  pSVar24 = (StringName *)(ulong)uVar9;
                                  if (uVar9 == 0) {
                                    local_148 = (Object *)0x0;
                                    Ref<Script>::operator=(local_1b0,(Variant *)&local_b8);
                                    pOVar22 = local_148;
                                    uVar9 = 0;
                                    if ((local_148 != (Object *)0x0) &&
                                       (cVar7 = (**(code **)(*(long *)local_148 + 0x278))(local_148)
                                       , cVar7 != '\0')) {
                                      (**(code **)(*(long *)pOVar22 + 0x1f0))(local_1c8,pOVar22);
                                      if (local_158 != local_138) {
                                        StringName::operator=
                                                  ((StringName *)&local_158,(StringName *)local_1c8)
                                        ;
                                      }
                                      if ((StringName::configured != '\0') &&
                                         (local_138 != (Object *)0x0)) {
                                        StringName::unref();
                                      }
                                      ::Variant::Variant((Variant *)&local_88,pOVar22);
                                      ::Variant::operator=
                                                ((Variant *)&local_118,(Variant *)&local_88);
                                      if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                        ::Variant::_clear_internal();
                                      }
                                      uVar9 = 0x18;
                                    }
                                    Ref<Script>::unref(local_1b0);
                                    if (::Variant::needs_deinit[(int)local_b8] != '\0') {
                                      ::Variant::_clear_internal();
                                    }
                                    goto LAB_0010cf09;
                                  }
                                  ::Variant::Variant((Variant *)&local_88,"Resource");
                                  cVar7 = ::Variant::operator==(this,(Variant *)&local_88);
                                  if (((uVar9 == 0x2b) && (cVar7 != '\0')) &&
                                     (cVar7 = String::operator==(param_5,"Expected \'(\'"),
                                     cVar7 != '\0')) {
                                    bVar25 = *(int *)param_1 == 0xc;
                                    if (::Variant::needs_deinit[(int)local_88] != '\0')
                                    goto LAB_0010dd31;
LAB_0010dd45:
                                    if (!bVar25) goto LAB_0010d9f1;
                                    local_138 = (Object *)0x0;
                                    if (*(long *)param_5 != 0) {
                                      CowData<char32_t>::operator=
                                                ((CowData<char32_t> *)param_5,(CowData *)local_1c8);
                                    }
                                    CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
                                    ::Variant::operator_cast_to_StringName((Variant *)local_1c8);
                                    if (local_158 != local_138) {
                                      StringName::operator=
                                                ((StringName *)&local_158,(StringName *)local_1c8);
                                    }
                                    if ((StringName::configured != '\0') &&
                                       (local_138 != (Object *)0x0)) {
                                      StringName::unref();
                                    }
                                    if (::Variant::needs_deinit[(int)local_b8] != '\0') {
                                      ::Variant::_clear_internal();
                                    }
                                    uVar9 = 0x18;
                                    goto LAB_0010cf2e;
                                  }
                                  bVar25 = false;
                                  if (::Variant::needs_deinit[(int)local_88] != '\0') {
LAB_0010dd31:
                                    ::Variant::_clear_internal();
                                    goto LAB_0010dd45;
                                  }
LAB_0010d9f1:
                                  if (::Variant::needs_deinit[(int)local_b8] != '\0') {
                                    ::Variant::_clear_internal();
                                  }
                                }
                                else {
                                  ::Variant::operator_cast_to_StringName((Variant *)local_1c8);
                                  puVar16 = (uint *)
                                                  HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>
                                                  ::get((
                                                  HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>
                                                  *)
                                                  parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                                  ::builtin_types,(StringName *)local_1c8);
                                  uVar9 = *puVar16;
                                  if ((StringName::configured != '\0') &&
                                     (local_138 != (Object *)0x0)) {
                                    StringName::unref();
                                  }
LAB_0010cf09:
                                  get_token(param_3,param_1,param_4,param_5);
                                  if (*(int *)param_1 == 0xc) {
LAB_0010cf2e:
                                    get_token(param_3,param_1,param_4,param_5);
                                    if (*(int *)param_1 == 6) {
                                      local_150 = (Object *)0x0;
                                      local_f8 = 0;
                                      auStack_f0 = (undefined1  [16])0x0;
                                      ::Variant::operator_cast_to_StringName((Variant *)local_1c8);
                                      local_148 = (Object *)((ulong)local_148 & 0xffffffff00000000);
                                      cVar7 = HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>
                                              ::_lookup_pos((
                                                  HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>
                                                  *)
                                                  parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                                  ::builtin_types,(StringName *)local_1c8,
                                                  (uint *)local_1b0);
                                      if ((StringName::configured != '\0') &&
                                         (local_138 != (Object *)0x0)) {
                                        StringName::unref();
                                      }
                                      if (cVar7 == '\0') {
                                        ::Variant::Variant((Variant *)&local_d8,"Resource");
                                        cVar7 = ::Variant::operator==(this,(Variant *)&local_d8);
                                        if (cVar7 == '\0') {
                                          ::Variant::Variant((Variant *)&local_b8,"SubResource");
                                          cVar7 = ::Variant::operator==(this,(Variant *)&local_b8);
                                          if (cVar7 == '\0') {
                                            ::Variant::Variant((Variant *)&local_88,"ExtResource");
                                            cVar7 = ::Variant::operator==(this,(Variant *)&local_88)
                                            ;
                                            if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                              ::Variant::_clear_internal();
                                            }
                                          }
                                          if (::Variant::needs_deinit[(int)local_b8] != '\0') {
                                            ::Variant::_clear_internal();
                                          }
                                          if (::Variant::needs_deinit[(int)local_d8] != '\0')
                                          goto LAB_0010d651;
LAB_0010d66c:
                                          if (cVar7 == '\0') {
                                            ::Variant::operator_cast_to_StringName
                                                      ((Variant *)local_1c8);
                                            cVar7 = ClassDB::class_exists((StringName *)local_1c8);
                                            if ((StringName::configured != '\0') &&
                                               (local_138 != (Object *)0x0)) {
                                              StringName::unref();
                                            }
                                            pSVar24 = (StringName *)0x0;
                                            if (cVar7 == '\0') goto LAB_0010d085;
                                            ::Variant::operator_cast_to_StringName
                                                      ((Variant *)local_1c8);
                                            if (local_150 != local_138) {
                                              StringName::operator=
                                                        ((StringName *)&local_150,
                                                         (StringName *)local_1c8);
                                            }
                                            if ((StringName::configured != '\0') &&
                                               (local_138 != (Object *)0x0)) {
                                              StringName::unref();
                                            }
                                            local_180 = false;
                                            pSVar24 = (StringName *)0x18;
                                            goto LAB_0010d303;
                                          }
                                        }
                                        else {
                                          cVar7 = ::Variant::needs_deinit[(int)local_d8];
                                          if (cVar7 != '\0') {
LAB_0010d651:
                                            ::Variant::_clear_internal();
                                            goto LAB_0010d66c;
                                          }
                                        }
                                        local_b8 = 0;
                                        auStack_b0 = (undefined1  [16])0x0;
                                        uVar10 = parse_value(param_1,(Variant *)&local_b8,param_3,
                                                             param_4,param_5,param_6);
                                        pSVar24 = (StringName *)(ulong)uVar10;
                                        if (uVar10 == 0) {
                                          local_148 = (Object *)0x0;
                                          Ref<Script>::operator=(local_1b0,(Variant *)&local_b8);
                                          pOVar22 = local_148;
                                          if ((local_148 != (Object *)0x0) &&
                                             (cVar7 = (**(code **)(*(long *)local_148 + 0x278))
                                                                (local_148), cVar7 != '\0')) {
                                            (**(code **)(*(long *)pOVar22 + 0x1f0))
                                                      (local_1c8,pOVar22);
                                            if (local_150 != local_138) {
                                              StringName::operator=
                                                        ((StringName *)&local_150,
                                                         (StringName *)local_1c8);
                                            }
                                            if ((StringName::configured != '\0') &&
                                               (local_138 != (Object *)0x0)) {
                                              StringName::unref();
                                            }
                                            ::Variant::Variant((Variant *)&local_88,pOVar22);
                                            ::Variant::operator=
                                                      ((Variant *)&local_f8,(Variant *)&local_88);
                                            if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                              ::Variant::_clear_internal();
                                            }
                                            pSVar24 = (StringName *)0x18;
                                          }
                                          Ref<Script>::unref(local_1b0);
                                          local_188 = ::Variant::needs_deinit[(int)local_b8];
                                          if (local_188 != '\0') {
                                            local_188 = '\0';
LAB_0010d760:
                                            ::Variant::_clear_internal();
                                          }
                                          local_180 = (bool)local_188;
                                          if (uVar9 != 0 || (int)pSVar24 != 0) goto LAB_0010d303;
                                          goto LAB_0010d33d;
                                        }
                                        ::Variant::Variant((Variant *)&local_88,"Resource");
                                        cVar7 = ::Variant::operator==(this,(Variant *)&local_88);
                                        if (((uVar10 == 0x2b) && (cVar7 != '\0')) &&
                                           (cVar7 = String::operator==(param_5,"Expected \'(\'"),
                                           cVar7 != '\0')) {
                                          local_180 = *(int *)param_1 == 3;
                                          if (::Variant::needs_deinit[(int)local_88] != '\0') {
LAB_0010d213:
                                            ::Variant::_clear_internal();
                                          }
                                          if (local_180 != false) {
                                            local_138 = (Object *)0x0;
                                            if (*(long *)param_5 != 0) {
                                              CowData<char32_t>::operator=
                                                        ((CowData<char32_t> *)param_5,
                                                         (CowData *)local_1c8);
                                            }
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)local_1c8);
                                            ::Variant::operator_cast_to_StringName
                                                      ((Variant *)local_1c8);
                                            if (local_150 != local_138) {
                                              StringName::operator=
                                                        ((StringName *)&local_150,
                                                         (StringName *)local_1c8);
                                            }
                                            if ((StringName::configured != '\0') &&
                                               (local_138 != (Object *)0x0)) {
                                              StringName::unref();
                                            }
                                            local_188 = ::Variant::needs_deinit[(int)local_b8];
                                            if (local_188 == '\0') {
                                              pSVar24 = (StringName *)0x18;
                                              goto LAB_0010d303;
                                            }
                                            pSVar24 = (StringName *)0x18;
                                            goto LAB_0010d760;
                                          }
                                        }
                                        else {
                                          local_180 = false;
                                          if (::Variant::needs_deinit[(int)local_88] != '\0')
                                          goto LAB_0010d213;
                                        }
                                        if (::Variant::needs_deinit[(int)local_b8] != '\0') {
                                          ::Variant::_clear_internal();
                                        }
                                      }
                                      else {
                                        ::Variant::operator_cast_to_StringName((Variant *)local_1c8)
                                        ;
                                        puVar16 = (uint *)
                                                  HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>
                                                  ::get((
                                                  HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>
                                                  *)
                                                  parse_value(VariantParser::Token&,Variant&,VariantParser::Stream*,int&,String&,VariantParser::ResourceParser*)
                                                  ::builtin_types,(StringName *)local_1c8);
                                        pSVar24 = (StringName *)(ulong)*puVar16;
                                        if ((StringName::configured != '\0') &&
                                           (local_138 != (Object *)0x0)) {
                                          StringName::unref();
                                        }
LAB_0010d085:
                                        local_180 = false;
                                        if (uVar9 == 0 && (int)pSVar24 == 0) {
LAB_0010d092:
                                          get_token(param_3,param_1,param_4,param_5);
                                          if (*(int *)param_1 == 3) goto LAB_0010d0b7;
                                          String::parse_latin1(param_5,"Expected \']\'");
                                        }
                                        else {
LAB_0010d303:
                                          local_198 = (Variant *)&local_150;
                                          Dictionary::set_typed
                                                    ((uint)local_160,(StringName *)(ulong)uVar9,
                                                     (Variant *)&local_158,(uint)&local_118,pSVar24,
                                                     local_198);
LAB_0010d33d:
                                          if (local_180 == false) goto LAB_0010d092;
LAB_0010d0b7:
                                          get_token(param_3,param_1,param_4,param_5);
                                          if (*(int *)param_1 == 4) {
                                            get_token(param_3,param_1,param_4,param_5);
                                            if (*(int *)param_1 == 0) {
                                              Dictionary::Dictionary((Dictionary *)local_1c8);
                                              uVar9 = _parse_dictionary((Dictionary *)local_1c8,
                                                                        param_3,param_4,param_5,
                                                                        param_6);
                                              pSVar24 = (StringName *)(ulong)uVar9;
                                              if (uVar9 == 0) {
                                                get_token(param_3,param_1,param_4,param_5);
                                                if (*(int *)param_1 == 5) {
                                                  Dictionary::assign(local_160);
                                                  ::Variant::Variant((Variant *)&local_88,local_160)
                                                  ;
                                                  ::Variant::operator=(param_2,(Variant *)&local_88)
                                                  ;
                                                  if (::Variant::needs_deinit[(int)local_88] != '\0'
                                                     ) {
                                                    ::Variant::_clear_internal();
                                                  }
                                                  Dictionary::~Dictionary((Dictionary *)local_1c8);
                                                  if (::Variant::needs_deinit[(int)local_f8] != '\0'
                                                     ) {
                                                    ::Variant::_clear_internal();
                                                  }
                                                  if ((StringName::configured != '\0') &&
                                                     (local_150 != (Object *)0x0)) {
                                                    StringName::unref();
                                                  }
                                                  if (::Variant::needs_deinit[(int)local_118] !=
                                                      '\0') {
                                                    ::Variant::_clear_internal();
                                                  }
                                                  if ((StringName::configured != '\0') &&
                                                     (local_158 != (Object *)0x0)) {
                                                    StringName::unref();
                                                  }
                                                  Dictionary::~Dictionary(local_160);
                                                  goto LAB_0010b4eb;
                                                }
                                                pSVar24 = (StringName *)0x2b;
                                                String::parse_latin1(param_5,"Expected \')\'");
                                              }
                                              Dictionary::~Dictionary((Dictionary *)local_1c8);
                                              goto LAB_0010d0ed;
                                            }
                                            String::parse_latin1(param_5,"Expected \'{\'");
                                          }
                                          else {
                                            String::parse_latin1(param_5,"Expected \'(\'");
                                          }
                                        }
                                        pSVar24 = (StringName *)0x2b;
                                      }
LAB_0010d0ed:
                                      if (::Variant::needs_deinit[(int)local_f8] != '\0') {
                                        ::Variant::_clear_internal();
                                      }
                                      if ((StringName::configured != '\0') &&
                                         (local_150 != (Object *)0x0)) {
                                        StringName::unref();
                                      }
                                      goto LAB_0010cf64;
                                    }
                                    String::parse_latin1
                                              (param_5,"Expected type identifier for value");
                                  }
                                  else {
                                    String::parse_latin1(param_5,"Expected \',\' after key type");
                                  }
                                  pSVar24 = (StringName *)0x2b;
                                }
LAB_0010cf64:
                                if (::Variant::needs_deinit[(int)local_118] != '\0') {
                                  ::Variant::_clear_internal();
                                }
                                if ((StringName::configured != '\0') && (local_158 != (Object *)0x0)
                                   ) {
                                  StringName::unref();
                                }
                                Dictionary::~Dictionary(local_160);
                                goto LAB_0010b290;
                              }
                              get_token(param_3,param_1,param_4,param_5);
                              if (*(int *)param_1 != 4) goto LAB_0010c4b2;
                              if (param_6 == (ResourceParser *)0x0) {
LAB_0010e0b4:
                                get_token(param_3,param_1,param_4,param_5);
                                if (*(int *)param_1 == 7) {
                                  ::Variant::operator_cast_to_String((Variant *)&local_150);
                                  local_138 = (Object *)0x0;
                                  String::parse_latin1((String *)&local_138,"");
                                  ResourceLoader::load
                                            ((Ref<Resource> *)&local_148,(Variant *)&local_150,
                                             (String *)&local_138,1,0);
                                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
                                  if (local_148 == (Object *)0x0) {
                                    operator+((char *)&local_138,
                                              (String *)"Can\'t load resource at path: ");
                                    if (*(Object **)param_5 != local_138) {
                                      CowData<char32_t>::operator=
                                                ((CowData<char32_t> *)param_5,(CowData *)&local_138)
                                      ;
                                    }
                                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
                                  }
                                  else {
                                    get_token(param_3,param_1,param_4,param_5);
                                    if (*(int *)param_1 == 5) {
                                      ::Variant::Variant((Variant *)&local_88,local_148);
                                      ::Variant::operator=(param_2,(Variant *)&local_88);
                                      if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                        ::Variant::_clear_internal();
                                      }
                                      Ref<Resource>::unref((Ref<Resource> *)&local_148);
                                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
                                      goto LAB_0010b4eb;
                                    }
                                    String::parse_latin1(param_5,"Expected \')\'");
                                  }
                                  Ref<Resource>::unref((Ref<Resource> *)&local_148);
                                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
                                }
                                else {
                                  String::parse_latin1
                                            (param_5,"Expected string as argument for Resource()");
                                }
                                goto LAB_0010c354;
                              }
                              cVar7 = String::operator==((String *)&local_168,"Resource");
                              if ((cVar7 == '\0') ||
                                 (pcVar12 = *(code **)(param_6 + 8), pcVar12 == (code *)0x0)) {
                                cVar7 = String::operator==((String *)&local_168,"ExtResource");
                                if ((cVar7 == '\0') || (*(code **)(param_6 + 0x10) == (code *)0x0))
                                {
                                  cVar7 = String::operator==((String *)&local_168,"SubResource");
                                  if ((cVar7 == '\0') ||
                                     (pcVar12 = *(code **)(param_6 + 0x18), pcVar12 == (code *)0x0))
                                  goto LAB_0010e0b4;
                                  goto LAB_0010c81c;
                                }
                                local_138 = (Object *)0x0;
                                uVar9 = (**(code **)(param_6 + 0x10))
                                                  (*(undefined8 *)param_6,param_3,
                                                   (Ref<Resource> *)&local_138,param_4,param_5);
                                pSVar24 = (StringName *)(ulong)uVar9;
                                if ((0x13 < uVar9) ||
                                   ((0xfffffffffff7ef7eU >> ((ulong)pSVar24 & 0x3f) & 1) != 0)) {
                                  Ref<Resource>::unref((Ref<Resource> *)&local_138);
                                  goto LAB_0010b290;
                                }
                              }
                              else {
LAB_0010c81c:
                                local_138 = (Object *)0x0;
                                uVar9 = (*pcVar12)(*(undefined8 *)param_6,param_3,
                                                   (Ref<Resource> *)&local_138,param_4,param_5);
                                pSVar24 = (StringName *)(ulong)uVar9;
                                if (uVar9 != 0) {
                                  Ref<Resource>::unref((Ref<Resource> *)&local_138);
                                  goto LAB_0010b290;
                                }
                              }
                              local_1c8 = (Ref<Resource> *)&local_138;
                              ::Variant::Variant((Variant *)&local_88,local_138);
                              ::Variant::operator=(param_2,(Variant *)&local_88);
                              if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                ::Variant::_clear_internal();
                              }
                              Ref<Resource>::unref(local_1c8);
                              goto LAB_0010b4eb;
                            }
                            get_token(param_3,param_1,param_4,param_5);
                            if (*(int *)param_1 == 4) {
                              local_138 = (Object *)0x0;
                              local_130 = (undefined8 *)0x0;
                              ::Variant::Variant((Variant *)&local_88,(Callable *)&local_138);
                              ::Variant::operator=(param_2,(Variant *)&local_88);
                              if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                ::Variant::_clear_internal();
                              }
                              Callable::~Callable((Callable *)&local_138);
                              goto LAB_0010c481;
                            }
                          }
                          else {
                            get_token(param_3,param_1,param_4,param_5);
                            if (*(int *)param_1 == 4) {
                              local_138 = (Object *)0x0;
                              local_130 = (undefined8 *)0x0;
                              ::Variant::Variant((Variant *)&local_88,(Signal *)&local_138);
                              ::Variant::operator=(param_2,(Variant *)&local_88);
                              if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                ::Variant::_clear_internal();
                              }
                              if ((StringName::configured != '\0') && (local_138 != (Object *)0x0))
                              {
                                StringName::unref();
                              }
                              goto LAB_0010c481;
                            }
                          }
                        }
                        else {
                          get_token(param_3,param_1,param_4,param_5);
                          if (*(int *)param_1 == 4) {
                            get_token(param_3,param_1,param_4,param_5);
                            if (*(int *)param_1 == 5) {
                              local_138 = (Object *)0x0;
                              ::Variant::Variant((Variant *)&local_88,(RID *)&local_138);
                              ::Variant::operator=(param_2,(Variant *)&local_88);
                              if (::Variant::needs_deinit[(int)local_88] != '\0') {
                                ::Variant::_clear_internal();
                              }
                              goto LAB_0010b4eb;
                            }
                            if (*(int *)param_1 != 9) {
                              String::parse_latin1(param_5,"Expected number as argument or \')\'");
                              goto LAB_0010c354;
                            }
                            local_138 = (Object *)::Variant::operator_cast_to_unsigned_long(this);
                            ::Variant::Variant((Variant *)&local_88,(RID *)&local_138);
                            ::Variant::operator=(param_2,(Variant *)&local_88);
                            if (::Variant::needs_deinit[(int)local_88] != '\0') {
                              ::Variant::_clear_internal();
                            }
                            goto LAB_0010c481;
                          }
                        }
LAB_0010c4b2:
                        String::parse_latin1(param_5,"Expected \'(\'");
                      }
                      else {
                        get_token(param_3,param_1,param_4,param_5);
                        if (*(int *)param_1 != 4) goto LAB_0010c4b2;
                        get_token(param_3,param_1,param_4,param_5);
                        if (*(int *)param_1 != 7) {
                          String::parse_latin1(param_5,"Expected string as argument for NodePath()")
                          ;
                          goto LAB_0010c354;
                        }
                        ::Variant::operator_cast_to_String((Variant *)&local_148);
                        NodePath::NodePath((NodePath *)&local_138,(String *)&local_148);
                        ::Variant::Variant((Variant *)&local_88,(NodePath *)&local_138);
                        ::Variant::operator=(param_2,(Variant *)&local_88);
                        if (::Variant::needs_deinit[(int)local_88] != '\0') {
                          ::Variant::_clear_internal();
                        }
                        NodePath::~NodePath((NodePath *)&local_138);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
LAB_0010c481:
                        get_token(param_3,param_1,param_4,param_5);
                        if (*(int *)param_1 == 5) goto LAB_0010b4eb;
                        String::parse_latin1(param_5,"Expected \')\'");
                      }
LAB_0010c354:
                      pSVar24 = (StringName *)0x2b;
                      goto LAB_0010b290;
                    }
                    local_130 = (undefined8 *)0x0;
                    uVar9 = _parse_construct<float>(param_3,(Vector *)&local_138,param_4,param_5);
                    pSVar24 = (StringName *)(ulong)uVar9;
                    if (uVar9 == 0) {
                      if ((local_130 == (undefined8 *)0x0) || (local_130[-1] != 4))
                      goto LAB_0010b7b9;
                      local_b8 = *local_130;
                      auStack_b0._0_8_ = local_130[1];
                      ::Variant::Variant((Variant *)&local_88,(Color *)&local_b8);
                      goto LAB_0010baaa;
                    }
                  }
                  else {
                    local_130 = (undefined8 *)0x0;
                    uVar9 = _parse_construct<float>(param_3,(Vector *)&local_138,param_4,param_5);
                    pSVar24 = (StringName *)(ulong)uVar9;
                    if (uVar9 == 0) {
                      if ((local_130 != (undefined8 *)0x0) && (local_130[-1] == 0x10)) {
                        local_d8 = local_130[6];
                        uStack_d0 = local_130[7];
                        local_f8 = local_130[4];
                        auStack_f0._0_8_ = local_130[5];
                        local_118 = local_130[2];
                        auStack_110._0_8_ = local_130[3];
                        local_128 = *local_130;
                        uStack_120 = local_130[1];
                        Projection::Projection
                                  ((Projection *)&local_88,(Vector4 *)&local_128,
                                   (Vector4 *)&local_118,(Vector4 *)&local_f8,(Vector4 *)&local_d8);
                        ::Variant::Variant((Variant *)&local_b8,(Projection *)&local_88);
                        ::Variant::operator=(param_2,(Variant *)&local_b8);
                        if (::Variant::needs_deinit[(int)local_b8] != '\0') {
                          ::Variant::_clear_internal();
                        }
                        Projection::~Projection((Projection *)&local_88);
                        CowData<float>::_unref((CowData<float> *)&local_130);
                        goto LAB_0010b4eb;
                      }
                      pSVar24 = (StringName *)0x2b;
                      String::parse_latin1(param_5,"Expected 16 arguments for constructor");
                    }
                  }
                }
                else {
                  local_130 = (undefined8 *)0x0;
                  uVar9 = _parse_construct<float>(param_3,(Vector *)&local_138,param_4,param_5);
                  pSVar24 = (StringName *)(ulong)uVar9;
                  if (uVar9 == 0) {
                    if ((local_130 != (undefined8 *)0x0) && (local_130[-1] == 0xc)) {
                      local_f8 = *(undefined8 *)((long)local_130 + 0x24);
                      auStack_f0._0_4_ = *(undefined4 *)((long)local_130 + 0x2c);
                      local_b8 = *local_130;
                      local_98 = *(undefined4 *)(local_130 + 4);
                      auStack_b0 = *(undefined1 (*) [16])(local_130 + 1);
                      uStack_a0 = local_130[3];
                      Transform3D::Transform3D
                                ((Transform3D *)&local_88,(Basis *)&local_b8,(Vector3 *)&local_f8);
                      ::Variant::Variant((Variant *)&local_d8,(Transform3D *)&local_88);
                      ::Variant::operator=(param_2,(Variant *)&local_d8);
                      cVar7 = ::Variant::needs_deinit[(int)local_d8];
                      goto joined_r0x0010bc41;
                    }
                    pSVar24 = (StringName *)0x2b;
                    String::parse_latin1(param_5,"Expected 12 arguments for constructor");
                  }
                }
              }
              else {
                local_130 = (undefined8 *)0x0;
                uVar9 = _parse_construct<float>(param_3,(Vector *)&local_138,param_4,param_5);
                pSVar24 = (StringName *)(ulong)uVar9;
                if (uVar9 == 0) {
                  if ((local_130 != (undefined8 *)0x0) && (local_130[-1] == 9)) {
                    local_68 = *(undefined4 *)(local_130 + 4);
                    local_88 = *local_130;
                    auStack_80 = *(undefined1 (*) [16])(local_130 + 1);
                    uStack_70 = local_130[3];
                    ::Variant::Variant((Variant *)&local_b8,(Basis *)&local_88);
                    ::Variant::operator=(param_2,(Variant *)&local_b8);
                    cVar7 = ::Variant::needs_deinit[(int)local_b8];
                    goto joined_r0x0010bc41;
                  }
                  pSVar24 = (StringName *)0x2b;
                  String::parse_latin1(param_5,"Expected 9 arguments for constructor");
                }
              }
            }
            else {
              local_130 = (undefined8 *)0x0;
              uVar9 = _parse_construct<float>(param_3,(Vector *)&local_138,param_4,param_5);
              pSVar24 = (StringName *)(ulong)uVar9;
              if (uVar9 == 0) {
                if ((local_130 == (undefined8 *)0x0) || (local_130[-1] != 6)) goto LAB_0010bd4e;
                local_b8 = *local_130;
                auStack_b0 = *(undefined1 (*) [16])(local_130 + 1);
                ::Variant::Variant((Variant *)&local_88,(AABB *)&local_b8);
                goto LAB_0010baaa;
              }
            }
          }
          else {
            local_130 = (undefined8 *)0x0;
            uVar9 = _parse_construct<float>(param_3,(Vector *)&local_138,param_4,param_5);
            pSVar24 = (StringName *)(ulong)uVar9;
            if (uVar9 == 0) {
              if ((local_130 == (undefined8 *)0x0) || (local_130[-1] != 4)) goto LAB_0010b7b9;
              local_b8 = *local_130;
              auStack_b0._0_8_ = local_130[1];
              ::Variant::Variant((Variant *)&local_88,(Quaternion *)&local_b8);
LAB_0010baaa:
              ::Variant::operator=(param_2,(Variant *)&local_88);
              cVar7 = ::Variant::needs_deinit[(int)local_88];
joined_r0x0010bc41:
              if (cVar7 != '\0') {
                ::Variant::_clear_internal();
              }
              goto LAB_0010bace;
            }
          }
        }
        else {
          local_130 = (undefined8 *)0x0;
          uVar9 = _parse_construct<float>(param_3,(Vector *)&local_138,param_4,param_5);
          pSVar24 = (StringName *)(ulong)uVar9;
          if (uVar9 == 0) {
            if ((local_130 != (undefined8 *)0x0) && (local_130[-1] == 4)) {
              local_b8 = *local_130;
              auStack_b0._0_8_ = local_130[1];
              ::Variant::Variant((Variant *)&local_88,(Plane *)&local_b8);
              goto LAB_0010baaa;
            }
LAB_0010b7b9:
            pSVar24 = (StringName *)0x2b;
            String::parse_latin1(param_5,"Expected 4 arguments for constructor");
          }
        }
      }
      else {
        local_130 = (undefined8 *)0x0;
        uVar9 = _parse_construct<float>(param_3,(Vector *)&local_138,param_4,param_5);
        pSVar24 = (StringName *)(ulong)uVar9;
        if (uVar9 == 0) {
          if ((local_130 != (undefined8 *)0x0) && (local_130[-1] == 6)) {
            local_b8 = *local_130;
            auStack_b0 = *(undefined1 (*) [16])(local_130 + 1);
            ::Variant::Variant((Variant *)&local_88,(Transform2D *)&local_b8);
            goto LAB_0010baaa;
          }
LAB_0010bd4e:
          pSVar24 = (StringName *)0x2b;
          String::parse_latin1(param_5,"Expected 6 arguments for constructor");
        }
      }
LAB_0010b7ce:
      CowData<float>::_unref((CowData<float> *)&local_130);}else{local_130 = (undefined8*)0x0;uVar9 = _parse_construct<int>(param_3, (Vector*)&local_138, param_4, param_5);pSVar24 = (StringName*)(ulong)uVar9;if (uVar9 == 0) {
   if (( local_130 != (undefined8*)0x0 ) && ( local_130[-1] == 2 )) {
      local_b8 = *local_130;
      ::Variant::Variant((Variant*)&local_88, (Vector2i*)&local_b8);
      goto LAB_0010b9eb;
   }
   pSVar24 = (StringName*)0x2b;
   String::parse_latin1(param_5, "Expected 2 arguments for constructor");
}LAB_0010b740:CowData<int>::_unref((CowData<int>*)&local_130);}
  }
  else{
   ::Variant::Variant((Variant*)&local_88, true);
   if (::Variant::needs_deinit[*(int*)param_2] != '\0') {
      ::Variant::_clear_internal();
   }
   *(undefined8*)( param_2 + 8 ) = auStack_80._0_8_;
   *(undefined8*)( param_2 + 0x10 ) = auStack_80._8_8_;
   *(int*)param_2 = (int)local_88;
   LAB_0010b4eb:pSVar24 = (StringName*)0x0;
}LAB_0010b290:lVar18 = local_168;if (local_168 != 0) {
   LOCK();
   plVar1 = (long*)( local_168 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_168 = 0;
      Memory::free_static((void*)( lVar18 + -0x10 ), false);
   }
}LAB_0010b06e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return pSVar24;LAB_0010f551:lVar23 = 0;goto LAB_0010ed5b;LAB_0010ed3d:lVar23 = 0;LAB_0010ed5b:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar18, lVar23, "p_index", "size()", "", false, true);_err_flush_stdout();/* WARNING: Does not return */pcVar12 = (code*)invalidInstructionException();( *pcVar12 )();}/* VariantParser::_parse_array(Array&, VariantParser::Stream*, int&, String&,
   VariantParser::ResourceParser*) */ulong VariantParser::_parse_array(Array *param_1, Stream *param_2, int *param_3, String *param_4, ResourceParser *param_5) {
   bool bVar1;
   Stream SVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   int local_88[2];
   undefined1 local_80[16];
   int local_68[2];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   bVar1 = false;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   if (param_2[0x2011] != (Stream)0x0) goto LAB_0010fc3c;
   LAB_0010fbe7:SVar2 = ( Stream )(**(code**)( *(long*)param_2 + 8 ))(param_2);
   do {
      if (SVar2 != (Stream)0x0) {
         String::parse_latin1((StrRange*)param_4);
         uVar3 = 0x10;
         LAB_0010fcd7:if (::Variant::needs_deinit[(int)local_60] != '\0') {
            ::Variant::_clear_internal();
            uVar3 = uVar3 & 0xffffffff;
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar3;
         }
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      uVar3 = get_token(param_2, (Token*)local_68, param_3, param_4);
      if ((int)uVar3 != 0) goto LAB_0010fcd7;
      if (local_68[0] == 3) goto LAB_0010fcd7;
      if (bVar1) {
         bVar1 = false;
         if (local_68[0] != 0xc) {
            String::parse_latin1((StrRange*)param_4);
            uVar3 = 0x2b;
            goto LAB_0010fcd7;
         }
      } else {
         local_88[0] = 0;
         local_88[1] = 0;
         local_80 = (undefined1[16])0x0;
         uVar3 = parse_value((Token*)local_68, (Variant*)local_88, param_2, param_3, param_4, param_5);
         if ((int)uVar3 != 0) {
            if (::Variant::needs_deinit[local_88[0]] != '\0') {
               ::Variant::_clear_internal();
               uVar3 = uVar3 & 0xffffffff;
            }
            goto LAB_0010fcd7;
         }
         Array::push_back((Variant*)param_1);
         if (::Variant::needs_deinit[local_88[0]] != '\0') {
            ::Variant::_clear_internal();
         }
         bVar1 = true;
      }
      if (param_2[0x2011] == (Stream)0x0) goto LAB_0010fbe7;
      LAB_0010fc3c:SVar2 = param_2[0x2010];
   } while ( true );
}/* VariantParser::_parse_dictionary(Dictionary&, VariantParser::Stream*, int&, String&,
   VariantParser::ResourceParser*) */ulong VariantParser::_parse_dictionary(Dictionary *param_1, Stream *param_2, int *param_3, String *param_4, ResourceParser *param_5) {
   bool bVar1;
   bool bVar2;
   bool bVar3;
   Stream SVar4;
   ulong uVar5;
   Variant *this;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined1 local_a0[16];
   undefined8 local_88;
   undefined1 local_80[16];
   int local_68[2];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a0 = (undefined1[16])0x0;
   local_a8 = 0;
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   bVar2 = false;
   bVar1 = true;
   LAB_0010fe08:if (param_2[0x2011] != (Stream)0x0) goto LAB_0010fe66;
   LAB_0010fe11:SVar4 = ( Stream )(**(code**)( *(long*)param_2 + 8 ))(param_2);
   bVar3 = bVar1;
   joined_r0x0010fe1c:bVar1 = bVar2;
   if (SVar4 != (Stream)0x0) {
      String::parse_latin1((StrRange*)param_4);
      uVar5 = 0x10;
      goto LAB_0010fe98;
   }
   if (bVar3) {
      uVar5 = get_token(param_2, (Token*)local_68, param_3, param_4);
      if (( (int)uVar5 != 0 ) || ( local_68[0] == 1 )) goto LAB_0010fe98;
      if (bVar1) {
         if (local_68[0] != 0xc) {
            String::parse_latin1((StrRange*)param_4);
            goto LAB_0010fff2;
         }
         bVar2 = false;
         if (param_2[0x2011] == (Stream)0x0) goto LAB_0010fe11;
         LAB_0010fe66:SVar4 = param_2[0x2010];
         bVar3 = bVar1;
         goto joined_r0x0010fe1c;
      }
      uVar5 = parse_value((Token*)local_68, (Variant*)&local_a8, param_2, param_3, param_4, param_5);
      if (( (int)uVar5 != 0 ) || ( uVar5 = get_token(param_2, (Token*)local_68, param_3, param_4) ),(int)uVar5 != 0) goto LAB_0010fe98;
      if (local_68[0] == 0xb) {
         bVar2 = bVar1;
         bVar1 = false;
         goto LAB_0010fe08;
      }
      String::parse_latin1((StrRange*)param_4);
      LAB_0010fff2:uVar5 = 0x2b;
   } else {
      uVar5 = get_token(param_2, (Token*)local_68, param_3, param_4);
      if ((int)uVar5 == 0) {
         local_88 = 0;
         local_80 = (undefined1[16])0x0;
         uVar5 = parse_value((Token*)local_68, (Variant*)&local_88, param_2, param_3, param_4, param_5);
         if (( (int)uVar5 != 0 ) && ( (int)uVar5 != 0x11 )) {
            if (::Variant::needs_deinit[(int)local_88] != '\0') {
               ::Variant::_clear_internal();
               uVar5 = uVar5 & 0xffffffff;
            }
            goto LAB_0010fe98;
         }
         this(Variant * Dictionary::operator []((Variant*)param_1));
         ::Variant::operator =(this, (Variant*)&local_88);
         if (::Variant::needs_deinit[(int)local_88] != '\0') {
            ::Variant::_clear_internal();
         }
         bVar2 = true;
         bVar1 = true;
         goto LAB_0010fe08;
      }
   }
   LAB_0010fe98:if (::Variant::needs_deinit[(int)local_60] != '\0') {
      ::Variant::_clear_internal();
      uVar5 = uVar5 & 0xffffffff;
   }
   if (::Variant::needs_deinit[(int)local_a8] != '\0') {
      ::Variant::_clear_internal();
      uVar5 = uVar5 & 0xffffffff;
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar5;
}/* VariantParser::parse(VariantParser::Stream*, Variant&, String&, int&,
   VariantParser::ResourceParser*) */ulong VariantParser::parse(Stream *param_1, Variant *param_2, String *param_3, int *param_4, ResourceParser *param_5) {
   ulong uVar1;
   long in_FS_OFFSET;
   int local_68[2];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   uVar1 = get_token(param_1, (Token*)local_68, param_4, param_3);
   if (( (int)uVar1 == 0 ) && ( uVar1 = 0x12 ),local_68[0] != 0xf) {
      uVar1 = parse_value((Token*)local_68, param_2, param_1, param_4, param_3, param_5);
   }
   if (::Variant::needs_deinit[(int)local_60] != '\0') {
      ::Variant::_clear_internal();
      uVar1 = uVar1 & 0xffffffff;
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* VariantParser::_parse_tag(VariantParser::Token&, VariantParser::Stream*, int&, String&,
   VariantParser::Tag&, VariantParser::ResourceParser*, bool) */ulong VariantParser::_parse_tag(Token *param_1, Stream *param_2, int *param_3, String *param_4, Tag *param_5, ResourceParser *param_6, bool param_7) {
   long *plVar1;
   uint uVar2;
   void *pvVar3;
   char *pcVar4;
   char cVar5;
   Stream SVar6;
   int iVar7;
   Variant *this;
   ulong uVar8;
   long lVar9;
   long lVar10;
   char *pcVar11;
   long in_FS_OFFSET;
   bool bVar12;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_5 + 0x10 ) != 0 ) && ( *(int*)( param_5 + 0x34 ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_5 + 0x30 ) * 4 );
      lVar10 = 0;
      if (uVar2 != 0) {
         do {
            if (*(int*)( *(long*)( param_5 + 0x18 ) + lVar10 ) != 0) {
               *(int*)( *(long*)( param_5 + 0x18 ) + lVar10 ) = 0;
               pvVar3 = *(void**)( *(long*)( param_5 + 0x10 ) + lVar10 * 2 );
               if (::Variant::needs_deinit[*(int*)( (long)pvVar3 + 0x18 )] != '\0') {
                  ::Variant::_clear_internal();
               }
               if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar9 = *(long*)( (long)pvVar3 + 0x10 );
                     *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                  }
               }
               Memory::free_static(pvVar3, false);
               *(undefined8*)( *(long*)( param_5 + 0x10 ) + lVar10 * 2 ) = 0;
            }
            lVar10 = lVar10 + 4;
         } while ( (ulong)uVar2 * 4 - lVar10 != 0 );
      }
      *(undefined4*)( param_5 + 0x34 ) = 0;
      *(undefined1(*) [16])( param_5 + 0x20 ) = (undefined1[16])0x0;
   }
   if (*(int*)param_1 == 2) {
      if (param_7) {
         local_60 = 0;
         local_68 = "";
         String::parse_latin1((StrRange*)param_5);
         if (( *(long*)( param_5 + 0x10 ) != 0 ) && ( *(int*)( param_5 + 0x34 ) != 0 )) {
            lVar10 = 0;
            uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_5 + 0x30 ) * 4 );
            if (uVar2 != 0) {
               do {
                  if (*(int*)( *(long*)( param_5 + 0x18 ) + lVar10 ) != 0) {
                     *(int*)( *(long*)( param_5 + 0x18 ) + lVar10 ) = 0;
                     pvVar3 = *(void**)( *(long*)( param_5 + 0x10 ) + lVar10 * 2 );
                     if (::Variant::needs_deinit[*(int*)( (long)pvVar3 + 0x18 )] != '\0') {
                        ::Variant::_clear_internal();
                     }
                     if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                        LOCK();
                        plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar9 = *(long*)( (long)pvVar3 + 0x10 );
                           *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                           Memory::free_static((void*)( lVar9 + -0x10 ), false);
                        }
                     }
                     Memory::free_static(pvVar3, false);
                     *(undefined8*)( *(long*)( param_5 + 0x10 ) + lVar10 * 2 ) = 0;
                  }
                  lVar10 = lVar10 + 4;
               } while ( lVar10 != (ulong)uVar2 << 2 );
            }
            *(undefined4*)( param_5 + 0x34 ) = 0;
            *(undefined1(*) [16])( param_5 + 0x20 ) = (undefined1[16])0x0;
         }
         cVar5 = ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2);
         if (cVar5 != '\0') {
            local_70 = 0;
            bVar12 = false;
            do {
               cVar5 = Stream::get_char(param_2);
               if (param_2[0x2011] == (Stream)0x0) {
                  SVar6 = ( Stream )(**(code**)( *(long*)param_2 + 8 ))(param_2);
               } else {
                  SVar6 = param_2[0x2010];
               }
               if (SVar6 != (Stream)0x0) {
                  local_60 = 0x27;
                  local_68 = "Unexpected EOF while parsing simple tag";
                  String::parse_latin1((StrRange*)param_4);
                  lVar10 = local_70;
                  if (local_70 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_70 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_70 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }
                  }
                  goto LAB_001106d2;
               }
               if (cVar5 == ']') {
                  if (!bVar12) goto LAB_001108c7;
                  bVar12 = false;
               } else {
                  bVar12 = cVar5 == '\\';
               }
               CharString::operator +=((CharString*)&local_70, cVar5);
            } while ( true );
         }
         LAB_001103e8:iVar7 = Stream::get_char(param_2);
         if (param_2[0x2011] == (Stream)0x0) {
            SVar6 = ( Stream )(**(code**)( *(long*)param_2 + 8 ))(param_2);
         } else {
            SVar6 = param_2[0x2010];
         }
         if (SVar6 != (Stream)0x0) {
            local_60 = 0x27;
            local_68 = "Unexpected EOF while parsing simple tag";
            String::parse_latin1((StrRange*)param_4);
            goto LAB_001106d2;
         }
         if (iVar7 == 0x5d) {
            if (cVar5 == '\0') goto LAB_00110928;
            cVar5 = false;
         } else {
            cVar5 = iVar7 == 0x5c;
         }
         String::chr((wchar32)(String*)&local_68);
         String::operator +=((String*)param_5, (String*)&local_68);
         pcVar11 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar11 + -0x10, false);
            }
         }
         goto LAB_001103e8;
      }
      get_token(param_2, param_1, param_3, param_4);
      if (*(int*)param_1 == 6) {
         ::Variant::operator_cast_to_String((Variant*)&local_68);
         pcVar4 = local_68;
         pcVar11 = *(char**)param_5;
         if (pcVar11 == local_68) {
            if (pcVar11 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( pcVar11 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = (char*)0x0;
                  Memory::free_static(pcVar4 + -0x10, false);
               }
            }
         } else {
            if (pcVar11 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( pcVar11 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar10 = *(long*)param_5;
                  *(undefined8*)param_5 = 0;
                  Memory::free_static((void*)( lVar10 + -0x10 ), false);
               }
            }
            *(char**)param_5 = local_68;
         }
         bVar12 = true;
         LAB_001104f3:if (param_2[0x2011] != (Stream)0x0) goto LAB_00110635;
         LAB_00110500:SVar6 = ( Stream )(**(code**)( *(long*)param_2 + 8 ))(param_2);
         do {
            if (SVar6 != (Stream)0x0) {
               local_70 = 0;
               plVar1 = (long*)( *(long*)param_5 + -0x10 );
               if (*(long*)param_5 == 0) goto LAB_001109fb;
               goto LAB_001109da;
            }
            get_token(param_2, param_1, param_3, param_4);
            iVar7 = *(int*)param_1;
            if (iVar7 == 3) goto LAB_00110974;
            if (bVar12) {
               pcVar11 = ".";
               if (iVar7 != 0xd) {
                  if (iVar7 != 0xb) goto LAB_0011054d;
                  pcVar11 = ":";
               }
               String::operator +=((String*)param_5, pcVar11);
               get_token(param_2, param_1, param_3, param_4);
               if (*(int*)param_1 != 6) {
                  LAB_00110ad8:local_60 = 0x13;
                  local_68 = "Expected identifier";
                  String::parse_latin1((StrRange*)param_4);
                  goto LAB_001106d2;
               }
               ::Variant::operator_cast_to_String((Variant*)&local_70);
               String::operator +=((String*)param_5, (String*)&local_70);
               lVar10 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               goto LAB_001104f3;
            }
            LAB_0011054d:if (iVar7 != 6) goto LAB_00110ad8;
            ::Variant::operator_cast_to_String((Variant*)&local_70);
            get_token(param_2, param_1, param_3, param_4);
            if (*(int*)param_1 != 0xe) {
               local_60 = 0x1d;
               local_68 = "Expected \'=\' after identifier";
               String::parse_latin1((StrRange*)param_4);
               uVar8 = 0x2b;
               LAB_00110b56:lVar10 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     uVar8 = uVar8 & 0xffffffff;
                  }
               }
               goto LAB_001106d7;
            }
            get_token(param_2, param_1, param_3, param_4);
            local_58 = 0;
            local_50 = (undefined1[16])0x0;
            uVar8 = parse_value(param_1, (Variant*)&local_58, param_2, param_3, param_4, param_6);
            if ((int)uVar8 != 0) {
               if (::Variant::needs_deinit[(int)local_58] != '\0') {
                  ::Variant::_clear_internal();
                  uVar8 = uVar8 & 0xffffffff;
               }
               goto LAB_00110b56;
            }
            this(Variant * HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>::operator []((HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>*)( param_5 + 8 ), (String*)&local_70));
            ::Variant::operator =(this, (Variant*)&local_58);
            if (::Variant::needs_deinit[(int)local_58] != '\0') {
               ::Variant::_clear_internal();
            }
            lVar10 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar10 + -0x10 ), false);
               }
            }
            bVar12 = false;
            if (param_2[0x2011] == (Stream)0x0) goto LAB_00110500;
            LAB_00110635:SVar6 = param_2[0x2010];
         } while ( true );
      }
      local_60 = 0x1e;
      local_68 = "Expected identifier (tag name)";
      String::parse_latin1((StrRange*)param_4);
   } else {
      local_60 = 0xc;
      local_68 = "Expected \'[\'";
      String::parse_latin1((StrRange*)param_4);
   }
   LAB_001106d2:uVar8 = 0x2b;
   goto LAB_001106d7;
   LAB_001108c7:if (local_70 == 0) {
      cVar5 = false;
   } else {
      cVar5 = (char)*(undefined8*)( local_70 + -8 ) + -1 + ( (int)*(undefined8*)( local_70 + -8 ) == 0 );
   }
   iVar7 = CharString::get_data();
   String::parse_utf8((char*)param_5, iVar7, (bool)cVar5);
   lVar10 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar10 + -0x10 ), false);
      }
   }
   LAB_00110928:String::strip_edges(SUB81((String*)&local_68, 0), SUB81(param_5, 0));
   pcVar4 = local_68;
   pcVar11 = *(char**)param_5;
   if (pcVar11 == local_68) {
      if (pcVar11 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( pcVar11 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
            uVar8 = 0;
            goto LAB_001106d7;
         }
      }
   } else {
      if (pcVar11 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( pcVar11 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar10 = *(long*)param_5;
            *(undefined8*)param_5 = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }
      }
      *(char**)param_5 = local_68;
   }
   LAB_00110974:uVar8 = 0;
   goto LAB_001106d7;
   LAB_001109da:do {
      lVar10 = *plVar1;
      if (lVar10 == 0) goto LAB_001109fb;
      LOCK();
      lVar9 = *plVar1;
      bVar12 = lVar10 == lVar9;
      if (bVar12) {
         *plVar1 = lVar10 + 1;
         lVar9 = lVar10;
      }
      UNLOCK();
   } while ( !bVar12 );
   if (lVar9 != -1) {
      local_70 = *(long*)param_5;
   }
   LAB_001109fb:local_78 = 0;
   local_68 = "Unexpected EOF while parsing tag \'%s\'";
   local_60 = 0x25;
   String::parse_latin1((StrRange*)&local_78);
   vformat<String>((Variant*)&local_68, (StrRange*)&local_78, &local_70);
   pcVar11 = *(char**)param_4;
   if (pcVar11 == local_68) {
      if (pcVar11 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( pcVar11 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static(local_68 + -0x10, false);
         }
      }
   } else {
      if (pcVar11 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( pcVar11 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar10 = *(long*)param_4;
            *(undefined8*)param_4 = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }
      }
      *(char**)param_4 = local_68;
   }
   lVar10 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar10 + -0x10 ), false);
      }
   }
   lVar10 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar10 + -0x10 ), false);
      }
   }
   uVar8 = 0x10;
   LAB_001106d7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar8;
}/* VariantParser::parse_tag(VariantParser::Stream*, int&, String&, VariantParser::Tag&,
   VariantParser::ResourceParser*, bool) */ulong VariantParser::parse_tag(Stream *param_1, int *param_2, String *param_3, Tag *param_4, ResourceParser *param_5, bool param_6) {
   ulong uVar1;
   long in_FS_OFFSET;
   int local_68[2];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   get_token(param_1, (Token*)local_68, param_2, param_3);
   if (local_68[0] == 0xf) {
      uVar1 = 0x12;
   } else if (local_68[0] == 2) {
      uVar1 = _parse_tag((Token*)local_68, param_1, param_2, param_3, param_4, param_5, param_6);
   } else {
      String::parse_latin1((StrRange*)param_3);
      uVar1 = 0x2b;
   }
   if (::Variant::needs_deinit[(int)local_60] != '\0') {
      ::Variant::_clear_internal();
      uVar1 = uVar1 & 0xffffffff;
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* VariantParser::parse_tag_assign_eof(VariantParser::Stream*, int&, String&, VariantParser::Tag&,
   String&, Variant&, VariantParser::ResourceParser*, bool) */ulong VariantParser::parse_tag_assign_eof(Stream *param_1, int *param_2, String *param_3, Tag *param_4, String *param_5, Variant *param_6, ResourceParser *param_7, bool param_8) {
   long *plVar1;
   char *pcVar2;
   char *pcVar3;
   Stream SVar4;
   uint uVar5;
   int iVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   char *local_80;
   char *local_78;
   undefined8 local_70;
   int local_68[2];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_78 = "";
   String::parse_latin1((StrRange*)param_5);
   local_80 = (char*)0x0;
   LAB_00110d76:uVar5 = *(uint*)( param_1 + 0x2014 );
   if (uVar5 == 0) goto LAB_00110dd3;
   LAB_00110d82:*(undefined4*)( param_1 + 0x2014 ) = 0;
   if (param_1[0x2011] != (Stream)0x0) goto LAB_00110de8;
   LAB_00110d97:SVar4 = ( Stream )(**(code**)( *(long*)param_1 + 8 ))(param_1);
   do {
      if (SVar4 != (Stream)0x0) {
         LAB_00110f20:uVar7 = 0x12;
         goto LAB_00110e69;
      }
      if (uVar5 == 0x3b) {
         do {
            iVar6 = Stream::get_char(param_1);
            if (param_1[0x2011] == (Stream)0x0) {
               SVar4 = ( Stream )(**(code**)( *(long*)param_1 + 8 ))(param_1);
            } else {
               SVar4 = param_1[0x2010];
            }
            if (SVar4 != (Stream)0x0) goto LAB_00110f20;
         } while ( iVar6 != 10 );
      } else {
         if (uVar5 == 0x5b) {
            if (( local_80 == (char*)0x0 ) || ( *(uint*)( local_80 + -8 ) < 2 )) {
               *(undefined4*)( param_1 + 0x2014 ) = 0x5b;
               uVar7 = parse_tag(param_1, param_2, param_3, param_4, param_7, param_8);
               goto LAB_00110e69;
            }
            LAB_00110ebc:String::chr((wchar32)(Variant*)&local_78);
            String::operator +=((String*)&local_80, (String*)&local_78);
            pcVar2 = local_78;
            if (local_78 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_78 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            goto LAB_00110d76;
         }
         if (0x20 < uVar5) {
            if (uVar5 == 0x22) {
               *(undefined4*)( param_1 + 0x2014 ) = 0x22;
               local_60 = 0;
               local_58 = (undefined1[16])0x0;
               uVar7 = get_token(param_1, (Token*)local_68, param_2, param_3);
               if ((int)uVar7 == 0) {
                  if (local_68[0] == 7) {
                     ::Variant::operator_cast_to_String((Variant*)&local_78);
                     pcVar3 = local_78;
                     pcVar2 = local_80;
                     if (local_80 == local_78) {
                        if (local_80 != (char*)0x0) {
                           LOCK();
                           plVar1 = (long*)( local_80 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_78 = (char*)0x0;
                              Memory::free_static(pcVar3 + -0x10, false);
                           }
                        }
                     } else {
                        if (local_80 != (char*)0x0) {
                           LOCK();
                           plVar1 = (long*)( local_80 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_80 = (char*)0x0;
                              Memory::free_static(pcVar2 + -0x10, false);
                           }
                        }
                        local_80 = local_78;
                     }
                     if (::Variant::needs_deinit[(int)local_60] != '\0') {
                        ::Variant::_clear_internal();
                     }
                     goto LAB_00110d76;
                  }
                  local_70 = 0x1b;
                  local_78 = "Error reading quoted string";
                  String::parse_latin1((StrRange*)param_3);
                  uVar7 = 0x1e;
               }
            } else {
               if (uVar5 != 0x3d) goto LAB_00110ebc;
               if (*(char**)param_5 != local_80) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)param_5, (CowData*)&local_80);
               }
               local_58 = (undefined1[16])0x0;
               local_60 = 0;
               get_token(param_1, (Token*)local_68, param_2, param_3);
               uVar7 = parse_value((Token*)local_68, param_6, param_1, param_2, param_3, param_7);
            }
            if (::Variant::needs_deinit[(int)local_60] != '\0') {
               ::Variant::_clear_internal();
               uVar7 = uVar7 & 0xffffffff;
            }
            LAB_00110e69:pcVar2 = local_80;
            if (local_80 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_80 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_80 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
                  uVar7 = uVar7 & 0xffffffff;
               }
            }
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return uVar7;
            }
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }
         if (uVar5 != 10) goto LAB_00110d76;
      }
      *param_2 = *param_2 + 1;
      uVar5 = *(uint*)( param_1 + 0x2014 );
      if (uVar5 != 0) goto LAB_00110d82;
      LAB_00110dd3:uVar5 = Stream::get_char(param_1);
      if (param_1[0x2011] == (Stream)0x0) goto LAB_00110d97;
      LAB_00110de8:SVar4 = param_1[0x2010];
   } while ( true );
}/* VariantParser::StreamFile::~StreamFile() */void VariantParser::StreamFile::~StreamFile(StreamFile *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__read_buffer_00119628;
   if (*(long*)( this + 0x2018 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x2018 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }
      }
   }
   operator_delete(this, 0x2020);
   return;
}/* HashMap<StringName, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant::Type> > >::~HashMap() */void HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>::~HashMap(HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>> *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   bool bVar4;
   pvVar3 = *(void**)( this + 8 );
   if (pvVar3 == (void*)0x0) {
      return;
   }
   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      } else {
         lVar2 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar2 ) != 0) {
               bVar4 = StringName::configured != '\0';
               *(int*)( *(long*)( this + 0x10 ) + lVar2 ) = 0;
               pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
               if (( bVar4 ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                  StringName::unref();
               }
               Memory::free_static(pvVar3, false);
               pvVar3 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
            }
            lVar2 = lVar2 + 4;
         } while ( lVar2 != (ulong)uVar1 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar3 == (void*)0x0) {
            return;
         }
      }
   }
   Memory::free_static(pvVar3, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}/* VariantParser::StreamFile::~StreamFile() */void VariantParser::StreamFile::~StreamFile(StreamFile *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__read_buffer_00119628;
   if (*(long*)( this + 0x2018 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x2018 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            return;
         }
      }
   }
   return;
}/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector3>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Color>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector2>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<Vector4>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector4>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<long>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<long>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<double>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<double>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<Vector3>::resize<false>(long param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<Vector2>::resize<false>(long param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* Error CowData<Vector4>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<Vector4>::resize<false>(long param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* Error CowData<Color>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<Color>::resize<false>(long param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<float>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<char32_t>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<char32_t>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<char32_t>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<char32_t>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* VariantParser::StreamString::~StreamString() */void VariantParser::StreamString::~StreamString(StreamString *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__read_buffer_00119660;
   if (*(long*)( this + 0x2018 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2018 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x2018 );
         *(undefined8*)( this + 0x2018 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
   }
   return;
}/* VariantParser::StreamString::~StreamString() */void VariantParser::StreamString::~StreamString(StreamString *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__read_buffer_00119660;
   if (*(long*)( this + 0x2018 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2018 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x2018 );
         *(undefined8*)( this + 0x2018 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         operator_delete(this, 0x2028);
         return;
      }
   }
   operator_delete(this, 0x2028);
   return;
}/* HashMap<String, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant::Type> > >::~HashMap() */void HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>::~HashMap(HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>> *this) {
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
      } else {
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
         } while ( lVar4 != (ulong)uVar2 << 2 );
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
}/* SortArray<List<Variant, DefaultAllocator>::Element*, List<Variant,
   DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>, true>::partitioner(long, long,
   List<Variant, DefaultAllocator>::Element*, List<Variant, DefaultAllocator>::Element**) const
   [clone .isra.0] */long SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>::partitioner(long param_1, long param_2, Element *param_3, Element **param_4) {
   long *plVar1;
   int iVar2;
   Element *pEVar3;
   long lVar4;
   char cVar5;
   long lVar6;
   long lVar7;
   Element **ppEVar8;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = param_2;
   lVar7 = param_1;
   do {
      iVar2 = *(int*)param_4[lVar7];
      if (( ( iVar2 == 4 ) || ( iVar2 == 0x15 ) ) && ( ( *(int*)param_3 == 4 || ( *(int*)param_3 == 0x15 ) ) )) {
         ::Variant::operator_cast_to_String((Variant*)&local_50);
         ::Variant::operator_cast_to_String((Variant*)&local_48);
         cVar5 = String::operator <((String*)&local_48, (String*)&local_50);
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
         lVar4 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar1 = (long*)( local_50 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }
         }
      } else {
         cVar5 = ::Variant::operator <((Variant*)param_4[lVar7], (Variant*)param_3);
      }
      if (cVar5 == '\0') {
         LAB_0011262d:lVar6 = lVar6 + -1;
         ppEVar8 = param_4 + lVar6;
         while (true) {
            if (( ( *(int*)param_3 == 4 ) || ( *(int*)param_3 == 0x15 ) ) && ( ( iVar2 = *(int*)*ppEVar8 ),iVar2 == 4 || ( iVar2 == 0x15 ) )) {
               ::Variant::operator_cast_to_String((Variant*)&local_50);
               ::Variant::operator_cast_to_String((Variant*)&local_48);
               cVar5 = String::operator <((String*)&local_48, (String*)&local_50);
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
               lVar4 = local_50;
               if (local_50 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_50 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_50 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
            } else {
               cVar5 = ::Variant::operator <((Variant*)param_3, (Variant*)*ppEVar8);
            }
            if (cVar5 == '\0') goto joined_r0x00112795;
            if (lVar6 == param_1) break;
            lVar6 = lVar6 + -1;
            ppEVar8 = ppEVar8 + -1;
         };
         _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
         joined_r0x00112795:if (lVar6 <= lVar7) {
            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }
            return lVar7;
         }
         pEVar3 = param_4[lVar7];
         param_4[lVar7] = *ppEVar8;
         *ppEVar8 = pEVar3;
      } else if (param_2 + -1 == lVar7) {
         _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
         goto LAB_0011262d;
      }
      lVar7 = lVar7 + 1;
   } while ( true );
}/* SortArray<List<Variant, DefaultAllocator>::Element*, List<Variant,
   DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>, true>::adjust_heap(long, long,
   long, List<Variant, DefaultAllocator>::Element*, List<Variant, DefaultAllocator>::Element**)
   const [clone .isra.0] */void SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>::adjust_heap(long param_1, long param_2, long param_3, Element *param_4, Element **param_5) {
   long *plVar1;
   int iVar2;
   Variant *pVVar3;
   Variant *this;
   char cVar4;
   long lVar5;
   Element **ppEVar6;
   Element **ppEVar7;
   long lVar8;
   long lVar9;
   long in_FS_OFFSET;
   long local_80;
   long local_50;
   long local_48;
   long local_40;
   lVar8 = param_2 * 2 + 2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar8 < param_3) {
      local_80 = param_2;
      do {
         pVVar3 = (Variant*)param_5[lVar8 + -1 + param_1];
         this(Variant * param_5[param_1 + lVar8]);
         iVar2 = *(int*)this;
         if (( ( iVar2 == 4 ) || ( iVar2 == 0x15 ) ) && ( ( iVar2 = *(int*)pVVar3 ),iVar2 == 4 || ( iVar2 == 0x15 ) )) {
            ::Variant::operator_cast_to_String((Variant*)&local_50);
            ::Variant::operator_cast_to_String((Variant*)&local_48);
            cVar4 = String::operator <((String*)&local_48, (String*)&local_50);
            lVar5 = local_48;
            if (local_48 != 0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }
            }
            lVar5 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar1 = (long*)( local_50 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }
            }
         } else {
            cVar4 = ::Variant::operator <(this, pVVar3);
         }
         lVar5 = lVar8 + -1;
         ppEVar7 = param_5 + lVar8 + -1 + param_1;
         lVar9 = lVar8;
         if (cVar4 == '\0') {
            lVar9 = lVar8 + 1;
            lVar5 = lVar8;
            ppEVar7 = param_5 + param_1 + lVar8;
         }
         lVar8 = lVar9 * 2;
         param_5[local_80 + param_1] = *ppEVar7;
         local_80 = lVar5;
      } while ( lVar8 < param_3 );
      ppEVar6 = ppEVar7;
      if (lVar8 == param_3) goto LAB_00112ba0;
   } else {
      ppEVar7 = param_5 + param_2 + param_1;
      if (lVar8 != param_3) goto LAB_00112b50;
      LAB_00112ba0:lVar5 = lVar8 + -1;
      ppEVar6 = param_5 + param_1 + lVar5;
      *ppEVar7 = *ppEVar6;
   }
   lVar8 = ( lVar5 + -1 ) - ( lVar5 + -1 >> 0x3f );
   ppEVar7 = ppEVar6;
   if (param_2 < lVar5) {
      do {
         lVar9 = lVar8 >> 1;
         ppEVar6 = param_5 + param_1 + lVar9;
         iVar2 = *(int*)*ppEVar6;
         if (( ( iVar2 == 4 ) || ( iVar2 == 0x15 ) ) && ( ( *(int*)param_4 == 4 || ( *(int*)param_4 == 0x15 ) ) )) {
            ::Variant::operator_cast_to_String((Variant*)&local_48);
            ::Variant::operator_cast_to_String((Variant*)&local_50);
            cVar4 = String::operator <((String*)&local_50, (String*)&local_48);
            lVar8 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar1 = (long*)( local_50 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }
            }
            lVar8 = local_48;
            if (local_48 != 0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }
            }
         } else {
            cVar4 = ::Variant::operator <((Variant*)*ppEVar6, (Variant*)param_4);
         }
         ppEVar7 = param_5 + lVar5 + param_1;
         if (cVar4 == '\0') break;
         param_5[lVar5 + param_1] = *ppEVar6;
         lVar8 = ( lVar9 + -1 ) - ( lVar9 + -1 >> 0x3f );
         lVar5 = lVar9;
         ppEVar7 = ppEVar6;
      } while ( param_2 < lVar9 );
   }
   LAB_00112b50:*ppEVar7 = param_4;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* SortArray<List<Variant, DefaultAllocator>::Element*, List<Variant,
   DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>, true>::partial_sort(long, long,
   long, List<Variant, DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>::partial_sort(long param_1, long param_2, long param_3, Element **param_4) {
   long *plVar1;
   int iVar2;
   Variant *pVVar3;
   Element *pEVar4;
   bool bVar5;
   long lVar6;
   char cVar7;
   Element **ppEVar8;
   long lVar9;
   long lVar10;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   lVar10 = param_3 - param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar10 < 2) {
      if (param_2 <= param_3) goto LAB_00112d23;
      LAB_00112c59:lVar9 = param_3;
      do {
         while (true) {
            pVVar3 = (Variant*)param_4[param_1];
            iVar2 = *(int*)param_4[lVar9];
            if (( ( iVar2 == 4 ) || ( iVar2 == 0x15 ) ) && ( ( iVar2 = *(int*)pVVar3 ),iVar2 == 4 || ( iVar2 == 0x15 ) )) {
               ::Variant::operator_cast_to_String((Variant*)&local_50);
               ::Variant::operator_cast_to_String((Variant*)&local_48);
               cVar7 = String::operator <((String*)&local_48, (String*)&local_50);
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
               lVar6 = local_50;
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
            } else {
               cVar7 = ::Variant::operator <((Variant*)param_4[lVar9], pVVar3);
            }
            if (cVar7 == '\0') break;
            pEVar4 = param_4[lVar9];
            param_4[lVar9] = param_4[param_1];
            lVar9 = lVar9 + 1;
            adjust_heap(param_1, 0, lVar10, pEVar4, param_4);
            if (lVar9 == param_2) goto LAB_00112cdb;
         };
         lVar9 = lVar9 + 1;
      } while ( lVar9 != param_2 );
      LAB_00112cdb:if (lVar10 < 2) goto LAB_00112d23;
   } else {
      for (lVar9 = lVar10 + -2 >> 1; adjust_heap(param_1, lVar9, lVar10, param_4[param_1 + lVar9], param_4),lVar9 != 0; lVar9 = lVar9 + -1) {}
      if (param_3 < param_2) goto LAB_00112c59;
   }
   ppEVar8 = param_4 + param_1;
   lVar10 = ( param_3 + -1 ) - param_1;
   do {
      pEVar4 = ppEVar8[lVar10];
      ppEVar8[lVar10] = *ppEVar8;
      adjust_heap(param_1, 0, lVar10, pEVar4, param_4);
      bVar5 = 1 < lVar10;
      lVar10 = lVar10 + -1;
   } while ( bVar5 );
   LAB_00112d23:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* SortArray<List<Variant, DefaultAllocator>::Element*, List<Variant,
   DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>, true>::median_of_3(List<Variant,
   DefaultAllocator>::Element* const&, List<Variant, DefaultAllocator>::Element* const&,
   List<Variant, DefaultAllocator>::Element* const&) const [clone .isra.0] */Element **SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator < StringLikeVariantOrder>int iVar2Variant *pVVar3long lVar4char cVar5Element **ppEVar6long in_FS_OFFSETlong local_50long local_48long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );iVar2 = *(int*)*param_1;if (( ( iVar2 == 4 ) || ( iVar2 == 0x15 ) ) && ( ( iVar2 = *(int*)*param_2 ),iVar2 == 4 || ( iVar2 == 0x15 ) )) {
   ::Variant::operator_cast_to_String((Variant*)&local_50);
   ::Variant::operator_cast_to_String((Variant*)&local_48);
   cVar5 = String::operator <((String*)&local_48, (String*)&local_50);
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
   lVar4 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }
   }
} else {
   cVar5 = ::Variant::operator <((Variant*)*param_1, (Variant*)*param_2);
}pVVar3 = (Variant*)*param_3;if (cVar5 == '\0') {
   iVar2 = *(int*)*param_1;
   if (( ( iVar2 == 4 ) || ( iVar2 == 0x15 ) ) && ( ( *(int*)pVVar3 == 4 || ( *(int*)pVVar3 == 0x15 ) ) )) {
      ::Variant::operator_cast_to_String((Variant*)&local_50);
      ::Variant::operator_cast_to_String((Variant*)&local_48);
      cVar5 = String::operator <((String*)&local_48, (String*)&local_50);
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
      lVar4 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }
      }
   } else {
      cVar5 = ::Variant::operator <((Variant*)*param_1, pVVar3);
   }
   ppEVar6 = param_1;
   if (cVar5 != '\0') goto LAB_00112eff;
   iVar2 = *(int*)*param_2;
   if (( ( iVar2 == 4 ) || ( iVar2 == 0x15 ) ) && ( ( iVar2 = *(int*)*param_3 ),iVar2 == 4 || ( iVar2 == 0x15 ) )) {
      ::Variant::operator_cast_to_String((Variant*)&local_50);
      ::Variant::operator_cast_to_String((Variant*)&local_48);
      cVar5 = String::operator <((String*)&local_48, (String*)&local_50);
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
      lVar4 = local_50;
      ppEVar6 = param_2;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }
      }
   } else {
      cVar5 = ::Variant::operator <((Variant*)*param_2, (Variant*)*param_3);
      ppEVar6 = param_2;
   }
} else {
   iVar2 = *(int*)*param_2;
   if (( ( iVar2 == 4 ) || ( iVar2 == 0x15 ) ) && ( ( *(int*)pVVar3 == 4 || ( *(int*)pVVar3 == 0x15 ) ) )) {
      ::Variant::operator_cast_to_String((Variant*)&local_50);
      ::Variant::operator_cast_to_String((Variant*)&local_48);
      cVar5 = String::operator <((String*)&local_48, (String*)&local_50);
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
      lVar4 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }
      }
   } else {
      cVar5 = ::Variant::operator <((Variant*)*param_2, pVVar3);
   }
   ppEVar6 = param_2;
   if (cVar5 != '\0') goto LAB_00112eff;
   iVar2 = *(int*)*param_1;
   if (( ( iVar2 == 4 ) || ( iVar2 == 0x15 ) ) && ( ( iVar2 = *(int*)*param_3 ),iVar2 == 4 || ( iVar2 == 0x15 ) )) {
      ::Variant::operator_cast_to_String((Variant*)&local_50);
      ::Variant::operator_cast_to_String((Variant*)&local_48);
      cVar5 = String::operator <((String*)&local_48, (String*)&local_50);
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
      lVar4 = local_50;
      ppEVar6 = param_1;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }
      }
   } else {
      cVar5 = ::Variant::operator <((Variant*)*param_1, (Variant*)*param_3);
      ppEVar6 = param_1;
   }
}if (cVar5 != '\0') {
   ppEVar6 = param_3;
}LAB_00112eff:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return ppEVar6;}/* SortArray<List<Variant, DefaultAllocator>::Element*, List<Variant,
   DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>, true>::introsort(long, long,
   List<Variant, DefaultAllocator>::Element**, long) const [clone .isra.0] */void SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>::introsort(long param_1, long param_2, Element **param_3, long param_4) {
   long lVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   long local_118;
   long local_110;
   long local_108;
   long local_f8;
   lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      return;
   }
   if (param_4 == 0) {
      LAB_00113bd3:partial_sort(param_1, param_2, param_2, param_3);
      return;
   }
   lVar11 = param_2 * 8;
   lVar3 = param_2;
   LAB_00113323:param_4 = param_4 + -1;
   puVar2 = (undefined8*)median_of_3(param_3 + param_1, param_3 + ( lVar1 >> 1 ) + param_1, (Element**)( (long)param_3 + lVar11 + -8 ));
   param_2 = partitioner(param_1, lVar3, (Element*)*puVar2, param_3);
   lVar1 = lVar3 - param_2;
   if (0x10 < lVar1) {
      if (param_4 != 0) {
         lVar11 = param_4;
         lVar4 = lVar3;
         LAB_001133ac:do {
            lVar11 = lVar11 + -1;
            puVar2 = (undefined8*)median_of_3(param_3 + param_2, param_3 + ( lVar1 >> 1 ) + param_2, param_3 + lVar4 + -1);
            lVar3 = partitioner(param_2, lVar4, (Element*)*puVar2, param_3);
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) {
               if (lVar11 != 0) {
                  local_118 = lVar4;
                  lVar15 = lVar11;
                  LAB_00113444:lVar15 = lVar15 + -1;
                  puVar2 = (undefined8*)median_of_3(param_3 + lVar3, param_3 + ( lVar1 >> 1 ) + lVar3, param_3 + local_118 + -1);
                  lVar4 = partitioner(lVar3, local_118, (Element*)*puVar2, param_3);
                  lVar1 = local_118 - lVar4;
                  if (0x10 < lVar1) goto code_r0x00113490;
                  LAB_00113926:lVar1 = lVar4 - lVar3;
                  if (0x10 < lVar1) goto LAB_00113936;
                  goto LAB_00113ad3;
               }
               LAB_00113b48:partial_sort(lVar3, lVar4, lVar4, param_3);
            }
            LAB_00113a5f:lVar1 = lVar3 - param_2;
            if (lVar1 < 0x11) goto joined_r0x00113b11;
            lVar4 = lVar3;
            if (lVar11 == 0) break;
         } while ( true );
      }
      partial_sort(param_2, lVar3, lVar3, param_3);
   }
   lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      return;
   }
   if (param_4 != 0) goto LAB_00113bac;
   goto LAB_00113bd3;
   code_r0x00113490:if (lVar15 != 0) {
      lVar13 = lVar15;
      lVar6 = local_118;
      LAB_001134cc:do {
         lVar13 = lVar13 + -1;
         puVar2 = (undefined8*)median_of_3(param_3 + lVar4, param_3 + ( lVar1 >> 1 ) + lVar4, param_3 + lVar6 + -1);
         lVar5 = partitioner(lVar4, lVar6, (Element*)*puVar2, param_3);
         lVar1 = lVar6 - lVar5;
         if (0x10 < lVar1) {
            if (lVar13 != 0) {
               lVar7 = lVar6;
               local_f8 = lVar13;
               LAB_00113552:do {
                  local_f8 = local_f8 + -1;
                  puVar2 = (undefined8*)median_of_3(param_3 + lVar5, param_3 + ( lVar1 >> 1 ) + lVar5, param_3 + lVar7 + -1);
                  lVar6 = partitioner(lVar5, lVar7, (Element*)*puVar2, param_3);
                  lVar1 = lVar7 - lVar6;
                  if (0x10 < lVar1) {
                     if (local_f8 != 0) {
                        lVar8 = lVar7;
                        local_110 = local_f8;
                        LAB_001135d3:do {
                           local_110 = local_110 + -1;
                           puVar2 = (undefined8*)median_of_3(param_3 + lVar6, param_3 + ( lVar1 >> 1 ) + lVar6, param_3 + lVar8 + -1);
                           lVar7 = partitioner(lVar6, lVar8, (Element*)*puVar2, param_3);
                           lVar1 = lVar8 - lVar7;
                           if (0x10 < lVar1) {
                              if (local_110 != 0) {
                                 lVar9 = lVar8;
                                 local_118 = local_110;
                                 LAB_00113651:do {
                                    local_118 = local_118 + -1;
                                    puVar2 = (undefined8*)median_of_3(param_3 + lVar7, param_3 + ( lVar1 >> 1 ) + lVar7, param_3 + lVar9 + -1);
                                    lVar8 = partitioner(lVar7, lVar9, (Element*)*puVar2, param_3);
                                    lVar1 = lVar9 - lVar8;
                                    if (0x10 < lVar1) {
                                       if (local_118 != 0) {
                                          lVar10 = lVar9;
                                          local_108 = local_118;
                                          LAB_001136c7:do {
                                             local_108 = local_108 + -1;
                                             puVar2 = (undefined8*)median_of_3(param_3 + lVar8, param_3 + ( lVar1 >> 1 ) + lVar8, param_3 + lVar10 + -1);
                                             lVar9 = partitioner(lVar8, lVar10, (Element*)*puVar2, param_3);
                                             lVar1 = lVar10 - lVar9;
                                             if (0x10 < lVar1) {
                                                if (local_108 != 0) {
                                                   lVar12 = local_108;
                                                   lVar14 = lVar10;
                                                   do {
                                                      lVar12 = lVar12 + -1;
                                                      puVar2 = (undefined8*)median_of_3(param_3 + lVar9, param_3 + ( lVar1 >> 1 ) + lVar9, param_3 + lVar14 + -1);
                                                      lVar10 = partitioner(lVar9, lVar14, (Element*)*puVar2, param_3);
                                                      introsort(lVar10, lVar14, param_3, lVar12);
                                                      lVar1 = lVar10 - lVar9;
                                                      if (lVar1 < 0x11) {
                                                         lVar1 = lVar9 - lVar8;
                                                         lVar10 = lVar9;
                                                         if (lVar1 < 0x11) goto LAB_0011385c;
                                                         goto LAB_001136c7;
                                                      }
                                                      lVar14 = lVar10;
                                                   } while ( lVar12 != 0 );
                                                }
                                                partial_sort(lVar9, lVar10, lVar10, param_3);
                                             }
                                             lVar1 = lVar9 - lVar8;
                                             if (lVar1 < 0x11) {
                                                lVar1 = lVar8 - lVar7;
                                                lVar9 = lVar8;
                                                if (lVar1 < 0x11) goto joined_r0x00113970;
                                                goto LAB_00113651;
                                             }
                                             lVar10 = lVar9;
                                          } while ( local_108 != 0 );
                                       }
                                       partial_sort(lVar8, lVar9, lVar9, param_3);
                                    }
                                    LAB_0011385c:lVar1 = lVar8 - lVar7;
                                    if (lVar1 < 0x11) {
                                       lVar1 = lVar7 - lVar6;
                                       lVar8 = lVar7;
                                       if (lVar1 < 0x11) goto joined_r0x001138eb;
                                       goto LAB_001135d3;
                                    }
                                    lVar9 = lVar8;
                                 } while ( local_118 != 0 );
                              }
                              partial_sort(lVar7, lVar8, lVar8, param_3);
                           }
                           joined_r0x00113970:lVar1 = lVar7 - lVar6;
                           if (lVar1 < 0x11) {
                              lVar1 = lVar6 - lVar5;
                              lVar7 = lVar6;
                              if (lVar1 < 0x11) goto joined_r0x001139b0;
                              goto LAB_00113552;
                           }
                           lVar8 = lVar7;
                        } while ( local_110 != 0 );
                     }
                     partial_sort(lVar6, lVar7, lVar7, param_3);
                  }
                  joined_r0x001138eb:lVar1 = lVar6 - lVar5;
                  if (lVar1 < 0x11) {
                     lVar1 = lVar5 - lVar4;
                     lVar6 = lVar5;
                     if (lVar1 < 0x11) goto LAB_00113926;
                     goto LAB_001134cc;
                  }
                  lVar7 = lVar6;
               } while ( local_f8 != 0 );
            }
            partial_sort(lVar5, lVar6, lVar6, param_3);
         }
         joined_r0x001139b0:lVar1 = lVar5 - lVar4;
         if (lVar1 < 0x11) {
            lVar1 = lVar4 - lVar3;
            local_118 = lVar4;
            if (lVar1 < 0x11) goto LAB_00113a5f;
            goto LAB_00113444;
         }
         lVar6 = lVar5;
         local_118 = lVar5;
      } while ( lVar13 != 0 );
   }
   partial_sort(lVar4, local_118, local_118, param_3);
   lVar1 = lVar4 - lVar3;
   if (lVar1 < 0x11) {
      LAB_00113ad3:lVar1 = lVar3 - param_2;
      lVar4 = lVar3;
      if (0x10 < lVar1) goto LAB_001133ac;
      goto joined_r0x00113b11;
   }
   LAB_00113936:local_118 = lVar4;
   if (lVar15 == 0) goto LAB_00113b48;
   goto LAB_00113444;
   joined_r0x00113b11:lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      return;
   }
   LAB_00113bac:lVar11 = param_2 * 8;
   lVar3 = param_2;
   goto LAB_00113323;
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
         ::Variant::_clear_internal();
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
}/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
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
      } else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
      plVar5 = *(long**)this;
   } while ( (int)plVar5[2] != 0 );
   Memory::free_static(plVar5, false);
   return;
}/* StringBuffer<64>::as_string() */void StringBuffer<64>::as_string(void) {
   int *piVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   int *in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)( in_RSI + 0x40 );
   if (lVar4 == 0) {
      in_RSI[in_RSI[0x42]] = 0;
   } else {
      if (*(uint*)( lVar4 + -8 ) < 2) {
         in_RSI[in_RSI[0x42]] = 0;
      } else {
         CowData<char32_t>::_copy_on_write((CowData<char32_t>*)( in_RSI + 0x40 ));
         lVar4 = *(long*)( in_RSI + 0x40 );
         *(undefined4*)( lVar4 + (long)in_RSI[0x42] * 4 ) = 0;
         if (lVar4 == 0) goto LAB_00113f20;
      }
      iVar3 = (int)*(undefined8*)( lVar4 + -8 );
      if (( iVar3 != 0 ) && ( iVar3 != 1 )) {
         CowData<char32_t>::resize<false>((CowData<char32_t>*)( in_RSI + 0x40 ), (long)( in_RSI[0x42] + 1 ));
         *(undefined8*)in_RDI = 0;
         if (*(long*)( in_RSI + 0x40 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( in_RSI + 0x40 ));
         }
         goto LAB_00113f5e;
      }
   }
   LAB_00113f20:iVar3 = *in_RSI;
   *(undefined8*)in_RDI = 0;
   while (iVar3 != 0) {
      piVar1 = in_RSI + 1;
      in_RSI = in_RSI + 1;
      iVar3 = *piVar1;
   };
   String::parse_utf32(in_RDI);
   LAB_00113f5e:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Removing unreachable block (ram,0x001141a8) *//* WARNING: Removing unreachable block (ram,0x001142d8) *//* WARNING: Removing unreachable block (ram,0x001144a0) *//* WARNING: Removing unreachable block (ram,0x001142e4) *//* WARNING: Removing unreachable block (ram,0x001142ee) *//* WARNING: Removing unreachable block (ram,0x00114480) *//* WARNING: Removing unreachable block (ram,0x001142fa) *//* WARNING: Removing unreachable block (ram,0x00114304) *//* WARNING: Removing unreachable block (ram,0x00114460) *//* WARNING: Removing unreachable block (ram,0x00114310) *//* WARNING: Removing unreachable block (ram,0x0011431a) *//* WARNING: Removing unreachable block (ram,0x00114440) *//* WARNING: Removing unreachable block (ram,0x00114326) *//* WARNING: Removing unreachable block (ram,0x00114330) *//* WARNING: Removing unreachable block (ram,0x00114420) *//* WARNING: Removing unreachable block (ram,0x0011433c) *//* WARNING: Removing unreachable block (ram,0x00114346) *//* WARNING: Removing unreachable block (ram,0x00114400) *//* WARNING: Removing unreachable block (ram,0x00114352) *//* WARNING: Removing unreachable block (ram,0x0011435c) *//* WARNING: Removing unreachable block (ram,0x001143e0) *//* WARNING: Removing unreachable block (ram,0x00114364) *//* WARNING: Removing unreachable block (ram,0x0011437a) *//* WARNING: Removing unreachable block (ram,0x00114386) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   } else {
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
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant::Type> > >::operator[](StringName
   const&) */undefined8 * __thiscallHashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>::operator [](HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined8 *puVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]uint uVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined8 *puVar42long lVar43void *pvVar44ulong uVar45int iVar46long lVar47long lVar48long lVar49ulong uVar50undefined8 uVar51uint uVar52uint uVar53uint uVar54undefined8 *puVar55long in_FS_OFFSETbool bVar56long local_58undefined4 local_50long local_40lVar43 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);if (lVar43 == 0) {
   LAB_00114bd8:uVar45 = uVar40 * 4;
   uVar50 = uVar40 * 8;
   uVar41 = Memory::alloc_static(uVar45, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   pvVar44 = (void*)Memory::alloc_static(uVar50, false);
   *(void**)( this + 8 ) = pvVar44;
   if ((int)uVar40 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar44 + uVar50 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar45 ) )) {
         uVar45 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar45 * 4 ) = 0;
            *(undefined8*)( (long)pvVar44 + uVar45 * 8 ) = 0;
            uVar45 = uVar45 + 1;
         } while ( uVar40 != uVar45 );
         goto LAB_00114a88;
      }
      memset(pvVar3, 0, uVar45);
      memset(pvVar44, 0, uVar50);
      iVar46 = *(int*)( this + 0x2c );
      LAB_00114a8c:if (iVar46 != 0) {
         LAB_00114a94:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar45 = CONCAT44(0, uVar38);
         lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar39 = StringName::get_empty_hash();
         } else {
            uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
         }
         if (uVar39 == 0) {
            uVar39 = 1;
         }
         uVar54 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar39 * lVar43;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar45;
         lVar49 = SUB168(auVar17 * auVar33, 8);
         uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
         uVar53 = SUB164(auVar17 * auVar33, 8);
         if (uVar52 != 0) {
            do {
               if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  puVar42 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
                  *(undefined4*)( puVar42 + 3 ) = 0;
                  goto LAB_0011468c;
               }
               uVar54 = uVar54 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar53 + 1) * lVar43;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar45;
               lVar49 = SUB168(auVar18 * auVar34, 8);
               uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
               uVar53 = SUB164(auVar18 * auVar34, 8);
            } while ( ( uVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar52 * lVar43,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar53 ) - SUB164(auVar19 * auVar35, 8)) * lVar43,auVar36._8_8_ = 0,auVar36._0_8_ = uVar45,uVar54 <= SUB164(auVar20 * auVar36, 8) );
         }
         iVar46 = *(int*)( this + 0x2c );
      }
      goto LAB_001146c3;
   }
   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_001146c3;
   if (iVar46 != 0) goto LAB_00114a94;
   LAB_001146e9:uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      puVar42 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0011468c;
   }
   uVar40 = ( ulong )(uVar38 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
   if (uVar38 + 1 < 2) {
      uVar40 = 2;
   }
   uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar50 = (ulong)uVar38;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar44 = *(void**)( this + 8 );
   uVar40 = uVar50 * 4;
   uVar45 = uVar50 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar45, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar38 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         } while ( uVar40 != uVar50 );
      } else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar45);
      }
   }
   if (uVar39 != 0) {
      uVar40 = 0;
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar38 != 0) {
            lVar43 = *(long*)( this + 0x10 );
            uVar54 = 0;
            uVar52 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar45 = CONCAT44(0, uVar52);
            lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar38 * lVar49;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar45;
            lVar47 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar43 + lVar47 * 4 );
            iVar46 = SUB164(auVar9 * auVar25, 8);
            uVar53 = *puVar1;
            uVar41 = *(undefined8*)( (long)pvVar44 + uVar40 * 8 );
            while (uVar53 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar53 * lVar49;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar45;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar52 + iVar46 ) - SUB164(auVar10 * auVar26, 8)) * lVar49;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar45;
               uVar37 = SUB164(auVar11 * auVar27, 8);
               uVar51 = uVar41;
               if (uVar37 < uVar54) {
                  *puVar1 = uVar38;
                  puVar42 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar51 = *puVar42;
                  *puVar42 = uVar41;
                  uVar38 = uVar53;
                  uVar54 = uVar37;
               }
               uVar54 = uVar54 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar45;
               lVar47 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar43 + lVar47 * 4 );
               iVar46 = SUB164(auVar12 * auVar28, 8);
               uVar41 = uVar51;
               uVar53 = *puVar1;
            };
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
            *puVar1 = uVar38;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }
         uVar40 = uVar40 + 1;
      } while ( uVar39 != uVar40 );
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar3, false);
   }
} else {
   iVar46 = *(int*)( this + 0x2c );
   if (iVar46 != 0) {
      lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar39 = StringName::get_empty_hash();
         lVar43 = *(long*)( this + 8 );
      } else {
         uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
      }
      if (uVar39 == 0) {
         uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21, 8);
      uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
      uVar53 = SUB164(auVar5 * auVar21, 8);
      if (uVar52 != 0) {
         uVar54 = 0;
         do {
            if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( lVar43 + lVar47 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar42 = *(undefined8**)( lVar43 + (ulong)uVar53 * 8 );
               goto LAB_0011468c;
            }
            uVar54 = uVar54 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar49;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar40;
            lVar47 = SUB168(auVar6 * auVar22, 8);
            uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
            uVar53 = SUB164(auVar6 * auVar22, 8);
         } while ( ( uVar52 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar52 * lVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar38 ) - SUB164(auVar7 * auVar23, 8)) * lVar49,auVar24._8_8_ = 0,auVar24._0_8_ = uVar40,uVar54 <= SUB164(auVar8 * auVar24, 8) );
      }
      uVar40 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar43 == 0) goto LAB_00114bd8;
      LAB_00114a88:iVar46 = *(int*)( this + 0x2c );
      goto LAB_00114a8c;
   }
   LAB_001146c3:if ((float)uVar40 * __LC53 < (float)( iVar46 + 1 )) goto LAB_001146e9;
}StringName::StringName((StringName*)&local_58, param_1);local_50 = 0;puVar42 = (undefined8*)operator_new(0x20, "");*puVar42 = 0;puVar42[1] = 0;StringName::StringName((StringName*)( puVar42 + 2 ), (StringName*)&local_58);bVar56 = StringName::configured != '\0';*(undefined4*)( puVar42 + 3 ) = local_50;if (( bVar56 ) && ( local_58 != 0 )) {
   StringName::unref();
}puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar42;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 == 0) goto LAB_00114b9d;
   LAB_00114974:uVar38 = *(uint*)( lVar43 + 0x20 );
} else {
   *puVar4 = puVar42;
   puVar42[1] = puVar4;
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 != 0) goto LAB_00114974;
   LAB_00114b9d:uVar38 = StringName::get_empty_hash();
}if (uVar38 == 0) {
   uVar38 = 1;
}uVar40 = (ulong)uVar38;lVar43 = *(long*)( this + 0x10 );uVar53 = 0;lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar45 = CONCAT44(0, uVar39);auVar13._8_8_ = 0;auVar13._0_8_ = uVar40 * lVar49;auVar29._8_8_ = 0;auVar29._0_8_ = uVar45;lVar48 = SUB168(auVar13 * auVar29, 8);lVar47 = *(long*)( this + 8 );puVar1 = (uint*)( lVar43 + lVar48 * 4 );iVar46 = SUB164(auVar13 * auVar29, 8);uVar52 = *puVar1;puVar4 = puVar42;while (uVar52 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar52 * lVar49;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar45;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar39 + iVar46 ) - SUB164(auVar14 * auVar30, 8)) * lVar49;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar45;
   uVar38 = SUB164(auVar15 * auVar31, 8);
   puVar55 = puVar4;
   if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8*)( lVar47 + lVar48 * 8 );
      puVar55 = (undefined8*)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
   }
   uVar38 = (uint)uVar40;
   uVar53 = uVar53 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar45;
   lVar48 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar43 + lVar48 * 4 );
   iVar46 = SUB164(auVar16 * auVar32, 8);
   puVar4 = puVar55;
   uVar52 = *puVar1;
};*(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0011468c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar42 + 3;
}/* WARNING: Subroutine does not return */__stack_chk_fail();}/* HashMap<StringName, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant::Type> > >::get(StringName const&) */long HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>::get(HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>> *this, StringName *param_1) {
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
   code *pcVar11;
   uint uVar12;
   uint uVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   if (( *(long*)( this + 8 ) != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar17 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar12 = StringName::get_empty_hash();
      } else {
         uVar12 = *(uint*)( *(long*)param_1 + 0x20 );
      }
      if (uVar12 == 0) {
         uVar12 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar12 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar15 = *(uint*)( *(long*)( this + 0x10 ) + lVar14 * 4 );
      uVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar15 != 0) {
         uVar16 = 0;
         do {
            if (( uVar12 == uVar15 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar14 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               return *(long*)( *(long*)( this + 8 ) + (ulong)uVar13 * 8 ) + 0x18;
            }
            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar15 = *(uint*)( *(long*)( this + 0x10 ) + lVar14 * 4 );
            uVar13 = SUB164(auVar4 * auVar8, 8);
         } while ( ( uVar15 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   _err_print_error(&_LC62, "./core/templates/hash_map.h", 0x140, "FATAL: Condition \"!exists\" is true.", "HashMap key not found.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar11 = (code*)invalidInstructionException();
   ( *pcVar11 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant::Type> > >::operator[](String const&) */undefined1 * __thiscallHashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>::operator [](HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>> * this, String * param_1) * plVar1 ;void *pvVar2void *__slong lVar3undefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]char cVar36uint uVar37uint uVar38ulong uVar39undefined8 uVar40void *__s_00undefined1(*pauVar41)[16];undefined8 *puVar42void *pvVar43ulong uVar44int iVar45long lVar46long lVar47ulong uVar48undefined8 uVar49uint *puVar50uint uVar51uint uVar52long lVar53uint uVar54uint uVar55undefined1(*pauVar56)[16];undefined1(*pauVar57)[16];long in_FS_OFFSETlong local_58undefined4 local_50long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (*(long*)( this + 8 ) == 0) {
   LAB_00115538:uVar39 = (ulong)uVar55;
   uVar44 = uVar39 * 4;
   uVar48 = uVar39 * 8;
   uVar40 = Memory::alloc_static(uVar44, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   pvVar43 = (void*)Memory::alloc_static(uVar48, false);
   *(void**)( this + 8 ) = pvVar43;
   if (uVar55 != 0) {
      pvVar2 = *(void**)( this + 0x10 );
      if (( pvVar2 < (void*)( (long)pvVar43 + uVar48 ) ) && ( pvVar43 < (void*)( (long)pvVar2 + uVar44 ) )) {
         uVar44 = 0;
         do {
            *(undefined4*)( (long)pvVar2 + uVar44 * 4 ) = 0;
            *(undefined8*)( (long)pvVar43 + uVar44 * 8 ) = 0;
            uVar44 = uVar44 + 1;
         } while ( uVar39 != uVar44 );
         goto LAB_001153ca;
      }
      memset(pvVar2, 0, uVar44);
      memset(pvVar43, 0, uVar48);
      iVar45 = *(int*)( this + 0x2c );
      LAB_001153ce:if (iVar45 != 0) {
         LAB_001153d6:uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar52 = String::hash();
         uVar39 = CONCAT44(0, uVar37);
         lVar53 = *(long*)( this + 0x10 );
         uVar38 = 1;
         if (uVar52 != 0) {
            uVar38 = uVar52;
         }
         uVar54 = 0;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = (ulong)uVar38 * lVar3;
         auVar32._8_8_ = 0;
         auVar32._0_8_ = uVar39;
         lVar46 = SUB168(auVar16 * auVar32, 8);
         uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
         uVar51 = SUB164(auVar16 * auVar32, 8);
         if (uVar52 != 0) {
            do {
               if (uVar38 == uVar52) {
                  cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                  if (cVar36 != '\0') {
                     pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                     *(undefined4*)( pauVar41[1] + 8 ) = 0;
                     goto LAB_00115283;
                  }
                  lVar53 = *(long*)( this + 0x10 );
               }
               uVar54 = uVar54 + 1;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( ulong )(uVar51 + 1) * lVar3;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar39;
               lVar46 = SUB168(auVar17 * auVar33, 8);
               uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
               uVar51 = SUB164(auVar17 * auVar33, 8);
            } while ( ( uVar52 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar52 * lVar3,auVar34._8_8_ = 0,auVar34._0_8_ = uVar39,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar37 + uVar51 ) - SUB164(auVar18 * auVar34, 8)) * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar39,uVar54 <= SUB164(auVar19 * auVar35, 8) );
         }
         iVar45 = *(int*)( this + 0x2c );
      }
      uVar39 = (ulong)uVar55;
      goto LAB_00114ec4;
   }
   iVar45 = *(int*)( this + 0x2c );
   if (pvVar43 == (void*)0x0) goto LAB_00114ec4;
   if (iVar45 != 0) goto LAB_001153d6;
   LAB_00114eea:uVar55 = *(uint*)( this + 0x28 );
   if (uVar55 == 0x1c) {
      pauVar41 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00115283;
   }
   uVar39 = ( ulong )(uVar55 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar37 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
   if (uVar55 + 1 < 2) {
      uVar39 = 2;
   }
   uVar55 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
   uVar48 = (ulong)uVar55;
   *(int*)( this + 0x28 ) = (int)uVar39;
   pvVar43 = *(void**)( this + 8 );
   uVar39 = uVar48 * 4;
   uVar44 = uVar48 * 8;
   pvVar2 = *(void**)( this + 0x10 );
   uVar40 = Memory::alloc_static(uVar39, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   __s_00 = (void*)Memory::alloc_static(uVar44, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar55 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar44 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
         uVar39 = 0;
         do {
            *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
            uVar39 = uVar39 + 1;
         } while ( uVar39 != uVar48 );
      } else {
         memset(__s, 0, uVar39);
         memset(__s_00, 0, uVar44);
      }
   }
   if (uVar37 != 0) {
      uVar39 = 0;
      do {
         uVar55 = *(uint*)( (long)pvVar2 + uVar39 * 4 );
         if (uVar55 != 0) {
            lVar3 = *(long*)( this + 0x10 );
            uVar51 = 0;
            uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar44 = CONCAT44(0, uVar38);
            lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar55 * lVar53;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar44;
            lVar46 = SUB168(auVar4 * auVar20, 8);
            puVar50 = (uint*)( lVar3 + lVar46 * 4 );
            iVar45 = SUB164(auVar4 * auVar20, 8);
            uVar52 = *puVar50;
            uVar40 = *(undefined8*)( (long)pvVar43 + uVar39 * 8 );
            while (uVar52 != 0) {
               auVar5._8_8_ = 0;
               auVar5._0_8_ = (ulong)uVar52 * lVar53;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar44;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(( uVar38 + iVar45 ) - SUB164(auVar5 * auVar21, 8)) * lVar53;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar44;
               uVar54 = SUB164(auVar6 * auVar22, 8);
               uVar49 = uVar40;
               if (uVar54 < uVar51) {
                  *puVar50 = uVar55;
                  puVar42 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                  uVar49 = *puVar42;
                  *puVar42 = uVar40;
                  uVar55 = uVar52;
                  uVar51 = uVar54;
               }
               uVar51 = uVar51 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar44;
               lVar46 = SUB168(auVar7 * auVar23, 8);
               puVar50 = (uint*)( lVar3 + lVar46 * 4 );
               iVar45 = SUB164(auVar7 * auVar23, 8);
               uVar40 = uVar49;
               uVar52 = *puVar50;
            };
            *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar40;
            *puVar50 = uVar55;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }
         uVar39 = uVar39 + 1;
      } while ( uVar37 != uVar39 );
      Memory::free_static(pvVar43, false);
      Memory::free_static(pvVar2, false);
   }
} else {
   iVar45 = *(int*)( this + 0x2c );
   uVar39 = CONCAT44(0, uVar55);
   if (iVar45 != 0) {
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar38 = String::hash();
      lVar53 = *(long*)( this + 0x10 );
      uVar37 = 1;
      if (uVar38 != 0) {
         uVar37 = uVar38;
      }
      uVar51 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar46 = SUB168(auVar12 * auVar28, 8);
      uVar38 = *(uint*)( lVar53 + lVar46 * 4 );
      uVar52 = SUB164(auVar12 * auVar28, 8);
      if (uVar38 != 0) {
         do {
            if (uVar37 == uVar38) {
               cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
               if (cVar36 != '\0') {
                  pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                  goto LAB_00115283;
               }
               lVar53 = *(long*)( this + 0x10 );
            }
            uVar51 = uVar51 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = ( ulong )(uVar52 + 1) * lVar3;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar39;
            lVar46 = SUB168(auVar13 * auVar29, 8);
            uVar38 = *(uint*)( lVar53 + lVar46 * 4 );
            uVar52 = SUB164(auVar13 * auVar29, 8);
         } while ( ( uVar38 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar38 * lVar3,auVar30._8_8_ = 0,auVar30._0_8_ = uVar39,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar52 + uVar55 ) - SUB164(auVar14 * auVar30, 8)) * lVar3,auVar31._8_8_ = 0,auVar31._0_8_ = uVar39,uVar51 <= SUB164(auVar15 * auVar31, 8) );
      }
      uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (*(long*)( this + 8 ) == 0) goto LAB_00115538;
      LAB_001153ca:iVar45 = *(int*)( this + 0x2c );
      goto LAB_001153ce;
   }
   LAB_00114ec4:if ((float)uVar39 * __LC53 < (float)( iVar45 + 1 )) goto LAB_00114eea;
}local_58 = 0;if (*(long*)param_1 == 0) {
   pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar41[1] = 0;
   *pauVar41 = (undefined1[16])0x0;
   LAB_0011550b:*(undefined4*)( pauVar41[1] + 8 ) = 0;
   LAB_00115171:puVar42 = *(undefined8**)( this + 0x20 );
   if (puVar42 != (undefined8*)0x0) goto LAB_0011517e;
   LAB_001153a5:*(undefined1(**) [16])( this + 0x18 ) = pauVar41;
} else {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
   lVar3 = local_58;
   local_50 = 0;
   pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar41[1] = 0;
   *(undefined8*)*pauVar41 = 0;
   *(undefined8*)( *pauVar41 + 8 ) = 0;
   if (lVar3 == 0) goto LAB_0011550b;
   CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar41 + 1 ), (CowData*)&local_58);
   *(undefined4*)( pauVar41[1] + 8 ) = 0;
   LOCK();
   plVar1 = (long*)( lVar3 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) goto LAB_00115171;
   Memory::free_static((void*)( local_58 + -0x10 ), false);
   puVar42 = *(undefined8**)( this + 0x20 );
   if (puVar42 == (undefined8*)0x0) goto LAB_001153a5;
   LAB_0011517e:*puVar42 = pauVar41;
   *(undefined8**)( *pauVar41 + 8 ) = puVar42;
}*(undefined1(**) [16])( this + 0x20 ) = pauVar41;uVar37 = String::hash();lVar3 = *(long*)( this + 0x10 );uVar55 = 1;if (uVar37 != 0) {
   uVar55 = uVar37;
}uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar39 = CONCAT44(0, uVar37);lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar8._8_8_ = 0;auVar8._0_8_ = (ulong)uVar55 * lVar53;auVar24._8_8_ = 0;auVar24._0_8_ = uVar39;lVar47 = SUB168(auVar8 * auVar24, 8);lVar46 = *(long*)( this + 8 );puVar50 = (uint*)( lVar3 + lVar47 * 4 );iVar45 = SUB164(auVar8 * auVar24, 8);uVar38 = *puVar50;pauVar57 = pauVar41;if (uVar38 != 0) {
   uVar52 = 0;
   pauVar56 = pauVar41;
   do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar53;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( uVar37 + iVar45 ) - SUB164(auVar9 * auVar25, 8)) * lVar53;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar51 = SUB164(auVar10 * auVar26, 8);
      pauVar57 = pauVar56;
      if (uVar51 < uVar52) {
         *puVar50 = uVar55;
         puVar42 = (undefined8*)( lVar46 + lVar47 * 8 );
         pauVar57 = (undefined1(*) [16])*puVar42;
         *puVar42 = pauVar56;
         uVar52 = uVar51;
         uVar55 = uVar38;
      }
      uVar52 = uVar52 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar47 = SUB168(auVar11 * auVar27, 8);
      puVar50 = (uint*)( lVar3 + lVar47 * 4 );
      iVar45 = SUB164(auVar11 * auVar27, 8);
      uVar38 = *puVar50;
      pauVar56 = pauVar57;
   } while ( uVar38 != 0 );
}*(undefined1(**) [16])( lVar46 + lVar47 * 8 ) = pauVar57;*puVar50 = uVar55;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00115283:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar41[1] + 8;
}/* WARNING: Subroutine does not return */__stack_chk_fail();}/* HashMap<String, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant::Type> > >::get(String const&) */long HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>::get(HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>> *this, String *param_1) {
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
   code *pcVar11;
   char cVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   long lVar16;
   long lVar17;
   ulong uVar18;
   uint uVar19;
   if (( *(long*)( this + 8 ) != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar18 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar13 = String::hash();
      lVar17 = *(long*)( this + 0x10 );
      uVar14 = 1;
      if (uVar13 != 0) {
         uVar14 = uVar13;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar14 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      lVar16 = SUB168(auVar3 * auVar7, 8);
      uVar13 = *(uint*)( lVar17 + lVar16 * 4 );
      uVar15 = SUB164(auVar3 * auVar7, 8);
      if (uVar13 != 0) {
         uVar19 = 0;
         do {
            if (uVar14 == uVar13) {
               cVar12 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar16 * 8 ) + 0x10 ), param_1);
               if (cVar12 != '\0') {
                  return *(long*)( *(long*)( this + 8 ) + (ulong)uVar15 * 8 ) + 0x18;
               }
               lVar17 = *(long*)( this + 0x10 );
            }
            uVar19 = uVar19 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar15 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar18;
            lVar16 = SUB168(auVar4 * auVar8, 8);
            uVar13 = *(uint*)( lVar17 + lVar16 * 4 );
            uVar15 = SUB164(auVar4 * auVar8, 8);
         } while ( ( uVar13 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar13 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar18,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar15 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,uVar19 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   _err_print_error(&_LC62, "./core/templates/hash_map.h", 0x140, "FATAL: Condition \"!exists\" is true.", "HashMap key not found.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar11 = (code*)invalidInstructionException();
   ( *pcVar11 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, Variant, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant> > >::operator[](String const&) */Variant * __thiscallHashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>::operator [](HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>> * this, String * param_1) * plVar1 ;uint *puVar2undefined8 *puVar3void *pvVar4void *__slong lVar5undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]undefined1 auVar37[16]char cVar38uint uVar39uint uVar40ulong uVar41undefined8 uVar42void *__s_00undefined8 *puVar43undefined8 *puVar44void *pvVar45int iVar46long lVar47long lVar48ulong uVar49undefined8 uVar50uint uVar51uint uVar52ulong uVar53long lVar54uint uVar55uint uVar56long in_FS_OFFSETVariant *local_b8int local_98[2]undefined1 local_90[16]undefined1 local_78[16]long local_68int local_60[8]long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar56 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (*(long*)( this + 8 ) == 0) {
   LAB_00115e8d:local_90 = (undefined1[16])0x0;
   local_98[0] = 0;
   local_98[1] = 0;
   uVar49 = (ulong)uVar56;
   uVar41 = uVar49 * 4;
   uVar53 = uVar49 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   pvVar45 = (void*)Memory::alloc_static(uVar53, false);
   *(void**)( this + 8 ) = pvVar45;
   if (uVar56 != 0) {
      pvVar4 = *(void**)( this + 0x10 );
      if (( pvVar4 < (void*)( (long)pvVar45 + uVar53 ) ) && ( pvVar45 < (void*)( (long)pvVar4 + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)pvVar45 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         } while ( uVar49 != uVar41 );
      } else {
         memset(pvVar4, 0, uVar41);
         memset(pvVar45, 0, uVar53);
      }
      LAB_00115d3d:iVar46 = *(int*)( this + 0x2c );
      if (iVar46 != 0) {
         LAB_00115d49:uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar52 = String::hash();
         uVar41 = CONCAT44(0, uVar39);
         lVar54 = *(long*)( this + 0x10 );
         uVar40 = 1;
         if (uVar52 != 0) {
            uVar40 = uVar52;
         }
         uVar55 = 0;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = (ulong)uVar40 * lVar5;
         auVar34._8_8_ = 0;
         auVar34._0_8_ = uVar41;
         lVar47 = SUB168(auVar18 * auVar34, 8);
         uVar52 = *(uint*)( lVar54 + lVar47 * 4 );
         uVar51 = SUB164(auVar18 * auVar34, 8);
         if (uVar52 != 0) {
            do {
               if (uVar40 == uVar52) {
                  cVar38 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar47 * 8 ) + 0x10 ), param_1);
                  if (cVar38 != '\0') {
                     ::Variant::operator =((Variant*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar51 * 8 ) + 0x18 ), (Variant*)local_98);
                     local_b8 = (Variant*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar51 * 8 ) + 0x18 );
                     goto LAB_00115bec;
                  }
                  lVar54 = *(long*)( this + 0x10 );
               }
               uVar55 = uVar55 + 1;
               auVar19._8_8_ = 0;
               auVar19._0_8_ = ( ulong )(uVar51 + 1) * lVar5;
               auVar35._8_8_ = 0;
               auVar35._0_8_ = uVar41;
               lVar47 = SUB168(auVar19 * auVar35, 8);
               uVar52 = *(uint*)( lVar54 + lVar47 * 4 );
               uVar51 = SUB164(auVar19 * auVar35, 8);
            } while ( ( uVar52 != 0 ) && ( auVar20._8_8_ = 0 ),auVar20._0_8_ = (ulong)uVar52 * lVar5,auVar36._8_8_ = 0,auVar36._0_8_ = uVar41,auVar21._8_8_ = 0,auVar21._0_8_ = ( ulong )(( uVar39 + uVar51 ) - SUB164(auVar20 * auVar36, 8)) * lVar5,auVar37._8_8_ = 0,auVar37._0_8_ = uVar41,uVar55 <= SUB164(auVar21 * auVar37, 8) );
         }
         iVar46 = *(int*)( this + 0x2c );
      }
      uVar49 = (ulong)uVar56;
      goto LAB_00115809;
   }
   iVar46 = *(int*)( this + 0x2c );
   if (pvVar45 == (void*)0x0) goto LAB_00115809;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_00115d49;
   LAB_0011582f:uVar56 = *(uint*)( this + 0x28 );
   if (uVar56 == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      local_b8 = (Variant*)0x18;
      goto LAB_00115bec;
   }
   uVar41 = ( ulong )(uVar56 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar56 * 4 );
   if (uVar56 + 1 < 2) {
      uVar41 = 2;
   }
   uVar56 = *(uint*)( hash_table_size_primes + uVar41 * 4 );
   uVar49 = (ulong)uVar56;
   *(int*)( this + 0x28 ) = (int)uVar41;
   pvVar45 = *(void**)( this + 8 );
   uVar41 = uVar49 * 4;
   uVar53 = uVar49 * 8;
   pvVar4 = *(void**)( this + 0x10 );
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   __s_00 = (void*)Memory::alloc_static(uVar53, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar56 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar53 ) ) && ( __s_00 < (void*)( (long)__s + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)__s + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         } while ( uVar41 != uVar49 );
      } else {
         memset(__s, 0, uVar41);
         memset(__s_00, 0, uVar53);
      }
   }
   if (uVar39 != 0) {
      uVar41 = 0;
      do {
         uVar56 = *(uint*)( (long)pvVar4 + uVar41 * 4 );
         if (uVar56 != 0) {
            lVar5 = *(long*)( this + 0x10 );
            uVar51 = 0;
            uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar53 = CONCAT44(0, uVar40);
            lVar54 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar56 * lVar54;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar53;
            lVar47 = SUB168(auVar6 * auVar22, 8);
            puVar2 = (uint*)( lVar5 + lVar47 * 4 );
            iVar46 = SUB164(auVar6 * auVar22, 8);
            uVar52 = *puVar2;
            uVar42 = *(undefined8*)( (long)pvVar45 + uVar41 * 8 );
            while (uVar52 != 0) {
               auVar7._8_8_ = 0;
               auVar7._0_8_ = (ulong)uVar52 * lVar54;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar53;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(( uVar40 + iVar46 ) - SUB164(auVar7 * auVar23, 8)) * lVar54;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar53;
               uVar55 = SUB164(auVar8 * auVar24, 8);
               uVar50 = uVar42;
               if (uVar55 < uVar51) {
                  *puVar2 = uVar56;
                  puVar43 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar50 = *puVar43;
                  *puVar43 = uVar42;
                  uVar56 = uVar52;
                  uVar51 = uVar55;
               }
               uVar51 = uVar51 + 1;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = ( ulong )(iVar46 + 1) * lVar54;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar53;
               lVar47 = SUB168(auVar9 * auVar25, 8);
               puVar2 = (uint*)( lVar5 + lVar47 * 4 );
               iVar46 = SUB164(auVar9 * auVar25, 8);
               uVar42 = uVar50;
               uVar52 = *puVar2;
            };
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar42;
            *puVar2 = uVar56;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }
         uVar41 = uVar41 + 1;
      } while ( uVar39 != uVar41 );
      Memory::free_static(pvVar45, false);
      Memory::free_static(pvVar4, false);
   }
} else {
   if (*(int*)( this + 0x2c ) != 0) {
      uVar41 = CONCAT44(0, uVar56);
      lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar40 = String::hash();
      lVar54 = *(long*)( this + 0x10 );
      uVar39 = 1;
      if (uVar40 != 0) {
         uVar39 = uVar40;
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar39 * lVar5;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar41;
      lVar47 = SUB168(auVar14 * auVar30, 8);
      uVar40 = *(uint*)( lVar54 + lVar47 * 4 );
      uVar52 = SUB164(auVar14 * auVar30, 8);
      if (uVar40 == 0) {
         lVar48 = *(long*)( this + 8 );
      } else {
         lVar48 = *(long*)( this + 8 );
         uVar51 = 0;
         do {
            if (uVar39 == uVar40) {
               cVar38 = String::operator ==((String*)( *(long*)( lVar48 + lVar47 * 8 ) + 0x10 ), param_1);
               if (cVar38 != '\0') {
                  local_b8 = (Variant*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar52 * 8 ) + 0x18 );
                  goto LAB_00115c05;
               }
               lVar54 = *(long*)( this + 0x10 );
               lVar48 = *(long*)( this + 8 );
            }
            uVar51 = uVar51 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = ( ulong )(uVar52 + 1) * lVar5;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar41;
            lVar47 = SUB168(auVar15 * auVar31, 8);
            uVar40 = *(uint*)( lVar54 + lVar47 * 4 );
            uVar52 = SUB164(auVar15 * auVar31, 8);
         } while ( ( uVar40 != 0 ) && ( auVar16._8_8_ = 0 ),auVar16._0_8_ = (ulong)uVar40 * lVar5,auVar32._8_8_ = 0,auVar32._0_8_ = uVar41,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( uVar52 + uVar56 ) - SUB164(auVar16 * auVar32, 8)) * lVar5,auVar33._8_8_ = 0,auVar33._0_8_ = uVar41,uVar51 <= SUB164(auVar17 * auVar33, 8) );
      }
      local_98[0] = 0;
      local_98[1] = 0;
      local_90 = (undefined1[16])0x0;
      uVar56 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar48 == 0) goto LAB_00115e8d;
      goto LAB_00115d3d;
   }
   local_98[0] = 0;
   local_98[1] = 0;
   uVar49 = (ulong)uVar56;
   local_90 = (undefined1[16])0x0;
   iVar46 = 0;
   LAB_00115809:if ((float)uVar49 * __LC53 < (float)( iVar46 + 1 )) goto LAB_0011582f;
}local_68 = 0;local_78 = (undefined1[16])0x0;if (*(long*)param_1 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)param_1);
}::Variant::Variant((Variant*)local_60, (Variant*)local_98);puVar43 = (undefined8*)operator_new(0x30, "");puVar43[2] = 0;*puVar43 = local_78._0_8_;puVar43[1] = local_78._8_8_;if (local_68 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar43 + 2 ), (CowData*)&local_68);
}local_b8 = (Variant*)( puVar43 + 3 );::Variant::Variant(local_b8, (Variant*)local_60);if (::Variant::needs_deinit[local_60[0]] != '\0') {
   ::Variant::_clear_internal();
}lVar5 = local_68;if (local_68 == 0) {
   LAB_00115af2:puVar44 = *(undefined8**)( this + 0x20 );
   if (puVar44 != (undefined8*)0x0) goto LAB_00115aff;
   LAB_00115e74:*(undefined8**)( this + 0x18 ) = puVar43;
} else {
   LOCK();
   plVar1 = (long*)( local_68 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) goto LAB_00115af2;
   local_68 = 0;
   Memory::free_static((void*)( lVar5 + -0x10 ), false);
   puVar44 = *(undefined8**)( this + 0x20 );
   if (puVar44 == (undefined8*)0x0) goto LAB_00115e74;
   LAB_00115aff:*puVar44 = puVar43;
   puVar43[1] = *(undefined8*)( this + 0x20 );
}*(undefined8**)( this + 0x20 ) = puVar43;uVar39 = String::hash();lVar5 = *(long*)( this + 0x10 );uVar56 = 1;if (uVar39 != 0) {
   uVar56 = uVar39;
}uVar52 = 0;uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar41 = CONCAT44(0, uVar39);lVar54 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar10._8_8_ = 0;auVar10._0_8_ = (ulong)uVar56 * lVar54;auVar26._8_8_ = 0;auVar26._0_8_ = uVar41;lVar48 = SUB168(auVar10 * auVar26, 8);lVar47 = *(long*)( this + 8 );puVar2 = (uint*)( lVar5 + lVar48 * 4 );iVar46 = SUB164(auVar10 * auVar26, 8);uVar40 = *puVar2;while (uVar40 != 0) {
   auVar11._8_8_ = 0;
   auVar11._0_8_ = (ulong)uVar40 * lVar54;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar41;
   auVar12._8_8_ = 0;
   auVar12._0_8_ = ( ulong )(( uVar39 + iVar46 ) - SUB164(auVar11 * auVar27, 8)) * lVar54;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar41;
   uVar51 = SUB164(auVar12 * auVar28, 8);
   puVar44 = puVar43;
   if (uVar51 < uVar52) {
      *puVar2 = uVar56;
      puVar3 = (undefined8*)( lVar47 + lVar48 * 8 );
      puVar44 = (undefined8*)*puVar3;
      *puVar3 = puVar43;
      uVar52 = uVar51;
      uVar56 = uVar40;
   }
   uVar52 = uVar52 + 1;
   auVar13._8_8_ = 0;
   auVar13._0_8_ = ( ulong )(iVar46 + 1) * lVar54;
   auVar29._8_8_ = 0;
   auVar29._0_8_ = uVar41;
   lVar48 = SUB168(auVar13 * auVar29, 8);
   puVar2 = (uint*)( lVar5 + lVar48 * 4 );
   iVar46 = SUB164(auVar13 * auVar29, 8);
   puVar43 = puVar44;
   uVar40 = *puVar2;
};*(undefined8**)( lVar47 + lVar48 * 8 ) = puVar43;*puVar2 = uVar56;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00115bec:if (::Variant::needs_deinit[local_98[0]] != '\0') {
   ::Variant::_clear_internal();
}LAB_00115c05:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return local_b8;}/* List<Variant, DefaultAllocator>::~List() */void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
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
         if (::Variant::needs_deinit[*piVar1] != '\0') {
            ::Variant::_clear_internal();
         }
         Memory::free_static(piVar1, false);
         *(int*)( puVar2 + 2 ) = *(int*)( puVar2 + 2 ) + -1;
      } else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
      puVar2 = *(undefined8**)this;
   } while ( *(int*)( puVar2 + 2 ) != 0 );
   Memory::free_static(puVar2, false);
   return;
}/* void List<Variant, DefaultAllocator>::sort_custom<StringLikeVariantOrder>() */void List<Variant,DefaultAllocator>::sort_custom<StringLikeVariantOrder>(List<Variant,DefaultAllocator> *this) {
   long *plVar1;
   size_t __n;
   int iVar2;
   int iVar3;
   Variant *pVVar4;
   char cVar5;
   Element *pEVar6;
   Element **__src;
   undefined8 *puVar7;
   Element *pEVar8;
   Element **ppEVar9;
   Element *pEVar10;
   long lVar11;
   Variant *pVVar12;
   Element **ppEVar13;
   long lVar14;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)this == 0 ) || ( iVar2 = iVar2 < 2 )) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else {
      pEVar6 = (Element*)(long)iVar2;
      __src = (Element**)Memory::alloc_static((long)pEVar6 * 8, true);
      if (__src == (Element**)0x0) {
         _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
      } else {
         __src[-1] = pEVar6;
      }
      if (*(long**)this != (long*)0x0) {
         ppEVar9 = __src;
         for (pEVar10 = (Element*)**(long**)this; pEVar10 != (Element*)0x0; pEVar10 = *(Element**)( pEVar10 + 0x18 )) {
            *ppEVar9 = pEVar10;
            ppEVar9 = ppEVar9 + 1;
         }
      }
      lVar14 = 0;
      pEVar10 = pEVar6;
      do {
         pEVar10 = (Element*)( (long)pEVar10 >> 1 );
         lVar14 = lVar14 + 1;
      } while ( pEVar10 != (Element*)0x1 );
      lVar14 = lVar14 * 2;
      pEVar10 = pEVar6;
      if ((long)pEVar6 < 0x11) {
         pEVar10 = (Element*)0x1;
         pEVar8 = *__src;
         do {
            while (true) {
               pVVar12 = (Variant*)__src[(long)pEVar10];
               if (( *(int*)pVVar12 == 4 ) || ( *(int*)pVVar12 == 0x15 )) {
                  if (( *(int*)pEVar8 == 4 ) || ( *(int*)pEVar8 == 0x15 )) {
                     ::Variant::operator_cast_to_String((Variant*)&local_48);
                     ::Variant::operator_cast_to_String((Variant*)&local_50);
                     cVar5 = String::operator <((String*)&local_50, (String*)&local_48);
                     lVar14 = local_50;
                     if (local_50 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_50 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_50 = 0;
                           Memory::free_static((void*)( lVar14 + -0x10 ), false);
                        }
                     }
                     lVar14 = local_48;
                     if (local_48 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_48 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_48 = 0;
                           Memory::free_static((void*)( lVar14 + -0x10 ), false);
                        }
                     }
                  } else {
                     cVar5 = ::Variant::operator <(pVVar12, (Variant*)pEVar8);
                  }
               } else {
                  cVar5 = ::Variant::operator <(pVVar12, (Variant*)pEVar8);
               }
               if (cVar5 == '\0') break;
               __n = (long)pEVar10 * 8;
               pEVar10 = pEVar10 + 1;
               memmove(__src + 1, __src, __n);
               *__src = (Element*)pVVar12;
               pEVar8 = (Element*)pVVar12;
               if (pEVar6 == pEVar10) goto LAB_001166fc;
            };
            ppEVar9 = __src + (long)pEVar10;
            while (true) {
               if (( ( *(int*)pVVar12 == 4 ) || ( *(int*)pVVar12 == 0x15 ) ) && ( ( iVar3 = *(int*)ppEVar9[-1] ),iVar3 == 4 || ( iVar3 == 0x15 ) )) {
                  ::Variant::operator_cast_to_String((Variant*)&local_48);
                  ::Variant::operator_cast_to_String((Variant*)&local_50);
                  cVar5 = String::operator <((String*)&local_50, (String*)&local_48);
                  lVar14 = local_50;
                  if (local_50 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_50 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_50 = 0;
                        Memory::free_static((void*)( lVar14 + -0x10 ), false);
                     }
                  }
                  lVar14 = local_48;
                  if (local_48 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_48 = 0;
                        Memory::free_static((void*)( lVar14 + -0x10 ), false);
                     }
                  }
               } else {
                  cVar5 = ::Variant::operator <(pVVar12, (Variant*)ppEVar9[-1]);
               }
               if (cVar5 == '\0') goto LAB_00116a1a;
               if (__src + 1 == ppEVar9) break;
               *ppEVar9 = ppEVar9[-1];
               ppEVar9 = ppEVar9 + -1;
            };
            _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
            LAB_00116a1a:pEVar10 = pEVar10 + 1;
            *ppEVar9 = (Element*)pVVar12;
            pVVar12 = (Variant*)*__src;
            pEVar8 = (Element*)pVVar12;
         } while ( pEVar6 != pEVar10 );
      } else {
         do {
            lVar14 = lVar14 + -1;
            puVar7 = (undefined8*)SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>::median_of_3(__src, __src + ( (long)pEVar10 >> 1 ), __src + (long)( pEVar10 + -1 ));
            pEVar8 = (Element*)SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>::partitioner(0, (long)pEVar10, (Element*)*puVar7, __src);
            SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>::introsort((long)pEVar8, (long)pEVar10, __src, lVar14);
            if ((long)pEVar8 < 0x11) goto LAB_001162fc;
            pEVar10 = pEVar8;
         } while ( lVar14 != 0 );
         SortArray<List<Variant,DefaultAllocator>::Element*,List<Variant,DefaultAllocator>::AuxiliaryComparator<StringLikeVariantOrder>,true>::partial_sort(0, (long)pEVar8, (long)pEVar8, __src);
         LAB_001162fc:lVar14 = 1;
         do {
            while (true) {
               lVar11 = lVar14;
               pVVar12 = (Variant*)__src[lVar11];
               pVVar4 = (Variant*)*__src;
               if (( *(int*)pVVar12 == 4 ) || ( *(int*)pVVar12 == 0x15 )) {
                  if (( *(int*)pVVar4 == 4 ) || ( *(int*)pVVar4 == 0x15 )) {
                     ::Variant::operator_cast_to_String((Variant*)&local_48);
                     ::Variant::operator_cast_to_String((Variant*)&local_50);
                     cVar5 = String::operator <((String*)&local_50, (String*)&local_48);
                     lVar14 = local_50;
                     if (local_50 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_50 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_50 = 0;
                           Memory::free_static((void*)( lVar14 + -0x10 ), false);
                        }
                     }
                     lVar14 = local_48;
                     if (local_48 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_48 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_48 = 0;
                           Memory::free_static((void*)( lVar14 + -0x10 ), false);
                        }
                     }
                  } else {
                     cVar5 = ::Variant::operator <(pVVar12, pVVar4);
                  }
               } else {
                  cVar5 = ::Variant::operator <(pVVar12, pVVar4);
               }
               if (cVar5 == '\0') break;
               memmove(__src + 1, __src, lVar11 * 8);
               *__src = (Element*)pVVar12;
               lVar14 = lVar11 + 1;
               if (lVar11 + 1 == 0x10) goto LAB_00116481;
            };
            ppEVar9 = __src + lVar11;
            while (true) {
               if (( ( *(int*)pVVar12 == 4 ) || ( *(int*)pVVar12 == 0x15 ) ) && ( ( iVar3 = *(int*)ppEVar9[-1] ),iVar3 == 4 || ( iVar3 == 0x15 ) )) {
                  ::Variant::operator_cast_to_String((Variant*)&local_48);
                  ::Variant::operator_cast_to_String((Variant*)&local_50);
                  cVar5 = String::operator <((String*)&local_50, (String*)&local_48);
                  lVar14 = local_50;
                  if (local_50 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_50 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_50 = 0;
                        Memory::free_static((void*)( lVar14 + -0x10 ), false);
                     }
                  }
                  lVar14 = local_48;
                  if (local_48 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_48 = 0;
                        Memory::free_static((void*)( lVar14 + -0x10 ), false);
                     }
                  }
               } else {
                  cVar5 = ::Variant::operator <(pVVar12, (Variant*)ppEVar9[-1]);
               }
               if (cVar5 == '\0') {
                  *ppEVar9 = (Element*)pVVar12;
                  goto LAB_00116473;
               }
               ppEVar13 = ppEVar9 + -1;
               if (__src == ppEVar13) break;
               *ppEVar9 = *ppEVar13;
               ppEVar9 = ppEVar13;
            };
            _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
            *ppEVar9 = (Element*)pVVar12;
            LAB_00116473:lVar14 = lVar11 + 1;
         } while ( lVar11 + 1 != 0x10 );
         LAB_00116481:pEVar10 = (Element*)( lVar11 + 1 );
         do {
            pVVar12 = (Variant*)__src[(long)pEVar10];
            ppEVar9 = __src + (long)pEVar10;
            pEVar8 = pEVar10;
            while (true) {
               pEVar8 = pEVar8 + -1;
               if (( ( *(int*)pVVar12 == 4 ) || ( *(int*)pVVar12 == 0x15 ) ) && ( ( iVar3 = *(int*)ppEVar9[-1] ),iVar3 == 4 || ( iVar3 == 0x15 ) )) {
                  ::Variant::operator_cast_to_String((Variant*)&local_48);
                  ::Variant::operator_cast_to_String((Variant*)&local_50);
                  cVar5 = String::operator <((String*)&local_50, (String*)&local_48);
                  lVar14 = local_50;
                  if (local_50 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_50 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_50 = 0;
                        Memory::free_static((void*)( lVar14 + -0x10 ), false);
                     }
                  }
                  lVar14 = local_48;
                  if (local_48 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_48 = 0;
                        Memory::free_static((void*)( lVar14 + -0x10 ), false);
                     }
                  }
               } else {
                  cVar5 = ::Variant::operator <(pVVar12, (Variant*)ppEVar9[-1]);
               }
               if (cVar5 == '\0') goto LAB_001166d8;
               if (pEVar8 == (Element*)0x0) break;
               *ppEVar9 = ppEVar9[-1];
               ppEVar9 = ppEVar9 + -1;
            };
            _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
            LAB_001166d8:*ppEVar9 = (Element*)pVVar12;
            pEVar10 = pEVar10 + 1;
         } while ( pEVar6 != pEVar10 );
         pVVar12 = (Variant*)*__src;
      }
      LAB_001166fc:puVar7 = *(undefined8**)this;
      *puVar7 = pVVar12;
      *(undefined8*)( pVVar12 + 0x20 ) = 0;
      *(Element**)( *__src + 0x18 ) = __src[1];
      pEVar10 = __src[(long)( pEVar6 + -1 )];
      puVar7[1] = pEVar10;
      *(Element**)( pEVar10 + 0x20 ) = __src[(long)( pEVar6 + -2 )];
      *(undefined8*)( __src[(long)( pEVar6 + -1 )] + 0x18 ) = 0;
      if (iVar2 != 2) {
         ppEVar9 = __src;
         do {
            ppEVar13 = ppEVar9 + 1;
            *(Element**)( ppEVar9[1] + 0x20 ) = *ppEVar9;
            *(Element**)( *ppEVar13 + 0x18 ) = ppEVar9[2];
            ppEVar9 = ppEVar13;
         } while ( ppEVar13 != __src + ( iVar2 - 2 ) );
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(__src, true);
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
}/* Ref<Script>::unref() */void Ref<Script>::unref(Ref<Script> *this) {
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
}/* Ref<Resource>::unref() */void Ref<Resource>::unref(Ref<Resource> *this) {
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
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) */undefined8 CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   ulong uVar3;
   long lVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }
   lVar4 = *(long*)this;
   if (lVar4 == 0) {
      if (param_1 == 0) {
         return 0;
      }
      _copy_on_write(this);
      LAB_0011706e:lVar7 = 0;
      lVar4 = 0;
   } else {
      lVar7 = *(long*)( lVar4 + -8 );
      if (param_1 == lVar7) {
         return 0;
      }
      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }
         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return 0;
      }
      _copy_on_write(this);
      if (lVar7 == 0) goto LAB_0011706e;
      uVar3 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar4 = ( uVar3 | uVar3 >> 0x20 ) + 1;
   }
   uVar3 = param_1 - 1U | param_1 - 1U >> 1;
   uVar3 = uVar3 | uVar3 >> 2;
   uVar3 = uVar3 | uVar3 >> 4;
   uVar3 = uVar3 | uVar3 >> 8;
   uVar3 = uVar3 | uVar3 >> 0x10;
   uVar3 = uVar3 | uVar3 >> 0x20;
   if (lVar7 < param_1) {
      if (uVar3 + 1 == lVar4) {
         puVar5 = *(undefined8**)this;
         if (puVar5 == (undefined8*)0x0) {
            LAB_00117019:_DAT_00000000 = 0;
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
      } else {
         if (lVar7 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar3 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }
            *puVar5 = 1;
            puVar5[1] = 0;
         } else {
            puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar3 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) goto LAB_001170d0;
            *puVar5 = 1;
         }
         puVar5 = puVar5 + 2;
         *(undefined8**)this = puVar5;
      }
      puVar5[-1] = param_1;
   } else {
      puVar5 = *(undefined8**)this;
      if (uVar3 + 1 == lVar4) {
         if (puVar5 == (undefined8*)0x0) goto LAB_00117019;
      } else {
         puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar3 + 0x11, false);
         if (puVar6 == (undefined8*)0x0) {
            LAB_001170d0:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }
         puVar5 = puVar6 + 2;
         *puVar6 = 1;
         *(undefined8**)this = puVar5;
      }
      puVar5[-1] = param_1;
   }
   return 0;
}/* Ref<RefCounted>::TEMPNAMEPLACEHOLDERVALUE(RefCounted*) */void Ref<RefCounted>::operator =(Ref<RefCounted> *this, RefCounted *param_1) {
   Object *pOVar1;
   char cVar2;
   pOVar1 = *(Object**)this;
   if (param_1 != (RefCounted*)pOVar1) {
      *(RefCounted**)this = param_1;
      if (param_1 != (RefCounted*)0x0) {
         cVar2 = RefCounted::init_ref();
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
}/* HashMap<StringName, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant::Type> > >::_lookup_pos(StringName
   const&, unsigned int&) const */undefined8 HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>::_lookup_pos(HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>> *this, StringName *param_1, uint *param_2) {
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
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }
   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      } else {
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
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               *param_2 = uVar12;
               return 1;
            }
            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         } while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   return 0;
}/* Ref<Script>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */void Ref<Script>::operator =(Ref<Script> *this, Variant *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar3 = (Object*)::Variant::get_validated_object();
   pOVar1 = *(Object**)this;
   if (pOVar1 == pOVar3) {
      return;
   }
   if (pOVar3 == (Object*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }
      *(undefined8*)this = 0;
   } else {
      pOVar3 = (Object*)__dynamic_cast(pOVar3, &Object::typeinfo, &Script::typeinfo, 0);
      if (pOVar1 == pOVar3) {
         return;
      }
      *(Object**)this = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
         *(undefined8*)this = 0;
      }
      if (pOVar1 == (Object*)0x0) {
         return;
      }
   }
   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }
   return;
}/* HashMap<String, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant::Type> > >::_lookup_pos(String const&,
   unsigned int&) const */undefined8 HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>::_lookup_pos(HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>> *this, String *param_1, uint *param_2) {
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
         } while ( ( uVar11 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar11 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar18 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   return 0;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) */undefined8 CowData<int>::resize<false>(CowData<int> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   } else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 4 != 0) {
      uVar4 = param_1 * 4 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00117669;
            } else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }
                  *puVar5 = 1;
                  puVar5[1] = 0;
               } else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_00117750;
                  *puVar5 = 1;
               }
               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }
            puVar5[-1] = param_1;
         } else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00117669:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }
            } else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00117750:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }
               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }
            puVar5[-1] = param_1;
         }
         return 0;
      }
   }
   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
}/* Error VariantParser::_parse_construct<int>(VariantParser::Stream*, Vector<int>&, int&, String&)
    */undefined8 VariantParser::_parse_construct<int>(Stream *param_1, Vector *param_2, int *param_3, String *param_4) {
   long *plVar1;
   char cVar2;
   char *pcVar3;
   int iVar4;
   int iVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   double dVar9;
   char *local_98;
   undefined8 local_90;
   undefined4 local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   int local_68[2];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   get_token(param_1, (Token*)local_68, param_3, param_4);
   if (local_68[0] == 4) {
      get_token(param_1, (Token*)local_68, param_3, param_4);
      if (local_68[0] != 5) {
         do {
            if (local_68[0] != 9) {
               if (local_68[0] == 6) {
                  ::Variant::operator_cast_to_String((Variant*)&local_98);
                  dVar9 = (double)stor_fix((String*)&local_98);
                  pcVar3 = local_98;
                  if (local_98 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_98 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_98 = (char*)0x0;
                        Memory::free_static(pcVar3 + -0x10, false);
                     }
                  }
                  if (dVar9 != _LC8) {
                     local_68[0] = 9;
                     ::Variant::Variant((Variant*)local_88, dVar9);
                     if (::Variant::needs_deinit[(int)local_60] != '\0') {
                        ::Variant::_clear_internal();
                     }
                     local_60 = CONCAT44(local_60._4_4_, local_88[0]);
                     local_58._8_8_ = uStack_78;
                     local_58._0_8_ = local_80;
                     goto LAB_001178ff;
                  }
               }
               local_90 = 0x1d;
               local_98 = "Expected float in constructor";
               String::parse_latin1((StrRange*)param_4);
               goto LAB_001179d5;
            }
            LAB_001178ff:iVar4 = ::Variant::operator_cast_to_int((Variant*)&local_60);
            if (*(long*)( param_2 + 8 ) == 0) {
               lVar7 = 1;
            } else {
               lVar7 = *(long*)( *(long*)( param_2 + 8 ) + -8 ) + 1;
            }
            iVar5 = CowData<int>::resize<false>((CowData<int>*)( param_2 + 8 ), lVar7);
            if (iVar5 == 0) {
               if (*(long*)( param_2 + 8 ) == 0) {
                  lVar8 = -1;
                  lVar7 = 0;
               } else {
                  lVar7 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
                  lVar8 = lVar7 + -1;
                  if (-1 < lVar8) {
                     CowData<int>::_copy_on_write((CowData<int>*)( param_2 + 8 ));
                     *(int*)( *(long*)( param_2 + 8 ) + lVar8 * 4 ) = iVar4;
                     goto LAB_00117960;
                  }
               }
               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar8, lVar7, "p_index", "size()", "", false, false);
            } else {
               _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            }
            LAB_00117960:get_token(param_1, (Token*)local_68, param_3, param_4);
            if (local_68[0] != 0xc) goto LAB_00117b30;
            get_token(param_1, (Token*)local_68, param_3, param_4);
         } while ( true );
      }
      goto LAB_00117b04;
   }
   local_90 = 0x1b;
   local_98 = "Expected \'(\' in constructor";
   String::parse_latin1((StrRange*)param_4);
   goto LAB_001179d5;
   LAB_00117b30:if (local_68[0] == 5) {
      LAB_00117b04:uVar6 = 0;
      cVar2 = ::Variant::needs_deinit[(int)local_60];
      goto joined_r0x001179e8;
   }
   local_90 = 0x22;
   local_98 = "Expected \',\' or \')\' in constructor";
   String::parse_latin1((StrRange*)param_4);
   LAB_001179d5:uVar6 = 0x2b;
   cVar2 = ::Variant::needs_deinit[(int)local_60];
   joined_r0x001179e8:if (cVar2 != '\0') {
      ::Variant::_clear_internal();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar6;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<long>::resize<false>(long) */undefined8 CowData<long>::resize<false>(CowData<long> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   } else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 8 != 0) {
      uVar4 = param_1 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00117d09;
            } else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }
                  *puVar5 = 1;
                  puVar5[1] = 0;
               } else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_00117df0;
                  *puVar5 = 1;
               }
               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }
            puVar5[-1] = param_1;
         } else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00117d09:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }
            } else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00117df0:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }
               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }
            puVar5[-1] = param_1;
         }
         return 0;
      }
   }
   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
}/* Error VariantParser::_parse_construct<long>(VariantParser::Stream*, Vector<long>&, int&, String&)
    */undefined8 VariantParser::_parse_construct<long>(Stream *param_1, Vector *param_2, int *param_3, String *param_4) {
   long *plVar1;
   char cVar2;
   char *pcVar3;
   int iVar4;
   long lVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   double dVar9;
   char *local_98;
   undefined8 local_90;
   undefined4 local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   int local_68[2];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   get_token(param_1, (Token*)local_68, param_3, param_4);
   if (local_68[0] == 4) {
      get_token(param_1, (Token*)local_68, param_3, param_4);
      if (local_68[0] != 5) {
         do {
            if (local_68[0] != 9) {
               if (local_68[0] == 6) {
                  ::Variant::operator_cast_to_String((Variant*)&local_98);
                  dVar9 = (double)stor_fix((String*)&local_98);
                  pcVar3 = local_98;
                  if (local_98 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_98 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_98 = (char*)0x0;
                        Memory::free_static(pcVar3 + -0x10, false);
                     }
                  }
                  if (dVar9 != _LC8) {
                     local_68[0] = 9;
                     ::Variant::Variant((Variant*)local_88, dVar9);
                     if (::Variant::needs_deinit[(int)local_60] != '\0') {
                        ::Variant::_clear_internal();
                     }
                     local_60 = CONCAT44(local_60._4_4_, local_88[0]);
                     local_58._8_8_ = uStack_78;
                     local_58._0_8_ = local_80;
                     goto LAB_00117f7f;
                  }
               }
               local_90 = 0x1d;
               local_98 = "Expected float in constructor";
               String::parse_latin1((StrRange*)param_4);
               goto LAB_00118056;
            }
            LAB_00117f7f:lVar5 = ::Variant::operator_cast_to_long((Variant*)&local_60);
            if (*(long*)( param_2 + 8 ) == 0) {
               lVar7 = 1;
            } else {
               lVar7 = *(long*)( *(long*)( param_2 + 8 ) + -8 ) + 1;
            }
            iVar4 = CowData<long>::resize<false>((CowData<long>*)( param_2 + 8 ), lVar7);
            if (iVar4 == 0) {
               if (*(long*)( param_2 + 8 ) == 0) {
                  lVar8 = -1;
                  lVar7 = 0;
               } else {
                  lVar7 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
                  lVar8 = lVar7 + -1;
                  if (-1 < lVar8) {
                     CowData<long>::_copy_on_write((CowData<long>*)( param_2 + 8 ));
                     *(long*)( *(long*)( param_2 + 8 ) + lVar8 * 8 ) = lVar5;
                     goto LAB_00117fe1;
                  }
               }
               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar8, lVar7, "p_index", "size()", "", false, false);
            } else {
               _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            }
            LAB_00117fe1:get_token(param_1, (Token*)local_68, param_3, param_4);
            if (local_68[0] != 0xc) goto LAB_001181b0;
            get_token(param_1, (Token*)local_68, param_3, param_4);
         } while ( true );
      }
      goto LAB_00118184;
   }
   local_90 = 0x1b;
   local_98 = "Expected \'(\' in constructor";
   String::parse_latin1((StrRange*)param_4);
   goto LAB_00118056;
   LAB_001181b0:if (local_68[0] == 5) {
      LAB_00118184:uVar6 = 0;
      cVar2 = ::Variant::needs_deinit[(int)local_60];
      goto joined_r0x00118069;
   }
   local_90 = 0x22;
   local_98 = "Expected \',\' or \')\' in constructor";
   String::parse_latin1((StrRange*)param_4);
   LAB_00118056:uVar6 = 0x2b;
   cVar2 = ::Variant::needs_deinit[(int)local_60];
   joined_r0x00118069:if (cVar2 != '\0') {
      ::Variant::_clear_internal();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar6;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<float>::resize<false>(long) */undefined8 CowData<float>::resize<false>(CowData<float> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   } else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 4 != 0) {
      uVar4 = param_1 * 4 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00118389;
            } else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }
                  *puVar5 = 1;
                  puVar5[1] = 0;
               } else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_00118470;
                  *puVar5 = 1;
               }
               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }
            puVar5[-1] = param_1;
         } else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00118389:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }
            } else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00118470:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }
               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }
            puVar5[-1] = param_1;
         }
         return 0;
      }
   }
   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
}/* Error VariantParser::_parse_construct<float>(VariantParser::Stream*, Vector<float>&, int&,
   String&) */undefined8 VariantParser::_parse_construct<float>(Stream *param_1, Vector *param_2, int *param_3, String *param_4) {
   long *plVar1;
   char cVar2;
   char *pcVar3;
   int iVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   float fVar8;
   double dVar9;
   char *local_98;
   undefined8 local_90;
   undefined4 local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   int local_68[2];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   get_token(param_1, (Token*)local_68, param_3, param_4);
   if (local_68[0] == 4) {
      get_token(param_1, (Token*)local_68, param_3, param_4);
      if (local_68[0] != 5) {
         do {
            if (local_68[0] != 9) {
               if (local_68[0] == 6) {
                  ::Variant::operator_cast_to_String((Variant*)&local_98);
                  dVar9 = (double)stor_fix((String*)&local_98);
                  pcVar3 = local_98;
                  if (local_98 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_98 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_98 = (char*)0x0;
                        Memory::free_static(pcVar3 + -0x10, false);
                     }
                  }
                  if (dVar9 != _LC8) {
                     local_68[0] = 9;
                     ::Variant::Variant((Variant*)local_88, dVar9);
                     if (::Variant::needs_deinit[(int)local_60] != '\0') {
                        ::Variant::_clear_internal();
                     }
                     local_60 = CONCAT44(local_60._4_4_, local_88[0]);
                     local_58._8_8_ = uStack_78;
                     local_58._0_8_ = local_80;
                     goto LAB_001185fd;
                  }
               }
               local_90 = 0x1d;
               local_98 = "Expected float in constructor";
               String::parse_latin1((StrRange*)param_4);
               goto LAB_001186dc;
            }
            LAB_001185fd:fVar8 = ::Variant::operator_cast_to_float((Variant*)&local_60);
            if (*(long*)( param_2 + 8 ) == 0) {
               lVar7 = 1;
            } else {
               lVar7 = *(long*)( *(long*)( param_2 + 8 ) + -8 ) + 1;
            }
            iVar4 = CowData<float>::resize<false>((CowData<float>*)( param_2 + 8 ), lVar7);
            if (iVar4 == 0) {
               if (*(long*)( param_2 + 8 ) == 0) {
                  lVar6 = -1;
                  lVar7 = 0;
               } else {
                  lVar7 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
                  lVar6 = lVar7 + -1;
                  if (-1 < lVar6) {
                     CowData<float>::_copy_on_write((CowData<float>*)( param_2 + 8 ));
                     *(float*)( *(long*)( param_2 + 8 ) + lVar6 * 4 ) = fVar8;
                     goto LAB_00118669;
                  }
               }
               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar6, lVar7, "p_index", "size()", "", false, false);
            } else {
               _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            }
            LAB_00118669:get_token(param_1, (Token*)local_68, param_3, param_4);
            if (local_68[0] != 0xc) goto LAB_00118830;
            get_token(param_1, (Token*)local_68, param_3, param_4);
         } while ( true );
      }
      goto LAB_00118804;
   }
   local_90 = 0x1b;
   local_98 = "Expected \'(\' in constructor";
   String::parse_latin1((StrRange*)param_4);
   goto LAB_001186dc;
   LAB_00118830:if (local_68[0] == 5) {
      LAB_00118804:uVar5 = 0;
      cVar2 = ::Variant::needs_deinit[(int)local_60];
      goto joined_r0x001186ef;
   }
   local_90 = 0x22;
   local_98 = "Expected \',\' or \')\' in constructor";
   String::parse_latin1((StrRange*)param_4);
   LAB_001186dc:uVar5 = 0x2b;
   cVar2 = ::Variant::needs_deinit[(int)local_60];
   joined_r0x001186ef:if (cVar2 != '\0') {
      ::Variant::_clear_internal();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar5;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<double>::resize<false>(long) */undefined8 CowData<double>::resize<false>(CowData<double> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   } else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 8 != 0) {
      uVar4 = param_1 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_00118a09;
            } else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }
                  *puVar5 = 1;
                  puVar5[1] = 0;
               } else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_00118af0;
                  *puVar5 = 1;
               }
               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }
            puVar5[-1] = param_1;
         } else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_00118a09:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }
            } else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00118af0:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }
               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }
            puVar5[-1] = param_1;
         }
         return 0;
      }
   }
   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
}/* Error VariantParser::_parse_construct<double>(VariantParser::Stream*, Vector<double>&, int&,
   String&) */undefined8 VariantParser::_parse_construct<double>(Stream *param_1, Vector *param_2, int *param_3, String *param_4) {
   long *plVar1;
   char cVar2;
   char *pcVar3;
   int iVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   double dVar8;
   char *local_98;
   undefined8 local_90;
   undefined4 local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   int local_68[2];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   get_token(param_1, (Token*)local_68, param_3, param_4);
   if (local_68[0] == 4) {
      get_token(param_1, (Token*)local_68, param_3, param_4);
      if (local_68[0] != 5) {
         do {
            if (local_68[0] != 9) {
               if (local_68[0] == 6) {
                  ::Variant::operator_cast_to_String((Variant*)&local_98);
                  dVar8 = (double)stor_fix((String*)&local_98);
                  pcVar3 = local_98;
                  if (local_98 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_98 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_98 = (char*)0x0;
                        Memory::free_static(pcVar3 + -0x10, false);
                     }
                  }
                  if (dVar8 != _LC8) {
                     local_68[0] = 9;
                     ::Variant::Variant((Variant*)local_88, dVar8);
                     if (::Variant::needs_deinit[(int)local_60] != '\0') {
                        ::Variant::_clear_internal();
                     }
                     local_60 = CONCAT44(local_60._4_4_, local_88[0]);
                     local_58._8_8_ = uStack_78;
                     local_58._0_8_ = local_80;
                     goto LAB_00118c7d;
                  }
               }
               local_90 = 0x1d;
               local_98 = "Expected float in constructor";
               String::parse_latin1((StrRange*)param_4);
               goto LAB_00118d5c;
            }
            LAB_00118c7d:dVar8 = ::Variant::operator_cast_to_double((Variant*)&local_60);
            if (*(long*)( param_2 + 8 ) == 0) {
               lVar7 = 1;
            } else {
               lVar7 = *(long*)( *(long*)( param_2 + 8 ) + -8 ) + 1;
            }
            iVar4 = CowData<double>::resize<false>((CowData<double>*)( param_2 + 8 ), lVar7);
            if (iVar4 == 0) {
               if (*(long*)( param_2 + 8 ) == 0) {
                  lVar6 = -1;
                  lVar7 = 0;
               } else {
                  lVar7 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
                  lVar6 = lVar7 + -1;
                  if (-1 < lVar6) {
                     CowData<double>::_copy_on_write((CowData<double>*)( param_2 + 8 ));
                     *(double*)( *(long*)( param_2 + 8 ) + lVar6 * 8 ) = dVar8;
                     goto LAB_00118ce9;
                  }
               }
               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar6, lVar7, "p_index", "size()", "", false, false);
            } else {
               _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            }
            LAB_00118ce9:get_token(param_1, (Token*)local_68, param_3, param_4);
            if (local_68[0] != 0xc) goto LAB_00118eb0;
            get_token(param_1, (Token*)local_68, param_3, param_4);
         } while ( true );
      }
      goto LAB_00118e84;
   }
   local_90 = 0x1b;
   local_98 = "Expected \'(\' in constructor";
   String::parse_latin1((StrRange*)param_4);
   goto LAB_00118d5c;
   LAB_00118eb0:if (local_68[0] == 5) {
      LAB_00118e84:uVar5 = 0;
      cVar2 = ::Variant::needs_deinit[(int)local_60];
      goto joined_r0x00118d6f;
   }
   local_90 = 0x22;
   local_98 = "Expected \',\' or \')\' in constructor";
   String::parse_latin1((StrRange*)param_4);
   LAB_00118d5c:uVar5 = 0x2b;
   cVar2 = ::Variant::needs_deinit[(int)local_60];
   joined_r0x00118d6f:if (cVar2 != '\0') {
      ::Variant::_clear_internal();
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar5;
}/* CowData<Vector3>::_unref() */void CowData<Vector3>::_unref(CowData<Vector3> *this) {
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
}/* CowData<Vector2>::_unref() */void CowData<Vector2>::_unref(CowData<Vector2> *this) {
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
}/* CowData<int>::_unref() */void CowData<int>::_unref(CowData<int> *this) {
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
}/* CowData<unsigned char>::_unref() */void CowData<unsigned_char>::_unref(CowData<unsigned_char> *this) {
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
}/* CowData<long>::_unref() */void CowData<long>::_unref(CowData<long> *this) {
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
}/* CowData<float>::_unref() */void CowData<float>::_unref(CowData<float> *this) {
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
}/* CowData<double>::_unref() */void CowData<double>::_unref(CowData<double> *this) {
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
}/* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 *puVar4;
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
      lVar9 = 0;
      lVar5 = 0;
   } else {
      lVar9 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar9) {
         return 0;
      }
      if (param_1 == 0) {
         _unref(this);
         return 0;
      }
      _copy_on_write(this);
      lVar5 = lVar9 * 8;
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
      LAB_00119420:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }
   uVar6 = param_1 * 8 - 1;
   uVar6 = uVar6 >> 1 | uVar6;
   uVar6 = uVar6 | uVar6 >> 2;
   uVar6 = uVar6 | uVar6 >> 4;
   uVar6 = uVar6 | uVar6 >> 8;
   uVar6 = uVar6 | uVar6 >> 0x10;
   uVar6 = uVar6 | uVar6 >> 0x20;
   if (uVar6 == 0xffffffffffffffff) goto LAB_00119420;
   if (param_1 <= lVar9) {
      puVar7 = *(undefined8**)this;
      uVar8 = param_1;
      while (puVar7 != (undefined8*)0x0) {
         if ((ulong)puVar7[-1] <= uVar8) {
            LAB_001192a9:if (uVar6 + 1 != lVar5) {
               puVar4 = (undefined8*)Memory::realloc_static(puVar7 + -2, uVar6 + 0x11, false);
               if (puVar4 == (undefined8*)0x0) goto LAB_0011944f;
               puVar7 = puVar4 + 2;
               *puVar4 = 1;
               *(undefined8**)this = puVar7;
            }
            puVar7[-1] = param_1;
            return 0;
         }
         while (true) {
            plVar2 = puVar7 + uVar8;
            if (*plVar2 != 0) break;
            uVar8 = uVar8 + 1;
            if ((ulong)puVar7[-1] <= uVar8) goto LAB_001192a9;
         };
         LOCK();
         plVar1 = (long*)( *plVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar9 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }
         uVar8 = uVar8 + 1;
         puVar7 = *(undefined8**)this;
      };
      LAB_0011949d:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }
   if (uVar6 + 1 == lVar5) {
      puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) goto LAB_0011949d;
      lVar9 = puVar7[-1];
      LAB_00119380:if (param_1 <= lVar9) goto LAB_00119335;
   } else {
      if (lVar9 != 0) {
         puVar4 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar6 + 0x11, false);
         if (puVar4 == (undefined8*)0x0) {
            LAB_0011944f:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }
         puVar7 = puVar4 + 2;
         *puVar4 = 1;
         *(undefined8**)this = puVar7;
         lVar9 = puVar4[1];
         goto LAB_00119380;
      }
      puVar4 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }
      puVar7 = puVar4 + 2;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined8**)this = puVar7;
      lVar9 = 0;
   }
   memset(puVar7 + lVar9, 0, ( param_1 - lVar9 ) * 8);
   LAB_00119335:puVar7[-1] = param_1;
   return 0;
}/* CowData<Color>::_unref() */void CowData<Color>::_unref(CowData<Color> *this) {
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
}/* CowData<Vector4>::_unref() */void CowData<Vector4>::_unref(CowData<Vector4> *this) {
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
}/* WARNING: Control flow encountered bad instruction data *//* List<Variant, DefaultAllocator>::~List() */void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* HashMap<String, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Variant::Type> > >::~HashMap() */void HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>>::~HashMap(HashMap<String,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant::Type>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* VariantParser::StreamString::~StreamString() */void VariantParser::StreamString::~StreamString(StreamString *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* HashMap<StringName, Variant::Type, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant::Type> > >::~HashMap() */void HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>>::~HashMap(HashMap<StringName,Variant::Type,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant::Type>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* VariantParser::StreamFile::~StreamFile() */void VariantParser::StreamFile::~StreamFile(StreamFile *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

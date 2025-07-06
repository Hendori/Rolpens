/* TranslationLoaderPO::handles_type(String const&) const */void TranslationLoaderPO::handles_type(TranslationLoaderPO *this, String *param_1) {
   char cVar1;
   cVar1 = String::operator ==(param_1, "Translation");
   if (cVar1 != '\0') {
      return;
   }
   String::operator ==(param_1, "TranslationPO");
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
}/* TranslationLoaderPO::get_recognized_extensions(List<String, DefaultAllocator>*) const */void TranslationLoaderPO::get_recognized_extensions(TranslationLoaderPO *this, List *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   CowData<char32_t> *pCVar4;
   undefined1(*pauVar5)[16];
   long in_FS_OFFSET;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_40 = 2;
   local_48 = &_LC9;
   String::parse_latin1((StrRange*)&local_50);
   if (*(long*)param_1 == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }
   pCVar4 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])pCVar4 = (undefined1[16])0x0;
   *(undefined1(*) [16])( pCVar4 + 0x10 ) = (undefined1[16])0x0;
   if (local_50 != 0) {
      CowData<char32_t>::_ref(pCVar4, (CowData*)&local_50);
   }
   lVar3 = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( pCVar4 + 8 ) = 0;
   *(long**)( pCVar4 + 0x18 ) = plVar1;
   *(long*)( pCVar4 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = pCVar4;
   }
   plVar1[1] = (long)pCVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)pCVar4;
   }
   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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
   local_50 = 0;
   local_48 = &_LC10;
   local_40 = 2;
   String::parse_latin1((StrRange*)&local_50);
   if (*(long*)param_1 == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }
   pCVar4 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])pCVar4 = (undefined1[16])0x0;
   *(undefined1(*) [16])( pCVar4 + 0x10 ) = (undefined1[16])0x0;
   if (local_50 != 0) {
      CowData<char32_t>::_ref(pCVar4, (CowData*)&local_50);
   }
   lVar3 = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( pCVar4 + 8 ) = 0;
   *(long**)( pCVar4 + 0x18 ) = plVar1;
   *(long*)( pCVar4 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = pCVar4;
   }
   plVar1[1] = (long)pCVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)pCVar4;
   }
   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* TranslationLoaderPO::get_resource_type(String const&) const */String *TranslationLoaderPO::get_resource_type(String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   char cVar4;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::get_extension();
   String::to_lower();
   cVar4 = String::operator ==((String*)&local_58, "po");
   if (cVar4 == '\0') {
      String::get_extension();
      String::to_lower();
      cVar4 = String::operator ==((String*)&local_48, "mo");
      pcVar3 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static((void*)( (long)pcVar3 + -0x10 ), false);
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
      if (local_58 != 0) goto LAB_0010048c;
      LAB_00100498:if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_60 + -0x10 ), false);
         }
      }
      if (cVar4 == '\0') {
         *(undefined8*)param_1 = 0;
         local_48 = "";
         local_40 = 0;
         String::parse_latin1((StrRange*)param_1);
         goto LAB_001004da;
      }
   } else {
      if (local_58 != 0) {
         LAB_0010048c:lVar2 = local_58;
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
         goto LAB_00100498;
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
   }
   *(undefined8*)param_1 = 0;
   local_48 = "Translation";
   local_40 = 0xb;
   String::parse_latin1((StrRange*)param_1);
   LAB_001004da:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
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
         } while ( lVar2 != lVar6 );
      }
      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
   CowData<unsigned_char> *pCVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   CowData<unsigned_char> *pCVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   CowData<unsigned_char> *pCVar9;
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
      LAB_00100936:lVar10 = 0;
      pCVar6 = (CowData<unsigned_char>*)0x0;
   } else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }
      if (param_1 == 0) {
         LOCK();
         plVar2 = (long*)( lVar3 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) {
            *(undefined8*)this = 0;
            return;
         }
         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }
      _copy_on_write(this);
      if (lVar10 == 0) goto LAB_00100936;
      uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar6 = (CowData<unsigned_char>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
   }
   uVar5 = param_1 - 1U | param_1 - 1U >> 1;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   pCVar9 = (CowData<unsigned_char>*)( uVar5 | uVar5 >> 0x20 );
   pCVar1 = pCVar9 + 1;
   if (param_1 <= lVar10) {
      if (( pCVar1 != pCVar6 ) && ( iVar4 = iVar4 != 0 )) {
         return;
      }
      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return;
      }
      FUN_0010484e();
      return;
   }
   if (pCVar1 != pCVar6) {
      if (lVar10 == 0) {
         puVar7 = (undefined8*)Memory::alloc_static(( ulong )(pCVar9 + 0x11), false);
         if (puVar7 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }
         puVar8 = puVar7 + 2;
         *puVar7 = 1;
         puVar7[1] = 0;
         *(undefined8**)this = puVar8;
         goto LAB_0010088c;
      }
      pCVar9 = this;
      iVar4 = _realloc(this, (long)pCVar1);
      if (iVar4 != 0) {
         return;
      }
   }
   puVar8 = *(undefined8**)this;
   if (puVar8 == (undefined8*)0x0) {
      resize<false>((long)pCVar9);
      return;
   }
   LAB_0010088c:puVar8[-1] = param_1;
   return;
}/* TranslationLoaderPO::load_translation(Ref<FileAccess>, Error*) */long *TranslationLoaderPO::load_translation(long *param_1, undefined8 *param_2, undefined4 *param_3, undefined8 param_4, undefined8 param_5, String *param_6) {
   long *plVar1;
   CowData<char32_t> *this;
   code *pcVar2;
   char *pcVar3;
   char cVar4;
   char cVar5;
   char cVar6;
   ushort uVar7;
   undefined2 uVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   uint uVar12;
   undefined4 uVar13;
   Resource *this_00;
   long lVar14;
   char *pcVar15;
   ulong uVar16;
   ulong uVar17;
   bool bVar18;
   undefined8 uVar19;
   long lVar20;
   long lVar21;
   bool bVar22;
   int iVar23;
   int iVar24;
   wchar32 wVar25;
   String *pSVar26;
   ulong uVar27;
   uint uVar28;
   int iVar29;
   long *plVar30;
   long in_FS_OFFSET;
   bool bVar31;
   String *local_130;
   int local_128;
   int local_114;
   int local_f8;
   int local_f4;
   StrRange *local_f0;
   StrRange *local_d0;
   long local_b0;
   char *local_a8;
   long local_a0;
   char *local_98;
   long local_90;
   char *local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 != (undefined4*)0x0) {
      *param_3 = 0x10;
   }
   if (*(code**)( *(long*)*param_2 + 0x1a8 ) == FileAccess::get_path) {
      local_b0 = 0;
      local_58 = "";
      local_50[0] = 0;
      String::parse_latin1((StrRange*)&local_b0);
   } else {
      ( **(code**)( *(long*)*param_2 + 0x1a8 ) )(&local_b0);
   }
   local_130 = (String*)&local_58;
   this_00 = (Resource*)operator_new(0x328, "");
   Resource::Resource(this_00);
   *(undefined8*)( this_00 + 0x240 ) = 0;
   *(code**)this_00 = postinitialize_handler;
   local_58 = "en";
   local_50[0] = 2;
   String::parse_latin1((StrRange*)( this_00 + 0x240 ));
   uVar19 = _LC25;
   *(undefined1(*) [16])( this_00 + 0x250 ) = (undefined1[16])0x0;
   *(undefined8*)( this_00 + 0x270 ) = uVar19;
   *(undefined1(*) [16])( this_00 + 0x260 ) = (undefined1[16])0x0;
   StringName::StringName((StringName*)( this_00 + 0x278 ), "_get_message", false);
   this_00[0x280] = (Resource)0x0;
   *(undefined8*)( this_00 + 0x288 ) = 0;
   StringName::StringName((StringName*)( this_00 + 0x290 ), "_get_plural_message", false);
   this_00[0x298] = (Resource)0x0;
   *(code**)this_00 = RefCounted::init_ref;
   *(undefined8*)( this_00 + 0x2a0 ) = 0;
   *(undefined8*)( this_00 + 0x2d0 ) = uVar19;
   *(undefined4*)( this_00 + 0x2d8 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x2b0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x2c0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x2e0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x2f8 ) = (undefined1[16])0x0;
   Array::Array((Array*)( this_00 + 0x308 ));
   uVar19 = _LC28;
   *(undefined1(*) [16])( this_00 + 0x310 ) = (undefined1[16])0x0;
   *(undefined8*)( this_00 + 800 ) = uVar19;
   postinitialize_handler((Object*)this_00);
   cVar4 = RefCounted::init_ref();
   local_a8 = (char*)0x0;
   if (cVar4 == '\0') {
      this_00 = (Resource*)0x0;
   }
   iVar9 = ( **(code**)( *(long*)*param_2 + 0x1f0 ) )();
   lVar21 = *(long*)*param_2;
   iVar24 = (int)local_130;
   if (iVar9 != -0x6afbed22) {
      ( **(code**)( lVar21 + 0x1b8 ) )((long*)*param_2, 0);
      local_a0 = 0;
      local_98 = (char*)0x0;
      local_90 = 0;
      local_60 = 0;
      if (param_3 != (undefined4*)0x0) {
         *param_3 = 0x10;
      }
      bVar18 = false;
      uVar12 = 0;
      local_128 = 2;
      bVar31 = false;
      cVar4 = '\0';
      local_f4 = -1;
      local_f8 = 0;
      LAB_00100c30:local_114 = local_128 + -1;
      ( **(code**)( *(long*)*param_2 + 0x228 ) )(local_130);
      bVar22 = SUB81(local_130, 0);
      String::strip_edges(SUB81((String*)&local_88, 0), bVar22);
      pcVar15 = local_58;
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar30 = (long*)( local_58 + -0x10 );
         *plVar30 = *plVar30 + -1;
         UNLOCK();
         if (*plVar30 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar15 + -0x10, false);
         }
      }
      cVar5 = ( **(code**)( *(long*)*param_2 + 0x1d8 ) )();
      pcVar15 = local_88;
      if (cVar5 != '\0') {
         if (local_88 == (char*)0x0) {
            if (( uVar12 & 0xfffffffd ) != 1) {
               if (uVar12 != 4) {
                  if (uVar12 != 2) goto LAB_00101764;
                  goto LAB_0010251a;
               }
               if (local_f4 == local_f8 + -1) goto LAB_00102439;
            }
         } else {
            if (1 < *(uint*)( local_88 + -8 )) goto LAB_00100f10;
            if (( ( uVar12 & 0xfffffffd ) != 1 ) && ( ( uVar12 != 4 || ( local_f8 + -1 == local_f4 ) ) )) {
               LOCK();
               plVar30 = (long*)( local_88 + -0x10 );
               *plVar30 = *plVar30 + -1;
               UNLOCK();
               if (*plVar30 == 0) {
                  local_88 = (char*)0x0;
                  Memory::free_static(pcVar15 + -0x10, false);
               }
               goto LAB_00101750;
            }
         }
         local_70 = 0;
         plVar30 = (long*)( local_b0 + -0x10 );
         if (local_b0 == 0) goto LAB_00100d14;
         goto LAB_00100ceb;
      }
      LAB_00100f10:cVar6 = String::begins_with((char*)&local_88);
      iVar9 = (int)(String*)&local_88;
      if (cVar6 != '\0') {
         if (( uVar12 - 2 & 0xfffffffd ) != 0) {
            local_70 = 0;
            plVar30 = (long*)( local_b0 + -0x10 );
            if (local_b0 == 0) goto LAB_00101e58;
            goto LAB_00101e2f;
         }
         if (!bVar31) {
            if (( local_a0 != 0 ) && ( 1 < *(uint*)( local_a0 + -8 ) )) {
               if (uVar12 == 2) {
                  pcVar2 = *(code**)( *(long*)this_00 + 0x1e0 );
                  StringName::StringName((StringName*)local_130, (String*)&local_90, false);
                  StringName::StringName((StringName*)&local_70, (String*)&local_98, false);
                  StringName::StringName((StringName*)&local_78, (String*)&local_a0, false);
                  ( *pcVar2 )(this_00, (StringName*)&local_78, (StringName*)&local_70, local_130);
                  if (StringName::configured != '\0') {
                     if (local_78 != (char*)0x0) {
                        StringName::unref();
                        goto joined_r0x00102fc3;
                     }
                     goto joined_r0x00102fd2;
                  }
               } else {
                  if (local_f8 + -1 != local_f4) {
                     local_70 = 0;
                     plVar30 = (long*)( local_b0 + -0x10 );
                     if (local_b0 == 0) goto LAB_00103138;
                     goto LAB_0010310f;
                  }
                  pcVar2 = *(code**)( *(long*)this_00 + 0x1e8 );
                  StringName::StringName((StringName*)local_130, (String*)&local_90, false);
                  StringName::StringName((StringName*)&local_70, (String*)&local_a0, false);
                  ( *pcVar2 )(this_00, (StringName*)&local_70, &local_68, local_130);
                  joined_r0x00102fc3:if (StringName::configured != '\0') {
                     joined_r0x00102fd2:if (( ( local_70 == 0 ) || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }
                  }
               }
            }
         }
         local_50[0] = 0;
         local_58 = "";
         String::parse_latin1((StrRange*)&local_90);
         String::substr((int)&local_70, iVar9);
         String::strip_edges(bVar22, SUB81(&local_70, 0));
         pcVar3 = local_58;
         pcVar15 = local_88;
         if (local_88 == local_58) {
            if (local_88 != (char*)0x0) {
               LOCK();
               plVar30 = (long*)( local_88 + -0x10 );
               *plVar30 = *plVar30 + -1;
               UNLOCK();
               if (*plVar30 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }
            }
         } else {
            if (local_88 != (char*)0x0) {
               LOCK();
               plVar30 = (long*)( local_88 + -0x10 );
               *plVar30 = *plVar30 + -1;
               UNLOCK();
               if (*plVar30 == 0) {
                  local_88 = (char*)0x0;
                  Memory::free_static(pcVar15 + -0x10, false);
               }
            }
            local_88 = local_58;
         }
         lVar21 = local_70;
         cVar4 = cVar6;
         if (local_70 != 0) {
            LOCK();
            plVar30 = (long*)( local_70 + -0x10 );
            *plVar30 = *plVar30 + -1;
            UNLOCK();
            if (*plVar30 == 0) {
               uVar12 = 3;
               local_70 = 0;
               Memory::free_static((void*)( lVar21 + -0x10 ), false);
               goto LAB_0010103b;
            }
         }
         uVar12 = 3;
      }
      LAB_0010103b:cVar6 = String::begins_with((char*)&local_88);
      if (cVar6 == '\0') {
         cVar6 = String::begins_with((char*)&local_88);
         if (cVar6 == '\0') {
            cVar6 = String::begins_with((char*)&local_88);
            if (cVar6 == '\0') {
               cVar6 = String::begins_with((char*)&local_88);
               if (cVar6 == '\0') goto LAB_0010120b;
               if (uVar12 != 1) goto LAB_00101a87;
               LAB_001027be:String::substr((int)&local_70, iVar9);
               String::strip_edges(bVar22, SUB81(&local_70, 0));
               pcVar3 = local_58;
               pcVar15 = local_88;
               if (local_88 == local_58) {
                  if (local_88 != (char*)0x0) {
                     LOCK();
                     plVar30 = (long*)( local_88 + -0x10 );
                     *plVar30 = *plVar30 + -1;
                     UNLOCK();
                     if (*plVar30 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar3 + -0x10, false);
                     }
                  }
               } else {
                  if (local_88 != (char*)0x0) {
                     LOCK();
                     plVar30 = (long*)( local_88 + -0x10 );
                     *plVar30 = *plVar30 + -1;
                     UNLOCK();
                     if (*plVar30 == 0) {
                        local_88 = (char*)0x0;
                        Memory::free_static(pcVar15 + -0x10, false);
                     }
                  }
                  local_88 = local_58;
               }
               lVar21 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar30 = (long*)( local_70 + -0x10 );
                  *plVar30 = *plVar30 + -1;
                  UNLOCK();
                  if (*plVar30 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar21 + -0x10 ), false);
                  }
               }
               uVar12 = 2;
               goto LAB_0010120b;
            }
            if (uVar12 == 4) {
               local_f4 = local_f4 + 1;
               goto LAB_00101155;
            }
            LAB_00102a2d:local_70 = 0;
            plVar30 = (long*)( local_b0 + -0x10 );
            if (local_b0 == 0) goto LAB_00102a73;
            goto LAB_00102a4a;
         }
         if (uVar12 == 1) {
            local_70 = 0;
            plVar30 = (long*)( local_b0 + -0x10 );
            if (local_b0 == 0) goto LAB_001031fb;
            goto LAB_001031d2;
         }
         if (( local_a0 == 0 ) || ( *(uint*)( local_a0 + -8 ) < 2 )) {
            if (( local_a8 == (char*)0x0 ) || ( *(uint*)( local_a8 + -8 ) < 2 )) {
               if (local_a8 != local_98) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)&local_98);
               }
               iVar10 = String::find((char*)&local_a8, 0x1044ce);
               if (iVar10 != -1) {
                  wVar25 = (wchar32)(CowData<char32_t>*)&local_a8;
                  String::find_char(wVar25, 10);
                  String::substr(iVar24, wVar25);
                  TranslationPO::set_plural_rule((String*)this_00);
                  pcVar15 = local_58;
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar30 = (long*)( local_58 + -0x10 );
                     *plVar30 = *plVar30 + -1;
                     UNLOCK();
                     if (*plVar30 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar15 + -0x10, false);
                     }
                  }
                  local_f8 = TranslationPO::get_plural_forms();
               }
            }
            LAB_00102682:local_d0 = (StrRange*)&local_98;
            local_f0 = (StrRange*)&local_a0;
            String::substr((int)&local_70, iVar9);
            String::strip_edges(bVar22, SUB81(&local_70, 0));
            pcVar3 = local_58;
            pcVar15 = local_88;
            if (local_88 == local_58) {
               if (local_88 != (char*)0x0) {
                  LOCK();
                  plVar30 = (long*)( local_88 + -0x10 );
                  *plVar30 = *plVar30 + -1;
                  UNLOCK();
                  if (*plVar30 == 0) {
                     local_58 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }
               }
            } else {
               if (local_88 != (char*)0x0) {
                  LOCK();
                  plVar30 = (long*)( local_88 + -0x10 );
                  *plVar30 = *plVar30 + -1;
                  UNLOCK();
                  if (*plVar30 == 0) {
                     local_88 = (char*)0x0;
                     Memory::free_static(pcVar15 + -0x10, false);
                  }
               }
               local_88 = local_58;
            }
            lVar21 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar30 = (long*)( local_70 + -0x10 );
               *plVar30 = *plVar30 + -1;
               UNLOCK();
               if (*plVar30 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar21 + -0x10 ), false);
               }
            }
            if (cVar4 == '\0') {
               local_50[0] = 0;
               local_58 = "";
               String::parse_latin1((StrRange*)&local_90);
            }
            local_50[0] = 0;
            local_58 = "";
            String::parse_latin1(local_f0);
            local_58 = "";
            local_50[0] = 0;
            String::parse_latin1(local_d0);
            cVar4 = String::begins_with((char*)&local_88);
            if (cVar4 != '\0') goto LAB_00102a2d;
            cVar6 = String::begins_with((char*)&local_88);
            cVar4 = '\0';
            bVar31 = bVar18;
            if (cVar6 != '\0') {
               bVar18 = false;
               goto LAB_001027be;
            }
            uVar12 = 1;
            bVar18 = false;
            goto LAB_0010120b;
         }
         if (( cVar4 != '\0' ) || ( bVar31 )) goto LAB_00102682;
         if (uVar12 == 2) {
            pcVar2 = *(code**)( *(long*)this_00 + 0x1e0 );
            StringName::StringName((StringName*)local_130, (String*)&local_90, false);
            StringName::StringName((StringName*)&local_70, (String*)&local_98, false);
            StringName::StringName((StringName*)&local_78, (String*)&local_a0, false);
            ( *pcVar2 )(this_00, (StringName*)&local_78, (StringName*)&local_70, local_130);
            if (( StringName::configured != '\0' ) && ( ( local_78 == (char*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) )) {
               if (local_70 != 0) {
                  StringName::unref();
                  joined_r0x00103aef:if (StringName::configured == '\0') goto LAB_00102682;
               }
               LAB_00102645:if (local_58 != (char*)0x0) {
                  StringName::unref();
               }
            }
            goto LAB_00102682;
         }
         if (uVar12 != 4) goto LAB_00102682;
         if (local_f8 + -1 == local_f4) {
            pcVar2 = *(code**)( *(long*)this_00 + 0x1e8 );
            StringName::StringName((StringName*)local_130, (String*)&local_90, false);
            StringName::StringName((StringName*)&local_70, (String*)&local_a0, false);
            ( *pcVar2 )(this_00, (StringName*)&local_70, &local_68, local_130);
            if (StringName::configured != '\0') {
               if (local_70 != 0) {
                  StringName::unref();
                  goto joined_r0x00103aef;
               }
               goto LAB_00102645;
            }
            goto LAB_00102682;
         }
         local_70 = 0;
         if (local_b0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_b0);
         }
         local_78 = (char*)0x0;
         String::parse_latin1((String*)&local_78, "Number of \'msgstr[]\' doesn\'t match with number of plural forms: %s:%d.");
         param_6 = (String*)vformat<String,int>(local_130, (String*)&local_78, (CowData<char32_t>*)&local_70, local_114);
         uVar19 = 0xda;
         pcVar15 = "Condition \"plural_index != plural_forms - 1\" is true. Returning: Ref<Resource>()";
         LAB_00102361:_err_print_error("load_translation", "core/io/translation_loader_po.cpp", uVar19, pcVar15, local_130, 0, 0, param_6);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_130);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         goto LAB_00100df0;
      }
      if (local_f8 == 0) {
         local_70 = 0;
         plVar30 = (long*)( local_b0 + -0x10 );
         if (local_b0 == 0) goto LAB_001032be;
         goto LAB_00103295;
      }
      if (uVar12 != 1) {
         local_70 = 0;
         plVar30 = (long*)( local_b0 + -0x10 );
         if (local_b0 == 0) goto LAB_00103381;
         goto LAB_00103358;
      }
      String::substr((int)&local_70, iVar9);
      String::strip_edges(bVar22, SUB81(&local_70, 0));
      pcVar3 = local_58;
      pcVar15 = local_88;
      if (local_88 == local_58) {
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar30 = (long*)( local_88 + -0x10 );
            *plVar30 = *plVar30 + -1;
            UNLOCK();
            if (*plVar30 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
      } else {
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar30 = (long*)( local_88 + -0x10 );
            *plVar30 = *plVar30 + -1;
            UNLOCK();
            if (*plVar30 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar15 + -0x10, false);
            }
         }
         local_88 = local_58;
      }
      lVar21 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar30 = (long*)( local_70 + -0x10 );
         *plVar30 = *plVar30 + -1;
         UNLOCK();
         if (*plVar30 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar21 + -0x10 ), false);
         }
      }
      if (( local_60 != 0 ) && ( *(long*)( local_60 + -8 ) != 0 )) {
         CowData<String>::_unref((CowData<String>*)&local_60);
      }
      CowData<String>::resize<false>((CowData<String>*)&local_60, (long)local_f8);
      cVar6 = String::begins_with((char*)&local_88);
      local_f4 = 0;
      if (cVar6 == '\0') {
         cVar6 = String::begins_with((char*)&local_88);
         if (cVar6 != '\0') {
            LAB_00101a87:local_70 = 0;
            plVar30 = (long*)( local_b0 + -0x10 );
            if (local_b0 == 0) goto LAB_00101acd;
            goto LAB_00101aa4;
         }
         local_f4 = -1;
      } else {
         LAB_00101155:String::substr((int)&local_70, iVar9);
         String::strip_edges(bVar22, SUB81(&local_70, 0));
         pcVar3 = local_58;
         pcVar15 = local_88;
         if (local_88 == local_58) {
            if (local_88 != (char*)0x0) {
               LOCK();
               plVar30 = (long*)( local_88 + -0x10 );
               *plVar30 = *plVar30 + -1;
               UNLOCK();
               if (*plVar30 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }
            }
         } else {
            if (local_88 != (char*)0x0) {
               LOCK();
               plVar30 = (long*)( local_88 + -0x10 );
               *plVar30 = *plVar30 + -1;
               UNLOCK();
               if (*plVar30 == 0) {
                  local_88 = (char*)0x0;
                  Memory::free_static(pcVar15 + -0x10, false);
               }
            }
            local_88 = local_58;
         }
         lVar21 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar30 = (long*)( local_70 + -0x10 );
            *plVar30 = *plVar30 + -1;
            UNLOCK();
            if (*plVar30 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar21 + -0x10 ), false);
            }
         }
      }
      uVar12 = 4;
      LAB_0010120b:if (( ( local_88 != (char*)0x0 ) && ( 1 < *(uint*)( local_88 + -8 ) ) ) && ( cVar6 = String::begins_with((char*)&local_88) ),cVar6 == '\0') {
         cVar6 = String::begins_with((char*)&local_88);
         if (cVar6 != '\x01' || uVar12 == 0) {
            local_70 = 0;
            plVar30 = (long*)( local_b0 + -0x10 );
            if (local_b0 == 0) goto LAB_00103452;
            goto LAB_00103429;
         }
         String::substr(iVar24, iVar9);
         pcVar3 = local_58;
         pcVar15 = local_88;
         if (local_88 == local_58) {
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar30 = (long*)( local_58 + -0x10 );
               *plVar30 = *plVar30 + -1;
               UNLOCK();
               if (*plVar30 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }
               goto LAB_001022c1;
            }
         } else {
            if (local_88 != (char*)0x0) {
               LOCK();
               plVar30 = (long*)( local_88 + -0x10 );
               *plVar30 = *plVar30 + -1;
               UNLOCK();
               if (*plVar30 == 0) {
                  local_88 = (char*)0x0;
                  Memory::free_static(pcVar15 + -0x10, false);
               }
            }
            local_88 = local_58;
            LAB_001022c1:if (local_88 != (char*)0x0) {
               uVar27 = *(ulong*)( local_88 + -8 );
               if ((int)uVar27 != 0) {
                  uVar28 = (int)uVar27 - 1;
                  param_6 = (String*)(ulong)uVar28;
                  bVar22 = false;
                  uVar17 = 0;
                  LAB_001035a8:if ((int)uVar28 <= (int)uVar17) goto LAB_001022d3;
                  if (uVar27 == uVar17) {
                     LAB_001035d7:bVar22 = false;
                     LAB_001035d9:uVar17 = uVar17 + 1;
                     goto LAB_001035a8;
                  }
                  if ((long)uVar27 <= (long)uVar17) goto LAB_001021bc;
                  if (( *(int*)( local_88 + uVar17 * 4 ) == 0x5c ) && ( !bVar22 )) {
                     bVar22 = true;
                     goto LAB_001035d9;
                  }
                  if (( *(int*)( local_88 + uVar17 * 4 ) != 0x22 ) || ( bVar22 )) goto LAB_001035d7;
                  String::substr(iVar24, iVar9);
                  pcVar3 = local_58;
                  pcVar15 = local_88;
                  if (local_88 == local_58) {
                     if (local_88 != (char*)0x0) {
                        LOCK();
                        plVar30 = (long*)( local_88 + -0x10 );
                        *plVar30 = *plVar30 + -1;
                        UNLOCK();
                        if (*plVar30 == 0) {
                           local_58 = (char*)0x0;
                           Memory::free_static(pcVar3 + -0x10, false);
                        }
                     }
                  } else {
                     if (local_88 != (char*)0x0) {
                        LOCK();
                        plVar30 = (long*)( local_88 + -0x10 );
                        *plVar30 = *plVar30 + -1;
                        UNLOCK();
                        if (*plVar30 == 0) {
                           local_88 = (char*)0x0;
                           Memory::free_static(pcVar15 + -0x10, false);
                        }
                     }
                     local_88 = local_58;
                  }
                  String::c_unescape();
                  pcVar3 = local_58;
                  pcVar15 = local_88;
                  if (local_88 == local_58) {
                     if (local_88 != (char*)0x0) {
                        LOCK();
                        plVar30 = (long*)( local_88 + -0x10 );
                        *plVar30 = *plVar30 + -1;
                        UNLOCK();
                        if (*plVar30 == 0) {
                           local_58 = (char*)0x0;
                           Memory::free_static(pcVar3 + -0x10, false);
                        }
                     }
                  } else {
                     if (local_88 != (char*)0x0) {
                        LOCK();
                        plVar30 = (long*)( local_88 + -0x10 );
                        *plVar30 = *plVar30 + -1;
                        UNLOCK();
                        if (*plVar30 == 0) {
                           local_88 = (char*)0x0;
                           Memory::free_static(pcVar15 + -0x10, false);
                        }
                     }
                     local_88 = local_58;
                  }
                  if (uVar12 == 1) {
                     String::operator +=((String*)&local_a0, (String*)&local_88);
                  } else if (uVar12 == 2) {
                     String::operator +=((String*)&local_98, (String*)&local_88);
                  } else if (uVar12 == 3) {
                     String::operator +=((String*)&local_90, (String*)&local_88);
                  } else if (( uVar12 == 4 ) && ( -1 < local_f4 )) {
                     if (local_f8 <= local_f4) {
                        local_70 = 0;
                        if (local_b0 != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_b0);
                        }
                        param_6 = (String*)&local_78;
                        local_78 = (char*)0x0;
                        String::parse_latin1(param_6, "Unexpected plural form while parsing: %s:%d.");
                        vformat<String,int>(local_130, param_6, (CowData<char32_t>*)&local_70, local_114);
                        uVar19 = 0x12a;
                        pcVar15 = "Condition \"plural_index >= plural_forms\" is true. Returning: Ref<Resource>()";
                        goto LAB_00102361;
                     }
                     uVar17 = (ulong)local_f4;
                     if (local_60 == 0) {
                        uVar27 = 0;
                     } else {
                        uVar27 = *(ulong*)( local_60 + -8 );
                        if ((long)uVar17 < (long)uVar27) {
                           String::operator +(local_130, (String*)( local_60 + uVar17 * 8 ));
                           uVar16 = uVar17;
                           if (local_60 != 0) {
                              lVar21 = *(long*)( local_60 + -8 );
                              if ((long)uVar17 < lVar21) {
                                 CowData<String>::_copy_on_write((CowData<String>*)&local_60);
                                 plVar30 = (long*)( uVar17 * 8 + local_60 );
                                 pcVar15 = (char*)*plVar30;
                                 if (pcVar15 != local_58) {
                                    if (pcVar15 != (char*)0x0) {
                                       LOCK();
                                       plVar1 = (long*)( pcVar15 + -0x10 );
                                       *plVar1 = *plVar1 + -1;
                                       UNLOCK();
                                       if (*plVar1 == 0) {
                                          lVar21 = *plVar30;
                                          *plVar30 = 0;
                                          Memory::free_static((void*)( lVar21 + -0x10 ), false);
                                       } else {
                                          *plVar30 = 0;
                                       }
                                    }
                                    *plVar30 = (long)local_58;
                                    local_58 = (char*)0x0;
                                 }
                                 CowData<char32_t>::_unref((CowData<char32_t>*)local_130);
                                 goto LAB_00101247;
                              }
                              goto LAB_00102e45;
                           }
                           goto LAB_00103afa;
                        }
                     }
                     goto LAB_001021bc;
                  }
                  goto LAB_00101247;
               }
            }
         }
         LAB_001022d3:local_70 = 0;
         if (local_b0 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_b0);
         }
         local_78 = (char*)0x0;
         String::parse_latin1((String*)&local_78, "Expected \'\"\' at end of message while parsing: %s:%d.");
         vformat<String,int>(local_130, (String*)&local_78, (CowData<char32_t>*)&local_70, local_114);
         uVar19 = 0x11e;
         pcVar15 = "Condition \"end_pos == -1\" is true. Returning: Ref<Resource>()";
         goto LAB_00102361;
      }
      iVar9 = String::find((char*)&local_88, 0x104517);
      if (iVar9 != -1) {
         bVar18 = true;
      }
      LAB_00101247:pcVar15 = local_88;
      local_114 = local_128;
      if (local_88 != (char*)0x0) {
         LOCK();
         plVar30 = (long*)( local_88 + -0x10 );
         *plVar30 = *plVar30 + -1;
         UNLOCK();
         if (*plVar30 == 0) {
            local_88 = (char*)0x0;
            Memory::free_static(pcVar15 + -0x10, false);
         }
      }
      local_128 = local_128 + 1;
      if (cVar5 != '\0') goto LAB_00101750;
      goto LAB_00100c30;
   }
   uVar7 = ( **(code**)( lVar21 + 0x1e8 ) )();
   uVar8 = ( **(code**)( *(long*)*param_2 + 0x1e8 ) )();
   if (uVar7 < 2) {
      iVar9 = ( **(code**)( *(long*)*param_2 + 0x1f0 ) )();
      iVar10 = ( **(code**)( *(long*)*param_2 + 0x1f0 ) )();
      iVar11 = ( **(code**)( *(long*)*param_2 + 0x1f0 ) )();
      if (iVar9 != 0) {
         local_f8 = 0;
         local_114 = iVar10;
         do {
            local_a0 = 0;
            local_98 = (char*)0x0;
            local_90 = 0;
            local_50[0] = 0;
            ( **(code**)( *(long*)*param_2 + 0x1b8 ) )((long*)*param_2, local_114);
            uVar12 = ( **(code**)( *(long*)*param_2 + 0x1f0 ) )();
            uVar16 = (ulong)uVar12;
            uVar13 = ( **(code**)( *(long*)*param_2 + 0x1f0 ) )();
            CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_50, ( ulong )(uVar12 + 1));
            ( **(code**)( *(long*)*param_2 + 0x1b8 ) )((long*)*param_2, uVar13);
            plVar30 = (long*)*param_2;
            pcVar2 = *(code**)( *plVar30 + 0x220 );
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_50);
            lVar21 = local_50[0];
            ( *pcVar2 )(plVar30, local_50[0], uVar16);
            if (lVar21 == 0) {
               lVar21 = 0;
               goto LAB_00102e45;
            }
            lVar21 = *(long*)( lVar21 + -8 );
            if (lVar21 <= (long)uVar16) goto LAB_00102e45;
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_50);
            lVar21 = local_50[0];
            *(undefined1*)( local_50[0] + uVar16 ) = 0;
            if (uVar12 + 1 == 0) {
               if (local_50[0] != 0) goto LAB_00102b00;
            } else {
               if (local_50[0] == 0) goto LAB_001021a0;
               bVar31 = false;
               iVar23 = 0;
               uVar17 = 0;
               do {
                  uVar27 = *(ulong*)( lVar21 + -8 );
                  if ((long)uVar27 <= (long)uVar17) goto LAB_001021bc;
                  cVar4 = *(char*)( lVar21 + uVar17 );
                  iVar29 = (int)uVar17 + 1;
                  if (cVar4 == '\x04') {
                     String::parse_utf8((char*)&local_90, (int)lVar21, SUB81(uVar17, 0));
                     uVar27 = *(ulong*)( lVar21 + -8 );
                     if ((long)uVar27 <= (long)uVar17) goto LAB_001021bc;
                     cVar4 = *(char*)( lVar21 + uVar17 );
                     iVar23 = iVar29;
                  }
                  if (cVar4 == '\0') {
                     bVar18 = (bool)( SUB81(uVar17, 0) - (char)iVar23 );
                     iVar23 = iVar23 + (int)lVar21;
                     if (bVar31) {
                        String::parse_utf8((char*)&local_98, iVar23, bVar18);
                     } else {
                        String::parse_utf8((char*)&local_a0, iVar23, bVar18);
                     }
                     bVar31 = true;
                     iVar23 = iVar29;
                  }
                  bVar18 = uVar16 != uVar17;
                  uVar17 = uVar17 + 1;
               } while ( bVar18 );
               LAB_00102b00:LOCK();
               plVar30 = (long*)( lVar21 + -0x10 );
               *plVar30 = *plVar30 + -1;
               UNLOCK();
               if (*plVar30 == 0) {
                  Memory::free_static((void*)( local_50[0] + -0x10 ), false);
               }
            }
            local_60 = 0;
            ( **(code**)( *(long*)*param_2 + 0x1b8 ) )((long*)*param_2, ( iVar11 - iVar10 ) + local_114);
            uVar12 = ( **(code**)( *(long*)*param_2 + 0x1f0 ) )();
            uVar16 = (ulong)uVar12;
            uVar13 = ( **(code**)( *(long*)*param_2 + 0x1f0 ) )();
            CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, ( ulong )(uVar12 + 1));
            ( **(code**)( *(long*)*param_2 + 0x1b8 ) )((long*)*param_2, uVar13);
            plVar30 = (long*)*param_2;
            pcVar2 = *(code**)( *plVar30 + 0x220 );
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
            lVar21 = local_60;
            ( *pcVar2 )(plVar30, local_60, uVar16);
            if (lVar21 == 0) goto LAB_00103afa;
            lVar21 = *(long*)( lVar21 + -8 );
            if (lVar21 <= (long)uVar16) goto LAB_00102e45;
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
            lVar21 = local_60;
            *(undefined1*)( local_60 + uVar16 ) = 0;
            iVar23 = (int)local_60;
            if (( local_a0 == 0 ) || ( *(uint*)( local_a0 + -8 ) < 2 )) {
               String::utf8((char*)local_130, iVar23);
               pcVar3 = local_58;
               pcVar15 = local_a8;
               if (local_a8 == local_58) {
                  if (local_a8 != (char*)0x0) {
                     LOCK();
                     plVar30 = (long*)( local_a8 + -0x10 );
                     *plVar30 = *plVar30 + -1;
                     UNLOCK();
                     if (*plVar30 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar3 + -0x10, false);
                     }
                  }
               } else {
                  if (local_a8 != (char*)0x0) {
                     LOCK();
                     plVar30 = (long*)( local_a8 + -0x10 );
                     *plVar30 = *plVar30 + -1;
                     UNLOCK();
                     if (*plVar30 == 0) {
                        local_a8 = (char*)0x0;
                        Memory::free_static(pcVar15 + -0x10, false);
                     }
                  }
                  local_a8 = local_58;
               }
               iVar23 = String::find((char*)&local_a8, 0x1044ce);
               if (iVar23 != -1) {
                  wVar25 = ( wchar32 ) & local_a8;
                  String::find_char(wVar25, 10);
                  String::substr(iVar24, wVar25);
                  TranslationPO::set_plural_rule((String*)this_00);
                  pcVar15 = local_58;
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar30 = (long*)( local_58 + -0x10 );
                     *plVar30 = *plVar30 + -1;
                     UNLOCK();
                     if (*plVar30 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar15 + -0x10, false);
                     }
                  }
               }
            } else {
               local_50[0] = 0;
               if (uVar12 + 1 != 0) {
                  if (local_60 == 0) {
                     LAB_001021a0:uVar17 = 0;
                     uVar27 = 0;
                     LAB_001021bc:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar17, uVar27, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }
                  iVar29 = 0;
                  uVar17 = 0;
                  do {
                     uVar27 = *(ulong*)( lVar21 + -8 );
                     if ((long)uVar27 <= (long)uVar17) goto LAB_001021bc;
                     if (*(char*)( lVar21 + uVar17 ) == '\0') {
                        iVar29 = iVar29 + iVar23;
                        if (( local_98 == (char*)0x0 ) || ( *(uint*)( local_98 + -8 ) < 2 )) {
                           pcVar2 = *(code**)( *(long*)this_00 + 0x1e0 );
                           StringName::StringName((StringName*)&local_70, (String*)&local_90, false);
                           String::utf8((char*)&local_88, iVar29);
                           StringName::StringName((StringName*)&local_78, (String*)&local_88, false);
                           StringName::StringName((StringName*)&local_80, (String*)&local_a0, false);
                           ( *pcVar2 )(this_00, (StringName*)&local_80, (StringName*)&local_78);
                           if (( StringName::configured != '\0' ) && ( ( ( local_80 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_78 != (char*)0x0 ) ) )) {
                              StringName::unref();
                           }
                           pcVar15 = local_88;
                           if (local_88 != (char*)0x0) {
                              LOCK();
                              plVar30 = (long*)( local_88 + -0x10 );
                              *plVar30 = *plVar30 + -1;
                              UNLOCK();
                              if (*plVar30 == 0) {
                                 local_88 = (char*)0x0;
                                 Memory::free_static(pcVar15 + -0x10, false);
                              }
                           }
                           if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
                              StringName::unref();
                           }
                        } else {
                           String::utf8((char*)&local_70, iVar29);
                           if (local_50[0] == 0) {
                              lVar14 = 0;
                           } else {
                              lVar14 = *(long*)( local_50[0] + -8 );
                           }
                           iVar29 = CowData<String>::resize<false>((CowData<String>*)local_50, lVar14 + 1);
                           if (iVar29 == 0) {
                              if (local_50[0] == 0) {
                                 lVar20 = -1;
                                 lVar14 = 0;
                              } else {
                                 lVar14 = *(long*)( local_50[0] + -8 );
                                 lVar20 = lVar14 + -1;
                                 if (-1 < lVar20) {
                                    CowData<String>::_copy_on_write((CowData<String>*)local_50);
                                    this(CowData<char32_t> * )(local_50[0] + lVar20 * 8);
                                    if (*(long*)this != local_70) {
                                       CowData<char32_t>::_ref(this, (CowData*)&local_70);
                                    }
                                    goto LAB_001039e8;
                                 }
                              }
                              _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar20, lVar14, "p_index", "size()", "", false, false);
                           } else {
                              _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                           }
                           LAB_001039e8:lVar14 = local_70;
                           if (local_70 != 0) {
                              LOCK();
                              plVar30 = (long*)( local_70 + -0x10 );
                              *plVar30 = *plVar30 + -1;
                              UNLOCK();
                              if (*plVar30 == 0) {
                                 local_70 = 0;
                                 Memory::free_static((void*)( lVar14 + -0x10 ), false);
                              }
                           }
                        }
                        iVar29 = (int)uVar17 + 1;
                     }
                     bVar31 = uVar16 != uVar17;
                     uVar17 = uVar17 + 1;
                  } while ( bVar31 );
                  if (local_50[0] != 0) {
                     pcVar2 = *(code**)( *(long*)this_00 + 0x1e8 );
                     StringName::StringName((StringName*)&local_70, (String*)&local_90, false);
                     StringName::StringName((StringName*)&local_78, (String*)&local_a0, false);
                     ( *pcVar2 )(this_00, (StringName*)&local_78, local_130);
                     if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
                        StringName::unref();
                     }
                     if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
                        StringName::unref();
                     }
                  }
               }
               CowData<String>::_unref((CowData<String>*)local_50);
            }
            if (local_60 != 0) {
               LOCK();
               plVar30 = (long*)( local_60 + -0x10 );
               *plVar30 = *plVar30 + -1;
               UNLOCK();
               if (*plVar30 == 0) {
                  Memory::free_static((void*)( local_60 + -0x10 ), false);
               }
            }
            lVar21 = local_90;
            if (local_90 != 0) {
               LOCK();
               plVar30 = (long*)( local_90 + -0x10 );
               *plVar30 = *plVar30 + -1;
               UNLOCK();
               if (*plVar30 == 0) {
                  local_90 = 0;
                  Memory::free_static((void*)( lVar21 + -0x10 ), false);
               }
            }
            pcVar15 = local_98;
            if (local_98 != (char*)0x0) {
               LOCK();
               plVar30 = (long*)( local_98 + -0x10 );
               *plVar30 = *plVar30 + -1;
               UNLOCK();
               if (*plVar30 == 0) {
                  local_98 = (char*)0x0;
                  Memory::free_static(pcVar15 + -0x10, false);
               }
            }
            lVar21 = local_a0;
            if (local_a0 != 0) {
               LOCK();
               plVar30 = (long*)( local_a0 + -0x10 );
               *plVar30 = *plVar30 + -1;
               UNLOCK();
               if (*plVar30 == 0) {
                  local_a0 = 0;
                  Memory::free_static((void*)( lVar21 + -0x10 ), false);
               }
            }
            local_f8 = local_f8 + 1;
            local_114 = local_114 + 8;
         } while ( iVar9 != local_f8 );
      }
      goto LAB_0010180d;
   }
   local_68 = 0;
   if (local_b0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b0);
   }
   local_70 = 0;
   local_58 = "Unsupported MO file %s, version %d.%d.";
   local_50[0] = 0x26;
   String::parse_latin1((StrRange*)&local_70);
   vformat<String,unsigned_short,unsigned_short>(local_130, (StrRange*)&local_70, (CowData<char32_t>*)&local_68, uVar7, uVar8);
   pcVar15 = "Condition \"version_maj > 1\" is true. Returning: Ref<Resource>()";
   uVar19 = 0x33;
   LAB_001018b3:_err_print_error("load_translation", "core/io/translation_loader_po.cpp", uVar19, pcVar15, local_130, 0, 0);
   pcVar15 = local_58;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar30 = (long*)( local_58 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static(pcVar15 + -0x10, false);
      }
   }
   lVar21 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar30 = (long*)( local_70 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar21 + -0x10 ), false);
      }
   }
   lVar21 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar30 = (long*)( local_68 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar21 + -0x10 ), false);
      }
   }
   *param_1 = 0;
   goto LAB_00100e63;
   while (true) {
      LOCK();
      lVar14 = *plVar30;
      bVar31 = lVar21 == lVar14;
      if (bVar31) {
         *plVar30 = lVar21 + 1;
         lVar14 = lVar21;
      }
      UNLOCK();
      if (bVar31) break;
      LAB_00100ceb:lVar21 = *plVar30;
      if (lVar21 == 0) goto LAB_00100d14;
   };
   if (lVar14 != -1) {
      local_70 = local_b0;
   }
   LAB_00100d14:local_78 = (char*)0x0;
   local_58 = "Unexpected EOF while reading PO file at: %s:%d.";
   local_50[0] = 0x2f;
   String::parse_latin1((StrRange*)&local_78);
   vformat<String,int>(local_130, (StrRange*)&local_78, &local_70, local_114);
   pcVar15 = "Method/function failed. Returning: Ref<Resource>()";
   uVar19 = 0xac;
   goto LAB_00100d82;
   while (true) {
      LOCK();
      lVar14 = *plVar30;
      bVar31 = lVar21 == lVar14;
      if (bVar31) {
         *plVar30 = lVar21 + 1;
         lVar14 = lVar21;
      }
      UNLOCK();
      if (bVar31) break;
      LAB_00101e2f:lVar21 = *plVar30;
      if (lVar21 == 0) goto LAB_00101e58;
   };
   if (lVar14 != -1) {
      local_70 = local_b0;
   }
   LAB_00101e58:local_78 = (char*)0x0;
   local_58 = "Unexpected \'msgctxt\', was expecting \'msgid_plural\' or \'msgstr\' before \'msgctxt\' while parsing: %s:%d.";
   local_50[0] = 0x65;
   String::parse_latin1((StrRange*)&local_78);
   vformat<String,int>(local_130, (StrRange*)&local_78, &local_70, local_114);
   pcVar15 = "Condition \"status != STATUS_READING_STRING && status != STATUS_READING_PLURAL\" is true. Returning: Ref<Resource>()";
   uVar19 = 0xb3;
   goto LAB_00100d82;
   while (true) {
      LOCK();
      lVar14 = *plVar30;
      bVar31 = lVar21 == lVar14;
      if (bVar31) {
         *plVar30 = lVar21 + 1;
         lVar14 = lVar21;
      }
      UNLOCK();
      if (bVar31) break;
      LAB_0010310f:lVar21 = *plVar30;
      if (lVar21 == 0) goto LAB_00103138;
   };
   if (lVar14 != -1) {
      local_70 = local_b0;
   }
   LAB_00103138:local_78 = (char*)0x0;
   local_58 = "Number of \'msgstr[]\' doesn\'t match with number of plural forms: %s:%d.";
   local_50[0] = 0x46;
   String::parse_latin1((StrRange*)&local_78);
   vformat<String,int>(local_130, (StrRange*)&local_78, &local_70, local_114);
   pcVar15 = "Condition \"plural_index != plural_forms - 1\" is true. Returning: Ref<Resource>()";
   uVar19 = 0xbb;
   goto LAB_00100d82;
   while (true) {
      LOCK();
      lVar14 = *plVar30;
      bVar31 = lVar21 == lVar14;
      if (bVar31) {
         *plVar30 = lVar21 + 1;
         lVar14 = lVar21;
      }
      UNLOCK();
      if (bVar31) break;
      LAB_001031d2:lVar21 = *plVar30;
      if (lVar21 == 0) goto LAB_001031fb;
   };
   if (lVar14 != -1) {
      local_70 = local_b0;
   }
   LAB_001031fb:local_78 = (char*)0x0;
   local_58 = "Unexpected \'msgid\', was expecting \'msgstr\' while parsing: %s:%d.";
   local_50[0] = 0x40;
   String::parse_latin1((StrRange*)&local_78);
   vformat<String,int>(local_130, (StrRange*)&local_78, &local_70, local_114);
   pcVar15 = "Condition \"status == STATUS_READING_ID\" is true. Returning: Ref<Resource>()";
   uVar19 = 0xd3;
   goto LAB_00100d82;
   while (true) {
      LOCK();
      lVar14 = *plVar30;
      bVar31 = lVar21 == lVar14;
      if (bVar31) {
         *plVar30 = lVar21 + 1;
         lVar14 = lVar21;
      }
      UNLOCK();
      if (bVar31) break;
      LAB_00102a4a:lVar21 = *plVar30;
      if (lVar21 == 0) goto LAB_00102a73;
   };
   if (lVar14 != -1) {
      local_70 = local_b0;
   }
   LAB_00102a73:local_78 = (char*)0x0;
   local_58 = "Unexpected \'msgstr[]\', was expecting \'msgid_plural\' before \'msgstr[]\' while parsing: %s:%d.";
   local_50[0] = 0x5b;
   String::parse_latin1((StrRange*)&local_78);
   vformat<String,int>(local_130, (StrRange*)&local_78, &local_70, local_114);
   pcVar15 = "Condition \"status != STATUS_READING_PLURAL\" is true. Returning: Ref<Resource>()";
   uVar19 = 0xf7;
   goto LAB_00100d82;
   while (true) {
      LOCK();
      lVar14 = *plVar30;
      bVar31 = lVar21 == lVar14;
      if (bVar31) {
         *plVar30 = lVar21 + 1;
         lVar14 = lVar21;
      }
      UNLOCK();
      if (bVar31) break;
      LAB_00103295:lVar21 = *plVar30;
      if (lVar21 == 0) goto LAB_001032be;
   };
   if (lVar14 != -1) {
      local_70 = local_b0;
   }
   LAB_001032be:local_78 = (char*)0x0;
   local_58 = "PO file uses \'msgid_plural\' but \'Plural-Forms\' is invalid or missing in header: %s:%d.";
   local_50[0] = 0x56;
   String::parse_latin1((StrRange*)&local_78);
   vformat<String,int>(local_130, (StrRange*)&local_78, &local_70, local_114);
   pcVar15 = "Method/function failed. Returning: Ref<Resource>()";
   uVar19 = 199;
   goto LAB_00100d82;
   while (true) {
      LOCK();
      lVar14 = *plVar30;
      bVar31 = lVar21 == lVar14;
      if (bVar31) {
         *plVar30 = lVar21 + 1;
         lVar14 = lVar21;
      }
      UNLOCK();
      if (bVar31) break;
      LAB_00101aa4:lVar21 = *plVar30;
      if (lVar21 == 0) goto LAB_00101acd;
   };
   if (lVar14 != -1) {
      local_70 = local_b0;
   }
   LAB_00101acd:local_58 = "Unexpected \'msgstr\', was expecting \'msgid\' before \'msgstr\' while parsing: %s:%d.";
   local_78 = (char*)0x0;
   local_50[0] = 0x50;
   String::parse_latin1((StrRange*)&local_78);
   vformat<String,int>(local_130, (StrRange*)&local_78, &local_70, local_114);
   _err_print_error("load_translation", "core/io/translation_loader_po.cpp", 0xfb, "Condition \"status != STATUS_READING_ID\" is true. Returning: Ref<Resource>()", local_130, 0, 0);
   pcVar15 = local_58;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar30 = (long*)( local_58 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static(pcVar15 + -0x10, false);
      }
   }
   pcVar15 = local_78;
   if (local_78 != (char*)0x0) {
      LOCK();
      plVar30 = (long*)( local_78 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_78 = (char*)0x0;
         Memory::free_static(pcVar15 + -0x10, false);
      }
   }
   if (local_70 != 0) {
      LOCK();
      plVar30 = (long*)( local_70 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 != 0) goto LAB_00100df0;
      goto LAB_00101bf0;
   }
   goto LAB_00100df0;
   while (true) {
      LOCK();
      lVar14 = *plVar30;
      bVar31 = lVar21 == lVar14;
      if (bVar31) {
         *plVar30 = lVar21 + 1;
         lVar14 = lVar21;
      }
      UNLOCK();
      if (bVar31) break;
      LAB_00103429:lVar21 = *plVar30;
      if (lVar21 == 0) goto LAB_00103452;
   };
   if (lVar14 != -1) {
      local_70 = local_b0;
   }
   LAB_00103452:local_78 = (char*)0x0;
   plVar30 = (long*)( local_88 + -0x10 );
   if (local_88 != (char*)0x0) {
      do {
         lVar21 = *plVar30;
         if (lVar21 == 0) goto LAB_00103498;
         LOCK();
         lVar14 = *plVar30;
         bVar31 = lVar21 == lVar14;
         if (bVar31) {
            *plVar30 = lVar21 + 1;
            lVar14 = lVar21;
         }
         UNLOCK();
      } while ( !bVar31 );
      if (lVar14 != -1) {
         local_78 = local_88;
      }
   }
   LAB_00103498:local_80 = 0;
   local_58 = "Invalid line \'%s\' while parsing: %s:%d.";
   local_50[0] = 0x27;
   String::parse_latin1((StrRange*)&local_80);
   vformat<String,String,int>(local_130, (StrRange*)&local_80, &local_78, &local_70, local_114);
   _err_print_error("load_translation", "core/io/translation_loader_po.cpp", 0x108, "Condition \"!l.begins_with(\"\\\"\") || status == STATUS_NONE\" is true. Returning: Ref<Resource>()", local_130, 0, 0);
   pcVar15 = local_58;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar30 = (long*)( local_58 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static(pcVar15 + -0x10, false);
      }
   }
   lVar21 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar30 = (long*)( local_80 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar21 + -0x10 ), false);
      }
   }
   goto LAB_00100db2;
   LAB_00101750:if (uVar12 != 2) {
      if (uVar12 != 4) goto LAB_00101764;
      LAB_00102439:if (( ( bVar31 ) || ( local_a0 == 0 ) ) || ( *(uint*)( local_a0 + -8 ) < 2 )) goto LAB_00101764;
      if (local_f8 + -1 == local_f4) {
         pcVar2 = *(code**)( *(long*)this_00 + 0x1e8 );
         StringName::StringName((StringName*)local_130, (String*)&local_90, false);
         StringName::StringName((StringName*)&local_70, (String*)&local_a0, false);
         ( *pcVar2 )(this_00, (StringName*)&local_70, &local_68, local_130);
         if (StringName::configured != '\0') {
            if (local_70 != 0) {
               StringName::unref();
               goto joined_r0x001024ea;
            }
            goto LAB_001024f0;
         }
         goto LAB_00101764;
      }
      local_70 = 0;
      if (local_b0 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_b0);
      }
      local_78 = (char*)0x0;
      String::parse_latin1((String*)&local_78, "Number of \'msgstr[]\' doesn\'t match with number of plural forms: %s:%d.");
      pSVar26 = local_130;
      vformat<String,int>(local_130, (String*)&local_78, (CowData<char32_t>*)&local_70, local_114);
      _err_print_error("load_translation", "core/io/translation_loader_po.cpp", 0x13c, "Condition \"plural_index != plural_forms - 1\" is true. Returning: Ref<Resource>()", local_130, 0, 0, pSVar26);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_130);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      *param_1 = 0;
      goto LAB_00100e10;
   }
   LAB_0010251a:if (( local_a0 == 0 ) || ( *(uint*)( local_a0 + -8 ) < 2 )) {
      if (( ( local_a8 == (char*)0x0 ) || ( *(uint*)( local_a8 + -8 ) < 2 ) ) && ( local_a8 != local_98 )) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_a8, (CowData*)&local_98);
      }
   } else if (!bVar31) {
      pcVar2 = *(code**)( *(long*)this_00 + 0x1e0 );
      StringName::StringName((StringName*)local_130, (String*)&local_90, false);
      StringName::StringName((StringName*)&local_70, (String*)&local_98, false);
      StringName::StringName((StringName*)&local_78, (String*)&local_a0, false);
      ( *pcVar2 )(this_00, (StringName*)&local_78, (StringName*)&local_70, local_130);
      if (( StringName::configured != '\0' ) && ( ( local_78 == (char*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) )) {
         if (local_70 != 0) {
            StringName::unref();
            joined_r0x001024ea:if (StringName::configured == '\0') goto LAB_00101764;
         }
         LAB_001024f0:if (local_58 != (char*)0x0) {
            StringName::unref();
         }
      }
   }
   LAB_00101764:CowData<String>::_unref((CowData<String>*)&local_60);
   lVar21 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar30 = (long*)( local_90 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar21 + -0x10 ), false);
      }
   }
   pcVar15 = local_98;
   if (local_98 != (char*)0x0) {
      LOCK();
      plVar30 = (long*)( local_98 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_98 = (char*)0x0;
         Memory::free_static(pcVar15 + -0x10, false);
      }
   }
   lVar21 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar30 = (long*)( local_a0 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar21 + -0x10 ), false);
      }
   }
   LAB_0010180d:if (( local_a8 == (char*)0x0 ) || ( *(uint*)( local_a8 + -8 ) < 2 )) {
      local_68 = 0;
      if (local_b0 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b0);
      }
      local_70 = 0;
      local_58 = "No config found in file: \'%s\'.";
      local_50[0] = 0x1e;
      String::parse_latin1((StrRange*)&local_70);
      vformat<String>(local_130, (StrRange*)&local_70, (CowData<char32_t>*)&local_68);
      pcVar15 = "Condition \"config.is_empty()\" is true. Returning: Ref<Resource>()";
      uVar19 = 0x142;
      goto LAB_001018b3;
   }
   String::split((char*)local_130, SUB81(&local_a8, 0), 0x10451d);
   for (lVar21 = 0; ( local_50[0] != 0 && ( lVar21 < *(long*)( local_50[0] + -8 ) ) ); lVar21 = lVar21 + 1) {
      String::strip_edges(SUB81(&local_80, 0), (bool)( (char)local_50[0] + (char)lVar21 * '\b' ));
      wVar25 = ( wchar32 ) & local_80;
      iVar9 = String::find_char(wVar25, 0x3a);
      if (iVar9 != -1) {
         iVar9 = (int)&local_68;
         String::substr(iVar9, wVar25);
         bVar31 = SUB81(&local_68, 0);
         String::strip_edges(SUB81((String*)&local_78, 0), bVar31);
         lVar14 = local_68;
         if (local_68 != 0) {
            LOCK();
            plVar30 = (long*)( local_68 + -0x10 );
            *plVar30 = *plVar30 + -1;
            UNLOCK();
            if (*plVar30 == 0) {
               local_68 = 0;
               Memory::free_static((void*)( lVar14 + -0x10 ), false);
            }
         }
         String::substr(iVar9, wVar25);
         String::strip_edges(SUB81(&local_70, 0), bVar31);
         lVar14 = local_68;
         if (local_68 != 0) {
            LOCK();
            plVar30 = (long*)( local_68 + -0x10 );
            *plVar30 = *plVar30 + -1;
            UNLOCK();
            if (*plVar30 == 0) {
               local_68 = 0;
               Memory::free_static((void*)( lVar14 + -0x10 ), false);
            }
         }
         cVar4 = String::operator ==((String*)&local_78, "X-Language");
         if (( cVar4 != '\0' ) || ( cVar4 = String::operator ==((String*)&local_78, "Language") ),cVar4 != '\0') {
            Translation::set_locale((String*)this_00);
         }
         lVar14 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar30 = (long*)( local_70 + -0x10 );
            *plVar30 = *plVar30 + -1;
            UNLOCK();
            if (*plVar30 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar14 + -0x10 ), false);
            }
         }
         pcVar15 = local_78;
         if (local_78 != (char*)0x0) {
            LOCK();
            plVar30 = (long*)( local_78 + -0x10 );
            *plVar30 = *plVar30 + -1;
            UNLOCK();
            if (*plVar30 == 0) {
               local_78 = (char*)0x0;
               Memory::free_static(pcVar15 + -0x10, false);
            }
         }
      }
      lVar14 = local_80;
      if (local_80 != 0) {
         LOCK();
         plVar30 = (long*)( local_80 + -0x10 );
         *plVar30 = *plVar30 + -1;
         UNLOCK();
         if (*plVar30 == 0) {
            local_80 = 0;
            Memory::free_static((void*)( lVar14 + -0x10 ), false);
         }
      }
   }
   if (param_3 != (undefined4*)0x0) {
      *param_3 = 0;
   }
   *param_1 = 0;
   if (this_00 == (Resource*)0x0) {
      CowData<String>::_unref((CowData<String>*)local_50);
      pcVar15 = local_a8;
      if (local_a8 != (char*)0x0) {
         LOCK();
         plVar30 = (long*)( local_a8 + -0x10 );
         *plVar30 = *plVar30 + -1;
         UNLOCK();
         if (*plVar30 == 0) {
            local_a8 = (char*)0x0;
            Memory::free_static(pcVar15 + -0x10, false);
         }
      }
      goto LAB_00100eac;
   }
   lVar21 = __dynamic_cast(this_00, &Object::typeinfo, &Resource::typeinfo, 0);
   if (lVar21 != 0) {
      *param_1 = lVar21;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
         *param_1 = 0;
      }
   }
   CowData<String>::_unref((CowData<String>*)local_50);
   if (local_a8 != (char*)0x0) goto LAB_00100e70;
   goto LAB_00100e9c;
   LAB_00103afa:lVar21 = 0;
   LAB_00102e45:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, uVar16, lVar21, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
   while (true) {
      LOCK();
      lVar14 = *plVar30;
      bVar31 = lVar21 == lVar14;
      if (bVar31) {
         *plVar30 = lVar21 + 1;
         lVar14 = lVar21;
      }
      UNLOCK();
      if (bVar31) break;
      LAB_00103358:lVar21 = *plVar30;
      if (lVar21 == 0) goto LAB_00103381;
   };
   if (lVar14 != -1) {
      local_70 = local_b0;
   }
   LAB_00103381:local_78 = (char*)0x0;
   local_58 = "Unexpected \'msgid_plural\', was expecting \'msgid\' before \'msgid_plural\' while parsing: %s:%d.";
   local_50[0] = 0x5c;
   String::parse_latin1((StrRange*)&local_78);
   vformat<String,int>(local_130, (StrRange*)&local_78, &local_70, local_114);
   pcVar15 = "Method/function failed. Returning: Ref<Resource>()";
   uVar19 = 0xc9;
   LAB_00100d82:_err_print_error("load_translation", "core/io/translation_loader_po.cpp", uVar19, pcVar15, local_130, 0, 0);
   pcVar15 = local_58;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar30 = (long*)( local_58 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static(pcVar15 + -0x10, false);
      }
   }
   LAB_00100db2:pcVar15 = local_78;
   if (local_78 != (char*)0x0) {
      LOCK();
      plVar30 = (long*)( local_78 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_78 = (char*)0x0;
         Memory::free_static(pcVar15 + -0x10, false);
      }
   }
   if (local_70 != 0) {
      LOCK();
      plVar30 = (long*)( local_70 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         LAB_00101bf0:lVar21 = local_70;
         local_70 = 0;
         Memory::free_static((void*)( lVar21 + -0x10 ), false);
      }
   }
   LAB_00100df0:pcVar15 = local_88;
   *param_1 = 0;
   if (local_88 != (char*)0x0) {
      LOCK();
      plVar30 = (long*)( local_88 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_88 = (char*)0x0;
         Memory::free_static(pcVar15 + -0x10, false);
      }
   }
   LAB_00100e10:CowData<String>::_unref((CowData<String>*)&local_60);
   lVar21 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar30 = (long*)( local_90 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar21 + -0x10 ), false);
      }
   }
   pcVar15 = local_98;
   if (local_98 != (char*)0x0) {
      LOCK();
      plVar30 = (long*)( local_98 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_98 = (char*)0x0;
         Memory::free_static(pcVar15 + -0x10, false);
      }
   }
   lVar21 = local_a0;
   if (local_a0 != 0) {
      LOCK();
      plVar30 = (long*)( local_a0 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_a0 = 0;
         Memory::free_static((void*)( lVar21 + -0x10 ), false);
      }
   }
   LAB_00100e63:if (local_a8 != (char*)0x0) {
      LAB_00100e70:pcVar15 = local_a8;
      LOCK();
      plVar30 = (long*)( local_a8 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_a8 = (char*)0x0;
         Memory::free_static(pcVar15 + -0x10, false);
      }
   }
   if (this_00 != (Resource*)0x0) {
      LAB_00100e9c:cVar4 = RefCounted::unreference();
      if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler((Object*)this_00) ),cVar4 != '\0') {
         ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
         Memory::free_static(this_00, false);
      }
   }
   LAB_00100eac:lVar21 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar30 = (long*)( local_b0 + -0x10 );
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (*plVar30 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar21 + -0x10 ), false);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* TranslationLoaderPO::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) */undefined8 *TranslationLoaderPO::load(undefined8 *param_1, undefined8 param_2, long *param_3, undefined8 param_4, undefined4 *param_5) {
   long *plVar1;
   Object *pOVar2;
   long lVar3;
   Object *pOVar4;
   char cVar5;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   Object *local_60;
   long local_58;
   long local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 != (undefined4*)0x0) {
      *param_5 = 0x13;
   }
   FileAccess::open((String*)&local_60, (int)param_3, (Error*)0x1);
   pOVar4 = local_60;
   if (local_60 == (Object*)0x0) {
      local_50 = 0;
      plVar1 = (long*)( *param_3 + -0x10 );
      if (*param_3 != 0) {
         do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001040e8;
            LOCK();
            lVar6 = *plVar1;
            bVar7 = lVar3 == lVar6;
            if (bVar7) {
               *plVar1 = lVar3 + 1;
               lVar6 = lVar3;
            }
            UNLOCK();
         } while ( !bVar7 );
         if (lVar6 != -1) {
            local_50 = *param_3;
         }
      }
      LAB_001040e8:local_58 = 0;
      local_40 = 0x16;
      local_48 = (Object*)0x104533;
      String::parse_latin1((StrRange*)&local_58);
      vformat<String>(&local_48, (StrRange*)&local_58, &local_50);
      _err_print_error(&_LC79, "core/io/translation_loader_po.cpp", 0x160, "Condition \"f.is_null()\" is true. Returning: Ref<Resource>()", &local_48, 0, 0);
      pOVar4 = local_48;
      if (local_48 != (Object*)0x0) {
         LOCK();
         pOVar2 = local_48 + -0x10;
         *(long*)pOVar2 = *(long*)pOVar2 + -1;
         UNLOCK();
         if (*(long*)pOVar2 == 0) {
            local_48 = (Object*)0x0;
            Memory::free_static(pOVar4 + -0x10, false);
         }
      }
      lVar3 = local_58;
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
      *param_1 = 0;
   } else {
      local_48 = local_60;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
         local_48 = (Object*)0x0;
         load_translation(param_1, &local_48, param_5);
      } else {
         load_translation(param_1, &local_48, param_5);
         cVar5 = RefCounted::unreference();
         if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar4) ),cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }
      }
   }
   if (( ( local_60 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_60 + 0x140 ))(local_60);
   Memory::free_static(local_60, false);
}if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return param_1;}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* Object::get_save_class() const */void Object::get_save_class(void) {
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
}/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x107f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}/* ResourceFormatLoader::is_class_ptr(void*) const */uint ResourceFormatLoader::is_class_ptr(ResourceFormatLoader *this, void *param_1) {
   return (uint)CONCAT71(0x107f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}/* ResourceFormatLoader::_getv(StringName const&, Variant&) const */undefined8 ResourceFormatLoader::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ResourceFormatLoader::_setv(StringName const&, Variant const&) */undefined8 ResourceFormatLoader::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ResourceFormatLoader::_validate_propertyv(PropertyInfo&) const */void ResourceFormatLoader::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* ResourceFormatLoader::_property_can_revertv(StringName const&) const */undefined8 ResourceFormatLoader::_property_can_revertv(StringName *param_1) {
   return 0;
}/* ResourceFormatLoader::_property_get_revertv(StringName const&, Variant&) const */undefined8 ResourceFormatLoader::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ResourceFormatLoader::_notificationv(int, bool) */void ResourceFormatLoader::_notificationv(int param_1, bool param_2) {
   return;
}/* ResourceFormatLoader::is_import_valid(String const&) const */undefined8 ResourceFormatLoader::is_import_valid(String *param_1) {
   return 1;
}/* ResourceFormatLoader::is_imported(String const&) const */undefined8 ResourceFormatLoader::is_imported(String *param_1) {
   return 0;
}/* ResourceFormatLoader::get_import_order(String const&) const */undefined8 ResourceFormatLoader::get_import_order(String *param_1) {
   return 0;
}/* TranslationLoaderPO::get_resource_uid(String const&) const */undefined8 TranslationLoaderPO::get_resource_uid(String *param_1) {
   return 0xffffffffffffffff;
}/* TranslationLoaderPO::has_custom_uid_support() const */undefined8 TranslationLoaderPO::has_custom_uid_support(void) {
   return 1;
}/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00107c00;
   Object::~Object((Object*)this);
   return;
}/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00107c00;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}/* ResourceFormatLoader::_get_class_namev() const */undefined8 *ResourceFormatLoader::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001045e3:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001045e3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatLoader");
         goto LAB_0010464e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatLoader");
   LAB_0010464e:return &_get_class_namev();
}/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001046c3:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001046c3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010472e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010472e:return &_get_class_namev();
}/* FileAccess::get_path() const */FileAccess * __thiscall FileAccess::get_path(FileAccess *this){
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
}/* ResourceFormatLoader::get_import_group_file(String const&) const */String *ResourceFormatLoader::get_import_group_file(String *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   String::parse_latin1((StrRange*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010484e(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* ResourceFormatLoader::get_class() const */void ResourceFormatLoader::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* RefCounted::get_class() const */void RefCounted::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
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
}/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
      LAB_00104d18:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00104d18;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00104d36;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)pLVar6;
   joined_r0x00104d36:if (lVar2 == 0) {
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
}/* ResourceFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ResourceFormatLoader::_get_property_listv(ResourceFormatLoader *this, List *param_1, bool param_2) {
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
   local_78 = "ResourceFormatLoader";
   local_70 = 0x14;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ResourceFormatLoader";
   local_98 = 0;
   local_70 = 0x14;
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
      LAB_00105118:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00105118;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00105135;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x00105135:if (lVar2 == 0) {
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
   StringName::StringName((StringName*)&local_78, "ResourceFormatLoader", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatLoader::_initialize_classv() */void ResourceFormatLoader::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() != '\0') goto LAB_0010555b;
   if (RefCounted::initialize_class() == '\0') {
      Object::initialize_class();
      local_68 = 0;
      local_50 = 6;
      local_58 = "Object";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "RefCounted";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 == 0) {
         LAB_0010566a:if ((code*)PTR__bind_methods_0010a010 != RefCounted::_bind_methods) {
            LAB_0010567a:RefCounted::_bind_methods();
         }
      } else {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_0010566a;
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)PTR__bind_methods_0010a010 != RefCounted::_bind_methods) goto LAB_0010567a;
      }
      RefCounted::initialize_class() {
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
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
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
      if ((code*)PTR__bind_methods_0010a008 != RefCounted::_bind_methods) {
         ResourceFormatLoader::_bind_methods();
      }
      initialize_class() {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   /* RefCounted::is_class(String const&) const */
   undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
         } else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010575f;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }
                     UNLOCK();
                  } while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }
               }
            } else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         LAB_0010575f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar6 != '\0') goto LAB_00105813;
      }
      cVar6 = String::operator ==(param_1, "RefCounted");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            } else {
               pcVar3 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     do {
                        lVar5 = *plVar1;
                        if (lVar5 == 0) goto LAB_001058c3;
                        LOCK();
                        lVar8 = *plVar1;
                        bVar9 = lVar5 == lVar8;
                        if (bVar9) {
                           *plVar1 = lVar5 + 1;
                           lVar8 = lVar5;
                        }
                        UNLOCK();
                     } while ( !bVar9 );
                     if (lVar8 != -1) {
                        local_60 = *(long*)( lVar4 + 0x10 );
                     }
                  }
               } else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }
            }
            LAB_001058c3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
            if (cVar6 != '\0') goto LAB_00105813;
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==(param_1, "Object");
            return uVar7;
         }
      } else {
         LAB_00105813:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* ResourceFormatLoader::is_class(String const&) const */
   undefined8 ResourceFormatLoader::is_class(ResourceFormatLoader *this, String *param_1) {
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
         } else {
            __s = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (__s == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
               if (*(long*)( lVar3 + 0x10 ) != 0) {
                  do {
                     lVar4 = *plVar1;
                     if (lVar4 == 0) goto LAB_001059ef;
                     LOCK();
                     lVar6 = *plVar1;
                     bVar8 = lVar4 == lVar6;
                     if (bVar8) {
                        *plVar1 = lVar4 + 1;
                        lVar6 = lVar4;
                     }
                     UNLOCK();
                  } while ( !bVar8 );
                  if (lVar6 != -1) {
                     local_60 = *(long*)( lVar3 + 0x10 );
                  }
               }
            } else {
               local_50 = strlen(__s);
               local_58 = __s;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         LAB_001059ef:cVar5 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar5 != '\0') goto LAB_00105aa3;
      }
      cVar5 = String::operator ==(param_1, "ResourceFormatLoader");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar7;
         }
      } else {
         LAB_00105aa3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* String::parse_latin1(char const*) */
   void String::parse_latin1(String *this, char *param_1) {
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
   /* ResourceFormatLoader::~ResourceFormatLoader() */
   void ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this) {
      bool bVar1;
      bVar1 = StringName::configured != '\0';
      *(code**)this = Variant::Variant;
      if (bVar1) {
         for (int i = 0; i < 10; i++) {
            if (*(long*)( this + ( -24*i + 624 ) ) != 0) {
               StringName::unref();
               if (StringName::configured == '\0') goto LAB_00105ce3;
            }
         }
         if (*(long*)( this + 0x180 ) != 0) {
            StringName::unref();
         }
      }
      LAB_00105ce3:*(undefined***)this = &PTR__initialize_classv_00107c00;
      Object::~Object((Object*)this);
      return;
   }
   /* TranslationLoaderPO::~TranslationLoaderPO() */
   void TranslationLoaderPO::~TranslationLoaderPO(TranslationLoaderPO *this) {
      *(undefined***)this = &PTR__initialize_classv_00107d60;
      ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader*)this);
      return;
   }
   /* TranslationLoaderPO::~TranslationLoaderPO() */
   void TranslationLoaderPO::~TranslationLoaderPO(TranslationLoaderPO *this) {
      *(undefined***)this = &PTR__initialize_classv_00107d60;
      ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader*)this);
      operator_delete(this, 0x288);
      return;
   }
   /* ResourceFormatLoader::~ResourceFormatLoader() */
   void ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this) {
      ~ResourceFormatLoader(this)
      ;;
      operator_delete(this, 0x288);
      return;
   }
   for (int i = 0; i < 25; i++) {
      /* WARNING: Removing unreachable block (ram,0x00105f38) */
   }
   undefined8 *vformat<String,unsigned_short,unsigned_short>(undefined8 *param_1, bool *param_2, String *param_3, ushort param_4, ushort param_5) {
      Variant *pVVar1;
      int iVar2;
      Variant *pVVar3;
      int iVar4;
      long in_FS_OFFSET;
      Array local_f8[8];
      undefined8 local_f0[9];
      Variant local_a8[24];
      Variant local_90[24];
      Variant local_78[24];
      undefined8 local_60;
      undefined1 local_58[16];
      Variant local_48[8];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      Variant::Variant(local_a8, param_3);
      Variant::Variant(local_90, param_4);
      iVar2 = 0;
      Variant::Variant(local_78, param_5);
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      Array::Array(local_f8);
      iVar4 = (int)local_f8;
      Array::resize(iVar4);
      pVVar3 = local_a8;
      do {
         iVar2 = iVar2 + 1;
         pVVar1 = (Variant*)Array::operator [](iVar4);
         Variant::operator =(pVVar1, pVVar3);
         pVVar3 = pVVar3 + 0x18;
      } while ( iVar2 != 3 );
      String::sprintf((Array*)local_f0, param_2);
      *param_1 = local_f0[0];
      pVVar3 = local_48;
      Array::~Array(local_f8);
      do {
         pVVar1 = pVVar3 + -0x18;
         pVVar3 = pVVar3 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }
      } while ( pVVar3 != local_a8 );
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return param_1;
   }
   for (int i = 0; i < 25; i++) {
      /* WARNING: Removing unreachable block (ram,0x00106360) */
   }
   undefined8 *vformat<String,int>(undefined8 *param_1, bool *param_2, String *param_3, int param_4) {
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
   }
   for (int i = 0; i < 25; i++) {
      /* WARNING: Removing unreachable block (ram,0x00106788) */
   }
   undefined8 *vformat<String,String,int>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4, int param_5) {
      Variant *pVVar1;
      int iVar2;
      Variant *pVVar3;
      int iVar4;
      long in_FS_OFFSET;
      Array local_f8[8];
      undefined8 local_f0[9];
      Variant local_a8[24];
      Variant local_90[24];
      Variant local_78[24];
      undefined8 local_60;
      undefined1 local_58[16];
      Variant local_48[8];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      Variant::Variant(local_a8, param_3);
      Variant::Variant(local_90, param_4);
      iVar2 = 0;
      Variant::Variant(local_78, param_5);
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      Array::Array(local_f8);
      iVar4 = (int)local_f8;
      Array::resize(iVar4);
      pVVar3 = local_a8;
      do {
         iVar2 = iVar2 + 1;
         pVVar1 = (Variant*)Array::operator [](iVar4);
         Variant::operator =(pVVar1, pVVar3);
         pVVar3 = pVVar3 + 0x18;
      } while ( iVar2 != 3 );
      String::sprintf((Array*)local_f0, param_2);
      *param_1 = local_f0[0];
      pVVar3 = local_48;
      Array::~Array(local_f8);
      do {
         pVVar1 = pVVar3 + -0x18;
         pVVar3 = pVVar3 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }
      } while ( pVVar3 != local_a8 );
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return param_1;
   }
   for (int i = 0; i < 25; i++) {
      /* WARNING: Removing unreachable block (ram,0x00106b78) */
   }
   undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
   }
   /* CowData<char32_t>::_unref() */
   void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
   /* CowData<String>::_unref() */
   void CowData<String>::_unref(CowData<String> *this) {
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
   }
   /* CowData<String>::_realloc(long) */
   undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
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
   /* Error CowData<String>::resize<false>(long) */
   undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
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
         LAB_00107330:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
      if (lVar10 == 0) goto LAB_00107330;
      if (param_1 <= lVar6) {
         lVar6 = *(long*)this;
         uVar8 = param_1;
         while (lVar6 != 0) {
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
               LAB_00107209:if (lVar10 != lVar7) {
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
               if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00107209;
            };
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
         };
         goto LAB_00107386;
      }
      if (lVar10 == lVar7) {
         LAB_001072af:puVar9 = *(undefined8**)this;
         if (puVar9 == (undefined8*)0x0) {
            LAB_00107386:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar6 = puVar9[-1];
         if (param_1 <= lVar6) goto LAB_0010729a;
      } else {
         if (lVar6 != 0) {
            uVar4 = _realloc(this, lVar10);
            if ((int)uVar4 != 0) {
               return uVar4;
            }
            goto LAB_001072af;
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
      LAB_0010729a:puVar9[-1] = param_1;
      return 0;
   }
   /* CowData<unsigned char>::_realloc(long) */
   undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
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
   /* WARNING: Control flow encountered bad instruction data */
   /* TranslationLoaderPO::~TranslationLoaderPO() */
   void TranslationLoaderPO::~TranslationLoaderPO(TranslationLoaderPO *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* ResourceFormatLoader::~ResourceFormatLoader() */
   void ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this) {
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

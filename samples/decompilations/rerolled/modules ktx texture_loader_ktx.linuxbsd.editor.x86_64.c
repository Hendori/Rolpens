/* ktx_read(ktxStream*, void*, unsigned long) */undefined8 ktx_read(ktxStream *param_1, void *param_2, ulong param_3) {
   ( **(code**)( *(long*)**(undefined8**)( param_1 + 0x40 ) + 0x220 ) )();
   return 0;
}/* ktx_skip(ktxStream*, unsigned long) */undefined8 ktx_skip(ktxStream *param_1, ulong param_2) {
   undefined8 *puVar1;
   ulong uVar2;
   puVar1 = *(undefined8**)( param_1 + 0x40 );
   if (param_2 != 0) {
      uVar2 = 0;
      do {
         uVar2 = uVar2 + 1;
         ( **(code**)( *(long*)*puVar1 + 0x1e0 ) )();
      } while ( param_2 != uVar2 );
   }
   return 0;
}/* ktx_write(ktxStream*, void const*, unsigned long, unsigned long) */undefined8 ktx_write(ktxStream *param_1, void *param_2, ulong param_3, ulong param_4) {
   ( **(code**)( *(long*)**(undefined8**)( param_1 + 0x40 ) + 0x2d0 ) )((long*)**(undefined8**)( param_1 + 0x40 ), param_2, param_3 * param_4);
   return 0;
}/* ktx_getpos(ktxStream*, long*) */undefined8 ktx_getpos(ktxStream *param_1, long *param_2) {
   long lVar1;
   lVar1 = ( **(code**)( *(long*)**(undefined8**)( param_1 + 0x40 ) + 0x1c8 ) )();
   *param_2 = lVar1;
   return 0;
}/* ktx_setpos(ktxStream*, long) */undefined8 ktx_setpos(ktxStream *param_1, long param_2) {
   ( **(code**)( *(long*)**(undefined8**)( param_1 + 0x40 ) + 0x1b8 ) )();
   return 0;
}/* ktx_getsize(ktxStream*, unsigned long*) */undefined8 ktx_getsize(ktxStream *param_1, ulong *param_2) {
   ulong uVar1;
   uVar1 = ( **(code**)( *(long*)**(undefined8**)( param_1 + 0x40 ) + 0x1d0 ) )();
   *param_2 = uVar1;
   return 0;
}/* ktx_destruct(ktxStream*) */void ktx_destruct(ktxStream *param_1) {
   return;
}/* ResourceFormatKTX::handles_type(String const&) const */undefined4 ResourceFormatKTX::handles_type(ResourceFormatKTX *this, String *param_1) {
   undefined4 uVar1;
   long in_FS_OFFSET;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_28, "Texture2D", false);
   StringName::StringName((StringName*)&local_30, param_1, false);
   uVar1 = ClassDB::is_parent_class((StringName*)&local_30, (StringName*)&local_28);
   if (StringName::configured != '\0') {
      if (local_30 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100186;
      }
      if (local_28 != 0) {
         StringName::unref();
      }
   }
   LAB_00100186:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
}/* ResourceFormatKTX::get_recognized_extensions(List<String, DefaultAllocator>*) const */void ResourceFormatKTX::get_recognized_extensions(ResourceFormatKTX *this, List *param_1) {
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
   local_40 = 3;
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
   local_40 = 4;
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
}/* ResourceFormatKTX::get_resource_type(String const&) const */String *ResourceFormatKTX::get_resource_type(String *param_1) {
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
   cVar4 = String::operator ==((String*)&local_58, "ktx");
   if (cVar4 == '\0') {
      String::get_extension();
      String::to_lower();
      cVar4 = String::operator ==((String*)&local_48, "ktx2");
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
      if (local_58 != 0) goto LAB_0010060c;
      LAB_00100618:if (local_60 != 0) {
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
         goto LAB_0010065a;
      }
   } else {
      if (local_58 != 0) {
         LAB_0010060c:lVar2 = local_58;
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
         goto LAB_00100618;
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
   local_48 = "ImageTexture";
   local_40 = 0xc;
   String::parse_latin1((StrRange*)param_1);
   LAB_0010065a:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* ResourceFormatKTX::ResourceFormatKTX() */void ResourceFormatKTX::ResourceFormatKTX(ResourceFormatKTX *this) {
   RefCounted::RefCounted((RefCounted*)this);
   *(code***)this = &Image::_ktx_mem_loader_func;
   StringName::StringName((StringName*)( this + 0x180 ), "_get_recognized_extensions", false);
   this[0x188] = (ResourceFormatKTX)0x0;
   *(undefined8*)( this + 400 ) = 0;
   StringName::StringName((StringName*)( this + 0x198 ), "_recognize_path", false);
   this[0x1a0] = (ResourceFormatKTX)0x0;
   *(undefined8*)( this + 0x1a8 ) = 0;
   StringName::StringName((StringName*)( this + 0x1b0 ), "_handles_type", false);
   this[0x1b8] = (ResourceFormatKTX)0x0;
   *(undefined8*)( this + 0x1c0 ) = 0;
   StringName::StringName((StringName*)( this + 0x1c8 ), "_get_resource_type", false);
   this[0x1d0] = (ResourceFormatKTX)0x0;
   *(undefined8*)( this + 0x1d8 ) = 0;
   StringName::StringName((StringName*)( this + 0x1e0 ), "_get_resource_script_class", false);
   this[0x1e8] = (ResourceFormatKTX)0x0;
   *(undefined8*)( this + 0x1f0 ) = 0;
   StringName::StringName((StringName*)( this + 0x1f8 ), "_get_resource_uid", false);
   this[0x200] = (ResourceFormatKTX)0x0;
   *(undefined8*)( this + 0x208 ) = 0;
   StringName::StringName((StringName*)( this + 0x210 ), "_get_dependencies", false);
   this[0x218] = (ResourceFormatKTX)0x0;
   *(undefined8*)( this + 0x220 ) = 0;
   StringName::StringName((StringName*)( this + 0x228 ), "_get_classes_used", false);
   this[0x230] = (ResourceFormatKTX)0x0;
   *(undefined8*)( this + 0x238 ) = 0;
   StringName::StringName((StringName*)( this + 0x240 ), "_rename_dependencies", false);
   this[0x248] = (ResourceFormatKTX)0x0;
   *(undefined8*)( this + 0x250 ) = 0;
   StringName::StringName((StringName*)( this + 600 ), "_exists", false);
   this[0x260] = (ResourceFormatKTX)0x0;
   *(undefined8*)( this + 0x268 ) = 0;
   StringName::StringName((StringName*)( this + 0x270 ), "_load", false);
   this[0x278] = (ResourceFormatKTX)0x0;
   *(undefined***)this = &PTR__initialize_classv_001047a0;
   *(undefined8*)( this + 0x280 ) = 0;
   Image::_ktx_mem_loader_func = _ktx_mem_loader_func;
   return;
}/* void Ref<Image>::TEMPNAMEPLACEHOLDERVALUE(Ref<Resource> const&) [clone .isra.0] */void Ref<Image>::operator =(Ref<Image> *this, Ref *param_1) {
   Image *pIVar1;
   char cVar2;
   Image *pIVar3;
   pIVar1 = *(Image**)this;
   if (param_1 == (Ref*)0x0) {
      if (pIVar1 == (Image*)0x0) {
         return;
      }
      *(undefined8*)this = 0;
   } else {
      pIVar3 = (Image*)__dynamic_cast(param_1, &Object::typeinfo, &Image::typeinfo, 0);
      if (pIVar1 == pIVar3) {
         return;
      }
      *(Image**)this = pIVar3;
      if (( pIVar3 != (Image*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
         *(undefined8*)this = 0;
      }
      if (pIVar1 == (Image*)0x0) {
         return;
      }
   }
   cVar2 = RefCounted::unreference();
   if (cVar2 == '\0') {
      return;
   }
   memdelete<Image>(pIVar1);
   return;
}/* load_from_file_access(Ref<FileAccess>, Error*) */Ref<Image> *load_from_file_access(Ref<Image> *param_1, undefined8 param_2, undefined4 *param_3) {
   long lVar1;
   uint uVar2;
   uint uVar3;
   code *pcVar4;
   bool bVar5;
   uint *puVar6;
   byte bVar7;
   char cVar8;
   int iVar9;
   int iVar10;
   uint uVar11;
   uint uVar12;
   undefined8 *puVar13;
   void *__src;
   size_t __n;
   long lVar14;
   Object *pOVar15;
   long *plVar16;
   Ref<Image> *pRVar17;
   uint uVar18;
   undefined8 uVar19;
   uint uVar20;
   long lVar21;
   size_t sVar22;
   char *pcVar23;
   ulong in_R11;
   uint uVar24;
   size_t sVar25;
   ulong uVar26;
   long in_FS_OFFSET;
   uint local_114;
   undefined4 local_f8;
   uint *local_d8;
   uint local_d0[2];
   uint local_c8[2];
   long local_c0;
   undefined8 local_b8;
   undefined8 *local_b0;
   undefined8 local_a8;
   code *pcStack_a0;
   code *local_98;
   code *pcStack_90;
   code *local_88;
   code *pcStack_80;
   code *local_78;
   undefined4 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined1 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 3;
   local_60 = 0;
   local_58 = 0;
   local_50 = 0;
   local_48 = 0;
   local_a8 = 0x100000;
   pcStack_a0 = ktx_skip;
   local_98 = ktx_write;
   pcStack_90 = ktx_getpos;
   local_78 = ktx_destruct;
   local_88 = ktx_setpos;
   pcStack_80 = ktx_getsize;
   local_68 = param_2;
   iVar9 = ktxTexture_CreateFromStream(&local_a8, 1, &local_d8);
   puVar6 = local_d8;
   if (iVar9 == 0) {
      if (local_d8[0xc] == 2) {
         if (( *(char*)( (long)local_d8 + 0x21 ) == '\0' ) && ( local_d8[0xf] == 1 )) {
            if ((char)local_d8[8] == '\0') {
               uVar2 = local_d8[9];
               uVar12 = *local_d8;
               uVar26 = (ulong)uVar12;
               uVar3 = local_d8[10];
               local_114 = local_d8[0xd];
               bVar5 = false;
               if (uVar12 == 1) {
                  uVar12 = local_d8[0x1f];
                  if (uVar12 == 0x881b) {
                     switchD_00100ff9_caseD_5a:local_f8 = 0xe;
                  } else if (uVar12 < 0x881c) {
                     if (uVar12 < 0x8233) {
                        if (0x8228 < uVar12) {
                           switch (uVar12) {
                              case 0x8229:
                              case 0x8232:
                    goto switchD_00100ff9_caseD_d;
                              default:
                    goto switchD_00100cfd_caseD_822a;
                              case 0x822b:
                    goto switchD_00100ff9_caseD_14;
                              case 0x822d:
                    goto switchD_00100ff9_caseD_4c;
                              case 0x822e:
                    goto switchD_00100ff9_caseD_64;
                              case 0x822f:
                    goto switchD_00100ff9_caseD_53;
                              case 0x8230:
                    goto switchD_00100ff9_caseD_67;
                           }
                        }
                        if (uVar12 == 0x8051) goto switchD_00100ff9_caseD_1b;
                        if (uVar12 < 0x8052) {
                           if (uVar12 != 0x1909) {
                              if (uVar12 != 0x190a) goto switchD_00100cfd_caseD_822a;
                              goto switchD_00100ff9_caseD_10;
                           }
                           goto switchD_00100ff9_caseD_9;
                        }
                        if (uVar12 != 0x8056) {
                           local_f8 = 5;
                           if (uVar12 == 0x8058) goto LAB_00100d08;
                           goto switchD_00100cfd_caseD_822a;
                        }
                        switchD_00100ff9_caseD_2:local_f8 = 6;
                     } else {
                        if (uVar12 == 0x8814) goto switchD_00100ff9_caseD_6d;
                        if (uVar12 < 0x8815) {
                           if (uVar12 == 0x83f2) goto switchD_00100ff9_caseD_87;
                           if (0x83f2 < uVar12) {
                              if (uVar12 != 0x83f3) goto switchD_00100cfd_caseD_822a;
                              goto switchD_00100ff9_caseD_89;
                           }
                           if (uVar12 - 0x83f0 < 2) goto switchD_00100ff9_caseD_83;
                           switchD_00100cfd_caseD_822a:( *(code*)**(undefined8**)( local_d8 + 2 ) )(local_d8);
                           local_c0 = 0;
                           String::parse_latin1((String*)&local_c0, " of KTX1 texture file.");
                           itos((long)local_d0);
                           operator+((char *)
                           local_c8,(String*)"Unsupported format ";
                           String::operator +((String*)&local_b8, (String*)local_c8);
                           uVar19 = 0xfc;
                           goto LAB_00100f46;
                        }
                        if (uVar12 == 0x8815) goto switchD_00100ff9_caseD_6a;
                        if (uVar12 != 0x881a) goto switchD_00100cfd_caseD_822a;
                        switchD_00100ff9_caseD_61:local_f8 = 0xf;
                     }
                  } else if (uVar12 == 0x8e8f) {
                     switchD_00100ff9_caseD_8f:local_f8 = 0x18;
                  } else {
                     if (0x8e8f < uVar12) {
                        if (uVar12 == 0x93b0) goto switchD_00100ff9_caseD_9d;
                        if (0x93b0 < uVar12) {
                           if (uVar12 != 0x93d0) {
                              if (uVar12 == 0x93d7) goto switchD_00100ff9_caseD_ac;
                              if (uVar12 != 0x93b7) goto switchD_00100cfd_caseD_822a;
                              goto switchD_00100ff9_caseD_ab;
                           }
                           goto switchD_00100ff9_caseD_9e;
                        }
                        if (uVar12 != 0x9274) {
                           if (uVar12 < 0x9275) {
                              if (uVar12 != 0x9270) {
                                 if (uVar12 != 0x9272) goto switchD_00100cfd_caseD_822a;
                                 goto switchD_00100ff9_caseD_9b;
                              }
                              goto switchD_00100ff9_caseD_99;
                           }
                           if (uVar12 != 0x9278) goto switchD_00100cfd_caseD_822a;
                           goto switchD_00100ff9_caseD_97;
                        }
                        goto switchD_00100ff9_caseD_93;
                     }
                     if (uVar12 != 0x8d64) {
                        if (0x8d64 < uVar12) {
                           if (uVar12 == 0x8dbd) goto switchD_00100ff9_caseD_8d;
                           if (uVar12 == 0x8e8c) goto switchD_00100ff9_caseD_91;
                           if (uVar12 != 0x8dbb) goto switchD_00100cfd_caseD_822a;
                           goto switchD_00100ff9_caseD_8b;
                        }
                        if (uVar12 == 0x8c43) goto switchD_00100ff9_caseD_2b;
                        if (uVar12 < 0x8c44) {
                           if (uVar12 == 0x8c3d) goto switchD_00100ff9_caseD_7b;
                           if (uVar12 != 0x8c41) goto switchD_00100cfd_caseD_822a;
                           goto switchD_00100ff9_caseD_1d;
                        }
                        if (uVar12 != 0x8d62) goto switchD_00100cfd_caseD_822a;
                        goto switchD_00100ff9_caseD_4;
                     }
                     local_f8 = 0x19;
                  }
                  goto LAB_00100d08;
               }
               if (uVar12 != 2) {
                  ( *(code*)**(undefined8**)( local_d8 + 2 ) )(local_d8);
                  pcVar23 = "Unsupported version KTX texture file.";
                  uVar19 = 0x1c7;
                  goto LAB_00100b72;
               }
               uVar12 = local_d8[0x1e];
               if (uVar12 == 0) {
                  cVar8 = ktxTexture2_NeedsTranscoding(local_d8);
                  if (cVar8 == '\0') {
                     ( *(code*)**(undefined8**)( local_d8 + 2 ) )();
                     pcVar23 = "Invalid VK_FORMAT_UNDEFINED of KTX2 texture file.";
                     uVar19 = 0x104;
                     goto LAB_00100b72;
                  }
                  uVar12 = ktxTexture2_GetNumComponents(puVar6);
                  if (uVar12 == 3) {
                     iVar9 = ktxTexture2_GetOETF_e();
                     if (iVar9 == 2) goto LAB_0010165b;
                     plVar16 = (long*)RenderingServer::get_singleton();
                     pcVar4 = *(code**)( *plVar16 + 0x12a8 );
                     local_b8 = 0;
                     String::parse_latin1((String*)&local_b8, "bptc");
                     cVar8 = ( *pcVar4 )(plVar16);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                     if (cVar8 == '\0') {
                        plVar16 = (long*)RenderingServer::get_singleton();
                        pcVar4 = *(code**)( *plVar16 + 0x12a8 );
                        local_b8 = 0;
                        String::parse_latin1((String*)&local_b8, "s3tc");
                        cVar8 = ( *pcVar4 )(plVar16, (String*)&local_b8);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                        if (cVar8 == '\0') {
                           plVar16 = (long*)RenderingServer::get_singleton();
                           pcVar4 = *(code**)( *plVar16 + 0x12a8 );
                           local_b8 = 0;
                           String::parse_latin1((String*)&local_b8, "etc2");
                           cVar8 = ( *pcVar4 )(plVar16, (String*)&local_b8);
                           uVar26 = 0;
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                           joined_r0x00101aff:if (cVar8 == '\0') goto LAB_0010165b;
                        }
                     } else {
                        LAB_00101939:uVar26 = 6;
                     }
                     LAB_00101661:iVar9 = ktxTexture2_TranscodeBasis(puVar6, uVar26, 0);
                     if (iVar9 == 0) {
                        uVar12 = puVar6[0x1e];
                        goto LAB_00100fe4;
                     }
                     uVar19 = ( *(code*)**(undefined8**)( local_d8 + 2 ) )();
                     _err_print_error("load_from_file_access", "modules/ktx/texture_loader_ktx.cpp", 0x142, "Method/function failed. Returning: Ref<Resource>()", "Failed to transcode KTX2 texture file.", 0, 0, uVar19);
                  } else {
                     if (uVar12 < 4) {
                        if (uVar12 == 1) {
                           iVar9 = ktxTexture2_GetOETF_e(puVar6);
                           if (iVar9 != 2) {
                              plVar16 = (long*)RenderingServer::get_singleton();
                              pcVar4 = *(code**)( *plVar16 + 0x12a8 );
                              local_b8 = 0;
                              String::parse_latin1((String*)&local_b8, "rgtc");
                              cVar8 = ( *pcVar4 )(plVar16, (String*)&local_b8);
                              uVar26 = 4;
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                              joined_r0x001019a9:if (cVar8 != '\0') goto LAB_00101661;
                           }
                        } else {
                           if (uVar12 != 2) goto LAB_001019b4;
                           iVar9 = ktxTexture2_GetOETF_e(puVar6);
                           if (iVar9 != 2) {
                              plVar16 = (long*)RenderingServer::get_singleton();
                              pcVar4 = *(code**)( *plVar16 + 0x12a8 );
                              local_b8 = 0;
                              String::parse_latin1((String*)&local_b8, "rgtc");
                              cVar8 = ( *pcVar4 )(plVar16, (String*)&local_b8);
                              uVar26 = 5;
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                              goto joined_r0x001019a9;
                           }
                        }
                        LAB_0010165b:uVar26 = 0xd;
                        goto LAB_00101661;
                     }
                     if (uVar12 == 4) {
                        iVar9 = ktxTexture2_GetOETF_e(puVar6);
                        if (iVar9 != 2) {
                           plVar16 = (long*)RenderingServer::get_singleton();
                           pcVar4 = *(code**)( *plVar16 + 0x12a8 );
                           local_b8 = 0;
                           String::parse_latin1((String*)&local_b8, "astc");
                           cVar8 = ( *pcVar4 )(plVar16, (String*)&local_b8);
                           uVar26 = 10;
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                           if (cVar8 == '\0') {
                              plVar16 = (long*)RenderingServer::get_singleton();
                              pcVar4 = *(code**)( *plVar16 + 0x12a8 );
                              local_b8 = 0;
                              String::parse_latin1((String*)&local_b8, "bptc");
                              cVar8 = ( *pcVar4 )(plVar16, (String*)&local_b8);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                              if (cVar8 != '\0') goto LAB_00101939;
                              plVar16 = (long*)RenderingServer::get_singleton();
                              pcVar4 = *(code**)( *plVar16 + 0x12a8 );
                              local_b8 = 0;
                              String::parse_latin1((String*)&local_b8, "s3tc");
                              cVar8 = ( *pcVar4 )(plVar16, (String*)&local_b8);
                              uVar26 = 3;
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                              if (cVar8 == '\0') {
                                 plVar16 = (long*)RenderingServer::get_singleton();
                                 pcVar4 = *(code**)( *plVar16 + 0x12a8 );
                                 local_b8 = 0;
                                 String::parse_latin1((String*)&local_b8, "etc2");
                                 cVar8 = ( *pcVar4 )(plVar16, (String*)&local_b8);
                                 uVar26 = 1;
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                                 goto joined_r0x00101aff;
                              }
                           }
                           goto LAB_00101661;
                        }
                        goto LAB_0010165b;
                     }
                     LAB_001019b4:uVar19 = ( *(code*)**(undefined8**)( local_d8 + 2 ) )();
                     _err_print_error("load_from_file_access", "modules/ktx/texture_loader_ktx.cpp", 0x13c, "Method/function failed. Returning: Ref<Resource>()", "Invalid components of KTX2 texture file.", 0, 0, uVar19);
                  }
                  LAB_00100f79:*(undefined8*)param_1 = 0;
                  Ref<Image>::operator =(param_1, (Ref*)0x0);
                  goto LAB_00100b90;
               }
               LAB_00100fe4:switch (uVar12) {
                  default:
            (*(code *)**(undefined8 **)(local_d8 + 2))();
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0," of KTX2 texture file.");
            itos((long)local_d0);
                  operator+((char *)
                  local_c8,(String*)"Unsupported format ";
                  String::operator +((String*)&local_b8, (String*)local_c8);
                  uVar19 = 0x1c0;
                  in_R11 = uVar26;
                  LAB_00100f46:_err_print_error("load_from_file_access", "modules/ktx/texture_loader_ktx.cpp", uVar19, "Method/function failed. Returning: Ref<Resource>()", (CowData<char32_t>*)&local_b8, 0, 0, in_R11);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                  goto LAB_00100f79;
                  case 2:
            goto switchD_00100ff9_caseD_2;
                  case 4:
switchD_00100ff9_caseD_4:
            local_f8 = 7;
            break;
                  case 9:
switchD_00100ff9_caseD_9:
            local_f8 = 0;
            break;
                  case 0xd:
switchD_00100ff9_caseD_d:
            local_f8 = 2;
            break;
                  case 0x10:
switchD_00100ff9_caseD_10:
            local_f8 = 1;
            break;
                  case 0x14:
switchD_00100ff9_caseD_14:
            local_f8 = 3;
            break;
                  case 0x1b:
switchD_00100ff9_caseD_1b:
            local_f8 = 4;
            break;
                  case 0x1d:
switchD_00100ff9_caseD_1d:
            bVar5 = true;
            local_f8 = 4;
            break;
                  case 0x2b:
switchD_00100ff9_caseD_2b:
            bVar5 = true;
                  case 0x29:
            local_f8 = 5;
            break;
                  case 0x4c:
switchD_00100ff9_caseD_4c:
            local_f8 = 0xc;
            break;
                  case 0x53:
switchD_00100ff9_caseD_53:
            local_f8 = 0xd;
            break;
                  case 0x5a:
            goto switchD_00100ff9_caseD_5a;
                  case 0x61:
            goto switchD_00100ff9_caseD_61;
                  case 100:
switchD_00100ff9_caseD_64:
            local_f8 = 8;
            break;
                  case 0x67:
switchD_00100ff9_caseD_67:
            local_f8 = 9;
            break;
                  case 0x6a:
switchD_00100ff9_caseD_6a:
            local_f8 = 10;
            break;
                  case 0x6d:
switchD_00100ff9_caseD_6d:
            local_f8 = 0xb;
            break;
                  case 0x7b:
switchD_00100ff9_caseD_7b:
            local_f8 = 0x10;
            break;
                  case 0x83:
                  case 0x85:
switchD_00100ff9_caseD_83:
            local_f8 = 0x11;
            break;
                  case 0x87:
switchD_00100ff9_caseD_87:
            local_f8 = 0x12;
            break;
                  case 0x89:
switchD_00100ff9_caseD_89:
            local_f8 = 0x13;
            break;
                  case 0x8b:
switchD_00100ff9_caseD_8b:
            local_f8 = 0x14;
            break;
                  case 0x8d:
switchD_00100ff9_caseD_8d:
            local_f8 = 0x15;
            break;
                  case 0x8f:
            goto switchD_00100ff9_caseD_8f;
                  case 0x90:
            local_f8 = 0x17;
            break;
                  case 0x91:
switchD_00100ff9_caseD_91:
            local_f8 = 0x16;
            break;
                  case 0x93:
switchD_00100ff9_caseD_93:
            local_f8 = 0x1e;
            break;
                  case 0x97:
switchD_00100ff9_caseD_97:
            local_f8 = 0x1f;
            break;
                  case 0x99:
switchD_00100ff9_caseD_99:
            local_f8 = 0x1a;
            break;
                  case 0x9b:
switchD_00100ff9_caseD_9b:
            local_f8 = 0x1c;
            break;
                  case 0x9d:
switchD_00100ff9_caseD_9d:
            local_f8 = 0x24;
            break;
                  case 0x9e:
switchD_00100ff9_caseD_9e:
            local_f8 = 0x23;
            break;
                  case 0xab:
switchD_00100ff9_caseD_ab:
            local_f8 = 0x26;
            break;
                  case 0xac:
switchD_00100ff9_caseD_ac:
            local_f8 = 0x25;
               }
               LAB_00100d08:local_b0 = (undefined8*)0x0;
               iVar9 = Image::get_format_pixel_size(local_f8);
               bVar7 = Image::get_format_pixel_rshift(local_f8);
               iVar10 = Image::get_format_block_size(local_f8);
               Image::get_format_min_pixel_size(local_f8, local_d0, local_c8);
               if (local_114 != 0) {
                  uVar20 = 0;
                  uVar12 = uVar2;
                  uVar24 = uVar3;
                  do {
                     uVar26 = ( **(code**)( *(long*)( local_d8 + 2 ) + 0x18 ) )(local_d8, uVar20);
                     uVar18 = uVar12;
                     if ((int)uVar12 % iVar10 != 0) {
                        uVar18 = ( iVar10 - (int)uVar12 % iVar10 ) + uVar12;
                     }
                     uVar11 = uVar24;
                     if ((int)uVar24 % iVar10 != 0) {
                        uVar11 = ( iVar10 - (int)uVar24 % iVar10 ) + uVar24;
                     }
                     if (uVar26 != ( ulong )((long)(int)uVar11 * (long)(int)uVar18 * (long)iVar9) >> ( bVar7 & 0x3f )) {
                        if (uVar20 == 0) {
                           ( *(code*)**(undefined8**)( local_d8 + 2 ) )();
                           pcVar23 = "Unsupported padded KTX texture file.";
                           uVar19 = 0x1e0;
                           goto LAB_00100e5a;
                        }
                        local_114 = 1;
                        break;
                     }
                     uVar18 = (int)uVar12 >> 1;
                     uVar12 = local_d0[0];
                     if ((int)local_d0[0] <= (int)uVar18) {
                        uVar12 = uVar18;
                     }
                     uVar18 = (int)uVar24 >> 1;
                     uVar24 = local_c8[0];
                     if ((int)local_c8[0] <= (int)uVar18) {
                        uVar24 = uVar18;
                     }
                     uVar20 = uVar20 + 1;
                  } while ( local_114 != uVar20 );
                  uVar12 = 0;
                  do {
                     __n = ( **(code**)( *(long*)( local_d8 + 2 ) + 0x18 ) )(local_d8, uVar12);
                     iVar9 = ( **(code**)( *(long*)( local_d8 + 2 ) + 8 ) )(local_d8, uVar12, 0, 0, &local_c0);
                     puVar13 = local_b0;
                     if (iVar9 != 0) {
                        ( *(code*)**(undefined8**)( local_d8 + 2 ) )();
                        pcVar23 = "Invalid KTX texture file.";
                        uVar19 = 0x1ee;
                        LAB_00100e5a:_err_print_error("load_from_file_access", "modules/ktx/texture_loader_ktx.cpp", uVar19, "Method/function failed. Returning: Ref<Resource>()", pcVar23, 0, 0);
                        *(undefined8*)param_1 = 0;
                        goto LAB_00100e76;
                     }
                     if (local_b0 == (undefined8*)0x0) {
                        if ((long)__n < 0) {
                           lVar21 = 0;
                           goto LAB_00101319;
                        }
                        if (__n == 0) {
                           lVar21 = 0;
                        } else {
                           lVar21 = 0;
                           CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_b0);
                           sVar22 = 0;
                           lVar14 = 0;
                           sVar25 = __n;
                           LAB_0010124a:uVar26 = sVar25 - 1 | sVar25 - 1 >> 1;
                           uVar26 = uVar26 | uVar26 >> 2;
                           uVar26 = uVar26 | uVar26 >> 4;
                           uVar26 = uVar26 | uVar26 >> 8;
                           uVar26 = uVar26 | uVar26 >> 0x10;
                           uVar26 = uVar26 | uVar26 >> 0x20;
                           lVar1 = uVar26 + 1;
                           if ((long)sVar22 < (long)sVar25) {
                              if (lVar1 == lVar14) {
                                 LAB_001012fa:if (local_b0 == (undefined8*)0x0) {
                                    pRVar17 = (Ref<Image>*)FUN_00102944();
                                    return pRVar17;
                                 }
                                 LAB_0010112c:local_b0[-1] = sVar25;
                              } else if (sVar22 == 0) {
                                 puVar13 = (undefined8*)Memory::alloc_static(uVar26 + 0x11, false);
                                 if (puVar13 != (undefined8*)0x0) {
                                    local_b0 = puVar13 + 2;
                                    *puVar13 = 1;
                                    puVar13[1] = 0;
                                    goto LAB_0010112c;
                                 }
                                 _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                              } else {
                                 iVar9 = CowData<unsigned_char>::_realloc((CowData<unsigned_char>*)&local_b0, lVar1);
                                 if (iVar9 == 0) goto LAB_001012fa;
                              }
                           } else if (( lVar1 == lVar14 ) || ( iVar9 = CowData<unsigned_char>::_realloc((CowData<unsigned_char>*)&local_b0, lVar1) ),iVar9 == 0) {
                              if (local_b0 == (undefined8*)0x0) {
                                 pRVar17 = (Ref<Image>*)load_from_file_access();
                                 return pRVar17;
                              }
                              local_b0[-1] = sVar25;
                           }
                        }
                     } else {
                        sVar22 = local_b0[-1];
                        lVar21 = (long)(int)sVar22;
                        sVar25 = lVar21 + __n;
                        if (-1 < (long)sVar25) {
                           if (sVar25 != sVar22) {
                              if (sVar25 != 0) {
                                 CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_b0);
                                 if (sVar22 == 0) {
                                    lVar21 = 0;
                                    lVar14 = 0;
                                 } else {
                                    uVar26 = sVar22 - 1 | sVar22 - 1 >> 1;
                                    uVar26 = uVar26 | uVar26 >> 2;
                                    uVar26 = uVar26 | uVar26 >> 4;
                                    uVar26 = uVar26 | uVar26 >> 8;
                                    uVar26 = uVar26 | uVar26 >> 0x10;
                                    lVar14 = ( uVar26 | uVar26 >> 0x20 ) + 1;
                                 }
                                 goto LAB_0010124a;
                              }
                              LOCK();
                              plVar16 = local_b0 + -2;
                              *plVar16 = *plVar16 + -1;
                              UNLOCK();
                              if (*plVar16 == 0) {
                                 local_b0 = (undefined8*)0x0;
                                 Memory::free_static(puVar13 + -2, false);
                              } else {
                                 local_b0 = (undefined8*)0x0;
                              }
                           }
                           goto LAB_00101130;
                        }
                        LAB_00101319:_err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
                     }
                     LAB_00101130:uVar12 = uVar12 + 1;
                     lVar14 = ktxTexture_GetData(local_d8);
                     __src = (void*)( lVar14 + local_c0 );
                     CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_b0);
                     memcpy((void*)( (long)local_b0 + lVar21 ), __src, __n);
                  } while ( uVar12 != local_114 );
               }
               pOVar15 = (Object*)operator_new(0x268, "");
               Image::Image((Image*)pOVar15, uVar2, uVar3, local_114 != 1, local_f8, &local_b8);
               postinitialize_handler(pOVar15);
               cVar8 = RefCounted::init_ref();
               if (cVar8 == '\0') {
                  pOVar15 = (Object*)0x0;
               }
               if (bVar5) {
                  Image::srgb_to_linear();
                  if (param_3 != (undefined4*)0x0) goto LAB_00101401;
                  ( *(code*)**(undefined8**)( local_d8 + 2 ) )();
                  LAB_00101423:*(Object**)param_1 = pOVar15;
                  cVar8 = RefCounted::reference();
                  if (cVar8 == '\0') {
                     *(undefined8*)param_1 = 0;
                  }
                  cVar8 = RefCounted::unreference();
                  if (cVar8 != '\0') {
                     memdelete<Image>((Image*)pOVar15);
                  }
               } else {
                  if (param_3 != (undefined4*)0x0) {
                     LAB_00101401:*param_3 = 0;
                  }
                  ( *(code*)**(undefined8**)( local_d8 + 2 ) )();
                  *(undefined8*)param_1 = 0;
                  if (pOVar15 != (Object*)0x0) goto LAB_00101423;
               }
               LAB_00100e76:puVar13 = local_b0;
               if (local_b0 != (undefined8*)0x0) {
                  LOCK();
                  plVar16 = local_b0 + -2;
                  *plVar16 = *plVar16 + -1;
                  UNLOCK();
                  if (*plVar16 == 0) {
                     local_b0 = (undefined8*)0x0;
                     Memory::free_static(puVar13 + -2, false);
                  }
               }
               goto LAB_00100b90;
            }
            ( *(code*)**(undefined8**)( local_d8 + 2 ) )(local_d8);
            pcVar23 = "Unsupported array KTX texture file.";
            uVar19 = 0x75;
         } else {
            ( *(code*)**(undefined8**)( local_d8 + 2 ) )(local_d8);
            pcVar23 = "Unsupported cube map KTX texture file.";
            uVar19 = 0x70;
         }
      } else {
         ( *(code*)**(undefined8**)( local_d8 + 2 ) )(local_d8);
         pcVar23 = "Unsupported non-2D KTX texture file.";
         uVar19 = 0x6b;
      }
   } else {
      pcVar23 = "Invalid or unsupported KTX texture file.";
      uVar19 = 0x66;
   }
   LAB_00100b72:_err_print_error("load_from_file_access", "modules/ktx/texture_loader_ktx.cpp", uVar19, "Method/function failed. Returning: Ref<Resource>()", pcVar23, 0, 0);
   *(undefined8*)param_1 = 0;
   LAB_00100b90:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatKTX::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) */long *ResourceFormatKTX::load(long *param_1, undefined8 param_2, int param_3, undefined8 param_4, undefined4 *param_5) {
   Object *pOVar1;
   long *plVar2;
   Image *pIVar3;
   Image *pIVar4;
   Object *pOVar5;
   char cVar6;
   long lVar7;
   Object *pOVar8;
   long in_FS_OFFSET;
   int local_74;
   Object *local_70;
   long local_68;
   Image *local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 != (undefined4*)0x0) {
      *param_5 = 0x13;
   }
   FileAccess::open((String*)&local_70, param_3, (Error*)0x1);
   pOVar8 = local_70;
   if (local_70 == (Object*)0x0) {
      *param_1 = 0;
      goto LAB_00101d71;
   }
   cVar6 = RefCounted::reference();
   if (cVar6 == '\0') {
      pOVar8 = (Object*)0x0;
   }
   if (param_5 != (undefined4*)0x0) {
      *param_5 = 0x10;
   }
   if (local_74 == 0) {
      local_58 = (Object*)0x0;
      if (local_70 != (Object*)0x0) {
         local_58 = local_70;
         cVar6 = RefCounted::reference();
         if (cVar6 == '\0') {
            local_58 = (Object*)0x0;
         }
      }
      load_from_file_access(&local_60, (Ref*)&local_58, param_5);
      if (local_58 != (Object*)0x0) {
         cVar6 = RefCounted::unreference();
         pOVar5 = local_58;
         if (cVar6 != '\0') {
            cVar6 = predelete_handler(local_58);
            if (cVar6 != '\0') {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }
         }
      }
      ImageTexture::create_from_image((Ref*)&local_58);
      *param_1 = 0;
      if (local_58 != (Object*)0x0) {
         lVar7 = __dynamic_cast(local_58, &Object::typeinfo, &Resource::typeinfo, 0);
         if (lVar7 != 0) {
            *param_1 = lVar7;
            cVar6 = RefCounted::reference();
            if (cVar6 == '\0') {
               *param_1 = 0;
            }
            if (local_58 == (Object*)0x0) goto LAB_00101d32;
         }
         cVar6 = RefCounted::unreference();
         pOVar5 = local_58;
         if (cVar6 != '\0') {
            cVar6 = predelete_handler(local_58);
            if (cVar6 != '\0') {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }
         }
      }
      LAB_00101d32:if (local_60 != (Image*)0x0) {
         cVar6 = RefCounted::unreference();
         if (cVar6 != '\0') {
            memdelete<Image>(local_60);
         }
      }
   } else {
      local_60 = (Image*)0x0;
      local_58 = (Object*)&_LC48;
      local_50 = 2;
      String::parse_latin1((StrRange*)&local_60);
      operator+((char *)&
      local_68,(String*)"Unable to open KTX texture file \'";
      String::operator +((String*)&local_58, (String*)&local_68);
      _err_print_error(&_LC51, "modules/ktx/texture_loader_ktx.cpp", 0x212, "Condition \"err != OK\" is true. Returning: Ref<Resource>()", (String*)&local_58, 0, 0);
      pOVar5 = local_58;
      if (local_58 != (Object*)0x0) {
         LOCK();
         pOVar1 = local_58 + -0x10;
         *(long*)pOVar1 = *(long*)pOVar1 + -1;
         UNLOCK();
         if (*(long*)pOVar1 == 0) {
            local_58 = (Object*)0x0;
            Memory::free_static(pOVar5 + -0x10, false);
         }
      }
      lVar7 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar2 = (long*)( local_68 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }
      }
      pIVar4 = local_60;
      if (local_60 != (Image*)0x0) {
         LOCK();
         pIVar3 = local_60 + -0x10;
         *(long*)pIVar3 = *(long*)pIVar3 + -1;
         UNLOCK();
         if (*(long*)pIVar3 == 0) {
            local_60 = (Image*)0x0;
            Memory::free_static(pIVar4 + -0x10, false);
         }
      }
      *param_1 = 0;
   }
   if (pOVar8 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(pOVar8);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
            Memory::free_static(pOVar8, false);
         }
      }
   }
   if (local_70 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_70);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)local_70 + 0x140 ) )(local_70);
            Memory::free_static(local_70, false);
         }
      }
   }
   LAB_00101d71:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
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
   return (uint)CONCAT71(0x1049, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1049, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
   return (uint)CONCAT71(0x1049, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1049, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1049, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
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
}/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00104640;
   Object::~Object((Object*)this);
   return;
}/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00104640;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001026d3:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001026d3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010273e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010273e:return &_get_class_namev();
}/* ResourceFormatLoader::_get_class_namev() const */undefined8 *ResourceFormatLoader::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001027c3:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001027c3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatLoader");
         goto LAB_0010282e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatLoader");
   LAB_0010282e:return &_get_class_namev();
}/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = Memory::free_static;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }
   }
   Resource::~Resource((Resource*)this);
   return;
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
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* load_from_file_access(Ref<FileAccess>, Error*) [clone .cold] */void load_from_file_access(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00102944(void) {
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
}/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_00102b7f;
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
      LAB_00102b7f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_00102c33;
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
                     if (lVar5 == 0) goto LAB_00102ce3;
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
         LAB_00102ce3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar6 != '\0') goto LAB_00102c33;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }
   } else {
      LAB_00102c33:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ResourceFormatLoader::is_class(String const&) const */undefined8 ResourceFormatLoader::is_class(ResourceFormatLoader *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_00102e0f;
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
      LAB_00102e0f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar5 != '\0') goto LAB_00102ec3;
   }
   cVar5 = String::operator ==(param_1, "ResourceFormatLoader");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }
   } else {
      LAB_00102ec3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
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
      LAB_00103228:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00103228;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00103246;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)pLVar6;
   joined_r0x00103246:if (lVar2 == 0) {
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
      LAB_00103628:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00103628;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00103645;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x00103645:if (lVar2 == 0) {
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
   if (initialize_class() != '\0') goto LAB_00103a6b;
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
         LAB_00103b7a:if ((code*)PTR__bind_methods_00107010 != RefCounted::_bind_methods) {
            LAB_00103b8a:RefCounted::_bind_methods();
         }
      } else {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00103b7a;
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)PTR__bind_methods_00107010 != RefCounted::_bind_methods) goto LAB_00103b8a;
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
      if ((code*)PTR__bind_methods_00107008 != RefCounted::_bind_methods) {
         ResourceFormatLoader::_bind_methods();
      }
      initialize_class() {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
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
      *(undefined8**)this = &Image::_ktx_mem_loader_func;
      if (bVar1) {
         for (int i_1416 = 0; i_1416 < 10; i_1416++) {
            if (*(long*)( this + ( -24*i_1416 + 624 ) ) != 0) {
               StringName::unref();
               if (StringName::configured == '\0') goto LAB_00103de3;
            }
         }
         if (*(long*)( this + 0x180 ) != 0) {
            StringName::unref();
         }
      }
      LAB_00103de3:*(undefined***)this = &PTR__initialize_classv_00104640;
      Object::~Object((Object*)this);
      return;
   }
   /* ResourceFormatKTX::~ResourceFormatKTX() */
   void ResourceFormatKTX::~ResourceFormatKTX(ResourceFormatKTX *this) {
      *(undefined***)this = &PTR__initialize_classv_001047a0;
      ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader*)this);
      return;
   }
   /* ResourceFormatKTX::~ResourceFormatKTX() */
   void ResourceFormatKTX::~ResourceFormatKTX(ResourceFormatKTX *this) {
      *(undefined***)this = &PTR__initialize_classv_001047a0;
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
   /* Image::~Image() */
   void Image::~Image(Image *this) {
      long *plVar1;
      long lVar2;
      *(code**)this = Memory::free_static;
      if (*(long*)( this + 0x250 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 0x250 );
            *(undefined8*)( this + 0x250 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      Resource::~Resource((Resource*)this);
      operator_delete(this, 0x268);
      return;
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
   /* void memdelete<Image>(Image*) */
   void memdelete<Image>(Image *param_1) {
      long *plVar1;
      long lVar2;
      char cVar3;
      cVar3 = predelete_handler((Object*)param_1);
      if (cVar3 == '\0') {
         return;
      }
      if (*(code**)( *(long*)param_1 + 0x140 ) == Image::~Image) {
         *(code**)param_1 = Memory::free_static;
         if (*(long*)( param_1 + 0x250 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( param_1 + 0x250 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( param_1 + 0x250 );
               *(undefined8*)( param_1 + 0x250 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         Resource::~Resource((Resource*)param_1);
         Memory::free_static(param_1, false);
         return;
      }
      ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
      Memory::free_static(param_1, false);
      return;
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
   for (int i_1411 = 0; i_1411 < 2; i_1411++) {
      /* WARNING: Control flow encountered bad instruction data */
   }
   void ResourceFormatKTX::~ResourceFormatKTX(ResourceFormatKTX *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   for (int i_1412 = 0; i_1412 < 2; i_1412++) {
      /* WARNING: Control flow encountered bad instruction data */
   }
   void ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   for (int i_1413 = 0; i_1413 < 2; i_1413++) {
      /* WARNING: Control flow encountered bad instruction data */
   }
   void Image::~Image(Image *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   for (int i_1414 = 0; i_1414 < 2; i_1414++) {
      /* WARNING: Control flow encountered bad instruction data */
   }
   void RefCounted::~RefCounted(RefCounted *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   for (int i_1415 = 0; i_1415 < 2; i_1415++) {
      /* WARNING: Control flow encountered bad instruction data */
   }
   void StringName::~StringName(StringName *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
}

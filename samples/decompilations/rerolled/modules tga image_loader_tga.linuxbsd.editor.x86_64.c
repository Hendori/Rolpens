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
}/* ImageLoaderTGA::get_recognized_extensions(List<String, DefaultAllocator>*) const */void ImageLoaderTGA::get_recognized_extensions(ImageLoaderTGA *this, List *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   CowData<char32_t> *this_00;
   undefined1(*pauVar4)[16];
   long in_FS_OFFSET;
   long local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_38 = &_LC2;
   local_30 = 3;
   String::parse_latin1((StrRange*)&local_40);
   if (*(long*)param_1 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }
   this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
   if (local_40 != 0) {
      CowData<char32_t>::_ref(this_00, (CowData*)&local_40);
   }
   lVar3 = local_40;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( this_00 + 8 ) = 0;
   *(long**)( this_00 + 0x18 ) = plVar1;
   *(long*)( this_00 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = this_00;
   }
   plVar1[1] = (long)this_00;
   if (*plVar1 == 0) {
      *plVar1 = (long)this_00;
   }
   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
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
}/* ImageLoaderTGA::ImageLoaderTGA() */void ImageLoaderTGA::ImageLoaderTGA(ImageLoaderTGA *this) {
   RefCounted::RefCounted((RefCounted*)this);
   *(undefined***)this = &PTR__initialize_classv_001033a0;
   Image::_tga_mem_loader_func = _tga_mem_loader_func;
   return;
}/* ImageLoaderTGA::decode_tga_rle(unsigned char const*, unsigned long, unsigned char*, unsigned
   long, unsigned long) */int ImageLoaderTGA::decode_tga_rle(uchar *param_1, ulong param_2, uchar *param_3, ulong param_4, ulong param_5) {
   long *plVar1;
   int iVar2;
   ulong uVar3;
   ulong uVar4;
   long lVar5;
   uchar *puVar6;
   byte bVar7;
   ulong uVar8;
   ulong uVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50[0] = 0;
   iVar2 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_50, param_2);
   if (( iVar2 == 0 ) && ( CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_50),param_4 != 0 )) {
      bVar7 = *param_1;
      uVar8 = ( ulong )(byte)(( bVar7 & 0x7f ) + 1);
      uVar9 = param_2 * uVar8;
      if (uVar9 <= param_4) {
         uVar3 = 1;
         uVar10 = 0;
         do {
            if ((char)bVar7 < '\0') {
               uVar9 = param_2 + uVar3;
               if (param_5 < uVar9) break;
               if (param_2 != 0) {
                  lVar5 = local_50[0] - uVar3;
                  do {
                     *(uchar*)( lVar5 + uVar3 ) = param_1[uVar3];
                     uVar3 = uVar3 + 1;
                  } while ( uVar9 != uVar3 );
               }
               puVar6 = param_3 + uVar10;
               uVar4 = 0;
               do {
                  uVar9 = uVar4;
                  uVar4 = 0;
                  if (param_2 != 0) {
                     do {
                        puVar6[uVar4] = *(uchar*)( local_50[0] + uVar4 );
                        uVar4 = uVar4 + 1;
                     } while ( param_2 != uVar4 );
                  }
                  uVar4 = uVar9 + 1;
                  puVar6 = puVar6 + param_2;
               } while ( uVar4 != uVar8 );
               uVar10 = uVar10 + param_2;
               uVar9 = uVar9 * param_2;
               uVar8 = uVar3;
               LAB_00100411:uVar10 = uVar10 + uVar9;
               uVar3 = uVar8;
            } else {
               uVar8 = uVar9 + uVar3;
               if (param_5 < uVar8) break;
               if (uVar9 != 0) {
                  lVar5 = uVar10 - uVar3;
                  do {
                     param_3[uVar3 + lVar5] = param_1[uVar3];
                     uVar3 = uVar3 + 1;
                  } while ( uVar8 != uVar3 );
                  goto LAB_00100411;
               }
            }
            if (param_4 <= uVar10) goto LAB_0010035a;
            bVar7 = param_1[uVar3];
            uVar3 = uVar3 + 1;
            uVar8 = ( ulong )(byte)(( bVar7 & 0x7f ) + 1);
            uVar9 = param_2 * uVar8;
         } while ( uVar10 + uVar9 <= param_4 );
      }
      iVar2 = 0x2b;
   }
   LAB_0010035a:if (local_50[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_50[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_50[0] + -0x10 ), false);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return iVar2;
}/* ImageLoaderTGA::convert_to_image(Ref<Image>, unsigned char const*, ImageLoaderTGA::tga_header_s
   const&, unsigned char const*, bool, unsigned long) */undefined8 ImageLoaderTGA::convert_to_image(undefined8 *param_1, long param_2, long param_3, long param_4, char param_5, ulong param_6) {
   long *plVar1;
   int iVar2;
   byte *pbVar3;
   char cVar4;
   byte bVar5;
   undefined1 uVar6;
   undefined1 uVar7;
   undefined1 uVar8;
   ushort uVar9;
   uint uVar10;
   char cVar11;
   ulong uVar12;
   long lVar13;
   long lVar14;
   undefined8 uVar15;
   long lVar16;
   uint uVar17;
   uint uVar18;
   uint uVar19;
   int iVar20;
   uint uVar21;
   int iVar22;
   uint uVar23;
   long in_FS_OFFSET;
   byte local_88;
   uint local_7c;
   int local_78;
   undefined1 local_58[8];
   long local_50[2];
   long local_40;
   uVar9 = *(ushort*)( param_3 + 0x12 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = *(byte*)( param_3 + 0x17 );
   uVar17 = ( uint ) * (ushort*)( param_3 + 0x14 );
   uVar10 = (int)(uint)local_88 >> 4;
   if (( uVar10 & 3 ) - 2 < 2) {
      local_78 = 1;
      uVar19 = 0;
      local_7c = uVar17;
   } else {
      local_7c = 0xffffffff;
      uVar19 = *(ushort*)( param_3 + 0x14 ) - 1;
      local_78 = -1;
   }
   uVar21 = (uint)uVar9;
   if (( uVar10 & 1 ) == 0) {
      uVar23 = (uint)uVar9;
      iVar22 = 1;
      uVar10 = 0;
   } else {
      uVar10 = uVar9 - 1;
      uVar23 = 0xffffffff;
      iVar22 = -1;
   }
   local_50[0] = 0;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_50, ( ulong )(uVar17 * uVar21) << 2);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_50);
   cVar4 = *(char*)( param_3 + 0x16 );
   if (cVar4 == '\b') {
      if (param_5 == '\0') {
         if (uVar19 != local_7c) {
            uVar12 = 0;
            iVar20 = uVar19 * uVar21;
            do {
               if (uVar10 != uVar23) {
                  uVar18 = uVar10;
                  if (param_6 <= uVar12) goto LAB_00100780;
                  while (true) {
                     pbVar3 = (byte*)( param_2 + uVar12 );
                     if (*(char*)( param_3 + 0xc ) != '\x18') {
                        uVar15 = 0x1e;
                        goto LAB_00100611;
                     }
                     uVar12 = uVar12 + 1;
                     lVar14 = (long)(int)( ( uint ) * pbVar3 * 3 );
                     uVar8 = *(undefined1*)( param_4 + 2 + lVar14 );
                     uVar6 = *(undefined1*)( param_4 + lVar14 );
                     lVar16 = (long)(int)( ( iVar20 + uVar18 ) * 4 );
                     uVar7 = *(undefined1*)( param_4 + 1 + lVar14 );
                     *(undefined1*)( local_50[0] + 3 + lVar16 ) = 0xff;
                     *(undefined1*)( local_50[0] + 2 + lVar16 ) = uVar6;
                     *(ushort*)( local_50[0] + lVar16 ) = CONCAT11(uVar7, uVar8);
                     if (uVar23 == uVar18 + iVar22) break;
                     uVar18 = uVar18 + iVar22;
                     if (param_6 == uVar12) goto LAB_00100780;
                  };
               }
               uVar19 = uVar19 + local_78;
               iVar20 = iVar20 + local_78 * uVar21;
            } while ( local_7c != uVar19 );
         }
      } else if (uVar19 != local_7c) {
         uVar12 = 0;
         iVar20 = uVar19 * uVar21;
         do {
            if (uVar10 != uVar23) {
               uVar18 = uVar10;
               if (param_6 <= uVar12) goto LAB_00100780;
               while (true) {
                  uVar8 = *(undefined1*)( param_2 + uVar12 );
                  uVar12 = uVar12 + 1;
                  lVar16 = (long)(int)( ( uVar18 + iVar20 ) * 4 );
                  *(undefined1*)( local_50[0] + 2 + lVar16 ) = uVar8;
                  *(ushort*)( local_50[0] + lVar16 ) = CONCAT11(uVar8, uVar8);
                  *(undefined1*)( local_50[0] + 3 + lVar16 ) = 0xff;
                  if (uVar23 == uVar18 + iVar22) break;
                  uVar18 = uVar18 + iVar22;
                  if (param_6 == uVar12) goto LAB_00100780;
               };
            }
            iVar20 = iVar20 + local_78 * uVar21;
            uVar19 = uVar19 + local_78;
         } while ( local_7c != uVar19 );
      }
   } else if (cVar4 == '\x10') {
      if (uVar19 != local_7c) {
         local_88 = local_88 & 0xf;
         iVar20 = uVar19 * uVar21;
         lVar16 = 0;
         do {
            if (uVar10 != uVar23) {
               uVar12 = lVar16 + 1;
               lVar14 = lVar16;
               uVar18 = uVar10;
               while (true) {
                  if (param_6 <= uVar12) goto LAB_00100780;
                  cVar4 = *(char*)( param_2 + 1 + lVar14 );
                  bVar5 = *(byte*)( param_2 + lVar14 );
                  lVar13 = (long)(int)( ( iVar20 + uVar18 ) * 4 );
                  cVar11 = cVar4 >> 7;
                  *(byte*)( local_50[0] + lVar13 ) = cVar4 * '\x02' & 0xf8;
                  *(byte*)( local_50[0] + 2 + lVar13 ) = bVar5 << 3;
                  if (local_88 == 0) {
                     cVar11 = -1;
                  }
                  uVar18 = uVar18 + iVar22;
                  *(byte*)( local_50[0] + 1 + lVar13 ) = bVar5 >> 2 & 0x38 | cVar4 << 6;
                  lVar16 = lVar14 + 2;
                  *(char*)( local_50[0] + 3 + lVar13 ) = cVar11;
                  if (uVar23 == uVar18) break;
                  uVar12 = lVar14 + 3;
                  lVar14 = lVar16;
               };
            }
            uVar19 = uVar19 + local_78;
            iVar20 = iVar20 + local_78 * uVar21;
         } while ( local_7c != uVar19 );
      }
   } else if (cVar4 == '\x18') {
      if (uVar19 != local_7c) {
         lVar16 = 0;
         iVar20 = uVar19 * uVar21;
         do {
            if (uVar10 != uVar23) {
               uVar12 = lVar16 + 2;
               lVar14 = lVar16;
               uVar18 = uVar10;
               while (true) {
                  if (param_6 <= uVar12) goto LAB_00100780;
                  iVar2 = iVar20 + uVar18;
                  uVar18 = uVar18 + iVar22;
                  uVar8 = *(undefined1*)( param_2 + lVar14 );
                  lVar16 = (long)( iVar2 * 4 );
                  *(ushort*)( local_50[0] + lVar16 ) = CONCAT11(*(undefined1*)( param_2 + 1 + lVar14 ), *(undefined1*)( param_2 + 2 + lVar14 ));
                  *(undefined1*)( local_50[0] + 2 + lVar16 ) = uVar8;
                  *(undefined1*)( local_50[0] + 3 + lVar16 ) = 0xff;
                  lVar16 = lVar14 + 3;
                  if (uVar23 == uVar18) break;
                  uVar12 = lVar14 + 5;
                  lVar14 = lVar16;
               };
            }
            iVar20 = iVar20 + local_78 * uVar21;
            uVar19 = uVar19 + local_78;
         } while ( local_7c != uVar19 );
      }
   } else if (( cVar4 == ' ' ) && ( uVar19 != local_7c )) {
      lVar16 = 0;
      iVar20 = uVar19 * uVar21;
      do {
         if (uVar10 != uVar23) {
            uVar12 = lVar16 + 3;
            lVar14 = lVar16;
            uVar18 = uVar10;
            while (true) {
               if (param_6 <= uVar12) goto LAB_00100780;
               iVar2 = iVar20 + uVar18;
               uVar18 = uVar18 + iVar22;
               *(uint*)( local_50[0] + iVar2 * 4 ) = CONCAT31(CONCAT21(CONCAT11(*(undefined1*)( param_2 + 3 + lVar14 ), *(undefined1*)( param_2 + lVar14 )), *(undefined1*)( param_2 + 1 + lVar14 )), *(undefined1*)( param_2 + 2 + lVar14 ));
               lVar16 = lVar14 + 4;
               if (uVar23 == uVar18) break;
               uVar12 = lVar14 + 7;
               lVar14 = lVar16;
            };
         }
         iVar20 = iVar20 + local_78 * uVar21;
         uVar19 = uVar19 + local_78;
      } while ( local_7c != uVar19 );
   }
   uVar15 = 0;
   Image::initialize_data(*param_1, uVar21, uVar17, 0, 5, local_58);
   LAB_00100611:lVar16 = local_50[0];
   if (local_50[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_50[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50[0] = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar15;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00100780:uVar15 = 0x2b;
   goto LAB_00100611;
}/* ImageLoaderTGA::load_image(Ref<Image>, Ref<FileAccess>, BitField<ImageFormatLoader::LoaderFlags>,
   float) */uint ImageLoaderTGA::load_image(undefined8 param_1, undefined8 *param_2, undefined8 *param_3) {
   long *plVar1;
   code *pcVar2;
   Image *pIVar3;
   uchar *puVar4;
   char cVar5;
   byte bVar6;
   byte bVar7;
   byte bVar8;
   ushort uVar9;
   ushort uVar10;
   ushort uVar11;
   uint uVar12;
   int iVar13;
   uint uVar14;
   ulong uVar15;
   long lVar16;
   uchar *puVar17;
   ulong uVar18;
   long in_FS_OFFSET;
   long local_c8;
   Image *local_90[2];
   uchar *local_80[2];
   long local_70[2];
   uchar *local_60;
   byte local_58;
   char local_57;
   uint local_54;
   undefined2 local_50;
   ushort local_4e;
   byte local_4c;
   undefined2 local_4a;
   undefined2 local_48;
   ushort local_46;
   ushort local_44;
   byte local_42;
   undefined1 local_41;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_80[0] = (uchar*)0x0;
   uVar15 = ( **(code**)( *(long*)*param_3 + 0x1d0 ) )();
   if (uVar15 == 0) {
      _err_print_error("load_image", "modules/tga/image_loader_tga.cpp", 0x100, "Condition \"src_image_len == 0\" is true. Returning: ERR_FILE_CORRUPT", 0, 0);
   } else {
      if (0x17 < uVar15) {
         CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_80, uVar15);
         local_58 = ( **(code**)( *(long*)*param_3 + 0x1e0 ) )();
         uVar18 = (ulong)local_58;
         cVar5 = ( **(code**)( *(long*)*param_3 + 0x1e0 ) )();
         local_57 = cVar5;
         bVar6 = ( **(code**)( *(long*)*param_3 + 0x1e0 ) )();
         uVar12 = (uint)bVar6;
         local_54 = uVar12;
         local_50 = ( **(code**)( *(long*)*param_3 + 0x1e8 ) )();
         uVar9 = ( **(code**)( *(long*)*param_3 + 0x1e8 ) )();
         local_4e = uVar9;
         bVar7 = ( **(code**)( *(long*)*param_3 + 0x1e0 ) )();
         local_4c = bVar7;
         local_4a = ( **(code**)( *(long*)*param_3 + 0x1e8 ) )();
         local_48 = ( **(code**)( *(long*)*param_3 + 0x1e8 ) )();
         uVar10 = ( **(code**)( *(long*)*param_3 + 0x1e8 ) )();
         local_46 = uVar10;
         uVar11 = ( **(code**)( *(long*)*param_3 + 0x1e8 ) )();
         local_44 = uVar11;
         bVar8 = ( **(code**)( *(long*)*param_3 + 0x1e0 ) )();
         local_42 = bVar8;
         local_41 = ( **(code**)( *(long*)*param_3 + 0x1e0 ) )();
         bVar6 = bVar6 & 0xf7;
         if (bVar6 == 1) {
            uVar14 = ( uint )(( bVar7 != 0x18 || 0x100 < uVar9 ) || cVar5 != '\x01');
            local_c8 = (long)(int)( ( uint )(bVar7 >> 3) * (uint)uVar9 );
         } else if (cVar5 == '\0') {
            local_c8 = 0;
            uVar14 = ( uint )(uVar12 == 0);
         } else {
            local_c8 = 0;
            uVar14 = 1;
         }
         lVar16 = ( **(code**)( *(long*)*param_3 + 0x1c8 ) )();
         if (uVar15 - lVar16 < local_c8 + uVar18) {
            uVar14 = 1;
         }
         if (( ( uVar11 == 0 ) || ( uVar10 == 0 ) ) || ( ( ( bVar8 - 0x10 & 0xef ) != 0 && ( ( bVar8 & 0xef ) != 8 ) ) )) {
            uVar14 = 1;
         } else if (uVar14 == 0) {
            plVar1 = (long*)*param_3;
            lVar16 = *plVar1;
            pcVar2 = *(code**)( lVar16 + 0x1b8 );
            lVar16 = ( **(code**)( lVar16 + 0x1c8 ) )();
            ( *pcVar2 )(plVar1, uVar18 + lVar16);
            local_70[0] = 0;
            if (bVar6 == 1) {
               iVar13 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_70, local_c8);
               if (iVar13 == 0) {
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_70);
                  ( **(code**)( *(long*)*param_3 + 0x220 ) )((long*)*param_3, local_70[0], local_c8);
                  goto LAB_00100d8d;
               }
            } else {
               LAB_00100d8d:CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_80);
               puVar17 = local_80[0];
               plVar1 = (long*)*param_3;
               pcVar2 = *(code**)( *plVar1 + 0x220 );
               lVar16 = ( **(code**)( *plVar1 + 0x1c8 ) )(plVar1);
               ( *pcVar2 )(plVar1, puVar17, uVar15 - lVar16);
               local_60 = (uchar*)0x0;
               uVar18 = (long)(int)( (uint)uVar10 * (uint)uVar11 ) * ( ulong )(bVar8 >> 3);
               CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, uVar18);
               CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
               puVar4 = local_60;
               if (( 2 < uVar12 - 9 ) || ( uVar14 = decode_tga_rle(puVar17, ( ulong )(bVar8 >> 3), local_60, uVar18, uVar15) ),uVar15 = uVar18,puVar17 = puVar4,uVar14 == 0) {
                  lVar16 = local_70[0];
                  pIVar3 = (Image*)*param_2;
                  if (( pIVar3 == (Image*)0x0 ) || ( local_90[0] = pIVar3 ),cVar5 = RefCounted::reference(),cVar5 == '\0') {
                     local_90[0] = (Image*)0x0;
                     uVar14 = convert_to_image(local_90, puVar17, &local_58, lVar16, bVar6 == 3, uVar15);
                  } else {
                     uVar14 = convert_to_image(local_90, puVar17, &local_58, lVar16, bVar6 == 3, uVar15);
                     cVar5 = RefCounted::unreference();
                     if (cVar5 != '\0') {
                        memdelete<Image>(pIVar3);
                     }
                  }
               }
               if (puVar4 != (uchar*)0x0) {
                  LOCK();
                  plVar1 = (long*)( puVar4 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static(local_60 + -0x10, false);
                  }
               }
            }
            if (local_70[0] != 0) {
               LOCK();
               plVar1 = (long*)( local_70[0] + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_70[0] + -0x10 ), false);
               }
            }
         }
         if (local_80[0] != (uchar*)0x0) {
            LOCK();
            plVar1 = (long*)( local_80[0] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(local_80[0] + -0x10, false);
            }
         }
         goto LAB_00100c70;
      }
      _err_print_error("load_image", "modules/tga/image_loader_tga.cpp", 0x101, "Condition \"src_image_len < (int64_t)sizeof(tga_header_s)\" is true. Returning: ERR_FILE_CORRUPT", 0, 0);
   }
   uVar14 = 0x10;
   LAB_00100c70:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar14;
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
   return (uint)CONCAT71(0x1035, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1035, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
}/* ImageFormatLoader::is_class_ptr(void*) const */uint ImageFormatLoader::is_class_ptr(ImageFormatLoader *this, void *param_1) {
   return (uint)CONCAT71(0x1035, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1035, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1035, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}/* ImageFormatLoader::_getv(StringName const&, Variant&) const */undefined8 ImageFormatLoader::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ImageFormatLoader::_setv(StringName const&, Variant const&) */undefined8 ImageFormatLoader::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ImageFormatLoader::_validate_propertyv(PropertyInfo&) const */void ImageFormatLoader::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* ImageFormatLoader::_property_can_revertv(StringName const&) const */undefined8 ImageFormatLoader::_property_can_revertv(StringName *param_1) {
   return 0;
}/* ImageFormatLoader::_property_get_revertv(StringName const&, Variant&) const */undefined8 ImageFormatLoader::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* ImageFormatLoader::_notificationv(int, bool) */void ImageFormatLoader::_notificationv(int param_1, bool param_2) {
   return;
}/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00103240;
   Object::~Object((Object*)this);
   return;
}/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00103240;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}/* ImageLoaderTGA::~ImageLoaderTGA() */void ImageLoaderTGA::~ImageLoaderTGA(ImageLoaderTGA *this) {
   *(undefined***)this = &PTR__initialize_classv_00103240;
   Object::~Object((Object*)this);
   return;
}/* ImageLoaderTGA::~ImageLoaderTGA() */void ImageLoaderTGA::~ImageLoaderTGA(ImageLoaderTGA *this) {
   *(undefined***)this = &PTR__initialize_classv_00103240;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}/* ImageFormatLoader::_get_class_namev() const */undefined8 *ImageFormatLoader::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00101723:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101723;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ImageFormatLoader");
         goto LAB_0010178e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ImageFormatLoader");
   LAB_0010178e:return &_get_class_namev();
}/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00101803:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101803;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010186e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010186e:return &_get_class_namev();
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
}/* ImageFormatLoader::get_class() const */void ImageFormatLoader::get_class(void) {
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
                  if (lVar5 == 0) goto LAB_00101baf;
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
      LAB_00101baf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_00101c63;
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
                     if (lVar5 == 0) goto LAB_00101d13;
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
         LAB_00101d13:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar6 != '\0') goto LAB_00101c63;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }
   } else {
      LAB_00101c63:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* ImageFormatLoader::is_class(String const&) const */undefined8 ImageFormatLoader::is_class(ImageFormatLoader *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_00101e3f;
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
      LAB_00101e3f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar5 != '\0') goto LAB_00101ef3;
   }
   cVar5 = String::operator ==(param_1, "ImageFormatLoader");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }
   } else {
      LAB_00101ef3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      LAB_00102258:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00102258;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00102276;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)pLVar6;
   joined_r0x00102276:if (lVar2 == 0) {
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
}/* ImageFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ImageFormatLoader::_get_property_listv(ImageFormatLoader *this, List *param_1, bool param_2) {
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
   local_78 = "ImageFormatLoader";
   local_70 = 0x11;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ImageFormatLoader";
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
      LAB_00102658:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00102658;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00102675;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x00102675:if (lVar2 == 0) {
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
   StringName::StringName((StringName*)&local_78, "ImageFormatLoader", false);
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
}/* ImageFormatLoader::_initialize_classv() */void ImageFormatLoader::_initialize_classv(void) {
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
   if (initialize_class() != '\0') goto LAB_00102a9b;
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
         LAB_00102baa:if ((code*)PTR__bind_methods_00105010 != RefCounted::_bind_methods) {
            LAB_00102bba:RefCounted::_bind_methods();
         }
      } else {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00102baa;
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)PTR__bind_methods_00105010 != RefCounted::_bind_methods) goto LAB_00102bba;
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
      if ((code*)PTR__bind_methods_00105008 != RefCounted::_bind_methods) {
         ImageFormatLoader::_bind_methods();
      }
      initialize_class() {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   /* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */
   void CowData<unsigned_char>::_copy_on_write(void) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
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
   for (int i_1220 = 0; i_1220 < 2; i_1220++) {
      /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   }
   undefined8 CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
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
         LAB_00102fce:lVar9 = 0;
         lVar5 = 0;
      } else {
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
         if (lVar9 == 0) goto LAB_00102fce;
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
               goto LAB_00102f0c;
            }
            uVar7 = _realloc(this, lVar1);
            if ((int)uVar7 != 0) {
               return uVar7;
            }
         }
         puVar8 = *(undefined8**)this;
         if (puVar8 != (undefined8*)0x0) {
            LAB_00102f0c:puVar8[-1] = param_1;
            return 0;
         }
      } else {
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
   for (int i_1221 = 0; i_1221 < 2; i_1221++) {
      /* WARNING: Control flow encountered bad instruction data */
   }
   void Image::~Image(Image *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   for (int i_1222 = 0; i_1222 < 2; i_1222++) {
      /* WARNING: Control flow encountered bad instruction data */
   }
   void ImageLoaderTGA::~ImageLoaderTGA(ImageLoaderTGA *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   for (int i_1223 = 0; i_1223 < 2; i_1223++) {
      /* WARNING: Control flow encountered bad instruction data */
   }
   void RefCounted::~RefCounted(RefCounted *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   for (int i_1224 = 0; i_1224 < 2; i_1224++) {
      /* WARNING: Control flow encountered bad instruction data */
   }
   void StringName::~StringName(StringName *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
}

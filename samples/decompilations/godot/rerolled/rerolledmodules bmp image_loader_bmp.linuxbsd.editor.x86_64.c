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
/* ImageLoaderBMP::get_recognized_extensions(List<String, DefaultAllocator>*) const */void ImageLoaderBMP::get_recognized_extensions(ImageLoaderBMP *this, List *param_1) {
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
   local_38 = &_LC3;
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
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
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
/* ImageLoaderBMP::ImageLoaderBMP() */void ImageLoaderBMP::ImageLoaderBMP(ImageLoaderBMP *this) {
   RefCounted::RefCounted((RefCounted*)this);
   *(undefined***)this = &PTR__initialize_classv_00103ef0;
   Image::_bmp_mem_loader_func = _bmp_mem_loader_func;
   return;
}
/* ImageLoaderBMP::convert_to_image(Ref<Image>, unsigned char const*, unsigned char const*, unsigned
   int, ImageLoaderBMP::bmp_header_s const&) */undefined4 ImageLoaderBMP::convert_to_image(undefined8 *param_1, long param_2, long param_3, uint param_4, long param_5) {
   long *plVar1;
   byte *pbVar2;
   byte bVar3;
   byte bVar4;
   byte bVar5;
   byte bVar6;
   ushort uVar7;
   ushort uVar8;
   ushort uVar9;
   uint uVar10;
   uint uVar11;
   int iVar12;
   ushort uVar13;
   float fVar14;
   float fVar15;
   uint uVar16;
   ulong uVar17;
   ulong uVar18;
   ulong uVar19;
   undefined1 *puVar20;
   undefined1 *puVar21;
   ulong uVar22;
   byte bVar23;
   ulong uVar24;
   uint uVar25;
   long lVar26;
   byte *pbVar27;
   long lVar28;
   ushort *puVar29;
   ushort *puVar30;
   ulong uVar31;
   ulong uVar32;
   long in_FS_OFFSET;
   undefined4 uVar33;
   undefined4 local_ac;
   undefined1 local_78[8];
   byte *local_70[2];
   long local_60;
   undefined1 local_58[8];
   undefined1 *local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_ac = 1;
   if (param_2 != 0) {
      uVar10 = *(uint*)( param_5 + 0x18 );
      uVar19 = (ulong)uVar10;
      uVar11 = *(uint*)( param_5 + 0x14 );
      uVar31 = (ulong)uVar11;
      local_70[0] = (byte*)0x0;
      uVar16 = uVar10 * uVar11;
      uVar7 = *(ushort*)( param_5 + 0x1e );
      uVar25 = uVar16 * 4;
      if (uVar7 < 9) {
         uVar25 = uVar16;
      }

      if (uVar25 == 0) {
         _err_print_error("convert_to_image", "modules/bmp/image_loader_bmp.cpp", 0x47, "Condition \"data_len == 0\" is true. Returning: ERR_BUG", "Couldn\'t parse the BMP image data.", 0, 0);
         local_ac = 0x2f;
      }
 else {
         local_ac = CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_70, (long)(int)uVar25);
         CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_70);
         pbVar27 = local_70[0];
         uVar17 = ( ulong )((int)( uVar7 * uVar31 + 7 >> 3 ) + 3U & 0xfffffffc);
         puVar30 = (ushort*)( ( uVar19 - 1 ) * uVar17 + param_2 );
         if ((byte*)( param_2 + ( ( ulong ) * (uint*)( param_5 + 4 ) - ( ulong ) * (uint*)( param_5 + 0xc ) ) ) < (byte*)( (long)puVar30 + uVar17 )) {
            _err_print_error("convert_to_image", "modules/bmp/image_loader_bmp.cpp", 0x52, "Condition \"line + line_width > end_buffer\" is true. Returning: ERR_FILE_CORRUPT", 0, 0);
            local_ac = 0x10;
         }
 else {
            if (uVar19 != 0) {
               uVar32 = 0;
               lVar26 = 0;
               do {
                  fVar15 = _LC24;
                  fVar14 = _LC23;
                  uVar22 = 0;
                  if (uVar11 != 0) {
                     LAB_0010043a:uVar24 = uVar22 & 0xffffffff;
                     puVar29 = puVar30;
                     switch (uVar7) {
                        default:
                goto switchD_0010044e_caseD_0;
                        case 1:
                while( true ) {
                  uVar18 = uVar22 + 1;
                  local_70[0][lVar26] =
                       (byte)((int)(uint)*(byte *)((long)puVar30 + (uVar22 >> 3)) >>
                             (~(byte)uVar24 & 7)) & 1;
                  lVar26 = lVar26 + 1;
                  if (uVar18 == uVar31) break;
                  uVar24 = uVar18 & 0xffffffff;
                  uVar22 = uVar18;
                }
                break;
                        case 2:
                while( true ) {
                  uVar18 = uVar22 * 2;
                  uVar22 = uVar22 + 1;
                  local_70[0][lVar26] =
                       (byte)((int)(uint)*(byte *)((long)puVar30 + (uVar18 >> 3)) >>
                             (8 - (((byte)uVar24 & 3) * '\x02' + '\x02') & 0x1f)) & 3;
                  lVar26 = lVar26 + 1;
                  if (uVar31 == uVar22) break;
                  uVar24 = uVar22 & 0xffffffff;
                }
                break;
                        case 4:
                while( true ) {
                  uVar18 = uVar22 * 4;
                  uVar22 = uVar22 + 1;
                  local_70[0][lVar26] =
                       (byte)((int)(uint)*(byte *)((long)puVar30 + (uVar18 >> 3)) >>
                             (8 - (((byte)uVar24 & 1) * '\x04' + '\x04') & 0x1f)) & 0xf;
                  lVar26 = lVar26 + 1;
                  if (uVar31 == uVar22) break;
                  uVar24 = uVar22 & 0xffffffff;
                }
                break;
                        case 8:
                do {
                  uVar13 = *puVar29;
                  uVar22 = uVar22 + 1;
                  puVar29 = (ushort *)((long)puVar29 + 1);
                  local_70[0][lVar26] = (byte)uVar13;
                  lVar26 = lVar26 + 1;
                } while (uVar31 != uVar22);
                break;
                        case 0x10:
                puVar29 = puVar30;
                do {
                  uVar13 = *puVar29;
                  uVar8 = *(ushort *)(param_5 + 0x3c);
                  bVar23 = *(byte *)(param_5 + 0x4a);
                  uVar9 = *(ushort *)(param_5 + 0x38);
                  bVar3 = *(byte *)(param_5 + 0x48);
                  bVar4 = *(byte *)(param_5 + 0x4c);
                  bVar5 = *(byte *)(param_5 + 0x3e);
                  bVar6 = *(byte *)(param_5 + 0x4d);
                  local_70[0][lVar26] =
                       (byte)(int)(((float)((int)(uint)(*(ushort *)(param_5 + 0x3a) & uVar13) >>
                                            (*(byte *)(param_5 + 0x49) & 0x1f) & 0xff) * fVar14) /
                                   (float)*(byte *)(param_5 + 0x4b) + fVar15);
                  local_70[0][lVar26 + 1] =
                       (byte)(int)(((float)((int)(uint)(uVar8 & uVar13) >> (bVar23 & 0x1f) & 0xff) *
                                   fVar14) / (float)bVar4 + fVar15);
                  local_70[0][lVar26 + 2] =
                       (byte)(int)(((float)(bVar5 & (byte)uVar13) * fVar14) / (float)bVar6 + fVar15)
                  ;
                  bVar23 = 0xff;
                  if (*(short *)(param_5 + 0x40) != 0) {
                    bVar23 = -(char)((int)(uint)(uVar13 & uVar9) >> (bVar3 & 0x1f));
                  }
                  uVar22 = uVar22 + 1;
                  local_70[0][lVar26 + 3] = bVar23;
                  lVar26 = lVar26 + 4;
                  puVar29 = puVar29 + 1;
                } while (uVar31 != uVar22);
                break;
                        case 0x18:
                do {
                  uVar22 = uVar22 + 1;
                  local_70[0][lVar26 + 2] = (byte)*puVar29;
                  local_70[0][lVar26 + 1] = *(byte *)((long)puVar29 + 1);
                  uVar13 = puVar29[1];
                  local_70[0][lVar26 + 3] = 0xff;
                  local_70[0][lVar26] = (byte)uVar13;
                  lVar26 = lVar26 + 4;
                  puVar29 = (ushort *)((long)puVar29 + 3);
                } while (uVar22 != uVar31);
                break;
                        case 0x20:
                do {
                  uVar22 = uVar22 + 1;
                  local_70[0][lVar26 + 2] = (byte)*puVar29;
                  local_70[0][lVar26 + 1] = *(byte *)((long)puVar29 + 1);
                  local_70[0][lVar26] = (byte)puVar29[1];
                  local_70[0][lVar26 + 3] = *(byte *)((long)puVar29 + 3);
                  lVar26 = lVar26 + 4;
                  puVar29 = puVar29 + 2;
                } while (uVar31 != uVar22);
                     }

                  }

                  joined_r0x001007c3:uVar32 = uVar32 + 1;
                  puVar30 = (ushort*)( (long)puVar30 - uVar17 );
               }
 while ( uVar19 != uVar32 );
            }

            if (( param_3 == 0 ) || ( param_4 == 0 )) {
               Image::set_data(*param_1, uVar11, uVar10, 0, 5, local_78);
            }
 else {
               uVar33 = ( undefined4 )(uVar19 >> 0x20);
               local_60 = 0;
               CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, ( ulong )(param_4 * 4));
               CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
               lVar26 = local_60;
               uVar19 = 0;
               uVar25 = 0;
               do {
                  uVar25 = uVar25 + 1;
                  *(undefined1*)( local_60 + ( uVar19 & 0xffffffff ) ) = *(undefined1*)( param_3 + 2 + uVar19 );
                  iVar12 = (int)uVar19;
                  *(undefined1*)( local_60 + ( ulong )(iVar12 + 1) ) = *(undefined1*)( param_3 + 1 + uVar19 );
                  *(undefined1*)( local_60 + ( ulong )(iVar12 + 2) ) = *(undefined1*)( param_3 + uVar19 );
                  uVar19 = uVar19 + 4;
                  *(undefined1*)( local_60 + ( ulong )(iVar12 + 3) ) = 0xff;
               }
 while ( uVar25 < param_4 );
               local_50[0] = (undefined1*)0x0;
               if (local_70[0] == (byte*)0x0) {
                  lVar28 = 0;
               }
 else {
                  lVar28 = *(long*)( local_70[0] + -8 ) << 2;
               }

               uVar19 = CONCAT44(uVar33, uVar11);
               CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_50, lVar28);
               CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_50);
               if (0 < (int)uVar16) {
                  puVar20 = local_50[0];
                  do {
                     puVar21 = puVar20 + 4;
                     *puVar20 = *(undefined1*)( lVar26 + (int)( ( uint ) * pbVar27 << 2 ) );
                     for (int i = 0; i < 3; i++) {
                        puVar20[( i + 1 )] = *(undefined1*)( lVar26 + ( i + 1 ) + ( ulong ) * pbVar27 * 4 );
                     }

                     puVar20 = puVar21;
                     pbVar27 = pbVar27 + 1;
                  }
 while ( puVar21 != local_50[0] + (ulong)uVar16 * 4 );
               }

               Image::set_data(*param_1, uVar19 & 0xffffffff, uVar10, 0, 5, local_58, uVar19);
               puVar20 = local_50[0];
               if (local_50[0] != (undefined1*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_50[0] + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  lVar26 = local_60;
                  if (*plVar1 == 0) {
                     local_50[0] = (undefined1*)0x0;
                     Memory::free_static(puVar20 + -0x10, false);
                     lVar26 = local_60;
                  }

               }

               if (lVar26 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar26 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_60 + -0x10 ), false);
                  }

               }

            }

         }

      }

      pbVar27 = local_70[0];
      if (local_70[0] != (byte*)0x0) {
         LOCK();
         pbVar2 = local_70[0] + -0x10;
         *(long*)pbVar2 = *(long*)pbVar2 + -1;
         UNLOCK();
         if (*(long*)pbVar2 == 0) {
            local_70[0] = (byte*)0x0;
            Memory::free_static(pbVar27 + -0x10, false);
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_ac;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   switchD_0010044e_caseD_0:uVar22 = uVar22 + 1;
   if (uVar31 == uVar22) goto joined_r0x001007c3;
   goto LAB_0010043a;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ImageLoaderBMP::load_image(Ref<Image>, Ref<FileAccess>, BitField<ImageFormatLoader::LoaderFlags>,
   float) */int ImageLoaderBMP::load_image(undefined8 param_1, undefined8 *param_2, undefined8 *param_3) {
   long *plVar1;
   Image *pIVar2;
   Image *pIVar3;
   char cVar4;
   short sVar5;
   ushort uVar6;
   ushort uVar7;
   ushort uVar8;
   ushort uVar9;
   ushort uVar10;
   int iVar11;
   undefined4 uVar12;
   int iVar13;
   uint uVar14;
   int iVar15;
   ulong uVar16;
   byte bVar17;
   ushort uVar18;
   char *pcVar19;
   undefined8 uVar20;
   char cVar21;
   byte bVar22;
   byte bVar23;
   long lVar24;
   long lVar25;
   long in_FS_OFFSET;
   int local_e4;
   Image *local_c0;
   long local_b8;
   long local_b0;
   char *local_a8;
   long local_a0;
   short local_98[2];
   undefined1 local_94[16];
   undefined8 local_84;
   undefined4 local_7c;
   undefined1 local_78[16];
   undefined8 local_68;
   undefined8 local_60;
   undefined8 uStack_58;
   uint local_50;
   undefined2 local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_94 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_98[0] = 0;
   local_84 = 0;
   local_7c = 0;
   local_68 = 0;
   local_50 = 0x20050a0f;
   local_4c = 0x2020;
   local_60 = __LC25;
   uStack_58 = _UNK_001040e8;
   uVar16 = ( **(code**)( *(long*)*param_3 + 0x1d0 ) )();
   if (( uVar16 < 0x37 ) || ( local_98[0] = ( **(code**)( *(long*)*param_3 + 0x1e8 ) )() ),local_98[0] != 0x4d42) {
      iVar15 = 0x1e;
   }
 else {
      iVar11 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
      local_94._0_4_ = iVar11;
      uVar12 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
      local_94._4_4_ = uVar12;
      iVar13 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
      local_94._8_4_ = iVar13;
      uVar14 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
      local_94._12_4_ = uVar14;
      if (uVar14 < 0x28) {
         if (*(code**)( *(long*)*param_3 + 0x1a8 ) == FileAccess::get_path) {
            local_c0 = (Image*)0x0;
            local_a0 = 0;
            local_a8 = "";
            String::parse_latin1((StrRange*)&local_c0);
         }
 else {
            ( **(code**)( *(long*)*param_3 + 0x1a8 ) )(&local_c0);
         }

         local_b8 = 0;
         local_a8 = "Couldn\'t parse the BMP info header. The file is likely corrupt: %s";
         local_a0 = 0x42;
         String::parse_latin1((StrRange*)&local_b8);
         vformat<String>(&local_a8, (StrRange*)&local_b8, &local_c0);
         pcVar19 = "Condition \"bmp_header.bmp_info_header.bmp_header_size < BITMAP_INFO_HEADER_MIN_SIZE\" is true. Returning: ERR_FILE_CORRUPT";
         uVar20 = 0xe1;
      }
 else {
         uVar12 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
         local_84 = CONCAT44(local_84._4_4_, uVar12);
         uVar12 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
         local_84 = CONCAT44(uVar12, (undefined4)local_84);
         sVar5 = ( **(code**)( *(long*)*param_3 + 0x1e8 ) )();
         local_7c = CONCAT22(local_7c._2_2_, sVar5);
         if (sVar5 == 1) {
            uVar6 = ( **(code**)( *(long*)*param_3 + 0x1e8 ) )();
            local_7c = CONCAT22(uVar6, (undefined2)local_7c);
            uVar14 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
            local_78._0_4_ = uVar14;
            uVar12 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
            local_78._4_4_ = uVar12;
            uVar12 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
            local_78._8_4_ = uVar12;
            uVar12 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
            local_78._12_4_ = uVar12;
            uVar12 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
            local_68 = CONCAT44(local_68._4_4_, uVar12);
            uVar12 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
            local_68 = CONCAT44(uVar12, (undefined4)local_68);
            if (uVar14 == 3) {
               uVar7 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
               local_60._0_4_ = CONCAT22(uVar7, (undefined2)local_60);
               uVar8 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
               local_60._0_6_ = CONCAT24(uVar8, (undefined4)local_60);
               uVar9 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
               local_60 = CONCAT26(uVar9, (undefined6)local_60);
               uVar10 = ( **(code**)( *(long*)*param_3 + 0x1f0 ) )();
               local_60 = CONCAT62(local_60._2_6_, uVar10);
               if (uVar7 == 0) {
                  uVar14 = 0;
                  bVar23 = 0;
                  uVar7 = 0;
               }
 else {
                  bVar23 = 0;
                  do {
                     bVar23 = bVar23 + 1;
                     uVar7 = uVar7 & uVar7 - 1;
                  }
 while ( uVar7 != 0 );
                  uVar7 = (ushort)bVar23;
                  uVar14 = ( 1 << ( bVar23 & 0x1f ) ) - 1;
               }

               if (uVar8 == 0) {
                  cVar4 = '\0';
                  bVar22 = 0;
                  uVar8 = 0;
               }
 else {
                  bVar22 = 0;
                  do {
                     bVar22 = bVar22 + 1;
                     uVar8 = uVar8 & uVar8 - 1;
                  }
 while ( uVar8 != 0 );
                  uVar8 = (ushort)bVar22;
                  bVar23 = bVar23 + bVar22;
                  cVar4 = (char)( 1 << ( bVar22 & 0x1f ) ) + -1;
               }

               if (uVar9 == 0) {
                  cVar21 = '\0';
                  bVar17 = 0;
                  uVar9 = 0;
               }
 else {
                  bVar17 = 0;
                  do {
                     bVar17 = bVar17 + 1;
                     uVar9 = uVar9 & uVar9 - 1;
                  }
 while ( uVar9 != 0 );
                  uVar9 = (ushort)bVar17;
                  bVar23 = bVar23 + bVar17;
                  bVar22 = bVar22 + bVar17;
                  cVar21 = (char)( 1 << ( bVar17 & 0x1f ) ) + -1;
               }

               local_50 = ( (uint)bVar22 | ( ( uVar14 & 0xff ) << 8 | (uint)bVar17 ) << 8 ) << 8 | (uint)bVar23;
               if (uVar10 != 0) {
                  uVar18 = 0;
                  do {
                     uVar18 = uVar18 + 1;
                     uVar10 = uVar10 & uVar10 - 1;
                  }
 while ( uVar10 != 0 );
                  uVar10 = uVar18 & 0xff;
               }

               uStack_58 = CONCAT62(CONCAT24(uVar9, CONCAT22(uVar8, uVar7)), uVar10);
               local_4c = CONCAT11(cVar21, cVar4);
            }
 else {
               if (uVar14 < 4) {
                  uVar14 = uVar14 - 1;
               }
 else {
                  uVar14 = uVar14 - 0xc;
               }

               if (uVar14 < 2) {
                  if (*(code**)( *(long*)*param_3 + 0x1a8 ) == FileAccess::get_path) {
                     local_c0 = (Image*)0x0;
                     local_a0 = 0;
                     local_a8 = "";
                     String::parse_latin1((StrRange*)&local_c0);
                  }
 else {
                     ( **(code**)( *(long*)*param_3 + 0x1a8 ) )(&local_c0);
                  }

                  local_b8 = 0;
                  local_a8 = "RLE compressed BMP files are not yet supported: %s";
                  local_a0 = 0x32;
                  String::parse_latin1((StrRange*)&local_b8);
                  vformat<String>(&local_a8, (StrRange*)&local_b8, &local_c0);
                  _err_print_error("load_image", "modules/bmp/image_loader_bmp.cpp", 0x10c, "Method/function failed. Returning: ERR_UNAVAILABLE", &local_a8, 0, 0);
                  pcVar19 = local_a8;
                  if (local_a8 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_a8 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_a8 = (char*)0x0;
                        Memory::free_static(pcVar19 + -0x10, false);
                     }

                  }

                  lVar25 = local_b8;
                  if (local_b8 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_b8 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_b8 = 0;
                        Memory::free_static((void*)( lVar25 + -0x10 ), false);
                     }

                  }

                  pIVar3 = local_c0;
                  if (local_c0 != (Image*)0x0) {
                     LOCK();
                     pIVar2 = local_c0 + -0x10;
                     *(long*)pIVar2 = *(long*)pIVar2 + -1;
                     UNLOCK();
                     if (*(long*)pIVar2 == 0) {
                        local_c0 = (Image*)0x0;
                        Memory::free_static(pIVar3 + -0x10, false);
                     }

                  }

                  iVar15 = 2;
                  goto LAB_00100a9b;
               }

            }

            ( **(code**)( *(long*)*param_3 + 0x1b8 ) )();
            if (uVar6 < 9) {
               local_e4 = 1 << ( (byte)uVar6 & 0x1f );
               uVar16 = ( ulong )(uint)(4 << ( (byte)uVar6 & 0x1f ));
            }
 else {
               local_e4 = 0;
               uVar16 = 0;
            }

            local_b0 = 0;
            CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_b0, uVar16);
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_b0);
            lVar25 = local_b0;
            ( **(code**)( *(long*)*param_3 + 0x220 ) )((long*)*param_3, local_b0, uVar16);
            ( **(code**)( *(long*)*param_3 + 0x1b8 ) )((long*)*param_3, iVar13);
            local_a0 = 0;
            iVar15 = CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_a0, ( ulong )(uint)(iVar11 - iVar13));
            lVar24 = local_a0;
            if (iVar15 == 0) {
               CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_a0);
               lVar24 = local_a0;
               ( **(code**)( *(long*)*param_3 + 0x220 ) )((long*)*param_3, local_a0, ( ulong )(uint)(iVar11 - iVar13));
               pIVar3 = (Image*)*param_2;
               if (( pIVar3 == (Image*)0x0 ) || ( local_c0 = pIVar3 ),cVar4 = RefCounted::reference(),cVar4 == '\0') {
                  local_c0 = (Image*)0x0;
                  iVar15 = convert_to_image(&local_c0, lVar24, lVar25, local_e4, local_98);
               }
 else {
                  iVar15 = convert_to_image(&local_c0, lVar24, lVar25, local_e4, local_98);
                  cVar4 = RefCounted::unreference();
                  if (cVar4 != '\0') {
                     memdelete<Image>(pIVar3);
                  }

               }

            }

            if (lVar24 != 0) {
               LOCK();
               plVar1 = (long*)( lVar24 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               lVar25 = local_b0;
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_a0 + -0x10 ), false);
                  lVar25 = local_b0;
               }

            }

            if (lVar25 != 0) {
               LOCK();
               plVar1 = (long*)( lVar25 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_b0 + -0x10 ), false);
               }

            }

            goto LAB_00100a9b;
         }

         if (*(code**)( *(long*)*param_3 + 0x1a8 ) == FileAccess::get_path) {
            local_c0 = (Image*)0x0;
            local_a0 = 0;
            local_a8 = "";
            String::parse_latin1((StrRange*)&local_c0);
         }
 else {
            ( **(code**)( *(long*)*param_3 + 0x1a8 ) )(&local_c0);
         }

         local_b8 = 0;
         local_a8 = "Couldn\'t parse the BMP planes. The file is likely corrupt: %s";
         local_a0 = 0x3d;
         String::parse_latin1((StrRange*)&local_b8);
         vformat<String>(&local_a8, (StrRange*)&local_b8, &local_c0);
         pcVar19 = "Condition \"bmp_header.bmp_info_header.bmp_planes != 1\" is true. Returning: ERR_FILE_CORRUPT";
         uVar20 = 0xe8;
      }

      _err_print_error("load_image", "modules/bmp/image_loader_bmp.cpp", uVar20, pcVar19, &local_a8, 0, 0);
      pcVar19 = local_a8;
      if (local_a8 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_a8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a8 = (char*)0x0;
            Memory::free_static(pcVar19 + -0x10, false);
         }

      }

      lVar25 = local_b8;
      if (local_b8 != 0) {
         LOCK();
         plVar1 = (long*)( local_b8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_b8 = 0;
            Memory::free_static((void*)( lVar25 + -0x10 ), false);
         }

      }

      pIVar3 = local_c0;
      if (local_c0 != (Image*)0x0) {
         LOCK();
         pIVar2 = local_c0 + -0x10;
         *(long*)pIVar2 = *(long*)pIVar2 + -1;
         UNLOCK();
         if (*(long*)pIVar2 == 0) {
            local_c0 = (Image*)0x0;
            Memory::free_static(pIVar3 + -0x10, false);
         }

      }

      iVar15 = 0x10;
   }

   LAB_00100a9b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar15;
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x1040, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1040, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* ImageFormatLoader::is_class_ptr(void*) const */uint ImageFormatLoader::is_class_ptr(ImageFormatLoader *this, void *param_1) {
   return (uint)CONCAT71(0x1040, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1040, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1040, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* ImageFormatLoader::_getv(StringName const&, Variant&) const */undefined8 ImageFormatLoader::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ImageFormatLoader::_setv(StringName const&, Variant const&) */undefined8 ImageFormatLoader::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ImageFormatLoader::_validate_propertyv(PropertyInfo&) const */void ImageFormatLoader::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* ImageFormatLoader::_property_can_revertv(StringName const&) const */undefined8 ImageFormatLoader::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ImageFormatLoader::_property_get_revertv(StringName const&, Variant&) const */undefined8 ImageFormatLoader::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ImageFormatLoader::_notificationv(int, bool) */void ImageFormatLoader::_notificationv(int param_1, bool param_2) {
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00103d90;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00103d90;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* ImageLoaderBMP::~ImageLoaderBMP() */void ImageLoaderBMP::~ImageLoaderBMP(ImageLoaderBMP *this) {
   *(undefined***)this = &PTR__initialize_classv_00103d90;
   Object::~Object((Object*)this);
   return;
}
/* ImageLoaderBMP::~ImageLoaderBMP() */void ImageLoaderBMP::~ImageLoaderBMP(ImageLoaderBMP *this) {
   *(undefined***)this = &PTR__initialize_classv_00103d90;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* ImageFormatLoader::_get_class_namev() const */undefined8 *ImageFormatLoader::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00101ad3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101ad3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ImageFormatLoader");
         goto LAB_00101b3e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ImageFormatLoader");
   LAB_00101b3e:return &_get_class_namev();
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
         LAB_00101bb3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101bb3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_00101c1e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_00101c1e:return &_get_class_namev();
}
/* FileAccess::get_path() const */FileAccess * __thiscall FileAccess::get_path(FileAccess *this){
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
/* Image::~Image() */void Image::~Image(Image *this) {
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
/* ImageFormatLoader::get_class() const */void ImageFormatLoader::get_class(void) {
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
                  if (lVar5 == 0) goto LAB_00101fcf;
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

      LAB_00101fcf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00102083;
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
                     if (lVar5 == 0) goto LAB_00102133;
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

         LAB_00102133:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00102083;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00102083:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ImageFormatLoader::is_class(String const&) const */undefined8 ImageFormatLoader::is_class(ImageFormatLoader *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010225f;
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

      LAB_0010225f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00102313;
   }

   cVar5 = String::operator ==(param_1, "ImageFormatLoader");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00102313:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

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

      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
      LAB_00102688:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00102688;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x001026a6;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x001026a6:if (lVar2 == 0) {
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
/* ImageFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ImageFormatLoader::_get_property_listv(ImageFormatLoader *this, List *param_1, bool param_2) {
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
      LAB_00102a88:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00102a88;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00102aa5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00102aa5:if (lVar2 == 0) {
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

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ImageFormatLoader::_initialize_classv() */void ImageFormatLoader::_initialize_classv(void) {
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
   if (initialize_class() != '\0') goto LAB_00102ecb;
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
         LAB_00102fda:if ((code*)PTR__bind_methods_00106010 != RefCounted::_bind_methods) {
            LAB_00102fea:RefCounted::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00102fda;
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)PTR__bind_methods_00106010 != RefCounted::_bind_methods) goto LAB_00102fea;
      }

      RefCounted::initialize_class()::initialized =
      '\x01';
   }

   local_58 = "RefCounted";
   local_68 = 0;
   local_50 = 10;
   String::parse_latin1((StrRange*)&local_68);
   StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
   local_58 = "ImageFormatLoader";
   local_70 = 0;
   local_50 = 0x11;
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

   if ((code*)PTR__bind_methods_00106008 != RefCounted::_bind_methods) {
      ImageFormatLoader::_bind_methods();
   }

   initialize_class()::initialized =
   '\x01';
   LAB_00102ecb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Image::~Image() */void Image::~Image(Image *this) {
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
/* WARNING: Removing unreachable block (ram,0x00103258) *//* WARNING: Removing unreachable block (ram,0x00103388) *//* WARNING: Removing unreachable block (ram,0x00103550) *//* WARNING: Removing unreachable block (ram,0x00103394) *//* WARNING: Removing unreachable block (ram,0x0010339e) *//* WARNING: Removing unreachable block (ram,0x00103530) *//* WARNING: Removing unreachable block (ram,0x001033aa) *//* WARNING: Removing unreachable block (ram,0x001033b4) *//* WARNING: Removing unreachable block (ram,0x00103510) *//* WARNING: Removing unreachable block (ram,0x001033c0) *//* WARNING: Removing unreachable block (ram,0x001033ca) *//* WARNING: Removing unreachable block (ram,0x001034f0) *//* WARNING: Removing unreachable block (ram,0x001033d6) *//* WARNING: Removing unreachable block (ram,0x001033e0) *//* WARNING: Removing unreachable block (ram,0x001034d0) *//* WARNING: Removing unreachable block (ram,0x001033ec) *//* WARNING: Removing unreachable block (ram,0x001033f6) *//* WARNING: Removing unreachable block (ram,0x001034b0) *//* WARNING: Removing unreachable block (ram,0x00103402) *//* WARNING: Removing unreachable block (ram,0x0010340c) *//* WARNING: Removing unreachable block (ram,0x00103490) *//* WARNING: Removing unreachable block (ram,0x00103414) *//* WARNING: Removing unreachable block (ram,0x0010342a) *//* WARNING: Removing unreachable block (ram,0x00103436) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* void memdelete<Image>(Image*) */void memdelete<Image>(Image *param_1) {
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
/* CowData<unsigned char>::_realloc(long) */undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) */undefined8 CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
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
      LAB_001038ae:lVar9 = 0;
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
      if (lVar9 == 0) goto LAB_001038ae;
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
            goto LAB_001037ec;
         }

         uVar7 = _realloc(this, lVar1);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

      }

      puVar8 = *(undefined8**)this;
      if (puVar8 != (undefined8*)0x0) {
         LAB_001037ec:puVar8[-1] = param_1;
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
/* WARNING: Control flow encountered bad instruction data *//* Image::~Image() */void Image::~Image(Image *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ImageLoaderBMP::~ImageLoaderBMP() */void ImageLoaderBMP::~ImageLoaderBMP(ImageLoaderBMP *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


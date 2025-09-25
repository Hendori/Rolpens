/* CowData<CVTTCompressionRowTask>::_copy_on_write() [clone .isra.0] */void CowData<CVTTCompressionRowTask>::_copy_on_write(CowData<CVTTCompressionRowTask> *this) {
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
   __n = lVar2 * 0x20;
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
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
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
      LAB_00100756:lVar10 = 0;
      pCVar6 = (CowData<unsigned_char>*)0x0;
   }
 else {
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
      if (lVar10 == 0) goto LAB_00100756;
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

      FUN_001019b0();
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
         goto LAB_001006ac;
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

   LAB_001006ac:puVar8[-1] = param_1;
   return;
}
/* image_decompress_cvtt(Image*) */void image_decompress_cvtt(Image *param_1) {
   long *plVar1;
   undefined8 *puVar2;
   bool bVar3;
   int iVar4;
   long lVar5;
   undefined1 uVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   uint uVar12;
   int iVar13;
   undefined4 uVar14;
   undefined4 uVar15;
   long lVar16;
   long lVar17;
   PixelBlockU8 *pPVar18;
   int iVar19;
   int iVar20;
   ulong uVar21;
   uint uVar22;
   int iVar23;
   int iVar24;
   uint uVar25;
   uint uVar26;
   uchar *puVar27;
   PixelBlockU8 *pPVar28;
   int iVar29;
   undefined4 uVar30;
   int iVar31;
   uint uVar32;
   ulong uVar33;
   int iVar34;
   long in_FS_OFFSET;
   bool bVar35;
   byte bVar36;
   int local_754;
   undefined8 *local_730;
   int local_724;
   long local_708;
   undefined1 local_6d8[8];
   long local_6d0;
   PixelBlockU8 local_6c8[504];
   undefined8 uStack_4d0;
   PixelBlockF16 local_4c8[1024];
   uchar local_c8[136];
   long local_40;
   bVar36 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar7 = Image::get_format();
   if (iVar7 == 0x16) {
      bVar35 = false;
      bVar3 = false;
      uVar30 = 5;
   }
 else {
      if (1 < iVar7 - 0x17U) goto LAB_00100c96;
      bVar35 = iVar7 == 0x17;
      bVar3 = true;
      uVar30 = 0xe;
   }

   iVar7 = Image::get_width();
   local_754 = Image::get_height();
   Image::get_data();
   lVar5 = local_6d0;
   if (local_6d0 != 0) {
      LOCK();
      plVar1 = (long*)( local_6d0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_6d0 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   local_6d0 = 0;
   uVar6 = Image::has_mipmaps();
   lVar16 = Image::get_image_data_size(iVar7, local_754, uVar30, uVar6);
   iVar8 = Image::get_mipmap_count();
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_6d0, lVar16);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_6d0);
   lVar16 = local_6d0;
   local_708 = 0;
   uVar25 = ( -(uint)!bVar3 & 0xfffffffe ) + 6;
   if (-1 < iVar8) {
      iVar24 = 0;
      do {
         lVar17 = Image::get_mipmap_offset((int)param_1);
         local_730 = (undefined8*)( lVar5 + lVar17 );
         if (0 < local_754) {
            local_724 = 0;
            iVar19 = iVar7 * uVar25;
            iVar13 = 0;
            do {
               iVar9 = iVar13 + 4;
               if (0 < iVar7) {
                  iVar34 = 0;
                  iVar23 = 0;
                  do {
                     puVar27 = local_c8;
                     for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
                        for (int i = 0; i < 8; i++) {
                           puVar27[i] = '\0';
                        }

                        puVar27 = puVar27 + (ulong)bVar36 * -0x10 + 8;
                     }

                     iVar10 = ( iVar7 - iVar23 ) + 3;
                     iVar31 = iVar10 >> 2;
                     if (iVar10 < 0x24) {
                        uVar32 = iVar31 << 2;
                        uVar21 = ( ulong )(uint)(iVar31 << 4);
                     }
 else {
                        uVar32 = 0x20;
                        uVar21 = 0x80;
                     }

                     puVar2 = (undefined8*)( (long)local_730 + uVar21 );
                     puVar27 = local_c8;
                     for (uVar21 = uVar21 >> 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                        *(undefined8*)puVar27 = *local_730;
                        local_730 = local_730 + (ulong)bVar36 * -2 + 1;
                        puVar27 = puVar27 + (ulong)bVar36 * -0x10 + 8;
                     }

                     if (bVar3) {
                        if (bVar35) {
                           cvtt::Kernels::DecodeBC6HS(local_4c8, local_c8);
                        }
 else {
                           cvtt::Kernels::DecodeBC6HU(local_4c8, local_c8);
                        }

                     }
 else {
                        cvtt::Kernels::DecodeBC7(local_6c8, local_c8);
                     }

                     iVar29 = 0;
                     uVar21 = (ulong)uVar25;
                     iVar10 = iVar13;
                     iVar31 = local_724;
                     do {
                        iVar11 = iVar31;
                        if (local_754 <= iVar10) {
                           iVar11 = ( local_754 + -1 ) * iVar19;
                        }

                        uVar22 = 0;
                        iVar20 = iVar34;
                        if (iVar23 < (int)( iVar23 + uVar32 )) {
                           do {
                              iVar4 = iVar20;
                              if (iVar7 <= (int)( uVar22 + iVar23 )) {
                                 iVar4 = iVar19 - uVar25;
                              }

                              pPVar18 = (PixelBlockU8*)( (long)iVar4 + (long)iVar11 + lVar16 + local_708 );
                              lVar17 = (long)( (int)uVar22 >> 2 ) * 0x10 + (long)(int)( ( uVar22 & 3 ) + iVar29 );
                              if (bVar3) {
                                 lVar17 = lVar17 * 8;
                                 pPVar28 = (PixelBlockU8*)( local_4c8 + lVar17 );
                                 if (uVar25 < 8) {
                                    LAB_00100cc0:if (( uVar25 & 4 ) == 0) {
                                       if (( uVar25 != 0 ) && ( *pPVar18 = *pPVar28(uVar25 & 2) != 0 )) {
                                          *(undefined2*)( pPVar18 + ( (ulong)uVar25 - 2 ) ) = *(undefined2*)( pPVar28 + ( (ulong)uVar25 - 2 ) );
                                       }

                                    }
 else {
                                       *(undefined4*)pPVar18 = *(undefined4*)pPVar28;
                                       *(undefined4*)( pPVar18 + ( (ulong)uVar25 - 4 ) ) = *(undefined4*)( pPVar28 + ( (ulong)uVar25 - 4 ) );
                                    }

                                 }
 else {
                                    *(undefined8*)pPVar18 = *(undefined8*)pPVar28;
                                    *(undefined8*)( pPVar18 + ( uVar21 - 8 ) ) = *(undefined8*)( (long)&uStack_4d0 + uVar21 + lVar17 );
                                    lVar17 = (long)pPVar18 - ( ( ulong )(pPVar18 + 8) & 0xfffffffffffffff8 );
                                    uVar12 = (int)lVar17 + uVar25 & 0xfffffff8;
                                    if (7 < uVar12) {
                                       uVar26 = 0;
                                       do {
                                          uVar33 = (ulong)uVar26;
                                          uVar26 = uVar26 + 8;
                                          *(undefined8*)( ( ( ulong )(pPVar18 + 8) & 0xfffffffffffffff8 ) + uVar33 ) = *(undefined8*)( pPVar28 + ( uVar33 - lVar17 ) );
                                       }
 while ( uVar26 < uVar12 );
                                    }

                                 }

                              }
 else {
                                 lVar17 = lVar17 * 4;
                                 pPVar28 = local_6c8 + lVar17;
                                 if (uVar25 < 8) goto LAB_00100cc0;
                                 *(undefined8*)pPVar18 = *(undefined8*)pPVar28;
                                 *(undefined8*)( pPVar18 + ( uVar21 - 8 ) ) = *(undefined8*)( local_6c8 + uVar21 + lVar17 + -8 );
                                 lVar17 = (long)pPVar18 - ( ( ulong )(pPVar18 + 8) & 0xfffffffffffffff8 );
                                 uVar12 = (int)lVar17 + uVar25 & 0xfffffff8;
                                 if (7 < uVar12) {
                                    uVar26 = 0;
                                    do {
                                       uVar33 = (ulong)uVar26;
                                       uVar26 = uVar26 + 8;
                                       *(undefined8*)( ( ( ulong )(pPVar18 + 8) & 0xfffffffffffffff8 ) + uVar33 ) = *(undefined8*)( pPVar28 + ( uVar33 - lVar17 ) );
                                    }
 while ( uVar26 < uVar12 );
                                 }

                              }

                              uVar22 = uVar22 + 1;
                              iVar20 = iVar20 + uVar25;
                           }
 while ( uVar22 != uVar32 );
                        }

                        iVar29 = iVar29 + 4;
                        iVar10 = iVar10 + 1;
                        iVar31 = iVar31 + iVar19;
                     }
 while ( iVar29 != 0x10 );
                     iVar23 = iVar23 + 0x20;
                     iVar34 = iVar34 + uVar25 * 0x20;
                     local_730 = puVar2;
                  }
 while ( iVar23 < iVar7 );
               }

               local_724 = local_724 + iVar19 * 4;
               iVar13 = iVar9;
            }
 while ( iVar9 < local_754 );
         }

         iVar24 = iVar24 + 1;
         iVar13 = local_754 * iVar7;
         iVar7 = iVar7 >> 1;
         local_708 = local_708 + (int)( iVar13 * uVar25 );
         local_754 = local_754 >> 1;
      }
 while ( iVar24 <= iVar8 );
   }

   uVar6 = Image::has_mipmaps();
   uVar14 = Image::get_height();
   uVar15 = Image::get_width();
   Image::set_data(param_1, uVar15, uVar14, uVar6, uVar30, local_6d8);
   lVar5 = local_6d0;
   if (local_6d0 != 0) {
      LOCK();
      plVar1 = (long*)( local_6d0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_6d0 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   LAB_00100c96:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* image_compress_cvtt(Image*, Image::UsedChannels) */void image_compress_cvtt(undefined8 param_1, int param_2) {
   char *pcVar1;
   _func_void_void_ptr_uint *p_Var2;
   size_t sVar3;
   char cVar4;
   undefined1 uVar5;
   char cVar6;
   byte bVar7;
   uint uVar8;
   uint uVar9;
   int iVar10;
   int iVar11;
   uint uVar12;
   undefined4 uVar13;
   undefined4 uVar14;
   long lVar15;
   long lVar16;
   long lVar17;
   ulong uVar18;
   long lVar19;
   long *plVar20;
   char cVar21;
   long lVar22;
   uint uVar23;
   long in_FS_OFFSET;
   bool bVar24;
   int local_468;
   uint local_464;
   long local_460;
   long local_458;
   int local_444;
   int local_42c;
   long local_418;
   long local_410;
   undefined1 local_408[8];
   long local_400[2];
   long local_3f0;
   char *local_3e8;
   size_t local_3e0;
   int local_3d8[8];
   char local_3b8;
   char cStack_3b7;
   int local_3b4;
   undefined4 local_3b0;
   undefined4 uStack_3ac;
   undefined4 uStack_3a8;
   undefined4 uStack_3a4;
   undefined8 local_3a0;
   undefined2 local_398;
   undefined4 local_390;
   undefined4 uStack_38c;
   undefined4 uStack_388;
   undefined4 uStack_384;
   undefined8 local_380;
   undefined4 local_378;
   undefined1 local_374;
   undefined8 local_373;
   undefined8 uStack_36b;
   undefined8 local_363;
   undefined8 uStack_35b;
   undefined8 local_353;
   undefined8 uStack_34b;
   undefined8 local_343;
   undefined8 uStack_33b;
   undefined8 local_333;
   undefined8 uStack_32b;
   undefined8 local_323;
   undefined8 uStack_31b;
   undefined8 local_313;
   undefined8 uStack_30b;
   undefined8 local_303;
   undefined8 uStack_2fb;
   undefined8 local_2f3;
   undefined8 uStack_2eb;
   undefined8 local_2e3;
   undefined8 uStack_2db;
   undefined8 local_2d3;
   undefined8 uStack_2cb;
   undefined8 local_2c3;
   undefined8 uStack_2bb;
   undefined8 local_2b3;
   undefined8 uStack_2ab;
   undefined8 local_2a3;
   undefined8 uStack_29b;
   undefined8 local_293;
   undefined7 uStack_28b;
   undefined4 uStack_284;
   undefined8 local_280;
   undefined8 uStack_278;
   undefined8 local_270;
   undefined8 uStack_268;
   undefined8 local_260;
   undefined8 uStack_258;
   undefined8 local_250;
   undefined8 uStack_248;
   undefined8 local_240;
   undefined8 uStack_238;
   undefined8 local_230;
   undefined8 uStack_228;
   undefined8 local_220;
   undefined8 uStack_218;
   undefined8 local_210;
   undefined8 uStack_208;
   undefined1 local_200;
   undefined1 local_1ff[129];
   undefined1 local_17e;
   undefined1 local_17d[243];
   undefined1 local_8a;
   undefined4 local_88;
   undefined4 uStack_84;
   undefined4 uStack_80;
   undefined4 uStack_7c;
   undefined4 uStack_78;
   undefined4 uStack_74;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   undefined4 local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   OS::get_singleton();
   OS::get_ticks_msec();
   cVar4 = Image::is_compressed();
   if (cVar4 != '\0') goto LAB_00100e20;
   uVar8 = Image::get_width();
   uVar9 = Image::get_height();
   uVar18 = (ulong)uVar9;
   iVar10 = Image::get_format();
   iVar11 = Image::get_format();
   if (( iVar11 < 8 ) || ( iVar11 = 0x10 < iVar11 )) {
      if (5 < iVar10) goto LAB_00100e20;
      uVar13 = 0x328;
      if (param_2 != 3) {
         uVar13 = 0x128;
      }

      cVar21 = '\0';
      Image::convert(param_1, 5);
      local_42c = 0x16;
      cVar4 = '\0';
   }
 else {
      uVar13 = 0x328;
      if (param_2 != 3) {
         uVar13 = 0x128;
      }

      iVar10 = Image::get_format();
      if (iVar10 != 0xe) {
         Image::convert(param_1, 0xe);
      }

      cVar4 = Image::detect_signed(SUB81(param_1, 0));
      cVar21 = '\x01';
      if (cVar4 != '\0') {
         cVar21 = cVar4;
      }

      local_42c = 0x18 - ( uint )(cVar4 != '\0');
   }

   Image::get_data();
   sVar3 = local_3e0;
   if (local_3e0 != 0) {
      LOCK();
      plVar20 = (long*)( local_3e0 - 0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         local_3e0 = 0;
         Memory::free_static((void*)( sVar3 - 0x10 ), false);
      }

   }

   local_400[0] = 0;
   uVar5 = Image::has_mipmaps();
   lVar15 = Image::get_image_data_size(uVar8, uVar18, local_42c, uVar5);
   cVar6 = Image::has_mipmaps();
   local_444 = 0;
   if (cVar6 != '\0') {
      local_444 = Image::get_image_required_mipmaps(uVar8, uVar9, local_42c);
   }

   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_400, lVar15);
   bVar7 = Image::get_format_pixel_rshift(local_42c);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_400);
   lVar15 = local_400[0];
   lVar16 = 0;
   do {
      local_17d[lVar16] = (char)lVar16;
      lVar16 = lVar16 + 1;
   }
 while ( lVar16 != 0xf3 );
   local_8a = 0xf3;
   lVar16 = 0;
   local_293 = _LC17;
   uStack_28b = (undefined7)_UNK_00102338;
   uStack_284 = 0x4040404;
   local_373 = _LC17;
   uStack_36b = _UNK_00102338;
   local_363 = _LC17;
   uStack_35b = _UNK_00102338;
   local_353 = _LC17;
   uStack_34b = _UNK_00102338;
   local_343 = _LC17;
   uStack_33b = _UNK_00102338;
   local_333 = _LC17;
   uStack_32b = _UNK_00102338;
   local_323 = _LC17;
   uStack_31b = _UNK_00102338;
   local_313 = _LC17;
   uStack_30b = _UNK_00102338;
   local_303 = _LC17;
   uStack_2fb = _UNK_00102338;
   local_2f3 = _LC17;
   uStack_2eb = _UNK_00102338;
   local_2e3 = _LC17;
   uStack_2db = _UNK_00102338;
   local_2d3 = _LC17;
   uStack_2cb = _UNK_00102338;
   local_2c3 = _LC17;
   uStack_2bb = _UNK_00102338;
   local_2b3 = _LC17;
   uStack_2ab = _UNK_00102338;
   local_2a3 = _LC17;
   uStack_29b = _UNK_00102338;
   do {
      local_1ff[lVar16] = (char)lVar16;
      lVar16 = lVar16 + 1;
   }
 while ( lVar16 != 0x81 );
   local_280 = _LC17;
   uStack_278 = _UNK_00102338;
   local_270 = _LC17;
   uStack_268 = _UNK_00102338;
   local_380 = _LC17;
   local_260 = _LC17;
   uStack_258 = _UNK_00102338;
   local_250 = _LC17;
   uStack_248 = _UNK_00102338;
   local_240 = _LC17;
   uStack_238 = _UNK_00102338;
   local_230 = _LC17;
   uStack_228 = _UNK_00102338;
   local_220 = _LC17;
   uStack_218 = _UNK_00102338;
   local_210 = _LC17;
   uStack_208 = _UNK_00102338;
   local_398 = 0xffff;
   local_3b0 = 0xffffffff;
   uStack_3ac = 0xffffffff;
   uStack_3a8 = 0xffffffff;
   uStack_3a4 = 0xffffffff;
   local_390 = 0xffffffff;
   uStack_38c = 0xffffffff;
   uStack_388 = 0xffffffff;
   uStack_384 = 0xffffffff;
   local_3b4 = ( -(uint)(cVar21 == '\0') & 0xfffffffe ) + 6;
   local_200 = 4;
   local_17e = 0x81;
   local_3a0 = 0xffffffffffffffff;
   local_374 = 1;
   local_378 = 0x4040404;
   local_58 = 0;
   local_50 = 0;
   local_4c = 0;
   _local_3b8 = CONCAT11(cVar4, cVar21);
   uStack_74 = 0x3f800000;
   local_60 = 4;
   uStack_84 = (undefined4)__LC19;
   uStack_80 = ( undefined4 )((ulong)__LC19 >> 0x20);
   uStack_7c = (undefined4)_UNK_00102358;
   uStack_78 = ( undefined4 )((ulong)_UNK_00102358 >> 0x20);
   local_70 = __LC18;
   uStack_68 = _UNK_00102348;
   local_88 = uVar13;
   cvtt::Kernels::ConfigureBC7EncodingPlanFromQuality((BC7EncodingPlan*)&local_3b0, 5);
   local_3f0 = 0;
   if (local_444 < 0) {
      local_58 = 0;
      LAB_00101888:local_50 = 0;
   }
 else {
      local_468 = 0;
      local_460 = 0;
      local_458 = 0;
      do {
         uVar9 = uVar8;
         if (( uVar8 & 3 ) != 0) {
            uVar9 = ( uint )((int)uVar8 >> 0x1f) >> 0x1e;
            uVar9 = uVar8 + 4 + ( uVar9 - ( uVar8 + uVar9 & 3 ) );
         }

         uVar23 = (uint)uVar18;
         local_464 = uVar23;
         if (( uVar18 & 3 ) != 0) {
            uVar12 = ( uint )((int)uVar23 >> 0x1f) >> 0x1e;
            local_464 = uVar23 + 4 + ( uVar12 - ( uVar23 + uVar12 & 3 ) );
         }

         lVar17 = Image::get_mipmap_offset((int)param_1);
         lVar16 = lVar15 + local_460;
         if (0 < (int)uVar23) {
            uVar12 = uVar9 + 3;
            if (-1 < (int)uVar9) {
               uVar12 = uVar9;
            }

            iVar10 = 0;
            do {
               if (local_458 == 0) {
                  lVar22 = 1;
               }
 else {
                  lVar22 = *(long*)( local_458 + -8 ) + 1;
               }

               iVar11 = CowData<CVTTCompressionRowTask>::resize<false>((CowData<CVTTCompressionRowTask>*)&local_3f0, lVar22);
               local_458 = local_3f0;
               if (iVar11 == 0) {
                  if (local_3f0 == 0) {
                     lVar19 = -1;
                     lVar22 = 0;
                  }
 else {
                     lVar22 = *(long*)( local_3f0 + -8 );
                     lVar19 = lVar22 + -1;
                     if (-1 < lVar19) {
                        CowData<CVTTCompressionRowTask>::_copy_on_write((CowData<CVTTCompressionRowTask>*)&local_3f0);
                        plVar20 = (long*)( lVar19 * 0x20 + local_3f0 );
                        *plVar20 = lVar17 + sVar3;
                        plVar20[1] = lVar16;
                        *(int*)( plVar20 + 2 ) = iVar10;
                        *(uint*)( (long)plVar20 + 0x14 ) = uVar8;
                        *(uint*)( plVar20 + 3 ) = uVar23;
                        local_458 = local_3f0;
                        goto LAB_0010131c;
                     }

                  }

                  _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar19, lVar22, "p_index", "size()", "", false, false);
               }
 else {
                  _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                  local_458 = local_3f0;
               }

               LAB_0010131c:iVar10 = iVar10 + 4;
               lVar16 = lVar16 + ( ( (int)uVar12 >> 2 ) << 4 );
            }
 while ( iVar10 < (int)uVar23 );
         }

         if ((int)local_464 < 4) {
            local_464 = 4;
         }

         if ((int)uVar9 < 4) {
            uVar9 = 4;
         }

         local_460 = local_460 + ( (int)( local_464 * uVar9 ) >> ( bVar7 & 0x1f ) );
         uVar9 = (int)uVar8 / 2;
         uVar8 = 1;
         if (0 < (int)uVar9) {
            uVar8 = uVar9;
         }

         uVar9 = (int)( (int)( uVar18 >> 0x1f ) + uVar23 ) >> 1;
         uVar18 = 1;
         if (0 < (int)uVar9) {
            uVar18 = (ulong)uVar9;
         }

         local_468 = local_468 + 1;
      }
 while ( local_468 <= local_444 );
      local_58 = local_458;
      if (local_458 == 0) goto LAB_00101888;
      local_50 = *(undefined4*)( local_458 + -8 );
   }

   p_Var2 = WorkerThreadPool::singleton;
   if ((image_compress_cvtt(Image*,Image::UsedChannels)::{lambda()
   #1
   && (iVar10 = __cxa_guard_acquire(&image_compress_cvtt(Image*,Image::UsedChannels)::{lambda()#1}
                                       ::operator()()::sname), iVar10 != 0)) {
    _scs_create((char *)&image_compress_cvtt(Image*,Image::UsedChannels)::{lambda()
   #1
   ::sname,true;
   __cxa_atexit(StringName::~StringName,
                 &image_compress_cvtt(Image*,Image::UsedChannels)::{lambda()#1}::operator()()::sname
                 ,&__dso_handle);
    __cxa_guard_release(&image_compress_cvtt(Image*,Image::UsedChannels)::{lambda()#1}::operator()()
                         ::sname);
  }
  lVar15 = image_compress_cvtt(Image*,Image::UsedChannels)::
   {
      lambda()
      #1
      if (image_compress_cvtt(Image*,Image::UsedChannels)::{lambda()
      #1
      LAB_0010164c:local_410 = 0;
   }

   else{pcVar1 = *(char**)( image_compress_cvtt(Image*,Image::UsedChannels)::{lambda()#1}::operator()() );
   local_410 = 0;
   if (pcVar1 == (char*)0x0) {
      plVar20 = (long*)( *(long*)( image_compress_cvtt(Image*,Image::UsedChannels)::{lambda()#1}::
                                   operator()() ) + -0x10 );
      if (*(long*)( image_compress_cvtt(Image*,Image::UsedChannels)::{lambda()#1}::operator()() ) == 0) goto LAB_0010164c;
      do {
         lVar16 = *plVar20;
         if (lVar16 == 0) goto LAB_0010164c;
         LOCK();
         lVar17 = *plVar20;
         bVar24 = lVar16 == lVar17;
         if (bVar24) {
            *plVar20 = lVar16 + 1;
            lVar17 = lVar16;
         }

         UNLOCK();
      }
 while ( !bVar24 );
      if (lVar17 != -1) {
         local_410 = *(long*)( lVar15 + 0x10 );
      }

   }
 else {
      local_3e0 = strlen(pcVar1);
      local_3e8 = pcVar1;
      String::parse_latin1((StrRange*)&local_410);
   }

}
WorkerThreadPool::add_native_group_task(p_Var2, _digest_job_queue, (int)&local_3b8, *(int*)( WorkerThreadPool::singleton + 0x290 ), true, (String_conflict*)0x1);lVar15 = local_410;if (local_410 != 0) {
   LOCK();
   plVar20 = (long*)( local_410 + -0x10 );
   *plVar20 = *plVar20 + -1;
   UNLOCK();
   if (*plVar20 == 0) {
      local_410 = 0;
      Memory::free_static((void*)( lVar15 + -0x10 ), false);
   }

}
WorkerThreadPool::wait_for_group_task_completion((long)WorkerThreadPool::singleton);uVar5 = Image::has_mipmaps();uVar13 = Image::get_height();uVar14 = Image::get_width();Image::set_data(param_1, uVar14, uVar13, uVar5, local_42c, local_408);cVar4 = is_print_verbose_enabled();if (cVar4 != '\0') {
   OS::get_singleton();
   OS::get_ticks_msec();
   local_418 = 0;
   local_3e0 = 0x1a;
   local_3e8 = "CVTT: Encoding took %d ms.";
   String::parse_latin1((StrRange*)&local_418);
   vformat<unsigned_long>((String_conflict*)&local_410, ( ulong ) & local_418);
   Variant::Variant((Variant*)local_3d8, (String_conflict*)&local_410);
   stringify_variants((Variant*)&local_3e8);
   __print_line((String_conflict*)&local_3e8);
   pcVar1 = local_3e8;
   if (local_3e8 != (char*)0x0) {
      LOCK();
      plVar20 = (long*)( local_3e8 + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         local_3e8 = (char*)0x0;
         Memory::free_static(pcVar1 + -0x10, false);
      }

   }

   if (Variant::needs_deinit[local_3d8[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar15 = local_410;
   if (local_410 != 0) {
      LOCK();
      plVar20 = (long*)( local_410 + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         local_410 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

   lVar15 = local_418;
   if (local_418 != 0) {
      LOCK();
      plVar20 = (long*)( local_418 + -0x10 );
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
         local_418 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

}
if (local_3f0 != 0) {
   LOCK();
   plVar20 = (long*)( local_3f0 + -0x10 );
   *plVar20 = *plVar20 + -1;
   UNLOCK();
   if (*plVar20 == 0) {
      Memory::free_static((void*)( local_3f0 + -0x10 ), false);
   }

}
lVar15 = local_400[0];if (local_400[0] != 0) {
   LOCK();
   plVar20 = (long*)( local_400[0] + -0x10 );
   *plVar20 = *plVar20 + -1;
   UNLOCK();
   if (*plVar20 == 0) {
      local_400[0] = 0;
      Memory::free_static((void*)( lVar15 + -0x10 ), false);
   }

}
LAB_00100e20:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* CowData<CVTTCompressionRowTask>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<CVTTCompressionRowTask>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_001019b0(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Removing unreachable block (ram,0x00101b48) *//* WARNING: Removing unreachable block (ram,0x00101c78) *//* WARNING: Removing unreachable block (ram,0x00101e40) *//* WARNING: Removing unreachable block (ram,0x00101c84) *//* WARNING: Removing unreachable block (ram,0x00101c8e) *//* WARNING: Removing unreachable block (ram,0x00101e20) *//* WARNING: Removing unreachable block (ram,0x00101c9a) *//* WARNING: Removing unreachable block (ram,0x00101ca4) *//* WARNING: Removing unreachable block (ram,0x00101e00) *//* WARNING: Removing unreachable block (ram,0x00101cb0) *//* WARNING: Removing unreachable block (ram,0x00101cba) *//* WARNING: Removing unreachable block (ram,0x00101de0) *//* WARNING: Removing unreachable block (ram,0x00101cc6) *//* WARNING: Removing unreachable block (ram,0x00101cd0) *//* WARNING: Removing unreachable block (ram,0x00101dc0) *//* WARNING: Removing unreachable block (ram,0x00101cdc) *//* WARNING: Removing unreachable block (ram,0x00101ce6) *//* WARNING: Removing unreachable block (ram,0x00101da0) *//* WARNING: Removing unreachable block (ram,0x00101cf2) *//* WARNING: Removing unreachable block (ram,0x00101cfc) *//* WARNING: Removing unreachable block (ram,0x00101d80) *//* WARNING: Removing unreachable block (ram,0x00101d04) *//* WARNING: Removing unreachable block (ram,0x00101d1a) *//* WARNING: Removing unreachable block (ram,0x00101d26) *//* String vformat<unsigned long>(String const&, unsigned long const) */String_conflict *vformat<unsigned_long>(String_conflict *param_1, ulong param_2) {
   char cVar1;
   Variant *this;
   ulong in_RDX;
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
/* CowData<CVTTCompressionRowTask>::_realloc(long) */undefined8 CowData<CVTTCompressionRowTask>::_realloc(CowData<CVTTCompressionRowTask> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<CVTTCompressionRowTask>::resize<false>(long) */undefined8 CowData<CVTTCompressionRowTask>::resize<false>(CowData<CVTTCompressionRowTask> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined1(*pauVar6)[16];
   undefined1(*pauVar7)[16];
   undefined8 uVar8;
   undefined8 *puVar9;
   long lVar10;
   long lVar11;
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
      lVar3 = lVar10 * 0x20;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x20 == 0) {
      LAB_00102280:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 0x20 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar11 = uVar4 + 1;
   if (lVar11 == 0) goto LAB_00102280;
   if (param_1 <= lVar10) {
      if (( lVar11 != lVar3 ) && ( uVar8 = _realloc(this, lVar11) ),(int)uVar8 != 0) {
         return uVar8;
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

   if (lVar11 == lVar3) {
      LAB_001021ec:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_0010217c;
   }
 else {
      if (lVar10 != 0) {
         uVar8 = _realloc(this, lVar11);
         if ((int)uVar8 != 0) {
            return uVar8;
         }

         goto LAB_001021ec;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar3 = 0;
   }

   pauVar6 = (undefined1(*) [16])( puVar9 + lVar3 * 4 );
   do {
      *(undefined8*)pauVar6[1] = 0;
      pauVar7 = pauVar6 + 2;
      *pauVar6 = (undefined1[16])0x0;
      *(undefined4*)( pauVar6[1] + 8 ) = 0;
      pauVar6 = pauVar7;
   }
 while ( pauVar7 != (undefined1(*) [16])( puVar9 + param_1 * 4 ) );
   LAB_0010217c:puVar9[-1] = param_1;
   return 0;
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


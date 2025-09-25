/* ktxTexture2_transcodeLzEtc1s(ktxTexture2*, alpha_content_e, ktxTexture2*, ktx_transcode_fmt_e,
   unsigned int) */undefined8 ktxTexture2_transcodeLzEtc1s(long param_1, int param_2, long param_3, undefined4 param_4, undefined4 param_5) {
   void *pvVar1;
   undefined1 uVar2;
   uint uVar3;
   int iVar4;
   undefined8 *puVar5;
   ushort *puVar6;
   long lVar7;
   byte bVar8;
   void *pvVar9;
   char cVar10;
   uint uVar11;
   uint uVar12;
   undefined4 *puVar13;
   long lVar14;
   ulong uVar15;
   uint uVar16;
   uint uVar17;
   void *pvVar18;
   ushort *puVar19;
   void **ppvVar20;
   int iVar21;
   long lVar22;
   void *pvVar23;
   ulong uVar24;
   ulong uVar25;
   int iVar26;
   long lVar27;
   void *pvVar28;
   undefined8 uVar29;
   long in_FS_OFFSET;
   float fVar30;
   float fVar31;
   void *local_428;
   ulong local_420;
   int local_400;
   int local_3d0;
   ulong local_3b8;
   long local_388;
   ulong local_380;
   undefined1 local_378[16];
   long local_368;
   basisu_lowlevel_etc1s_transcoder local_358[8];
   void *local_350;
   void *local_340;
   void *local_330;
   void *local_320;
   void *local_310;
   void *local_300;
   void *local_2f0;
   void *local_2e0;
   void *local_2d0;
   void *local_2c0;
   void *local_2b0;
   void *local_2a0;
   void *local_290;
   void *local_280;
   void *local_268;
   void *local_258[64];
   void *local_58[3];
   long local_40;
   puVar5 = *(undefined8**)( param_1 + 0xa0 );
   puVar6 = (ushort*)*puVar5;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar7 = *(long*)( param_3 + 0xa0 );
   if (( ( *(int*)( puVar6 + 2 ) == 0 ) || ( *(int*)( puVar6 + 4 ) == 0 ) ) || ( *(int*)( puVar6 + 6 ) == 0 )) {
      basisu::debug_printf("ktxTexture_TranscodeBasis: missing endpoints, selectors or tables");
   }
 else {
      puVar13 = (undefined4*)operator_new__(( ulong )(*(int*)( param_1 + 0x34 ) + 1) << 2);
      uVar12 = *(uint*)( param_1 + 0x34 );
      iVar26 = *(int*)( param_1 + 0x38 ) * *(int*)( param_1 + 0x3c );
      *puVar13 = 0;
      if (uVar12 == 0) {
         lVar22 = 0x14;
      }
 else {
         uVar3 = *(uint*)( param_1 + 0x2c );
         uVar16 = 1;
         uVar17 = 2;
         uVar11 = 1;
         if (uVar3 != 0) {
            uVar11 = uVar3;
         }

         puVar13[1] = uVar11 * iVar26;
         if (uVar12 != 1) {
            do {
               uVar25 = (ulong)uVar17;
               bVar8 = (byte)uVar16 & 0x1f;
               uVar11 = uVar3 >> bVar8;
               if (uVar3 >> bVar8 == 0) {
                  uVar11 = 1;
               }

               uVar24 = (ulong)uVar16;
               uVar17 = uVar17 + 1;
               uVar16 = uVar16 + 1;
               puVar13[uVar25] = uVar11 * iVar26 + puVar13[uVar24];
            }
 while ( uVar17 <= uVar12 );
         }

         lVar22 = ( (ulong)(uint)puVar13[uVar12] * 5 + 5 ) * 4;
      }

      if (( ulong ) * (uint*)( puVar6 + 2 ) + ( ulong ) * (uint*)( puVar6 + 4 ) + ( ulong ) * (uint*)( puVar6 + 6 ) + lVar22 <= (ulong)puVar5[2]) {
         basist::basisu_lowlevel_etc1s_transcoder::basisu_lowlevel_etc1s_transcoder(local_358);
         local_368 = 0;
         local_378 = (undefined1[16])0x0;
         if (*(char*)( param_1 + 0x8c ) == '\0') {
            uVar25 = 1;
            LAB_001006d4:std::vector<basist::basisu_transcoder_state,std::allocator<basist::basisu_transcoder_state>>::_M_default_append((vector<basist::basisu_transcoder_state,std::allocator<basist::basisu_transcoder_state>>*)local_378, uVar25);
            local_428 = (void*)local_378._0_8_;
            local_380 = local_368 - local_378._0_8_;
            pvVar18 = (void*)local_378._8_8_;
         }
 else {
            local_428 = (void*)0x0;
            uVar25 = ( ulong ) * (uint*)( param_1 + 0x3c );
            local_380 = 0;
            pvVar18 = (void*)0x0;
            if (uVar25 != 0) goto LAB_001006d4;
         }

         iVar26 = (int)puVar6;
         iVar21 = (int)lVar22;
         basist::basisu_lowlevel_etc1s_transcoder::decode_palettes((uint)local_358, (uchar*)( ulong ) * puVar6, iVar26 + iVar21, *(uint*)( puVar6 + 2 ), (uchar*)(ulong)puVar6[1], iVar26 + *(uint*)( puVar6 + 2 ) + iVar21);
         basist::basisu_lowlevel_etc1s_transcoder::decode_tables((uchar*)local_358, *(int*)( puVar6 + 2 ) + *(int*)( puVar6 + 4 ) + iVar21 + iVar26);
         uVar2 = *(undefined1*)( param_1 + 0x8c );
         lVar22 = *(long*)( param_3 + 0x70 );
         uVar24 = ( ulong )(*(uint*)( *(long*)( param_3 + 0x18 ) + 0x20 ) >> 3);
         uVar25 = *(ulong*)( param_3 + 0x68 );
         uVar12 = *(int*)( param_1 + 0x34 ) - 1;
         if (-1 < (int)uVar12) {
            local_3b8 = (ulong)uVar12;
            local_420 = 0;
            local_388 = lVar7 + local_3b8 * 0x18;
            do {
               iVar26 = ktxTexture2_levelDataOffset(param_1, local_3b8 & 0xffffffff);
               bVar8 = (byte)local_3b8;
               uVar12 = *(uint*)( param_1 + 0x24 ) >> ( bVar8 & 0x1f );
               if (*(uint*)( param_1 + 0x24 ) >> ( bVar8 & 0x1f ) == 0) {
                  uVar12 = 1;
               }

               uVar3 = *(uint*)( param_1 + 0x28 ) >> ( bVar8 & 0x1f );
               if (*(uint*)( param_1 + 0x28 ) >> ( bVar8 & 0x1f ) == 0) {
                  uVar3 = 1;
               }

               uVar11 = *(uint*)( param_1 + 0x2c ) >> ( bVar8 & 0x1f );
               if (uVar11 == 0) {
                  uVar11 = 1;
               }

               iVar21 = *(int*)( param_1 + 0x3c ) * *(int*)( param_1 + 0x38 ) * uVar11;
               uVar11 = puVar13[local_3b8];
               lVar14 = ktxTexture2_GetImageSize(param_3, local_3b8 & 0xffffffff);
               if (uVar11 < iVar21 + uVar11) {
                  lVar27 = 0;
                  puVar19 = puVar6 + ( ulong )(uVar11 + 1) * 10;
                  uVar16 = 0;
                  do {
                     uVar15 = (ulong)uVar16;
                     uVar16 = uVar16 + 1;
                     if ((ulong)uVar16 == ( (long)pvVar18 - (long)local_428 >> 5 ) * -0xf0f0f0f0f0f0f0f) {
                        uVar16 = 0;
                     }

                     if (param_2 == 0) {
                        iVar4 = *(int*)( puVar19 + 8 );
                     }
 else if (( *(int*)( puVar19 + 6 ) == 0 ) || ( iVar4 = iVar4 == 0 )) {
                        uVar29 = 1;
                        goto LAB_00100501;
                     }

                     local_400 = (int)( local_420 / uVar24 );
                     local_3d0 = (int)( uVar25 / uVar24 );
                     cVar10 = basist::basisu_lowlevel_etc1s_transcoder::transcode_image(local_358, param_4, lVar22 + local_420 + lVar27, local_3d0 - local_400, *(undefined8*)( param_1 + 0x70 ), *(undefined4*)( param_1 + 0x68 ), uVar12 + 3 >> 2, uVar3 + 3 >> 2, uVar12, uVar3, local_3b8 & 0xffffffff, *(int*)( puVar19 + 2 ) + iVar26, *(undefined4*)( puVar19 + 4 ), *(int*)( puVar19 + 6 ) + iVar26, iVar4, param_5, param_2 != 0, uVar2, 0, (void*)( uVar15 * 0x220 + (long)local_428 ), 0);
                     if (cVar10 == '\0') {
                        uVar29 = 0xe;
                        goto LAB_0010072e;
                     }

                     puVar19 = puVar19 + 10;
                     lVar27 = lVar27 + lVar14;
                  }
 while ( puVar6 + ( ( ulong )(iVar21 - 1) + ( ulong )(uVar11 + 1) ) * 10 + 10 != puVar19 );
                  uVar15 = local_420 + lVar27;
               }
 else {
                  lVar27 = 0;
                  uVar15 = local_420;
               }

               *(ulong*)( local_388 + 0x20 ) = local_420;
               *(long*)( local_388 + 0x28 ) = lVar27;
               *(long*)( local_388 + 0x30 ) = lVar27;
               fVar31 = (float)*(uint*)( lVar7 + 8 );
               fVar30 = (float)uVar15 / fVar31;
               if ((float)( (uint)fVar30 & _LC6 ) < _LC2) {
                  fVar30 = (float)( ( uint )((float)(int)fVar30 + (float)( -(uint)((float)(int)fVar30 < fVar30) & _LC4 )) | ~_LC6 & (uint)fVar30 );
               }

               local_3b8 = local_3b8 - 1;
               local_388 = local_388 + -0x18;
               local_420 = (long)( fVar30 * fVar31 ) & 0xffffffff;
            }
 while ( -1 < (int)local_3b8 );
         }

         uVar29 = 0;
         LAB_0010072e:operator_delete__(puVar13);
         LAB_00100501:pvVar23 = (void*)( (long)local_428 + 0x20 );
         pvVar1 = local_428;
         while (pvVar18 != pvVar1) {
            pvVar1 = (void*)( (long)pvVar23 + 0x200 );
            pvVar9 = pvVar1;
            do {
               pvVar28 = pvVar9;
               if (*(void**)( (long)pvVar28 + -0x10 ) != (void*)0x0) {
                  free(*(void**)( (long)pvVar28 + -0x10 ));
               }

               pvVar9 = (void*)( (long)pvVar28 + -0x10 );
            }
 while ( (void*)( (long)pvVar28 + -0x10 ) != pvVar23 );
            if (*(void**)( (long)pvVar28 + -0x20 ) != (void*)0x0) {
               free(*(void**)( (long)pvVar28 + -0x20 ));
            }

            if (*(void**)( (long)pvVar28 + -0x30 ) != (void*)0x0) {
               free(*(void**)( (long)pvVar28 + -0x30 ));
            }

            pvVar23 = (void*)( (long)pvVar23 + 0x220 );
         }
;
         if (local_428 != (void*)0x0) {
            operator_delete(local_428, local_380);
         }

         ppvVar20 = local_58;
         do {
            if (*ppvVar20 != (void*)0x0) {
               free(*ppvVar20);
            }

            ppvVar20 = ppvVar20 + -2;
         }
 while ( ppvVar20 != local_258 );
         if (local_258[0] != (void*)0x0) {
            free(local_258[0]);
         }

         if (local_268 != (void*)0x0) {
            free(local_268);
         }

         if (local_280 != (void*)0x0) {
            free(local_280);
         }

         if (local_290 != (void*)0x0) {
            free(local_290);
         }

         if (local_2a0 != (void*)0x0) {
            free(local_2a0);
         }

         if (local_2b0 != (void*)0x0) {
            free(local_2b0);
         }

         if (local_2c0 != (void*)0x0) {
            free(local_2c0);
         }

         if (local_2d0 != (void*)0x0) {
            free(local_2d0);
         }

         if (local_2e0 != (void*)0x0) {
            free(local_2e0);
         }

         if (local_2f0 != (void*)0x0) {
            free(local_2f0);
         }

         if (local_300 != (void*)0x0) {
            free(local_300);
         }

         if (local_310 != (void*)0x0) {
            free(local_310);
         }

         if (local_320 != (void*)0x0) {
            free(local_320);
         }

         if (local_330 != (void*)0x0) {
            free(local_330);
         }

         if (local_340 != (void*)0x0) {
            free(local_340);
         }

         if (local_350 != (void*)0x0) {
            free(local_350);
         }

         goto LAB_0010007a;
      }

   }

   uVar29 = 1;
   LAB_0010007a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar29;
}
/* ktxTexture2_transcodeUastc(ktxTexture2*, alpha_content_e, ktxTexture2*, ktx_transcode_fmt_e,
   unsigned int) */undefined4 ktxTexture2_transcodeUastc(long param_1, int param_2, long param_3, undefined4 param_4, undefined4 param_5) {
   undefined8 *puVar1;
   long lVar2;
   ulong uVar3;
   uint uVar4;
   uint uVar5;
   char cVar6;
   uint uVar7;
   ulong uVar8;
   long lVar9;
   long lVar10;
   byte bVar11;
   ulong uVar12;
   int iVar13;
   ulong uVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   int iVar17;
   undefined4 uVar18;
   int iVar19;
   undefined8 *puVar20;
   ulong uVar21;
   long lVar22;
   long in_FS_OFFSET;
   undefined8 *local_108;
   ulong local_b0;
   long local_98;
   int local_80;
   basisu_lowlevel_uastc_transcoder local_59;
   undefined1 local_58[16];
   long local_48;
   long local_40;
   lVar9 = *(long*)( param_3 + 0xa0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)( param_3 + 0x70 );
   uVar12 = ( ulong )(*(uint*)( *(long*)( param_3 + 0x18 ) + 0x20 ) >> 3);
   uVar3 = *(ulong*)( param_3 + 0x68 );
   basist::basisu_lowlevel_uastc_transcoder::basisu_lowlevel_uastc_transcoder(&local_59);
   local_48 = 0;
   local_58 = (undefined1[16])0x0;
   if (*(char*)( param_1 + 0x8c ) == '\0') {
      uVar21 = 1;
      LAB_0010092d:std::vector<basist::basisu_transcoder_state,std::allocator<basist::basisu_transcoder_state>>::_M_default_append((vector<basist::basisu_transcoder_state,std::allocator<basist::basisu_transcoder_state>>*)local_58, uVar21);
      local_108 = (undefined8*)local_58._0_8_;
      uVar21 = local_48 - local_58._0_8_;
      iVar17 = *(int*)( param_1 + 0x34 ) + -1;
      puVar20 = (undefined8*)local_58._8_8_;
      if (-1 < iVar17) goto LAB_00100967;
   }
 else {
      uVar21 = ( ulong ) * (uint*)( param_1 + 0x3c );
      if (uVar21 != 0) goto LAB_0010092d;
      local_108 = (undefined8*)0x0;
      uVar21 = 0;
      iVar17 = *(int*)( param_1 + 0x34 ) + -1;
      puVar20 = (undefined8*)0x0;
      if (iVar17 < 0) {
         uVar18 = 0;
         goto LAB_00100c11;
      }

      LAB_00100967:local_b0 = 0;
      local_98 = lVar9 + (long)iVar17 * 0x18;
      do {
         bVar11 = (byte)iVar17;
         uVar4 = *(uint*)( param_1 + 0x24 ) >> ( bVar11 & 0x1f );
         if (*(uint*)( param_1 + 0x24 ) >> ( bVar11 & 0x1f ) == 0) {
            uVar4 = 1;
         }

         uVar5 = *(uint*)( param_1 + 0x28 ) >> ( bVar11 & 0x1f );
         if (*(uint*)( param_1 + 0x28 ) >> ( bVar11 & 0x1f ) == 0) {
            uVar5 = 1;
         }

         uVar7 = *(uint*)( param_1 + 0x2c ) >> ( bVar11 & 0x1f );
         if (*(uint*)( param_1 + 0x2c ) >> ( bVar11 & 0x1f ) == 0) {
            uVar7 = 1;
         }

         iVar13 = *(int*)( param_1 + 0x38 ) * *(int*)( param_1 + 0x3c ) * uVar7;
         uVar8 = ktxTexture_calcImageSize(param_1, iVar17, 2);
         lVar9 = ktxTexture_calcImageSize(param_3, iVar17, 2);
         lVar10 = ktxTexture2_levelDataOffset(param_1, iVar17);
         if (iVar13 == 0) {
            lVar22 = 0;
            uVar8 = local_b0;
         }
 else {
            local_80 = (int)( uVar3 / uVar12 );
            iVar19 = 0;
            uVar7 = 0;
            lVar22 = 0;
            do {
               uVar14 = (ulong)uVar7;
               uVar7 = uVar7 + 1;
               if ((ulong)uVar7 == ( (long)puVar20 - (long)local_108 >> 5 ) * -0xf0f0f0f0f0f0f0f) {
                  uVar7 = 0;
               }

               cVar6 = basist::basisu_lowlevel_uastc_transcoder::transcode_image(&local_59, param_4, local_b0 + lVar2 + lVar22, local_80 - (int)( local_b0 / uVar12 ), *(undefined8*)( param_1 + 0x70 ), *(undefined4*)( param_1 + 0x68 ), uVar4 + 3 >> 2, uVar5 + 3 >> 2, uVar4, uVar5, iVar17, lVar10, uVar8 & 0xffffffff, param_5, param_2 != 0, *(undefined1*)( param_1 + 0x8c ), 0, local_108 + uVar14 * 0x44, 0, 0xffffffffffffffff, 0xffffffffffffffff);
               if (cVar6 == '\0') {
                  uVar18 = 0xe;
                  goto LAB_00100b9a;
               }

               iVar19 = iVar19 + 1;
               lVar22 = lVar22 + lVar9;
               lVar10 = lVar10 + uVar8;
            }
 while ( iVar13 != iVar19 );
            uVar8 = local_b0 + lVar22;
         }

         iVar17 = iVar17 + -1;
         *(ulong*)( local_98 + 0x20 ) = local_b0;
         *(long*)( local_98 + 0x28 ) = lVar22;
         *(long*)( local_98 + 0x30 ) = lVar22;
         local_b0 = uVar8;
         local_98 = local_98 + -0x18;
      }
 while ( iVar17 != -1 );
   }

   uVar18 = 0;
   LAB_00100b9a:puVar15 = local_108 + 2;
   puVar1 = local_108;
   while (puVar1 != puVar20) {
      puVar1 = puVar15 + 0x42;
      puVar16 = puVar15 + 0x40;
      do {
         if ((void*)*puVar16 != (void*)0x0) {
            free((void*)*puVar16);
         }

         puVar16 = puVar16 + -2;
      }
 while ( puVar15 != puVar16 );
      if ((void*)*puVar15 != (void*)0x0) {
         free((void*)*puVar15);
      }

      if ((void*)puVar15[-2] != (void*)0x0) {
         free((void*)puVar15[-2]);
      }

      puVar15 = puVar15 + 0x44;
   }
;
   if (local_108 != (undefined8*)0x0) {
      operator_delete(local_108, uVar21);
   }

   LAB_00100c11:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar18;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int ktxTexture2_TranscodeBasis(long param_1, uint param_2, uint param_3) {
   undefined1 uVar1;
   uint uVar2;
   undefined4 uVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   void *pvVar7;
   undefined8 *puVar8;
   char cVar9;
   uint uVar10;
   int iVar11;
   byte bVar12;
   char cVar13;
   undefined8 uVar14;
   long *plVar15;
   uint uVar16;
   int iVar17;
   long in_FS_OFFSET;
   long local_80;
   undefined4 local_78;
   int local_74;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined4 local_50;
   undefined2 local_4c;
   long local_40;
   lVar4 = *(long*)( param_1 + 0x80 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = *(uint*)( lVar4 + 0xc );
   uVar16 = uVar10 & 0xff;
   if ((char)uVar10 == -0x5a) {
      plVar15 = *(long**)( param_1 + 0xa0 );
      if (*(int*)( param_1 + 0x88 ) == 1) goto LAB_00100cf2;
      LAB_00100d1c:if (( param_3 & 2 ) == 0) {
         if (( param_2 - 8 < 2 ) && ( ( ( ( uVar2 = *(uint*)( param_1 + 0x24 ) ),uVar2 == 0 || ( ( uVar2 - 1 & uVar2 ) != 0 ) ) || ( uVar2 = *(uint*)( param_1 + 0x28 ) ),uVar2 == 0 ) ) || ( ( uVar2 - 1 & uVar2 ) != 0 )) {
            basisu::debug_printf("ktxTexture_TranscodeBasis: PVRTC1 only supports power of 2 dimensions\n");
            goto LAB_00100ebe;
         }

         uVar10 = uVar10 & 0xff0000;
         cVar13 = '\0';
         if (uVar16 == 0xa3) {
            if (3 < ( *(uint*)( lVar4 + 8 ) >> 0x12 ) - 0xe) {
               if (param_2 == 0x16) {
                  LAB_00101090:cVar13 = '\0';
                  switchD_00100f0b_caseD_0:param_2 = 0;
                  uVar14 = 0;
                  iVar17 = ( uVar10 == 0x20000 ) + 0x93;
                  goto LAB_00100da2;
               }

               if (0x16 < param_2) {
                  if (param_2 != 0x17) goto switchD_00100f0b_caseD_7;
                  LAB_00101051:uVar14 = 2;
                  param_2 = 2;
                  iVar17 = ( uVar10 == 0x20000 ) + 0x83;
                  goto LAB_00100da2;
               }

               if (param_2 == 9) goto LAB_00100fc1;
               cVar13 = '\0';
               if (param_2 != 0x13) goto LAB_00100ef2;
               LAB_00100d84:uVar14 = 0x12;
               param_2 = 0x12;
               cVar13 = '\0';
               goto LAB_00100d8e;
            }

            bVar12 = *(byte*)( lVar4 + 0x2f ) & 0xf;
            if (bVar12 == 0xf) {
               cVar13 = '\x01';
            }
 else {
               iVar11 = 1;
               if (bVar12 != 4) goto LAB_00100e69;
               cVar13 = '\x02';
            }

            if (param_2 == 0x16) {
               switchD_00100f0b_caseD_1:goto LAB_001010bc;
            }

            if (0x16 < param_2) goto LAB_00101008;
            if (param_2 == 9) {
               LAB_001013a8:uVar14 = 9;
               param_2 = 9;
               goto LAB_00100fcb;
            }

            cVar9 = cVar13;
            if (param_2 == 0x13) goto LAB_00100f62;
            LAB_00100ef2:switch (param_2) {
               case 0:
          goto switchD_00100f0b_caseD_0;
               case 1:
          goto switchD_00100f0b_caseD_1;
               case 2:
          goto LAB_00101051;
               case 3:
          goto LAB_00101011;
               case 4:
          uVar14 = 4;
          iVar17 = 0x8b;
          break;
               case 5:
          uVar14 = 5;
          iVar17 = 0x8d;
          break;
               case 6:
          uVar14 = 6;
          iVar17 = (uVar10 == 0x20000) + 0x91;
          break;
               default:
switchD_00100f0b_caseD_7:
          iVar11 = 0xb;
          goto LAB_00100e69;
               case 8:
          uVar14 = 8;
          goto LAB_00100fcb;
               case 10:
          uVar14 = 10;
          iVar17 = (uVar10 == 0x20000) + 0x9d;
          break;
               case 0xd:
          iVar17 = 0x25;
          if (uVar10 == 0x20000) {
            iVar17 = 0x2b;
          }
          uVar14 = 0xd;
          break;
               case 0xe:
          uVar14 = 0xe;
          iVar17 = 4;
          break;
               case 0xf:
          uVar14 = 0xf;
          iVar17 = 5;
          break;
               case 0x10:
          uVar14 = 0x10;
          iVar17 = 2;
          break;
               case 0x12:
               case 0x13:
          uVar14 = 0x12;
          param_2 = 0x12;
          goto LAB_00100d8e;
               case 0x14:
          uVar14 = 0x14;
          iVar17 = 0x99;
          break;
               case 0x15:
          uVar14 = 0x15;
          iVar17 = 0x9b;
            }

         }
 else {
            bVar12 = *(byte*)( lVar4 + 0x1f ) & 0xf;
            if (bVar12 == 3) {
               if (param_2 == 0x16) {
                  cVar13 = '\x01';
                  goto LAB_001010bc;
               }

               if (0x16 < param_2) {
                  cVar13 = '\x01';
                  LAB_00101008:if (param_2 != 0x17) goto switchD_00100f0b_caseD_7;
                  goto LAB_00101011;
               }

               if (param_2 == 9) {
                  cVar13 = '\x01';
                  uVar14 = 9;
                  goto LAB_00100fcb;
               }

               cVar13 = '\x01';
               cVar9 = '\x01';
               if (param_2 != 0x13) goto LAB_00100ef2;
            }
 else {
               if (param_2 == 0x16) {
                  if (bVar12 != 5) goto LAB_00101090;
                  cVar13 = '\x02';
                  LAB_001010bc:uVar14 = 1;
                  param_2 = 1;
                  iVar17 = ( uVar10 == 0x20000 ) + 0x97;
                  goto LAB_00100da2;
               }

               if (0x16 < param_2) {
                  iVar11 = 0xb;
                  if (param_2 != 0x17) goto LAB_00100e69;
                  if (bVar12 != 5) goto LAB_00101051;
                  cVar13 = '\x02';
                  LAB_00101011:uVar14 = 3;
                  param_2 = 3;
                  iVar17 = ( uVar10 == 0x20000 ) + 0x89;
                  goto LAB_00100da2;
               }

               if (param_2 == 9) {
                  if (bVar12 == 5) {
                     cVar13 = '\x02';
                     goto LAB_001013a8;
                  }

                  LAB_00100fc1:uVar14 = 8;
                  param_2 = 8;
                  cVar13 = '\0';
                  LAB_00100fcb:iVar17 = ( uint )(uVar10 == 0x20000) * 4 + 0x3b9b9cf1;
                  goto LAB_00100da2;
               }

               if (param_2 != 0x13) {
                  cVar13 = ( bVar12 == 5 ) * '\x02';
                  goto LAB_00100ef2;
               }

               if (bVar12 != 5) goto LAB_00100d84;
               cVar9 = '\x02';
            }

            LAB_00100f62:cVar13 = cVar9;
            uVar14 = 0x13;
            param_2 = 0x13;
            LAB_00100d8e:iVar17 = ( uint )(uVar10 == 0x20000) * 4 + 0x3b9b9cf3;
         }

         LAB_00100da2:cVar9 = basist::basis_is_format_supported(uVar14, uVar16 == 0xa6);
         if (cVar9 != '\0') {
            local_4c = CONCAT11(*(undefined1*)( param_1 + 0x23 ), *(undefined1*)( param_1 + 0x20 ));
            local_68 = *(undefined8*)( param_1 + 0x24 );
            uStack_60 = *(undefined8*)( param_1 + 0x2c );
            local_50 = *(undefined4*)( param_1 + 0x3c );
            local_78 = 0;
            local_58 = *(undefined8*)( param_1 + 0x34 );
            local_70 = 0;
            local_74 = iVar17;
            iVar11 = ktxTexture2_Create(&local_78, 1, &local_80);
            if (iVar11 != 0) goto LAB_00100e69;
            if (*(long*)( param_1 + 0x70 ) == 0) {
               cVar9 = ktxTexture_isActiveStream(param_1);
               if (cVar9 == '\0') {
                  ktxTexture2_Destroy(local_80);
                  goto LAB_00100ebe;
               }

               iVar11 = ktxTexture2_LoadImageData(param_1, 0, 0);
               if (iVar11 != 0) {
                  ktxTexture2_Destroy(local_80);
                  goto LAB_00100e69;
               }

            }

            if (ktxTexture2_TranscodeBasis::transcoderInitialized == '\0') {
               basist::basisu_transcoder_init();
               ktxTexture2_TranscodeBasis::transcoderInitialized = '\x01';
            }

            if (uVar16 == 0xa6) {
               iVar11 = ktxTexture2_transcodeUastc(param_1, cVar13, local_80, param_2, param_3);
            }
 else {
               iVar11 = ktxTexture2_transcodeLzEtc1s();
            }

            if (iVar11 == 0) {
               lVar4 = *(long*)( local_80 + 0x18 );
               lVar5 = *(long*)( param_1 + 0x18 );
               lVar6 = *(long*)( local_80 + 0xa0 );
               uVar14 = *(undefined8*)( lVar4 + 0x20 );
               *(undefined8*)( lVar5 + 0x18 ) = *(undefined8*)( lVar4 + 0x18 );
               *(undefined8*)( lVar5 + 0x20 ) = uVar14;
               uVar14 = *(undefined8*)( lVar4 + 0x30 );
               *(undefined8*)( lVar5 + 0x28 ) = *(undefined8*)( lVar4 + 0x28 );
               *(undefined8*)( lVar5 + 0x30 ) = uVar14;
               uVar1 = *(undefined1*)( local_80 + 0x22 );
               *(int*)( param_1 + 0x78 ) = iVar17;
               *(undefined1*)( param_1 + 0x22 ) = uVar1;
               uVar3 = *(undefined4*)( lVar6 + 8 );
               *(undefined4*)( param_1 + 0x88 ) = 0;
               *(undefined4*)( plVar15 + 1 ) = uVar3;
               memcpy(plVar15 + 4, (void*)( lVar6 + 0x20 ), ( ulong ) * (uint*)( param_1 + 0x34 ) * 0x18);
               free(*(void**)( param_1 + 0x80 ));
               pvVar7 = *(void**)( param_1 + 0x70 );
               *(undefined8*)( param_1 + 0x80 ) = *(undefined8*)( local_80 + 0x80 );
               *(undefined8*)( local_80 + 0x80 ) = 0;
               free(pvVar7);
               *(undefined8*)( param_1 + 0x70 ) = *(undefined8*)( local_80 + 0x70 );
               *(undefined8*)( param_1 + 0x68 ) = *(undefined8*)( local_80 + 0x68 );
               puVar8 = *(undefined8**)( param_1 + 0xa0 );
               *(undefined8*)( local_80 + 0x70 ) = 0;
               *(undefined8*)( local_80 + 0x68 ) = 0;
               puVar8[2] = 0;
               pvVar7 = (void*)*puVar8;
               if (pvVar7 != (void*)0x0) {
                  free(pvVar7);
                  **(undefined8**)( param_1 + 0xa0 ) = 0;
               }

            }

            ktxTexture2_Destroy(local_80);
            goto LAB_00100e69;
         }

      }
 else {
         basisu::debug_printf("ktxTexture_TranscodeBasis: KTX_TF_PVRTC_DECODE_TO_NEXT_POW2 currently unsupported\n");
      }

      iVar11 = 0x11;
   }
 else {
      if (*(int*)( param_1 + 0x88 ) == 1) {
         plVar15 = *(long**)( param_1 + 0xa0 );
         LAB_00100cf2:if (( *plVar15 != 0 ) && ( plVar15[2] != 0 )) goto LAB_00100d1c;
      }

      LAB_00100ebe:iVar11 = 10;
   }

   LAB_00100e69:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar11;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* std::vector<basist::basisu_transcoder_state, std::allocator<basist::basisu_transcoder_state>
   >::_M_default_append(unsigned long) */void std::vector<basist::basisu_transcoder_state,std::allocator<basist::basisu_transcoder_state>>::_M_default_append(vector<basist::basisu_transcoder_state,std::allocator<basist::basisu_transcoder_state>> *this, ulong param_1) {
   void *pvVar1;
   ulong uVar2;
   uint uVar3;
   void *pvVar4;
   void *pvVar5;
   ulong uVar6;
   void *pvVar7;
   long lVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   undefined8 *puVar11;
   long lVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   void *pvVar15;
   undefined8 *puVar16;
   undefined8 *puVar17;
   undefined8 *puVar18;
   uint *puVar19;
   void *pvVar20;
   uint *puVar21;
   byte bVar22;
   bVar22 = 0;
   if (param_1 == 0) {
      return;
   }

   pvVar4 = *(void**)( this + 8 );
   pvVar5 = *(void**)this;
   if (( ulong )(( *(long*)( this + 0x10 ) - (long)pvVar4 >> 5 ) * -0xf0f0f0f0f0f0f0f) < param_1) {
      lVar12 = (long)pvVar4 - (long)pvVar5;
      lVar8 = lVar12 >> 5;
      if (lVar8 * 0xf0f0f0f0f0f0f0f + 0x3c3c3c3c3c3c3cU < param_1) {
         std::__throw_length_error("vector::_M_default_append");
         /* WARNING: Bad instruction - Truncating control flow here */
         halt_baddata();
      }

      uVar2 = param_1 + lVar8 * -0xf0f0f0f0f0f0f0f;
      uVar6 = 0x3c3c3c3c3c3c3c;
      if (uVar2 < 0x3c3c3c3c3c3c3d) {
         uVar6 = uVar2;
      }

      if (( param_1 <= ( ulong )(lVar8 * -0xf0f0f0f0f0f0f0f) ) && ( uVar6 = 0x3c3c3c3c3c3c3c < uVar6 )) {
         uVar6 = 0x3c3c3c3c3c3c3c;
      }

      pvVar7 = operator_new(uVar6 * 0x220);
      puVar14 = (undefined8*)( (long)pvVar7 + lVar12 + 0x128 );
      puVar16 = (undefined8*)( (long)pvVar7 + lVar12 + 0x228 );
      puVar13 = (undefined8*)( (long)pvVar7 + lVar12 + 0x28 );
      do {
         puVar18 = puVar14 + -0x25;
         for (lVar8 = 0x44; puVar11 = puVar13,lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + (ulong)bVar22 * -2 + 1;
         }

         do {
            puVar11[-1] = 0;
            puVar17 = puVar11 + 8;
            for (int i = 0; i < 3; i++) {
               puVar11[( 2*i + 1 )] = 0;
            }

            *puVar11 = 0;
            for (int i = 0; i < 3; i++) {
               puVar11[( 2*i + 2 )] = 0;
            }

            puVar18 = puVar14;
            puVar11 = puVar17;
         }
 while ( puVar17 != puVar14 );
         do {
            puVar11 = puVar18;
            for (int i = 0; i < 4; i++) {
               puVar11[( 2*i + -1 )] = 0;
            }

            *puVar11 = 0;
            for (int i = 0; i < 3; i++) {
               puVar11[( 2*i + 2 )] = 0;
            }

            puVar18 = puVar11 + 8;
         }
 while ( puVar11 + 8 != puVar16 );
         puVar14 = puVar14 + 0x44;
         puVar16 = puVar11 + 0x4c;
         puVar13 = puVar13 + 0x44;
      }
 while ( puVar14 != (undefined8*)( (long)pvVar7 + param_1 * 0x220 + lVar12 + 0x128 ) );
      puVar13 = (undefined8*)( (long)pvVar7 + 0x20 );
      pvVar20 = pvVar5;
      if (pvVar5 != pvVar4) {
         do {
            puVar14 = puVar13 + -4;
            puVar19 = (uint*)( (long)pvVar20 + 8 );
            do {
               *puVar14 = 0;
               puVar14[1] = 0;
               basisu::elemental_vector::increase_capacity((uint)puVar14, SUB41(*puVar19, 0), 0, (_func_void_void_ptr_void_ptr_uint*)0x4, false);
               uVar3 = *puVar19;
               *(uint*)( puVar14 + 1 ) = uVar3;
               if (( (void*)*puVar14 != (void*)0x0 ) && ( *(void**)( puVar19 + -2 ) != (void*)0x0 )) {
                  memcpy((void*)*puVar14, *(void**)( puVar19 + -2 ), (ulong)uVar3 * 4);
               }

               puVar14 = puVar14 + 2;
               puVar19 = puVar19 + 4;
            }
 while ( puVar14 != puVar13 );
            puVar19 = (uint*)( (long)pvVar20 + 0x128 );
            puVar14 = puVar13;
            do {
               puVar21 = puVar19 + -0x40;
               puVar16 = puVar14;
               do {
                  *puVar16 = 0;
                  puVar16[1] = 0;
                  basisu::elemental_vector::increase_capacity((uint)puVar16, SUB41(*puVar21, 0), 0, (_func_void_void_ptr_void_ptr_uint*)0x4, false);
                  uVar3 = *puVar21;
                  *(uint*)( puVar16 + 1 ) = uVar3;
                  if (( (void*)*puVar16 != (void*)0x0 ) && ( *(void**)( puVar21 + -2 ) != (void*)0x0 )) {
                     memcpy((void*)*puVar16, *(void**)( puVar21 + -2 ), (ulong)uVar3 << 2);
                  }

                  puVar21 = puVar21 + 4;
                  puVar16 = puVar16 + 2;
               }
 while ( puVar19 != puVar21 );
               puVar19 = puVar19 + 0x40;
               puVar14 = puVar14 + 0x20;
            }
 while ( puVar19 != (uint*)( (long)pvVar20 + 0x328 ) );
            pvVar20 = (void*)( (long)pvVar20 + 0x220 );
            puVar13 = puVar13 + 0x44;
         }
 while ( pvVar4 != pvVar20 );
         pvVar20 = (void*)( (long)pvVar5 + 0x20 );
         do {
            pvVar1 = (void*)( (long)pvVar20 + 0x200 );
            pvVar15 = pvVar1;
            do {
               puVar13 = (undefined8*)( (long)pvVar15 + -0x10 );
               pvVar15 = (void*)( (long)pvVar15 + -0x10 );
               if ((void*)*puVar13 != (void*)0x0) {
                  free((void*)*puVar13);
               }

            }
 while ( pvVar15 != pvVar20 );
            if (*(void**)( (long)pvVar20 + -0x10 ) != (void*)0x0) {
               free(*(void**)( (long)pvVar20 + -0x10 ));
            }

            if (*(void**)( (long)pvVar20 + -0x20 ) != (void*)0x0) {
               free(*(void**)( (long)pvVar20 + -0x20 ));
            }

            pvVar20 = (void*)( (long)pvVar20 + 0x220 );
         }
 while ( pvVar4 != pvVar1 );
      }

      if (pvVar5 != (void*)0x0) {
         operator_delete(pvVar5, *(long*)( this + 0x10 ) - (long)pvVar5);
      }

      *(void**)this = pvVar7;
      *(void**)( this + 8 ) = (void*)( uVar2 * 0x220 + (long)pvVar7 );
      *(void**)( this + 0x10 ) = (void*)( uVar6 * 0x220 + (long)pvVar7 );
      return;
   }

   puVar14 = (undefined8*)( (long)pvVar4 + 0x120 );
   puVar13 = (undefined8*)( (long)pvVar4 + 0x20 );
   puVar16 = (undefined8*)( (long)pvVar4 + 0x128 );
   puVar18 = (undefined8*)( (long)pvVar4 + 0x228 );
   puVar11 = puVar14 + param_1 * 0x44;
   do {
      puVar17 = puVar14 + -0x24;
      for (lVar8 = 0x44; puVar9 = puVar13,lVar8 != 0; lVar8 = lVar8 + -1) {
         *puVar17 = 0;
         puVar17 = puVar17 + 1;
      }

      do {
         *puVar9 = 0;
         puVar10 = puVar9 + 8;
         puVar9[2] = 0;
         puVar9[4] = 0;
         puVar9[6] = 0;
         puVar9[1] = 0;
         puVar9[3] = 0;
         puVar9[5] = 0;
         puVar9[7] = 0;
         puVar17 = puVar16;
         puVar9 = puVar10;
      }
 while ( puVar10 != puVar14 );
      do {
         puVar9 = puVar17;
         for (int i = 0; i < 4; i++) {
            puVar9[( 2*i + -1 )] = 0;
         }

         *puVar9 = 0;
         for (int i = 0; i < 3; i++) {
            puVar9[( 2*i + 2 )] = 0;
         }

         puVar17 = puVar9 + 8;
      }
 while ( puVar9 + 8 != puVar18 );
      puVar14 = puVar14 + 0x44;
      puVar16 = puVar16 + 0x44;
      puVar18 = puVar9 + 0x4c;
      puVar13 = puVar13 + 0x44;
   }
 while ( puVar14 != puVar11 );
   *(void**)( this + 8 ) = (void*)( param_1 * 0x220 + (long)pvVar4 );
   return;
}


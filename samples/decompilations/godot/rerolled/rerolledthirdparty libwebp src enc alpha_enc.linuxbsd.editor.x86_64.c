/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool EncodeAlphaInternal(undefined8 param_1, int param_2, int param_3, int param_4, int param_5, uint param_6, int param_7, undefined8 param_8, undefined8 *param_9) {
   undefined8 *puVar1;
   byte bVar2;
   int iVar3;
   undefined8 uVar4;
   ulong uVar5;
   byte bVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   undefined8 local_218;
   undefined1 local_1f8[8];
   int local_1f0;
   long local_1e8;
   long local_1e0;
   int local_1d0;
   undefined4 local_1c8;
   float local_1c4;
   int local_1c0;
   undefined4 local_168;
   undefined4 local_148[2];
   int local_140;
   int local_13c;
   undefined8 local_100;
   undefined4 local_f8;
   undefined8 *local_c8;
   long local_40;
   uVar7 = ( ulong )(param_2 * param_3);
   local_218 = param_8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = param_1;
   if (*(code**)( &WebPFilters + (long)param_5 * 8 ) != (code*)0x0) {
      ( **(code**)( &WebPFilters + (long)param_5 * 8 ) )();
      uVar4 = local_218;
   }

   local_218 = uVar4;
   if (param_4 == 0) {
      LAB_00100072:param_4 = 0;
      uVar4 = local_218;
      uVar5 = uVar7;
      LAB_0010007e:bVar6 = ( byte )(param_5 << 2) | (byte)param_4;
      bVar2 = bVar6 | 0x10;
      if (param_6 == 0) {
         bVar2 = bVar6;
      }

      puVar1 = param_9 + 1;
      local_1c8 = CONCAT31(local_1c8._1_3_, bVar2);
      iVar3 = VP8BitWriterInit(puVar1, uVar5 + 1);
      if (( ( iVar3 == 0 ) || ( iVar3 = VP8BitWriterAppend(puVar1, &local_1c8, 1) ),iVar3 == 0 )) {
         if (param_4 != 0) {
            VP8LBitWriterWipeOut(local_1f8);
         }

         bVar8 = false;
      }
 else {
         if (param_4 != 0) {
            VP8LBitWriterWipeOut(local_1f8);
         }

         bVar8 = *(int*)( param_9 + 6 ) == 0;
      }

      *param_9 = param_9[4];
   }
 else {
      iVar3 = VP8LBitWriterInit(local_1f8, uVar7 >> 3);
      if (iVar3 != 0) {
         iVar3 = WebPPictureInitInternal(local_148, 0x20f);
         if (iVar3 != 0) {
            local_c8 = param_9 + 7;
            local_148[0] = 1;
            local_140 = param_2;
            local_13c = param_3;
            iVar3 = WebPPictureAlloc(local_148);
            if (iVar3 != 0) {
               ( *_WebPDispatchAlphaToGreen )(local_218, param_2, local_140, local_13c, local_100, local_f8);
               iVar3 = WebPConfigInitInternal(&local_1c8, 0, 0x20f);
               if (iVar3 != 0) {
                  local_1c8 = 1;
                  local_168 = 1;
                  local_1c0 = param_7;
                  if (( param_7 != 6 ) || ( local_1c4 = _LC0(param_6 & 1) != 0 )) {
                     local_1c4 = (float)param_7 * __LC2;
                  }

                  iVar3 = VP8LEncodeStream(&local_1c8, local_148, local_1f8);
                  WebPPictureFree(local_148);
                  if (( iVar3 == 0 ) || ( local_1d0 != 0 )) {
                     VP8LBitWriterWipeOut(local_1f8);
                  }
 else {
                     uVar4 = VP8LBitWriterFinish();
                     if (local_1d0 == 0) {
                        uVar5 = (long)( local_1f0 + 7 >> 3 ) + ( local_1e0 - local_1e8 );
                        if (uVar7 < uVar5) {
                           VP8LBitWriterWipeOut(local_1f8);
                           goto LAB_00100072;
                        }

                        goto LAB_0010007e;
                     }

                  }

               }

            }

         }

      }

      VP8LBitWriterWipeOut(local_1f8);
      bVar8 = false;
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( param_9 + ( 2*i + 1 ) ) = (undefined1[16])0;
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar8;
}
int ApplyFiltersAndEncode(long param_1, int param_2, int param_3, undefined8 param_4, undefined4 param_5, int param_6, undefined4 param_7, int param_8, undefined8 *param_9, undefined8 *param_10, long param_11) {
   byte bVar1;
   bool bVar2;
   bool bVar3;
   bool bVar4;
   bool bVar5;
   bool bVar6;
   undefined1 auVar7[14];
   undefined1 auVar8[12];
   unkbyte10 Var9;
   undefined1 auVar10[12];
   unkbyte9 Var11;
   undefined6 uVar12;
   undefined4 uVar13;
   undefined2 uVar14;
   int iVar15;
   uint uVar16;
   long lVar17;
   byte *pbVar18;
   char *pcVar19;
   char *pcVar20;
   byte *pbVar21;
   long lVar22;
   int iVar23;
   ulong uVar24;
   long in_FS_OFFSET;
   undefined4 uVar25;
   int iVar26;
   char cVar34;
   short sVar35;
   int iVar36;
   int iVar37;
   int iVar38;
   short sVar42;
   short sVar43;
   short sVar44;
   undefined1 auVar40[16];
   undefined1 auVar45[16];
   undefined1 auVar50[16];
   undefined1 *local_350;
   ulong local_348;
   undefined1 auStack_340[16];
   undefined8 uStack_330;
   undefined8 local_328;
   undefined8 uStack_280;
   undefined8 local_278;
   undefined8 uStack_270;
   undefined8 local_268;
   undefined8 uStack_260;
   ulong local_248;
   undefined1 auStack_240[16];
   undefined8 uStack_230;
   undefined8 local_228;
   undefined8 uStack_180;
   undefined8 local_178;
   undefined8 uStack_170;
   undefined8 local_168;
   undefined8 uStack_160;
   undefined1 local_148[16];
   undefined1 local_138[16];
   undefined1 local_128[16];
   undefined1 local_118[16];
   undefined1 local_108[16];
   undefined1 local_f8[16];
   undefined1 local_e8[16];
   undefined1 local_d8[16];
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   char local_48[8];
   long local_40;
   undefined6 uVar27;
   undefined8 uVar28;
   undefined1 auVar30[12];
   undefined1 auVar29[12];
   undefined1 auVar31[14];
   undefined1 auVar33[16];
   undefined1 auVar32[16];
   undefined1 auVar39[12];
   undefined1 auVar41[16];
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   undefined1 auVar48[16];
   undefined1 auVar49[16];
   undefined1 auVar51[16];
   undefined1 auVar52[16];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_6 == 6) {
      local_148 = (undefined1[16])0x0;
      local_138 = (undefined1[16])0x0;
      local_128 = (undefined1[16])0x0;
      local_118 = (undefined1[16])0x0;
      local_108 = (undefined1[16])0x0;
      local_f8 = (undefined1[16])0x0;
      local_e8 = (undefined1[16])0x0;
      local_d8 = (undefined1[16])0x0;
      local_c8 = (undefined1[16])0x0;
      local_b8 = (undefined1[16])0x0;
      local_a8 = (undefined1[16])0x0;
      local_98 = (undefined1[16])0x0;
      local_88 = (undefined1[16])0x0;
      local_78 = (undefined1[16])0x0;
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      if (0 < param_3) {
         lVar22 = (long)param_2;
         lVar17 = 0;
         pbVar21 = (byte*)( lVar22 + param_1 );
         iVar15 = 0;
         do {
            if (0 < param_2) {
               pbVar18 = (byte*)( param_1 + lVar17 );
               do {
                  bVar1 = *pbVar18;
                  pbVar18 = pbVar18 + 1;
                  local_148[bVar1] = 1;
               }
 while ( pbVar21 != pbVar18 );
            }

            iVar15 = iVar15 + 1;
            lVar17 = lVar17 + lVar22;
            pbVar21 = pbVar21 + lVar22;
         }
 while ( param_3 != iVar15 );
      }

      iVar15 = 0;
      iVar23 = 0;
      iVar36 = 0;
      iVar37 = 0;
      pcVar19 = local_148;
      do {
         pcVar20 = pcVar19 + 0x10;
         bVar2 = *pcVar19 != '\0';
         bVar3 = pcVar19[8] != '\0';
         bVar4 = pcVar19[9] != '\0';
         bVar5 = pcVar19[10] != '\0';
         bVar6 = pcVar19[0xb] != '\0';
         cVar34 = -(pcVar19[7] != '\0');
         uVar14 = CONCAT11(-(pcVar19[7] != '\0'), cVar34);
         uVar13 = CONCAT31(CONCAT21(uVar14, -(pcVar19[6] != '\0')), -(pcVar19[6] != '\0'));
         uVar12 = CONCAT51(CONCAT41(uVar13, -(pcVar19[5] != '\0')), -(pcVar19[5] != '\0'));
         Var11 = CONCAT72(CONCAT61(uVar12, -(pcVar19[4] != '\0')), CONCAT11(-(pcVar19[4] != '\0'), cVar34));
         lVar17 = (long)( (unkuint9)Var11 >> 8 );
         Var9 = CONCAT91(CONCAT81(lVar17, -(pcVar19[3] != '\0')), -(pcVar19[3] != '\0'));
         auVar8._2_10_ = Var9;
         auVar8[1] = -(pcVar19[2] != '\0');
         auVar8[0] = -(pcVar19[2] != '\0');
         auVar7._2_12_ = auVar8;
         auVar7[1] = -(pcVar19[1] != '\0');
         auVar7[0] = -(pcVar19[1] != '\0');
         auVar40._0_2_ = CONCAT11(-bVar2, -bVar2);
         auVar40._2_14_ = auVar7;
         uVar25 = CONCAT13(-bVar4, CONCAT12(-bVar4, CONCAT11(-bVar3, -bVar3)));
         uVar27 = CONCAT15(-bVar5, CONCAT14(-bVar5, uVar25));
         uVar28 = CONCAT17(-bVar6, CONCAT16(-bVar6, uVar27));
         auVar29._0_10_ = CONCAT19(-(pcVar19[0xc] != '\0'), CONCAT18(-(pcVar19[0xc] != '\0'), uVar28));
         auVar29[10] = -(pcVar19[0xd] != '\0');
         auVar29[0xb] = -(pcVar19[0xd] != '\0');
         auVar31[0xc] = -(pcVar19[0xe] != '\0');
         auVar31._0_12_ = auVar29;
         auVar31[0xd] = -(pcVar19[0xe] != '\0');
         auVar32[0xe] = -(pcVar19[0xf] != '\0');
         auVar32._0_14_ = auVar31;
         auVar32[0xf] = -(pcVar19[0xf] != '\0');
         sVar35 = (short)Var9;
         sVar42 = (short)( (unkuint9)Var11 >> 8 );
         sVar43 = (short)uVar12;
         sVar44 = (short)uVar13;
         auVar52._0_12_ = auVar40._0_12_;
         auVar52._12_2_ = sVar35;
         auVar52._14_2_ = -(ushort)(sVar35 < 0);
         auVar51._12_4_ = auVar52._12_4_;
         auVar51._0_10_ = auVar40._0_10_;
         auVar51._10_2_ = -(ushort)(auVar8._0_2_ < 0);
         auVar50._10_6_ = auVar51._10_6_;
         auVar50._0_8_ = auVar40._0_8_;
         auVar50._8_2_ = auVar8._0_2_;
         auVar10._4_8_ = auVar50._8_8_;
         auVar10._2_2_ = -(ushort)(auVar7._0_2_ < 0);
         auVar10._0_2_ = auVar7._0_2_;
         iVar38 = CONCAT22(-(ushort)(sVar42 < 0), sVar42);
         auVar39._0_8_ = CONCAT26(-(ushort)(sVar43 < 0), CONCAT24(sVar43, iVar38));
         auVar39._8_2_ = sVar44;
         auVar39._10_2_ = -(ushort)(sVar44 < 0);
         auVar41._12_2_ = uVar14;
         auVar41._0_12_ = auVar39;
         auVar41._14_2_ = -(ushort)(lVar17 < 0);
         sVar35 = (short)( (unkuint10)auVar29._0_10_ >> 0x40 );
         auVar49._12_2_ = (short)( (ulong)uVar28 >> 0x30 );
         auVar49._0_12_ = auVar29;
         auVar49._14_2_ = -(ushort)bVar6;
         auVar48._12_4_ = auVar49._12_4_;
         auVar48._10_2_ = -(ushort)bVar5;
         auVar48._0_10_ = auVar29._0_10_;
         auVar47._10_6_ = auVar48._10_6_;
         auVar47._8_2_ = (short)( (uint6)uVar27 >> 0x20 );
         auVar47._0_8_ = uVar28;
         auVar46._8_8_ = auVar47._8_8_;
         auVar46._6_2_ = -(ushort)bVar4;
         auVar46._0_6_ = uVar27;
         auVar45._6_10_ = auVar46._6_10_;
         auVar45._4_2_ = (short)( (uint)uVar25 >> 0x10 );
         auVar45._0_4_ = uVar25;
         iVar26 = CONCAT22(-(ushort)(sVar35 < 0), sVar35);
         auVar30._0_8_ = CONCAT26(-(ushort)(auVar29._10_2_ < 0), CONCAT24(auVar29._10_2_, iVar26));
         auVar30._8_2_ = auVar31._12_2_;
         auVar30._10_2_ = -(ushort)(auVar31._12_2_ < 0);
         auVar33._12_2_ = auVar32._14_2_;
         auVar33._0_12_ = auVar30;
         auVar33._14_2_ = -(ushort)(auVar32._14_2_ < 0);
         iVar15 = ( ( ( iVar15 - CONCAT22(-(ushort)bVar2, auVar40._0_2_) ) - iVar38 ) - CONCAT22(-(ushort)bVar3, CONCAT11(-bVar3, -bVar3)) ) - iVar26;
         iVar23 = ( ( ( iVar23 - auVar10._0_4_ ) - (int)( (ulong)auVar39._0_8_ >> 0x20 ) ) - auVar45._4_4_ ) - (int)( (ulong)auVar30._0_8_ >> 0x20 );
         iVar36 = ( ( ( iVar36 - auVar50._8_4_ ) - auVar39._8_4_ ) - auVar47._8_4_ ) - auVar30._8_4_;
         iVar37 = ( ( ( iVar37 - auVar51._12_4_ ) - auVar41._12_4_ ) - auVar48._12_4_ ) - auVar33._12_4_;
         pcVar19 = pcVar20;
      }
 while ( local_48 != pcVar20 );
      iVar15 = iVar15 + iVar36 + iVar23 + iVar37;
      if (iVar15 < 0x11) goto LAB_001003de;
      uVar16 = WebPEstimateBestFilter(param_1, param_2, param_3, param_2);
      local_348 = 0xffffffff;
      uVar16 = ( uint )(3 < param_8 || 0xc0 < iVar15) | 1 << ( uVar16 & 0x1f );
      VP8BitWriterInit(auStack_340, 0);
      if (uVar16 == 1) goto LAB_001003fc;
      lVar17 = WebPSafeMalloc(1, param_4);
      if (lVar17 == 0) goto LAB_001007ae;
      if (uVar16 != 0) goto LAB_001006ef;
      iVar15 = 1;
      WebPSafeFree(lVar17);
      LAB_0010043c:if (param_11 != 0) {
         *(undefined4*)( param_11 + 0x94 ) = uStack_280._4_4_;
         *(undefined8*)( param_11 + 0x98 ) = local_278;
         *(undefined8*)( param_11 + 0xa0 ) = uStack_270;
         *(undefined8*)( param_11 + 0xa8 ) = local_268;
         *(undefined4*)( param_11 + 0xb0 ) = (undefined4)uStack_260;
      }

      *param_10 = local_328;
      *param_9 = uStack_330;
   }
 else {
      if (param_6 == 0) {
         LAB_001003de:local_348 = 0xffffffff;
         VP8BitWriterInit(auStack_340, 0);
         LAB_001003fc:iVar15 = EncodeAlphaInternal(param_1, param_2, param_3, param_5, 0, param_7, param_8, 0, &local_348);
         joined_r0x0010079e:if (iVar15 != 0) goto LAB_0010043c;
         local_350 = auStack_340;
         VP8BitWriterWipeOut(local_350);
      }
 else {
         local_348 = 0xffffffff;
         VP8BitWriterInit(auStack_340, 0);
         lVar17 = WebPSafeMalloc(1, param_4);
         if (lVar17 != 0) {
            uVar16 = 0xf;
            LAB_001006ef:local_350 = auStack_340;
            iVar23 = 0;
            iVar15 = 1;
            uVar24 = (ulong)uVar16;
            do {
               if (( uVar24 & 1 ) != 0) {
                  iVar15 = EncodeAlphaInternal(param_1, param_2, param_3, param_5, iVar23, param_7, param_8, lVar17, &local_248);
                  if (( iVar15 == 0 ) || ( local_348 <= local_248 )) {
                     VP8BitWriterWipeOut(auStack_240);
                  }
 else {
                     VP8BitWriterWipeOut(local_350);
                     local_348 = local_248;
                     uStack_330 = uStack_230;
                     local_328 = local_228;
                     uStack_280 = uStack_180;
                     local_278 = local_178;
                     uStack_270 = uStack_170;
                     local_268 = local_168;
                     uStack_260 = uStack_160;
                  }

               }

               if (iVar15 == 0) break;
               iVar23 = iVar23 + 1;
               uVar24 = uVar24 >> 1;
            }
 while ( (int)uVar24 != 0 );
            uStack_280._4_4_ = (int)( (ulong)uStack_280 >> 0x20 );
            WebPSafeFree(lVar17);
            goto joined_r0x0010079e;
         }

      }

      LAB_001007ae:iVar15 = 0;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar15;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 CompressAlphaJob(long *param_1) {
   undefined4 uVar1;
   uint uVar2;
   uint uVar3;
   int iVar4;
   int iVar5;
   long lVar6;
   int iVar7;
   long lVar8;
   undefined8 uVar9;
   int *piVar10;
   int iVar11;
   long in_FS_OFFSET;
   long local_58;
   ulong local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar8 = *param_1;
   local_58 = 0;
   local_50 = 0;
   uVar1 = *(undefined4*)( lVar8 + 8 );
   iVar11 = *(int*)( lVar8 + 0x34 );
   if (iVar11 != 0) {
      iVar11 = ( iVar11 == 1 ) + 5;
   }

   lVar6 = param_1[1];
   uVar2 = *(uint*)( lVar8 + 0x30 );
   local_48 = 0;
   uVar3 = *(uint*)( lVar8 + 0x38 );
   iVar4 = *(int*)( lVar6 + 0xc );
   iVar5 = *(int*)( lVar6 + 8 );
   if (( uVar3 < 0x65 ) && ( uVar2 < 2 )) {
      if (uVar2 == 0) {
         iVar11 = 0;
      }

      lVar8 = WebPSafeMalloc(1, (long)( iVar4 * iVar5 ));
      if (lVar8 == 0) {
         iVar11 = WebPEncodingSetError(lVar6, 1);
         goto LAB_00100a10;
      }

      WebPCopyPlane(*(undefined8*)( lVar6 + 0x30 ), *(undefined4*)( lVar6 + 0x38 ), lVar8, iVar5, iVar5, iVar4);
      if (uVar3 == 100) {
         LAB_00100a68:VP8FiltersInit();
         iVar11 = ApplyFiltersAndEncode(lVar8, iVar5, iVar4, (long)( iVar4 * iVar5 ), uVar2, iVar11, (int)uVar3 < 100, uVar1, &local_58, &local_50, *(undefined8*)( lVar6 + 0x80 ));
         if (iVar11 == 0) {
            WebPEncodingSetError(lVar6, 1);
            piVar10 = *(int**)( lVar6 + 0x80 );
            if (piVar10 != (int*)0x0) goto LAB_00100ac9;
            goto LAB_001009f1;
         }

         piVar10 = *(int**)( lVar6 + 0x80 );
         if (piVar10 != (int*)0x0) {
            LAB_00100ac9:*piVar10 = *piVar10 + (int)local_50;
            param_1[0xb7e] = local_48;
            WebPSafeFree(lVar8);
            goto LAB_00100a10;
         }

         WebPSafeFree(lVar8);
         goto LAB_00100a15;
      }

      if ((int)uVar3 < 0x47) {
         iVar7 = (int)uVar3 / 5 + 2;
      }
 else {
         iVar7 = uVar3 * 8 + -0x220;
      }

      iVar7 = QuantizeLevels(lVar8, iVar5, iVar4, iVar7, &local_48);
      if (iVar7 != 0) goto LAB_00100a68;
      LAB_001009f1:WebPSafeFree(lVar8);
   }
 else {
      iVar11 = WebPEncodingSetError(lVar6, 4);
      LAB_00100a10:if (iVar11 != 0) {
         LAB_00100a15:if (local_50 >> 0x20 == 0) {
            param_1[0x44] = local_58;
            *(int*)( param_1 + 0x45 ) = (int)local_50;
            uVar9 = 1;
         }
 else {
            WebPSafeFree();
            uVar9 = 0;
         }

         goto LAB_00100a3e;
      }

   }

   uVar9 = 0;
   LAB_00100a3e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
}
void VP8EncInitAlpha(long param_1) {
   undefined4 uVar1;
   undefined8 *puVar2;
   WebPInitAlphaProcessing();
   uVar1 = WebPPictureHasTransparency(*(undefined8*)( param_1 + 8 ));
   *(undefined8*)( param_1 + 0x220 ) = 0;
   *(undefined4*)( param_1 + 0x21c ) = uVar1;
   *(undefined4*)( param_1 + 0x228 ) = 0;
   if (*(int*)( param_1 + 0x5c50 ) < 1) {
      return;
   }

   puVar2 = (undefined8*)WebPGetWorkerInterface();
   ( *(code*)*puVar2 )(param_1 + 0x230);
   *(long*)( param_1 + 0x248 ) = param_1;
   *(undefined8*)( param_1 + 0x250 ) = 0;
   *(code**)( param_1 + 0x240 ) = CompressAlphaJob;
   return;
}
undefined8 VP8EncStartAlpha(long param_1) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   if (*(int*)( param_1 + 0x21c ) == 0) {
      return 1;
   }

   if (0 < *(int*)( param_1 + 0x5c50 )) {
      lVar2 = WebPGetWorkerInterface();
      iVar1 = ( **(code**)( lVar2 + 8 ) )(param_1 + 0x230);
      if (iVar1 == 0) {
         uVar3 = WebPEncodingSetError(*(undefined8*)( param_1 + 8 ), 1);
         return uVar3;
      }

      lVar2 = WebPGetWorkerInterface();
      ( **(code**)( lVar2 + 0x18 ) )(param_1 + 0x230);
      return 1;
   }

   uVar3 = CompressAlphaJob(param_1, 0);
   return uVar3;
}
void VP8EncFinishAlpha(long param_1) {
   int iVar1;
   long lVar2;
   if (( *(int*)( param_1 + 0x21c ) != 0 ) && ( 0 < *(int*)( param_1 + 0x5c50 ) )) {
      lVar2 = WebPGetWorkerInterface();
      iVar1 = ( **(code**)( lVar2 + 0x10 ) )(param_1 + 0x230);
      if (iVar1 == 0) {
         return;
      }

   }

   WebPReportProgress(*(undefined8*)( param_1 + 8 ), *(int*)( param_1 + 0x218 ) + 0x14, param_1 + 0x218);
   return;
}
undefined4 VP8EncDeleteAlpha(long param_1) {
   undefined4 uVar1;
   long lVar2;
   uVar1 = 1;
   if (0 < *(int*)( param_1 + 0x5c50 )) {
      lVar2 = WebPGetWorkerInterface();
      uVar1 = ( **(code**)( lVar2 + 0x10 ) )(param_1 + 0x230);
      lVar2 = WebPGetWorkerInterface();
      ( **(code**)( lVar2 + 0x28 ) )(param_1 + 0x230);
   }

   WebPSafeFree(*(undefined8*)( param_1 + 0x220 ));
   *(undefined8*)( param_1 + 0x21c ) = 0;
   *(undefined8*)( param_1 + 0x224 ) = 0;
   return uVar1;
}


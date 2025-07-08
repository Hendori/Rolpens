undefined8 ComparePixelsLossless(int *param_1, int param_2, int *param_3, int param_4, int param_5) {
   int iVar1;
   bool bVar2;
   iVar1 = param_5 + -1;
   if (0 < param_5) {
      do {
         if (*param_1 != *param_3) {
            return 0;
         }

         param_1 = param_1 + param_2;
         param_3 = param_3 + param_4;
         bVar2 = iVar1 != 0;
         iVar1 = iVar1 + -1;
      }
 while ( bVar2 );
   }

   return 1;
}
undefined4 EncodeCandidate(undefined4 *param_1, undefined8 *param_2, undefined8 *param_3, uint param_4, undefined8 *param_5) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   ulong uVar4;
   undefined4 uVar5;
   undefined8 *puVar6;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   ulong local_78;
   ulong uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined4 local_28;
   long local_20;
   local_98 = *param_3;
   uStack_90 = param_3[1];
   local_88 = param_3[2];
   uStack_80 = param_3[3];
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = *(undefined4*)( param_3 + 0xe );
   local_78 = param_3[4];
   uStack_70 = param_3[5];
   local_68 = param_3[6];
   uStack_60 = param_3[7];
   local_58 = param_3[8];
   uStack_50 = param_3[9];
   local_48 = param_3[10];
   uStack_40 = param_3[0xb];
   local_38 = param_3[0xc];
   uStack_30 = param_3[0xd];
   *param_5 = 0;
   param_5[0xc] = 0;
   puVar6 = (undefined8*)( ( ulong )(param_5 + 1) & 0xfffffffffffffff8 );
   for (uVar4 = ( ulong )(( (int)param_5 - (int)(undefined8*)( ( ulong )(param_5 + 1) & 0xfffffffffffffff8 ) ) + 0x68U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
   }

   uVar1 = *param_2;
   uVar2 = param_2[1];
   *(undefined4*)( (long)param_5 + 0x3c ) = 3;
   param_5[10] = uVar1;
   param_5[0xb] = uVar2;
   param_5[6] = *param_2;
   *(uint*)( (long)param_5 + 0x44 ) = param_4 ^ 1;
   WebPMemoryWriterInit(param_5);
   if (( (int)local_98 == 0 ) && ( ( param_4 & 1 ) != 0 )) {
      uStack_70 = uStack_70 & 0xffffffff;
      local_78 = local_78 & 0xffffffff00000000;
   }

   *param_1 = 1;
   *(undefined8**)( param_1 + 0x1a ) = param_5;
   *(undefined**)( param_1 + 0x18 ) = &WebPMemoryWrite;
   iVar3 = WebPEncode(&local_98, param_1);
   if (iVar3 == 0) {
      uVar5 = param_1[0x22];
      WebPMemoryWriterClear(param_5);
   }
 else {
      *(undefined4*)( param_5 + 0xc ) = 1;
      uVar5 = 0;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ComparePixelsLossy(uint *param_1, int param_2, uint *param_3, int param_4, int param_5, int param_6) {
   uint uVar1;
   uint uVar2;
   int iVar3;
   int iVar4;
   uint uVar5;
   bool bVar6;
   if (param_5 < 1) {
      return 1;
   }

   param_5 = param_5 + -1;
   iVar3 = param_6 * 0xff;
   while (true) {
      uVar1 = *param_3;
      uVar2 = *param_1;
      uVar5 = uVar2 >> 0x18;
      if (uVar5 != uVar1 >> 0x18) {
         return 0;
      }

      iVar4 = ( uVar2 >> 0x10 & 0xff ) - ( uVar1 >> 0x10 & 0xff );
      if (iVar4 < 1) {
         iVar4 = -iVar4;
      }

      iVar4 = iVar4 * uVar5;
      if (iVar4 != iVar3 && SBORROW4(iVar4, iVar3) == iVar4 + param_6 * -0xff < 0) {
         return 0;
      }

      iVar4 = ( uVar2 >> 8 & 0xff ) - ( uVar1 >> 8 & 0xff );
      if (iVar4 < 1) {
         iVar4 = -iVar4;
      }

      if (iVar3 < (int)( iVar4 * uVar5 )) {
         return 0;
      }

      iVar4 = ( uVar2 & 0xff ) - ( uVar1 & 0xff );
      if (iVar4 < 1) {
         iVar4 = -iVar4;
      }

      if (iVar3 < (int)( iVar4 * uVar5 )) break;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      bVar6 = param_5 == 0;
      param_5 = param_5 + -1;
      if (bVar6) {
         return 1;
      }

   }
;
   return 0;
}
void FrameRelease_part_0(undefined1 (*param_1)[16]) {
   undefined8 uVar1;
   ulong uVar2;
   undefined8 *puVar3;
   byte bVar4;
   bVar4 = 0;
   WebPFree(*(undefined8*)*param_1);
   uVar1 = *(undefined8*)param_1[3];
   *param_1 = (undefined1[16])0x0;
   WebPFree(uVar1);
   *(undefined8*)*param_1 = 0;
   puVar3 = (undefined8*)( ( ulong )(*param_1 + 8) & 0xfffffffffffffff8 );
   *(undefined8*)param_1[6] = 0;
   uVar2 = ( ulong )(( (int)param_1 - (int)puVar3 ) + 0x68U >> 3);
   for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
   }

   return;
}
void WebPAnimEncoderDelete_part_0(long param_1) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   WebPPictureFree(param_1 + 0x138);
   WebPPictureFree(param_1 + 0x240);
   WebPPictureFree(param_1 + 0x340);
   lVar2 = *(long*)( param_1 + 0x440 );
   if (lVar2 != 0) {
      if (*(long*)( param_1 + 0x448 ) != 0) {
         lVar1 = 0;
         uVar3 = 0;
         do {
            if (lVar2 + lVar1 != 0) {
               FrameRelease_part_0(lVar2 + lVar1);
               lVar2 = *(long*)( param_1 + 0x440 );
            }

            uVar3 = uVar3 + 1;
            lVar1 = lVar1 + 0x68;
         }
 while ( uVar3 < *(ulong*)( param_1 + 0x448 ) );
      }

      WebPSafeFree();
   }

   WebPMuxDelete(*(undefined8*)( param_1 + 0x4a0 ));
   WebPSafeFree(param_1);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void MinimizeChangeRectangle(float param_1, long param_2, long param_3, undefined1 (*param_4)[16], int param_5) {
   int iVar1;
   int iVar2;
   int iVar3;
   code *pcVar4;
   int iVar5;
   double dVar6;
   if (param_5 == 0) {
      pcVar4 = ComparePixelsLossy;
      dVar6 = pow((double)param_1 / __LC0, _LC1);
      iVar3 = (int)( ( _LC2 - dVar6 ) * __LC3 + dVar6 + _LC1 );
   }
 else {
      pcVar4 = ComparePixelsLossless;
      iVar3 = 0;
      pow((double)param_1 / __LC0, _LC1);
   }

   iVar5 = *(int*)( *param_4 + 8 );
   iVar1 = *(int*)*param_4;
   if (0 < iVar5) {
      do {
         iVar5 = ( *pcVar4 )(*(long*)( param_2 + 0x48 ) + (long)( *(int*)( *param_4 + 4 ) * *(int*)( param_2 + 0x50 ) + iVar1 ) * 4, *(int*)( param_2 + 0x50 ), *(long*)( param_3 + 0x48 ) + (long)( *(int*)( *param_4 + 4 ) * *(int*)( param_3 + 0x50 ) + iVar1 ) * 4, *(int*)( param_3 + 0x50 ), *(undefined4*)( *param_4 + 0xc ), iVar3);
         if (iVar5 == 0) {
            iVar5 = *(int*)( *param_4 + 8 );
            break;
         }

         iVar1 = iVar1 + 1;
         iVar5 = *(int*)( *param_4 + 8 ) + -1;
         iVar2 = *(int*)*param_4;
         *(int*)( *param_4 + 8 ) = iVar5;
         iVar2 = iVar2 + 1;
         *(int*)*param_4 = iVar2;
      }
 while ( iVar1 < iVar2 + iVar5 );
   }

   if (iVar5 != 0) {
      iVar5 = iVar5 + -1 + *(int*)*param_4;
      if (*(int*)*param_4 <= iVar5) {
         do {
            iVar2 = ( *pcVar4 )(*(long*)( param_2 + 0x48 ) + (long)( *(int*)( *param_4 + 4 ) * *(int*)( param_2 + 0x50 ) + iVar5 ) * 4, *(int*)( param_2 + 0x50 ), *(long*)( param_3 + 0x48 ) + (long)( *(int*)( *param_4 + 4 ) * *(int*)( param_3 + 0x50 ) + iVar5 ) * 4, *(int*)( param_3 + 0x50 ), *(undefined4*)( *param_4 + 0xc ), iVar3);
            iVar1 = *(int*)( *param_4 + 8 );
            if (iVar2 == 0) break;
            iVar1 = iVar1 + -1;
            iVar5 = iVar5 + -1;
            *(int*)( *param_4 + 8 ) = iVar1;
         }
 while ( *(int*)*param_4 <= iVar5 );
         if (iVar1 == 0) goto LAB_00100568;
      }

      iVar5 = *(int*)( *param_4 + 0xc );
      iVar1 = *(int*)( *param_4 + 4 );
      if (0 < iVar5) {
         do {
            iVar5 = ( *pcVar4 )(*(long*)( param_2 + 0x48 ) + (long)( *(int*)( param_2 + 0x50 ) * iVar1 + *(int*)*param_4 ) * 4, 1, *(long*)( param_3 + 0x48 ) + (long)( *(int*)( param_3 + 0x50 ) * iVar1 + *(int*)*param_4 ) * 4, 1, *(undefined4*)( *param_4 + 8 ), iVar3);
            if (iVar5 == 0) {
               iVar5 = *(int*)( *param_4 + 0xc );
               break;
            }

            iVar1 = iVar1 + 1;
            iVar5 = *(int*)( *param_4 + 0xc ) + -1;
            *(int*)( *param_4 + 0xc ) = iVar5;
            iVar2 = *(int*)( *param_4 + 4 ) + 1;
            *(int*)( *param_4 + 4 ) = iVar2;
         }
 while ( iVar1 < iVar2 + iVar5 );
      }

      if (iVar5 != 0) {
         iVar5 = iVar5 + -1 + *(int*)( *param_4 + 4 );
         if (*(int*)( *param_4 + 4 ) <= iVar5) {
            do {
               iVar2 = ( *pcVar4 )(*(long*)( param_2 + 0x48 ) + (long)( *(int*)( param_2 + 0x50 ) * iVar5 + *(int*)*param_4 ) * 4, 1, *(long*)( param_3 + 0x48 ) + (long)( *(int*)( param_3 + 0x50 ) * iVar5 + *(int*)*param_4 ) * 4, 1, *(undefined4*)( *param_4 + 8 ), iVar3);
               iVar1 = *(int*)( *param_4 + 0xc );
               if (iVar2 == 0) break;
               iVar1 = iVar1 + -1;
               iVar5 = iVar5 + -1;
               *(int*)( *param_4 + 0xc ) = iVar1;
            }
 while ( *(int*)( *param_4 + 4 ) <= iVar5 );
            if (iVar1 == 0) goto LAB_00100568;
         }

         if (*(int*)( *param_4 + 8 ) != 0) {
            return;
         }

      }

   }

   LAB_00100568:*param_4 = (undefined1[16])0x0;
   return;
}
undefined8 GetSubRect(undefined8 param_1, undefined8 param_2, uint param_3, int param_4, int param_5, undefined4 param_6, ulong *param_7) {
   ulong uVar1;
   uint uVar2;
   undefined8 uVar3;
   uint uVar4;
   if (( ( param_3 & 1 ) == 0 ) || ( param_4 != 0 )) {
      MinimizeChangeRectangle(param_1, param_2, param_7, param_6);
   }

   uVar2 = (uint)param_7[1];
   if (( uVar2 == 0 ) || ( uVar4 = uVar4 == 0 )) {
      if (param_5 != 0) {
         return 1;
      }

      uVar4 = 1;
      uVar2 = 1;
   }

   uVar1 = *param_7;
   *param_7 = *param_7 & 0xfffffffefffffffe;
   param_7[1] = CONCAT44(( *(uint*)( (long)param_7 + 4 ) & 1 ) + uVar4, ( (uint)uVar1 & 1 ) + uVar2);
   uVar3 = WebPPictureView(param_2);
   return uVar3;
}
void GetSubRects(undefined4 param_1, undefined8 param_2, long param_3, undefined4 param_4, undefined4 param_5, long param_6) {
   int iVar1;
   *(undefined8*)( param_6 + 8 ) = 0;
   *(undefined8*)( param_6 + 0x10 ) = *(undefined8*)( param_3 + 8 );
   iVar1 = GetSubRect();
   if (iVar1 != 0) {
      *(undefined8*)( param_6 + 0x118 ) = *(undefined8*)( param_6 + 8 );
      *(undefined8*)( param_6 + 0x120 ) = *(undefined8*)( param_6 + 0x10 );
      GetSubRect(param_1, param_2, param_3, param_4, param_5, *(undefined4*)( param_6 + 4 ), 0, param_6 + 0x118, param_6 + 0x128);
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 FlushFrames(long param_1) {
   undefined8 *puVar1;
   undefined4 uVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   long lVar16;
   undefined8 uVar17;
   long lVar18;
   long lVar19;
   lVar16 = *(long*)( param_1 + 0x460 );
   while (true) {
      if (lVar16 == 0) {
         if (( *(long*)( param_1 + 0x458 ) == 1 ) && ( *(long*)( param_1 + 0x450 ) != 0 )) {
            puVar5 = *(undefined8**)( param_1 + 0x440 );
            uVar17 = *puVar5;
            uVar6 = puVar5[1];
            puVar1 = puVar5 + (long)(int)*(long*)( param_1 + 0x450 ) * 0xd;
            uVar11 = *(undefined8*)( (long)puVar5 + 0x1c );
            uVar12 = *(undefined8*)( (long)puVar5 + 0x24 );
            uVar7 = puVar5[2];
            uVar10 = puVar1[1];
            uVar2 = *(undefined4*)( puVar5 + 3 );
            uVar8 = puVar5[6];
            uVar9 = puVar5[7];
            *puVar5 = *puVar1;
            puVar5[1] = uVar10;
            uVar13 = puVar1[3];
            uVar14 = *(undefined8*)( (long)puVar5 + 0x4c );
            uVar15 = *(undefined8*)( (long)puVar5 + 0x54 );
            uVar10 = puVar5[8];
            uVar3 = *(undefined4*)( puVar5 + 9 );
            puVar5[2] = puVar1[2];
            puVar5[3] = uVar13;
            uVar13 = puVar1[5];
            uVar4 = *(undefined4*)( puVar5 + 0xc );
            puVar5[4] = puVar1[4];
            puVar5[5] = uVar13;
            for (int i = 0; i < 3; i++) {
               uVar13 = puVar1[( 2*i + 7 )];
               puVar5[( 2*i + 6 )] = puVar1[( 2*i + 6 )];
               puVar5[( 2*i + 7 )] = uVar13;
            }

            puVar5[0xc] = puVar1[0xc];
            *puVar1 = uVar17;
            puVar1[1] = uVar6;
            puVar1[2] = uVar7;
            *(undefined4*)( puVar1 + 3 ) = uVar2;
            puVar1[6] = uVar8;
            *(undefined8*)( (long)puVar1 + 0x1c ) = uVar11;
            *(undefined8*)( (long)puVar1 + 0x24 ) = uVar12;
            puVar1[7] = uVar9;
            puVar1[8] = uVar10;
            *(undefined4*)( puVar1 + 9 ) = uVar3;
            *(undefined4*)( puVar1 + 0xc ) = uVar4;
            *(undefined8*)( (long)puVar1 + 0x4c ) = uVar14;
            *(undefined8*)( (long)puVar1 + 0x54 ) = uVar15;
            FrameRelease_part_0();
            *(undefined8*)( param_1 + 0x450 ) = 0;
         }

         return 1;
      }

      lVar18 = *(long*)( param_1 + 0x440 ) + *(long*)( param_1 + 0x450 ) * 0x68;
      lVar16 = lVar18;
      if (*(int*)( lVar18 + 0x60 ) != 0) {
         lVar16 = lVar18 + 0x30;
      }

      uVar17 = WebPMuxPushFrame(*(undefined8*)( param_1 + 0x4a0 ), lVar16, 1);
      if ((int)uVar17 != 1) break;
      if (*(int*)( param_1 + 0x20 ) != 0) {
         __fprintf_chk(_stderr, 2, "INFO: Added frame. offset:%d,%d dispose:%d blend:%d\n", *(undefined4*)( lVar16 + 0x10 ), *(undefined4*)( lVar16 + 0x14 ), *(undefined4*)( lVar16 + 0x20 ), *(undefined4*)( lVar16 + 0x24 ));
      }

      *(long*)( param_1 + 0x498 ) = *(long*)( param_1 + 0x498 ) + 1;
      FrameRelease_part_0(lVar18);
      lVar18 = *(long*)( param_1 + 0x450 ) + __LC8;
      lVar19 = *(long*)( param_1 + 0x458 ) + _UNK_001031c8;
      lVar16 = *(long*)( param_1 + 0x460 ) + -1;
      *(long*)( param_1 + 0x460 ) = lVar16;
      *(long*)( param_1 + 0x450 ) = lVar18;
      *(long*)( param_1 + 0x458 ) = lVar19;
      if (*(int*)( param_1 + 0x470 ) != -1) {
         *(int*)( param_1 + 0x470 ) = *(int*)( param_1 + 0x470 ) + -1;
      }

   }
;
   __snprintf_chk(param_1 + 0x4a8, 100, 2, 0xffffffffffffffff, "%s: %d.", "ERROR adding frame. WebPMuxError", uVar17);
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 IncreasePreviousDuration_constprop_0(long param_1, int param_2) {
   long lVar1;
   undefined1(*pauVar2)[16];
   undefined8 *__n;
   undefined8 *__src;
   long lVar3;
   undefined8 **ppuVar4;
   void *__dest;
   undefined8 uVar5;
   int iVar6;
   long in_FS_OFFSET;
   undefined8 *local_a8;
   undefined8 local_a0;
   undefined8 *local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined4 uStack_80;
   undefined4 uStack_7c;
   undefined4 uStack_78;
   undefined8 uStack_74;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( param_1 + 0x450 ) + *(long*)( param_1 + 0x458 );
   lVar1 = *(long*)( param_1 + 0x440 ) + ( lVar3 + -1 ) * 0x68;
   iVar6 = *(int*)( lVar1 + 0x18 ) + param_2;
   if (iVar6 < 0x1000000) {
      *(int*)( lVar1 + 0x18 ) = iVar6;
      *(int*)( lVar1 + 0x48 ) = iVar6;
   }
 else {
      local_a0 = 0x1c;
      local_a8 = &local_88;
      local_88 = __LC12;
      uStack_80 = (undefined4)_UNK_001031e8;
      local_28 = 0x50fdfbfe007003;
      uStack_7c = (undefined4)__LC13;
      uStack_78 = ( undefined4 )((ulong)__LC13 >> 0x20);
      uStack_74 = _UNK_001031f8;
      local_98 = &local_68;
      local_68 = __LC14;
      uStack_60 = _UNK_00103208;
      local_90 = 0x48;
      pauVar2 = (undefined1(*) [16])( *(long*)( param_1 + 0x440 ) + lVar3 * 0x68 );
      ppuVar4 = &local_a8;
      local_58 = __LC15;
      uStack_50 = _UNK_00103218;
      local_48 = __LC16;
      uStack_40 = _UNK_00103228;
      local_38 = __LC17;
      uStack_30 = _UNK_00103238;
      if (( *(int*)( param_1 + 0x44 ) == 0 ) && ( *(int*)( param_1 + 0x1c ) == 0 )) {
         ppuVar4 = &local_98;
      }

      __n = ppuVar4[1];
      *(undefined4*)pauVar2[6] = 0;
      *(undefined8*)pauVar2[1] = 0;
      __src = *ppuVar4;
      *(undefined8*)( pauVar2[1] + 0xc ) = 3;
      *(undefined4*)( pauVar2[2] + 4 ) = 0;
      *(int*)( pauVar2[1] + 8 ) = param_2;
      *pauVar2 = (undefined1[16])0x0;
      __dest = (void*)WebPMalloc(__n);
      *(void**)*pauVar2 = __dest;
      uVar5 = 0;
      if (__dest == (void*)0x0) goto LAB_00100b22;
      memcpy(__dest, __src, (size_t)__n);
      lVar1 = *(long*)( param_1 + 0x458 );
      *(undefined8**)( *pauVar2 + 8 ) = __n;
      *(int*)( param_1 + 0x474 ) = *(int*)( param_1 + 0x474 ) + 1;
      *(undefined4*)( param_1 + 0x480 ) = 0;
      uVar5 = *(undefined8*)( param_1 + 0x458 );
      *(long*)( param_1 + 0x458 ) = lVar1 + 1;
      *(undefined8*)( param_1 + 0x460 ) = uVar5;
      uVar5 = _UNK_001031d8;
      *(undefined8*)( param_1 + 0x34 ) = __LC9;
      *(undefined8*)( param_1 + 0x3c ) = uVar5;
   }

   uVar5 = 1;
   LAB_00100b22:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void GenerateCandidates_constprop_0(long param_1, long param_2, int param_3, int param_4, int param_5, long param_6, undefined8 param_7, long param_8) {
   long lVar1;
   uint uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   bool bVar6;
   int iVar7;
   int iVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   uint uVar15;
   int iVar16;
   uint uVar17;
   uint *puVar18;
   long lVar19;
   uint uVar20;
   int iVar21;
   ulong uVar22;
   int iVar23;
   int iVar24;
   uint uVar25;
   int iVar26;
   int iVar27;
   int iVar28;
   int iVar29;
   int iVar30;
   double dVar31;
   uint *local_a0;
   int local_64;
   int local_58;
   if (param_3 == 0) {
      lVar1 = param_1 + 0x240;
      lVar13 = param_2 + 0xd0;
      iVar8 = *(int*)( param_1 + 0x238 );
   }
 else {
      lVar13 = param_2 + 0x138;
      lVar1 = param_1 + 0x340;
      param_2 = param_2 + 0x68;
      iVar8 = *(int*)( param_1 + 0x238 );
   }

   if (iVar8 != 0) {
      WebPCopyPixels(*(undefined8*)( param_1 + 0x130 ), param_1 + 0x138);
      uVar3 = *(undefined8*)( *(long*)( param_1 + 0x130 ) + 0x90 );
      uVar4 = *(undefined8*)( *(long*)( param_1 + 0x130 ) + 0x98 );
      *(undefined4*)( param_1 + 0x238 ) = 0;
      *(undefined8*)( param_1 + 0x1c8 ) = uVar3;
      *(undefined8*)( param_1 + 0x1d0 ) = uVar4;
   }

   if (param_5 == 0) {
      iVar8 = *(int*)( param_6 + 0xc );
      iVar26 = *(int*)( param_6 + 0x14 ) + iVar8;
      if (iVar8 < iVar26) {
         LAB_00100be1:if (*(int*)( param_6 + 0x10 ) < 1) goto LAB_0010145a;
         do {
            lVar12 = (long)*(int*)( param_6 + 8 );
            do {
               uVar9 = *(uint*)( *(long*)( param_1 + 0x180 ) + (long)( *(int*)( param_1 + 0x188 ) * iVar8 ) * 4 + lVar12 * 4 );
               if (( uVar9 >> 0x18 != 0xff ) && ( *(uint*)( *(long*)( lVar1 + 0x48 ) + (long)( *(int*)( lVar1 + 0x50 ) * iVar8 ) * 4 + lVar12 * 4 ) != uVar9 )) {
                  iVar8 = 0;
                  goto LAB_00100c47;
               }

               lVar12 = lVar12 + 1;
            }
 while ( (int)lVar12 < *(int*)( param_6 + 8 ) + *(int*)( param_6 + 0x10 ) );
            iVar8 = iVar8 + 1;
         }
 while ( iVar26 != iVar8 );
      }

      LAB_00101073:iVar8 = 1;
      LAB_00100c47:dVar31 = pow((double)*(float*)( param_8 + 4 ) / __LC0, _LC1);
      iVar26 = *(int*)( param_6 + 0x11c );
      iVar23 = *(int*)( param_6 + 0x124 ) + iVar26;
      if (iVar26 < iVar23) {
         iVar28 = *(int*)( param_6 + 0x118 );
         iVar29 = (int)( ( _LC2 - dVar31 ) * __LC3 + dVar31 + _LC1 ) * 0xff;
         iVar21 = *(int*)( param_6 + 0x120 ) + iVar28;
         uVar22 = (long)iVar28;
         do {
            if ((int)uVar22 < iVar21) {
               iVar27 = *(int*)( lVar1 + 0x50 ) * iVar26;
               puVar18 = (uint*)( *(long*)( param_1 + 0x180 ) + ( (long)( *(int*)( param_1 + 0x188 ) * iVar26 ) + (long)iVar28 ) * 4 );
               iVar7 = (int)uVar22 + iVar27;
               do {
                  uVar9 = *puVar18;
                  uVar10 = uVar9 >> 0x18;
                  if (uVar10 != 0xff) {
                     uVar15 = *(uint*)( *(long*)( lVar1 + 0x48 ) + (long)iVar7 * 4 );
                     if (uVar10 == uVar15 >> 0x18) {
                        iVar24 = ( uVar15 >> 0x10 & 0xff ) - ( uVar9 >> 0x10 & 0xff );
                        iVar16 = -iVar24;
                        if (0 < iVar24) {
                           iVar16 = iVar24;
                        }

                        if ((int)( iVar16 * uVar10 ) <= iVar29) {
                           iVar24 = ( uVar15 >> 8 & 0xff ) - ( uVar9 >> 8 & 0xff );
                           iVar16 = -iVar24;
                           if (0 < iVar24) {
                              iVar16 = iVar24;
                           }

                           if ((int)( iVar16 * uVar10 ) <= iVar29) {
                              iVar24 = ( uVar15 & 0xff ) - ( uVar9 & 0xff );
                              iVar16 = -iVar24;
                              if (0 < iVar24) {
                                 iVar16 = iVar24;
                              }

                              if ((int)( iVar16 * uVar10 ) <= iVar29) goto LAB_00101027;
                           }

                        }

                     }

                     iVar26 = *(int*)( param_1 + 0x1c );
                     local_64 = 0;
                     goto joined_r0x00100e93;
                  }

                  LAB_00101027:iVar7 = iVar7 + 1;
                  puVar18 = puVar18 + 1;
               }
 while ( iVar27 + iVar21 != iVar7 );
               uVar22 = uVar22 & 0xffffffff;
            }

            iVar26 = iVar26 + 1;
         }
 while ( iVar23 != iVar26 );
      }

      local_64 = 1;
   }
 else {
      local_64 = 0;
      iVar8 = 0;
   }

   iVar26 = *(int*)( param_1 + 0x1c );
   joined_r0x00100e93:if (iVar26 == 0) {
      if (param_4 == 0) goto LAB_00100db0;
      bVar6 = false;
      if (*(int*)( param_1 + 0x238 ) != 0) {
         bVar6 = false;
         goto LAB_00100f60;
      }

   }
 else {
      bVar6 = true;
      if (*(int*)( param_1 + 0x10 ) == 0) {
         iVar26 = WebPGetColorPalette(param_6 + 0x18, 0);
         if (0xc1 < iVar26) goto LAB_00100db0;
         bVar6 = 0x1e < iVar26;
      }

      if (*(int*)( param_1 + 0x238 ) != 0) {
         LAB_00100f60:WebPCopyPixels(*(undefined8*)( param_1 + 0x130 ), param_1 + 0x138);
         uVar3 = *(undefined8*)( *(long*)( param_1 + 0x130 ) + 0x90 );
         uVar4 = *(undefined8*)( *(long*)( param_1 + 0x130 ) + 0x98 );
         *(undefined4*)( param_1 + 0x238 ) = 0;
         *(undefined8*)( param_1 + 0x1c8 ) = uVar3;
         *(undefined8*)( param_1 + 0x1d0 ) = uVar4;
      }

   }

   if (iVar8 != 0) {
      iVar26 = *(int*)( param_6 + 0xc );
      if (*(int*)( param_6 + 0x14 ) < 1) {
         iVar23 = 0;
      }
 else {
         lVar12 = *(long*)( lVar1 + 0x48 );
         lVar5 = *(long*)( param_1 + 0x180 );
         iVar23 = 0;
         iVar28 = *(int*)( param_6 + 8 );
         iVar29 = iVar26;
         do {
            iVar21 = *(int*)( lVar1 + 0x50 );
            if (0 < *(int*)( param_6 + 0x10 )) {
               lVar14 = (long)iVar28;
               lVar19 = lVar5 + (long)( *(int*)( param_1 + 0x188 ) * iVar29 ) * 4;
               do {
                  while (( iVar26 = *(int*)( lVar19 + lVar14 * 4 ) * (int*)( lVar12 + (long)( iVar21 * iVar29 ) * 4 + lVar14 * 4 ) != iVar26 || ( iVar26 == 0 ) )) {
                     lVar14 = lVar14 + 1;
                     if (*(int*)( param_6 + 0x10 ) + iVar28 <= (int)lVar14) goto LAB_00100f43;
                  }
;
                  *(undefined4*)( lVar19 + lVar14 * 4 ) = 0;
                  iVar28 = *(int*)( param_6 + 8 );
                  lVar14 = lVar14 + 1;
                  iVar23 = iVar8;
               }
 while ( (int)lVar14 < *(int*)( param_6 + 0x10 ) + iVar28 );
               LAB_00100f43:iVar26 = *(int*)( param_6 + 0xc );
            }

            iVar29 = iVar29 + 1;
         }
 while ( iVar29 < *(int*)( param_6 + 0x14 ) + iVar26 );
      }

      *(int*)( param_1 + 0x238 ) = iVar23;
   }

   iVar8 = EncodeCandidate(param_6 + 0x18, param_6 + 8, param_7, iVar8, param_2);
   if (iVar8 != 0) {
      return;
   }

   if (!bVar6) {
      return;
   }

   LAB_00100db0:if (*(int*)( param_1 + 0x238 ) != 0) {
      WebPCopyPixels(*(undefined8*)( param_1 + 0x130 ), param_1 + 0x138);
      uVar3 = *(undefined8*)( *(long*)( param_1 + 0x130 ) + 0x90 );
      uVar4 = *(undefined8*)( *(long*)( param_1 + 0x130 ) + 0x98 );
      *(undefined4*)( param_1 + 0x238 ) = 0;
      *(undefined8*)( param_1 + 0x1d0 ) = uVar4;
      *(undefined8*)( param_1 + 0x1c8 ) = uVar3;
   }

   if (local_64 != 0) {
      dVar31 = pow((double)*(float*)( param_8 + 4 ) / __LC0, _LC1);
      iVar8 = (int)( ( _LC2 - dVar31 ) * __LC3 + dVar31 + _LC1 );
      uVar9 = *(int*)( param_6 + 0x11c ) + *(int*)( param_6 + 0x124 ) & 0xfffffff8;
      uVar15 = *(int*)( param_6 + 0x11c ) + 8U & 0xfffffff8;
      uVar17 = *(int*)( param_6 + 0x118 ) + 8U & 0xfffffff8;
      uVar10 = *(int*)( param_6 + 0x118 ) + *(int*)( param_6 + 0x120 ) & 0xfffffff8;
      if ((int)uVar15 < (int)uVar9) {
         local_58 = 0;
         do {
            if ((int)uVar17 < (int)uVar10) {
               lVar12 = *(long*)( lVar1 + 0x48 );
               lVar5 = *(long*)( param_1 + 0x180 );
               lVar19 = (long)(int)uVar17;
               do {
                  iVar27 = 0;
                  iVar23 = *(int*)( param_1 + 0x188 );
                  iVar28 = 0;
                  iVar29 = 0;
                  iVar7 = 0;
                  iVar26 = 8;
                  lVar14 = lVar5 + ( (int)( uVar15 * iVar23 ) + lVar19 ) * 4;
                  puVar18 = (uint*)( lVar12 + ( (int)( *(int*)( lVar1 + 0x50 ) * uVar15 ) + lVar19 ) * 4 );
                  iVar21 = 8;
                  do {
                     iVar16 = iVar26 + -8;
                     local_a0 = puVar18;
                     do {
                        uVar25 = *local_a0;
                        if (( uVar25 >> 0x18 == 0xff ) && ( uVar2 = *(uint*)( lVar14 + (long)iVar16 * 4 ) ),uVar2 >> 0x18 == 0xff) {
                           uVar11 = uVar25 >> 0x10 & 0xff;
                           iVar30 = uVar11 - ( uVar2 >> 0x10 & 0xff );
                           iVar24 = -iVar30;
                           if (0 < iVar30) {
                              iVar24 = iVar30;
                           }

                           if (iVar24 <= iVar8) {
                              uVar20 = uVar25 >> 8 & 0xff;
                              iVar30 = uVar20 - ( uVar2 >> 8 & 0xff );
                              iVar24 = -iVar30;
                              if (0 < iVar30) {
                                 iVar24 = iVar30;
                              }

                              if (iVar24 <= iVar8) {
                                 iVar30 = ( uVar25 & 0xff ) - ( uVar2 & 0xff );
                                 iVar24 = -iVar30;
                                 if (0 < iVar30) {
                                    iVar24 = iVar30;
                                 }

                                 if (iVar24 <= iVar8) {
                                    iVar7 = iVar7 + 1;
                                    iVar29 = iVar29 + uVar11;
                                    iVar28 = iVar28 + uVar20;
                                    iVar27 = iVar27 + ( uVar25 & 0xff );
                                 }

                              }

                           }

                        }

                        iVar16 = iVar16 + 1;
                        local_a0 = local_a0 + 1;
                     }
 while ( iVar16 != iVar26 );
                     iVar26 = iVar16 + iVar23;
                     puVar18 = puVar18 + *(int*)( lVar1 + 0x50 );
                     iVar21 = iVar21 + -1;
                  }
 while ( iVar21 != 0 );
                  if (iVar7 == 0x40) {
                     if (iVar29 < 0) {
                        iVar29 = iVar29 + 0x3f;
                     }

                     if (iVar28 < 0) {
                        iVar28 = iVar28 + 0x3f;
                     }

                     iVar26 = iVar27 + 0x3f;
                     if (-1 < iVar27) {
                        iVar26 = iVar27;
                     }

                     iVar21 = 0;
                     uVar25 = ( iVar28 >> 6 ) << 8 | ( iVar29 >> 6 ) << 0x10 | iVar26 >> 6;
                     while (true) {
                        *(uint*)( lVar14 + (long)( iVar23 * iVar21 ) * 4 ) = uVar25;
                        iVar26 = local_64;
                        do {
                           iVar23 = *(int*)( param_1 + 0x188 ) * iVar21 + iVar26;
                           iVar26 = iVar26 + 1;
                           *(uint*)( lVar14 + (long)iVar23 * 4 ) = uVar25;
                        }
 while ( iVar26 != 8 );
                        iVar21 = iVar21 + 1;
                        local_58 = local_64;
                        if (iVar21 == 8) break;
                        iVar23 = *(int*)( param_1 + 0x188 );
                     }
;
                  }

                  lVar19 = lVar19 + 8;
               }
 while ( lVar19 != (long)(int)uVar17 + 8 + ( ulong )(( uVar10 - 8 ) - uVar17) );
            }

            uVar15 = uVar15 + 8;
         }
 while ( (int)uVar15 < (int)uVar9 );
      }
 else {
         local_58 = 0;
      }

      *(int*)( param_1 + 0x238 ) = local_58;
   }

   iVar8 = EncodeCandidate(param_6 + 0x128, param_6 + 0x118, param_8, local_64, lVar13);
   if (iVar8 == 0) {
      *(undefined4*)( param_1 + 0x238 ) = 1;
   }

   return;
   LAB_0010145a:iVar8 = iVar8 + 1;
   if (iVar8 == iVar26) goto LAB_00101073;
   goto LAB_00100be1;
}
int SetFrame(long param_1, ulong *param_2, int param_3, undefined8 *param_4, undefined4 *param_5) {
   int iVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   int *piVar12;
   uint uVar13;
   long lVar14;
   uint uVar15;
   int iVar16;
   int *piVar17;
   ulong uVar18;
   size_t __n;
   uint uVar19;
   long in_FS_OFFSET;
   bool bVar20;
   bool bVar21;
   byte bVar22;
   undefined8 local_738;
   ulong uStack_730;
   ulong local_728;
   ulong uStack_720;
   ulong local_718;
   ulong uStack_710;
   ulong local_708;
   ulong uStack_700;
   ulong local_6f8;
   ulong uStack_6f0;
   ulong local_6e8;
   ulong uStack_6e0;
   ulong local_6d8;
   ulong uStack_6d0;
   int local_6c8;
   ulong local_6b8;
   ulong uStack_6b0;
   ulong local_6a8;
   ulong uStack_6a0;
   ulong local_698;
   ulong uStack_690;
   ulong local_688;
   ulong uStack_680;
   ulong local_678;
   ulong uStack_670;
   ulong local_668;
   ulong uStack_660;
   ulong local_658;
   ulong uStack_650;
   int local_648;
   int local_638[24];
   int local_5d8;
   int local_498;
   uint local_494;
   int local_488;
   int local_484;
   undefined1 local_480[264];
   int local_378;
   int local_374;
   undefined1 local_370[264];
   undefined8 local_268[2];
   int local_258;
   int local_254;
   undefined1 local_250[264];
   int local_148;
   int local_144;
   undefined1 local_140[256];
   long local_40;
   bVar22 = 0;
   iVar2 = (int)*param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   bVar20 = *(int*)( param_1 + 0x1c ) != 0;
   iVar10 = *(int*)( param_1 + 0x484 );
   bVar21 = false;
   if (param_3 == 0) {
      bVar21 = *(int*)( param_1 + 0x480 ) == 0;
   }

   local_6b8 = *param_2;
   uStack_730 = param_2[1];
   local_728 = param_2[2];
   uStack_720 = param_2[3];
   local_718 = param_2[4];
   uStack_710 = param_2[5];
   local_708 = param_2[6];
   uStack_700 = param_2[7];
   local_6f8 = param_2[8];
   uStack_6f0 = param_2[9];
   local_6e8 = param_2[10];
   uStack_6e0 = param_2[0xb];
   local_6d8 = param_2[0xc];
   uStack_6d0 = param_2[0xd];
   local_6c8 = (int)param_2[0xe];
   *(ulong*)( param_1 + 0x44 ) = local_6b8;
   *(ulong*)( param_1 + 0x4c ) = uStack_730;
   uVar18 = param_2[3];
   *(ulong*)( param_1 + 0x54 ) = param_2[2];
   *(ulong*)( param_1 + 0x5c ) = uVar18;
   uVar18 = param_2[5];
   *(ulong*)( param_1 + 100 ) = param_2[4];
   *(ulong*)( param_1 + 0x6c ) = uVar18;
   uVar18 = param_2[7];
   local_738 = CONCAT44((int)( local_6b8 >> 0x20 ), 1);
   local_6b8 = local_6b8 & 0xffffffff00000000;
   *(ulong*)( param_1 + 0x74 ) = param_2[6];
   *(ulong*)( param_1 + 0x7c ) = uVar18;
   for (int i = 0; i < 3; i++) {
      uVar18 = param_2[( 2*i + 9 )];
      *(ulong*)( param_1 + ( 16*i + 132 ) ) = param_2[( 2*i + 8 )];
      *(ulong*)( param_1 + ( 16*i + 140 ) ) = uVar18;
   }

   *(int*)( param_1 + 0xb4 ) = (int)param_2[0xe];
   if ((int)*param_2 == 0) {
      *(undefined8*)( param_1 + 0xb8 ) = local_738;
      *(ulong*)( param_1 + 0xc0 ) = uStack_730;
   }
 else {
      *(ulong*)( param_1 + 0xb8 ) = local_6b8;
      *(ulong*)( param_1 + 0xc0 ) = uStack_730;
   }

   *(int*)( param_1 + 0x128 ) = local_6c8;
   *(ulong*)( param_1 + 200 ) = local_728;
   *(ulong*)( param_1 + 0xd0 ) = uStack_720;
   *(ulong*)( param_1 + 0xd8 ) = local_718;
   *(ulong*)( param_1 + 0xe0 ) = uStack_710;
   *(ulong*)( param_1 + 0xe8 ) = local_708;
   *(ulong*)( param_1 + 0xf0 ) = uStack_700;
   *(ulong*)( param_1 + 0xf8 ) = local_6f8;
   *(ulong*)( param_1 + 0x100 ) = uStack_6f0;
   *(ulong*)( param_1 + 0x108 ) = local_6e8;
   *(ulong*)( param_1 + 0x110 ) = uStack_6e0;
   *(ulong*)( param_1 + 0x118 ) = local_6d8;
   *(ulong*)( param_1 + 0x120 ) = uStack_6d0;
   *param_5 = 0;
   local_494 = ( uint )(iVar10 == 0);
   local_498 = 1;
   uStack_6b0 = uStack_730;
   local_6a8 = local_728;
   uStack_6a0 = uStack_720;
   local_698 = local_718;
   uStack_690 = uStack_710;
   local_688 = local_708;
   uStack_680 = uStack_700;
   local_678 = local_6f8;
   uStack_670 = uStack_6f0;
   local_668 = local_6e8;
   uStack_660 = uStack_6e0;
   local_658 = local_6d8;
   uStack_650 = uStack_6d0;
   local_648 = local_6c8;
   iVar9 = WebPPictureInitInternal(local_480, 0x20f);
   if (iVar9 != 0) {
      iVar9 = WebPPictureInitInternal(local_370, 0x20f);
      if (iVar9 != 0) {
         local_268[0] = 0;
         iVar9 = WebPPictureInitInternal(local_250, 0x20f);
         if (iVar9 != 0) {
            iVar9 = WebPPictureInitInternal(local_140, 0x20f);
            if (iVar9 != 0) {
               piVar17 = local_638;
               piVar12 = piVar17;
               for (lVar14 = 0x34; lVar14 != 0; lVar14 = lVar14 + -1) {
                  piVar12[0] = 0;
                  piVar12[1] = 0;
                  piVar12 = piVar12 + ( (ulong)bVar22 * -2 + 1 ) * 2;
               }

               iVar9 = GetSubRects(param_1 + 0x240, param_1 + 0x138, param_3, iVar10, &local_498);
               if (iVar9 == 0) {
                  LAB_00101820:iVar10 = 4;
                  joined_r0x00101834:while (true) {
                     if (local_5d8 != 0) {
                        WebPMemoryWriterClear(piVar17);
                     }

                     if (piVar17 + 0x1a == &local_498) break;
                     local_5d8 = piVar17[0x32];
                     piVar17 = piVar17 + 0x1a;
                  }
;
               }
 else if (( ( iVar2 != 0 || bVar20 ) && ( ( local_488 == 0 || ( local_484 == 0 ) ) ) ) || ( ( iVar2 == 0 || bVar20 && ( ( local_378 == 0 || ( local_374 == 0 ) ) ) ) )) {
                  *param_5 = 1;
                  iVar10 = 0;
               }
 else {
                  if (!bVar21) goto LAB_0010187b;
                  WebPCopyPixels(param_1 + 0x240, param_1 + 0x340);
                  iVar9 = *(int*)( param_1 + 0x38 );
                  iVar11 = *(int*)( param_1 + 0x3c );
                  iVar1 = *(int*)( param_1 + 0x34 );
                  iVar16 = *(int*)( param_1 + 0x40 ) + iVar9;
                  if (iVar9 < iVar16) {
                     lVar14 = *(long*)( param_1 + 0x388 );
                     __n = 4;
                     if (iVar1 < iVar11 + iVar1) {
                        __n = ( ulong )(iVar11 - 1) * 4 + 4;
                     }

                     LAB_001019e7:if (iVar11 < 1) goto LAB_00101ade;
                     iVar11 = *(int*)( param_1 + 0x390 ) * iVar9;
                     while (true) {
                        iVar9 = iVar9 + 1;
                        memset((void*)( lVar14 + ( (long)iVar11 + (long)iVar1 ) * 4 ), 0, __n);
                        if (iVar16 == iVar9) break;
                        iVar11 = *(int*)( param_1 + 0x390 ) * iVar9;
                     }
;
                  }

                  LAB_00101a54:iVar10 = GetSubRects(param_1 + 0x340, param_1 + 0x138, param_3, iVar10, local_268);
                  if (iVar10 == 0) goto LAB_00101820;
                  if (*(int*)( param_1 + 0x10 ) == 0) {
                     if (iVar2 == 0) {
                        if (( uint )(local_378 * local_374) <= ( uint )(local_148 * local_144)) {
                           LAB_0010187b:if (local_498 != 0) goto LAB_00101aa2;
                           goto LAB_0010188c;
                        }

                     }
 else if (( uint )(local_488 * local_484) <= ( uint )(local_258 * local_254)) goto LAB_0010187b;
                     local_268[0] = CONCAT44(local_268[0]._4_4_, 1);
                     local_498 = 0;
                     LAB_0010189f:iVar10 = GenerateCandidates_constprop_0(param_1, piVar17, 1, iVar2, param_3, local_268, &local_738, &local_6b8);
                     if (iVar10 != 0) goto joined_r0x00101834;
                  }
 else {
                     local_268[0] = CONCAT44(local_268[0]._4_4_, 1);
                     local_498 = 1;
                     LAB_00101aa2:iVar10 = GenerateCandidates_constprop_0(param_1, piVar17, 0, iVar2, param_3, &local_498, &local_738, &local_6b8);
                     if (iVar10 != 0) goto joined_r0x00101834;
                     LAB_0010188c:if ((int)local_268[0] != 0) goto LAB_0010189f;
                  }

                  uVar19 = 0xffffffff;
                  uVar18 = 0xffffffffffffffff;
                  uVar15 = 0;
                  piVar12 = piVar17;
                  do {
                     if (( piVar12[0x18] != 0 ) && ( *(ulong*)( piVar12 + 2 ) < uVar18 )) {
                        uVar18 = *(ulong*)( piVar12 + 2 );
                        uVar19 = uVar15;
                     }

                     uVar15 = uVar15 + 1;
                     piVar12 = piVar12 + 0x1a;
                  }
 while ( uVar15 != 4 );
                  uVar15 = 0;
                  do {
                     if (piVar17[0x18] != 0) {
                        if (uVar15 == uVar19) {
                           uVar3 = *(undefined8*)( piVar17 + 2 );
                           if (param_3 == 0) {
                              uVar5 = *(undefined8*)( piVar17 + 0xc );
                              uVar6 = *(undefined8*)( piVar17 + 0xe );
                              uVar7 = *(undefined8*)( piVar17 + 0x10 );
                              uVar8 = *(undefined8*)( piVar17 + 0x12 );
                              *param_4 = *(undefined8*)piVar17;
                              param_4[1] = uVar3;
                              lVar14 = *(long*)( param_1 + 0x450 );
                              uVar13 = uVar15 & 0xfffffffd;
                              lVar4 = *(long*)( param_1 + 0x458 );
                              iVar2 = *(int*)( param_1 + 0x480 );
                              param_4[2] = uVar5;
                              param_4[3] = uVar6;
                              param_4[4] = uVar7;
                              param_4[5] = uVar8;
                              lVar14 = *(long*)( param_1 + 0x440 ) + ( lVar14 + lVar4 + -2 ) * 0x68;
                              if (iVar2 == 0) {
                                 if (*(int*)( lVar14 + 0x60 ) != 0) {
                                    lVar14 = lVar14 + 0x30;
                                 }

                                 *(uint*)( lVar14 + 0x20 ) = uVar13;
                              }
 else {
                                 *(uint*)( lVar14 + 0x20 ) = uVar13;
                                 *(uint*)( lVar14 + 0x50 ) = uVar13;
                              }

                           }
 else {
                              uVar5 = *(undefined8*)( piVar17 + 0xc );
                              uVar6 = *(undefined8*)( piVar17 + 0xe );
                              uVar7 = *(undefined8*)( piVar17 + 0x10 );
                              uVar8 = *(undefined8*)( piVar17 + 0x12 );
                              param_4[6] = *(undefined8*)piVar17;
                              param_4[7] = uVar3;
                              param_4[8] = uVar5;
                              param_4[9] = uVar6;
                              param_4[10] = uVar7;
                              param_4[0xb] = uVar8;
                           }

                           uVar3 = *(undefined8*)( piVar17 + 0x16 );
                           *(undefined8*)( param_1 + 0x34 ) = *(undefined8*)( piVar17 + 0x14 );
                           *(undefined8*)( param_1 + 0x3c ) = uVar3;
                        }
 else {
                           WebPMemoryWriterClear(piVar17);
                           piVar17[0x18] = 0;
                        }

                     }

                     uVar15 = uVar15 + 1;
                     piVar17 = piVar17 + 0x1a;
                  }
 while ( uVar15 != 4 );
                  iVar10 = 0;
               }

               WebPPictureFree(local_480);
               WebPPictureFree(local_370);
               WebPPictureFree(local_250);
               WebPPictureFree(local_140);
               goto LAB_001016a7;
            }

         }

      }

   }

   iVar10 = 4;
   LAB_001016a7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar10;
   LAB_00101ade:iVar9 = iVar9 + 1;
   if (iVar16 == iVar9) goto LAB_00101a54;
   goto LAB_001019e7;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int WebPAnimEncoderOptionsInitInternal(undefined4 *param_1, int param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   uVar2 = _LC19;
   uVar1 = __LC18;
   if (( param_1 != (undefined4*)0x0 ) && ( param_2 >> 8 == 1 )) {
      *param_1 = 0xffffffff;
      *(undefined8*)( param_1 + 5 ) = 0;
      *(undefined8*)( param_1 + 1 ) = uVar1;
      *(undefined8*)( param_1 + 3 ) = uVar2;
      return param_2 >> 8;
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int *WebPAnimEncoderNewInternal(int param_1, int param_2, undefined8 *param_3, int param_4) {
   int *piVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int *piVar7;
   long lVar8;
   char *pcVar9;
   int iVar10;
   ulong uVar11;
   if (param_4 >> 8 != 1) {
      return (int*)0x0;
   }

   if (param_1 < 1) {
      return (int*)0x0;
   }

   if (param_2 < 1) {
      return (int*)0x0;
   }

   if (( ulong )((long)param_1 * (long)param_2) >> 0x20 != 0) {
      return (int*)0x0;
   }

   piVar7 = (int*)WebPSafeCalloc(1, 0x510);
   if (piVar7 == (int*)0x0) {
      return (int*)0x0;
   }

   *(undefined1*)( piVar7 + 0x12a ) = 0;
   *piVar7 = param_1;
   piVar7[1] = param_2;
   uVar3 = _LC19;
   uVar2 = __LC18;
   if (param_3 == (undefined8*)0x0) {
      piVar7[2] = -1;
      piVar7[7] = 0;
      piVar7[8] = 0;
      *(undefined8*)( piVar7 + 3 ) = uVar2;
      *(undefined8*)( piVar7 + 5 ) = uVar3;
   }
 else {
      uVar2 = param_3[1];
      *(undefined8*)( piVar7 + 2 ) = *param_3;
      *(undefined8*)( piVar7 + 4 ) = uVar2;
      uVar2 = param_3[3];
      *(undefined8*)( piVar7 + 6 ) = param_3[2];
      *(undefined8*)( piVar7 + 8 ) = uVar2;
      uVar2 = *(undefined8*)( (long)param_3 + 0x24 );
      iVar4 = piVar7[8];
      *(undefined8*)( piVar7 + 9 ) = *(undefined8*)( (long)param_3 + 0x1c );
      *(undefined8*)( piVar7 + 0xb ) = uVar2;
      if (piVar7[4] == 0) {
         iVar6 = piVar7[6];
         if (iVar6 == 1) {
            piVar7[5] = 0;
            piVar7[6] = 0;
         }
 else if (iVar6 < 1) {
            *(undefined8*)( piVar7 + 5 ) = _LC19;
         }
 else if (piVar7[5] < iVar6) {
            iVar10 = ( iVar6 >> 1 ) + 1;
            if (( iVar10 <= piVar7[5] ) || ( iVar6 <= iVar10 )) goto LAB_00101ec0;
            piVar7[5] = iVar10;
            if (iVar4 != 0) {
               pcVar9 = "WARNING: Setting kmin = %d, so that kmin >= kmax / 2 + 1.\n";
               goto LAB_00101f80;
            }

            if (0x1e < iVar6 - iVar10) {
               piVar7[5] = iVar6 + -0x1e;
            }

         }
 else {
            piVar7[5] = iVar6 + -1;
            if (iVar4 != 0) {
               pcVar9 = "WARNING: Setting kmin = %d, so that kmin < kmax.\n";
               LAB_00101f80:__fprintf_chk(_stderr, 2, pcVar9);
               if (0x1e < piVar7[6] - piVar7[5]) {
                  iVar6 = piVar7[6] + -0x1e;
                  piVar7[5] = iVar6;
                  goto LAB_00101edc;
               }

            }

         }

      }
 else {
         *(undefined8*)( piVar7 + 5 ) = _LC19;
         iVar6 = 0x7fffffff;
         LAB_00101ec0:if (0x1e < iVar6 - piVar7[5]) {
            iVar6 = iVar6 + -0x1e;
            piVar7[5] = iVar6;
            if (iVar4 != 0) {
               LAB_00101edc:__fprintf_chk(_stderr, 2, "WARNING: Setting kmin = %d, so that kmax - kmin <= %d.\n", iVar6, 0x1e);
            }

         }

      }

   }

   piVar1 = piVar7 + 0x4e;
   iVar4 = WebPPictureInitInternal(piVar1, 0x20f);
   if (iVar4 == 0) goto LAB_00101e90;
   iVar4 = WebPPictureInitInternal(piVar7 + 0x90, 0x20f);
   if (( iVar4 == 0 ) || ( iVar4 = WebPPictureInitInternal(piVar7 + 0xd0, 0x20f) ),iVar4 == 0) goto LAB_00101e90;
   piVar7[0x50] = param_1;
   piVar7[0x51] = param_2;
   piVar7[0x4e] = 1;
   iVar4 = WebPPictureAlloc(piVar1);
   if (( iVar4 == 0 ) || ( ( iVar4 = WebPPictureCopy(piVar1, piVar7 + 0x90) ),iVar4 == 0 || ( iVar4 = WebPPictureCopy(piVar1) ),iVar4 == 0 )) goto LAB_00101e90;
   iVar4 = piVar7[0x93];
   iVar6 = piVar7[0x92];
   if (0 < iVar4) {
      lVar8 = *(long*)( piVar7 + 0xa2 );
      iVar10 = 0;
      do {
         if (0 < iVar6) goto LAB_00101dc0;
         iVar10 = iVar10 + 1;
      }
 while ( iVar4 != iVar10 );
   }

   LAB_00101de2:piVar7[0x8e] = 1;
   piVar7[0x11a] = 0;
   piVar7[0x11b] = 1;
   piVar7[0x114] = 0;
   piVar7[0x115] = 0;
   uVar11 = ( ulong )(( piVar7[6] - piVar7[5] ) + 1);
   for (int i = 0; i < 4; i++) {
      piVar7[( i + 278 )] = 0;
   }

   if (uVar11 < 2) {
      uVar11 = 2;
   }

   piVar7[0x11c] = -1;
   *(ulong*)( piVar7 + 0x112 ) = uVar11;
   lVar8 = WebPSafeCalloc(uVar11, 0x68);
   *(long*)( piVar7 + 0x110 ) = lVar8;
   if (lVar8 != 0) {
      lVar8 = WebPNewInternal(0x109);
      *(long*)( piVar7 + 0x128 ) = lVar8;
      if (lVar8 != 0) {
         piVar7[0x121] = 1;
         piVar7[0x122] = 0;
         *(undefined1(*) [16])( piVar7 + 0x11d ) = (undefined1[16])0x0;
         return piVar7;
      }

   }

   LAB_00101e90:WebPAnimEncoderDelete_part_0(piVar7);
   return (int*)0x0;
   LAB_00101dc0:do {
      iVar5 = piVar7[0xa4] * iVar10;
      iVar10 = iVar10 + 1;
      memset((void*)( lVar8 + (long)iVar5 * 4 ), 0, ( ulong )(iVar6 - 1) * 4 + 4);
   }
 while ( iVar4 != iVar10 );
   goto LAB_00101de2;
}
void WebPAnimEncoderDelete(long param_1) {
   if (param_1 != 0) {
      WebPAnimEncoderDelete_part_0();
      return;
   }

   return;
}
int WebPAnimEncoderRefineRect(int *param_1, int *param_2, undefined4 param_3, uint *param_4, uint *param_5, int *param_6, int *param_7) {
   uint uVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   uint local_48;
   uint local_44;
   int local_40;
   int local_3c;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = 0;
   if (( param_1 == (int*)0x0 ) || ( param_2 == (int*)0x0 )) {
      iVar4 = 0;
   }
 else if (( ( *(long*)( param_1 + 2 ) == *(long*)( param_2 + 2 ) ) && ( iVar4 = *param_1 ),iVar4 != 0 )) {
      uVar1 = *param_4;
      local_40 = param_2[2];
      iVar2 = *param_6 + uVar1;
      iVar4 = iVar2;
      if (local_40 <= iVar2) {
         iVar4 = local_40;
      }

      if (iVar2 < 0) {
         iVar4 = 0;
      }

      local_48 = 0;
      if (-1 < (int)uVar1) {
         local_48 = local_40 - 1U;
         if ((int)uVar1 < (int)( local_40 - 1U )) {
            local_48 = uVar1;
         }

         local_40 = local_40 - local_48;
         iVar4 = iVar4 - local_48;
      }

      uVar1 = *param_5;
      local_3c = param_2[3];
      iVar3 = *param_7 + uVar1;
      iVar2 = iVar3;
      if (local_3c <= iVar3) {
         iVar2 = local_3c;
      }

      local_44 = 0;
      if (iVar3 < 0) {
         iVar2 = 0;
      }

      if (-1 < (int)uVar1) {
         local_44 = local_3c - 1U;
         if ((int)uVar1 < (int)( local_3c - 1U )) {
            local_44 = uVar1;
         }

         local_3c = local_3c - local_44;
         iVar2 = iVar2 - local_44;
      }

      if (iVar4 < local_40) {
         local_40 = iVar4;
      }

      if (iVar4 < 0) {
         local_40 = 0;
      }

      if (iVar2 < local_3c) {
         local_3c = iVar2;
      }

      if (iVar2 < 0) {
         local_3c = 0;
      }

      MinimizeChangeRectangle(param_1, param_2, &local_48, param_3);
      *param_4 = local_48 & 0xfffffffe;
      *param_5 = local_44 & 0xfffffffe;
      iVar4 = 1;
      *param_6 = ( local_48 & 1 ) + local_40;
      *param_7 = ( local_44 & 1 ) + local_3c;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 WebPAnimEncoderAdd(long *param_1, int *param_2, int param_3, undefined8 *param_4) {
   long lVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   bool bVar5;
   long lVar6;
   int iVar7;
   undefined8 uVar8;
   long lVar9;
   char *pcVar10;
   long in_FS_OFFSET;
   undefined8 uVar11;
   undefined8 uVar12;
   int local_bc;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined4 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (long*)0x0) {
      *(undefined1*)( param_1 + 0x95 ) = 0;
      if (*(int*)( (long)param_1 + 0x484 ) != 0) {
         *(int*)( param_1 + 0x8f ) = param_3;
         LAB_001021da:if (param_2 == (int*)0x0) {
            *(undefined4*)( param_1 + 0x91 ) = 1;
         }
 else {
            if (*(long*)( param_2 + 2 ) != *param_1) {
               pcVar10 = "ERROR adding frame: Invalid frame dimensions";
               param_2[0x22] = 4;
               goto LAB_001023cd;
            }

            if (*param_2 == 0) {
               if ((int)param_1[4] != 0) {
                  fwrite("WARNING: Converting frame from YUV(A) to ARGB format; this incurs a small loss.\n", 1, 0x50, _stderr);
               }

               iVar7 = WebPPictureYUVAToARGB(param_2);
               pcVar10 = "ERROR converting frame from YUV(A) to ARGB";
               if (iVar7 != 0) goto LAB_00102224;
               LAB_00102490:__snprintf_chk(param_1 + 0x95, 100, 2, 0xffffffffffffffff, &_LC25, pcVar10);
               goto LAB_001023ec;
            }

            LAB_00102224:if (param_4 == (undefined8*)0x0) {
               iVar7 = WebPConfigInitInternal(&local_b8, 0, 0x20f);
               if (iVar7 == 0) {
                  pcVar10 = "Cannot Init config";
                  goto LAB_00102490;
               }

               local_b8 = CONCAT44(local_b8._4_4_, 1);
            }
 else {
               iVar7 = WebPValidateConfig(param_4);
               pcVar10 = "ERROR adding frame: Invalid WebPConfig";
               if (iVar7 == 0) goto LAB_00102490;
               local_48 = *(undefined4*)( param_4 + 0xe );
               local_b8 = *param_4;
               uStack_b0 = param_4[1];
               local_a8 = param_4[2];
               uStack_a0 = param_4[3];
               local_98 = param_4[4];
               uStack_90 = param_4[5];
               local_88 = param_4[6];
               uStack_80 = param_4[7];
               local_78 = param_4[8];
               uStack_70 = param_4[9];
               local_68 = param_4[10];
               uStack_60 = param_4[0xb];
               local_58 = param_4[0xc];
               uStack_50 = param_4[0xd];
            }

            param_1[0x26] = (long)param_2;
            if ((int)param_1[0x47] != 0) {
               WebPCopyPixels(param_2, param_1 + 0x27);
               lVar1 = *(long*)( param_1[0x26] + 0x90 );
               lVar3 = *(long*)( param_1[0x26] + 0x98 );
               *(undefined4*)( param_1 + 0x47 ) = 0;
               param_1[0x39] = lVar1;
               param_1[0x3a] = lVar3;
            }

            lVar3 = param_1[0x8b];
            lVar1 = param_1[0x88] + ( param_1[0x8a] + lVar3 ) * 0x68;
            param_1[0x8b] = lVar3 + 1;
            if (*(int*)( (long)param_1 + 0x484 ) == 0) {
               iVar7 = *(int*)( (long)param_1 + 0x474 ) + 1;
               *(int*)( (long)param_1 + 0x474 ) = iVar7;
               bVar5 = false;
               if (*(int*)( (long)param_1 + 0x14 ) < iVar7) {
                  iVar7 = SetFrame(param_1, &local_b8, 0, lVar1);
                  if (iVar7 != 0) goto LAB_001024c8;
                  if (local_bc != 0) goto LAB_001024b8;
                  uVar8 = *(undefined8*)( (long)param_1 + 0x34 );
                  uVar4 = *(undefined8*)( (long)param_1 + 0x3c );
                  iVar7 = SetFrame(param_1, &local_b8, 1, lVar1, &local_bc);
                  bVar5 = false;
                  if (iVar7 != 0) goto LAB_001024c8;
                  uVar11 = *(undefined8*)( (long)param_1 + 0x34 );
                  uVar12 = *(undefined8*)( (long)param_1 + 0x3c );
                  lVar6 = param_1[3];
                  iVar2 = *(int*)( (long)param_1 + 0x474 );
                  lVar9 = *(long*)( lVar1 + 0x38 ) - *(long*)( lVar1 + 8 );
                  iVar7 = local_bc;
                  if (lVar9 <= param_1[0x8d]) {
                     if ((int)param_1[0x8e] != -1) {
                        *(undefined4*)( param_1[0x88] + ( (long)(int)param_1[0x8e] + param_1[0x8a] ) * 0x68 + 0x60 ) = 0;
                     }

                     *(undefined4*)( lVar1 + 0x60 ) = 1;
                     param_1[0x8d] = lVar9;
                     *(undefined4*)( param_1 + 0x90 ) = 1;
                     *(int*)( param_1 + 0x8e ) = (int)lVar3;
                     param_1[0x8c] = param_1[0x8b] + -1;
                     if ((int)lVar6 <= iVar2) {
                        param_1[0x8e] = _LC32;
                        param_1[0x8d] = 0x100000000;
                     }

                     goto LAB_00102710;
                  }

                  *(undefined4*)( lVar1 + 0x60 ) = 0;
                  *(undefined4*)( param_1 + 0x90 ) = 0;
                  if (iVar2 < (int)lVar6) {
                     LAB_0010287e:uVar11 = uVar8;
                     uVar12 = uVar4;
                  }
 else {
                     param_1[0x8c] = param_1[0x8b] + -1;
                     param_1[0x8e] = _LC32;
                     iVar2 = *(int*)( lVar1 + 0x60 );
                     param_1[0x8d] = 0x100000000;
                     if (iVar2 == 0) goto LAB_0010287e;
                  }

                  *(undefined8*)( (long)param_1 + 0x34 ) = uVar11;
                  *(undefined8*)( (long)param_1 + 0x3c ) = uVar12;
                  goto LAB_00102710;
               }

               iVar7 = SetFrame(param_1, &local_b8, 0, lVar1, &local_bc);
               if (iVar7 != 0) {
                  LAB_001024c8:if (lVar1 != 0) goto LAB_001025d8;
                  goto LAB_001024d1;
               }

               if (local_bc != 0) {
                  LAB_001024b8:param_1[0x92] = param_1[0x92] + 1;
                  iVar7 = 0;
                  bVar5 = true;
                  goto LAB_001024c8;
               }

               lVar3 = param_1[0x8b];
               *(undefined4*)( lVar1 + 0x60 ) = 0;
               *(undefined4*)( param_1 + 0x90 ) = 0;
               param_1[0x8c] = lVar3 + -1;
               WebPCopyPixels(param_1[0x26], param_1 + 0x48);
               param_1[0x92] = param_1[0x92] + 1;
               *(undefined4*)( (long)param_1 + 0x484 ) = 0;
               LAB_0010273d:*(undefined4*)( param_1[0x26] + 0x88 ) = 0;
            }
 else {
               iVar7 = SetFrame(param_1, &local_b8, 1, lVar1, &local_bc);
               if (iVar7 != 0) {
                  bVar5 = false;
                  goto LAB_001024c8;
               }

               *(undefined4*)( lVar1 + 0x60 ) = 1;
               param_1[0x8c] = 0;
               *(undefined4*)( (long)param_1 + 0x474 ) = 0;
               *(undefined4*)( param_1 + 0x90 ) = 0;
               iVar7 = local_bc;
               LAB_00102710:WebPCopyPixels(param_1[0x26], param_1 + 0x48);
               param_1[0x92] = param_1[0x92] + 1;
               *(undefined4*)( (long)param_1 + 0x484 ) = 0;
               if (iVar7 == 0) goto LAB_0010273d;
               iVar7 = 0;
               bVar5 = true;
               LAB_001025d8:FrameRelease_part_0(lVar1);
               LAB_001024d1:param_1[0x8b] = param_1[0x8b] + -1;
               if (*(int*)( (long)param_1 + 0x484 ) == 0) {
                  *(int*)( (long)param_1 + 0x474 ) = *(int*)( (long)param_1 + 0x474 ) + -1;
               }

               if (!bVar5) {
                  __snprintf_chk(param_1 + 0x95, 100, 2, 0xffffffffffffffff, "%s: %d.", "ERROR adding frame. WebPEncodingError", iVar7);
                  *(int*)( param_1[0x26] + 0x88 ) = iVar7;
                  param_1[0x26] = 0;
                  *(undefined4*)( param_1 + 0x47 ) = 1;
                  goto LAB_001023ec;
               }

               *(int*)( param_1[0x26] + 0x88 ) = iVar7;
            }

            iVar7 = FlushFrames(param_1);
            param_1[0x26] = 0;
            *(undefined4*)( param_1 + 0x47 ) = 1;
            if (iVar7 == 0) goto LAB_001023ec;
         }

         *(int*)( (long)param_1 + 0x47c ) = param_3;
         uVar8 = 1;
         goto LAB_001023ee;
      }

      if (( uint )(param_3 - *(int*)( (long)param_1 + 0x47c )) < 0x1000000) {
         iVar7 = IncreasePreviousDuration_constprop_0();
         if (( iVar7 == 0 ) || ( ( param_1[0x8b] == param_1[0x89] && ( iVar7 = FlushFrames(param_1) ),iVar7 == 0 ) )) goto LAB_001023ec;
         goto LAB_001021da;
      }

      if (param_2 != (int*)0x0) {
         param_2[0x22] = 4;
      }

      pcVar10 = "ERROR adding frame: timestamps must be non-decreasing";
      LAB_001023cd:__snprintf_chk(param_1 + 0x95, 100, 2, 0xffffffffffffffff, &_LC25, pcVar10);
   }

   LAB_001023ec:uVar8 = 0;
   LAB_001023ee:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
undefined4 WebPAnimEncoderAssemble(undefined4 *param_1, undefined8 *param_2) {
   undefined4 *puVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   char *pcVar8;
   undefined4 uVar9;
   int iVar10;
   long in_FS_OFFSET;
   undefined1 local_2d0[4];
   undefined1 local_2cc[4];
   undefined1 local_2c8[16];
   undefined1 local_2b8[16];
   undefined8 local_2a8;
   ulong local_2a0;
   undefined8 local_288;
   ulong local_280;
   undefined1 local_268[16];
   undefined4 local_258;
   undefined4 local_254;
   int local_24c;
   undefined4 local_238;
   undefined4 local_234;
   undefined4 local_210;
   undefined4 local_204;
   undefined8 local_200;
   int local_1f8;
   long local_1f0;
   undefined1 local_148[12];
   int local_13c;
   undefined8 local_100;
   int local_f8;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (undefined4*)0x0) {
      *(undefined1*)( param_1 + 0x12a ) = 0;
      if (param_2 == (undefined8*)0x0) {
         pcVar8 = "ERROR assembling: NULL input";
      }
 else {
         lVar6 = *(long*)( param_1 + 0x124 );
         pcVar8 = "ERROR: No frames to assemble";
         if (lVar6 != 0) {
            lVar7 = *(long*)( param_1 + 0x116 );
            if (( ( param_1[0x122] == 0 ) && ( lVar6 != 1 ) ) && ( lVar7 != 0 )) {
               iVar5 = IncreasePreviousDuration_constprop_0(param_1, (int)( (double)( uint )(param_1[0x11f] - param_1[0x11e]) / (double)( lVar6 - 1 ) ));
               if (iVar5 == 0) goto LAB_00102980;
               lVar7 = *(long*)( param_1 + 0x116 );
            }

            *(long*)( param_1 + 0x118 ) = lVar7;
            iVar5 = FlushFrames(param_1);
            if (iVar5 == 0) goto LAB_00102980;
            uVar3 = *(undefined8*)( param_1 + 0x128 );
            iVar5 = WebPMuxSetCanvasSize(uVar3, *param_1, param_1[1]);
            if (( ( iVar5 == 1 ) && ( iVar5 = WebPMuxSetAnimationParams(uVar3, param_1 + 2) ),iVar5 == 1 )) {
               uVar9 = 1;
               if (*(long*)( param_1 + 0x126 ) != 1) goto LAB_00102983;
               lVar6 = WebPMuxCreateInternal(param_2, 0, 0x109);
               if (lVar6 == 0) {
                  iVar5 = -2;
               }
 else {
                  local_268 = (undefined1[16])0x0;
                  local_2c8 = (undefined1[16])0x0;
                  local_2b8 = (undefined1[16])0x0;
                  iVar5 = WebPMuxGetFrame(lVar6, 1, local_268);
                  if (iVar5 == 1) {
                     if (local_24c != 3) {
                        LAB_00102a7d:WebPFree(local_268._0_8_);
                        local_268 = (undefined1[16])0x0;
                        WebPFree(local_2c8._0_8_);
                        local_2c8 = (undefined1[16])0x0;
                        WebPMuxDelete(lVar6);
                        WebPFree(local_2b8._0_8_);
                        goto LAB_00102983;
                     }

                     iVar5 = WebPMuxGetCanvasSize(lVar6, local_2d0, local_2cc);
                     if (iVar5 == 1) {
                        WebPMemoryWriterInit(&local_2a8);
                        WebPMemoryWriterInit(&local_288);
                        iVar5 = WebPInitDecoderConfigInternal(&local_238);
                        if (iVar5 != 0) {
                           iVar5 = param_1[0x51];
                           iVar2 = param_1[0x50];
                           for (iVar10 = 0; iVar10 < iVar5; iVar10 = iVar10 + 1) {
                              if (0 < iVar2) {
                                 memset((void*)( *(long*)( param_1 + 0x60 ) + (long)( param_1[0x62] * iVar10 ) * 4 ), 0, ( ulong )(iVar2 - 1) * 4 + 4);
                              }

                           }

                           iVar5 = WebPGetFeaturesInternal(local_268._0_8_, local_268._8_8_, &local_238, 0x209);
                           if (iVar5 == 0) {
                              puVar1 = param_1 + 0x4e;
                              iVar5 = WebPPictureView(puVar1, local_258, local_254, local_238, local_234, local_148);
                              if (iVar5 != 0) {
                                 local_204 = 1;
                                 local_210 = 3;
                                 local_200 = local_100;
                                 local_1f8 = local_f8 * 4;
                                 local_1f0 = (long)( local_1f8 * local_13c );
                                 iVar5 = WebPDecode(local_268._0_8_, local_268._8_8_, &local_238);
                                 if (iVar5 == 0) {
                                    param_1[0x4e] = 1;
                                    *(undefined**)( param_1 + 0x66 ) = &WebPMemoryWrite;
                                    *(undefined8**)( param_1 + 0x68 ) = &local_2a8;
                                    iVar5 = WebPEncode(param_1 + 0x11, puVar1);
                                    if (iVar5 != 0) {
                                       local_2c8._8_8_ = local_2a0;
                                       local_2c8._0_8_ = local_2a8;
                                       if (param_1[7] != 0) {
                                          *(undefined8**)( param_1 + 0x68 ) = &local_288;
                                          param_1[0x4e] = 1;
                                          *(undefined**)( param_1 + 0x66 ) = &WebPMemoryWrite;
                                          iVar5 = WebPEncode(param_1 + 0x2e, puVar1);
                                          if (iVar5 == 0) goto LAB_00102b2b;
                                          if (local_280 < local_2a0) {
                                             local_2c8._8_8_ = local_280;
                                             local_2c8._0_8_ = local_288;
                                             WebPMemoryWriterClear(&local_2a8);
                                          }
 else {
                                             WebPMemoryWriterClear(&local_288);
                                          }

                                       }

                                       iVar5 = WebPMuxSetImage(lVar6, local_2c8, 1);
                                       if (( iVar5 == 1 ) && ( iVar5 = iVar5 == 1 )) {
                                          if ((ulong)local_2b8._8_8_ < (ulong)param_2[1]) {
                                             WebPFree(*param_2);
                                             uVar3 = local_2b8._0_8_;
                                             uVar4 = local_2b8._8_8_;
                                             local_2b8 = (undefined1[16])0x0;
                                             *param_2 = uVar3;
                                             param_2[1] = uVar4;
                                          }

                                          goto LAB_00102a7d;
                                       }

                                       goto LAB_00102b42;
                                    }

                                 }

                              }

                           }

                        }

                        LAB_00102b2b:WebPMemoryWriterClear(&local_2a8);
                        iVar5 = -2;
                        WebPMemoryWriterClear(&local_288);
                     }

                  }

                  LAB_00102b42:WebPFree(local_268._0_8_);
                  local_268 = (undefined1[16])0x0;
                  WebPFree(local_2c8._0_8_);
                  local_2c8 = (undefined1[16])0x0;
                  WebPMuxDelete(lVar6);
                  WebPFree(local_2b8._0_8_);
               }

            }

            __snprintf_chk(param_1 + 0x12a, 100, 2, 0xffffffffffffffff, "%s: %d.", "ERROR assembling WebP", iVar5);
            goto LAB_00102980;
         }

      }

      __snprintf_chk(param_1 + 0x12a, 100, 2, 0xffffffffffffffff, &_LC25, pcVar8);
   }

   LAB_00102980:uVar9 = 0;
   LAB_00102983:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
long WebPAnimEncoderGetError(long param_1) {
   long lVar1;
   lVar1 = param_1 + 0x4a8;
   if (param_1 == 0) {
      lVar1 = 0;
   }

   return lVar1;
}
undefined8 WebPAnimEncoderSetChunk(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = WebPMuxSetChunk(*(undefined8*)( param_1 + 0x4a0 ));
      return uVar1;
   }

   return 0xffffffff;
}
undefined8 WebPAnimEncoderGetChunk(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = WebPMuxGetChunk(*(undefined8*)( param_1 + 0x4a0 ));
      return uVar1;
   }

   return 0xffffffff;
}
undefined8 WebPAnimEncoderDeleteChunk(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = WebPMuxDeleteChunk(*(undefined8*)( param_1 + 0x4a0 ));
      return uVar1;
   }

   return 0xffffffff;
}


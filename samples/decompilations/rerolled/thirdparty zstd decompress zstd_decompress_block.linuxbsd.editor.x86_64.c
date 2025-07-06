void ZSTD_allocateLiteralsBuffer(long param_1, long param_2, ulong param_3, ulong param_4, int param_5, long param_6, int param_7) {
   long lVar1;
   ulong uVar2;
   uVar2 = 0x20000;
   if (*(int*)( param_1 + 0x75e0 ) != 0) {
      uVar2 = ( ulong ) * (uint*)( param_1 + 0x74f8 );
   }

   if (( param_5 == 0 ) && ( uVar2 + 0x40 + param_4 < param_3 )) {
      lVar1 = param_2 + 0x20 + uVar2;
      *(long*)( param_1 + 0x7690 ) = lVar1;
      *(ulong*)( param_1 + 0x7698 ) = lVar1 + param_4;
      *(undefined4*)( param_1 + 0x76a0 ) = 1;
      return;
   }

   if (param_4 < 0x10001) {
      *(long*)( param_1 + 0x7690 ) = param_1 + 0x76a4;
      *(ulong*)( param_1 + 0x7698 ) = param_1 + 0x76a4 + param_4;
      *(undefined4*)( param_1 + 0x76a0 ) = 0;
      return;
   }

   if (param_7 == 0) {
      lVar1 = param_2 + param_6;
      param_2 = ( param_6 - param_4 ) + param_2;
   }
 else {
      param_2 = ( param_2 - param_4 ) + 0xffe0 + param_6;
      lVar1 = param_2 + -0x10000 + param_4;
   }

   *(long*)( param_1 + 0x7698 ) = lVar1;
   *(long*)( param_1 + 0x7690 ) = param_2;
   *(undefined4*)( param_1 + 0x76a0 ) = 2;
   return;
}
void ZSTD_safecopy(undefined8 *param_1, undefined8 *param_2, undefined8 *param_3, long param_4, int param_5) {
   undefined8 *puVar1;
   uint uVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
   undefined8 *puVar8;
   puVar1 = (undefined8*)( (long)param_1 + param_4 );
   if (param_4 < 8) {
      lVar6 = 0;
      if (puVar1 <= param_1) {
         return;
      }

      do {
         *(undefined1*)( (long)param_1 + lVar6 ) = *(undefined1*)( (long)param_3 + lVar6 );
         lVar6 = lVar6 + 1;
      }
 while ( param_4 != lVar6 );
      return;
   }

   if (param_5 == 1) {
      uVar7 = (long)param_1 - (long)param_3;
      if (uVar7 < 8) {
         *(undefined1*)param_1 = *(undefined1*)param_3;
         for (int i = 0; i < 3; i++) {
            *(undefined1*)( (long)param_1 + ( i + 1 ) ) = *(undefined1*)( (long)param_3 + ( i + 1 ) );
         }

         uVar2 = *(uint*)( dec32table_0 + uVar7 * 4 );
         *(undefined4*)( (long)param_1 + 4 ) = *(undefined4*)( (long)param_3 + (ulong)uVar2 );
         puVar8 = (undefined8*)( (long)( (long)param_3 + (ulong)uVar2 ) - (long)*(int*)( dec64table_1 + uVar7 * 4 ) );
      }
 else {
         *param_1 = *param_3;
         puVar8 = param_3;
      }

      param_3 = puVar8 + 1;
      puVar5 = param_1 + 1;
      if (puVar1 <= param_2) {
         if ((long)param_1 - (long)puVar8 < 0x10) {
            do {
               uVar3 = *param_3;
               puVar8 = puVar5 + 1;
               param_3 = param_3 + 1;
               *puVar5 = uVar3;
               puVar5 = puVar8;
            }
 while ( puVar8 < puVar1 );
            return;
         }

         param_4 = param_4 + -8;
         goto LAB_00100180;
      }

      if (param_2 < puVar5) goto LAB_00100102;
      lVar6 = (long)param_2 - (long)puVar5;
      puVar4 = param_3;
      if (0xf < (long)param_1 - (long)puVar8) goto LAB_00100256;
      do {
         puVar8 = puVar5 + 1;
         *puVar5 = *puVar4;
         puVar4 = puVar4 + 1;
         puVar5 = puVar8;
      }
 while ( puVar8 < param_2 );
   }
 else {
      puVar5 = param_1;
      if (puVar1 <= param_2) {
         LAB_00100180:uVar3 = param_3[1];
         *puVar5 = *param_3;
         puVar5[1] = uVar3;
         if (param_4 < 0x11) {
            return;
         }

         puVar8 = puVar5 + 2;
         puVar5 = param_3 + 2;
         do {
            uVar3 = puVar5[1];
            puVar4 = puVar8 + 4;
            *puVar8 = *puVar5;
            puVar8[1] = uVar3;
            uVar3 = puVar5[3];
            puVar8[2] = puVar5[2];
            puVar8[3] = uVar3;
            puVar8 = puVar4;
            puVar5 = puVar5 + 4;
         }
 while ( puVar4 < puVar1 );
         return;
      }

      if (param_2 < param_1) goto LAB_00100102;
      lVar6 = (long)param_2 - (long)param_1;
      LAB_00100256:uVar3 = param_3[1];
      *puVar5 = *param_3;
      puVar5[1] = uVar3;
      if (0x10 < lVar6) {
         puVar8 = puVar5 + 2;
         puVar5 = param_3 + 2;
         do {
            uVar3 = puVar5[1];
            puVar4 = puVar8 + 4;
            *puVar8 = *puVar5;
            puVar8[1] = uVar3;
            uVar3 = puVar5[3];
            puVar8[2] = puVar5[2];
            puVar8[3] = uVar3;
            puVar8 = puVar4;
            puVar5 = puVar5 + 4;
         }
 while ( puVar4 < param_2 );
      }

   }

   param_3 = (undefined8*)( (long)param_3 + lVar6 );
   puVar5 = param_2;
   LAB_00100102:if (puVar1 <= puVar5) {
      return;
   }

   lVar6 = 0;
   do {
      *(undefined1*)( (long)puVar5 + lVar6 ) = *(undefined1*)( (long)param_3 + lVar6 );
      lVar6 = lVar6 + 1;
   }
 while ( (long)puVar1 - (long)puVar5 != lVar6 );
   return;
}
void ZSTD_safecopyDstBeforeSrc(undefined8 *param_1, undefined8 *param_2, long param_3) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   long lVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   puVar2 = (undefined8*)( (long)param_1 + param_3 );
   if (( param_3 < 8 ) || ( -8 < (long)param_1 - (long)param_2 )) {
      if (param_1 < puVar2) {
         lVar4 = 0;
         do {
            *(undefined1*)( (long)param_1 + lVar4 ) = *(undefined1*)( (long)param_2 + lVar4 );
            lVar4 = lVar4 + 1;
         }
 while ( param_3 != lVar4 );
         return;
      }

   }
 else {
      puVar1 = puVar2 + -4;
      if (( (long)param_1 - (long)param_2 < -0x10 ) && ( param_1 <= puVar1 )) {
         uVar3 = param_2[1];
         *param_1 = *param_2;
         param_1[1] = uVar3;
         if (0x10 < (long)puVar1 - (long)param_1) {
            puVar5 = param_2 + 2;
            puVar6 = param_1 + 2;
            do {
               uVar3 = puVar5[1];
               puVar7 = puVar6 + 4;
               *puVar6 = *puVar5;
               puVar6[1] = uVar3;
               uVar3 = puVar5[3];
               puVar6[2] = puVar5[2];
               puVar6[3] = uVar3;
               puVar5 = puVar5 + 4;
               puVar6 = puVar7;
            }
 while ( puVar7 < puVar1 );
         }

         param_2 = (undefined8*)( (long)param_2 + ( (long)puVar1 - (long)param_1 ) );
         param_1 = puVar1;
      }

      if (param_1 < puVar2) {
         lVar4 = 0;
         do {
            *(undefined1*)( (long)param_1 + lVar4 ) = *(undefined1*)( (long)param_2 + lVar4 );
            lVar4 = lVar4 + 1;
         }
 while ( lVar4 != (long)puVar2 - (long)param_1 );
      }

   }

   return;
}
ulong ZSTD_execSequenceEndSplitLitBuffer(ulong param_1, long param_2, undefined8 param_3, ulong *param_4, long param_5, long param_6, ulong param_7, size_t param_8, ulong param_9, long param_10, ulong param_11) {
   ulong uVar1;
   void *__dest;
   ulong uVar2;
   void *__src;
   long lVar3;
   void *pvVar4;
   size_t __n;
   uVar1 = param_7 + param_8;
   if (uVar1 <= param_2 - param_1) {
      uVar2 = *param_4;
      if (param_5 - uVar2 < param_7) {
         return 0xffffffffffffffec;
      }

      if (( uVar2 + param_7 <= param_1 ) || ( param_1 <= uVar2 )) {
         __dest = (void*)( param_1 + param_7 );
         ZSTD_safecopyDstBeforeSrc();
         *param_4 = uVar2 + param_7;
         lVar3 = (long)__dest - param_9;
         pvVar4 = __dest;
         if (( ulong )((long)__dest - param_6) < param_9) {
            if (( ulong )((long)__dest - param_10) < param_9) {
               return 0xffffffffffffffec;
            }

            __n = param_6 - ( (long)__dest - param_9 );
            __src = (void*)( param_11 - __n );
            if ((long)__src + param_8 <= param_11) {
               memmove(__dest, __src, param_8);
               return uVar1;
            }

            pvVar4 = (void*)( (long)__dest + __n );
            param_8 = param_8 - __n;
            memmove(__dest, __src, __n);
            lVar3 = param_6;
         }

         ZSTD_safecopy(pvVar4, param_3, lVar3, param_8, 1);
         return uVar1;
      }

   }

   return 0xffffffffffffffba;
}
ulong ZSTD_execSequenceEnd(long param_1, long param_2, long *param_3, long param_4, long param_5, long param_6, ulong param_7, size_t param_8, ulong param_9, ulong param_10) {
   void *__dest;
   ulong uVar1;
   void *__src;
   long lVar2;
   size_t __n;
   void *pvVar3;
   uVar1 = param_7 + param_8;
   if (( ulong )(param_2 - param_1) < uVar1) {
      return 0xffffffffffffffba;
   }

   lVar2 = *param_3;
   if (( ulong )(param_4 - lVar2) < param_7) {
      LAB_001005b0:uVar1 = 0xffffffffffffffec;
   }
 else {
      __dest = (void*)( param_1 + param_7 );
      ZSTD_safecopy();
      *param_3 = lVar2 + param_7;
      lVar2 = (long)__dest - param_9;
      pvVar3 = __dest;
      if (( ulong )((long)__dest - param_5) < param_9) {
         if (( ulong )((long)__dest - param_6) < param_9) goto LAB_001005b0;
         __n = param_5 - ( (long)__dest - param_9 );
         __src = (void*)( param_10 - __n );
         if ((long)__src + param_8 <= param_10) {
            memmove(__dest, __src, param_8);
            return uVar1;
         }

         pvVar3 = (void*)( (long)__dest + __n );
         param_8 = param_8 - __n;
         memmove(__dest, __src, __n);
         lVar2 = param_5;
      }

      ZSTD_safecopy(pvVar3, param_2 + -0x20, lVar2, param_8, 1);
   }

   return uVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ulong ZSTD_decodeLiteralsBlock(long param_1, uint *param_2, ulong param_3, long param_4, ulong param_5, undefined4 param_6) {
   ulong uVar1;
   byte bVar2;
   int iVar3;
   undefined8 uVar4;
   long lVar5;
   byte *pbVar6;
   uint uVar7;
   ulong uVar8;
   uint uVar9;
   ulong uVar10;
   char cVar11;
   uint uVar12;
   long lVar13;
   byte bVar14;
   ulong uVar15;
   int iVar16;
   if (param_3 < 2) {
      return 0xffffffffffffffec;
   }

   bVar2 = ( byte ) * param_2;
   uVar8 = 0x20000;
   bVar14 = bVar2 & 3;
   if (*(int*)( param_1 + 0x75e0 ) != 0) {
      uVar8 = ( ulong ) * (uint*)( param_1 + 0x74f8 );
   }

   if (bVar14 != 2) {
      if (bVar14 != 3) {
         if (bVar14 == 1) {
            bVar14 = bVar2 >> 2 & 3;
            if (bVar14 == 1) {
               if (param_3 == 2) {
                  return 0xffffffffffffffec;
               }

               lVar13 = 2;
               uVar10 = ( ulong )(ushort)(( ushort ) * param_2 >> 4);
            }
 else if (bVar14 == 3) {
               if (param_3 < 4) {
                  return 0xffffffffffffffec;
               }

               lVar13 = 3;
               uVar10 = ( ulong )(( uint ) * (byte*)( (long)param_2 + 2 ) * 0x10000 + ( uint )(ushort) * param_2 >> 4);
            }
 else {
               lVar13 = 1;
               uVar10 = ( ulong )(bVar2 >> 3);
            }

            if (( uVar10 != 0 ) && ( param_4 == 0 )) {
               return 0xffffffffffffffba;
            }

            if (uVar8 < uVar10) {
               return 0xffffffffffffffec;
            }

            if (param_5 <= uVar8) {
               uVar8 = param_5;
            }

            if (uVar10 <= uVar8) {
               pbVar6 = (byte*)( (long)param_2 + lVar13 );
               ZSTD_allocateLiteralsBuffer(param_1, param_4, param_5, uVar10, param_6, uVar8, 1);
               if (*(int*)( param_1 + 0x76a0 ) == 2) {
                  memset(*(void**)( param_1 + 0x7690 ), ( uint ) * pbVar6, uVar10 - 0x10000);
                  memset((void*)( param_1 + 0x76a4 ), ( uint ) * pbVar6, 0x10000);
               }
 else {
                  memset(*(void**)( param_1 + 0x7690 ), ( uint ) * pbVar6, uVar10);
               }

               *(ulong*)( param_1 + 0x75c8 ) = uVar10;
               *(undefined8*)( param_1 + 0x75a8 ) = *(undefined8*)( param_1 + 0x7690 );
               return lVar13 + 1;
            }

            return 0xffffffffffffffba;
         }

         bVar14 = bVar2 >> 2 & 3;
         if (bVar14 == 1) {
            lVar13 = 2;
            uVar10 = ( ulong )(ushort)(( ushort ) * param_2 >> 4);
         }
 else if (bVar14 == 3) {
            if (param_3 == 2) {
               return 0xffffffffffffffec;
            }

            lVar13 = 3;
            uVar10 = ( ulong )(( uint ) * (byte*)( (long)param_2 + 2 ) * 0x10000 + ( uint )(ushort) * param_2 >> 4);
         }
 else {
            uVar10 = ( ulong )(bVar2 >> 3);
            lVar13 = 1;
         }

         if (( uVar10 != 0 ) && ( param_4 == 0 )) {
            return 0xffffffffffffffba;
         }

         if (uVar8 < uVar10) {
            return 0xffffffffffffffec;
         }

         if (param_5 <= uVar8) {
            uVar8 = param_5;
         }

         if (uVar10 <= uVar8) {
            uVar15 = uVar10 + lVar13;
            ZSTD_allocateLiteralsBuffer(param_1, param_4, param_5, uVar10, param_6, uVar8, 1);
            if (uVar15 + 0x20 <= param_3) {
               *(ulong*)( param_1 + 0x75c8 ) = uVar10;
               *(byte**)( param_1 + 0x75a8 ) = (byte*)( lVar13 + (long)param_2 );
               *(byte**)( param_1 + 0x7698 ) = (byte*)( lVar13 + (long)param_2 ) + uVar10;
               *(undefined4*)( param_1 + 0x76a0 ) = 0;
               return uVar15;
            }

            if (param_3 < uVar15) {
               return 0xffffffffffffffec;
            }

            if (*(int*)( param_1 + 0x76a0 ) == 2) {
               memcpy(*(void**)( param_1 + 0x7690 ), (byte*)( (long)param_2 + lVar13 ), uVar10 - 0x10000);
               memcpy((void*)( param_1 + 0x76a4 ), (byte*)( (long)param_2 + ( uVar15 - 0x10000 ) ), 0x10000);
            }
 else {
               memcpy(*(void**)( param_1 + 0x7690 ), (byte*)( (long)param_2 + lVar13 ), uVar10);
            }

            *(ulong*)( param_1 + 0x75c8 ) = uVar10;
            *(undefined8*)( param_1 + 0x75a8 ) = *(undefined8*)( param_1 + 0x7690 );
            return uVar15;
         }

         return 0xffffffffffffffba;
      }

      if (*(int*)( param_1 + 30000 ) == 0) {
         return 0xffffffffffffffe2;
      }

   }

   if (4 < param_3) {
      uVar7 = *param_2;
      uVar12 = bVar2 >> 2 & 3;
      uVar9 = uVar7 >> 4;
      cVar11 = (char)uVar12;
      if (cVar11 == '\x02') {
         uVar10 = ( ulong )(uVar9 & 0x3fff);
         uVar15 = ( ulong )(uVar7 >> 0x12);
         uVar12 = 0;
         lVar13 = 4;
      }
 else if (cVar11 == '\x03') {
         uVar10 = ( ulong )(uVar9 & 0x3ffff);
         uVar12 = 0;
         uVar15 = ( ulong )(uVar7 >> 0x16) + (ulong)(byte)param_2[1] * 0x400;
         lVar13 = 5;
      }
 else {
         uVar12 = uVar12 ^ 1;
         lVar13 = 3;
         uVar10 = ( ulong )(uVar9 & 0x3ff);
         uVar15 = ( ulong )(uVar7 >> 0xe & 0x3ff);
      }

      if (( uVar10 != 0 ) && ( param_4 == 0 )) {
         return 0xffffffffffffffba;
      }

      iVar3 = *(int*)( param_1 + 0x75e4 );
      iVar16 = *(int*)( param_1 + 0x7614 );
      if (uVar10 <= uVar8) {
         if (( ( uVar12 & 1 ) == 0 ) && ( uVar10 < 6 )) {
            return 0xffffffffffffffe8;
         }

         uVar1 = lVar13 + uVar15;
         if (uVar1 <= param_3) {
            if (param_5 <= uVar8) {
               uVar8 = param_5;
            }

            if (uVar8 < uVar10) {
               return 0xffffffffffffffba;
            }

            ZSTD_allocateLiteralsBuffer(param_1, param_4, param_5, uVar10, param_6, uVar8, 0, iVar16);
            if (( *(int*)( param_1 + 0x75fc ) != 0 ) && ( 0x300 < uVar10 )) {
               lVar5 = *(long*)( param_1 + 0x18 ) + 0x40;
               do {
                  lVar5 = lVar5 + 0x80;
               }
 while ( lVar5 != *(long*)( param_1 + 0x18 ) + 0x4040 );
            }

            uVar4 = *(undefined8*)( param_1 + 0x7690 );
            uVar7 = ( uint )(iVar16 != 0) << 4 | ( uint )(iVar3 != 0);
            pbVar6 = (byte*)( (long)param_2 + lVar13 );
            if (bVar14 == 3) {
               if (uVar12 == 0) {
                  uVar8 = HUF_decompress4X_usingDTable(uVar4, uVar10, pbVar6, uVar15, *(undefined8*)( param_1 + 0x18 ));
               }
 else {
                  uVar8 = HUF_decompress1X_usingDTable();
               }

            }
 else if (uVar12 == 0) {
               uVar8 = HUF_decompress4X_hufOnly_wksp(param_1 + 0x2838, uVar4, uVar10, pbVar6, uVar15, param_1 + 0x6abc, 0xa00, uVar7);
            }
 else {
               uVar8 = HUF_decompress1X1_DCtx_wksp(param_1 + 0x2838, uVar4, uVar10, pbVar6, uVar15, param_1 + 0x6abc, 0xa00, uVar7);
            }

            if (*(int*)( param_1 + 0x76a0 ) == 2) {
               memcpy((void*)( param_1 + 0x76a4 ), (void*)( *(long*)( param_1 + 0x7698 ) + -0x10000 ), 0x10000);
               memmove((void*)( (long)*(void**)( param_1 + 0x7690 ) + 0xffe0 ), *(void**)( param_1 + 0x7690 ), uVar10 - 0x10000);
               lVar13 = *(long*)( param_1 + 0x7698 ) + _UNK_0010a858;
               *(long*)( param_1 + 0x7690 ) = *(long*)( param_1 + 0x7690 ) + __LC0;
               *(long*)( param_1 + 0x7698 ) = lVar13;
            }

            if (uVar8 < 0xffffffffffffff89) {
               *(ulong*)( param_1 + 0x75c8 ) = uVar10;
               *(undefined4*)( param_1 + 30000 ) = 1;
               *(undefined8*)( param_1 + 0x75a8 ) = *(undefined8*)( param_1 + 0x7690 );
               if (bVar14 == 2) {
                  *(long*)( param_1 + 0x18 ) = param_1 + 0x2838;
                  return uVar1;
               }

               return uVar1;
            }

         }

      }

   }

   return 0xffffffffffffffec;
}
void ZSTD_buildFSETable_body_default_isra_0(ulong *param_1, short *param_2, uint param_3, long param_4, long param_5, uint param_6, long param_7) {
   uint uVar1;
   ushort *puVar2;
   short *psVar3;
   short sVar4;
   ushort uVar5;
   byte bVar6;
   ulong *puVar7;
   ulong *puVar8;
   long *plVar9;
   long *plVar10;
   byte bVar11;
   uint uVar12;
   ulong uVar13;
   long *plVar14;
   ulong uVar15;
   uint uVar16;
   long lVar17;
   ulong uVar18;
   int iVar19;
   ulong uVar20;
   ulong uVar21;
   byte *pbVar22;
   byte *pbVar23;
   long lVar24;
   uint uVar25;
   bool bVar26;
   uVar18 = (ulong)param_3;
   bVar6 = (byte)param_6;
   uVar25 = 1 << ( bVar6 & 0x1f );
   uVar1 = uVar25 - 1;
   uVar13 = (ulong)uVar1;
   uVar20 = (ulong)param_6 << 0x20 | 1;
   if (param_3 == 0xffffffff) {
      *param_1 = uVar20;
      uVar12 = ( uVar25 >> 3 ) + 3 + ( uVar25 >> 1 );
   }
 else {
      uVar15 = 0;
      bVar26 = false;
      uVar21 = 1;
      while (true) {
         uVar12 = (uint)uVar13;
         sVar4 = param_2[uVar15];
         if (sVar4 == -1) {
            uVar12 = uVar12 - 1;
            *(int*)( (long)param_1 + uVar13 * 8 + 0xc ) = (int)uVar15;
            *(undefined2*)( param_7 + uVar15 * 2 ) = 1;
            uVar13 = (ulong)uVar12;
         }
 else {
            *(short*)( param_7 + uVar15 * 2 ) = sVar4;
            bVar26 = true;
            if ((short)( 1 << ( bVar6 - 1 & 0x1f ) ) <= sVar4) {
               uVar21 = 0;
            }

         }

         if (uVar18 == uVar15) break;
         uVar15 = uVar15 + 1;
      }
;
      if (bVar26) {
         uVar20 = (ulong)param_6 << 0x20 | uVar21;
      }

      *param_1 = uVar20;
      if (uVar1 != uVar12) {
         uVar16 = 0;
         uVar13 = 0;
         do {
            sVar4 = param_2[uVar13];
            if (0 < sVar4) {
               iVar19 = 0;
               do {
                  *(int*)( (long)param_1 + (ulong)uVar16 * 8 + 0xc ) = (int)uVar13;
                  do {
                     uVar16 = uVar16 + ( uVar25 >> 1 ) + 3 + ( uVar25 >> 3 ) & uVar1;
                  }
 while ( uVar12 < uVar16 );
                  iVar19 = iVar19 + 1;
               }
 while ( sVar4 != iVar19 );
            }

            bVar26 = uVar18 != uVar13;
            uVar13 = uVar13 + 1;
         }
 while ( bVar26 );
         if (uVar25 == 0) {
            return;
         }

         goto LAB_00100d95;
      }

      psVar3 = param_2 + uVar18 + 1;
      uVar12 = ( uVar25 >> 1 ) + 3 + ( uVar25 >> 3 );
      lVar17 = 0;
      lVar24 = 0;
      do {
         sVar4 = *param_2;
         *(long*)( param_7 + 0x6a + lVar24 ) = lVar17;
         if (8 < sVar4) {
            plVar9 = (long*)( param_7 + 0x72 + lVar24 );
            plVar14 = (long*)( param_7 + 0x7a + lVar24 + ( ulong )((int)sVar4 - 9U & 0xfffffff8) );
            if (( (int)plVar14 - (int)plVar9 & 8U ) != 0) {
               *plVar9 = lVar17;
               plVar9 = plVar9 + 1;
               if (plVar14 == plVar9) goto LAB_00100e98;
            }

            do {
               *plVar9 = lVar17;
               plVar10 = plVar9 + 2;
               plVar9[1] = lVar17;
               plVar9 = plVar10;
            }
 while ( plVar14 != plVar10 );
         }

         LAB_00100e98:param_2 = param_2 + 1;
         lVar24 = lVar24 + sVar4;
         lVar17 = lVar17 + 0x101010101010101;
      }
 while ( psVar3 != param_2 );
   }

   uVar13 = (ulong)uVar1;
   if (uVar25 == 0) {
      return;
   }

   uVar20 = 0;
   pbVar22 = (byte*)( param_7 + 0x6a );
   do {
      uVar18 = uVar20 + uVar12;
      pbVar23 = pbVar22 + 2;
      *(uint*)( (long)param_1 + ( uVar20 & uVar13 ) * 8 + 0xc ) = ( uint ) * pbVar22;
      uVar20 = uVar18 + uVar12 & uVar13;
      *(uint*)( (long)param_1 + ( uVar18 & uVar13 ) * 8 + 0xc ) = (uint)pbVar22[1];
      pbVar22 = pbVar23;
   }
 while ( (byte*)( param_7 + 0x6c + ( (ulong)uVar25 - 1 & 0xfffffffffffffffe ) ) != pbVar23 );
   LAB_00100d95:puVar7 = param_1 + 1;
   do {
      uVar13 = ( ulong ) * (uint*)( (long)puVar7 + 4 );
      puVar2 = (ushort*)( param_7 + uVar13 * 2 );
      uVar5 = *puVar2;
      *puVar2 = uVar5 + 1;
      iVar19 = 0x1f;
      if (uVar5 != 0) {
         for (; uVar5 >> iVar19 == 0; iVar19 = iVar19 + -1) {}
      }

      puVar8 = puVar7 + 1;
      bVar11 = ( bVar6 - 0x1f ) + ( (byte)iVar19 ^ 0x1f );
      *(byte*)( (long)puVar7 + 3 ) = bVar11;
      *(ushort*)puVar7 = ( uVar5 << ( bVar11 & 0x1f ) ) - (short)uVar25;
      *(undefined1*)( (long)puVar7 + 2 ) = *(undefined1*)( param_5 + uVar13 );
      *(undefined4*)( (long)puVar7 + 4 ) = *(undefined4*)( param_4 + uVar13 * 4 );
      puVar7 = puVar8;
   }
 while ( puVar8 != param_1 + (ulong)uVar1 + 2 );
   return;
}
void ZSTD_buildFSETable_body_bmi2_isra_0(ulong *param_1, short *param_2, uint param_3, long param_4, long param_5, uint param_6, long param_7) {
   uint uVar1;
   ushort *puVar2;
   short *psVar3;
   short sVar4;
   ushort uVar5;
   ulong *puVar6;
   ulong *puVar7;
   long *plVar8;
   long *plVar9;
   uint uVar10;
   ulong uVar11;
   long *plVar12;
   ulong uVar13;
   uint uVar14;
   long lVar15;
   ulong uVar16;
   int iVar17;
   ulong uVar18;
   ulong uVar19;
   byte *pbVar20;
   byte *pbVar21;
   long lVar22;
   uint uVar23;
   bool bVar24;
   uVar16 = (ulong)param_3;
   uVar23 = 1 << ( param_6 & 0x1f );
   uVar1 = uVar23 - 1;
   uVar11 = (ulong)uVar1;
   uVar18 = (ulong)param_6 << 0x20 | 1;
   if (param_3 == 0xffffffff) {
      *param_1 = uVar18;
      uVar10 = ( uVar23 >> 3 ) + 3 + ( uVar23 >> 1 );
   }
 else {
      uVar13 = 0;
      bVar24 = false;
      uVar19 = 1;
      while (true) {
         uVar10 = (uint)uVar11;
         sVar4 = param_2[uVar13];
         if (sVar4 == -1) {
            uVar10 = uVar10 - 1;
            *(int*)( (long)param_1 + uVar11 * 8 + 0xc ) = (int)uVar13;
            *(undefined2*)( param_7 + uVar13 * 2 ) = 1;
            uVar11 = (ulong)uVar10;
         }
 else {
            *(short*)( param_7 + uVar13 * 2 ) = sVar4;
            bVar24 = true;
            if ((short)( 1 << ( param_6 - 1 & 0x1f ) ) <= sVar4) {
               uVar19 = 0;
            }

         }

         if (uVar16 == uVar13) break;
         uVar13 = uVar13 + 1;
      }
;
      if (bVar24) {
         uVar18 = (ulong)param_6 << 0x20 | uVar19;
      }

      *param_1 = uVar18;
      if (uVar1 != uVar10) {
         uVar14 = 0;
         uVar11 = 0;
         do {
            sVar4 = param_2[uVar11];
            if (0 < sVar4) {
               iVar17 = 0;
               do {
                  *(int*)( (long)param_1 + (ulong)uVar14 * 8 + 0xc ) = (int)uVar11;
                  do {
                     uVar14 = uVar14 + ( uVar23 >> 1 ) + 3 + ( uVar23 >> 3 ) & uVar1;
                  }
 while ( uVar10 < uVar14 );
                  iVar17 = iVar17 + 1;
               }
 while ( sVar4 != iVar17 );
            }

            bVar24 = uVar16 != uVar11;
            uVar11 = uVar11 + 1;
         }
 while ( bVar24 );
         if (uVar23 == 0) {
            return;
         }

         goto LAB_00101095;
      }

      psVar3 = param_2 + uVar16 + 1;
      uVar10 = ( uVar23 >> 1 ) + 3 + ( uVar23 >> 3 );
      lVar15 = 0;
      lVar22 = 0;
      do {
         sVar4 = *param_2;
         *(long*)( param_7 + 0x6a + lVar22 ) = lVar15;
         if (8 < sVar4) {
            plVar8 = (long*)( param_7 + 0x72 + lVar22 );
            plVar12 = (long*)( param_7 + 0x7a + lVar22 + ( ulong )((int)sVar4 - 9U & 0xfffffff8) );
            if (( (int)plVar12 - (int)plVar8 & 8U ) != 0) {
               *plVar8 = lVar15;
               plVar8 = plVar8 + 1;
               if (plVar12 == plVar8) goto LAB_001011a0;
            }

            do {
               *plVar8 = lVar15;
               plVar9 = plVar8 + 2;
               plVar8[1] = lVar15;
               plVar8 = plVar9;
            }
 while ( plVar12 != plVar9 );
         }

         LAB_001011a0:param_2 = param_2 + 1;
         lVar22 = lVar22 + sVar4;
         lVar15 = lVar15 + 0x101010101010101;
      }
 while ( psVar3 != param_2 );
   }

   uVar11 = (ulong)uVar1;
   if (uVar23 == 0) {
      return;
   }

   uVar18 = 0;
   pbVar20 = (byte*)( param_7 + 0x6a );
   do {
      uVar16 = uVar18 + uVar10;
      pbVar21 = pbVar20 + 2;
      *(uint*)( (long)param_1 + ( uVar18 & uVar11 ) * 8 + 0xc ) = ( uint ) * pbVar20;
      uVar18 = uVar16 + uVar10 & uVar11;
      *(uint*)( (long)param_1 + ( uVar16 & uVar11 ) * 8 + 0xc ) = (uint)pbVar20[1];
      pbVar20 = pbVar21;
   }
 while ( (byte*)( param_7 + 0x6c + ( (ulong)uVar23 - 1 & 0xfffffffffffffffe ) ) != pbVar21 );
   LAB_00101095:puVar6 = param_1 + 1;
   do {
      uVar11 = ( ulong ) * (uint*)( (long)puVar6 + 4 );
      puVar7 = puVar6 + 1;
      puVar2 = (ushort*)( param_7 + uVar11 * 2 );
      uVar5 = *puVar2;
      *puVar2 = uVar5 + 1;
      uVar10 = ( ( param_6 & 0xff ) - 0x1f ) + LZCOUNT((uint)uVar5);
      *(char*)( (long)puVar6 + 3 ) = (char)uVar10;
      *(ushort*)puVar6 = ( uVar5 << ( uVar10 & 0x1f ) ) - (short)uVar23;
      *(undefined1*)( (long)puVar6 + 2 ) = *(undefined1*)( param_5 + uVar11 );
      *(undefined4*)( (long)puVar6 + 4 ) = *(undefined4*)( param_4 + uVar11 * 4 );
      puVar6 = puVar7;
   }
 while ( puVar7 != param_1 + (ulong)uVar1 + 2 );
   return;
}
ulong ZSTD_buildSeqTable_constprop_0(undefined8 *param_1, undefined8 *param_2, int param_3, uint param_4, uint param_5, byte *param_6, long param_7, long param_8, long param_9, undefined8 param_10, int param_11, int param_12, int param_13, undefined8 param_14, int param_15) {
   byte bVar1;
   undefined1 uVar2;
   undefined4 uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   uint local_cc[4];
   uint local_bc;
   undefined1 local_b8[120];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_cc[0] = param_4;
   if (param_3 == 2) {
      uVar4 = FSE_readNCount(local_b8, local_cc, &local_bc, param_6, param_7);
      if (( uVar4 < 0xffffffffffffff89 ) && ( local_bc <= param_5 )) {
         if (param_15 == 0) {
            ZSTD_buildFSETable_body_default_isra_0(param_1, local_b8, local_cc[0], param_8, param_9, local_bc, param_14);
         }
 else {
            ZSTD_buildFSETable_body_bmi2_isra_0(param_1, local_b8, local_cc[0], param_8, param_9, local_bc, param_14);
         }

         *param_2 = param_1;
      }
 else {
         uVar4 = 0xffffffffffffffec;
      }

   }
 else if (param_3 == 3) {
      uVar4 = 0xffffffffffffffec;
      if (param_11 != 0) {
         if (( param_12 != 0 ) && ( 0x18 < param_13 )) {
            uVar4 = 0;
            do {
               uVar4 = uVar4 + 0x40;
            }
 while ( uVar4 < ( ulong )((long)( ( 1 << ( (byte)param_5 & 0x1f ) ) + 1 ) << 3) );
         }

         uVar4 = 0;
      }

   }
 else if (param_3 == 1) {
      uVar4 = 0xffffffffffffffb8;
      if (param_7 != 0) {
         bVar1 = *param_6;
         uVar4 = 0xffffffffffffffec;
         if (bVar1 <= param_4) {
            uVar3 = *(undefined4*)( param_8 + (ulong)bVar1 * 4 );
            uVar2 = *(undefined1*)( param_9 + (ulong)bVar1 );
            *param_1 = 0;
            *(undefined1*)( (long)param_1 + 0xb ) = 0;
            *(undefined4*)( (long)param_1 + 0xc ) = uVar3;
            uVar4 = 1;
            *(undefined2*)( param_1 + 1 ) = 0;
            *(undefined1*)( (long)param_1 + 10 ) = uVar2;
            *param_2 = param_1;
         }

      }

   }
 else {
      *param_2 = param_10;
      uVar4 = 0;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ZSTD_initFseState(ulong *param_1, ulong *param_2, long param_3) {
   int iVar1;
   ulong *puVar2;
   ulong uVar3;
   ulong *puVar4;
   uint uVar5;
   uint uVar6;
   ulong *puVar7;
   iVar1 = *(int*)( param_3 + 4 );
   uVar5 = (int)param_2[1] + iVar1;
   *(uint*)( param_2 + 1 ) = uVar5;
   *param_1 = *param_2 >> ( -(char)uVar5 & 0x3fU ) & ~(-1L << ((byte)iVar1 & 0x3f));
   if (0x40 < uVar5) {
      param_2[2] = ( ulong ) & zeroFilled_2;
      param_1[1] = param_3 + 8;
      return;
   }

   puVar4 = (ulong*)param_2[2];
   if (puVar4 < (ulong*)param_2[4]) {
      puVar2 = (ulong*)param_2[3];
      if (puVar4 != puVar2) {
         uVar6 = uVar5 >> 3;
         puVar7 = (ulong*)( (long)puVar4 - (ulong)uVar6 );
         if (puVar7 < puVar2) {
            uVar6 = (int)puVar4 - (int)puVar2;
            puVar7 = (ulong*)( (long)puVar4 - (ulong)uVar6 );
         }

         uVar3 = *puVar7;
         param_2[2] = (ulong)puVar7;
         *(uint*)( param_2 + 1 ) = uVar5 + uVar6 * -8;
         *param_2 = uVar3;
      }

      param_1[1] = param_3 + 8;
      return;
   }

   *(uint*)( param_2 + 1 ) = uVar5 & 7;
   puVar4 = (ulong*)( (long)puVar4 - ( ulong )(uVar5 >> 3) );
   param_2[2] = (ulong)puVar4;
   *param_2 = *puVar4;
   param_1[1] = param_3 + 8;
   return;
}
/* WARNING: Type propagation algorithm not settling */ulong ZSTD_decompressSequencesLong_bmi2_constprop_0(undefined8 *param_1, undefined8 *param_2, long param_3, ulong *param_4, ulong param_5, uint param_6) {
   ulong *puVar1;
   ushort *puVar2;
   ushort *puVar3;
   ushort *puVar4;
   byte bVar5;
   byte bVar6;
   byte bVar7;
   byte bVar8;
   byte bVar9;
   byte bVar10;
   int iVar11;
   undefined8 *puVar12;
   long lVar13;
   undefined1 *puVar14;
   sbyte sVar15;
   undefined8 uVar16;
   bool bVar17;
   bool bVar18;
   bool bVar19;
   bool bVar20;
   ulong uVar21;
   ulong uVar22;
   ulong uVar23;
   ulong uVar24;
   uint uVar25;
   void *pvVar26;
   ulong uVar27;
   uint uVar28;
   ulong uVar29;
   size_t sVar30;
   undefined8 *puVar31;
   ulong uVar32;
   int iVar33;
   int iVar34;
   int iVar35;
   undefined8 *puVar36;
   undefined8 *puVar37;
   uint uVar38;
   ulong uVar39;
   ulong uVar40;
   ulong uVar41;
   ulong uVar42;
   ulong *puVar43;
   undefined1 *puVar44;
   undefined8 *puVar45;
   undefined8 *puVar46;
   ulong *puVar47;
   long lVar48;
   uint uVar49;
   undefined8 *puVar50;
   undefined8 *puVar51;
   long in_FS_OFFSET;
   ulong uVar52;
   ulong local_308;
   ulong *local_300;
   undefined8 *local_2b0;
   undefined8 *local_2a8;
   long local_2a0;
   long local_298;
   long local_290;
   undefined8 *local_240;
   ulong local_238;
   ulong uStack_230;
   ulong local_228;
   ulong local_218;
   ulong uStack_210;
   ulong local_208;
   ulong local_1f8;
   ulong uStack_1f0;
   ulong local_1e8;
   ulong local_1d8;
   ulong uStack_1d0;
   ulong local_1c8;
   ulong local_1b8;
   ulong uStack_1b0;
   ulong local_1a8;
   ulong local_198;
   ulong uStack_190;
   ulong local_188;
   ulong local_178;
   uint local_170[2];
   ulong *local_168;
   ulong *local_160;
   ulong *local_158;
   long local_150;
   long local_148;
   long local_140;
   long local_138;
   long local_130;
   long local_128;
   ulong local_120[28];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar11 = *(int*)( param_1 + 0xed4 );
   if (iVar11 == 1) {
      local_2a8 = (undefined8*)param_1[0xed2];
   }
 else {
      local_2a8 = (undefined8*)( (long)param_2 + param_3 );
      if (param_3 < 1) {
         local_2a8 = param_2;
      }

   }

   puVar50 = (undefined8*)param_1[0xeb5];
   local_2b0 = (undefined8*)param_1[0xed3];
   puVar12 = (undefined8*)param_1[0xe99];
   lVar13 = param_1[0xe9a];
   puVar14 = (undefined1*)param_1[0xe9b];
   puVar51 = param_2;
   local_240 = puVar50;
   if (param_6 != 0) {
      *(undefined4*)( (long)param_1 + 0x7534 ) = 1;
      local_120[0] = ( ulong ) * (uint*)( (long)param_1 + 0x683c );
      local_120[1] = ( ulong ) * (uint*)( param_1 + 0xd08 );
      local_120[2] = ( ulong ) * (uint*)( (long)param_1 + 0x6844 );
      if (param_5 != 0) {
         puVar1 = param_4 + 1;
         bVar5 = *(byte*)( (long)param_4 + ( param_5 - 1 ) );
         local_160 = param_4;
         local_158 = puVar1;
         if (param_5 < 8) {
            local_178 = ( ulong )(byte) * param_4;
            switch (param_5) {
               case 7:
          local_178 = local_178 + ((ulong)*(byte *)((long)param_4 + 6) << 0x30);
               case 6:
          local_178 = local_178 + ((ulong)*(byte *)((long)param_4 + 5) << 0x28);
               case 5:
          local_178 = local_178 + ((ulong)*(byte *)((long)param_4 + 4) << 0x20);
               case 4:
          local_178 = local_178 + (ulong)*(byte *)((long)param_4 + 3) * 0x1000000;
               case 3:
          local_178 = local_178 + (ulong)*(byte *)((long)param_4 + 2) * 0x10000;
               case 2:
          local_178 = (ulong)*(byte *)((long)param_4 + 1) * 0x100 + local_178;
            }

            local_168 = param_4;
            if (bVar5 != 0) {
               local_170[0] = LZCOUNT((uint)bVar5) + -0x17 + ( 8 - (int)param_5 ) * 8;
               goto LAB_001017d0;
            }

         }
 else {
            local_168 = (ulong*)( (long)param_4 + ( param_5 - 8 ) );
            local_178 = *local_168;
            if (( bVar5 != 0 ) && ( local_170[0] = param_5 < 0xffffffffffffff89 )) {
               LAB_001017d0:uVar25 = 8;
               if ((int)param_6 < 9) {
                  uVar25 = param_6;
               }

               ZSTD_initFseState(&local_150, &local_178, *param_1);
               ZSTD_initFseState(&local_140, &local_178, param_1[2]);
               ZSTD_initFseState(&local_130, &local_178, param_1[1]);
               if ((int)param_6 < 1) {
                  uVar49 = 0;
               }
 else {
                  bVar17 = false;
                  puVar47 = local_120;
                  uVar49 = 0;
                  local_300 = local_168;
                  bVar18 = false;
                  local_2a0 = local_150;
                  bVar19 = false;
                  bVar20 = false;
                  local_298 = local_130;
                  local_290 = local_140;
                  local_308 = local_178;
                  uVar39 = (ulong)local_170[0];
                  do {
                     puVar47 = puVar47 + 3;
                     puVar2 = (ushort*)( local_148 + local_2a0 * 8 );
                     bVar5 = (byte)puVar2[1];
                     uVar38 = *(uint*)( puVar2 + 2 );
                     uVar32 = (ulong)uVar38;
                     puVar3 = (ushort*)( local_128 + local_298 * 8 );
                     uVar40 = ( ulong ) * (uint*)( puVar3 + 2 );
                     puVar4 = (ushort*)( local_138 + local_290 * 8 );
                     bVar6 = (byte)puVar3[1];
                     bVar10 = (byte)puVar4[1];
                     bVar7 = *(byte*)( (long)puVar2 + 3 );
                     bVar8 = *(byte*)( (long)puVar3 + 3 );
                     bVar9 = *(byte*)( (long)puVar4 + 3 );
                     if (bVar10 < 2) {
                        if (bVar10 == 1) {
                           uVar41 = uVar39 & 0x3f;
                           uVar39 = ( ulong )((int)uVar39 + 1);
                           lVar48 = ( ulong )(*(uint*)( puVar4 + 2 ) + ( uint )(uVar38 == 0)) - ( (long)( local_308 << uVar41 ) >> 0x3f );
                           if (lVar48 == 3) {
                              uVar41 = ( local_120[0] - 1 ) - ( ulong )(local_120[0] - 1 == 0);
                              LAB_001028d6:local_120[2] = local_120[1];
                           }
 else {
                              uVar41 = local_120[lVar48] - ( ulong )(local_120[lVar48] == 0);
                              if (lVar48 != 1) goto LAB_001028d6;
                           }

                           bVar17 = true;
                        }
 else {
                           uVar41 = local_120[uVar38 == 0];
                           local_120[0] = *(ulong*)( local_170 + ( 0xb - ( ulong )(uVar38 == 0) ) * 2 );
                        }

                     }
 else {
                        uVar41 = uVar39 & 0x3f;
                        uVar39 = ( ulong )((int)uVar39 + (uint)bVar10);
                        local_120[2] = local_120[1];
                        bVar17 = true;
                        uVar41 = ( ulong ) * (uint*)( puVar4 + 2 ) + ( ( local_308 << uVar41 ) >> ( ( ulong ) - (uint)bVar10 & 0x3f ) );
                     }

                     local_120[1] = local_120[0];
                     local_120[0] = uVar41;
                     if (bVar6 != 0) {
                        uVar29 = uVar39 & 0x3f;
                        bVar17 = true;
                        uVar39 = ( ulong )((int)uVar39 + (uint)bVar6);
                        uVar40 = uVar40 + ( ( local_308 << uVar29 ) >> ( ( ulong ) - (uint)bVar6 & 0x3f ) );
                     }

                     if (0x1e < ( byte )(bVar5 + bVar6 + bVar10)) {
                        uVar38 = (uint)uVar39;
                        if (uVar38 < 0x41) {
                           if (local_300 < puVar1) {
                              if (param_4 != local_300) {
                                 iVar35 = (int)( uVar39 >> 3 );
                                 puVar43 = (ulong*)( (long)local_300 - ( uVar39 >> 3 ) );
                                 if (puVar43 < param_4) {
                                    iVar35 = (int)( (long)local_300 - (long)param_4 );
                                    puVar43 = (ulong*)( (long)local_300 - ( (long)local_300 - (long)param_4 & 0xffffffffU ) );
                                 }

                                 local_308 = *puVar43;
                                 bVar17 = true;
                                 bVar18 = true;
                                 bVar19 = true;
                                 uVar39 = ( ulong )(uVar38 + iVar35 * -8);
                                 local_300 = puVar43;
                              }

                           }
 else {
                              bVar17 = true;
                              bVar18 = true;
                              local_300 = (ulong*)( (long)local_300 - ( uVar39 >> 3 ) );
                              bVar19 = true;
                              local_308 = *local_300;
                              uVar39 = ( ulong )(uVar38 & 7);
                           }

                        }
 else {
                           bVar18 = true;
                           local_300 = &zeroFilled_2;
                        }

                     }

                     if (bVar5 != 0) {
                        uVar29 = uVar39 & 0x3f;
                        bVar17 = true;
                        uVar39 = ( ulong )((int)uVar39 + (uint)bVar5);
                        uVar32 = uVar32 + ( ( local_308 << uVar29 ) >> ( ( ulong ) - (uint)bVar5 & 0x3f ) );
                     }

                     iVar35 = (int)param_4;
                     if (uVar49 != param_6 - 1) {
                        iVar33 = (uint)bVar7 + (int)uVar39;
                        iVar34 = iVar33 + (uint)bVar8;
                        sVar15 = ( bVar7 < 0x41 ) * ( '@' - bVar7 );
                        local_2a0 = ( ( ( local_308 >> ( ( ulong )(uint) - iVar33 & 0x3f ) ) << sVar15 ) >> sVar15 ) + ( ulong ) * puVar2;
                        uVar38 = (uint)bVar9 + iVar34;
                        uVar39 = (ulong)uVar38;
                        sVar15 = ( bVar8 < 0x41 ) * ( '@' - bVar8 );
                        local_298 = ( ( ( local_308 >> ( ( ulong )(uint) - iVar34 & 0x3f ) ) << sVar15 ) >> sVar15 ) + ( ulong ) * puVar3;
                        sVar15 = ( bVar9 < 0x41 ) * ( '@' - bVar9 );
                        local_290 = ( ( ( local_308 >> ( ( ulong ) - uVar38 & 0x3f ) ) << sVar15 ) >> sVar15 ) + ( ulong ) * puVar4;
                        if (uVar38 < 0x41) {
                           if (local_300 < puVar1) {
                              if (param_4 == local_300) {
                                 bVar20 = true;
                                 bVar17 = true;
                                 goto LAB_00101a83;
                              }

                              uVar28 = uVar38 >> 3;
                              puVar43 = (ulong*)( (long)local_300 - (ulong)uVar28 );
                              if ((ulong*)( (long)local_300 - (ulong)uVar28 ) < param_4) {
                                 uVar28 = (int)local_300 - iVar35;
                                 puVar43 = (ulong*)( (long)local_300 - (ulong)uVar28 );
                              }

                              local_300 = puVar43;
                              uVar28 = uVar38 + uVar28 * -8;
                           }
 else {
                              uVar28 = uVar38 & 7;
                              local_300 = (ulong*)( (long)local_300 - ( ulong )(uVar38 >> 3) );
                           }

                           uVar39 = (ulong)uVar28;
                           local_308 = *local_300;
                           bVar18 = true;
                           bVar17 = true;
                           bVar19 = true;
                           bVar20 = true;
                        }
 else {
                           bVar18 = true;
                           bVar17 = true;
                           local_300 = &zeroFilled_2;
                           bVar20 = true;
                        }

                     }

                     LAB_00101a83:uVar49 = uVar49 + 1;
                     *puVar47 = uVar32;
                     puVar47[1] = uVar40;
                     puVar47[2] = uVar41;
                  }
 while ( (int)uVar49 < (int)uVar25 );
                  if (bVar18) {
                     local_168 = local_300;
                  }

                  if (bVar17) {
                     local_170[0] = (uint)uVar39;
                  }

                  if (bVar19) {
                     local_178 = local_308;
                  }

                  if (bVar20) {
                     local_140 = local_290;
                     local_130 = local_298;
                     local_150 = local_2a0;
                  }

                  puVar46 = param_2;
                  uVar38 = uVar25;
                  uVar49 = uVar25;
                  if ((int)uVar25 < (int)param_6) {
                     do {
                        puVar2 = (ushort*)( local_148 + local_150 * 8 );
                        bVar5 = (byte)puVar2[1];
                        puVar3 = (ushort*)( local_128 + local_130 * 8 );
                        bVar6 = (byte)puVar3[1];
                        puVar4 = (ushort*)( local_138 + local_140 * 8 );
                        uVar39 = ( ulong ) * (uint*)( puVar3 + 2 );
                        bVar10 = *(byte*)( (long)puVar3 + 3 );
                        uVar49 = *(uint*)( puVar2 + 2 );
                        local_300 = (ulong*)(ulong)uVar49;
                        bVar7 = *(byte*)( (long)puVar2 + 3 );
                        bVar8 = (byte)puVar4[1];
                        bVar9 = *(byte*)( (long)puVar4 + 3 );
                        if (bVar8 < 2) {
                           if (bVar8 == 1) {
                              uVar40 = (ulong)local_170[0];
                              local_170[0] = local_170[0] + 1;
                              lVar48 = ( ulong )(*(uint*)( puVar4 + 2 ) + ( uint )(uVar49 == 0)) - ( (long)( local_178 << ( uVar40 & 0x3f ) ) >> 0x3f );
                              if (lVar48 == 3) {
                                 uVar40 = ( local_120[0] - 1 ) - ( ulong )(local_120[0] - 1 == 0);
                              }
 else {
                                 uVar40 = local_120[lVar48] - ( ulong )(local_120[lVar48] == 0);
                                 if (lVar48 == 1) goto LAB_00101e7d;
                              }

                              local_120[2] = local_120[1];
                           }
 else {
                              uVar40 = local_120[uVar49 == 0];
                              local_120[0] = *(ulong*)( local_170 + ( 0xb - ( ulong )(uVar49 == 0) ) * 2 );
                           }

                        }
 else {
                           uVar40 = (ulong)(byte)local_170[0];
                           local_170[0] = bVar8 + local_170[0];
                           uVar40 = ( ulong ) * (uint*)( puVar4 + 2 ) + ( ( local_178 << ( uVar40 & 0x3f ) ) >> ( ( ulong ) - (uint)bVar8 & 0x3f ) );
                           local_120[2] = local_120[1];
                        }

                        LAB_00101e7d:local_120[1] = local_120[0];
                        local_120[0] = uVar40;
                        if (bVar6 != 0) {
                           uVar32 = (ulong)local_170[0];
                           local_170[0] = bVar6 + local_170[0];
                           uVar39 = uVar39 + ( ( local_178 << ( uVar32 & 0x3f ) ) >> ( ( ulong ) - (uint)bVar6 & 0x3f ) );
                        }

                        puVar47 = local_168;
                        if (0x1e < ( byte )(bVar5 + bVar6 + bVar8)) {
                           if (local_170[0] < 0x41) {
                              if (local_168 < puVar1) {
                                 if (param_4 != local_168) {
                                    uVar49 = local_170[0] >> 3;
                                    puVar47 = (ulong*)( (long)local_168 - (ulong)uVar49 );
                                    if (puVar47 < param_4) {
                                       uVar49 = (int)local_168 - iVar35;
                                       puVar47 = (ulong*)( (long)local_168 - (ulong)uVar49 );
                                    }

                                    local_178 = *puVar47;
                                    local_170[0] = local_170[0] + uVar49 * -8;
                                 }

                              }
 else {
                                 puVar47 = (ulong*)( (long)local_168 - ( ulong )(local_170[0] >> 3) );
                                 local_178 = *puVar47;
                                 local_170[0] = local_170[0] & 7;
                              }

                           }
 else {
                              local_168 = &zeroFilled_2;
                              puVar47 = local_168;
                           }

                        }

                        if (bVar5 != 0) {
                           uVar32 = (ulong)local_170[0];
                           local_170[0] = bVar5 + local_170[0];
                           local_300 = (ulong*)( (long)local_300 + ( ( local_178 << ( uVar32 & 0x3f ) ) >> ( ( ulong ) - (uint)bVar5 & 0x3f ) ) );
                        }

                        local_168 = puVar47;
                        if (uVar38 != param_6 - 1) {
                           iVar33 = bVar7 + local_170[0] + (uint)bVar10;
                           sVar15 = ( bVar7 < 0x41 ) * ( '@' - bVar7 );
                           local_150 = ( ( ( local_178 >> ( ( ulong ) - ( bVar7 + local_170[0] ) & 0x3f ) ) << sVar15 ) >> sVar15 ) + ( ulong ) * puVar2;
                           local_170[0] = iVar33 + (uint)bVar9;
                           sVar15 = ( bVar10 < 0x41 ) * ( '@' - bVar10 );
                           local_130 = ( ( ( local_178 >> ( ( ulong )(uint) - iVar33 & 0x3f ) ) << sVar15 ) >> sVar15 ) + ( ulong ) * puVar3;
                           sVar15 = ( bVar9 < 0x41 ) * ( '@' - bVar9 );
                           local_140 = ( ( ( local_178 >> ( ( ulong ) - local_170[0] & 0x3f ) ) << sVar15 ) >> sVar15 ) + ( ulong ) * puVar4;
                           if (local_170[0] < 0x41) {
                              if (puVar47 < puVar1) {
                                 if (param_4 != puVar47) {
                                    uVar49 = local_170[0] >> 3;
                                    local_168 = (ulong*)( (long)puVar47 - (ulong)uVar49 );
                                    if (local_168 < param_4) {
                                       uVar49 = (int)puVar47 - iVar35;
                                       local_168 = (ulong*)( (long)puVar47 - (ulong)uVar49 );
                                    }

                                    local_178 = *local_168;
                                    local_170[0] = local_170[0] + uVar49 * -8;
                                 }

                              }
 else {
                                 local_168 = (ulong*)( (long)puVar47 - ( ulong )(local_170[0] >> 3) );
                                 local_178 = *local_168;
                                 local_170[0] = local_170[0] & 7;
                              }

                           }
 else {
                              local_168 = &zeroFilled_2;
                           }

                        }

                        uVar41 = ( ulong )(uVar38 & 7);
                        lVar48 = uVar41 * 0x18;
                        uVar32 = local_120[uVar41 * 3 + 3];
                        puVar51 = (undefined8*)( (long)puVar50 + uVar32 );
                        if (iVar11 == 2) {
                           if ((undefined8*)param_1[0xed3] < puVar51) {
                              uVar29 = (long)param_1[0xed3] - (long)puVar50;
                              if (uVar29 != 0) {
                                 if (( ulong )((long)local_2a8 - (long)puVar46) < uVar29) goto LAB_001026d0;
                                 uVar32 = uVar32 - uVar29;
                                 puVar50 = (undefined8*)( (long)puVar46 + uVar29 );
                                 ZSTD_safecopyDstBeforeSrc(puVar46);
                                 *(ulong*)( (long)local_120 + lVar48 + 0x18 ) = uVar32;
                                 puVar46 = puVar50;
                              }

                              puVar45 = (undefined8*)( (long)puVar46 + uVar32 );
                              uVar42 = local_120[uVar41 * 3 + 4];
                              uVar27 = local_120[uVar41 * 3 + 5];
                              local_228 = local_120[uVar41 * 3 + 5];
                              puVar37 = (undefined8*)( (long)param_1 + 0x76a4 );
                              local_2b0 = (undefined8*)( (long)param_1 + 0x176a4 );
                              local_240 = (undefined8*)( (long)puVar37 + uVar32 );
                              uVar52 = local_120[uVar41 * 3 + 3];
                              uStack_230 = local_120[uVar41 * 3 + 4];
                              uVar29 = uVar42 + uVar32;
                              puVar50 = (undefined8*)( (long)puVar45 - uVar27 );
                              *(undefined4*)( param_1 + 0xed4 ) = 0;
                              local_238 = uVar52;
                              uVar21 = uVar42;
                              uVar22 = uVar27;
                              uVar23 = uStack_210;
                              uVar24 = local_208;
                              if (( local_2a8 + -4 < (undefined8*)( (long)puVar46 + uVar29 ) ) || ( local_2b0 < local_240 )) goto LAB_0010267d;
                              uVar16 = *(undefined8*)( (long)param_1 + 0x76ac );
                              *puVar46 = *(undefined8*)( (long)param_1 + 0x76a4 );
                              puVar46[1] = uVar16;
                              if (0x10 < uVar32) {
                                 uVar16 = *(undefined8*)( (long)param_1 + 0x76bc );
                                 puVar46[2] = *(undefined8*)( (long)param_1 + 0x76b4 );
                                 puVar46[3] = uVar16;
                                 if (0x10 < (long)( uVar32 - 0x10 )) {
                                    puVar51 = puVar46 + 4;
                                    puVar37 = (undefined8*)( (long)param_1 + 0x76c4 );
                                    do {
                                       uVar16 = puVar37[1];
                                       puVar36 = puVar51 + 4;
                                       *puVar51 = *puVar37;
                                       puVar51[1] = uVar16;
                                       uVar16 = puVar37[3];
                                       puVar51[2] = puVar37[2];
                                       puVar51[3] = uVar16;
                                       puVar51 = puVar36;
                                       puVar37 = puVar37 + 4;
                                    }
 while ( puVar36 < puVar45 );
                                 }

                              }

                              if (( ulong )((long)puVar45 - (long)puVar12) < uVar27) {
                                 if (( ulong )((long)puVar45 - lVar13) < uVar27) goto LAB_00101688;
                                 puVar44 = (undefined1*)( (long)puVar50 + ( (long)puVar14 - (long)puVar12 ) );
                                 if (puVar44 + uVar42 <= puVar14) {
                                    LAB_001025d8:memmove(puVar45, puVar44, uVar42);
                                    goto LAB_00102106;
                                 }

                                 sVar30 = (long)puVar12 - (long)puVar50;
                                 pvVar26 = memmove(puVar45, puVar44, sVar30);
                                 puVar45 = (undefined8*)( (long)pvVar26 + sVar30 );
                                 uVar42 = uVar42 - sVar30;
                                 puVar50 = puVar12;
                              }

                              if (uVar27 < 0x10) {
                                 if (uVar27 < 8) {
                                    *(undefined1*)puVar45 = *(undefined1*)puVar50;
                                    for (int i = 0; i < 3; i++) {
                                       *(undefined1*)( (long)puVar45 + ( i + 1 ) ) = *(undefined1*)( (long)puVar50 + ( i + 1 ) );
                                    }

                                    uVar49 = *(uint*)( dec32table_0 + uVar27 * 4 );
                                    *(undefined4*)( (long)puVar45 + 4 ) = *(undefined4*)( (long)puVar50 + (ulong)uVar49 );
                                    puVar50 = (undefined8*)( (long)( (long)puVar50 + (ulong)uVar49 ) - (long)*(int*)( dec64table_1 + uVar27 * 4 ) );
                                 }
 else {
                                    *puVar45 = *puVar50;
                                 }

                                 if (8 < uVar42) {
                                    if ((long)puVar45 - (long)puVar50 < 0x10) {
                                       puVar51 = puVar45 + 1;
                                       do {
                                          puVar50 = puVar50 + 1;
                                          puVar37 = puVar51 + 1;
                                          *puVar51 = *puVar50;
                                          puVar51 = puVar37;
                                       }
 while ( puVar37 < (undefined8*)( (long)puVar45 + uVar42 ) );
                                    }
 else {
                                       uVar16 = puVar50[2];
                                       puVar45[1] = puVar50[1];
                                       puVar45[2] = uVar16;
                                       if (0x18 < (long)uVar42) {
                                          puVar50 = puVar50 + 3;
                                          puVar51 = puVar45 + 3;
                                          do {
                                             uVar16 = puVar50[1];
                                             puVar37 = puVar51 + 4;
                                             *puVar51 = *puVar50;
                                             puVar51[1] = uVar16;
                                             uVar16 = puVar50[3];
                                             puVar51[2] = puVar50[2];
                                             puVar51[3] = uVar16;
                                             puVar50 = puVar50 + 4;
                                             puVar51 = puVar37;
                                          }
 while ( puVar37 < (undefined8*)( (long)puVar45 + uVar42 ) );
                                       }

                                    }

                                 }

                              }
 else {
                                 uVar16 = puVar50[1];
                                 *puVar45 = *puVar50;
                                 puVar45[1] = uVar16;
                                 if (0x10 < (long)uVar42) {
                                    puVar50 = puVar50 + 2;
                                    puVar51 = puVar45 + 2;
                                    do {
                                       uVar16 = puVar50[1];
                                       puVar37 = puVar51 + 4;
                                       *puVar51 = *puVar50;
                                       puVar51[1] = uVar16;
                                       uVar16 = puVar50[3];
                                       puVar51[2] = puVar50[2];
                                       puVar51[3] = uVar16;
                                       puVar50 = puVar50 + 4;
                                       puVar51 = puVar37;
                                    }
 while ( puVar37 < (undefined8*)( uVar42 + (long)puVar45 ) );
                                 }

                              }

                           }
 else {
                              local_1e8 = local_120[uVar41 * 3 + 5];
                              uVar27 = (long)puVar50 + ( uVar32 - 0x20 );
                              local_1f8 = local_120[uVar41 * 3 + 3];
                              uStack_1f0 = local_120[uVar41 * 3 + 4];
                              uVar42 = local_120[uVar41 * 3 + 4];
                              uVar52 = local_120[uVar41 * 3 + 5];
                              puVar45 = (undefined8*)( (long)puVar46 + uVar32 );
                              uVar29 = uVar42 + uVar32;
                              puVar37 = (undefined8*)( (long)puVar45 - uVar52 );
                              if (( uVar27 < (long)puVar46 + uVar29 ) || ( local_2b0 < puVar51 )) {
                                 uStack_1f0 = uVar42;
                                 local_1e8 = uVar52;
                                 uVar29 = ZSTD_execSequenceEndSplitLitBuffer(puVar46, local_2a8, uVar27, &local_240, local_2b0, puVar12, local_1f8, uVar42, uVar52, lVar13, puVar14);
                              }
 else {
                                 uVar16 = puVar50[1];
                                 *puVar46 = *puVar50;
                                 puVar46[1] = uVar16;
                                 if (0x10 < uVar32) {
                                    uVar16 = puVar50[3];
                                    puVar46[2] = puVar50[2];
                                    puVar46[3] = uVar16;
                                    if (0x10 < (long)( uVar32 - 0x10 )) {
                                       puVar36 = puVar46 + 4;
                                       do {
                                          uVar16 = puVar50[5];
                                          puVar31 = puVar36 + 4;
                                          *puVar36 = puVar50[4];
                                          puVar36[1] = uVar16;
                                          uVar16 = puVar50[7];
                                          puVar36[2] = puVar50[6];
                                          puVar36[3] = uVar16;
                                          puVar36 = puVar31;
                                          puVar50 = puVar50 + 4;
                                       }
 while ( puVar31 < puVar45 );
                                    }

                                 }

                                 local_240 = puVar51;
                                 if (( ulong )((long)puVar45 - (long)puVar12) < uVar52) {
                                    if (( ulong )((long)puVar45 - lVar13) < uVar52) goto LAB_00101688;
                                    puVar44 = (undefined1*)( (long)puVar37 + ( (long)puVar14 - (long)puVar12 ) );
                                    if (puVar44 + uVar42 <= puVar14) goto LAB_001025d8;
                                    sVar30 = (long)puVar12 - (long)puVar37;
                                    pvVar26 = memmove(puVar45, puVar44, sVar30);
                                    puVar45 = (undefined8*)( (long)pvVar26 + sVar30 );
                                    uVar42 = uVar42 - sVar30;
                                    puVar37 = puVar12;
                                 }

                                 if (uVar52 < 0x10) {
                                    if (uVar52 < 8) {
                                       *(undefined1*)puVar45 = *(undefined1*)puVar37;
                                       for (int i = 0; i < 3; i++) {
                                          *(undefined1*)( (long)puVar45 + ( i + 1 ) ) = *(undefined1*)( (long)puVar37 + ( i + 1 ) );
                                       }

                                       uVar49 = *(uint*)( dec32table_0 + uVar52 * 4 );
                                       *(undefined4*)( (long)puVar45 + 4 ) = *(undefined4*)( (ulong)uVar49 + (long)puVar37 );
                                       puVar37 = (undefined8*)( (long)( (ulong)uVar49 + (long)puVar37 ) - (long)*(int*)( dec64table_1 + uVar52 * 4 ) );
                                    }
 else {
                                       *puVar45 = *puVar37;
                                    }

                                    if (8 < uVar42) {
                                       if ((long)puVar45 - (long)puVar37 < 0x10) {
                                          puVar50 = puVar45 + 1;
                                          do {
                                             puVar37 = puVar37 + 1;
                                             puVar51 = puVar50 + 1;
                                             *puVar50 = *puVar37;
                                             puVar50 = puVar51;
                                          }
 while ( puVar51 < (undefined8*)( (long)puVar45 + uVar42 ) );
                                       }
 else {
                                          uVar16 = puVar37[2];
                                          puVar45[1] = puVar37[1];
                                          puVar45[2] = uVar16;
                                          if (0x18 < (long)uVar42) {
                                             puVar50 = puVar37 + 3;
                                             puVar51 = puVar45 + 3;
                                             do {
                                                uVar16 = puVar50[1];
                                                puVar37 = puVar51 + 4;
                                                *puVar51 = *puVar50;
                                                puVar51[1] = uVar16;
                                                uVar16 = puVar50[3];
                                                puVar51[2] = puVar50[2];
                                                puVar51[3] = uVar16;
                                                puVar50 = puVar50 + 4;
                                                puVar51 = puVar37;
                                             }
 while ( puVar37 < (undefined8*)( (long)puVar45 + uVar42 ) );
                                          }

                                       }

                                    }

                                 }
 else {
                                    uVar16 = puVar37[1];
                                    *puVar45 = *puVar37;
                                    puVar45[1] = uVar16;
                                    if (0x10 < (long)uVar42) {
                                       puVar50 = puVar37 + 2;
                                       puVar51 = puVar45 + 2;
                                       do {
                                          uVar16 = puVar50[1];
                                          puVar37 = puVar51 + 4;
                                          *puVar51 = *puVar50;
                                          puVar51[1] = uVar16;
                                          uVar16 = puVar50[3];
                                          puVar51[2] = puVar50[2];
                                          puVar51[3] = uVar16;
                                          puVar50 = puVar50 + 4;
                                          puVar51 = puVar37;
                                       }
 while ( puVar37 < (undefined8*)( uVar42 + (long)puVar45 ) );
                                    }

                                 }

                              }

                           }

                        }
 else {
                           local_208 = local_120[uVar41 * 3 + 5];
                           uVar52 = local_120[uVar41 * 3 + 3];
                           uStack_210 = local_120[uVar41 * 3 + 4];
                           uVar42 = local_120[uVar41 * 3 + 4];
                           uVar27 = local_120[uVar41 * 3 + 5];
                           puVar45 = (undefined8*)( (long)puVar46 + uVar32 );
                           uVar29 = uVar42 + uVar32;
                           puVar36 = (undefined8*)( (long)puVar45 - uVar27 );
                           puVar37 = local_240;
                           uVar21 = uStack_230;
                           uVar22 = local_228;
                           local_218 = uVar52;
                           uVar23 = uVar42;
                           uVar24 = uVar27;
                           if (( local_2a8 + -4 < (undefined8*)( (long)puVar46 + uVar29 ) ) || ( local_2b0 < puVar51 )) {
                              LAB_0010267d:local_208 = uVar24;
                              uStack_210 = uVar23;
                              local_228 = uVar22;
                              uStack_230 = uVar21;
                              local_240 = puVar37;
                              uVar29 = ZSTD_execSequenceEnd(puVar46, local_2a8, &local_240, local_2b0, puVar12, lVar13, uVar52, uVar42, uVar27, puVar14);
                           }
 else {
                              uVar16 = puVar50[1];
                              *puVar46 = *puVar50;
                              puVar46[1] = uVar16;
                              if (0x10 < uVar32) {
                                 uVar16 = puVar50[3];
                                 puVar46[2] = puVar50[2];
                                 puVar46[3] = uVar16;
                                 if (0x10 < (long)( uVar32 - 0x10 )) {
                                    puVar37 = puVar46 + 4;
                                    do {
                                       uVar16 = puVar50[5];
                                       puVar31 = puVar37 + 4;
                                       *puVar37 = puVar50[4];
                                       puVar37[1] = uVar16;
                                       uVar16 = puVar50[7];
                                       puVar37[2] = puVar50[6];
                                       puVar37[3] = uVar16;
                                       puVar37 = puVar31;
                                       puVar50 = puVar50 + 4;
                                    }
 while ( puVar31 < puVar45 );
                                 }

                              }

                              local_240 = puVar51;
                              if (( ulong )((long)puVar45 - (long)puVar12) < uVar27) {
                                 if (( ulong )((long)puVar45 - lVar13) < uVar27) goto LAB_00101688;
                                 puVar44 = (undefined1*)( (long)puVar36 + ( (long)puVar14 - (long)puVar12 ) );
                                 if (puVar44 + uVar42 <= puVar14) goto LAB_001025d8;
                                 sVar30 = (long)puVar12 - (long)puVar36;
                                 pvVar26 = memmove(puVar45, puVar44, sVar30);
                                 puVar45 = (undefined8*)( (long)pvVar26 + sVar30 );
                                 uVar42 = uVar42 - sVar30;
                                 puVar36 = puVar12;
                              }

                              if (uVar27 < 0x10) {
                                 if (uVar27 < 8) {
                                    *(undefined1*)puVar45 = *(undefined1*)puVar36;
                                    for (int i = 0; i < 3; i++) {
                                       *(undefined1*)( (long)puVar45 + ( i + 1 ) ) = *(undefined1*)( (long)puVar36 + ( i + 1 ) );
                                    }

                                    uVar49 = *(uint*)( dec32table_0 + uVar27 * 4 );
                                    *(undefined4*)( (long)puVar45 + 4 ) = *(undefined4*)( (ulong)uVar49 + (long)puVar36 );
                                    puVar36 = (undefined8*)( (long)( (ulong)uVar49 + (long)puVar36 ) - (long)*(int*)( dec64table_1 + uVar27 * 4 ) );
                                 }
 else {
                                    *puVar45 = *puVar36;
                                 }

                                 if (8 < uVar42) {
                                    if ((long)puVar45 - (long)puVar36 < 0x10) {
                                       puVar50 = puVar45 + 1;
                                       do {
                                          puVar36 = puVar36 + 1;
                                          puVar51 = puVar50 + 1;
                                          *puVar50 = *puVar36;
                                          puVar50 = puVar51;
                                       }
 while ( puVar51 < (undefined8*)( (long)puVar45 + uVar42 ) );
                                    }
 else {
                                       uVar16 = puVar36[2];
                                       puVar45[1] = puVar36[1];
                                       puVar45[2] = uVar16;
                                       if (0x18 < (long)uVar42) {
                                          puVar50 = puVar36 + 3;
                                          puVar51 = puVar45 + 3;
                                          do {
                                             uVar16 = puVar50[1];
                                             puVar37 = puVar51 + 4;
                                             *puVar51 = *puVar50;
                                             puVar51[1] = uVar16;
                                             uVar16 = puVar50[3];
                                             puVar51[2] = puVar50[2];
                                             puVar51[3] = uVar16;
                                             puVar50 = puVar50 + 4;
                                             puVar51 = puVar37;
                                          }
 while ( puVar37 < (undefined8*)( (long)puVar45 + uVar42 ) );
                                       }

                                    }

                                 }

                              }
 else {
                                 uVar16 = puVar36[1];
                                 *puVar45 = *puVar36;
                                 puVar45[1] = uVar16;
                                 if (0x10 < (long)uVar42) {
                                    puVar50 = puVar36 + 2;
                                    puVar51 = puVar45 + 2;
                                    do {
                                       uVar16 = puVar50[1];
                                       puVar37 = puVar51 + 4;
                                       *puVar51 = *puVar50;
                                       puVar51[1] = uVar16;
                                       uVar16 = puVar50[3];
                                       puVar51[2] = puVar50[2];
                                       puVar51[3] = uVar16;
                                       puVar50 = puVar50 + 4;
                                       puVar51 = puVar37;
                                    }
 while ( puVar37 < (undefined8*)( uVar42 + (long)puVar45 ) );
                                 }

                              }

                           }

                        }

                        LAB_00102106:if (0xffffffffffffff88 < uVar29) goto LAB_001016d6;
                        local_120[uVar41 * 3 + 3] = (ulong)local_300;
                        local_120[uVar41 * 3 + 4] = uVar39;
                        local_120[uVar41 * 3 + 5] = uVar40;
                        puVar51 = (undefined8*)( (long)puVar46 + uVar29 );
                        uVar49 = param_6;
                        if (param_6 == uVar38 + 1) break;
                        iVar11 = *(int*)( param_1 + 0xed4 );
                        puVar50 = local_240;
                        puVar46 = (undefined8*)( (long)puVar46 + uVar29 );
                        uVar38 = uVar38 + 1;
                     }
 while ( true );
                  }

               }

               if (( param_4 == local_168 ) && ( local_170[0] == 0x40 )) {
                  uVar49 = uVar49 - uVar25;
                  if ((int)uVar49 < (int)param_6) {
                     do {
                        uVar40 = ( ulong )(uVar49 & 7);
                        lVar48 = uVar40 * 0x18;
                        uVar39 = local_120[uVar40 * 3 + 3];
                        puVar50 = (undefined8*)( (long)local_240 + uVar39 );
                        if (*(int*)( param_1 + 0xed4 ) == 2) {
                           if ((undefined8*)param_1[0xed3] < puVar50) {
                              uVar32 = (long)param_1[0xed3] - (long)local_240;
                              puVar50 = puVar51;
                              if (uVar32 != 0) {
                                 if (( ulong )((long)local_2a8 - (long)puVar51) < uVar32) goto LAB_001026d0;
                                 uVar39 = uVar39 - uVar32;
                                 puVar50 = (undefined8*)( (long)puVar51 + uVar32 );
                                 ZSTD_safecopyDstBeforeSrc(puVar51, local_240, uVar32);
                                 *(ulong*)( (long)local_120 + lVar48 + 0x18 ) = uVar39;
                              }

                              puVar46 = (undefined8*)( (long)puVar50 + uVar39 );
                              *(undefined4*)( param_1 + 0xed4 ) = 0;
                              puVar45 = (undefined8*)( (long)param_1 + 0x76a4 );
                              local_2b0 = (undefined8*)( (long)param_1 + 0x176a4 );
                              uVar41 = local_120[uVar40 * 3 + 4];
                              uVar32 = local_120[uVar40 * 3 + 5];
                              local_1c8 = local_120[uVar40 * 3 + 5];
                              local_240 = (undefined8*)( (long)puVar45 + uVar39 );
                              uVar27 = local_120[uVar40 * 3 + 3];
                              uStack_1d0 = local_120[uVar40 * 3 + 4];
                              uVar29 = uVar41 + uVar39;
                              puVar37 = (undefined8*)( (long)puVar46 - uVar32 );
                              puVar51 = puVar50;
                              local_1d8 = uVar27;
                              uVar40 = uVar41;
                              uVar42 = uVar32;
                              uVar52 = uStack_1b0;
                              uVar21 = local_1a8;
                              if (( local_2a8 + -4 < (undefined8*)( (long)puVar50 + uVar29 ) ) || ( local_2b0 < local_240 )) goto LAB_00103224;
                              uVar16 = *(undefined8*)( (long)param_1 + 0x76ac );
                              *puVar50 = *(undefined8*)( (long)param_1 + 0x76a4 );
                              puVar50[1] = uVar16;
                              if (0x10 < uVar39) {
                                 uVar16 = *(undefined8*)( (long)param_1 + 0x76bc );
                                 puVar50[2] = *(undefined8*)( (long)param_1 + 0x76b4 );
                                 puVar50[3] = uVar16;
                                 if (0x10 < (long)( uVar39 - 0x10 )) {
                                    puVar50 = puVar50 + 4;
                                    puVar45 = (undefined8*)( (long)param_1 + 0x76c4 );
                                    do {
                                       uVar16 = puVar45[1];
                                       puVar36 = puVar50 + 4;
                                       *puVar50 = *puVar45;
                                       puVar50[1] = uVar16;
                                       uVar16 = puVar45[3];
                                       puVar50[2] = puVar45[2];
                                       puVar50[3] = uVar16;
                                       puVar50 = puVar36;
                                       puVar45 = puVar45 + 4;
                                    }
 while ( puVar36 < puVar46 );
                                 }

                              }

                              if (( ulong )((long)puVar46 - (long)puVar12) < uVar32) {
                                 if (( ulong )((long)puVar46 - lVar13) < uVar32) goto LAB_00101688;
                                 puVar44 = (undefined1*)( (long)puVar37 + ( (long)puVar14 - (long)puVar12 ) );
                                 if (puVar44 + uVar41 <= puVar14) {
                                    LAB_0010316e:memmove(puVar46, puVar44, uVar41);
                                    goto LAB_00102abe;
                                 }

                                 sVar30 = (long)puVar12 - (long)puVar37;
                                 pvVar26 = memmove(puVar46, puVar44, sVar30);
                                 puVar46 = (undefined8*)( (long)pvVar26 + sVar30 );
                                 uVar41 = uVar41 - sVar30;
                                 puVar37 = puVar12;
                              }

                              if (uVar32 < 0x10) {
                                 if (uVar32 < 8) {
                                    *(undefined1*)puVar46 = *(undefined1*)puVar37;
                                    for (int i = 0; i < 3; i++) {
                                       *(undefined1*)( (long)puVar46 + ( i + 1 ) ) = *(undefined1*)( (long)puVar37 + ( i + 1 ) );
                                    }

                                    uVar25 = *(uint*)( dec32table_0 + uVar32 * 4 );
                                    *(undefined4*)( (long)puVar46 + 4 ) = *(undefined4*)( (long)puVar37 + (ulong)uVar25 );
                                    puVar37 = (undefined8*)( (long)( (long)puVar37 + (ulong)uVar25 ) - (long)*(int*)( dec64table_1 + uVar32 * 4 ) );
                                 }
 else {
                                    *puVar46 = *puVar37;
                                 }

                                 if (8 < uVar41) {
                                    if ((long)puVar46 - (long)puVar37 < 0x10) {
                                       puVar50 = puVar46 + 1;
                                       do {
                                          puVar37 = puVar37 + 1;
                                          puVar45 = puVar50 + 1;
                                          *puVar50 = *puVar37;
                                          puVar50 = puVar45;
                                       }
 while ( puVar45 < (undefined8*)( (long)puVar46 + uVar41 ) );
                                    }
 else {
                                       uVar16 = puVar37[2];
                                       puVar46[1] = puVar37[1];
                                       puVar46[2] = uVar16;
                                       if (0x18 < (long)uVar41) {
                                          puVar50 = puVar37 + 3;
                                          puVar45 = puVar46 + 3;
                                          do {
                                             uVar16 = puVar50[1];
                                             puVar37 = puVar45 + 4;
                                             *puVar45 = *puVar50;
                                             puVar45[1] = uVar16;
                                             uVar16 = puVar50[3];
                                             puVar45[2] = puVar50[2];
                                             puVar45[3] = uVar16;
                                             puVar50 = puVar50 + 4;
                                             puVar45 = puVar37;
                                          }
 while ( puVar37 < (undefined8*)( (long)puVar46 + uVar41 ) );
                                       }

                                    }

                                 }

                              }
 else {
                                 uVar16 = puVar37[1];
                                 *puVar46 = *puVar37;
                                 puVar46[1] = uVar16;
                                 if (0x10 < (long)uVar41) {
                                    puVar50 = puVar37 + 2;
                                    puVar45 = puVar46 + 2;
                                    do {
                                       uVar16 = puVar50[1];
                                       puVar37 = puVar45 + 4;
                                       *puVar45 = *puVar50;
                                       puVar45[1] = uVar16;
                                       uVar16 = puVar50[3];
                                       puVar45[2] = puVar50[2];
                                       puVar45[3] = uVar16;
                                       puVar50 = puVar50 + 4;
                                       puVar45 = puVar37;
                                    }
 while ( puVar37 < (undefined8*)( uVar41 + (long)puVar46 ) );
                                 }

                              }

                           }
 else {
                              local_188 = local_120[uVar40 * 3 + 5];
                              puVar46 = (undefined8*)( (long)puVar51 + uVar39 );
                              uVar32 = (long)local_240 + ( uVar39 - 0x20 );
                              uVar41 = local_120[uVar40 * 3 + 4];
                              uVar27 = local_120[uVar40 * 3 + 5];
                              local_198 = local_120[uVar40 * 3 + 3];
                              uStack_190 = local_120[uVar40 * 3 + 4];
                              uVar29 = uVar41 + uVar39;
                              puVar45 = (undefined8*)( (long)puVar46 - uVar27 );
                              if (( uVar32 < (long)puVar51 + uVar29 ) || ( local_2b0 < puVar50 )) {
                                 uStack_190 = uVar41;
                                 local_188 = uVar27;
                                 uVar29 = ZSTD_execSequenceEndSplitLitBuffer(puVar51, local_2a8, uVar32, &local_240, local_2b0, puVar12, local_198, uVar41, uVar27, lVar13, puVar14);
                              }
 else {
                                 uVar16 = local_240[1];
                                 *puVar51 = *local_240;
                                 puVar51[1] = uVar16;
                                 if (0x10 < uVar39) {
                                    uVar16 = local_240[3];
                                    puVar51[2] = local_240[2];
                                    puVar51[3] = uVar16;
                                    if (0x10 < (long)( uVar39 - 0x10 )) {
                                       puVar37 = puVar51 + 4;
                                       do {
                                          uVar16 = local_240[5];
                                          puVar36 = puVar37 + 4;
                                          *puVar37 = local_240[4];
                                          puVar37[1] = uVar16;
                                          uVar16 = local_240[7];
                                          puVar37[2] = local_240[6];
                                          puVar37[3] = uVar16;
                                          puVar37 = puVar36;
                                          local_240 = local_240 + 4;
                                       }
 while ( puVar36 < puVar46 );
                                    }

                                 }

                                 local_240 = puVar50;
                                 if (( ulong )((long)puVar46 - (long)puVar12) < uVar27) {
                                    if (( ulong )((long)puVar46 - lVar13) < uVar27) goto LAB_00101688;
                                    puVar44 = (undefined1*)( (long)puVar45 + ( (long)puVar14 - (long)puVar12 ) );
                                    if (puVar44 + uVar41 <= puVar14) goto LAB_0010316e;
                                    sVar30 = (long)puVar12 - (long)puVar45;
                                    pvVar26 = memmove(puVar46, puVar44, sVar30);
                                    puVar46 = (undefined8*)( (long)pvVar26 + sVar30 );
                                    uVar41 = uVar41 - sVar30;
                                    puVar45 = puVar12;
                                 }

                                 if (uVar27 < 0x10) {
                                    if (uVar27 < 8) {
                                       *(undefined1*)puVar46 = *(undefined1*)puVar45;
                                       for (int i = 0; i < 3; i++) {
                                          *(undefined1*)( (long)puVar46 + ( i + 1 ) ) = *(undefined1*)( (long)puVar45 + ( i + 1 ) );
                                       }

                                       uVar25 = *(uint*)( dec32table_0 + uVar27 * 4 );
                                       *(undefined4*)( (long)puVar46 + 4 ) = *(undefined4*)( (ulong)uVar25 + (long)puVar45 );
                                       puVar45 = (undefined8*)( (long)( (ulong)uVar25 + (long)puVar45 ) - (long)*(int*)( dec64table_1 + uVar27 * 4 ) );
                                    }
 else {
                                       *puVar46 = *puVar45;
                                    }

                                    if (8 < uVar41) {
                                       if ((long)puVar46 - (long)puVar45 < 0x10) {
                                          puVar50 = puVar46 + 1;
                                          do {
                                             puVar45 = puVar45 + 1;
                                             puVar37 = puVar50 + 1;
                                             *puVar50 = *puVar45;
                                             puVar50 = puVar37;
                                          }
 while ( puVar37 < (undefined8*)( (long)puVar46 + uVar41 ) );
                                       }
 else {
                                          uVar16 = puVar45[2];
                                          puVar46[1] = puVar45[1];
                                          puVar46[2] = uVar16;
                                          if (0x18 < (long)uVar41) {
                                             puVar50 = puVar45 + 3;
                                             puVar45 = puVar46 + 3;
                                             do {
                                                uVar16 = puVar50[1];
                                                puVar37 = puVar45 + 4;
                                                *puVar45 = *puVar50;
                                                puVar45[1] = uVar16;
                                                uVar16 = puVar50[3];
                                                puVar45[2] = puVar50[2];
                                                puVar45[3] = uVar16;
                                                puVar50 = puVar50 + 4;
                                                puVar45 = puVar37;
                                             }
 while ( puVar37 < (undefined8*)( (long)puVar46 + uVar41 ) );
                                          }

                                       }

                                    }

                                 }
 else {
                                    uVar16 = puVar45[1];
                                    *puVar46 = *puVar45;
                                    puVar46[1] = uVar16;
                                    if (0x10 < (long)uVar41) {
                                       puVar50 = puVar45 + 2;
                                       puVar45 = puVar46 + 2;
                                       do {
                                          uVar16 = puVar50[1];
                                          puVar37 = puVar45 + 4;
                                          *puVar45 = *puVar50;
                                          puVar45[1] = uVar16;
                                          uVar16 = puVar50[3];
                                          puVar45[2] = puVar50[2];
                                          puVar45[3] = uVar16;
                                          puVar50 = puVar50 + 4;
                                          puVar45 = puVar37;
                                       }
 while ( puVar37 < (undefined8*)( uVar41 + (long)puVar46 ) );
                                    }

                                 }

                              }

                           }

                        }
 else {
                           uVar41 = local_120[uVar40 * 3 + 4];
                           uVar32 = local_120[uVar40 * 3 + 5];
                           local_1a8 = local_120[uVar40 * 3 + 5];
                           puVar46 = (undefined8*)( (long)puVar51 + uVar39 );
                           uVar27 = local_120[uVar40 * 3 + 3];
                           uStack_1b0 = local_120[uVar40 * 3 + 4];
                           uVar29 = uVar41 + uVar39;
                           puVar37 = (undefined8*)( (long)puVar46 - uVar32 );
                           puVar45 = local_240;
                           uVar40 = uStack_1d0;
                           uVar42 = local_1c8;
                           local_1b8 = uVar27;
                           uVar52 = uVar41;
                           uVar21 = uVar32;
                           if (( local_2a8 + -4 < (undefined8*)( (long)puVar51 + uVar29 ) ) || ( local_2b0 < puVar50 )) {
                              LAB_00103224:local_1a8 = uVar21;
                              uStack_1b0 = uVar52;
                              local_1c8 = uVar42;
                              uStack_1d0 = uVar40;
                              local_240 = puVar45;
                              uVar29 = ZSTD_execSequenceEnd(puVar51, local_2a8, &local_240, local_2b0, puVar12, lVar13, uVar27, uVar41, uVar32, puVar14);
                           }
 else {
                              uVar16 = local_240[1];
                              *puVar51 = *local_240;
                              puVar51[1] = uVar16;
                              if (0x10 < uVar39) {
                                 uVar16 = local_240[3];
                                 puVar51[2] = local_240[2];
                                 puVar51[3] = uVar16;
                                 if (0x10 < (long)( uVar39 - 0x10 )) {
                                    puVar45 = puVar51 + 4;
                                    do {
                                       uVar16 = local_240[5];
                                       puVar36 = puVar45 + 4;
                                       *puVar45 = local_240[4];
                                       puVar45[1] = uVar16;
                                       uVar16 = local_240[7];
                                       puVar45[2] = local_240[6];
                                       puVar45[3] = uVar16;
                                       puVar45 = puVar36;
                                       local_240 = local_240 + 4;
                                    }
 while ( puVar36 < puVar46 );
                                 }

                              }

                              local_240 = puVar50;
                              if (( ulong )((long)puVar46 - (long)puVar12) < uVar32) {
                                 if (( ulong )((long)puVar46 - lVar13) < uVar32) goto LAB_00101688;
                                 puVar44 = (undefined1*)( (long)puVar37 + ( (long)puVar14 - (long)puVar12 ) );
                                 if (puVar44 + uVar41 <= puVar14) goto LAB_0010316e;
                                 sVar30 = (long)puVar12 - (long)puVar37;
                                 pvVar26 = memmove(puVar46, puVar44, sVar30);
                                 puVar46 = (undefined8*)( (long)pvVar26 + sVar30 );
                                 uVar41 = uVar41 - sVar30;
                                 puVar37 = puVar12;
                              }

                              if (uVar32 < 0x10) {
                                 if (uVar32 < 8) {
                                    *(undefined1*)puVar46 = *(undefined1*)puVar37;
                                    for (int i = 0; i < 3; i++) {
                                       *(undefined1*)( (long)puVar46 + ( i + 1 ) ) = *(undefined1*)( (long)puVar37 + ( i + 1 ) );
                                    }

                                    uVar25 = *(uint*)( dec32table_0 + uVar32 * 4 );
                                    *(undefined4*)( (long)puVar46 + 4 ) = *(undefined4*)( (ulong)uVar25 + (long)puVar37 );
                                    puVar37 = (undefined8*)( (long)( (ulong)uVar25 + (long)puVar37 ) - (long)*(int*)( dec64table_1 + uVar32 * 4 ) );
                                 }
 else {
                                    *puVar46 = *puVar37;
                                 }

                                 if (8 < uVar41) {
                                    if ((long)puVar46 - (long)puVar37 < 0x10) {
                                       puVar50 = puVar46 + 1;
                                       do {
                                          puVar37 = puVar37 + 1;
                                          puVar45 = puVar50 + 1;
                                          *puVar50 = *puVar37;
                                          puVar50 = puVar45;
                                       }
 while ( puVar45 < (undefined8*)( (long)puVar46 + uVar41 ) );
                                    }
 else {
                                       uVar16 = puVar37[2];
                                       puVar46[1] = puVar37[1];
                                       puVar46[2] = uVar16;
                                       if (0x18 < (long)uVar41) {
                                          puVar50 = puVar37 + 3;
                                          puVar45 = puVar46 + 3;
                                          do {
                                             uVar16 = puVar50[1];
                                             puVar37 = puVar45 + 4;
                                             *puVar45 = *puVar50;
                                             puVar45[1] = uVar16;
                                             uVar16 = puVar50[3];
                                             puVar45[2] = puVar50[2];
                                             puVar45[3] = uVar16;
                                             puVar50 = puVar50 + 4;
                                             puVar45 = puVar37;
                                          }
 while ( puVar37 < (undefined8*)( (long)puVar46 + uVar41 ) );
                                       }

                                    }

                                 }

                              }
 else {
                                 uVar16 = puVar37[1];
                                 *puVar46 = *puVar37;
                                 puVar46[1] = uVar16;
                                 if (0x10 < (long)uVar41) {
                                    puVar50 = puVar37 + 2;
                                    puVar45 = puVar46 + 2;
                                    do {
                                       uVar16 = puVar50[1];
                                       puVar37 = puVar45 + 4;
                                       *puVar45 = *puVar50;
                                       puVar45[1] = uVar16;
                                       uVar16 = puVar50[3];
                                       puVar45[2] = puVar50[2];
                                       puVar45[3] = uVar16;
                                       puVar50 = puVar50 + 4;
                                       puVar45 = puVar37;
                                    }
 while ( puVar37 < (undefined8*)( uVar41 + (long)puVar46 ) );
                                 }

                              }

                           }

                        }

                        LAB_00102abe:if (0xffffffffffffff88 < uVar29) goto LAB_001016d6;
                        puVar51 = (undefined8*)( (long)puVar51 + uVar29 );
                        uVar49 = uVar49 + 1;
                     }
 while ( param_6 != uVar49 );
                  }

                  *(int*)( (long)param_1 + 0x683c ) = (int)local_120[0];
                  *(int*)( param_1 + 0xd08 ) = (int)local_120[1];
                  *(int*)( (long)param_1 + 0x6844 ) = (int)local_120[2];
                  iVar11 = *(int*)( param_1 + 0xed4 );
                  goto LAB_0010169b;
               }

            }

         }

      }

      LAB_00101688:uVar29 = 0xffffffffffffffec;
      goto LAB_001016d6;
   }

   LAB_0010169b:uVar39 = (long)local_2b0 - (long)local_240;
   if (iVar11 == 2) {
      if (uVar39 <= ( ulong )((long)local_2a8 - (long)puVar51)) {
         if (puVar51 == (undefined8*)0x0) {
            if ((undefined8*)0xffff < local_2a8) goto LAB_001016d0;
         }
 else {
            puVar50 = (undefined8*)( (long)puVar51 + uVar39 );
            uVar40 = 0x10000;
            memmove(puVar51, local_240, uVar39);
            local_240 = (undefined8*)( (long)param_1 + 0x76a4 );
            if (0xffff < ( ulong )((long)local_2a8 - (long)puVar50)) goto LAB_00101c04;
         }

      }

   }
 else if (uVar39 <= ( ulong )((long)local_2a8 - (long)puVar51)) {
      uVar40 = uVar39;
      puVar50 = puVar51;
      if (puVar51 != (undefined8*)0x0) {
         LAB_00101c04:puVar51 = (undefined8*)( (long)puVar50 + uVar40 );
         memmove(puVar50, local_240, uVar40);
      }

      LAB_001016d0:uVar29 = (long)puVar51 - (long)param_2;
      goto LAB_001016d6;
   }

   LAB_001026d0:uVar29 = 0xffffffffffffffba;
   LAB_001016d6:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar29;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ZSTD_decompressSequences_bmi2_constprop_0(undefined8 *param_1, undefined8 *param_2, long param_3, ulong *param_4, ulong param_5, int param_6) {
   ushort *puVar1;
   ushort *puVar2;
   ushort *puVar3;
   byte bVar4;
   byte bVar5;
   byte bVar6;
   byte bVar7;
   byte bVar8;
   byte bVar9;
   undefined8 *puVar10;
   long lVar11;
   undefined1 *puVar12;
   sbyte sVar13;
   undefined8 uVar14;
   int iVar15;
   undefined8 *puVar16;
   void *pvVar17;
   long lVar18;
   undefined8 *puVar19;
   undefined8 *puVar20;
   undefined8 *puVar21;
   undefined8 *puVar22;
   ulong uVar23;
   size_t __n;
   undefined8 *__dest;
   uint uVar24;
   undefined1 *__src;
   ulong *puVar25;
   undefined8 *__dest_00;
   size_t __n_00;
   ulong uVar26;
   ulong uVar27;
   long in_FS_OFFSET;
   ulong local_140;
   undefined8 *local_138;
   uint local_ec;
   undefined8 *local_e0;
   ulong local_d8;
   size_t sStack_d0;
   ulong local_c8;
   ulong local_b8;
   uint local_b0[2];
   ulong *local_a8;
   ulong *local_a0;
   ulong *local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   ulong local_60[4];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_1 + 0xed4 ) == 0) {
      local_138 = (undefined8*)( (long)param_2 + param_3 );
      if (param_3 < 1) {
         local_138 = param_2;
      }

   }
 else {
      local_138 = (undefined8*)param_1[0xed2];
   }

   local_e0 = (undefined8*)param_1[0xeb5];
   puVar22 = (undefined8*)( param_1[0xeb9] + (long)local_e0 );
   puVar10 = (undefined8*)param_1[0xe99];
   lVar11 = param_1[0xe9a];
   puVar12 = (undefined1*)param_1[0xe9b];
   __dest = param_2;
   if (param_6 == 0) {
      LAB_001037d3:uVar26 = 0xffffffffffffffba;
      uVar23 = (long)puVar22 - (long)local_e0;
      if (uVar23 <= ( ulong )((long)local_138 - (long)__dest)) {
         if (__dest != (undefined8*)0x0) {
            pvVar17 = memcpy(__dest, local_e0, uVar23);
            __dest = (undefined8*)( (long)pvVar17 + uVar23 );
         }

         uVar26 = (long)__dest - (long)param_2;
      }

   }
 else {
      local_60[0] = ( ulong ) * (uint*)( (long)param_1 + 0x683c );
      local_60[1] = ( ulong ) * (uint*)( param_1 + 0xd08 );
      *(undefined4*)( (long)param_1 + 0x7534 ) = 1;
      local_60[2] = ( ulong ) * (uint*)( (long)param_1 + 0x6844 );
      if (param_5 != 0) {
         local_98 = param_4 + 1;
         bVar4 = *(byte*)( (long)param_4 + ( param_5 - 1 ) );
         local_a0 = param_4;
         if (param_5 < 8) {
            local_b8 = ( ulong )(byte) * param_4;
            switch (param_5) {
               case 7:
          local_b8 = local_b8 + ((ulong)*(byte *)((long)param_4 + 6) << 0x30);
               case 6:
          local_b8 = local_b8 + ((ulong)*(byte *)((long)param_4 + 5) << 0x28);
               case 5:
          local_b8 = local_b8 + ((ulong)*(byte *)((long)param_4 + 4) << 0x20);
               case 4:
          local_b8 = local_b8 + (ulong)*(byte *)((long)param_4 + 3) * 0x1000000;
               case 3:
          local_b8 = local_b8 + (ulong)*(byte *)((long)param_4 + 2) * 0x10000;
               case 2:
          local_b8 = (ulong)*(byte *)((long)param_4 + 1) * 0x100 + local_b8;
            }

            local_a8 = param_4;
            if (bVar4 != 0) {
               local_b0[0] = LZCOUNT((uint)bVar4) + -0x17 + ( 8 - (int)param_5 ) * 8;
               goto LAB_0010389d;
            }

         }
 else {
            local_a8 = (ulong*)( (long)param_4 + ( param_5 - 8 ) );
            local_b8 = *local_a8;
            if (( bVar4 != 0 ) && ( local_b0[0] = param_5 < 0xffffffffffffff89 )) {
               LAB_0010389d:ZSTD_initFseState(&local_90, &local_b8, *param_1);
               ZSTD_initFseState(&local_80, &local_b8, param_1[2]);
               ZSTD_initFseState(&local_70, &local_b8, param_1[1]);
               do {
                  puVar1 = (ushort*)( local_88 + local_90 * 8 );
                  bVar4 = (byte)puVar1[1];
                  uVar24 = *(uint*)( puVar1 + 2 );
                  uVar23 = (ulong)uVar24;
                  puVar2 = (ushort*)( local_68 + local_70 * 8 );
                  bVar5 = (byte)puVar2[1];
                  bVar6 = *(byte*)( (long)puVar1 + 3 );
                  puVar3 = (ushort*)( local_78 + local_80 * 8 );
                  __n = (size_t)*(uint*)( puVar2 + 2 );
                  bVar7 = (byte)puVar3[1];
                  bVar8 = *(byte*)( (long)puVar2 + 3 );
                  bVar9 = *(byte*)( (long)puVar3 + 3 );
                  if (bVar7 < 2) {
                     if (bVar7 == 1) {
                        uVar27 = (ulong)local_b0[0];
                        local_b0[0] = local_b0[0] + 1;
                        lVar18 = ( ulong )(*(uint*)( puVar3 + 2 ) + ( uint )(uVar24 == 0)) - ( (long)( local_b8 << ( uVar27 & 0x3f ) ) >> 0x3f );
                        local_140 = local_60[0];
                        if (lVar18 == 3) {
                           uVar27 = ( local_60[0] - 1 ) - ( ulong )(local_60[0] - 1 == 0);
                        }
 else {
                           uVar27 = local_60[lVar18] - ( ulong )(local_60[lVar18] == 0);
                           if (lVar18 == 1) goto LAB_00103a42;
                        }

                        local_60[2] = local_60[1];
                     }
 else {
                        uVar27 = local_60[uVar24 == 0];
                        local_140 = *(ulong*)( local_b0 + ( 0xb - ( ulong )(uVar24 == 0) ) * 2 );
                     }

                  }
 else {
                     uVar27 = (ulong)(byte)local_b0[0];
                     local_b0[0] = bVar7 + local_b0[0];
                     uVar27 = ( ulong ) * (uint*)( puVar3 + 2 ) + ( ( local_b8 << ( uVar27 & 0x3f ) ) >> ( ( ulong ) - (uint)bVar7 & 0x3f ) );
                     local_60[2] = local_60[1];
                     local_140 = local_60[0];
                  }

                  LAB_00103a42:local_60[0] = uVar27;
                  local_60[1] = local_140;
                  if (bVar5 != 0) {
                     uVar26 = (ulong)local_b0[0];
                     local_b0[0] = bVar5 + local_b0[0];
                     __n = __n + ( ( local_b8 << ( uVar26 & 0x3f ) ) >> ( ( ulong ) - (uint)bVar5 & 0x3f ) );
                  }

                  if (0x1e < ( byte )(bVar4 + bVar5 + bVar7)) {
                     if (local_b0[0] < 0x41) {
                        if (local_a8 < local_98) {
                           if (local_a8 != local_a0) {
                              local_ec = local_b0[0] >> 3;
                              puVar25 = (ulong*)( (long)local_a8 - (ulong)local_ec );
                              if (puVar25 < local_a0) {
                                 local_ec = (int)local_a8 - (int)local_a0;
                                 puVar25 = (ulong*)( (long)local_a8 - (ulong)local_ec );
                              }

                              local_b0[0] = local_b0[0] + local_ec * -8;
                              local_b8 = *puVar25;
                              local_a8 = puVar25;
                           }

                        }
 else {
                           local_a8 = (ulong*)( (long)local_a8 - ( ulong )(local_b0[0] >> 3) );
                           local_b8 = *local_a8;
                           local_b0[0] = local_b0[0] & 7;
                        }

                     }
 else {
                        local_a8 = &zeroFilled_2;
                     }

                  }

                  if (bVar4 != 0) {
                     uVar26 = (ulong)local_b0[0];
                     local_b0[0] = bVar4 + local_b0[0];
                     uVar23 = uVar23 + ( ( local_b8 << ( uVar26 & 0x3f ) ) >> ( ( ulong ) - (uint)bVar4 & 0x3f ) );
                  }

                  if (param_6 != 1) {
                     iVar15 = bVar6 + local_b0[0] + (uint)bVar8;
                     sVar13 = ( bVar6 < 0x41 ) * ( '@' - bVar6 );
                     local_90 = ( ( ( local_b8 >> ( ( ulong ) - ( bVar6 + local_b0[0] ) & 0x3f ) ) << sVar13 ) >> sVar13 ) + ( ulong ) * puVar1;
                     local_b0[0] = iVar15 + (uint)bVar9;
                     sVar13 = ( bVar8 < 0x41 ) * ( '@' - bVar8 );
                     local_70 = ( ( ( local_b8 >> ( ( ulong )(uint) - iVar15 & 0x3f ) ) << sVar13 ) >> sVar13 ) + ( ulong ) * puVar2;
                     sVar13 = ( bVar9 < 0x41 ) * ( '@' - bVar9 );
                     local_80 = ( ( ( local_b8 >> ( ( ulong ) - local_b0[0] & 0x3f ) ) << sVar13 ) >> sVar13 ) + ( ulong ) * puVar3;
                     if (local_b0[0] < 0x41) {
                        if (local_a8 < local_98) {
                           if (local_a8 != local_a0) {
                              uVar24 = local_b0[0] >> 3;
                              puVar25 = (ulong*)( (long)local_a8 - (ulong)uVar24 );
                              if (puVar25 < local_a0) {
                                 uVar24 = (int)local_a8 - (int)local_a0;
                                 puVar25 = (ulong*)( (long)local_a8 - (ulong)uVar24 );
                              }

                              local_b8 = *puVar25;
                              local_b0[0] = local_b0[0] + uVar24 * -8;
                              local_a8 = puVar25;
                           }

                        }
 else {
                           local_a8 = (ulong*)( (long)local_a8 - ( ulong )(local_b0[0] >> 3) );
                           local_b8 = *local_a8;
                           local_b0[0] = local_b0[0] & 7;
                        }

                     }
 else {
                        local_a8 = &zeroFilled_2;
                     }

                  }

                  __dest_00 = (undefined8*)( (long)__dest + uVar23 );
                  uVar26 = uVar23 + __n;
                  puVar19 = (undefined8*)( (long)local_e0 + uVar23 );
                  puVar16 = (undefined8*)( (long)__dest_00 - uVar27 );
                  if (( local_138 + -4 < (undefined8*)( (long)__dest + uVar26 ) ) || ( puVar22 < puVar19 )) {
                     local_d8 = uVar23;
                     sStack_d0 = __n;
                     local_c8 = uVar27;
                     uVar26 = ZSTD_execSequenceEnd(__dest, local_138, &local_e0, puVar22, puVar10, lVar11, uVar23, __n, uVar27, puVar12);
                  }
 else {
                     uVar14 = local_e0[1];
                     *__dest = *local_e0;
                     __dest[1] = uVar14;
                     if (0x10 < uVar23) {
                        uVar14 = local_e0[3];
                        __dest[2] = local_e0[2];
                        __dest[3] = uVar14;
                        if (0x10 < (long)( uVar23 - 0x10 )) {
                           puVar20 = __dest + 4;
                           do {
                              uVar14 = local_e0[5];
                              puVar21 = puVar20 + 4;
                              *puVar20 = local_e0[4];
                              puVar20[1] = uVar14;
                              uVar14 = local_e0[7];
                              puVar20[2] = local_e0[6];
                              puVar20[3] = uVar14;
                              puVar20 = puVar21;
                              local_e0 = local_e0 + 4;
                           }
 while ( puVar21 < __dest_00 );
                        }

                     }

                     local_e0 = puVar19;
                     if (( ulong )((long)__dest_00 - (long)puVar10) < uVar27) {
                        if (( ulong )((long)__dest_00 - lVar11) < uVar27) goto LAB_00103780;
                        __src = (undefined1*)( (long)puVar16 + ( (long)puVar12 - (long)puVar10 ) );
                        if (__src + __n <= puVar12) {
                           memmove(__dest_00, __src, __n);
                           goto LAB_00103c5e;
                        }

                        __n_00 = (long)puVar10 - (long)puVar16;
                        __n = __n - __n_00;
                        pvVar17 = memmove(__dest_00, __src, __n_00);
                        __dest_00 = (undefined8*)( (long)pvVar17 + __n_00 );
                        puVar16 = puVar10;
                     }

                     if (uVar27 < 0x10) {
                        if (uVar27 < 8) {
                           *(undefined1*)__dest_00 = *(undefined1*)puVar16;
                           for (int i = 0; i < 3; i++) {
                              *(undefined1*)( (long)__dest_00 + ( i + 1 ) ) = *(undefined1*)( (long)puVar16 + ( i + 1 ) );
                           }

                           uVar24 = *(uint*)( dec32table_0 + uVar27 * 4 );
                           *(undefined4*)( (long)__dest_00 + 4 ) = *(undefined4*)( (long)puVar16 + (ulong)uVar24 );
                           puVar16 = (undefined8*)( (long)( (long)puVar16 + (ulong)uVar24 ) - (long)*(int*)( dec64table_1 + uVar27 * 4 ) );
                        }
 else {
                           *__dest_00 = *puVar16;
                        }

                        if (8 < __n) {
                           if ((long)__dest_00 - (long)puVar16 < 0x10) {
                              puVar19 = __dest_00 + 1;
                              do {
                                 puVar16 = puVar16 + 1;
                                 puVar20 = puVar19 + 1;
                                 *puVar19 = *puVar16;
                                 puVar19 = puVar20;
                              }
 while ( puVar20 < (undefined8*)( (long)__dest_00 + __n ) );
                           }
 else {
                              uVar14 = puVar16[2];
                              __dest_00[1] = puVar16[1];
                              __dest_00[2] = uVar14;
                              if (0x18 < (long)__n) {
                                 puVar19 = puVar16 + 3;
                                 puVar16 = __dest_00 + 3;
                                 do {
                                    uVar14 = puVar19[1];
                                    puVar20 = puVar16 + 4;
                                    *puVar16 = *puVar19;
                                    puVar16[1] = uVar14;
                                    uVar14 = puVar19[3];
                                    puVar16[2] = puVar19[2];
                                    puVar16[3] = uVar14;
                                    puVar19 = puVar19 + 4;
                                    puVar16 = puVar20;
                                 }
 while ( puVar20 < (undefined8*)( (long)__dest_00 + __n ) );
                              }

                           }

                        }

                     }
 else {
                        uVar14 = puVar16[1];
                        *__dest_00 = *puVar16;
                        __dest_00[1] = uVar14;
                        if (0x10 < (long)__n) {
                           puVar19 = puVar16 + 2;
                           puVar16 = __dest_00 + 2;
                           do {
                              uVar14 = puVar19[1];
                              puVar20 = puVar16 + 4;
                              *puVar16 = *puVar19;
                              puVar16[1] = uVar14;
                              uVar14 = puVar19[3];
                              puVar16[2] = puVar19[2];
                              puVar16[3] = uVar14;
                              puVar19 = puVar19 + 4;
                              puVar16 = puVar20;
                           }
 while ( puVar20 < (undefined8*)( __n + (long)__dest_00 ) );
                        }

                     }

                  }

                  LAB_00103c5e:if (0xffffffffffffff88 < uVar26) goto LAB_00103787;
                  __dest = (undefined8*)( (long)__dest + uVar26 );
                  param_6 = param_6 + -1;
               }
 while ( param_6 != 0 );
               if (( local_a8 == local_a0 ) && ( local_b0[0] == 0x40 )) {
                  *(int*)( (long)param_1 + 0x683c ) = (int)uVar27;
                  *(undefined4*)( param_1 + 0xd08 ) = (undefined4)local_140;
                  *(int*)( (long)param_1 + 0x6844 ) = (int)local_60[2];
                  goto LAB_001037d3;
               }

            }

         }

      }

      LAB_00103780:uVar26 = 0xffffffffffffffec;
   }

   LAB_00103787:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar26;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ZSTD_decompressSequencesSplitLitBuffer_bmi2_constprop_0(undefined8 *param_1, undefined8 *param_2, long param_3, ulong *param_4, ulong param_5, int param_6) {
   ushort *puVar1;
   ushort *puVar2;
   ushort *puVar3;
   byte bVar4;
   byte bVar5;
   byte bVar6;
   byte bVar7;
   byte bVar8;
   byte bVar9;
   undefined1 *puVar10;
   sbyte sVar11;
   undefined8 uVar12;
   long lVar13;
   long lVar14;
   int iVar15;
   undefined8 *puVar16;
   void *pvVar17;
   uint uVar18;
   undefined8 *puVar19;
   undefined8 *puVar20;
   undefined8 *puVar21;
   ulong uVar22;
   ulong uVar23;
   long lVar24;
   size_t sVar25;
   ulong *puVar26;
   undefined1 *puVar27;
   undefined8 *puVar28;
   undefined8 *puVar29;
   long lVar30;
   undefined8 *puVar31;
   long lVar32;
   ulong uVar33;
   ulong uVar34;
   size_t sVar35;
   undefined8 *puVar36;
   undefined8 *puVar37;
   long in_FS_OFFSET;
   undefined8 *local_190;
   undefined8 *local_120;
   ulong local_118;
   size_t sStack_110;
   ulong local_108;
   ulong local_f8;
   size_t sStack_f0;
   ulong local_e8;
   ulong local_d8;
   size_t sStack_d0;
   ulong local_c8;
   ulong local_b8;
   uint local_b0[2];
   ulong *local_a8;
   ulong *local_a0;
   ulong *local_98;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   ulong local_60[4];
   long local_40;
   local_190 = (undefined8*)param_1[0xed3];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar37 = (undefined8*)param_1[0xe99];
   puVar19 = (undefined8*)( (long)param_2 + param_3 );
   if (param_3 < 1) {
      puVar19 = param_2;
   }

   local_120 = (undefined8*)param_1[0xeb5];
   lVar24 = param_1[0xe9a];
   puVar10 = (undefined1*)param_1[0xe9b];
   puVar36 = param_2;
   if (param_6 != 0) {
      *(undefined4*)( (long)param_1 + 0x7534 ) = 1;
      local_60[0] = ( ulong ) * (uint*)( (long)param_1 + 0x683c );
      local_60[1] = ( ulong ) * (uint*)( param_1 + 0xd08 );
      local_60[2] = ( ulong ) * (uint*)( (long)param_1 + 0x6844 );
      if (param_5 != 0) {
         local_98 = param_4 + 1;
         bVar4 = *(byte*)( (long)param_4 + ( param_5 - 1 ) );
         local_a0 = param_4;
         if (param_5 < 8) {
            local_b8 = ( ulong )(byte) * param_4;
            switch (param_5) {
               case 7:
          local_b8 = local_b8 + ((ulong)*(byte *)((long)param_4 + 6) << 0x30);
               case 6:
          local_b8 = local_b8 + ((ulong)*(byte *)((long)param_4 + 5) << 0x28);
               case 5:
          local_b8 = local_b8 + ((ulong)*(byte *)((long)param_4 + 4) << 0x20);
               case 4:
          local_b8 = local_b8 + (ulong)*(byte *)((long)param_4 + 3) * 0x1000000;
               case 3:
          local_b8 = local_b8 + (ulong)*(byte *)((long)param_4 + 2) * 0x10000;
               case 2:
          local_b8 = (ulong)*(byte *)((long)param_4 + 1) * 0x100 + local_b8;
            }

            local_a8 = param_4;
            if (bVar4 != 0) {
               local_b0[0] = LZCOUNT((uint)bVar4) + -0x17 + ( 8 - (int)param_5 ) * 8;
               goto LAB_001042bd;
            }

         }
 else {
            local_a8 = (ulong*)( (long)param_4 + ( param_5 - 8 ) );
            local_b8 = *local_a8;
            if (( bVar4 != 0 ) && ( local_b0[0] = param_5 < 0xffffffffffffff89 )) {
               LAB_001042bd:ZSTD_initFseState(&local_90, &local_b8, *param_1);
               ZSTD_initFseState(&local_80, &local_b8, param_1[2]);
               ZSTD_initFseState(&local_70, &local_b8, param_1[1]);
               lVar14 = local_68;
               lVar13 = local_78;
               lVar32 = local_88;
               LAB_001043a8:puVar1 = (ushort*)( lVar32 + local_90 * 8 );
               bVar4 = (byte)puVar1[1];
               uVar18 = *(uint*)( puVar1 + 2 );
               uVar22 = (ulong)uVar18;
               puVar2 = (ushort*)( lVar14 + local_70 * 8 );
               bVar5 = (byte)puVar2[1];
               sVar35 = (size_t)*(uint*)( puVar2 + 2 );
               puVar3 = (ushort*)( lVar13 + local_80 * 8 );
               bVar6 = *(byte*)( (long)puVar1 + 3 );
               bVar7 = (byte)puVar3[1];
               bVar8 = *(byte*)( (long)puVar2 + 3 );
               bVar9 = *(byte*)( (long)puVar3 + 3 );
               if (bVar7 < 2) {
                  if (bVar7 == 1) {
                     uVar23 = (ulong)local_b0[0];
                     local_b0[0] = local_b0[0] + 1;
                     lVar30 = ( ulong )(*(uint*)( puVar3 + 2 ) + ( uint )(uVar18 == 0)) - ( (long)( local_b8 << ( uVar23 & 0x3f ) ) >> 0x3f );
                     if (lVar30 == 3) {
                        uVar23 = ( local_60[0] - 1 ) - ( ulong )(local_60[0] - 1 == 0);
                     }
 else {
                        uVar23 = local_60[lVar30] - ( ulong )(local_60[lVar30] == 0);
                        if (lVar30 == 1) goto LAB_0010446f;
                     }

                     local_60[2] = local_60[1];
                  }
 else {
                     uVar23 = local_60[uVar18 == 0];
                     local_60[0] = *(ulong*)( local_b0 + ( 0xb - ( ulong )(uVar18 == 0) ) * 2 );
                  }

               }
 else {
                  uVar23 = ( ulong ) * (uint*)( puVar3 + 2 ) + ( ( local_b8 << ( (ulong)(byte)local_b0[0] & 0x3f ) ) >> ( ( ulong ) - (uint)bVar7 & 0x3f ) );
                  local_60[2] = local_60[1];
                  local_b0[0] = bVar7 + local_b0[0];
               }

               LAB_0010446f:local_60[1] = local_60[0];
               local_60[0] = uVar23;
               if (bVar5 != 0) {
                  uVar34 = (ulong)local_b0[0];
                  local_b0[0] = bVar5 + local_b0[0];
                  sVar35 = sVar35 + ( ( local_b8 << ( uVar34 & 0x3f ) ) >> ( ( ulong ) - (uint)bVar5 & 0x3f ) );
               }

               if (0x1e < ( byte )(bVar4 + bVar5 + bVar7)) {
                  if (local_b0[0] < 0x41) {
                     if (local_a8 < local_98) {
                        if (local_a8 != local_a0) {
                           uVar18 = local_b0[0] >> 3;
                           puVar26 = (ulong*)( (long)local_a8 - (ulong)uVar18 );
                           if (puVar26 < local_a0) {
                              uVar18 = (int)local_a8 - (int)local_a0;
                              puVar26 = (ulong*)( (long)local_a8 - (ulong)uVar18 );
                           }

                           local_b0[0] = local_b0[0] + uVar18 * -8;
                           local_b8 = *puVar26;
                           local_a8 = puVar26;
                        }

                     }
 else {
                        local_a8 = (ulong*)( (long)local_a8 - ( ulong )(local_b0[0] >> 3) );
                        local_b8 = *local_a8;
                        local_b0[0] = local_b0[0] & 7;
                     }

                  }
 else {
                     local_a8 = &zeroFilled_2;
                  }

               }

               if (bVar4 != 0) {
                  uVar34 = (ulong)local_b0[0];
                  local_b0[0] = bVar4 + local_b0[0];
                  uVar22 = uVar22 + ( ( local_b8 << ( uVar34 & 0x3f ) ) >> ( ( ulong ) - (uint)bVar4 & 0x3f ) );
               }

               if (param_6 != 1) {
                  iVar15 = bVar6 + local_b0[0] + (uint)bVar8;
                  sVar11 = ( bVar6 < 0x41 ) * ( '@' - bVar6 );
                  local_90 = ( ( ( local_b8 >> ( ( ulong ) - ( bVar6 + local_b0[0] ) & 0x3f ) ) << sVar11 ) >> sVar11 ) + ( ulong ) * puVar1;
                  local_b0[0] = iVar15 + (uint)bVar9;
                  sVar11 = ( bVar8 < 0x41 ) * ( '@' - bVar8 );
                  local_70 = ( ( ( local_b8 >> ( ( ulong )(uint) - iVar15 & 0x3f ) ) << sVar11 ) >> sVar11 ) + ( ulong ) * puVar2;
                  sVar11 = ( bVar9 < 0x41 ) * ( '@' - bVar9 );
                  local_80 = ( ( ( local_b8 >> ( ( ulong ) - local_b0[0] & 0x3f ) ) << sVar11 ) >> sVar11 ) + ( ulong ) * puVar3;
                  if (local_b0[0] < 0x41) {
                     if (local_a8 < local_98) {
                        if (local_a8 != local_a0) {
                           uVar18 = local_b0[0] >> 3;
                           puVar26 = (ulong*)( (long)local_a8 - (ulong)uVar18 );
                           if (puVar26 < local_a0) {
                              uVar18 = (int)local_a8 - (int)local_a0;
                              puVar26 = (ulong*)( (long)local_a8 - (ulong)uVar18 );
                           }

                           local_b8 = *puVar26;
                           local_b0[0] = local_b0[0] + uVar18 * -8;
                           local_a8 = puVar26;
                        }

                     }
 else {
                        local_a8 = (ulong*)( (long)local_a8 - ( ulong )(local_b0[0] >> 3) );
                        local_b8 = *local_a8;
                        local_b0[0] = local_b0[0] & 7;
                     }

                  }
 else {
                     local_a8 = &zeroFilled_2;
                  }

               }

               puVar31 = (undefined8*)( (long)local_120 + uVar22 );
               if (puVar31 <= (undefined8*)param_1[0xed3]) {
                  puVar29 = (undefined8*)( (long)puVar36 + uVar22 );
                  uVar34 = uVar22 + sVar35;
                  uVar33 = (long)local_120 + ( uVar22 - 0x20 );
                  puVar16 = (undefined8*)( (long)puVar29 - uVar23 );
                  if (( uVar33 < (long)puVar36 + uVar34 ) || ( local_190 < puVar31 )) {
                     local_118 = uVar22;
                     sStack_110 = sVar35;
                     local_108 = uVar23;
                     uVar34 = ZSTD_execSequenceEndSplitLitBuffer(puVar36, puVar19, uVar33, &local_120, local_190, puVar37, uVar22, sVar35, uVar23, lVar24, puVar10);
                  }
 else {
                     uVar12 = local_120[1];
                     *puVar36 = *local_120;
                     puVar36[1] = uVar12;
                     if (0x10 < uVar22) {
                        uVar12 = local_120[3];
                        puVar36[2] = local_120[2];
                        puVar36[3] = uVar12;
                        if (0x10 < (long)( uVar22 - 0x10 )) {
                           puVar20 = puVar36 + 4;
                           do {
                              uVar12 = local_120[5];
                              puVar28 = puVar20 + 4;
                              *puVar20 = local_120[4];
                              puVar20[1] = uVar12;
                              uVar12 = local_120[7];
                              puVar20[2] = local_120[6];
                              puVar20[3] = uVar12;
                              puVar20 = puVar28;
                              local_120 = local_120 + 4;
                           }
 while ( puVar28 < puVar29 );
                        }

                     }

                     local_120 = puVar31;
                     if (( ulong )((long)puVar29 - (long)puVar37) < uVar23) {
                        if (( ulong )((long)puVar29 - lVar24) < uVar23) goto LAB_001041b9;
                        puVar27 = (undefined1*)( (long)puVar16 + ( (long)puVar10 - (long)puVar37 ) );
                        if (puVar27 + sVar35 <= puVar10) {
                           memmove(puVar29, puVar27, sVar35);
                           goto LAB_00104696;
                        }

                        sVar25 = (long)puVar37 - (long)puVar16;
                        sVar35 = sVar35 - sVar25;
                        pvVar17 = memmove(puVar29, puVar27, sVar25);
                        puVar29 = (undefined8*)( (long)pvVar17 + sVar25 );
                        puVar16 = puVar37;
                     }

                     if (uVar23 < 0x10) {
                        if (uVar23 < 8) {
                           *(undefined1*)puVar29 = *(undefined1*)puVar16;
                           for (int i = 0; i < 3; i++) {
                              *(undefined1*)( (long)puVar29 + ( i + 1 ) ) = *(undefined1*)( (long)puVar16 + ( i + 1 ) );
                           }

                           uVar18 = *(uint*)( dec32table_0 + uVar23 * 4 );
                           *(undefined4*)( (long)puVar29 + 4 ) = *(undefined4*)( (long)puVar16 + (ulong)uVar18 );
                           puVar16 = (undefined8*)( (long)( (long)puVar16 + (ulong)uVar18 ) - (long)*(int*)( dec64table_1 + uVar23 * 4 ) );
                        }
 else {
                           *puVar29 = *puVar16;
                        }

                        if (8 < sVar35) {
                           if ((long)puVar29 - (long)puVar16 < 0x10) {
                              puVar31 = puVar29 + 1;
                              do {
                                 puVar16 = puVar16 + 1;
                                 puVar20 = puVar31 + 1;
                                 *puVar31 = *puVar16;
                                 puVar31 = puVar20;
                              }
 while ( puVar20 < (undefined8*)( (long)puVar29 + sVar35 ) );
                           }
 else {
                              uVar12 = puVar16[2];
                              puVar29[1] = puVar16[1];
                              puVar29[2] = uVar12;
                              if (0x18 < (long)sVar35) {
                                 puVar31 = puVar16 + 3;
                                 puVar16 = puVar29 + 3;
                                 do {
                                    uVar12 = puVar31[1];
                                    puVar20 = puVar16 + 4;
                                    *puVar16 = *puVar31;
                                    puVar16[1] = uVar12;
                                    uVar12 = puVar31[3];
                                    puVar16[2] = puVar31[2];
                                    puVar16[3] = uVar12;
                                    puVar31 = puVar31 + 4;
                                    puVar16 = puVar20;
                                 }
 while ( puVar20 < (undefined8*)( (long)puVar29 + sVar35 ) );
                              }

                           }

                        }

                     }
 else {
                        uVar12 = puVar16[1];
                        *puVar29 = *puVar16;
                        puVar29[1] = uVar12;
                        if (0x10 < (long)sVar35) {
                           puVar31 = puVar16 + 2;
                           puVar16 = puVar29 + 2;
                           do {
                              uVar12 = puVar31[1];
                              puVar20 = puVar16 + 4;
                              *puVar16 = *puVar31;
                              puVar16[1] = uVar12;
                              uVar12 = puVar31[3];
                              puVar16[2] = puVar31[2];
                              puVar16[3] = uVar12;
                              puVar31 = puVar31 + 4;
                              puVar16 = puVar20;
                           }
 while ( puVar20 < (undefined8*)( sVar35 + (long)puVar29 ) );
                        }

                     }

                  }

                  LAB_00104696:if (uVar34 < 0xffffffffffffff89) goto code_r0x001046a0;
                  goto LAB_001041c0;
               }

               if (param_6 < 1) goto LAB_001041b9;
               uVar33 = param_1[0xed3] - (long)local_120;
               puVar31 = puVar36;
               if (uVar33 != 0) {
                  uVar34 = 0xffffffffffffffba;
                  if (( ulong )((long)puVar19 - (long)puVar36) < uVar33) goto LAB_001041c0;
                  uVar22 = uVar22 - uVar33;
                  puVar31 = (undefined8*)( (long)puVar36 + uVar33 );
                  ZSTD_safecopyDstBeforeSrc(puVar36, local_120, uVar33);
               }

               puVar36 = (undefined8*)( (long)puVar31 + uVar22 );
               uVar34 = sVar35 + uVar22;
               local_120 = (undefined8*)( (long)param_1 + 0x76a4 );
               *(undefined4*)( param_1 + 0xed4 ) = 0;
               local_190 = (undefined8*)( (long)param_1 + 0x176a4 );
               puVar29 = (undefined8*)( (long)puVar36 - uVar23 );
               puVar16 = (undefined8*)( (long)local_120 + uVar22 );
               if (( puVar19 + -4 < (undefined8*)( (long)puVar31 + uVar34 ) ) || ( local_190 < puVar16 )) {
                  local_f8 = uVar22;
                  sStack_f0 = sVar35;
                  local_e8 = uVar23;
                  uVar34 = ZSTD_execSequenceEnd(puVar31, puVar19, &local_120, local_190, puVar37, lVar24, uVar22, sVar35, uVar23, puVar10);
               }
 else {
                  uVar12 = *(undefined8*)( (long)param_1 + 0x76ac );
                  *puVar31 = *(undefined8*)( (long)param_1 + 0x76a4 );
                  puVar31[1] = uVar12;
                  if (0x10 < uVar22) {
                     uVar12 = *(undefined8*)( (long)param_1 + 0x76bc );
                     puVar31[2] = *(undefined8*)( (long)param_1 + 0x76b4 );
                     puVar31[3] = uVar12;
                     if (0x10 < (long)( uVar22 - 0x10 )) {
                        puVar20 = puVar31 + 4;
                        puVar28 = (undefined8*)( (long)param_1 + 0x76c4 );
                        do {
                           uVar12 = puVar28[1];
                           puVar21 = puVar20 + 4;
                           *puVar20 = *puVar28;
                           puVar20[1] = uVar12;
                           uVar12 = puVar28[3];
                           puVar20[2] = puVar28[2];
                           puVar20[3] = uVar12;
                           puVar20 = puVar21;
                           puVar28 = puVar28 + 4;
                        }
 while ( puVar21 < puVar36 );
                     }

                  }

                  local_120 = puVar16;
                  if (( ulong )((long)puVar36 - (long)puVar37) < uVar23) {
                     if (uVar23 <= ( ulong )((long)puVar36 - lVar24)) {
                        puVar27 = (undefined1*)( (long)puVar29 + ( (long)puVar10 - (long)puVar37 ) );
                        if (puVar10 < puVar27 + sVar35) {
                           sVar25 = (long)puVar37 - (long)puVar29;
                           sVar35 = sVar35 - sVar25;
                           pvVar17 = memmove(puVar36, puVar27, sVar25);
                           puVar36 = (undefined8*)( (long)pvVar17 + sVar25 );
                           puVar29 = puVar37;
                           goto LAB_00104bf3;
                        }

                        memmove(puVar36, puVar27, sVar35);
                        goto LAB_00104c3e;
                     }

                     goto LAB_001041b9;
                  }

                  LAB_00104bf3:if (uVar23 < 0x10) {
                     if (uVar23 < 8) {
                        *(undefined1*)puVar36 = *(undefined1*)puVar29;
                        for (int i = 0; i < 3; i++) {
                           *(undefined1*)( (long)puVar36 + ( i + 1 ) ) = *(undefined1*)( (long)puVar29 + ( i + 1 ) );
                        }

                        uVar18 = *(uint*)( dec32table_0 + uVar23 * 4 );
                        *(undefined4*)( (long)puVar36 + 4 ) = *(undefined4*)( (long)puVar29 + (ulong)uVar18 );
                        puVar29 = (undefined8*)( (long)( (long)puVar29 + (ulong)uVar18 ) - (long)*(int*)( dec64table_1 + uVar23 * 4 ) );
                     }
 else {
                        *puVar36 = *puVar29;
                     }

                     if (8 < sVar35) {
                        if ((long)puVar36 - (long)puVar29 < 0x10) {
                           puVar16 = puVar36 + 1;
                           do {
                              puVar29 = puVar29 + 1;
                              puVar20 = puVar16 + 1;
                              *puVar16 = *puVar29;
                              puVar16 = puVar20;
                           }
 while ( puVar20 < (undefined8*)( (long)puVar36 + sVar35 ) );
                        }
 else {
                           uVar12 = puVar29[2];
                           puVar36[1] = puVar29[1];
                           puVar36[2] = uVar12;
                           if (0x18 < (long)sVar35) {
                              puVar29 = puVar29 + 3;
                              puVar16 = puVar36 + 3;
                              do {
                                 uVar12 = puVar29[1];
                                 puVar20 = puVar16 + 4;
                                 *puVar16 = *puVar29;
                                 puVar16[1] = uVar12;
                                 uVar12 = puVar29[3];
                                 puVar16[2] = puVar29[2];
                                 puVar16[3] = uVar12;
                                 puVar29 = puVar29 + 4;
                                 puVar16 = puVar20;
                              }
 while ( puVar20 < (undefined8*)( (long)puVar36 + sVar35 ) );
                           }

                        }

                     }

                  }
 else {
                     uVar12 = puVar29[1];
                     *puVar36 = *puVar29;
                     puVar36[1] = uVar12;
                     if (0x10 < (long)sVar35) {
                        puVar29 = puVar29 + 2;
                        puVar16 = puVar36 + 2;
                        do {
                           uVar12 = puVar29[1];
                           puVar20 = puVar16 + 4;
                           *puVar16 = *puVar29;
                           puVar16[1] = uVar12;
                           uVar12 = puVar29[3];
                           puVar16[2] = puVar29[2];
                           puVar16[3] = uVar12;
                           puVar29 = puVar29 + 4;
                           puVar16 = puVar20;
                        }
 while ( puVar20 < (undefined8*)( (long)puVar36 + sVar35 ) );
                     }

                  }

               }

               LAB_00104c3e:if (0xffffffffffffff88 < uVar34) goto LAB_001041c0;
               puVar36 = (undefined8*)( (long)puVar31 + uVar34 );
               uVar22 = local_d8;
               puVar26 = local_a8;
               while (param_6 = param_6 + -1,local_d8 = uVar22,local_a8 = puVar26,param_6 != 0) {
                  puVar1 = (ushort*)( local_88 + local_90 * 8 );
                  bVar4 = (byte)puVar1[1];
                  puVar2 = (ushort*)( local_68 + local_70 * 8 );
                  bVar5 = (byte)puVar2[1];
                  uVar18 = *(uint*)( puVar1 + 2 );
                  local_d8 = (ulong)uVar18;
                  puVar3 = (ushort*)( local_78 + local_80 * 8 );
                  bVar6 = *(byte*)( (long)puVar1 + 3 );
                  bVar7 = (byte)puVar3[1];
                  uVar23 = ( ulong ) * (uint*)( puVar2 + 2 );
                  bVar8 = *(byte*)( (long)puVar2 + 3 );
                  bVar9 = *(byte*)( (long)puVar3 + 3 );
                  if (bVar7 < 2) {
                     if (bVar7 == 1) {
                        uVar34 = (ulong)local_b0[0];
                        local_b0[0] = local_b0[0] + 1;
                        lVar32 = ( ulong )(*(uint*)( puVar3 + 2 ) + ( uint )(uVar18 == 0)) - ( (long)( local_b8 << ( uVar34 & 0x3f ) ) >> 0x3f );
                        if (lVar32 == 3) {
                           uVar33 = ( local_60[0] - 1 ) - ( ulong )(local_60[0] - 1 == 0);
                        }
 else {
                           uVar33 = local_60[lVar32] - ( ulong )(local_60[lVar32] == 0);
                           if (lVar32 == 1) goto LAB_00104d92;
                        }

                        local_60[2] = local_60[1];
                     }
 else {
                        uVar33 = local_60[uVar18 == 0];
                        local_60[0] = *(ulong*)( local_b0 + ( 0xb - ( ulong )(uVar18 == 0) ) * 2 );
                     }

                  }
 else {
                     uVar34 = (ulong)local_b0[0];
                     local_b0[0] = bVar7 + local_b0[0];
                     uVar33 = ( ulong ) * (uint*)( puVar3 + 2 ) + ( ( local_b8 << ( uVar34 & 0x3f ) ) >> ( ( ulong ) - (uint)bVar7 & 0x3f ) );
                     local_60[2] = local_60[1];
                  }

                  LAB_00104d92:local_60[1] = local_60[0];
                  local_60[0] = uVar33;
                  if (bVar5 != 0) {
                     uVar34 = (ulong)local_b0[0];
                     local_b0[0] = bVar5 + local_b0[0];
                     uVar23 = uVar23 + ( ( local_b8 << ( uVar34 & 0x3f ) ) >> ( ( ulong ) - (uint)bVar5 & 0x3f ) );
                  }

                  if (0x1e < ( byte )(bVar4 + bVar5 + bVar7)) {
                     if (local_b0[0] < 0x41) {
                        if (puVar26 < local_98) {
                           if (puVar26 != local_a0) {
                              uVar18 = local_b0[0] >> 3;
                              local_a8 = (ulong*)( (long)puVar26 - (ulong)uVar18 );
                              if (local_a8 < local_a0) {
                                 uVar18 = (int)puVar26 - (int)local_a0;
                                 local_a8 = (ulong*)( (long)puVar26 - (ulong)uVar18 );
                              }

                              local_b8 = *local_a8;
                              local_b0[0] = local_b0[0] + uVar18 * -8;
                           }

                        }
 else {
                           local_a8 = (ulong*)( (long)puVar26 - ( ulong )(local_b0[0] >> 3) );
                           local_b8 = *local_a8;
                           local_b0[0] = local_b0[0] & 7;
                        }

                     }
 else {
                        local_a8 = &zeroFilled_2;
                     }

                  }

                  if (bVar4 != 0) {
                     uVar34 = (ulong)local_b0[0];
                     local_b0[0] = bVar4 + local_b0[0];
                     local_d8 = local_d8 + ( ( local_b8 << ( uVar34 & 0x3f ) ) >> ( ( ulong ) - (uint)bVar4 & 0x3f ) );
                  }

                  if (param_6 != 1) {
                     iVar15 = bVar6 + local_b0[0] + (uint)bVar8;
                     sVar11 = ( bVar6 < 0x41 ) * ( '@' - bVar6 );
                     local_90 = ( ( ( local_b8 >> ( ( ulong ) - ( bVar6 + local_b0[0] ) & 0x3f ) ) << sVar11 ) >> sVar11 ) + ( ulong ) * puVar1;
                     local_b0[0] = iVar15 + (uint)bVar9;
                     sVar11 = ( bVar8 < 0x41 ) * ( '@' - bVar8 );
                     local_70 = ( ( ( local_b8 >> ( ( ulong )(uint) - iVar15 & 0x3f ) ) << sVar11 ) >> sVar11 ) + ( ulong ) * puVar2;
                     sVar11 = ( bVar9 < 0x41 ) * ( '@' - bVar9 );
                     local_80 = ( ( ( local_b8 >> ( ( ulong ) - local_b0[0] & 0x3f ) ) << sVar11 ) >> sVar11 ) + ( ulong ) * puVar3;
                     if (local_b0[0] < 0x41) {
                        if (local_a8 < local_98) {
                           if (local_a8 != local_a0) {
                              uVar18 = local_b0[0] >> 3;
                              puVar26 = (ulong*)( (long)local_a8 - (ulong)uVar18 );
                              if (puVar26 < local_a0) {
                                 uVar18 = (int)local_a8 - (int)local_a0;
                                 puVar26 = (ulong*)( (long)local_a8 - (ulong)uVar18 );
                              }

                              local_b8 = *puVar26;
                              local_b0[0] = local_b0[0] + uVar18 * -8;
                              local_a8 = puVar26;
                           }

                        }
 else {
                           local_a8 = (ulong*)( (long)local_a8 - ( ulong )(local_b0[0] >> 3) );
                           local_b8 = *local_a8;
                           local_b0[0] = local_b0[0] & 7;
                        }

                     }
 else {
                        local_a8 = &zeroFilled_2;
                     }

                  }

                  puVar31 = (undefined8*)( (long)puVar36 + local_d8 );
                  uVar34 = local_d8 + uVar23;
                  puVar29 = (undefined8*)( (long)local_120 + local_d8 );
                  puVar16 = (undefined8*)( (long)puVar31 - uVar33 );
                  if (( puVar19 + -4 < (undefined8*)( (long)puVar36 + uVar34 ) ) || ( local_190 < puVar29 )) {
                     sStack_d0 = uVar23;
                     local_c8 = uVar33;
                     uVar34 = ZSTD_execSequenceEnd(puVar36, puVar19, &local_120, local_190, puVar37, lVar24, local_d8, uVar23, uVar33, puVar10);
                  }
 else {
                     uVar12 = local_120[1];
                     *puVar36 = *local_120;
                     puVar36[1] = uVar12;
                     if (0x10 < local_d8) {
                        uVar12 = local_120[3];
                        puVar36[2] = local_120[2];
                        puVar36[3] = uVar12;
                        if (0x10 < (long)( local_d8 - 0x10 )) {
                           puVar20 = puVar36 + 4;
                           do {
                              uVar12 = local_120[5];
                              puVar28 = puVar20 + 4;
                              *puVar20 = local_120[4];
                              puVar20[1] = uVar12;
                              uVar12 = local_120[7];
                              puVar20[2] = local_120[6];
                              puVar20[3] = uVar12;
                              puVar20 = puVar28;
                              local_120 = local_120 + 4;
                           }
 while ( puVar28 < puVar31 );
                        }

                     }

                     local_120 = puVar29;
                     local_d8 = uVar22;
                     if (( ulong )((long)puVar31 - (long)puVar37) < uVar33) {
                        if (( ulong )((long)puVar31 - lVar24) < uVar33) goto LAB_001041b9;
                        puVar27 = (undefined1*)( (long)puVar16 + ( (long)puVar10 - (long)puVar37 ) );
                        if (puVar27 + uVar23 <= puVar10) {
                           memmove(puVar31, puVar27, uVar23);
                           goto LAB_00104fae;
                        }

                        sVar35 = (long)puVar37 - (long)puVar16;
                        uVar23 = uVar23 - sVar35;
                        pvVar17 = memmove(puVar31, puVar27, sVar35);
                        puVar31 = (undefined8*)( (long)pvVar17 + sVar35 );
                        puVar16 = puVar37;
                     }

                     if (uVar33 < 0x10) {
                        if (uVar33 < 8) {
                           *(undefined1*)puVar31 = *(undefined1*)puVar16;
                           for (int i = 0; i < 3; i++) {
                              *(undefined1*)( (long)puVar31 + ( i + 1 ) ) = *(undefined1*)( (long)puVar16 + ( i + 1 ) );
                           }

                           uVar18 = *(uint*)( dec32table_0 + uVar33 * 4 );
                           *(undefined4*)( (long)puVar31 + 4 ) = *(undefined4*)( (long)puVar16 + (ulong)uVar18 );
                           puVar16 = (undefined8*)( (long)( (long)puVar16 + (ulong)uVar18 ) - (long)*(int*)( dec64table_1 + uVar33 * 4 ) );
                        }
 else {
                           *puVar31 = *puVar16;
                        }

                        if (8 < uVar23) {
                           if ((long)puVar31 - (long)puVar16 < 0x10) {
                              puVar29 = puVar31 + 1;
                              do {
                                 puVar16 = puVar16 + 1;
                                 puVar20 = puVar29 + 1;
                                 *puVar29 = *puVar16;
                                 puVar29 = puVar20;
                              }
 while ( puVar20 < (undefined8*)( (long)puVar31 + uVar23 ) );
                           }
 else {
                              uVar12 = puVar16[2];
                              puVar31[1] = puVar16[1];
                              puVar31[2] = uVar12;
                              if (0x18 < (long)uVar23) {
                                 puVar29 = puVar16 + 3;
                                 puVar16 = puVar31 + 3;
                                 do {
                                    uVar12 = puVar29[1];
                                    puVar20 = puVar16 + 4;
                                    *puVar16 = *puVar29;
                                    puVar16[1] = uVar12;
                                    uVar12 = puVar29[3];
                                    puVar16[2] = puVar29[2];
                                    puVar16[3] = uVar12;
                                    puVar29 = puVar29 + 4;
                                    puVar16 = puVar20;
                                 }
 while ( puVar20 < (undefined8*)( (long)puVar31 + uVar23 ) );
                              }

                           }

                        }

                     }
 else {
                        uVar12 = puVar16[1];
                        *puVar31 = *puVar16;
                        puVar31[1] = uVar12;
                        if (0x10 < (long)uVar23) {
                           puVar29 = puVar16 + 2;
                           puVar16 = puVar31 + 2;
                           do {
                              uVar12 = puVar29[1];
                              puVar20 = puVar16 + 4;
                              *puVar16 = *puVar29;
                              puVar16[1] = uVar12;
                              uVar12 = puVar29[3];
                              puVar16[2] = puVar29[2];
                              puVar16[3] = uVar12;
                              puVar29 = puVar29 + 4;
                              puVar16 = puVar20;
                           }
 while ( puVar20 < (undefined8*)( uVar23 + (long)puVar31 ) );
                        }

                     }

                  }

                  LAB_00104fae:if (0xffffffffffffff88 < uVar34) goto LAB_001041c0;
                  puVar36 = (undefined8*)( (long)puVar36 + uVar34 );
                  uVar22 = local_d8;
                  puVar26 = local_a8;
               }
;
               LAB_001046b2:if (( local_a8 != local_a0 ) || ( local_b0[0] != 0x40 )) goto LAB_001041b9;
               *(int*)( (long)param_1 + 0x683c ) = (int)local_60[0];
               *(int*)( param_1 + 0xd08 ) = (int)local_60[1];
               *(int*)( (long)param_1 + 0x6844 ) = (int)local_60[2];
               goto LAB_001041f3;
            }

         }

      }

      LAB_001041b9:uVar34 = 0xffffffffffffffec;
      goto LAB_001041c0;
   }

   LAB_001041f3:uVar22 = (long)local_190 - (long)local_120;
   if (*(int*)( param_1 + 0xed4 ) == 2) {
      if (uVar22 <= ( ulong )((long)puVar19 - (long)puVar36)) {
         if (puVar36 == (undefined8*)0x0) {
            *(undefined4*)( param_1 + 0xed4 ) = 0;
            if ((undefined8*)0xffff < puVar19) goto LAB_00104227;
         }
 else {
            puVar37 = (undefined8*)( (long)puVar36 + uVar22 );
            uVar23 = 0x10000;
            memmove(puVar36, local_120, uVar22);
            local_120 = (undefined8*)( (long)param_1 + 0x76a4 );
            *(undefined4*)( param_1 + 0xed4 ) = 0;
            if (0xffff < ( ulong )((long)puVar19 - (long)puVar37)) goto LAB_00104772;
         }

      }

   }
 else if (uVar22 <= ( ulong )((long)puVar19 - (long)puVar36)) {
      uVar23 = uVar22;
      puVar37 = puVar36;
      if (puVar36 == (undefined8*)0x0) {
         LAB_00104227:lVar24 = 0;
      }
 else {
         LAB_00104772:lVar24 = uVar23 + (long)puVar37;
         memcpy(puVar37, local_120, uVar23);
      }

      uVar34 = lVar24 - (long)param_2;
      goto LAB_001041c0;
   }

   uVar34 = 0xffffffffffffffba;
   LAB_001041c0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar34;
   code_r0x001046a0:puVar36 = (undefined8*)( (long)puVar36 + uVar34 );
   param_6 = param_6 + -1;
   if (param_6 == 0) goto LAB_001046b2;
   goto LAB_001043a8;
}
ulong ZSTD_decompressSequencesLong_default_constprop_0(undefined8 *param_1, undefined8 *param_2, long param_3, ulong *param_4, ulong param_5, uint param_6) {
   ulong *puVar1;
   ushort *puVar2;
   ushort *puVar3;
   ushort *puVar4;
   byte bVar5;
   byte bVar6;
   int iVar7;
   undefined8 *puVar8;
   long lVar9;
   undefined1 *puVar10;
   undefined8 uVar11;
   bool bVar12;
   bool bVar13;
   bool bVar14;
   bool bVar15;
   ulong uVar16;
   ulong uVar17;
   ulong uVar18;
   ulong uVar19;
   uint uVar20;
   void *pvVar21;
   ulong uVar22;
   byte bVar23;
   byte bVar24;
   uint uVar25;
   ulong *puVar26;
   size_t sVar27;
   undefined8 *puVar28;
   ulong uVar29;
   int iVar30;
   uint uVar31;
   undefined8 *puVar32;
   undefined8 *puVar33;
   ulong uVar34;
   ulong uVar35;
   ulong uVar36;
   ulong uVar37;
   int iVar38;
   undefined1 *puVar39;
   undefined8 *puVar40;
   undefined8 *puVar41;
   ulong *puVar42;
   uint uVar43;
   long lVar44;
   undefined8 *puVar45;
   ulong uVar46;
   undefined8 *puVar47;
   long in_FS_OFFSET;
   ulong uVar48;
   ulong *puStack_308;
   ulong uStack_300;
   undefined8 *local_2b0;
   undefined8 *local_2a8;
   long lStack_298;
   long lStack_290;
   long lStack_288;
   undefined8 *local_240;
   ulong uStack_238;
   ulong uStack_230;
   ulong uStack_228;
   ulong uStack_218;
   ulong uStack_210;
   ulong uStack_208;
   ulong uStack_1f8;
   ulong uStack_1f0;
   ulong uStack_1e8;
   ulong uStack_1d8;
   ulong uStack_1d0;
   ulong uStack_1c8;
   ulong uStack_1b8;
   ulong uStack_1b0;
   ulong uStack_1a8;
   ulong uStack_198;
   ulong uStack_190;
   ulong uStack_188;
   ulong local_178;
   uint auStack_170[2];
   ulong *local_168;
   ulong *local_160;
   ulong *local_158;
   long lStack_150;
   long lStack_148;
   long lStack_140;
   long lStack_138;
   long lStack_130;
   long lStack_128;
   ulong local_120[28];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar7 = *(int*)( param_1 + 0xed4 );
   if (iVar7 == 1) {
      local_2a8 = (undefined8*)param_1[0xed2];
   }
 else {
      local_2a8 = (undefined8*)( (long)param_2 + param_3 );
      if (param_3 < 1) {
         local_2a8 = param_2;
      }

   }

   puVar45 = (undefined8*)param_1[0xeb5];
   local_2b0 = (undefined8*)param_1[0xed3];
   puVar8 = (undefined8*)param_1[0xe99];
   lVar9 = param_1[0xe9a];
   puVar10 = (undefined1*)param_1[0xe9b];
   puVar47 = param_2;
   local_240 = puVar45;
   if (param_6 != 0) {
      *(undefined4*)( (long)param_1 + 0x7534 ) = 1;
      local_120[0] = ( ulong ) * (uint*)( (long)param_1 + 0x683c );
      local_120[1] = ( ulong ) * (uint*)( param_1 + 0xd08 );
      local_120[2] = ( ulong ) * (uint*)( (long)param_1 + 0x6844 );
      if (param_5 != 0) {
         puVar1 = param_4 + 1;
         bVar5 = *(byte*)( (long)param_4 + ( param_5 - 1 ) );
         local_160 = param_4;
         local_158 = puVar1;
         if (param_5 < 8) {
            local_178 = ( ulong )(byte) * param_4;
            switch (param_5) {
               case 7:
          local_178 = local_178 + ((ulong)*(byte *)((long)param_4 + 6) << 0x30);
               case 6:
          local_178 = local_178 + ((ulong)*(byte *)((long)param_4 + 5) << 0x28);
               case 5:
          local_178 = local_178 + ((ulong)*(byte *)((long)param_4 + 4) << 0x20);
               case 4:
          local_178 = local_178 + (ulong)*(byte *)((long)param_4 + 3) * 0x1000000;
               case 3:
          local_178 = local_178 + (ulong)*(byte *)((long)param_4 + 2) * 0x10000;
               case 2:
          local_178 = (ulong)*(byte *)((long)param_4 + 1) * 0x100 + local_178;
            }

            local_168 = param_4;
            if (bVar5 != 0) {
               uVar20 = 0x1f;
               if (bVar5 != 0) {
                  for (; bVar5 >> uVar20 == 0; uVar20 = uVar20 - 1) {}
               }

               auStack_170[0] = ( ( uVar20 ^ 0x1f ) - 0x17 ) + ( 8 - (int)param_5 ) * 8;
               LAB_001058b2:uVar20 = 8;
               if ((int)param_6 < 9) {
                  uVar20 = param_6;
               }

               ZSTD_initFseState(&lStack_150, &local_178, *param_1);
               ZSTD_initFseState(&lStack_140, &local_178, param_1[2]);
               ZSTD_initFseState(&lStack_130, &local_178, param_1[1]);
               if ((int)param_6 < 1) {
                  uVar25 = 0;
               }
 else {
                  bVar13 = false;
                  puVar42 = local_120;
                  uVar43 = 0;
                  puStack_308 = local_168;
                  bVar12 = false;
                  lStack_298 = lStack_150;
                  bVar14 = false;
                  bVar15 = false;
                  lStack_290 = lStack_130;
                  lStack_288 = lStack_140;
                  uVar34 = local_178;
                  uVar25 = auStack_170[0];
                  do {
                     puVar42 = puVar42 + 3;
                     puVar2 = (ushort*)( lStack_148 + lStack_298 * 8 );
                     bVar5 = (byte)puVar2[1];
                     uVar31 = *(uint*)( puVar2 + 2 );
                     uVar29 = (ulong)uVar31;
                     puVar3 = (ushort*)( lStack_128 + lStack_290 * 8 );
                     bVar24 = (byte)puVar3[1];
                     uVar35 = ( ulong ) * (uint*)( puVar3 + 2 );
                     puVar4 = (ushort*)( lStack_138 + lStack_288 * 8 );
                     bVar6 = (byte)puVar4[1];
                     bVar23 = (byte)uVar25;
                     if (bVar6 < 2) {
                        if (bVar6 == 1) {
                           uVar25 = uVar25 + 1;
                           lVar44 = ( ulong )(*(uint*)( puVar4 + 2 ) + ( uint )(uVar31 == 0)) - ( (long)( uVar34 << ( bVar23 & 0x3f ) ) >> 0x3f );
                           if (lVar44 == 3) {
                              uVar36 = ( local_120[0] - 1 ) - ( ulong )(local_120[0] - 1 == 0);
                              LAB_00106a44:local_120[2] = local_120[1];
                           }
 else {
                              uVar36 = local_120[lVar44] - ( ulong )(local_120[lVar44] == 0);
                              if (lVar44 != 1) goto LAB_00106a44;
                           }

                           bVar13 = true;
                        }
 else {
                           uVar36 = local_120[uVar31 == 0];
                           local_120[0] = *(ulong*)( auStack_170 + ( 0xb - ( ulong )(uVar31 == 0) ) * 2 );
                        }

                     }
 else {
                        bVar13 = true;
                        uVar25 = uVar25 + bVar6;
                        uVar36 = ( ulong ) * (uint*)( puVar4 + 2 ) + ( ( uVar34 << ( bVar23 & 0x3f ) ) >> ( -bVar6 & 0x3f ) );
                        local_120[2] = local_120[1];
                     }

                     local_120[1] = local_120[0];
                     local_120[0] = uVar36;
                     uVar31 = uVar25;
                     if (bVar24 != 0) {
                        bVar13 = true;
                        uVar35 = uVar35 + ( ( uVar34 << ( (byte)uVar25 & 0x3f ) ) >> ( -bVar24 & 0x3f ) );
                        uVar31 = uVar25 + bVar24;
                     }

                     if (0x1e < ( byte )(bVar5 + bVar24 + bVar6)) {
                        if (uVar31 < 0x41) {
                           if (puStack_308 < puVar1) {
                              if (param_4 != puStack_308) {
                                 uVar25 = uVar31 >> 3;
                                 puVar26 = (ulong*)( (long)puStack_308 - (ulong)uVar25 );
                                 if (puVar26 < param_4) {
                                    uVar25 = ( uint )((long)puStack_308 - (long)param_4);
                                    puVar26 = (ulong*)( (long)puStack_308 - ( (long)puStack_308 - (long)param_4 & 0xffffffffU ) );
                                 }

                                 uVar34 = *puVar26;
                                 bVar12 = true;
                                 bVar13 = true;
                                 bVar14 = true;
                                 uVar31 = uVar31 + uVar25 * -8;
                                 puStack_308 = puVar26;
                              }

                           }
 else {
                              bVar12 = true;
                              puStack_308 = (ulong*)( (long)puStack_308 - ( ulong )(uVar31 >> 3) );
                              bVar13 = true;
                              bVar14 = true;
                              uVar34 = *puStack_308;
                              uVar31 = uVar31 & 7;
                           }

                        }
 else {
                           bVar12 = true;
                           puStack_308 = &zeroFilled_2;
                        }

                     }

                     uVar25 = uVar31;
                     if (bVar5 != 0) {
                        bVar13 = true;
                        uVar25 = uVar31 + bVar5;
                        uVar29 = uVar29 + ( ( uVar34 << ( (byte)uVar31 & 0x3f ) ) >> ( -bVar5 & 0x3f ) );
                     }

                     if (uVar43 != param_6 - 1) {
                        iVar38 = *(byte*)( (long)puVar2 + 3 ) + uVar25;
                        iVar30 = ( uint ) * (byte*)( (long)puVar3 + 3 ) + iVar38;
                        lStack_298 = ( ~(-1L << (*(byte *)((long)puVar2 + 3) & 0x3f)) & uVar34 >> ( -(char)iVar38 & 0x3fU ) ) + ( ulong ) * puVar2;
                        uVar25 = ( uint ) * (byte*)( (long)puVar4 + 3 ) + iVar30;
                        lStack_290 = ( ulong ) * puVar3 + ( ~(-1L << (*(byte *)((long)puVar3 + 3) & 0x3f)) & uVar34 >> ( -(char)iVar30 & 0x3fU ) );
                        lStack_288 = ( uVar34 >> ( -(char)uVar25 & 0x3fU ) & ~(-1L << (*(byte *)((long)puVar4 + 3) & 0x3f)) ) + ( ulong ) * puVar4;
                        if (uVar25 < 0x41) {
                           if (puStack_308 < puVar1) {
                              if (param_4 == puStack_308) {
                                 bVar13 = true;
                                 bVar15 = true;
                                 goto LAB_00105b9c;
                              }

                              uVar31 = uVar25 >> 3;
                              puVar26 = (ulong*)( (long)puStack_308 - (ulong)uVar31 );
                              if ((ulong*)( (long)puStack_308 - (ulong)uVar31 ) < param_4) {
                                 uVar31 = (int)puStack_308 - (int)param_4;
                                 puVar26 = (ulong*)( (long)puStack_308 - (ulong)uVar31 );
                              }

                              puStack_308 = puVar26;
                              uVar25 = uVar25 + uVar31 * -8;
                           }
 else {
                              puStack_308 = (ulong*)( (long)puStack_308 - ( ulong )(uVar25 >> 3) );
                              uVar25 = uVar25 & 7;
                           }

                           uVar34 = *puStack_308;
                           bVar12 = true;
                           bVar13 = true;
                           bVar14 = true;
                           bVar15 = true;
                        }
 else {
                           bVar12 = true;
                           puStack_308 = &zeroFilled_2;
                           bVar13 = true;
                           bVar15 = true;
                        }

                     }

                     LAB_00105b9c:uVar43 = uVar43 + 1;
                     *puVar42 = uVar29;
                     puVar42[1] = uVar35;
                     puVar42[2] = uVar36;
                  }
 while ( (int)uVar43 < (int)uVar20 );
                  if (bVar12) {
                     local_168 = puStack_308;
                  }

                  if (bVar13) {
                     auStack_170[0] = uVar25;
                  }

                  if (bVar14) {
                     local_178 = uVar34;
                  }

                  if (bVar15) {
                     lStack_140 = lStack_288;
                     lStack_130 = lStack_290;
                     lStack_150 = lStack_298;
                  }

                  puVar41 = param_2;
                  uVar43 = uVar20;
                  uVar25 = uVar20;
                  if ((int)uVar20 < (int)param_6) {
                     do {
                        puVar2 = (ushort*)( lStack_148 + lStack_150 * 8 );
                        bVar5 = (byte)puVar2[1];
                        puVar3 = (ushort*)( lStack_128 + lStack_130 * 8 );
                        bVar24 = (byte)puVar3[1];
                        puVar4 = (ushort*)( lStack_138 + lStack_140 * 8 );
                        uVar34 = ( ulong ) * (uint*)( puVar3 + 2 );
                        uVar25 = *(uint*)( puVar2 + 2 );
                        uStack_300 = (ulong)uVar25;
                        bVar6 = (byte)puVar4[1];
                        bVar23 = (byte)auStack_170[0];
                        if (bVar6 < 2) {
                           if (bVar6 == 1) {
                              auStack_170[0] = auStack_170[0] + 1;
                              lVar44 = ( ulong )(*(uint*)( puVar4 + 2 ) + ( uint )(uVar25 == 0)) - ( (long)( local_178 << ( bVar23 & 0x3f ) ) >> 0x3f );
                              if (lVar44 == 3) {
                                 uVar35 = ( local_120[0] - 1 ) - ( ulong )(local_120[0] - 1 == 0);
                              }
 else {
                                 uVar35 = local_120[lVar44] - ( ulong )(local_120[lVar44] == 0);
                                 if (lVar44 == 1) goto LAB_00105fa2;
                              }

                              local_120[2] = local_120[1];
                           }
 else {
                              uVar35 = local_120[uVar25 == 0];
                              local_120[0] = *(ulong*)( auStack_170 + ( 0xb - ( ulong )(uVar25 == 0) ) * 2 );
                           }

                        }
 else {
                           auStack_170[0] = bVar6 + auStack_170[0];
                           local_120[2] = local_120[1];
                           uVar35 = ( ulong ) * (uint*)( puVar4 + 2 ) + ( ( local_178 << ( bVar23 & 0x3f ) ) >> ( -bVar6 & 0x3f ) );
                        }

                        LAB_00105fa2:local_120[1] = local_120[0];
                        local_120[0] = uVar35;
                        if (bVar24 != 0) {
                           bVar23 = (byte)auStack_170[0];
                           auStack_170[0] = bVar24 + auStack_170[0];
                           uVar34 = uVar34 + ( ( local_178 << ( bVar23 & 0x3f ) ) >> ( -bVar24 & 0x3f ) );
                        }

                        puVar42 = local_168;
                        if (0x1e < ( byte )(bVar5 + bVar24 + bVar6)) {
                           if (auStack_170[0] < 0x41) {
                              if (local_168 < puVar1) {
                                 if (param_4 != local_168) {
                                    uVar25 = auStack_170[0] >> 3;
                                    puVar42 = (ulong*)( (long)local_168 - (ulong)uVar25 );
                                    if (puVar42 < param_4) {
                                       uVar25 = ( uint )((long)local_168 - (long)param_4);
                                       puVar42 = (ulong*)( (long)local_168 - ( (long)local_168 - (long)param_4 & 0xffffffffU ) );
                                    }

                                    local_178 = *puVar42;
                                    auStack_170[0] = auStack_170[0] + uVar25 * -8;
                                 }

                              }
 else {
                                 puVar42 = (ulong*)( (long)local_168 - ( ulong )(auStack_170[0] >> 3) );
                                 local_178 = *puVar42;
                                 auStack_170[0] = auStack_170[0] & 7;
                              }

                           }
 else {
                              local_168 = &zeroFilled_2;
                              puVar42 = local_168;
                           }

                        }

                        if (bVar5 != 0) {
                           bVar24 = (byte)auStack_170[0];
                           auStack_170[0] = bVar5 + auStack_170[0];
                           uStack_300 = uStack_300 + ( ( local_178 << ( bVar24 & 0x3f ) ) >> ( -bVar5 & 0x3f ) );
                        }

                        local_168 = puVar42;
                        if (uVar43 != param_6 - 1) {
                           iVar38 = *(byte*)( (long)puVar2 + 3 ) + auStack_170[0];
                           iVar30 = ( uint ) * (byte*)( (long)puVar3 + 3 ) + iVar38;
                           lStack_150 = ( ~(-1L << (*(byte *)((long)puVar2 + 3) & 0x3f)) & local_178 >> ( -(char)iVar38 & 0x3fU ) ) + ( ulong ) * puVar2;
                           auStack_170[0] = iVar30 + ( uint ) * (byte*)( (long)puVar4 + 3 );
                           lStack_130 = ( ~(-1L << (*(byte *)((long)puVar3 + 3) & 0x3f)) & local_178 >> ( -(char)iVar30 & 0x3fU ) ) + ( ulong ) * puVar3;
                           lStack_140 = ( local_178 >> ( -(char)auStack_170[0] & 0x3fU ) & ~(-1L << (*(byte *)((long)puVar4 + 3) & 0x3f)) ) + ( ulong ) * puVar4;
                           if (auStack_170[0] < 0x41) {
                              if (puVar42 < puVar1) {
                                 if (param_4 != puVar42) {
                                    uVar25 = auStack_170[0] >> 3;
                                    local_168 = (ulong*)( (long)puVar42 - (ulong)uVar25 );
                                    if (local_168 < param_4) {
                                       uVar25 = (int)puVar42 - (int)param_4;
                                       local_168 = (ulong*)( (long)puVar42 - (ulong)uVar25 );
                                    }

                                    local_178 = *local_168;
                                    auStack_170[0] = auStack_170[0] + uVar25 * -8;
                                 }

                              }
 else {
                                 local_168 = (ulong*)( (long)puVar42 - ( ulong )(auStack_170[0] >> 3) );
                                 local_178 = *local_168;
                                 auStack_170[0] = auStack_170[0] & 7;
                              }

                           }
 else {
                              local_168 = &zeroFilled_2;
                           }

                        }

                        uVar36 = ( ulong )(uVar43 & 7);
                        lVar44 = uVar36 * 0x18;
                        uVar29 = local_120[uVar36 * 3 + 3];
                        puVar47 = (undefined8*)( (long)puVar45 + uVar29 );
                        if (iVar7 == 2) {
                           if ((undefined8*)param_1[0xed3] < puVar47) {
                              uVar46 = (long)param_1[0xed3] - (long)puVar45;
                              if (uVar46 != 0) {
                                 if (( ulong )((long)local_2a8 - (long)puVar41) < uVar46) goto LAB_00106850;
                                 uVar29 = uVar29 - uVar46;
                                 puVar45 = (undefined8*)( (long)puVar41 + uVar46 );
                                 ZSTD_safecopyDstBeforeSrc(puVar41);
                                 *(ulong*)( (long)local_120 + lVar44 + 0x18 ) = uVar29;
                                 puVar41 = puVar45;
                              }

                              puVar40 = (undefined8*)( (long)puVar41 + uVar29 );
                              uVar37 = local_120[uVar36 * 3 + 4];
                              uVar22 = local_120[uVar36 * 3 + 5];
                              uStack_228 = local_120[uVar36 * 3 + 5];
                              puVar33 = (undefined8*)( (long)param_1 + 0x76a4 );
                              local_2b0 = (undefined8*)( (long)param_1 + 0x176a4 );
                              local_240 = (undefined8*)( (long)puVar33 + uVar29 );
                              uVar48 = local_120[uVar36 * 3 + 3];
                              uStack_230 = local_120[uVar36 * 3 + 4];
                              uVar46 = uVar37 + uVar29;
                              puVar45 = (undefined8*)( (long)puVar40 - uVar22 );
                              *(undefined4*)( param_1 + 0xed4 ) = 0;
                              uStack_238 = uVar48;
                              uVar16 = uVar37;
                              uVar17 = uVar22;
                              uVar18 = uStack_210;
                              uVar19 = uStack_208;
                              if (( local_2a8 + -4 < (undefined8*)( (long)puVar41 + uVar46 ) ) || ( local_2b0 < local_240 )) goto LAB_001067f5;
                              uVar11 = *(undefined8*)( (long)param_1 + 0x76ac );
                              *puVar41 = *(undefined8*)( (long)param_1 + 0x76a4 );
                              puVar41[1] = uVar11;
                              if (0x10 < uVar29) {
                                 uVar11 = *(undefined8*)( (long)param_1 + 0x76bc );
                                 puVar41[2] = *(undefined8*)( (long)param_1 + 0x76b4 );
                                 puVar41[3] = uVar11;
                                 if (0x10 < (long)( uVar29 - 0x10 )) {
                                    puVar47 = puVar41 + 4;
                                    puVar33 = (undefined8*)( (long)param_1 + 0x76c4 );
                                    do {
                                       uVar11 = puVar33[1];
                                       puVar32 = puVar47 + 4;
                                       *puVar47 = *puVar33;
                                       puVar47[1] = uVar11;
                                       uVar11 = puVar33[3];
                                       puVar47[2] = puVar33[2];
                                       puVar47[3] = uVar11;
                                       puVar47 = puVar32;
                                       puVar33 = puVar33 + 4;
                                    }
 while ( puVar32 < puVar40 );
                                 }

                              }

                              if (( ulong )((long)puVar40 - (long)puVar8) < uVar22) {
                                 if (( ulong )((long)puVar40 - lVar9) < uVar22) goto LAB_00105768;
                                 puVar39 = (undefined1*)( (long)puVar45 + ( (long)puVar10 - (long)puVar8 ) );
                                 if (puVar39 + uVar37 <= puVar10) {
                                    LAB_00106740:memmove(puVar40, puVar39, uVar37);
                                    goto LAB_00106266;
                                 }

                                 sVar27 = (long)puVar8 - (long)puVar45;
                                 pvVar21 = memmove(puVar40, puVar39, sVar27);
                                 puVar40 = (undefined8*)( (long)pvVar21 + sVar27 );
                                 uVar37 = uVar37 - sVar27;
                                 puVar45 = puVar8;
                              }

                              if (uVar22 < 0x10) {
                                 if (uVar22 < 8) {
                                    *(undefined1*)puVar40 = *(undefined1*)puVar45;
                                    for (int i = 0; i < 3; i++) {
                                       *(undefined1*)( (long)puVar40 + ( i + 1 ) ) = *(undefined1*)( (long)puVar45 + ( i + 1 ) );
                                    }

                                    uVar25 = *(uint*)( dec32table_0 + uVar22 * 4 );
                                    *(undefined4*)( (long)puVar40 + 4 ) = *(undefined4*)( (long)puVar45 + (ulong)uVar25 );
                                    puVar45 = (undefined8*)( (long)( (long)puVar45 + (ulong)uVar25 ) - (long)*(int*)( dec64table_1 + uVar22 * 4 ) );
                                 }
 else {
                                    *puVar40 = *puVar45;
                                 }

                                 if (8 < uVar37) {
                                    if ((long)puVar40 - (long)puVar45 < 0x10) {
                                       puVar47 = puVar40 + 1;
                                       do {
                                          puVar45 = puVar45 + 1;
                                          puVar33 = puVar47 + 1;
                                          *puVar47 = *puVar45;
                                          puVar47 = puVar33;
                                       }
 while ( puVar33 < (undefined8*)( (long)puVar40 + uVar37 ) );
                                    }
 else {
                                       uVar11 = puVar45[2];
                                       puVar40[1] = puVar45[1];
                                       puVar40[2] = uVar11;
                                       if (0x18 < (long)uVar37) {
                                          puVar45 = puVar45 + 3;
                                          puVar47 = puVar40 + 3;
                                          do {
                                             uVar11 = puVar45[1];
                                             puVar33 = puVar47 + 4;
                                             *puVar47 = *puVar45;
                                             puVar47[1] = uVar11;
                                             uVar11 = puVar45[3];
                                             puVar47[2] = puVar45[2];
                                             puVar47[3] = uVar11;
                                             puVar45 = puVar45 + 4;
                                             puVar47 = puVar33;
                                          }
 while ( puVar33 < (undefined8*)( (long)puVar40 + uVar37 ) );
                                       }

                                    }

                                 }

                              }
 else {
                                 uVar11 = puVar45[1];
                                 *puVar40 = *puVar45;
                                 puVar40[1] = uVar11;
                                 if (0x10 < (long)uVar37) {
                                    puVar45 = puVar45 + 2;
                                    puVar47 = puVar40 + 2;
                                    do {
                                       uVar11 = puVar45[1];
                                       puVar33 = puVar47 + 4;
                                       *puVar47 = *puVar45;
                                       puVar47[1] = uVar11;
                                       uVar11 = puVar45[3];
                                       puVar47[2] = puVar45[2];
                                       puVar47[3] = uVar11;
                                       puVar45 = puVar45 + 4;
                                       puVar47 = puVar33;
                                    }
 while ( puVar33 < (undefined8*)( uVar37 + (long)puVar40 ) );
                                 }

                              }

                           }
 else {
                              uStack_1e8 = local_120[uVar36 * 3 + 5];
                              uVar22 = (long)puVar45 + ( uVar29 - 0x20 );
                              uStack_1f8 = local_120[uVar36 * 3 + 3];
                              uStack_1f0 = local_120[uVar36 * 3 + 4];
                              uVar37 = local_120[uVar36 * 3 + 4];
                              uVar48 = local_120[uVar36 * 3 + 5];
                              puVar40 = (undefined8*)( (long)puVar41 + uVar29 );
                              uVar46 = uVar37 + uVar29;
                              puVar33 = (undefined8*)( (long)puVar40 - uVar48 );
                              if (( uVar22 < (long)puVar41 + uVar46 ) || ( local_2b0 < puVar47 )) {
                                 uStack_1f0 = uVar37;
                                 uStack_1e8 = uVar48;
                                 uVar46 = ZSTD_execSequenceEndSplitLitBuffer(puVar41, local_2a8, uVar22, &local_240, local_2b0, puVar8, uStack_1f8, uVar37, uVar48, lVar9, puVar10);
                              }
 else {
                                 uVar11 = puVar45[1];
                                 *puVar41 = *puVar45;
                                 puVar41[1] = uVar11;
                                 if (0x10 < uVar29) {
                                    uVar11 = puVar45[3];
                                    puVar41[2] = puVar45[2];
                                    puVar41[3] = uVar11;
                                    if (0x10 < (long)( uVar29 - 0x10 )) {
                                       puVar32 = puVar41 + 4;
                                       do {
                                          uVar11 = puVar45[5];
                                          puVar28 = puVar32 + 4;
                                          *puVar32 = puVar45[4];
                                          puVar32[1] = uVar11;
                                          uVar11 = puVar45[7];
                                          puVar32[2] = puVar45[6];
                                          puVar32[3] = uVar11;
                                          puVar32 = puVar28;
                                          puVar45 = puVar45 + 4;
                                       }
 while ( puVar28 < puVar40 );
                                    }

                                 }

                                 local_240 = puVar47;
                                 if (( ulong )((long)puVar40 - (long)puVar8) < uVar48) {
                                    if (( ulong )((long)puVar40 - lVar9) < uVar48) goto LAB_00105768;
                                    puVar39 = (undefined1*)( (long)puVar33 + ( (long)puVar10 - (long)puVar8 ) );
                                    if (puVar39 + uVar37 <= puVar10) goto LAB_00106740;
                                    sVar27 = (long)puVar8 - (long)puVar33;
                                    pvVar21 = memmove(puVar40, puVar39, sVar27);
                                    puVar40 = (undefined8*)( (long)pvVar21 + sVar27 );
                                    uVar37 = uVar37 - sVar27;
                                    puVar33 = puVar8;
                                 }

                                 if (uVar48 < 0x10) {
                                    if (uVar48 < 8) {
                                       *(undefined1*)puVar40 = *(undefined1*)puVar33;
                                       for (int i = 0; i < 3; i++) {
                                          *(undefined1*)( (long)puVar40 + ( i + 1 ) ) = *(undefined1*)( (long)puVar33 + ( i + 1 ) );
                                       }

                                       uVar25 = *(uint*)( dec32table_0 + uVar48 * 4 );
                                       *(undefined4*)( (long)puVar40 + 4 ) = *(undefined4*)( (ulong)uVar25 + (long)puVar33 );
                                       puVar33 = (undefined8*)( (long)( (ulong)uVar25 + (long)puVar33 ) - (long)*(int*)( dec64table_1 + uVar48 * 4 ) );
                                    }
 else {
                                       *puVar40 = *puVar33;
                                    }

                                    if (8 < uVar37) {
                                       if ((long)puVar40 - (long)puVar33 < 0x10) {
                                          puVar45 = puVar40 + 1;
                                          do {
                                             puVar33 = puVar33 + 1;
                                             puVar47 = puVar45 + 1;
                                             *puVar45 = *puVar33;
                                             puVar45 = puVar47;
                                          }
 while ( puVar47 < (undefined8*)( (long)puVar40 + uVar37 ) );
                                       }
 else {
                                          uVar11 = puVar33[2];
                                          puVar40[1] = puVar33[1];
                                          puVar40[2] = uVar11;
                                          if (0x18 < (long)uVar37) {
                                             puVar45 = puVar33 + 3;
                                             puVar47 = puVar40 + 3;
                                             do {
                                                uVar11 = puVar45[1];
                                                puVar33 = puVar47 + 4;
                                                *puVar47 = *puVar45;
                                                puVar47[1] = uVar11;
                                                uVar11 = puVar45[3];
                                                puVar47[2] = puVar45[2];
                                                puVar47[3] = uVar11;
                                                puVar45 = puVar45 + 4;
                                                puVar47 = puVar33;
                                             }
 while ( puVar33 < (undefined8*)( (long)puVar40 + uVar37 ) );
                                          }

                                       }

                                    }

                                 }
 else {
                                    uVar11 = puVar33[1];
                                    *puVar40 = *puVar33;
                                    puVar40[1] = uVar11;
                                    if (0x10 < (long)uVar37) {
                                       puVar45 = puVar33 + 2;
                                       puVar47 = puVar40 + 2;
                                       do {
                                          uVar11 = puVar45[1];
                                          puVar33 = puVar47 + 4;
                                          *puVar47 = *puVar45;
                                          puVar47[1] = uVar11;
                                          uVar11 = puVar45[3];
                                          puVar47[2] = puVar45[2];
                                          puVar47[3] = uVar11;
                                          puVar45 = puVar45 + 4;
                                          puVar47 = puVar33;
                                       }
 while ( puVar33 < (undefined8*)( uVar37 + (long)puVar40 ) );
                                    }

                                 }

                              }

                           }

                        }
 else {
                           uStack_208 = local_120[uVar36 * 3 + 5];
                           uVar48 = local_120[uVar36 * 3 + 3];
                           uStack_210 = local_120[uVar36 * 3 + 4];
                           uVar37 = local_120[uVar36 * 3 + 4];
                           uVar22 = local_120[uVar36 * 3 + 5];
                           puVar40 = (undefined8*)( (long)puVar41 + uVar29 );
                           uVar46 = uVar37 + uVar29;
                           puVar32 = (undefined8*)( (long)puVar40 - uVar22 );
                           puVar33 = local_240;
                           uVar16 = uStack_230;
                           uVar17 = uStack_228;
                           uStack_218 = uVar48;
                           uVar18 = uVar37;
                           uVar19 = uVar22;
                           if (( local_2a8 + -4 < (undefined8*)( (long)puVar41 + uVar46 ) ) || ( local_2b0 < puVar47 )) {
                              LAB_001067f5:uStack_208 = uVar19;
                              uStack_210 = uVar18;
                              uStack_228 = uVar17;
                              uStack_230 = uVar16;
                              local_240 = puVar33;
                              uVar46 = ZSTD_execSequenceEnd(puVar41, local_2a8, &local_240, local_2b0, puVar8, lVar9, uVar48, uVar37, uVar22, puVar10);
                           }
 else {
                              uVar11 = puVar45[1];
                              *puVar41 = *puVar45;
                              puVar41[1] = uVar11;
                              if (0x10 < uVar29) {
                                 uVar11 = puVar45[3];
                                 puVar41[2] = puVar45[2];
                                 puVar41[3] = uVar11;
                                 if (0x10 < (long)( uVar29 - 0x10 )) {
                                    puVar33 = puVar41 + 4;
                                    do {
                                       uVar11 = puVar45[5];
                                       puVar28 = puVar33 + 4;
                                       *puVar33 = puVar45[4];
                                       puVar33[1] = uVar11;
                                       uVar11 = puVar45[7];
                                       puVar33[2] = puVar45[6];
                                       puVar33[3] = uVar11;
                                       puVar33 = puVar28;
                                       puVar45 = puVar45 + 4;
                                    }
 while ( puVar28 < puVar40 );
                                 }

                              }

                              local_240 = puVar47;
                              if (( ulong )((long)puVar40 - (long)puVar8) < uVar22) {
                                 if (( ulong )((long)puVar40 - lVar9) < uVar22) goto LAB_00105768;
                                 puVar39 = (undefined1*)( (long)puVar32 + ( (long)puVar10 - (long)puVar8 ) );
                                 if (puVar39 + uVar37 <= puVar10) goto LAB_00106740;
                                 sVar27 = (long)puVar8 - (long)puVar32;
                                 pvVar21 = memmove(puVar40, puVar39, sVar27);
                                 puVar40 = (undefined8*)( (long)pvVar21 + sVar27 );
                                 uVar37 = uVar37 - sVar27;
                                 puVar32 = puVar8;
                              }

                              if (uVar22 < 0x10) {
                                 if (uVar22 < 8) {
                                    *(undefined1*)puVar40 = *(undefined1*)puVar32;
                                    for (int i = 0; i < 3; i++) {
                                       *(undefined1*)( (long)puVar40 + ( i + 1 ) ) = *(undefined1*)( (long)puVar32 + ( i + 1 ) );
                                    }

                                    uVar25 = *(uint*)( dec32table_0 + uVar22 * 4 );
                                    *(undefined4*)( (long)puVar40 + 4 ) = *(undefined4*)( (ulong)uVar25 + (long)puVar32 );
                                    puVar32 = (undefined8*)( (long)( (ulong)uVar25 + (long)puVar32 ) - (long)*(int*)( dec64table_1 + uVar22 * 4 ) );
                                 }
 else {
                                    *puVar40 = *puVar32;
                                 }

                                 if (8 < uVar37) {
                                    if ((long)puVar40 - (long)puVar32 < 0x10) {
                                       puVar45 = puVar40 + 1;
                                       do {
                                          puVar32 = puVar32 + 1;
                                          puVar47 = puVar45 + 1;
                                          *puVar45 = *puVar32;
                                          puVar45 = puVar47;
                                       }
 while ( puVar47 < (undefined8*)( (long)puVar40 + uVar37 ) );
                                    }
 else {
                                       uVar11 = puVar32[2];
                                       puVar40[1] = puVar32[1];
                                       puVar40[2] = uVar11;
                                       if (0x18 < (long)uVar37) {
                                          puVar45 = puVar32 + 3;
                                          puVar47 = puVar40 + 3;
                                          do {
                                             uVar11 = puVar45[1];
                                             puVar33 = puVar47 + 4;
                                             *puVar47 = *puVar45;
                                             puVar47[1] = uVar11;
                                             uVar11 = puVar45[3];
                                             puVar47[2] = puVar45[2];
                                             puVar47[3] = uVar11;
                                             puVar45 = puVar45 + 4;
                                             puVar47 = puVar33;
                                          }
 while ( puVar33 < (undefined8*)( (long)puVar40 + uVar37 ) );
                                       }

                                    }

                                 }

                              }
 else {
                                 uVar11 = puVar32[1];
                                 *puVar40 = *puVar32;
                                 puVar40[1] = uVar11;
                                 if (0x10 < (long)uVar37) {
                                    puVar45 = puVar32 + 2;
                                    puVar47 = puVar40 + 2;
                                    do {
                                       uVar11 = puVar45[1];
                                       puVar33 = puVar47 + 4;
                                       *puVar47 = *puVar45;
                                       puVar47[1] = uVar11;
                                       uVar11 = puVar45[3];
                                       puVar47[2] = puVar45[2];
                                       puVar47[3] = uVar11;
                                       puVar45 = puVar45 + 4;
                                       puVar47 = puVar33;
                                    }
 while ( puVar33 < (undefined8*)( uVar37 + (long)puVar40 ) );
                                 }

                              }

                           }

                        }

                        LAB_00106266:if (0xffffffffffffff88 < uVar46) goto LAB_001057b6;
                        local_120[uVar36 * 3 + 3] = uStack_300;
                        local_120[uVar36 * 3 + 5] = uVar35;
                        local_120[uVar36 * 3 + 4] = uVar34;
                        puVar47 = (undefined8*)( (long)puVar41 + uVar46 );
                        uVar25 = param_6;
                        if (param_6 == uVar43 + 1) break;
                        iVar7 = *(int*)( param_1 + 0xed4 );
                        puVar45 = local_240;
                        puVar41 = (undefined8*)( (long)puVar41 + uVar46 );
                        uVar43 = uVar43 + 1;
                     }
 while ( true );
                  }

               }

               if (( param_4 == local_168 ) && ( auStack_170[0] == 0x40 )) {
                  uVar25 = uVar25 - uVar20;
                  if ((int)uVar25 < (int)param_6) {
                     do {
                        uVar35 = ( ulong )(uVar25 & 7);
                        lVar44 = uVar35 * 0x18;
                        uVar34 = local_120[uVar35 * 3 + 3];
                        puVar45 = (undefined8*)( (long)local_240 + uVar34 );
                        if (*(int*)( param_1 + 0xed4 ) == 2) {
                           if ((undefined8*)param_1[0xed3] < puVar45) {
                              uVar29 = (long)param_1[0xed3] - (long)local_240;
                              puVar45 = puVar47;
                              if (uVar29 != 0) {
                                 if (( ulong )((long)local_2a8 - (long)puVar47) < uVar29) goto LAB_00106850;
                                 uVar34 = uVar34 - uVar29;
                                 puVar45 = (undefined8*)( (long)puVar47 + uVar29 );
                                 ZSTD_safecopyDstBeforeSrc(puVar47, local_240, uVar29);
                                 *(ulong*)( (long)local_120 + lVar44 + 0x18 ) = uVar34;
                              }

                              puVar41 = (undefined8*)( (long)puVar45 + uVar34 );
                              *(undefined4*)( param_1 + 0xed4 ) = 0;
                              puVar40 = (undefined8*)( (long)param_1 + 0x76a4 );
                              local_2b0 = (undefined8*)( (long)param_1 + 0x176a4 );
                              uVar36 = local_120[uVar35 * 3 + 4];
                              uVar29 = local_120[uVar35 * 3 + 5];
                              uStack_1c8 = local_120[uVar35 * 3 + 5];
                              local_240 = (undefined8*)( (long)puVar40 + uVar34 );
                              uVar22 = local_120[uVar35 * 3 + 3];
                              uStack_1d0 = local_120[uVar35 * 3 + 4];
                              uVar46 = uVar36 + uVar34;
                              puVar33 = (undefined8*)( (long)puVar41 - uVar29 );
                              puVar47 = puVar45;
                              uStack_1d8 = uVar22;
                              uVar35 = uVar36;
                              uVar37 = uVar29;
                              uVar48 = uStack_1b0;
                              uVar16 = uStack_1a8;
                              if (( local_2a8 + -4 < (undefined8*)( (long)puVar45 + uVar46 ) ) || ( local_2b0 < local_240 )) goto LAB_001073d0;
                              uVar11 = *(undefined8*)( (long)param_1 + 0x76ac );
                              *puVar45 = *(undefined8*)( (long)param_1 + 0x76a4 );
                              puVar45[1] = uVar11;
                              if (0x10 < uVar34) {
                                 uVar11 = *(undefined8*)( (long)param_1 + 0x76bc );
                                 puVar45[2] = *(undefined8*)( (long)param_1 + 0x76b4 );
                                 puVar45[3] = uVar11;
                                 if (0x10 < (long)( uVar34 - 0x10 )) {
                                    puVar45 = puVar45 + 4;
                                    puVar40 = (undefined8*)( (long)param_1 + 0x76c4 );
                                    do {
                                       uVar11 = puVar40[1];
                                       puVar32 = puVar45 + 4;
                                       *puVar45 = *puVar40;
                                       puVar45[1] = uVar11;
                                       uVar11 = puVar40[3];
                                       puVar45[2] = puVar40[2];
                                       puVar45[3] = uVar11;
                                       puVar45 = puVar32;
                                       puVar40 = puVar40 + 4;
                                    }
 while ( puVar32 < puVar41 );
                                 }

                              }

                              if (( ulong )((long)puVar41 - (long)puVar8) < uVar29) {
                                 if (( ulong )((long)puVar41 - lVar9) < uVar29) goto LAB_00105768;
                                 puVar39 = (undefined1*)( (long)puVar33 + ( (long)puVar10 - (long)puVar8 ) );
                                 if (puVar39 + uVar36 <= puVar10) {
                                    LAB_001072d5:memmove(puVar41, puVar39, uVar36);
                                    goto LAB_00106c2e;
                                 }

                                 sVar27 = (long)puVar8 - (long)puVar33;
                                 pvVar21 = memmove(puVar41, puVar39, sVar27);
                                 puVar41 = (undefined8*)( (long)pvVar21 + sVar27 );
                                 uVar36 = uVar36 - sVar27;
                                 puVar33 = puVar8;
                              }

                              if (uVar29 < 0x10) {
                                 if (uVar29 < 8) {
                                    *(undefined1*)puVar41 = *(undefined1*)puVar33;
                                    for (int i = 0; i < 3; i++) {
                                       *(undefined1*)( (long)puVar41 + ( i + 1 ) ) = *(undefined1*)( (long)puVar33 + ( i + 1 ) );
                                    }

                                    uVar20 = *(uint*)( dec32table_0 + uVar29 * 4 );
                                    *(undefined4*)( (long)puVar41 + 4 ) = *(undefined4*)( (long)puVar33 + (ulong)uVar20 );
                                    puVar33 = (undefined8*)( (long)( (long)puVar33 + (ulong)uVar20 ) - (long)*(int*)( dec64table_1 + uVar29 * 4 ) );
                                 }
 else {
                                    *puVar41 = *puVar33;
                                 }

                                 if (8 < uVar36) {
                                    if ((long)puVar41 - (long)puVar33 < 0x10) {
                                       puVar45 = puVar41 + 1;
                                       do {
                                          puVar33 = puVar33 + 1;
                                          puVar40 = puVar45 + 1;
                                          *puVar45 = *puVar33;
                                          puVar45 = puVar40;
                                       }
 while ( puVar40 < (undefined8*)( (long)puVar41 + uVar36 ) );
                                    }
 else {
                                       uVar11 = puVar33[2];
                                       puVar41[1] = puVar33[1];
                                       puVar41[2] = uVar11;
                                       if (0x18 < (long)uVar36) {
                                          puVar45 = puVar33 + 3;
                                          puVar40 = puVar41 + 3;
                                          do {
                                             uVar11 = puVar45[1];
                                             puVar33 = puVar40 + 4;
                                             *puVar40 = *puVar45;
                                             puVar40[1] = uVar11;
                                             uVar11 = puVar45[3];
                                             puVar40[2] = puVar45[2];
                                             puVar40[3] = uVar11;
                                             puVar45 = puVar45 + 4;
                                             puVar40 = puVar33;
                                          }
 while ( puVar33 < (undefined8*)( (long)puVar41 + uVar36 ) );
                                       }

                                    }

                                 }

                              }
 else {
                                 uVar11 = puVar33[1];
                                 *puVar41 = *puVar33;
                                 puVar41[1] = uVar11;
                                 if (0x10 < (long)uVar36) {
                                    puVar45 = puVar33 + 2;
                                    puVar40 = puVar41 + 2;
                                    do {
                                       uVar11 = puVar45[1];
                                       puVar33 = puVar40 + 4;
                                       *puVar40 = *puVar45;
                                       puVar40[1] = uVar11;
                                       uVar11 = puVar45[3];
                                       puVar40[2] = puVar45[2];
                                       puVar40[3] = uVar11;
                                       puVar45 = puVar45 + 4;
                                       puVar40 = puVar33;
                                    }
 while ( puVar33 < (undefined8*)( uVar36 + (long)puVar41 ) );
                                 }

                              }

                           }
 else {
                              uStack_188 = local_120[uVar35 * 3 + 5];
                              puVar41 = (undefined8*)( (long)puVar47 + uVar34 );
                              uVar29 = (long)local_240 + ( uVar34 - 0x20 );
                              uVar36 = local_120[uVar35 * 3 + 4];
                              uVar22 = local_120[uVar35 * 3 + 5];
                              uStack_198 = local_120[uVar35 * 3 + 3];
                              uStack_190 = local_120[uVar35 * 3 + 4];
                              uVar46 = uVar36 + uVar34;
                              puVar40 = (undefined8*)( (long)puVar41 - uVar22 );
                              if (( uVar29 < (long)puVar47 + uVar46 ) || ( local_2b0 < puVar45 )) {
                                 uStack_190 = uVar36;
                                 uStack_188 = uVar22;
                                 uVar46 = ZSTD_execSequenceEndSplitLitBuffer(puVar47, local_2a8, uVar29, &local_240, local_2b0, puVar8, uStack_198, uVar36, uVar22, lVar9, puVar10);
                              }
 else {
                                 uVar11 = local_240[1];
                                 *puVar47 = *local_240;
                                 puVar47[1] = uVar11;
                                 if (0x10 < uVar34) {
                                    uVar11 = local_240[3];
                                    puVar47[2] = local_240[2];
                                    puVar47[3] = uVar11;
                                    if (0x10 < (long)( uVar34 - 0x10 )) {
                                       puVar33 = puVar47 + 4;
                                       do {
                                          uVar11 = local_240[5];
                                          puVar32 = puVar33 + 4;
                                          *puVar33 = local_240[4];
                                          puVar33[1] = uVar11;
                                          uVar11 = local_240[7];
                                          puVar33[2] = local_240[6];
                                          puVar33[3] = uVar11;
                                          puVar33 = puVar32;
                                          local_240 = local_240 + 4;
                                       }
 while ( puVar32 < puVar41 );
                                    }

                                 }

                                 local_240 = puVar45;
                                 if (( ulong )((long)puVar41 - (long)puVar8) < uVar22) {
                                    if (( ulong )((long)puVar41 - lVar9) < uVar22) goto LAB_00105768;
                                    puVar39 = (undefined1*)( (long)puVar40 + ( (long)puVar10 - (long)puVar8 ) );
                                    if (puVar39 + uVar36 <= puVar10) goto LAB_001072d5;
                                    sVar27 = (long)puVar8 - (long)puVar40;
                                    pvVar21 = memmove(puVar41, puVar39, sVar27);
                                    puVar41 = (undefined8*)( (long)pvVar21 + sVar27 );
                                    uVar36 = uVar36 - sVar27;
                                    puVar40 = puVar8;
                                 }

                                 if (uVar22 < 0x10) {
                                    if (uVar22 < 8) {
                                       *(undefined1*)puVar41 = *(undefined1*)puVar40;
                                       for (int i = 0; i < 3; i++) {
                                          *(undefined1*)( (long)puVar41 + ( i + 1 ) ) = *(undefined1*)( (long)puVar40 + ( i + 1 ) );
                                       }

                                       uVar20 = *(uint*)( dec32table_0 + uVar22 * 4 );
                                       *(undefined4*)( (long)puVar41 + 4 ) = *(undefined4*)( (ulong)uVar20 + (long)puVar40 );
                                       puVar40 = (undefined8*)( (long)( (ulong)uVar20 + (long)puVar40 ) - (long)*(int*)( dec64table_1 + uVar22 * 4 ) );
                                    }
 else {
                                       *puVar41 = *puVar40;
                                    }

                                    if (8 < uVar36) {
                                       if ((long)puVar41 - (long)puVar40 < 0x10) {
                                          puVar45 = puVar41 + 1;
                                          do {
                                             puVar40 = puVar40 + 1;
                                             puVar33 = puVar45 + 1;
                                             *puVar45 = *puVar40;
                                             puVar45 = puVar33;
                                          }
 while ( puVar33 < (undefined8*)( (long)puVar41 + uVar36 ) );
                                       }
 else {
                                          uVar11 = puVar40[2];
                                          puVar41[1] = puVar40[1];
                                          puVar41[2] = uVar11;
                                          if (0x18 < (long)uVar36) {
                                             puVar45 = puVar40 + 3;
                                             puVar40 = puVar41 + 3;
                                             do {
                                                uVar11 = puVar45[1];
                                                puVar33 = puVar40 + 4;
                                                *puVar40 = *puVar45;
                                                puVar40[1] = uVar11;
                                                uVar11 = puVar45[3];
                                                puVar40[2] = puVar45[2];
                                                puVar40[3] = uVar11;
                                                puVar45 = puVar45 + 4;
                                                puVar40 = puVar33;
                                             }
 while ( puVar33 < (undefined8*)( (long)puVar41 + uVar36 ) );
                                          }

                                       }

                                    }

                                 }
 else {
                                    uVar11 = puVar40[1];
                                    *puVar41 = *puVar40;
                                    puVar41[1] = uVar11;
                                    if (0x10 < (long)uVar36) {
                                       puVar45 = puVar40 + 2;
                                       puVar40 = puVar41 + 2;
                                       do {
                                          uVar11 = puVar45[1];
                                          puVar33 = puVar40 + 4;
                                          *puVar40 = *puVar45;
                                          puVar40[1] = uVar11;
                                          uVar11 = puVar45[3];
                                          puVar40[2] = puVar45[2];
                                          puVar40[3] = uVar11;
                                          puVar45 = puVar45 + 4;
                                          puVar40 = puVar33;
                                       }
 while ( puVar33 < (undefined8*)( uVar36 + (long)puVar41 ) );
                                    }

                                 }

                              }

                           }

                        }
 else {
                           uVar36 = local_120[uVar35 * 3 + 4];
                           uVar29 = local_120[uVar35 * 3 + 5];
                           uStack_1a8 = local_120[uVar35 * 3 + 5];
                           puVar41 = (undefined8*)( (long)puVar47 + uVar34 );
                           uVar22 = local_120[uVar35 * 3 + 3];
                           uStack_1b0 = local_120[uVar35 * 3 + 4];
                           uVar46 = uVar36 + uVar34;
                           puVar33 = (undefined8*)( (long)puVar41 - uVar29 );
                           puVar40 = local_240;
                           uVar35 = uStack_1d0;
                           uVar37 = uStack_1c8;
                           uStack_1b8 = uVar22;
                           uVar48 = uVar36;
                           uVar16 = uVar29;
                           if (( local_2a8 + -4 < (undefined8*)( (long)puVar47 + uVar46 ) ) || ( local_2b0 < puVar45 )) {
                              LAB_001073d0:uStack_1a8 = uVar16;
                              uStack_1b0 = uVar48;
                              uStack_1c8 = uVar37;
                              uStack_1d0 = uVar35;
                              local_240 = puVar40;
                              uVar46 = ZSTD_execSequenceEnd(puVar47, local_2a8, &local_240, local_2b0, puVar8, lVar9, uVar22, uVar36, uVar29, puVar10);
                           }
 else {
                              uVar11 = local_240[1];
                              *puVar47 = *local_240;
                              puVar47[1] = uVar11;
                              if (0x10 < uVar34) {
                                 uVar11 = local_240[3];
                                 puVar47[2] = local_240[2];
                                 puVar47[3] = uVar11;
                                 if (0x10 < (long)( uVar34 - 0x10 )) {
                                    puVar40 = puVar47 + 4;
                                    do {
                                       uVar11 = local_240[5];
                                       puVar32 = puVar40 + 4;
                                       *puVar40 = local_240[4];
                                       puVar40[1] = uVar11;
                                       uVar11 = local_240[7];
                                       puVar40[2] = local_240[6];
                                       puVar40[3] = uVar11;
                                       puVar40 = puVar32;
                                       local_240 = local_240 + 4;
                                    }
 while ( puVar32 < puVar41 );
                                 }

                              }

                              local_240 = puVar45;
                              if (( ulong )((long)puVar41 - (long)puVar8) < uVar29) {
                                 if (( ulong )((long)puVar41 - lVar9) < uVar29) goto LAB_00105768;
                                 puVar39 = (undefined1*)( (long)puVar33 + ( (long)puVar10 - (long)puVar8 ) );
                                 if (puVar39 + uVar36 <= puVar10) goto LAB_001072d5;
                                 sVar27 = (long)puVar8 - (long)puVar33;
                                 pvVar21 = memmove(puVar41, puVar39, sVar27);
                                 puVar41 = (undefined8*)( (long)pvVar21 + sVar27 );
                                 uVar36 = uVar36 - sVar27;
                                 puVar33 = puVar8;
                              }

                              if (uVar29 < 0x10) {
                                 if (uVar29 < 8) {
                                    *(undefined1*)puVar41 = *(undefined1*)puVar33;
                                    for (int i = 0; i < 3; i++) {
                                       *(undefined1*)( (long)puVar41 + ( i + 1 ) ) = *(undefined1*)( (long)puVar33 + ( i + 1 ) );
                                    }

                                    uVar20 = *(uint*)( dec32table_0 + uVar29 * 4 );
                                    *(undefined4*)( (long)puVar41 + 4 ) = *(undefined4*)( (ulong)uVar20 + (long)puVar33 );
                                    puVar33 = (undefined8*)( (long)( (ulong)uVar20 + (long)puVar33 ) - (long)*(int*)( dec64table_1 + uVar29 * 4 ) );
                                 }
 else {
                                    *puVar41 = *puVar33;
                                 }

                                 if (8 < uVar36) {
                                    if ((long)puVar41 - (long)puVar33 < 0x10) {
                                       puVar45 = puVar41 + 1;
                                       do {
                                          puVar33 = puVar33 + 1;
                                          puVar40 = puVar45 + 1;
                                          *puVar45 = *puVar33;
                                          puVar45 = puVar40;
                                       }
 while ( puVar40 < (undefined8*)( (long)puVar41 + uVar36 ) );
                                    }
 else {
                                       uVar11 = puVar33[2];
                                       puVar41[1] = puVar33[1];
                                       puVar41[2] = uVar11;
                                       if (0x18 < (long)uVar36) {
                                          puVar45 = puVar33 + 3;
                                          puVar40 = puVar41 + 3;
                                          do {
                                             uVar11 = puVar45[1];
                                             puVar33 = puVar40 + 4;
                                             *puVar40 = *puVar45;
                                             puVar40[1] = uVar11;
                                             uVar11 = puVar45[3];
                                             puVar40[2] = puVar45[2];
                                             puVar40[3] = uVar11;
                                             puVar45 = puVar45 + 4;
                                             puVar40 = puVar33;
                                          }
 while ( puVar33 < (undefined8*)( (long)puVar41 + uVar36 ) );
                                       }

                                    }

                                 }

                              }
 else {
                                 uVar11 = puVar33[1];
                                 *puVar41 = *puVar33;
                                 puVar41[1] = uVar11;
                                 if (0x10 < (long)uVar36) {
                                    puVar45 = puVar33 + 2;
                                    puVar40 = puVar41 + 2;
                                    do {
                                       uVar11 = puVar45[1];
                                       puVar33 = puVar40 + 4;
                                       *puVar40 = *puVar45;
                                       puVar40[1] = uVar11;
                                       uVar11 = puVar45[3];
                                       puVar40[2] = puVar45[2];
                                       puVar40[3] = uVar11;
                                       puVar45 = puVar45 + 4;
                                       puVar40 = puVar33;
                                    }
 while ( puVar33 < (undefined8*)( uVar36 + (long)puVar41 ) );
                                 }

                              }

                           }

                        }

                        LAB_00106c2e:if (0xffffffffffffff88 < uVar46) goto LAB_001057b6;
                        puVar47 = (undefined8*)( (long)puVar47 + uVar46 );
                        uVar25 = uVar25 + 1;
                     }
 while ( param_6 != uVar25 );
                  }

                  *(int*)( (long)param_1 + 0x683c ) = (int)local_120[0];
                  *(int*)( param_1 + 0xd08 ) = (int)local_120[1];
                  *(int*)( (long)param_1 + 0x6844 ) = (int)local_120[2];
                  iVar7 = *(int*)( param_1 + 0xed4 );
                  goto LAB_0010577b;
               }

            }

         }
 else {
            local_168 = (ulong*)( (long)param_4 + ( param_5 - 8 ) );
            local_178 = *local_168;
            if (bVar5 != 0) {
               uVar20 = 0x1f;
               if (bVar5 != 0) {
                  for (; bVar5 >> uVar20 == 0; uVar20 = uVar20 - 1) {}
               }

               auStack_170[0] = ( uVar20 ^ 0x1f ) - 0x17;
               if (param_5 < 0xffffffffffffff89) goto LAB_001058b2;
            }

         }

      }

      LAB_00105768:uVar46 = 0xffffffffffffffec;
      goto LAB_001057b6;
   }

   LAB_0010577b:uVar34 = (long)local_2b0 - (long)local_240;
   if (iVar7 == 2) {
      if (uVar34 <= ( ulong )((long)local_2a8 - (long)puVar47)) {
         if (puVar47 == (undefined8*)0x0) {
            if ((undefined8*)0xffff < local_2a8) goto LAB_001057b0;
         }
 else {
            puVar45 = (undefined8*)( (long)puVar47 + uVar34 );
            uVar35 = 0x10000;
            memmove(puVar47, local_240, uVar34);
            local_240 = (undefined8*)( (long)param_1 + 0x76a4 );
            if (0xffff < ( ulong )((long)local_2a8 - (long)puVar45)) goto LAB_00105d1c;
         }

      }

   }
 else if (uVar34 <= ( ulong )((long)local_2a8 - (long)puVar47)) {
      uVar35 = uVar34;
      puVar45 = puVar47;
      if (puVar47 != (undefined8*)0x0) {
         LAB_00105d1c:puVar47 = (undefined8*)( (long)puVar45 + uVar35 );
         memmove(puVar45, local_240, uVar35);
      }

      LAB_001057b0:uVar46 = (long)puVar47 - (long)param_2;
      goto LAB_001057b6;
   }

   LAB_00106850:uVar46 = 0xffffffffffffffba;
   LAB_001057b6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar46;
}
ulong ZSTD_getcBlockSize(ushort *param_1, ulong param_2, uint *param_3) {
   uint uVar1;
   uint uVar2;
   ulong uVar3;
   uVar3 = 0xffffffffffffffb8;
   if (2 < param_2) {
      uVar1 = (uint)(byte)param_1[1] * 0x10000 + ( uint ) * param_1;
      uVar2 = uVar1 >> 1 & 3;
      param_3[1] = uVar1 & 1;
      *param_3 = uVar2;
      param_3[2] = uVar1 >> 3;
      uVar3 = 1;
      if (( uVar2 != 1 ) && ( uVar3 = uVar2 != 3 )) {
         uVar3 = ( ulong )(uVar1 >> 3);
      }

   }

   return uVar3;
}
void ZSTD_decodeLiteralsBlock_wrapper(long param_1) {
   *(undefined4*)( param_1 + 0x75e0 ) = 0;
   ZSTD_decodeLiteralsBlock();
   return;
}
void ZSTD_buildFSETable(void) {
   int in_stack_00000018;
   if (in_stack_00000018 == 0) {
      ZSTD_buildFSETable_body_default_isra_0();
      return;
   }

   ZSTD_buildFSETable_body_bmi2_isra_0();
   return;
}
byte *ZSTD_decodeSeqHeaders(long param_1, uint *param_2, byte *param_3, byte *param_4) {
   byte *pbVar1;
   long lVar2;
   byte bVar3;
   ulong uVar4;
   byte *pbVar5;
   uint uVar6;
   byte *pbVar7;
   pbVar1 = param_3 + (long)param_4;
   if (param_4 == (byte*)0x0) {
      return (byte*)0xffffffffffffffb8;
   }

   pbVar5 = param_3 + 1;
   bVar3 = *param_3;
   uVar6 = (uint)bVar3;
   if (0x7f < bVar3) {
      if (bVar3 == 0xff) {
         pbVar5 = param_3 + 3;
         if (pbVar1 < pbVar5) {
            return (byte*)0xffffffffffffffb8;
         }

         uVar6 = *(ushort*)( param_3 + 1 ) + 0x7f00;
         *param_2 = uVar6;
         goto LAB_001078e9;
      }

      if (pbVar1 <= pbVar5) {
         return (byte*)0xffffffffffffffb8;
      }

      pbVar5 = param_3 + 2;
      uVar6 = ( bVar3 - 0x80 ) * 0x100 + (uint)param_3[1];
   }

   *param_2 = uVar6;
   if (uVar6 == 0) {
      if (pbVar5 != pbVar1) {
         return (byte*)0xffffffffffffffec;
      }

      return param_4;
   }

   LAB_001078e9:pbVar7 = pbVar5 + 1;
   if (pbVar1 < pbVar7) {
      return (byte*)0xffffffffffffffb8;
   }

   bVar3 = *pbVar5;
   if (( bVar3 & 3 ) == 0) {
      lVar2 = param_1 + 0x6abc;
      uVar4 = ZSTD_buildSeqTable_constprop_0(param_1 + 0x20, param_1, bVar3 >> 6, 0x23, 9, pbVar7, (long)pbVar1 - (long)pbVar7, LL_base, LL_bits, LL_defaultDTable, *(undefined4*)( param_1 + 0x7534 ), *(undefined4*)( param_1 + 0x75fc ), uVar6, lVar2, *(undefined4*)( param_1 + 0x75e4 ));
      if (uVar4 < 0xffffffffffffff89) {
         pbVar7 = pbVar7 + uVar4;
         uVar4 = ZSTD_buildSeqTable_constprop_0(param_1 + 0x1028, param_1 + 0x10, bVar3 >> 4 & 3, 0x1f, 8, pbVar7, (long)pbVar1 - (long)pbVar7, OF_base, OF_bits, OF_defaultDTable, *(undefined4*)( param_1 + 0x7534 ), *(undefined4*)( param_1 + 0x75fc ), uVar6, lVar2, *(undefined4*)( param_1 + 0x75e4 ));
         if (uVar4 < 0xffffffffffffff89) {
            pbVar7 = pbVar7 + uVar4;
            uVar4 = ZSTD_buildSeqTable_constprop_0(param_1 + 0x1830, param_1 + 8, bVar3 >> 2 & 3, 0x34, 9, pbVar7, (long)pbVar1 - (long)pbVar7, ML_base, ML_bits, ML_defaultDTable, *(undefined4*)( param_1 + 0x7534 ), *(undefined4*)( param_1 + 0x75fc ), uVar6, lVar2, *(undefined4*)( param_1 + 0x75e4 ));
            if (uVar4 < 0xffffffffffffff89) {
               return pbVar7 + ( uVar4 - (long)param_3 );
            }

         }

      }

   }

   return (byte*)0xffffffffffffffec;
}
ulong ZSTD_decompressBlock_internal_part_0(undefined8 *param_1, undefined8 *param_2, ulong param_3, long param_4, long param_5) {
   ushort *puVar1;
   ushort *puVar2;
   ushort *puVar3;
   byte bVar4;
   long lVar5;
   undefined1 *puVar6;
   undefined8 uVar7;
   long lVar8;
   long lVar9;
   ulong uVar10;
   byte *pbVar11;
   undefined8 *puVar12;
   undefined8 *puVar13;
   void *pvVar14;
   undefined8 *puVar15;
   long lVar16;
   byte bVar17;
   byte bVar18;
   byte bVar19;
   long lVar20;
   int iVar21;
   int iVar22;
   undefined8 *puVar23;
   undefined8 *puVar24;
   undefined8 *puVar25;
   ulong *puVar26;
   uint uVar27;
   undefined1 *puVar28;
   int iVar29;
   undefined8 *puVar30;
   ulong uVar31;
   undefined8 *puVar32;
   undefined8 *puVar33;
   size_t sVar34;
   ulong uVar35;
   ulong uVar36;
   long in_FS_OFFSET;
   undefined8 *local_1b8;
   ulong uStack_1b0;
   undefined8 *local_190;
   uint uStack_14c;
   int local_13c;
   ulong uStack_138;
   size_t sStack_130;
   ulong uStack_128;
   ulong uStack_118;
   size_t sStack_110;
   ulong uStack_108;
   undefined8 *local_f8;
   size_t sStack_f0;
   ulong uStack_e8;
   undefined8 *local_d8;
   size_t sStack_d0;
   ulong uStack_c8;
   ulong local_b8;
   uint auStack_b0[2];
   ulong *local_a8;
   ulong *local_a0;
   ulong *local_98;
   long lStack_90;
   long lStack_88;
   long lStack_80;
   long lStack_78;
   long lStack_70;
   long lStack_68;
   ulong local_60[4];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = ZSTD_decodeLiteralsBlock(param_1, param_4, param_5, param_2, param_3);
   if (uVar10 < 0xffffffffffffff89) {
      param_4 = param_4 + uVar10;
      param_5 = param_5 - uVar10;
      uVar35 = 0x20000;
      if (*(int*)( param_1 + 0xebc ) != 0) {
         uVar35 = ( ulong ) * (uint*)( param_1 + 0xe9f );
      }

      uVar27 = *(uint*)( (long)param_1 + 0x75fc );
      lVar5 = param_1[0xe9a];
      uVar10 = ZSTD_decodeSeqHeaders(param_1, &local_13c, param_4, param_5);
      if (uVar10 < 0xffffffffffffff89) {
         if (( ( ( param_2 == (undefined8*)0x0 ) || ( param_3 == 0 ) ) && ( 0 < local_13c ) ) || ( (undefined8*)0xffffffffffefffff < param_2 )) goto LAB_0010823f;
         puVar26 = (ulong*)( param_4 + uVar10 );
         uVar10 = param_5 - uVar10;
         if (param_3 <= uVar35) {
            uVar35 = param_3;
         }

         if (( (long)param_2 + ( uVar35 - lVar5 ) < 0x1000001 ) || ( uVar27 != 0 )) {
            LAB_00107c06:iVar21 = *(int*)( (long)param_1 + 0x75e4 );
            *(undefined4*)( (long)param_1 + 0x75fc ) = 0;
            if (uVar27 != 0) {
               if (iVar21 == 0) {
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     uVar10 = ZSTD_decompressSequencesLong_default_constprop_0(param_1, param_2, param_3, puVar26, uVar10, local_13c);
                     return uVar10;
                  }

               }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar10 = ZSTD_decompressSequencesLong_bmi2_constprop_0(param_1, param_2, param_3, puVar26, uVar10, local_13c);
                  return uVar10;
               }

               goto LAB_00109b3a;
            }

         }
 else {
            if (8 < local_13c) {
               lVar5 = param_1[2];
               bVar17 = ( byte ) * (undefined4*)( lVar5 + 4 );
               iVar21 = 1 << ( bVar17 & 0x1f );
               if (iVar21 != 0) {
                  pbVar11 = (byte*)( lVar5 + 10 );
                  iVar22 = 0;
                  do {
                     iVar22 = ( iVar22 + 1 ) - ( uint )(*pbVar11 < 0x17);
                     pbVar11 = pbVar11 + 8;
                  }
 while ( pbVar11 != (byte*)( lVar5 + 0x12 + ( ulong )(iVar21 - 1) * 8 ) );
                  uVar27 = ( uint )(6 < ( uint )(iVar22 << ( 8 - bVar17 & 0x1f )));
                  goto LAB_00107c06;
               }

            }

            *(undefined4*)( (long)param_1 + 0x75fc ) = 0;
            iVar21 = *(int*)( (long)param_1 + 0x75e4 );
         }

         if (*(int*)( param_1 + 0xed4 ) == 2) {
            if (iVar21 != 0) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar10 = ZSTD_decompressSequencesSplitLitBuffer_bmi2_constprop_0(param_1, param_2, param_3, puVar26, uVar10, local_13c);
                  return uVar10;
               }

               goto LAB_00109b3a;
            }

            local_d8 = (undefined8*)param_1[0xeb5];
            puVar33 = (undefined8*)( (long)param_2 + param_3 );
            if ((long)param_3 < 1) {
               puVar33 = param_2;
            }

            local_1b8 = (undefined8*)param_1[0xed3];
            puVar32 = (undefined8*)param_1[0xe99];
            lVar5 = param_1[0xe9a];
            puVar6 = (undefined1*)param_1[0xe9b];
            puVar12 = param_2;
            if (local_13c != 0) {
               local_60[0] = ( ulong ) * (uint*)( (long)param_1 + 0x683c );
               *(undefined4*)( (long)param_1 + 0x7534 ) = 1;
               local_60[1] = ( ulong ) * (uint*)( param_1 + 0xd08 );
               local_60[2] = ( ulong ) * (uint*)( (long)param_1 + 0x6844 );
               if (uVar10 != 0) {
                  local_98 = puVar26 + 1;
                  bVar17 = *(byte*)( (long)puVar26 + ( uVar10 - 1 ) );
                  if (uVar10 < 8) {
                     local_b8 = ( ulong )(byte) * puVar26;
                     switch (uVar10) {
                        case 7:
                local_b8 = local_b8 + ((ulong)*(byte *)((long)puVar26 + 6) << 0x30);
                        case 6:
                local_b8 = local_b8 + ((ulong)*(byte *)((long)puVar26 + 5) << 0x28);
                        case 5:
                local_b8 = local_b8 + ((ulong)*(byte *)((long)puVar26 + 4) << 0x20);
                        case 4:
                local_b8 = local_b8 + (ulong)*(byte *)((long)puVar26 + 3) * 0x1000000;
                        case 3:
                local_b8 = local_b8 + (ulong)*(byte *)((long)puVar26 + 2) * 0x10000;
                        case 2:
                local_b8 = local_b8 + (ulong)*(byte *)((long)puVar26 + 1) * 0x100;
                     }

                     local_a8 = puVar26;
                     local_a0 = puVar26;
                     if (bVar17 != 0) {
                        uVar27 = 0x1f;
                        if (bVar17 != 0) {
                           for (; bVar17 >> uVar27 == 0; uVar27 = uVar27 - 1) {}
                        }

                        auStack_b0[0] = ( ( uVar27 ^ 0x1f ) - 0x17 ) + ( 8 - (int)uVar10 ) * 8;
                        LAB_00108885:local_a0 = puVar26;
                        ZSTD_initFseState(&lStack_90, &local_b8, *param_1);
                        ZSTD_initFseState(&lStack_80, &local_b8, param_1[2]);
                        ZSTD_initFseState(&lStack_70, &local_b8, param_1[1]);
                        lVar9 = lStack_68;
                        lVar8 = lStack_78;
                        lVar16 = lStack_88;
                        puVar23 = param_2;
                        iVar21 = local_13c;
                        LAB_00108970:puVar1 = (ushort*)( lVar16 + lStack_90 * 8 );
                        bVar17 = (byte)puVar1[1];
                        puVar2 = (ushort*)( lVar9 + lStack_70 * 8 );
                        bVar19 = (byte)puVar2[1];
                        uVar27 = *(uint*)( puVar1 + 2 );
                        uVar35 = (ulong)uVar27;
                        puVar3 = (ushort*)( lVar8 + lStack_80 * 8 );
                        uStack_1b0 = ( ulong ) * (uint*)( puVar2 + 2 );
                        bVar4 = (byte)puVar3[1];
                        if (bVar4 < 2) {
                           if (bVar4 == 1) {
                              bVar18 = (byte)auStack_b0[0] & 0x3f;
                              auStack_b0[0] = auStack_b0[0] + 1;
                              lVar20 = ( ulong )(*(uint*)( puVar3 + 2 ) + ( uint )(uVar27 == 0)) - ( (long)( local_b8 << bVar18 ) >> 0x3f );
                              if (lVar20 == 3) {
                                 uVar36 = ( local_60[0] - 1 ) - ( ulong )(local_60[0] - 1 == 0);
                              }
 else {
                                 uVar36 = local_60[lVar20] - ( ulong )(local_60[lVar20] == 0);
                                 if (lVar20 == 1) goto LAB_00108a3b;
                              }

                              local_60[2] = local_60[1];
                           }
 else {
                              uVar36 = local_60[uVar27 == 0];
                              local_60[0] = *(ulong*)( auStack_b0 + ( 0xb - ( ulong )(uVar27 == 0) ) * 2 );
                           }

                        }
 else {
                           bVar18 = (byte)auStack_b0[0] & 0x3f;
                           auStack_b0[0] = bVar4 + auStack_b0[0];
                           local_60[2] = local_60[1];
                           uVar36 = ( ulong ) * (uint*)( puVar3 + 2 ) + ( ( local_b8 << bVar18 ) >> ( -bVar4 & 0x3f ) );
                        }

                        LAB_00108a3b:local_60[1] = local_60[0];
                        local_60[0] = uVar36;
                        if (bVar19 != 0) {
                           bVar18 = (byte)auStack_b0[0];
                           auStack_b0[0] = bVar19 + auStack_b0[0];
                           uStack_1b0 = uStack_1b0 + ( ( local_b8 << ( bVar18 & 0x3f ) ) >> ( -bVar19 & 0x3f ) );
                        }

                        if (0x1e < ( byte )(bVar17 + bVar19 + bVar4)) {
                           if (auStack_b0[0] < 0x41) {
                              if (local_a8 < local_98) {
                                 if (local_a8 != local_a0) {
                                    uVar27 = auStack_b0[0] >> 3;
                                    puVar26 = (ulong*)( (long)local_a8 - (ulong)uVar27 );
                                    if (puVar26 < local_a0) {
                                       uVar27 = ( uint )((long)local_a8 - (long)local_a0);
                                       puVar26 = (ulong*)( (long)local_a8 - ( (long)local_a8 - (long)local_a0 & 0xffffffffU ) );
                                    }

                                    auStack_b0[0] = auStack_b0[0] + uVar27 * -8;
                                    local_b8 = *puVar26;
                                    local_a8 = puVar26;
                                 }

                              }
 else {
                                 local_a8 = (ulong*)( (long)local_a8 - ( ulong )(auStack_b0[0] >> 3) );
                                 local_b8 = *local_a8;
                                 auStack_b0[0] = auStack_b0[0] & 7;
                              }

                           }
 else {
                              local_a8 = &zeroFilled_2;
                           }

                        }

                        if (bVar17 != 0) {
                           bVar19 = (byte)auStack_b0[0];
                           auStack_b0[0] = bVar17 + auStack_b0[0];
                           uVar35 = uVar35 + ( ( local_b8 << ( bVar19 & 0x3f ) ) >> ( -bVar17 & 0x3f ) );
                        }

                        if (iVar21 != 1) {
                           iVar29 = *(byte*)( (long)puVar1 + 3 ) + auStack_b0[0];
                           iVar22 = ( uint ) * (byte*)( (long)puVar2 + 3 ) + iVar29;
                           lStack_90 = ( ~(-1L << (*(byte *)((long)puVar1 + 3) & 0x3f)) & local_b8 >> ( -(char)iVar29 & 0x3fU ) ) + ( ulong ) * puVar1;
                           auStack_b0[0] = iVar22 + ( uint ) * (byte*)( (long)puVar3 + 3 );
                           lStack_70 = ( ~(-1L << (*(byte *)((long)puVar2 + 3) & 0x3f)) & local_b8 >> ( -(char)iVar22 & 0x3fU ) ) + ( ulong ) * puVar2;
                           lStack_80 = ( local_b8 >> ( -(char)auStack_b0[0] & 0x3fU ) & ~(-1L << (*(byte *)((long)puVar3 + 3) & 0x3f)) ) + ( ulong ) * puVar3;
                           if (auStack_b0[0] < 0x41) {
                              if (local_a8 < local_98) {
                                 if (local_a8 != local_a0) {
                                    uVar27 = auStack_b0[0] >> 3;
                                    puVar26 = (ulong*)( (long)local_a8 - (ulong)uVar27 );
                                    if (puVar26 < local_a0) {
                                       uVar27 = (int)local_a8 - (int)local_a0;
                                       puVar26 = (ulong*)( (long)local_a8 - (ulong)uVar27 );
                                    }

                                    local_b8 = *puVar26;
                                    auStack_b0[0] = auStack_b0[0] + uVar27 * -8;
                                    local_a8 = puVar26;
                                 }

                              }
 else {
                                 local_a8 = (ulong*)( (long)local_a8 - ( ulong )(auStack_b0[0] >> 3) );
                                 local_b8 = *local_a8;
                                 auStack_b0[0] = auStack_b0[0] & 7;
                              }

                           }
 else {
                              local_a8 = &zeroFilled_2;
                           }

                        }

                        puVar12 = (undefined8*)( (long)local_d8 + uVar35 );
                        if (puVar12 <= (undefined8*)param_1[0xed3]) {
                           puVar30 = (undefined8*)( (long)puVar23 + uVar35 );
                           uVar10 = uVar35 + uStack_1b0;
                           uVar31 = (long)local_d8 + ( uVar35 - 0x20 );
                           puVar15 = (undefined8*)( (long)puVar30 - uVar36 );
                           if (( uVar31 < (long)puVar23 + uVar10 ) || ( local_1b8 < puVar12 )) {
                              uStack_138 = uVar35;
                              sStack_130 = uStack_1b0;
                              uStack_128 = uVar36;
                              uVar10 = ZSTD_execSequenceEndSplitLitBuffer(puVar23, puVar33, uVar31, &local_d8, local_1b8, puVar32, uVar35, uStack_1b0, uVar36, lVar5, puVar6);
                           }
 else {
                              uVar7 = local_d8[1];
                              *puVar23 = *local_d8;
                              puVar23[1] = uVar7;
                              if (0x10 < uVar35) {
                                 uVar7 = local_d8[3];
                                 puVar23[2] = local_d8[2];
                                 puVar23[3] = uVar7;
                                 if (0x10 < (long)( uVar35 - 0x10 )) {
                                    puVar13 = puVar23 + 4;
                                    do {
                                       uVar7 = local_d8[5];
                                       puVar24 = puVar13 + 4;
                                       *puVar13 = local_d8[4];
                                       puVar13[1] = uVar7;
                                       uVar7 = local_d8[7];
                                       puVar13[2] = local_d8[6];
                                       puVar13[3] = uVar7;
                                       puVar13 = puVar24;
                                       local_d8 = local_d8 + 4;
                                    }
 while ( puVar24 < puVar30 );
                                 }

                              }

                              local_d8 = puVar12;
                              if (( ulong )((long)puVar30 - (long)puVar32) < uVar36) {
                                 if (( ulong )((long)puVar30 - lVar5) < uVar36) goto LAB_00108370;
                                 puVar28 = (undefined1*)( (long)puVar15 + ( (long)puVar6 - (long)puVar32 ) );
                                 if (puVar28 + uStack_1b0 <= puVar6) {
                                    memmove(puVar30, puVar28, uStack_1b0);
                                    goto LAB_00108c96;
                                 }

                                 sVar34 = (long)puVar32 - (long)puVar15;
                                 pvVar14 = memmove(puVar30, puVar28, sVar34);
                                 puVar30 = (undefined8*)( (long)pvVar14 + sVar34 );
                                 uStack_1b0 = uStack_1b0 - sVar34;
                                 puVar15 = puVar32;
                              }

                              if (uVar36 < 0x10) {
                                 if (uVar36 < 8) {
                                    *(undefined1*)puVar30 = *(undefined1*)puVar15;
                                    for (int i = 0; i < 3; i++) {
                                       *(undefined1*)( (long)puVar30 + ( i + 1 ) ) = *(undefined1*)( (long)puVar15 + ( i + 1 ) );
                                    }

                                    uVar27 = *(uint*)( dec32table_0 + uVar36 * 4 );
                                    *(undefined4*)( (long)puVar30 + 4 ) = *(undefined4*)( (long)puVar15 + (ulong)uVar27 );
                                    puVar15 = (undefined8*)( (long)( (long)puVar15 + (ulong)uVar27 ) - (long)*(int*)( dec64table_1 + uVar36 * 4 ) );
                                 }
 else {
                                    *puVar30 = *puVar15;
                                 }

                                 if (8 < uStack_1b0) {
                                    if ((long)puVar30 - (long)puVar15 < 0x10) {
                                       puVar12 = puVar30 + 1;
                                       do {
                                          puVar15 = puVar15 + 1;
                                          puVar13 = puVar12 + 1;
                                          *puVar12 = *puVar15;
                                          puVar12 = puVar13;
                                       }
 while ( puVar13 < (undefined8*)( (long)puVar30 + uStack_1b0 ) );
                                    }
 else {
                                       uVar7 = puVar15[2];
                                       puVar30[1] = puVar15[1];
                                       puVar30[2] = uVar7;
                                       if (0x18 < (long)uStack_1b0) {
                                          puVar12 = puVar15 + 3;
                                          puVar15 = puVar30 + 3;
                                          do {
                                             uVar7 = puVar12[1];
                                             puVar13 = puVar15 + 4;
                                             *puVar15 = *puVar12;
                                             puVar15[1] = uVar7;
                                             uVar7 = puVar12[3];
                                             puVar15[2] = puVar12[2];
                                             puVar15[3] = uVar7;
                                             puVar12 = puVar12 + 4;
                                             puVar15 = puVar13;
                                          }
 while ( puVar13 < (undefined8*)( (long)puVar30 + uStack_1b0 ) );
                                       }

                                    }

                                 }

                              }
 else {
                                 uVar7 = puVar15[1];
                                 *puVar30 = *puVar15;
                                 puVar30[1] = uVar7;
                                 if (0x10 < (long)uStack_1b0) {
                                    puVar12 = puVar15 + 2;
                                    puVar15 = puVar30 + 2;
                                    do {
                                       uVar7 = puVar12[1];
                                       puVar13 = puVar15 + 4;
                                       *puVar15 = *puVar12;
                                       puVar15[1] = uVar7;
                                       uVar7 = puVar12[3];
                                       puVar15[2] = puVar12[2];
                                       puVar15[3] = uVar7;
                                       puVar12 = puVar12 + 4;
                                       puVar15 = puVar13;
                                    }
 while ( puVar13 < (undefined8*)( uStack_1b0 + (long)puVar30 ) );
                                 }

                              }

                           }

                           LAB_00108c96:if (uVar10 < 0xffffffffffffff89) goto code_r0x00108ca0;
                           goto LAB_00108200;
                        }

                        if (iVar21 < 1) goto LAB_00108370;
                        uVar31 = param_1[0xed3] - (long)local_d8;
                        puVar12 = puVar23;
                        if (uVar31 != 0) {
                           uVar10 = 0xffffffffffffffba;
                           if (( ulong )((long)puVar33 - (long)puVar23) < uVar31) goto LAB_00108200;
                           uVar35 = uVar35 - uVar31;
                           puVar12 = (undefined8*)( (long)puVar23 + uVar31 );
                           ZSTD_safecopyDstBeforeSrc(puVar23, local_d8, uVar31);
                        }

                        local_d8 = (undefined8*)( (long)param_1 + 0x76a4 );
                        puVar23 = (undefined8*)( (long)puVar12 + uVar35 );
                        *(undefined4*)( param_1 + 0xed4 ) = 0;
                        local_1b8 = (undefined8*)( (long)param_1 + 0x176a4 );
                        puVar30 = (undefined8*)( (long)local_d8 + uVar35 );
                        uVar10 = uStack_1b0 + uVar35;
                        puVar15 = (undefined8*)( (long)puVar23 - uVar36 );
                        if (( puVar33 + -4 < (undefined8*)( (long)puVar12 + uVar10 ) ) || ( local_1b8 < puVar30 )) {
                           uStack_118 = uVar35;
                           sStack_110 = uStack_1b0;
                           uStack_108 = uVar36;
                           uVar10 = ZSTD_execSequenceEnd(puVar12, puVar33, &local_d8, local_1b8, puVar32, lVar5, uVar35, uStack_1b0, uVar36, puVar6);
                        }
 else {
                           uVar7 = *(undefined8*)( (long)param_1 + 0x76ac );
                           *puVar12 = *(undefined8*)( (long)param_1 + 0x76a4 );
                           puVar12[1] = uVar7;
                           if (0x10 < uVar35) {
                              uVar7 = *(undefined8*)( (long)param_1 + 0x76bc );
                              puVar12[2] = *(undefined8*)( (long)param_1 + 0x76b4 );
                              puVar12[3] = uVar7;
                              if (0x10 < (long)( uVar35 - 0x10 )) {
                                 puVar13 = puVar12 + 4;
                                 puVar24 = (undefined8*)( (long)param_1 + 0x76c4 );
                                 do {
                                    uVar7 = puVar24[1];
                                    puVar25 = puVar13 + 4;
                                    *puVar13 = *puVar24;
                                    puVar13[1] = uVar7;
                                    uVar7 = puVar24[3];
                                    puVar13[2] = puVar24[2];
                                    puVar13[3] = uVar7;
                                    puVar13 = puVar25;
                                    puVar24 = puVar24 + 4;
                                 }
 while ( puVar25 < puVar23 );
                              }

                           }

                           local_d8 = puVar30;
                           if (( ulong )((long)puVar23 - (long)puVar32) < uVar36) {
                              if (uVar36 <= ( ulong )((long)puVar23 - lVar5)) {
                                 puVar28 = (undefined1*)( (long)puVar15 + ( (long)puVar6 - (long)puVar32 ) );
                                 if (puVar6 < puVar28 + uStack_1b0) {
                                    sVar34 = (long)puVar32 - (long)puVar15;
                                    pvVar14 = memmove(puVar23, puVar28, sVar34);
                                    uStack_1b0 = uStack_1b0 - sVar34;
                                    puVar23 = (undefined8*)( (long)pvVar14 + sVar34 );
                                    puVar15 = puVar32;
                                    goto LAB_00109338;
                                 }

                                 memmove(puVar23, puVar28, uStack_1b0);
                                 goto LAB_00109380;
                              }

                              goto LAB_00108370;
                           }

                           LAB_00109338:if (uVar36 < 0x10) {
                              if (uVar36 < 8) {
                                 *(undefined1*)puVar23 = *(undefined1*)puVar15;
                                 for (int i = 0; i < 3; i++) {
                                    *(undefined1*)( (long)puVar23 + ( i + 1 ) ) = *(undefined1*)( (long)puVar15 + ( i + 1 ) );
                                 }

                                 uVar27 = *(uint*)( dec32table_0 + uVar36 * 4 );
                                 *(undefined4*)( (long)puVar23 + 4 ) = *(undefined4*)( (long)puVar15 + (ulong)uVar27 );
                                 puVar15 = (undefined8*)( (long)( (long)puVar15 + (ulong)uVar27 ) - (long)*(int*)( dec64table_1 + uVar36 * 4 ) );
                              }
 else {
                                 *puVar23 = *puVar15;
                              }

                              if (8 < uStack_1b0) {
                                 if ((long)puVar23 - (long)puVar15 < 0x10) {
                                    lVar16 = 8;
                                    do {
                                       *(undefined8*)( (long)puVar23 + lVar16 ) = *(undefined8*)( (long)puVar15 + lVar16 );
                                       lVar16 = lVar16 + 8;
                                    }
 while ( (undefined8*)( (long)puVar23 + lVar16 ) < (undefined8*)( (long)puVar23 + uStack_1b0 ) );
                                 }
 else {
                                    uVar7 = puVar15[2];
                                    puVar23[1] = puVar15[1];
                                    puVar23[2] = uVar7;
                                    if (0x18 < (long)uStack_1b0) {
                                       puVar30 = puVar15 + 3;
                                       puVar15 = puVar23 + 3;
                                       do {
                                          uVar7 = puVar30[1];
                                          puVar13 = puVar15 + 4;
                                          *puVar15 = *puVar30;
                                          puVar15[1] = uVar7;
                                          uVar7 = puVar30[3];
                                          puVar15[2] = puVar30[2];
                                          puVar15[3] = uVar7;
                                          puVar30 = puVar30 + 4;
                                          puVar15 = puVar13;
                                       }
 while ( puVar13 < (undefined8*)( (long)puVar23 + uStack_1b0 ) );
                                    }

                                 }

                              }

                           }
 else {
                              uVar7 = puVar15[1];
                              *puVar23 = *puVar15;
                              puVar23[1] = uVar7;
                              if (0x10 < (long)uStack_1b0) {
                                 puVar30 = puVar15 + 2;
                                 puVar15 = puVar23 + 2;
                                 do {
                                    uVar7 = puVar30[1];
                                    puVar13 = puVar15 + 4;
                                    *puVar15 = *puVar30;
                                    puVar15[1] = uVar7;
                                    uVar7 = puVar30[3];
                                    puVar15[2] = puVar30[2];
                                    puVar15[3] = uVar7;
                                    puVar30 = puVar30 + 4;
                                    puVar15 = puVar13;
                                 }
 while ( puVar13 < (undefined8*)( uStack_1b0 + (long)puVar23 ) );
                              }

                           }

                        }

                        LAB_00109380:if (0xffffffffffffff88 < uVar10) goto LAB_00108200;
                        puVar23 = (undefined8*)( (long)puVar12 + uVar10 );
                        puVar12 = local_f8;
                        while (iVar21 = iVar21 + -1,local_f8 = puVar12,iVar21 != 0) {
                           puVar1 = (ushort*)( lStack_88 + lStack_90 * 8 );
                           bVar17 = (byte)puVar1[1];
                           puVar2 = (ushort*)( lStack_68 + lStack_70 * 8 );
                           bVar19 = (byte)puVar2[1];
                           puVar3 = (ushort*)( lStack_78 + lStack_80 * 8 );
                           uVar27 = *(uint*)( puVar1 + 2 );
                           local_f8 = (undefined8*)(ulong)uVar27;
                           bVar4 = (byte)puVar3[1];
                           uVar35 = ( ulong ) * (uint*)( puVar2 + 2 );
                           bVar18 = (byte)auStack_b0[0];
                           if (bVar4 < 2) {
                              if (bVar4 == 1) {
                                 auStack_b0[0] = auStack_b0[0] + 1;
                                 lVar16 = ( ulong )(*(uint*)( puVar3 + 2 ) + ( uint )(uVar27 == 0)) - ( (long)( local_b8 << ( bVar18 & 0x3f ) ) >> 0x3f );
                                 if (lVar16 == 3) {
                                    uVar36 = ( local_60[0] - 1 ) - ( ulong )(local_60[0] - 1 == 0);
                                 }
 else {
                                    uVar36 = local_60[lVar16] - ( ulong )(local_60[lVar16] == 0);
                                    if (lVar16 == 1) goto LAB_001094d1;
                                 }

                                 local_60[2] = local_60[1];
                              }
 else {
                                 uVar36 = local_60[uVar27 == 0];
                                 local_60[0] = *(ulong*)( auStack_b0 + ( 0xb - ( ulong )(uVar27 == 0) ) * 2 );
                              }

                           }
 else {
                              auStack_b0[0] = bVar4 + auStack_b0[0];
                              local_60[2] = local_60[1];
                              uVar36 = ( ulong ) * (uint*)( puVar3 + 2 ) + ( ( local_b8 << ( bVar18 & 0x3f ) ) >> ( -bVar4 & 0x3f ) );
                           }

                           LAB_001094d1:local_60[1] = local_60[0];
                           local_60[0] = uVar36;
                           if (bVar19 != 0) {
                              bVar18 = (byte)auStack_b0[0];
                              auStack_b0[0] = bVar19 + auStack_b0[0];
                              uVar35 = uVar35 + ( ( local_b8 << ( bVar18 & 0x3f ) ) >> ( -bVar19 & 0x3f ) );
                           }

                           if (0x1e < ( byte )(bVar17 + bVar19 + bVar4)) {
                              if (auStack_b0[0] < 0x41) {
                                 if (local_a8 < local_98) {
                                    if (local_a8 != local_a0) {
                                       uVar27 = auStack_b0[0] >> 3;
                                       uVar10 = (ulong)uVar27;
                                       if ((ulong*)( (long)local_a8 - uVar10 ) < local_a0) {
                                          uVar27 = (int)local_a8 - (int)local_a0;
                                          uVar10 = (ulong)uVar27;
                                       }

                                       local_a8 = (ulong*)( (long)local_a8 - uVar10 );
                                       auStack_b0[0] = auStack_b0[0] + uVar27 * -8;
                                       local_b8 = *local_a8;
                                    }

                                 }
 else {
                                    local_a8 = (ulong*)( (long)local_a8 - ( ulong )(auStack_b0[0] >> 3) );
                                    auStack_b0[0] = auStack_b0[0] & 7;
                                    local_b8 = *local_a8;
                                 }

                              }
 else {
                                 local_a8 = &zeroFilled_2;
                              }

                           }

                           if (bVar17 != 0) {
                              bVar19 = (byte)auStack_b0[0];
                              auStack_b0[0] = bVar17 + auStack_b0[0];
                              local_f8 = (undefined8*)( (long)local_f8 + ( ( local_b8 << ( bVar19 & 0x3f ) ) >> ( -bVar17 & 0x3f ) ) );
                           }

                           if (iVar21 != 1) {
                              iVar29 = *(byte*)( (long)puVar1 + 3 ) + auStack_b0[0];
                              iVar22 = ( uint ) * (byte*)( (long)puVar2 + 3 ) + iVar29;
                              lStack_90 = ( ~(-1L << (*(byte *)((long)puVar1 + 3) & 0x3f)) & local_b8 >> ( -(char)iVar29 & 0x3fU ) ) + ( ulong ) * puVar1;
                              auStack_b0[0] = iVar22 + ( uint ) * (byte*)( (long)puVar3 + 3 );
                              lStack_70 = ( ~(-1L << (*(byte *)((long)puVar2 + 3) & 0x3f)) & local_b8 >> ( -(char)iVar22 & 0x3fU ) ) + ( ulong ) * puVar2;
                              lStack_80 = ( ulong ) * puVar3 + ( local_b8 >> ( -(char)auStack_b0[0] & 0x3fU ) & ~(-1L << (*(byte *)((long)puVar3 + 3) & 0x3f)) );
                              if (auStack_b0[0] < 0x41) {
                                 if (local_a8 < local_98) {
                                    if (local_a8 != local_a0) {
                                       uVar27 = auStack_b0[0] >> 3;
                                       puVar26 = (ulong*)( (long)local_a8 - (ulong)uVar27 );
                                       if (puVar26 < local_a0) {
                                          uVar27 = (int)local_a8 - (int)local_a0;
                                          puVar26 = (ulong*)( (long)local_a8 - (ulong)uVar27 );
                                       }

                                       local_b8 = *puVar26;
                                       auStack_b0[0] = auStack_b0[0] + uVar27 * -8;
                                       local_a8 = puVar26;
                                    }

                                 }
 else {
                                    local_a8 = (ulong*)( (long)local_a8 - ( ulong )(auStack_b0[0] >> 3) );
                                    local_b8 = *local_a8;
                                    auStack_b0[0] = auStack_b0[0] & 7;
                                 }

                              }
 else {
                                 local_a8 = &zeroFilled_2;
                              }

                           }

                           puVar30 = (undefined8*)( (long)puVar23 + (long)local_f8 );
                           uVar10 = (long)local_f8 + uVar35;
                           puVar15 = (undefined8*)( (long)local_d8 + (long)local_f8 );
                           puVar13 = (undefined8*)( (long)puVar30 - uVar36 );
                           if (( puVar33 + -4 < (undefined8*)( (long)puVar23 + uVar10 ) ) || ( local_1b8 < puVar15 )) {
                              sStack_f0 = uVar35;
                              uStack_e8 = uVar36;
                              uVar10 = ZSTD_execSequenceEnd(puVar23, puVar33, &local_d8, local_1b8, puVar32, lVar5, local_f8, uVar35, uVar36, puVar6);
                           }
 else {
                              uVar7 = local_d8[1];
                              *puVar23 = *local_d8;
                              puVar23[1] = uVar7;
                              if ((undefined8*)0x10 < local_f8) {
                                 uVar7 = local_d8[3];
                                 puVar23[2] = local_d8[2];
                                 puVar23[3] = uVar7;
                                 if (0x10 < (long)( local_f8 + -2 )) {
                                    puVar24 = puVar23 + 4;
                                    do {
                                       uVar7 = local_d8[5];
                                       puVar25 = puVar24 + 4;
                                       *puVar24 = local_d8[4];
                                       puVar24[1] = uVar7;
                                       uVar7 = local_d8[7];
                                       puVar24[2] = local_d8[6];
                                       puVar24[3] = uVar7;
                                       puVar24 = puVar25;
                                       local_d8 = local_d8 + 4;
                                    }
 while ( puVar25 < puVar30 );
                                 }

                              }

                              local_f8 = puVar12;
                              local_d8 = puVar15;
                              if (( ulong )((long)puVar30 - (long)puVar32) < uVar36) {
                                 if (( ulong )((long)puVar30 - lVar5) < uVar36) goto LAB_00108370;
                                 puVar28 = (undefined1*)( (long)puVar13 + ( (long)puVar6 - (long)puVar32 ) );
                                 if (puVar28 + uVar35 <= puVar6) {
                                    memmove(puVar30, puVar28, uVar35);
                                    goto LAB_0010971e;
                                 }

                                 sVar34 = (long)puVar32 - (long)puVar13;
                                 uVar35 = uVar35 - sVar34;
                                 pvVar14 = memmove(puVar30, puVar28, sVar34);
                                 puVar30 = (undefined8*)( (long)pvVar14 + sVar34 );
                                 puVar13 = puVar32;
                              }

                              if (uVar36 < 0x10) {
                                 if (uVar36 < 8) {
                                    *(undefined1*)puVar30 = *(undefined1*)puVar13;
                                    for (int i = 0; i < 3; i++) {
                                       *(undefined1*)( (long)puVar30 + ( i + 1 ) ) = *(undefined1*)( (long)puVar13 + ( i + 1 ) );
                                    }

                                    uVar27 = *(uint*)( dec32table_0 + uVar36 * 4 );
                                    *(undefined4*)( (long)puVar30 + 4 ) = *(undefined4*)( (long)puVar13 + (ulong)uVar27 );
                                    puVar13 = (undefined8*)( (long)( (long)puVar13 + (ulong)uVar27 ) - (long)*(int*)( dec64table_1 + uVar36 * 4 ) );
                                 }
 else {
                                    *puVar30 = *puVar13;
                                 }

                                 if (8 < uVar35) {
                                    if ((long)puVar30 - (long)puVar13 < 0x10) {
                                       puVar12 = puVar30 + 1;
                                       do {
                                          puVar13 = puVar13 + 1;
                                          puVar15 = puVar12 + 1;
                                          *puVar12 = *puVar13;
                                          puVar12 = puVar15;
                                       }
 while ( puVar15 < (undefined8*)( (long)puVar30 + uVar35 ) );
                                    }
 else {
                                       uVar7 = puVar13[2];
                                       puVar30[1] = puVar13[1];
                                       puVar30[2] = uVar7;
                                       if (0x18 < (long)uVar35) {
                                          puVar12 = puVar13 + 3;
                                          puVar15 = puVar30 + 3;
                                          do {
                                             uVar7 = puVar12[1];
                                             puVar13 = puVar15 + 4;
                                             *puVar15 = *puVar12;
                                             puVar15[1] = uVar7;
                                             uVar7 = puVar12[3];
                                             puVar15[2] = puVar12[2];
                                             puVar15[3] = uVar7;
                                             puVar12 = puVar12 + 4;
                                             puVar15 = puVar13;
                                          }
 while ( puVar13 < (undefined8*)( (long)puVar30 + uVar35 ) );
                                       }

                                    }

                                 }

                              }
 else {
                                 uVar7 = puVar13[1];
                                 *puVar30 = *puVar13;
                                 puVar30[1] = uVar7;
                                 if (0x10 < (long)uVar35) {
                                    puVar12 = puVar13 + 2;
                                    puVar15 = puVar30 + 2;
                                    do {
                                       uVar7 = puVar12[1];
                                       puVar13 = puVar15 + 4;
                                       *puVar15 = *puVar12;
                                       puVar15[1] = uVar7;
                                       uVar7 = puVar12[3];
                                       puVar15[2] = puVar12[2];
                                       puVar15[3] = uVar7;
                                       puVar12 = puVar12 + 4;
                                       puVar15 = puVar13;
                                    }
 while ( puVar13 < (undefined8*)( uVar35 + (long)puVar30 ) );
                                 }

                              }

                           }

                           LAB_0010971e:if (0xffffffffffffff88 < uVar10) goto LAB_00108200;
                           puVar23 = (undefined8*)( (long)puVar23 + uVar10 );
                           puVar12 = local_f8;
                        }
;
                        LAB_00108cb2:if (( local_a8 != local_a0 ) || ( auStack_b0[0] != 0x40 )) goto LAB_00108370;
                        *(int*)( (long)param_1 + 0x683c ) = (int)local_60[0];
                        sVar34 = (long)local_1b8 - (long)local_d8;
                        *(int*)( param_1 + 0xd08 ) = (int)local_60[1];
                        *(int*)( (long)param_1 + 0x6844 ) = (int)local_60[2];
                        puVar12 = puVar23;
                        if (*(int*)( param_1 + 0xed4 ) == 2) goto LAB_00108535;
                        if (( ulong )((long)puVar33 - (long)puVar23) < sVar34) goto LAB_0010823f;
                        if (puVar23 != (undefined8*)0x0) goto LAB_00108598;
                        puVar33 = (undefined8*)0x0;
                        goto LAB_001081f2;
                     }

                  }
 else {
                     local_a8 = (ulong*)( (long)puVar26 + ( uVar10 - 8 ) );
                     local_b8 = *local_a8;
                     local_a0 = puVar26;
                     if (bVar17 != 0) {
                        uVar27 = 0x1f;
                        if (bVar17 != 0) {
                           for (; bVar17 >> uVar27 == 0; uVar27 = uVar27 - 1) {}
                        }

                        auStack_b0[0] = ( uVar27 ^ 0x1f ) - 0x17;
                        if (uVar10 < 0xffffffffffffff89) goto LAB_00108885;
                     }

                  }

               }

               goto LAB_00108370;
            }

            LAB_00108535:uVar10 = (long)local_1b8 - (long)local_d8;
            if (( ulong )((long)puVar33 - (long)puVar12) < uVar10) {
               LAB_0010823f:uVar10 = 0xffffffffffffffba;
            }
 else {
               if (puVar12 == (undefined8*)0x0) {
                  *(undefined4*)( param_1 + 0xed4 ) = 0;
                  if (puVar33 < (undefined8*)0x10000) goto LAB_0010823f;
                  puVar33 = (undefined8*)0x0;
               }
 else {
                  puVar23 = (undefined8*)( (long)puVar12 + uVar10 );
                  sVar34 = 0x10000;
                  memmove(puVar12, local_d8, uVar10);
                  local_d8 = (undefined8*)( (long)param_1 + 0x76a4 );
                  *(undefined4*)( param_1 + 0xed4 ) = 0;
                  if (( ulong )((long)puVar33 - (long)puVar23) < 0x10000) goto LAB_0010823f;
                  LAB_00108598:memcpy(puVar23, local_d8, sVar34);
                  puVar33 = (undefined8*)( (long)puVar23 + sVar34 );
               }

               LAB_001081f2:uVar10 = (long)puVar33 - (long)param_2;
            }

         }
 else {
            if (iVar21 != 0) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar10 = ZSTD_decompressSequences_bmi2_constprop_0(param_1, param_2, param_3, puVar26, uVar10, local_13c);
                  return uVar10;
               }

               goto LAB_00109b3a;
            }

            if (*(int*)( param_1 + 0xed4 ) == 0) {
               local_190 = (undefined8*)( (long)param_2 + param_3 );
               if ((long)param_3 < 1) {
                  local_190 = param_2;
               }

            }
 else {
               local_190 = (undefined8*)param_1[0xed2];
            }

            local_f8 = (undefined8*)param_1[0xeb5];
            puVar12 = (undefined8*)( param_1[0xeb9] + (long)local_f8 );
            puVar33 = (undefined8*)param_1[0xe99];
            lVar5 = param_1[0xe9a];
            puVar6 = (undefined1*)param_1[0xe9b];
            puVar32 = param_2;
            if (local_13c == 0) {
               LAB_001081c0:uVar10 = 0xffffffffffffffba;
               uVar35 = (long)puVar12 - (long)local_f8;
               if (uVar35 <= ( ulong )((long)local_190 - (long)puVar32)) {
                  puVar33 = puVar32;
                  if (puVar32 != (undefined8*)0x0) {
                     puVar33 = (undefined8*)( (long)puVar32 + uVar35 );
                     memcpy(puVar32, local_f8, uVar35);
                  }

                  goto LAB_001081f2;
               }

            }
 else {
               local_60[0] = ( ulong ) * (uint*)( (long)param_1 + 0x683c );
               *(undefined4*)( (long)param_1 + 0x7534 ) = 1;
               local_60[1] = ( ulong ) * (uint*)( param_1 + 0xd08 );
               local_60[2] = ( ulong ) * (uint*)( (long)param_1 + 0x6844 );
               if (uVar10 != 0) {
                  local_98 = puVar26 + 1;
                  bVar17 = *(byte*)( (long)puVar26 + ( uVar10 - 1 ) );
                  if (uVar10 < 8) {
                     local_b8 = ( ulong )(byte) * puVar26;
                     switch (uVar10) {
                        case 7:
                local_b8 = local_b8 + ((ulong)*(byte *)((long)puVar26 + 6) << 0x30);
                        case 6:
                local_b8 = local_b8 + ((ulong)*(byte *)((long)puVar26 + 5) << 0x28);
                        case 5:
                local_b8 = local_b8 + ((ulong)*(byte *)((long)puVar26 + 4) << 0x20);
                        case 4:
                local_b8 = local_b8 + (ulong)*(byte *)((long)puVar26 + 3) * 0x1000000;
                        case 3:
                local_b8 = local_b8 + (ulong)*(byte *)((long)puVar26 + 2) * 0x10000;
                        case 2:
                local_b8 = local_b8 + (ulong)*(byte *)((long)puVar26 + 1) * 0x100;
                     }

                     local_a8 = puVar26;
                     local_a0 = puVar26;
                     if (bVar17 != 0) {
                        uVar27 = 0x1f;
                        if (bVar17 != 0) {
                           for (; bVar17 >> uVar27 == 0; uVar27 = uVar27 - 1) {}
                        }

                        auStack_b0[0] = ( ( uVar27 ^ 0x1f ) - 0x17 ) + ( 8 - (int)uVar10 ) * 8;
                        LAB_00107d42:local_a0 = puVar26;
                        ZSTD_initFseState(&lStack_90, &local_b8, *param_1);
                        ZSTD_initFseState(&lStack_80, &local_b8, param_1[2]);
                        ZSTD_initFseState(&lStack_70, &local_b8, param_1[1]);
                        iVar21 = local_13c;
                        do {
                           puVar1 = (ushort*)( lStack_88 + lStack_90 * 8 );
                           bVar17 = (byte)puVar1[1];
                           uVar27 = *(uint*)( puVar1 + 2 );
                           puVar23 = (undefined8*)(ulong)uVar27;
                           puVar2 = (ushort*)( lStack_68 + lStack_70 * 8 );
                           bVar19 = (byte)puVar2[1];
                           puVar3 = (ushort*)( lStack_78 + lStack_80 * 8 );
                           uVar35 = ( ulong ) * (uint*)( puVar2 + 2 );
                           bVar4 = (byte)puVar3[1];
                           if (bVar4 < 2) {
                              if (bVar4 == 1) {
                                 bVar18 = (byte)auStack_b0[0] & 0x3f;
                                 auStack_b0[0] = auStack_b0[0] + 1;
                                 lVar16 = ( ulong )(*(uint*)( puVar3 + 2 ) + ( uint )(uVar27 == 0)) - ( (long)( local_b8 << bVar18 ) >> 0x3f );
                                 uStack_1b0 = local_60[0];
                                 if (lVar16 == 3) {
                                    uVar36 = ( local_60[0] - 1 ) - ( ulong )(local_60[0] - 1 == 0);
                                 }
 else {
                                    uVar36 = local_60[lVar16] - ( ulong )(local_60[lVar16] == 0);
                                    if (lVar16 == 1) goto LAB_00107efb;
                                 }

                                 local_60[2] = local_60[1];
                              }
 else {
                                 uVar36 = local_60[uVar27 == 0];
                                 uStack_1b0 = *(ulong*)( auStack_b0 + ( 0xb - ( ulong )(uVar27 == 0) ) * 2 );
                              }

                           }
 else {
                              bVar18 = (byte)auStack_b0[0] & 0x3f;
                              auStack_b0[0] = bVar4 + auStack_b0[0];
                              local_60[2] = local_60[1];
                              uVar36 = ( ulong ) * (uint*)( puVar3 + 2 ) + ( ( local_b8 << bVar18 ) >> ( -bVar4 & 0x3f ) );
                              uStack_1b0 = local_60[0];
                           }

                           LAB_00107efb:local_60[0] = uVar36;
                           local_60[1] = uStack_1b0;
                           if (bVar19 != 0) {
                              bVar18 = (byte)auStack_b0[0];
                              auStack_b0[0] = bVar19 + auStack_b0[0];
                              uVar35 = uVar35 + ( ( local_b8 << ( bVar18 & 0x3f ) ) >> ( -bVar19 & 0x3f ) );
                           }

                           if (0x1e < ( byte )(bVar17 + bVar19 + bVar4)) {
                              if (auStack_b0[0] < 0x41) {
                                 if (local_a8 < local_98) {
                                    if (local_a8 != local_a0) {
                                       uStack_14c = auStack_b0[0] >> 3;
                                       puVar26 = (ulong*)( (long)local_a8 - (ulong)uStack_14c );
                                       if (puVar26 < local_a0) {
                                          uStack_14c = (int)local_a8 - (int)local_a0;
                                          puVar26 = (ulong*)( (long)local_a8 - (ulong)uStack_14c );
                                       }

                                       auStack_b0[0] = auStack_b0[0] + uStack_14c * -8;
                                       local_b8 = *puVar26;
                                       local_a8 = puVar26;
                                    }

                                 }
 else {
                                    local_a8 = (ulong*)( (long)local_a8 - ( ulong )(auStack_b0[0] >> 3) );
                                    local_b8 = *local_a8;
                                    auStack_b0[0] = auStack_b0[0] & 7;
                                 }

                              }
 else {
                                 local_a8 = &zeroFilled_2;
                              }

                           }

                           if (bVar17 != 0) {
                              bVar19 = (byte)auStack_b0[0];
                              auStack_b0[0] = bVar17 + auStack_b0[0];
                              puVar23 = (undefined8*)( (long)puVar23 + ( ( local_b8 << ( bVar19 & 0x3f ) ) >> ( -bVar17 & 0x3f ) ) );
                           }

                           if (iVar21 != 1) {
                              iVar29 = *(byte*)( (long)puVar1 + 3 ) + auStack_b0[0];
                              iVar22 = ( uint ) * (byte*)( (long)puVar2 + 3 ) + iVar29;
                              lStack_90 = ( ~(-1L << (*(byte *)((long)puVar1 + 3) & 0x3f)) & local_b8 >> ( -(char)iVar29 & 0x3fU ) ) + ( ulong ) * puVar1;
                              auStack_b0[0] = iVar22 + ( uint ) * (byte*)( (long)puVar3 + 3 );
                              lStack_70 = ( ~(-1L << (*(byte *)((long)puVar2 + 3) & 0x3f)) & local_b8 >> ( -(char)iVar22 & 0x3fU ) ) + ( ulong ) * puVar2;
                              lStack_80 = ( local_b8 >> ( -(char)auStack_b0[0] & 0x3fU ) & ~(-1L << (*(byte *)((long)puVar3 + 3) & 0x3f)) ) + ( ulong ) * puVar3;
                              if (auStack_b0[0] < 0x41) {
                                 if (local_a8 < local_98) {
                                    if (local_a8 != local_a0) {
                                       uVar27 = auStack_b0[0] >> 3;
                                       puVar26 = (ulong*)( (long)local_a8 - (ulong)uVar27 );
                                       if (puVar26 < local_a0) {
                                          uVar27 = (int)local_a8 - (int)local_a0;
                                          puVar26 = (ulong*)( (long)local_a8 - (ulong)uVar27 );
                                       }

                                       local_b8 = *puVar26;
                                       auStack_b0[0] = auStack_b0[0] + uVar27 * -8;
                                       local_a8 = puVar26;
                                    }

                                 }
 else {
                                    local_a8 = (ulong*)( (long)local_a8 - ( ulong )(auStack_b0[0] >> 3) );
                                    local_b8 = *local_a8;
                                    auStack_b0[0] = auStack_b0[0] & 7;
                                 }

                              }
 else {
                                 local_a8 = &zeroFilled_2;
                              }

                           }

                           puVar30 = (undefined8*)( (long)puVar32 + (long)puVar23 );
                           uVar10 = (long)puVar23 + uVar35;
                           puVar15 = (undefined8*)( (long)local_f8 + (long)puVar23 );
                           puVar13 = (undefined8*)( (long)puVar30 - uVar36 );
                           if (( local_190 + -4 < (undefined8*)( (long)puVar32 + uVar10 ) ) || ( puVar12 < puVar15 )) {
                              local_d8 = puVar23;
                              sStack_d0 = uVar35;
                              uStack_c8 = uVar36;
                              uVar10 = ZSTD_execSequenceEnd(puVar32, local_190, &local_f8, puVar12, puVar33, lVar5, puVar23, uVar35, uVar36, puVar6);
                           }
 else {
                              uVar7 = local_f8[1];
                              *puVar32 = *local_f8;
                              puVar32[1] = uVar7;
                              if ((undefined8*)0x10 < puVar23) {
                                 uVar7 = local_f8[3];
                                 puVar32[2] = local_f8[2];
                                 puVar32[3] = uVar7;
                                 if (0x10 < (long)( puVar23 + -2 )) {
                                    puVar23 = puVar32 + 4;
                                    do {
                                       uVar7 = local_f8[5];
                                       puVar24 = puVar23 + 4;
                                       *puVar23 = local_f8[4];
                                       puVar23[1] = uVar7;
                                       uVar7 = local_f8[7];
                                       puVar23[2] = local_f8[6];
                                       puVar23[3] = uVar7;
                                       puVar23 = puVar24;
                                       local_f8 = local_f8 + 4;
                                    }
 while ( puVar24 < puVar30 );
                                 }

                              }

                              local_f8 = puVar15;
                              if (( ulong )((long)puVar30 - (long)puVar33) < uVar36) {
                                 if (( ulong )((long)puVar30 - lVar5) < uVar36) goto LAB_00108370;
                                 puVar28 = (undefined1*)( (long)puVar13 + ( (long)puVar6 - (long)puVar33 ) );
                                 if (puVar28 + uVar35 <= puVar6) {
                                    memmove(puVar30, puVar28, uVar35);
                                    goto LAB_0010814e;
                                 }

                                 sVar34 = (long)puVar33 - (long)puVar13;
                                 uVar35 = uVar35 - sVar34;
                                 pvVar14 = memmove(puVar30, puVar28, sVar34);
                                 puVar30 = (undefined8*)( (long)pvVar14 + sVar34 );
                                 puVar13 = puVar33;
                              }

                              if (uVar36 < 0x10) {
                                 if (uVar36 < 8) {
                                    *(undefined1*)puVar30 = *(undefined1*)puVar13;
                                    for (int i = 0; i < 3; i++) {
                                       *(undefined1*)( (long)puVar30 + ( i + 1 ) ) = *(undefined1*)( (long)puVar13 + ( i + 1 ) );
                                    }

                                    uVar27 = *(uint*)( dec32table_0 + uVar36 * 4 );
                                    *(undefined4*)( (long)puVar30 + 4 ) = *(undefined4*)( (long)puVar13 + (ulong)uVar27 );
                                    puVar13 = (undefined8*)( (long)( (long)puVar13 + (ulong)uVar27 ) - (long)*(int*)( dec64table_1 + uVar36 * 4 ) );
                                 }
 else {
                                    *puVar30 = *puVar13;
                                 }

                                 if (8 < uVar35) {
                                    if ((long)puVar30 - (long)puVar13 < 0x10) {
                                       puVar23 = puVar30 + 1;
                                       do {
                                          puVar13 = puVar13 + 1;
                                          puVar15 = puVar23 + 1;
                                          *puVar23 = *puVar13;
                                          puVar23 = puVar15;
                                       }
 while ( puVar15 < (undefined8*)( (long)puVar30 + uVar35 ) );
                                    }
 else {
                                       uVar7 = puVar13[2];
                                       puVar30[1] = puVar13[1];
                                       puVar30[2] = uVar7;
                                       if (0x18 < (long)uVar35) {
                                          puVar23 = puVar13 + 3;
                                          puVar15 = puVar30 + 3;
                                          do {
                                             uVar7 = puVar23[1];
                                             puVar13 = puVar15 + 4;
                                             *puVar15 = *puVar23;
                                             puVar15[1] = uVar7;
                                             uVar7 = puVar23[3];
                                             puVar15[2] = puVar23[2];
                                             puVar15[3] = uVar7;
                                             puVar23 = puVar23 + 4;
                                             puVar15 = puVar13;
                                          }
 while ( puVar13 < (undefined8*)( (long)puVar30 + uVar35 ) );
                                       }

                                    }

                                 }

                              }
 else {
                                 uVar7 = puVar13[1];
                                 *puVar30 = *puVar13;
                                 puVar30[1] = uVar7;
                                 if (0x10 < (long)uVar35) {
                                    puVar23 = puVar13 + 2;
                                    puVar15 = puVar30 + 2;
                                    do {
                                       uVar7 = puVar23[1];
                                       puVar13 = puVar15 + 4;
                                       *puVar15 = *puVar23;
                                       puVar15[1] = uVar7;
                                       uVar7 = puVar23[3];
                                       puVar15[2] = puVar23[2];
                                       puVar15[3] = uVar7;
                                       puVar23 = puVar23 + 4;
                                       puVar15 = puVar13;
                                    }
 while ( puVar13 < (undefined8*)( uVar35 + (long)puVar30 ) );
                                 }

                              }

                           }

                           LAB_0010814e:if (0xffffffffffffff88 < uVar10) goto LAB_00108200;
                           puVar32 = (undefined8*)( (long)puVar32 + uVar10 );
                           iVar21 = iVar21 + -1;
                        }
 while ( iVar21 != 0 );
                        if (( local_a8 == local_a0 ) && ( auStack_b0[0] == 0x40 )) {
                           *(int*)( (long)param_1 + 0x683c ) = (int)uVar36;
                           *(int*)( param_1 + 0xd08 ) = (int)uStack_1b0;
                           *(int*)( (long)param_1 + 0x6844 ) = (int)local_60[2];
                           goto LAB_001081c0;
                        }

                     }

                  }
 else {
                     local_a8 = (ulong*)( (long)puVar26 + ( uVar10 - 8 ) );
                     local_b8 = *local_a8;
                     local_a0 = puVar26;
                     if (bVar17 != 0) {
                        uVar27 = 0x1f;
                        if (bVar17 != 0) {
                           for (; bVar17 >> uVar27 == 0; uVar27 = uVar27 - 1) {}
                        }

                        auStack_b0[0] = ( uVar27 ^ 0x1f ) - 0x17;
                        if (uVar10 < 0xffffffffffffff89) goto LAB_00107d42;
                     }

                  }

               }

               LAB_00108370:uVar10 = 0xffffffffffffffec;
            }

         }

      }

   }

   LAB_00108200:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar10;
   }

   LAB_00109b3a:/* WARNING: Subroutine does not return */__stack_chk_fail();
   code_r0x00108ca0:puVar23 = (undefined8*)( (long)puVar23 + uVar10 );
   iVar21 = iVar21 + -1;
   if (iVar21 == 0) goto LAB_00108cb2;
   goto LAB_00108970;
}
undefined8 ZSTD_decompressBlock_internal(long param_1) {
   ulong uVar1;
   undefined8 uVar2;
   ulong in_R8;
   uVar1 = 0x20000;
   if (*(int*)( param_1 + 0x75e0 ) != 0) {
      uVar1 = ( ulong ) * (uint*)( param_1 + 0x74f8 );
   }

   if (in_R8 <= uVar1) {
      uVar2 = ZSTD_decompressBlock_internal_part_0();
      return uVar2;
   }

   return 0xffffffffffffffb8;
}
void ZSTD_checkContinuity(long param_1, long param_2, long param_3) {
   long lVar1;
   long lVar2;
   lVar1 = *(long*)( param_1 + 0x74c0 );
   if (( param_3 != 0 ) && ( lVar1 != param_2 )) {
      lVar2 = *(long*)( param_1 + 0x74c8 );
      *(long*)( param_1 + 0x74c0 ) = param_2;
      *(long*)( param_1 + 0x74c8 ) = param_2;
      *(long*)( param_1 + 0x74d0 ) = param_2 - ( lVar1 - lVar2 );
      *(long*)( param_1 + 0x74d8 ) = lVar1;
   }

   return;
}
ulong ZSTD_decompressBlock_deprecated(long param_1, long param_2, long param_3, undefined8 param_4, ulong param_5) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   lVar1 = *(long*)( param_1 + 0x74c0 );
   *(undefined4*)( param_1 + 0x75e0 ) = 0;
   if (( param_2 != lVar1 ) && ( param_3 != 0 )) {
      lVar2 = *(long*)( param_1 + 0x74c8 );
      *(long*)( param_1 + 0x74c0 ) = param_2;
      *(long*)( param_1 + 0x74c8 ) = param_2;
      *(long*)( param_1 + 0x74d0 ) = param_2 - ( lVar1 - lVar2 );
      *(long*)( param_1 + 0x74d8 ) = lVar1;
   }

   uVar3 = 0xffffffffffffffb8;
   if (param_5 < 0x20001) {
      uVar3 = ZSTD_decompressBlock_internal_part_0(param_1, param_2);
      if (uVar3 < 0xffffffffffffff89) {
         *(ulong*)( param_1 + 0x74c0 ) = param_2 + uVar3;
      }

   }

   return uVar3;
}
ulong ZSTD_decompressBlock(long param_1, long param_2, long param_3, undefined8 param_4, ulong param_5) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   lVar1 = *(long*)( param_1 + 0x74c0 );
   *(undefined4*)( param_1 + 0x75e0 ) = 0;
   if (( param_2 != lVar1 ) && ( param_3 != 0 )) {
      lVar2 = *(long*)( param_1 + 0x74c8 );
      *(long*)( param_1 + 0x74c0 ) = param_2;
      *(long*)( param_1 + 0x74c8 ) = param_2;
      *(long*)( param_1 + 0x74d0 ) = param_2 - ( lVar1 - lVar2 );
      *(long*)( param_1 + 0x74d8 ) = lVar1;
   }

   uVar3 = 0xffffffffffffffb8;
   if (param_5 < 0x20001) {
      uVar3 = ZSTD_decompressBlock_internal_part_0(param_1, param_2);
      if (uVar3 < 0xffffffffffffff89) {
         *(ulong*)( param_1 + 0x74c0 ) = param_2 + uVar3;
      }

   }

   return uVar3;
}


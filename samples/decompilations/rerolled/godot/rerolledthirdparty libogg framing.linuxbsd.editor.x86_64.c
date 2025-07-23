undefined1 ogg_page_version(long *param_1) {
   return *(undefined1*)( *param_1 + 4 );
}
byte ogg_page_continued(long *param_1) {
   return *(byte*)( *param_1 + 5 ) & 1;
}
byte ogg_page_bos(long *param_1) {
   return *(byte*)( *param_1 + 5 ) & 2;
}
byte ogg_page_eos(long *param_1) {
   return *(byte*)( *param_1 + 5 ) & 4;
}
undefined8 ogg_page_granulepos(long *param_1) {
   return *(undefined8*)( *param_1 + 6 );
}
undefined4 ogg_page_serialno(long *param_1) {
   return *(undefined4*)( *param_1 + 0xe );
}
undefined4 ogg_page_pageno(long *param_1) {
   return *(undefined4*)( *param_1 + 0x12 );
}
int ogg_page_packets(long *param_1) {
   char cVar1;
   long lVar2;
   char *pcVar3;
   int iVar4;
   lVar2 = *param_1;
   if (*(byte*)( lVar2 + 0x1a ) != 0) {
      pcVar3 = (char*)( lVar2 + 0x1b );
      iVar4 = 0;
      do {
         cVar1 = *pcVar3;
         pcVar3 = pcVar3 + 1;
         iVar4 = iVar4 + ( uint )(cVar1 != -1);
      }
 while ( (char*)( lVar2 + 0x1c + ( ulong )(*(byte*)( lVar2 + 0x1a ) - 1) ) != pcVar3 );
      return iVar4;
   }

   return 0;
}
int ogg_stream_check(long *param_1) {
   if (param_1 != (long*)0x0) {
      return -(uint)(*param_1 == 0);
   }

   return -1;
}
undefined8 ogg_stream_clear(undefined8 *param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   byte bVar3;
   bVar3 = 0;
   if (param_1 != (undefined8*)0x0) {
      if ((void*)*param_1 != (void*)0x0) {
         free((void*)*param_1);
      }

      if ((void*)param_1[4] != (void*)0x0) {
         free((void*)param_1[4]);
      }

      if ((void*)param_1[5] != (void*)0x0) {
         free((void*)param_1[5]);
      }

      *param_1 = 0;
      param_1[0x32] = 0;
      puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
      for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x198U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
         *puVar2 = 0;
         puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
      }

      return 0;
   }

   return 0;
}
undefined8 ogg_stream_init(undefined8 *param_1, int param_2) {
   void *pvVar1;
   void *pvVar2;
   void *pvVar3;
   undefined8 uVar4;
   ulong uVar5;
   undefined8 *puVar6;
   if (param_1 != (undefined8*)0x0) {
      *param_1 = 0;
      param_1[0x32] = 0;
      puVar6 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
      for (uVar5 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x198U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
         *puVar6 = 0;
         puVar6 = puVar6 + 1;
      }

      param_1[1] = 0x4000;
      param_1[6] = 0x400;
      pvVar1 = malloc(0x4000);
      *param_1 = pvVar1;
      pvVar2 = malloc(0x1000);
      param_1[4] = pvVar2;
      pvVar3 = malloc(0x2000);
      param_1[5] = pvVar3;
      if (( pvVar1 == (void*)0x0 || pvVar2 == (void*)0x0 ) || ( pvVar3 == (void*)0x0 )) {
         ogg_stream_clear(param_1);
         uVar4 = 0xffffffff;
      }
 else {
         param_1[0x2f] = (long)param_2;
         uVar4 = 0;
      }

      return uVar4;
   }

   return 0xffffffff;
}
undefined8 ogg_stream_destroy(void *param_1) {
   if (param_1 != (void*)0x0) {
      ogg_stream_clear();
      free(param_1);
      return 0;
   }

   return 0;
}
void ogg_page_checksum_set(long *param_1) {
   long lVar1;
   undefined4 uVar2;
   if (param_1 != (long*)0x0) {
      for (int i = 0; i < 4; i++) {
         *(undefined1*)( *param_1 + ( i + 22 ) ) = 0;
      }

      lVar1 = *param_1;
      uVar2 = _os_update_crc(0, lVar1, (int)param_1[1]);
      uVar2 = _os_update_crc(uVar2, param_1[2], (int)param_1[3]);
      *(char*)( lVar1 + 0x16 ) = (char)uVar2;
      for (int i = 0; i < 3; i++) {
         *(char*)( *param_1 + ( i + 23 ) ) = (char)( (uint)uVar2 >> ( 8*i + 8 ) );
      }

      return;
   }

   return;
}
undefined8 ogg_stream_flush_i(long *param_1, undefined8 *param_2, int param_3, int param_4) {
   uint uVar1;
   long lVar2;
   long lVar3;
   byte bVar4;
   long lVar5;
   undefined1 *puVar6;
   long lVar7;
   long lVar8;
   undefined4 uVar9;
   long lVar10;
   uint *__dest;
   long lVar11;
   int iVar12;
   long lVar13;
   undefined1 uVar14;
   int iVar15;
   long local_40;
   lVar2 = param_1[7];
   lVar3 = *param_1;
   lVar10 = 0xff;
   if (lVar2 < 0x100) {
      lVar10 = lVar2;
   }

   iVar12 = (int)lVar10;
   if (( lVar3 == 0 ) || ( iVar12 == 0 )) {
      return 0;
   }

   if (*(int*)( (long)param_1 + 0x174 ) == 0) {
      if (iVar12 < 1) {
         lVar7 = 0;
         lVar10 = 0;
      }
 else {
         lVar10 = 1;
         do {
            lVar7 = (long)(int)lVar10;
            if (*(char*)( param_1[4] + -4 + lVar10 * 4 ) != -1) break;
            lVar10 = lVar10 + 1;
         }
 while ( lVar10 != ( ulong )(iVar12 - 1) + 2 );
         lVar10 = 0;
      }

      LAB_0010087b:if (param_3 == 0) {
         return 0;
      }

      __dest = (uint*)param_1[4];
      LAB_001006dd:iVar15 = (int)lVar7;
      lVar8 = (long)iVar15;
      *(undefined4*)( param_1 + 10 ) = 0x5367674f;
      iVar12 = iVar15 + 0x1b;
      local_40 = lVar8 * 4;
      *(undefined1*)( (long)param_1 + 0x54 ) = 0;
      lVar11 = (long)iVar12;
      lVar5 = lVar8 * 8;
      bVar4 = ( ( byte )(*__dest >> 8) ^ 1 ) & 1;
      if (*(int*)( (long)param_1 + 0x174 ) == 0) {
         bVar4 = bVar4 | 2;
      }

   }
 else {
      if (iVar12 < 1) {
         lVar10 = -1;
         lVar7 = 0;
         goto LAB_0010087b;
      }

      __dest = (uint*)param_1[4];
      lVar13 = ( ulong )(iVar12 - 1) << 3;
      lVar8 = 0;
      lVar5 = 1;
      iVar12 = 0;
      lVar10 = -1;
      lVar11 = 0;
      do {
         while (true) {
            lVar11 = lVar11 + (ulong)(byte)__dest[lVar5 + -1];
            iVar15 = (int)lVar5;
            if ((byte)__dest[lVar5 + -1] != 0xff) break;
            if (lVar8 == lVar13) {
               LAB_001008cd:lVar7 = (long)iVar15;
               if (iVar15 != 0xff) goto LAB_0010087b;
               goto LAB_001008d5;
            }

            lVar5 = lVar5 + 1;
            lVar8 = lVar8 + 8;
         }
;
         iVar12 = iVar12 + 1;
         lVar10 = *(long*)( param_1[5] + lVar8 );
         lVar7 = (long)iVar15;
         if (lVar8 == lVar13) goto LAB_001008cd;
         lVar5 = lVar5 + 1;
         lVar8 = lVar8 + 8;
      }
 while ( ( iVar12 < 4 ) || ( lVar11 <= param_4 ) );
      if (iVar15 != 0xff) goto LAB_001006dd;
      LAB_001008d5:*(undefined4*)( param_1 + 10 ) = 0x5367674f;
      *(undefined1*)( (long)param_1 + 0x54 ) = 0;
      if (( *__dest & 0x100 ) == 0) {
         *(undefined1*)( (long)param_1 + 0x55 ) = 1;
         iVar12 = 0x11a;
         lVar5 = 0x7f8;
         lVar11 = 0x11a;
         local_40 = 0x3fc;
         uVar14 = 0xff;
         lVar8 = 0xff;
         lVar7 = 0xff;
         goto LAB_00100723;
      }

      local_40 = 0x3fc;
      lVar5 = 0x7f8;
      iVar12 = 0x11a;
      bVar4 = 0;
      lVar11 = 0x11a;
      iVar15 = -1;
      lVar8 = 0xff;
      lVar7 = 0xff;
   }

   uVar14 = (undefined1)iVar15;
   *(byte*)( (long)param_1 + 0x55 ) = bVar4;
   LAB_00100723:if (( (int)param_1[0x2e] != 0 ) && ( lVar2 == lVar8 )) {
      *(byte*)( (long)param_1 + 0x55 ) = *(byte*)( (long)param_1 + 0x55 ) | 4;
   }

   *(undefined4*)( (long)param_1 + 0x174 ) = 1;
   puVar6 = (undefined1*)( (long)param_1 + 0x56 );
   do {
      *puVar6 = (char)lVar10;
      puVar6 = puVar6 + 1;
      lVar10 = lVar10 >> 8;
   }
 while ( puVar6 != (undefined1*)( (long)param_1 + 0x5e ) );
   uVar9 = (undefined4)param_1[0x30];
   *(int*)( (long)param_1 + 0x5e ) = (int)param_1[0x2f];
   if (param_1[0x30] == -1) {
      uVar9 = 0;
      lVar10 = 1;
   }
 else {
      lVar10 = param_1[0x30] + 1;
   }

   param_1[0x30] = lVar10;
   *(undefined4*)( (long)param_1 + 0x62 ) = uVar9;
   *(undefined4*)( (long)param_1 + 0x66 ) = 0;
   *(undefined1*)( (long)param_1 + 0x6a ) = uVar14;
   if ((int)lVar7 == 0) {
      lVar10 = 0;
   }
 else {
      lVar10 = 0;
      iVar15 = 0;
      do {
         uVar1 = __dest[lVar10];
         *(char*)( (long)param_1 + lVar10 + 0x6b ) = (char)uVar1;
         lVar10 = lVar10 + 1;
         iVar15 = iVar15 + ( uVar1 & 0xff );
      }
 while ( lVar10 != lVar7 );
      lVar10 = (long)iVar15;
   }

   lVar7 = param_1[3];
   *param_2 = param_1 + 10;
   *(int*)( (long)param_1 + 0x16c ) = iVar12;
   param_2[1] = lVar11;
   param_2[3] = lVar10;
   param_2[2] = lVar7 + lVar3;
   param_1[7] = lVar2 - lVar8;
   memmove(__dest, (void*)( local_40 + (long)__dest ), ( lVar2 - lVar8 ) * 4);
   memmove((void*)param_1[5], (void*)( param_1[5] + lVar5 ), param_1[7] * 8);
   param_1[3] = param_1[3] + lVar10;
   ogg_page_checksum_set(param_2);
   return 1;
}
undefined8 ogg_stream_iovecin(long *param_1, undefined8 *param_2, int param_3, long param_4, long param_5) {
   uint *puVar1;
   void *__dest;
   long lVar2;
   long lVar3;
   int iVar4;
   long lVar5;
   undefined8 *puVar6;
   size_t __n;
   long lVar7;
   long lVar8;
   undefined8 *puVar9;
   long lVar10;
   long lVar11;
   long local_48;
   if (( param_1 == (long*)0x0 ) || ( __dest = (void*)*param_1 ),__dest == (void*)0x0) {
      return 0xffffffff;
   }

   if (param_2 != (undefined8*)0x0) {
      if (param_3 < 1) {
         local_48 = 1;
         lVar10 = 0;
         lVar11 = 0;
      }
 else {
         lVar11 = 0;
         puVar6 = param_2;
         do {
            lVar10 = puVar6[1];
            if (lVar10 < 0) {
               return 0xffffffff;
            }

            if (0x7fffffffffffffff - lVar10 < lVar11) {
               return 0xffffffff;
            }

            puVar6 = puVar6 + 2;
            lVar11 = lVar11 + lVar10;
         }
 while ( param_2 + (long)param_3 * 2 != puVar6 );
         lVar10 = ( SUB168(SEXT816(-0x7f7f7f7f7f7f7f7f) * SEXT816(lVar11), 8) + lVar11 >> 7 ) - ( lVar11 >> 0x3f );
         local_48 = lVar10 + 1;
      }

      lVar8 = param_1[3];
      if (lVar8 != 0) {
         __n = param_1[2] - lVar8;
         param_1[2] = __n;
         if (__n != 0) {
            memmove(__dest, (void*)( (long)__dest + lVar8 ), __n);
         }

         param_1[3] = 0;
      }

      iVar4 = _os_body_expand(param_1, lVar11);
      if (iVar4 != 0) {
         return 0xffffffff;
      }

      iVar4 = _os_lacing_expand(param_1, local_48);
      if (iVar4 != 0) {
         return 0xffffffff;
      }

      if (0 < param_3) {
         lVar8 = param_1[2];
         puVar6 = param_2;
         do {
            puVar9 = puVar6 + 2;
            memcpy((void*)( lVar8 + *param_1 ), (void*)*puVar6, puVar6[1]);
            lVar8 = (long)*(int*)( puVar6 + 1 ) + param_1[2];
            param_1[2] = lVar8;
            puVar6 = puVar9;
         }
 while ( param_2 + (long)param_3 * 2 != puVar9 );
      }

      lVar8 = param_1[4];
      lVar2 = param_1[5];
      lVar5 = 0;
      if (lVar11 < 0xff) {
         lVar10 = 0;
      }
 else {
         do {
            lVar3 = param_1[0x32];
            lVar7 = param_1[7] + lVar5;
            lVar5 = lVar5 + 1;
            *(undefined4*)( lVar8 + lVar7 * 4 ) = 0xff;
            *(long*)( lVar2 + lVar7 * 8 ) = lVar3;
         }
 while ( lVar5 < lVar10 );
         if (lVar10 < 1) {
            lVar10 = 1;
         }

      }

      lVar5 = param_1[7];
      *(int*)( lVar8 + ( lVar10 + lVar5 ) * 4 ) = (int)lVar11 + ( (int)( SUB168(SEXT816(-0x7f7f7f7f7f7f7f7f) * SEXT816(lVar11), 8) + lVar11 >> 7 ) - (int)( lVar11 >> 0x3f ) ) * -0xff;
      *(long*)( lVar2 + ( lVar10 + lVar5 ) * 8 ) = param_5;
      lVar10 = param_1[7];
      param_1[0x32] = param_5;
      puVar1 = (uint*)( lVar8 + lVar10 * 4 );
      *puVar1 = *puVar1 | 0x100;
      param_1[0x31] = param_1[0x31] + 1;
      param_1[7] = lVar10 + local_48;
      if (param_4 != 0) {
         *(undefined4*)( param_1 + 0x2e ) = 1;
      }

   }

   return 0;
}
void ogg_stream_packetin(undefined8 param_1, undefined8 *param_2) {
   long in_FS_OFFSET;
   undefined8 local_28;
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = *param_2;
   local_20 = param_2[1];
   ogg_stream_iovecin(param_1, &local_28, 1, param_2[3], param_2[4]);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ogg_stream_flush(undefined8 param_1, undefined8 param_2) {
   ogg_stream_flush_i(param_1, param_2, 1, 0x1000);
   return;
}
void ogg_stream_flush_fill(undefined8 param_1, undefined8 param_2, undefined4 param_3) {
   ogg_stream_flush_i(param_1, param_2, 1, param_3);
   return;
}
undefined8 ogg_stream_pageout(long *param_1, undefined8 param_2) {
   undefined8 uVar1;
   bool bVar2;
   if (( param_1 != (long*)0x0 ) && ( *param_1 != 0 )) {
      if ((int)param_1[0x2e] == 0) {
         bVar2 = false;
         if (param_1[7] != 0) {
            bVar2 = *(int*)( (long)param_1 + 0x174 ) == 0;
         }

         uVar1 = ogg_stream_flush_i(param_1, param_2, bVar2, 0x1000);
         return uVar1;
      }

      uVar1 = ogg_stream_flush_i(param_1, param_2, param_1[7] != 0, 0x1000);
      return uVar1;
   }

   return 0;
}
undefined8 ogg_stream_pageout_fill(long *param_1, undefined8 param_2, undefined4 param_3) {
   undefined8 uVar1;
   bool bVar2;
   if (( param_1 != (long*)0x0 ) && ( *param_1 != 0 )) {
      if ((int)param_1[0x2e] == 0) {
         bVar2 = false;
         if (param_1[7] != 0) {
            bVar2 = *(int*)( (long)param_1 + 0x174 ) == 0;
         }

         uVar1 = ogg_stream_flush_i(param_1, param_2, bVar2, param_3);
         return uVar1;
      }

      uVar1 = ogg_stream_flush_i(param_1, param_2, param_1[7] != 0, param_3);
      return uVar1;
   }

   return 0;
}
undefined4 ogg_stream_eos(long *param_1) {
   if (( param_1 != (long*)0x0 ) && ( *param_1 != 0 )) {
      return (int)param_1[0x2e];
   }

   return 1;
}
undefined8 ogg_sync_init(undefined1 (*param_1)[16]) {
   if (param_1 != (undefined1(*) [16])0x0) {
      *param_1 = (undefined1[16])0x0;
      param_1[1] = (undefined1[16])0x0;
   }

   return 0;
}
undefined8 ogg_sync_clear(undefined1 (*param_1)[16]) {
   if (param_1 != (undefined1(*) [16])0x0) {
      if (*(void**)*param_1 != (void*)0x0) {
         free(*(void**)*param_1);
      }

      *param_1 = (undefined1[16])0x0;
      param_1[1] = (undefined1[16])0x0;
      return 0;
   }

   return 0;
}
undefined8 ogg_sync_destroy(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      if ((void*)*param_1 != (void*)0x0) {
         free((void*)*param_1);
      }

      free(param_1);
      return 0;
   }

   return 0;
}
int ogg_sync_check(long param_1) {
   return *(int*)( param_1 + 8 ) >> 0x1f;
}
long ogg_sync_buffer(undefined1 (*param_1)[16], long param_2) {
   size_t __size;
   int iVar1;
   void *__dest;
   int iVar2;
   int iVar3;
   iVar2 = *(int*)( *param_1 + 8 );
   if (iVar2 < 0) {
      return 0;
   }

   iVar1 = *(int*)param_1[1];
   iVar3 = *(int*)( *param_1 + 0xc );
   __dest = *(void**)*param_1;
   if (iVar1 != 0) {
      iVar3 = iVar3 - iVar1;
      *(int*)( *param_1 + 0xc ) = iVar3;
      if (0 < iVar3) {
         memmove(__dest, (void*)( (long)iVar1 + (long)__dest ), (long)iVar3);
         iVar2 = *(int*)( *param_1 + 8 );
         iVar3 = *(int*)( *param_1 + 0xc );
         __dest = *(void**)*param_1;
      }

      *(undefined4*)param_1[1] = 0;
   }

   if (iVar2 - iVar3 < param_2) {
      if (0x7fffefff - iVar3 < param_2) {
         if (__dest != (void*)0x0) {
            free(__dest);
         }

         *param_1 = (undefined1[16])0x0;
         param_1[1] = (undefined1[16])0x0;
         return 0;
      }

      __size = param_2 + 0x1000 + (long)iVar3;
      if (__dest == (void*)0x0) {
         __dest = malloc(__size);
      }
 else {
         __dest = realloc(__dest, __size);
      }

      if (__dest == (void*)0x0) {
         ogg_sync_clear(param_1);
         return 0;
      }

      *(void**)*param_1 = __dest;
      iVar3 = *(int*)( *param_1 + 0xc );
      *(int*)( *param_1 + 8 ) = (int)__size;
   }

   return (long)__dest + (long)iVar3;
}
undefined8 ogg_sync_wrote(long param_1, long param_2) {
   if (( -1 < *(int*)( param_1 + 8 ) ) && ( *(int*)( param_1 + 0xc ) + param_2 <= (long)*(int*)( param_1 + 8 ) )) {
      *(int*)( param_1 + 0xc ) = *(int*)( param_1 + 0xc ) + (int)param_2;
      return 0;
   }

   return 0xffffffff;
}
long ogg_sync_pageseek(long *param_1, undefined8 *param_2) {
   long lVar1;
   int iVar2;
   long lVar3;
   void *pvVar4;
   int iVar5;
   int *piVar6;
   int iVar7;
   long in_FS_OFFSET;
   int *local_58;
   long local_50;
   long local_48;
   long local_40;
   long local_30;
   lVar3 = *param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar6 = (int*)( (int)param_1[2] + lVar3 );
   iVar5 = *(int*)( (long)param_1 + 0xc ) - (int)param_1[2];
   if (-1 < (int)param_1[1]) {
      iVar7 = (int)param_1[3];
      if (iVar7 == 0) {
         if (0x1a < (long)iVar5) {
            if (*piVar6 != 0x5367674f) goto LAB_00101097;
            iVar7 = *(byte*)( (long)piVar6 + 0x1a ) + 0x1b;
            if (iVar7 <= iVar5) {
               iVar2 = *(int*)( (long)param_1 + 0x1c );
               if (*(byte*)( (long)piVar6 + 0x1a ) != 0) {
                  lVar3 = 0;
                  do {
                     lVar1 = lVar3 + 0x1b;
                     lVar3 = lVar3 + 1;
                     iVar2 = iVar2 + ( uint ) * (byte*)( (long)piVar6 + lVar1 );
                     *(int*)( (long)param_1 + 0x1c ) = iVar2;
                  }
 while ( (int)lVar3 < (int)( uint ) * (byte*)( (long)piVar6 + 0x1a ) );
               }

               *(int*)( param_1 + 3 ) = iVar7;
               goto LAB_00100f84;
            }

         }

      }
 else {
         iVar2 = *(int*)( (long)param_1 + 0x1c );
         LAB_00100f84:if (iVar2 + iVar7 <= iVar5) {
            iVar7 = *(int*)( (long)piVar6 + 0x16 );
            *(undefined4*)( (long)piVar6 + 0x16 ) = 0;
            local_50 = (long)(int)param_1[3];
            local_48 = local_50 + (long)piVar6;
            local_40 = (long)*(int*)( (long)param_1 + 0x1c );
            local_58 = piVar6;
            ogg_page_checksum_set(&local_58);
            if (*(int*)( (long)piVar6 + 0x16 ) == iVar7) {
               iVar5 = (int)param_1[3];
               iVar7 = *(int*)( (long)param_1 + 0x1c );
               if (param_2 != (undefined8*)0x0) {
                  *param_2 = piVar6;
                  param_2[1] = (long)iVar5;
                  param_2[2] = (long)iVar5 + (long)piVar6;
                  param_2[3] = (long)iVar7;
               }

               iVar5 = iVar5 + iVar7;
               *(undefined4*)( (long)param_1 + 0x14 ) = 0;
               *(int*)( param_1 + 2 ) = (int)param_1[2] + iVar5;
               lVar3 = (long)iVar5;
               param_1[3] = 0;
               goto LAB_00101032;
            }

            *(int*)( (long)piVar6 + 0x16 ) = iVar7;
            lVar3 = *param_1;
            LAB_00101097:param_1[3] = 0;
            pvVar4 = memchr((void*)( (long)piVar6 + 1 ), 0x4f, (long)iVar5 - 1);
            if (pvVar4 == (void*)0x0) {
               pvVar4 = (void*)( *(int*)( (long)param_1 + 0xc ) + lVar3 );
            }

            *(int*)( param_1 + 2 ) = (int)pvVar4 - (int)lVar3;
            lVar3 = (long)piVar6 - (long)pvVar4;
            goto LAB_00101032;
         }

      }

   }

   lVar3 = 0;
   LAB_00101032:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ogg_sync_pageout(long param_1, undefined8 param_2) {
   long lVar1;
   if (*(int*)( param_1 + 8 ) < 0) {
      return 0;
   }

   while (true) {
      lVar1 = ogg_sync_pageseek(param_1, param_2);
      if (0 < lVar1) {
         return 1;
      }

      if (lVar1 == 0) break;
      if (*(int*)( param_1 + 0x14 ) == 0) {
         *(undefined4*)( param_1 + 0x14 ) = 1;
         return 0xffffffff;
      }

   }
;
   return 0;
}
undefined4 ogg_stream_pagein(long *param_1, long *param_2) {
   uint *puVar1;
   byte bVar2;
   char cVar3;
   byte bVar4;
   uint uVar5;
   uint uVar6;
   long lVar7;
   void *__dest;
   long lVar8;
   long lVar9;
   int iVar10;
   int iVar11;
   undefined8 uVar12;
   byte *pbVar13;
   long lVar14;
   ulong uVar15;
   uint uVar16;
   size_t __n;
   long lVar17;
   size_t __n_00;
   long lVar18;
   byte bVar19;
   void *__src;
   lVar7 = *param_2;
   __src = (void*)param_2[2];
   __n_00 = param_2[3];
   bVar2 = *(byte*)( lVar7 + 5 );
   cVar3 = *(char*)( lVar7 + 4 );
   bVar19 = bVar2 & 2;
   uVar12 = ogg_page_granulepos(param_2);
   iVar10 = *(int*)( lVar7 + 0xe );
   bVar4 = *(byte*)( lVar7 + 0x1a );
   uVar5 = *(uint*)( lVar7 + 0x12 );
   if (param_1 == (long*)0x0) {
      return 0xffffffff;
   }

   __dest = (void*)*param_1;
   if (__dest == (void*)0x0) {
      return 0xffffffff;
   }

   lVar14 = param_1[3];
   lVar17 = param_1[9];
   if (lVar14 != 0) {
      __n = param_1[2] - lVar14;
      param_1[2] = __n;
      if (__n != 0) {
         memmove(__dest, (void*)( lVar14 + (long)__dest ), __n);
      }

      param_1[3] = 0;
   }

   uVar16 = (uint)bVar4;
   if (lVar17 != 0) {
      lVar14 = lVar17;
      if (param_1[7] != lVar17) {
         memmove((void*)param_1[4], (void*)( param_1[4] + lVar17 * 4 ), ( param_1[7] - lVar17 ) * 4);
         memmove((void*)param_1[5], (void*)( param_1[5] + lVar17 * 8 ), ( param_1[7] - lVar17 ) * 8);
         lVar14 = param_1[7];
      }

      param_1[9] = 0;
      param_1[7] = lVar14 - lVar17;
      param_1[8] = param_1[8] - lVar17;
   }

   if (param_1[0x2f] != (long)iVar10) {
      return 0xffffffff;
   }

   if (cVar3 != '\0') {
      return 0xffffffff;
   }

   iVar10 = _os_lacing_expand(param_1, uVar16 + 1);
   if (iVar10 != 0) {
      return 0xffffffff;
   }

   if (param_1[0x30] != (ulong)uVar5) {
      lVar14 = param_1[8];
      if ((long)(int)lVar14 < param_1[7]) {
         lVar17 = param_1[2];
         pbVar13 = (byte*)( param_1[4] + (long)(int)lVar14 * 4 );
         do {
            bVar4 = *pbVar13;
            pbVar13 = pbVar13 + 4;
            lVar17 = lVar17 - (ulong)bVar4;
         }
 while ( (byte*)( param_1[4] + param_1[7] * 4 ) != pbVar13 );
         param_1[2] = lVar17;
      }

      param_1[7] = lVar14;
      if (param_1[0x30] != 0xffffffffffffffff) {
         param_1[7] = lVar14 + 1;
         *(undefined4*)( param_1[4] + lVar14 * 4 ) = 0x400;
         param_1[8] = lVar14 + 1;
      }

   }

   if (( ( bVar2 & 1 ) == 0 ) || ( ( ( 0 < param_1[7] && ( uVar6 = *(uint*)( param_1[4] + -4 + param_1[7] * 4 )(uVar6 & 0xff) == 0xff ) ) && ( uVar6 != 0x400 ) ) )) {
      iVar10 = 0;
      if (__n_00 != 0) goto LAB_00101472;
   }
 else {
      if (uVar16 == 0) {
         if (__n_00 == 0) goto LAB_00101330;
         bVar19 = 0;
         iVar10 = 0;
      }
 else {
         uVar15 = 1;
         do {
            bVar4 = *(byte*)( lVar7 + 0x1a + uVar15 );
            iVar10 = (int)uVar15;
            __src = (void*)( (long)__src + (ulong)bVar4 );
            __n_00 = __n_00 - bVar4;
            if (bVar4 != 0xff) break;
            uVar15 = uVar15 + 1;
         }
 while ( uVar15 != uVar16 + 1 );
         bVar19 = 0;
         if (__n_00 == 0) goto LAB_001012ac;
      }

      LAB_00101472:iVar11 = _os_body_expand(param_1, __n_00);
      if (iVar11 != 0) {
         return 0xffffffff;
      }

      memcpy((void*)( param_1[2] + *param_1 ), __src, __n_00);
      param_1[2] = param_1[2] + __n_00;
   }

   LAB_001012ac:if (iVar10 < (int)uVar16) {
      lVar17 = param_1[4];
      lVar8 = param_1[5];
      lVar14 = param_1[7];
      pbVar13 = (byte*)( lVar7 + 0x1b + (long)iVar10 );
      lVar18 = -1;
      while (true) {
         bVar4 = *pbVar13;
         *(uint*)( lVar17 + lVar14 * 4 ) = (uint)bVar4;
         *(undefined8*)( lVar8 + lVar14 * 8 ) = 0xffffffffffffffff;
         lVar9 = param_1[7];
         if (bVar19 != 0) {
            puVar1 = (uint*)( lVar17 + lVar9 * 4 );
            *puVar1 = *puVar1 | 0x100;
         }

         lVar14 = lVar9 + 1;
         if (bVar4 != 0xff) {
            param_1[8] = lVar14;
            lVar18 = (long)(int)lVar9;
         }

         pbVar13 = pbVar13 + 1;
         param_1[7] = lVar14;
         if ((byte*)( ( ulong )(( uVar16 - 1 ) - iVar10) + lVar7 + 0x1c + (long)iVar10 ) == pbVar13) break;
         bVar19 = 0;
      }
;
      if ((int)lVar18 != -1) {
         *(undefined8*)( lVar8 + lVar18 * 8 ) = uVar12;
      }

   }

   LAB_00101330:if (( bVar2 & 4 ) != 0) {
      *(undefined4*)( param_1 + 0x2e ) = 1;
      if (0 < param_1[7]) {
         puVar1 = (uint*)( param_1[4] + -4 + param_1[7] * 4 );
         *puVar1 = *puVar1 | 0x200;
      }

   }

   param_1[0x30] = (ulong)uVar5 + 1;
   return 0;
}
undefined8 ogg_sync_reset(long param_1) {
   if (-1 < *(int*)( param_1 + 8 )) {
      *(undefined4*)( param_1 + 0x1c ) = 0;
      *(undefined1(*) [16])( param_1 + 0xc ) = (undefined1[16])0x0;
      return 0;
   }

   return 0xffffffff;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 ogg_stream_reset(long *param_1) {
   long lVar1;
   long lVar2;
   if (( param_1 != (long*)0x0 ) && ( *param_1 != 0 )) {
      param_1[9] = 0;
      *(undefined1(*) [16])( param_1 + 2 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_1 + 7 ) = (undefined1[16])0x0;
      lVar2 = _UNK_00103668;
      lVar1 = __LC0;
      *(undefined8*)( (long)param_1 + 0x16c ) = 0;
      *(undefined4*)( (long)param_1 + 0x174 ) = 0;
      param_1[0x32] = 0;
      param_1[0x30] = lVar1;
      param_1[0x31] = lVar2;
      return 0;
   }

   return 0xffffffff;
}
undefined8 ogg_stream_reset_serialno(long *param_1, int param_2) {
   if (( param_1 != (long*)0x0 ) && ( *param_1 != 0 )) {
      param_1[9] = 0;
      *(undefined8*)( (long)param_1 + 0x16c ) = 0;
      *(undefined4*)( (long)param_1 + 0x174 ) = 0;
      param_1[0x30] = -1;
      param_1[0x31] = 0;
      param_1[0x32] = 0;
      param_1[0x2f] = (long)param_2;
      *(undefined1(*) [16])( param_1 + 2 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_1 + 7 ) = (undefined1[16])0x0;
      return 0;
   }

   return 0xffffffff;
}
undefined8 ogg_stream_packetout(long *param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (( param_1 != (long*)0x0 ) && ( *param_1 != 0 )) {
      uVar1 = _packetout(param_1, param_2, 1);
      return uVar1;
   }

   return 0;
}
undefined8 ogg_stream_packetpeek(long *param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (( param_1 != (long*)0x0 ) && ( *param_1 != 0 )) {
      uVar1 = _packetout(param_1, param_2, 0);
      return uVar1;
   }

   return 0;
}
void ogg_packet_clear(undefined1 (*param_1)[16]) {
   free(*(void**)*param_1);
   *param_1 = (undefined1[16])0x0;
   param_1[1] = (undefined1[16])0x0;
   param_1[2] = (undefined1[16])0x0;
   return;
}


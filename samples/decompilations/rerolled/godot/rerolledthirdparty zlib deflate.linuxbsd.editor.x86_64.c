void slide_hash(long param_1) {
   ushort *puVar1;
   short *psVar2;
   uint uVar3;
   short *psVar4;
   short sVar5;
   uVar3 = *(uint*)( param_1 + 0x50 );
   psVar4 = (short*)( *(long*)( param_1 + 0x78 ) + ( ulong ) * (uint*)( param_1 + 0x84 ) * 2 );
   psVar2 = psVar4 + ~(ulong)(*(uint *)(param_1 + 0x84) - 1);
   do {
      puVar1 = (ushort*)( psVar4 + -1 );
      psVar4 = psVar4 + -1;
      sVar5 = *puVar1 - (short)uVar3;
      if (*puVar1 < uVar3) {
         sVar5 = 0;
      }

      *psVar4 = sVar5;
   }
 while ( psVar2 != psVar4 );
   psVar4 = (short*)( *(long*)( param_1 + 0x70 ) + (ulong)uVar3 * 2 );
   psVar2 = psVar4 + ~(ulong)(uVar3 - 1);
   do {
      puVar1 = (ushort*)( psVar4 + -1 );
      psVar4 = psVar4 + -1;
      sVar5 = *puVar1 - (short)uVar3;
      if (*puVar1 < uVar3) {
         sVar5 = 0;
      }

      *psVar4 = sVar5;
   }
 while ( psVar4 != psVar2 );
   return;
}
uint longest_match(long param_1, uint param_2) {
   char *pcVar1;
   char *pcVar2;
   ushort uVar3;
   uint uVar4;
   long lVar5;
   uint uVar6;
   uint uVar7;
   char *pcVar8;
   uint uVar9;
   uint uVar10;
   char *pcVar11;
   uint uVar12;
   char cVar13;
   char cVar14;
   lVar5 = *(long*)( param_1 + 0x60 );
   uVar9 = *(uint*)( param_1 + 0xbc );
   uVar4 = *(uint*)( param_1 + 0xac );
   uVar6 = *(uint*)( param_1 + 0xb8 );
   pcVar1 = (char*)( lVar5 + (ulong)uVar4 );
   uVar12 = ( uVar4 + 0x106 ) - *(int*)( param_1 + 0x50 );
   if (uVar4 <= *(int*)( param_1 + 0x50 ) - 0x106U) {
      uVar12 = 0;
   }

   pcVar2 = (char*)( lVar5 + 0x102 + (ulong)uVar4 );
   cVar14 = pcVar1[(long)(int)uVar6 + -1];
   cVar13 = pcVar1[(int)uVar6];
   if (*(uint*)( param_1 + 0xcc ) <= uVar6) {
      uVar9 = uVar9 >> 2;
   }

   uVar4 = *(uint*)( param_1 + 0xb4 );
   uVar10 = *(uint*)( param_1 + 0xd0 );
   if (uVar4 < *(uint*)( param_1 + 0xd0 )) {
      uVar10 = uVar4;
   }

   do {
      pcVar8 = (char*)( (ulong)param_2 + lVar5 );
      if (( ( ( pcVar8[(int)uVar6] == cVar13 ) && ( pcVar8[(long)(int)uVar6 + -1] == cVar14 ) ) && ( *pcVar8 == *pcVar1 ) ) && ( pcVar8[1] == pcVar1[1] )) {
         pcVar11 = pcVar1 + 2;
         pcVar8 = pcVar8 + 2;
         while (true) {
            if (pcVar11[1] != pcVar8[1]) {
               pcVar11 = pcVar11 + 1;
               goto LAB_001001e8;
            }

            if (pcVar11[2] != pcVar8[2]) break;
            if (pcVar11[3] != pcVar8[3]) {
               pcVar11 = pcVar11 + 3;
               goto LAB_001001e8;
            }

            if (pcVar11[4] != pcVar8[4]) {
               pcVar11 = pcVar11 + 4;
               goto LAB_001001e8;
            }

            if (pcVar11[5] != pcVar8[5]) {
               pcVar11 = pcVar11 + 5;
               goto LAB_001001e8;
            }

            if (pcVar11[6] != pcVar8[6]) {
               pcVar11 = pcVar11 + 6;
               goto LAB_001001e8;
            }

            if (pcVar11[7] != pcVar8[7]) {
               pcVar11 = pcVar11 + 7;
               goto LAB_001001e8;
            }

            pcVar11 = pcVar11 + 8;
            pcVar8 = pcVar8 + 8;
            if (( *pcVar11 != *pcVar8 ) || ( pcVar2 <= pcVar11 )) goto LAB_001001e8;
         }
;
         pcVar11 = pcVar11 + 2;
         LAB_001001e8:uVar7 = ( (int)pcVar11 - (int)pcVar2 ) + 0x102;
         if ((int)uVar7 <= (int)uVar6) goto LAB_00100118;
         *(uint*)( param_1 + 0xb0 ) = param_2;
         if ((int)uVar10 <= (int)uVar7) {
            LAB_00100227:if (uVar4 < uVar7) {
               uVar7 = uVar4;
            }

            return uVar7;
         }

         uVar3 = *(ushort*)( *(long*)( param_1 + 0x70 ) + ( ulong )(param_2 & *(uint*)( param_1 + 0x58 )) * 2 );
         cVar14 = pcVar1[(long)(int)uVar7 + -1];
         cVar13 = pcVar1[(int)uVar7];
         uVar6 = uVar7;
      }
 else {
         LAB_00100118:uVar3 = *(ushort*)( *(long*)( param_1 + 0x70 ) + ( ulong )(param_2 & *(uint*)( param_1 + 0x58 )) * 2 );
      }

      param_2 = (uint)uVar3;
      uVar7 = uVar6;
      if (( param_2 <= uVar12 ) || ( uVar9 = uVar9 == 0 )) goto LAB_00100227;
   }
 while ( true );
}
uint read_buf(long *param_1, void *param_2, uint param_3) {
   uint uVar1;
   void *pvVar2;
   long lVar3;
   ulong __n;
   uVar1 = *(uint*)( param_1 + 1 );
   if (uVar1 <= param_3) {
      param_3 = uVar1;
   }

   if (param_3 == 0) {
      return 0;
   }

   __n = (ulong)param_3;
   *(uint*)( param_1 + 1 ) = uVar1 - param_3;
   pvVar2 = memcpy(param_2, (void*)*param_1, __n);
   if (*(int*)( param_1[7] + 0x30 ) == 1) {
      lVar3 = adler32(param_1[0xc], pvVar2, param_3);
      param_1[0xc] = lVar3;
   }
 else if (*(int*)( param_1[7] + 0x30 ) == 2) {
      lVar3 = crc32(param_1[0xc], pvVar2, param_3);
      param_1[0xc] = lVar3;
   }

   *param_1 = *param_1 + __n;
   param_1[2] = param_1[2] + __n;
   return param_3;
}
void fill_window(long *param_1) {
   undefined2 *puVar1;
   byte bVar2;
   uint uVar3;
   int iVar4;
   uint uVar5;
   long lVar6;
   uint uVar7;
   uint uVar8;
   ulong uVar9;
   byte bVar10;
   undefined8 *puVar11;
   ulong uVar12;
   uint uVar13;
   uint uVar14;
   ulong uVar15;
   int iVar16;
   byte bVar17;
   bVar17 = 0;
   uVar14 = *(uint*)( param_1 + 10 );
   uVar9 = (ulong)uVar14;
   uVar7 = *(uint*)( (long)param_1 + 0xb4 );
   uVar12 = uVar9;
   while (true) {
      uVar3 = *(uint*)( (long)param_1 + 0xac );
      iVar16 = ( (int)param_1[0xd] - uVar3 ) - uVar7;
      if (uVar3 < (int)uVar12 + ( uVar14 - 0x106 )) {
         lVar6 = *param_1;
         iVar4 = *(int*)( lVar6 + 8 );
      }
 else {
         memcpy((void*)param_1[0xc], (void*)( param_1[0xc] + uVar9 ), ( ulong )(( ( uVar3 + uVar14 ) - (int)param_1[0xd] ) + uVar7));
         *(uint*)( param_1 + 0x16 ) = (int)param_1[0x16] - uVar14;
         param_1[0x13] = param_1[0x13] - uVar9;
         uVar7 = *(int*)( (long)param_1 + 0xac ) - uVar14;
         *(uint*)( (long)param_1 + 0xac ) = uVar7;
         if (uVar7 < *(uint*)( (long)param_1 + 0x172c )) {
            *(uint*)( (long)param_1 + 0x172c ) = uVar7;
         }

         iVar16 = iVar16 + uVar14;
         slide_hash(param_1);
         lVar6 = *param_1;
         iVar4 = *(int*)( lVar6 + 8 );
      }

      if (iVar4 == 0) break;
      iVar16 = read_buf(lVar6, ( ulong ) * (uint*)( (long)param_1 + 0xac ) + ( ulong ) * (uint*)( (long)param_1 + 0xb4 ) + param_1[0xc], iVar16);
      uVar7 = iVar16 + *(int*)( (long)param_1 + 0xb4 );
      *(uint*)( (long)param_1 + 0xb4 ) = uVar7;
      if (2 < uVar7 + *(int*)( (long)param_1 + 0x172c )) {
         uVar3 = *(uint*)( (long)param_1 + 0xac );
         lVar6 = param_1[0xc];
         uVar5 = *(uint*)( (long)param_1 + 0x8c );
         uVar13 = uVar3 - *(int*)( (long)param_1 + 0x172c );
         bVar2 = *(byte*)( lVar6 + (ulong)uVar13 );
         *(uint*)( param_1 + 0x10 ) = (uint)bVar2;
         bVar10 = (byte)(int)param_1[0x12];
         *(uint*)( param_1 + 0x10 ) = ( ( uint ) * (byte*)( lVar6 + ( ulong )(uVar13 + 1) ) ^ (uint)bVar2 << ( bVar10 & 0x1f ) ) & uVar5;
         do {
            if (uVar13 == uVar3) break;
            uVar8 = ( ( uint ) * (byte*)( lVar6 + ( ulong )(uVar13 + 2) ) ^ (int)param_1[0x10] << ( bVar10 & 0x1f ) ) & uVar5;
            *(uint*)( param_1 + 0x10 ) = uVar8;
            puVar1 = (undefined2*)( param_1[0xf] + (ulong)uVar8 * 2 );
            *(undefined2*)( param_1[0xe] + ( ulong )(uVar13 & *(uint*)( param_1 + 0xb )) * 2 ) = *puVar1;
            *puVar1 = (short)uVar13;
            uVar13 = uVar13 + 1;
            *(uint*)( (long)param_1 + 0x172c ) = uVar3 - uVar13;
         }
 while ( 2 < ( uVar7 + uVar3 ) - uVar13 );
      }

      if (( 0x105 < uVar7 ) || ( *(int*)( *param_1 + 8 ) == 0 )) break;
      uVar12 = ( ulong ) * (uint*)( param_1 + 10 );
   }
;
   uVar12 = param_1[0x2e7];
   uVar9 = param_1[0xd];
   if (uVar12 < uVar9) {
      uVar15 = ( ulong ) * (uint*)( (long)param_1 + 0xac ) + ( ulong ) * (uint*)( (long)param_1 + 0xb4 );
      if (uVar12 < uVar15) {
         uVar9 = uVar9 - uVar15;
         if (0x102 < uVar9) {
            uVar9 = 0x102;
         }

         puVar11 = (undefined8*)( param_1[0xc] + uVar15 );
         uVar14 = (uint)uVar9;
         if (uVar14 < 8) {
            if (( uVar9 & 4 ) == 0) {
               if (( uVar14 != 0 ) && ( *(undefined1*)puVar11 = 0(uVar9 & 2) != 0 )) {
                  *(undefined2*)( (long)puVar11 + ( ( uVar9 & 0xffffffff ) - 2 ) ) = 0;
               }

            }
 else {
               *(undefined4*)puVar11 = 0;
               *(undefined4*)( (long)puVar11 + ( ( uVar9 & 0xffffffff ) - 4 ) ) = 0;
            }

         }
 else {
            *puVar11 = 0;
            *(undefined8*)( (long)puVar11 + ( ( uVar9 & 0xffffffff ) - 8 ) ) = 0;
            uVar12 = ( ulong )(uVar14 + ( (int)puVar11 - (int)(undefined8*)( ( ulong )(puVar11 + 1) & 0xfffffffffffffff8 ) ) >> 3);
            puVar11 = (undefined8*)( ( ulong )(puVar11 + 1) & 0xfffffffffffffff8 );
            for (; uVar12 != 0; uVar12 = uVar12 - 1) {
               *puVar11 = 0;
               puVar11 = puVar11 + (ulong)bVar17 * -2 + 1;
            }

         }

         param_1[0x2e7] = uVar15 + uVar9;
         return;
      }

      if (uVar12 < uVar15 + 0x102) {
         uVar15 = ( uVar15 - uVar12 ) + 0x102;
         if (uVar9 - uVar12 < uVar15) {
            uVar15 = uVar9 - uVar12;
         }

         memset((void*)( uVar12 + param_1[0xc] ), 0, uVar15 & 0xffffffff);
         param_1[0x2e7] = param_1[0x2e7] + uVar15;
         return;
      }

   }

   return;
}
void flush_pending(long param_1) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   ulong __n;
   lVar2 = *(long*)( param_1 + 0x38 );
   _tr_flush_bits(lVar2);
   uVar3 = *(uint*)( lVar2 + 0x28 );
   if (*(uint*)( param_1 + 0x20 ) <= *(uint*)( lVar2 + 0x28 )) {
      uVar3 = *(uint*)( param_1 + 0x20 );
   }

   if (uVar3 != 0) {
      __n = (ulong)uVar3;
      memcpy(*(void**)( param_1 + 0x18 ), *(void**)( lVar2 + 0x20 ), __n);
      *(long*)( param_1 + 0x18 ) = *(long*)( param_1 + 0x18 ) + __n;
      *(long*)( lVar2 + 0x20 ) = *(long*)( lVar2 + 0x20 ) + __n;
      *(long*)( param_1 + 0x28 ) = *(long*)( param_1 + 0x28 ) + __n;
      *(int*)( param_1 + 0x20 ) = *(int*)( param_1 + 0x20 ) - uVar3;
      plVar1 = (long*)( lVar2 + 0x28 );
      *plVar1 = *plVar1 - __n;
      if (*plVar1 == 0) {
         *(undefined8*)( lVar2 + 0x20 ) = *(undefined8*)( lVar2 + 0x10 );
         return;
      }

   }

   return;
}
uint deflate_slow(long *param_1, int param_2) {
   ushort *puVar1;
   undefined2 *puVar2;
   int iVar3;
   short *psVar4;
   byte bVar5;
   int iVar6;
   ulong uVar7;
   uint uVar8;
   uint uVar9;
   int iVar10;
   int iVar11;
   long lVar12;
   uint uVar13;
   ushort uVar14;
   uint uVar15;
   uint uVar16;
   uVar13 = *(uint*)( (long)param_1 + 0xb4 );
   LAB_001006a8:do {
      if (uVar13 < 0x106) goto LAB_0010084d;
      LAB_001006b5:uVar15 = *(uint*)( (long)param_1 + 0xac );
      uVar9 = *(uint*)( param_1 + 0x14 );
      iVar11 = (int)param_1[0x16];
      LAB_001006c9:uVar8 = ( ( uint ) * (byte*)( param_1[0xc] + ( ulong )(uVar15 + 2) ) ^ (int)param_1[0x10] << ( (byte)(int)param_1[0x12] & 0x1f ) ) & *(uint*)( (long)param_1 + 0x8c );
      *(uint*)( param_1 + 0x10 ) = uVar8;
      puVar1 = (ushort*)( param_1[0xf] + (ulong)uVar8 * 2 );
      uVar14 = *puVar1;
      *(ushort*)( param_1[0xe] + ( ulong )(uVar15 & *(uint*)( param_1 + 0xb )) * 2 ) = uVar14;
      *puVar1 = (ushort)uVar15;
      *(uint*)( param_1 + 0x17 ) = uVar9;
      *(int*)( (long)param_1 + 0xa4 ) = iVar11;
      *(undefined4*)( param_1 + 0x14 ) = 2;
      if (( ( uVar14 != 0 ) && ( uVar9 < *(uint*)( param_1 + 0x18 ) ) ) && ( uVar15 - uVar14 <= (int)param_1[10] - 0x106U )) {
         uVar8 = longest_match(param_1);
         *(uint*)( param_1 + 0x14 ) = uVar8;
         if (( uVar8 < 6 ) && ( ( (int)param_1[0x19] == 1 || ( ( uVar8 == 3 && ( 0x1000 < uVar15 - (int)param_1[0x16] ) ) ) ) )) {
            *(undefined4*)( param_1 + 0x14 ) = 2;
         }

      }

      while (( uVar9 < 3 || ( uVar9 < *(uint*)( param_1 + 0x14 ) ) )) {
         if ((int)param_1[0x15] != 0) {
            bVar5 = *(byte*)( param_1[0xc] + ( ulong )(uVar15 - 1) );
            uVar13 = *(uint*)( (long)param_1 + 0x170c );
            *(uint*)( (long)param_1 + 0x170c ) = uVar13 + 1;
            *(undefined1*)( param_1[0x2e0] + (ulong)uVar13 ) = 0;
            uVar13 = *(uint*)( (long)param_1 + 0x170c );
            *(uint*)( (long)param_1 + 0x170c ) = uVar13 + 1;
            *(undefined1*)( param_1[0x2e0] + (ulong)uVar13 ) = 0;
            uVar13 = *(uint*)( (long)param_1 + 0x170c );
            *(uint*)( (long)param_1 + 0x170c ) = uVar13 + 1;
            *(byte*)( param_1[0x2e0] + (ulong)uVar13 ) = bVar5;
            psVar4 = (short*)( (long)param_1 + (ulong)bVar5 * 4 + 0xd4 );
            *psVar4 = *psVar4 + 1;
            if (*(int*)( (long)param_1 + 0x170c ) == (int)param_1[0x2e2]) {
               uVar7 = param_1[0x13];
               lVar12 = 0;
               if (-1 < (long)uVar7) {
                  lVar12 = ( uVar7 & 0xffffffff ) + param_1[0xc];
               }

               _tr_flush_block(param_1, lVar12, *(uint*)( (long)param_1 + 0xac ) - uVar7, 0);
               param_1[0x13] = ( ulong ) * (uint*)( (long)param_1 + 0xac );
               flush_pending(*param_1);
            }

            *(int*)( (long)param_1 + 0xac ) = *(int*)( (long)param_1 + 0xac ) + 1;
            uVar13 = *(int*)( (long)param_1 + 0xb4 ) - 1;
            *(uint*)( (long)param_1 + 0xb4 ) = uVar13;
            if (*(int*)( *param_1 + 0x20 ) == 0) {
               return 0;
            }

            goto LAB_001006a8;
         }

         uVar13 = uVar13 - 1;
         *(undefined4*)( param_1 + 0x15 ) = 1;
         *(uint*)( (long)param_1 + 0xac ) = uVar15 + 1;
         *(uint*)( (long)param_1 + 0xb4 ) = uVar13;
         if (0x105 < uVar13) goto LAB_001006b5;
         LAB_0010084d:fill_window(param_1);
         uVar13 = *(uint*)( (long)param_1 + 0xb4 );
         if (0x105 < uVar13) goto LAB_001006b5;
         if (param_2 == 0) {
            return 0;
         }

         uVar15 = *(uint*)( (long)param_1 + 0xac );
         if (uVar13 == 0) {
            if ((int)param_1[0x15] != 0) {
               bVar5 = *(byte*)( param_1[0xc] + ( ulong )(uVar15 - 1) );
               uVar13 = *(uint*)( (long)param_1 + 0x170c );
               *(uint*)( (long)param_1 + 0x170c ) = uVar13 + 1;
               *(undefined1*)( param_1[0x2e0] + (ulong)uVar13 ) = 0;
               uVar13 = *(uint*)( (long)param_1 + 0x170c );
               *(uint*)( (long)param_1 + 0x170c ) = uVar13 + 1;
               *(undefined1*)( param_1[0x2e0] + (ulong)uVar13 ) = 0;
               uVar13 = *(uint*)( (long)param_1 + 0x170c );
               *(uint*)( (long)param_1 + 0x170c ) = uVar13 + 1;
               *(byte*)( param_1[0x2e0] + (ulong)uVar13 ) = bVar5;
               uVar15 = *(uint*)( (long)param_1 + 0xac );
               psVar4 = (short*)( (long)param_1 + (ulong)bVar5 * 4 + 0xd4 );
               *psVar4 = *psVar4 + 1;
               *(undefined4*)( param_1 + 0x15 ) = 0;
            }

            uVar13 = 2;
            if (uVar15 < 3) {
               uVar13 = uVar15;
            }

            *(uint*)( (long)param_1 + 0x172c ) = uVar13;
            if (param_2 == 4) {
               uVar7 = param_1[0x13];
               lVar12 = 0;
               if (-1 < (long)uVar7) {
                  lVar12 = ( uVar7 & 0xffffffff ) + param_1[0xc];
               }

               _tr_flush_block(param_1, lVar12, uVar15 - uVar7, 1);
               param_1[0x13] = ( ulong ) * (uint*)( (long)param_1 + 0xac );
               flush_pending(*param_1);
               return 3 - ( *(int*)( *param_1 + 0x20 ) == 0 );
            }

            if (*(int*)( (long)param_1 + 0x170c ) != 0) {
               uVar7 = param_1[0x13];
               lVar12 = 0;
               if (-1 < (long)uVar7) {
                  lVar12 = ( uVar7 & 0xffffffff ) + param_1[0xc];
               }

               _tr_flush_block(param_1, lVar12, uVar15 - uVar7, 0);
               param_1[0x13] = ( ulong ) * (uint*)( (long)param_1 + 0xac );
               flush_pending(*param_1);
               return ( uint )(*(int*)( *param_1 + 0x20 ) != 0);
            }

            return 1;
         }

         uVar9 = *(uint*)( param_1 + 0x14 );
         iVar11 = (int)param_1[0x16];
         if (2 < uVar13) goto LAB_001006c9;
         *(uint*)( param_1 + 0x17 ) = uVar9;
         *(int*)( (long)param_1 + 0xa4 ) = iVar11;
         *(undefined4*)( param_1 + 0x14 ) = 2;
      }
;
      uVar8 = *(uint*)( (long)param_1 + 0x170c );
      iVar3 = uVar13 - 3;
      iVar6 = ( uVar15 - iVar11 ) + -1;
      uVar16 = ( uVar15 - iVar11 ) - 2;
      *(uint*)( (long)param_1 + 0x170c ) = uVar8 + 1;
      *(char*)( param_1[0x2e0] + (ulong)uVar8 ) = (char)iVar6;
      uVar13 = *(uint*)( (long)param_1 + 0x170c );
      *(uint*)( (long)param_1 + 0x170c ) = uVar13 + 1;
      *(char*)( param_1[0x2e0] + (ulong)uVar13 ) = (char)( (uint)iVar6 >> 8 );
      uVar13 = *(uint*)( (long)param_1 + 0x170c );
      *(uint*)( (long)param_1 + 0x170c ) = uVar13 + 1;
      *(char*)( param_1[0x2e0] + (ulong)uVar13 ) = (char)( uVar9 - 3 );
      psVar4 = (short*)( (long)param_1 + ( ulong )(byte)(&_length_code)[uVar9 - 3 & 0xff] * 4 + 0x4d8 );
      *psVar4 = *psVar4 + 1;
      uVar14 = (ushort)uVar16;
      if (uVar14 < 0x100) {
         bVar5 = ( &_dist_code )[uVar16 & 0xffff];
      }
 else {
         bVar5 = ( &_dist_code )[( ushort )(( uVar14 >> 7 ) + 0x100)];
      }

      psVar4 = (short*)( (long)param_1 + (ulong)bVar5 * 4 + 0x9c8 );
      *psVar4 = *psVar4 + 1;
      iVar11 = (int)param_1[0x17];
      iVar6 = *(int*)( (long)param_1 + 0x170c );
      lVar12 = param_1[0x2e2];
      uVar13 = ( *(int*)( (long)param_1 + 0xb4 ) + 1 ) - iVar11;
      iVar10 = iVar11 + *(int*)( (long)param_1 + 0xac );
      *(uint*)( (long)param_1 + 0xb4 ) = uVar13;
      *(int*)( param_1 + 0x17 ) = iVar11 + -2;
      uVar9 = *(int*)( (long)param_1 + 0xac ) + 1;
      do {
         *(uint*)( (long)param_1 + 0xac ) = uVar9;
         if (uVar9 <= iVar3 + uVar15) {
            uVar8 = ( ( uint ) * (byte*)( param_1[0xc] + ( ulong )(uVar9 + 2) ) ^ (int)param_1[0x10] << ( (byte)(int)param_1[0x12] & 0x1f ) ) & *(uint*)( (long)param_1 + 0x8c );
            *(uint*)( param_1 + 0x10 ) = uVar8;
            puVar2 = (undefined2*)( param_1[0xf] + (ulong)uVar8 * 2 );
            *(undefined2*)( param_1[0xe] + ( ulong )(uVar9 & *(uint*)( param_1 + 0xb )) * 2 ) = *puVar2;
            *puVar2 = (short)uVar9;
         }

         iVar11 = ( iVar10 + -2 ) - uVar9;
         uVar9 = uVar9 + 1;
         *(int*)( param_1 + 0x17 ) = iVar11;
      }
 while ( uVar9 != iVar10 - 1U );
      *(undefined4*)( param_1 + 0x15 ) = 0;
      *(undefined4*)( param_1 + 0x14 ) = 2;
      *(uint*)( (long)param_1 + 0xac ) = uVar9;
      if (iVar6 == (int)lVar12) {
         uVar7 = param_1[0x13];
         lVar12 = 0;
         if (-1 < (long)uVar7) {
            lVar12 = ( uVar7 & 0xffffffff ) + param_1[0xc];
         }

         _tr_flush_block(param_1, lVar12, uVar9 - uVar7, 0);
         param_1[0x13] = ( ulong ) * (uint*)( (long)param_1 + 0xac );
         flush_pending(*param_1);
         if (*(int*)( *param_1 + 0x20 ) == 0) {
            return 0;
         }

         uVar13 = *(uint*)( (long)param_1 + 0xb4 );
      }

   }
 while ( true );
}
uint deflate_fast(long *param_1, int param_2) {
   ushort *puVar1;
   undefined2 *puVar2;
   short *psVar3;
   byte bVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   long lVar8;
   long lVar9;
   uint uVar10;
   long lVar11;
   uint uVar12;
   byte bVar13;
   uint uVar14;
   undefined1 *puVar15;
   short sVar16;
   ushort uVar17;
   ulong uVar18;
   int iVar19;
   uint uVar20;
   long lVar21;
   int iVar22;
   uint uVar23;
   do {
      uVar23 = *(uint*)( (long)param_1 + 0xb4 );
      do {
         if (uVar23 < 0x106) goto LAB_00100f4c;
         LAB_00100ccd:uVar18 = ( ulong ) * (uint*)( (long)param_1 + 0xac );
         LAB_00100cd3:uVar23 = (uint)uVar18;
         uVar12 = ( ( uint ) * (byte*)( param_1[0xc] + ( ulong )(uVar23 + 2) ) ^ (int)param_1[0x10] << ( (byte)(int)param_1[0x12] & 0x1f ) ) & *(uint*)( (long)param_1 + 0x8c );
         *(uint*)( param_1 + 0x10 ) = uVar12;
         puVar1 = (ushort*)( param_1[0xf] + (ulong)uVar12 * 2 );
         uVar17 = *puVar1;
         *(ushort*)( param_1[0xe] + ( ulong )(uVar23 & *(uint*)( param_1 + 0xb )) * 2 ) = uVar17;
         *puVar1 = (ushort)uVar18;
         if (( uVar17 != 0 ) && ( uVar23 - uVar17 <= (int)param_1[10] - 0x106U )) {
            uVar23 = longest_match(param_1);
            *(uint*)( param_1 + 0x14 ) = uVar23;
            goto LAB_00100d36;
         }

         while (true) {
            uVar23 = *(uint*)( param_1 + 0x14 );
            LAB_00100d36:iVar19 = *(uint*)( (long)param_1 + 0x170c ) + 1;
            puVar15 = (undefined1*)( ( ulong ) * (uint*)( (long)param_1 + 0x170c ) + param_1[0x2e0] );
            if (2 < uVar23) break;
            bVar13 = *(byte*)( param_1[0xc] + uVar18 );
            *(int*)( (long)param_1 + 0x170c ) = iVar19;
            *puVar15 = 0;
            uVar23 = *(uint*)( (long)param_1 + 0x170c );
            *(uint*)( (long)param_1 + 0x170c ) = uVar23 + 1;
            *(undefined1*)( param_1[0x2e0] + (ulong)uVar23 ) = 0;
            uVar23 = *(uint*)( (long)param_1 + 0x170c );
            *(uint*)( (long)param_1 + 0x170c ) = uVar23 + 1;
            *(byte*)( param_1[0x2e0] + (ulong)uVar23 ) = bVar13;
            lVar21 = param_1[0x2e2];
            psVar3 = (short*)( (long)param_1 + (ulong)bVar13 * 4 + 0xd4 );
            *psVar3 = *psVar3 + 1;
            uVar12 = *(int*)( (long)param_1 + 0xb4 ) - 1;
            *(uint*)( (long)param_1 + 0xb4 ) = uVar12;
            uVar23 = *(int*)( (long)param_1 + 0xac ) + 1;
            *(uint*)( (long)param_1 + 0xac ) = uVar23;
            if (*(int*)( (long)param_1 + 0x170c ) == (int)lVar21) goto LAB_00100e66;
            if (0x105 < uVar12) goto LAB_00100ccd;
            LAB_00100f4c:fill_window(param_1);
            uVar23 = *(uint*)( (long)param_1 + 0xb4 );
            if (0x105 < uVar23) goto LAB_00100ccd;
            if (param_2 == 0) {
               return 0;
            }

            uVar12 = *(uint*)( (long)param_1 + 0xac );
            uVar18 = (ulong)uVar12;
            if (uVar23 == 0) {
               uVar23 = 2;
               if (uVar12 < 3) {
                  uVar23 = uVar12;
               }

               *(uint*)( (long)param_1 + 0x172c ) = uVar23;
               if (param_2 == 4) {
                  uVar18 = param_1[0x13];
                  lVar21 = 0;
                  if (-1 < (long)uVar18) {
                     lVar21 = ( uVar18 & 0xffffffff ) + param_1[0xc];
                  }

                  _tr_flush_block(param_1, lVar21, uVar12 - uVar18, 1);
                  param_1[0x13] = ( ulong ) * (uint*)( (long)param_1 + 0xac );
                  flush_pending(*param_1);
                  uVar23 = 3 - ( *(int*)( *param_1 + 0x20 ) == 0 );
               }
 else {
                  uVar23 = 1;
                  if (*(int*)( (long)param_1 + 0x170c ) != 0) {
                     uVar18 = param_1[0x13];
                     lVar21 = 0;
                     if (-1 < (long)uVar18) {
                        lVar21 = ( uVar18 & 0xffffffff ) + param_1[0xc];
                     }

                     _tr_flush_block(param_1, lVar21, uVar12 - uVar18, 0);
                     param_1[0x13] = ( ulong ) * (uint*)( (long)param_1 + 0xac );
                     flush_pending(*param_1);
                     return ( uint )(*(int*)( *param_1 + 0x20 ) != 0);
                  }

               }

               return uVar23;
            }

            if (2 < uVar23) goto LAB_00100cd3;
         }
;
         sVar16 = (short)uVar18 - (short)param_1[0x16];
         *(int*)( (long)param_1 + 0x170c ) = iVar19;
         *puVar15 = (char)sVar16;
         uVar12 = *(uint*)( (long)param_1 + 0x170c );
         uVar17 = sVar16 - 1;
         *(uint*)( (long)param_1 + 0x170c ) = uVar12 + 1;
         *(char*)( param_1[0x2e0] + (ulong)uVar12 ) = (char)( (ushort)sVar16 >> 8 );
         uVar12 = *(uint*)( (long)param_1 + 0x170c );
         *(uint*)( (long)param_1 + 0x170c ) = uVar12 + 1;
         *(char*)( param_1[0x2e0] + (ulong)uVar12 ) = (char)( uVar23 - 3 );
         psVar3 = (short*)( (long)param_1 + ( ulong )(byte)(&_length_code)[uVar23 - 3 & 0xff] * 4 + 0x4d8 );
         *psVar3 = *psVar3 + 1;
         if (uVar17 < 0x100) {
            bVar13 = ( &_dist_code )[uVar17];
         }
 else {
            bVar13 = ( &_dist_code )[( uVar17 >> 7 ) + 0x100];
         }

         psVar3 = (short*)( (long)param_1 + (ulong)bVar13 * 4 + 0x9c8 );
         *psVar3 = *psVar3 + 1;
         uVar12 = *(uint*)( param_1 + 0x14 );
         iVar19 = *(int*)( (long)param_1 + 0x170c );
         lVar11 = param_1[0x2e2];
         uVar5 = *(uint*)( (long)param_1 + 0xac );
         uVar23 = *(int*)( (long)param_1 + 0xb4 ) - uVar12;
         lVar21 = param_1[0xc];
         *(uint*)( (long)param_1 + 0xb4 ) = uVar23;
         uVar6 = *(uint*)( (long)param_1 + 0x8c );
         bVar13 = (byte)(int)param_1[0x12];
         if (( *(uint*)( param_1 + 0x18 ) < uVar12 ) || ( uVar23 < 3 )) {
            *(undefined4*)( param_1 + 0x14 ) = 0;
            uVar12 = uVar12 + uVar5;
            *(uint*)( (long)param_1 + 0xac ) = uVar12;
            bVar4 = *(byte*)( lVar21 + (ulong)uVar12 );
            *(uint*)( param_1 + 0x10 ) = (uint)bVar4;
            *(uint*)( param_1 + 0x10 ) = ( ( uint ) * (byte*)( lVar21 + ( ulong )(uVar12 + 1) ) ^ (uint)bVar4 << ( bVar13 & 0x1f ) ) & uVar6;
         }
 else {
            iVar22 = uVar12 - 1;
            lVar8 = param_1[0xf];
            lVar9 = param_1[0xe];
            *(int*)( param_1 + 0x14 ) = iVar22;
            uVar7 = *(uint*)( param_1 + 0xb );
            uVar20 = *(uint*)( param_1 + 0x10 );
            uVar10 = uVar5;
            do {
               uVar14 = uVar10 + 1;
               *(uint*)( (long)param_1 + 0xac ) = uVar14;
               iVar22 = iVar22 + -1;
               uVar20 = ( ( uint ) * (byte*)( lVar21 + ( ulong )(uVar10 + 3) ) ^ uVar20 << ( bVar13 & 0x1f ) ) & uVar6;
               *(uint*)( param_1 + 0x10 ) = uVar20;
               puVar2 = (undefined2*)( lVar8 + (ulong)uVar20 * 2 );
               *(undefined2*)( lVar9 + ( ulong )(uVar7 & uVar14) * 2 ) = *puVar2;
               *puVar2 = (short)uVar14;
               *(int*)( param_1 + 0x14 ) = iVar22;
               uVar10 = uVar14;
            }
 while ( iVar22 != 0 );
            *(uint*)( (long)param_1 + 0xac ) = uVar5 + uVar12;
         }

      }
 while ( iVar19 != (int)lVar11 );
      uVar23 = *(uint*)( (long)param_1 + 0xac );
      LAB_00100e66:uVar18 = param_1[0x13];
      lVar21 = 0;
      if (-1 < (long)uVar18) {
         lVar21 = ( uVar18 & 0xffffffff ) + param_1[0xc];
      }

      _tr_flush_block(param_1, lVar21, uVar23 - uVar18, 0);
      param_1[0x13] = ( ulong ) * (uint*)( (long)param_1 + 0xac );
      flush_pending(*param_1);
      if (*(int*)( *param_1 + 0x20 ) == 0) {
         return 0;
      }

   }
 while ( true );
}
char deflate_stored(long *param_1, uint param_2) {
   byte bVar6;
   uint uVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   ulong uVar5;
   void *__dest;
   uint uVar7;
   ulong uVar8;
   long *plVar9;
   long lVar10;
   ulong uVar11;
   char cVar12;
   bool bVar13;
   bool bVar14;
   plVar9 = (long*)*param_1;
   uVar4 = param_1[3] - 5U;
   if (( ulong ) * (uint*)( param_1 + 10 ) < param_1[3] - 5U) {
      uVar4 = ( ulong ) * (uint*)( param_1 + 10 );
   }

   uVar3 = *(uint*)( plVar9 + 1 );
   uVar5 = (ulong)uVar3;
   LAB_001011a7:do {
      uVar1 = *(int*)( (long)param_1 + 0x1734 ) + 0x2a >> 3;
      uVar7 = (uint)uVar5;
      if (*(uint*)( plVar9 + 4 ) < uVar1) {
         LAB_001013a0:bVar13 = false;
         goto joined_r0x001013ab;
      }

      uVar1 = *(uint*)( plVar9 + 4 ) - uVar1;
      uVar2 = *(int*)( (long)param_1 + 0xac ) - (int)param_1[0x13];
      uVar11 = 0xffff;
      if (uVar2 + uVar5 < 0xffff) {
         uVar11 = ( ulong )(uVar2 + uVar7);
      }

      uVar8 = (ulong)uVar1;
      if ((uint)uVar11 <= uVar1) {
         uVar8 = uVar11;
      }

      uVar1 = (uint)uVar8;
      if (( uVar1 < (uint)uVar4 ) && ( ( ( uVar1 == 0 && param_2 != 4 || ( param_2 == 0 ) ) || ( uVar2 + uVar7 != uVar1 ) ) )) goto LAB_001013a0;
      bVar13 = param_2 == 4;
      bVar14 = uVar7 + uVar2 == uVar1;
      _tr_stored_block(param_1, 0, 0, bVar13 && bVar14);
      *(byte*)( param_1[2] + -4 + param_1[5] ) = (byte)uVar8;
      bVar6 = ( byte )(uVar8 >> 8);
      *(byte*)( param_1[2] + -3 + param_1[5] ) = bVar6;
      *(byte*)( param_1[2] + -2 + param_1[5] ) = ~(byte)uVar8;
      *(byte*)( param_1[2] + -1 + param_1[5] ) = ~bVar6;
      flush_pending(*param_1);
      if (uVar2 == 0) {
         plVar9 = (long*)*param_1;
         if (uVar1 == 0) goto LAB_0010119c;
         LAB_001012e8:read_buf(plVar9, plVar9[3], uVar8);
         plVar9 = (long*)*param_1;
         *(int*)( plVar9 + 4 ) = (int)plVar9[4] - (int)uVar8;
         uVar7 = *(uint*)( plVar9 + 1 );
         uVar5 = (ulong)uVar7;
         plVar9[3] = plVar9[3] + uVar8;
         plVar9[5] = plVar9[5] + uVar8;
         if (bVar13 && bVar14) break;
         goto LAB_001011a7;
      }

      if (uVar1 <= uVar2) {
         uVar2 = uVar1;
      }

      uVar5 = (ulong)uVar2;
      memcpy(*(void**)( *param_1 + 0x18 ), (void*)( param_1[0x13] + param_1[0xc] ), uVar5);
      plVar9 = (long*)*param_1;
      uVar8 = ( ulong )(uVar1 - uVar2);
      plVar9[3] = plVar9[3] + uVar5;
      *(uint*)( plVar9 + 4 ) = (int)plVar9[4] - uVar2;
      plVar9[5] = plVar9[5] + uVar5;
      param_1[0x13] = param_1[0x13] + uVar5;
      if (uVar1 - uVar2 != 0) goto LAB_001012e8;
      LAB_0010119c:uVar7 = *(uint*)( plVar9 + 1 );
      uVar5 = (ulong)uVar7;
   }
 while ( !bVar13 || !bVar14 );
   bVar13 = true;
   joined_r0x001013ab:uVar3 = uVar3 - uVar7;
   if (uVar3 == 0) {
      uVar7 = *(uint*)( (long)param_1 + 0xac );
   }
 else {
      uVar7 = *(uint*)( param_1 + 10 );
      __dest = (void*)param_1[0xc];
      if (uVar3 < uVar7) {
         uVar5 = ( ulong ) * (uint*)( (long)param_1 + 0xac );
         uVar4 = (ulong)uVar3;
         if (param_1[0xd] - uVar5 <= uVar4) {
            uVar1 = *(uint*)( (long)param_1 + 0xac ) - uVar7;
            *(uint*)( (long)param_1 + 0xac ) = uVar1;
            memcpy(__dest, (void*)( (long)__dest + (ulong)uVar7 ), (ulong)uVar1);
            if (*(uint*)( param_1 + 0x2e5 ) < 2) {
               *(uint*)( param_1 + 0x2e5 ) = *(uint*)( param_1 + 0x2e5 ) + 1;
            }

            uVar7 = *(uint*)( (long)param_1 + 0xac );
            uVar5 = (ulong)uVar7;
            if (uVar7 < *(uint*)( (long)param_1 + 0x172c )) {
               *(uint*)( (long)param_1 + 0x172c ) = uVar7;
            }

            plVar9 = (long*)*param_1;
            __dest = (void*)param_1[0xc];
         }

         memcpy((void*)( (long)__dest + uVar5 ), (void*)( *plVar9 - uVar4 ), uVar4);
         uVar1 = (int)param_1[10] - *(int*)( (long)param_1 + 0x172c );
         uVar7 = *(int*)( (long)param_1 + 0xac ) + uVar3;
         if (uVar3 < uVar1) {
            uVar1 = uVar3;
         }

         *(uint*)( (long)param_1 + 0xac ) = uVar7;
         uVar3 = uVar1 + *(int*)( (long)param_1 + 0x172c );
      }
 else {
         *(undefined4*)( param_1 + 0x2e5 ) = 2;
         memcpy(__dest, (void*)( *plVar9 - (ulong)uVar7 ), (ulong)uVar7);
         uVar7 = *(uint*)( param_1 + 10 );
         *(uint*)( (long)param_1 + 0xac ) = uVar7;
         uVar3 = uVar7;
      }

      *(uint*)( (long)param_1 + 0x172c ) = uVar3;
      param_1[0x13] = (ulong)uVar7;
   }

   uVar4 = (ulong)uVar7;
   if ((ulong)param_1[0x2e7] < uVar4) {
      param_1[0x2e7] = uVar4;
   }

   if (bVar13) {
      return '\x03';
   }

   lVar10 = *param_1;
   uVar3 = *(uint*)( lVar10 + 8 );
   if (( ( param_2 & 0xfffffffb ) == 0 ) || ( uVar3 != 0 )) {
      uVar1 = (int)param_1[0xd] - uVar7;
      if (uVar1 < uVar3) {
         uVar5 = ( ulong ) * (uint*)( param_1 + 10 );
         if ((long)uVar5 <= param_1[0x13]) {
            uVar7 = uVar7 - *(uint*)( param_1 + 10 );
            param_1[0x13] = param_1[0x13] - uVar5;
            *(uint*)( (long)param_1 + 0xac ) = uVar7;
            memcpy((void*)param_1[0xc], (void*)( param_1[0xc] + uVar5 ), (ulong)uVar7);
            if (*(uint*)( param_1 + 0x2e5 ) < 2) {
               *(uint*)( param_1 + 0x2e5 ) = *(uint*)( param_1 + 0x2e5 ) + 1;
            }

            lVar10 = *param_1;
            uVar7 = *(uint*)( (long)param_1 + 0xac );
            uVar3 = *(uint*)( lVar10 + 8 );
            if (uVar7 < *(uint*)( (long)param_1 + 0x172c )) {
               *(uint*)( (long)param_1 + 0x172c ) = uVar7;
            }

            uVar1 = uVar1 + (int)param_1[10];
            uVar4 = (ulong)uVar7;
         }

      }

      if (uVar3 < uVar1) {
         uVar1 = uVar3;
      }

      if (uVar1 != 0) {
         read_buf(lVar10, uVar4 + param_1[0xc], uVar1);
         uVar3 = *(uint*)( param_1 + 10 );
         uVar2 = uVar3 - *(int*)( (long)param_1 + 0x172c );
         uVar7 = *(int*)( (long)param_1 + 0xac ) + uVar1;
         *(uint*)( (long)param_1 + 0xac ) = uVar7;
         uVar4 = (ulong)uVar7;
         if (uVar1 < uVar2) {
            uVar2 = uVar1;
         }

         *(uint*)( (long)param_1 + 0x172c ) = uVar2 + *(int*)( (long)param_1 + 0x172c );
         goto LAB_00101400;
      }

   }
 else if (uVar4 == param_1[0x13]) {
      return '\x01';
   }

   uVar3 = *(uint*)( param_1 + 10 );
   LAB_00101400:if ((ulong)param_1[0x2e7] < uVar4) {
      param_1[0x2e7] = uVar4;
   }

   uVar4 = param_1[3] - ( ulong )(uint)(*(int*)( (long)param_1 + 0x1734 ) + 0x2a >> 3);
   if (0xffff < uVar4) {
      uVar4 = 0xffff;
   }

   uVar7 = uVar7 - (int)param_1[0x13];
   uVar1 = (uint)uVar4;
   if (uVar1 < uVar3) {
      uVar3 = uVar1;
   }

   cVar12 = '\0';
   if (uVar7 < uVar3) {
      bVar13 = param_2 == 4;
      if (uVar7 == 0 && !bVar13) {
         return '\0';
      }

      if (param_2 == 0) {
         return '\0';
      }

      if (*(int*)( *param_1 + 8 ) != 0) {
         return '\0';
      }

      if (uVar1 < uVar7) {
         return '\0';
      }

      uVar3 = uVar7;
      if (uVar1 <= uVar7) {
         uVar3 = uVar1;
      }

      cVar12 = bVar13 * '\x02';
   }
 else {
      uVar3 = uVar1;
      if (uVar7 <= uVar1) {
         uVar3 = uVar7;
      }

      bVar13 = false;
      if (param_2 == 4) {
         bVar13 = uVar7 <= uVar1 && *(int*)( *param_1 + 8 ) == 0;
         cVar12 = bVar13 * '\x02';
      }

   }

   _tr_stored_block(param_1, param_1[0x13] + param_1[0xc], (ulong)uVar3, bVar13);
   param_1[0x13] = param_1[0x13] + (ulong)uVar3;
   flush_pending(*param_1);
   return cVar12;
}
bool deflateStateCheck_part_0(long param_1) {
   int iVar1;
   long *plVar2;
   bool bVar3;
   plVar2 = *(long**)( param_1 + 0x38 );
   bVar3 = true;
   if (( plVar2 != (long*)0x0 ) && ( param_1 == *plVar2 )) {
      iVar1 = (int)plVar2[1];
      if (( iVar1 == 0x2a ) || ( iVar1 == 0x39 )) {
         return false;
      }

      if (iVar1 < 0x72) {
         if (0x44 < iVar1) {
            return ( 0x100400400011U >> ( ( ulong )(iVar1 - 0x45) & 0x3f ) & 1 ) == 0;
         }

      }
 else {
         bVar3 = iVar1 != 0x29a;
      }

   }

   return bVar3;
}
bool deflateStateCheck(long param_1) {
   int iVar1;
   long *plVar2;
   if (( ( param_1 == 0 ) || ( *(long*)( param_1 + 0x40 ) == 0 ) ) || ( *(long*)( param_1 + 0x48 ) == 0 )) {
      return true;
   }

   plVar2 = *(long**)( param_1 + 0x38 );
   if (plVar2 == (long*)0x0) {
      return true;
   }

   if (param_1 == *plVar2) {
      iVar1 = (int)plVar2[1];
      if (( iVar1 == 0x2a ) || ( iVar1 == 0x39 )) {
         return false;
      }

      if (0x71 < iVar1) {
         return iVar1 != 0x29a;
      }

      if (0x44 < iVar1) {
         return ( 0x100400400011U >> ( ( ulong )(iVar1 - 0x45) & 0x3f ) & 1 ) == 0;
      }

   }

   return true;
}
undefined8 deflateSetDictionary(long *param_1, long param_2, uint param_3) {
   undefined2 *puVar1;
   undefined4 uVar2;
   uint uVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   void *__s;
   long lVar9;
   undefined8 uVar10;
   int iVar11;
   uint uVar12;
   uint uVar13;
   ulong uVar14;
   long lVar15;
   uint uVar16;
   iVar11 = deflateStateCheck();
   if (( param_2 == 0 ) || ( iVar11 != 0 )) {
      return 0xfffffffe;
   }

   lVar5 = param_1[7];
   iVar11 = *(int*)( lVar5 + 0x30 );
   if (iVar11 == 2) {
      return 0xfffffffe;
   }

   if (iVar11 == 1) {
      if (*(int*)( lVar5 + 8 ) != 0x2a) {
         return 0xfffffffe;
      }

      if (*(int*)( lVar5 + 0xb4 ) != 0) {
         return 0xfffffffe;
      }

      lVar15 = adler32(param_1[0xc], param_2, param_3);
      param_1[0xc] = lVar15;
      uVar13 = *(uint*)( lVar5 + 0x50 );
      *(undefined4*)( lVar5 + 0x30 ) = 0;
      if (param_3 < uVar13) goto LAB_001017c3;
   }
 else {
      if (*(int*)( lVar5 + 0xb4 ) != 0) {
         return 0xfffffffe;
      }

      *(undefined4*)( lVar5 + 0x30 ) = 0;
      uVar13 = *(uint*)( lVar5 + 0x50 );
      if (param_3 < uVar13) goto LAB_001017c3;
      if (iVar11 == 0) {
         __s = *(void**)( lVar5 + 0x78 );
         uVar14 = ( ulong )(*(int*)( lVar5 + 0x84 ) - 1);
         *(undefined2*)( (long)__s + uVar14 * 2 ) = 0;
         memset(__s, 0, uVar14 * 2);
         uVar13 = *(uint*)( lVar5 + 0x50 );
         *(undefined4*)( lVar5 + 0xac ) = 0;
         *(undefined8*)( lVar5 + 0x98 ) = 0;
         *(undefined4*)( lVar5 + 0x172c ) = 0;
      }

   }

   param_2 = param_2 + ( ulong )(param_3 - uVar13);
   param_3 = uVar13;
   LAB_001017c3:lVar9 = param_1[1];
   lVar15 = *param_1;
   *(uint*)( param_1 + 1 ) = param_3;
   *param_1 = param_2;
   fill_window(lVar5);
   uVar13 = *(uint*)( lVar5 + 0xb4 );
   while (2 < uVar13) {
      uVar12 = *(uint*)( lVar5 + 0xac );
      lVar6 = *(long*)( lVar5 + 0x60 );
      uVar2 = *(undefined4*)( lVar5 + 0x90 );
      uVar3 = *(uint*)( lVar5 + 0x8c );
      lVar7 = *(long*)( lVar5 + 0x78 );
      lVar8 = *(long*)( lVar5 + 0x70 );
      uVar13 = ( uVar13 - 2 ) + uVar12;
      uVar4 = *(uint*)( lVar5 + 0x58 );
      uVar16 = *(uint*)( lVar5 + 0x80 );
      do {
         uVar16 = ( ( uint ) * (byte*)( lVar6 + ( ulong )(uVar12 + 2) ) ^ uVar16 << ( (byte)uVar2 & 0x1f ) ) & uVar3;
         *(uint*)( lVar5 + 0x80 ) = uVar16;
         puVar1 = (undefined2*)( lVar7 + (ulong)uVar16 * 2 );
         *(undefined2*)( lVar8 + ( ulong )(uVar4 & uVar12) * 2 ) = *puVar1;
         *puVar1 = (short)uVar12;
         uVar12 = uVar12 + 1;
      }
 while ( uVar12 != uVar13 );
      *(uint*)( lVar5 + 0xac ) = uVar12;
      *(undefined4*)( lVar5 + 0xb4 ) = 2;
      fill_window(lVar5);
      uVar13 = *(uint*)( lVar5 + 0xb4 );
   }
;
   uVar12 = uVar13 + *(int*)( lVar5 + 0xac );
   *(uint*)( lVar5 + 0x172c ) = uVar13;
   *(uint*)( lVar5 + 0xac ) = uVar12;
   *(ulong*)( lVar5 + 0x98 ) = (ulong)uVar12;
   uVar10 = _LC0;
   *(undefined4*)( lVar5 + 0xa0 ) = 2;
   *(undefined8*)( lVar5 + 0xb4 ) = uVar10;
   *(undefined4*)( lVar5 + 0xa8 ) = 0;
   *param_1 = lVar15;
   *(int*)( param_1 + 1 ) = (int)lVar9;
   *(int*)( lVar5 + 0x30 ) = iVar11;
   return 0;
}
undefined4 deflateGetDictionary(long param_1, void *param_2, uint *param_3) {
   long lVar1;
   int iVar2;
   uint uVar3;
   uint uVar4;
   if (( ( param_1 != 0 ) && ( *(long*)( param_1 + 0x40 ) != 0 ) ) && ( *(long*)( param_1 + 0x48 ) != 0 )) {
      iVar2 = deflateStateCheck_part_0();
      if (iVar2 == 0) {
         lVar1 = *(long*)( param_1 + 0x38 );
         uVar4 = *(uint*)( lVar1 + 0xac ) + *(uint*)( lVar1 + 0xb4 );
         uVar3 = *(uint*)( lVar1 + 0x50 );
         if (uVar4 <= *(uint*)( lVar1 + 0x50 )) {
            uVar3 = uVar4;
         }

         if (( param_2 != (void*)0x0 ) && ( uVar3 != 0 )) {
            memcpy(param_2, (void*)( ( ( ( ulong ) * (uint*)( lVar1 + 0xac ) + ( ulong ) * (uint*)( lVar1 + 0xb4 ) ) - (ulong)uVar3 ) + *(long*)( lVar1 + 0x60 ) ), (ulong)uVar3);
         }

         if (param_3 != (uint*)0x0) {
            *param_3 = uVar3;
         }

         return 0;
      }

   }

   return 0xfffffffe;
}
undefined4 deflateResetKeep(long param_1) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   if (( ( param_1 != 0 ) && ( *(long*)( param_1 + 0x40 ) != 0 ) ) && ( *(long*)( param_1 + 0x48 ) != 0 )) {
      lVar4 = param_1;
      iVar2 = deflateStateCheck_part_0();
      if (iVar2 == 0) {
         lVar1 = *(long*)( lVar4 + 0x38 );
         *(undefined8*)( lVar4 + 0x28 ) = 0;
         *(undefined8*)( lVar4 + 0x10 ) = 0;
         uVar3 = *(undefined8*)( lVar1 + 0x10 );
         *(undefined8*)( lVar4 + 0x30 ) = 0;
         *(undefined4*)( lVar4 + 0x58 ) = 2;
         *(undefined8*)( lVar1 + 0x20 ) = uVar3;
         iVar2 = *(int*)( lVar1 + 0x30 );
         *(undefined8*)( lVar1 + 0x28 ) = 0;
         if (iVar2 < 0) {
            iVar2 = -iVar2;
            *(int*)( lVar1 + 0x30 ) = iVar2;
         }

         if (iVar2 == 2) {
            *(undefined4*)( lVar1 + 8 ) = 0x39;
            uVar3 = crc32(0, 0, 0);
         }
 else {
            *(undefined4*)( lVar1 + 8 ) = 0x2a;
            uVar3 = adler32(0, 0, 0);
         }

         *(undefined8*)( param_1 + 0x60 ) = uVar3;
         *(undefined4*)( lVar1 + 0x4c ) = 0xfffffffe;
         _tr_init(lVar1);
         return 0;
      }

   }

   return 0xfffffffe;
}
int deflateReset(long param_1) {
   ushort uVar1;
   long lVar2;
   void *__s;
   int iVar3;
   ulong uVar4;
   long lVar5;
   iVar3 = deflateResetKeep();
   if (iVar3 != 0) {
      return iVar3;
   }

   lVar2 = *(long*)( param_1 + 0x38 );
   __s = *(void**)( lVar2 + 0x78 );
   *(ulong*)( lVar2 + 0x68 ) = ( ulong ) * (uint*)( lVar2 + 0x50 ) * 2;
   uVar4 = ( ulong )(*(int*)( lVar2 + 0x84 ) - 1);
   *(undefined2*)( (long)__s + uVar4 * 2 ) = 0;
   memset(__s, 0, uVar4 * 2);
   *(undefined8*)( lVar2 + 0x98 ) = 0;
   *(undefined4*)( lVar2 + 0x172c ) = 0;
   *(undefined4*)( lVar2 + 0xa0 ) = 2;
   lVar5 = (long)*(int*)( lVar2 + 0xc4 ) * 0x10;
   *(undefined8*)( lVar2 + 0xa8 ) = 0;
   *(undefined4*)( lVar2 + 0x80 ) = 0;
   *(uint*)( lVar2 + 0xc0 ) = ( uint ) * (ushort*)( configuration_table + lVar5 + 2 );
   *(uint*)( lVar2 + 0xcc ) = ( uint ) * (ushort*)( configuration_table + lVar5 );
   uVar1 = *(ushort*)( configuration_table + lVar5 + 6 );
   *(uint*)( lVar2 + 0xd0 ) = ( uint ) * (ushort*)( configuration_table + lVar5 + 4 );
   *(uint*)( lVar2 + 0xbc ) = (uint)uVar1;
   *(undefined8*)( lVar2 + 0xb4 ) = _LC0;
   return 0;
}
undefined8 deflateSetHeader(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (( ( param_1 != 0 ) && ( *(long*)( param_1 + 0x40 ) != 0 ) ) && ( *(long*)( param_1 + 0x48 ) != 0 )) {
      uVar1 = deflateStateCheck_part_0();
      if (( (int)uVar1 == 0 ) && ( *(int*)( *(long*)( param_1 + 0x38 ) + 0x30 ) == 2 )) {
         *(undefined8*)( *(long*)( param_1 + 0x38 ) + 0x38 ) = param_2;
         return uVar1;
      }

   }

   return 0xfffffffe;
}
undefined8 deflatePending(long param_1, undefined4 *param_2, undefined4 *param_3) {
   undefined8 uVar1;
   if (( ( ( param_1 == 0 ) || ( *(long*)( param_1 + 0x40 ) == 0 ) ) || ( *(long*)( param_1 + 0x48 ) == 0 ) ) || ( uVar1 = deflateStateCheck_part_0() ),(int)uVar1 != 0) {
      return 0xfffffffe;
   }

   if (param_2 != (undefined4*)0x0) {
      *param_2 = (int)*(undefined8*)( *(long*)( param_1 + 0x38 ) + 0x28 );
   }

   if (param_3 == (undefined4*)0x0) {
      return uVar1;
   }

   *param_3 = *(undefined4*)( *(long*)( param_1 + 0x38 ) + 0x1734 );
   return uVar1;
}
uint deflatePrime(long param_1, uint param_2, uint param_3) {
   long lVar1;
   uint uVar2;
   int iVar3;
   if (( ( ( param_1 != 0 ) && ( *(long*)( param_1 + 0x40 ) != 0 ) ) && ( *(long*)( param_1 + 0x48 ) != 0 ) ) && ( iVar3 = iVar3 == 0 )) {
      lVar1 = *(long*)( param_1 + 0x38 );
      if (( param_2 < 0x11 ) && ( *(long*)( lVar1 + 0x20 ) + 2U <= *(ulong*)( lVar1 + 0x1700 ) )) {
         do {
            iVar3 = *(int*)( lVar1 + 0x1734 );
            uVar2 = 0x10U - iVar3;
            if ((int)param_2 < (int)( 0x10U - iVar3 )) {
               uVar2 = param_2;
            }

            *(uint*)( lVar1 + 0x1734 ) = iVar3 + uVar2;
            *(ushort*)( lVar1 + 0x1730 ) = *(ushort*)( lVar1 + 0x1730 ) | ( ushort )(( ( 1 << ( (byte)uVar2 & 0x1f ) ) - 1U & param_3 ) << ( (byte)iVar3 & 0x1f ));
            _tr_flush_bits(lVar1);
            param_3 = (int)param_3 >> ( (byte)uVar2 & 0x1f );
            param_2 = param_2 - uVar2;
         }
 while ( param_2 != 0 );
      }
 else {
         param_2 = 0xfffffffb;
      }

      return param_2;
   }

   return 0xfffffffe;
}
undefined8 deflateTune(long param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5) {
   long lVar1;
   undefined8 uVar2;
   if (( ( param_1 != 0 ) && ( *(long*)( param_1 + 0x40 ) != 0 ) ) && ( *(long*)( param_1 + 0x48 ) != 0 )) {
      uVar2 = deflateStateCheck_part_0();
      if ((int)uVar2 == 0) {
         lVar1 = *(long*)( param_1 + 0x38 );
         *(undefined4*)( lVar1 + 0xcc ) = param_2;
         *(undefined4*)( lVar1 + 0xc0 ) = param_3;
         *(undefined4*)( lVar1 + 0xd0 ) = param_4;
         *(undefined4*)( lVar1 + 0xbc ) = param_5;
         return uVar2;
      }

   }

   return 0xfffffffe;
}
long deflateBound(long param_1, ulong param_2) {
   long lVar1;
   long lVar2;
   int iVar3;
   ulong uVar4;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   long lVar8;
   lVar8 = param_2 + 7;
   uVar7 = param_2 + 4 + ( param_2 >> 3 ) + ( param_2 >> 8 ) + ( param_2 >> 9 );
   uVar4 = ( param_2 >> 5 ) + lVar8 + ( param_2 >> 7 ) + ( param_2 >> 0xb );
   iVar3 = deflateStateCheck();
   if (iVar3 != 0) {
      if (uVar4 <= uVar7) {
         uVar4 = uVar7;
      }

      return uVar4 + 6;
   }

   lVar1 = *(long*)( param_1 + 0x38 );
   iVar3 = *(int*)( lVar1 + 0x30 );
   if (iVar3 == 1) {
      uVar5 = ( -(ulong)(*(int *)(lVar1 + 0xac) == 0) & 0xfffffffffffffffc ) + 10;
   }
 else if (iVar3 == 2) {
      lVar2 = *(long*)( lVar1 + 0x38 );
      uVar5 = 0x12;
      if (lVar2 != 0) {
         if (*(long*)( lVar2 + 0x18 ) != 0) {
            uVar5 = ( ulong )(*(int*)( lVar2 + 0x20 ) + 2) + 0x12;
         }

         if (*(long*)( lVar2 + 0x28 ) != 0) {
            lVar6 = *(long*)( lVar2 + 0x28 ) - uVar5;
            do {
               uVar5 = uVar5 + 1;
            }
 while ( *(char*)( lVar6 + -1 + uVar5 ) != '\0' );
         }

         if (*(long*)( lVar2 + 0x38 ) != 0) {
            lVar6 = *(long*)( lVar2 + 0x38 ) - uVar5;
            do {
               uVar5 = uVar5 + 1;
            }
 while ( *(char*)( lVar6 + -1 + uVar5 ) != '\0' );
         }

         if (*(int*)( lVar2 + 0x44 ) != 0) {
            uVar5 = uVar5 + 2;
         }

      }

   }
 else {
      uVar5 = ( ulong )(-(uint)(iVar3 != 0) & 6);
   }

   if (( *(uint*)( lVar1 + 0x54 ) == 0xf ) && ( *(uint*)( lVar1 + 0x88 ) == 0xf )) {
      return uVar5 + ( param_2 >> 0xc ) + lVar8 + ( param_2 >> 0xe ) + ( param_2 >> 0x19 );
   }

   if (( *(uint*)( lVar1 + 0x54 ) <= *(uint*)( lVar1 + 0x88 ) ) && ( *(int*)( lVar1 + 0xc4 ) != 0 )) {
      uVar4 = uVar7;
   }

   return uVar5 + uVar4;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint deflate(long *param_1, uint param_2) {
   short *psVar1;
   char *pcVar2;
   byte bVar3;
   undefined4 uVar4;
   long *plVar5;
   int *piVar6;
   undefined8 uVar7;
   void *__s;
   long lVar8;
   int iVar9;
   char cVar10;
   int iVar11;
   uint uVar12;
   int iVar13;
   uint uVar14;
   undefined1 *puVar15;
   long lVar16;
   char *pcVar18;
   long lVar19;
   long *plVar20;
   long lVar21;
   size_t __n;
   ulong uVar22;
   ulong uVar23;
   int iVar24;
   ulong uVar17;
   plVar20 = param_1;
   iVar11 = deflateStateCheck();
   if (iVar11 != 0) {
      return 0xfffffffe;
   }

   if (5 < param_2) {
      return 0xfffffffe;
   }

   plVar5 = (long*)plVar20[7];
   if (( plVar20[3] == 0 ) || ( ( lVar19 = plVar20[1] ),(int)lVar19 != 0 && ( *plVar20 == 0 ) )) {
      LAB_00102da1:param_1[6] = _DAT_00104070;
      return 0xfffffffe;
   }

   iVar11 = (int)plVar5[1];
   if (( iVar11 == 0x29a ) && ( param_2 != 4 )) goto LAB_00102da1;
   if ((int)param_1[4] == 0) goto LAB_00102dbd;
   iVar13 = *(int*)( (long)plVar5 + 0x4c );
   *(uint*)( (long)plVar5 + 0x4c ) = param_2;
   if (plVar5[5] == 0) {
      if ((int)lVar19 == 0) {
         iVar24 = param_2 * 2;
         if (param_2 == 5) {
            iVar24 = 1;
         }

         iVar9 = iVar13 * 2;
         if (4 < iVar13) {
            iVar9 = iVar9 + -9;
         }

         if (( iVar24 <= iVar9 ) && ( param_2 != 4 )) goto LAB_00102dbd;
         goto LAB_001020c9;
      }

      if (iVar11 == 0x29a) goto LAB_00102dbd;
      LAB_00101fd2:if (iVar11 != 0x2a) {
         LAB_001022f1:if (iVar11 == 0x39) {
            lVar16 = crc32(0, 0, 0);
            lVar19 = plVar5[2];
            param_1[0xc] = lVar16;
            lVar16 = plVar5[5];
            plVar5[5] = lVar16 + 1;
            *(undefined1*)( lVar19 + lVar16 ) = 0x1f;
            lVar19 = plVar5[5];
            plVar5[5] = lVar19 + 1;
            *(undefined1*)( plVar5[2] + lVar19 ) = 0x8b;
            lVar19 = plVar5[5];
            plVar5[5] = lVar19 + 1;
            *(undefined1*)( plVar5[2] + lVar19 ) = 8;
            piVar6 = (int*)plVar5[7];
            if (piVar6 == (int*)0x0) {
               for (int i = 0; i < 5; i++) {
                  lVar19 = plVar5[5];
                  plVar5[5] = lVar19 + 1;
                  *(undefined1*)( plVar5[2] + lVar19 ) = 0;
               }

               cVar10 = '\x02';
               if (*(int*)( (long)plVar5 + 0xc4 ) != 9) {
                  cVar10 = ( 1 < (int)plVar5[0x19] || *(int*)( (long)plVar5 + 0xc4 ) < 2 ) << 2;
               }

               lVar19 = plVar5[5];
               plVar5[5] = lVar19 + 1;
               *(char*)( plVar5[2] + lVar19 ) = cVar10;
               lVar19 = plVar5[5];
               plVar5[5] = lVar19 + 1;
               *(undefined1*)( plVar5[2] + lVar19 ) = 3;
               *(undefined4*)( plVar5 + 1 ) = 0x71;
               flush_pending(param_1);
               if (plVar5[5] != 0) goto LAB_00102080;
               iVar11 = (int)plVar5[1];
               goto LAB_00102670;
            }

            iVar11 = piVar6[0x11];
            lVar16 = *(long*)( piVar6 + 6 );
            iVar13 = *piVar6;
            lVar21 = *(long*)( piVar6 + 10 );
            lVar8 = *(long*)( piVar6 + 0xe );
            lVar19 = plVar5[5];
            plVar5[5] = lVar19 + 1;
            *(char*)( plVar5[2] + lVar19 ) = ( lVar8 != 0 ) * '\x10' + ( ( ( iVar11 != 0 ) * '\x02' + ( lVar16 != 0 ) * '\x04' + '\x01' ) - ( iVar13 == 0 ) ) + ( lVar21 != 0 ) * '\b';
            uVar7 = *(undefined8*)( plVar5[7] + 8 );
            lVar19 = plVar5[5];
            plVar5[5] = lVar19 + 1;
            *(char*)( plVar5[2] + lVar19 ) = (char)uVar7;
            uVar7 = *(undefined8*)( plVar5[7] + 8 );
            lVar19 = plVar5[5];
            plVar5[5] = lVar19 + 1;
            *(char*)( plVar5[2] + lVar19 ) = (char)( (ulong)uVar7 >> 8 );
            lVar19 = plVar5[5];
            uVar7 = *(undefined8*)( plVar5[7] + 8 );
            plVar5[5] = lVar19 + 1;
            *(char*)( plVar5[2] + lVar19 ) = (char)( (ulong)uVar7 >> 0x10 );
            lVar19 = plVar5[5];
            uVar7 = *(undefined8*)( plVar5[7] + 8 );
            plVar5[5] = lVar19 + 1;
            *(char*)( plVar5[2] + lVar19 ) = (char)( (ulong)uVar7 >> 0x18 );
            cVar10 = '\x02';
            if (*(int*)( (long)plVar5 + 0xc4 ) != 9) {
               cVar10 = ( 1 < (int)plVar5[0x19] || *(int*)( (long)plVar5 + 0xc4 ) < 2 ) << 2;
            }

            lVar19 = plVar5[5];
            plVar5[5] = lVar19 + 1;
            *(char*)( plVar5[2] + lVar19 ) = cVar10;
            uVar4 = *(undefined4*)( plVar5[7] + 0x14 );
            lVar19 = plVar5[5];
            plVar5[5] = lVar19 + 1;
            *(char*)( plVar5[2] + lVar19 ) = (char)uVar4;
            lVar19 = plVar5[7];
            if (*(long*)( lVar19 + 0x18 ) != 0) {
               uVar4 = *(undefined4*)( lVar19 + 0x20 );
               lVar19 = plVar5[5];
               plVar5[5] = lVar19 + 1;
               *(char*)( plVar5[2] + lVar19 ) = (char)uVar4;
               uVar4 = *(undefined4*)( plVar5[7] + 0x20 );
               lVar19 = plVar5[5];
               plVar5[5] = lVar19 + 1;
               *(char*)( plVar5[2] + lVar19 ) = (char)( (uint)uVar4 >> 8 );
               lVar19 = plVar5[7];
            }

            if (*(int*)( lVar19 + 0x44 ) != 0) {
               lVar19 = crc32(param_1[0xc], plVar5[2], (int)plVar5[5]);
               param_1[0xc] = lVar19;
               lVar19 = plVar5[7];
            }

            plVar5[8] = 0;
            *(undefined4*)( plVar5 + 1 ) = 0x45;
            LAB_001024c2:lVar16 = *(long*)( lVar19 + 0x18 );
            if (lVar16 != 0) {
               lVar21 = plVar5[8];
               uVar23 = plVar5[5];
               uVar17 = plVar5[3];
               __n = (size_t)( ( uint ) * (ushort*)( lVar19 + 0x20 ) - (int)lVar21 );
               uVar22 = uVar23;
               if (uVar17 < __n + uVar23) {
                  do {
                     iVar13 = (int)uVar17;
                     iVar24 = (int)uVar23;
                     uVar22 = ( ulong )(uint)(iVar13 - iVar24);
                     memcpy((void*)( plVar5[2] + uVar23 ), (void*)( lVar16 + lVar21 ), uVar22);
                     uVar17 = plVar5[3];
                     iVar11 = *(int*)( plVar5[7] + 0x44 );
                     plVar5[5] = uVar17;
                     if (( iVar11 != 0 ) && ( uVar23 < uVar17 )) {
                        lVar19 = crc32(param_1[0xc], plVar5[2] + uVar23, (int)uVar17 - iVar24);
                        param_1[0xc] = lVar19;
                     }

                     plVar5[8] = plVar5[8] + uVar22;
                     flush_pending(param_1);
                     if (plVar5[5] != 0) goto LAB_00102080;
                     lVar21 = plVar5[8];
                     uVar17 = plVar5[3];
                     lVar16 = *(long*)( plVar5[7] + 0x18 );
                     __n = (size_t)( uint )(( iVar24 - iVar13 ) + (int)__n);
                     uVar23 = 0;
                     uVar22 = 0;
                  }
 while ( uVar17 < __n );
               }

               memcpy((void*)( plVar5[2] + uVar22 ), (void*)( lVar16 + lVar21 ), __n);
               lVar19 = plVar5[7];
               uVar23 = __n + plVar5[5];
               plVar5[5] = uVar23;
               if (( *(int*)( lVar19 + 0x44 ) != 0 ) && ( uVar22 < uVar23 )) {
                  lVar19 = crc32(param_1[0xc], plVar5[2] + uVar22, (int)uVar23 - (int)uVar22);
                  param_1[0xc] = lVar19;
                  lVar19 = plVar5[7];
               }

               plVar5[8] = 0;
            }

            *(undefined4*)( plVar5 + 1 ) = 0x49;
            LAB_00102961:if (*(long*)( lVar19 + 0x28 ) != 0) {
               uVar23 = plVar5[5];
               uVar17 = uVar23;
               while (true) {
                  if (plVar5[3] == uVar23) {
                     if (( *(int*)( lVar19 + 0x44 ) != 0 ) && ( uVar17 < uVar23 )) {
                        lVar19 = crc32(param_1[0xc], uVar17 + plVar5[2], (int)uVar23 - (int)uVar17);
                        param_1[0xc] = lVar19;
                     }

                     flush_pending(param_1);
                     if (plVar5[5] != 0) goto LAB_00102080;
                     lVar19 = plVar5[7];
                     uVar17 = 0;
                     uVar23 = 0;
                  }

                  lVar19 = *(long*)( lVar19 + 0x28 );
                  lVar16 = plVar5[8];
                  plVar5[8] = lVar16 + 1;
                  cVar10 = *(char*)( lVar19 + lVar16 );
                  plVar5[5] = uVar23 + 1;
                  *(char*)( plVar5[2] + uVar23 ) = cVar10;
                  if (cVar10 == '\0') break;
                  uVar23 = plVar5[5];
                  lVar19 = plVar5[7];
               }
;
               lVar19 = plVar5[7];
               if (( *(int*)( lVar19 + 0x44 ) != 0 ) && ( uVar17 < (ulong)plVar5[5] )) {
                  lVar19 = crc32(param_1[0xc], uVar17 + plVar5[2], (int)plVar5[5] - (int)uVar17);
                  param_1[0xc] = lVar19;
                  lVar19 = plVar5[7];
               }

               plVar5[8] = 0;
            }

            *(undefined4*)( plVar5 + 1 ) = 0x5b;
            LAB_00102a08:if (*(long*)( lVar19 + 0x38 ) == 0) {
               LAB_00102b35:iVar11 = *(int*)( lVar19 + 0x44 );
               *(undefined4*)( plVar5 + 1 ) = 0x67;
               goto LAB_00102b40;
            }

            uVar23 = plVar5[5];
            uVar17 = uVar23;
            while (true) {
               if (plVar5[3] == uVar23) {
                  if (( *(int*)( lVar19 + 0x44 ) != 0 ) && ( uVar17 < uVar23 )) {
                     lVar19 = crc32(param_1[0xc], uVar17 + plVar5[2], (int)uVar23 - (int)uVar17);
                     param_1[0xc] = lVar19;
                  }

                  flush_pending(param_1);
                  if (plVar5[5] != 0) goto LAB_00102080;
                  lVar19 = plVar5[7];
                  uVar17 = 0;
                  uVar23 = 0;
               }

               lVar19 = *(long*)( lVar19 + 0x38 );
               lVar16 = plVar5[8];
               plVar5[8] = lVar16 + 1;
               cVar10 = *(char*)( lVar19 + lVar16 );
               plVar5[5] = uVar23 + 1;
               *(char*)( plVar5[2] + uVar23 ) = cVar10;
               if (cVar10 == '\0') break;
               uVar23 = plVar5[5];
               lVar19 = plVar5[7];
            }
;
            if (*(int*)( plVar5[7] + 0x44 ) != 0) {
               uVar23 = plVar5[5];
               if (uVar17 < uVar23) {
                  lVar19 = crc32(param_1[0xc], uVar17 + plVar5[2], (int)uVar23 - (int)uVar17);
                  param_1[0xc] = lVar19;
                  lVar19 = plVar5[7];
                  goto LAB_00102b35;
               }

               *(undefined4*)( plVar5 + 1 ) = 0x67;
               goto LAB_00102b48;
            }

         }
 else {
            LAB_00102670:if (iVar11 == 0x45) {
               lVar19 = plVar5[7];
               goto LAB_001024c2;
            }

            if (iVar11 == 0x49) {
               lVar19 = plVar5[7];
               goto LAB_00102961;
            }

            if (iVar11 == 0x5b) {
               lVar19 = plVar5[7];
               goto LAB_00102a08;
            }

            if (iVar11 != 0x67) goto LAB_001020e5;
            iVar11 = *(int*)( plVar5[7] + 0x44 );
            LAB_00102b40:if (iVar11 != 0) {
               uVar23 = plVar5[5];
               LAB_00102b48:if ((ulong)plVar5[3] < uVar23 + 2) {
                  flush_pending(param_1);
                  uVar23 = plVar5[5];
                  if (uVar23 != 0) goto LAB_00102080;
               }

               lVar19 = param_1[0xc];
               plVar5[5] = uVar23 + 1;
               *(char*)( plVar5[2] + uVar23 ) = (char)lVar19;
               lVar19 = plVar5[5];
               lVar16 = param_1[0xc];
               plVar5[5] = lVar19 + 1;
               *(char*)( plVar5[2] + lVar19 ) = (char)( (ulong)lVar16 >> 8 );
               lVar19 = crc32(0, 0, 0);
               param_1[0xc] = lVar19;
            }

         }

         *(undefined4*)( plVar5 + 1 ) = 0x71;
         flush_pending(param_1);
         if (plVar5[5] != 0) goto LAB_00102080;
         goto LAB_001020e5;
      }

      if ((int)plVar5[6] != 0) {
         uVar14 = *(int*)( (long)plVar5 + 0x54 ) * 0x1000 - 0x7800;
         uVar12 = uVar14;
         if (( (int)plVar5[0x19] < 2 ) && ( iVar11 = 1 < iVar11 )) {
            if (iVar11 < 6) {
               uVar12 = uVar14 | 0x40;
            }
 else {
               uVar12 = uVar14 | 0xc0;
               if (iVar11 == 6) {
                  uVar12 = uVar14 | 0x80;
               }

            }

         }

         if (*(int*)( (long)plVar5 + 0xac ) != 0) {
            uVar12 = uVar12 | 0x20;
         }

         iVar11 = ( uVar12 / 0x1f ) * 0x1f + 0x1f;
         lVar19 = plVar5[5];
         plVar5[5] = lVar19 + 1;
         *(char*)( plVar5[2] + lVar19 ) = (char)( (uint)iVar11 >> 8 );
         lVar19 = plVar5[5];
         plVar5[5] = lVar19 + 1;
         *(char*)( plVar5[2] + lVar19 ) = (char)iVar11;
         if (*(int*)( (long)plVar5 + 0xac ) != 0) {
            lVar19 = plVar5[5];
            lVar16 = param_1[0xc];
            plVar5[5] = lVar19 + 1;
            *(char*)( plVar5[2] + lVar19 ) = (char)( (ulong)lVar16 >> 0x18 );
            lVar19 = plVar5[5];
            plVar5[5] = lVar19 + 1;
            *(char*)( plVar5[2] + lVar19 ) = (char)( (ulong)lVar16 >> 0x10 );
            lVar19 = plVar5[5];
            lVar16 = param_1[0xc];
            plVar5[5] = lVar19 + 1;
            *(char*)( plVar5[2] + lVar19 ) = (char)( (ushort)(short)lVar16 >> 8 );
            lVar19 = plVar5[5];
            plVar5[5] = lVar19 + 1;
            *(char*)( plVar5[2] + lVar19 ) = (char)(short)lVar16;
         }

         lVar19 = adler32(0, 0, 0);
         param_1[0xc] = lVar19;
         *(undefined4*)( plVar5 + 1 ) = 0x71;
         flush_pending(param_1);
         if (plVar5[5] != 0) goto LAB_00102080;
         iVar11 = (int)plVar5[1];
         goto LAB_001022f1;
      }

      *(undefined4*)( plVar5 + 1 ) = 0x71;
      iVar11 = (int)param_1[1];
   }
 else {
      flush_pending(param_1);
      if ((int)param_1[4] == 0) goto LAB_00102080;
      iVar11 = (int)plVar5[1];
      LAB_001020c9:if (iVar11 != 0x29a) goto LAB_00101fd2;
      if ((int)param_1[1] != 0) {
         LAB_00102dbd:param_1[6] = _DAT_00104088;
         return 0xfffffffb;
      }

      LAB_001020e5:iVar11 = (int)param_1[1];
   }

   if (( iVar11 == 0 ) && ( *(int*)( (long)plVar5 + 0xb4 ) == 0 )) {
      if (param_2 == 0) {
         return 0;
      }

      if ((int)plVar5[1] != 0x29a) goto LAB_00102000;
      goto LAB_00102120;
   }

   LAB_00102000:if (*(int*)( (long)plVar5 + 0xc4 ) == 0) {
      iVar11 = deflate_stored(plVar5);
      LAB_0010203f:if (iVar11 - 2U < 2) {
         *(undefined4*)( plVar5 + 1 ) = 0x29a;
         if (iVar11 != 2) goto LAB_00102120;
      }
 else if (iVar11 != 0) {
         if (iVar11 == 1) goto LAB_00102059;
         LAB_00102120:if (param_2 != 4) {
            return 0;
         }

         LAB_00102129:if (0 < (int)plVar5[6]) {
            lVar19 = plVar5[5] + 1;
            lVar16 = param_1[0xc];
            puVar15 = (undefined1*)( plVar5[5] + plVar5[2] );
            if ((int)plVar5[6] == 2) {
               plVar5[5] = lVar19;
               *puVar15 = (char)lVar16;
               lVar19 = plVar5[5];
               for (int i = 0; i < 3; i++) {
                  lVar16 = param_1[12];
                  plVar5[5] = lVar19 + 1;
                  *(char*)( plVar5[2] + lVar19 ) = (char)( (ulong)lVar16 >> ( 8*i + 8 ) );
                  lVar19 = plVar5[5];
               }

               lVar16 = param_1[2];
               plVar5[5] = lVar19 + 1;
               *(char*)( plVar5[2] + lVar19 ) = (char)lVar16;
               lVar19 = plVar5[5];
               lVar16 = param_1[2];
               plVar5[5] = lVar19 + 1;
               *(char*)( plVar5[2] + lVar19 ) = (char)( (ulong)lVar16 >> 8 );
               lVar19 = plVar5[5];
               lVar16 = param_1[2];
               plVar5[5] = lVar19 + 1;
               *(char*)( plVar5[2] + lVar19 ) = (char)( (ulong)lVar16 >> 0x10 );
               lVar19 = param_1[2];
               lVar16 = plVar5[5];
               plVar5[5] = lVar16 + 1;
               *(char*)( plVar5[2] + lVar16 ) = (char)( (ulong)lVar19 >> 0x18 );
            }
 else {
               plVar5[5] = lVar19;
               *puVar15 = (char)( (ulong)lVar16 >> 0x18 );
               lVar19 = plVar5[5];
               plVar5[5] = lVar19 + 1;
               *(char*)( plVar5[2] + lVar19 ) = (char)( (ulong)lVar16 >> 0x10 );
               lVar16 = param_1[0xc];
               lVar19 = plVar5[5];
               plVar5[5] = lVar19 + 1;
               *(char*)( plVar5[2] + lVar19 ) = (char)( (ushort)(short)lVar16 >> 8 );
               lVar19 = plVar5[5];
               plVar5[5] = lVar19 + 1;
               *(char*)( plVar5[2] + lVar19 ) = (char)(short)lVar16;
            }

            flush_pending(param_1);
            if (0 < (int)plVar5[6]) {
               *(int*)( plVar5 + 6 ) = -(int)plVar5[6];
            }

            return ( uint )(plVar5[5] == 0);
         }

         return 1;
      }

   }
 else if ((int)plVar5[0x19] == 2) {
      do {
         iVar11 = *(int*)( (long)plVar5 + 0xb4 );
         do {
            if (( iVar11 == 0 ) && ( fill_window(plVar5),*(int*)( (long)plVar5 + 0xb4 ) == 0 )) {
               if (param_2 == 0) goto LAB_00102868;
               goto LAB_001027f1;
            }

            *(undefined4*)( plVar5 + 0x14 ) = 0;
            bVar3 = *(byte*)( plVar5[0xc] + ( ulong ) * (uint*)( (long)plVar5 + 0xac ) );
            uVar12 = *(uint*)( (long)plVar5 + 0x170c );
            *(uint*)( (long)plVar5 + 0x170c ) = uVar12 + 1;
            *(undefined1*)( plVar5[0x2e0] + (ulong)uVar12 ) = 0;
            uVar12 = *(uint*)( (long)plVar5 + 0x170c );
            *(uint*)( (long)plVar5 + 0x170c ) = uVar12 + 1;
            *(undefined1*)( plVar5[0x2e0] + (ulong)uVar12 ) = 0;
            uVar12 = *(uint*)( (long)plVar5 + 0x170c );
            *(uint*)( (long)plVar5 + 0x170c ) = uVar12 + 1;
            *(byte*)( plVar5[0x2e0] + (ulong)uVar12 ) = bVar3;
            iVar11 = *(int*)( (long)plVar5 + 0xac );
            psVar1 = (short*)( (long)plVar5 + (ulong)bVar3 * 4 + 0xd4 );
            *psVar1 = *psVar1 + 1;
            uVar12 = iVar11 + 1;
            iVar11 = *(int*)( (long)plVar5 + 0xb4 ) + -1;
            *(uint*)( (long)plVar5 + 0xac ) = uVar12;
            *(int*)( (long)plVar5 + 0xb4 ) = iVar11;
         }
 while ( *(int*)( (long)plVar5 + 0x170c ) != (int)plVar5[0x2e2] );
         uVar23 = plVar5[0x13];
         lVar19 = 0;
         if (-1 < (long)uVar23) {
            lVar19 = ( uVar23 & 0xffffffff ) + plVar5[0xc];
         }

         _tr_flush_block(plVar5, lVar19, uVar12 - uVar23);
         plVar5[0x13] = ( ulong ) * (uint*)( (long)plVar5 + 0xac );
         flush_pending(*plVar5);
      }
 while ( *(int*)( *plVar5 + 0x20 ) != 0 );
   }
 else {
      if ((int)plVar5[0x19] != 3) {
         iVar11 = ( **(code**)( configuration_table + (long)*(int*)( (long)plVar5 + 0xc4 ) * 0x10 + 8 ) )(plVar5);
         goto LAB_0010203f;
      }

      LAB_00102ca4:do {
         uVar12 = *(uint*)( (long)plVar5 + 0xb4 );
         if (uVar12 < 0x103) {
            fill_window(plVar5);
            uVar12 = *(uint*)( (long)plVar5 + 0xb4 );
            if (0x102 < uVar12) goto LAB_00102bf0;
            if (param_2 == 0) break;
            if (uVar12 == 0) goto LAB_001027f1;
            uVar14 = *(uint*)( (long)plVar5 + 0xac );
            uVar23 = (ulong)uVar14;
            lVar19 = plVar5[0xc];
            *(undefined4*)( plVar5 + 0x14 ) = 0;
            if (2 < uVar12) goto LAB_00102c09;
            LAB_00102c1f:uVar12 = *(uint*)( (long)plVar5 + 0x170c );
            bVar3 = *(byte*)( lVar19 + uVar23 );
            *(uint*)( (long)plVar5 + 0x170c ) = uVar12 + 1;
            *(undefined1*)( plVar5[0x2e0] + (ulong)uVar12 ) = 0;
            uVar12 = *(uint*)( (long)plVar5 + 0x170c );
            *(uint*)( (long)plVar5 + 0x170c ) = uVar12 + 1;
            *(undefined1*)( plVar5[0x2e0] + (ulong)uVar12 ) = 0;
            uVar12 = *(uint*)( (long)plVar5 + 0x170c );
            *(uint*)( (long)plVar5 + 0x170c ) = uVar12 + 1;
            *(byte*)( plVar5[0x2e0] + (ulong)uVar12 ) = bVar3;
            psVar1 = (short*)( (long)plVar5 + (ulong)bVar3 * 4 + 0xd4 );
            *psVar1 = *psVar1 + 1;
            *(int*)( (long)plVar5 + 0xb4 ) = *(int*)( (long)plVar5 + 0xb4 ) + -1;
            *(int*)( (long)plVar5 + 0xac ) = *(int*)( (long)plVar5 + 0xac ) + 1;
            if (*(int*)( (long)plVar5 + 0x170c ) != (int)plVar5[0x2e2]) goto LAB_00102ca4;
         }
 else {
            LAB_00102bf0:uVar14 = *(uint*)( (long)plVar5 + 0xac );
            uVar23 = (ulong)uVar14;
            lVar19 = plVar5[0xc];
            *(undefined4*)( plVar5 + 0x14 ) = 0;
            LAB_00102c09:if (uVar14 == 0) goto LAB_00102c1f;
            pcVar18 = (char*)( lVar19 + -1 + uVar23 );
            cVar10 = *pcVar18;
            if (( ( cVar10 != pcVar18[1] ) || ( cVar10 != pcVar18[2] ) ) || ( cVar10 != pcVar18[3] )) goto LAB_00102c1f;
            pcVar18 = pcVar18 + 3;
            pcVar2 = (char*)( lVar19 + 0x102 + uVar23 );
            while (true) {
               if (cVar10 != pcVar18[1]) {
                  pcVar18 = pcVar18 + 1;
                  goto LAB_00102e5c;
               }

               if (cVar10 != pcVar18[2]) break;
               if (cVar10 != pcVar18[3]) {
                  pcVar18 = pcVar18 + 3;
                  goto LAB_00102e5c;
               }

               if (cVar10 != pcVar18[4]) {
                  pcVar18 = pcVar18 + 4;
                  goto LAB_00102e5c;
               }

               if (cVar10 != pcVar18[5]) {
                  pcVar18 = pcVar18 + 5;
                  goto LAB_00102e5c;
               }

               if (cVar10 != pcVar18[6]) {
                  pcVar18 = pcVar18 + 6;
                  goto LAB_00102e5c;
               }

               if (cVar10 != pcVar18[7]) {
                  pcVar18 = pcVar18 + 7;
                  goto LAB_00102e5c;
               }

               pcVar18 = pcVar18 + 8;
               if (( *pcVar18 != cVar10 ) || ( pcVar2 <= pcVar18 )) goto LAB_00102e5c;
            }
;
            pcVar18 = pcVar18 + 2;
            LAB_00102e5c:uVar14 = ( (int)pcVar18 - (int)pcVar2 ) + 0x102;
            *(uint*)( plVar5 + 0x14 ) = uVar14;
            if (uVar12 < uVar14) {
               *(uint*)( plVar5 + 0x14 ) = uVar12;
               uVar14 = uVar12;
            }
 else if (uVar14 < 3) goto LAB_00102c1f;
            uVar12 = *(uint*)( (long)plVar5 + 0x170c );
            *(uint*)( (long)plVar5 + 0x170c ) = uVar12 + 1;
            *(undefined1*)( plVar5[0x2e0] + (ulong)uVar12 ) = 1;
            uVar12 = *(uint*)( (long)plVar5 + 0x170c );
            *(uint*)( (long)plVar5 + 0x170c ) = uVar12 + 1;
            *(undefined1*)( plVar5[0x2e0] + (ulong)uVar12 ) = 0;
            uVar12 = *(uint*)( (long)plVar5 + 0x170c );
            *(uint*)( (long)plVar5 + 0x170c ) = uVar12 + 1;
            *(char*)( plVar5[0x2e0] + (ulong)uVar12 ) = (char)( uVar14 - 3 );
            psVar1 = (short*)( (long)plVar5 + ( ulong )(byte)(&_length_code)[uVar14 - 3 & 0xff] * 4 + 0x4d8 );
            *psVar1 = *psVar1 + 1;
            psVar1 = (short*)( (long)plVar5 + (ulong)_dist_code * 4 + 0x9c8 );
            *psVar1 = *psVar1 + 1;
            lVar19 = plVar5[0x14];
            *(undefined4*)( plVar5 + 0x14 ) = 0;
            *(int*)( (long)plVar5 + 0xb4 ) = *(int*)( (long)plVar5 + 0xb4 ) - (int)lVar19;
            *(int*)( (long)plVar5 + 0xac ) = *(int*)( (long)plVar5 + 0xac ) + (int)lVar19;
            if (*(int*)( (long)plVar5 + 0x170c ) != (int)plVar5[0x2e2]) goto LAB_00102ca4;
         }

         uVar23 = plVar5[0x13];
         lVar19 = 0;
         if (-1 < (long)uVar23) {
            lVar19 = ( uVar23 & 0xffffffff ) + plVar5[0xc];
         }

         _tr_flush_block(plVar5, lVar19, *(uint*)( (long)plVar5 + 0xac ) - uVar23);
         plVar5[0x13] = ( ulong ) * (uint*)( (long)plVar5 + 0xac );
         flush_pending(*plVar5);
      }
 while ( *(int*)( *plVar5 + 0x20 ) != 0 );
   }

   LAB_00102868:iVar11 = (int)param_1[4];
   joined_r0x00102873:if (iVar11 != 0) {
      return 0;
   }

   LAB_00102080:*(undefined4*)( (long)plVar5 + 0x4c ) = 0xffffffff;
   return 0;
   LAB_001027f1:*(undefined4*)( (long)plVar5 + 0x172c ) = 0;
   if (param_2 == 4) {
      uVar23 = plVar5[0x13];
      lVar19 = 0;
      if (-1 < (long)uVar23) {
         lVar19 = ( uVar23 & 0xffffffff ) + plVar5[0xc];
      }

      _tr_flush_block(plVar5, lVar19, *(uint*)( (long)plVar5 + 0xac ) - uVar23, 1);
      plVar5[0x13] = ( ulong ) * (uint*)( (long)plVar5 + 0xac );
      flush_pending(*plVar5);
      iVar11 = *(int*)( *plVar5 + 0x20 );
      *(undefined4*)( plVar5 + 1 ) = 0x29a;
      if (iVar11 != 0) goto LAB_00102129;
      goto LAB_00102868;
   }

   if (*(int*)( (long)plVar5 + 0x170c ) != 0) {
      uVar23 = plVar5[0x13];
      lVar19 = 0;
      if (-1 < (long)uVar23) {
         lVar19 = ( uVar23 & 0xffffffff ) + plVar5[0xc];
      }

      _tr_flush_block(plVar5, lVar19, *(uint*)( (long)plVar5 + 0xac ) - uVar23);
      plVar5[0x13] = ( ulong ) * (uint*)( (long)plVar5 + 0xac );
      flush_pending(*plVar5);
      if (*(int*)( *plVar5 + 0x20 ) == 0) goto LAB_00102868;
   }

   LAB_00102059:if (param_2 == 1) {
      _tr_align(plVar5);
   }
 else if (param_2 != 5) {
      _tr_stored_block(plVar5, 0, 0);
      if (param_2 != 3) {
         flush_pending(param_1);
         if ((int)param_1[4] == 0) goto LAB_00102080;
         goto LAB_00102120;
      }

      __s = (void*)plVar5[0xf];
      uVar23 = ( ulong )(*(int*)( (long)plVar5 + 0x84 ) - 1);
      *(undefined2*)( (long)__s + uVar23 * 2 ) = 0;
      memset(__s, 0, uVar23 * 2);
      if (*(int*)( (long)plVar5 + 0xb4 ) == 0) {
         *(undefined4*)( (long)plVar5 + 0xac ) = 0;
         plVar5[0x13] = 0;
         *(undefined4*)( (long)plVar5 + 0x172c ) = 0;
      }

   }

   flush_pending(param_1);
   iVar11 = (int)param_1[4];
   goto joined_r0x00102873;
}
undefined8 deflateParams(long param_1, uint param_2, uint param_3) {
   ushort uVar1;
   long lVar2;
   void *__s;
   int iVar3;
   ulong uVar4;
   int iVar5;
   long lVar6;
   iVar3 = deflateStateCheck();
   if (iVar3 == 0) {
      lVar6 = (long)(int)param_2;
      lVar2 = *(long*)( param_1 + 0x38 );
      if (param_2 == 0xffffffff) {
         lVar6 = 6;
      }

      if (( param_3 < 5 ) && ( param_2 == 0xffffffff || param_2 < 10 )) {
         iVar3 = *(int*)( lVar2 + 0xc4 );
         iVar5 = (int)lVar6;
         if (( ( *(uint*)( lVar2 + 200 ) != param_3 ) || ( *(long*)( configuration_table + (long)iVar5 * 0x10 + 8 ) != *(long*)( configuration_table + (long)iVar3 * 0x10 + 8 ) ) ) && ( *(int*)( lVar2 + 0x4c ) != -2 )) {
            iVar3 = deflate(param_1, 5);
            if (iVar3 == -2) {
               return 0xfffffffe;
            }

            if (( *(int*)( param_1 + 8 ) != 0 ) || ( ( ( ulong ) * (uint*)( lVar2 + 0xac ) - *(long*)( lVar2 + 0x98 ) ) + ( ulong ) * (uint*)( lVar2 + 0xb4 ) != 0 )) {
               return 0xfffffffb;
            }

            iVar3 = *(int*)( lVar2 + 0xc4 );
         }

         if (iVar5 != iVar3) {
            if (( iVar3 == 0 ) && ( *(int*)( lVar2 + 0x1728 ) != 0 )) {
               if (*(int*)( lVar2 + 0x1728 ) == 1) {
                  slide_hash(lVar2);
               }
 else {
                  __s = *(void**)( lVar2 + 0x78 );
                  uVar4 = ( ulong )(*(int*)( lVar2 + 0x84 ) - 1);
                  *(undefined2*)( (long)__s + uVar4 * 2 ) = 0;
                  memset(__s, 0, uVar4 * 2);
               }

               *(undefined4*)( lVar2 + 0x1728 ) = 0;
            }

            *(int*)( lVar2 + 0xc4 ) = iVar5;
            lVar6 = lVar6 * 0x10;
            *(uint*)( lVar2 + 0xc0 ) = ( uint ) * (ushort*)( configuration_table + lVar6 + 2 );
            *(uint*)( lVar2 + 0xcc ) = ( uint ) * (ushort*)( configuration_table + lVar6 );
            uVar1 = *(ushort*)( configuration_table + lVar6 + 6 );
            *(uint*)( lVar2 + 0xd0 ) = ( uint ) * (ushort*)( configuration_table + lVar6 + 4 );
            *(uint*)( lVar2 + 0xbc ) = (uint)uVar1;
         }

         *(uint*)( lVar2 + 200 ) = param_3;
         return 0;
      }

   }

   return 0xfffffffe;
}
undefined8 deflateEnd(long param_1) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   lVar4 = param_1;
   iVar1 = deflateStateCheck();
   if (iVar1 == 0) {
      lVar3 = *(long*)( lVar4 + 0x38 );
      uVar2 = 0;
      iVar1 = *(int*)( lVar3 + 8 );
      if (*(long*)( lVar3 + 0x10 ) != 0) {
         ( **(code**)( param_1 + 0x48 ) )(*(undefined8*)( lVar4 + 0x50 ), *(long*)( lVar3 + 0x10 ));
         lVar3 = *(long*)( param_1 + 0x38 );
      }

      if (*(long*)( lVar3 + 0x78 ) != 0) {
         ( **(code**)( param_1 + 0x48 ) )(*(undefined8*)( param_1 + 0x50 ), *(long*)( lVar3 + 0x78 ));
         lVar3 = *(long*)( param_1 + 0x38 );
      }

      if (*(long*)( lVar3 + 0x70 ) != 0) {
         ( **(code**)( param_1 + 0x48 ) )(*(undefined8*)( param_1 + 0x50 ), *(long*)( lVar3 + 0x70 ));
         lVar3 = *(long*)( param_1 + 0x38 );
      }

      if (*(long*)( lVar3 + 0x60 ) != 0) {
         ( **(code**)( param_1 + 0x48 ) )(*(undefined8*)( param_1 + 0x50 ), *(long*)( lVar3 + 0x60 ));
         lVar3 = *(long*)( param_1 + 0x38 );
      }

      ( **(code**)( param_1 + 0x48 ) )(*(undefined8*)( param_1 + 0x50 ), lVar3);
      *(undefined8*)( param_1 + 0x38 ) = 0;
      if (iVar1 == 0x71) {
         uVar2 = 0xfffffffd;
      }

   }
 else {
      uVar2 = 0xfffffffe;
   }

   return uVar2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 deflateInit2_(long param_1, uint param_2, int param_3, int param_4, int param_5, uint param_6, char *param_7, int param_8) {
   uint uVar1;
   int iVar2;
   long *plVar3;
   long lVar4;
   undefined8 uVar5;
   int iVar6;
   if (( ( param_7 == (char*)0x0 ) || ( *param_7 != '1' ) ) || ( param_8 != 0x70 )) {
      return 0xfffffffa;
   }

   if (param_1 != 0) {
      *(undefined8*)( param_1 + 0x30 ) = 0;
      if (*(long*)( param_1 + 0x40 ) == 0) {
         *(undefined8*)( param_1 + 0x50 ) = 0;
         *(undefined**)( param_1 + 0x40 ) = &zcalloc;
      }

      if (*(long*)( param_1 + 0x48 ) == 0) {
         *(undefined**)( param_1 + 0x48 ) = &zcfree;
      }

      if (param_2 == 0xffffffff) {
         param_2 = 6;
      }

      if (param_4 < 0) {
         if (param_4 < -0xf) {
            return 0xfffffffe;
         }

         param_4 = -param_4;
         iVar2 = 0;
      }
 else {
         iVar2 = 1;
         if (0xf < param_4) {
            param_4 = param_4 + -0x10;
            iVar2 = 2;
         }

      }

      if (( ( ( param_5 - 1U < 9 ) && ( param_4 - 8U < 8 ) ) && ( ( param_3 == 8 && ( ( param_2 < 10 && ( param_6 < 5 ) ) ) ) ) ) && ( ( param_4 != 8 || ( iVar2 == 1 ) ) )) {
         if (param_4 == 8) {
            param_4 = 9;
         }

         plVar3 = (long*)( **(code**)( param_1 + 0x40 ) )(*(undefined8*)( param_1 + 0x50 ), 1, 0x1740);
         if (plVar3 != (long*)0x0) {
            *(long**)( param_1 + 0x38 ) = plVar3;
            *(int*)( plVar3 + 6 ) = iVar2;
            iVar6 = 1 << ( (byte)param_4 & 0x1f );
            *plVar3 = param_1;
            *(int*)( plVar3 + 10 ) = iVar6;
            *(undefined4*)( plVar3 + 1 ) = 0x2a;
            plVar3[7] = 0;
            *(int*)( (long)plVar3 + 0x54 ) = param_4;
            *(int*)( plVar3 + 0xb ) = iVar6 + -1;
            iVar2 = 1 << ( ( byte )(param_5 + 7) & 0x1f );
            uVar5 = *(undefined8*)( param_1 + 0x50 );
            *(ulong*)( (long)plVar3 + 0x84 ) = CONCAT44(param_5 + 7, iVar2);
            *(ulong*)( (long)plVar3 + 0x8c ) = CONCAT44(( param_5 + 9U ) / 3, iVar2 + -1);
            lVar4 = ( **(code**)( param_1 + 0x40 ) )(uVar5, iVar6, 2);
            uVar5 = *(undefined8*)( param_1 + 0x50 );
            plVar3[0xc] = lVar4;
            lVar4 = ( **(code**)( param_1 + 0x40 ) )(uVar5, (int)plVar3[10], 2);
            uVar5 = *(undefined8*)( param_1 + 0x50 );
            plVar3[0xe] = lVar4;
            lVar4 = ( **(code**)( param_1 + 0x40 ) )(uVar5, *(undefined4*)( (long)plVar3 + 0x84 ), 2);
            uVar5 = *(undefined8*)( param_1 + 0x50 );
            iVar2 = 1 << ( (char)param_5 + 6U & 0x1f );
            plVar3[0xf] = lVar4;
            *(int*)( plVar3 + 0x2e1 ) = iVar2;
            plVar3[0x2e7] = 0;
            lVar4 = ( **(code**)( param_1 + 0x40 ) )(uVar5, iVar2, 4);
            uVar1 = *(uint*)( plVar3 + 0x2e1 );
            plVar3[2] = lVar4;
            plVar3[3] = (ulong)uVar1 * 4;
            uVar5 = _DAT_00104080;
            if (( ( ( plVar3[0xc] != 0 ) && ( plVar3[0xe] != 0 ) ) && ( plVar3[0xf] != 0 ) ) && ( lVar4 != 0 )) {
               *(uint*)( (long)plVar3 + 0xc4 ) = param_2;
               plVar3[0x2e0] = lVar4 + (ulong)uVar1;
               *(uint*)( plVar3 + 0x2e2 ) = uVar1 * 3 + -3;
               *(uint*)( plVar3 + 0x19 ) = param_6;
               *(undefined1*)( plVar3 + 9 ) = 8;
               uVar5 = deflateReset(param_1);
               return uVar5;
            }

            *(undefined4*)( plVar3 + 1 ) = 0x29a;
            *(undefined8*)( param_1 + 0x30 ) = uVar5;
            deflateEnd(param_1);
         }

         return 0xfffffffc;
      }

   }

   return 0xfffffffe;
}
void deflateInit_(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   deflateInit2_(param_1, param_2, 8, 0xf, 8, 0, param_3, param_4);
   return;
}
undefined8 deflateCopy(undefined8 *param_1, undefined8 *param_2) {
   undefined8 *puVar1;
   int iVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   ulong uVar7;
   undefined8 *puVar8;
   undefined8 *puVar9;
   byte bVar10;
   bVar10 = 0;
   iVar2 = deflateStateCheck(param_2);
   if (( param_1 == (undefined8*)0x0 ) || ( iVar2 != 0 )) {
      uVar5 = 0xfffffffe;
   }
 else {
      uVar5 = param_2[1];
      puVar1 = (undefined8*)param_2[7];
      *param_1 = *param_2;
      param_1[1] = uVar5;
      for (int i = 0; i < 6; i++) {
         uVar5 = param_2[( 2*i + 3 )];
         param_1[( 2*i + 2 )] = param_2[( 2*i + 2 )];
         param_1[( 2*i + 3 )] = uVar5;
      }

      puVar3 = (undefined8*)( *(code*)param_1[8] )(param_1[10], 1, 0x1740);
      if (puVar3 != (undefined8*)0x0) {
         param_1[7] = puVar3;
         *puVar3 = *puVar1;
         lVar6 = (long)puVar3 - (long)( ( ulong )(puVar3 + 1) & 0xfffffffffffffff8 );
         puVar3[0x2e7] = puVar1[0x2e7];
         puVar8 = (undefined8*)( (long)puVar1 - lVar6 );
         puVar9 = (undefined8*)( ( ulong )(puVar3 + 1) & 0xfffffffffffffff8 );
         for (uVar7 = ( ulong )((int)lVar6 + 0x1740U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
            puVar9 = puVar9 + (ulong)bVar10 * -2 + 1;
         }

         *puVar3 = param_1;
         uVar4 = ( *(code*)param_1[8] )(param_1[10], *(undefined4*)( puVar3 + 10 ), 2);
         uVar5 = param_1[10];
         puVar3[0xc] = uVar4;
         uVar4 = ( *(code*)param_1[8] )(uVar5, *(undefined4*)( puVar3 + 10 ), 2);
         uVar5 = param_1[10];
         puVar3[0xe] = uVar4;
         uVar4 = ( *(code*)param_1[8] )(uVar5, *(undefined4*)( (long)puVar3 + 0x84 ), 2);
         uVar5 = param_1[10];
         puVar3[0xf] = uVar4;
         lVar6 = ( *(code*)param_1[8] )(uVar5, *(undefined4*)( puVar3 + 0x2e1 ), 4);
         puVar3[2] = lVar6;
         if (( ( ( (void*)puVar3[0xc] != (void*)0x0 ) && ( puVar3[0xe] != 0 ) ) && ( puVar3[0xf] != 0 ) ) && ( lVar6 != 0 )) {
            memcpy((void*)puVar3[0xc], (void*)puVar1[0xc], ( ulong )(uint)(*(int*)( puVar3 + 10 ) * 2));
            memcpy((void*)puVar3[0xe], (void*)puVar1[0xe], ( ulong ) * (uint*)( puVar3 + 10 ) * 2);
            memcpy((void*)puVar3[0xf], (void*)puVar1[0xf], ( ulong ) * (uint*)( (long)puVar3 + 0x84 ) * 2);
            memcpy((void*)puVar3[2], (void*)puVar1[2], ( ulong )(uint)(*(int*)( puVar3 + 0x2e1 ) * 4));
            puVar3[4] = ( puVar1[4] + puVar3[2] ) - puVar1[2];
            puVar3[0x2e0] = puVar3[2] + ( ulong ) * (uint*)( puVar3 + 0x2e1 );
            puVar3[0x16b] = (long)puVar3 + 0xd4;
            puVar3[0x16e] = puVar3 + 0x139;
            puVar3[0x171] = (long)puVar3 + 0xabc;
            return 0;
         }

         deflateEnd(param_1);
      }

      uVar5 = 0xfffffffc;
   }

   return uVar5;
}


undefined8 BIT_reloadDStream_internal(undefined8 *param_1) {
   uint uVar1;
   undefined8 *puVar2;
   uVar1 = *(uint*)( param_1 + 1 );
   *(uint*)( param_1 + 1 ) = uVar1 & 7;
   puVar2 = (undefined8*)( param_1[2] - ( ulong )(uVar1 >> 3) );
   param_1[2] = puVar2;
   *param_1 = *puVar2;
   return 0;
}
void HUF_fillDTableX2ForWeight(undefined8 *param_1, byte *param_2, byte *param_3, int param_4, int param_5, uint param_6, int param_7) {
   undefined8 *puVar1;
   int iVar2;
   undefined8 uVar3;
   ulong uVar4;
   uint uVar5;
   long lVar6;
   uint uVar7;
   uVar5 = 1 << ( ( byte )(param_5 - param_4) & 0x1f );
   uVar7 = param_5 - param_4 & 0x1f;
   if (uVar7 == 2) {
      if (param_2 == param_3) {
         return;
      }

      do {
         uVar5 = ( uint ) * param_2;
         if (param_7 != 1) {
            uVar5 = ( uint ) * param_2 * 0x100 + ( param_6 & 0xffff );
         }

         param_2 = param_2 + 1;
         iVar2 = param_4 * 0x10000 + param_7 * 0x1000000 + uVar5;
         uVar3 = CONCAT44(iVar2, iVar2);
         *param_1 = uVar3;
         param_1[1] = uVar3;
         param_1 = param_1 + 2;
      }
 while ( param_3 != param_2 );
      return;
   }

   if (uVar5 < 5) {
      if (uVar7 == 0) {
         if (param_2 == param_3) {
            return;
         }

         lVar6 = 0;
         do {
            uVar5 = (uint)param_2[lVar6];
            if (param_7 != 1) {
               uVar5 = (uint)param_2[lVar6] * 0x100 + ( param_6 & 0xffff );
            }

            *(uint*)( (long)param_1 + lVar6 * 4 ) = uVar5 + param_4 * 0x10000 + param_7 * 0x1000000;
            lVar6 = lVar6 + 1;
         }
 while ( lVar6 != (long)param_3 - (long)param_2 );
         return;
      }

      if (uVar7 == 1) {
         if (param_2 == param_3) {
            return;
         }

         lVar6 = 0;
         do {
            uVar5 = (uint)param_2[lVar6];
            if (param_7 != 1) {
               uVar5 = (uint)param_2[lVar6] * 0x100 + ( param_6 & 0xffff );
            }

            iVar2 = uVar5 + param_7 * 0x1000000 + param_4 * 0x10000;
            param_1[lVar6] = CONCAT44(iVar2, iVar2);
            lVar6 = lVar6 + 1;
         }
 while ( (long)param_3 - (long)param_2 != lVar6 );
         return;
      }

   }
 else if (uVar7 == 3) {
      if (param_2 == param_3) {
         return;
      }

      do {
         uVar5 = ( uint ) * param_2;
         if (param_7 != 1) {
            uVar5 = ( uint ) * param_2 * 0x100 + ( param_6 & 0xffff );
         }

         param_2 = param_2 + 1;
         iVar2 = param_4 * 0x10000 + param_7 * 0x1000000 + uVar5;
         uVar3 = CONCAT44(iVar2, iVar2);
         *param_1 = uVar3;
         for (int i = 0; i < 3; i++) {
            param_1[( i + 1 )] = uVar3;
         }

         param_1 = param_1 + 4;
      }
 while ( param_3 != param_2 );
      return;
   }

   if (param_2 != param_3) {
      lVar6 = (ulong)uVar5 * 4;
      do {
         uVar5 = ( uint ) * param_2;
         if (param_7 != 1) {
            uVar5 = ( uint ) * param_2 * 0x100 + ( param_6 & 0xffff );
         }

         iVar2 = uVar5 + param_7 * 0x1000000 + param_4 * 0x10000;
         uVar3 = CONCAT44(iVar2, iVar2);
         uVar4 = 0;
         puVar1 = param_1;
         do {
            uVar4 = uVar4 + 1;
            *puVar1 = uVar3;
            for (int i = 0; i < 3; i++) {
               puVar1[( i + 1 )] = uVar3;
            }

            puVar1 = puVar1 + 4;
         }
 while ( uVar4 < ( lVar6 - 0x20U >> 5 ) + 1 );
         param_2 = param_2 + 1;
         param_1 = (undefined8*)( (long)param_1 + lVar6 );
      }
 while ( param_3 != param_2 );
   }

   return;
}
undefined8 HUF_DecompressFastArgs_init(long *param_1, ulong param_2, long param_3, ushort *param_4, ulong param_5, undefined4 *param_6) {
   ulong uVar1;
   long lVar2;
   long lVar3;
   ulong *puVar4;
   int iVar5;
   ulong uVar6;
   byte bVar7;
   byte bVar8;
   ulong uVar9;
   long lVar10;
   long lVar11;
   ulong uVar12;
   uVar1 = param_2 + param_3;
   if (( 0 < param_3 ) || ( uVar1 = param_3 != 0 )) {
      if (param_5 < 10) {
         return 0xffffffffffffffec;
      }

      if ((char)( ( uint ) * param_6 >> 0x10 ) == '\v') {
         uVar12 = ( ulong ) * param_4;
         uVar9 = (ulong)param_4[1];
         uVar6 = (ulong)param_4[2];
         param_1[0xf] = (long)( param_4 + 3 );
         lVar11 = (long)( param_4 + 3 ) + uVar12;
         lVar2 = lVar11 + uVar9;
         param_1[0x10] = lVar11;
         lVar3 = lVar2 + uVar6;
         param_1[0x11] = lVar2;
         param_1[0x12] = lVar3;
         if (( ( ( 7 < uVar12 ) && ( 7 < uVar9 ) ) && ( uVar9 = ( ( ( param_5 - 6 ) - uVar12 ) - uVar9 ) - uVar6 ),7 < uVar6 )) {
            if (param_5 < uVar9) {
               return 0xffffffffffffffec;
            }

            param_1[4] = param_2;
            puVar4 = (ulong*)( (long)param_4 + ( param_5 - 8 ) );
            uVar6 = param_3 + 3U >> 2;
            *param_1 = lVar11 + -8;
            param_1[1] = lVar2 + -8;
            param_1[5] = param_2 + uVar6;
            lVar10 = param_2 + uVar6 + uVar6;
            param_1[6] = lVar10;
            uVar6 = lVar10 + uVar6;
            param_1[2] = lVar3 + -8;
            param_1[3] = (long)puVar4;
            param_1[7] = uVar6;
            if (uVar6 < uVar1) {
               bVar8 = *(byte*)( lVar11 + -1 );
               bVar7 = 0;
               if (bVar8 != 0) {
                  iVar5 = 0x1f;
                  if (bVar8 != 0) {
                     for (; bVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {}
                  }

                  bVar7 = ( (byte)iVar5 ^ 0x1f ) - 0x17;
               }

               bVar8 = 0;
               param_1[8] = ( *(ulong*)( lVar11 + -8 ) | 1 ) << ( bVar7 & 0x3f );
               bVar7 = *(byte*)( lVar2 + -1 );
               if (bVar7 != 0) {
                  iVar5 = 0x1f;
                  if (bVar7 != 0) {
                     for (; bVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {}
                  }

                  bVar8 = ( (byte)iVar5 ^ 0x1f ) - 0x17;
               }

               bVar7 = 0;
               param_1[9] = ( *(ulong*)( lVar2 + -8 ) | 1 ) << ( bVar8 & 0x3f );
               bVar8 = *(byte*)( lVar3 + -1 );
               if (bVar8 != 0) {
                  iVar5 = 0x1f;
                  if (bVar8 != 0) {
                     for (; bVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {}
                  }

                  bVar7 = ( (byte)iVar5 ^ 0x1f ) - 0x17;
               }

               bVar8 = 0;
               param_1[10] = ( *(ulong*)( lVar3 + -8 ) | 1 ) << ( bVar7 & 0x3f );
               bVar7 = *(byte*)( (long)puVar4 + 7 );
               if (bVar7 != 0) {
                  iVar5 = 0x1f;
                  if (bVar7 != 0) {
                     for (; bVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {}
                  }

                  bVar8 = ( (byte)iVar5 ^ 0x1f ) - 0x17;
               }

               uVar6 = *puVar4;
               param_1[0xd] = (long)param_4;
               param_1[0xe] = uVar1;
               param_1[0xc] = (long)( param_6 + 1 );
               param_1[0xb] = ( uVar6 | 1 ) << ( bVar8 & 0x3f );
               return 1;
            }

         }

      }

   }

   return 0;
}
void HUF_decompress4X2_usingDTable_internal_fast_c_loop(undefined8 *param_1) {
   undefined2 *puVar1;
   undefined2 *puVar2;
   undefined2 *puVar3;
   byte bVar4;
   byte bVar5;
   byte bVar6;
   undefined2 uVar7;
   undefined2 uVar8;
   undefined2 uVar9;
   undefined2 uVar10;
   undefined2 uVar11;
   undefined2 uVar12;
   undefined2 uVar13;
   long lVar14;
   long lVar15;
   undefined1 auVar16[16];
   ulong uVar17;
   bool bVar18;
   undefined2 *puVar19;
   ulong uVar20;
   long lVar21;
   undefined2 *puVar22;
   long lVar23;
   ulong uVar24;
   ulong *puVar25;
   ulong uVar26;
   ulong uVar27;
   undefined2 *puVar28;
   ulong uVar29;
   undefined2 *puVar30;
   undefined2 *puVar31;
   ulong uVar32;
   undefined2 *puVar33;
   long in_FS_OFFSET;
   ulong *local_160;
   ulong *local_158;
   ulong *local_150;
   undefined2 *local_148;
   undefined2 *local_140;
   undefined2 *local_138;
   ulong local_c8;
   ulong uStack_c0;
   ulong local_b8;
   ulong uStack_b0;
   ulong *local_a8;
   ulong *puStack_a0;
   ulong *local_98;
   ulong *puStack_90;
   undefined2 *local_88[4];
   undefined2 *local_68[5];
   long local_40;
   local_c8 = param_1[8];
   uStack_c0 = param_1[9];
   local_a8 = (ulong*)*param_1;
   puStack_a0 = (ulong*)param_1[1];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar14 = param_1[0xd];
   local_b8 = param_1[10];
   uStack_b0 = param_1[0xb];
   local_98 = (ulong*)param_1[2];
   puStack_90 = (ulong*)param_1[3];
   uVar29 = param_1[8];
   local_138 = (undefined2*)param_1[4];
   lVar15 = param_1[0xc];
   local_158 = (ulong*)param_1[2];
   uVar27 = param_1[10];
   puVar25 = (ulong*)*param_1;
   bVar18 = false;
   local_88[0] = local_138;
   local_88[1] = (undefined2*)param_1[5];
   local_88[3] = (undefined2*)param_1[7];
   local_88[2] = (undefined2*)param_1[6];
   local_68[3] = (undefined2*)param_1[0xe];
   local_68[2] = local_88[3];
   local_68[0] = (undefined2*)param_1[5];
   local_68[1] = (undefined2*)param_1[6];
   uVar32 = uStack_c0;
   uVar20 = uStack_b0;
   local_160 = puStack_a0;
   local_150 = puStack_90;
   while (true) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (long)puVar25 - lVar14;
      lVar23 = SUB168(ZEXT816(0x2492492492492493) * auVar16, 8);
      lVar21 = 0;
      uVar26 = lVar23 + ( ( ulong )(( (long)puVar25 - lVar14 ) - lVar23) >> 1 ) >> 2;
      do {
         uVar24 = ( ulong )(*(long*)( (long)local_68 + lVar21 ) - *(long*)( (long)local_88 + lVar21 )) / 10;
         if (uVar24 < uVar26) {
            uVar26 = uVar24;
         }

         lVar21 = lVar21 + 8;
      }
 while ( lVar21 != 0x20 );
      puVar19 = (undefined2*)( uVar26 * 5 + (long)local_88[3] );
      if (( ( ( puVar19 == local_88[3] ) || ( local_160 < puVar25 ) ) || ( local_158 < local_160 ) ) || ( local_150 < local_158 )) break;
      local_148 = local_88[1];
      local_140 = local_88[2];
      do {
         puVar33 = local_88[3];
         puVar1 = (undefined2*)( lVar15 + ( uVar29 >> 0x35 ) * 4 );
         bVar4 = *(byte*)( puVar1 + 1 );
         bVar5 = *(byte*)( (long)puVar1 + 3 );
         *local_138 = *puVar1;
         uVar29 = uVar29 << ( (ulong)bVar4 & 0x3f );
         local_138 = (undefined2*)( (ulong)bVar5 + (long)local_138 );
         puVar1 = (undefined2*)( lVar15 + ( uVar32 >> 0x35 ) * 4 );
         bVar4 = *(byte*)( puVar1 + 1 );
         bVar5 = *(byte*)( (long)puVar1 + 3 );
         *local_148 = *puVar1;
         uVar32 = uVar32 << ( (ulong)bVar4 & 0x3f );
         local_148 = (undefined2*)( (ulong)bVar5 + (long)local_148 );
         puVar1 = (undefined2*)( lVar15 + ( uVar27 >> 0x35 ) * 4 );
         bVar4 = *(byte*)( puVar1 + 1 );
         bVar5 = *(byte*)( (long)puVar1 + 3 );
         *local_140 = *puVar1;
         uVar27 = uVar27 << ( (ulong)bVar4 & 0x3f );
         local_140 = (undefined2*)( (ulong)bVar5 + (long)local_140 );
         puVar1 = (undefined2*)( lVar15 + ( uVar29 >> 0x35 ) * 4 );
         bVar4 = *(byte*)( puVar1 + 1 );
         bVar5 = *(byte*)( (long)puVar1 + 3 );
         *local_138 = *puVar1;
         uVar29 = uVar29 << ( (ulong)bVar4 & 0x3f );
         local_138 = (undefined2*)( (ulong)bVar5 + (long)local_138 );
         puVar1 = (undefined2*)( lVar15 + ( uVar32 >> 0x35 ) * 4 );
         bVar4 = *(byte*)( puVar1 + 1 );
         bVar5 = *(byte*)( (long)puVar1 + 3 );
         *local_148 = *puVar1;
         uVar32 = uVar32 << ( (ulong)bVar4 & 0x3f );
         local_148 = (undefined2*)( (ulong)bVar5 + (long)local_148 );
         puVar1 = (undefined2*)( lVar15 + ( uVar27 >> 0x35 ) * 4 );
         bVar4 = *(byte*)( (long)puVar1 + 3 );
         uVar27 = uVar27 << ( ( ulong ) * (byte*)( puVar1 + 1 ) & 0x3f );
         *local_140 = *puVar1;
         local_140 = (undefined2*)( (ulong)bVar4 + (long)local_140 );
         puVar1 = (undefined2*)( lVar15 + ( uVar29 >> 0x35 ) * 4 );
         bVar4 = *(byte*)( (long)puVar1 + 3 );
         uVar29 = uVar29 << ( ( ulong ) * (byte*)( puVar1 + 1 ) & 0x3f );
         *local_138 = *puVar1;
         local_138 = (undefined2*)( (ulong)bVar4 + (long)local_138 );
         puVar1 = (undefined2*)( lVar15 + ( uVar32 >> 0x35 ) * 4 );
         bVar4 = *(byte*)( (long)puVar1 + 3 );
         uVar32 = uVar32 << ( ( ulong ) * (byte*)( puVar1 + 1 ) & 0x3f );
         *local_148 = *puVar1;
         local_148 = (undefined2*)( (ulong)bVar4 + (long)local_148 );
         puVar1 = (undefined2*)( lVar15 + ( uVar27 >> 0x35 ) * 4 );
         bVar4 = *(byte*)( puVar1 + 1 );
         bVar5 = *(byte*)( (long)puVar1 + 3 );
         *local_140 = *puVar1;
         uVar27 = uVar27 << ( (ulong)bVar4 & 0x3f );
         local_140 = (undefined2*)( (ulong)bVar5 + (long)local_140 );
         puVar1 = (undefined2*)( lVar15 + ( uVar29 >> 0x35 ) * 4 );
         bVar4 = *(byte*)( puVar1 + 1 );
         bVar5 = *(byte*)( (long)puVar1 + 3 );
         *local_138 = *puVar1;
         uVar29 = uVar29 << ( (ulong)bVar4 & 0x3f );
         local_138 = (undefined2*)( (ulong)bVar5 + (long)local_138 );
         puVar1 = (undefined2*)( lVar15 + ( uVar32 >> 0x35 ) * 4 );
         bVar4 = *(byte*)( puVar1 + 1 );
         bVar5 = *(byte*)( (long)puVar1 + 3 );
         *local_148 = *puVar1;
         uVar32 = uVar32 << ( (ulong)bVar4 & 0x3f );
         puVar1 = (undefined2*)( (long)local_148 + (ulong)bVar5 );
         puVar2 = (undefined2*)( lVar15 + ( uVar27 >> 0x35 ) * 4 );
         bVar4 = *(byte*)( puVar2 + 1 );
         bVar5 = *(byte*)( (long)puVar2 + 3 );
         *local_140 = *puVar2;
         uVar27 = uVar27 << ( (ulong)bVar4 & 0x3f );
         puVar2 = (undefined2*)( (long)local_140 + (ulong)bVar5 );
         puVar30 = (undefined2*)( lVar15 + ( uVar29 >> 0x35 ) * 4 );
         bVar4 = *(byte*)( puVar30 + 1 );
         bVar5 = *(byte*)( (long)puVar30 + 3 );
         *local_138 = *puVar30;
         local_138 = (undefined2*)( (long)local_138 + (ulong)bVar5 );
         puVar30 = (undefined2*)( lVar15 + ( uVar32 >> 0x35 ) * 4 );
         uVar7 = *puVar30;
         uVar32 = uVar32 << ( ( ulong ) * (byte*)( puVar30 + 1 ) & 0x3f );
         local_148 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar30 + 3 ) + (long)puVar1 );
         *puVar1 = uVar7;
         puVar30 = (undefined2*)( lVar15 + ( uVar27 >> 0x35 ) * 4 );
         uVar8 = *puVar30;
         bVar5 = *(byte*)( puVar30 + 1 );
         bVar6 = *(byte*)( (long)puVar30 + 3 );
         *puVar2 = uVar8;
         uVar27 = uVar27 << ( (ulong)bVar5 & 0x3f );
         local_140 = (undefined2*)( (ulong)bVar6 + (long)puVar2 );
         puVar30 = (undefined2*)( lVar15 + ( uVar20 >> 0x35 ) * 4 );
         uVar9 = *puVar30;
         bVar5 = *(byte*)( (long)puVar30 + 3 );
         uVar20 = uVar20 << ( ( ulong ) * (byte*)( puVar30 + 1 ) & 0x3f );
         *puVar33 = uVar9;
         puVar31 = (undefined2*)( (ulong)bVar5 + (long)puVar33 );
         puVar30 = (undefined2*)( lVar15 + ( uVar20 >> 0x35 ) * 4 );
         uVar10 = *puVar30;
         bVar5 = *(byte*)( (long)puVar30 + 3 );
         uVar20 = uVar20 << ( ( ulong ) * (byte*)( puVar30 + 1 ) & 0x3f );
         *puVar31 = uVar10;
         puVar30 = (undefined2*)( (ulong)bVar5 + (long)puVar31 );
         uVar26 = 0;
         for (uVar29 = uVar29 << ( (ulong)bVar4 & 0x3f ); ( uVar29 & 1 ) == 0; uVar29 = uVar29 >> 1 | 0x8000000000000000) {
            uVar26 = uVar26 + 1;
         }

         uVar24 = 0;
         for (; ( uVar32 & 1 ) == 0; uVar32 = uVar32 >> 1 | 0x8000000000000000) {
            uVar24 = uVar24 + 1;
         }

         local_160 = (ulong*)( (long)local_160 - ( uVar24 >> 3 ) );
         puVar25 = (ulong*)( (long)puVar25 - ( uVar26 >> 3 ) );
         uVar17 = 0;
         for (; ( uVar27 & 1 ) == 0; uVar27 = uVar27 >> 1 | 0x8000000000000000) {
            uVar17 = uVar17 + 1;
         }

         local_158 = (ulong*)( (long)local_158 - ( uVar17 >> 3 ) );
         uVar29 = ( *puVar25 | 1 ) << ( (uint)uVar26 & 7 );
         uVar32 = ( *local_160 | 1 ) << ( (uint)uVar24 & 7 );
         puVar3 = (undefined2*)( lVar15 + ( uVar20 >> 0x35 ) * 4 );
         uVar11 = *puVar3;
         bVar4 = *(byte*)( (long)puVar3 + 3 );
         uVar20 = uVar20 << ( ( ulong ) * (byte*)( puVar3 + 1 ) & 0x3f );
         *puVar30 = uVar11;
         puVar28 = (undefined2*)( (ulong)bVar4 + (long)puVar30 );
         puVar3 = (undefined2*)( lVar15 + ( uVar20 >> 0x35 ) * 4 );
         uVar12 = *puVar3;
         bVar4 = *(byte*)( (long)puVar3 + 3 );
         uVar20 = uVar20 << ( ( ulong ) * (byte*)( puVar3 + 1 ) & 0x3f );
         *puVar28 = uVar12;
         puVar22 = (undefined2*)( (ulong)bVar4 + (long)puVar28 );
         uVar27 = ( *local_158 | 1 ) << ( (uint)uVar17 & 7 );
         puVar3 = (undefined2*)( lVar15 + ( uVar20 >> 0x35 ) * 4 );
         uVar13 = *puVar3;
         bVar4 = *(byte*)( (long)puVar3 + 3 );
         uVar26 = 0;
         for (uVar20 = uVar20 << ( ( ulong ) * (byte*)( puVar3 + 1 ) & 0x3f ); ( uVar20 & 1 ) == 0; uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar26 = uVar26 + 1;
         }

         *puVar22 = uVar13;
         local_88[3] = (undefined2*)( (long)puVar22 + (ulong)bVar4 );
         local_150 = (ulong*)( (long)local_150 - ( uVar26 >> 3 ) );
         uVar20 = ( *local_150 | 1 ) << ( (uint)uVar26 & 7 );
      }
 while ( local_88[3] < puVar19 );
      local_88[0] = local_138;
      *puVar1 = uVar7;
      local_88[1] = local_148;
      *puVar2 = uVar8;
      local_88[2] = local_140;
      *puVar33 = uVar9;
      *puVar31 = uVar10;
      *puVar30 = uVar11;
      bVar18 = true;
      *puVar28 = uVar12;
      *puVar22 = uVar13;
   }
;
   if (bVar18) {
      local_98 = local_158;
      puStack_a0 = local_160;
      puStack_90 = local_150;
      local_c8 = uVar29;
      uStack_c0 = uVar32;
      local_b8 = uVar27;
      uStack_b0 = uVar20;
      local_a8 = puVar25;
   }

   param_1[8] = local_c8;
   param_1[9] = uStack_c0;
   param_1[10] = local_b8;
   param_1[0xb] = uStack_b0;
   *param_1 = local_a8;
   param_1[1] = puStack_a0;
   param_1[2] = local_98;
   param_1[3] = puStack_90;
   param_1[4] = local_138;
   for (int i = 0; i < 3; i++) {
      param_1[( i + 5 )] = local_88[( i + 1 )];
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   local_88[0] = local_138;
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong HUF_decompress4X2_usingDTable_internal_fast(undefined2 *param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long param_5, code *param_6) {
   long *plVar1;
   byte bVar2;
   undefined2 *puVar3;
   ulong uVar4;
   ulong uVar5;
   ulong uVar6;
   undefined2 *puVar7;
   undefined2 *puVar8;
   long *plVar9;
   uint uVar10;
   long lVar11;
   uint uVar12;
   int iVar13;
   ulong *puVar14;
   undefined2 *puVar15;
   ulong uVar16;
   long *plVar17;
   long in_FS_OFFSET;
   ulong local_d8[4];
   ulong local_b8[4];
   ulong local_98[5];
   long *plStack_70;
   ulong local_60[4];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar14 = local_d8;
   puVar15 = (undefined2*)( (long)param_1 + param_2 );
   if ((long)param_2 < 1) {
      puVar15 = param_1;
   }

   uVar5 = HUF_DecompressFastArgs_init(puVar14, param_1, param_2, param_3, param_4, param_5);
   if (( uVar5 < 0xffffffffffffff89 ) && ( uVar5 != 0 )) {
      ( *param_6 )();
      param_5 = param_5 + 4;
      uVar6 = param_2 + 3 >> 2;
      do {
         puVar3 = (undefined2*)puVar14[4];
         uVar5 = (long)puVar15 - (long)param_1;
         param_1 = (undefined2*)( (long)param_1 + uVar6 );
         if (uVar5 < uVar6) {
            param_1 = puVar15;
         }

         if (( param_1 < puVar3 ) || ( plVar9 = (long*)*puVar14 ),plVar9 < (long*)( puVar14[0xf] - 8 )) {
            LAB_00100da8:uVar5 = 0xffffffffffffffec;
            break;
         }

         uVar4 = 0;
         for (uVar5 = puVar14[8]; ( uVar5 & 1 ) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
            uVar4 = uVar4 + 1;
         }

         uVar16 = (long)param_1 - (long)puVar3;
         lVar11 = *plVar9;
         plVar1 = plStack_70 + 1;
         uVar5 = uVar4 & 0xffffffff;
         puVar7 = puVar3;
         if ((long)uVar16 < 8) {
            if (plVar9 < plVar1) {
               if (plVar9 == plStack_70) goto joined_r0x00100fe2;
               uVar5 = uVar4 >> 3 & 0x1fffffff;
               iVar13 = (int)uVar5;
               plVar17 = (long*)( (long)plVar9 - uVar5 );
               if (plVar17 < plStack_70) {
                  iVar13 = (int)( (long)plVar9 - (long)plStack_70 );
                  plVar17 = (long*)( (long)plVar9 - ( (long)plVar9 - (long)plStack_70 & 0xffffffffU ) );
               }

               uVar5 = ( ulong )((uint)uVar4 + iVar13 * -8);
               lVar11 = *plVar17;
               LAB_00100f5d:if (uVar16 < 2) goto LAB_00100ea8;
               plVar9 = plVar17;
               if (0x40 < (uint)uVar5) goto LAB_00100ea3;
            }
 else {
               uVar5 = ( ulong )((uint)uVar4 & 7);
               plVar9 = (long*)( (long)plVar9 - ( uVar4 >> 3 ) );
               lVar11 = *plVar9;
               joined_r0x00100fe2:if ((long)uVar16 < 2) goto LAB_00100ea8;
            }

            LAB_00100df3:do {
               uVar12 = (uint)uVar5;
               if (plVar9 < plVar1) {
                  if (plStack_70 == plVar9) break;
                  plVar17 = (long*)( (long)plVar9 - ( uVar5 >> 3 ) );
                  if (plVar17 < plStack_70) {
                     uVar5 = ( ulong )(uVar12 + (int)( (long)plVar9 - (long)plStack_70 ) * -8);
                     lVar11 = *(long*)( (long)plVar9 - ( (long)plVar9 - (long)plStack_70 & 0xffffffffU ) );
                     if (puVar7 <= param_1 + -1) goto LAB_00100e82;
                     goto LAB_00100ea8;
                  }

                  uVar12 = uVar12 + (int)( uVar5 >> 3 ) * -8;
                  lVar11 = *plVar17;
               }
 else {
                  uVar12 = uVar12 & 7;
                  plVar17 = (long*)( (long)plVar9 - ( uVar5 >> 3 ) );
                  lVar11 = *plVar17;
               }

               uVar5 = (ulong)uVar12;
               if (param_1 + -1 < puVar7) break;
               puVar8 = (undefined2*)( param_5 + ( ( ulong )(lVar11 << ( uVar5 & 0x3f )) >> 0x35 ) * 4 );
               *puVar7 = *puVar8;
               uVar5 = ( ulong )(uVar12 + *(byte*)( puVar8 + 1 ));
               puVar7 = (undefined2*)( (long)puVar7 + ( ulong ) * (byte*)( (long)puVar8 + 3 ) );
               plVar9 = plVar17;
            }
 while ( uVar12 + *(byte*)( puVar8 + 1 ) < 0x41 );
            LAB_00100ea3:for (; puVar7 <= param_1 + -1; puVar7 = (undefined2*)( (long)puVar7 + ( ulong ) * (byte*)( (long)puVar8 + 3 ) )) {
               LAB_00100e82:puVar8 = (undefined2*)( param_5 + ( ( ulong )(lVar11 << ( uVar5 & 0x3f )) >> 0x35 ) * 4 );
               *puVar7 = *puVar8;
               uVar5 = ( ulong )((int)uVar5 + ( uint ) * (byte*)( puVar8 + 1 ));
            }

         }
 else {
            do {
               uVar12 = (uint)uVar5;
               if (plVar9 < plVar1) {
                  if (plVar9 == plStack_70) {
                     plVar9 = plStack_70;
                     if (1 < ( ulong )((long)param_1 - (long)puVar7)) goto LAB_00100df3;
                     goto LAB_00100ea8;
                  }

                  plVar17 = (long*)( (long)plVar9 - ( uVar5 >> 3 ) );
                  if (plStack_70 <= plVar17) {
                     uVar12 = uVar12 + (int)( uVar5 >> 3 ) * -8;
                     lVar11 = *plVar17;
                     goto LAB_00100c92;
                  }

                  uVar10 = (int)plVar9 - (int)plStack_70;
                  plVar17 = (long*)( (long)plVar9 - (ulong)uVar10 );
                  uVar5 = ( ulong )(uVar12 + uVar10 * -8);
                  lVar11 = *plVar17;
                  LAB_00100d97:uVar16 = (long)param_1 - (long)puVar7;
                  goto LAB_00100f5d;
               }

               uVar12 = uVar12 & 7;
               plVar17 = (long*)( (long)plVar9 - ( uVar5 >> 3 ) );
               lVar11 = *plVar17;
               LAB_00100c92:uVar5 = (ulong)uVar12;
               if ((undefined2*)( (long)param_1 - 9U ) <= puVar7) goto LAB_00100d97;
               puVar8 = (undefined2*)( param_5 + ( ( ulong )(lVar11 << ( uVar5 & 0x3f )) >> 0x35 ) * 4 );
               *puVar7 = *puVar8;
               bVar2 = *(byte*)( puVar8 + 1 );
               puVar7 = (undefined2*)( (long)puVar7 + ( ulong ) * (byte*)( (long)puVar8 + 3 ) );
               puVar8 = (undefined2*)( param_5 + ( ( ulong )(lVar11 << ( ( ulong )(uVar12 + bVar2) & 0x3f )) >> 0x35 ) * 4 );
               *puVar7 = *puVar8;
               uVar12 = ( uint ) * (byte*)( puVar8 + 1 ) + uVar12 + bVar2;
               puVar7 = (undefined2*)( (long)puVar7 + ( ulong ) * (byte*)( (long)puVar8 + 3 ) );
               puVar8 = (undefined2*)( param_5 + ( ( ulong )(lVar11 << ( (ulong)uVar12 & 0x3f )) >> 0x35 ) * 4 );
               *puVar7 = *puVar8;
               uVar12 = *(byte*)( puVar8 + 1 ) + uVar12;
               puVar7 = (undefined2*)( (long)puVar7 + ( ulong ) * (byte*)( (long)puVar8 + 3 ) );
               puVar8 = (undefined2*)( param_5 + ( ( ulong )(lVar11 << ( (ulong)uVar12 & 0x3f )) >> 0x35 ) * 4 );
               *puVar7 = *puVar8;
               uVar12 = *(byte*)( puVar8 + 1 ) + uVar12;
               puVar7 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar8 + 3 ) + (long)puVar7 );
               puVar8 = (undefined2*)( param_5 + ( ( ulong )(lVar11 << ( (ulong)uVar12 & 0x3f )) >> 0x35 ) * 4 );
               *puVar7 = *puVar8;
               uVar12 = *(byte*)( puVar8 + 1 ) + uVar12;
               uVar5 = (ulong)uVar12;
               puVar7 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar8 + 3 ) + (long)puVar7 );
               plVar9 = plVar17;
            }
 while ( uVar12 < 0x41 );
            if (1 < ( ulong )((long)param_1 - (long)puVar7)) goto LAB_00100ea3;
         }

         LAB_00100ea8:puVar8 = puVar7;
         if (puVar7 < param_1) {
            puVar8 = (undefined2*)( (long)puVar7 + 1 );
            *(undefined1*)puVar7 = *(undefined1*)( param_5 + ( ( ulong )(lVar11 << ( uVar5 & 0x3f )) >> 0x35 ) * 4 );
         }

         puVar8 = (undefined2*)( (long)puVar8 + ( puVar14[4] - (long)puVar3 ) );
         puVar14[4] = (ulong)puVar8;
         if (puVar8 != param_1) goto LAB_00100da8;
         puVar14 = puVar14 + 1;
         uVar5 = param_2;
      }
 while ( local_b8 != puVar14 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
void HUF_decompress4X1_usingDTable_internal_fast_c_loop(long *param_1) {
   ushort uVar1;
   ushort uVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   ulong uVar9;
   bool bVar10;
   ulong uVar11;
   long lVar12;
   undefined1 *puVar13;
   undefined1 *puVar14;
   ulong *puVar15;
   ulong uVar16;
   ulong uVar17;
   ulong uVar18;
   undefined1 *puVar19;
   undefined1 *puVar20;
   undefined1 *puVar21;
   undefined1 *puVar22;
   ulong uVar23;
   ulong *puVar24;
   ulong uVar25;
   long in_FS_OFFSET;
   ulong *local_108;
   ulong *local_e8;
   undefined1 *local_d8;
   ulong local_a8;
   ulong uStack_a0;
   ulong local_98;
   ulong uStack_90;
   ulong *local_88;
   ulong *puStack_80;
   ulong *local_78;
   ulong *puStack_70;
   undefined1 *local_68;
   undefined1 *puStack_60;
   undefined1 *local_58;
   undefined1 *puStack_50;
   lVar3 = param_1[0xe];
   lVar4 = param_1[0xd];
   local_a8 = param_1[8];
   uStack_a0 = param_1[9];
   local_88 = (ulong*)*param_1;
   puStack_80 = (ulong*)param_1[1];
   lVar5 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (ulong*)param_1[2];
   puStack_70 = (ulong*)param_1[3];
   puVar24 = (ulong*)*param_1;
   local_98 = param_1[10];
   uStack_90 = param_1[0xb];
   local_68 = (undefined1*)param_1[4];
   puStack_60 = (undefined1*)param_1[5];
   lVar6 = param_1[0xc];
   uVar17 = (long)puVar24 - lVar4;
   local_58 = (undefined1*)param_1[6];
   puStack_50 = (undefined1*)param_1[7];
   auVar7._8_8_ = 0;
   auVar7._0_8_ = uVar17;
   lVar12 = SUB168(ZEXT816(0x2492492492492493) * auVar7, 8);
   uVar16 = ( ulong )(lVar3 - (long)puStack_50) / 5;
   uVar17 = lVar12 + ( uVar17 - lVar12 >> 1 ) >> 2;
   if (uVar17 < uVar16) {
      uVar16 = uVar17;
   }

   local_d8 = puStack_50 + uVar16 * 5;
   if (puStack_50 != local_d8) {
      bVar10 = false;
      puVar14 = local_68;
      puVar15 = puStack_80;
      uVar17 = uStack_a0;
      uVar18 = uStack_90;
      uVar11 = local_98;
      puVar19 = puStack_50;
      puVar20 = local_58;
      puVar22 = puStack_60;
      uVar16 = local_a8;
      local_108 = local_78;
      local_e8 = puStack_70;
      do {
         if (( ( puVar15 < puVar24 ) || ( local_108 < puVar15 ) ) || ( puVar13= puVar14,puVar21 = puVar22,local_e8 < local_108 )) {
            if (!bVar10) goto LAB_00101564;
            break;
         }

         do {
            puVar14 = puVar13 + 5;
            puVar22 = puVar21 + 5;
            uVar1 = *(ushort*)( lVar6 + ( uVar16 >> 0x35 ) * 2 );
            *puVar13 = (char)( uVar1 >> 8 );
            uVar16 = uVar16 << ( (ulong)uVar1 & 0x3f );
            uVar1 = *(ushort*)( lVar6 + ( uVar17 >> 0x35 ) * 2 );
            *puVar21 = (char)( uVar1 >> 8 );
            uVar17 = uVar17 << ( (ulong)uVar1 & 0x3f );
            uVar1 = *(ushort*)( lVar6 + ( uVar11 >> 0x35 ) * 2 );
            *puVar20 = (char)( uVar1 >> 8 );
            uVar11 = uVar11 << ( (ulong)uVar1 & 0x3f );
            uVar1 = *(ushort*)( lVar6 + ( uVar18 >> 0x35 ) * 2 );
            *puVar19 = (char)( uVar1 >> 8 );
            uVar18 = uVar18 << ( (ulong)uVar1 & 0x3f );
            uVar1 = *(ushort*)( lVar6 + ( uVar16 >> 0x35 ) * 2 );
            puVar13[1] = (char)( uVar1 >> 8 );
            uVar16 = uVar16 << ( (ulong)uVar1 & 0x3f );
            uVar1 = *(ushort*)( lVar6 + ( uVar17 >> 0x35 ) * 2 );
            uVar17 = uVar17 << ( (ulong)uVar1 & 0x3f );
            puVar21[1] = (char)( uVar1 >> 8 );
            uVar1 = *(ushort*)( lVar6 + ( uVar11 >> 0x35 ) * 2 );
            uVar11 = uVar11 << ( (ulong)uVar1 & 0x3f );
            puVar20[1] = (char)( uVar1 >> 8 );
            uVar1 = *(ushort*)( lVar6 + ( uVar18 >> 0x35 ) * 2 );
            puVar19[1] = (char)( uVar1 >> 8 );
            uVar18 = uVar18 << ( (ulong)uVar1 & 0x3f );
            uVar1 = *(ushort*)( lVar6 + ( uVar16 >> 0x35 ) * 2 );
            uVar16 = uVar16 << ( (ulong)uVar1 & 0x3f );
            puVar13[2] = (char)( uVar1 >> 8 );
            uVar1 = *(ushort*)( lVar6 + ( uVar17 >> 0x35 ) * 2 );
            uVar17 = uVar17 << ( (ulong)uVar1 & 0x3f );
            puVar21[2] = (char)( uVar1 >> 8 );
            uVar1 = *(ushort*)( lVar6 + ( uVar11 >> 0x35 ) * 2 );
            uVar11 = uVar11 << ( (ulong)uVar1 & 0x3f );
            puVar20[2] = (char)( uVar1 >> 8 );
            uVar1 = *(ushort*)( lVar6 + ( uVar18 >> 0x35 ) * 2 );
            uVar18 = uVar18 << ( (ulong)uVar1 & 0x3f );
            puVar19[2] = (char)( uVar1 >> 8 );
            uVar1 = *(ushort*)( lVar6 + ( uVar16 >> 0x35 ) * 2 );
            puVar13[3] = (char)( uVar1 >> 8 );
            uVar16 = uVar16 << ( (ulong)uVar1 & 0x3f );
            uVar1 = *(ushort*)( lVar6 + ( uVar17 >> 0x35 ) * 2 );
            uVar17 = uVar17 << ( (ulong)uVar1 & 0x3f );
            puVar21[3] = (char)( uVar1 >> 8 );
            uVar1 = *(ushort*)( lVar6 + ( uVar11 >> 0x35 ) * 2 );
            uVar11 = uVar11 << ( (ulong)uVar1 & 0x3f );
            puVar20[3] = (char)( uVar1 >> 8 );
            uVar1 = *(ushort*)( lVar6 + ( uVar18 >> 0x35 ) * 2 );
            uVar18 = uVar18 << ( (ulong)uVar1 & 0x3f );
            puVar19[3] = (char)( uVar1 >> 8 );
            uVar1 = *(ushort*)( lVar6 + ( uVar16 >> 0x35 ) * 2 );
            uVar23 = 0;
            for (uVar16 = uVar16 << ( (ulong)uVar1 & 0x3f ); ( uVar16 & 1 ) == 0; uVar16 = uVar16 >> 1 | 0x8000000000000000) {
               uVar23 = uVar23 + 1;
            }

            puVar13[4] = (char)( uVar1 >> 8 );
            uVar1 = *(ushort*)( lVar6 + ( uVar17 >> 0x35 ) * 2 );
            puVar24 = (ulong*)( (long)puVar24 - ( uVar23 >> 3 ) );
            uVar25 = 0;
            for (uVar17 = uVar17 << ( (ulong)uVar1 & 0x3f ); ( uVar17 & 1 ) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
               uVar25 = uVar25 + 1;
            }

            puVar21[4] = (char)( uVar1 >> 8 );
            uVar1 = *(ushort*)( lVar6 + ( uVar11 >> 0x35 ) * 2 );
            puVar15 = (ulong*)( (long)puVar15 - ( uVar25 >> 3 ) );
            puVar20[4] = (char)( uVar1 >> 8 );
            uVar2 = *(ushort*)( lVar6 + ( uVar18 >> 0x35 ) * 2 );
            uVar18 = uVar18 << ( (ulong)uVar2 & 0x3f );
            puVar19[4] = (char)( uVar2 >> 8 );
            uVar16 = ( *puVar24 | 1 ) << ( (uint)uVar23 & 7 );
            puVar19 = puVar19 + 5;
            uVar23 = 0;
            for (uVar11 = uVar11 << ( (ulong)uVar1 & 0x3f ); ( uVar11 & 1 ) == 0; uVar11 = uVar11 >> 1 | 0x8000000000000000) {
               uVar23 = uVar23 + 1;
            }

            uVar9 = 0;
            for (; ( uVar18 & 1 ) == 0; uVar18 = uVar18 >> 1 | 0x8000000000000000) {
               uVar9 = uVar9 + 1;
            }

            puVar20 = puVar20 + 5;
            uVar17 = ( *puVar15 | 1 ) << ( (uint)uVar25 & 7 );
            local_108 = (ulong*)( (long)local_108 - ( uVar23 >> 3 ) );
            uVar11 = ( *local_108 | 1 ) << ( (uint)uVar23 & 7 );
            local_e8 = (ulong*)( (long)local_e8 - ( uVar9 >> 3 ) );
            uVar18 = ( *local_e8 | 1 ) << ( (uint)uVar9 & 7 );
            puVar13 = puVar14;
            puVar21 = puVar22;
         }
 while ( puVar19 < local_d8 );
         uVar25 = (long)puVar24 - lVar4;
         auVar8._8_8_ = 0;
         auVar8._0_8_ = uVar25;
         lVar12 = SUB168(ZEXT816(0x2492492492492493) * auVar8, 8);
         uVar23 = ( ulong )(lVar3 - (long)puVar19) / 5;
         uVar25 = lVar12 + ( uVar25 - lVar12 >> 1 ) >> 2;
         if (uVar25 < uVar23) {
            uVar23 = uVar25;
         }

         local_d8 = puVar19 + uVar23 * 5;
         bVar10 = true;
      }
 while ( puVar19 != local_d8 );
      local_78 = local_108;
      puStack_70 = local_e8;
      local_a8 = uVar16;
      uStack_a0 = uVar17;
      local_98 = uVar11;
      uStack_90 = uVar18;
      local_88 = puVar24;
      puStack_80 = puVar15;
      local_68 = puVar14;
      puStack_60 = puVar22;
      local_58 = puVar20;
      puStack_50 = puVar19;
   }

   LAB_00101564:param_1[8] = local_a8;
   param_1[9] = uStack_a0;
   param_1[10] = local_98;
   param_1[0xb] = uStack_90;
   *param_1 = (long)local_88;
   param_1[1] = (long)puStack_80;
   param_1[2] = (long)local_78;
   param_1[3] = (long)puStack_70;
   param_1[4] = (long)local_68;
   param_1[5] = (long)puStack_60;
   param_1[6] = (long)local_58;
   param_1[7] = (long)puStack_50;
   if (lVar5 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
ulong HUF_decompress4X1_usingDTable_internal_fast(byte *param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long param_5, code *param_6) {
   byte bVar1;
   ulong uVar2;
   uint uVar3;
   ulong uVar4;
   ulong uVar5;
   long lVar6;
   byte *pbVar7;
   byte *pbVar8;
   long *plVar9;
   long *plVar10;
   ulong *puVar11;
   long lVar12;
   byte *pbVar13;
   byte *pbVar14;
   long in_FS_OFFSET;
   ulong local_d8[4];
   ulong local_b8[4];
   ulong local_98[5];
   long *plStack_70;
   ulong local_60[4];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar11 = local_d8;
   pbVar14 = param_1 + param_2;
   if ((long)param_2 < 1) {
      pbVar14 = param_1;
   }

   uVar4 = HUF_DecompressFastArgs_init(puVar11, param_1, param_2, param_3, param_4, param_5);
   if (( uVar4 < 0xffffffffffffff89 ) && ( uVar4 != 0 )) {
      ( *param_6 )();
      param_5 = param_5 + 4;
      uVar5 = param_2 + 3 >> 2;
      do {
         pbVar13 = (byte*)puVar11[4];
         uVar4 = (long)pbVar14 - (long)param_1;
         param_1 = param_1 + uVar5;
         if (uVar4 < uVar5) {
            param_1 = pbVar14;
         }

         if (( param_1 < pbVar13 ) || ( plVar9 = (long*)*puVar11 ),plVar9 < (long*)( puVar11[0xf] - 8 )) {
            LAB_00101898:uVar4 = 0xffffffffffffffec;
            break;
         }

         uVar2 = 0;
         for (uVar4 = puVar11[8]; ( uVar4 & 1 ) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
            uVar2 = uVar2 + 1;
         }

         lVar12 = (long)param_1 - (long)pbVar13;
         lVar6 = *plVar9;
         uVar4 = uVar2 & 0xffffffff;
         if (lVar12 < 4) {
            if (plVar9 < plStack_70 + 1) {
               if (plVar9 != plStack_70) {
                  uVar4 = uVar2 >> 3 & 0x1fffffff;
                  uVar3 = (uint)uVar4;
                  plVar10 = (long*)( (long)plVar9 - uVar4 );
                  if (plVar10 < plStack_70) {
                     uVar3 = (int)plVar9 - (int)plStack_70;
                     plVar10 = (long*)( (long)plVar9 - (ulong)uVar3 );
                  }

                  lVar6 = *plVar10;
                  uVar4 = ( ulong )((uint)uVar2 + uVar3 * -8);
               }

            }
 else {
               lVar6 = *(long*)( (long)plVar9 - ( uVar2 >> 3 ) );
               uVar4 = ( ulong )((uint)uVar2 & 7);
            }

         }
 else {
            pbVar7 = pbVar13;
            do {
               uVar3 = (uint)uVar4;
               pbVar13 = pbVar7;
               if (plVar9 < plStack_70 + 1) {
                  if (plVar9 == plStack_70) break;
                  plVar10 = (long*)( (long)plVar9 - ( uVar4 >> 3 ) );
                  if (plVar10 < plStack_70) {
                     uVar4 = ( ulong )(uVar3 + (int)( (long)plVar9 - (long)plStack_70 ) * -8);
                     lVar6 = *(long*)( (long)plVar9 - ( (long)plVar9 - (long)plStack_70 & 0xffffffffU ) );
                     break;
                  }

                  uVar3 = uVar3 + (int)( uVar4 >> 3 ) * -8;
                  lVar6 = *plVar10;
                  plVar9 = plVar10;
               }
 else {
                  uVar3 = uVar3 & 7;
                  plVar9 = (long*)( (long)plVar9 - ( uVar4 >> 3 ) );
                  lVar6 = *plVar9;
               }

               uVar4 = (ulong)uVar3;
               if (param_1 + -3 <= pbVar7) break;
               pbVar13 = pbVar7 + 4;
               pbVar8 = (byte*)( param_5 + ( ( ulong )(lVar6 << ( uVar4 & 0x3f )) >> 0x35 ) * 2 );
               uVar3 = *pbVar8 + uVar3;
               *pbVar7 = pbVar8[1];
               pbVar8 = (byte*)( param_5 + ( ( ulong )(lVar6 << ( (ulong)uVar3 & 0x3f )) >> 0x35 ) * 2 );
               uVar3 = *pbVar8 + uVar3;
               pbVar7[1] = pbVar8[1];
               pbVar8 = (byte*)( param_5 + ( ( ulong )(lVar6 << ( (ulong)uVar3 & 0x3f )) >> 0x35 ) * 2 );
               uVar3 = *pbVar8 + uVar3;
               pbVar7[2] = pbVar8[1];
               pbVar8 = (byte*)( param_5 + ( ( ulong )(lVar6 << ( (ulong)uVar3 & 0x3f )) >> 0x35 ) * 2 );
               uVar3 = *pbVar8 + uVar3;
               uVar4 = (ulong)uVar3;
               pbVar7[3] = pbVar8[1];
               pbVar7 = pbVar13;
            }
 while ( uVar3 < 0x41 );
         }

         if (pbVar13 < param_1) {
            do {
               pbVar8 = pbVar13 + 1;
               pbVar7 = (byte*)( param_5 + ( ( ulong )(lVar6 << ( uVar4 & 0x3f )) >> 0x35 ) * 2 );
               bVar1 = *pbVar7;
               *pbVar13 = pbVar7[1];
               uVar4 = ( ulong )((int)uVar4 + (uint)bVar1);
               pbVar13 = pbVar8;
            }
 while ( param_1 != pbVar8 );
         }

         pbVar13 = (byte*)( lVar12 + puVar11[4] );
         puVar11[4] = (ulong)pbVar13;
         if (pbVar13 != param_1) goto LAB_00101898;
         puVar11 = puVar11 + 1;
         uVar4 = param_2;
      }
 while ( puVar11 != local_b8 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong HUF_decompress1X1_usingDTable_internal_default(byte *param_1, ulong param_2, ulong *param_3, ulong param_4, long param_5) {
   char cVar1;
   byte *pbVar2;
   byte *pbVar3;
   byte bVar4;
   uint uVar5;
   uint uVar6;
   ulong uVar7;
   byte *pbVar8;
   ulong uVar9;
   int iVar10;
   ulong *puVar11;
   ulong *puVar12;
   pbVar8 = param_1 + param_2;
   if ((long)param_2 < 1) {
      pbVar8 = param_1;
   }

   cVar1 = *(char*)( param_5 + 2 );
   if (param_4 == 0) {
      return 0xffffffffffffffb8;
   }

   bVar4 = *(byte*)( (long)param_3 + ( param_4 - 1 ) );
   param_5 = param_5 + 4;
   puVar12 = param_3;
   if (param_4 < 8) {
      uVar9 = ( ulong )(byte) * param_3;
      switch (param_4) {
         case 7:
      uVar9 = uVar9 + ((ulong)*(byte *)((long)param_3 + 6) << 0x30);
         case 6:
      uVar9 = uVar9 + ((ulong)*(byte *)((long)param_3 + 5) << 0x28);
         case 5:
      uVar9 = uVar9 + ((ulong)*(byte *)((long)param_3 + 4) << 0x20);
         case 4:
      uVar9 = uVar9 + (ulong)*(byte *)((long)param_3 + 3) * 0x1000000;
         case 3:
      uVar9 = uVar9 + (ulong)*(byte *)((long)param_3 + 2) * 0x10000;
         case 2:
      uVar9 = uVar9 + (ulong)*(byte *)((long)param_3 + 1) * 0x100;
      }

      if (bVar4 == 0) {
         return 0xffffffffffffffec;
      }

      uVar6 = 0x1f;
      if (bVar4 != 0) {
         for (; bVar4 >> uVar6 == 0; uVar6 = uVar6 - 1) {}
      }

      uVar7 = ( ulong )(( ( uVar6 ^ 0x1f ) - 0x17 ) + ( 8 - (int)param_4 ) * 8);
      puVar11 = param_3;
      if (3 < (long)pbVar8 - (long)param_1) goto LAB_00101958;
      LAB_00101b01:uVar6 = (uint)uVar7;
      if (pbVar8 <= param_1) goto LAB_00101b40;
      LAB_00101b06:do {
         pbVar3 = param_1 + 1;
         pbVar2 = (byte*)( param_5 + ( ( uVar9 << ( (byte)uVar7 & 0x3f ) ) >> ( -cVar1 & 0x3fU ) ) * 2 );
         bVar4 = *pbVar2;
         *param_1 = pbVar2[1];
         uVar6 = (int)uVar7 + (uint)bVar4;
         uVar7 = (ulong)uVar6;
         param_1 = pbVar3;
      }
 while ( pbVar3 != pbVar8 );
   }
 else {
      if (bVar4 == 0) {
         return 0xffffffffffffffff;
      }

      if (0xffffffffffffff88 < param_4) {
         return param_4;
      }

      uVar6 = 0x1f;
      if (bVar4 != 0) {
         for (; bVar4 >> uVar6 == 0; uVar6 = uVar6 - 1) {}
      }

      param_4 = param_4 - 8;
      puVar11 = (ulong*)( (long)param_3 + param_4 );
      uVar6 = ( uVar6 ^ 0x1f ) - 0x17;
      uVar7 = (ulong)uVar6;
      uVar9 = *puVar11;
      if ((long)pbVar8 - (long)param_1 < 4) {
         if (param_3 + 1 <= puVar11) {
            uVar7 = ( ulong )(uVar6 & 7);
            puVar12 = (ulong*)( (long)puVar11 - ( ulong )(uVar6 >> 3) );
            uVar9 = *puVar12;
            if (pbVar8 <= param_1) {
               return 0xffffffffffffffec;
            }

            goto LAB_00101b06;
         }

         if (param_3 == puVar11) goto LAB_00101b01;
         uVar5 = uVar6 >> 3;
         puVar12 = (ulong*)( (long)puVar11 - (ulong)uVar5 );
         if (puVar12 < param_3) {
            uVar5 = (uint)param_4;
            puVar12 = (ulong*)( (long)puVar11 - ( param_4 & 0xffffffff ) );
         }

         uVar7 = ( ulong )(uVar6 + uVar5 * -8);
         uVar9 = *puVar12;
      }
 else {
         LAB_00101958:bVar4 = -cVar1 & 0x3f;
         pbVar2 = param_1;
         puVar12 = puVar11;
         do {
            uVar6 = (uint)uVar7;
            param_1 = pbVar2;
            if (puVar12 < param_3 + 1) {
               if (param_3 == puVar12) goto LAB_00101b01;
               puVar11 = (ulong*)( (long)puVar12 - ( uVar7 >> 3 ) );
               if (puVar11 < param_3) {
                  uVar5 = (int)puVar12 - (int)param_3;
                  puVar12 = (ulong*)( (long)puVar12 - (ulong)uVar5 );
                  uVar7 = ( ulong )(uVar6 + uVar5 * -8);
                  uVar9 = *puVar12;
                  goto LAB_00101a44;
               }

               uVar9 = *puVar11;
               uVar6 = uVar6 + (int)( uVar7 >> 3 ) * -8;
               puVar12 = puVar11;
            }
 else {
               uVar6 = uVar6 & 7;
               puVar12 = (ulong*)( (long)puVar12 - ( uVar7 >> 3 ) );
               uVar9 = *puVar12;
            }

            uVar7 = (ulong)uVar6;
            if (pbVar8 + -3 <= pbVar2) goto LAB_00101a44;
            param_1 = pbVar2 + 4;
            pbVar3 = (byte*)( param_5 + ( ( uVar9 << ( (byte)uVar6 & 0x3f ) ) >> bVar4 ) * 2 );
            iVar10 = *pbVar3 + uVar6;
            *pbVar2 = pbVar3[1];
            pbVar3 = (byte*)( param_5 + ( ( uVar9 << ( (byte)iVar10 & 0x3f ) ) >> bVar4 ) * 2 );
            iVar10 = ( uint ) * pbVar3 + iVar10;
            pbVar2[1] = pbVar3[1];
            pbVar3 = (byte*)( param_5 + ( ( uVar9 << ( (byte)iVar10 & 0x3f ) ) >> bVar4 ) * 2 );
            iVar10 = ( uint ) * pbVar3 + iVar10;
            pbVar2[2] = pbVar3[1];
            pbVar3 = (byte*)( param_5 + ( ( uVar9 << ( (byte)iVar10 & 0x3f ) ) >> bVar4 ) * 2 );
            uVar6 = ( uint ) * pbVar3 + iVar10;
            uVar7 = (ulong)uVar6;
            pbVar2[3] = pbVar3[1];
            pbVar2 = param_1;
         }
 while ( uVar6 < 0x41 );
         puVar12 = &zeroFilled_0;
      }

      LAB_00101a44:uVar6 = (uint)uVar7;
      if (param_1 < pbVar8) goto LAB_00101b06;
   }

   if (param_3 != puVar12) {
      return 0xffffffffffffffec;
   }

   LAB_00101b40:if (uVar6 != 0x40) {
      return 0xffffffffffffffec;
   }

   return param_2;
}
ulong HUF_decompress1X1_usingDTable_internal_bmi2(byte *param_1, ulong param_2, ulong *param_3, ulong param_4, long param_5) {
   byte bVar1;
   byte bVar2;
   byte *pbVar3;
   byte *pbVar4;
   ulong uVar5;
   uint uVar6;
   ulong uVar7;
   byte *pbVar8;
   ulong *puVar9;
   ulong *puVar10;
   uint uVar11;
   bVar1 = *(byte*)( param_5 + 2 );
   pbVar8 = param_1 + param_2;
   if ((long)param_2 < 1) {
      pbVar8 = param_1;
   }

   if (param_4 == 0) {
      return 0xffffffffffffffb8;
   }

   bVar2 = *(byte*)( (long)param_3 + ( param_4 - 1 ) );
   param_5 = param_5 + 4;
   puVar10 = param_3;
   if (param_4 < 8) {
      uVar5 = ( ulong )(byte) * param_3;
      switch (param_4) {
         case 7:
      uVar5 = uVar5 + ((ulong)*(byte *)((long)param_3 + 6) << 0x30);
         case 6:
      uVar5 = uVar5 + ((ulong)*(byte *)((long)param_3 + 5) << 0x28);
         case 5:
      uVar5 = uVar5 + ((ulong)*(byte *)((long)param_3 + 4) << 0x20);
         case 4:
      uVar5 = uVar5 + (ulong)*(byte *)((long)param_3 + 3) * 0x1000000;
         case 3:
      uVar5 = uVar5 + (ulong)*(byte *)((long)param_3 + 2) * 0x10000;
         case 2:
      uVar5 = uVar5 + (ulong)*(byte *)((long)param_3 + 1) * 0x100;
      }

      if (bVar2 == 0) {
         return 0xffffffffffffffec;
      }

      uVar7 = ( ulong )(uint)(LZCOUNT((uint)bVar2) + -0x17 + ( 8 - (int)param_4 ) * 8);
      puVar9 = param_3;
      if (3 < (long)pbVar8 - (long)param_1) goto LAB_00101c94;
      LAB_00101e36:uVar11 = (uint)uVar7;
      if (pbVar8 <= param_1) goto LAB_00101e6e;
      LAB_00101e3b:do {
         pbVar3 = (byte*)( param_5 + ( ( uVar5 << ( uVar7 & 0x3f ) ) >> ( -(uint)bVar1 & 0x3f ) ) * 2 );
         pbVar4 = param_1 + 1;
         bVar2 = *pbVar3;
         *param_1 = pbVar3[1];
         uVar11 = (int)uVar7 + (uint)bVar2;
         uVar7 = (ulong)uVar11;
         param_1 = pbVar4;
      }
 while ( pbVar4 != pbVar8 );
   }
 else {
      if (bVar2 == 0) {
         return 0xffffffffffffffff;
      }

      if (0xffffffffffffff88 < param_4) {
         return param_4;
      }

      param_4 = param_4 - 8;
      uVar11 = LZCOUNT((uint)bVar2) - 0x17;
      uVar7 = (ulong)uVar11;
      puVar9 = (ulong*)( (long)param_3 + param_4 );
      uVar5 = *puVar9;
      if ((long)pbVar8 - (long)param_1 < 4) {
         if (param_3 + 1 <= puVar9) {
            uVar7 = ( ulong )(uVar11 & 7);
            puVar10 = (ulong*)( (long)puVar9 - ( ulong )(uVar11 >> 3) );
            uVar5 = *puVar10;
            if (pbVar8 <= param_1) {
               return 0xffffffffffffffec;
            }

            goto LAB_00101e3b;
         }

         if (param_3 == puVar9) goto LAB_00101e36;
         uVar6 = uVar11 >> 3;
         puVar10 = (ulong*)( (long)puVar9 - (ulong)uVar6 );
         if (puVar10 < param_3) {
            uVar6 = (uint)param_4;
            puVar10 = (ulong*)( (long)puVar9 - ( param_4 & 0xffffffff ) );
         }

         uVar7 = ( ulong )(uVar11 + uVar6 * -8);
         uVar5 = *puVar10;
      }
 else {
         LAB_00101c94:uVar11 = -(uint)bVar1 & 0x3f;
         pbVar3 = param_1;
         puVar10 = puVar9;
         do {
            uVar6 = (uint)uVar7;
            param_1 = pbVar3;
            if (puVar10 < param_3 + 1) {
               if (param_3 == puVar10) goto LAB_00101e36;
               puVar9 = (ulong*)( (long)puVar10 - ( uVar7 >> 3 ) );
               if (puVar9 < param_3) {
                  uVar11 = (int)puVar10 - (int)param_3;
                  puVar10 = (ulong*)( (long)puVar10 - (ulong)uVar11 );
                  uVar7 = ( ulong )(uVar6 + uVar11 * -8);
                  uVar5 = *puVar10;
                  goto LAB_00101d7d;
               }

               uVar6 = uVar6 + (int)( uVar7 >> 3 ) * -8;
               uVar5 = *puVar9;
               puVar10 = puVar9;
            }
 else {
               uVar6 = uVar6 & 7;
               puVar10 = (ulong*)( (long)puVar10 - ( uVar7 >> 3 ) );
               uVar5 = *puVar10;
            }

            uVar7 = (ulong)uVar6;
            if (pbVar8 + -3 <= pbVar3) goto LAB_00101d7d;
            pbVar4 = (byte*)( param_5 + ( ( uVar5 << ( uVar7 & 0x3f ) ) >> uVar11 ) * 2 );
            param_1 = pbVar3 + 4;
            uVar6 = *pbVar4 + uVar6;
            *pbVar3 = pbVar4[1];
            pbVar4 = (byte*)( param_5 + ( ( uVar5 << ( (ulong)uVar6 & 0x3f ) ) >> uVar11 ) * 2 );
            uVar6 = *pbVar4 + uVar6;
            pbVar3[1] = pbVar4[1];
            pbVar4 = (byte*)( param_5 + ( ( uVar5 << ( (ulong)uVar6 & 0x3f ) ) >> uVar11 ) * 2 );
            uVar6 = *pbVar4 + uVar6;
            pbVar3[2] = pbVar4[1];
            pbVar4 = (byte*)( param_5 + ( ( uVar5 << ( (ulong)uVar6 & 0x3f ) ) >> uVar11 ) * 2 );
            uVar6 = *pbVar4 + uVar6;
            uVar7 = (ulong)uVar6;
            pbVar3[3] = pbVar4[1];
            pbVar3 = param_1;
         }
 while ( uVar6 < 0x41 );
         puVar10 = &zeroFilled_0;
      }

      LAB_00101d7d:uVar11 = (uint)uVar7;
      if (param_1 < pbVar8) goto LAB_00101e3b;
   }

   if (param_3 != puVar10) {
      return 0xffffffffffffffec;
   }

   LAB_00101e6e:if (uVar11 != 0x40) {
      return 0xffffffffffffffec;
   }

   return param_2;
}
ulong HUF_decompress1X2_usingDTable_internal_bmi2(undefined2 *param_1, ulong param_2, ulong *param_3, ulong param_4, long param_5) {
   ulong *puVar1;
   undefined2 *puVar2;
   undefined1 *puVar3;
   byte bVar4;
   int iVar5;
   ulong uVar6;
   ulong uVar7;
   uint uVar8;
   ulong uVar9;
   ulong *puVar10;
   uint uVar11;
   uint uVar12;
   ulong *puVar13;
   undefined2 *puVar14;
   long lVar15;
   ulong uVar16;
   undefined2 *puVar17;
   if (param_4 == 0) {
      return 0xffffffffffffffb8;
   }

   puVar1 = param_3 + 1;
   bVar4 = *(byte*)( (long)param_3 + ( param_4 - 1 ) );
   iVar5 = (int)param_3;
   if (7 < param_4) {
      if (bVar4 == 0) {
         return 0xffffffffffffffff;
      }

      uVar6 = ( ulong )(LZCOUNT((uint)bVar4) - 0x17);
      if (0xffffffffffffff88 < param_4) {
         return param_4;
      }

      puVar10 = (ulong*)( (long)param_3 + ( param_4 - 8 ) );
      uVar11 = ( uint ) * (byte*)( param_5 + 2 );
      uVar9 = *puVar10;
      if (0 < (long)param_2) goto LAB_0010209c;
      LAB_00101f98:uVar7 = uVar6;
      uVar16 = 0;
      puVar17 = param_1;
      LAB_00101f9e:if (puVar10 < puVar1) {
         uVar6 = uVar7;
         if (param_3 != puVar10) {
            uVar12 = ( uint )(uVar7 >> 3);
            puVar13 = (ulong*)( (long)puVar10 - ( uVar7 >> 3 ) );
            if (puVar13 < param_3) {
               uVar12 = (int)puVar10 - iVar5;
               puVar13 = (ulong*)( (long)puVar10 - (ulong)uVar12 );
            }

            uVar6 = ( ulong )((uint)uVar7 + uVar12 * -8);
            uVar9 = *puVar13;
            puVar10 = puVar13;
            goto LAB_00101fdd;
         }

      }
 else {
         uVar6 = ( ulong )((uint)uVar7 & 7);
         puVar10 = (ulong*)( (long)puVar10 - ( uVar7 >> 3 ) );
         uVar9 = *puVar10;
      }

      goto LAB_00102226;
   }

   uVar9 = ( ulong )(byte) * param_3;
   switch (param_4) {
      case 7:
    uVar9 = uVar9 + ((ulong)*(byte *)((long)param_3 + 6) << 0x30);
      case 6:
    uVar9 = uVar9 + ((ulong)*(byte *)((long)param_3 + 5) << 0x28);
      case 5:
    uVar9 = uVar9 + ((ulong)*(byte *)((long)param_3 + 4) << 0x20);
      case 4:
    uVar9 = uVar9 + (ulong)*(byte *)((long)param_3 + 3) * 0x1000000;
      case 3:
    uVar9 = uVar9 + (ulong)*(byte *)((long)param_3 + 2) * 0x10000;
      case 2:
    uVar9 = uVar9 + (ulong)*(byte *)((long)param_3 + 1) * 0x100;
   }

   if (bVar4 == 0) {
      return 0xffffffffffffffec;
   }

   uVar11 = ( uint ) * (byte*)( param_5 + 2 );
   uVar6 = ( ulong )(uint)(LZCOUNT((uint)bVar4) + -0x17 + ( 8 - (int)param_4 ) * 8);
   puVar10 = param_3;
   if ((long)param_2 < 1) goto LAB_00101f98;
   LAB_0010209c:lVar15 = param_5 + 4;
   puVar17 = (undefined2*)( (long)param_1 + param_2 );
   uVar7 = uVar6;
   uVar16 = param_2;
   if (param_2 < 8) goto LAB_00101f9e;
   if (uVar11 < 0xc) {
      uVar12 = -uVar11 & 0x3f;
      do {
         uVar8 = (uint)uVar6;
         if (puVar10 < puVar1) {
            if (param_3 == puVar10) goto LAB_00102220;
            puVar13 = (ulong*)( (long)puVar10 - ( uVar6 >> 3 ) );
            if (puVar13 < param_3) goto LAB_001021cb;
            uVar8 = uVar8 + (int)( uVar6 >> 3 ) * -8;
            uVar9 = *puVar13;
         }
 else {
            uVar8 = uVar8 & 7;
            puVar13 = (ulong*)( (long)puVar10 - ( uVar6 >> 3 ) );
            uVar9 = *puVar13;
         }

         uVar6 = (ulong)uVar8;
         if ((undefined2*)( (long)puVar17 - 9U ) <= param_1) goto LAB_001021df;
         puVar14 = (undefined2*)( lVar15 + ( ( uVar9 << ( uVar6 & 0x3f ) ) >> uVar12 ) * 4 );
         *param_1 = *puVar14;
         bVar4 = *(byte*)( puVar14 + 1 );
         param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar14 + 3 ) + (long)param_1 );
         puVar14 = (undefined2*)( lVar15 + ( ( uVar9 << ( ( ulong )(uVar8 + bVar4) & 0x3f ) ) >> uVar12 ) * 4 );
         *param_1 = *puVar14;
         uVar8 = ( uint ) * (byte*)( puVar14 + 1 ) + uVar8 + bVar4;
         for (int i = 0; i < 3; i++) {
            param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar14 + 3 ) );
            puVar14 = (undefined2*)( lVar15 + ( ( uVar9 << ( (ulong)uVar8 & 63 ) ) >> uVar12 ) * 4 );
            *param_1 = *puVar14;
            uVar8 = *(byte*)( puVar14 + 1 ) + uVar8;
         }

         uVar6 = (ulong)uVar8;
         param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar14 + 3 ) + (long)param_1 );
         puVar10 = puVar13;
      }
 while ( uVar8 < 0x41 );
   }
 else {
      uVar12 = -uVar11 & 0x3f;
      do {
         uVar8 = (uint)uVar6;
         if (puVar10 < puVar1) {
            if (param_3 == puVar10) goto LAB_00102220;
            puVar13 = (ulong*)( (long)puVar10 - ( uVar6 >> 3 ) );
            if (puVar13 < param_3) goto LAB_001021cb;
            uVar8 = uVar8 + (int)( uVar6 >> 3 ) * -8;
            uVar9 = *puVar13;
         }
 else {
            uVar8 = uVar8 & 7;
            puVar13 = (ulong*)( (long)puVar10 - ( uVar6 >> 3 ) );
            uVar9 = *puVar13;
         }

         uVar6 = (ulong)uVar8;
         if ((undefined2*)( (long)puVar17 - 7U ) <= param_1) goto LAB_001021df;
         puVar14 = (undefined2*)( lVar15 + ( ( uVar9 << ( uVar6 & 0x3f ) ) >> uVar12 ) * 4 );
         *param_1 = *puVar14;
         bVar4 = *(byte*)( puVar14 + 1 );
         param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar14 + 3 ) + (long)param_1 );
         puVar14 = (undefined2*)( lVar15 + ( ( uVar9 << ( ( ulong )(bVar4 + uVar8) & 0x3f ) ) >> uVar12 ) * 4 );
         *param_1 = *puVar14;
         uVar8 = ( uint ) * (byte*)( puVar14 + 1 ) + bVar4 + uVar8;
         param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar14 + 3 ) );
         puVar14 = (undefined2*)( lVar15 + ( ( uVar9 << ( (ulong)uVar8 & 0x3f ) ) >> uVar12 ) * 4 );
         *param_1 = *puVar14;
         uVar8 = *(byte*)( puVar14 + 1 ) + uVar8;
         param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar14 + 3 ) );
         puVar14 = (undefined2*)( lVar15 + ( ( uVar9 << ( (ulong)uVar8 & 0x3f ) ) >> uVar12 ) * 4 );
         *param_1 = *puVar14;
         uVar8 = *(byte*)( puVar14 + 1 ) + uVar8;
         uVar6 = (ulong)uVar8;
         param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar14 + 3 ) + (long)param_1 );
         puVar10 = puVar13;
      }
 while ( uVar8 < 0x41 );
   }

   puVar14 = puVar17 + -1;
   if (( ulong )((long)puVar17 - (long)param_1) < 2) {
      puVar10 = &zeroFilled_0;
      goto LAB_001022fb;
   }

   goto LAB_00102000;
   LAB_00102220:uVar16 = (long)puVar17 - (long)param_1;
   LAB_00102226:puVar14 = puVar17 + -1;
   if (uVar16 < 2) goto LAB_001022fb;
   goto LAB_00102234;
   LAB_001021cb:uVar12 = (int)puVar10 - iVar5;
   puVar13 = (ulong*)( (long)puVar10 - (ulong)uVar12 );
   uVar6 = ( ulong )(uVar8 + uVar12 * -8);
   uVar9 = *puVar13;
   LAB_001021df:uVar16 = (long)puVar17 - (long)param_1;
   puVar10 = puVar13;
   LAB_00101fdd:if (uVar16 < 2) goto LAB_001022fb;
   puVar14 = puVar17 + -1;
   if (0x40 < (uint)uVar6) goto LAB_00102000;
   LAB_00102234:do {
      uVar12 = (uint)uVar6;
      if (puVar10 < puVar1) {
         if (param_3 == puVar10) goto LAB_001022bb;
         puVar13 = (ulong*)( (long)puVar10 - ( uVar6 >> 3 ) );
         if (puVar13 < param_3) {
            uVar8 = (int)puVar10 - iVar5;
            puVar10 = (ulong*)( (long)puVar10 - (ulong)uVar8 );
            uVar6 = ( ulong )(uVar12 + uVar8 * -8);
            uVar9 = *puVar10;
            goto LAB_001022bb;
         }

         uVar12 = uVar12 + (int)( uVar6 >> 3 ) * -8;
         uVar9 = *puVar13;
         puVar10 = puVar13;
      }
 else {
         uVar12 = uVar12 & 7;
         puVar10 = (ulong*)( (long)puVar10 - ( uVar6 >> 3 ) );
         uVar9 = *puVar10;
      }

      uVar6 = (ulong)uVar12;
      if (puVar14 < param_1) goto LAB_001022bb;
      puVar2 = (undefined2*)( param_5 + 4 + ( ( uVar9 << ( uVar6 & 0x3f ) ) >> ( -uVar11 & 0x3f ) ) * 4 );
      *param_1 = *puVar2;
      uVar6 = ( ulong )(uVar12 + *(byte*)( puVar2 + 1 ));
      param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar2 + 3 ) );
   }
 while ( uVar12 + *(byte*)( puVar2 + 1 ) < 0x41 );
   LAB_00102000:puVar10 = &zeroFilled_0;
   LAB_001022bb:if (param_1 <= puVar14) {
      do {
         puVar2 = (undefined2*)( param_5 + 4 + ( ( uVar9 << ( uVar6 & 0x3f ) ) >> ( -uVar11 & 0x3f ) ) * 4 );
         *param_1 = *puVar2;
         uVar6 = ( ulong )((int)uVar6 + ( uint ) * (byte*)( puVar2 + 1 ));
         param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar2 + 3 ) );
      }
 while ( param_1 <= puVar14 );
   }

   LAB_001022fb:uVar12 = (uint)uVar6;
   if (param_1 < puVar17) {
      puVar3 = (undefined1*)( param_5 + 4 + ( ( uVar9 << ( uVar6 & 0x3f ) ) >> ( ( ulong ) - uVar11 & 0x3f ) ) * 4 );
      *(undefined1*)param_1 = *puVar3;
      if (puVar3[3] == '\x01') {
         uVar12 = uVar12 + (byte)puVar3[2];
      }
 else if (( uVar12 < 0x40 ) && ( uVar12 = 0x40 < uVar12 )) {
         if (param_3 != puVar10) {
            return 0xffffffffffffffec;
         }

         return param_2;
      }

   }

   if (param_3 != puVar10) {
      return 0xffffffffffffffec;
   }

   if (uVar12 != 0x40) {
      return 0xffffffffffffffec;
   }

   return param_2;
}
ulong HUF_decompress1X2_usingDTable_internal_default(undefined2 *param_1, ulong param_2, ulong *param_3, ulong param_4, long param_5) {
   ulong *puVar1;
   undefined2 *puVar2;
   undefined1 *puVar3;
   byte bVar4;
   int iVar5;
   uint uVar6;
   byte bVar7;
   ulong uVar8;
   ulong *puVar9;
   undefined2 *puVar10;
   byte bVar11;
   uint uVar12;
   ulong uVar13;
   int iVar14;
   ulong *puVar15;
   long lVar16;
   undefined2 *puVar17;
   if (param_4 == 0) {
      return 0xffffffffffffffb8;
   }

   puVar1 = param_3 + 1;
   bVar11 = *(byte*)( (long)param_3 + ( param_4 - 1 ) );
   iVar5 = (int)param_3;
   if (7 < param_4) {
      if (bVar11 == 0) {
         return 0xffffffffffffffff;
      }

      uVar6 = 0x1f;
      if (bVar11 != 0) {
         for (; bVar11 >> uVar6 == 0; uVar6 = uVar6 - 1) {}
      }

      uVar6 = ( uVar6 ^ 0x1f ) - 0x17;
      if (0xffffffffffffff88 < param_4) {
         return param_4;
      }

      puVar9 = (ulong*)( (long)param_3 + ( param_4 - 8 ) );
      bVar11 = *(byte*)( param_5 + 2 );
      uVar13 = *puVar9;
      if (0 < (long)param_2) goto LAB_0010268e;
      LAB_0010258c:uVar8 = 0;
      puVar10 = param_1;
      LAB_00102591:if (puVar9 < puVar1) {
         if (param_3 != puVar9) {
            uVar12 = uVar6 >> 3;
            puVar15 = (ulong*)( (long)puVar9 - (ulong)uVar12 );
            if (puVar15 < param_3) {
               uVar12 = (int)puVar9 - iVar5;
               puVar15 = (ulong*)( (long)puVar9 - (ulong)uVar12 );
            }

            uVar6 = uVar6 + uVar12 * -8;
            uVar13 = *puVar15;
            puVar9 = puVar15;
            goto LAB_001025d0;
         }

      }
 else {
         puVar9 = (ulong*)( (long)puVar9 - ( ulong )(uVar6 >> 3) );
         uVar13 = *puVar9;
         uVar6 = uVar6 & 7;
      }

      goto LAB_00102826;
   }

   uVar13 = ( ulong )(byte) * param_3;
   switch (param_4) {
      case 7:
    uVar13 = uVar13 + ((ulong)*(byte *)((long)param_3 + 6) << 0x30);
      case 6:
    uVar13 = uVar13 + ((ulong)*(byte *)((long)param_3 + 5) << 0x28);
      case 5:
    uVar13 = uVar13 + ((ulong)*(byte *)((long)param_3 + 4) << 0x20);
      case 4:
    uVar13 = uVar13 + (ulong)*(byte *)((long)param_3 + 3) * 0x1000000;
      case 3:
    uVar13 = uVar13 + (ulong)*(byte *)((long)param_3 + 2) * 0x10000;
      case 2:
    uVar13 = uVar13 + (ulong)*(byte *)((long)param_3 + 1) * 0x100;
   }

   if (bVar11 == 0) {
      return 0xffffffffffffffec;
   }

   uVar6 = 0x1f;
   if (bVar11 != 0) {
      for (; bVar11 >> uVar6 == 0; uVar6 = uVar6 - 1) {}
   }

   bVar11 = *(byte*)( param_5 + 2 );
   uVar6 = ( ( uVar6 ^ 0x1f ) - 0x17 ) + ( 8 - (int)param_4 ) * 8;
   puVar9 = param_3;
   if ((long)param_2 < 1) goto LAB_0010258c;
   LAB_0010268e:lVar16 = param_5 + 4;
   puVar10 = (undefined2*)( (long)param_1 + param_2 );
   uVar8 = param_2;
   if (param_2 < 8) goto LAB_00102591;
   if (bVar11 < 0xc) {
      bVar7 = -bVar11 & 0x3f;
      do {
         if (puVar9 < puVar1) {
            if (param_3 == puVar9) goto LAB_00102820;
            puVar15 = (ulong*)( (long)puVar9 - ( ulong )(uVar6 >> 3) );
            if (puVar15 < param_3) goto LAB_001027c8;
            uVar13 = *puVar15;
            uVar6 = uVar6 + ( uVar6 >> 3 ) * -8;
         }
 else {
            puVar15 = (ulong*)( (long)puVar9 - ( ulong )(uVar6 >> 3) );
            uVar13 = *puVar15;
            uVar6 = uVar6 & 7;
         }

         if ((undefined2*)( (long)puVar10 - 9U ) <= param_1) goto LAB_001027db;
         puVar17 = (undefined2*)( lVar16 + ( ( uVar13 << ( (byte)uVar6 & 0x3f ) ) >> bVar7 ) * 4 );
         *param_1 = *puVar17;
         bVar4 = *(byte*)( puVar17 + 1 );
         param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar17 + 3 ) + (long)param_1 );
         puVar17 = (undefined2*)( lVar16 + ( ( uVar13 << ( ( byte )(uVar6 + bVar4) & 0x3f ) ) >> bVar7 ) * 4 );
         *param_1 = *puVar17;
         iVar14 = ( uint ) * (byte*)( puVar17 + 1 ) + uVar6 + bVar4;
         param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar17 + 3 ) );
         puVar17 = (undefined2*)( lVar16 + ( ( uVar13 << ( (byte)iVar14 & 0x3f ) ) >> bVar7 ) * 4 );
         *param_1 = *puVar17;
         iVar14 = ( uint ) * (byte*)( puVar17 + 1 ) + iVar14;
         param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar17 + 3 ) );
         puVar17 = (undefined2*)( lVar16 + ( ( uVar13 << ( (byte)iVar14 & 0x3f ) ) >> bVar7 ) * 4 );
         *param_1 = *puVar17;
         iVar14 = ( uint ) * (byte*)( puVar17 + 1 ) + iVar14;
         param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar17 + 3 ) );
         puVar17 = (undefined2*)( lVar16 + ( ( uVar13 << ( (byte)iVar14 & 0x3f ) ) >> bVar7 ) * 4 );
         *param_1 = *puVar17;
         uVar6 = ( uint ) * (byte*)( puVar17 + 1 ) + iVar14;
         param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar17 + 3 ) + (long)param_1 );
         puVar9 = puVar15;
      }
 while ( uVar6 < 0x41 );
   }
 else {
      bVar7 = -bVar11 & 0x3f;
      do {
         if (puVar9 < puVar1) {
            if (param_3 == puVar9) goto LAB_00102820;
            puVar15 = (ulong*)( (long)puVar9 - ( ulong )(uVar6 >> 3) );
            if (puVar15 < param_3) goto LAB_001027c8;
            uVar13 = *puVar15;
            uVar6 = uVar6 + ( uVar6 >> 3 ) * -8;
         }
 else {
            puVar15 = (ulong*)( (long)puVar9 - ( ulong )(uVar6 >> 3) );
            uVar13 = *puVar15;
            uVar6 = uVar6 & 7;
         }

         if ((undefined2*)( (long)puVar10 - 7U ) <= param_1) goto LAB_001027db;
         puVar17 = (undefined2*)( lVar16 + ( ( uVar13 << ( (byte)uVar6 & 0x3f ) ) >> bVar7 ) * 4 );
         *param_1 = *puVar17;
         bVar4 = *(byte*)( puVar17 + 1 );
         param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar17 + 3 ) + (long)param_1 );
         puVar17 = (undefined2*)( lVar16 + ( ( uVar13 << ( ( byte )(bVar4 + uVar6) & 0x3f ) ) >> bVar7 ) * 4 );
         *param_1 = *puVar17;
         iVar14 = ( uint ) * (byte*)( puVar17 + 1 ) + bVar4 + uVar6;
         param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar17 + 3 ) );
         puVar17 = (undefined2*)( lVar16 + ( ( uVar13 << ( (byte)iVar14 & 0x3f ) ) >> bVar7 ) * 4 );
         *param_1 = *puVar17;
         iVar14 = ( uint ) * (byte*)( puVar17 + 1 ) + iVar14;
         param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar17 + 3 ) );
         puVar17 = (undefined2*)( lVar16 + ( ( uVar13 << ( (byte)iVar14 & 0x3f ) ) >> bVar7 ) * 4 );
         *param_1 = *puVar17;
         uVar6 = ( uint ) * (byte*)( puVar17 + 1 ) + iVar14;
         param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar17 + 3 ) + (long)param_1 );
         puVar9 = puVar15;
      }
 while ( uVar6 < 0x41 );
   }

   puVar17 = puVar10 + -1;
   if (( ulong )((long)puVar10 - (long)param_1) < 2) {
      puVar9 = &zeroFilled_0;
      goto LAB_001028fd;
   }

   goto LAB_001025f0;
   LAB_00102820:uVar8 = (long)puVar10 - (long)param_1;
   LAB_00102826:puVar17 = puVar10 + -1;
   if (uVar8 < 2) goto LAB_001028fd;
   goto LAB_00102834;
   LAB_001027c8:uVar12 = (int)puVar9 - iVar5;
   puVar15 = (ulong*)( (long)puVar9 - (ulong)uVar12 );
   uVar6 = uVar6 + uVar12 * -8;
   uVar13 = *puVar15;
   LAB_001027db:uVar8 = (long)puVar10 - (long)param_1;
   puVar9 = puVar15;
   LAB_001025d0:if (uVar8 < 2) goto LAB_001028fd;
   puVar17 = puVar10 + -1;
   if (0x40 < uVar6) goto LAB_001025f0;
   LAB_00102834:do {
      if (puVar9 < puVar1) {
         if (param_3 == puVar9) goto LAB_001028bb;
         puVar15 = (ulong*)( (long)puVar9 - ( ulong )(uVar6 >> 3) );
         if (puVar15 < param_3) {
            uVar12 = (int)puVar9 - iVar5;
            puVar9 = (ulong*)( (long)puVar9 - (ulong)uVar12 );
            uVar6 = uVar6 + uVar12 * -8;
            uVar13 = *puVar9;
            goto LAB_001028bb;
         }

         uVar13 = *puVar15;
         puVar9 = puVar15;
         uVar6 = uVar6 + ( uVar6 >> 3 ) * -8;
      }
 else {
         puVar9 = (ulong*)( (long)puVar9 - ( ulong )(uVar6 >> 3) );
         uVar13 = *puVar9;
         uVar6 = uVar6 & 7;
      }

      if (puVar17 < param_1) goto LAB_001028bb;
      puVar2 = (undefined2*)( param_5 + 4 + ( ( uVar13 << ( (byte)uVar6 & 0x3f ) ) >> ( -bVar11 & 0x3f ) ) * 4 );
      *param_1 = *puVar2;
      uVar6 = uVar6 + *(byte*)( puVar2 + 1 );
      param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar2 + 3 ) );
   }
 while ( uVar6 < 0x41 );
   LAB_001025f0:puVar9 = &zeroFilled_0;
   LAB_001028bb:if (param_1 <= puVar17) {
      do {
         puVar2 = (undefined2*)( param_5 + 4 + ( ( uVar13 << ( (byte)uVar6 & 0x3f ) ) >> ( -bVar11 & 0x3f ) ) * 4 );
         *param_1 = *puVar2;
         uVar6 = uVar6 + *(byte*)( puVar2 + 1 );
         param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar2 + 3 ) );
      }
 while ( param_1 <= puVar17 );
   }

   LAB_001028fd:if (param_1 < puVar10) {
      puVar3 = (undefined1*)( param_5 + 4 + ( ( uVar13 << ( (byte)uVar6 & 0x3f ) ) >> ( -bVar11 & 0x3f ) ) * 4 );
      *(undefined1*)param_1 = *puVar3;
      if (puVar3[3] == '\x01') {
         uVar6 = uVar6 + (byte)puVar3[2];
      }
 else if (( uVar6 < 0x40 ) && ( uVar6 = 0x40 < uVar6 )) {
         if (param_3 != puVar9) {
            return 0xffffffffffffffec;
         }

         return param_2;
      }

   }

   if (param_3 != puVar9) {
      return 0xffffffffffffffec;
   }

   if (uVar6 != 0x40) {
      return 0xffffffffffffffec;
   }

   return param_2;
}
ulong HUF_decompress4X1_usingDTable_internal_bmi2(byte *param_1, ulong param_2, ushort *param_3, ulong param_4, uint *param_5) {
   ulong *puVar1;
   ulong *puVar2;
   byte *pbVar3;
   byte *pbVar4;
   byte *pbVar5;
   byte *pbVar6;
   byte bVar7;
   bool bVar8;
   bool bVar9;
   bool bVar10;
   ulong *puVar11;
   ulong *puVar12;
   ulong *puVar13;
   ulong uVar14;
   long lVar15;
   byte *pbVar16;
   byte *pbVar17;
   ulong uVar18;
   uint uVar19;
   ulong uVar20;
   ulong *puVar21;
   byte *pbVar22;
   byte *pbVar23;
   ulong *puVar24;
   byte *pbVar25;
   byte *pbVar26;
   bool bVar27;
   ulong *puVar28;
   ulong *puVar29;
   uint *puVar30;
   byte *pbVar31;
   ulong *puVar32;
   uint uVar33;
   uint uVar34;
   int iVar35;
   ulong uVar36;
   byte *pbVar37;
   byte *pbVar38;
   byte *pbVar39;
   uint uVar40;
   ulong uVar41;
   ulong *puVar42;
   long in_FS_OFFSET;
   ulong local_180;
   ulong *local_178;
   ulong *local_158;
   ulong *local_140;
   ulong local_138;
   ulong *local_130;
   ulong local_f8;
   uint local_f0;
   ulong *local_e8;
   ulong *local_e0;
   ulong *local_d8;
   ulong local_c8;
   uint local_c0;
   ulong *local_b8;
   ulong *local_b0;
   ulong *local_a8;
   ulong local_98;
   uint local_90;
   ulong *local_88;
   ulong *local_80;
   ulong *local_78;
   ulong local_68;
   uint local_60;
   ulong *local_58;
   ulong *local_50;
   ulong *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( 9 < param_4 ) && ( 5 < param_2 )) {
      pbVar4 = param_1 + param_2;
      uVar18 = ( ulong ) * param_3;
      uVar14 = (ulong)param_3[1];
      uVar36 = (ulong)param_3[2];
      uVar41 = param_2 + 3 >> 2;
      lVar15 = ( param_4 - ( uVar18 + uVar14 ) ) - uVar36;
      pbVar23 = param_1 + uVar41;
      pbVar16 = pbVar23 + uVar41;
      uVar20 = lVar15 - 6;
      pbVar17 = pbVar16 + uVar41;
      bVar27 = param_4 < uVar20 || pbVar4 < pbVar17;
      if (param_4 >= uVar20 && pbVar4 >= pbVar17) {
         if (uVar18 == 0) goto LAB_00103350;
         puVar1 = (ulong*)( param_3 + 3 );
         local_d8 = (ulong*)( param_3 + 7 );
         bVar7 = *(byte*)( (long)param_3 + uVar18 + 5 );
         local_e0 = puVar1;
         if (7 < uVar18) {
            local_e8 = (ulong*)( (long)param_3 + ( uVar18 - 2 ) );
            local_f8 = *local_e8;
            if (bVar7 != 0) {
               local_f0 = LZCOUNT((uint)bVar7) - 0x17;
               goto LAB_00102c86;
            }

            LAB_001031d0:uVar20 = 0xffffffffffffffff;
            goto LAB_00102beb;
         }

         local_f8 = (ulong)(byte)param_3[3];
         switch (uVar18) {
            case 7:
        local_f8 = local_f8 + ((ulong)(byte)param_3[6] << 0x30);
            case 6:
        local_f8 = local_f8 + ((ulong)*(byte *)((long)param_3 + 0xb) << 0x28);
            case 5:
        local_f8 = local_f8 + ((ulong)(byte)param_3[5] << 0x20);
            case 4:
        local_f8 = local_f8 + (ulong)*(byte *)((long)param_3 + 9) * 0x1000000;
            case 3:
        local_f8 = local_f8 + (ulong)(byte)param_3[4] * 0x10000;
            case 2:
        local_f8 = (ulong)*(byte *)((long)param_3 + 7) * 0x100 + local_f8;
         }

         local_e8 = puVar1;
         if (bVar7 == 0) goto LAB_00102be4;
         local_f0 = LZCOUNT((uint)bVar7) + -0x17 + ( 8 - ( uint ) * param_3 ) * 8;
         LAB_00102c86:if (uVar14 != 0) {
            puVar11 = (ulong*)( (long)puVar1 + uVar18 );
            puVar32 = puVar11 + 1;
            bVar7 = *(byte*)( (long)puVar11 + ( uVar14 - 1 ) );
            local_b0 = puVar11;
            local_a8 = puVar32;
            if (uVar14 < 8) {
               local_c8 = ( ulong )(byte) * puVar11;
               switch (uVar14) {
                  case 7:
            local_c8 = local_c8 + ((ulong)*(byte *)((long)puVar11 + 6) << 0x30);
                  case 6:
            local_c8 = local_c8 + ((ulong)*(byte *)((long)puVar11 + 5) << 0x28);
                  case 5:
            local_c8 = local_c8 + ((ulong)*(byte *)((long)puVar11 + 4) << 0x20);
                  case 4:
            local_c8 = local_c8 + (ulong)*(byte *)((long)puVar11 + 3) * 0x1000000;
                  case 3:
            local_c8 = local_c8 + (ulong)*(byte *)((long)puVar11 + 2) * 0x10000;
                  case 2:
            local_c8 = (ulong)*(byte *)((long)puVar11 + 1) * 0x100 + local_c8;
               }

               local_b8 = puVar11;
               if (bVar7 == 0) goto LAB_00102be4;
               local_c0 = LZCOUNT((uint)bVar7) + -0x17 + ( 8 - (uint)param_3[1] ) * 8;
            }
 else {
               local_b8 = (ulong*)( (long)puVar11 + ( uVar14 - 8 ) );
               local_c8 = *local_b8;
               if (bVar7 == 0) goto LAB_001031d0;
               local_c0 = LZCOUNT((uint)bVar7) - 0x17;
            }

            if (uVar36 != 0) {
               puVar12 = (ulong*)( (long)puVar11 + uVar14 );
               puVar24 = puVar12 + 1;
               bVar7 = *(byte*)( (long)puVar12 + ( uVar36 - 1 ) );
               local_80 = puVar12;
               local_78 = puVar24;
               if (uVar36 < 8) {
                  local_98 = ( ulong )(byte) * puVar12;
                  switch (uVar36) {
                     case 7:
              local_98 = local_98 + ((ulong)*(byte *)((long)puVar12 + 6) << 0x30);
                     case 6:
              local_98 = local_98 + ((ulong)*(byte *)((long)puVar12 + 5) << 0x28);
                     case 5:
              local_98 = local_98 + ((ulong)*(byte *)((long)puVar12 + 4) << 0x20);
                     case 4:
              local_98 = local_98 + (ulong)*(byte *)((long)puVar12 + 3) * 0x1000000;
                     case 3:
              local_98 = local_98 + (ulong)*(byte *)((long)puVar12 + 2) * 0x10000;
                     case 2:
              local_98 = (ulong)*(byte *)((long)puVar12 + 1) * 0x100 + local_98;
                  }

                  local_88 = puVar12;
                  if (bVar7 == 0) goto LAB_00102be4;
                  local_90 = LZCOUNT((uint)bVar7) + -0x17 + ( 8 - (uint)param_3[2] ) * 8;
               }
 else {
                  local_88 = (ulong*)( (long)puVar12 + ( uVar36 - 8 ) );
                  local_98 = *local_88;
                  if (bVar7 == 0) goto LAB_001031d0;
                  local_90 = LZCOUNT((uint)bVar7) - 0x17;
               }

               if (uVar20 != 0) {
                  puVar13 = (ulong*)( (long)puVar12 + uVar36 );
                  puVar2 = puVar13 + 1;
                  bVar7 = *(byte*)( (long)puVar13 + lVar15 + -7 );
                  local_50 = puVar13;
                  local_48 = puVar2;
                  if (uVar20 < 8) {
                     local_68 = ( ulong )(byte) * puVar13;
                     switch (uVar20) {
                        case 7:
                local_68 = local_68 + ((ulong)*(byte *)((long)puVar13 + 6) << 0x30);
                        case 6:
                local_68 = local_68 + ((ulong)*(byte *)((long)puVar13 + 5) << 0x28);
                        case 5:
                local_68 = local_68 + ((ulong)*(byte *)((long)puVar13 + 4) << 0x20);
                        case 4:
                local_68 = local_68 + (ulong)*(byte *)((long)puVar13 + 3) * 0x1000000;
                        case 3:
                local_68 = local_68 + (ulong)*(byte *)((long)puVar13 + 2) * 0x10000;
                        case 2:
                local_68 = (ulong)*(byte *)((long)puVar13 + 1) * 0x100 + local_68;
                     }

                     local_58 = puVar13;
                     if (bVar7 == 0) goto LAB_00102be4;
                     local_60 = LZCOUNT((uint)bVar7) + -0x17 + ( 8 - (int)uVar20 ) * 8;
                  }
 else {
                     local_58 = (ulong*)( (long)puVar13 + lVar15 + -0xe );
                     local_68 = *local_58;
                     if (bVar7 == 0) goto LAB_001031d0;
                     local_60 = LZCOUNT((uint)bVar7) - 0x17;
                     if (0xffffffffffffff88 < uVar20) goto LAB_00102beb;
                  }

                  puVar30 = param_5 + 1;
                  pbVar3 = pbVar4 + -3;
                  uVar33 = *param_5 >> 0x10 & 0xff;
                  pbVar22 = pbVar16;
                  pbVar26 = pbVar17;
                  pbVar38 = pbVar23;
                  if (( 7 < (long)pbVar4 - (long)pbVar17 ) && ( pbVar17 < pbVar3 )) {
                     bVar9 = false;
                     bVar10 = false;
                     local_138 = local_68;
                     bVar8 = false;
                     local_140 = local_e8;
                     local_180 = local_98;
                     local_130 = local_b8;
                     local_158 = local_88;
                     local_178 = local_58;
                     uVar14 = ( ulong )(-uVar33 & 0x3f);
                     uVar20 = local_f8;
                     pbVar39 = pbVar16;
                     pbVar25 = pbVar17;
                     pbVar31 = param_1;
                     uVar18 = local_c8;
                     pbVar37 = pbVar23;
                     do {
                        pbVar5 = (byte*)( (long)puVar30 + ( ( uVar20 << ( (ulong)local_f0 & 0x3f ) ) >> uVar14 ) * 2 );
                        param_1 = pbVar31 + 4;
                        bVar7 = *pbVar5;
                        pbVar38 = pbVar37 + 4;
                        pbVar22 = pbVar39 + 4;
                        pbVar26 = pbVar25 + 4;
                        *pbVar31 = pbVar5[1];
                        pbVar5 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)local_c0 & 0x3f ) ) >> uVar14 ) * 2 );
                        local_f0 = bVar7 + local_f0;
                        bVar7 = *pbVar5;
                        *pbVar37 = pbVar5[1];
                        local_c0 = bVar7 + local_c0;
                        pbVar5 = (byte*)( (long)puVar30 + ( ( local_180 << ( (ulong)local_90 & 0x3f ) ) >> uVar14 ) * 2 );
                        bVar7 = *pbVar5;
                        *pbVar39 = pbVar5[1];
                        pbVar5 = (byte*)( (long)puVar30 + ( ( local_138 << ( (ulong)local_60 & 0x3f ) ) >> uVar14 ) * 2 );
                        local_90 = bVar7 + local_90;
                        bVar7 = *pbVar5;
                        *pbVar25 = pbVar5[1];
                        local_60 = bVar7 + local_60;
                        pbVar5 = (byte*)( (long)puVar30 + ( ( uVar20 << ( (ulong)local_f0 & 0x3f ) ) >> uVar14 ) * 2 );
                        bVar7 = *pbVar5;
                        pbVar31[1] = pbVar5[1];
                        pbVar5 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)local_c0 & 0x3f ) ) >> uVar14 ) * 2 );
                        local_f0 = bVar7 + local_f0;
                        local_c0 = *pbVar5 + local_c0;
                        pbVar6 = (byte*)( (long)puVar30 + ( ( local_180 << ( (ulong)local_90 & 0x3f ) ) >> uVar14 ) * 2 );
                        pbVar37[1] = pbVar5[1];
                        bVar7 = *pbVar6;
                        pbVar39[1] = pbVar6[1];
                        local_90 = bVar7 + local_90;
                        pbVar5 = (byte*)( (long)puVar30 + ( ( local_138 << ( (ulong)local_60 & 0x3f ) ) >> uVar14 ) * 2 );
                        local_60 = *pbVar5 + local_60;
                        pbVar6 = (byte*)( (long)puVar30 + ( ( uVar20 << ( (ulong)local_f0 & 0x3f ) ) >> uVar14 ) * 2 );
                        pbVar25[1] = pbVar5[1];
                        bVar7 = *pbVar6;
                        pbVar31[2] = pbVar6[1];
                        local_f0 = bVar7 + local_f0;
                        pbVar5 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)local_c0 & 0x3f ) ) >> uVar14 ) * 2 );
                        bVar7 = *pbVar5;
                        pbVar37[2] = pbVar5[1];
                        local_c0 = bVar7 + local_c0;
                        pbVar5 = (byte*)( (long)puVar30 + ( ( local_180 << ( (ulong)local_90 & 0x3f ) ) >> uVar14 ) * 2 );
                        local_90 = *pbVar5 + local_90;
                        pbVar6 = (byte*)( (long)puVar30 + ( ( local_138 << ( (ulong)local_60 & 0x3f ) ) >> uVar14 ) * 2 );
                        pbVar39[2] = pbVar5[1];
                        bVar7 = *pbVar6;
                        pbVar25[2] = pbVar6[1];
                        local_60 = bVar7 + local_60;
                        pbVar5 = (byte*)( (long)puVar30 + ( ( uVar20 << ( (ulong)local_f0 & 0x3f ) ) >> uVar14 ) * 2 );
                        uVar40 = *pbVar5 + local_f0;
                        pbVar6 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)local_c0 & 0x3f ) ) >> uVar14 ) * 2 );
                        pbVar31[3] = pbVar5[1];
                        bVar7 = *pbVar6;
                        pbVar37[3] = pbVar6[1];
                        local_c0 = bVar7 + local_c0;
                        pbVar31 = (byte*)( (long)puVar30 + ( ( local_180 << ( (ulong)local_90 & 0x3f ) ) >> uVar14 ) * 2 );
                        local_90 = *pbVar31 + local_90;
                        pbVar37 = (byte*)( (long)puVar30 + ( ( local_138 << ( (ulong)local_60 & 0x3f ) ) >> uVar14 ) * 2 );
                        pbVar39[3] = pbVar31[1];
                        bVar7 = *pbVar37;
                        pbVar25[3] = pbVar37[1];
                        uVar19 = bVar7 + local_60;
                        if (local_140 < local_d8) {
                           iVar35 = 3;
                           local_f0 = uVar40;
                        }
 else {
                           bVar27 = true;
                           local_f0 = uVar40 & 7;
                           local_140 = (ulong*)( (long)local_140 - ( ulong )(uVar40 >> 3) );
                           uVar20 = *local_140;
                           iVar35 = 0;
                        }

                        if (local_130 < puVar32) {
                           iVar35 = 3;
                        }
 else {
                           bVar9 = true;
                           local_130 = (ulong*)( (long)local_130 - ( ulong )(local_c0 >> 3) );
                           uVar18 = *local_130;
                           local_c0 = local_c0 & 7;
                        }

                        if (local_158 < puVar24) {
                           iVar35 = 3;
                        }
 else {
                           bVar10 = true;
                           local_158 = (ulong*)( (long)local_158 - ( ulong )(local_90 >> 3) );
                           local_180 = *local_158;
                           local_90 = local_90 & 7;
                        }

                        if (local_178 < puVar2) {
                           if (bVar27) {
                              local_e8 = local_140;
                              local_f8 = uVar20;
                           }

                           if (bVar9) {
                              local_b8 = local_130;
                              local_c8 = uVar18;
                           }

                           if (bVar10) {
                              local_98 = local_180;
                              local_88 = local_158;
                           }

                           local_60 = uVar19;
                           if (bVar8) goto LAB_00103d01;
                           goto LAB_001034fd;
                        }

                        local_60 = uVar19 & 7;
                        local_178 = (ulong*)( (long)local_178 - ( ulong )(uVar19 >> 3) );
                        local_138 = *local_178;
                        bVar8 = iVar35 == 0 && pbVar26 < pbVar3;
                        pbVar39 = pbVar22;
                        pbVar25 = pbVar26;
                        pbVar31 = param_1;
                        pbVar37 = pbVar38;
                     }
 while ( iVar35 == 0 && pbVar26 < pbVar3 );
                     if (bVar27) {
                        local_e8 = local_140;
                        local_f8 = uVar20;
                     }

                     if (bVar9) {
                        local_b8 = local_130;
                        local_c8 = uVar18;
                     }

                     if (bVar10) {
                        local_88 = local_158;
                        local_98 = local_180;
                     }

                     LAB_00103d01:local_58 = local_178;
                     local_68 = local_138;
                  }

                  LAB_001034fd:bVar27 = ( pbVar16 < pbVar38 || pbVar23 < param_1 ) || pbVar17 < pbVar22;
                  uVar20 = (ulong)bVar27;
                  if (bVar27) goto LAB_00102be4;
                  uVar18 = local_f8;
                  pbVar39 = param_1;
                  uVar19 = local_f0;
                  if ((long)pbVar23 - (long)param_1 < 4) {
                     if (0x40 < local_f0) goto LAB_00103e9c;
                     if (local_e8 < local_d8) {
                        puVar28 = local_e8;
                        uVar14 = local_f8;
                        uVar40 = local_f0;
                        puVar29 = local_e8;
                        if (puVar1 != local_e8) {
                           uVar19 = local_f0 >> 3;
                           uVar18 = (ulong)uVar19;
                           if ((ulong*)( (long)local_e8 - uVar18 ) < puVar1) {
                              uVar19 = (int)local_e8 - (int)puVar1;
                              uVar18 = (ulong)uVar19;
                           }

                           puVar28 = (ulong*)( (long)local_e8 - uVar18 );
                           uVar14 = *puVar28;
                           uVar40 = local_f0 + uVar19 * -8;
                           puVar29 = puVar28;
                        }

                     }
 else {
                        BIT_reloadDStream_internal(&local_f8);
                        pbVar39 = param_1;
                        puVar28 = local_e8;
                        uVar14 = local_f8;
                        uVar40 = local_f0;
                        puVar29 = local_e8;
                     }

                  }
 else {
                     if (local_f0 < 0x41) {
                        bVar27 = false;
                        uVar34 = -uVar33 & 0x3f;
                        puVar42 = local_e8;
                        do {
                           if (puVar42 < local_d8) {
                              if (puVar1 == puVar42) {
                                 puVar28 = local_e8;
                                 uVar14 = local_f8;
                                 uVar40 = local_f0;
                                 puVar29 = local_e8;
                                 if (bVar27) {
                                    puVar28 = puVar42;
                                    uVar14 = uVar18;
                                    uVar40 = uVar19;
                                    puVar29 = puVar1;
                                 }

                                 goto LAB_0010367e;
                              }

                              puVar28 = (ulong*)( (long)puVar42 - ( ulong )(uVar19 >> 3) );
                              if (puVar28 < puVar1) {
                                 uVar40 = (int)puVar42 - (int)puVar1;
                                 puVar28 = (ulong*)( (long)puVar42 - (ulong)uVar40 );
                                 uVar14 = *puVar28;
                                 uVar40 = uVar19 + uVar40 * -8;
                                 puVar29 = puVar28;
                                 goto LAB_0010367e;
                              }

                              uVar40 = uVar19 + ( uVar19 >> 3 ) * -8;
                              uVar18 = *puVar28;
                           }
 else {
                              uVar40 = uVar19 & 7;
                              puVar28 = (ulong*)( (long)puVar42 - ( ulong )(uVar19 >> 3) );
                              uVar18 = *puVar28;
                           }

                           bVar27 = pbVar39 < pbVar23 + -3;
                           uVar14 = uVar18;
                           puVar29 = puVar28;
                           if (!bVar27) goto LAB_0010367e;
                           pbVar25 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           param_1 = pbVar39 + 4;
                           uVar40 = *pbVar25 + uVar40;
                           *pbVar39 = pbVar25[1];
                           pbVar25 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           uVar40 = *pbVar25 + uVar40;
                           pbVar39[1] = pbVar25[1];
                           pbVar25 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           uVar40 = *pbVar25 + uVar40;
                           pbVar39[2] = pbVar25[1];
                           pbVar25 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           uVar19 = *pbVar25 + uVar40;
                           pbVar39[3] = pbVar25[1];
                           pbVar39 = param_1;
                           puVar42 = puVar28;
                        }
 while ( uVar19 < 0x41 );
                     }

                     LAB_00103e9c:local_f0 = uVar19;
                     local_f8 = uVar18;
                     local_e8 = &zeroFilled_0;
                     pbVar39 = param_1;
                     puVar28 = &zeroFilled_0;
                     uVar14 = local_f8;
                     uVar40 = local_f0;
                     puVar29 = local_e8;
                  }

                  LAB_0010367e:local_e8 = puVar29;
                  local_f0 = uVar40;
                  local_f8 = uVar14;
                  if (pbVar39 < pbVar23) {
                     do {
                        pbVar25 = (byte*)( (long)puVar30 + ( ( local_f8 << ( (ulong)local_f0 & 0x3f ) ) >> ( -uVar33 & 0x3f ) ) * 2 );
                        pbVar31 = pbVar39 + 1;
                        bVar7 = *pbVar25;
                        *pbVar39 = pbVar25[1];
                        local_f0 = local_f0 + bVar7;
                        pbVar39 = pbVar31;
                     }
 while ( pbVar23 != pbVar31 );
                  }

                  uVar18 = local_c8;
                  pbVar23 = pbVar38;
                  uVar19 = local_c0;
                  if ((long)pbVar16 - (long)pbVar38 < 4) {
                     if (0x40 < local_c0) goto LAB_00103e76;
                     if (local_b8 < puVar32) {
                        puVar29 = local_b8;
                        uVar14 = local_c8;
                        uVar40 = local_c0;
                        puVar42 = local_b8;
                        if (puVar11 != local_b8) {
                           uVar19 = local_c0 >> 3;
                           uVar18 = (ulong)uVar19;
                           if ((ulong*)( (long)local_b8 - uVar18 ) < puVar11) {
                              uVar19 = (int)local_b8 - (int)puVar11;
                              uVar18 = (ulong)uVar19;
                           }

                           puVar29 = (ulong*)( (long)local_b8 - uVar18 );
                           uVar14 = *puVar29;
                           uVar40 = local_c0 + uVar19 * -8;
                           puVar42 = puVar29;
                        }

                     }
 else {
                        BIT_reloadDStream_internal(&local_c8);
                        puVar29 = local_b8;
                        uVar14 = local_c8;
                        uVar40 = local_c0;
                        puVar42 = local_b8;
                     }

                  }
 else {
                     if (local_c0 < 0x41) {
                        bVar27 = false;
                        uVar34 = -uVar33 & 0x3f;
                        puVar21 = local_b8;
                        do {
                           if (puVar21 < puVar32) {
                              if (puVar11 == puVar21) {
                                 puVar29 = local_b8;
                                 uVar14 = local_c8;
                                 uVar40 = local_c0;
                                 puVar42 = local_b8;
                                 if (bVar27) {
                                    puVar29 = puVar21;
                                    uVar14 = uVar18;
                                    uVar40 = uVar19;
                                    puVar42 = puVar11;
                                 }

                                 goto LAB_0010383c;
                              }

                              puVar29 = (ulong*)( (long)puVar21 - ( ulong )(uVar19 >> 3) );
                              if (puVar29 < puVar11) {
                                 uVar40 = (int)puVar21 - (int)puVar11;
                                 puVar29 = (ulong*)( (long)puVar21 - (ulong)uVar40 );
                                 uVar14 = *puVar29;
                                 uVar40 = uVar19 + uVar40 * -8;
                                 puVar42 = puVar29;
                                 goto LAB_0010383c;
                              }

                              uVar40 = uVar19 + ( uVar19 >> 3 ) * -8;
                              uVar18 = *puVar29;
                           }
 else {
                              uVar40 = uVar19 & 7;
                              puVar29 = (ulong*)( (long)puVar21 - ( ulong )(uVar19 >> 3) );
                              uVar18 = *puVar29;
                           }

                           bVar27 = pbVar23 < pbVar16 + -3;
                           uVar14 = uVar18;
                           puVar42 = puVar29;
                           if (!bVar27) goto LAB_0010383c;
                           pbVar39 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           pbVar38 = pbVar23 + 4;
                           uVar40 = *pbVar39 + uVar40;
                           *pbVar23 = pbVar39[1];
                           pbVar39 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           uVar40 = *pbVar39 + uVar40;
                           pbVar23[1] = pbVar39[1];
                           pbVar39 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           uVar40 = *pbVar39 + uVar40;
                           pbVar23[2] = pbVar39[1];
                           pbVar39 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           uVar19 = *pbVar39 + uVar40;
                           pbVar23[3] = pbVar39[1];
                           pbVar23 = pbVar38;
                           puVar21 = puVar29;
                        }
 while ( uVar19 < 0x41 );
                     }

                     LAB_00103e76:local_c0 = uVar19;
                     local_c8 = uVar18;
                     local_b8 = &zeroFilled_0;
                     pbVar23 = pbVar38;
                     puVar29 = &zeroFilled_0;
                     uVar14 = local_c8;
                     uVar40 = local_c0;
                     puVar42 = local_b8;
                  }

                  LAB_0010383c:local_b8 = puVar42;
                  local_c0 = uVar40;
                  local_c8 = uVar14;
                  if (pbVar23 < pbVar16) {
                     do {
                        pbVar38 = (byte*)( (long)puVar30 + ( ( local_c8 << ( (ulong)local_c0 & 0x3f ) ) >> ( -uVar33 & 0x3f ) ) * 2 );
                        pbVar39 = pbVar23 + 1;
                        bVar7 = *pbVar38;
                        *pbVar23 = pbVar38[1];
                        local_c0 = local_c0 + bVar7;
                        pbVar23 = pbVar39;
                     }
 while ( pbVar16 != pbVar39 );
                  }

                  uVar18 = local_98;
                  pbVar23 = pbVar22;
                  uVar19 = local_90;
                  if ((long)pbVar17 - (long)pbVar22 < 4) {
                     if (0x40 < local_90) goto LAB_00103f4f;
                     if (local_88 < puVar24) {
                        puVar32 = local_88;
                        uVar14 = local_98;
                        uVar40 = local_90;
                        puVar42 = local_88;
                        if (puVar12 != local_88) {
                           uVar19 = local_90 >> 3;
                           uVar18 = (ulong)uVar19;
                           if ((ulong*)( (long)local_88 - uVar18 ) < puVar12) {
                              uVar19 = (int)local_88 - (int)puVar12;
                              uVar18 = (ulong)uVar19;
                           }

                           puVar32 = (ulong*)( (long)local_88 - uVar18 );
                           uVar14 = *puVar32;
                           uVar40 = local_90 + uVar19 * -8;
                           puVar42 = puVar32;
                        }

                     }
 else {
                        BIT_reloadDStream_internal(&local_98);
                        puVar32 = local_88;
                        uVar14 = local_98;
                        uVar40 = local_90;
                        puVar42 = local_88;
                     }

                  }
 else {
                     if (local_90 < 0x41) {
                        bVar27 = false;
                        uVar34 = -uVar33 & 0x3f;
                        puVar21 = local_88;
                        do {
                           if (puVar21 < puVar24) {
                              if (puVar12 == puVar21) {
                                 puVar32 = local_88;
                                 uVar14 = local_98;
                                 uVar40 = local_90;
                                 puVar42 = local_88;
                                 if (bVar27) {
                                    puVar32 = puVar21;
                                    uVar14 = uVar18;
                                    uVar40 = uVar19;
                                    puVar42 = puVar12;
                                 }

                                 goto LAB_001039fd;
                              }

                              puVar32 = (ulong*)( (long)puVar21 - ( ulong )(uVar19 >> 3) );
                              if (puVar32 < puVar12) {
                                 uVar40 = (int)puVar21 - (int)puVar12;
                                 puVar32 = (ulong*)( (long)puVar21 - (ulong)uVar40 );
                                 uVar14 = *puVar32;
                                 uVar40 = uVar19 + uVar40 * -8;
                                 puVar42 = puVar32;
                                 goto LAB_001039fd;
                              }

                              uVar40 = uVar19 + ( uVar19 >> 3 ) * -8;
                              uVar18 = *puVar32;
                           }
 else {
                              uVar40 = uVar19 & 7;
                              puVar32 = (ulong*)( (long)puVar21 - ( ulong )(uVar19 >> 3) );
                              uVar18 = *puVar32;
                           }

                           bVar27 = pbVar23 < pbVar17 + -3;
                           uVar14 = uVar18;
                           puVar42 = puVar32;
                           if (!bVar27) goto LAB_001039fd;
                           pbVar16 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           pbVar22 = pbVar23 + 4;
                           uVar40 = *pbVar16 + uVar40;
                           *pbVar23 = pbVar16[1];
                           pbVar16 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           uVar40 = *pbVar16 + uVar40;
                           pbVar23[1] = pbVar16[1];
                           pbVar16 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           uVar40 = *pbVar16 + uVar40;
                           pbVar23[2] = pbVar16[1];
                           pbVar16 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           uVar19 = *pbVar16 + uVar40;
                           pbVar23[3] = pbVar16[1];
                           pbVar23 = pbVar22;
                           puVar21 = puVar32;
                        }
 while ( uVar19 < 0x41 );
                     }

                     LAB_00103f4f:local_90 = uVar19;
                     local_98 = uVar18;
                     local_88 = &zeroFilled_0;
                     pbVar23 = pbVar22;
                     puVar32 = &zeroFilled_0;
                     uVar14 = local_98;
                     uVar40 = local_90;
                     puVar42 = local_88;
                  }

                  LAB_001039fd:local_88 = puVar42;
                  local_90 = uVar40;
                  local_98 = uVar14;
                  if (pbVar23 < pbVar17) {
                     do {
                        pbVar16 = (byte*)( (long)puVar30 + ( ( local_98 << ( (ulong)local_90 & 0x3f ) ) >> ( -uVar33 & 0x3f ) ) * 2 );
                        pbVar22 = pbVar23 + 1;
                        bVar7 = *pbVar16;
                        *pbVar23 = pbVar16[1];
                        local_90 = local_90 + bVar7;
                        pbVar23 = pbVar22;
                     }
 while ( pbVar17 != pbVar22 );
                  }

                  uVar18 = local_68;
                  pbVar23 = pbVar26;
                  uVar19 = local_60;
                  if ((long)pbVar4 - (long)pbVar26 < 4) {
                     if (0x40 < local_60) goto LAB_00103f2c;
                     if (local_58 < puVar2) {
                        puVar24 = local_58;
                        uVar14 = local_68;
                        uVar40 = local_60;
                        puVar42 = local_58;
                        if (puVar13 != local_58) {
                           uVar19 = local_60 >> 3;
                           uVar20 = (ulong)uVar19;
                           if ((ulong*)( (long)local_58 - uVar20 ) < puVar13) {
                              uVar19 = (int)local_58 - (int)puVar13;
                              uVar20 = (ulong)uVar19;
                           }

                           puVar24 = (ulong*)( (long)local_58 - uVar20 );
                           uVar14 = *puVar24;
                           uVar40 = local_60 + uVar19 * -8;
                           puVar42 = puVar24;
                        }

                     }
 else {
                        BIT_reloadDStream_internal(&local_68);
                        puVar24 = local_58;
                        uVar14 = local_68;
                        uVar40 = local_60;
                        puVar42 = local_58;
                     }

                  }
 else {
                     if (local_60 < 0x41) {
                        uVar34 = -uVar33 & 0x3f;
                        puVar21 = local_58;
                        do {
                           if (puVar21 < puVar2) {
                              if (puVar13 == puVar21) {
                                 puVar24 = local_58;
                                 uVar14 = local_68;
                                 uVar40 = local_60;
                                 puVar42 = local_58;
                                 if ((char)uVar20 != '\0') {
                                    puVar24 = puVar21;
                                    uVar14 = uVar18;
                                    uVar40 = uVar19;
                                    puVar42 = puVar13;
                                 }

                                 goto LAB_00103bb3;
                              }

                              puVar24 = (ulong*)( (long)puVar21 - ( ulong )(uVar19 >> 3) );
                              if (puVar24 < puVar13) {
                                 uVar40 = (int)puVar21 - (int)puVar13;
                                 puVar24 = (ulong*)( (long)puVar21 - (ulong)uVar40 );
                                 uVar14 = *puVar24;
                                 uVar40 = uVar19 + uVar40 * -8;
                                 puVar42 = puVar24;
                                 goto LAB_00103bb3;
                              }

                              uVar40 = uVar19 + ( uVar19 >> 3 ) * -8;
                              uVar18 = *puVar24;
                           }
 else {
                              uVar40 = uVar19 & 7;
                              puVar24 = (ulong*)( (long)puVar21 - ( ulong )(uVar19 >> 3) );
                              uVar18 = *puVar24;
                           }

                           uVar20 = ( ulong )(pbVar23 < pbVar3);
                           uVar14 = uVar18;
                           puVar42 = puVar24;
                           if (pbVar23 >= pbVar3) goto LAB_00103bb3;
                           pbVar16 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           pbVar26 = pbVar23 + 4;
                           uVar40 = *pbVar16 + uVar40;
                           *pbVar23 = pbVar16[1];
                           pbVar16 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           uVar40 = *pbVar16 + uVar40;
                           pbVar23[1] = pbVar16[1];
                           pbVar16 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           uVar40 = *pbVar16 + uVar40;
                           pbVar23[2] = pbVar16[1];
                           pbVar16 = (byte*)( (long)puVar30 + ( ( uVar18 << ( (ulong)uVar40 & 0x3f ) ) >> uVar34 ) * 2 );
                           uVar19 = *pbVar16 + uVar40;
                           pbVar23[3] = pbVar16[1];
                           puVar21 = puVar24;
                           pbVar23 = pbVar26;
                        }
 while ( uVar19 < 0x41 );
                     }

                     LAB_00103f2c:local_60 = uVar19;
                     local_68 = uVar18;
                     local_58 = &zeroFilled_0;
                     puVar24 = &zeroFilled_0;
                     pbVar23 = pbVar26;
                     uVar14 = local_68;
                     uVar40 = local_60;
                     puVar42 = local_58;
                  }

                  LAB_00103bb3:local_58 = puVar42;
                  local_60 = uVar40;
                  local_68 = uVar14;
                  if (pbVar23 < pbVar4) {
                     do {
                        pbVar16 = (byte*)( (long)puVar30 + ( ( local_68 << ( (ulong)local_60 & 0x3f ) ) >> ( -uVar33 & 0x3f ) ) * 2 );
                        pbVar17 = pbVar23 + 1;
                        bVar7 = *pbVar16;
                        *pbVar23 = pbVar16[1];
                        local_60 = local_60 + bVar7;
                        pbVar23 = pbVar17;
                     }
 while ( pbVar4 != pbVar17 );
                  }

                  if (( ( ( puVar12 == puVar32 ) && ( puVar13 == puVar24 ) ) && ( ( local_90 == 0x40 && ( puVar1 == puVar28 && local_f0 == 0x40 ) ) && ( puVar11 == puVar29 && local_c0 == 0x40 ) ) ) && ( uVar20 = local_60 == 0x40 )) goto LAB_00102beb;
                  goto LAB_00102be4;
               }

            }

         }

         LAB_00103350:uVar20 = 0xffffffffffffffb8;
         goto LAB_00102beb;
      }

   }

   LAB_00102be4:uVar20 = 0xffffffffffffffec;
   LAB_00102beb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar20;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong HUF_decompress4X1_usingDTable_internal(byte *param_1, ulong param_2, ushort *param_3, ulong param_4, undefined4 *param_5, uint param_6) {
   ulong *puVar1;
   ulong *puVar2;
   byte *pbVar3;
   byte *pbVar4;
   ulong *puVar5;
   byte *pbVar6;
   byte bVar7;
   bool bVar8;
   bool bVar9;
   char cVar10;
   ulong uVar11;
   byte *pbVar12;
   ulong *puVar13;
   byte bVar14;
   ulong uVar15;
   ulong *puVar16;
   uint uVar17;
   long lVar18;
   ulong uVar19;
   byte *pbVar20;
   bool bVar21;
   int iVar22;
   byte *pbVar23;
   bool bVar24;
   ulong uVar25;
   ulong *puVar26;
   int iVar27;
   uint uVar28;
   code *pcVar29;
   ulong *puVar30;
   ulong *puVar31;
   int iVar32;
   byte *pbVar33;
   byte *pbVar34;
   int iVar35;
   byte *pbVar36;
   byte *pbVar37;
   ulong *puVar38;
   byte *pbVar39;
   long in_FS_OFFSET;
   ulong *local_1b0;
   ulong local_190;
   ulong *local_188;
   ulong local_180;
   byte *pbStack_168;
   ulong *puStack_158;
   ulong *puStack_150;
   ulong *puStack_148;
   byte *pbStack_128;
   ulong local_f8;
   uint uStack_f0;
   ulong *local_e8;
   ulong *local_e0;
   ulong *local_d8;
   ulong uStack_c8;
   uint uStack_c0;
   ulong *puStack_b8;
   ulong *puStack_b0;
   ulong *puStack_a8;
   ulong uStack_98;
   uint uStack_90;
   ulong *puStack_88;
   ulong *puStack_80;
   ulong *puStack_78;
   ulong uStack_68;
   uint uStack_60;
   ulong *puStack_58;
   ulong *puStack_50;
   ulong *puStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_6 & 1 ) == 0) {
      if (( 9 < param_4 ) && ( 5 < param_2 )) {
         pbVar4 = param_1 + param_2;
         uVar15 = ( ulong ) * param_3;
         uVar19 = (ulong)param_3[1];
         uVar25 = (ulong)param_3[2];
         uVar11 = param_2 + 3 >> 2;
         pbVar20 = param_1 + uVar11;
         lVar18 = ( param_4 - ( uVar15 + uVar19 ) ) - uVar25;
         pbVar33 = pbVar20 + uVar11;
         pbVar34 = pbVar33 + uVar11;
         uVar11 = lVar18 - 6;
         bVar24 = param_4 < uVar11 || pbVar4 < pbVar34;
         if (param_4 >= uVar11 && pbVar4 >= pbVar34) {
            if (uVar15 == 0) goto LAB_00104a2c;
            local_d8 = (ulong*)( param_3 + 7 );
            puVar1 = (ulong*)( param_3 + 3 );
            bVar14 = *(byte*)( (long)param_3 + uVar15 + 5 );
            local_e8 = puVar1;
            local_e0 = puVar1;
            if (7 < uVar15) {
               local_e8 = (ulong*)( (long)param_3 + ( uVar15 - 2 ) );
               local_f8 = *local_e8;
               if (bVar14 != 0) {
                  uVar17 = 0x1f;
                  if (bVar14 != 0) {
                     for (; bVar14 >> uVar17 == 0; uVar17 = uVar17 - 1) {}
                  }

                  uStack_f0 = ( uVar17 ^ 0x1f ) - 0x17;
                  goto LAB_001043ec;
               }

               LAB_00104a20:uVar11 = 0xffffffffffffffff;
               goto LAB_001042ad;
            }

            local_f8 = (ulong)(byte)param_3[3];
            switch (uVar15) {
               case 7:
          local_f8 = local_f8 + ((ulong)(byte)param_3[6] << 0x30);
               case 6:
          local_f8 = local_f8 + ((ulong)*(byte *)((long)param_3 + 0xb) << 0x28);
               case 5:
          local_f8 = local_f8 + ((ulong)(byte)param_3[5] << 0x20);
               case 4:
          local_f8 = local_f8 + (ulong)*(byte *)((long)param_3 + 9) * 0x1000000;
               case 3:
          local_f8 = local_f8 + (ulong)(byte)param_3[4] * 0x10000;
               case 2:
          local_f8 = (ulong)*(byte *)((long)param_3 + 7) * 0x100 + local_f8;
            }

            if (bVar14 == 0) goto LAB_00104374;
            uVar17 = 0x1f;
            if (bVar14 != 0) {
               for (; bVar14 >> uVar17 == 0; uVar17 = uVar17 - 1) {}
            }

            uStack_f0 = ( ( uVar17 ^ 0x1f ) - 0x17 ) + ( 8 - ( uint ) * param_3 ) * 8;
            LAB_001043ec:if (uVar19 != 0) {
               puVar5 = (ulong*)( (long)puVar1 + uVar15 );
               puVar13 = puVar5 + 1;
               bVar14 = *(byte*)( (long)puVar5 + ( uVar19 - 1 ) );
               puStack_b0 = puVar5;
               puStack_a8 = puVar13;
               if (uVar19 < 8) {
                  uStack_c8 = ( ulong )(byte) * puVar5;
                  switch (uVar19) {
                     case 7:
              uStack_c8 = uStack_c8 + ((ulong)*(byte *)((long)puVar5 + 6) << 0x30);
                     case 6:
              uStack_c8 = uStack_c8 + ((ulong)*(byte *)((long)puVar5 + 5) << 0x28);
                     case 5:
              uStack_c8 = uStack_c8 + ((ulong)*(byte *)((long)puVar5 + 4) << 0x20);
                     case 4:
              uStack_c8 = uStack_c8 + (ulong)*(byte *)((long)puVar5 + 3) * 0x1000000;
                     case 3:
              uStack_c8 = uStack_c8 + (ulong)*(byte *)((long)puVar5 + 2) * 0x10000;
                     case 2:
              uStack_c8 = (ulong)*(byte *)((long)puVar5 + 1) * 0x100 + uStack_c8;
                  }

                  puStack_b8 = puVar5;
                  if (bVar14 == 0) goto LAB_00104374;
                  uVar17 = 0x1f;
                  if (bVar14 != 0) {
                     for (; bVar14 >> uVar17 == 0; uVar17 = uVar17 - 1) {}
                  }

                  uStack_c0 = ( ( uVar17 ^ 0x1f ) - 0x17 ) + ( 8 - (uint)param_3[1] ) * 8;
               }
 else {
                  puStack_b8 = (ulong*)( (long)puVar5 + ( uVar19 - 8 ) );
                  uStack_c8 = *puStack_b8;
                  if (bVar14 == 0) goto LAB_00104a20;
                  uVar17 = 0x1f;
                  if (bVar14 != 0) {
                     for (; bVar14 >> uVar17 == 0; uVar17 = uVar17 - 1) {}
                  }

                  uStack_c0 = ( uVar17 ^ 0x1f ) - 0x17;
               }

               if (uVar25 != 0) {
                  puVar31 = (ulong*)( (long)puVar5 + uVar19 );
                  puVar26 = puVar31 + 1;
                  bVar14 = *(byte*)( (long)puVar31 + ( uVar25 - 1 ) );
                  puStack_80 = puVar31;
                  puStack_78 = puVar26;
                  if (uVar25 < 8) {
                     uStack_98 = ( ulong )(byte) * puVar31;
                     switch (uVar25) {
                        case 7:
                uStack_98 = ((ulong)*(byte *)((long)puVar31 + 6) << 0x30) + uStack_98;
                        case 6:
                uStack_98 = ((ulong)*(byte *)((long)puVar31 + 5) << 0x28) + uStack_98;
                        case 5:
                uStack_98 = uStack_98 + ((ulong)*(byte *)((long)puVar31 + 4) << 0x20);
                        case 4:
                uStack_98 = uStack_98 + (ulong)*(byte *)((long)puVar31 + 3) * 0x1000000;
                        case 3:
                uStack_98 = uStack_98 + (ulong)*(byte *)((long)puVar31 + 2) * 0x10000;
                        case 2:
                uStack_98 = (ulong)*(byte *)((long)puVar31 + 1) * 0x100 + uStack_98;
                     }

                     puStack_88 = puVar31;
                     if (bVar14 == 0) goto LAB_00104374;
                     uVar17 = 0x1f;
                     if (bVar14 != 0) {
                        for (; bVar14 >> uVar17 == 0; uVar17 = uVar17 - 1) {}
                     }

                     uStack_90 = ( ( uVar17 ^ 0x1f ) - 0x17 ) + ( 8 - (uint)param_3[2] ) * 8;
                  }
 else {
                     puStack_88 = (ulong*)( (long)puVar31 + ( uVar25 - 8 ) );
                     uStack_98 = *puStack_88;
                     if (bVar14 == 0) goto LAB_00104a20;
                     uVar17 = 0x1f;
                     if (bVar14 != 0) {
                        for (; bVar14 >> uVar17 == 0; uVar17 = uVar17 - 1) {}
                     }

                     uStack_90 = ( uVar17 ^ 0x1f ) - 0x17;
                  }

                  if (uVar11 != 0) {
                     puVar30 = (ulong*)( (long)puVar31 + uVar25 );
                     puVar2 = puVar30 + 1;
                     bVar14 = *(byte*)( (long)puVar30 + lVar18 + -7 );
                     puStack_50 = puVar30;
                     puStack_48 = puVar2;
                     if (uVar11 < 8) {
                        uStack_68 = ( ulong )(byte) * puVar30;
                        switch (uVar11) {
                           case 7:
                  uStack_68 = ((ulong)*(byte *)((long)puVar30 + 6) << 0x30) + uStack_68;
                           case 6:
                  uStack_68 = uStack_68 + ((ulong)*(byte *)((long)puVar30 + 5) << 0x28);
                           case 5:
                  uStack_68 = uStack_68 + ((ulong)*(byte *)((long)puVar30 + 4) << 0x20);
                           case 4:
                  uStack_68 = (ulong)*(byte *)((long)puVar30 + 3) * 0x1000000 + uStack_68;
                           case 3:
                  uStack_68 = uStack_68 + (ulong)*(byte *)((long)puVar30 + 2) * 0x10000;
                           case 2:
                  uStack_68 = (ulong)*(byte *)((long)puVar30 + 1) * 0x100 + uStack_68;
                        }

                        puStack_58 = puVar30;
                        if (bVar14 == 0) goto LAB_00104374;
                        uVar17 = 0x1f;
                        if (bVar14 != 0) {
                           for (; bVar14 >> uVar17 == 0; uVar17 = uVar17 - 1) {}
                        }

                        uStack_60 = ( ( uVar17 ^ 0x1f ) - 0x17 ) + ( 8 - (int)uVar11 ) * 8;
                     }
 else {
                        puStack_58 = (ulong*)( (long)puVar30 + lVar18 + -0xe );
                        uStack_68 = *puStack_58;
                        if (bVar14 == 0) goto LAB_00104a20;
                        uVar17 = 0x1f;
                        if (bVar14 != 0) {
                           for (; bVar14 >> uVar17 == 0; uVar17 = uVar17 - 1) {}
                        }

                        uStack_60 = ( uVar17 ^ 0x1f ) - 0x17;
                        if (0xffffffffffffff88 < uVar11) goto LAB_001042ad;
                     }

                     pbVar3 = pbVar4 + -3;
                     cVar10 = (char)( ( uint ) * param_5 >> 0x10 );
                     pbVar23 = pbVar34;
                     pbStack_168 = pbVar20;
                     pbStack_128 = pbVar33;
                     if (( 7 < (long)pbVar4 - (long)pbVar34 ) && ( pbVar34 < pbVar3 )) {
                        local_180 = uStack_98;
                        local_190 = uStack_68;
                        bVar8 = false;
                        puStack_148 = local_e8;
                        bVar9 = false;
                        puStack_150 = puStack_b8;
                        bVar21 = false;
                        puStack_158 = puStack_88;
                        local_188 = puStack_58;
                        bVar14 = -cVar10 & 0x3f;
                        pbVar12 = pbVar34;
                        uVar15 = uStack_c8;
                        uVar11 = local_f8;
                        pbVar37 = pbVar33;
                        pbVar36 = param_1;
                        pbVar39 = pbVar20;
                        do {
                           pbVar23 = (byte*)( (long)param_5 + ( ( uVar11 << ( (byte)uStack_f0 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           bVar7 = *pbVar23;
                           *pbVar36 = pbVar23[1];
                           iVar22 = bVar7 + uStack_f0;
                           pbVar23 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)uStack_c0 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           bVar7 = *pbVar23;
                           *pbVar39 = pbVar23[1];
                           iVar35 = bVar7 + uStack_c0;
                           pbVar23 = (byte*)( (long)param_5 + ( ( local_180 << ( (byte)uStack_90 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           iVar27 = *pbVar23 + uStack_90;
                           *pbVar37 = pbVar23[1];
                           pbVar23 = (byte*)( (long)param_5 + ( ( local_190 << ( (byte)uStack_60 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           bVar7 = *pbVar23;
                           *pbVar12 = pbVar23[1];
                           iVar32 = bVar7 + uStack_60;
                           pbVar23 = (byte*)( (long)param_5 + ( ( uVar11 << ( (byte)iVar22 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           bVar7 = *pbVar23;
                           pbVar36[1] = pbVar23[1];
                           iVar22 = (uint)bVar7 + iVar22;
                           pbVar23 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)iVar35 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           iVar35 = ( uint ) * pbVar23 + iVar35;
                           pbVar39[1] = pbVar23[1];
                           pbVar23 = (byte*)( (long)param_5 + ( ( local_180 << ( (byte)iVar27 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           iVar27 = ( uint ) * pbVar23 + iVar27;
                           pbVar37[1] = pbVar23[1];
                           pbVar23 = (byte*)( (long)param_5 + ( ( local_190 << ( (byte)iVar32 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           bVar7 = *pbVar23;
                           pbVar12[1] = pbVar23[1];
                           iVar32 = (uint)bVar7 + iVar32;
                           pbVar23 = (byte*)( (long)param_5 + ( ( uVar11 << ( (byte)iVar22 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           bVar7 = *pbVar23;
                           pbVar36[2] = pbVar23[1];
                           iVar22 = (uint)bVar7 + iVar22;
                           pbVar23 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)iVar35 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           bVar7 = *pbVar23;
                           pbVar39[2] = pbVar23[1];
                           iVar35 = (uint)bVar7 + iVar35;
                           pbVar23 = (byte*)( (long)param_5 + ( ( local_180 << ( (byte)iVar27 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           iVar27 = ( uint ) * pbVar23 + iVar27;
                           pbVar37[2] = pbVar23[1];
                           param_1 = pbVar36 + 4;
                           pbStack_168 = pbVar39 + 4;
                           pbStack_128 = pbVar37 + 4;
                           pbVar23 = pbVar12 + 4;
                           pbVar6 = (byte*)( (long)param_5 + ( ( local_190 << ( (byte)iVar32 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           bVar7 = *pbVar6;
                           pbVar12[2] = pbVar6[1];
                           iVar32 = (uint)bVar7 + iVar32;
                           pbVar6 = (byte*)( (long)param_5 + ( ( uVar11 << ( (byte)iVar22 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           bVar7 = *pbVar6;
                           pbVar36[3] = pbVar6[1];
                           uVar28 = (uint)bVar7 + iVar22;
                           pbVar36 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)iVar35 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           bVar7 = *pbVar36;
                           pbVar39[3] = pbVar36[1];
                           uStack_c0 = (uint)bVar7 + iVar35;
                           pbVar36 = (byte*)( (long)param_5 + ( ( local_180 << ( (byte)iVar27 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           uStack_90 = ( uint ) * pbVar36 + iVar27;
                           pbVar37[3] = pbVar36[1];
                           pbVar37 = (byte*)( (long)param_5 + ( ( local_190 << ( (byte)iVar32 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                           bVar7 = *pbVar37;
                           pbVar12[3] = pbVar37[1];
                           uVar17 = iVar32 + (uint)bVar7;
                           if (puStack_148 < local_d8) {
                              iVar27 = 3;
                              uStack_f0 = uVar28;
                           }
 else {
                              bVar24 = true;
                              uStack_f0 = uVar28 & 7;
                              puStack_148 = (ulong*)( (long)puStack_148 - ( ulong )(uVar28 >> 3) );
                              iVar27 = 0;
                              uVar11 = *puStack_148;
                           }

                           if (puStack_150 < puVar13) {
                              iVar27 = 3;
                           }
 else {
                              bVar8 = true;
                              puStack_150 = (ulong*)( (long)puStack_150 - ( ulong )(uStack_c0 >> 3) );
                              uVar15 = *puStack_150;
                              uStack_c0 = uStack_c0 & 7;
                           }

                           if (puStack_158 < puVar26) {
                              iVar27 = 3;
                           }
 else {
                              bVar9 = true;
                              puStack_158 = (ulong*)( (long)puStack_158 - ( ulong )(uStack_90 >> 3) );
                              local_180 = *puStack_158;
                              uStack_90 = uStack_90 & 7;
                           }

                           if (local_188 < puVar2) {
                              if (bVar24) {
                                 local_e8 = puStack_148;
                                 local_f8 = uVar11;
                              }

                              if (bVar8) {
                                 puStack_b8 = puStack_150;
                                 uStack_c8 = uVar15;
                              }

                              if (bVar9) {
                                 puStack_88 = puStack_158;
                                 uStack_98 = local_180;
                              }

                              uStack_60 = uVar17;
                              if (!bVar21) goto LAB_00104c53;
                              goto LAB_00105515;
                           }

                           uStack_60 = uVar17 & 7;
                           local_188 = (ulong*)( (long)local_188 - ( ulong )(uVar17 >> 3) );
                           local_190 = *local_188;
                           bVar21 = iVar27 == 0 && pbVar23 < pbVar3;
                           pbVar12 = pbVar23;
                           pbVar37 = pbStack_128;
                           pbVar36 = param_1;
                           pbVar39 = pbStack_168;
                        }
 while ( iVar27 == 0 && pbVar23 < pbVar3 );
                        if (bVar24) {
                           local_e8 = puStack_148;
                           local_f8 = uVar11;
                        }

                        if (bVar8) {
                           puStack_b8 = puStack_150;
                           uStack_c8 = uVar15;
                        }

                        if (bVar9) {
                           puStack_88 = puStack_158;
                           uStack_98 = local_180;
                        }

                        LAB_00105515:puStack_58 = local_188;
                        uStack_68 = local_190;
                     }

                     LAB_00104c53:bVar24 = ( pbVar20 < param_1 || pbVar33 < pbStack_168 ) || pbVar34 < pbStack_128;
                     uVar11 = (ulong)bVar24;
                     if (bVar24) goto LAB_00104374;
                     uVar15 = local_f8;
                     uVar17 = uStack_f0;
                     if ((long)pbVar20 - (long)param_1 < 4) {
                        if (0x40 < uStack_f0) goto LAB_001056b3;
                        if (local_e8 < local_d8) {
                           if (puVar1 != local_e8) {
                              uVar17 = uStack_f0 >> 3;
                              uVar15 = (ulong)uVar17;
                              if ((ulong*)( (long)local_e8 - uVar15 ) < puVar1) {
                                 uVar17 = (int)local_e8 - (int)puVar1;
                                 uVar15 = (ulong)uVar17;
                              }

                              local_e8 = (ulong*)( (long)local_e8 - uVar15 );
                              uStack_f0 = uStack_f0 + uVar17 * -8;
                              local_f8 = *local_e8;
                           }

                        }
 else {
                           BIT_reloadDStream_internal(&local_f8);
                        }

                     }
 else {
                        if (uStack_f0 < 0x41) {
                           local_1b0 = local_e8;
                           bVar14 = -cVar10 & 0x3f;
                           bVar24 = false;
                           pbVar12 = param_1;
                           do {
                              param_1 = pbVar12;
                              if (local_1b0 < local_d8) {
                                 if (puVar1 == local_1b0) {
                                    if (bVar24) {
                                       local_f8 = uVar15;
                                       uStack_f0 = uVar17;
                                       local_e8 = puVar1;
                                    }

                                 }
 else {
                                    puVar16 = (ulong*)( (long)local_1b0 - ( ulong )(uVar17 >> 3) );
                                    if (puVar1 <= puVar16) {
                                       uVar15 = *puVar16;
                                       uVar28 = uVar17 + ( uVar17 >> 3 ) * -8;
                                       local_1b0 = puVar16;
                                       goto LAB_00104cf7;
                                    }

                                    uVar19 = (long)local_1b0 - (long)puVar1;
                                    local_1b0 = (ulong*)( (long)local_1b0 - ( uVar19 & 0xffffffff ) );
                                    uVar15 = *local_1b0;
                                    uVar28 = uVar17 + (int)uVar19 * -8;
                                    LAB_00104df8:local_e8 = local_1b0;
                                    local_f8 = uVar15;
                                    uStack_f0 = uVar28;
                                 }

                                 goto LAB_00104e15;
                              }

                              uVar28 = uVar17 & 7;
                              local_1b0 = (ulong*)( (long)local_1b0 - ( ulong )(uVar17 >> 3) );
                              uVar15 = *local_1b0;
                              LAB_00104cf7:bVar24 = pbVar12 < pbVar20 + -3;
                              if (!bVar24) goto LAB_00104df8;
                              param_1 = pbVar12 + 4;
                              pbVar37 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)uVar28 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              iVar27 = *pbVar37 + uVar28;
                              *pbVar12 = pbVar37[1];
                              pbVar37 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)iVar27 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              iVar27 = ( uint ) * pbVar37 + iVar27;
                              pbVar12[1] = pbVar37[1];
                              pbVar37 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)iVar27 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              iVar27 = ( uint ) * pbVar37 + iVar27;
                              pbVar12[2] = pbVar37[1];
                              pbVar37 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)iVar27 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              uVar17 = ( uint ) * pbVar37 + iVar27;
                              pbVar12[3] = pbVar37[1];
                              pbVar12 = param_1;
                           }
 while ( uVar17 < 0x41 );
                        }

                        LAB_001056b3:uStack_f0 = uVar17;
                        local_f8 = uVar15;
                        local_e8 = &zeroFilled_0;
                     }

                     LAB_00104e15:if (param_1 < pbVar20) {
                        do {
                           pbVar37 = param_1 + 1;
                           pbVar12 = (byte*)( (long)param_5 + ( ( local_f8 << ( (byte)uStack_f0 & 0x3f ) ) >> ( -cVar10 & 0x3fU ) ) * 2 + 4 );
                           bVar14 = *pbVar12;
                           *param_1 = pbVar12[1];
                           uStack_f0 = uStack_f0 + bVar14;
                           param_1 = pbVar37;
                        }
 while ( pbVar20 != pbVar37 );
                     }

                     uVar15 = uStack_c8;
                     uVar17 = uStack_c0;
                     if ((long)pbVar33 - (long)pbStack_168 < 4) {
                        if (0x40 < uStack_c0) goto LAB_0010568f;
                        if (puStack_b8 < puVar13) {
                           uVar19 = uStack_c8;
                           uVar28 = uStack_c0;
                           puVar16 = puStack_b8;
                           if (puVar5 != puStack_b8) {
                              uVar17 = uStack_c0 >> 3;
                              uVar15 = (ulong)uVar17;
                              if ((ulong*)( (long)puStack_b8 - uVar15 ) < puVar5) {
                                 uVar17 = (int)puStack_b8 - (int)puVar5;
                                 uVar15 = (ulong)uVar17;
                              }

                              uVar19 = *(ulong*)( (long)puStack_b8 - uVar15 );
                              uVar28 = uStack_c0 + uVar17 * -8;
                              puVar16 = (ulong*)( (long)puStack_b8 - uVar15 );
                           }

                        }
 else {
                           BIT_reloadDStream_internal(&uStack_c8);
                           uVar19 = uStack_c8;
                           uVar28 = uStack_c0;
                           puVar16 = puStack_b8;
                        }

                     }
 else {
                        if (uStack_c0 < 0x41) {
                           bVar24 = false;
                           bVar14 = -cVar10 & 0x3f;
                           puVar38 = puStack_b8;
                           do {
                              if (puVar38 < puVar13) {
                                 if (puVar5 == puVar38) {
                                    uVar19 = uStack_c8;
                                    uVar28 = uStack_c0;
                                    puVar16 = puStack_b8;
                                    if (bVar24) {
                                       uVar19 = uVar15;
                                       uVar28 = uVar17;
                                       puVar16 = puVar5;
                                    }

                                    goto LAB_00104ff1;
                                 }

                                 puVar16 = (ulong*)( (long)puVar38 - ( ulong )(uVar17 >> 3) );
                                 if (puVar16 < puVar5) {
                                    puVar16 = (ulong*)( (long)puVar38 - ( (long)puVar38 - (long)puVar5 & 0xffffffffU ) );
                                    uVar19 = *puVar16;
                                    uVar28 = uVar17 + (int)( (long)puVar38 - (long)puVar5 ) * -8;
                                    goto LAB_00104ff1;
                                 }

                                 uVar15 = *puVar16;
                                 uVar28 = uVar17 + ( uVar17 >> 3 ) * -8;
                              }
 else {
                                 uVar28 = uVar17 & 7;
                                 puVar16 = (ulong*)( (long)puVar38 - ( ulong )(uVar17 >> 3) );
                                 uVar15 = *puVar16;
                              }

                              bVar24 = pbStack_168 < pbVar33 + -3;
                              uVar19 = uVar15;
                              if (!bVar24) goto LAB_00104ff1;
                              pbVar20 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)uVar28 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              iVar27 = *pbVar20 + uVar28;
                              *pbStack_168 = pbVar20[1];
                              pbVar20 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)iVar27 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              iVar27 = ( uint ) * pbVar20 + iVar27;
                              pbStack_168[1] = pbVar20[1];
                              pbVar20 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)iVar27 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              iVar27 = ( uint ) * pbVar20 + iVar27;
                              pbStack_168[2] = pbVar20[1];
                              pbVar12 = pbStack_168 + 4;
                              pbVar20 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)iVar27 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              uVar17 = ( uint ) * pbVar20 + iVar27;
                              pbStack_168[3] = pbVar20[1];
                              puVar38 = puVar16;
                              pbStack_168 = pbVar12;
                           }
 while ( uVar17 < 0x41 );
                        }

                        LAB_0010568f:uStack_c0 = uVar17;
                        uStack_c8 = uVar15;
                        puStack_b8 = &zeroFilled_0;
                        uVar19 = uStack_c8;
                        uVar28 = uStack_c0;
                        puVar16 = puStack_b8;
                     }

                     LAB_00104ff1:puStack_b8 = puVar16;
                     uStack_c0 = uVar28;
                     uStack_c8 = uVar19;
                     if (pbStack_168 < pbVar33) {
                        do {
                           pbVar12 = pbStack_168 + 1;
                           pbVar20 = (byte*)( (long)param_5 + ( ( uStack_c8 << ( (byte)uStack_c0 & 0x3f ) ) >> ( -cVar10 & 0x3fU ) ) * 2 + 4 );
                           bVar14 = *pbVar20;
                           *pbStack_168 = pbVar20[1];
                           uStack_c0 = uStack_c0 + bVar14;
                           pbStack_168 = pbVar12;
                        }
 while ( pbVar33 != pbVar12 );
                     }

                     uVar15 = uStack_98;
                     uVar17 = uStack_90;
                     if ((long)pbVar34 - (long)pbStack_128 < 4) {
                        if (0x40 < uStack_90) goto LAB_00105847;
                        if (puStack_88 < puVar26) {
                           uVar19 = uStack_98;
                           uVar28 = uStack_90;
                           puVar13 = puStack_88;
                           if (puVar31 != puStack_88) {
                              uVar17 = uStack_90 >> 3;
                              uVar15 = (ulong)uVar17;
                              if ((ulong*)( (long)puStack_88 - uVar15 ) < puVar31) {
                                 uVar17 = (int)puStack_88 - (int)puVar31;
                                 uVar15 = (ulong)uVar17;
                              }

                              uVar19 = *(ulong*)( (long)puStack_88 - uVar15 );
                              uVar28 = uStack_90 + uVar17 * -8;
                              puVar13 = (ulong*)( (long)puStack_88 - uVar15 );
                           }

                        }
 else {
                           BIT_reloadDStream_internal(&uStack_98);
                           uVar19 = uStack_98;
                           uVar28 = uStack_90;
                           puVar13 = puStack_88;
                        }

                     }
 else {
                        if (uStack_90 < 0x41) {
                           bVar24 = false;
                           bVar14 = -cVar10 & 0x3f;
                           pbVar20 = pbStack_128;
                           puVar16 = puStack_88;
                           do {
                              pbStack_128 = pbVar20;
                              if (puVar16 < puVar26) {
                                 if (puVar31 == puVar16) {
                                    uVar19 = uStack_98;
                                    uVar28 = uStack_90;
                                    puVar13 = puStack_88;
                                    if (bVar24) {
                                       uVar19 = uVar15;
                                       uVar28 = uVar17;
                                       puVar13 = puVar31;
                                    }

                                    goto LAB_001051d3;
                                 }

                                 puVar13 = (ulong*)( (long)puVar16 - ( ulong )(uVar17 >> 3) );
                                 if (puVar13 < puVar31) {
                                    puVar13 = (ulong*)( (long)puVar16 - ( (long)puVar16 - (long)puVar31 & 0xffffffffU ) );
                                    uVar19 = *puVar13;
                                    uVar28 = uVar17 + (int)( (long)puVar16 - (long)puVar31 ) * -8;
                                    goto LAB_001051d3;
                                 }

                                 uVar15 = *puVar13;
                                 uVar28 = uVar17 + ( uVar17 >> 3 ) * -8;
                                 puVar16 = puVar13;
                              }
 else {
                                 uVar28 = uVar17 & 7;
                                 puVar16 = (ulong*)( (long)puVar16 - ( ulong )(uVar17 >> 3) );
                                 uVar15 = *puVar16;
                              }

                              uVar19 = uVar15;
                              puVar13 = puVar16;
                              if (pbVar34 + -3 <= pbVar20) goto LAB_001051d3;
                              pbStack_128 = pbVar20 + 4;
                              pbVar33 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)uVar28 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              iVar27 = *pbVar33 + uVar28;
                              *pbVar20 = pbVar33[1];
                              pbVar33 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)iVar27 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              iVar27 = ( uint ) * pbVar33 + iVar27;
                              pbVar20[1] = pbVar33[1];
                              pbVar33 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)iVar27 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              iVar27 = ( uint ) * pbVar33 + iVar27;
                              pbVar20[2] = pbVar33[1];
                              pbVar33 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)iVar27 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              uVar17 = ( uint ) * pbVar33 + iVar27;
                              pbVar20[3] = pbVar33[1];
                              bVar24 = true;
                              pbVar20 = pbStack_128;
                           }
 while ( uVar17 < 0x41 );
                        }

                        LAB_00105847:uStack_90 = uVar17;
                        uStack_98 = uVar15;
                        puStack_88 = &zeroFilled_0;
                        uVar19 = uStack_98;
                        uVar28 = uStack_90;
                        puVar13 = puStack_88;
                     }

                     LAB_001051d3:puStack_88 = puVar13;
                     uStack_90 = uVar28;
                     uStack_98 = uVar19;
                     if (pbStack_128 < pbVar34) {
                        do {
                           pbVar33 = pbStack_128 + 1;
                           pbVar20 = (byte*)( (long)param_5 + ( ( uStack_98 << ( (byte)uStack_90 & 0x3f ) ) >> ( -cVar10 & 0x3fU ) ) * 2 + 4 );
                           bVar14 = *pbVar20;
                           *pbStack_128 = pbVar20[1];
                           uStack_90 = uStack_90 + bVar14;
                           pbStack_128 = pbVar33;
                        }
 while ( pbVar34 != pbVar33 );
                     }

                     uVar15 = uStack_68;
                     pbVar20 = pbVar23;
                     uVar17 = uStack_60;
                     if ((long)pbVar4 - (long)pbVar23 < 4) {
                        if (0x40 < uStack_60) goto LAB_001056d6;
                        if (puStack_58 < puVar2) {
                           uVar19 = uStack_68;
                           uVar28 = uStack_60;
                           puVar13 = puStack_58;
                           if (puVar30 != puStack_58) {
                              uVar17 = uStack_60 >> 3;
                              uVar11 = (ulong)uVar17;
                              if ((ulong*)( (long)puStack_58 - uVar11 ) < puVar30) {
                                 uVar17 = (int)puStack_58 - (int)puVar30;
                                 uVar11 = (ulong)uVar17;
                              }

                              uVar19 = *(ulong*)( (long)puStack_58 - uVar11 );
                              uVar28 = uStack_60 + uVar17 * -8;
                              puVar13 = (ulong*)( (long)puStack_58 - uVar11 );
                           }

                        }
 else {
                           BIT_reloadDStream_internal(&uStack_68);
                           uVar19 = uStack_68;
                           uVar28 = uStack_60;
                           puVar13 = puStack_58;
                        }

                     }
 else {
                        if (uStack_60 < 0x41) {
                           bVar14 = -cVar10 & 0x3f;
                           puVar26 = puStack_58;
                           do {
                              if (puVar26 < puVar2) {
                                 if (puVar30 == puVar26) {
                                    uVar19 = uStack_68;
                                    uVar28 = uStack_60;
                                    puVar13 = puStack_58;
                                    if ((char)uVar11 != '\0') {
                                       uVar19 = uVar15;
                                       uVar28 = uVar17;
                                       puVar13 = puVar30;
                                    }

                                    goto LAB_0010538f;
                                 }

                                 puVar13 = (ulong*)( (long)puVar26 - ( ulong )(uVar17 >> 3) );
                                 if (puVar13 < puVar30) {
                                    puVar13 = (ulong*)( (long)puVar26 - ( (long)puVar26 - (long)puVar30 & 0xffffffffU ) );
                                    uVar19 = *puVar13;
                                    uVar28 = uVar17 + (int)( (long)puVar26 - (long)puVar30 ) * -8;
                                    goto LAB_0010538f;
                                 }

                                 uVar28 = uVar17 + ( uVar17 >> 3 ) * -8;
                                 uVar15 = *puVar13;
                              }
 else {
                                 uVar28 = uVar17 & 7;
                                 puVar13 = (ulong*)( (long)puVar26 - ( ulong )(uVar17 >> 3) );
                                 uVar15 = *puVar13;
                              }

                              uVar11 = ( ulong )(pbVar20 < pbVar3);
                              uVar19 = uVar15;
                              if (pbVar20 >= pbVar3) goto LAB_0010538f;
                              pbVar23 = pbVar20 + 4;
                              pbVar33 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)uVar28 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              iVar27 = *pbVar33 + uVar28;
                              *pbVar20 = pbVar33[1];
                              pbVar33 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)iVar27 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              iVar27 = ( uint ) * pbVar33 + iVar27;
                              pbVar20[1] = pbVar33[1];
                              pbVar33 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)iVar27 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              iVar27 = ( uint ) * pbVar33 + iVar27;
                              pbVar20[2] = pbVar33[1];
                              pbVar33 = (byte*)( (long)param_5 + ( ( uVar15 << ( (byte)iVar27 & 0x3f ) ) >> bVar14 ) * 2 + 4 );
                              uVar17 = ( uint ) * pbVar33 + iVar27;
                              pbVar20[3] = pbVar33[1];
                              pbVar20 = pbVar23;
                              puVar26 = puVar13;
                           }
 while ( uVar17 < 0x41 );
                        }

                        LAB_001056d6:uStack_60 = uVar17;
                        uStack_68 = uVar15;
                        puStack_58 = &zeroFilled_0;
                        pbVar20 = pbVar23;
                        uVar19 = uStack_68;
                        uVar28 = uStack_60;
                        puVar13 = puStack_58;
                     }

                     LAB_0010538f:puStack_58 = puVar13;
                     uStack_60 = uVar28;
                     uStack_68 = uVar19;
                     if (pbVar20 < pbVar4) {
                        do {
                           pbVar34 = pbVar20 + 1;
                           pbVar33 = (byte*)( (long)param_5 + ( ( uStack_68 << ( (byte)uStack_60 & 0x3f ) ) >> ( -cVar10 & 0x3fU ) ) * 2 + 4 );
                           bVar14 = *pbVar33;
                           *pbVar20 = pbVar33[1];
                           uStack_60 = uStack_60 + bVar14;
                           pbVar20 = pbVar34;
                        }
 while ( pbVar4 != pbVar34 );
                     }

                     if (( ( puVar31 == puStack_88 ) && ( puVar30 == puStack_58 ) ) && ( uVar11 = param_2(( uStack_60 == 0x40 && ( puVar1 == local_e8 && uStack_f0 == 0x40 ) ) && ( puVar5 == puStack_b8 && uStack_c0 == 0x40 )) && uStack_90 == 0x40 )) goto LAB_001042ad;
                     goto LAB_00104374;
                  }

               }

            }

            LAB_00104a2c:uVar11 = 0xffffffffffffffb8;
            goto LAB_001042ad;
         }

      }

      LAB_00104374:uVar11 = 0xffffffffffffffec;
   }
 else {
      pcVar29 = (code*)&HUF_decompress4X1_usingDTable_internal_fast_asm_loop;
      if (( param_6 & 0x10 ) != 0) {
         pcVar29 = HUF_decompress4X1_usingDTable_internal_fast_c_loop;
      }

      if (( ( param_6 & 0x20 ) != 0 ) || ( uVar11 = HUF_decompress4X1_usingDTable_internal_fast(param_1, param_2, param_3, param_4, param_5, pcVar29) ),uVar11 == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar11 = HUF_decompress4X1_usingDTable_internal_bmi2(param_1, param_2, param_3, param_4, param_5);
            return uVar11;
         }

         goto LAB_00105757;
      }

   }

   LAB_001042ad:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar11;
   }

   LAB_00105757:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
ulong HUF_decompress4X2_usingDTable_internal_bmi2(undefined2 *param_1, ulong param_2, ushort *param_3, ulong param_4, uint *param_5) {
   ulong *puVar1;
   ulong *puVar2;
   undefined2 *puVar3;
   undefined2 *puVar4;
   undefined2 *puVar5;
   ulong *puVar6;
   uint *puVar7;
   uint *puVar8;
   ulong *puVar9;
   byte bVar10;
   bool bVar11;
   bool bVar12;
   ulong *puVar13;
   ulong uVar14;
   int iVar15;
   long lVar16;
   undefined2 *puVar17;
   undefined2 *puVar18;
   undefined2 *puVar19;
   ulong *puVar20;
   ulong uVar21;
   uint uVar22;
   uint uVar23;
   ulong uVar24;
   undefined2 *puVar25;
   bool bVar26;
   uint uVar27;
   ulong *puVar28;
   bool bVar29;
   ulong *puVar30;
   undefined2 *puVar31;
   ulong uVar32;
   ulong *puVar33;
   ulong uVar34;
   long in_FS_OFFSET;
   ulong *local_1b0;
   ulong *local_188;
   ulong local_180;
   ulong local_168;
   ulong *local_160;
   ulong *local_148;
   ulong *local_130;
   ulong *local_128;
   ulong local_f8;
   uint local_f0;
   ulong *local_e8;
   ulong *local_e0;
   ulong *local_d8;
   ulong local_c8;
   uint local_c0;
   ulong *local_b8;
   ulong *local_b0;
   ulong *local_a8;
   ulong local_98;
   uint local_90;
   ulong *local_88;
   ulong *local_80;
   ulong *local_78;
   ulong local_68;
   uint local_60;
   ulong *local_58;
   ulong *local_50;
   ulong *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( 5 < param_2 ) && ( 9 < param_4 )) {
      puVar4 = (undefined2*)( (long)param_1 + param_2 );
      uVar21 = (ulong)param_3[1];
      uVar32 = ( ulong ) * param_3;
      uVar14 = (ulong)param_3[2];
      uVar34 = param_2 + 3 >> 2;
      lVar16 = ( param_4 - ( uVar32 + uVar21 ) ) - uVar14;
      uVar24 = lVar16 - 6;
      puVar5 = (undefined2*)( (long)param_1 + uVar34 );
      puVar17 = (undefined2*)( (long)puVar5 + uVar34 );
      puVar18 = (undefined2*)( (long)puVar17 + uVar34 );
      bVar26 = puVar4 < puVar18 || param_4 < uVar24;
      if (puVar4 < puVar18 || param_4 < uVar24) goto LAB_00105abe;
      if (uVar32 == 0) goto LAB_00106288;
      puVar20 = (ulong*)( param_3 + 7 );
      puVar1 = (ulong*)( param_3 + 3 );
      bVar10 = *(byte*)( (long)param_3 + uVar32 + 5 );
      local_e8 = puVar1;
      local_e0 = puVar1;
      local_d8 = puVar20;
      if (7 < uVar32) {
         local_e8 = (ulong*)( (long)param_3 + ( uVar32 - 2 ) );
         local_f8 = *local_e8;
         if (bVar10 != 0) {
            local_f0 = LZCOUNT((uint)bVar10) - 0x17;
            goto LAB_00105b5a;
         }

         LAB_00106130:uVar24 = 0xffffffffffffffff;
         goto LAB_00105ac5;
      }

      local_f8 = (ulong)(byte)param_3[3];
      switch (uVar32) {
         case 7:
      local_f8 = local_f8 + ((ulong)(byte)param_3[6] << 0x30);
         case 6:
      local_f8 = local_f8 + ((ulong)*(byte *)((long)param_3 + 0xb) << 0x28);
         case 5:
      local_f8 = local_f8 + ((ulong)(byte)param_3[5] << 0x20);
         case 4:
      local_f8 = local_f8 + (ulong)*(byte *)((long)param_3 + 9) * 0x1000000;
         case 3:
      local_f8 = local_f8 + (ulong)(byte)param_3[4] * 0x10000;
         case 2:
      local_f8 = (ulong)*(byte *)((long)param_3 + 7) * 0x100 + local_f8;
      }

      if (bVar10 == 0) goto LAB_00105abe;
      local_f0 = LZCOUNT((uint)bVar10) + -0x17 + ( 8 - ( uint ) * param_3 ) * 8;
      LAB_00105b5a:if (uVar21 == 0) {
         LAB_00106288:uVar24 = 0xffffffffffffffb8;
         goto LAB_00105ac5;
      }

      puVar6 = (ulong*)( (long)puVar1 + uVar32 );
      puVar30 = puVar6 + 1;
      bVar10 = *(byte*)( (long)puVar6 + ( uVar21 - 1 ) );
      local_b8 = puVar6;
      local_b0 = puVar6;
      local_a8 = puVar30;
      if (uVar21 < 8) {
         local_c8 = ( ulong )(byte) * puVar6;
         switch (uVar21) {
            case 7:
        local_c8 = local_c8 + ((ulong)*(byte *)((long)puVar6 + 6) << 0x30);
            case 6:
        local_c8 = local_c8 + ((ulong)*(byte *)((long)puVar6 + 5) << 0x28);
            case 5:
        local_c8 = local_c8 + ((ulong)*(byte *)((long)puVar6 + 4) << 0x20);
            case 4:
        local_c8 = local_c8 + (ulong)*(byte *)((long)puVar6 + 3) * 0x1000000;
            case 3:
        local_c8 = local_c8 + (ulong)*(byte *)((long)puVar6 + 2) * 0x10000;
            case 2:
        local_c8 = (ulong)*(byte *)((long)puVar6 + 1) * 0x100 + local_c8;
         }

         if (bVar10 == 0) goto LAB_00105abe;
         local_c0 = LZCOUNT((uint)bVar10) + -0x17 + ( 8 - (uint)param_3[1] ) * 8;
      }
 else {
         local_b8 = (ulong*)( (long)puVar6 + ( uVar21 - 8 ) );
         local_c8 = *local_b8;
         if (bVar10 == 0) goto LAB_00106130;
         local_c0 = LZCOUNT((uint)bVar10) - 0x17;
      }

      if (uVar14 == 0) goto LAB_00106288;
      puVar9 = (ulong*)( (long)puVar6 + uVar21 );
      puVar33 = puVar9 + 1;
      bVar10 = *(byte*)( (long)puVar9 + ( uVar14 - 1 ) );
      local_88 = puVar9;
      local_80 = puVar9;
      local_78 = puVar33;
      if (uVar14 < 8) {
         local_98 = ( ulong )(byte) * puVar9;
         switch (uVar14) {
            case 7:
        local_98 = local_98 + ((ulong)*(byte *)((long)puVar9 + 6) << 0x30);
            case 6:
        local_98 = local_98 + ((ulong)*(byte *)((long)puVar9 + 5) << 0x28);
            case 5:
        local_98 = local_98 + ((ulong)*(byte *)((long)puVar9 + 4) << 0x20);
            case 4:
        local_98 = local_98 + (ulong)*(byte *)((long)puVar9 + 3) * 0x1000000;
            case 3:
        local_98 = local_98 + (ulong)*(byte *)((long)puVar9 + 2) * 0x10000;
            case 2:
        local_98 = (ulong)*(byte *)((long)puVar9 + 1) * 0x100 + local_98;
         }

         if (bVar10 == 0) goto LAB_00105abe;
         local_90 = LZCOUNT((uint)bVar10) + -0x17 + ( 8 - (uint)param_3[2] ) * 8;
      }
 else {
         local_88 = (ulong*)( (long)puVar9 + ( uVar14 - 8 ) );
         local_98 = *local_88;
         if (bVar10 == 0) goto LAB_00106130;
         local_90 = LZCOUNT((uint)bVar10) - 0x17;
      }

      if (uVar24 == 0) goto LAB_00106288;
      puVar13 = (ulong*)( (long)puVar9 + uVar14 );
      puVar2 = puVar13 + 1;
      bVar10 = *(byte*)( (long)puVar13 + lVar16 + -7 );
      local_58 = puVar13;
      local_50 = puVar13;
      local_48 = puVar2;
      if (uVar24 < 8) {
         local_68 = ( ulong )(byte) * puVar13;
         switch (uVar24) {
            case 7:
        local_68 = local_68 + ((ulong)*(byte *)((long)puVar13 + 6) << 0x30);
            case 6:
        local_68 = local_68 + ((ulong)*(byte *)((long)puVar13 + 5) << 0x28);
            case 5:
        local_68 = local_68 + ((ulong)*(byte *)((long)puVar13 + 4) << 0x20);
            case 4:
        local_68 = local_68 + (ulong)*(byte *)((long)puVar13 + 3) * 0x1000000;
            case 3:
        local_68 = local_68 + (ulong)*(byte *)((long)puVar13 + 2) * 0x10000;
            case 2:
        local_68 = (ulong)*(byte *)((long)puVar13 + 1) * 0x100 + local_68;
         }

         if (bVar10 == 0) goto LAB_00105abe;
         local_60 = LZCOUNT((uint)bVar10) + -0x17 + ( 8 - (int)uVar24 ) * 8;
      }
 else {
         local_58 = (ulong*)( (long)puVar13 + lVar16 + -0xe );
         local_68 = *local_58;
         if (bVar10 == 0) goto LAB_00106130;
         local_60 = LZCOUNT((uint)bVar10) - 0x17;
         if (0xffffffffffffff88 < uVar24) goto LAB_00105ac5;
      }

      puVar3 = (undefined2*)( (long)puVar4 - 7 );
      uVar22 = *param_5 >> 0x10 & 0xff;
      puVar25 = puVar17;
      puVar19 = puVar5;
      puVar31 = puVar18;
      if (( 7 < (long)puVar4 - (long)puVar18 ) && ( puVar18 < puVar3 )) {
         bVar11 = false;
         local_168 = local_f8;
         bVar12 = false;
         bVar29 = false;
         local_188 = (ulong*)local_98;
         local_180 = local_68;
         local_148 = local_e8;
         local_130 = local_b8;
         local_128 = local_88;
         local_160 = local_58;
         uVar14 = ( ulong )(-uVar22 & 0x3f);
         uVar24 = local_c8;
         uVar23 = local_60;
         do {
            puVar7 = param_5 + ( ( local_168 << ( (ulong)local_f0 & 0x3f ) ) >> uVar14 ) + 1;
            *param_1 = (short)*puVar7;
            local_f0 = *(byte*)( (long)puVar7 + 2 ) + local_f0;
            param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
            puVar7 = param_5 + ( ( uVar24 << ( (ulong)local_c0 & 0x3f ) ) >> uVar14 ) + 1;
            *puVar19 = (short)*puVar7;
            local_c0 = *(byte*)( (long)puVar7 + 2 ) + local_c0;
            puVar8 = param_5 + ( ( ulong )((long)local_188 << ( (ulong)local_90 & 0x3f )) >> uVar14 ) + 1;
            puVar19 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar19 );
            *puVar25 = (short)*puVar8;
            local_90 = *(byte*)( (long)puVar8 + 2 ) + local_90;
            puVar25 = (undefined2*)( (long)puVar25 + ( ulong ) * (byte*)( (long)puVar8 + 3 ) );
            puVar7 = param_5 + ( ( local_180 << ( (ulong)uVar23 & 0x3f ) ) >> uVar14 ) + 1;
            *puVar31 = (short)*puVar7;
            uVar23 = uVar23 + *(byte*)( (long)puVar7 + 2 );
            puVar8 = param_5 + ( ( local_168 << ( (ulong)local_f0 & 0x3f ) ) >> uVar14 ) + 1;
            puVar31 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar31 );
            *param_1 = (short)*puVar8;
            local_f0 = *(byte*)( (long)puVar8 + 2 ) + local_f0;
            param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar8 + 3 ) + (long)param_1 );
            puVar7 = param_5 + ( ( uVar24 << ( (ulong)local_c0 & 0x3f ) ) >> uVar14 ) + 1;
            *puVar19 = (short)*puVar7;
            local_c0 = *(byte*)( (long)puVar7 + 2 ) + local_c0;
            puVar19 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar19 );
            puVar7 = param_5 + ( ( ulong )((long)local_188 << ( (ulong)local_90 & 0x3f )) >> uVar14 ) + 1;
            *puVar25 = (short)*puVar7;
            local_90 = *(byte*)( (long)puVar7 + 2 ) + local_90;
            puVar25 = (undefined2*)( (long)puVar25 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
            puVar7 = param_5 + ( ( local_180 << ( (ulong)uVar23 & 0x3f ) ) >> uVar14 ) + 1;
            *puVar31 = (short)*puVar7;
            uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
            puVar8 = param_5 + ( ( local_168 << ( (ulong)local_f0 & 0x3f ) ) >> uVar14 ) + 1;
            puVar31 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar31 );
            *param_1 = (short)*puVar8;
            local_f0 = *(byte*)( (long)puVar8 + 2 ) + local_f0;
            puVar7 = param_5 + ( ( uVar24 << ( (ulong)local_c0 & 0x3f ) ) >> uVar14 ) + 1;
            param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar8 + 3 ) + (long)param_1 );
            *puVar19 = (short)*puVar7;
            local_c0 = *(byte*)( (long)puVar7 + 2 ) + local_c0;
            puVar8 = param_5 + ( ( ulong )((long)local_188 << ( (ulong)local_90 & 0x3f )) >> uVar14 ) + 1;
            puVar19 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar19 );
            *puVar25 = (short)*puVar8;
            local_90 = *(byte*)( (long)puVar8 + 2 ) + local_90;
            puVar25 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar8 + 3 ) + (long)puVar25 );
            puVar7 = param_5 + ( ( local_180 << ( (ulong)uVar23 & 0x3f ) ) >> uVar14 ) + 1;
            *puVar31 = (short)*puVar7;
            uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
            puVar31 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar31 );
            puVar7 = param_5 + ( ( local_168 << ( (ulong)local_f0 & 0x3f ) ) >> uVar14 ) + 1;
            *param_1 = (short)*puVar7;
            uVar27 = *(byte*)( (long)puVar7 + 2 ) + local_f0;
            param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)param_1 );
            puVar7 = param_5 + ( ( uVar24 << ( (ulong)local_c0 & 0x3f ) ) >> uVar14 ) + 1;
            *puVar19 = (short)*puVar7;
            local_c0 = *(byte*)( (long)puVar7 + 2 ) + local_c0;
            puVar19 = (undefined2*)( (long)puVar19 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
            puVar7 = param_5 + ( ( ulong )((long)local_188 << ( (ulong)local_90 & 0x3f )) >> uVar14 ) + 1;
            *puVar25 = (short)*puVar7;
            puVar25 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar25 );
            puVar8 = param_5 + ( ( local_180 << ( (ulong)uVar23 & 0x3f ) ) >> uVar14 ) + 1;
            local_90 = *(byte*)( (long)puVar7 + 2 ) + local_90;
            *puVar31 = (short)*puVar8;
            local_60 = *(byte*)( (long)puVar8 + 2 ) + uVar23;
            puVar31 = (undefined2*)( (long)puVar31 + ( ulong ) * (byte*)( (long)puVar8 + 3 ) );
            if (local_148 < puVar20) {
               iVar15 = 3;
               local_f0 = uVar27;
            }
 else {
               bVar26 = true;
               local_f0 = uVar27 & 7;
               local_148 = (ulong*)( (long)local_148 - ( ulong )(uVar27 >> 3) );
               local_168 = *local_148;
               iVar15 = 0;
            }

            if (local_130 < puVar30) {
               iVar15 = 3;
            }
 else {
               bVar11 = true;
               local_130 = (ulong*)( (long)local_130 - ( ulong )(local_c0 >> 3) );
               uVar24 = *local_130;
               local_c0 = local_c0 & 7;
            }

            if (local_128 < puVar33) {
               iVar15 = 3;
            }
 else {
               bVar12 = true;
               local_128 = (ulong*)( (long)local_128 - ( ulong )(local_90 >> 3) );
               local_188 = (ulong*)*local_128;
               local_90 = local_90 & 7;
            }

            if (local_160 < puVar2) {
               if (bVar26) {
                  local_e8 = local_148;
                  local_f8 = local_168;
               }

               if (bVar11) {
                  local_b8 = local_130;
                  local_c8 = uVar24;
               }

               if (bVar12) {
                  local_88 = local_128;
                  local_98 = (ulong)local_188;
               }

               if (bVar29) goto LAB_00107238;
               goto LAB_0010642a;
            }

            uVar23 = local_60 & 7;
            local_160 = (ulong*)( (long)local_160 - ( ulong )(local_60 >> 3) );
            local_180 = *local_160;
            bVar29 = iVar15 == 0 && puVar31 < puVar3;
         }
 while ( iVar15 == 0 && puVar31 < puVar3 );
         if (bVar26) {
            local_e8 = local_148;
            local_f8 = local_168;
         }

         if (bVar11) {
            local_b8 = local_130;
            local_c8 = uVar24;
         }

         local_60 = uVar23;
         if (bVar12) {
            local_88 = local_128;
            local_98 = (ulong)local_188;
         }

         LAB_00107238:local_58 = local_160;
         local_68 = local_180;
      }

      LAB_0010642a:bVar26 = ( puVar17 < puVar19 || puVar5 < param_1 ) || puVar18 < puVar25;
      uVar24 = (ulong)bVar26;
      if (bVar26) goto LAB_00105abe;
      uVar14 = (ulong)local_f0;
      uVar32 = (long)puVar5 - (long)param_1;
      iVar15 = (int)puVar1;
      if ((long)uVar32 < 8) {
         if (local_f0 < 0x41) {
            if (local_e8 < puVar20) {
               if (puVar1 != local_e8) {
                  uVar23 = local_f0 >> 3;
                  uVar14 = (ulong)uVar23;
                  if ((ulong*)( (long)local_e8 - uVar14 ) < puVar1) {
                     uVar23 = (int)local_e8 - iVar15;
                     uVar14 = (ulong)uVar23;
                  }

                  local_e8 = (ulong*)( (long)local_e8 - uVar14 );
                  local_f8 = *local_e8;
                  local_f0 = local_f0 + uVar23 * -8;
               }

            }
 else {
               BIT_reloadDStream_internal(&local_f8);
            }

            goto LAB_001065fe;
         }

         local_e8 = &zeroFilled_0;
         local_188 = &zeroFilled_0;
         uVar14 = local_f8;
         uVar23 = local_f0;
         if (1 < (long)uVar32) goto LAB_00107534;
      }
 else {
         uVar21 = local_f8;
         uVar23 = local_f0;
         if (uVar22 < 0xc) {
            if (local_f0 < 0x41) {
               uVar27 = -uVar22 & 0x3f;
               local_1b0 = local_e8;
               bVar26 = false;
               do {
                  uVar23 = (uint)uVar14;
                  if (local_1b0 < puVar20) {
                     if (puVar1 == local_1b0) goto LAB_001073e2;
                     puVar28 = (ulong*)( (long)local_1b0 - ( ulong )(uVar23 >> 3) );
                     if (puVar1 <= puVar28) {
                        uVar21 = *puVar28;
                        uVar23 = uVar23 + ( uVar23 >> 3 ) * -8;
                        local_1b0 = puVar28;
                        goto LAB_00107aa2;
                     }

                     uVar27 = (int)local_1b0 - iVar15;
                     local_1b0 = (ulong*)( (long)local_1b0 - (ulong)uVar27 );
                     uVar23 = uVar23 + uVar27 * -8;
                     uVar21 = *local_1b0;
                     LAB_00107bd6:local_e8 = local_1b0;
                     uVar32 = (long)puVar5 - (long)param_1;
                     local_f8 = uVar21;
                     local_f0 = uVar23;
                     goto LAB_001065fe;
                  }

                  uVar23 = uVar23 & 7;
                  local_1b0 = (ulong*)( (long)local_1b0 - ( uVar14 >> 3 ) );
                  uVar21 = *local_1b0;
                  LAB_00107aa2:bVar26 = param_1 < (undefined2*)( (long)puVar5 - 9U );
                  if (!bVar26) goto LAB_00107bd6;
                  puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
                  *param_1 = (short)*puVar7;
                  uVar23 = uVar23 + *(byte*)( (long)puVar7 + 2 );
                  param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)param_1 );
                  puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
                  *param_1 = (short)*puVar7;
                  uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
                  for (int i = 0; i < 3; i++) {
                     param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
                     puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 63 ) ) >> uVar27 ) + 1;
                     *param_1 = (short)*puVar7;
                     uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
                  }

                  uVar14 = (ulong)uVar23;
                  param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)param_1 );
               }
 while ( uVar23 < 0x41 );
            }

         }
 else if (local_f0 < 0x41) {
            local_1b0 = local_e8;
            bVar26 = false;
            uVar27 = -uVar22 & 0x3f;
            do {
               uVar23 = (uint)uVar14;
               if (local_1b0 < puVar20) {
                  if (puVar1 == local_1b0) {
                     LAB_001073e2:if (bVar26) {
                        local_f8 = uVar21;
                        local_f0 = uVar23;
                        local_e8 = puVar1;
                     }

                     uVar32 = (long)puVar5 - (long)param_1;
                  }
 else {
                     puVar28 = (ulong*)( (long)local_1b0 - ( uVar14 >> 3 ) );
                     if (puVar1 <= puVar28) {
                        uVar21 = *puVar28;
                        uVar23 = uVar23 + (int)( uVar14 >> 3 ) * -8;
                        local_1b0 = puVar28;
                        goto LAB_001064cc;
                     }

                     uVar27 = (int)local_1b0 - iVar15;
                     local_1b0 = (ulong*)( (long)local_1b0 - (ulong)uVar27 );
                     uVar21 = *local_1b0;
                     uVar23 = uVar23 + uVar27 * -8;
                     LAB_001065da:local_e8 = local_1b0;
                     uVar32 = (long)puVar5 - (long)param_1;
                     local_f8 = uVar21;
                     local_f0 = uVar23;
                  }

                  goto LAB_001065fe;
               }

               uVar23 = uVar23 & 7;
               local_1b0 = (ulong*)( (long)local_1b0 - ( uVar14 >> 3 ) );
               uVar21 = *local_1b0;
               LAB_001064cc:bVar26 = param_1 < (undefined2*)( (long)puVar5 - 7U );
               if (!bVar26) goto LAB_001065da;
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *param_1 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)param_1 );
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *param_1 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *param_1 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)param_1 );
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *param_1 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               uVar14 = (ulong)uVar23;
               param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)param_1 );
            }
 while ( uVar23 < 0x41 );
         }

         local_f0 = uVar23;
         local_f8 = uVar21;
         local_e8 = &zeroFilled_0;
         uVar32 = (long)puVar5 - (long)param_1;
         LAB_001065fe:if (uVar32 < 2) {
            local_188 = local_e8;
         }
 else {
            uVar14 = local_f8;
            uVar23 = local_f0;
            if (local_f0 < 0x41) {
               bVar26 = false;
               local_188 = local_e8;
               do {
                  if (local_188 < puVar20) {
                     if (puVar1 == local_188) {
                        puVar20 = local_e8;
                        if (bVar26) {
                           puVar20 = local_188;
                           local_f8 = uVar14;
                           local_f0 = uVar23;
                           local_e8 = puVar1;
                        }

                     }
 else {
                        puVar28 = (ulong*)( (long)local_188 - ( ulong )(uVar23 >> 3) );
                        if (puVar1 <= puVar28) {
                           uVar27 = uVar23 + ( uVar23 >> 3 ) * -8;
                           uVar14 = *puVar28;
                           local_188 = puVar28;
                           goto LAB_00106661;
                        }

                        uVar27 = (int)local_188 - iVar15;
                        local_188 = (ulong*)( (long)local_188 - (ulong)uVar27 );
                        uVar27 = uVar23 + uVar27 * -8;
                        uVar14 = *local_188;
                        LAB_001066f6:local_e8 = local_188;
                        puVar20 = local_188;
                        local_f8 = uVar14;
                        local_f0 = uVar27;
                     }

                     goto LAB_00106712;
                  }

                  uVar27 = uVar23 & 7;
                  local_188 = (ulong*)( (long)local_188 - ( ulong )(uVar23 >> 3) );
                  uVar14 = *local_188;
                  LAB_00106661:bVar26 = param_1 <= puVar5 + -1;
                  if (!bVar26) goto LAB_001066f6;
                  puVar7 = param_5 + ( ( uVar14 << ( (ulong)uVar27 & 0x3f ) ) >> ( -uVar22 & 0x3f ) ) + 1;
                  *param_1 = (short)*puVar7;
                  uVar23 = uVar27 + *(byte*)( (long)puVar7 + 2 );
                  param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               }
 while ( uVar23 < 0x41 );
            }

            LAB_00107534:local_f0 = uVar23;
            local_f8 = uVar14;
            local_e8 = &zeroFilled_0;
            local_188 = &zeroFilled_0;
            puVar20 = local_188;
            LAB_00106712:local_188 = puVar20;
            if (param_1 <= puVar5 + -1) {
               do {
                  puVar7 = param_5 + ( ( local_f8 << ( (ulong)local_f0 & 0x3f ) ) >> ( -uVar22 & 0x3f ) ) + 1;
                  *param_1 = (short)*puVar7;
                  local_f0 = local_f0 + *(byte*)( (long)puVar7 + 2 );
                  param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               }
 while ( param_1 <= puVar5 + -1 );
            }

         }

      }

      if (param_1 < puVar5) {
         puVar7 = param_5 + ( ( local_f8 << ( (ulong)local_f0 & 0x3f ) ) >> ( ( ulong ) - uVar22 & 0x3f ) ) + 1;
         *(char*)param_1 = (char)*puVar7;
         if (*(char*)( (long)puVar7 + 3 ) == '\x01') {
            local_f0 = *(byte*)( (long)puVar7 + 2 ) + local_f0;
         }
 else if (( local_f0 < 0x40 ) && ( local_f0 = 0x40 < local_f0 )) {
            local_f0 = 0x40;
         }

      }

      uVar14 = (ulong)local_c0;
      uVar32 = (long)puVar17 - (long)puVar19;
      iVar15 = (int)puVar6;
      if (7 < (long)uVar32) {
         uVar21 = local_c8;
         puVar20 = local_b8;
         uVar23 = local_c0;
         if (uVar22 < 0xc) {
            if (local_c0 < 0x41) {
               bVar26 = false;
               uVar27 = -uVar22 & 0x3f;
               do {
                  uVar23 = (uint)uVar14;
                  if (puVar20 < puVar30) {
                     if (puVar6 == puVar20) goto LAB_0010739a;
                     puVar28 = (ulong*)( (long)puVar20 - ( uVar14 >> 3 ) );
                     if (puVar28 < puVar6) goto LAB_00106906;
                     uVar23 = uVar23 + (int)( uVar14 >> 3 ) * -8;
                     uVar21 = *puVar28;
                  }
 else {
                     uVar23 = uVar23 & 7;
                     puVar28 = (ulong*)( (long)puVar20 - ( uVar14 >> 3 ) );
                     uVar21 = *puVar28;
                  }

                  bVar26 = puVar19 < (undefined2*)( (long)puVar17 + -9 );
                  if (!bVar26) goto LAB_00106919;
                  puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
                  *puVar19 = (short)*puVar7;
                  uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
                  puVar19 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar19 );
                  puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
                  *puVar19 = (short)*puVar7;
                  uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
                  puVar19 = (undefined2*)( (long)puVar19 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
                  puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
                  *puVar19 = (short)*puVar7;
                  uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
                  puVar19 = (undefined2*)( (long)puVar19 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
                  puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
                  *puVar19 = (short)*puVar7;
                  uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
                  puVar19 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar19 );
                  puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
                  *puVar19 = (short)*puVar7;
                  uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
                  uVar14 = (ulong)uVar23;
                  puVar19 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar19 );
                  puVar20 = puVar28;
               }
 while ( uVar23 < 0x41 );
            }

         }
 else if (local_c0 < 0x41) {
            bVar26 = false;
            uVar27 = -uVar22 & 0x3f;
            do {
               uVar23 = (uint)uVar14;
               if (puVar20 < puVar30) {
                  if (puVar6 == puVar20) goto LAB_0010739a;
                  puVar28 = (ulong*)( (long)puVar20 - ( uVar14 >> 3 ) );
                  if (puVar28 < puVar6) goto LAB_00106906;
                  uVar23 = uVar23 + (int)( uVar14 >> 3 ) * -8;
                  uVar21 = *puVar28;
               }
 else {
                  uVar23 = uVar23 & 7;
                  puVar28 = (ulong*)( (long)puVar20 - ( uVar14 >> 3 ) );
                  uVar21 = *puVar28;
               }

               bVar26 = puVar19 < (undefined2*)( (long)puVar17 + -7 );
               if (!bVar26) goto LAB_00106919;
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *puVar19 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               puVar19 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar19 );
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *puVar19 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               puVar19 = (undefined2*)( (long)puVar19 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *puVar19 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               puVar19 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar19 );
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *puVar19 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               uVar14 = (ulong)uVar23;
               puVar19 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar19 );
               puVar20 = puVar28;
            }
 while ( uVar23 < 0x41 );
         }

         local_c0 = uVar23;
         local_c8 = uVar21;
         local_b8 = &zeroFilled_0;
         uVar32 = (long)puVar17 - (long)puVar19;
         goto LAB_00106938;
      }

      if (local_c0 < 0x41) {
         if (local_b8 < puVar30) {
            if (puVar6 != local_b8) {
               uVar23 = local_c0 >> 3;
               uVar14 = (ulong)uVar23;
               if ((ulong*)( (long)local_b8 - uVar14 ) < puVar6) {
                  uVar23 = (int)local_b8 - iVar15;
                  uVar14 = (ulong)uVar23;
               }

               local_b8 = (ulong*)( (long)local_b8 - uVar14 );
               local_c8 = *local_b8;
               local_c0 = local_c0 + uVar23 * -8;
            }

         }
 else {
            BIT_reloadDStream_internal(&local_c8);
         }

         goto LAB_00106938;
      }

      local_b8 = &zeroFilled_0;
      local_1b0 = &zeroFilled_0;
      uVar14 = local_c8;
      uVar23 = local_c0;
      if (1 < (long)uVar32) goto LAB_00107426;
      goto LAB_00106a8e;
   }

   goto LAB_00105abe;
   LAB_0010739a:if (bVar26) {
      local_c8 = uVar21;
      local_c0 = uVar23;
      local_b8 = puVar6;
   }

   uVar32 = (long)puVar17 - (long)puVar19;
   goto LAB_00106938;
   LAB_00106906:uVar27 = (int)puVar20 - iVar15;
   puVar28 = (ulong*)( (long)puVar20 - (ulong)uVar27 );
   uVar23 = uVar23 + uVar27 * -8;
   uVar21 = *puVar28;
   LAB_00106919:uVar32 = (long)puVar17 - (long)puVar19;
   local_c8 = uVar21;
   local_c0 = uVar23;
   local_b8 = puVar28;
   LAB_00106938:if (uVar32 < 2) {
      local_1b0 = local_b8;
   }
 else {
      uVar14 = local_c8;
      uVar23 = local_c0;
      if (local_c0 < 0x41) {
         bVar26 = false;
         local_1b0 = local_b8;
         do {
            if (local_1b0 < puVar30) {
               if (puVar6 == local_1b0) {
                  puVar20 = local_b8;
                  if (bVar26) {
                     puVar20 = local_1b0;
                     local_c8 = uVar14;
                     local_c0 = uVar23;
                     local_b8 = puVar6;
                  }

               }
 else {
                  puVar20 = (ulong*)( (long)local_1b0 - ( ulong )(uVar23 >> 3) );
                  if (puVar6 <= puVar20) {
                     uVar27 = uVar23 + ( uVar23 >> 3 ) * -8;
                     uVar14 = *puVar20;
                     local_1b0 = puVar20;
                     goto LAB_001069a0;
                  }

                  uVar27 = (int)local_1b0 - iVar15;
                  local_1b0 = (ulong*)( (long)local_1b0 - (ulong)uVar27 );
                  uVar27 = uVar23 + uVar27 * -8;
                  uVar14 = *local_1b0;
                  LAB_00106a1c:local_b8 = local_1b0;
                  puVar20 = local_1b0;
                  local_c8 = uVar14;
                  local_c0 = uVar27;
               }

               goto LAB_00106a38;
            }

            uVar27 = uVar23 & 7;
            local_1b0 = (ulong*)( (long)local_1b0 - ( ulong )(uVar23 >> 3) );
            uVar14 = *local_1b0;
            LAB_001069a0:bVar26 = puVar19 <= puVar17 + -1;
            if (!bVar26) goto LAB_00106a1c;
            puVar7 = param_5 + ( ( uVar14 << ( (ulong)uVar27 & 0x3f ) ) >> ( -uVar22 & 0x3f ) ) + 1;
            *puVar19 = (short)*puVar7;
            uVar23 = uVar27 + *(byte*)( (long)puVar7 + 2 );
            puVar19 = (undefined2*)( (long)puVar19 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
         }
 while ( uVar23 < 0x41 );
      }

      LAB_00107426:local_c0 = uVar23;
      local_c8 = uVar14;
      local_b8 = &zeroFilled_0;
      local_1b0 = &zeroFilled_0;
      puVar20 = local_1b0;
      LAB_00106a38:local_1b0 = puVar20;
      if (puVar19 <= puVar17 + -1) {
         do {
            puVar7 = param_5 + ( ( local_c8 << ( (ulong)local_c0 & 0x3f ) ) >> ( -uVar22 & 0x3f ) ) + 1;
            *puVar19 = (short)*puVar7;
            local_c0 = local_c0 + *(byte*)( (long)puVar7 + 2 );
            puVar19 = (undefined2*)( (long)puVar19 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
         }
 while ( puVar19 <= puVar17 + -1 );
      }

   }

   LAB_00106a8e:if (puVar19 < puVar17) {
      puVar7 = param_5 + ( ( local_c8 << ( (ulong)local_c0 & 0x3f ) ) >> ( ( ulong ) - uVar22 & 0x3f ) ) + 1;
      *(char*)puVar19 = (char)*puVar7;
      if (*(char*)( (long)puVar7 + 3 ) == '\x01') {
         local_c0 = *(byte*)( (long)puVar7 + 2 ) + local_c0;
      }
 else if (( local_c0 < 0x40 ) && ( local_c0 = 0x40 < local_c0 )) {
         local_c0 = 0x40;
      }

   }

   uVar14 = (ulong)local_90;
   uVar32 = (long)puVar18 - (long)puVar25;
   iVar15 = (int)puVar9;
   if (7 < (long)uVar32) {
      uVar21 = local_98;
      puVar20 = local_88;
      uVar23 = local_90;
      if (uVar22 < 0xc) {
         if (local_90 < 0x41) {
            bVar26 = false;
            uVar27 = -uVar22 & 0x3f;
            do {
               uVar23 = (uint)uVar14;
               if (puVar20 < puVar33) {
                  if (puVar9 == puVar20) goto LAB_00107334;
                  puVar30 = (ulong*)( (long)puVar20 - ( uVar14 >> 3 ) );
                  if (puVar30 < puVar9) goto LAB_00106c34;
                  uVar21 = *puVar30;
                  uVar23 = uVar23 + (int)( uVar14 >> 3 ) * -8;
               }
 else {
                  uVar23 = uVar23 & 7;
                  puVar30 = (ulong*)( (long)puVar20 - ( uVar14 >> 3 ) );
                  uVar21 = *puVar30;
               }

               bVar26 = puVar25 < (undefined2*)( (long)puVar18 - 9U );
               if (!bVar26) goto LAB_00106c4c;
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *puVar25 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               puVar8 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               puVar25 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar25 );
               *puVar25 = (short)*puVar8;
               uVar23 = *(byte*)( (long)puVar8 + 2 ) + uVar23;
               puVar25 = (undefined2*)( (long)puVar25 + ( ulong ) * (byte*)( (long)puVar8 + 3 ) );
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *puVar25 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               puVar25 = (undefined2*)( (long)puVar25 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *puVar25 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               puVar25 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar25 );
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *puVar25 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               uVar14 = (ulong)uVar23;
               puVar25 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar25 );
               puVar20 = puVar30;
            }
 while ( uVar23 < 0x41 );
         }

      }
 else if (local_90 < 0x41) {
         bVar26 = false;
         uVar27 = -uVar22 & 0x3f;
         do {
            uVar23 = (uint)uVar14;
            if (puVar20 < puVar33) {
               if (puVar9 == puVar20) goto LAB_00107334;
               puVar30 = (ulong*)( (long)puVar20 - ( uVar14 >> 3 ) );
               if (puVar30 < puVar9) goto LAB_00106c34;
               uVar21 = *puVar30;
               uVar23 = uVar23 + (int)( uVar14 >> 3 ) * -8;
            }
 else {
               uVar23 = uVar23 & 7;
               puVar30 = (ulong*)( (long)puVar20 - ( uVar14 >> 3 ) );
               uVar21 = *puVar30;
            }

            bVar26 = puVar25 < (undefined2*)( (long)puVar18 - 7U );
            if (!bVar26) goto LAB_00106c4c;
            puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
            *puVar25 = (short)*puVar7;
            uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
            puVar8 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
            puVar25 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar25 );
            *puVar25 = (short)*puVar8;
            uVar23 = *(byte*)( (long)puVar8 + 2 ) + uVar23;
            puVar25 = (undefined2*)( (long)puVar25 + ( ulong ) * (byte*)( (long)puVar8 + 3 ) );
            puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
            *puVar25 = (short)*puVar7;
            uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
            puVar25 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar25 );
            puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
            *puVar25 = (short)*puVar7;
            uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
            uVar14 = (ulong)uVar23;
            puVar25 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar25 );
            puVar20 = puVar30;
         }
 while ( uVar23 < 0x41 );
      }

      local_90 = uVar23;
      local_98 = uVar21;
      local_88 = &zeroFilled_0;
      uVar32 = (long)puVar18 - (long)puVar25;
      goto LAB_00106c6b;
   }

   if (local_90 < 0x41) {
      if (local_88 < puVar33) {
         if (puVar9 != local_88) {
            uVar23 = local_90 >> 3;
            uVar14 = (ulong)uVar23;
            if ((ulong*)( (long)local_88 - uVar14 ) < puVar9) {
               uVar23 = (int)local_88 - iVar15;
               uVar14 = (ulong)uVar23;
            }

            local_88 = (ulong*)( (long)local_88 - uVar14 );
            local_98 = *local_88;
            local_90 = local_90 + uVar23 * -8;
         }

      }
 else {
         BIT_reloadDStream_internal(&local_98);
      }

      goto LAB_00106c6b;
   }

   local_88 = &zeroFilled_0;
   puVar20 = &zeroFilled_0;
   uVar14 = local_98;
   uVar23 = local_90;
   if (1 < (long)uVar32) goto LAB_001075d4;
   goto LAB_00106dad;
   LAB_00107334:if (bVar26) {
      local_98 = uVar21;
      local_90 = uVar23;
      local_88 = puVar9;
   }

   uVar32 = (long)puVar18 - (long)puVar25;
   goto LAB_00106c6b;
   code_r0x00106e7c:puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
   *puVar31 = (short)*puVar7;
   uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
   puVar8 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
   puVar31 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar31 );
   *puVar31 = (short)*puVar8;
   uVar23 = *(byte*)( (long)puVar8 + 2 ) + uVar23;
   puVar31 = (undefined2*)( (long)puVar31 + ( ulong ) * (byte*)( (long)puVar8 + 3 ) );
   puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
   *puVar31 = (short)*puVar7;
   uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
   puVar31 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar31 );
   puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
   *puVar31 = (short)*puVar7;
   uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
   uVar14 = (ulong)uVar23;
   puVar31 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar31 );
   puVar30 = puVar33;
   if (0x40 < uVar23) goto LAB_001076e1;
   goto LAB_00106f19;
   LAB_00106c34:uVar27 = (int)puVar20 - iVar15;
   puVar30 = (ulong*)( (long)puVar20 - (ulong)uVar27 );
   uVar23 = uVar23 + uVar27 * -8;
   uVar21 = *puVar30;
   LAB_00106c4c:uVar32 = (long)puVar18 - (long)puVar25;
   local_98 = uVar21;
   local_90 = uVar23;
   local_88 = puVar30;
   LAB_00106c6b:puVar20 = local_88;
   if (1 < uVar32) {
      uVar14 = local_98;
      uVar23 = local_90;
      if (local_90 < 0x41) {
         bVar26 = false;
         puVar30 = local_88;
         do {
            if (puVar30 < puVar33) {
               if (puVar9 == puVar30) {
                  puVar20 = local_88;
                  uVar32 = local_98;
                  uVar27 = local_90;
                  puVar28 = local_88;
                  if (bVar26) {
                     puVar20 = puVar30;
                     uVar32 = uVar14;
                     uVar27 = uVar23;
                     puVar28 = puVar9;
                  }

                  goto LAB_00106d5d;
               }

               puVar20 = (ulong*)( (long)puVar30 - ( ulong )(uVar23 >> 3) );
               if (puVar20 < puVar9) {
                  uVar27 = (int)puVar30 - iVar15;
                  puVar20 = (ulong*)( (long)puVar30 - (ulong)uVar27 );
                  uVar32 = *puVar20;
                  uVar27 = uVar23 + uVar27 * -8;
                  puVar28 = puVar20;
                  goto LAB_00106d5d;
               }

               uVar27 = uVar23 + ( uVar23 >> 3 ) * -8;
               uVar14 = *puVar20;
            }
 else {
               uVar27 = uVar23 & 7;
               puVar20 = (ulong*)( (long)puVar30 - ( ulong )(uVar23 >> 3) );
               uVar14 = *puVar20;
            }

            bVar26 = puVar25 <= puVar18 + -1;
            uVar32 = uVar14;
            puVar28 = puVar20;
            if (!bVar26) goto LAB_00106d5d;
            puVar7 = param_5 + ( ( uVar14 << ( (ulong)uVar27 & 0x3f ) ) >> ( -uVar22 & 0x3f ) ) + 1;
            *puVar25 = (short)*puVar7;
            uVar23 = uVar27 + *(byte*)( (long)puVar7 + 2 );
            puVar25 = (undefined2*)( (long)puVar25 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
            puVar30 = puVar20;
         }
 while ( uVar23 < 0x41 );
      }

      LAB_001075d4:local_90 = uVar23;
      local_98 = uVar14;
      local_88 = &zeroFilled_0;
      puVar20 = &zeroFilled_0;
      uVar32 = local_98;
      uVar27 = local_90;
      puVar28 = local_88;
      LAB_00106d5d:local_88 = puVar28;
      local_90 = uVar27;
      local_98 = uVar32;
      if (puVar25 <= puVar18 + -1) {
         do {
            puVar7 = param_5 + ( ( local_98 << ( (ulong)local_90 & 0x3f ) ) >> ( -uVar22 & 0x3f ) ) + 1;
            *puVar25 = (short)*puVar7;
            local_90 = local_90 + *(byte*)( (long)puVar7 + 2 );
            puVar25 = (undefined2*)( (long)puVar25 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
         }
 while ( puVar25 <= puVar18 + -1 );
      }

   }

   LAB_00106dad:if (puVar25 < puVar18) {
      puVar7 = param_5 + ( ( local_98 << ( (ulong)local_90 & 0x3f ) ) >> ( ( ulong ) - uVar22 & 0x3f ) ) + 1;
      *(char*)puVar25 = (char)*puVar7;
      if (*(char*)( (long)puVar7 + 3 ) == '\x01') {
         local_90 = *(byte*)( (long)puVar7 + 2 ) + local_90;
      }
 else if (( local_90 < 0x40 ) && ( local_90 = 0x40 < local_90 )) {
         local_90 = 0x40;
      }

   }

   uVar14 = (ulong)local_60;
   uVar32 = (long)puVar4 - (long)puVar31;
   iVar15 = (int)puVar13;
   if (uVar32 < 8) {
      if (local_60 < 0x41) {
         if (local_58 < puVar2) {
            if (puVar13 != local_58) {
               uVar23 = local_60 >> 3;
               uVar14 = (ulong)uVar23;
               if ((ulong*)( (long)local_58 - uVar14 ) < puVar13) {
                  uVar23 = (int)local_58 - iVar15;
                  uVar14 = (ulong)uVar23;
               }

               local_58 = (ulong*)( (long)local_58 - uVar14 );
               local_68 = *local_58;
               local_60 = local_60 + uVar23 * -8;
            }

         }
 else {
            BIT_reloadDStream_internal(&local_68);
         }

         goto LAB_00106f87;
      }

      local_58 = &zeroFilled_0;
      puVar30 = &zeroFilled_0;
      uVar14 = local_68;
      uVar23 = local_60;
      if (1 < uVar32) goto LAB_001075fe;
   }
 else {
      uVar21 = local_68;
      uVar23 = local_60;
      if (uVar22 < 0xc) {
         if (local_60 < 0x41) {
            bVar26 = false;
            uVar27 = -uVar22 & 0x3f;
            puVar30 = local_58;
            do {
               uVar23 = (uint)uVar14;
               if (puVar30 < puVar2) {
                  if (puVar13 == puVar30) {
                     if (bVar26) {
                        local_68 = uVar21;
                        local_60 = uVar23;
                        local_58 = puVar13;
                     }

                     goto LAB_0010769a;
                  }

                  puVar33 = (ulong*)( (long)puVar30 - ( uVar14 >> 3 ) );
                  if (puVar13 <= puVar33) {
                     uVar21 = *puVar33;
                     uVar23 = uVar23 + (int)( uVar14 >> 3 ) * -8;
                     goto LAB_00107dca;
                  }

                  uVar27 = (int)puVar30 - iVar15;
                  puVar33 = (ulong*)( (long)puVar30 - (ulong)uVar27 );
                  uVar23 = uVar23 + uVar27 * -8;
                  uVar21 = *puVar33;
                  LAB_00107ee2:uVar32 = (long)puVar4 - (long)puVar31;
                  local_68 = uVar21;
                  local_60 = uVar23;
                  local_58 = puVar33;
                  goto LAB_00106f87;
               }

               uVar23 = uVar23 & 7;
               puVar33 = (ulong*)( (long)puVar30 - ( uVar14 >> 3 ) );
               uVar21 = *puVar33;
               LAB_00107dca:bVar26 = puVar31 < (undefined2*)( (long)puVar4 - 9U );
               if (!bVar26) goto LAB_00107ee2;
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *puVar31 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               puVar8 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               puVar31 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar31 );
               *puVar31 = (short)*puVar8;
               uVar23 = *(byte*)( (long)puVar8 + 2 ) + uVar23;
               puVar31 = (undefined2*)( (long)puVar31 + ( ulong ) * (byte*)( (long)puVar8 + 3 ) );
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *puVar31 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               puVar31 = (undefined2*)( (long)puVar31 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *puVar31 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               puVar31 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar31 );
               puVar7 = param_5 + ( ( uVar21 << ( (ulong)uVar23 & 0x3f ) ) >> uVar27 ) + 1;
               *puVar31 = (short)*puVar7;
               uVar23 = *(byte*)( (long)puVar7 + 2 ) + uVar23;
               uVar14 = (ulong)uVar23;
               puVar31 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puVar31 );
               puVar30 = puVar33;
            }
 while ( uVar23 < 0x41 );
         }

      }
 else if (local_60 < 0x41) {
         bVar26 = false;
         uVar27 = -uVar22 & 0x3f;
         puVar30 = local_58;
         LAB_00106f19:uVar23 = (uint)uVar14;
         if (puVar30 < puVar2) {
            if (puVar13 != puVar30) {
               puVar33 = (ulong*)( (long)puVar30 - ( uVar14 >> 3 ) );
               if (puVar13 <= puVar33) {
                  uVar23 = uVar23 + (int)( uVar14 >> 3 ) * -8;
                  uVar21 = *puVar33;
                  goto LAB_00106e74;
               }

               uVar27 = (int)puVar30 - iVar15;
               puVar33 = (ulong*)( (long)puVar30 - (ulong)uVar27 );
               uVar23 = uVar23 + uVar27 * -8;
               uVar21 = *puVar33;
               goto LAB_00106f68;
            }

            if (bVar26) {
               local_68 = uVar21;
               local_60 = uVar23;
               local_58 = puVar13;
            }

            LAB_0010769a:uVar32 = (long)puVar4 - (long)puVar31;
         }
 else {
            uVar23 = uVar23 & 7;
            puVar33 = (ulong*)( (long)puVar30 - ( uVar14 >> 3 ) );
            uVar21 = *puVar33;
            LAB_00106e74:bVar26 = puVar31 < puVar3;
            if (bVar26) goto code_r0x00106e7c;
            LAB_00106f68:uVar32 = (long)puVar4 - (long)puVar31;
            local_68 = uVar21;
            local_60 = uVar23;
            local_58 = puVar33;
         }

         goto LAB_00106f87;
      }

      LAB_001076e1:local_60 = uVar23;
      local_68 = uVar21;
      local_58 = &zeroFilled_0;
      uVar32 = (long)puVar4 - (long)puVar31;
      LAB_00106f87:puVar30 = local_58;
      if (1 < uVar32) {
         uVar14 = local_68;
         uVar23 = local_60;
         if (local_60 < 0x41) {
            puVar33 = local_58;
            do {
               if (puVar33 < puVar2) {
                  if (puVar13 == puVar33) {
                     puVar30 = local_58;
                     uVar32 = local_68;
                     uVar27 = local_60;
                     puVar28 = local_58;
                     if ((char)uVar24 != '\0') {
                        puVar30 = puVar33;
                        uVar32 = uVar14;
                        uVar27 = uVar23;
                        puVar28 = puVar13;
                     }

                     goto LAB_00107073;
                  }

                  puVar30 = (ulong*)( (long)puVar33 - ( ulong )(uVar23 >> 3) );
                  if (puVar30 < puVar13) {
                     uVar27 = (int)puVar33 - iVar15;
                     puVar30 = (ulong*)( (long)puVar33 - (ulong)uVar27 );
                     uVar32 = *puVar30;
                     uVar27 = uVar23 + uVar27 * -8;
                     puVar28 = puVar30;
                     goto LAB_00107073;
                  }

                  uVar27 = uVar23 + ( uVar23 >> 3 ) * -8;
                  uVar14 = *puVar30;
               }
 else {
                  uVar27 = uVar23 & 7;
                  puVar30 = (ulong*)( (long)puVar33 - ( ulong )(uVar23 >> 3) );
                  uVar14 = *puVar30;
               }

               uVar24 = ( ulong )(puVar31 <= puVar4 + -1);
               uVar32 = uVar14;
               puVar28 = puVar30;
               if (puVar31 > puVar4 + -1) goto LAB_00107073;
               puVar7 = param_5 + ( ( uVar14 << ( (ulong)uVar27 & 0x3f ) ) >> ( -uVar22 & 0x3f ) ) + 1;
               *puVar31 = (short)*puVar7;
               uVar23 = uVar27 + *(byte*)( (long)puVar7 + 2 );
               puVar31 = (undefined2*)( (long)puVar31 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               puVar33 = puVar30;
            }
 while ( uVar23 < 0x41 );
         }

         LAB_001075fe:local_60 = uVar23;
         local_68 = uVar14;
         local_58 = &zeroFilled_0;
         puVar30 = &zeroFilled_0;
         uVar32 = local_68;
         uVar27 = local_60;
         puVar28 = local_58;
         LAB_00107073:local_58 = puVar28;
         local_60 = uVar27;
         local_68 = uVar32;
         if (puVar31 <= puVar4 + -1) {
            do {
               puVar7 = param_5 + ( ( local_68 << ( (ulong)local_60 & 0x3f ) ) >> ( -uVar22 & 0x3f ) ) + 1;
               *puVar31 = (short)*puVar7;
               local_60 = local_60 + *(byte*)( (long)puVar7 + 2 );
               puVar31 = (undefined2*)( (long)puVar31 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
            }
 while ( puVar31 <= puVar4 + -1 );
         }

      }

   }

   if (puVar31 < puVar4) {
      param_5 = param_5 + ( ( local_68 << ( (ulong)local_60 & 0x3f ) ) >> ( ( ulong ) - uVar22 & 0x3f ) ) + 1;
      *(char*)puVar31 = (char)*param_5;
      if (*(char*)( (long)param_5 + 3 ) == '\x01') {
         local_60 = *(byte*)( (long)param_5 + 2 ) + local_60;
      }
 else if (( local_60 < 0x40 ) && ( local_60 = 0x40 < local_60 )) {
         local_60 = 0x40;
      }

   }

   if (( ( ( puVar9 != puVar20 ) || ( puVar13 != puVar30 ) ) || ( ( local_90 != 0x40 || ( puVar1 != local_188 || local_f0 != 0x40 ) ) || ( puVar6 != local_1b0 || local_c0 != 0x40 ) ) ) || ( uVar24 = local_60 != 0x40 )) {
      LAB_00105abe:uVar24 = 0xffffffffffffffec;
   }

   LAB_00105ac5:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar24;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong HUF_decompress4X2_usingDTable_internal(undefined2 *param_1, ulong param_2, ushort *param_3, ulong param_4, uint *param_5, uint param_6) {
   ulong *puVar1;
   ulong *puVar2;
   ulong *puVar3;
   undefined2 *puVar4;
   undefined2 *puVar5;
   ulong *puVar6;
   uint *puVar7;
   undefined2 *puVar8;
   char cVar9;
   bool bVar10;
   bool bVar11;
   int iVar12;
   uint uVar13;
   ulong uVar14;
   byte bVar15;
   uint uVar16;
   ulong uVar17;
   ulong *puVar18;
   ulong *puVar19;
   ulong uVar20;
   long lVar21;
   undefined2 *puVar22;
   undefined2 *puVar23;
   ulong *puVar24;
   int iVar25;
   bool bVar26;
   ulong uVar27;
   code *pcVar28;
   ulong uVar29;
   ulong *puVar30;
   int iVar31;
   ulong *puVar32;
   ulong *puVar33;
   int iVar34;
   uint uVar35;
   long in_FS_OFFSET;
   bool bVar36;
   byte local_1b8;
   ulong local_198;
   ulong local_190;
   ulong local_188;
   ulong *puStack_170;
   ulong uStack_168;
   undefined2 *puStack_158;
   undefined2 *puStack_150;
   undefined2 *puStack_140;
   ulong *puStack_138;
   ulong *puStack_130;
   ulong *puStack_128;
   ulong local_f8;
   uint uStack_f0;
   ulong *local_e8;
   ulong *local_e0;
   ulong *local_d8;
   ulong uStack_c8;
   uint uStack_c0;
   ulong *puStack_b8;
   ulong *puStack_b0;
   ulong *puStack_a8;
   ulong uStack_98;
   uint uStack_90;
   ulong *puStack_88;
   ulong *puStack_80;
   ulong *puStack_78;
   ulong uStack_68;
   uint uStack_60;
   ulong *puStack_58;
   ulong *puStack_50;
   ulong *puStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_6 & 1 ) == 0) {
      if (( 5 < param_2 ) && ( 9 < param_4 )) {
         puVar5 = (undefined2*)( (long)param_1 + param_2 );
         uVar17 = ( ulong ) * param_3;
         uVar20 = (ulong)param_3[1];
         uVar27 = (ulong)param_3[2];
         uVar29 = param_2 + 3 >> 2;
         lVar21 = ( param_4 - ( uVar17 + uVar20 ) ) - uVar27;
         puVar8 = (undefined2*)( (long)param_1 + uVar29 );
         puVar22 = (undefined2*)( (long)puVar8 + uVar29 );
         uVar14 = lVar21 - 6;
         puVar23 = (undefined2*)( (long)puVar22 + uVar29 );
         bVar26 = puVar5 < puVar23 || param_4 < uVar14;
         if (puVar5 < puVar23 || param_4 < uVar14) goto LAB_0010822d;
         if (uVar17 == 0) goto LAB_0010898c;
         puVar1 = (ulong*)( param_3 + 3 );
         puVar33 = (ulong*)( param_3 + 7 );
         bVar15 = *(byte*)( (long)param_3 + uVar17 + 5 );
         local_e8 = puVar1;
         local_e0 = puVar1;
         local_d8 = puVar33;
         if (7 < uVar17) {
            local_e8 = (ulong*)( (long)param_3 + ( uVar17 - 2 ) );
            local_f8 = *local_e8;
            if (bVar15 != 0) {
               uVar16 = 0x1f;
               if (bVar15 != 0) {
                  for (; bVar15 >> uVar16 == 0; uVar16 = uVar16 - 1) {}
               }

               uStack_f0 = ( uVar16 ^ 0x1f ) - 0x17;
               goto LAB_001082a8;
            }

            LAB_00108980:uVar14 = 0xffffffffffffffff;
            goto LAB_0010816d;
         }

         local_f8 = (ulong)(byte)param_3[3];
         switch (uVar17) {
            case 7:
        local_f8 = local_f8 + ((ulong)(byte)param_3[6] << 0x30);
            case 6:
        local_f8 = local_f8 + ((ulong)*(byte *)((long)param_3 + 0xb) << 0x28);
            case 5:
        local_f8 = local_f8 + ((ulong)(byte)param_3[5] << 0x20);
            case 4:
        local_f8 = local_f8 + (ulong)*(byte *)((long)param_3 + 9) * 0x1000000;
            case 3:
        local_f8 = local_f8 + (ulong)(byte)param_3[4] * 0x10000;
            case 2:
        local_f8 = (ulong)*(byte *)((long)param_3 + 7) * 0x100 + local_f8;
         }

         if (bVar15 == 0) goto LAB_0010822d;
         uVar16 = 0x1f;
         if (bVar15 != 0) {
            for (; bVar15 >> uVar16 == 0; uVar16 = uVar16 - 1) {}
         }

         uStack_f0 = ( ( uVar16 ^ 0x1f ) - 0x17 ) + ( 8 - ( uint ) * param_3 ) * 8;
         LAB_001082a8:if (uVar20 == 0) {
            LAB_0010898c:uVar14 = 0xffffffffffffffb8;
            goto LAB_0010816d;
         }

         puVar6 = (ulong*)( (long)puVar1 + uVar17 );
         puVar24 = puVar6 + 1;
         bVar15 = *(byte*)( (long)puVar6 + ( uVar20 - 1 ) );
         puStack_b0 = puVar6;
         puStack_a8 = puVar24;
         if (uVar20 < 8) {
            uStack_c8 = ( ulong )(byte) * puVar6;
            switch (uVar20) {
               case 7:
          uStack_c8 = uStack_c8 + ((ulong)*(byte *)((long)puVar6 + 6) << 0x30);
               case 6:
          uStack_c8 = uStack_c8 + ((ulong)*(byte *)((long)puVar6 + 5) << 0x28);
               case 5:
          uStack_c8 = uStack_c8 + ((ulong)*(byte *)((long)puVar6 + 4) << 0x20);
               case 4:
          uStack_c8 = uStack_c8 + (ulong)*(byte *)((long)puVar6 + 3) * 0x1000000;
               case 3:
          uStack_c8 = uStack_c8 + (ulong)*(byte *)((long)puVar6 + 2) * 0x10000;
               case 2:
          uStack_c8 = (ulong)*(byte *)((long)puVar6 + 1) * 0x100 + uStack_c8;
            }

            puStack_b8 = puVar6;
            if (bVar15 == 0) goto LAB_0010822d;
            uVar16 = 0x1f;
            if (bVar15 != 0) {
               for (; bVar15 >> uVar16 == 0; uVar16 = uVar16 - 1) {}
            }

            uStack_c0 = ( ( uVar16 ^ 0x1f ) - 0x17 ) + ( 8 - (uint)param_3[1] ) * 8;
         }
 else {
            puStack_b8 = (ulong*)( (long)puVar6 + ( uVar20 - 8 ) );
            uStack_c8 = *puStack_b8;
            if (bVar15 == 0) goto LAB_00108980;
            uVar16 = 0x1f;
            if (bVar15 != 0) {
               for (; bVar15 >> uVar16 == 0; uVar16 = uVar16 - 1) {}
            }

            uStack_c0 = ( uVar16 ^ 0x1f ) - 0x17;
         }

         if (uVar27 == 0) goto LAB_0010898c;
         puVar32 = (ulong*)( (long)puVar6 + uVar20 );
         puVar2 = puVar32 + 1;
         bVar15 = *(byte*)( (long)puVar32 + ( uVar27 - 1 ) );
         puStack_80 = puVar32;
         puStack_78 = puVar2;
         if (uVar27 < 8) {
            uStack_98 = ( ulong )(byte) * puVar32;
            switch (uVar27) {
               case 7:
          uStack_98 = ((ulong)*(byte *)((long)puVar32 + 6) << 0x30) + uStack_98;
               case 6:
          uStack_98 = ((ulong)*(byte *)((long)puVar32 + 5) << 0x28) + uStack_98;
               case 5:
          uStack_98 = uStack_98 + ((ulong)*(byte *)((long)puVar32 + 4) << 0x20);
               case 4:
          uStack_98 = uStack_98 + (ulong)*(byte *)((long)puVar32 + 3) * 0x1000000;
               case 3:
          uStack_98 = uStack_98 + (ulong)*(byte *)((long)puVar32 + 2) * 0x10000;
               case 2:
          uStack_98 = (ulong)*(byte *)((long)puVar32 + 1) * 0x100 + uStack_98;
            }

            puStack_88 = puVar32;
            if (bVar15 == 0) goto LAB_0010822d;
            uVar16 = 0x1f;
            if (bVar15 != 0) {
               for (; bVar15 >> uVar16 == 0; uVar16 = uVar16 - 1) {}
            }

            uStack_90 = ( ( uVar16 ^ 0x1f ) - 0x17 ) + ( 8 - (uint)param_3[2] ) * 8;
         }
 else {
            puStack_88 = (ulong*)( (long)puVar32 + ( uVar27 - 8 ) );
            uStack_98 = *puStack_88;
            if (bVar15 == 0) goto LAB_00108980;
            uVar16 = 0x1f;
            if (bVar15 != 0) {
               for (; bVar15 >> uVar16 == 0; uVar16 = uVar16 - 1) {}
            }

            uStack_90 = ( uVar16 ^ 0x1f ) - 0x17;
         }

         if (uVar14 == 0) goto LAB_0010898c;
         puVar30 = (ulong*)( (long)puVar32 + uVar27 );
         puVar3 = puVar30 + 1;
         bVar15 = *(byte*)( (long)puVar30 + lVar21 + -7 );
         puStack_50 = puVar30;
         puStack_48 = puVar3;
         if (uVar14 < 8) {
            uStack_68 = ( ulong )(byte) * puVar30;
            switch (uVar14) {
               case 7:
          uStack_68 = ((ulong)*(byte *)((long)puVar30 + 6) << 0x30) + uStack_68;
               case 6:
          uStack_68 = uStack_68 + ((ulong)*(byte *)((long)puVar30 + 5) << 0x28);
               case 5:
          uStack_68 = uStack_68 + ((ulong)*(byte *)((long)puVar30 + 4) << 0x20);
               case 4:
          uStack_68 = (ulong)*(byte *)((long)puVar30 + 3) * 0x1000000 + uStack_68;
               case 3:
          uStack_68 = uStack_68 + (ulong)*(byte *)((long)puVar30 + 2) * 0x10000;
               case 2:
          uStack_68 = (ulong)*(byte *)((long)puVar30 + 1) * 0x100 + uStack_68;
            }

            puStack_58 = puVar30;
            if (bVar15 == 0) goto LAB_0010822d;
            uVar16 = 0x1f;
            if (bVar15 != 0) {
               for (; bVar15 >> uVar16 == 0; uVar16 = uVar16 - 1) {}
            }

            uStack_60 = ( ( uVar16 ^ 0x1f ) - 0x17 ) + ( 8 - (int)uVar14 ) * 8;
         }
 else {
            puStack_58 = (ulong*)( (long)puVar30 + lVar21 + -0xe );
            uStack_68 = *puStack_58;
            if (bVar15 == 0) goto LAB_00108980;
            uVar16 = 0x1f;
            if (bVar15 != 0) {
               for (; bVar15 >> uVar16 == 0; uVar16 = uVar16 - 1) {}
            }

            uStack_60 = ( uVar16 ^ 0x1f ) - 0x17;
            if (0xffffffffffffff88 < uVar14) goto LAB_0010816d;
         }

         puVar4 = (undefined2*)( (long)puVar5 - 7 );
         uVar16 = *param_5 >> 0x10 & 0xff;
         cVar9 = (char)( *param_5 >> 0x10 );
         puStack_158 = puVar8;
         puStack_150 = puVar23;
         puStack_140 = puVar22;
         if (( 7 < (long)puVar5 - (long)puVar23 ) && ( puVar23 < puVar4 )) {
            puStack_128 = local_e8;
            uStack_168 = local_f8;
            puStack_138 = puStack_b8;
            local_190 = uStack_c8;
            puStack_130 = puStack_88;
            local_198 = uStack_98;
            puStack_170 = puStack_58;
            local_188 = uStack_68;
            bVar15 = -cVar9 & 0x3f;
            bVar10 = false;
            bVar11 = false;
            bVar36 = false;
            do {
               puVar7 = param_5 + ( ( uStack_168 << ( (byte)uStack_f0 & 0x3f ) ) >> bVar15 ) + 1;
               *param_1 = (short)*puVar7;
               iVar25 = *(byte*)( (long)puVar7 + 2 ) + uStack_f0;
               param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               puVar7 = param_5 + ( ( local_190 << ( (byte)uStack_c0 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_158 = (short)*puVar7;
               iVar34 = *(byte*)( (long)puVar7 + 2 ) + uStack_c0;
               puStack_158 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_158 );
               puVar7 = param_5 + ( ( local_198 << ( (byte)uStack_90 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_140 = (short)*puVar7;
               puStack_140 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_140 );
               iVar31 = *(byte*)( (long)puVar7 + 2 ) + uStack_90;
               puVar7 = param_5 + ( ( local_188 << ( (byte)uStack_60 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_150 = (short)*puVar7;
               iVar12 = uStack_60 + *(byte*)( (long)puVar7 + 2 );
               puStack_150 = (undefined2*)( (long)puStack_150 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               puVar7 = param_5 + ( ( uStack_168 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
               *param_1 = (short)*puVar7;
               iVar25 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
               param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               puVar7 = param_5 + ( ( local_190 << ( (byte)iVar34 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_158 = (short)*puVar7;
               puStack_158 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_158 );
               iVar34 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar34;
               puVar7 = param_5 + ( ( local_198 << ( (byte)iVar31 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_140 = (short)*puVar7;
               puStack_140 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_140 );
               iVar31 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar31;
               puVar7 = param_5 + ( ( local_188 << ( (byte)iVar12 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_150 = (short)*puVar7;
               iVar12 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar12;
               puStack_150 = (undefined2*)( (long)puStack_150 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               puVar7 = param_5 + ( ( uStack_168 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
               *param_1 = (short)*puVar7;
               iVar25 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
               param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)param_1 );
               puVar7 = param_5 + ( ( local_190 << ( (byte)iVar34 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_158 = (short)*puVar7;
               iVar34 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar34;
               puStack_158 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_158 );
               puVar7 = param_5 + ( ( local_198 << ( (byte)iVar31 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_140 = (short)*puVar7;
               iVar31 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar31;
               puStack_140 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_140 );
               puVar7 = param_5 + ( ( local_188 << ( (byte)iVar12 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_150 = (short)*puVar7;
               iVar12 = iVar12 + ( uint ) * (byte*)( (long)puVar7 + 2 );
               puStack_150 = (undefined2*)( (long)puStack_150 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               puVar7 = param_5 + ( ( uStack_168 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
               *param_1 = (short)*puVar7;
               param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)param_1 );
               uVar35 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
               puVar7 = param_5 + ( ( local_190 << ( (byte)iVar34 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_158 = (short)*puVar7;
               uStack_c0 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar34;
               puStack_158 = (undefined2*)( (long)puStack_158 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               puVar7 = param_5 + ( ( local_198 << ( (byte)iVar31 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_140 = (short)*puVar7;
               uStack_90 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar31;
               puStack_140 = (undefined2*)( (long)puStack_140 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               puVar7 = param_5 + ( ( local_188 << ( (byte)iVar12 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_150 = (short)*puVar7;
               uVar13 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar12;
               puStack_150 = (undefined2*)( (long)puStack_150 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               if (puStack_128 < puVar33) {
                  iVar12 = 3;
                  uStack_f0 = uVar35;
               }
 else {
                  bVar26 = true;
                  uStack_f0 = uVar35 & 7;
                  puStack_128 = (ulong*)( (long)puStack_128 - ( ulong )(uVar35 >> 3) );
                  uStack_168 = *puStack_128;
                  iVar12 = 0;
               }

               if (puStack_138 < puVar24) {
                  iVar12 = 3;
               }
 else {
                  bVar10 = true;
                  puStack_138 = (ulong*)( (long)puStack_138 - ( ulong )(uStack_c0 >> 3) );
                  local_190 = *puStack_138;
                  uStack_c0 = uStack_c0 & 7;
               }

               if (puStack_130 < puVar2) {
                  iVar12 = 3;
               }
 else {
                  bVar11 = true;
                  puStack_130 = (ulong*)( (long)puStack_130 - ( ulong )(uStack_90 >> 3) );
                  local_198 = *puStack_130;
                  uStack_90 = uStack_90 & 7;
               }

               if (puStack_170 < puVar3) {
                  if (bVar26) {
                     local_e8 = puStack_128;
                     local_f8 = uStack_168;
                  }

                  if (bVar10) {
                     puStack_b8 = puStack_138;
                     uStack_c8 = local_190;
                  }

                  if (bVar11) {
                     puStack_88 = puStack_130;
                     uStack_98 = local_198;
                  }

                  uStack_60 = uVar13;
                  if (!bVar36) goto LAB_00108bb8;
                  goto LAB_00109a9b;
               }

               uStack_60 = uVar13 & 7;
               puStack_170 = (ulong*)( (long)puStack_170 - ( ulong )(uVar13 >> 3) );
               local_188 = *puStack_170;
               bVar36 = iVar12 == 0 && puStack_150 < puVar4;
            }
 while ( iVar12 == 0 && puStack_150 < puVar4 );
            if (bVar26) {
               local_e8 = puStack_128;
               local_f8 = uStack_168;
            }

            if (bVar10) {
               puStack_b8 = puStack_138;
               uStack_c8 = local_190;
            }

            if (bVar11) {
               puStack_88 = puStack_130;
               uStack_98 = local_198;
            }

            LAB_00109a9b:puStack_58 = puStack_170;
            uStack_68 = local_188;
         }

         LAB_00108bb8:bVar26 = ( puVar22 < puStack_158 || puVar8 < param_1 ) || puVar23 < puStack_140;
         uVar14 = (ulong)bVar26;
         if (bVar26) goto LAB_0010822d;
         uVar17 = (ulong)uStack_f0;
         iVar12 = (int)puVar1;
         if (7 < (long)puVar8 - (long)param_1) {
            uVar20 = local_f8;
            puVar19 = local_e8;
            uVar13 = uStack_f0;
            if (uVar16 < 0xc) {
               if (uStack_f0 < 0x41) {
                  bVar36 = false;
                  bVar15 = -cVar9 & 0x3f;
                  do {
                     uVar13 = (uint)uVar17;
                     if (puVar19 < puVar33) {
                        if (puVar1 == puVar19) goto LAB_00108d67;
                        uVar17 = uVar17 >> 3;
                        uVar35 = (uint)uVar17;
                        bVar36 = (ulong*)( (long)puVar19 - uVar17 ) < puVar1;
                        if (bVar36) {
                           uVar35 = (int)puVar19 - iVar12;
                           uVar17 = (ulong)uVar35;
                        }

                        puVar19 = (ulong*)( (long)puVar19 - uVar17 );
                        uVar20 = *puVar19;
                        uVar13 = uVar13 + uVar35 * -8;
                     }
 else {
                        uVar13 = uVar13 & 7;
                        puVar19 = (ulong*)( (long)puVar19 - ( uVar17 >> 3 ) );
                        bVar36 = false;
                        uVar20 = *puVar19;
                     }

                     bVar36 = (bool)( param_1 < (undefined2*)( (long)puVar8 - 9U ) & ( bVar36 ^ 1U ) );
                     if (!bVar36) goto LAB_0010a88b;
                     puVar7 = param_5 + ( ( uVar20 << ( (byte)uVar13 & 0x3f ) ) >> bVar15 ) + 1;
                     *param_1 = (short)*puVar7;
                     iVar25 = uVar13 + *(byte*)( (long)puVar7 + 2 );
                     param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)param_1 );
                     puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
                     *param_1 = (short)*puVar7;
                     for (int i = 0; i < 3; i++) {
                        iVar25 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
                        param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
                        puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 63 ) ) >> bVar15 ) + 1;
                        *param_1 = (short)*puVar7;
                     }

                     uVar13 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
                     uVar17 = (ulong)uVar13;
                     param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)param_1 );
                  }
 while ( uVar13 < 0x41 );
               }

            }
 else if (uStack_f0 < 0x41) {
               bVar36 = false;
               bVar15 = -cVar9 & 0x3f;
               do {
                  uVar13 = (uint)uVar17;
                  if (puVar19 < puVar33) {
                     if (puVar1 == puVar19) goto LAB_00108d67;
                     uVar17 = uVar17 >> 3;
                     uVar35 = (uint)uVar17;
                     bVar36 = (ulong*)( (long)puVar19 - uVar17 ) < puVar1;
                     if (bVar36) {
                        uVar35 = (int)puVar19 - iVar12;
                        uVar17 = (ulong)uVar35;
                     }

                     puVar19 = (ulong*)( (long)puVar19 - uVar17 );
                     uVar20 = *puVar19;
                     uVar13 = uVar13 + uVar35 * -8;
                  }
 else {
                     uVar13 = uVar13 & 7;
                     puVar19 = (ulong*)( (long)puVar19 - ( uVar17 >> 3 ) );
                     bVar36 = false;
                     uVar20 = *puVar19;
                  }

                  bVar36 = (bool)( param_1 < (undefined2*)( (long)puVar8 - 7U ) & ( bVar36 ^ 1U ) );
                  if (!bVar36) goto LAB_0010a88b;
                  puVar7 = param_5 + ( ( uVar20 << ( (byte)uVar13 & 0x3f ) ) >> bVar15 ) + 1;
                  *param_1 = (short)*puVar7;
                  iVar25 = *(byte*)( (long)puVar7 + 2 ) + uVar13;
                  param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)param_1 );
                  puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
                  *param_1 = (short)*puVar7;
                  iVar25 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
                  param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
                  puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
                  *param_1 = (short)*puVar7;
                  iVar25 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
                  param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
                  puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
                  *param_1 = (short)*puVar7;
                  uVar13 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
                  uVar17 = (ulong)uVar13;
                  param_1 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)param_1 );
               }
 while ( uVar13 < 0x41 );
            }

            uStack_f0 = uVar13;
            local_f8 = uVar20;
            uVar14 = (ulong)bVar26;
            local_e8 = &zeroFilled_0;
            goto LAB_00108d90;
         }

         if (uStack_f0 < 0x41) {
            if (local_e8 < puVar33) {
               if (puVar1 != local_e8) {
                  uVar13 = uStack_f0 >> 3;
                  uVar17 = (ulong)uVar13;
                  if ((ulong*)( (long)local_e8 - uVar17 ) < puVar1) {
                     uVar13 = (int)local_e8 - iVar12;
                     uVar17 = (ulong)uVar13;
                  }

                  local_e8 = (ulong*)( (long)local_e8 - uVar17 );
                  uStack_f0 = uStack_f0 + uVar13 * -8;
                  local_f8 = *local_e8;
               }

            }
 else {
               BIT_reloadDStream_internal(&local_f8);
            }

            goto LAB_00108d90;
         }

         local_e8 = &zeroFilled_0;
         uVar17 = local_f8;
         uVar13 = uStack_f0;
         if (1 < (long)puVar8 - (long)param_1) goto LAB_00109c21;
         goto LAB_00108edb;
      }

      goto LAB_0010822d;
   }

   pcVar28 = (code*)&HUF_decompress4X2_usingDTable_internal_fast_asm_loop;
   if (( param_6 & 0x10 ) != 0) {
      pcVar28 = HUF_decompress4X2_usingDTable_internal_fast_c_loop;
   }

   if (( ( param_6 & 0x20 ) != 0 ) || ( uVar14 = HUF_decompress4X2_usingDTable_internal_fast(param_1, param_2, param_3, param_4, param_5, pcVar28) ),uVar14 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar14 = HUF_decompress4X2_usingDTable_internal_bmi2(param_1, param_2, param_3, param_4, param_5);
         return uVar14;
      }

      goto LAB_00109f16;
   }

   goto LAB_0010816d;
   LAB_0010a88b:uVar14 = (ulong)bVar26;
   local_f8 = uVar20;
   uStack_f0 = uVar13;
   local_e8 = puVar19;
   goto LAB_00108d90;
   LAB_00108d67:uVar14 = (ulong)bVar26;
   if (bVar36) {
      local_f8 = uVar20;
      uStack_f0 = uVar13;
      local_e8 = puVar1;
   }

   LAB_00108d90:if (1 < ( ulong )((long)puVar8 - (long)param_1)) {
      uVar17 = local_f8;
      uVar13 = uStack_f0;
      if (uStack_f0 < 0x41) {
         bVar26 = false;
         local_1b8 = -cVar9 & 0x3f;
         puVar19 = local_e8;
         do {
            if (puVar19 < puVar33) {
               if (puVar1 == puVar19) {
                  uVar20 = local_f8;
                  uVar35 = uStack_f0;
                  puVar18 = local_e8;
                  if (bVar26) {
                     uVar20 = uVar17;
                     uVar35 = uVar13;
                     puVar18 = puVar1;
                  }

                  goto LAB_00108e86;
               }

               puVar18 = (ulong*)( (long)puVar19 - ( ulong )(uVar13 >> 3) );
               if (puVar18 < puVar1) {
                  puVar18 = (ulong*)( (long)puVar19 - ( (long)puVar19 - (long)puVar1 & 0xffffffffU ) );
                  uVar20 = *puVar18;
                  uVar35 = uVar13 + (int)( (long)puVar19 - (long)puVar1 ) * -8;
                  goto LAB_00108e86;
               }

               uVar17 = *puVar18;
               uVar35 = uVar13 + ( uVar13 >> 3 ) * -8;
            }
 else {
               uVar35 = uVar13 & 7;
               puVar18 = (ulong*)( (long)puVar19 - ( ulong )(uVar13 >> 3) );
               uVar17 = *puVar18;
            }

            bVar26 = param_1 <= puVar8 + -1;
            uVar20 = uVar17;
            if (!bVar26) goto LAB_00108e86;
            puVar7 = param_5 + ( ( uVar17 << ( (byte)uVar35 & 0x3f ) ) >> local_1b8 ) + 1;
            *param_1 = (short)*puVar7;
            uVar13 = uVar35 + *(byte*)( (long)puVar7 + 2 );
            param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
            puVar19 = puVar18;
         }
 while ( uVar13 < 0x41 );
      }

      LAB_00109c21:uStack_f0 = uVar13;
      local_f8 = uVar17;
      local_e8 = &zeroFilled_0;
      uVar20 = local_f8;
      uVar35 = uStack_f0;
      puVar18 = local_e8;
      LAB_00108e86:local_e8 = puVar18;
      uStack_f0 = uVar35;
      local_f8 = uVar20;
      if (param_1 <= puVar8 + -1) {
         do {
            puVar7 = param_5 + ( ( local_f8 << ( (byte)uStack_f0 & 0x3f ) ) >> ( -cVar9 & 0x3fU ) ) + 1;
            *param_1 = (short)*puVar7;
            uStack_f0 = uStack_f0 + *(byte*)( (long)puVar7 + 2 );
            param_1 = (undefined2*)( (long)param_1 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
         }
 while ( param_1 <= puVar8 + -1 );
      }

   }

   LAB_00108edb:if (param_1 < puVar8) {
      puVar7 = param_5 + ( ( local_f8 << ( (byte)uStack_f0 & 0x3f ) ) >> ( -cVar9 & 0x3fU ) ) + 1;
      *(char*)param_1 = (char)*puVar7;
      if (*(char*)( (long)puVar7 + 3 ) == '\x01') {
         uStack_f0 = *(byte*)( (long)puVar7 + 2 ) + uStack_f0;
      }
 else if (( uStack_f0 < 0x40 ) && ( uStack_f0 = 0x40 < uStack_f0 )) {
         uStack_f0 = 0x40;
      }

   }

   uVar17 = (ulong)uStack_c0;
   iVar12 = (int)puVar6;
   puVar33 = puStack_b8;
   if ((long)puVar22 - (long)puStack_158 < 8) {
      if (uStack_c0 < 0x41) {
         if (puStack_b8 < puVar24) {
            uVar17 = uStack_c8;
            uVar13 = uStack_c0;
            if (puVar6 != puStack_b8) {
               uVar13 = uStack_c0 >> 3;
               uVar20 = (ulong)uVar13;
               if ((ulong*)( (long)puStack_b8 - uVar20 ) < puVar6) {
                  uVar13 = (int)puStack_b8 - iVar12;
                  uVar20 = (ulong)uVar13;
               }

               uVar17 = *(ulong*)( (long)puStack_b8 - uVar20 );
               uVar13 = uStack_c0 + uVar13 * -8;
               puVar33 = (ulong*)( (long)puStack_b8 - uVar20 );
            }

         }
 else {
            BIT_reloadDStream_internal(&uStack_c8);
            uVar17 = uStack_c8;
            uVar13 = uStack_c0;
            puVar33 = puStack_b8;
         }

         goto LAB_001090ce;
      }

      puStack_b8 = &zeroFilled_0;
      uVar17 = uStack_c8;
      uVar13 = uStack_c0;
      if (1 < (long)puVar22 - (long)puStack_158) goto LAB_00109bfe;
   }
 else {
      uVar20 = uStack_c8;
      uVar13 = uStack_c0;
      if (uVar16 < 0xc) {
         if (uStack_c0 < 0x41) {
            bVar26 = false;
            bVar15 = -cVar9 & 0x3f;
            do {
               uVar35 = (uint)uVar17;
               if (puVar33 < puVar24) {
                  if (puVar6 == puVar33) {
                     uVar17 = uStack_c8;
                     uVar13 = uStack_c0;
                     puVar33 = puStack_b8;
                     if (bVar26) {
                        uVar17 = uVar20;
                        uVar13 = uVar35;
                        puVar33 = puVar6;
                     }

                     goto LAB_001090ce;
                  }

                  uVar17 = uVar17 >> 3;
                  uVar13 = (uint)uVar17;
                  bVar26 = (ulong*)( (long)puVar33 - uVar17 ) < puVar6;
                  if (bVar26) {
                     uVar13 = (int)puVar33 - iVar12;
                     uVar17 = (ulong)uVar13;
                  }

                  puVar33 = (ulong*)( (long)puVar33 - uVar17 );
                  uVar20 = *puVar33;
                  uVar13 = uVar35 + uVar13 * -8;
               }
 else {
                  uVar13 = uVar35 & 7;
                  puVar33 = (ulong*)( (long)puVar33 - ( uVar17 >> 3 ) );
                  bVar26 = false;
                  uVar20 = *puVar33;
               }

               bVar26 = (bool)( puStack_158 < (undefined2*)( (long)puVar22 + -9 ) & ( bVar26 ^ 1U ) );
               uVar17 = uVar20;
               if (!bVar26) goto LAB_001090ce;
               puVar7 = param_5 + ( ( uVar20 << ( (byte)uVar13 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_158 = (short)*puVar7;
               iVar25 = *(byte*)( (long)puVar7 + 2 ) + uVar13;
               puStack_158 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_158 );
               puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_158 = (short)*puVar7;
               for (int i = 0; i < 3; i++) {
                  iVar25 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
                  puStack_158 = (undefined2*)( (long)puStack_158 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
                  puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 63 ) ) >> bVar15 ) + 1;
                  *puStack_158 = (short)*puVar7;
               }

               uVar13 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
               uVar17 = (ulong)uVar13;
               puStack_158 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_158 );
            }
 while ( uVar13 < 0x41 );
         }

      }
 else if (uStack_c0 < 0x41) {
         bVar26 = false;
         bVar15 = -cVar9 & 0x3f;
         do {
            uVar35 = (uint)uVar17;
            if (puVar33 < puVar24) {
               if (puVar6 == puVar33) {
                  uVar17 = uStack_c8;
                  uVar13 = uStack_c0;
                  puVar33 = puStack_b8;
                  if (bVar26) {
                     uVar17 = uVar20;
                     uVar13 = uVar35;
                     puVar33 = puVar6;
                  }

                  goto LAB_001090ce;
               }

               uVar17 = uVar17 >> 3;
               uVar13 = (uint)uVar17;
               bVar26 = (ulong*)( (long)puVar33 - uVar17 ) < puVar6;
               if (bVar26) {
                  uVar13 = (int)puVar33 - iVar12;
                  uVar17 = (ulong)uVar13;
               }

               puVar33 = (ulong*)( (long)puVar33 - uVar17 );
               uVar20 = *puVar33;
               uVar13 = uVar35 + uVar13 * -8;
            }
 else {
               uVar13 = uVar35 & 7;
               puVar33 = (ulong*)( (long)puVar33 - ( uVar17 >> 3 ) );
               bVar26 = false;
               uVar20 = *puVar33;
            }

            bVar26 = (bool)( puStack_158 < (undefined2*)( (long)puVar22 + -7 ) & ( bVar26 ^ 1U ) );
            uVar17 = uVar20;
            if (!bVar26) goto LAB_001090ce;
            puVar7 = param_5 + ( ( uVar20 << ( (byte)uVar13 & 0x3f ) ) >> bVar15 ) + 1;
            *puStack_158 = (short)*puVar7;
            iVar25 = uVar13 + *(byte*)( (long)puVar7 + 2 );
            puStack_158 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_158 );
            puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
            *puStack_158 = (short)*puVar7;
            iVar25 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
            puStack_158 = (undefined2*)( (long)puStack_158 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
            puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
            *puStack_158 = (short)*puVar7;
            iVar25 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
            puStack_158 = (undefined2*)( (long)puStack_158 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
            puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
            *puStack_158 = (short)*puVar7;
            uVar13 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
            uVar17 = (ulong)uVar13;
            puStack_158 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_158 );
         }
 while ( uVar13 < 0x41 );
      }

      uStack_c0 = uVar13;
      uStack_c8 = uVar20;
      puStack_b8 = &zeroFilled_0;
      uVar17 = uStack_c8;
      uVar13 = uStack_c0;
      puVar33 = puStack_b8;
      LAB_001090ce:puStack_b8 = puVar33;
      uStack_c0 = uVar13;
      uStack_c8 = uVar17;
      if (1 < ( ulong )((long)puVar22 - (long)puStack_158)) {
         uVar17 = uStack_c8;
         uVar13 = uStack_c0;
         if (uStack_c0 < 0x41) {
            bVar26 = false;
            local_1b8 = -cVar9 & 0x3f;
            puVar33 = puStack_b8;
            do {
               if (puVar33 < puVar24) {
                  if (puVar6 == puVar33) {
                     uVar20 = uStack_c8;
                     uVar35 = uStack_c0;
                     puVar19 = puStack_b8;
                     if (bVar26) {
                        uVar20 = uVar17;
                        uVar35 = uVar13;
                        puVar19 = puVar6;
                     }

                     goto LAB_001091cd;
                  }

                  puVar19 = (ulong*)( (long)puVar33 - ( ulong )(uVar13 >> 3) );
                  if (puVar19 < puVar6) {
                     puVar19 = (ulong*)( (long)puVar33 - ( (long)puVar33 - (long)puVar6 & 0xffffffffU ) );
                     uVar20 = *puVar19;
                     uVar35 = uVar13 + (int)( (long)puVar33 - (long)puVar6 ) * -8;
                     goto LAB_001091cd;
                  }

                  uVar17 = *puVar19;
                  uVar35 = uVar13 + ( uVar13 >> 3 ) * -8;
               }
 else {
                  uVar35 = uVar13 & 7;
                  puVar19 = (ulong*)( (long)puVar33 - ( ulong )(uVar13 >> 3) );
                  uVar17 = *puVar19;
               }

               bVar26 = puStack_158 <= puVar22 + -1;
               uVar20 = uVar17;
               if (!bVar26) goto LAB_001091cd;
               puVar7 = param_5 + ( ( uVar17 << ( (byte)uVar35 & 0x3f ) ) >> local_1b8 ) + 1;
               *puStack_158 = (short)*puVar7;
               uVar13 = uVar35 + *(byte*)( (long)puVar7 + 2 );
               puStack_158 = (undefined2*)( (long)puStack_158 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               puVar33 = puVar19;
            }
 while ( uVar13 < 0x41 );
         }

         LAB_00109bfe:uStack_c0 = uVar13;
         uStack_c8 = uVar17;
         puStack_b8 = &zeroFilled_0;
         uVar20 = uStack_c8;
         uVar35 = uStack_c0;
         puVar19 = puStack_b8;
         LAB_001091cd:puStack_b8 = puVar19;
         uStack_c0 = uVar35;
         uStack_c8 = uVar20;
         if (puStack_158 <= puVar22 + -1) {
            do {
               puVar7 = param_5 + ( ( uStack_c8 << ( (byte)uStack_c0 & 0x3f ) ) >> ( -cVar9 & 0x3fU ) ) + 1;
               *puStack_158 = (short)*puVar7;
               uStack_c0 = uStack_c0 + *(byte*)( (long)puVar7 + 2 );
               puStack_158 = (undefined2*)( (long)puStack_158 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
            }
 while ( puStack_158 <= puVar22 + -1 );
         }

      }

   }

   if (puStack_158 < puVar22) {
      puVar7 = param_5 + ( ( uStack_c8 << ( (byte)uStack_c0 & 0x3f ) ) >> ( -cVar9 & 0x3fU ) ) + 1;
      *(char*)puStack_158 = (char)*puVar7;
      if (*(char*)( (long)puVar7 + 3 ) == '\x01') {
         uStack_c0 = *(byte*)( (long)puVar7 + 2 ) + uStack_c0;
      }
 else if (( uStack_c0 < 0x40 ) && ( uStack_c0 = 0x40 < uStack_c0 )) {
         uStack_c0 = 0x40;
      }

   }

   uVar17 = (ulong)uStack_90;
   iVar12 = (int)puVar32;
   puVar33 = puStack_88;
   if ((long)puVar23 - (long)puStack_140 < 8) {
      if (uStack_90 < 0x41) {
         if (puStack_88 < puVar2) {
            uVar17 = uStack_98;
            uVar13 = uStack_90;
            if (puVar32 != puStack_88) {
               uVar13 = uStack_90 >> 3;
               uVar20 = (ulong)uVar13;
               if ((ulong*)( (long)puStack_88 - uVar20 ) < puVar32) {
                  uVar13 = (int)puStack_88 - iVar12;
                  uVar20 = (ulong)uVar13;
               }

               uVar17 = *(ulong*)( (long)puStack_88 - uVar20 );
               uVar13 = uStack_90 + uVar13 * -8;
               puVar33 = (ulong*)( (long)puStack_88 - uVar20 );
            }

         }
 else {
            BIT_reloadDStream_internal(&uStack_98);
            uVar17 = uStack_98;
            uVar13 = uStack_90;
            puVar33 = puStack_88;
         }

         goto LAB_00109432;
      }

      puStack_88 = &zeroFilled_0;
      uVar17 = uStack_98;
      uVar13 = uStack_90;
      if (1 < (long)puVar23 - (long)puStack_140) goto LAB_00109cfb;
   }
 else {
      uVar20 = uStack_98;
      uVar13 = uStack_90;
      if (uVar16 < 0xc) {
         if (uStack_90 < 0x41) {
            bVar26 = false;
            bVar15 = -cVar9 & 0x3f;
            do {
               uVar35 = (uint)uVar17;
               if (puVar33 < puVar2) {
                  if (puVar32 == puVar33) {
                     uVar17 = uStack_98;
                     uVar13 = uStack_90;
                     puVar33 = puStack_88;
                     if (bVar26) {
                        uVar17 = uVar20;
                        uVar13 = uVar35;
                        puVar33 = puVar32;
                     }

                     goto LAB_00109432;
                  }

                  uVar17 = uVar17 >> 3;
                  uVar13 = (uint)uVar17;
                  bVar26 = (ulong*)( (long)puVar33 - uVar17 ) < puVar32;
                  if (bVar26) {
                     uVar13 = (int)puVar33 - iVar12;
                     uVar17 = (ulong)uVar13;
                  }

                  puVar33 = (ulong*)( (long)puVar33 - uVar17 );
                  uVar20 = *puVar33;
                  uVar13 = uVar35 + uVar13 * -8;
               }
 else {
                  uVar13 = uVar35 & 7;
                  puVar33 = (ulong*)( (long)puVar33 - ( uVar17 >> 3 ) );
                  bVar26 = false;
                  uVar20 = *puVar33;
               }

               bVar26 = (bool)( puStack_140 < (undefined2*)( (long)puVar23 + -9 ) & ( bVar26 ^ 1U ) );
               uVar17 = uVar20;
               if (!bVar26) goto LAB_00109432;
               puVar7 = param_5 + ( ( uVar20 << ( (byte)uVar13 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_140 = (short)*puVar7;
               iVar25 = *(byte*)( (long)puVar7 + 2 ) + uVar13;
               puStack_140 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_140 );
               puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_140 = (short)*puVar7;
               for (int i = 0; i < 3; i++) {
                  iVar25 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
                  puStack_140 = (undefined2*)( (long)puStack_140 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
                  puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 63 ) ) >> bVar15 ) + 1;
                  *puStack_140 = (short)*puVar7;
               }

               uVar13 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
               uVar17 = (ulong)uVar13;
               puStack_140 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_140 );
            }
 while ( uVar13 < 0x41 );
         }

      }
 else if (uStack_90 < 0x41) {
         bVar26 = false;
         bVar15 = -cVar9 & 0x3f;
         do {
            uVar35 = (uint)uVar17;
            if (puVar33 < puVar2) {
               if (puVar32 == puVar33) {
                  uVar17 = uStack_98;
                  uVar13 = uStack_90;
                  puVar33 = puStack_88;
                  if (bVar26) {
                     uVar17 = uVar20;
                     uVar13 = uVar35;
                     puVar33 = puVar32;
                  }

                  goto LAB_00109432;
               }

               uVar17 = uVar17 >> 3;
               uVar13 = (uint)uVar17;
               bVar26 = (ulong*)( (long)puVar33 - uVar17 ) < puVar32;
               if (bVar26) {
                  uVar13 = (int)puVar33 - iVar12;
                  uVar17 = (ulong)uVar13;
               }

               puVar33 = (ulong*)( (long)puVar33 - uVar17 );
               uVar20 = *puVar33;
               uVar13 = uVar35 + uVar13 * -8;
            }
 else {
               uVar13 = uVar35 & 7;
               puVar33 = (ulong*)( (long)puVar33 - ( uVar17 >> 3 ) );
               bVar26 = false;
               uVar20 = *puVar33;
            }

            bVar26 = (bool)( puStack_140 < (undefined2*)( (long)puVar23 + -7 ) & ( bVar26 ^ 1U ) );
            uVar17 = uVar20;
            if (!bVar26) goto LAB_00109432;
            puVar7 = param_5 + ( ( uVar20 << ( (byte)uVar13 & 0x3f ) ) >> bVar15 ) + 1;
            *puStack_140 = (short)*puVar7;
            iVar25 = uVar13 + *(byte*)( (long)puVar7 + 2 );
            puStack_140 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_140 );
            puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
            *puStack_140 = (short)*puVar7;
            iVar25 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
            puStack_140 = (undefined2*)( (long)puStack_140 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
            puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
            *puStack_140 = (short)*puVar7;
            iVar25 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
            puStack_140 = (undefined2*)( (long)puStack_140 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
            puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
            *puStack_140 = (short)*puVar7;
            uVar13 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
            uVar17 = (ulong)uVar13;
            puStack_140 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_140 );
         }
 while ( uVar13 < 0x41 );
      }

      uStack_90 = uVar13;
      uStack_98 = uVar20;
      puStack_88 = &zeroFilled_0;
      uVar17 = uStack_98;
      uVar13 = uStack_90;
      puVar33 = puStack_88;
      LAB_00109432:puStack_88 = puVar33;
      uStack_90 = uVar13;
      uStack_98 = uVar17;
      if (1 < ( ulong )((long)puVar23 - (long)puStack_140)) {
         uVar17 = uStack_98;
         uVar13 = uStack_90;
         if (uStack_90 < 0x41) {
            bVar26 = false;
            puVar33 = puStack_88;
            do {
               if (puVar33 < puVar2) {
                  if (puVar32 == puVar33) {
                     uVar20 = uStack_98;
                     uVar35 = uStack_90;
                     puVar24 = puStack_88;
                     if (bVar26) {
                        uVar20 = uVar17;
                        uVar35 = uVar13;
                        puVar24 = puVar32;
                     }

                     goto LAB_0010953b;
                  }

                  puVar24 = (ulong*)( (long)puVar33 - ( ulong )(uVar13 >> 3) );
                  if (puVar24 < puVar32) {
                     puVar24 = (ulong*)( (long)puVar33 - ( (long)puVar33 - (long)puVar32 & 0xffffffffU ) );
                     uVar20 = *puVar24;
                     uVar35 = uVar13 + (int)( (long)puVar33 - (long)puVar32 ) * -8;
                     goto LAB_0010953b;
                  }

                  uVar35 = uVar13 + ( uVar13 >> 3 ) * -8;
                  uVar17 = *puVar24;
                  puVar33 = puVar24;
               }
 else {
                  puVar33 = (ulong*)( (long)puVar33 - ( ulong )(uVar13 >> 3) );
                  uVar17 = *puVar33;
                  uVar35 = uVar13 & 7;
               }

               uVar20 = uVar17;
               puVar24 = puVar33;
               if (puVar23 + -1 < puStack_140) goto LAB_0010953b;
               puVar7 = param_5 + ( ( uVar17 << ( (byte)uVar35 & 0x3f ) ) >> ( -cVar9 & 0x3fU ) ) + 1;
               *puStack_140 = (short)*puVar7;
               uVar13 = *(byte*)( (long)puVar7 + 2 ) + uVar35;
               puStack_140 = (undefined2*)( (long)puStack_140 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               bVar26 = true;
            }
 while ( uVar13 < 0x41 );
         }

         LAB_00109cfb:uStack_90 = uVar13;
         uStack_98 = uVar17;
         puStack_88 = &zeroFilled_0;
         uVar20 = uStack_98;
         uVar35 = uStack_90;
         puVar24 = puStack_88;
         LAB_0010953b:puStack_88 = puVar24;
         uStack_90 = uVar35;
         uStack_98 = uVar20;
         if (puStack_140 <= puVar23 + -1) {
            do {
               puVar7 = param_5 + ( ( uStack_98 << ( (byte)uStack_90 & 0x3f ) ) >> ( -cVar9 & 0x3fU ) ) + 1;
               *puStack_140 = (short)*puVar7;
               uStack_90 = uStack_90 + *(byte*)( (long)puVar7 + 2 );
               puStack_140 = (undefined2*)( (long)puStack_140 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
            }
 while ( puStack_140 <= puVar23 + -1 );
         }

      }

   }

   if (puStack_140 < puVar23) {
      puVar7 = param_5 + ( ( uStack_98 << ( (byte)uStack_90 & 0x3f ) ) >> ( -cVar9 & 0x3fU ) ) + 1;
      *(char*)puStack_140 = (char)*puVar7;
      if (*(char*)( (long)puVar7 + 3 ) == '\x01') {
         uStack_90 = *(byte*)( (long)puVar7 + 2 ) + uStack_90;
      }
 else if (( uStack_90 < 0x40 ) && ( uStack_90 = 0x40 < uStack_90 )) {
         uStack_90 = 0x40;
      }

   }

   uVar17 = (ulong)uStack_60;
   iVar12 = (int)puVar30;
   puVar33 = puStack_58;
   if (( ulong )((long)puVar5 - (long)puStack_150) < 8) {
      if (uStack_60 < 0x41) {
         if (puStack_58 < puVar3) {
            uVar17 = uStack_68;
            uVar16 = uStack_60;
            if (puVar30 != puStack_58) {
               uVar16 = uStack_60 >> 3;
               uVar20 = (ulong)uVar16;
               if ((ulong*)( (long)puStack_58 - uVar20 ) < puVar30) {
                  uVar16 = (int)puStack_58 - iVar12;
                  uVar20 = (ulong)uVar16;
               }

               uVar17 = *(ulong*)( (long)puStack_58 - uVar20 );
               uVar16 = uStack_60 + uVar16 * -8;
               puVar33 = (ulong*)( (long)puStack_58 - uVar20 );
            }

         }
 else {
            BIT_reloadDStream_internal(&uStack_68);
            uVar17 = uStack_68;
            uVar16 = uStack_60;
            puVar33 = puStack_58;
         }

         goto LAB_00109792;
      }

      puStack_58 = &zeroFilled_0;
      uVar17 = uStack_68;
      uVar16 = uStack_60;
      if (1 < ( ulong )((long)puVar5 - (long)puStack_150)) goto LAB_00109f31;
   }
 else {
      uVar20 = uStack_68;
      uVar13 = uStack_60;
      if (uVar16 < 0xc) {
         if (uStack_60 < 0x41) {
            bVar26 = false;
            bVar15 = -cVar9 & 0x3f;
            do {
               uVar13 = (uint)uVar17;
               if (puVar33 < puVar3) {
                  if (puVar30 == puVar33) {
                     uVar17 = uStack_68;
                     uVar16 = uStack_60;
                     puVar33 = puStack_58;
                     if (bVar26) {
                        uVar17 = uVar20;
                        uVar16 = uVar13;
                        puVar33 = puVar30;
                     }

                     goto LAB_00109792;
                  }

                  uVar17 = uVar17 >> 3;
                  uVar16 = (uint)uVar17;
                  bVar26 = (ulong*)( (long)puVar33 - uVar17 ) < puVar30;
                  if (bVar26) {
                     uVar16 = (int)puVar33 - iVar12;
                     uVar17 = (ulong)uVar16;
                  }

                  puVar33 = (ulong*)( (long)puVar33 - uVar17 );
                  uVar20 = *puVar33;
                  uVar16 = uVar13 + uVar16 * -8;
               }
 else {
                  uVar16 = uVar13 & 7;
                  puVar33 = (ulong*)( (long)puVar33 - ( uVar17 >> 3 ) );
                  bVar26 = false;
                  uVar20 = *puVar33;
               }

               bVar26 = (bool)( puStack_150 < (undefined2*)( (long)puVar5 - 9U ) & ( bVar26 ^ 1U ) );
               uVar17 = uVar20;
               if (!bVar26) goto LAB_00109792;
               puVar7 = param_5 + ( ( uVar20 << ( (byte)uVar16 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_150 = (short)*puVar7;
               iVar25 = *(byte*)( (long)puVar7 + 2 ) + uVar16;
               puStack_150 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_150 );
               puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
               *puStack_150 = (short)*puVar7;
               for (int i = 0; i < 3; i++) {
                  iVar25 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
                  puStack_150 = (undefined2*)( (long)puStack_150 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
                  puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 63 ) ) >> bVar15 ) + 1;
                  *puStack_150 = (short)*puVar7;
               }

               uVar13 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
               uVar17 = (ulong)uVar13;
               puStack_150 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_150 );
            }
 while ( uVar13 < 0x41 );
         }

      }
 else if (uStack_60 < 0x41) {
         bVar26 = false;
         bVar15 = -cVar9 & 0x3f;
         do {
            uVar13 = (uint)uVar17;
            if (puVar33 < puVar3) {
               if (puVar30 == puVar33) {
                  uVar17 = uStack_68;
                  uVar16 = uStack_60;
                  puVar33 = puStack_58;
                  if (bVar26) {
                     uVar17 = uVar20;
                     uVar16 = uVar13;
                     puVar33 = puVar30;
                  }

                  goto LAB_00109792;
               }

               uVar17 = uVar17 >> 3;
               uVar16 = (uint)uVar17;
               bVar26 = (ulong*)( (long)puVar33 - uVar17 ) < puVar30;
               if (bVar26) {
                  uVar16 = (int)puVar33 - iVar12;
                  uVar17 = (ulong)uVar16;
               }

               puVar33 = (ulong*)( (long)puVar33 - uVar17 );
               uVar20 = *puVar33;
               uVar16 = uVar13 + uVar16 * -8;
            }
 else {
               uVar16 = uVar13 & 7;
               puVar33 = (ulong*)( (long)puVar33 - ( uVar17 >> 3 ) );
               bVar26 = false;
               uVar20 = *puVar33;
            }

            bVar26 = (bool)( ( bVar26 ^ 1U ) & puStack_150 < puVar4 );
            uVar17 = uVar20;
            if (!bVar26) goto LAB_00109792;
            puVar7 = param_5 + ( ( uVar20 << ( (byte)uVar16 & 0x3f ) ) >> bVar15 ) + 1;
            *puStack_150 = (short)*puVar7;
            iVar25 = uVar16 + *(byte*)( (long)puVar7 + 2 );
            puStack_150 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_150 );
            puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
            *puStack_150 = (short)*puVar7;
            iVar25 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
            puStack_150 = (undefined2*)( (long)puStack_150 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
            puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
            *puStack_150 = (short)*puVar7;
            iVar25 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
            puStack_150 = (undefined2*)( (long)puStack_150 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
            puVar7 = param_5 + ( ( uVar20 << ( (byte)iVar25 & 0x3f ) ) >> bVar15 ) + 1;
            *puStack_150 = (short)*puVar7;
            uVar13 = ( uint ) * (byte*)( (long)puVar7 + 2 ) + iVar25;
            uVar17 = (ulong)uVar13;
            puStack_150 = (undefined2*)( ( ulong ) * (byte*)( (long)puVar7 + 3 ) + (long)puStack_150 );
         }
 while ( uVar13 < 0x41 );
      }

      uStack_60 = uVar13;
      uStack_68 = uVar20;
      puStack_58 = &zeroFilled_0;
      uVar17 = uStack_68;
      uVar16 = uStack_60;
      puVar33 = puStack_58;
      LAB_00109792:puStack_58 = puVar33;
      uStack_60 = uVar16;
      uStack_68 = uVar17;
      if (1 < ( ulong )((long)puVar5 - (long)puStack_150)) {
         uVar17 = uStack_68;
         uVar16 = uStack_60;
         if (uStack_60 < 0x41) {
            puVar33 = puStack_58;
            do {
               if (puVar33 < puVar3) {
                  if (puVar30 == puVar33) {
                     uVar20 = uStack_68;
                     uVar13 = uStack_60;
                     puVar24 = puStack_58;
                     if ((char)uVar14 != '\0') {
                        uVar20 = uVar17;
                        uVar13 = uVar16;
                        puVar24 = puVar30;
                     }

                     goto LAB_0010989f;
                  }

                  puVar24 = (ulong*)( (long)puVar33 - ( ulong )(uVar16 >> 3) );
                  if (puVar24 < puVar30) {
                     puVar24 = (ulong*)( (long)puVar33 - ( (long)puVar33 - (long)puVar30 & 0xffffffffU ) );
                     uVar20 = *puVar24;
                     uVar13 = uVar16 + (int)( (long)puVar33 - (long)puVar30 ) * -8;
                     goto LAB_0010989f;
                  }

                  uVar13 = uVar16 + ( uVar16 >> 3 ) * -8;
                  uVar17 = *puVar24;
               }
 else {
                  uVar13 = uVar16 & 7;
                  puVar24 = (ulong*)( (long)puVar33 - ( ulong )(uVar16 >> 3) );
                  uVar17 = *puVar24;
               }

               uVar14 = ( ulong )(puStack_150 <= puVar5 + -1);
               uVar20 = uVar17;
               if (puStack_150 > puVar5 + -1) goto LAB_0010989f;
               puVar7 = param_5 + ( ( uVar17 << ( (byte)uVar13 & 0x3f ) ) >> ( -cVar9 & 0x3fU ) ) + 1;
               *puStack_150 = (short)*puVar7;
               uVar16 = uVar13 + *(byte*)( (long)puVar7 + 2 );
               puStack_150 = (undefined2*)( (long)puStack_150 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
               puVar33 = puVar24;
            }
 while ( uVar16 < 0x41 );
         }

         LAB_00109f31:uStack_60 = uVar16;
         uStack_68 = uVar17;
         puStack_58 = &zeroFilled_0;
         uVar20 = uStack_68;
         uVar13 = uStack_60;
         puVar24 = puStack_58;
         LAB_0010989f:puStack_58 = puVar24;
         uStack_60 = uVar13;
         uStack_68 = uVar20;
         if (puStack_150 <= puVar5 + -1) {
            do {
               puVar7 = param_5 + ( ( uStack_68 << ( (byte)uStack_60 & 0x3f ) ) >> ( -cVar9 & 0x3fU ) ) + 1;
               *puStack_150 = (short)*puVar7;
               uStack_60 = uStack_60 + *(byte*)( (long)puVar7 + 2 );
               puStack_150 = (undefined2*)( (long)puStack_150 + ( ulong ) * (byte*)( (long)puVar7 + 3 ) );
            }
 while ( puStack_150 <= puVar5 + -1 );
         }

      }

   }

   if (puStack_150 < puVar5) {
      param_5 = param_5 + ( ( uStack_68 << ( (byte)uStack_60 & 0x3f ) ) >> ( -cVar9 & 0x3fU ) ) + 1;
      *(char*)puStack_150 = (char)*param_5;
      if (*(char*)( (long)param_5 + 3 ) == '\x01') {
         uStack_60 = *(byte*)( (long)param_5 + 2 ) + uStack_60;
      }
 else if (( uStack_60 < 0x40 ) && ( uStack_60 = 0x40 < uStack_60 )) {
         uStack_60 = 0x40;
      }

   }

   if (( ( puVar32 != puStack_88 ) || ( puVar30 != puStack_58 ) ) || ( uVar14 = param_2(( uStack_60 != 0x40 || ( puVar1 != local_e8 || uStack_f0 != 0x40 ) ) || ( puVar6 != puStack_b8 || uStack_c0 != 0x40 )) || uStack_90 != 0x40 )) {
      LAB_0010822d:uVar14 = 0xffffffffffffffec;
   }

   LAB_0010816d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar14;
   }

   LAB_00109f16:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
ulong HUF_readDTableX1_wksp(uint *param_1, undefined8 param_2, undefined8 param_3, int *param_4, ulong param_5, undefined8 param_6) {
   byte bVar1;
   uint uVar2;
   int iVar3;
   ulong uVar4;
   int *piVar5;
   int *piVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   long lVar11;
   char cVar12;
   long lVar13;
   long *plVar14;
   uint uVar15;
   int iVar16;
   uint uVar17;
   ulong uVar18;
   byte *pbVar19;
   uint uVar20;
   long *plVar21;
   int iVar22;
   long in_FS_OFFSET;
   uint local_48;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   local_44 = 0;
   if (0x5d3 < param_5) {
      uVar4 = HUF_readStats_wksp(param_4 + 0x135, 0x100, param_4, &local_44, &local_48, param_2, param_3, param_4 + 0x1a, 0x36c, param_6);
      uVar2 = local_44;
      if (0xffffffffffffff88 < uVar4) goto LAB_0010a9d3;
      uVar17 = *param_1;
      uVar20 = ( uVar17 & 0xff ) + 1;
      uVar10 = 0xb;
      if (uVar20 < 0xc) {
         uVar10 = uVar20;
      }

      uVar9 = local_48;
      if (( local_48 <= uVar10 ) && ( uVar9 = local_48 < uVar10 )) {
         uVar15 = uVar10 - local_48;
         piVar6 = param_4 + 0x135;
         if (local_44 != 0) {
            do {
               cVar12 = (char)*piVar6;
               if (cVar12 != '\0') {
                  cVar12 = cVar12 + (char)uVar15;
               }

               piVar5 = (int*)( (long)piVar6 + 1 );
               *(char*)piVar6 = cVar12;
               piVar6 = piVar5;
            }
 while ( piVar5 != (int*)( (long)param_4 + (ulong)local_44 + 0x4d4 ) );
         }

         piVar6 = param_4 + uVar10;
         uVar8 = local_48;
         if (uVar15 < uVar10) {
            do {
               *piVar6 = param_4[uVar8];
               uVar8 = uVar8 - 1;
               piVar6 = piVar6 + -1;
            }
 while ( uVar8 != 0 );
         }

         memset(param_4 + ( (ulong)uVar15 - ( ulong )(uVar15 - 1) ), 0, (ulong)uVar15 * 4);
      }

      local_48 = uVar9;
      if (uVar9 <= uVar20) {
         lVar7 = 0;
         *param_1 = uVar17 & 0xff0000ff | ( uVar9 & 0xff ) << 0x10;
         iVar16 = 0;
         do {
            piVar6 = param_4 + lVar7;
            param_4[lVar7 + 0xd] = iVar16;
            lVar7 = lVar7 + 1;
            iVar16 = iVar16 + *piVar6;
         }
 while ( (int)lVar7 <= (int)uVar9 );
         if ((int)( uVar2 - 3 ) < 1) {
            iVar16 = 0;
         }
 else {
            iVar16 = 0;
            piVar6 = param_4;
            do {
               lVar7 = 0;
               do {
                  uVar18 = ( ulong ) * (byte*)( (long)piVar6 + lVar7 + 0x4d4 );
                  uVar17 = param_4[uVar18 + 0xd];
                  param_4[uVar18 + 0xd] = uVar17 + 1;
                  cVar12 = (char)lVar7;
                  lVar7 = lVar7 + 1;
                  *(char*)( (long)param_4 + (ulong)uVar17 + 0x3d4 ) = cVar12 + (char)iVar16;
               }
 while ( lVar7 != 4 );
               iVar16 = iVar16 + 4;
               piVar6 = piVar6 + 1;
            }
 while ( iVar16 < (int)( uVar2 - 3 ) );
            iVar16 = ( uVar2 - 4 & 0xfffffffc ) + 4;
         }

         lVar7 = (long)iVar16;
         while (iVar16 < (int)uVar2) {
            uVar18 = ( ulong ) * (byte*)( (long)param_4 + lVar7 + 0x4d4 );
            uVar17 = param_4[uVar18 + 0xd];
            param_4[uVar18 + 0xd] = uVar17 + 1;
            *(char*)( (long)param_4 + (ulong)uVar17 + 0x3d4 ) = (char)lVar7;
            lVar7 = lVar7 + 1;
            iVar16 = (int)lVar7;
         }
;
         iVar16 = *param_4;
         lVar7 = 1;
         iVar22 = 0;
         do {
            uVar2 = param_4[lVar7];
            uVar17 = ( uVar9 + 1 ) - (int)lVar7;
            iVar3 = ( 1 << ( (byte)lVar7 & 0x1f ) ) >> 1;
            if (iVar3 == 4) {
               if (0 < (int)uVar2) {
                  uVar18 = 0;
                  do {
                     lVar11 = (long)(int)( ( uint ) * (byte*)( (long)param_4 + uVar18 + (long)iVar16 + 0x3d4 ) * 0x100 + ( uVar17 & 0xff ) ) * 0x10001;
                     *(long*)( (long)param_1 + uVar18 * 8 + (long)iVar22 * 2 + 4 ) = lVar11 + ( lVar11 << 0x20 );
                     uVar18 = uVar18 + 1;
                  }
 while ( uVar18 != uVar2 );
               }

            }
 else if (iVar3 < 5) {
               if (iVar3 == 1) {
                  if (0 < (int)uVar2) {
                     uVar18 = 0;
                     do {
                        *(ushort*)( (long)param_1 + uVar18 * 2 + (long)iVar22 * 2 + 4 ) = CONCAT11(*(undefined1*)( (long)param_4 + uVar18 + 0x3d4 + (long)iVar16 ), (char)uVar17);
                        uVar18 = uVar18 + 1;
                     }
 while ( uVar2 != uVar18 );
                  }

               }
 else {
                  if (iVar3 != 2) goto LAB_0010ad50;
                  if (0 < (int)uVar2) {
                     uVar18 = 1;
                     do {
                        bVar1 = *(byte*)( (long)param_4 + uVar18 + 0x3d3 + (long)iVar16 );
                        *(uint*)( (long)param_1 + uVar18 * 4 + (long)iVar22 * 2 ) = ( ( (uint)bVar1 << 8 | uVar17 & 0xff ) << 8 | (uint)bVar1 ) << 8 | uVar17 & 0xff;
                        uVar18 = uVar18 + 1;
                     }
 while ( uVar18 != uVar2 + 1 );
                  }

               }

            }
 else if (iVar3 == 8) {
               if (0 < (int)uVar2) {
                  pbVar19 = (byte*)( (long)param_4 + (long)iVar16 + 0x3d4 );
                  lVar11 = (long)param_1 + (long)iVar22 * 2;
                  do {
                     bVar1 = *pbVar19;
                     pbVar19 = pbVar19 + 1;
                     lVar13 = (long)(int)( (uint)bVar1 * 0x100 + ( uVar17 & 0xff ) ) * 0x10001;
                     lVar13 = lVar13 + ( lVar13 << 0x20 );
                     *(long*)( lVar11 + 4 ) = lVar13;
                     *(long*)( lVar11 + 0xc ) = lVar13;
                     lVar11 = lVar11 + 0x10;
                  }
 while ( pbVar19 != (byte*)( (long)param_4 + ( ulong )(uVar2 - 1) + (long)iVar16 + 0x3d5 ) );
               }

            }
 else {
               LAB_0010ad50:if (0 < (int)uVar2) {
                  pbVar19 = (byte*)( (long)param_4 + (long)iVar16 + 0x3d4 );
                  plVar21 = (long*)( (long)param_1 + (long)iVar22 * 2 + 4 );
                  do {
                     lVar11 = (long)(int)( ( uint ) * pbVar19 * 0x100 + ( uVar17 & 0xff ) ) * 0x10001;
                     lVar11 = ( lVar11 << 0x20 ) + lVar11;
                     uVar10 = 0;
                     plVar14 = plVar21;
                     do {
                        uVar10 = uVar10 + 1;
                        *plVar14 = lVar11;
                        for (int i = 0; i < 3; i++) {
                           plVar14[( i + 1 )] = lVar11;
                        }

                        plVar14 = plVar14 + 4;
                     }
 while ( uVar10 < ( iVar3 - 1U >> 4 ) + 1 );
                     pbVar19 = pbVar19 + 1;
                     plVar21 = (long*)( (long)plVar21 + (long)iVar3 * 2 );
                  }
 while ( pbVar19 != (byte*)( (long)param_4 + ( ulong )(uVar2 - 1) + (long)iVar16 + 0x3d5 ) );
               }

            }

            lVar7 = lVar7 + 1;
            iVar16 = iVar16 + uVar2;
            iVar22 = iVar22 + iVar3 * uVar2;
         }
 while ( (uint)lVar7 < uVar9 + 1 );
         goto LAB_0010a9d3;
      }

   }

   uVar4 = 0xffffffffffffffd4;
   LAB_0010a9d3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong HUF_readDTableX2_wksp(uint *param_1, undefined8 param_2, undefined8 param_3, uint *param_4, ulong param_5, undefined8 param_6) {
   uint uVar1;
   uint uVar2;
   uint *puVar3;
   uint *puVar4;
   uint *puVar5;
   byte bVar6;
   uint uVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   uint uVar12;
   ulong uVar13;
   ulong uVar14;
   uint uVar15;
   uint *puVar16;
   uint *puVar17;
   long lVar18;
   undefined8 uVar19;
   uint uVar20;
   uint uVar21;
   long lVar22;
   int iVar23;
   ulong uVar24;
   uint uVar25;
   int iVar26;
   long in_FS_OFFSET;
   uint local_d4;
   int local_7c;
   uint local_70;
   byte local_51;
   uint local_48;
   uint local_44;
   long local_40;
   uVar24 = 0xffffffffffffffff;
   uVar1 = *param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 < 0x84c) goto LAB_0010b3fb;
   local_d4 = uVar1 & 0xff;
   *(undefined1(*) [16])( param_4 + 0x9c ) = (undefined1[16])0x0;
   param_4[0xa8] = 0;
   *(undefined1(*) [16])( param_4 + 0xa0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_4 + 0xa4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_4 + 0xb1 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_4 + 0xa9 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_4 + 0xad ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_4 + 0xb4 ) = (undefined1[16])0x0;
   local_51 = (byte)uVar1;
   if (local_51 < 0xd) {
      uVar24 = HUF_readStats_wksp(param_4 + 0xf8, 0x100, param_4 + 0x9c, &local_44, &local_48, param_2, param_3, param_4 + 0x138, 0x36c, param_6);
      if (0xffffffffffffff88 < uVar24) goto LAB_0010b3fb;
      if (local_48 <= local_d4) {
         if (( local_d4 == 0xc ) && ( local_48 != 0xc )) {
            local_51 = 0xb;
            iVar8 = 0xc;
            local_d4 = 0xb;
         }
 else {
            iVar8 = local_d4 + 1;
         }

         uVar25 = local_48 + 1;
         if (param_4[(ulong)local_48 + 0x9c] == 0) {
            uVar13 = (ulong)local_48;
            do {
               uVar15 = (uint)uVar13;
               uVar2 = uVar15 - 1;
               uVar13 = (ulong)uVar2;
            }
 while ( param_4[uVar13 + 0x9c] == 0 );
            local_70 = uVar25 - uVar2;
            uVar20 = ( iVar8 - uVar25 ) + uVar2;
         }
 else {
            local_70 = 1;
            uVar20 = local_d4;
            uVar15 = uVar25;
            uVar2 = local_48;
         }

         if (uVar15 < 2) {
            param_4[0xaa] = 0;
            param_4[(ulong)uVar15 + 0xaa] = 0;
            if (local_44 != 0) goto LAB_0010b044;
            param_4[0xaa] = 0;
         }
 else {
            puVar3 = param_4 + 0x9d;
            uVar21 = 0;
            do {
               puVar4 = puVar3 + 1;
               uVar7 = uVar21 + *puVar3;
               puVar3[0xe] = uVar21;
               puVar3 = puVar4;
               uVar21 = uVar7;
            }
 while ( param_4 + ( ulong )(uVar15 - 2) + 0x9e != puVar4 );
            param_4[0xaa] = uVar7;
            param_4[(ulong)uVar15 + 0xaa] = uVar7;
            if (local_44 == 0) {
               param_4[0xaa] = 0;
            }
 else {
               LAB_0010b044:uVar13 = 0;
               do {
                  uVar21 = param_4[( ulong ) * (byte*)( (long)param_4 + uVar13 + 0x3e0 ) + 0xaa];
                  param_4[( ulong ) * (byte*)( (long)param_4 + uVar13 + 0x3e0 ) + 0xaa] = uVar21 + 1;
                  *(char*)( (long)param_4 + (ulong)uVar21 + 0x2e0 ) = (char)uVar13;
                  uVar13 = uVar13 + 1;
               }
 while ( local_44 != uVar13 );
               param_4[0xaa] = 0;
               if (uVar15 < 2) goto LAB_0010b0be;
            }

            iVar8 = local_d4 - local_48;
            iVar23 = iVar8 + -1;
            uVar21 = 0;
            puVar3 = param_4 + 0x9d;
            do {
               puVar3[-0x9c] = uVar21;
               bVar6 = (byte)iVar8;
               iVar8 = iVar8 + 1;
               uVar21 = uVar21 + ( *puVar3 << ( bVar6 & 0x1f ) );
               puVar3 = puVar3 + 1;
            }
 while ( iVar23 + uVar15 != iVar8 );
         }

         LAB_0010b0be:if (local_70 < uVar20) {
            uVar13 = (ulong)local_70;
            puVar3 = param_4 + uVar13 * 0xd;
            do {
               if (1 < uVar15) goto LAB_0010b0f0;
               uVar21 = (int)uVar13 + 1;
               uVar13 = (ulong)uVar21;
               puVar3 = puVar3 + 0xd;
            }
 while ( uVar21 != uVar20 );
         }

         goto LAB_0010b11d;
      }

   }

   uVar24 = 0xffffffffffffffd4;
   goto LAB_0010b3fb;
   LAB_0010b0f0:do {
      uVar14 = 1;
      do {
         puVar3[uVar14] = param_4[uVar14] >> ( (byte)uVar13 & 0x1f );
         uVar14 = uVar14 + 1;
      }
 while ( uVar15 != uVar14 );
      uVar21 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar21;
      puVar3 = puVar3 + 0xd;
   }
 while ( uVar21 != uVar20 );
   LAB_0010b11d:if (1 < (int)( uVar2 + 1 )) {
      iVar8 = ( local_48 + uVar25 ) - local_d4;
      uVar25 = ( local_d4 - uVar25 ) + 1;
      local_7c = local_48 * 2 + 1;
      uVar20 = uVar2 + uVar25;
      iVar23 = local_48 * 2 - uVar2;
      uVar15 = local_48;
      puVar3 = param_4;
      do {
         lVar22 = (long)(int)puVar3[0xaa];
         uVar21 = puVar3[0xab];
         uVar13 = (ulong)puVar3[1];
         if (uVar25 < local_70) {
            HUF_fillDTableX2ForWeight(param_1 + uVar13 + 1, (long)param_4 + lVar22 + 0x2e0, (long)param_4 + (long)(int)uVar21 + 0x2e0, uVar15, local_d4, 0, 1);
         }
 else {
            iVar10 = 1;
            if (0 < iVar8) {
               iVar10 = iVar8;
            }

            if (puVar3[0xaa] != uVar21) {
               lVar18 = (long)iVar10;
               if (iVar8 < 2) {
                  iVar10 = 1;
               }

               do {
                  bVar6 = *(byte*)( (long)param_4 + lVar22 + 0x2e0 );
                  iVar9 = (int)uVar13;
                  puVar4 = param_1 + (long)iVar9 + 1;
                  puVar16 = param_4 + (ulong)uVar15 * 0xd + (long)iVar10;
                  puVar17 = param_4 + iVar10;
                  iVar11 = local_7c - iVar10;
                  if (iVar8 < 2) {
                     LAB_0010b370:do {
                        iVar26 = iVar11 + -1;
                        HUF_fillDTableX2ForWeight(puVar4 + *puVar16, (long)param_4 + (long)(int)puVar17[0xa9] + 0x2e0, (long)param_4 + (long)(int)puVar17[0xaa] + 0x2e0, iVar11, local_d4, bVar6, 2);
                        puVar16 = puVar16 + 1;
                        puVar17 = puVar17 + 1;
                        iVar11 = iVar26;
                     }
 while ( iVar26 != iVar23 );
                  }
 else {
                     iVar11 = (uint)bVar6 + uVar15 * 0x10000 + 0x1000000;
                     uVar19 = CONCAT44(iVar11, iVar11);
                     uVar7 = param_4[(ulong)uVar15 * 0xd + lVar18];
                     if (( uVar25 & 0x1f ) == 1) {
                        *(undefined8*)puVar4 = uVar19;
                     }
 else if (( uVar25 & 0x1f ) == 2) {
                        *(undefined8*)puVar4 = uVar19;
                        *(undefined8*)( puVar4 + 2 ) = uVar19;
                     }
 else if (0 < (int)uVar7) {
                        uVar12 = 0;
                        puVar5 = param_1 + (long)iVar9 + 1;
                        do {
                           uVar12 = uVar12 + 1;
                           *(undefined8*)puVar5 = uVar19;
                           for (int i = 0; i < 3; i++) {
                              *(undefined8*)( puVar5 + ( 2*i + 2 ) ) = uVar19;
                           }

                           puVar5 = puVar5 + 8;
                        }
 while ( uVar12 < ( uVar7 - 1 >> 3 ) + 1 );
                     }

                     iVar11 = local_7c - iVar10;
                     if (iVar10 < (int)( uVar2 + 1 )) goto LAB_0010b370;
                  }

                  lVar22 = lVar22 + 1;
                  uVar13 = ( ulong )(uint)(iVar9 + ( 1 << ( (byte)uVar25 & 0x1f ) ));
               }
 while ( uVar21 != (uint)lVar22 );
            }

         }

         local_7c = local_7c + -1;
         uVar25 = uVar25 + 1;
         uVar15 = uVar15 - 1;
         iVar8 = iVar8 + -1;
         iVar23 = iVar23 + -1;
         puVar3 = puVar3 + 1;
      }
 while ( uVar20 != uVar25 );
   }

   *param_1 = CONCAT22(( ushort )(( uVar1 & 0xff00ffff ) >> 0x10) | (ushort)local_51, CONCAT11(1, (char)( uVar1 & 0xff00ffff )));
   LAB_0010b3fb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar24;
}
ulong HUF_decompress1X2_DCtx_wksp(undefined8 param_1, undefined8 param_2, undefined8 param_3, long param_4, ulong param_5, undefined8 param_6, undefined8 param_7, uint param_8) {
   ulong uVar1;
   uVar1 = HUF_readDTableX2_wksp(param_1, param_4, param_5, param_6, param_7, param_8);
   if (uVar1 < 0xffffffffffffff89) {
      if (uVar1 < param_5) {
         if (( param_8 & 1 ) == 0) {
            uVar1 = HUF_decompress1X2_usingDTable_internal_default();
            return uVar1;
         }

         uVar1 = HUF_decompress1X2_usingDTable_internal_bmi2(param_2, param_3, param_4 + uVar1, param_5 - uVar1, param_1);
         return uVar1;
      }

      uVar1 = 0xffffffffffffffb8;
   }

   return uVar1;
}
bool HUF_selectDecoder(ulong param_1, ulong param_2) {
   int iVar1;
   uint uVar2;
   long lVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   if (param_2 < param_1) {
      lVar3 = ( ( param_2 << 4 ) / param_1 & 0xffffffff ) * 0x10;
      iVar7 = *(int*)( algoTime + lVar3 );
      iVar5 = *(int*)( algoTime + lVar3 + 4 );
      iVar6 = *(int*)( algoTime + lVar3 + 8 );
      iVar1 = *(int*)( algoTime + lVar3 + 0xc );
   }
 else {
      iVar1 = 0xca;
      iVar6 = 0x69f;
      iVar5 = 0xb9;
      iVar7 = 0x584;
   }

   iVar4 = (int)( param_1 >> 8 );
   uVar2 = iVar1 * iVar4 + iVar6;
   return uVar2 + ( uVar2 >> 5 ) < ( uint )(iVar5 * iVar4 + iVar7);
}
void HUF_decompress1X_usingDTable(void) {
   long in_R8;
   uint in_R9D;
   if (*(char*)( in_R8 + 1 ) == '\0') {
      if (( in_R9D & 1 ) == 0) {
         HUF_decompress1X1_usingDTable_internal_default();
         return;
      }

      HUF_decompress1X1_usingDTable_internal_bmi2();
      return;
   }

   if (( in_R9D & 1 ) == 0) {
      HUF_decompress1X2_usingDTable_internal_default();
      return;
   }

   HUF_decompress1X2_usingDTable_internal_bmi2();
   return;
}
ulong HUF_decompress1X1_DCtx_wksp(undefined8 param_1, undefined8 param_2, undefined8 param_3, long param_4, ulong param_5, undefined8 param_6, undefined8 param_7, uint param_8) {
   ulong uVar1;
   uVar1 = HUF_readDTableX1_wksp(param_1, param_4, param_5, param_6, param_7, param_8);
   if (uVar1 < 0xffffffffffffff89) {
      if (uVar1 < param_5) {
         if (( param_8 & 1 ) == 0) {
            uVar1 = HUF_decompress1X1_usingDTable_internal_default();
            return uVar1;
         }

         uVar1 = HUF_decompress1X1_usingDTable_internal_bmi2(param_2, param_3, param_4 + uVar1, param_5 - uVar1, param_1);
         return uVar1;
      }

      uVar1 = 0xffffffffffffffb8;
   }

   return uVar1;
}
size_t HUF_decompress1X_DCtx_wksp(undefined8 param_1, void *param_2, size_t param_3, byte *param_4, ulong param_5) {
   int iVar1;
   size_t sVar2;
   if (param_3 == 0) {
      param_3 = 0xffffffffffffffba;
   }
 else {
      if (param_3 < param_5) {
         return 0xffffffffffffffec;
      }

      if (param_3 == param_5) {
         memcpy(param_2, param_4, param_3);
      }
 else {
         if (param_5 != 1) {
            iVar1 = HUF_selectDecoder(param_3, param_5);
            if (iVar1 == 0) {
               sVar2 = HUF_decompress1X1_DCtx_wksp(param_1, param_2, param_3, param_4);
               return sVar2;
            }

            sVar2 = HUF_decompress1X2_DCtx_wksp();
            return sVar2;
         }

         memset(param_2, ( uint ) * param_4, param_3);
      }

   }

   return param_3;
}
void HUF_decompress4X_usingDTable(void) {
   long in_R8;
   if (*(char*)( in_R8 + 1 ) != '\0') {
      HUF_decompress4X2_usingDTable_internal();
      return;
   }

   HUF_decompress4X1_usingDTable_internal();
   return;
}
ulong HUF_decompress4X_hufOnly_wksp(undefined8 param_1, undefined8 param_2, long param_3, long param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined4 param_8) {
   int iVar1;
   ulong uVar2;
   if (param_3 == 0) {
      return 0xffffffffffffffba;
   }

   if (param_5 == 0) {
      return 0xffffffffffffffec;
   }

   iVar1 = HUF_selectDecoder(param_3, param_5, param_3, param_4, param_7, param_8);
   if (iVar1 == 0) {
      uVar2 = HUF_readDTableX1_wksp(param_1, param_4, param_5, param_6);
      if (0xffffffffffffff88 < uVar2) {
         return uVar2;
      }

      if (uVar2 < param_5) {
         uVar2 = HUF_decompress4X1_usingDTable_internal(param_2, param_3, param_4 + uVar2, param_5 - uVar2, param_1, param_8);
         return uVar2;
      }

   }
 else {
      uVar2 = HUF_readDTableX2_wksp();
      if (0xffffffffffffff88 < uVar2) {
         return uVar2;
      }

      if (uVar2 < param_5) {
         uVar2 = HUF_decompress4X2_usingDTable_internal(param_2, param_3, param_4 + uVar2, param_5 - uVar2, param_1, param_8);
         return uVar2;
      }

   }

   return 0xffffffffffffffb8;
}


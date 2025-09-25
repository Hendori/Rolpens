/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* symbolic_to_physical(block_size_descriptor const&, symbolic_compressed_block const&, unsigned
   char*) */void symbolic_to_physical(block_size_descriptor *param_1, symbolic_compressed_block *param_2, uchar *param_3) {
   block_size_descriptor bVar1;
   block_size_descriptor bVar2;
   block_size_descriptor bVar3;
   char cVar4;
   int iVar5;
   int iVar6;
   uint uVar7;
   long lVar8;
   long lVar9;
   symbolic_compressed_block sVar10;
   byte bVar11;
   int iVar12;
   byte bVar14;
   byte *pbVar13;
   uint uVar15;
   uint uVar16;
   byte bVar18;
   ulong uVar17;
   byte *pbVar19;
   uint uVar20;
   symbolic_compressed_block *psVar21;
   undefined8 uVar22;
   long in_FS_OFFSET;
   bool bVar23;
   float fVar24;
   undefined1 local_b8[16];
   undefined1 local_a8[32];
   undefined1 local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 == (symbolic_compressed_block)0x2) {
      param_3[0] = 0xfc;
      param_3[1] = 0xfd;
      param_3[2] = 0xff;
      param_3[3] = 0xff;
      param_3[4] = 0xff;
      param_3[5] = 0xff;
      param_3[6] = 0xff;
      param_3[7] = 0xff;
      lVar8 = 0;
      do {
         param_3[lVar8 + 8] = ( uchar ) * (undefined4*)( param_2 + lVar8 * 2 + 0x14 );
         param_3[lVar8 + 9] = ( uchar )(( uint ) * (undefined4*)( param_2 + lVar8 * 2 + 0x14 ) >> 8);
         lVar8 = lVar8 + 2;
      }
 while ( lVar8 != 8 );
      goto LAB_00100525;
   }

   if (*param_2 == (symbolic_compressed_block)0x1) {
      param_3[0] = 0xfc;
      for (int i = 0; i < 3; i++) {
         param_3[( 2*i + 1 )] = 255;
         param_3[( 2*i + 2 )] = 255;
      }

      param_3[7] = 0xff;
      lVar8 = 0;
      do {
         param_3[lVar8 + 8] = ( uchar ) * (undefined4*)( param_2 + lVar8 * 2 + 0x14 );
         param_3[lVar8 + 9] = ( uchar )(( uint ) * (undefined4*)( param_2 + lVar8 * 2 + 0x14 ) >> 8);
         lVar8 = lVar8 + 2;
      }
 while ( lVar8 != 8 );
      goto LAB_00100525;
   }

   sVar10 = param_2[1];
   uVar7 = (uint)(byte)sVar10;
   local_b8 = (undefined1[16])0x0;
   fVar24 = 0.0;
   uVar17 = ( ulong ) * (ushort*)( param_1 + ( ulong ) * (ushort*)( param_2 + 4 ) * 2 + 0xac7560 );
   bVar1 = param_1[uVar17 * 6 + 0xac8563];
   bVar2 = param_1[(ulong)(byte)param_1[uVar17 * 6 + 0xac8562] * 0x1fb70 + 0x252];
   if ((byte)bVar1 < 0x15) {
      fVar24 = (float)*(int*)( CSWTCH_22 + (ulong)(uint)(byte)bVar1 * 4 );
   }

   bVar3 = param_1[uVar17 * 6 + 0xac8565];
   uVar15 = (uint)(byte)bVar1;
   uVar16 = (uint)(byte)bVar2;
   if (( (byte)bVar3 & 1 ) == 0) {
      iVar6 = get_ise_sequence_bitcount(bVar2, bVar1);
      uVar20 = uVar16;
      if (uVar16 != 0) {
         lVar8 = 0;
         do {
            local_88[lVar8] = decode_ise[(long)(int)( (float)(byte)param_2[lVar8 + 0x40] * _LC2 * ( fVar24 - __LC1 ) + _LC3 ) + (long)(int)uVar15 * 0xe2];
            lVar8 = lVar8 + 1;
         }
 while ( (int)lVar8 < (int)uVar16 );
      }

   }
 else {
      iVar6 = get_ise_sequence_bitcount((uint)(byte)bVar2 + (uint)(byte)bVar2, bVar1);
      if (uVar16 == 0) {
         uVar20 = 0;
      }
 else {
         lVar8 = 0;
         do {
            *(ushort*)( local_88 + lVar8 * 2 ) = CONCAT11(decode_ise[(long)(int)( (float)(byte)param_2[lVar8 + 0x60] * _LC2 * ( fVar24 - __LC1 ) + _LC3 ) + (long)(int)uVar15 * 0xe2], decode_ise[(long)(int)( (float)(byte)param_2[lVar8 + 0x40] * _LC2 * ( fVar24 - __LC1 ) + _LC3 ) + (long)(int)uVar15 * 0xe2]);
            lVar8 = lVar8 + 1;
            uVar20 = (uint)(byte)bVar2 + (uint)(byte)bVar2;
         }
 while ( (int)lVar8 < (int)uVar16 );
      }

   }

   encode_ise(uVar15, uVar20, local_88, local_b8, 0);
   pbVar13 = local_b8 + 0xf;
   pbVar19 = param_3;
   do {
      uVar15 = ( *pbVar13 & 0xf ) << 4 | (int)( uint ) * pbVar13 >> 4;
      uVar15 = uVar15 * 4 & 0xcc | (int)uVar15 >> 2 & 0x33U;
      *pbVar19 = ( byte )((int)uVar15 >> 1) & 0x55 | (char)uVar15 * '\x02' & 0xaaU;
      bVar23 = local_b8 != pbVar13;
      pbVar13 = pbVar13 + -1;
      pbVar19 = pbVar19 + 1;
   }
 while ( bVar23 );
   iVar6 = 0x80 - iVar6;
   bVar18 = ( byte )(( *(ushort*)( param_2 + 4 ) & 0x7ff ) >> 8);
   *param_3 = ( uchar )(*(ushort*)( param_2 + 4 ) & 0x7ff);
   bVar14 = (char)sVar10 * '\b' - 8U & 0x18;
   bVar11 = param_3[2];
   param_3[1] = param_3[1] & 0xe0 | bVar18 | bVar14;
   bVar18 = bVar18 | bVar14;
   if ((byte)sVar10 < 2) {
      sVar10 = param_2[8];
      param_3[1] = (char)sVar10 << 5 | bVar18;
      param_3[2] = bVar11 & 0xfe | ( byte )(( (byte)sVar10 & 0xf ) >> 3);
   }
 else {
      iVar12 = ( *(ushort*)( param_2 + 6 ) & 0x3f ) << 5;
      bVar14 = ( byte )((uint)iVar12 >> 8);
      lVar8 = 0;
      param_3[2] = bVar11 & 0xf8 | bVar14;
      param_3[1] = bVar18 | (byte)iVar12;
      bVar18 = ( byte )(( *(ushort*)( param_2 + 6 ) >> 6 & 0xf ) << 3);
      uVar15 = 4;
      param_3[2] = bVar18 | bVar11 & 0x80 | bVar14;
      if (param_2[2] == (symbolic_compressed_block)0x0) {
         do {
            if ((byte)param_2[lVar8 + 8] >> 2 < uVar15) {
               uVar15 = ( uint )((byte)param_2[lVar8 + 8] >> 2);
            }

            lVar8 = lVar8 + 1;
         }
 while ( (uint)lVar8 < (uint)(byte)sVar10 );
         uVar16 = uVar15;
         uVar20 = 2;
         if (uVar15 != 3) {
            uVar16 = uVar15 + 1;
            uVar20 = uVar15;
         }

         lVar8 = 0;
         do {
            lVar9 = lVar8 + 8;
            cVar4 = (char)lVar8;
            lVar8 = lVar8 + 1;
            uVar16 = uVar16 | ( (byte)param_2[lVar9] >> 2 ) - uVar20 << ( cVar4 + 2U & 0x1f );
            uVar15 = (uint)(byte)sVar10;
         }
 while ( (uint)lVar8 < uVar15 );
         lVar8 = 0;
         do {
            sVar10 = ( symbolic_compressed_block )((char)sVar10 + 2);
            lVar9 = lVar8 + 8;
            lVar8 = lVar8 + 1;
            uVar16 = uVar16 | ( (byte)param_2[lVar9] & 3 ) << ( (byte)sVar10 & 0x1f );
         }
 while ( (uint)lVar8 < uVar15 );
         iVar12 = uVar7 * 3 + -4;
         iVar6 = iVar6 - iVar12;
         param_3[2] = bVar18 | bVar14 | ( byte )(uVar16 << 7);
         param_3[3] = param_3[3] & 0xe0 | ( byte )(( uVar16 << 7 ) >> 8) & 0x1f;
         uVar7 = ( 1 << ( (byte)iVar12 & 0x1f ) ) - 1;
         bVar11 = (byte)iVar6 & 7;
         *(ushort*)( param_3 + ( iVar6 >> 3 ) ) = ~(ushort)(uVar7 << bVar11) & *(ushort*)( param_3 + ( iVar6 >> 3 ) ) | ( ushort )(( (int)uVar16 >> 6 & uVar7 ) << bVar11);
      }
 else {
         sVar10 = param_2[8];
         param_3[2] = bVar18 | bVar14;
         param_3[3] = (char)sVar10 * '\x02' & 0x1fU | param_3[3] & 0xe0;
      }

   }

   if (( (byte)bVar3 & 1 ) != 0) {
      bVar11 = ( byte )(iVar6 + -2) & 7;
      *(ushort*)( param_3 + ( iVar6 + -2 >> 3 ) ) = ~(ushort)(3 << bVar11) & *(ushort*)( param_3 + ( iVar6 + -2 >> 3 ) ) | ( ushort )(( (byte)param_2[3] & 3 ) << bVar11);
   }

   iVar6 = *(int*)( param_2 + 0xc );
   sVar10 = param_2[1];
   if (sVar10 == (symbolic_compressed_block)0x0) {
      iVar12 = 0;
      LAB_00100511:uVar22 = 0x1d;
   }
 else {
      lVar8 = 0;
      iVar12 = 0;
      psVar21 = param_2;
      do {
         lVar9 = 0;
         iVar5 = ( uint )(byte)(( (byte)param_2[lVar8 + 8] >> 2 ) + 1) * 2;
         do {
            local_a8[lVar9 + iVar12] = ( &color_uquant_to_scrambled_pquant_tables )[(ulong)(byte)psVar21[lVar9 + 0x14] + (long)( iVar6 + -4 ) * 0x100];
            lVar9 = lVar9 + 1;
         }
 while ( (int)lVar9 < iVar5 );
         lVar8 = lVar8 + 1;
         iVar12 = iVar12 + iVar5;
         psVar21 = psVar21 + 8;
      }
 while ( (uint)lVar8 < (uint)(byte)sVar10 );
      uVar22 = 0x11;
      if (sVar10 != (symbolic_compressed_block)0x1) goto LAB_00100511;
   }

   encode_ise(iVar6, iVar12, local_a8, param_3, uVar22);
   LAB_00100525:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* physical_to_symbolic(block_size_descriptor const&, unsigned char const*,
   symbolic_compressed_block&) */void physical_to_symbolic(block_size_descriptor *param_1, uchar *param_2, symbolic_compressed_block *param_3) {
   block_size_descriptor bVar1;
   block_size_descriptor bVar2;
   block_size_descriptor bVar3;
   char cVar4;
   ushort uVar5;
   ushort uVar6;
   int iVar7;
   uint *puVar8;
   byte bVar9;
   uint uVar10;
   ushort uVar11;
   uint uVar12;
   int iVar13;
   uint uVar14;
   long lVar15;
   ulong uVar16;
   uint *puVar17;
   byte *pbVar18;
   byte *pbVar19;
   symbolic_compressed_block *psVar20;
   int iVar21;
   uint uVar22;
   byte *pbVar23;
   undefined8 uVar24;
   int iVar25;
   int iVar26;
   long lVar27;
   uint uVar28;
   long in_FS_OFFSET;
   bool bVar30;
   uint local_c8[4];
   byte local_b8[16];
   byte local_a8[32];
   byte local_88[72];
   long local_40;
   ulong uVar29;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_3 = (symbolic_compressed_block)0x3;
   uVar11 = *(ushort*)param_2;
   if (( uVar11 & 0x1ff ) == 0x1fc) {
      param_3[1] = (symbolic_compressed_block)0x0;
      *param_3 = ( symbolic_compressed_block )(( ( uVar11 & 0x200 ) == 0 ) + '\x01');
      lVar15 = 0;
      do {
         *(uint*)( param_3 + lVar15 * 2 + 0x14 ) = (uint)CONCAT11(param_2[lVar15 + 9], param_2[lVar15 + 8]);
         lVar15 = lVar15 + 2;
      }
 while ( lVar15 != 8 );
      uVar11 = *(ushort*)( param_2 + 1 );
      if (param_1[2] == (block_size_descriptor)0x1) {
         if (( ~(uint)uVar11 & 0xc ) == 0) {
            uVar12 = (int)(uint)uVar11 >> 4 & 0xffU | ( *(ushort*)( param_2 + 2 ) & 0x1f0 ) << 4;
            uVar10 = ( uint ) * (ushort*)( param_2 + 5 ) * 4 & 0x1f00 | (int)( uint ) * (ushort*)( param_2 + 4 ) >> 6 & 0xffU;
            uVar28 = (int)( uint ) * (ushort*)( param_2 + 3 ) >> 1 & 0x1fff;
            if (( uVar12 == 0x1fff ) && ( uVar28 == 0x1fff )) {
               if (( uVar10 == 0x1fff ) && ( (int)( uint ) * (ushort*)( param_2 + 6 ) >> 3 == 0x1fff )) goto LAB_001007af;
            }
 else if (( uVar12 < uVar28 ) && ( uVar10 < ( uint )((int)( uint ) * (ushort*)( param_2 + 6 ) >> 3) )) goto LAB_001007af;
         }

      }
 else {
         uVar12 = (int)(uint)uVar11 >> 2 & 0x1ff;
         uVar14 = (int)( uint ) * (ushort*)( param_2 + 3 ) >> 4 & 0x1ff;
         uVar10 = (int)( uint ) * (ushort*)( param_2 + 4 ) >> 5 & 0x1ff;
         uVar22 = (int)( uint ) * (ushort*)( param_2 + 5 ) >> 6 & 0x1ff;
         uVar28 = (int)( uint ) * (ushort*)( param_2 + 2 ) >> 3 & 0x1ff;
         if (( uVar12 == 0x1ff ) && ( uVar28 == 0x1ff )) {
            if (( uVar14 == 0x1ff ) && ( ( ( uVar10 == 0x1ff && ( uVar22 == 0x1ff ) ) && ( (int)( uint ) * (ushort*)( param_2 + 6 ) >> 7 == 0x1ff ) ) )) goto LAB_001007af;
         }
 else if (( uVar12 < uVar28 && uVar14 < uVar10 ) && ( uVar22 < ( uint )((int)( uint ) * (ushort*)( param_2 + 6 ) >> 7) )) goto LAB_001007af;
      }

   }
 else if (*(short*)( param_1 + ( ulong )(uVar11 & 0x7ff) * 2 + 0xac7560 ) != -1) {
      uVar5 = *(ushort*)( param_2 + 1 );
      pbVar23 = param_2 + 0xf;
      uVar6 = *(ushort*)( param_1 + ( ulong )(uVar11 & 0x7ff) * 2 + 0xac7560 );
      bVar1 = param_1[(ulong)uVar6 * 6 + 0xac8565];
      bVar2 = param_1[(ulong)uVar6 * 6 + 0xac8563];
      bVar3 = param_1[(ulong)(byte)param_1[(ulong)uVar6 * 6 + 0xac8562] * 0x1fb70 + 0x252];
      *(ushort*)( param_3 + 4 ) = uVar11 & 0x7ff;
      uVar12 = (uint)(byte)bVar3 + (uint)(byte)bVar3;
      if (( (byte)bVar1 & 1 ) == 0) {
         uVar12 = (uint)(byte)bVar3;
      }

      uVar28 = (int)(uint)uVar5 >> 3 & 3;
      uVar29 = (ulong)uVar28;
      iVar25 = uVar28 + 1;
      param_3[1] = SUB41(iVar25, 0);
      pbVar18 = local_b8;
      do {
         bVar9 = *pbVar23;
         pbVar19 = pbVar18 + 1;
         pbVar23 = pbVar23 + -1;
         uVar10 = ( bVar9 & 0xf ) << 4 | (int)(uint)bVar9 >> 4;
         uVar10 = uVar10 * 4 & 0xcc | (int)uVar10 >> 2 & 0x33U;
         *pbVar18 = (char)uVar10 * '\x02' & 0xaaU | ( byte )((int)uVar10 >> 1) & 0x55;
         pbVar18 = pbVar19;
      }
 while ( local_a8 != pbVar19 );
      iVar7 = get_ise_sequence_bitcount(uVar12, (ulong)(byte)bVar2);
      lVar27 = (ulong)(byte)bVar2 * 0xe2;
      decode_ise(bVar2, uVar12, local_b8, local_88);
      lVar15 = 0;
      if (( (byte)bVar1 & 1 ) == 0) {
         do {
            param_3[lVar15 + 0x40] = *(symbolic_compressed_block*)( (ulong)local_88[lVar15] + lVar27 + 0x101048 );
            lVar15 = lVar15 + 1;
         }
 while ( (int)lVar15 < (int)(uint)(byte)bVar3 );
      }
 else {
         do {
            param_3[lVar15 + 0x40] = *(symbolic_compressed_block*)( (ulong)local_88[lVar15 * 2] + lVar27 + 0x101048 );
            param_3[lVar15 + 0x60] = *(symbolic_compressed_block*)( lVar27 + 0x101048 + (ulong)local_88[lVar15 * 2 + 1] );
            lVar15 = lVar15 + 1;
         }
 while ( (int)lVar15 < (int)(uint)(byte)bVar3 );
         if (iVar25 == 4) goto LAB_001007ac;
      }

      param_3[2] = (symbolic_compressed_block)0x0;
      iVar21 = 0x80 - iVar7;
      if (iVar25 == 1) {
         uVar11 = 0;
         iVar13 = 0;
         local_c8[0] = (int)( uint ) * (ushort*)( param_2 + 1 ) >> 5 & 0xf;
      }
 else {
         iVar13 = iVar25 * 3 + -4;
         iVar26 = iVar21 - iVar13;
         uVar12 = ( ( 1 << ( (byte)iVar13 & 0x1f ) ) - 1U & (int)( uint ) * (ushort*)( param_2 + ( iVar26 >> 3 ) ) >> ( (byte)iVar26 & 7 ) ) << 6 | (int)( uint ) * (ushort*)( param_2 + 2 ) >> 7 & 0x3fU;
         uVar10 = (int)( uint ) * (ushort*)( param_2 + 2 ) >> 7 & 3;
         if (uVar10 == 0) {
            puVar8 = local_c8;
            do {
               *puVar8 = (int)uVar12 >> 2 & 0xf;
               puVar8 = puVar8 + 1;
            }
 while ( local_c8 + uVar29 + 1 != puVar8 );
            param_3[2] = (symbolic_compressed_block)0x1;
            iVar13 = 0;
            iVar26 = iVar21;
         }
 else {
            puVar8 = local_c8;
            iVar21 = 2;
            puVar17 = puVar8;
            do {
               bVar9 = (byte)iVar21;
               iVar21 = iVar21 + 1;
               *puVar17 = ( ( (int)uVar12 >> ( bVar9 & 0x1f ) & 1U ) + ( uVar10 - 1 ) ) * 4;
               puVar17 = puVar17 + 1;
            }
 while ( iVar21 != uVar28 + 3 );
            do {
               bVar9 = (byte)iVar21;
               iVar21 = iVar21 + 2;
               *puVar8 = *puVar8 | (int)uVar12 >> ( bVar9 & 0x1f ) & 3U;
               puVar8 = puVar8 + 1;
            }
 while ( iVar21 != uVar28 * 3 + 5 );
         }

         uVar11 = ( ushort )((int)( uint ) * (ushort*)( param_2 + 1 ) >> 5) & 0x3ff;
         iVar21 = iVar26;
      }

      puVar8 = local_c8;
      *(ushort*)( param_3 + 6 ) = uVar11;
      uVar16 = 0;
      do {
         param_3[uVar16 + 8] = SUB41(puVar8[uVar16], 0);
         bVar30 = uVar29 != uVar16;
         uVar16 = uVar16 + 1;
      }
 while ( bVar30 );
      iVar26 = 0;
      puVar17 = puVar8;
      do {
         uVar12 = *puVar17;
         puVar17 = puVar17 + 1;
         iVar26 = iVar26 + 2 + ( (int)uVar12 >> 2 ) * 2;
      }
 while ( local_c8 + uVar29 + 1 != puVar17 );
      if (iVar26 < 0x13) {
         iVar13 = ( *(int*)( physical_to_symbolic(block_size_descriptor_const&,unsigned_char_const*,symbolic_compressed_block&)
                         :: ) - iVar7 ) - iVar13;
         if (( (byte)bVar1 & 1 ) != 0) {
            iVar13 = iVar13 + -2;
         }

         if (iVar13 < 0) {
            iVar13 = 0;
         }

         cVar4 = ( &quant_mode_table )[(long)iVar13 + (long)( iVar26 >> 1 ) * 0x80];
         if ('\x03' < cVar4) {
            *(int*)( param_3 + 0xc ) = (int)cVar4;
            uVar24 = 0x1d;
            if (iVar25 == 1) {
               uVar24 = 0x11;
            }

            decode_ise((int)cVar4, iVar26, param_2, local_a8, uVar24);
            iVar25 = 0;
            lVar15 = *(long*)( &color_scrambled_pquant_to_uquant_tables + (long)( *(int*)( param_3 + 0xc ) + -4 ) * 8 );
            psVar20 = param_3;
            do {
               iVar7 = ( (int)*puVar8 >> 2 ) * 2 + 2;
               lVar27 = 0;
               if (0 < iVar7) {
                  do {
                     psVar20[lVar27 + 0x14] = *(symbolic_compressed_block*)( lVar15 + (ulong)local_a8[lVar27 + iVar25] );
                     lVar27 = lVar27 + 1;
                  }
 while ( (int)lVar27 < iVar7 );
               }

               psVar20 = psVar20 + 8;
               iVar25 = iVar25 + iVar7;
               puVar8 = puVar8 + 1;
            }
 while ( param_3 + uVar29 * 8 + 8 != psVar20 );
            param_3[3] = (symbolic_compressed_block)0xff;
            if (( (byte)bVar1 & 1 ) != 0) {
               param_3[3] = ( symbolic_compressed_block )(( byte )((int)( uint ) * (ushort*)( param_2 + ( iVar21 + -2 >> 3 ) ) >> ( ( byte )(iVar21 + -2) & 7 )) & 3);
            }

            goto LAB_001007af;
         }

      }

   }

   LAB_001007ac:*param_3 = (symbolic_compressed_block)0x0;
   LAB_001007af:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}


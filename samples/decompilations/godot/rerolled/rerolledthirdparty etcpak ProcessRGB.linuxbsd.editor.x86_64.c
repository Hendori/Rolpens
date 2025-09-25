/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* (anonymous namespace)::compressBlockTH(unsigned char*, Luma&, unsigned int&, unsigned int&,
   bool&) [clone .constprop.0] */uint(anonymous_namespace) {
   uint uVar1;
   int *piVar2;
   char *pcVar3;
   Luma LVar4;
   Luma LVar5;
   ushort uVar6;
   ushort uVar7;
   ushort uVar8;
   ushort uVar9;
   undefined1 uVar10;
   bool bVar11;
   undefined8 uVar12;
   short sVar13;
   uint uVar14;
   byte bVar15;
   ushort uVar16;
   uint uVar17;
   uint uVar18;
   char *pcVar19;
   ulong *puVar20;
   undefined1 uVar21;
   uint uVar22;
   uint uVar23;
   uint uVar24;
   uint uVar25;
   int iVar26;
   ulong uVar27;
   byte bVar28;
   byte bVar29;
   Luma *pLVar30;
   byte bVar31;
   char cVar32;
   ushort uVar33;
   uint uVar34;
   Luma *pLVar35;
   uint uVar36;
   uint uVar37;
   char *pcVar38;
   ulong uVar39;
   byte *pbVar40;
   long lVar41;
   byte bVar42;
   short sVar43;
   Luma *pLVar44;
   ulong uVar45;
   byte bVar46;
   short sVar47;
   long lVar48;
   byte *pbVar49;
   byte bVar50;
   int iVar51;
   uint uVar52;
   char *pcVar53;
   byte bVar54;
   byte bVar55;
   short sVar56;
   byte *pbVar57;
   byte bVar58;
   short sVar59;
   byte bVar60;
   int iVar61;
   int iVar62;
   byte bVar63;
   long in_FS_OFFSET;
   ushort uVar64;
   uint3 uVar65;
   ushort uVar66;
   ushort uVar67;
   ulong local_160;
   ulong local_158;
   uint local_14c;
   uint local_13c;
   byte local_11c;
   byte local_112;
   byte local_111;
   uint local_110;
   byte local_f6;
   int local_d8[12];
   uint local_a8[4];
   ulong local_98;
   uint local_90;
   uint local_68[4];
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   uVar12 = __LC0;
   lVar48 = 0;
   pLVar30 = param_2 + 5;
   pcVar3 = (char*)( (long)&local_58 + 1 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = __LC0;
   uStack_50 = _UNK_00106c68;
   pcVar53 = pcVar3;
   do {
      LVar4 = *pLVar30;
      cVar32 = (char)lVar48;
      pcVar19 = pcVar53;
      pLVar35 = pLVar30;
      do {
         pcVar38 = pcVar19;
         pLVar44 = pLVar35;
         if ((byte)pLVar35[-1] <= (byte)LVar4) break;
         *pLVar35 = pLVar35[-1];
         *pcVar19 = pcVar19[-1];
         pcVar19 = pcVar19 + -1;
         pLVar35 = pLVar35 + -1;
         pcVar38 = (char*)&local_58;
         pLVar44 = param_2 + 4;
      }
 while ( pcVar19 != pcVar53 + ( -1 - lVar48 ) );
      lVar48 = lVar48 + 1;
      *pLVar44 = LVar4;
      pLVar30 = pLVar30 + 1;
      pcVar53 = pcVar53 + 1;
      *pcVar38 = cVar32 + '\x01';
   }
 while ( lVar48 != 0xf );
   LVar4 = param_2[0x13];
   lVar48 = 1;
   LVar5 = param_2[4];
   uVar16 = ( (byte)LVar4 + 8 ) - (ushort)(byte)param_2[5];
   uVar17 = 0;
   uVar33 = (ushort)(byte)param_2[5];
   do {
      lVar41 = lVar48 + 5;
      uVar33 = ( ( (ushort)(byte)compressBlockTH(unsigned_char * Luma & unsigned_int & unsigned_int & ::diffBonus[lVar48] + ( (ushort)(byte)LVar4 - (ushort)(byte)LVar5 )) - (ushort)(byte)param_2[lVar41] ) + uVar33 );
      if (uVar33 < uVar16) {
         uVar17 = (uint)lVar48;
         uVar16 = uVar33;
      }

      lVar48 = lVar48 + 1;
      uVar33 = (ushort)(byte)param_2[lVar41];
   }
 while ( lVar48 != 0xe );
   if (( ushort )(( (byte)param_2[0x12] + 8 ) - (ushort)(byte)LVar5) < uVar16) {
      iVar51 = 0xf;
      uVar45 = 0xe;
      uVar17 = 0xe;
      lVar48 = 0xf;
      uVar27 = 0xe;
   }
 else {
      uVar27 = ( ulong )(uVar17 & 0xff);
      uVar45 = ( ulong )(uVar17 & 0xff);
      lVar48 = uVar27 + 1;
      iVar51 = ( uVar17 & 0xff ) + 1;
   }

   bVar58 = (char)LVar4 - (char)param_2[lVar48 + 4];
   uVar16 = (ushort)(byte)param_2[uVar27 + 4] - (ushort)(byte)LVar5;
   uVar33 = uVar16 & 0xff;
   if ((byte)uVar16 < bVar58) {
      if ((ushort)bVar58 < ( ushort )(uVar33 * 2)) goto LAB_00100182;
      *param_5 = true;
      cVar32 = '\x01';
      bVar11 = false;
   }
 else if (uVar33 < ( ushort )((ushort)bVar58 * 2)) {
      LAB_00100182:cVar32 = *param_5;
      bVar11 = false;
   }
 else {
      *param_5 = true;
      cVar32 = '\x01';
      bVar11 = true;
   }

   local_58._0_1_ = (char)uVar12;
   bVar63 = *(char*)( (long)&local_58 + (long)iVar51 ) << 2;
   uVar65 = CONCAT12(bVar63, CONCAT11(*(char*)( (long)&local_58 + uVar45 ) << 2, (char)local_58 << 2));
   uVar45 = ( ulong )(( uVar65 & 0xff00 ) >> 8);
   uVar39 = ( ulong )(uVar65 & 0xff);
   uVar27 = ( ulong )(byte)(uStack_50._7_1_ << 2);
   bVar58 = param_1[uVar27];
   bVar54 = param_1[uVar27 + 1];
   bVar28 = param_1[uVar27 + 2];
   uVar64 = (ushort)param_1[uVar39];
   uVar16 = (ushort)param_1[uVar45];
   uVar66 = (ushort)param_1[uVar39 + 1];
   uVar33 = (ushort)param_1[uVar45 + 1];
   uVar22 = (int)( (uint)uVar64 + (uint)uVar16 ) >> 1;
   uVar67 = (ushort)param_1[uVar39 + 2];
   local_160 = (ulong)uVar22;
   uVar6 = (ushort)param_1[uVar45 + 2];
   uVar23 = (int)( (uint)uVar66 + (uint)uVar33 ) >> 1;
   local_158 = (ulong)uVar23;
   local_14c._0_1_ = ( byte )((int)( (uint)uVar67 + (uint)uVar6 ) >> 1);
   uVar7 = (ushort)param_1[bVar63];
   uVar8 = (ushort)param_1[(ulong)bVar63 + 1];
   uVar9 = (ushort)param_1[(ulong)bVar63 + 2];
   if (bVar11) {
      bVar63 = (char)uVar17 + 1;
      uVar52 = 0xf - uVar17 & 0xff;
      if (bVar63 < 0x10) {
         uVar36 = 0;
         pbVar40 = (byte*)( (long)&local_58 + (ulong)bVar63 );
         uVar18 = 0;
         uVar24 = 0;
         do {
            bVar60 = *pbVar40;
            pbVar40 = pbVar40 + 1;
            lVar48 = ( (ulong)bVar60 & 0x3f ) * 4;
            uVar18 = uVar18 + param_1[lVar48];
            uVar36 = uVar36 + param_1[lVar48 + 1];
            uVar24 = uVar24 + param_1[lVar48 + 2];
         }
 while ( (byte*)( pcVar3 + ( ulong )(0xe - uVar17 & 0xff) + (ulong)bVar63 ) != pbVar40 );
         uVar14 = ( uint )(( ( ( ulong )(uVar24 & 0xffff) / (ulong)(long)(int)uVar52 & 0xff ) + 8 ) / 0x11);
         uVar24 = ( uint )(( ( ( ulong )(uVar36 & 0xffff) / (ulong)(long)(int)uVar52 & 0xff ) + 8 ) / 0x11);
         uVar18 = ( uint )(( ( ( ulong )(uVar18 & 0xffff) / (ulong)(long)(int)uVar52 & 0xff ) + 8 ) / 0x11);
      }
 else {
         uVar18 = 0;
         uVar24 = 0;
         uVar14 = 0;
      }

      uVar52 = uVar24;
      if (cVar32 == '\0') {
         uVar27 = (ulong)(byte)local_14c;
         LAB_001006eb:uVar34 = 0;
         uVar17 = ( uint )(( uVar27 + 8 ) / 0x11);
         uVar24 = (int)( ( ( ( ( ( ( ( ( ( ( (uint)uVar16 - (uint)uVar64 ) + (uint)uVar33 ) - (uint)uVar66 ) + (uint)uVar6 ) - (uint)uVar67 ) + (uint)bVar58 ) - (uint)uVar7 ) + (uint)bVar54 ) - (uint)uVar8 ) + (uint)bVar28 ) - (uint)uVar9 ) / 0xc;
         uVar23 = ( uint )(( local_158 + 8 ) / 0x11);
         uVar22 = ( uint )(( local_160 + 8 ) / 0x11);
         if (( ( 0x10 < uVar24 ) && ( uVar34 = 1 ),0x17 < uVar24 )) {
            uVar34 = ( 0x29 < uVar24 ) + 3;
         }

         if (uVar14 == 0) {
            bVar58 = 0x11;
            uVar36 = 1;
            if (uVar52 != 0) goto LAB_001007a4;
            LAB_00100e1b:bVar54 = (byte)uVar36;
            bVar28 = 0x11;
            uVar24 = 1;
            if (uVar18 != 0) goto LAB_001007c6;
            LAB_00100e34:local_11c = 0x11;
            uVar52 = 1;
            local_f6 = 1;
         }
 else {
            uVar36 = 0xe;
            if (uVar14 < 0xf) {
               uVar36 = uVar14;
            }

            bVar58 = (char)( uVar36 << 4 ) + (char)uVar36;
            if (uVar52 == 0) goto LAB_00100e1b;
            LAB_001007a4:bVar54 = (byte)uVar36;
            uVar24 = 0xe;
            if (uVar52 < 0xf) {
               uVar24 = uVar52;
            }

            bVar28 = (char)( uVar24 << 4 ) + (char)uVar24;
            if (uVar18 == 0) goto LAB_00100e34;
            LAB_001007c6:uVar52 = 0xe;
            if (uVar18 < 0xf) {
               uVar52 = uVar18;
            }

            local_f6 = (byte)uVar52;
            local_11c = (char)( uVar52 << 4 ) + local_f6;
         }

         bVar11 = false;
         uVar18 = ( uint )(( uVar27 + 8 ) / 0x11);
         goto joined_r0x0010047d;
      }

      uVar34 = 0;
      uVar23 = ( uint )(( (ulong)uVar23 + 8 ) / 0x11);
      uVar17 = ( uint )(( (ulong)(byte)local_14c + 8 ) / 0x11);
      uVar22 = ( uint )(( (ulong)uVar22 + 8 ) / 0x11);
      uVar36 = (int)( ( ( ( (uint)uVar33 + ( (uint)uVar16 - (uint)uVar64 ) ) - (uint)uVar66 ) + (uint)uVar6 ) - (uint)uVar67 ) / 6;
      if (0x10 < uVar36) {
         if (0x17 < uVar36) goto LAB_0010069f;
         uVar34 = 1;
      }

   }
 else {
      uVar14 = ( uint )(( (ulong)(byte)local_14c + 8 ) / 0x11);
      uVar52 = ( uint )(( (ulong)uVar23 + 8 ) / 0x11);
      uVar24 = ( uint )(( (ulong)uVar23 + 8 ) / 0x11);
      uVar18 = ( uint )(( (ulong)uVar22 + 8 ) / 0x11);
      if (cVar32 == '\0') {
         local_160 = ( ulong )(byte)((int)( (uint)uVar7 + (uint)bVar58 ) >> 1);
         local_158 = ( ulong )(byte)((int)( (uint)uVar8 + (uint)bVar54 ) >> 1);
         uVar27 = ( ulong )(uint)((int)( (uint)uVar9 + (uint)bVar28 ) >> 1);
         goto LAB_001006eb;
      }

      uVar22 = 0xf - uVar17 & 0xff;
      if (( byte )(uVar17 + 1) < 0x10) {
         uVar27 = ( ulong )(uVar17 + 1 & 0xff);
         uVar23 = 0;
         pbVar40 = (byte*)( (long)&local_58 + uVar27 );
         uVar34 = 0;
         uVar36 = 0;
         do {
            bVar63 = *pbVar40;
            pbVar40 = pbVar40 + 1;
            lVar48 = ( (ulong)bVar63 & 0x3f ) * 4;
            uVar36 = uVar36 + param_1[lVar48];
            uVar34 = uVar34 + param_1[lVar48 + 1];
            uVar23 = uVar23 + param_1[lVar48 + 2];
         }
 while ( pbVar40 != (byte*)( pcVar3 + ( 0xe - uVar17 & 0xff ) + uVar27 ) );
         uVar17 = ( uint )(( ( ( ulong )(uVar23 & 0xffff) / (ulong)(long)(int)uVar22 & 0xff ) + 8 ) / 0x11);
         uVar23 = ( uint )(( ( ( ulong )(uVar34 & 0xffff) / (ulong)(long)(int)uVar22 & 0xff ) + 8 ) / 0x11);
         uVar22 = ( uint )(( ( ( ulong )(uVar36 & 0xffff) / (ulong)(long)(int)uVar22 & 0xff ) + 8 ) / 0x11);
      }
 else {
         uVar22 = 0;
         uVar23 = 0;
         uVar17 = 0;
      }

      uVar34 = 0;
      uVar36 = (int)( ( ( ( (uint)bVar54 + ( (uint)bVar58 - (uint)uVar7 ) ) - (uint)uVar8 ) + (uint)bVar28 ) - (uint)uVar9 ) / 6;
      if (( 0x10 < uVar36 ) && ( uVar34 = 0x17 < uVar36 )) {
         LAB_0010069f:uVar24 = uVar52;
         uVar34 = 2;
         if (0x20 < uVar36) {
            uVar34 = ( 0x29 < uVar36 ) + 3;
         }

      }

   }

   bVar54 = (byte)uVar14;
   bVar58 = (char)( uVar14 << 4 ) + bVar54;
   local_f6 = (byte)uVar18;
   bVar28 = (char)( uVar24 << 4 ) + (char)uVar24;
   bVar11 = true;
   local_11c = (char)( uVar18 << 4 ) + local_f6;
   uVar36 = uVar14;
   uVar52 = uVar18;
   uVar18 = uVar17;
   joined_r0x0010047d:if (uVar18 == 0) {
      bVar63 = 0x11;
      uVar17 = 1;
   }
 else {
      if (0xe < uVar17) {
         uVar17 = 0xe;
      }

      bVar63 = (char)( uVar17 << 4 ) + (char)uVar17;
   }

   if (uVar23 == 0) {
      local_112 = 0x11;
      uVar18 = 1;
   }
 else {
      uVar18 = 0xe;
      if (uVar23 < 0xf) {
         uVar18 = uVar23;
      }

      local_112 = (char)( uVar18 << 4 ) + (char)uVar18;
   }

   if (uVar22 == 0) {
      local_111 = 0x11;
      bVar60 = 1;
      uVar23 = 1;
   }
 else {
      uVar23 = 0xe;
      if (uVar22 < 0xf) {
         uVar23 = uVar22;
      }

      bVar60 = (byte)uVar23;
      local_111 = (char)( uVar23 << 4 ) + bVar60;
   }

   local_13c = 10;
   local_14c = 0x3f804000;
   *param_3 = 0;
   pbVar40 = (byte*)( (long)&tableTH + (ulong)uVar34 );
   do {
      if (( 1 < (byte)uVar34 ) && ( local_13c == uVar34 - 2 )) break;
      bVar46 = *pbVar40;
      uVar22 = (uint)bVar46;
      uVar16 = (ushort)bVar63 + (ushort)bVar46;
      sVar13 = (ushort)bVar63 - (ushort)bVar46;
      uVar21 = 0;
      if (-1 < sVar13) {
         uVar21 = (char)sVar13;
      }

      sVar13 = (ushort)local_112 - (ushort)bVar46;
      uVar10 = 0;
      if (-1 < sVar13) {
         uVar10 = (char)sVar13;
      }

      sVar13 = (ushort)local_111 - (ushort)bVar46;
      if (sVar13 < 0) {
         sVar13 = 0;
      }

      if (0xff < uVar16) {
         uVar16 = 0xff;
      }

      bVar15 = (byte)uVar16;
      uVar14 = uVar22 + (ushort)local_112;
      if (0xff < uVar14) {
         uVar14 = 0xff;
      }

      uVar25 = uVar22 + (ushort)local_111;
      bVar42 = (byte)uVar14;
      if (0xff < uVar25) {
         uVar25 = 0xff;
      }

      bVar55 = (byte)uVar25;
      if (bVar11) {
         uVar14 = (uint)local_112;
         uVar25 = (uint)local_111;
         bVar46 = bVar15;
         bVar31 = bVar58;
         bVar29 = bVar28;
         bVar15 = bVar63;
         bVar50 = local_11c;
      }
 else {
         uVar37 = (ushort)bVar58 + uVar22;
         uVar1 = (ushort)bVar28 + uVar22;
         uVar22 = (ushort)local_11c + uVar22;
         if (0xff < uVar37) {
            uVar37 = 0xff;
         }

         bVar31 = (byte)uVar37;
         if (0xff < uVar1) {
            uVar1 = 0xff;
         }

         bVar29 = (byte)uVar1;
         if (0xff < uVar22) {
            uVar22 = 0xff;
         }

         bVar50 = (byte)uVar22;
         sVar47 = (ushort)bVar58 - (ushort)bVar46;
         sVar43 = (ushort)bVar28 - (ushort)bVar46;
         sVar56 = 0;
         sVar59 = (ushort)local_11c - (ushort)bVar46;
         if (sVar47 < 0) {
            sVar47 = sVar56;
         }

         bVar46 = (byte)sVar47;
         if (sVar43 < 0) {
            sVar43 = sVar56;
         }

         bVar42 = (byte)sVar43;
         if (-1 < sVar59) {
            sVar56 = sVar59;
         }

         bVar55 = (byte)sVar56;
      }

      uVar37 = 0;
      lVar48 = 0;
      local_90 = ( (uint)CONCAT11(uVar21, uVar10) << 8 | (int)sVar13 & 0xffU ) << 8 | (uint)bVar15;
      uVar22 = 0;
      local_98 = ( ( ( ( ( ( ( ulong )(uVar14 & 0xff) << 8 | ( ulong )(uVar25 & 0xff) ) << 8 | (ulong)bVar46 ) << 8 | (ulong)bVar42 ) << 8 | (ulong)bVar55 ) << 8 | (ulong)bVar31 ) << 8 | (ulong)bVar29 ) << 8 | (ulong)bVar50;
      pbVar57 = param_1 + 0x40;
      do {
         pbVar49 = pbVar57 + -0x40;
         do {
            uVar37 = uVar37 << 2;
            lVar41 = 0;
            uVar14 = 0x3f804000;
            puVar20 = &local_98;
            do {
               iVar26 = (uint)pbVar49[1] - ( uint ) * (byte*)( (long)puVar20 + 1 );
               iVar51 = -iVar26;
               if (0 < iVar26) {
                  iVar51 = iVar26;
               }

               iVar61 = (uint)pbVar49[2] - ( uint ) * (byte*)( (long)puVar20 + 2 );
               iVar26 = -iVar61;
               if (0 < iVar61) {
                  iVar26 = iVar61;
               }

               iVar62 = ( uint ) * pbVar49 - ( uint )(byte) * puVar20;
               iVar61 = -iVar62;
               if (0 < iVar62) {
                  iVar61 = iVar62;
               }

               iVar51 = iVar51 * 0x4c + iVar26 * 0x26 + iVar61 * 0xe;
               uVar25 = iVar51 * iVar51;
               if (uVar25 < uVar14) {
                  uVar37 = uVar37 & 0xfffffffc | (uint)lVar41;
                  uVar14 = uVar25;
               }

               lVar41 = lVar41 + 1;
               puVar20 = (ulong*)( (long)puVar20 + 3 );
            }
 while ( lVar41 != 4 );
            pbVar49 = pbVar49 + 0x10;
            uVar22 = uVar22 + uVar14;
         }
 while ( pbVar57 != pbVar49 );
         pbVar57 = pbVar57 + 4;
         lVar48 = lVar48 + 1;
      }
 while ( lVar48 != 4 );
      if (uVar22 < local_14c) {
         local_13c = uVar34 & 0xff;
         local_14c = uVar22;
         local_110 = uVar37;
      }

      uVar34 = uVar34 + 1;
      pbVar40 = pbVar40 + 1;
   }
 while ( (char)uVar34 != '\b' );
   if (bVar11) {
      uVar17 = uVar36 << 0x17 | uVar24 << 0x13 | uVar52 << 0xf | uVar17 << 0xb | uVar18 << 7 | uVar23 * 8 | local_13c & 7;
   }
 else {
      uVar22 = uVar36;
      uVar14 = uVar24;
      uVar34 = uVar52;
      uVar25 = (uint)bVar60;
      if (uVar17 * 0x100 + uVar18 * 0x10 + uVar23 <= (uint)local_f6 + uVar24 * 0x10 + (uint)bVar54 * 0x100 != (bool)( (byte)local_13c & 1 )) {
         local_110 = local_110 ^ 0xaaaaaaaa;
         uVar34 = (uint)bVar60;
         uVar22 = uVar17;
         uVar14 = uVar18;
         uVar17 = uVar36;
         uVar25 = uVar52;
         uVar18 = uVar24;
      }

      uVar17 = uVar22 << 0x16 | uVar14 << 0x12 | (byte)local_13c >> 1 & 3 | uVar34 << 0xe | uVar17 << 10 | uVar18 << 6 | uVar25 << 2;
   }

   lVar48 = 0xc;
   iVar51 = 8;
   *param_3 = uVar17;
   do {
      iVar26 = iVar51 + -8;
      lVar41 = lVar48;
      do {
         bVar58 = (byte)iVar26;
         *(uint*)( (long)local_a8 + lVar41 ) = (int)local_110 >> ( bVar58 & 0x1f ) & 1;
         iVar26 = iVar26 + 2;
         *(uint*)( (long)local_68 + lVar41 ) = (int)local_110 >> ( bVar58 + 1 & 0x1f ) & 1;
         lVar41 = lVar41 + -0x10;
      }
 while ( iVar51 != iVar26 );
      iVar51 = iVar51 + 8;
      lVar48 = lVar48 + -4;
   }
 while ( iVar51 != 0x28 );
   lVar48 = 0;
   iVar51 = 4;
   uVar17 = 0;
   do {
      lVar41 = lVar48;
      iVar26 = iVar51 + -4;
      do {
         iVar61 = iVar26;
         pbVar40 = (byte*)( (long)&local_98 + lVar41 );
         piVar2 = (int*)( (long)local_d8 + lVar41 );
         lVar41 = lVar41 + 4;
         iVar26 = iVar61 + 1;
         uVar17 = uVar17 | *(int*)pbVar40 << ( (byte)iVar61 + 0x10 & 0x1f ) | *piVar2 << ( (byte)iVar61 & 0x1f );
      }
 while ( iVar26 != iVar51 );
      iVar51 = iVar61 + 5;
      lVar48 = lVar48 + 0x10;
   }
 while ( iVar26 != 0x10 );
   *param_4 = uVar17;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      local_58 = uVar12;
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_14c;
}
/* CompressEtc1Rgb(unsigned int const*, unsigned long*, unsigned int, unsigned long) */void CompressEtc1Rgb(uint *param_1, ulong *param_2, uint param_3, ulong param_4) {
   long *plVar1;
   ulong *puVar2;
   ushort uVar3;
   ushort uVar4;
   ushort uVar5;
   ushort uVar6;
   undefined4 uVar7;
   undefined4 uVar8;
   undefined4 uVar9;
   undefined4 uVar10;
   undefined4 uVar11;
   char cVar12;
   byte bVar13;
   undefined1 auVar14[14];
   undefined1 auVar15[14];
   undefined1 auVar16[14];
   undefined1 auVar17[14];
   undefined1 auVar18[14];
   undefined1 auVar19[14];
   undefined1 auVar20[14];
   undefined1 auVar21[14];
   undefined1 auVar22[14];
   undefined1 auVar23[14];
   undefined1 auVar24[14];
   undefined1 auVar25[14];
   undefined1 auVar26[14];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[14];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   undefined1 auVar36[14];
   undefined1 auVar37[14];
   undefined1 auVar38[12];
   undefined1 auVar39[14];
   undefined1 auVar40[14];
   undefined1 auVar41[14];
   undefined1 auVar42[14];
   undefined8 uVar43;
   undefined2 uVar44;
   undefined2 uVar45;
   undefined2 uVar46;
   undefined2 uVar47;
   undefined2 uVar48;
   undefined2 uVar49;
   undefined2 uVar50;
   undefined2 uVar51;
   undefined2 uVar52;
   ushort uVar53;
   undefined2 uVar54;
   int iVar55;
   long lVar56;
   long lVar57;
   int *piVar58;
   int *piVar59;
   ulong uVar60;
   ulong uVar61;
   ulong uVar62;
   int *piVar63;
   int iVar64;
   uint *puVar65;
   int *piVar66;
   uint uVar67;
   uint *puVar68;
   ulong uVar69;
   int iVar70;
   uint *puVar71;
   long lVar72;
   ulong uVar73;
   long *plVar74;
   uint uVar75;
   ulong uVar76;
   long in_FS_OFFSET;
   undefined8 uVar77;
   undefined1 auVar79[16];
   undefined1 auVar80[16];
   int iVar81;
   int iVar82;
   int iVar83;
   int iVar84;
   int iVar91;
   int iVar92;
   undefined1 auVar85[16];
   undefined1 auVar89[16];
   undefined1 auVar90[16];
   undefined1 auVar93[16];
   undefined1 auVar97[16];
   undefined1 auVar100[16];
   undefined1 auVar104[16];
   undefined1 auVar108[16];
   undefined1 auVar111[16];
   undefined1 auVar112[12];
   undefined1 auVar113[16];
   undefined1 auVar114[16];
   undefined1 auVar118[16];
   int local_2bc;
   ulong *local_2b8;
   uint *local_2b0;
   undefined1 local_268[16];
   undefined1 local_258[16];
   undefined4 local_248;
   uint uStack_244;
   undefined8 auStack_240[6];
   ushort auStack_210[4];
   undefined4 local_208;
   ushort uStack_204;
   undefined4 uStack_202;
   undefined2 uStack_1fe;
   undefined2 uStack_1fc;
   undefined2 uStack_1fa;
   undefined2 local_1f8[3];
   undefined2 uStack_1f2;
   undefined2 local_1f0[3];
   undefined2 uStack_1ea;
   ushort local_1e8[8];
   undefined2 local_1d8[4];
   undefined2 local_1d0[4];
   undefined1 local_1c8[16];
   int local_1b8[12];
   ulong auStack_188[8];
   undefined1 local_148[16];
   undefined1 local_138[16];
   undefined1 local_128[16];
   undefined1 local_118[13][16];
   long local_40;
   unkuint10 Var78;
   undefined1 auVar86[16];
   undefined1 auVar87[16];
   undefined1 auVar88[16];
   undefined1 auVar94[16];
   undefined1 auVar101[16];
   undefined1 auVar102[16];
   undefined1 auVar103[16];
   undefined1 auVar105[16];
   undefined1 auVar95[16];
   undefined1 auVar98[16];
   undefined1 auVar106[16];
   undefined1 auVar109[16];
   undefined1 auVar96[16];
   undefined1 auVar99[16];
   undefined1 auVar107[16];
   undefined1 auVar110[16];
   undefined1 auVar115[16];
   undefined1 auVar116[16];
   undefined1 auVar119[16];
   undefined1 auVar117[16];
   undefined1 auVar120[16];
   uint uVar121;
   uVar43 = _LC1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_2bc = 0;
   puVar68 = &local_248;
   local_2b0 = param_1;
   local_2b8 = param_2;
   LAB_00100f3f:do {
      uVar67 = param_1[param_4 * 2];
      uVar75 = param_1[param_4 * 3];
      puVar65 = puVar68 + 4;
      *(ulong*)puVar68 = CONCAT44(param_1[param_4], *param_1);
      *(ulong*)( puVar68 + 2 ) = CONCAT44(uVar75, uVar67);
      param_1 = param_1 + 1;
      puVar68 = puVar65;
   }
 while ( puVar65 != &local_208 );
   local_2bc = local_2bc + 1;
   puVar68 = &uStack_244;
   if ((long)local_2bc == param_4 >> 2) {
      local_2bc = 0;
      local_2b0 = local_2b0 + param_4 * 3 + 4;
   }
 else {
      local_2b0 = local_2b0 + 4;
   }

   LAB_00100fa0:if (*puVar68 == local_248) goto code_r0x00100faf;
   iVar64 = 0;
   iVar70 = 0;
   local_268 = (undefined1[16])0x0;
   iVar55 = 0;
   uVar67 = 0;
   local_258 = (undefined1[16])0x0;
   piVar66 = (int*)local_148;
   local_1c8 = (undefined1[16])0x0;
   local_148 = (undefined1[16])0x0;
   puVar68 = &uStack_244;
   while (true) {
      uVar62 = ( ulong )(uVar67 & 2);
      *(uint*)( local_148 + uVar62 * 4 ) = iVar55 + (uint)(byte)puVar68[-1];
      local_1b8[uVar62 - 4] = ( uint ) * (byte*)( (long)puVar68 + -3 ) + iVar70;
      *(uint*)( local_258 + uVar62 * 4 ) = ( uint ) * (byte*)( (long)puVar68 + -2 ) + iVar64;
      puVar65 = puVar68;
      iVar55 = 1;
      do {
         iVar70 = iVar55 + 1;
         lVar56 = (long)(int)( ( iVar55 >> 1 ) + ( uVar67 & 2 ) );
         *(uint*)( local_148 + lVar56 * 4 ) = *(int*)( local_148 + lVar56 * 4 ) + ( uint )(byte) * puVar65;
         local_1b8[lVar56 + -4] = local_1b8[lVar56 + -4] + ( uint ) * (byte*)( (long)puVar65 + 1 );
         *(uint*)( local_258 + lVar56 * 4 ) = *(int*)( local_258 + lVar56 * 4 ) + ( uint ) * (byte*)( (long)puVar65 + 2 );
         puVar65 = puVar65 + 1;
         iVar55 = iVar70;
      }
 while ( iVar70 != 4 );
      uVar67 = uVar67 + 1;
      puVar68 = puVar68 + 4;
      if (uVar67 == 4) break;
      uVar62 = ( ulong )(uVar67 & 2);
      iVar55 = *(int*)( local_148 + uVar62 * 4 );
      iVar70 = local_1b8[uVar62 - 4];
      iVar64 = *(int*)( local_258 + uVar62 * 4 );
   }
;
   uStack_1fa = 0;
   uVar67 = ( uint )(local_258._8_4_ + 4 + local_258._12_4_) >> 3;
   uVar44 = ( undefined2 )(( uint )(local_1c8._8_4_ + 4 + local_1c8._12_4_) >> 3);
   uVar45 = ( undefined2 )(( uint )(local_148._8_4_ + 4 + local_148._12_4_) >> 3);
   uStack_202._0_2_ = 0;
   uVar46 = ( undefined2 )(( uint )(local_258._0_4_ + 4 + local_258._4_4_) >> 3);
   uVar47 = ( undefined2 )(( uint )(local_1c8._0_4_ + 4 + local_1c8._4_4_) >> 3);
   uVar48 = ( undefined2 )(( uint )(local_148._0_4_ + 4 + local_148._4_4_) >> 3);
   uStack_1ea = 0;
   uVar49 = ( undefined2 )(( uint )(local_258._12_4_ + 4 + local_258._4_4_) >> 3);
   uStack_1f2 = 0;
   uVar50 = ( undefined2 )(( uint )(local_1c8._12_4_ + 4 + local_1c8._4_4_) >> 3);
   uVar51 = ( undefined2 )(( uint )(local_148._12_4_ + 4 + local_148._4_4_) >> 3);
   uVar52 = ( undefined2 )(( uint )(local_258._8_4_ + 4 + local_258._0_4_) >> 3);
   uVar53 = ( ushort )(( uint )(local_1c8._8_4_ + 4 + local_1c8._0_4_) >> 3);
   uVar54 = ( undefined2 )(( uint )(local_148._8_4_ + 4 + local_148._0_4_) >> 3);
   puVar68 = &local_208;
   do {
      iVar55 = ( (uint)(ushort)puVar68[2] * 0x20 - (uint)(ushort)puVar68[2] ) + 0x80;
      iVar55 = ( iVar55 >> 8 ) + iVar55;
      iVar64 = iVar55 >> 8;
      iVar70 = ( uint )(ushort) * puVar68 * 0x1f + 0x80;
      iVar70 = ( ( iVar70 >> 8 ) + iVar70 >> 8 ) - iVar64;
      if (iVar70 < -4) {
         iVar70 = -4;
      }

      if (3 < iVar70) {
         iVar70 = 3;
      }

      puVar71 = (uint*)( (long)puVar68 + 2 );
      *(ushort*)( puVar68 + 10 ) = ( ushort )(iVar64 << 3) | ( ushort )(iVar55 >> 10);
      *(ushort*)( puVar68 + 8 ) = (short)( iVar70 + iVar64 ) * 8 | ( ushort )(iVar70 + iVar64 >> 2);
      puVar65 = &local_208;
      puVar68 = puVar71;
   }
 while ( puVar71 != &uStack_202 );
   do {
      iVar55 = ( (uint)(ushort)puVar65[6] * 0x20 - (uint)(ushort)puVar65[6] ) + 0x80;
      iVar55 = ( iVar55 >> 8 ) + iVar55;
      iVar64 = iVar55 >> 8;
      iVar70 = (uint)(ushort)puVar65[4] * 0x1f + 0x80;
      iVar70 = ( ( iVar70 >> 8 ) + iVar70 >> 8 ) - iVar64;
      if (iVar70 < -4) {
         iVar70 = -4;
      }

      if (3 < iVar70) {
         iVar70 = 3;
      }

      puVar68 = (uint*)( (long)puVar65 + 2 );
      *(ushort*)( puVar65 + 0xe ) = ( ushort )(iVar64 << 3) | ( ushort )(iVar55 >> 10);
      *(ushort*)( puVar65 + 0xc ) = ( ushort )(iVar70 + iVar64 >> 2) | (short)( iVar70 + iVar64 ) * 8;
      puVar65 = puVar68;
   }
 while ( puVar68 != &uStack_202 );
   uVar75 = 0;
   auVar80._12_4_ = 0;
   auVar80._0_12_ = SUB1612(ZEXT616(CONCAT42(CONCAT22(uVar48, uVar45), uVar47)) << 0x30, 4);
   auVar90._12_4_ = 0;
   auVar90._0_12_ = SUB1612(ZEXT616(CONCAT42(CONCAT22(uVar48, uVar45), uVar47)) << 0x30, 4);
   auVar39._10_2_ = 0;
   auVar39._0_10_ = SUB1610(auVar90 << 0x20, 0);
   auVar39._12_2_ = uVar47;
   auVar41._8_2_ = uVar44;
   auVar41._0_8_ = SUB168(auVar90 << 0x20, 0);
   auVar41._10_4_ = auVar39._10_4_;
   auVar27._2_6_ = auVar41._8_6_;
   auVar27._0_2_ = uVar48;
   auVar27._8_8_ = 0;
   auVar113._12_4_ = 0;
   auVar113._0_12_ = SUB1612(auVar27 << 0x30, 4);
   auVar113 = auVar113 << 0x20;
   auVar40._10_2_ = 0;
   auVar40._0_10_ = SUB1610(auVar80 << 0x20, 0);
   auVar40._12_2_ = uVar47;
   auVar42._8_2_ = uVar44;
   auVar42._0_8_ = SUB168(auVar80 << 0x20, 0);
   auVar42._10_4_ = auVar40._10_4_;
   auVar96._12_2_ = uVar48;
   auVar96._0_12_ = auVar113._0_12_;
   auVar96._14_2_ = uVar54;
   auVar95._12_4_ = auVar96._12_4_;
   auVar95._10_2_ = uVar52;
   auVar95._0_10_ = auVar113._0_10_;
   auVar94._10_6_ = auVar95._10_6_;
   auVar94._8_2_ = uVar46;
   auVar94._0_8_ = auVar113._0_8_;
   auVar28._2_8_ = auVar94._8_8_;
   auVar28._0_2_ = uVar51;
   auVar28._10_6_ = 0;
   auVar93._12_4_ = 0;
   auVar93._0_12_ = SUB1612(auVar28 << 0x30, 4);
   auVar93 = auVar93 << 0x20;
   auVar99._0_12_ = auVar93._0_12_;
   auVar99._12_2_ = uVar51;
   auVar99._14_2_ = uVar54;
   auVar98._12_4_ = auVar99._12_4_;
   auVar98._0_10_ = auVar93._0_10_;
   auVar98._10_2_ = uVar48;
   auVar97._10_6_ = auVar98._10_6_;
   auVar97._0_8_ = auVar93._0_8_;
   auVar97._8_2_ = uVar45;
   auVar30._2_8_ = auVar97._8_8_;
   auVar30._0_2_ = uVar52;
   auVar30._10_6_ = 0;
   auVar29._12_4_ = 0;
   auVar29._0_12_ = SUB1612(auVar30 << 0x30, 4);
   auVar117._12_2_ = uVar48;
   auVar117._0_12_ = auVar113._0_12_;
   auVar117._14_2_ = uVar54;
   auVar116._12_4_ = auVar117._12_4_;
   auVar116._10_2_ = uVar52;
   auVar116._0_10_ = auVar113._0_10_;
   auVar115._10_6_ = auVar116._10_6_;
   auVar115._8_2_ = uVar46;
   auVar115._0_8_ = auVar113._0_8_;
   auVar31._2_8_ = auVar115._8_8_;
   auVar31._0_2_ = uVar51;
   auVar31._10_6_ = 0;
   auVar114._12_4_ = 0;
   auVar114._0_12_ = SUB1612(auVar31 << 0x30, 4);
   auVar114 = auVar114 << 0x20;
   Var78 = SUB1610(auVar29 << 0x20, 0);
   auVar19._10_2_ = 0;
   auVar19._0_10_ = Var78;
   auVar19._12_2_ = uVar52;
   uVar77 = SUB168(auVar29 << 0x20, 0);
   auVar25._8_2_ = uVar49;
   auVar25._0_8_ = uVar77;
   auVar25._10_4_ = auVar19._10_4_;
   auVar32._6_8_ = 0;
   auVar32._0_6_ = auVar25._8_6_;
   auVar14._10_2_ = 0;
   auVar14._0_10_ = Var78;
   auVar14._12_2_ = uVar52;
   auVar20._8_2_ = uVar49;
   auVar20._0_8_ = uVar77;
   auVar20._10_4_ = auVar14._10_4_;
   auVar33._12_4_ = 0;
   auVar33._0_12_ = SUB1612(ZEXT216(uVar53) << 0x30, 4);
   auVar120._0_12_ = auVar114._0_12_;
   auVar120._12_2_ = uVar51;
   auVar120._14_2_ = uVar54;
   auVar119._12_4_ = auVar120._12_4_;
   auVar119._0_10_ = auVar114._0_10_;
   auVar119._10_2_ = uVar48;
   auVar118._10_6_ = auVar119._10_6_;
   auVar118._0_8_ = auVar114._0_8_;
   auVar118._8_2_ = uVar45;
   auVar112._10_2_ = uVar46;
   auVar112._8_2_ = (short)uVar67;
   uVar121 = auVar118._8_4_;
   auVar112._0_8_ = CONCAT44(auVar119._12_4_, uVar121);
   iVar55 = (int)uVar43;
   iVar83 = ( uVar67 & 0xffff ) * 0xf + iVar55;
   iVar70 = (int)( (ulong)uVar43 >> 0x20 );
   iVar91 = (int)CONCAT82(SUB148(auVar32 << 0x40, 6), uVar46) * 0xf + iVar70;
   iVar64 = auVar20._8_4_ * 0xf + iVar55;
   iVar81 = ( auVar14._10_4_ >> 0x10 ) * 0xf + iVar70;
   uVar7 = *(undefined4*)( &g_avg2 + (long)( iVar91 + ( iVar91 >> 8 ) >> 8 ) * 4 );
   uVar8 = *(undefined4*)( &g_avg2 + (long)( iVar83 + ( iVar83 >> 8 ) >> 8 ) * 4 );
   auVar101._0_8_ = CONCAT44(uVar7, uVar8);
   uVar46 = ( undefined2 )(( uint ) * (undefined4*)( &g_avg2 + (long)( iVar81 + ( iVar81 >> 8 ) >> 8 ) * 4 ) >> 0x10);
   uVar49 = ( undefined2 )((uint)uVar7 >> 0x10);
   auVar103._8_4_ = 0;
   auVar103._0_8_ = auVar101._0_8_;
   uVar45 = ( undefined2 ) * (undefined4*)( &g_avg2 + (long)( iVar81 + ( iVar81 >> 8 ) >> 8 ) * 4 );
   auVar102._8_2_ = 0;
   auVar102._0_8_ = auVar101._0_8_;
   uStack_202._2_2_ = (undefined2)uVar7;
   uVar44 = ( undefined2 )(( uint ) * (undefined4*)( &g_avg2 + (long)( iVar64 + ( iVar64 >> 8 ) >> 8 ) * 4 ) >> 0x10);
   auVar103._12_2_ = uVar49;
   auVar103._14_2_ = uVar46;
   auVar102._12_4_ = auVar103._12_4_;
   auVar102._10_2_ = uVar45;
   auVar101._10_6_ = auVar102._10_6_;
   auVar101._8_2_ = uStack_202._2_2_;
   auVar34._2_8_ = auVar101._8_8_;
   auVar34._0_2_ = uVar44;
   auVar34._10_6_ = 0;
   auVar100._12_4_ = 0;
   auVar100._0_12_ = SUB1612(auVar34 << 0x30, 4);
   auVar100 = auVar100 << 0x20;
   auVar107._0_12_ = auVar100._0_12_;
   auVar107._12_2_ = uVar44;
   auVar107._14_2_ = uVar46;
   auVar106._12_4_ = auVar107._12_4_;
   auVar106._0_10_ = auVar100._0_10_;
   auVar106._10_2_ = uVar49;
   auVar105._10_6_ = auVar106._10_6_;
   auVar105._0_8_ = auVar100._0_8_;
   auVar105._8_2_ = (short)( (uint)uVar8 >> 0x10 );
   auVar35._2_8_ = auVar105._8_8_;
   auVar35._0_2_ = uVar45;
   auVar35._10_6_ = 0;
   auVar104._12_4_ = 0;
   auVar104._0_12_ = SUB1612(auVar35 << 0x30, 4);
   auVar104 = auVar104 << 0x20;
   Var78 = SUB1610(auVar33 << 0x20, 0);
   auVar15._10_2_ = 0;
   auVar15._0_10_ = Var78;
   auVar15._12_2_ = uVar53;
   uVar77 = SUB168(auVar33 << 0x20, 0);
   auVar21._8_2_ = uVar50;
   auVar21._0_8_ = uVar77;
   auVar21._10_4_ = auVar15._10_4_;
   auVar16._10_2_ = 0;
   auVar16._0_10_ = Var78;
   auVar16._12_2_ = uVar53;
   auVar22._8_2_ = uVar50;
   auVar22._0_8_ = uVar77;
   auVar22._10_4_ = auVar16._10_4_;
   auVar36._6_8_ = 0;
   auVar36._0_6_ = auVar22._8_6_;
   iVar81 = ( auVar42._8_4_ & 0xffff ) * 0xf + iVar55;
   iVar91 = (int)CONCAT82(SUB148(auVar36 << 0x40, 6), uVar47) * 0xf + iVar70;
   iVar84 = auVar21._8_4_ * 0xf + iVar55;
   iVar92 = ( auVar15._10_4_ >> 0x10 ) * 0xf + iVar70;
   auVar17._10_2_ = 0;
   auVar17._0_10_ = auVar112._0_10_;
   auVar17._12_2_ = uVar54;
   auVar23._8_2_ = uVar51;
   auVar23._0_8_ = auVar112._0_8_;
   auVar23._10_4_ = auVar17._10_4_;
   auVar37._6_8_ = 0;
   auVar37._0_6_ = auVar23._8_6_;
   auVar26._4_2_ = uVar48;
   auVar26._0_4_ = uVar121;
   auVar26._6_8_ = SUB148(auVar37 << 0x40, 6);
   auVar18._10_2_ = 0;
   auVar18._0_10_ = auVar112._0_10_;
   auVar18._12_2_ = uVar54;
   auVar24._8_2_ = uVar51;
   auVar24._0_8_ = auVar112._0_8_;
   auVar24._10_4_ = auVar18._10_4_;
   iVar83 = ( uVar121 & 0xffff ) * 0xf + iVar55;
   iVar82 = auVar26._4_4_ * 0xf + iVar70;
   iVar55 = auVar24._8_4_ * 0xf + iVar55;
   iVar70 = ( auVar18._10_4_ >> 0x10 ) * 0xf + iVar70;
   uVar7 = *(undefined4*)( &g_avg2 + (long)( iVar82 + ( iVar82 >> 8 ) >> 8 ) * 4 );
   uVar9 = *(undefined4*)( &g_avg2 + (long)( iVar83 + ( iVar83 >> 8 ) >> 8 ) * 4 );
   uVar10 = *(undefined4*)( &g_avg2 + (long)( iVar55 + ( iVar55 >> 8 ) >> 8 ) * 4 );
   uVar62 = CONCAT44(uVar7, uVar9);
   uVar11 = *(undefined4*)( &g_avg2 + (long)( iVar70 + ( iVar70 >> 8 ) >> 8 ) * 4 );
   auVar79._4_4_ = uVar11;
   auVar79._0_4_ = uVar10;
   auVar79._8_8_ = 0;
   auVar88._8_4_ = 0;
   auVar88._0_8_ = uVar62;
   auVar88._12_2_ = (short)( (uint)uVar7 >> 0x10 );
   auVar88._14_2_ = (short)( (uint)uVar11 >> 0x10 );
   auVar87._12_4_ = auVar88._12_4_;
   auVar87._8_2_ = 0;
   auVar87._0_8_ = uVar62;
   auVar87._10_2_ = (short)uVar11;
   auVar86._10_6_ = auVar87._10_6_;
   auVar86._8_2_ = (short)uVar7;
   auVar86._0_8_ = uVar62;
   auVar85._8_8_ = auVar86._8_8_;
   auVar85._6_2_ = (short)( (uint)uVar10 >> 0x10 );
   auVar85._4_2_ = (short)( (uint)uVar9 >> 0x10 );
   auVar85._0_4_ = uVar9;
   auVar89._10_2_ = (short)uVar10;
   auVar89._8_2_ = (ushort)uVar9;
   local_208._0_2_ = (short)uVar8;
   local_208._2_2_ = (short)*(undefined4*)( &g_avg2 + (long)( iVar81 + ( iVar81 >> 8 ) >> 8 ) * 4 );
   auVar89._4_4_ = auVar87._12_4_;
   auVar89._0_4_ = auVar86._8_4_;
   auVar89._12_4_ = auVar85._4_4_;
   auVar110._0_12_ = auVar104._0_12_;
   auVar110._12_2_ = uVar45;
   auVar110._14_2_ = (short)*(undefined4*)( &g_avg2 + (long)( iVar92 + ( iVar92 >> 8 ) >> 8 ) * 4 );
   auVar109._12_4_ = auVar110._12_4_;
   auVar109._0_10_ = auVar104._0_10_;
   auVar109._10_2_ = (short)*(undefined4*)( &g_avg2 + (long)( iVar84 + ( iVar84 >> 8 ) >> 8 ) * 4 );
   auVar108._10_6_ = auVar109._10_6_;
   auVar108._0_8_ = auVar104._0_8_;
   auVar108._8_2_ = (short)*(undefined4*)( &g_avg2 + (long)( iVar64 + ( iVar64 >> 8 ) >> 8 ) * 4 );
   auVar38._4_8_ = auVar108._8_8_;
   auVar38._2_2_ = (short)*(undefined4*)( &g_avg2 + (long)( iVar91 + ( iVar91 >> 8 ) >> 8 ) * 4 );
   auVar38._0_2_ = uStack_202._2_2_;
   auVar111._10_2_ = (short)*(undefined4*)( &g_avg2 + (long)( iVar81 + ( iVar81 >> 8 ) >> 8 ) * 4 );
   auVar111._8_2_ = (short)uVar8;
   auVar111._4_4_ = auVar109._12_4_;
   auVar111._0_4_ = auVar108._8_4_;
   auVar111._12_4_ = auVar38._0_4_;
   uStack_1fe = (short)*(undefined4*)( &g_avg2 + (long)( iVar91 + ( iVar91 >> 8 ) >> 8 ) * 4 );
   auVar80 = pshuflw(auVar79, auVar111, 0xde);
   auVar90 = pshuflw(auVar89, auVar111, 0xd4);
   uStack_204 = (ushort)uVar9;
   uStack_1fc = (short)uVar7;
   local_1f0[0] = auVar80._0_2_;
   local_1f0[1] = auVar80._2_2_;
   local_1f8[2] = (short)uVar10;
   local_148 = (undefined1[16])0x0;
   local_138 = (undefined1[16])0x0;
   local_128 = (undefined1[16])0x0;
   local_118[0] = (undefined1[16])0x0;
   local_1f0[2] = (short)uVar11;
   iVar70 = 0;
   iVar64 = 0;
   iVar55 = 0;
   local_1f8[0] = auVar90._0_2_;
   local_1f8[1] = auVar90._2_2_;
   puVar68 = &uStack_244;
   while (true) {
      *(ulong*)( piVar66 + ( ulong )(uVar75 & 2) * 4 ) = CONCAT44(( uint ) * (byte*)( (long)puVar68 + -3 ) + iVar64, (uint)(byte)puVar68[-1] + iVar70);
      *(uint*)( local_148 + ( ulong )(uVar75 & 2) * 0x10 + 8 ) = iVar55 + ( uint ) * (byte*)( (long)puVar68 + -2 );
      puVar65 = puVar68;
      iVar55 = 1;
      do {
         iVar70 = iVar55 + 1;
         lVar56 = (long)(int)( ( iVar55 >> 1 ) + ( uVar75 & 2 ) );
         lVar57 = lVar56 * 0x10;
         iVar55 = *(int*)( local_148 + lVar57 + 8 );
         uVar77 = *(undefined8*)( piVar66 + lVar56 * 4 );
         *(ulong*)( piVar66 + lVar56 * 4 ) = CONCAT44((int)( (ulong)uVar77 >> 0x20 ) + ( uint ) * (byte*)( (long)puVar65 + 1 ), (int)uVar77 + ( uint )(byte) * puVar65);
         *(uint*)( local_148 + lVar57 + 8 ) = ( uint ) * (byte*)( (long)puVar65 + 2 ) + iVar55;
         puVar65 = puVar65 + 1;
         iVar55 = iVar70;
      }
 while ( iVar70 != 4 );
      uVar75 = uVar75 + 1;
      puVar68 = puVar68 + 4;
      if (uVar75 == 4) break;
      lVar56 = ( ulong )(uVar75 & 2) * 0x10;
      iVar70 = piVar66[( ulong )(uVar75 & 2) * 4];
      iVar64 = *(int*)( local_148 + lVar56 + 4 );
      iVar55 = *(int*)( local_148 + lVar56 + 8 );
   }
;
   piVar58 = piVar66;
   piVar63 = (int*)local_1c8;
   do {
      iVar55 = piVar58[8];
      iVar70 = piVar58[0xc];
      piVar59 = piVar58 + 1;
      iVar64 = piVar58[4];
      *piVar63 = iVar55 + iVar70;
      iVar81 = *piVar58;
      piVar63[8] = iVar70 + iVar64;
      piVar63[4] = iVar81 + iVar64;
      piVar63[0xc] = iVar55 + iVar81;
      piVar58 = piVar59;
      piVar63 = piVar63 + 1;
   }
 while ( piVar59 != (int*)( local_148 + 0xc ) );
   local_1c8._12_4_ = 0;
   iVar55 = 0;
   iVar70 = 0;
   for (int i = 0; i < 3; i++) {
      local_1b8[( 4*i + 3 )] = 0;
   }

   puVar68 = &local_208;
   piVar58 = (int*)local_1c8;
   while (true) {
      iVar64 = *piVar58;
      uVar53 = (ushort)puVar68[1];
      iVar81 = piVar58[1];
      iVar83 = piVar58[2];
      uVar3 = *(ushort*)( (long)puVar68 + 2 );
      uVar4 = ( ushort ) * puVar68;
      iVar91 = iVar70 >> 1;
      iVar70 = iVar70 + 1;
      lVar56 = (long)iVar91 * 4;
      uVar5 = *(ushort*)( (long)puVar68 + 0x22 );
      uVar6 = (ushort)puVar68[9];
      *(uint*)( local_268 + lVar56 ) = ( ( 0x3fffffff - ( (uint)uVar3 * iVar81 * 2 + (uint)uVar53 * iVar64 * 2 ) ) - (uint)uVar4 * iVar83 * 2 ) + ( ( uint )(ushort)(uVar53 * uVar53) + ( uint )(ushort)(uVar4 * uVar4) + ( uint )(ushort)(uVar3 * uVar3) ) * 8 + iVar55;
      uVar53 = (ushort)puVar68[8];
      *(uint*)( local_268 + lVar56 + 8 ) = ( ( ( ( *(int*)( local_268 + lVar56 + 8 ) - (uint)uVar6 * iVar64 * 2 ) + 0x3fffffff ) - (uint)uVar5 * iVar81 * 2 ) - (uint)uVar53 * iVar83 * 2 ) + ( ( uint )(ushort)(uVar53 * uVar53) + ( uint )(ushort)(uVar5 * uVar5) + ( (uint)uVar6 * (uint)uVar6 & 0xffff ) ) * 8;
      if (iVar70 == 4) break;
      iVar55 = *(int*)( local_268 + (long)( iVar70 >> 1 ) * 4 );
      puVar68 = puVar68 + 2;
      piVar58 = piVar58 + 4;
   }
;
   uVar62 = 0;
   uVar60 = 1;
   do {
      if (*(uint*)( local_268 + uVar60 * 4 ) < *(uint*)( local_268 + uVar62 * 4 )) {
         uVar62 = uVar60;
      }

      uVar60 = uVar60 + 1;
   }
 while ( uVar60 != 4 );
   lVar56 = ( uVar62 * 2 + 1 ) * 8;
   uVar76 = uVar62 << 0x18;
   uVar60 = ( ulong )((uint)uVar62 & 2);
   if (( uVar62 & 2 ) == 0) {
      do {
         lVar57 = uVar60 + lVar56;
         lVar72 = uVar60 + lVar56 + -0x210;
         bVar13 = (char)uVar60 * '\x04';
         uVar60 = uVar60 + 2;
         uVar76 = uVar76 | ( ulong )(*(ushort*)( (long)&local_208 + lVar57 ) >> 4) << ( bVar13 + 4 & 0x3f ) | ( ulong )(*(ushort*)( (long)auStack_210 + lVar72 + 0x210 ) >> 4) << ( bVar13 & 0x3f );
      }
 while ( uVar60 != 6 );
   }
 else {
      lVar57 = 0;
      do {
         uVar53 = *(ushort*)( (long)&local_208 + lVar57 + lVar56 );
         lVar72 = lVar57 + lVar56 + -0x210;
         cVar12 = (char)lVar57;
         lVar57 = lVar57 + 2;
         uVar76 = uVar76 | ( ulong )((int)( ( *(ushort*)( (long)auStack_210 + lVar72 + 0x210 ) & 0xf8 ) - ( uVar53 & 0xf8 ) ) >> 3 & 7U | uVar53 & 0xf8) << ( cVar12 * '\x04' & 0x3fU );
      }
 while ( lVar57 != 6 );
   }

   piVar58 = (int*)local_1c8;
   for (lVar56 = 0x10; lVar56 != 0; lVar56 = lVar56 + -1) {
      piVar58[0] = 0;
      piVar58[1] = 0;
      piVar58 = piVar58 + 2;
   }

   puVar68 = &local_248;
   piVar58 = piVar66;
   puVar65 = (uint*)( &g_id + uVar62 * 0x40 );
   do {
      uVar67 = *puVar65;
      uVar60 = (ulong)uVar67;
      puVar71 = puVar68 + 1;
      plVar74 = (long*)&g_table256;
      lVar57 = 0;
      lVar56 = (long)(int)( ( ( uint ) * (ushort*)( (long)&local_208 + uVar60 * 8 + 2 ) - ( uint ) * (byte*)( (long)puVar68 + 1 ) ) * 0x97 + ( ( uint )(ushort)(&local_208)[uVar60 * 2] - ( uint ) * (byte*)( (long)puVar68 + 2 ) ) * 0x4d + ( ( uint )(&uStack_204)[uVar60 * 4] - ( uint )(byte) * puVar68 ) * 0x1c );
      do {
         uVar69 = 1;
         uVar60 = 0;
         lVar72 = *plVar74 + lVar56;
         uVar73 = lVar72 * lVar72;
         do {
            lVar72 = plVar74[uVar69] + lVar56;
            uVar61 = lVar72 * lVar72;
            if (uVar61 < uVar73) {
               uVar60 = uVar69 & 0xffffffff;
               uVar73 = uVar61;
            }

            uVar69 = uVar69 + 1;
         }
 while ( uVar69 != 4 );
         plVar1 = (long*)( (long)local_1c8 + ( ( ulong )(uVar67 & 1) * 0x10 + lVar57 ) * 4 );
         *plVar1 = *plVar1 + uVar73;
         plVar74 = plVar74 + 4;
         *(short*)( (long)piVar58 + lVar57 ) = (short)uVar60;
         lVar57 = lVar57 + 2;
      }
 while ( lVar57 != 0x10 );
      puVar65 = puVar65 + 1;
      piVar58 = piVar58 + 4;
      puVar68 = puVar71;
   }
 while ( puVar71 != &local_208 );
   lVar56 = 0;
   lVar57 = 1;
   do {
      if (*(ulong*)( (long)local_1c8 + lVar57 * 2 * 4 ) < *(ulong*)( local_1c8 + lVar56 * 8 )) {
         lVar56 = lVar57;
      }

      lVar57 = lVar57 + 1;
   }
 while ( lVar57 != 8 );
   local_258._0_8_ = lVar56;
   local_258._8_8_ = 0;
   lVar57 = 1;
   do {
      if (auStack_188[lVar57] < auStack_188[local_258._8_8_]) {
         local_258._8_8_ = lVar57;
      }

      lVar57 = lVar57 + 1;
   }
 while ( lVar57 != 8 );
   lVar57 = 0;
   uVar60 = local_258._8_8_ << 0x1d | lVar56 << 0x1a | uVar76;
   do {
      cVar12 = (char)lVar57;
      uVar53 = *(ushort*)( (long)piVar66 + *(long*)( local_258 + ( ulong )(*(uint*)( (long)( &g_id + uVar62 * 0x40 ) + lVar57 * 4 ) & 1) * 8 ) * 2 );
      piVar66 = piVar66 + 4;
      lVar57 = lVar57 + 1;
      uVar60 = uVar60 | ( ulong )(uVar53 & 1) << ( cVar12 + 0x20U & 0x3f ) | ( ulong )(uVar53 & 2) << ( cVar12 + 0x2fU & 0x3f );
   }
 while ( lVar57 != 0x10 );
   uVar62 = ( uVar60 & 0xff0000000000 ) << 8 | uVar60 >> 0x18 & 0xff00000000 | ( uVar60 & 0xff00000000 ) << 0x18 | uVar60 & 0xffffffff | uVar60 >> 8 & 0xff0000000000;
   goto LAB_00100ff0;
   code_r0x00100faf:puVar68 = puVar68 + 1;
   if (puVar68 == &local_208) goto code_r0x00100fb8;
   goto LAB_00100fa0;
   code_r0x00100fb8:uVar62 = ( ulong )(( local_248 & 0xf8 ) << 0x10 | ( local_248 >> 8 & 0xf8 ) << 8 | local_248 >> 0x10 & 0xf8 | 0x2000000);
   LAB_00100ff0:puVar2 = local_2b8 + 1;
   *local_2b8 = uVar62;
   param_1 = local_2b0;
   puVar68 = &local_248;
   local_2b8 = puVar2;
   if (puVar2 == param_2 + ( ulong )(param_3 - 1) + 1) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   goto LAB_00100f3f;
}
/* CompressEtc1RgbDither(unsigned int const*, unsigned long*, unsigned int, unsigned long) */void CompressEtc1RgbDither(uint *param_1, ulong *param_2, uint param_3, ulong param_4) {
   CompressEtc1Rgb(param_1, param_2, param_3, param_4);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CompressEtc2Rgb(unsigned int const*, unsigned long*, unsigned int, unsigned long, bool) */void CompressEtc2Rgb(uint *param_1, ulong *param_2, uint param_3, ulong param_4, bool param_5) {
   long *plVar1;
   ulong *puVar2;
   char cVar3;
   byte bVar8;
   char cVar16;
   byte bVar25;
   byte bVar32;
   byte bVar40;
   byte bVar44;
   short sVar49;
   short sVar50;
   short sVar51;
   short sVar52;
   short sVar53;
   short sVar54;
   short sVar55;
   short sVar56;
   short sVar57;
   short sVar58;
   short sVar59;
   short sVar60;
   short sVar61;
   short sVar62;
   short sVar63;
   short sVar64;
   short sVar65;
   short sVar66;
   short sVar67;
   short sVar68;
   short sVar69;
   short sVar70;
   short sVar71;
   short sVar72;
   short sVar73;
   short sVar74;
   short sVar75;
   short sVar76;
   short sVar77;
   short sVar78;
   undefined1 auVar79[15];
   undefined1 auVar80[15];
   undefined1 auVar81[15];
   undefined1 auVar82[14];
   undefined1 auVar83[14];
   undefined1 auVar84[15];
   undefined1 auVar85[15];
   undefined1 auVar86[15];
   undefined1 auVar87[14];
   undefined1 auVar88[14];
   undefined1 auVar89[14];
   undefined1 auVar90[14];
   undefined1 auVar91[14];
   undefined1 auVar92[14];
   undefined1 auVar93[14];
   undefined1 auVar94[14];
   undefined1 auVar95[14];
   undefined1 auVar96[14];
   undefined1 auVar97[14];
   undefined1 auVar98[14];
   undefined1 auVar99[15];
   undefined1 auVar100[15];
   undefined1 auVar101[15];
   undefined1 auVar102[15];
   undefined1 auVar103[15];
   undefined1 auVar104[15];
   undefined1 auVar105[14];
   undefined1 auVar106[13];
   undefined1 auVar107[13];
   undefined1 auVar108[13];
   undefined1 auVar109[14];
   undefined1 auVar110[13];
   undefined1 auVar111[13];
   undefined1 auVar112[13];
   undefined1 auVar113[14];
   undefined1 auVar114[13];
   undefined1 auVar115[13];
   undefined1 auVar116[13];
   undefined1 auVar117[14];
   undefined1 auVar118[15];
   undefined1 auVar119[15];
   undefined1 auVar120[15];
   undefined1 auVar121[15];
   undefined1 auVar122[15];
   undefined1 auVar123[15];
   undefined1 auVar124[15];
   undefined1 auVar125[15];
   undefined1 auVar126[15];
   undefined1 auVar127[15];
   unkuint9 Var128;
   undefined1 auVar129[11];
   undefined1 auVar130[13];
   undefined1 auVar131[14];
   undefined1 auVar132[15];
   undefined1 auVar133[11];
   undefined1 auVar134[13];
   undefined1 auVar135[13];
   undefined1 auVar136[15];
   unkuint9 Var137;
   undefined1 auVar138[11];
   undefined1 auVar139[13];
   undefined1 auVar140[14];
   undefined1 auVar141[13];
   undefined1 auVar142[14];
   undefined1 auVar143[13];
   undefined1 auVar144[16];
   undefined1 auVar145[16];
   undefined1 auVar146[16];
   undefined1 auVar147[16];
   undefined1 auVar148[16];
   undefined1 auVar149[16];
   undefined1 auVar150[16];
   undefined1 auVar151[16];
   undefined1 auVar152[16];
   undefined1 auVar153[16];
   undefined1 auVar154[16];
   undefined1 auVar155[16];
   undefined1 auVar156[15];
   undefined1 auVar157[11];
   undefined1 auVar158[13];
   undefined1 auVar159[15];
   undefined1 auVar160[11];
   undefined1 auVar161[13];
   undefined1 auVar162[15];
   undefined1 auVar163[11];
   undefined1 auVar164[13];
   undefined1 auVar165[12];
   undefined1 auVar166[12];
   undefined1 auVar167[16];
   undefined1 auVar168[16];
   undefined1 auVar169[16];
   undefined1 auVar170[16];
   undefined1 auVar171[16];
   undefined1 auVar172[16];
   undefined1 auVar173[16];
   undefined1 auVar174[16];
   undefined1 auVar175[14];
   undefined1 auVar176[16];
   undefined1 auVar177[14];
   undefined1 auVar178[16];
   undefined1 auVar179[14];
   undefined1 auVar180[12];
   undefined3 uVar181;
   undefined3 uVar182;
   undefined1 auVar183[15];
   undefined1 auVar184[15];
   undefined1 auVar185[15];
   undefined1 auVar186[15];
   undefined1 auVar187[15];
   undefined1 auVar188[15];
   undefined3 uVar189;
   undefined1 auVar190[15];
   undefined1 auVar191[15];
   undefined1 auVar192[15];
   undefined1 auVar193[15];
   undefined1 auVar194[15];
   undefined1 auVar195[15];
   unkbyte10 Var196;
   undefined1 auVar197[14];
   undefined1 auVar198[14];
   undefined1 auVar199[14];
   undefined1 auVar200[14];
   undefined5 uVar201;
   undefined5 uVar202;
   undefined1 auVar203[12];
   undefined1 auVar204[12];
   undefined1 auVar205[12];
   undefined5 uVar206;
   undefined1 auVar207[12];
   undefined8 uVar208;
   undefined1 auVar209[12];
   undefined8 uVar210;
   undefined1 auVar211[12];
   undefined1 auVar212[14];
   undefined1 auVar213[14];
   undefined1 auVar214[14];
   undefined8 uVar215;
   undefined1 auVar216[14];
   undefined1 auVar217[14];
   undefined8 uVar218;
   undefined1 auVar219[14];
   uint6 uVar220;
   uint6 uVar221;
   uint6 uVar222;
   byte bVar223;
   undefined2 uVar224;
   undefined2 uVar225;
   undefined2 uVar226;
   undefined2 uVar227;
   undefined2 uVar228;
   undefined2 uVar229;
   undefined2 uVar230;
   undefined2 uVar231;
   undefined2 uVar232;
   undefined2 uVar233;
   int iVar234;
   int iVar235;
   uint uVar236;
   uint uVar237;
   ushort *puVar238;
   ulong uVar239;
   ulong uVar240;
   long lVar241;
   long lVar242;
   int *piVar243;
   int *piVar244;
   ulong uVar245;
   uint *puVar246;
   int iVar247;
   uint uVar248;
   uint uVar249;
   ushort *puVar250;
   int *piVar251;
   ulong uVar252;
   char cVar253;
   int iVar254;
   int iVar255;
   uint uVar256;
   int *piVar257;
   int iVar258;
   uint uVar259;
   int iVar260;
   uint uVar261;
   uint uVar262;
   uint uVar263;
   uint uVar264;
   ushort *puVar265;
   uint *puVar266;
   uint uVar267;
   uint uVar268;
   long lVar269;
   uint *puVar270;
   char cVar271;
   uint uVar272;
   uint uVar273;
   char cVar274;
   int iVar275;
   uint uVar276;
   long *plVar277;
   int iVar278;
   uint uVar279;
   int iVar280;
   uint uVar281;
   int iVar282;
   ulong uVar283;
   long in_FS_OFFSET;
   bool bVar284;
   byte bVar285;
   ushort uVar286;
   undefined4 uVar287;
   ushort uVar316;
   int iVar288;
   float fVar289;
   float fVar290;
   float fVar291;
   float fVar292;
   float fVar293;
   float fVar294;
   ushort uVar317;
   ushort uVar318;
   ushort uVar320;
   ushort uVar321;
   ushort uVar322;
   undefined1 auVar299[16];
   short sVar319;
   ushort uVar323;
   undefined1 auVar300[16];
   undefined1 auVar301[16];
   undefined1 auVar304[16];
   undefined1 auVar308[16];
   undefined1 auVar311[16];
   undefined1 auVar312[16];
   undefined1 auVar313[16];
   undefined1 auVar314[16];
   undefined1 auVar315[16];
   int iVar324;
   unkuint10 Var327;
   short sVar346;
   undefined1 auVar328[16];
   float fVar325;
   float fVar326;
   undefined1 auVar329[16];
   undefined1 auVar330[16];
   undefined1 auVar334[16];
   undefined1 auVar338[16];
   undefined1 auVar341[16];
   undefined1 auVar342[16];
   undefined1 auVar343[16];
   undefined1 auVar344[16];
   undefined1 auVar345[16];
   ushort uVar347;
   undefined4 uVar348;
   ushort uVar382;
   ushort uVar383;
   ushort uVar385;
   ushort uVar386;
   ushort uVar387;
   undefined1 auVar356[16];
   ushort uVar381;
   int iVar349;
   short sVar384;
   ushort uVar388;
   undefined1 auVar357[16];
   undefined1 auVar358[16];
   undefined1 auVar359[16];
   undefined4 uVar350;
   undefined1 auVar361[16];
   undefined1 auVar362[16];
   undefined1 auVar366[16];
   undefined1 auVar369[16];
   undefined1 auVar373[16];
   undefined1 auVar377[16];
   undefined1 auVar380[16];
   ushort uVar389;
   float __x;
   undefined1 auVar392[12];
   ushort uVar408;
   ushort uVar409;
   ushort uVar410;
   ushort uVar411;
   ushort uVar412;
   ushort uVar413;
   ushort uVar414;
   undefined1 auVar393[16];
   undefined1 auVar394[16];
   undefined1 auVar395[16];
   undefined4 uVar390;
   undefined1 auVar397[16];
   undefined1 auVar398[16];
   undefined1 auVar399[16];
   undefined1 auVar400[16];
   undefined1 auVar401[16];
   undefined1 auVar405[16];
   ushort uVar415;
   ushort uVar434;
   float fVar416;
   undefined4 uVar524;
   ushort uVar435;
   ushort uVar436;
   ushort uVar437;
   ushort uVar438;
   ushort uVar439;
   ushort uVar440;
   undefined1 auVar417[16];
   undefined1 auVar418[16];
   undefined1 auVar419[16];
   undefined1 auVar420[16];
   undefined1 auVar424[16];
   undefined1 auVar428[16];
   undefined1 auVar431[16];
   undefined1 auVar433[16];
   float __z;
   int iVar477;
   undefined1 auVar441[16];
   undefined1 auVar442[16];
   undefined1 auVar443[16];
   undefined1 auVar444[16];
   undefined1 auVar445[16];
   undefined1 auVar446[16];
   undefined1 auVar447[16];
   undefined1 auVar451[16];
   undefined1 auVar455[16];
   undefined1 auVar458[16];
   undefined1 auVar459[16];
   undefined1 auVar460[16];
   undefined1 auVar464[16];
   undefined1 auVar468[16];
   undefined1 auVar471[16];
   undefined1 auVar472[16];
   undefined1 auVar473[16];
   undefined1 auVar474[16];
   undefined1 auVar475[16];
   undefined1 auVar476[16];
   float __z_00;
   float __z_01;
   undefined1 auVar478[16];
   undefined1 auVar479[16];
   undefined1 auVar480[16];
   undefined1 auVar481[16];
   undefined1 auVar482[16];
   undefined1 auVar483[16];
   undefined1 auVar487[16];
   undefined1 auVar491[16];
   undefined1 auVar494[16];
   undefined1 auVar495[16];
   undefined1 auVar496[16];
   undefined1 auVar497[16];
   undefined1 auVar498[16];
   float __x_00;
   float __x_01;
   undefined1 auVar499[16];
   undefined1 auVar500[16];
   undefined1 auVar501[16];
   undefined1 auVar502[16];
   undefined1 auVar503[16];
   undefined1 auVar504[16];
   undefined1 auVar505[16];
   undefined1 auVar506[16];
   undefined1 auVar507[16];
   undefined1 auVar508[16];
   undefined1 auVar509[16];
   undefined1 auVar510[16];
   uint uVar514;
   undefined1 auVar511[16];
   undefined1 auVar512[16];
   undefined1 auVar513[16];
   undefined1 auVar515[16];
   undefined1 auVar516[16];
   undefined1 auVar517[16];
   undefined1 auVar518[16];
   undefined1 auVar519[16];
   undefined1 auVar520[16];
   undefined1 auVar521[16];
   undefined1 auVar522[16];
   undefined1 auVar523[16];
   ulong local_398;
   ulong *local_388;
   uint *local_380;
   int local_358;
   ushort uStack_316;
   ushort uStack_314;
   ushort uStack_312;
   ushort uStack_310;
   ushort uStack_30e;
   ushort uStack_30c;
   ushort uStack_30a;
   ushort uStack_306;
   ushort uStack_304;
   ushort uStack_302;
   ushort uStack_300;
   ushort uStack_2fe;
   ushort uStack_2fc;
   ushort uStack_2fa;
   short sStack_2ec;
   ushort uStack_2e6;
   ushort uStack_2e4;
   ushort uStack_2e2;
   ushort uStack_2e0;
   ushort uStack_2de;
   ushort uStack_2dc;
   ushort uStack_2da;
   short sStack_2cc;
   short sStack_2bc;
   char local_2ac;
   byte local_2aa;
   byte local_2a9;
   bool local_289;
   undefined1 local_288[16];
   undefined1 local_278[16];
   undefined1 local_268[2];
   byte bStack_266;
   byte bStack_265;
   byte local_264[28];
   byte local_248;
   byte bStack_247;
   byte bStack_246;
   byte bStack_245;
   undefined1 auStack_244[12];
   undefined1 local_238[16];
   undefined1 local_228[16];
   undefined1 local_218[16];
   ushort local_208[7];
   undefined2 uStack_1fa;
   ushort local_1f8[3];
   undefined2 uStack_1f2;
   ushort local_1f0[3];
   undefined2 uStack_1ea;
   ushort local_1e8[8];
   ushort local_1d8[4];
   ushort local_1d0[4];
   undefined1 local_1c8[16];
   int local_1b8[12];
   ulong auStack_188[8];
   undefined1 local_148[16];
   undefined1 local_138[16];
   undefined1 local_128[16];
   undefined1 local_118[13][16];
   long local_40;
   char cVar4;
   char cVar5;
   char cVar6;
   char cVar7;
   char cVar9;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   byte bVar17;
   byte bVar18;
   byte bVar19;
   byte bVar20;
   byte bVar21;
   byte bVar22;
   byte bVar23;
   byte bVar24;
   byte bVar26;
   byte bVar27;
   byte bVar28;
   byte bVar29;
   byte bVar30;
   byte bVar31;
   byte bVar33;
   byte bVar34;
   byte bVar35;
   byte bVar36;
   byte bVar37;
   byte bVar38;
   byte bVar39;
   byte bVar41;
   byte bVar42;
   byte bVar43;
   byte bVar45;
   byte bVar46;
   byte bVar47;
   byte bVar48;
   undefined6 uVar295;
   undefined8 uVar296;
   undefined1 auVar305[16];
   undefined1 auVar297[12];
   undefined1 auVar302[16];
   undefined1 auVar306[16];
   undefined1 auVar309[16];
   undefined1 auVar298[14];
   undefined1 auVar303[16];
   undefined1 auVar307[16];
   undefined1 auVar310[16];
   undefined1 auVar331[16];
   undefined1 auVar335[16];
   undefined1 auVar332[16];
   undefined1 auVar336[16];
   undefined1 auVar339[16];
   undefined1 auVar333[16];
   undefined1 auVar337[16];
   undefined1 auVar340[16];
   undefined6 uVar351;
   undefined8 uVar352;
   undefined1 auVar354[12];
   undefined1 auVar363[16];
   undefined1 auVar370[16];
   undefined1 auVar371[16];
   undefined1 auVar372[16];
   undefined1 auVar374[16];
   undefined1 auVar353[12];
   undefined1 auVar364[16];
   undefined1 auVar367[16];
   undefined1 auVar375[16];
   undefined1 auVar378[16];
   undefined1 auVar355[14];
   undefined1 auVar360[16];
   undefined1 auVar365[16];
   undefined1 auVar368[16];
   undefined1 auVar376[16];
   undefined1 auVar379[16];
   undefined1 auVar391[12];
   undefined1 auVar402[16];
   undefined1 auVar403[16];
   undefined1 auVar406[16];
   undefined1 auVar396[16];
   undefined1 auVar404[16];
   undefined1 auVar407[16];
   undefined1 auVar421[16];
   undefined1 auVar425[16];
   undefined1 auVar422[16];
   undefined1 auVar426[16];
   undefined1 auVar429[16];
   undefined1 auVar423[16];
   undefined1 auVar427[16];
   undefined1 auVar430[16];
   undefined1 auVar432[16];
   undefined1 auVar448[16];
   undefined1 auVar452[16];
   undefined1 auVar461[16];
   undefined1 auVar465[16];
   undefined1 auVar449[16];
   undefined1 auVar453[16];
   undefined1 auVar456[16];
   undefined1 auVar462[16];
   undefined1 auVar466[16];
   undefined1 auVar469[16];
   undefined1 auVar450[16];
   undefined1 auVar454[16];
   undefined1 auVar457[16];
   undefined1 auVar463[16];
   undefined1 auVar467[16];
   undefined1 auVar470[16];
   undefined1 auVar484[16];
   undefined1 auVar488[16];
   undefined1 auVar485[16];
   undefined1 auVar489[16];
   undefined1 auVar492[16];
   undefined1 auVar486[16];
   undefined1 auVar490[16];
   undefined1 auVar493[16];
   bVar285 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_358 = 0;
   puVar238 = (ushort*)&local_248;
   local_380 = param_1;
   local_388 = param_2;
   auVar443 = __LC6;
   puVar270 = param_1;
   LAB_00101d37:do {
      uVar248 = param_1[param_4 * 3];
      uVar276 = param_1[param_4 * 2];
      puVar250 = puVar238 + 8;
      *(ulong*)puVar238 = CONCAT44(param_1[param_4], *param_1);
      *(ulong*)( puVar238 + 4 ) = CONCAT44(uVar248, uVar276);
      param_1 = param_1 + 1;
      puVar238 = puVar250;
   }
 while ( puVar250 != local_208 );
   local_358 = local_358 + 1;
   puVar238 = (ushort*)auStack_244;
   if ((long)local_358 == param_4 >> 2) {
      local_358 = 0;
      local_380 = local_380 + param_4 * 3 + 4;
   }
 else {
      local_380 = local_380 + 4;
   }

   LAB_00101d90:if (*(int*)puVar238 == CONCAT13(bStack_245, CONCAT12(bStack_246, CONCAT11(bStack_247, local_248)))) goto code_r0x00101d9f;
   _local_268 = 0xff00;
   cVar253 = param_5;
   if (!param_5) goto LAB_00101e41;
   uVar245 = 0;
   cVar271 = '\0';
   uVar240 = (ulong)local_2a9;
   uVar276 = 0;
   cVar274 = '\0';
   uVar248 = 0xffffffff;
   uVar239 = (ulong)local_2aa;
   puVar238 = (ushort*)&local_248;
   do {
      uVar249 = ( uint ) * (byte*)( (long)puVar238 + 1 ) * 0x96 + (uint)(byte)puVar238[1] * 0x4c + ( uint )(byte) * puVar238 * 0x1c >> 1;
      bVar223 = ( byte )(uVar249 / 0x7f);
      bVar284 = bVar223 < (byte)uVar248;
      local_264[uVar245] = bVar223;
      if (bVar284) {
         uVar239 = uVar245 & 0xffffffff;
         cVar274 = param_5;
      }

      uVar249 = uVar249 / 0x7f;
      if (bVar284) {
         uVar248 = uVar249;
      }

      if ((byte)uVar276 < bVar223) {
         uVar240 = uVar245 & 0xffffffff;
         uVar276 = uVar249;
         cVar271 = param_5;
      }

      uVar245 = uVar245 + 1;
      puVar238 = puVar238 + 2;
   }
 while ( uVar245 != 0x10 );
   local_2a9 = (byte)uVar240;
   uVar249 = 0;
   local_2aa = (byte)uVar239;
   if (cVar271 != '\0') {
      _local_268 = CONCAT12(local_2a9, 0xff00);
      uVar249 = uVar276 & 0xff;
      _local_268 = CONCAT31(_local_268 >> 8, (char)uVar276);
   }

   uVar276 = 0xff;
   if (cVar274 != '\0') {
      local_268 = (undefined1[2])CONCAT11((char)uVar248, local_268[0]);
      uVar276 = uVar248 & 0xff;
      _local_268 = CONCAT13(local_2aa, _local_268);
   }

   fVar289 = (float)(int)( uVar249 - uVar276 ) * __LC5;
   if (fVar289 <= ecmd_threshold) {
      local_2ac = '\x01';
      cVar253 = '\0';
   }
 else if (DAT_00106c34 < fVar289) {
      local_2ac = ( _DAT_00106c38 <= fVar289 ) * '\x02';
   }
 else if (bStack_265 == '\0') {
      local_2ac = bStack_266 == '\x0f';
      cVar253 = !(bool)local_2ac;
   }
 else if (bStack_265 == '\x0f') {
      local_2ac = bStack_266 == '\0';
      cVar253 = !(bool)local_2ac;
   }
 else if (bStack_265 == '\x03') {
      local_2ac = bStack_266 == '\f';
      cVar253 = !(bool)local_2ac;
   }
 else if (bStack_265 == '\f') {
      local_2ac = bStack_266 == '\x03';
      cVar253 = !(bool)local_2ac;
   }
 else {
      LAB_00101e41:local_2ac = '\0';
   }

   iVar258 = 0;
   auVar356[1] = bStack_247;
   auVar356[0] = local_248;
   auVar356[2] = bStack_246;
   auVar356[3] = bStack_245;
   auVar356._4_12_ = auStack_244;
   iVar255 = 0;
   iVar235 = -0xff;
   iVar234 = -0xff;
   iVar280 = 0;
   iVar282 = 0;
   auVar356 = auVar356 & auVar443;
   iVar275 = 0;
   iVar278 = 0;
   uVar272 = 0;
   auVar299 = local_238 & auVar443;
   auVar328 = local_218 & auVar443;
   sVar346 = auVar356._0_2_;
   sVar384 = auVar356._2_2_;
   bVar223 = ( 0 < sVar384 ) * ( sVar384 < 0x100 ) * auVar356[2] - ( 0xff < sVar384 );
   sVar384 = auVar356._4_2_;
   sVar53 = auVar356._6_2_;
   cVar3 = ( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar356[6] - ( 0xff < sVar53 );
   uVar348 = CONCAT13(cVar3, CONCAT12(( 0 < sVar384 ) * ( sVar384 < 0x100 ) * auVar356[4] - ( 0xff < sVar384 ), CONCAT11(bVar223, ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar356[0] - ( 0xff < sVar346 ))));
   sVar346 = auVar356._8_2_;
   sVar384 = auVar356._10_2_;
   cVar271 = ( 0 < sVar384 ) * ( sVar384 < 0x100 ) * auVar356[10] - ( 0xff < sVar384 );
   uVar351 = CONCAT15(cVar271, CONCAT14(( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar356[8] - ( 0xff < sVar346 ), uVar348));
   sVar346 = auVar356._12_2_;
   sVar384 = auVar356._14_2_;
   cVar4 = ( 0 < sVar384 ) * ( sVar384 < 0x100 ) * auVar356[0xe] - ( 0xff < sVar384 );
   uVar352 = CONCAT17(cVar4, CONCAT16(( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar356[0xc] - ( 0xff < sVar346 ), uVar351));
   sVar346 = auVar299._0_2_;
   sVar384 = auVar299._2_2_;
   cVar5 = ( 0 < sVar384 ) * ( sVar384 < 0x100 ) * auVar299[2] - ( 0xff < sVar384 );
   auVar353._0_10_ = CONCAT19(cVar5, CONCAT18(( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar299[0] - ( 0xff < sVar346 ), uVar352));
   sVar346 = auVar299._4_2_;
   auVar353[10] = ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar299[4] - ( 0xff < sVar346 );
   sVar346 = auVar299._6_2_;
   cVar6 = ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar299[6] - ( 0xff < sVar346 );
   auVar353[0xb] = cVar6;
   sVar346 = auVar299._8_2_;
   auVar355[0xc] = ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar299[8] - ( 0xff < sVar346 );
   auVar355._0_12_ = auVar353;
   sVar346 = auVar299._10_2_;
   cVar7 = ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar299[10] - ( 0xff < sVar346 );
   auVar355[0xd] = cVar7;
   sVar346 = auVar299._12_2_;
   auVar521[0xe] = ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar299[0xc] - ( 0xff < sVar346 );
   auVar521._0_14_ = auVar355;
   sVar346 = auVar299._14_2_;
   cVar274 = ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar299[0xe] - ( 0xff < sVar346 );
   auVar521[0xf] = cVar274;
   uVar415 = local_218._0_2_ >> 8;
   uVar434 = local_218._2_2_ >> 8;
   uVar435 = local_218._4_2_ >> 8;
   uVar436 = local_218._6_2_ >> 8;
   uVar437 = local_218._8_2_ >> 8;
   uVar438 = local_218._10_2_ >> 8;
   uVar439 = local_218._12_2_ >> 8;
   uVar440 = local_218._14_2_ >> 8;
   auVar356 = local_228 & auVar443;
   sVar346 = auVar356._0_2_;
   sVar384 = auVar356._2_2_;
   bVar8 = ( 0 < sVar384 ) * ( sVar384 < 0x100 ) * auVar356[2] - ( 0xff < sVar384 );
   sVar384 = auVar356._4_2_;
   sVar53 = auVar356._6_2_;
   cVar9 = ( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar356[6] - ( 0xff < sVar53 );
   uVar287 = CONCAT13(cVar9, CONCAT12(( 0 < sVar384 ) * ( sVar384 < 0x100 ) * auVar356[4] - ( 0xff < sVar384 ), CONCAT11(bVar8, ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar356[0] - ( 0xff < sVar346 ))));
   sVar346 = auVar356._8_2_;
   sVar384 = auVar356._10_2_;
   cVar10 = ( 0 < sVar384 ) * ( sVar384 < 0x100 ) * auVar356[10] - ( 0xff < sVar384 );
   uVar295 = CONCAT15(cVar10, CONCAT14(( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar356[8] - ( 0xff < sVar346 ), uVar287));
   sVar346 = auVar356._12_2_;
   sVar384 = auVar356._14_2_;
   cVar11 = ( 0 < sVar384 ) * ( sVar384 < 0x100 ) * auVar356[0xe] - ( 0xff < sVar384 );
   uVar296 = CONCAT17(cVar11, CONCAT16(( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar356[0xc] - ( 0xff < sVar346 ), uVar295));
   sVar346 = auVar328._0_2_;
   sVar384 = auVar328._2_2_;
   cVar12 = ( 0 < sVar384 ) * ( sVar384 < 0x100 ) * auVar328[2] - ( 0xff < sVar384 );
   auVar297._0_10_ = CONCAT19(cVar12, CONCAT18(( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar328[0] - ( 0xff < sVar346 ), uVar296));
   sVar346 = auVar328._4_2_;
   auVar297[10] = ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar328[4] - ( 0xff < sVar346 );
   sVar346 = auVar328._6_2_;
   cVar13 = ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar328[6] - ( 0xff < sVar346 );
   auVar297[0xb] = cVar13;
   sVar346 = auVar328._8_2_;
   auVar298[0xc] = ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar328[8] - ( 0xff < sVar346 );
   auVar298._0_12_ = auVar297;
   sVar346 = auVar328._10_2_;
   cVar14 = ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar328[10] - ( 0xff < sVar346 );
   auVar298[0xd] = cVar14;
   sVar346 = auVar328._12_2_;
   auVar299[0xe] = ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar328[0xc] - ( 0xff < sVar346 );
   auVar299._0_14_ = auVar298;
   sVar346 = auVar328._14_2_;
   cVar15 = ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar328[0xe] - ( 0xff < sVar346 );
   auVar299[0xf] = cVar15;
   auVar328 = auVar443 & auVar299;
   uVar286 = (ushort)bVar8;
   uVar316 = ( ushort )((uint)uVar287 >> 0x18);
   uVar317 = ( ushort )((uint6)uVar295 >> 0x28);
   uVar318 = ( ushort )((ulong)uVar296 >> 0x38);
   uVar320 = ( ushort )((unkuint10)auVar297._0_10_ >> 0x48);
   uVar321 = auVar297._10_2_ >> 8;
   uVar322 = auVar298._12_2_ >> 8;
   uVar323 = auVar299._14_2_ >> 8;
   auVar356 = auVar443 & auVar521;
   uVar347 = (ushort)bVar223;
   uVar381 = ( ushort )((uint)uVar348 >> 0x18);
   uVar382 = ( ushort )((uint6)uVar351 >> 0x28);
   uVar383 = ( ushort )((ulong)uVar352 >> 0x38);
   uVar385 = ( ushort )((unkuint10)auVar353._0_10_ >> 0x48);
   uVar386 = auVar353._10_2_ >> 8;
   uVar387 = auVar355._12_2_ >> 8;
   uVar388 = auVar521._14_2_ >> 8;
   sVar346 = auVar356._0_2_;
   sVar384 = auVar356._2_2_;
   sVar53 = auVar356._4_2_;
   sVar54 = auVar356._6_2_;
   sVar58 = auVar356._8_2_;
   sVar62 = auVar356._10_2_;
   sVar66 = auVar356._12_2_;
   sVar319 = auVar356._14_2_;
   cVar16 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar356[0xe] - ( 0xff < sVar319 );
   sVar319 = auVar328._0_2_;
   bVar17 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[0] - ( 0xff < sVar319 );
   sVar319 = auVar328._2_2_;
   bVar18 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[2] - ( 0xff < sVar319 );
   uVar181 = CONCAT12(bVar18, CONCAT11(bVar17, cVar16));
   sVar319 = auVar328._4_2_;
   bVar19 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[4] - ( 0xff < sVar319 );
   uVar248 = CONCAT13(bVar19, uVar181);
   sVar319 = auVar328._6_2_;
   bVar20 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[6] - ( 0xff < sVar319 );
   uVar201 = CONCAT14(bVar20, uVar248);
   sVar319 = auVar328._8_2_;
   bVar21 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[8] - ( 0xff < sVar319 );
   auVar212[5] = bVar21;
   auVar212._0_5_ = uVar201;
   sVar319 = auVar328._10_2_;
   bVar22 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[10] - ( 0xff < sVar319 );
   sVar319 = auVar328._12_2_;
   bVar23 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[0xc] - ( 0xff < sVar319 );
   sVar319 = auVar328._14_2_;
   bVar24 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[0xe] - ( 0xff < sVar319 );
   cVar274 = ( uVar388 != 0 ) * ( uVar388 < 0x100 ) * cVar274 - ( 0xff < uVar388 );
   bVar25 = ( uVar286 != 0 ) * ( uVar286 < 0x100 ) * bVar8 - ( 0xff < uVar286 );
   bVar26 = ( uVar316 != 0 ) * ( uVar316 < 0x100 ) * cVar9 - ( 0xff < uVar316 );
   uVar182 = CONCAT12(bVar26, CONCAT11(bVar25, cVar274));
   bVar27 = ( uVar317 != 0 ) * ( uVar317 < 0x100 ) * cVar10 - ( 0xff < uVar317 );
   uVar249 = CONCAT13(bVar27, uVar182);
   bVar8 = ( uVar318 != 0 ) * ( uVar318 < 0x100 ) * cVar11 - ( 0xff < uVar318 );
   uVar202 = CONCAT14(bVar8, uVar249);
   bVar28 = ( uVar320 != 0 ) * ( uVar320 < 0x100 ) * cVar12 - ( 0xff < uVar320 );
   auVar214[5] = bVar28;
   auVar214._0_5_ = uVar202;
   bVar29 = ( uVar321 != 0 ) * ( uVar321 < 0x100 ) * cVar13 - ( 0xff < uVar321 );
   bVar30 = ( uVar322 != 0 ) * ( uVar322 < 0x100 ) * cVar14 - ( 0xff < uVar322 );
   bVar31 = ( uVar323 != 0 ) * ( uVar323 < 0x100 ) * cVar15 - ( 0xff < uVar323 );
   uVar389 = (ushort)bStack_247;
   uVar408 = ( ushort )(( (uint)bStack_245 << 0x18 ) >> 0x18);
   uVar409 = auStack_244._0_2_ >> 8;
   uVar410 = auStack_244._2_2_ >> 8;
   uVar411 = auStack_244._4_2_ >> 8;
   uVar412 = auStack_244._6_2_ >> 8;
   uVar413 = auStack_244._8_2_ >> 8;
   uVar414 = auStack_244._10_2_ >> 8;
   auVar212._6_8_ = 0;
   auVar79[0xe] = cVar16;
   auVar79._0_14_ = auVar212 << 0x38;
   uVar208 = CONCAT26(auVar79._13_2_, CONCAT15(( 0 < sVar66 ) * ( sVar66 < 0x100 ) * auVar356[0xc] - ( 0xff < sVar66 ), uVar201));
   auVar203._4_8_ = 0;
   auVar203._0_4_ = uVar248;
   auVar99._12_3_ = ( int3 )((ulong)uVar208 >> 0x28);
   auVar99._0_12_ = auVar203 << 0x38;
   uVar248 = auVar99._11_4_;
   uVar352 = CONCAT44(uVar248, CONCAT13(( 0 < sVar62 ) * ( sVar62 < 0x100 ) * auVar356[10] - ( 0xff < sVar62 ), uVar181));
   auVar118._10_5_ = ( int5 )((ulong)uVar352 >> 0x18);
   auVar118._0_10_ = (unkuint10)CONCAT11(bVar17, cVar16) << 0x38;
   uVar296 = CONCAT62(auVar118._9_6_, CONCAT11(( 0 < sVar58 ) * ( sVar58 < 0x100 ) * auVar356[8] - ( 0xff < sVar58 ), cVar16));
   auVar127._7_8_ = 0;
   auVar127._0_7_ = ( uint7 )((ulong)uVar296 >> 8);
   Var128 = CONCAT81(SUB158(auVar127 << 0x40, 7), ( 0 < sVar54 ) * ( sVar54 < 0x100 ) * auVar356[6] - ( 0xff < sVar54 ));
   auVar183._9_6_ = 0;
   auVar183._0_9_ = Var128;
   auVar129._1_10_ = SUB1510(auVar183 << 0x30, 5);
   auVar129[0] = ( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar356[4] - ( 0xff < sVar53 );
   auVar184._11_4_ = 0;
   auVar184._0_11_ = auVar129;
   auVar130._1_12_ = SUB1512(auVar184 << 0x20, 3);
   auVar130[0] = ( 0 < sVar384 ) * ( sVar384 < 0x100 ) * auVar356[2] - ( 0xff < sVar384 );
   uVar286 = CONCAT11(0, ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar356[0] - ( 0xff < sVar346 ));
   auVar124._2_13_ = auVar130;
   auVar124._0_2_ = uVar286;
   uVar267 = CONCAT13(0, CONCAT12(bVar18, (ushort)bVar17));
   uVar316 = local_238._0_2_ >> 8;
   uVar317 = local_238._2_2_ >> 8;
   uVar318 = local_238._4_2_ >> 8;
   uVar320 = local_238._6_2_ >> 8;
   uVar321 = local_238._8_2_ >> 8;
   uVar322 = local_238._10_2_ >> 8;
   uVar323 = local_238._12_2_ >> 8;
   uVar388 = local_238._14_2_ >> 8;
   auVar393[1] = ( uVar408 != 0 ) * ( uVar408 < 0x100 ) * bStack_245 - ( 0xff < uVar408 );
   auVar393[0] = ( uVar389 != 0 ) * ( uVar389 < 0x100 ) * bStack_247 - ( 0xff < uVar389 );
   auVar393[2] = ( uVar409 != 0 ) * ( uVar409 < 0x100 ) * auStack_244[1] - ( 0xff < uVar409 );
   auVar393[3] = ( uVar410 != 0 ) * ( uVar410 < 0x100 ) * auStack_244[3] - ( 0xff < uVar410 );
   auVar393[4] = ( uVar411 != 0 ) * ( uVar411 < 0x100 ) * auStack_244[5] - ( 0xff < uVar411 );
   auVar393[5] = ( uVar412 != 0 ) * ( uVar412 < 0x100 ) * auStack_244[7] - ( 0xff < uVar412 );
   auVar393[6] = ( uVar413 != 0 ) * ( uVar413 < 0x100 ) * auStack_244[9] - ( 0xff < uVar413 );
   auVar393[7] = ( uVar414 != 0 ) * ( uVar414 < 0x100 ) * auStack_244[0xb] - ( 0xff < uVar414 );
   auVar393[8] = ( uVar316 != 0 ) * ( uVar316 < 0x100 ) * local_238[1] - ( 0xff < uVar316 );
   auVar393[9] = ( uVar317 != 0 ) * ( uVar317 < 0x100 ) * local_238[3] - ( 0xff < uVar317 );
   auVar393[10] = ( uVar318 != 0 ) * ( uVar318 < 0x100 ) * local_238[5] - ( 0xff < uVar318 );
   auVar393[0xb] = ( uVar320 != 0 ) * ( uVar320 < 0x100 ) * local_238[7] - ( 0xff < uVar320 );
   auVar393[0xc] = ( uVar321 != 0 ) * ( uVar321 < 0x100 ) * local_238[9] - ( 0xff < uVar321 );
   auVar393[0xd] = ( uVar322 != 0 ) * ( uVar322 < 0x100 ) * local_238[0xb] - ( 0xff < uVar322 );
   auVar393[0xe] = ( uVar323 != 0 ) * ( uVar323 < 0x100 ) * local_238[0xd] - ( 0xff < uVar323 );
   auVar393[0xf] = ( uVar388 != 0 ) * ( uVar388 < 0x100 ) * local_238[0xf] - ( 0xff < uVar388 );
   auVar393 = auVar393 & auVar443;
   uVar316 = local_228._0_2_ >> 8;
   uVar317 = local_228._2_2_ >> 8;
   uVar318 = local_228._4_2_ >> 8;
   uVar320 = local_228._6_2_ >> 8;
   uVar321 = local_228._8_2_ >> 8;
   uVar322 = local_228._10_2_ >> 8;
   uVar323 = local_228._12_2_ >> 8;
   uVar388 = local_228._14_2_ >> 8;
   auVar328[1] = ( uVar317 != 0 ) * ( uVar317 < 0x100 ) * local_228[3] - ( 0xff < uVar317 );
   auVar328[0] = ( uVar316 != 0 ) * ( uVar316 < 0x100 ) * local_228[1] - ( 0xff < uVar316 );
   auVar328[2] = ( uVar318 != 0 ) * ( uVar318 < 0x100 ) * local_228[5] - ( 0xff < uVar318 );
   auVar328[3] = ( uVar320 != 0 ) * ( uVar320 < 0x100 ) * local_228[7] - ( 0xff < uVar320 );
   auVar328[4] = ( uVar321 != 0 ) * ( uVar321 < 0x100 ) * local_228[9] - ( 0xff < uVar321 );
   auVar328[5] = ( uVar322 != 0 ) * ( uVar322 < 0x100 ) * local_228[0xb] - ( 0xff < uVar322 );
   auVar328[6] = ( uVar323 != 0 ) * ( uVar323 < 0x100 ) * local_228[0xd] - ( 0xff < uVar323 );
   auVar328[7] = ( uVar388 != 0 ) * ( uVar388 < 0x100 ) * local_228[0xf] - ( 0xff < uVar388 );
   auVar328[8] = ( uVar415 != 0 ) * ( uVar415 < 0x100 ) * local_218[1] - ( 0xff < uVar415 );
   auVar328[9] = ( uVar434 != 0 ) * ( uVar434 < 0x100 ) * local_218[3] - ( 0xff < uVar434 );
   auVar328[10] = ( uVar435 != 0 ) * ( uVar435 < 0x100 ) * local_218[5] - ( 0xff < uVar435 );
   auVar328[0xb] = ( uVar436 != 0 ) * ( uVar436 < 0x100 ) * local_218[7] - ( 0xff < uVar436 );
   auVar328[0xc] = ( uVar437 != 0 ) * ( uVar437 < 0x100 ) * local_218[9] - ( 0xff < uVar437 );
   auVar328[0xd] = ( uVar438 != 0 ) * ( uVar438 < 0x100 ) * local_218[0xb] - ( 0xff < uVar438 );
   auVar328[0xe] = ( uVar439 != 0 ) * ( uVar439 < 0x100 ) * local_218[0xd] - ( 0xff < uVar439 );
   auVar328[0xf] = ( uVar440 != 0 ) * ( uVar440 < 0x100 ) * local_218[0xf] - ( 0xff < uVar440 );
   auVar328 = auVar328 & auVar443;
   uVar318 = ( ushort )((ulong)uVar296 >> 8);
   uVar320 = ( ushort )((ulong)uVar352 >> 0x18);
   sVar346 = auVar393._0_2_;
   sVar384 = auVar393._2_2_;
   sVar53 = auVar393._4_2_;
   sVar54 = auVar393._6_2_;
   sVar58 = auVar393._8_2_;
   sVar62 = auVar393._10_2_;
   sVar66 = auVar393._12_2_;
   sVar319 = auVar393._14_2_;
   cVar9 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar393[0xe] - ( 0xff < sVar319 );
   sVar319 = auVar328._0_2_;
   bVar32 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[0] - ( 0xff < sVar319 );
   sVar319 = auVar328._2_2_;
   bVar33 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[2] - ( 0xff < sVar319 );
   uVar181 = CONCAT12(bVar33, CONCAT11(bVar32, cVar9));
   sVar319 = auVar328._4_2_;
   bVar34 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[4] - ( 0xff < sVar319 );
   uVar276 = CONCAT13(bVar34, uVar181);
   sVar319 = auVar328._6_2_;
   bVar35 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[6] - ( 0xff < sVar319 );
   uVar201 = CONCAT14(bVar35, uVar276);
   sVar319 = auVar328._8_2_;
   bVar36 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[8] - ( 0xff < sVar319 );
   auVar213[5] = bVar36;
   auVar213._0_5_ = uVar201;
   sVar319 = auVar328._10_2_;
   bVar37 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[10] - ( 0xff < sVar319 );
   sVar319 = auVar328._12_2_;
   bVar38 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[0xc] - ( 0xff < sVar319 );
   sVar319 = auVar328._14_2_;
   bVar39 = ( 0 < sVar319 ) * ( sVar319 < 0x100 ) * auVar328[0xe] - ( 0xff < sVar319 );
   sVar319 = (short)Var128;
   auVar92._10_2_ = 0;
   auVar92._0_10_ = auVar124._0_10_;
   auVar92._12_2_ = sVar319;
   uVar220 = CONCAT42(auVar92._10_4_, auVar129._0_2_);
   auVar131._6_8_ = 0;
   auVar131._0_6_ = uVar220;
   uVar236 = CONCAT13(0, CONCAT12(bVar33, (ushort)bVar32));
   auVar213._6_8_ = 0;
   auVar80[0xe] = cVar9;
   auVar80._0_14_ = auVar213 << 0x38;
   uVar210 = CONCAT26(auVar80._13_2_, CONCAT15(( 0 < sVar66 ) * ( sVar66 < 0x100 ) * auVar393[0xc] - ( 0xff < sVar66 ), uVar201));
   auVar204._4_8_ = 0;
   auVar204._0_4_ = uVar276;
   auVar100._12_3_ = ( int3 )((ulong)uVar210 >> 0x28);
   auVar100._0_12_ = auVar204 << 0x38;
   uVar276 = auVar100._11_4_;
   uVar352 = CONCAT44(uVar276, CONCAT13(( 0 < sVar62 ) * ( sVar62 < 0x100 ) * auVar393[10] - ( 0xff < sVar62 ), uVar181));
   auVar119._10_5_ = ( int5 )((ulong)uVar352 >> 0x18);
   auVar119._0_10_ = (unkuint10)CONCAT11(bVar32, cVar9) << 0x38;
   uVar296 = CONCAT62(auVar119._9_6_, CONCAT11(( 0 < sVar58 ) * ( sVar58 < 0x100 ) * auVar393[8] - ( 0xff < sVar58 ), cVar9));
   auVar132._7_8_ = 0;
   auVar132._0_7_ = ( uint7 )((ulong)uVar296 >> 8);
   Var128 = CONCAT81(SUB158(auVar132 << 0x40, 7), ( 0 < sVar54 ) * ( sVar54 < 0x100 ) * auVar393[6] - ( 0xff < sVar54 ));
   auVar185._9_6_ = 0;
   auVar185._0_9_ = Var128;
   auVar133._1_10_ = SUB1510(auVar185 << 0x30, 5);
   auVar133[0] = ( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar393[4] - ( 0xff < sVar53 );
   auVar186._11_4_ = 0;
   auVar186._0_11_ = auVar133;
   auVar134._1_12_ = SUB1512(auVar186 << 0x20, 3);
   auVar134[0] = ( 0 < sVar384 ) * ( sVar384 < 0x100 ) * auVar393[2] - ( 0xff < sVar384 );
   uVar316 = CONCAT11(0, ( 0 < sVar346 ) * ( sVar346 < 0x100 ) * auVar393[0] - ( 0xff < sVar346 ));
   auVar125._2_13_ = auVar134;
   auVar125._0_2_ = uVar316;
   auVar106[0xc] = bVar20;
   auVar106._0_12_ = ZEXT112(bVar21) << 0x40;
   auVar107._10_3_ = auVar106._10_3_;
   auVar107._0_10_ = (unkuint10)bVar19 << 0x40;
   auVar135._5_8_ = 0;
   auVar135._0_5_ = auVar107._8_5_;
   auVar108[4] = bVar18;
   auVar108._0_4_ = uVar267;
   auVar108[5] = 0;
   auVar108._6_7_ = SUB137(auVar135 << 0x40, 6);
   uVar323 = ( ushort )((ulong)uVar296 >> 8);
   uVar388 = ( ushort )((ulong)uVar352 >> 0x18);
   auVar214._6_8_ = 0;
   auVar81[0xe] = cVar274;
   auVar81._0_14_ = auVar214 << 0x38;
   uVar215 = CONCAT26(auVar81._13_2_, CONCAT15(( uVar387 != 0 ) * ( uVar387 < 0x100 ) * cVar7 - ( 0xff < uVar387 ), uVar202));
   auVar205._4_8_ = 0;
   auVar205._0_4_ = uVar249;
   auVar101._12_3_ = ( int3 )((ulong)uVar215 >> 0x28);
   auVar101._0_12_ = auVar205 << 0x38;
   uVar249 = auVar101._11_4_;
   uVar352 = CONCAT44(uVar249, CONCAT13(( uVar386 != 0 ) * ( uVar386 < 0x100 ) * cVar6 - ( 0xff < uVar386 ), uVar182));
   auVar120._10_5_ = ( int5 )((ulong)uVar352 >> 0x18);
   auVar120._0_10_ = (unkuint10)CONCAT11(bVar25, cVar274) << 0x38;
   uVar296 = CONCAT62(auVar120._9_6_, CONCAT11(( uVar385 != 0 ) * ( uVar385 < 0x100 ) * cVar5 - ( 0xff < uVar385 ), cVar274));
   auVar136._7_8_ = 0;
   auVar136._0_7_ = ( uint7 )((ulong)uVar296 >> 8);
   Var137 = CONCAT81(SUB158(auVar136 << 0x40, 7), ( uVar383 != 0 ) * ( uVar383 < 0x100 ) * cVar4 - ( 0xff < uVar383 ));
   auVar187._9_6_ = 0;
   auVar187._0_9_ = Var137;
   auVar138._1_10_ = SUB1510(auVar187 << 0x30, 5);
   auVar138[0] = ( uVar382 != 0 ) * ( uVar382 < 0x100 ) * cVar271 - ( 0xff < uVar382 );
   auVar188._11_4_ = 0;
   auVar188._0_11_ = auVar138;
   auVar139._1_12_ = SUB1512(auVar188 << 0x20, 3);
   auVar139[0] = ( uVar381 != 0 ) * ( uVar381 < 0x100 ) * cVar3 - ( 0xff < uVar381 );
   uVar317 = CONCAT11(0, ( uVar347 != 0 ) * ( uVar347 < 0x100 ) * bVar223 - ( 0xff < uVar347 ));
   auVar126._2_13_ = auVar139;
   auVar126._0_2_ = uVar317;
   sVar346 = (short)Var128;
   auVar82._10_2_ = 0;
   auVar82._0_10_ = auVar125._0_10_;
   auVar82._12_2_ = sVar346;
   uVar221 = CONCAT42(auVar82._10_4_, auVar133._0_2_);
   auVar140._6_8_ = 0;
   auVar140._0_6_ = uVar221;
   auVar109._4_2_ = auVar134._0_2_;
   auVar109._0_4_ = auVar125._0_4_;
   auVar109._6_8_ = SUB148(auVar140 << 0x40, 6);
   auVar110[0xc] = bVar35;
   auVar110._0_12_ = ZEXT112(bVar36) << 0x40;
   auVar111._10_3_ = auVar110._10_3_;
   auVar111._0_10_ = (unkuint10)bVar34 << 0x40;
   auVar141._5_8_ = 0;
   auVar141._0_5_ = auVar111._8_5_;
   auVar112[4] = bVar33;
   auVar112._0_4_ = uVar236;
   auVar112[5] = 0;
   auVar112._6_7_ = SUB137(auVar141 << 0x40, 6);
   uVar261 = CONCAT13(0, CONCAT12(bVar26, (ushort)bVar25));
   sVar384 = (short)Var137;
   auVar83._10_2_ = 0;
   auVar83._0_10_ = auVar126._0_10_;
   auVar83._12_2_ = sVar384;
   uVar222 = CONCAT42(auVar83._10_4_, auVar138._0_2_);
   auVar142._6_8_ = 0;
   auVar142._0_6_ = uVar222;
   auVar113._4_2_ = auVar139._0_2_;
   auVar113._0_4_ = auVar126._0_4_;
   auVar113._6_8_ = SUB148(auVar142 << 0x40, 6);
   uVar321 = ( ushort )((ulong)uVar296 >> 8);
   uVar322 = ( ushort )((ulong)uVar352 >> 0x18);
   auVar114[0xc] = bVar8;
   auVar114._0_12_ = ZEXT112(bVar28) << 0x40;
   auVar115._10_3_ = auVar114._10_3_;
   auVar115._0_10_ = (unkuint10)bVar27 << 0x40;
   auVar143._5_8_ = 0;
   auVar143._0_5_ = auVar115._8_5_;
   auVar116[4] = bVar26;
   auVar116._0_4_ = uVar261;
   auVar116[5] = 0;
   auVar116._6_7_ = SUB137(auVar143 << 0x40, 6);
   iVar349 = ( auVar126._0_4_ & 0xffff ) + (uint)uVar321 + ( uVar261 & 0xffff ) + (uint)bVar28 + (int)uVar222 + ( uVar249 >> 8 & 0xffff ) + auVar115._8_4_ + (uint)bVar30 + auVar113._4_4_ + (uint)uVar322 + auVar116._4_4_ + (uint)bVar29 + ( auVar83._10_4_ >> 0x10 ) + ( uVar249 >> 0x18 ) + ( uint )(uint3)(auVar114._10_3_ >> 0x10) + (uint)bVar31;
   iVar324 = ( auVar125._0_4_ & 0xffff ) + (uint)uVar323 + ( uVar236 & 0xffff ) + (uint)bVar36 + (int)uVar221 + ( uVar276 >> 8 & 0xffff ) + auVar111._8_4_ + (uint)bVar38 + auVar109._4_4_ + (uint)uVar388 + auVar112._4_4_ + (uint)bVar37 + ( auVar82._10_4_ >> 0x10 ) + ( uVar276 >> 0x18 ) + ( uint )(uint3)(auVar110._10_3_ >> 0x10) + (uint)bVar39;
   iVar288 = (uint)uVar286 + (uint)uVar318 + ( uVar267 & 0xffff ) + (uint)bVar21 + (int)uVar220 + ( uVar248 >> 8 & 0xffff ) + auVar107._8_4_ + (uint)bVar23 + (int)CONCAT82(SUB148(auVar131 << 0x40, 6), auVar130._0_2_) + (uint)uVar320 + auVar108._4_4_ + (uint)bVar22 + ( auVar92._10_4_ >> 0x10 ) + ( uVar248 >> 0x18 ) + ( uint )(uint3)(auVar106._10_3_ >> 0x10) + (uint)bVar24;
   local_148._8_8_ = _UNK_00106c88;
   local_148._0_8_ = __LC7;
   puVar238 = (ushort*)&local_248;
   while (true) {
      uVar272 = uVar272 + 1;
      iVar254 = ( uint )(byte) * puVar238 * 0x10 - iVar288;
      iVar247 = ( uint ) * (byte*)( (long)puVar238 + 1 ) * 0x10 - iVar324;
      iVar260 = (uint)(byte)puVar238[1] * 0x10 - iVar349;
      iVar282 = iVar282 + iVar260 * iVar235;
      iVar255 = iVar255 + iVar260 * iVar234;
      iVar278 = iVar278 + iVar247 * iVar234;
      iVar280 = iVar280 + iVar247 * iVar235;
      iVar275 = iVar275 + iVar234 * iVar254;
      iVar258 = iVar258 + iVar254 * iVar235;
      if (uVar272 == 0x10) break;
      iVar234 = *(int*)( local_148 + ( ulong )(uVar272 & 3) * 4 );
      iVar235 = *(int*)( local_148 + (long)( (int)uVar272 >> 2 ) * 4 );
      puVar238 = puVar238 + 2;
   }
;
   fVar325 = (float)iVar282 * _LC8;
   fVar416 = (float)iVar255 * _LC8;
   fVar326 = (float)iVar280 * _LC8;
   __x = (float)iVar258 * _LC8;
   __x_00 = (float)iVar278 * _LC8;
   __x_01 = (float)iVar275 * _LC8;
   __z = (float)iVar349 * _LC9;
   __z_00 = (float)iVar324 * _LC9;
   __z_01 = (float)iVar288 * _LC9;
   fVar289 = fmaf(fVar416, _LC10, __z);
   fVar290 = fmaf(fVar325, _LC10, fVar289);
   fVar291 = fmaf(__x_00, _LC10, __z_00);
   fVar292 = fmaf(fVar326, _LC10, fVar291);
   fVar293 = fmaf(__x_01, _LC10, __z_01);
   fVar294 = fmaf(__x, _LC10, fVar293);
   fVar289 = fmaf(fVar325, _LC11, fVar289);
   fVar291 = fmaf(fVar326, _LC11, fVar291);
   fVar293 = fmaf(__x, _LC11, fVar293);
   fVar416 = fmaf(fVar416, _LC11, __z);
   fVar416 = fmaf(fVar325, _LC10, fVar416);
   fVar325 = fmaf(__x_00, _LC11, __z_00);
   fVar325 = fmaf(fVar326, _LC10, fVar325);
   fVar326 = fmaf(__x_01, _LC11, __z_01);
   fVar326 = fmaf(__x, _LC10, fVar326);
   iVar234 = (int)fVar290;
   local_398 = 0;
   if (0x3ff < iVar234) {
      iVar234 = 0x3ff;
   }

   if (iVar234 < 0) {
      iVar234 = 0;
   }

   iVar235 = iVar234 + -0xf >> 1;
   iVar234 = iVar235 + 0xb;
   iVar255 = (int)fVar292;
   uVar248 = ( iVar234 - ( iVar234 >> 7 ) ) - ( iVar235 + 4 >> 7 ) >> 3;
   uVar276 = uVar248 & 0xff;
   if (0x3ff < iVar255) {
      iVar255 = 0x3ff;
   }

   if (iVar255 < 0) {
      iVar255 = 0;
   }

   iVar235 = iVar255 + -0xf >> 1;
   iVar234 = iVar235 + 9;
   iVar255 = (int)fVar294;
   uVar249 = ( iVar234 - ( iVar234 >> 8 ) ) - ( iVar235 + 6 >> 8 ) >> 2;
   uVar272 = uVar249 & 0xff;
   if (0x3ff < iVar255) {
      iVar255 = 0x3ff;
   }

   if (iVar255 < 0) {
      iVar255 = 0;
   }

   iVar235 = iVar255 + -0xf >> 1;
   iVar234 = iVar235 + 0xb;
   uVar261 = ( iVar234 - ( iVar234 >> 7 ) ) - ( iVar235 + 4 >> 7 ) >> 3;
   uVar236 = uVar261 & 0xff;
   iVar234 = (int)fVar289;
   if (0x3ff < iVar234) {
      iVar234 = 0x3ff;
   }

   if (iVar234 < 0) {
      iVar234 = 0;
   }

   iVar235 = iVar234 + -0xf >> 1;
   iVar234 = iVar235 + 0xb;
   iVar255 = (int)fVar291;
   uVar267 = ( iVar234 - ( iVar234 >> 7 ) ) - ( iVar235 + 4 >> 7 ) >> 3;
   uVar273 = uVar267 & 0xff;
   if (0x3ff < iVar255) {
      iVar255 = 0x3ff;
   }

   if (iVar255 < 0) {
      iVar255 = 0;
   }

   iVar235 = iVar255 + -0xf >> 1;
   iVar234 = iVar235 + 9;
   iVar255 = (int)fVar293;
   uVar279 = ( iVar234 - ( iVar234 >> 8 ) ) - ( iVar235 + 6 >> 8 ) >> 2 & 0xff;
   if (0x3ff < iVar255) {
      iVar255 = 0x3ff;
   }

   if (iVar255 < 0) {
      iVar255 = 0;
   }

   iVar235 = iVar255 + -0xf >> 1;
   iVar234 = iVar235 + 0xb;
   iVar255 = (int)fVar416;
   uVar256 = ( iVar234 - ( iVar234 >> 7 ) ) - ( iVar235 + 4 >> 7 ) >> 3 & 0xff;
   if (0x3ff < iVar255) {
      iVar255 = 0x3ff;
   }

   if (iVar255 < 0) {
      iVar255 = 0;
   }

   iVar235 = iVar255 + -0xf >> 1;
   iVar234 = iVar235 + 0xb;
   iVar255 = (int)fVar325;
   uVar281 = ( iVar234 - ( iVar234 >> 7 ) ) - ( iVar235 + 4 >> 7 ) >> 3 & 0xff;
   if (0x3ff < iVar255) {
      iVar255 = 0x3ff;
   }

   if (iVar255 < 0) {
      iVar255 = 0;
   }

   iVar235 = iVar255 + -0xf >> 1;
   iVar234 = iVar235 + 9;
   iVar255 = (int)fVar326;
   uVar259 = ( iVar234 - ( iVar234 >> 8 ) ) - ( iVar235 + 6 >> 8 ) >> 2 & 0xff;
   if (0x3ff < iVar255) {
      iVar255 = 0x3ff;
   }

   if (iVar255 < 0) {
      iVar255 = 0;
   }

   iVar235 = iVar255 + -0xf >> 1;
   iVar234 = iVar235 + 0xb;
   uVar268 = ( iVar234 - ( iVar234 >> 7 ) ) - ( iVar235 + 4 >> 7 ) >> 3;
   uVar237 = uVar268 & 0xff;
   if (cVar253 != '\0') {
      uVar262 = (int)uVar276 >> 4 | uVar276 * 4;
      uVar263 = (int)uVar272 >> 6 | uVar272 * 2;
      uVar264 = (int)uVar236 >> 4 | uVar236 * 4;
      iVar234 = uVar262 * 4 + 2;
      iVar235 = uVar264 * 4 + 2;
      iVar255 = uVar263 * 4 + 2;
      iVar278 = ( (int)uVar273 >> 4 | uVar273 * 4 ) - uVar262;
      iVar280 = ( (int)uVar279 >> 6 | uVar279 * 2 ) - uVar263;
      iVar288 = ( (int)uVar256 >> 4 | uVar256 * 4 ) - uVar264;
      iVar282 = ( (int)uVar281 >> 4 | uVar281 * 4 ) - uVar262;
      auVar441._4_4_ = iVar282;
      auVar441._0_4_ = iVar282;
      auVar441._8_4_ = iVar282;
      auVar441._12_4_ = iVar282;
      iVar324 = ( (int)uVar259 >> 6 | uVar259 * 2 ) - uVar263;
      auVar499._4_4_ = iVar324;
      auVar499._0_4_ = iVar324;
      auVar499._8_4_ = iVar324;
      auVar499._12_4_ = iVar324;
      uVar264 = ( ( uVar268 & 0xff ) * 4 | (int)( uVar268 & 0xff ) >> 4 ) - uVar264;
      iVar258 = iVar278 * 2;
      iVar254 = SUB164(__LC12, 0);
      iVar349 = iVar282 * iVar254;
      uVar268 = iVar278 * 3;
      iVar260 = SUB164(__LC12, 4);
      iVar282 = iVar282 * iVar260;
      uVar514 = SUB164(__LC12, 0xc);
      iVar247 = (int)( ( auVar441._8_8_ & 0xffffffff ) * (ulong)SUB164(__LC12, 8) );
      iVar477 = (int)( ( auVar441._8_8_ >> 0x20 ) * (ulong)uVar514 );
      auVar519._0_4_ = iVar234 + iVar349 >> 2;
      auVar519._4_4_ = iVar234 + iVar282 >> 2;
      auVar519._8_4_ = iVar234 + iVar247 >> 2;
      auVar519._12_4_ = iVar234 + iVar477 >> 2;
      auVar442._0_4_ = (int)( uVar268 + iVar349 + iVar234 ) >> 2;
      auVar442._4_4_ = (int)( uVar268 + iVar282 + iVar234 ) >> 2;
      auVar442._8_4_ = (int)( uVar268 + iVar247 + iVar234 ) >> 2;
      auVar442._12_4_ = (int)( uVar268 + iVar477 + iVar234 ) >> 2;
      auVar357._8_4_ = 0xffffffff;
      auVar357._0_8_ = 0xffffffffffffffff;
      auVar357._12_4_ = 0xffffffff;
      auVar300._0_4_ = -(uint)(__LC15 < auVar519._0_4_ - __LC14);
      auVar300._4_4_ = -(uint)(_UNK_00106cb4 < auVar519._4_4_ - _UNK_00106ca4);
      auVar300._8_4_ = -(uint)(_UNK_00106cb8 < auVar519._8_4_ - _UNK_00106ca8);
      auVar300._12_4_ = -(uint)(_UNK_00106cbc < auVar519._12_4_ - _UNK_00106cac);
      auVar443 = auVar519 ^ auVar357;
      iVar275 = iVar280 * 2;
      auVar444._0_4_ = auVar443._0_4_ >> 0x1f;
      auVar444._4_4_ = auVar443._4_4_ >> 0x1f;
      auVar444._8_4_ = auVar443._8_4_ >> 0x1f;
      auVar444._12_4_ = auVar443._12_4_ >> 0x1f;
      auVar478._0_4_ = iVar278 + iVar349 + iVar234 >> 2;
      auVar478._4_4_ = iVar278 + iVar282 + iVar234 >> 2;
      auVar478._8_4_ = iVar278 + iVar247 + iVar234 >> 2;
      auVar478._12_4_ = iVar278 + iVar477 + iVar234 >> 2;
      iVar278 = iVar280 * 3;
      auVar504._0_4_ = iVar258 + iVar349 + iVar234 >> 2;
      auVar504._4_4_ = iVar258 + iVar282 + iVar234 >> 2;
      auVar504._8_4_ = iVar258 + iVar247 + iVar234 >> 2;
      auVar504._12_4_ = iVar258 + iVar477 + iVar234 >> 2;
      auVar356 = ~auVar300 & auVar519 | auVar444 & auVar300;
      auVar443 = auVar478 ^ auVar357;
      auVar445._0_4_ = -(uint)(__LC15 < auVar478._0_4_ - __LC14);
      auVar445._4_4_ = -(uint)(_UNK_00106cb4 < auVar478._4_4_ - _UNK_00106ca4);
      auVar445._8_4_ = -(uint)(_UNK_00106cb8 < auVar478._8_4_ - _UNK_00106ca8);
      auVar445._12_4_ = -(uint)(_UNK_00106cbc < auVar478._12_4_ - _UNK_00106cac);
      auVar520._0_4_ = auVar443._0_4_ >> 0x1f;
      auVar520._4_4_ = auVar443._4_4_ >> 0x1f;
      auVar520._8_4_ = auVar443._8_4_ >> 0x1f;
      auVar520._12_4_ = auVar443._12_4_ >> 0x1f;
      auVar521 = auVar520 & auVar445 | ~auVar445 & auVar478;
      auVar443 = auVar504 ^ auVar357;
      auVar479._0_4_ = auVar443._0_4_ >> 0x1f;
      auVar479._4_4_ = auVar443._4_4_ >> 0x1f;
      auVar479._8_4_ = auVar443._8_4_ >> 0x1f;
      auVar479._12_4_ = auVar443._12_4_ >> 0x1f;
      auVar446._0_4_ = -(uint)(__LC15 < auVar504._0_4_ - __LC14);
      auVar446._4_4_ = -(uint)(_UNK_00106cb4 < auVar504._4_4_ - _UNK_00106ca4);
      auVar446._8_4_ = -(uint)(_UNK_00106cb8 < auVar504._8_4_ - _UNK_00106ca8);
      auVar446._12_4_ = -(uint)(_UNK_00106cbc < auVar504._12_4_ - _UNK_00106cac);
      auVar299 = ~auVar446 & auVar504 | auVar479 & auVar446;
      auVar443 = auVar442 ^ auVar357;
      auVar505._0_4_ = auVar443._0_4_ >> 0x1f;
      auVar505._4_4_ = auVar443._4_4_ >> 0x1f;
      auVar505._8_4_ = auVar443._8_4_ >> 0x1f;
      auVar505._12_4_ = auVar443._12_4_ >> 0x1f;
      auVar480._0_4_ = -(uint)(__LC15 < auVar442._0_4_ - __LC14);
      auVar480._4_4_ = -(uint)(_UNK_00106cb4 < auVar442._4_4_ - _UNK_00106ca4);
      auVar480._8_4_ = -(uint)(_UNK_00106cb8 < auVar442._8_4_ - _UNK_00106ca8);
      auVar480._12_4_ = -(uint)(_UNK_00106cbc < auVar442._12_4_ - _UNK_00106cac);
      auVar328 = ~auVar480 & auVar442 | auVar505 & auVar480;
      auVar303._0_12_ = auVar356._0_12_;
      auVar303._12_2_ = auVar356._6_2_;
      auVar303._14_2_ = auVar521._6_2_;
      auVar302._12_4_ = auVar303._12_4_;
      auVar302._0_10_ = auVar356._0_10_;
      auVar302._10_2_ = auVar521._4_2_;
      auVar301._10_6_ = auVar302._10_6_;
      auVar301._0_8_ = auVar356._0_8_;
      auVar301._8_2_ = auVar356._4_2_;
      auVar144._2_8_ = auVar301._8_8_;
      auVar144._0_2_ = auVar521._2_2_;
      auVar144._10_6_ = 0;
      auVar311._0_2_ = auVar356._0_2_;
      auVar443._12_4_ = 0;
      auVar443._0_12_ = SUB1612(auVar144 << 0x30, 4);
      auVar443 = auVar443 << 0x20;
      auVar307._0_12_ = auVar443._0_12_;
      auVar307._12_2_ = auVar521._2_2_;
      auVar307._14_2_ = auVar521._10_2_;
      auVar306._12_4_ = auVar307._12_4_;
      auVar306._0_10_ = auVar443._0_10_;
      auVar306._10_2_ = auVar356._10_2_;
      auVar305._10_6_ = auVar306._10_6_;
      auVar305._0_8_ = auVar443._0_8_;
      auVar305._8_2_ = auVar356._2_2_;
      auVar145._2_8_ = auVar305._8_8_;
      auVar145._0_2_ = auVar521._8_2_;
      auVar145._10_6_ = 0;
      auVar304._12_4_ = 0;
      auVar304._0_12_ = SUB1612(auVar145 << 0x30, 4);
      auVar304 = auVar304 << 0x20;
      auVar450._0_12_ = auVar299._0_12_;
      auVar450._12_2_ = auVar299._6_2_;
      auVar450._14_2_ = auVar328._6_2_;
      auVar449._12_4_ = auVar450._12_4_;
      auVar449._0_10_ = auVar299._0_10_;
      auVar449._10_2_ = auVar328._4_2_;
      auVar448._10_6_ = auVar449._10_6_;
      auVar448._0_8_ = auVar299._0_8_;
      auVar448._8_2_ = auVar299._4_2_;
      auVar146._2_8_ = auVar448._8_8_;
      auVar146._0_2_ = auVar328._2_2_;
      auVar146._10_6_ = 0;
      auVar458._0_2_ = auVar299._0_2_;
      auVar447._12_4_ = 0;
      auVar447._0_12_ = SUB1612(auVar146 << 0x30, 4);
      auVar447 = auVar447 << 0x20;
      auVar310._0_12_ = auVar304._0_12_;
      auVar310._12_2_ = auVar521._8_2_;
      auVar310._14_2_ = auVar521._12_2_;
      auVar309._12_4_ = auVar310._12_4_;
      auVar309._0_10_ = auVar304._0_10_;
      auVar309._10_2_ = auVar521._4_2_;
      auVar308._10_6_ = auVar309._10_6_;
      auVar308._0_8_ = auVar304._0_8_;
      auVar308._8_2_ = auVar521._0_2_;
      auVar311._8_8_ = auVar308._8_8_;
      auVar311._6_2_ = auVar356._12_2_;
      auVar311._4_2_ = auVar356._8_2_;
      auVar311._2_2_ = auVar356._4_2_;
      auVar454._0_12_ = auVar447._0_12_;
      auVar454._12_2_ = auVar328._2_2_;
      auVar454._14_2_ = auVar328._10_2_;
      auVar453._12_4_ = auVar454._12_4_;
      auVar453._0_10_ = auVar447._0_10_;
      auVar453._10_2_ = auVar299._10_2_;
      auVar452._10_6_ = auVar453._10_6_;
      auVar452._0_8_ = auVar447._0_8_;
      auVar452._8_2_ = auVar299._2_2_;
      auVar147._2_8_ = auVar452._8_8_;
      auVar147._0_2_ = auVar328._8_2_;
      auVar147._10_6_ = 0;
      auVar451._12_4_ = 0;
      auVar451._0_12_ = SUB1612(auVar147 << 0x30, 4);
      auVar451 = auVar451 << 0x20;
      auVar311 = auVar311 & __LC6;
      auVar457._0_12_ = auVar451._0_12_;
      auVar457._12_2_ = auVar328._8_2_;
      auVar457._14_2_ = auVar328._12_2_;
      auVar456._12_4_ = auVar457._12_4_;
      auVar456._0_10_ = auVar451._0_10_;
      auVar456._10_2_ = auVar328._4_2_;
      auVar455._10_6_ = auVar456._10_6_;
      auVar455._0_8_ = auVar451._0_8_;
      auVar455._8_2_ = auVar328._0_2_;
      auVar458._8_8_ = auVar455._8_8_;
      auVar458._6_2_ = auVar299._12_2_;
      auVar458._4_2_ = auVar299._8_2_;
      auVar458._2_2_ = auVar299._4_2_;
      auVar458 = auVar458 & __LC6;
      iVar282 = iVar324 * iVar254;
      sVar53 = auVar311._0_2_;
      sVar62 = auVar311._2_2_;
      sVar50 = auVar311._4_2_;
      sVar55 = auVar311._6_2_;
      sVar59 = auVar311._8_2_;
      sVar63 = auVar311._10_2_;
      sVar67 = auVar311._12_2_;
      sVar54 = auVar311._14_2_;
      cVar253 = ( 0 < sVar54 ) * ( sVar54 < 0x100 ) * auVar311[0xe] - ( 0xff < sVar54 );
      sVar54 = auVar458._0_2_;
      bVar223 = ( 0 < sVar54 ) * ( sVar54 < 0x100 ) * auVar458[0] - ( 0xff < sVar54 );
      uVar347 = CONCAT11(bVar223, cVar253);
      sVar54 = auVar458._2_2_;
      bVar40 = ( 0 < sVar54 ) * ( sVar54 < 0x100 ) * auVar458[2] - ( 0xff < sVar54 );
      uVar181 = CONCAT12(bVar40, uVar347);
      sVar54 = auVar458._4_2_;
      bVar41 = ( 0 < sVar54 ) * ( sVar54 < 0x100 ) * auVar458[4] - ( 0xff < sVar54 );
      uVar262 = CONCAT13(bVar41, uVar181);
      sVar54 = auVar458._6_2_;
      bVar42 = ( 0 < sVar54 ) * ( sVar54 < 0x100 ) * auVar458[6] - ( 0xff < sVar54 );
      uVar201 = CONCAT14(bVar42, uVar262);
      sVar54 = auVar458._8_2_;
      bVar43 = ( 0 < sVar54 ) * ( sVar54 < 0x100 ) * auVar458[8] - ( 0xff < sVar54 );
      auVar217[5] = bVar43;
      auVar217._0_5_ = uVar201;
      sVar71 = auVar458._10_2_;
      sVar73 = auVar458._12_2_;
      sVar76 = auVar458._14_2_;
      iVar254 = iVar254 * uVar264;
      iVar324 = iVar324 * iVar260;
      iVar349 = (int)( ( auVar499._8_8_ & 0xffffffff ) * (ulong)SUB164(__LC12, 8) );
      iVar258 = (int)( ( SUB168(__LC12, 8) & 0xffffffff ) * (ulong)uVar264 );
      iVar234 = (int)( ( auVar499._8_8_ >> 0x20 ) * (ulong)uVar514 );
      auVar515._0_4_ = iVar255 + iVar282 >> 2;
      auVar515._4_4_ = iVar255 + iVar324 >> 2;
      auVar515._8_4_ = iVar255 + iVar349 >> 2;
      auVar515._12_4_ = iVar255 + iVar234 >> 2;
      auVar506._0_4_ = iVar280 + iVar282 + iVar255 >> 2;
      auVar506._4_4_ = iVar280 + iVar324 + iVar255 >> 2;
      auVar506._8_4_ = iVar280 + iVar349 + iVar255 >> 2;
      auVar506._12_4_ = iVar280 + iVar234 + iVar255 >> 2;
      auVar459._0_4_ = iVar275 + iVar282 + iVar255 >> 2;
      auVar459._4_4_ = iVar275 + iVar324 + iVar255 >> 2;
      auVar459._8_4_ = iVar275 + iVar349 + iVar255 >> 2;
      auVar459._12_4_ = iVar275 + iVar234 + iVar255 >> 2;
      auVar443 = auVar515 ^ auVar357;
      auVar522._0_4_ = auVar443._0_4_ >> 0x1f;
      auVar522._4_4_ = auVar443._4_4_ >> 0x1f;
      auVar522._8_4_ = auVar443._8_4_ >> 0x1f;
      auVar522._12_4_ = auVar443._12_4_ >> 0x1f;
      auVar481._0_4_ = iVar278 + iVar282 + iVar255 >> 2;
      auVar481._4_4_ = iVar278 + iVar324 + iVar255 >> 2;
      auVar481._8_4_ = iVar278 + iVar349 + iVar255 >> 2;
      auVar481._12_4_ = iVar278 + iVar234 + iVar255 >> 2;
      auVar329._0_4_ = -(uint)(__LC15 < auVar515._0_4_ - __LC14);
      auVar329._4_4_ = -(uint)(_UNK_00106cb4 < auVar515._4_4_ - _UNK_00106ca4);
      auVar329._8_4_ = -(uint)(_UNK_00106cb8 < auVar515._8_4_ - _UNK_00106ca8);
      auVar329._12_4_ = -(uint)(_UNK_00106cbc < auVar515._12_4_ - _UNK_00106cac);
      auVar443 = ~auVar329 & auVar515 | auVar522 & auVar329;
      auVar356 = auVar506 ^ auVar357;
      auVar516._0_4_ = -(uint)(__LC15 < auVar506._0_4_ - __LC14);
      auVar516._4_4_ = -(uint)(_UNK_00106cb4 < auVar506._4_4_ - _UNK_00106ca4);
      auVar516._8_4_ = -(uint)(_UNK_00106cb8 < auVar506._8_4_ - _UNK_00106ca8);
      auVar516._12_4_ = -(uint)(_UNK_00106cbc < auVar506._12_4_ - _UNK_00106cac);
      auVar523._0_4_ = auVar356._0_4_ >> 0x1f;
      auVar523._4_4_ = auVar356._4_4_ >> 0x1f;
      auVar523._8_4_ = auVar356._8_4_ >> 0x1f;
      auVar523._12_4_ = auVar356._12_4_ >> 0x1f;
      auVar328 = auVar523 & auVar516 | ~auVar516 & auVar506;
      auVar356 = auVar459 ^ auVar357;
      auVar507._0_4_ = -(uint)(__LC15 < auVar459._0_4_ - __LC14);
      auVar507._4_4_ = -(uint)(_UNK_00106cb4 < auVar459._4_4_ - _UNK_00106ca4);
      auVar507._8_4_ = -(uint)(_UNK_00106cb8 < auVar459._8_4_ - _UNK_00106ca8);
      auVar507._12_4_ = -(uint)(_UNK_00106cbc < auVar459._12_4_ - _UNK_00106cac);
      auVar517._0_4_ = auVar356._0_4_ >> 0x1f;
      auVar517._4_4_ = auVar356._4_4_ >> 0x1f;
      auVar517._8_4_ = auVar356._8_4_ >> 0x1f;
      auVar517._12_4_ = auVar356._12_4_ >> 0x1f;
      auVar356 = ~auVar507 & auVar459 | auVar517 & auVar507;
      auVar508._0_4_ = -(uint)(__LC15 < auVar481._0_4_ - __LC14);
      auVar508._4_4_ = -(uint)(_UNK_00106cb4 < auVar481._4_4_ - _UNK_00106ca4);
      auVar508._8_4_ = -(uint)(_UNK_00106cb8 < auVar481._8_4_ - _UNK_00106ca8);
      auVar508._12_4_ = -(uint)(_UNK_00106cbc < auVar481._12_4_ - _UNK_00106cac);
      auVar299 = auVar481 ^ auVar357;
      auVar518._0_4_ = auVar299._0_4_ >> 0x1f;
      auVar518._4_4_ = auVar299._4_4_ >> 0x1f;
      auVar518._8_4_ = auVar299._8_4_ >> 0x1f;
      auVar518._12_4_ = auVar299._12_4_ >> 0x1f;
      iVar234 = iVar288 * 2;
      iVar255 = iVar288 * 3;
      auVar333._0_12_ = auVar443._0_12_;
      auVar333._12_2_ = auVar443._6_2_;
      auVar333._14_2_ = auVar328._6_2_;
      auVar332._12_4_ = auVar333._12_4_;
      auVar332._0_10_ = auVar443._0_10_;
      auVar332._10_2_ = auVar328._4_2_;
      auVar331._10_6_ = auVar332._10_6_;
      auVar331._0_8_ = auVar443._0_8_;
      auVar331._8_2_ = auVar443._4_2_;
      auVar148._2_8_ = auVar331._8_8_;
      auVar148._0_2_ = auVar328._2_2_;
      auVar148._10_6_ = 0;
      auVar341._0_2_ = auVar443._0_2_;
      auVar330._12_4_ = 0;
      auVar330._0_12_ = SUB1612(auVar148 << 0x30, 4);
      auVar330 = auVar330 << 0x20;
      auVar299 = ~auVar508 & auVar481 | auVar518 & auVar508;
      auVar337._0_12_ = auVar330._0_12_;
      auVar337._12_2_ = auVar328._2_2_;
      auVar337._14_2_ = auVar328._10_2_;
      auVar336._12_4_ = auVar337._12_4_;
      auVar336._0_10_ = auVar330._0_10_;
      auVar336._10_2_ = auVar443._10_2_;
      auVar335._10_6_ = auVar336._10_6_;
      auVar335._0_8_ = auVar330._0_8_;
      auVar335._8_2_ = auVar443._2_2_;
      auVar149._2_8_ = auVar335._8_8_;
      auVar149._0_2_ = auVar328._8_2_;
      auVar149._10_6_ = 0;
      auVar334._12_4_ = 0;
      auVar334._0_12_ = SUB1612(auVar149 << 0x30, 4);
      auVar334 = auVar334 << 0x20;
      auVar463._0_12_ = auVar356._0_12_;
      auVar463._12_2_ = auVar356._6_2_;
      auVar463._14_2_ = auVar299._6_2_;
      auVar462._12_4_ = auVar463._12_4_;
      auVar462._0_10_ = auVar356._0_10_;
      auVar462._10_2_ = auVar299._4_2_;
      auVar461._10_6_ = auVar462._10_6_;
      auVar461._0_8_ = auVar356._0_8_;
      auVar461._8_2_ = auVar356._4_2_;
      auVar150._2_8_ = auVar461._8_8_;
      auVar150._0_2_ = auVar299._2_2_;
      auVar150._10_6_ = 0;
      auVar471._0_2_ = auVar356._0_2_;
      auVar460._12_4_ = 0;
      auVar460._0_12_ = SUB1612(auVar150 << 0x30, 4);
      auVar460 = auVar460 << 0x20;
      auVar340._0_12_ = auVar334._0_12_;
      auVar340._12_2_ = auVar328._8_2_;
      auVar340._14_2_ = auVar328._12_2_;
      auVar339._12_4_ = auVar340._12_4_;
      auVar339._0_10_ = auVar334._0_10_;
      auVar339._10_2_ = auVar328._4_2_;
      auVar338._10_6_ = auVar339._10_6_;
      auVar338._0_8_ = auVar334._0_8_;
      auVar338._8_2_ = auVar328._0_2_;
      auVar341._8_8_ = auVar338._8_8_;
      auVar341._6_2_ = auVar443._12_2_;
      auVar341._4_2_ = auVar443._8_2_;
      auVar341._2_2_ = auVar443._4_2_;
      auVar467._0_12_ = auVar460._0_12_;
      auVar467._12_2_ = auVar299._2_2_;
      auVar467._14_2_ = auVar299._10_2_;
      auVar466._12_4_ = auVar467._12_4_;
      auVar466._0_10_ = auVar460._0_10_;
      auVar466._10_2_ = auVar356._10_2_;
      auVar465._10_6_ = auVar466._10_6_;
      auVar465._0_8_ = auVar460._0_8_;
      auVar465._8_2_ = auVar356._2_2_;
      auVar151._2_8_ = auVar465._8_8_;
      auVar151._0_2_ = auVar299._8_2_;
      auVar151._10_6_ = 0;
      auVar464._12_4_ = 0;
      auVar464._0_12_ = SUB1612(auVar151 << 0x30, 4);
      auVar464 = auVar464 << 0x20;
      auVar341 = auVar341 & __LC6;
      auVar470._0_12_ = auVar464._0_12_;
      auVar470._12_2_ = auVar299._8_2_;
      auVar470._14_2_ = auVar299._12_2_;
      auVar469._12_4_ = auVar470._12_4_;
      auVar469._0_10_ = auVar464._0_10_;
      auVar469._10_2_ = auVar299._4_2_;
      auVar468._10_6_ = auVar469._10_6_;
      auVar468._0_8_ = auVar464._0_8_;
      auVar468._8_2_ = auVar299._0_2_;
      auVar471._8_8_ = auVar468._8_8_;
      auVar471._6_2_ = auVar356._12_2_;
      auVar471._4_2_ = auVar356._8_2_;
      auVar471._2_2_ = auVar356._4_2_;
      auVar471 = auVar471 & __LC6;
      sVar54 = auVar341._0_2_;
      sVar66 = auVar341._2_2_;
      sVar51 = auVar341._4_2_;
      sVar56 = auVar341._6_2_;
      sVar60 = auVar341._8_2_;
      sVar64 = auVar341._10_2_;
      sVar68 = auVar341._12_2_;
      sVar58 = auVar341._14_2_;
      cVar271 = ( 0 < sVar58 ) * ( sVar58 < 0x100 ) * auVar341[0xe] - ( 0xff < sVar58 );
      sVar58 = auVar471._0_2_;
      bVar44 = ( 0 < sVar58 ) * ( sVar58 < 0x100 ) * auVar471[0] - ( 0xff < sVar58 );
      uVar381 = CONCAT11(bVar44, cVar271);
      sVar58 = auVar471._2_2_;
      bVar45 = ( 0 < sVar58 ) * ( sVar58 < 0x100 ) * auVar471[2] - ( 0xff < sVar58 );
      uVar182 = CONCAT12(bVar45, uVar381);
      sVar58 = auVar471._4_2_;
      bVar46 = ( 0 < sVar58 ) * ( sVar58 < 0x100 ) * auVar471[4] - ( 0xff < sVar58 );
      uVar263 = CONCAT13(bVar46, uVar182);
      sVar58 = auVar471._6_2_;
      bVar47 = ( 0 < sVar58 ) * ( sVar58 < 0x100 ) * auVar471[6] - ( 0xff < sVar58 );
      uVar202 = CONCAT14(bVar47, uVar263);
      sVar58 = auVar471._8_2_;
      bVar48 = ( 0 < sVar58 ) * ( sVar58 < 0x100 ) * auVar471[8] - ( 0xff < sVar58 );
      auVar216[5] = bVar48;
      auVar216._0_5_ = uVar202;
      sVar72 = auVar471._10_2_;
      sVar74 = auVar471._12_2_;
      sVar77 = auVar471._14_2_;
      sStack_2cc = (short)( (ulong)uVar210 >> 0x28 );
      iVar260 = uVar264 * iVar260;
      iVar275 = uVar264 * uVar514;
      sStack_2ec = (short)( (ulong)uVar215 >> 0x28 );
      uStack_2e6 = (ushort)bVar33;
      uStack_2e4 = (ushort)bVar34;
      uStack_2e2 = (ushort)bVar35;
      uStack_2e0 = (ushort)bVar36;
      uStack_2de = (ushort)bVar37;
      uStack_2dc = (ushort)bVar38;
      uStack_2da = (ushort)bVar39;
      auVar482._0_4_ = iVar235 + iVar254 >> 2;
      auVar482._4_4_ = iVar235 + iVar260 >> 2;
      auVar482._8_4_ = iVar235 + iVar258 >> 2;
      auVar482._12_4_ = iVar235 + iVar275 >> 2;
      sStack_2bc = (short)( (ulong)uVar208 >> 0x28 );
      auVar509._0_4_ = iVar288 + iVar254 + iVar235 >> 2;
      auVar509._4_4_ = iVar288 + iVar260 + iVar235 >> 2;
      auVar509._8_4_ = iVar288 + iVar258 + iVar235 >> 2;
      auVar509._12_4_ = iVar288 + iVar275 + iVar235 >> 2;
      auVar472._0_4_ = iVar234 + iVar254 + iVar235 >> 2;
      auVar472._4_4_ = iVar234 + iVar260 + iVar235 >> 2;
      auVar472._8_4_ = iVar234 + iVar258 + iVar235 >> 2;
      auVar472._12_4_ = iVar234 + iVar275 + iVar235 >> 2;
      auVar443 = auVar482 ^ auVar357;
      auVar511._0_4_ = auVar443._0_4_ >> 0x1f;
      auVar511._4_4_ = auVar443._4_4_ >> 0x1f;
      auVar511._8_4_ = auVar443._8_4_ >> 0x1f;
      auVar511._12_4_ = auVar443._12_4_ >> 0x1f;
      auVar510._0_4_ = iVar235 + iVar254 + iVar255 >> 2;
      auVar510._4_4_ = iVar235 + iVar260 + iVar255 >> 2;
      auVar510._8_4_ = iVar235 + iVar258 + iVar255 >> 2;
      auVar510._12_4_ = iVar235 + iVar275 + iVar255 >> 2;
      auVar417._0_4_ = -(uint)(__LC15 < auVar482._0_4_ - __LC14);
      auVar417._4_4_ = -(uint)(_UNK_00106cb4 < auVar482._4_4_ - _UNK_00106ca4);
      auVar417._8_4_ = -(uint)(_UNK_00106cb8 < auVar482._8_4_ - _UNK_00106ca8);
      auVar417._12_4_ = -(uint)(_UNK_00106cbc < auVar482._12_4_ - _UNK_00106cac);
      auVar443 = ~auVar417 & auVar482 | auVar511 & auVar417;
      auVar356 = auVar509 ^ auVar357;
      auVar512._0_4_ = auVar356._0_4_ >> 0x1f;
      auVar512._4_4_ = auVar356._4_4_ >> 0x1f;
      auVar512._8_4_ = auVar356._8_4_ >> 0x1f;
      auVar512._12_4_ = auVar356._12_4_ >> 0x1f;
      auVar418._0_4_ = -(uint)(__LC15 < auVar509._0_4_ - __LC14);
      auVar418._4_4_ = -(uint)(_UNK_00106cb4 < auVar509._4_4_ - _UNK_00106ca4);
      auVar418._8_4_ = -(uint)(_UNK_00106cb8 < auVar509._8_4_ - _UNK_00106ca8);
      auVar418._12_4_ = -(uint)(_UNK_00106cbc < auVar509._12_4_ - _UNK_00106cac);
      auVar356 = ~auVar418 & auVar509 | auVar512 & auVar418;
      auVar299 = auVar472 ^ auVar357;
      auVar513._0_4_ = auVar299._0_4_ >> 0x1f;
      auVar513._4_4_ = auVar299._4_4_ >> 0x1f;
      auVar513._8_4_ = auVar299._8_4_ >> 0x1f;
      auVar513._12_4_ = auVar299._12_4_ >> 0x1f;
      auVar357 = auVar357 ^ auVar510;
      auVar358._0_4_ = auVar357._0_4_ >> 0x1f;
      auVar358._4_4_ = auVar357._4_4_ >> 0x1f;
      auVar358._8_4_ = auVar357._8_4_ >> 0x1f;
      auVar358._12_4_ = auVar357._12_4_ >> 0x1f;
      auVar419._0_4_ = -(uint)(__LC15 < auVar472._0_4_ - __LC14);
      auVar419._4_4_ = -(uint)(_UNK_00106cb4 < auVar472._4_4_ - _UNK_00106ca4);
      auVar419._8_4_ = -(uint)(_UNK_00106cb8 < auVar472._8_4_ - _UNK_00106ca8);
      auVar419._12_4_ = -(uint)(_UNK_00106cbc < auVar472._12_4_ - _UNK_00106cac);
      auVar299 = ~auVar419 & auVar472 | auVar513 & auVar419;
      auVar473._0_4_ = -(uint)(__LC15 < auVar510._0_4_ - __LC14);
      auVar473._4_4_ = -(uint)(_UNK_00106cb4 < auVar510._4_4_ - _UNK_00106ca4);
      auVar473._8_4_ = -(uint)(_UNK_00106cb8 < auVar510._8_4_ - _UNK_00106ca8);
      auVar473._12_4_ = -(uint)(_UNK_00106cbc < auVar510._12_4_ - _UNK_00106cac);
      auVar328 = ~auVar473 & auVar510 | auVar358 & auVar473;
      auVar486._0_12_ = auVar443._0_12_;
      auVar486._12_2_ = auVar443._6_2_;
      auVar486._14_2_ = auVar356._6_2_;
      auVar485._12_4_ = auVar486._12_4_;
      auVar485._0_10_ = auVar443._0_10_;
      auVar485._10_2_ = auVar356._4_2_;
      auVar484._10_6_ = auVar485._10_6_;
      auVar484._0_8_ = auVar443._0_8_;
      auVar484._8_2_ = auVar443._4_2_;
      auVar152._2_8_ = auVar484._8_8_;
      auVar152._0_2_ = auVar356._2_2_;
      auVar152._10_6_ = 0;
      auVar494._0_2_ = auVar443._0_2_;
      auVar483._12_4_ = 0;
      auVar483._0_12_ = SUB1612(auVar152 << 0x30, 4);
      auVar483 = auVar483 << 0x20;
      auVar490._0_12_ = auVar483._0_12_;
      auVar490._12_2_ = auVar356._2_2_;
      auVar490._14_2_ = auVar356._10_2_;
      auVar489._12_4_ = auVar490._12_4_;
      auVar489._0_10_ = auVar483._0_10_;
      auVar489._10_2_ = auVar443._10_2_;
      auVar488._10_6_ = auVar489._10_6_;
      auVar488._0_8_ = auVar483._0_8_;
      auVar488._8_2_ = auVar443._2_2_;
      auVar153._2_8_ = auVar488._8_8_;
      auVar153._0_2_ = auVar356._8_2_;
      auVar153._10_6_ = 0;
      auVar487._12_4_ = 0;
      auVar487._0_12_ = SUB1612(auVar153 << 0x30, 4);
      auVar487 = auVar487 << 0x20;
      auVar423._0_12_ = auVar299._0_12_;
      auVar423._12_2_ = auVar299._6_2_;
      auVar423._14_2_ = auVar328._6_2_;
      auVar422._12_4_ = auVar423._12_4_;
      auVar422._0_10_ = auVar299._0_10_;
      auVar422._10_2_ = auVar328._4_2_;
      auVar421._10_6_ = auVar422._10_6_;
      auVar421._0_8_ = auVar299._0_8_;
      auVar421._8_2_ = auVar299._4_2_;
      auVar154._2_8_ = auVar421._8_8_;
      auVar154._0_2_ = auVar328._2_2_;
      auVar154._10_6_ = 0;
      auVar431._0_2_ = auVar299._0_2_;
      auVar420._12_4_ = 0;
      auVar420._0_12_ = SUB1612(auVar154 << 0x30, 4);
      auVar420 = auVar420 << 0x20;
      auVar493._0_12_ = auVar487._0_12_;
      auVar493._12_2_ = auVar356._8_2_;
      auVar493._14_2_ = auVar356._12_2_;
      auVar492._12_4_ = auVar493._12_4_;
      auVar492._0_10_ = auVar487._0_10_;
      auVar492._10_2_ = auVar356._4_2_;
      auVar491._10_6_ = auVar492._10_6_;
      auVar491._0_8_ = auVar487._0_8_;
      auVar491._8_2_ = auVar356._0_2_;
      auVar494._8_8_ = auVar491._8_8_;
      auVar494._6_2_ = auVar443._12_2_;
      auVar494._4_2_ = auVar443._8_2_;
      auVar494._2_2_ = auVar443._4_2_;
      auVar427._0_12_ = auVar420._0_12_;
      auVar427._12_2_ = auVar328._2_2_;
      auVar427._14_2_ = auVar328._10_2_;
      auVar426._12_4_ = auVar427._12_4_;
      auVar426._0_10_ = auVar420._0_10_;
      auVar426._10_2_ = auVar299._10_2_;
      auVar425._10_6_ = auVar426._10_6_;
      auVar425._0_8_ = auVar420._0_8_;
      auVar425._8_2_ = auVar299._2_2_;
      auVar155._2_8_ = auVar425._8_8_;
      auVar155._0_2_ = auVar328._8_2_;
      auVar155._10_6_ = 0;
      auVar424._12_4_ = 0;
      auVar424._0_12_ = SUB1612(auVar155 << 0x30, 4);
      auVar424 = auVar424 << 0x20;
      auVar494 = auVar494 & __LC6;
      auVar430._0_12_ = auVar424._0_12_;
      auVar430._12_2_ = auVar328._8_2_;
      auVar430._14_2_ = auVar328._12_2_;
      auVar429._12_4_ = auVar430._12_4_;
      auVar429._0_10_ = auVar424._0_10_;
      auVar429._10_2_ = auVar328._4_2_;
      auVar428._10_6_ = auVar429._10_6_;
      auVar428._0_8_ = auVar424._0_8_;
      auVar428._8_2_ = auVar328._0_2_;
      auVar431._8_8_ = auVar428._8_8_;
      auVar431._6_2_ = auVar299._12_2_;
      auVar431._4_2_ = auVar299._8_2_;
      auVar431._2_2_ = auVar299._4_2_;
      auVar431 = auVar431 & __LC6;
      sVar58 = auVar494._0_2_;
      sVar49 = auVar494._2_2_;
      sVar52 = auVar494._4_2_;
      sVar57 = auVar494._6_2_;
      sVar61 = auVar494._8_2_;
      sVar65 = auVar494._10_2_;
      sVar69 = auVar494._12_2_;
      sVar70 = auVar494._14_2_;
      cVar274 = ( 0 < sVar70 ) * ( sVar70 < 0x100 ) * auVar494[0xe] - ( 0xff < sVar70 );
      sVar70 = auVar431._0_2_;
      bVar36 = ( 0 < sVar70 ) * ( sVar70 < 0x100 ) * auVar431[0] - ( 0xff < sVar70 );
      uVar382 = CONCAT11(bVar36, cVar274);
      sVar70 = auVar431._2_2_;
      bVar35 = ( 0 < sVar70 ) * ( sVar70 < 0x100 ) * auVar431[2] - ( 0xff < sVar70 );
      uVar189 = CONCAT12(bVar35, uVar382);
      sVar70 = auVar431._4_2_;
      bVar34 = ( 0 < sVar70 ) * ( sVar70 < 0x100 ) * auVar431[4] - ( 0xff < sVar70 );
      uVar264 = CONCAT13(bVar34, uVar189);
      sVar70 = auVar431._6_2_;
      bVar33 = ( 0 < sVar70 ) * ( sVar70 < 0x100 ) * auVar431[6] - ( 0xff < sVar70 );
      uVar206 = CONCAT14(bVar33, uVar264);
      sVar70 = auVar431._8_2_;
      bVar38 = ( 0 < sVar70 ) * ( sVar70 < 0x100 ) * auVar431[8] - ( 0xff < sVar70 );
      auVar219[5] = bVar38;
      auVar219._0_5_ = uVar206;
      sVar70 = auVar431._10_2_;
      sVar75 = auVar431._12_2_;
      sVar78 = auVar431._14_2_;
      auVar216._6_8_ = 0;
      auVar84[0xe] = cVar271;
      auVar84._0_14_ = auVar216 << 0x38;
      uVar215 = CONCAT26(auVar84._13_2_, CONCAT15(( 0 < sVar68 ) * ( sVar68 < 0x100 ) * auVar341[0xc] - ( 0xff < sVar68 ), uVar202));
      auVar207._4_8_ = 0;
      auVar207._0_4_ = uVar263;
      auVar102._12_3_ = ( int3 )((ulong)uVar215 >> 0x28);
      auVar102._0_12_ = auVar207 << 0x38;
      uVar208 = CONCAT44(auVar102._11_4_, CONCAT13(( 0 < sVar64 ) * ( sVar64 < 0x100 ) * auVar341[10] - ( 0xff < sVar64 ), uVar182));
      auVar121._10_5_ = ( int5 )((ulong)uVar208 >> 0x18);
      auVar121._0_10_ = (unkuint10)uVar381 << 0x38;
      uVar296 = CONCAT62(auVar121._9_6_, CONCAT11(( 0 < sVar60 ) * ( sVar60 < 0x100 ) * auVar341[8] - ( 0xff < sVar60 ), cVar271));
      auVar156._7_8_ = 0;
      auVar156._0_7_ = ( uint7 )((ulong)uVar296 >> 8);
      Var128 = CONCAT81(SUB158(auVar156 << 0x40, 7), ( 0 < sVar56 ) * ( sVar56 < 0x100 ) * auVar341[6] - ( 0xff < sVar56 ));
      auVar190._9_6_ = 0;
      auVar190._0_9_ = Var128;
      auVar157._1_10_ = SUB1510(auVar190 << 0x30, 5);
      auVar157[0] = ( 0 < sVar51 ) * ( sVar51 < 0x100 ) * auVar341[4] - ( 0xff < sVar51 );
      auVar191._11_4_ = 0;
      auVar191._0_11_ = auVar157;
      auVar158._1_12_ = SUB1512(auVar191 << 0x20, 3);
      auVar158[0] = ( 0 < sVar66 ) * ( sVar66 < 0x100 ) * auVar341[2] - ( 0xff < sVar66 );
      auVar217._6_8_ = 0;
      auVar85[0xe] = cVar253;
      auVar85._0_14_ = auVar217 << 0x38;
      uVar218 = CONCAT26(auVar85._13_2_, CONCAT15(( 0 < sVar67 ) * ( sVar67 < 0x100 ) * auVar311[0xc] - ( 0xff < sVar67 ), uVar201));
      auVar209._4_8_ = 0;
      auVar209._0_4_ = uVar262;
      auVar103._12_3_ = ( int3 )((ulong)uVar218 >> 0x28);
      auVar103._0_12_ = auVar209 << 0x38;
      uVar210 = CONCAT44(auVar103._11_4_, CONCAT13(( 0 < sVar63 ) * ( sVar63 < 0x100 ) * auVar311[10] - ( 0xff < sVar63 ), uVar181));
      auVar122._10_5_ = ( int5 )((ulong)uVar210 >> 0x18);
      auVar122._0_10_ = (unkuint10)uVar347 << 0x38;
      uVar352 = CONCAT62(auVar122._9_6_, CONCAT11(( 0 < sVar59 ) * ( sVar59 < 0x100 ) * auVar311[8] - ( 0xff < sVar59 ), cVar253));
      auVar159._7_8_ = 0;
      auVar159._0_7_ = ( uint7 )((ulong)uVar352 >> 8);
      Var137 = CONCAT81(SUB158(auVar159 << 0x40, 7), ( 0 < sVar55 ) * ( sVar55 < 0x100 ) * auVar311[6] - ( 0xff < sVar55 ));
      auVar192._9_6_ = 0;
      auVar192._0_9_ = Var137;
      auVar160._1_10_ = SUB1510(auVar192 << 0x30, 5);
      auVar160[0] = ( 0 < sVar50 ) * ( sVar50 < 0x100 ) * auVar311[4] - ( 0xff < sVar50 );
      auVar193._11_4_ = 0;
      auVar193._0_11_ = auVar160;
      auVar161._1_12_ = SUB1512(auVar193 << 0x20, 3);
      auVar161[0] = ( 0 < sVar62 ) * ( sVar62 < 0x100 ) * auVar311[2] - ( 0xff < sVar62 );
      auVar394._0_2_ = (ushort)bVar32 - (ushort)bVar44;
      auVar394._2_2_ = uStack_2e6 - bVar45;
      auVar394._4_2_ = uStack_2e4 - bVar46;
      auVar394._6_2_ = uStack_2e2 - bVar47;
      auVar394._8_2_ = uStack_2e0 - bVar48;
      auVar394._10_2_ = uStack_2de - ( byte )(( 0 < sVar72 ) * ( sVar72 < 0x100 ) * auVar471[10] - ( 0xff < sVar72 ));
      auVar394._12_2_ = uStack_2dc - ( byte )(( 0 < sVar74 ) * ( sVar74 < 0x100 ) * auVar471[0xc] - ( 0xff < sVar74 ));
      auVar394._14_2_ = uStack_2da - ( byte )(( 0 < sVar77 ) * ( sVar77 < 0x100 ) * auVar471[0xe] - ( 0xff < sVar77 ));
      auVar500._0_2_ = uVar317 - ( byte )(( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar311[0] - ( 0xff < sVar53 ));
      auVar500._2_2_ = auVar139._0_2_ - auVar161._0_2_;
      auVar500._4_2_ = auVar138._0_2_ - auVar160._0_2_;
      auVar500._6_2_ = sVar384 - (short)Var137;
      auVar500._8_2_ = uVar321 - (short)( (ulong)uVar352 >> 8 );
      auVar500._10_2_ = uVar322 - (short)( (ulong)uVar210 >> 0x18 );
      auVar500._12_2_ = sStack_2ec - (short)( (ulong)uVar218 >> 0x28 );
      auVar500._14_2_ = ( auVar81._13_2_ >> 8 ) - ( auVar85._13_2_ >> 8 );
      auVar502._0_2_ = uVar316 - ( byte )(( 0 < sVar54 ) * ( sVar54 < 0x100 ) * auVar341[0] - ( 0xff < sVar54 ));
      auVar502._2_2_ = auVar134._0_2_ - auVar158._0_2_;
      auVar502._4_2_ = auVar133._0_2_ - auVar157._0_2_;
      auVar502._6_2_ = sVar346 - (short)Var128;
      auVar502._8_2_ = uVar323 - (short)( (ulong)uVar296 >> 8 );
      auVar502._10_2_ = uVar388 - (short)( (ulong)uVar208 >> 0x18 );
      auVar502._12_2_ = sStack_2cc - (short)( (ulong)uVar215 >> 0x28 );
      auVar502._14_2_ = ( auVar80._13_2_ >> 8 ) - ( auVar84._13_2_ >> 8 );
      auVar443 = psllw(auVar394, 2);
      auVar299 = psllw(auVar500, 2);
      auVar342._0_2_ = auVar443._0_2_ + auVar394._0_2_;
      auVar342._2_2_ = auVar443._2_2_ + auVar394._2_2_;
      auVar342._4_2_ = auVar443._4_2_ + auVar394._4_2_;
      auVar342._6_2_ = auVar443._6_2_ + auVar394._6_2_;
      auVar342._8_2_ = auVar443._8_2_ + auVar394._8_2_;
      auVar342._10_2_ = auVar443._10_2_ + auVar394._10_2_;
      auVar342._12_2_ = auVar443._12_2_ + auVar394._12_2_;
      auVar342._14_2_ = auVar443._14_2_ + auVar394._14_2_;
      auVar356 = psllw(auVar502, 2);
      auVar495._0_2_ = auVar299._0_2_ + auVar500._0_2_;
      auVar495._2_2_ = auVar299._2_2_ + auVar500._2_2_;
      auVar495._4_2_ = auVar299._4_2_ + auVar500._4_2_;
      auVar495._6_2_ = auVar299._6_2_ + auVar500._6_2_;
      auVar495._8_2_ = auVar299._8_2_ + auVar500._8_2_;
      auVar495._10_2_ = auVar299._10_2_ + auVar500._10_2_;
      auVar495._12_2_ = auVar299._12_2_ + auVar500._12_2_;
      auVar495._14_2_ = auVar299._14_2_ + auVar500._14_2_;
      auVar443 = psllw(auVar342, 2);
      auVar299 = psllw(auVar495, 2);
      auVar474._0_2_ = auVar356._0_2_ + auVar502._0_2_;
      auVar474._2_2_ = auVar356._2_2_ + auVar502._2_2_;
      auVar474._4_2_ = auVar356._4_2_ + auVar502._4_2_;
      auVar474._6_2_ = auVar356._6_2_ + auVar502._6_2_;
      auVar474._8_2_ = auVar356._8_2_ + auVar502._8_2_;
      auVar474._10_2_ = auVar356._10_2_ + auVar502._10_2_;
      auVar474._12_2_ = auVar356._12_2_ + auVar502._12_2_;
      auVar474._14_2_ = auVar356._14_2_ + auVar502._14_2_;
      auVar343._0_2_ = auVar443._0_2_ - auVar394._0_2_;
      auVar343._2_2_ = auVar443._2_2_ - auVar394._2_2_;
      auVar343._4_2_ = auVar443._4_2_ - auVar394._4_2_;
      auVar343._6_2_ = auVar443._6_2_ - auVar394._6_2_;
      auVar343._8_2_ = auVar443._8_2_ - auVar394._8_2_;
      auVar343._10_2_ = auVar443._10_2_ - auVar394._10_2_;
      auVar343._12_2_ = auVar443._12_2_ - auVar394._12_2_;
      auVar343._14_2_ = auVar443._14_2_ - auVar394._14_2_;
      auVar443 = psllw(auVar474, 2);
      auVar496._0_2_ = auVar299._0_2_ - auVar500._0_2_;
      auVar496._2_2_ = auVar299._2_2_ - auVar500._2_2_;
      auVar496._4_2_ = auVar299._4_2_ - auVar500._4_2_;
      auVar496._6_2_ = auVar299._6_2_ - auVar500._6_2_;
      auVar496._8_2_ = auVar299._8_2_ - auVar500._8_2_;
      auVar496._10_2_ = auVar299._10_2_ - auVar500._10_2_;
      auVar496._12_2_ = auVar299._12_2_ - auVar500._12_2_;
      auVar496._14_2_ = auVar299._14_2_ - auVar500._14_2_;
      uStack_306 = (ushort)bVar26;
      uStack_304 = (ushort)bVar27;
      uStack_302 = (ushort)bVar8;
      uStack_300 = (ushort)bVar28;
      uStack_2fe = (ushort)bVar29;
      uStack_2fc = (ushort)bVar30;
      uStack_2fa = (ushort)bVar31;
      auVar328 = psllw(auVar496, 1);
      auVar356 = psllw(auVar343, 2);
      auVar475._0_2_ = auVar443._0_2_ - auVar502._0_2_;
      auVar475._2_2_ = auVar443._2_2_ - auVar502._2_2_;
      auVar475._4_2_ = auVar443._4_2_ - auVar502._4_2_;
      auVar475._6_2_ = auVar443._6_2_ - auVar502._6_2_;
      auVar475._8_2_ = auVar443._8_2_ - auVar502._8_2_;
      auVar475._10_2_ = auVar443._10_2_ - auVar502._10_2_;
      auVar475._12_2_ = auVar443._12_2_ - auVar502._12_2_;
      auVar475._14_2_ = auVar443._14_2_ - auVar502._14_2_;
      auVar395._0_2_ = (ushort)bVar25 - (ushort)bVar223;
      auVar395._2_2_ = uStack_306 - bVar40;
      auVar395._4_2_ = uStack_304 - bVar41;
      auVar395._6_2_ = uStack_302 - bVar42;
      auVar395._8_2_ = uStack_300 - bVar43;
      auVar395._10_2_ = uStack_2fe - ( byte )(( 0 < sVar71 ) * ( sVar71 < 0x100 ) * auVar458[10] - ( 0xff < sVar71 ));
      auVar395._12_2_ = uStack_2fc - ( byte )(( 0 < sVar73 ) * ( sVar73 < 0x100 ) * auVar458[0xc] - ( 0xff < sVar73 ));
      auVar395._14_2_ = uStack_2fa - ( byte )(( 0 < sVar76 ) * ( sVar76 < 0x100 ) * auVar458[0xe] - ( 0xff < sVar76 ));
      auVar299 = psllw(auVar475, 2);
      auVar443 = psllw(auVar395, 2);
      auVar219._6_8_ = 0;
      auVar86[0xe] = cVar274;
      auVar86._0_14_ = auVar219 << 0x38;
      uVar208 = CONCAT26(auVar86._13_2_, CONCAT15(( 0 < sVar69 ) * ( sVar69 < 0x100 ) * auVar494[0xc] - ( 0xff < sVar69 ), uVar206));
      auVar211._4_8_ = 0;
      auVar211._0_4_ = uVar264;
      auVar104._12_3_ = ( int3 )((ulong)uVar208 >> 0x28);
      auVar104._0_12_ = auVar211 << 0x38;
      uVar352 = CONCAT44(auVar104._11_4_, CONCAT13(( 0 < sVar65 ) * ( sVar65 < 0x100 ) * auVar494[10] - ( 0xff < sVar65 ), uVar189));
      auVar123._10_5_ = ( int5 )((ulong)uVar352 >> 0x18);
      auVar123._0_10_ = (unkuint10)uVar382 << 0x38;
      uVar296 = CONCAT62(auVar123._9_6_, CONCAT11(( 0 < sVar61 ) * ( sVar61 < 0x100 ) * auVar494[8] - ( 0xff < sVar61 ), cVar274));
      auVar162._7_8_ = 0;
      auVar162._0_7_ = ( uint7 )((ulong)uVar296 >> 8);
      Var128 = CONCAT81(SUB158(auVar162 << 0x40, 7), ( 0 < sVar57 ) * ( sVar57 < 0x100 ) * auVar494[6] - ( 0xff < sVar57 ));
      auVar194._9_6_ = 0;
      auVar194._0_9_ = Var128;
      auVar163._1_10_ = SUB1510(auVar194 << 0x30, 5);
      auVar163[0] = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar494[4] - ( 0xff < sVar52 );
      auVar195._11_4_ = 0;
      auVar195._0_11_ = auVar163;
      auVar164._1_12_ = SUB1512(auVar195 << 0x20, 3);
      auVar164[0] = ( 0 < sVar49 ) * ( sVar49 < 0x100 ) * auVar494[2] - ( 0xff < sVar49 );
      auVar312._0_2_ = auVar443._0_2_ + auVar395._0_2_;
      auVar312._2_2_ = auVar443._2_2_ + auVar395._2_2_;
      auVar312._4_2_ = auVar443._4_2_ + auVar395._4_2_;
      auVar312._6_2_ = auVar443._6_2_ + auVar395._6_2_;
      auVar312._8_2_ = auVar443._8_2_ + auVar395._8_2_;
      auVar312._10_2_ = auVar443._10_2_ + auVar395._10_2_;
      auVar312._12_2_ = auVar443._12_2_ + auVar395._12_2_;
      auVar312._14_2_ = auVar443._14_2_ + auVar395._14_2_;
      auVar503._0_2_ = uVar286 - ( byte )(( 0 < sVar58 ) * ( sVar58 < 0x100 ) * auVar494[0] - ( 0xff < sVar58 ));
      auVar503._2_2_ = auVar130._0_2_ - auVar164._0_2_;
      auVar503._4_2_ = auVar129._0_2_ - auVar163._0_2_;
      auVar503._6_2_ = sVar319 - (short)Var128;
      auVar503._8_2_ = uVar318 - (short)( (ulong)uVar296 >> 8 );
      auVar503._10_2_ = uVar320 - (short)( (ulong)uVar352 >> 0x18 );
      auVar503._12_2_ = sStack_2bc - (short)( (ulong)uVar208 >> 0x28 );
      auVar503._14_2_ = ( auVar79._13_2_ >> 8 ) - ( auVar86._13_2_ >> 8 );
      auVar443 = psllw(auVar312, 2);
      auVar313._0_2_ = auVar443._0_2_ - auVar395._0_2_;
      auVar313._2_2_ = auVar443._2_2_ - auVar395._2_2_;
      auVar313._4_2_ = auVar443._4_2_ - auVar395._4_2_;
      auVar313._6_2_ = auVar443._6_2_ - auVar395._6_2_;
      auVar313._8_2_ = auVar443._8_2_ - auVar395._8_2_;
      auVar313._10_2_ = auVar443._10_2_ - auVar395._10_2_;
      auVar313._12_2_ = auVar443._12_2_ - auVar395._12_2_;
      auVar313._14_2_ = auVar443._14_2_ - auVar395._14_2_;
      auVar521 = psllw(auVar503, 3);
      auVar443 = psllw(auVar313, 1);
      auVar497._0_2_ = auVar521._0_2_ - auVar503._0_2_;
      auVar497._2_2_ = auVar521._2_2_ - auVar503._2_2_;
      auVar497._4_2_ = auVar521._4_2_ - auVar503._4_2_;
      auVar497._6_2_ = auVar521._6_2_ - auVar503._6_2_;
      auVar497._8_2_ = auVar521._8_2_ - auVar503._8_2_;
      auVar497._10_2_ = auVar521._10_2_ - auVar503._10_2_;
      auVar497._12_2_ = auVar521._12_2_ - auVar503._12_2_;
      auVar497._14_2_ = auVar521._14_2_ - auVar503._14_2_;
      auVar521 = psllw(auVar497, 1);
      uStack_316 = (ushort)bVar18;
      uStack_314 = (ushort)bVar19;
      uStack_312 = (ushort)bVar20;
      uStack_310 = (ushort)bVar21;
      uStack_30e = (ushort)bVar22;
      uStack_30c = (ushort)bVar23;
      uStack_30a = (ushort)bVar24;
      auVar476._0_2_ = auVar299._0_2_ + auVar328._0_2_ + auVar521._0_2_;
      auVar476._2_2_ = auVar299._2_2_ + auVar328._2_2_ + auVar521._2_2_;
      auVar476._4_2_ = auVar299._4_2_ + auVar328._4_2_ + auVar521._4_2_;
      auVar476._6_2_ = auVar299._6_2_ + auVar328._6_2_ + auVar521._6_2_;
      auVar476._8_2_ = auVar299._8_2_ + auVar328._8_2_ + auVar521._8_2_;
      auVar476._10_2_ = auVar299._10_2_ + auVar328._10_2_ + auVar521._10_2_;
      auVar476._12_2_ = auVar299._12_2_ + auVar328._12_2_ + auVar521._12_2_;
      auVar476._14_2_ = auVar299._14_2_ + auVar328._14_2_ + auVar521._14_2_;
      auVar344._0_2_ = (ushort)bVar17 - (ushort)bVar36;
      auVar344._2_2_ = uStack_316 - bVar35;
      auVar344._4_2_ = uStack_314 - bVar34;
      auVar344._6_2_ = uStack_312 - bVar33;
      auVar344._8_2_ = uStack_310 - bVar38;
      auVar344._10_2_ = uStack_30e - ( byte )(( 0 < sVar70 ) * ( sVar70 < 0x100 ) * auVar431[10] - ( 0xff < sVar70 ));
      auVar344._12_2_ = uStack_30c - ( byte )(( 0 < sVar75 ) * ( sVar75 < 0x100 ) * auVar431[0xc] - ( 0xff < sVar75 ));
      auVar344._14_2_ = uStack_30a - ( byte )(( 0 < sVar78 ) * ( sVar78 < 0x100 ) * auVar431[0xe] - ( 0xff < sVar78 ));
      auVar299 = psllw(auVar344, 3);
      auVar328 = pmulhw(auVar476, auVar476);
      auVar359._0_2_ = auVar299._0_2_ - auVar344._0_2_;
      auVar359._2_2_ = auVar299._2_2_ - auVar344._2_2_;
      auVar359._4_2_ = auVar299._4_2_ - auVar344._4_2_;
      auVar359._6_2_ = auVar299._6_2_ - auVar344._6_2_;
      auVar359._8_2_ = auVar299._8_2_ - auVar344._8_2_;
      auVar359._10_2_ = auVar299._10_2_ - auVar344._10_2_;
      auVar359._12_2_ = auVar299._12_2_ - auVar344._12_2_;
      auVar359._14_2_ = auVar299._14_2_ - auVar344._14_2_;
      auVar299 = psllw(auVar359, 1);
      auVar314._0_2_ = auVar443._0_2_ + auVar356._0_2_ + auVar299._0_2_;
      auVar314._2_2_ = auVar443._2_2_ + auVar356._2_2_ + auVar299._2_2_;
      auVar314._4_2_ = auVar443._4_2_ + auVar356._4_2_ + auVar299._4_2_;
      auVar314._6_2_ = auVar443._6_2_ + auVar356._6_2_ + auVar299._6_2_;
      auVar314._8_2_ = auVar443._8_2_ + auVar356._8_2_ + auVar299._8_2_;
      auVar314._10_2_ = auVar443._10_2_ + auVar356._10_2_ + auVar299._10_2_;
      auVar314._12_2_ = auVar443._12_2_ + auVar356._12_2_ + auVar299._12_2_;
      auVar314._14_2_ = auVar443._14_2_ + auVar356._14_2_ + auVar299._14_2_;
      auVar443 = pmulhw(auVar314, auVar314);
      uVar287 = CONCAT22(auVar328._6_2_, auVar476._6_2_ * auVar476._6_2_);
      Var196 = CONCAT64(CONCAT42(uVar287, auVar328._4_2_), CONCAT22(auVar476._4_2_ * auVar476._4_2_, auVar476._6_2_ * auVar476._6_2_));
      auVar165._4_8_ = (long)( (unkuint10)Var196 >> 0x10 );
      auVar165._2_2_ = auVar328._2_2_;
      auVar165._0_2_ = auVar476._2_2_ * auVar476._2_2_;
      auVar345._0_4_ = CONCAT22(auVar328._0_2_, auVar476._0_2_ * auVar476._0_2_);
      auVar345._4_12_ = auVar165;
      uVar390 = CONCAT22(auVar328._8_2_, auVar476._8_2_ * auVar476._8_2_);
      auVar391._0_8_ = CONCAT26(auVar328._10_2_, CONCAT24(auVar476._10_2_ * auVar476._10_2_, uVar390));
      auVar391._8_2_ = auVar476._12_2_ * auVar476._12_2_;
      auVar391._10_2_ = auVar328._12_2_;
      auVar396._12_2_ = auVar476._14_2_ * auVar476._14_2_;
      auVar396._0_12_ = auVar391;
      auVar396._14_2_ = auVar328._14_2_;
      iVar234 = (int)( (unkuint10)Var196 >> 0x10 );
      uVar350 = CONCAT22(auVar443._8_2_, auVar314._8_2_ * auVar314._8_2_);
      auVar354._0_8_ = CONCAT26(auVar443._10_2_, CONCAT24(auVar314._10_2_ * auVar314._10_2_, uVar350));
      auVar354._8_2_ = auVar314._12_2_ * auVar314._12_2_;
      auVar354._10_2_ = auVar443._12_2_;
      auVar360._12_2_ = auVar314._14_2_ * auVar314._14_2_;
      auVar360._0_12_ = auVar354;
      auVar360._14_2_ = auVar443._14_2_;
      uVar348 = CONCAT22(auVar443._6_2_, auVar314._6_2_ * auVar314._6_2_);
      Var196 = CONCAT64(CONCAT42(uVar348, auVar443._4_2_), CONCAT22(auVar314._4_2_ * auVar314._4_2_, auVar314._6_2_ * auVar314._6_2_));
      auVar166._4_8_ = (long)( (unkuint10)Var196 >> 0x10 );
      auVar166._2_2_ = auVar443._2_2_;
      auVar166._0_2_ = auVar314._2_2_ * auVar314._2_2_;
      uVar524 = CONCAT22(auVar443._0_2_, auVar314._0_2_ * auVar314._0_2_);
      auVar432._4_12_ = auVar166;
      auVar501._0_8_ = CONCAT44(-(uint)(iVar234 < 0), iVar234);
      auVar501._8_4_ = uVar287;
      auVar501._12_4_ = -(uint)(auVar328._6_2_ < 0);
      auVar315._0_8_ = auVar345._0_8_;
      auVar315._8_4_ = auVar165._0_4_;
      auVar315._12_4_ = -(uint)(auVar165._0_4_ < 0);
      auVar498._0_8_ = CONCAT44(-(uint)(auVar391._8_4_ < 0), auVar391._8_4_);
      auVar498._8_4_ = auVar396._12_4_;
      auVar498._12_4_ = -(uint)(auVar396._12_4_ < 0);
      auVar397._8_4_ = (int)( (ulong)auVar391._0_8_ >> 0x20 );
      auVar397._0_8_ = auVar391._0_8_;
      auVar397._12_4_ = -(uint)(auVar328._10_2_ < 0);
      iVar234 = (int)( (unkuint10)Var196 >> 0x10 );
      auVar398._0_8_ = CONCAT44(-(uint)(iVar234 < 0), iVar234);
      auVar398._8_4_ = uVar348;
      auVar398._12_4_ = -(uint)(auVar443._6_2_ < 0);
      auVar433._0_8_ = auVar432._0_8_;
      auVar433._8_4_ = auVar166._0_4_;
      auVar433._12_4_ = -(uint)(auVar166._0_4_ < 0);
      auVar361._8_4_ = (int)( (ulong)auVar354._0_8_ >> 0x20 );
      auVar361._0_8_ = auVar354._0_8_;
      auVar361._12_4_ = -(uint)(auVar443._10_2_ < 0);
      auVar399._0_8_ = CONCAT44(-(uint)(auVar354._8_4_ < 0), auVar354._8_4_);
      auVar399._8_4_ = auVar360._12_4_;
      auVar399._12_4_ = -(uint)(auVar360._12_4_ < 0);
      local_398 = CONCAT44(-(uint)(auVar328._0_2_ < 0), auVar345._0_4_) + auVar501._0_8_ + CONCAT44(-(uint)(auVar328._8_2_ < 0), uVar390) + auVar498._0_8_ + CONCAT44(-(uint)(auVar443._0_2_ < 0), uVar524) + auVar398._0_8_ + CONCAT44(-(uint)(auVar443._8_2_ < 0), uVar350) + auVar399._0_8_ + auVar315._8_8_ + auVar501._8_8_ + auVar397._8_8_ + auVar498._8_8_ + auVar433._8_8_ + auVar398._8_8_ + auVar361._8_8_ + auVar399._8_8_;
   }

   puVar270 = (uint*)(ulong)uVar268;
   uVar276 = uVar276 << 0x19 | *(uint*)( &g_flags + (long)(int)( (int)uVar236 >> 1 & 0xfU | (int)uVar272 >> 1 & 0x10U | uVar248 & 0x20 ) * 4 ) | ( uVar249 & 0x40 ) << 0x12 | uVar273 * 2 & 0x7c | uVar267 & 1 | ( uVar261 & 7 ) << 7 | ( uVar261 & 0x18 ) << 8 | ( uVar261 & 0x20 ) << 0xb | ( uVar249 & 0x3f ) << 0x11 | 2;
   uVar249 = ( uVar279 << 6 | uVar256 ) << 0x13;
   uVar248 = uVar259 << 6 | uVar281 << 0xd;
   uVar237 = uVar248 | uVar237;
   uVar239 = CONCAT44(uVar249 >> 0x18 | ( ( uVar237 | uVar249 ) & 0xff0000 ) >> 8 | ( uVar248 & 0xff00 ) << 8 | uVar237 << 0x18, uVar276 >> 0x18 | ( uVar276 & 0xff0000 ) >> 8 | ( uVar276 & 0xff00 ) << 8 | uVar276 << 0x18);
   auVar443 = __LC6;
   if (local_398 != 0) {
      iVar234 = 0;
      uVar248 = 0;
      iVar255 = 0;
      iVar235 = 0;
      local_288 = (undefined1[16])0x0;
      piVar257 = (int*)local_148;
      local_278 = (undefined1[16])0x0;
      local_1c8 = (undefined1[16])0x0;
      local_148 = (undefined1[16])0x0;
      puVar238 = (ushort*)auStack_244;
      while (true) {
         uVar240 = ( ulong )(uVar248 & 2);
         *(uint*)( local_148 + uVar240 * 4 ) = iVar234 + (uint)(byte)puVar238[-2];
         local_1b8[uVar240 - 4] = ( uint ) * (byte*)( (long)puVar238 + -3 ) + iVar235;
         *(uint*)( local_278 + uVar240 * 4 ) = (uint)(byte)puVar238[-1] + iVar255;
         puVar250 = puVar238;
         iVar234 = 1;
         do {
            iVar235 = iVar234 + 1;
            lVar241 = (long)(int)( ( iVar234 >> 1 ) + ( uVar248 & 2 ) );
            *(uint*)( local_148 + lVar241 * 4 ) = *(int*)( local_148 + lVar241 * 4 ) + ( uint )(byte) * puVar250;
            local_1b8[lVar241 + -4] = local_1b8[lVar241 + -4] + ( uint ) * (byte*)( (long)puVar250 + 1 );
            *(uint*)( local_278 + lVar241 * 4 ) = *(int*)( local_278 + lVar241 * 4 ) + (uint)(byte)puVar250[1];
            puVar250 = puVar250 + 2;
            iVar234 = iVar235;
         }
 while ( iVar235 != 4 );
         uVar248 = uVar248 + 1;
         puVar238 = puVar238 + 8;
         if (uVar248 == 4) break;
         uVar240 = ( ulong )(uVar248 & 2);
         iVar234 = *(int*)( local_148 + uVar240 * 4 );
         iVar235 = local_1b8[uVar240 - 4];
         iVar255 = *(int*)( local_278 + uVar240 * 4 );
      }
;
      uVar248 = ( uint )(local_278._8_4_ + 4 + local_278._12_4_) >> 3;
      uVar224 = ( undefined2 )(( uint )(local_1c8._8_4_ + 4 + local_1c8._12_4_) >> 3);
      uVar225 = ( undefined2 )(( uint )(local_148._8_4_ + 4 + local_148._12_4_) >> 3);
      local_208[3] = 0;
      uVar226 = ( undefined2 )(local_278._0_4_ + 4 + local_278._4_4_ >> 3);
      uVar227 = ( undefined2 )(( uint )(local_1c8._0_4_ + 4 + local_1c8._4_4_) >> 3);
      uVar228 = ( undefined2 )(( uint )(local_148._0_4_ + 4 + local_148._4_4_) >> 3);
      uStack_1fa = 0;
      uVar229 = ( undefined2 )(( uint )(local_278._12_4_ + 4 + local_278._4_4_) >> 3);
      uVar230 = ( undefined2 )(( uint )(local_1c8._12_4_ + 4 + local_1c8._4_4_) >> 3);
      uVar231 = ( undefined2 )(( uint )(local_148._12_4_ + 4 + local_148._4_4_) >> 3);
      uStack_1f2 = 0;
      uVar232 = ( undefined2 )(( uint )(local_278._8_4_ + 4 + local_278._0_4_) >> 3);
      uVar286 = ( ushort )(( uint )(local_1c8._8_4_ + 4 + local_1c8._0_4_) >> 3);
      uVar233 = ( undefined2 )(( uint )(local_148._8_4_ + 4 + local_148._0_4_) >> 3);
      uStack_1ea = 0;
      puVar238 = local_208;
      do {
         iVar234 = ( (uint)puVar238[4] * 0x20 - (uint)puVar238[4] ) + 0x80;
         iVar234 = ( iVar234 >> 8 ) + iVar234;
         iVar255 = iVar234 >> 8;
         iVar235 = ( uint ) * puVar238 * 0x1f + 0x80;
         iVar235 = ( ( iVar235 >> 8 ) + iVar235 >> 8 ) - iVar255;
         if (iVar235 < -4) {
            iVar235 = -4;
         }

         if (3 < iVar235) {
            iVar235 = 3;
         }

         puVar265 = puVar238 + 1;
         puVar238[0x14] = ( ushort )(iVar255 << 3) | ( ushort )(iVar234 >> 10);
         puVar238[0x10] = ( ushort )(iVar235 + iVar255 >> 2) | (short)( iVar235 + iVar255 ) * 8;
         puVar250 = local_208;
         puVar238 = puVar265;
      }
 while ( puVar265 != local_208 + 3 );
      do {
         iVar234 = ( (uint)puVar250[0xc] * 0x20 - (uint)puVar250[0xc] ) + 0x80;
         iVar234 = ( iVar234 >> 8 ) + iVar234;
         iVar255 = iVar234 >> 8;
         iVar235 = (uint)puVar250[8] * 0x1f + 0x80;
         iVar235 = ( ( iVar235 >> 8 ) + iVar235 >> 8 ) - iVar255;
         if (iVar235 < -4) {
            iVar235 = -4;
         }

         if (3 < iVar235) {
            iVar235 = 3;
         }

         puVar238 = puVar250 + 1;
         puVar250[0x1c] = ( ushort )(iVar255 << 3) | ( ushort )(iVar234 >> 10);
         puVar250[0x18] = ( ushort )(iVar235 + iVar255 >> 2) | (short)( iVar235 + iVar255 ) * 8;
         puVar250 = puVar238;
      }
 while ( puVar238 != local_208 + 3 );
      uVar276 = 0;
      auVar167._12_4_ = 0;
      auVar167._0_12_ = SUB1612(ZEXT616(CONCAT42(CONCAT22(uVar228, uVar225), uVar227)) << 0x30, 4);
      auVar168._12_4_ = 0;
      auVar168._0_12_ = SUB1612(ZEXT616(CONCAT42(CONCAT22(uVar228, uVar225), uVar227)) << 0x30, 4);
      auVar197._10_2_ = 0;
      auVar197._0_10_ = SUB1610(auVar168 << 0x20, 0);
      auVar197._12_2_ = uVar227;
      auVar199._8_2_ = uVar224;
      auVar199._0_8_ = SUB168(auVar168 << 0x20, 0);
      auVar199._10_4_ = auVar197._10_4_;
      auVar169._2_6_ = auVar199._8_6_;
      auVar169._0_2_ = uVar228;
      auVar169._8_8_ = 0;
      auVar400._12_4_ = 0;
      auVar400._0_12_ = SUB1612(auVar169 << 0x30, 4);
      auVar400 = auVar400 << 0x20;
      auVar198._10_2_ = 0;
      auVar198._0_10_ = SUB1610(auVar167 << 0x20, 0);
      auVar198._12_2_ = uVar227;
      auVar200._8_2_ = uVar224;
      auVar200._0_8_ = SUB168(auVar167 << 0x20, 0);
      auVar200._10_4_ = auVar198._10_4_;
      auVar365._12_2_ = uVar228;
      auVar365._0_12_ = auVar400._0_12_;
      auVar365._14_2_ = uVar233;
      auVar364._12_4_ = auVar365._12_4_;
      auVar364._10_2_ = uVar232;
      auVar364._0_10_ = auVar400._0_10_;
      auVar363._10_6_ = auVar364._10_6_;
      auVar363._8_2_ = uVar226;
      auVar363._0_8_ = auVar400._0_8_;
      auVar170._2_8_ = auVar363._8_8_;
      auVar170._0_2_ = uVar231;
      auVar170._10_6_ = 0;
      auVar362._12_4_ = 0;
      auVar362._0_12_ = SUB1612(auVar170 << 0x30, 4);
      auVar362 = auVar362 << 0x20;
      auVar404._12_2_ = uVar228;
      auVar404._0_12_ = auVar400._0_12_;
      auVar404._14_2_ = uVar233;
      auVar403._12_4_ = auVar404._12_4_;
      auVar403._10_2_ = uVar232;
      auVar403._0_10_ = auVar400._0_10_;
      auVar402._10_6_ = auVar403._10_6_;
      auVar402._8_2_ = uVar226;
      auVar402._0_8_ = auVar400._0_8_;
      auVar171._2_8_ = auVar402._8_8_;
      auVar171._0_2_ = uVar231;
      auVar171._10_6_ = 0;
      auVar401._12_4_ = 0;
      auVar401._0_12_ = SUB1612(auVar171 << 0x30, 4);
      auVar401 = auVar401 << 0x20;
      auVar368._0_12_ = auVar362._0_12_;
      auVar368._12_2_ = uVar231;
      auVar368._14_2_ = uVar233;
      auVar367._12_4_ = auVar368._12_4_;
      auVar367._0_10_ = auVar362._0_10_;
      auVar367._10_2_ = uVar228;
      auVar366._10_6_ = auVar367._10_6_;
      auVar366._0_8_ = auVar362._0_8_;
      auVar366._8_2_ = uVar225;
      auVar173._2_8_ = auVar366._8_8_;
      auVar173._0_2_ = uVar232;
      auVar173._10_6_ = 0;
      auVar172._12_4_ = 0;
      auVar172._0_12_ = SUB1612(auVar173 << 0x30, 4);
      auVar174._12_4_ = 0;
      auVar174._0_12_ = SUB1612(ZEXT216(uVar286) << 0x30, 4);
      Var327 = SUB1610(auVar172 << 0x20, 0);
      auVar93._10_2_ = 0;
      auVar93._0_10_ = Var327;
      auVar93._12_2_ = uVar232;
      uVar296 = SUB168(auVar172 << 0x20, 0);
      auVar105._8_2_ = uVar229;
      auVar105._0_8_ = uVar296;
      auVar105._10_4_ = auVar93._10_4_;
      auVar87._10_2_ = 0;
      auVar87._0_10_ = Var327;
      auVar87._12_2_ = uVar232;
      auVar94._8_2_ = uVar229;
      auVar94._0_8_ = uVar296;
      auVar94._10_4_ = auVar87._10_4_;
      auVar175._6_8_ = 0;
      auVar175._0_6_ = auVar94._8_6_;
      auVar407._0_12_ = auVar401._0_12_;
      auVar407._12_2_ = uVar231;
      auVar407._14_2_ = uVar233;
      auVar406._12_4_ = auVar407._12_4_;
      auVar406._0_10_ = auVar401._0_10_;
      auVar406._10_2_ = uVar228;
      auVar405._10_6_ = auVar406._10_6_;
      auVar405._0_8_ = auVar401._0_8_;
      auVar405._8_2_ = uVar225;
      auVar392._10_2_ = uVar226;
      auVar392._8_2_ = (short)uVar248;
      uVar249 = auVar405._8_4_;
      auVar392._0_8_ = CONCAT44(auVar406._12_4_, uVar249);
      iVar235 = ( uVar248 & 0xffff ) * 0xf + (int)_LC1;
      iVar255 = (int)CONCAT82(SUB148(auVar175 << 0x40, 6), uVar226) * 0xf + _LC1._4_4_;
      iVar275 = auVar105._8_4_ * 0xf + (int)_LC1;
      iVar234 = ( auVar93._10_4_ >> 0x10 ) * 0xf + _LC1._4_4_;
      uVar287 = *(undefined4*)( &g_avg2 + (long)( ( iVar255 >> 8 ) + iVar255 >> 8 ) * 4 );
      uVar348 = *(undefined4*)( &g_avg2 + (long)( ( iVar235 >> 8 ) + iVar235 >> 8 ) * 4 );
      auVar370._0_8_ = CONCAT44(uVar287, uVar348);
      uVar226 = ( undefined2 )(( uint ) * (undefined4*)( &g_avg2 + (long)( ( iVar234 >> 8 ) + iVar234 >> 8 ) * 4 ) >> 0x10);
      uVar229 = ( undefined2 )((uint)uVar287 >> 0x10);
      auVar372._8_4_ = 0;
      auVar372._0_8_ = auVar370._0_8_;
      uVar225 = ( undefined2 ) * (undefined4*)( &g_avg2 + (long)( ( iVar234 >> 8 ) + iVar234 >> 8 ) * 4 );
      auVar371._8_2_ = 0;
      auVar371._0_8_ = auVar370._0_8_;
      local_208[4] = (ushort)uVar287;
      uVar224 = ( undefined2 )(( uint ) * (undefined4*)( &g_avg2 + (long)( ( iVar275 >> 8 ) + iVar275 >> 8 ) * 4 ) >> 0x10);
      auVar372._12_2_ = uVar229;
      auVar372._14_2_ = uVar226;
      auVar371._12_4_ = auVar372._12_4_;
      auVar371._10_2_ = uVar225;
      auVar370._10_6_ = auVar371._10_6_;
      auVar370._8_2_ = local_208[4];
      auVar176._2_8_ = auVar370._8_8_;
      auVar176._0_2_ = uVar224;
      auVar176._10_6_ = 0;
      auVar369._12_4_ = 0;
      auVar369._0_12_ = SUB1612(auVar176 << 0x30, 4);
      auVar369 = auVar369 << 0x20;
      Var327 = SUB1610(auVar174 << 0x20, 0);
      auVar88._10_2_ = 0;
      auVar88._0_10_ = Var327;
      auVar88._12_2_ = uVar286;
      uVar296 = SUB168(auVar174 << 0x20, 0);
      auVar95._8_2_ = uVar230;
      auVar95._0_8_ = uVar296;
      auVar95._10_4_ = auVar88._10_4_;
      auVar177._6_8_ = 0;
      auVar177._0_6_ = auVar95._8_6_;
      auVar89._10_2_ = 0;
      auVar89._0_10_ = Var327;
      auVar89._12_2_ = uVar286;
      auVar96._8_2_ = uVar230;
      auVar96._0_8_ = uVar296;
      auVar96._10_4_ = auVar89._10_4_;
      auVar376._0_12_ = auVar369._0_12_;
      auVar376._12_2_ = uVar224;
      auVar376._14_2_ = uVar226;
      auVar375._12_4_ = auVar376._12_4_;
      auVar375._0_10_ = auVar369._0_10_;
      auVar375._10_2_ = uVar229;
      auVar374._10_6_ = auVar375._10_6_;
      auVar374._0_8_ = auVar369._0_8_;
      auVar374._8_2_ = (short)( (uint)uVar348 >> 0x10 );
      auVar178._2_8_ = auVar374._8_8_;
      auVar178._0_2_ = uVar225;
      auVar178._10_6_ = 0;
      auVar373._12_4_ = 0;
      auVar373._0_12_ = SUB1612(auVar178 << 0x30, 4);
      auVar373 = auVar373 << 0x20;
      iVar282 = ( auVar200._8_4_ & 0xffff ) * 0xf + (int)_LC1;
      iVar288 = (int)CONCAT82(SUB148(auVar177 << 0x40, 6), uVar227) * 0xf + _LC1._4_4_;
      iVar278 = auVar96._8_4_ * 0xf + (int)_LC1;
      iVar280 = ( auVar89._10_4_ >> 0x10 ) * 0xf + _LC1._4_4_;
      auVar90._10_2_ = 0;
      auVar90._0_10_ = auVar392._0_10_;
      auVar90._12_2_ = uVar233;
      auVar97._8_2_ = uVar231;
      auVar97._0_8_ = auVar392._0_8_;
      auVar97._10_4_ = auVar90._10_4_;
      auVar179._6_8_ = 0;
      auVar179._0_6_ = auVar97._8_6_;
      auVar117._4_2_ = uVar228;
      auVar117._0_4_ = uVar249;
      auVar117._6_8_ = SUB148(auVar179 << 0x40, 6);
      auVar91._10_2_ = 0;
      auVar91._0_10_ = auVar392._0_10_;
      auVar91._12_2_ = uVar233;
      auVar98._8_2_ = uVar231;
      auVar98._0_8_ = auVar392._0_8_;
      auVar98._10_4_ = auVar91._10_4_;
      iVar234 = ( uVar249 & 0xffff ) * 0xf + (int)_LC1;
      iVar235 = auVar117._4_4_ * 0xf + _LC1._4_4_;
      iVar255 = auVar98._8_4_ * 0xf + (int)_LC1;
      iVar258 = ( auVar91._10_4_ >> 0x10 ) * 0xf + _LC1._4_4_;
      local_208[0] = (ushort)uVar348;
      local_208[1] = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar282 >> 8 ) + iVar282 >> 8 ) * 4 );
      auVar379._0_12_ = auVar373._0_12_;
      auVar379._12_2_ = uVar225;
      auVar379._14_2_ = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar280 >> 8 ) + iVar280 >> 8 ) * 4 );
      auVar378._12_4_ = auVar379._12_4_;
      auVar378._0_10_ = auVar373._0_10_;
      auVar378._10_2_ = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar278 >> 8 ) + iVar278 >> 8 ) * 4 );
      auVar377._10_6_ = auVar378._10_6_;
      auVar377._0_8_ = auVar373._0_8_;
      auVar377._8_2_ = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar275 >> 8 ) + iVar275 >> 8 ) * 4 );
      auVar180._4_8_ = auVar377._8_8_;
      auVar180._2_2_ = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar288 >> 8 ) + iVar288 >> 8 ) * 4 );
      auVar180._0_2_ = local_208[4];
      auVar380._10_2_ = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar282 >> 8 ) + iVar282 >> 8 ) * 4 );
      auVar380._8_2_ = (ushort)uVar348;
      auVar380._4_4_ = auVar378._12_4_;
      auVar380._0_4_ = auVar377._8_4_;
      auVar380._12_4_ = auVar180._0_4_;
      local_208[5] = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar288 >> 8 ) + iVar288 >> 8 ) * 4 );
      auVar356 = pshuflw(auVar380, auVar380, 0xd4);
      auVar443 = pshuflw(auVar380, auVar380, 0xde);
      local_208[2] = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar234 >> 8 ) + iVar234 >> 8 ) * 4 );
      local_208[6] = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar235 >> 8 ) + iVar235 >> 8 ) * 4 );
      local_1f0[0] = auVar443._0_2_;
      local_1f0[1] = auVar443._2_2_;
      local_1f8[2] = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar255 >> 8 ) + iVar255 >> 8 ) * 4 );
      local_148 = (undefined1[16])0x0;
      local_138 = (undefined1[16])0x0;
      local_128 = (undefined1[16])0x0;
      local_118[0] = (undefined1[16])0x0;
      local_1f0[2] = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar258 >> 8 ) + iVar258 >> 8 ) * 4 );
      iVar235 = 0;
      iVar255 = 0;
      iVar234 = 0;
      local_1f8[0] = auVar356._0_2_;
      local_1f8[1] = auVar356._2_2_;
      puVar238 = (ushort*)auStack_244;
      while (true) {
         *(ulong*)( piVar257 + ( ulong )(uVar276 & 2) * 4 ) = CONCAT44(( uint ) * (byte*)( (long)puVar238 + -3 ) + iVar255, (uint)(byte)puVar238[-2] + iVar235);
         *(uint*)( local_148 + ( ulong )(uVar276 & 2) * 0x10 + 8 ) = iVar234 + (uint)(byte)puVar238[-1];
         puVar250 = puVar238;
         iVar234 = 1;
         do {
            iVar235 = iVar234 + 1;
            lVar241 = (long)(int)( ( iVar234 >> 1 ) + ( uVar276 & 2 ) );
            lVar242 = lVar241 * 0x10;
            iVar234 = *(int*)( local_148 + lVar242 + 8 );
            uVar296 = *(undefined8*)( piVar257 + lVar241 * 4 );
            *(ulong*)( piVar257 + lVar241 * 4 ) = CONCAT44((int)( (ulong)uVar296 >> 0x20 ) + ( uint ) * (byte*)( (long)puVar250 + 1 ), (int)uVar296 + ( uint )(byte) * puVar250);
            *(uint*)( local_148 + lVar242 + 8 ) = (uint)(byte)puVar250[1] + iVar234;
            puVar250 = puVar250 + 2;
            iVar234 = iVar235;
         }
 while ( iVar235 != 4 );
         uVar276 = uVar276 + 1;
         puVar238 = puVar238 + 8;
         if (uVar276 == 4) break;
         lVar241 = ( ulong )(uVar276 & 2) * 0x10;
         iVar235 = piVar257[( ulong )(uVar276 & 2) * 4];
         iVar255 = *(int*)( local_148 + lVar241 + 4 );
         iVar234 = *(int*)( local_148 + lVar241 + 8 );
      }
;
      piVar243 = piVar257;
      piVar251 = (int*)local_1c8;
      do {
         iVar234 = piVar243[8];
         iVar235 = piVar243[0xc];
         piVar244 = piVar243 + 1;
         iVar255 = piVar243[4];
         *piVar251 = iVar234 + iVar235;
         iVar258 = *piVar243;
         piVar251[8] = iVar235 + iVar255;
         piVar251[4] = iVar258 + iVar255;
         piVar251[0xc] = iVar234 + iVar258;
         piVar243 = piVar244;
         piVar251 = piVar251 + 1;
      }
 while ( piVar244 != (int*)( local_148 + 0xc ) );
      local_1c8._12_4_ = 0;
      iVar234 = 0;
      for (int i = 0; i < 3; i++) {
         local_1b8[( 4*i + 3 )] = 0;
      }

      puVar238 = local_208;
      piVar243 = (int*)local_1c8;
      iVar235 = 0;
      while (true) {
         iVar255 = *piVar243;
         iVar258 = piVar243[1];
         uVar286 = puVar238[2];
         iVar275 = piVar243[2];
         uVar316 = puVar238[1];
         uVar317 = *puVar238;
         iVar278 = iVar235 + 1;
         lVar241 = (long)( iVar235 >> 1 ) * 4;
         uVar318 = puVar238[0x12];
         uVar320 = puVar238[0x11];
         *(uint*)( local_288 + lVar241 ) = ( ( 0x3fffffff - ( (uint)uVar316 * iVar258 * 2 + (uint)uVar286 * iVar255 * 2 ) ) - (uint)uVar317 * iVar275 * 2 ) + ( ( uint )(ushort)(uVar286 * uVar286) + ( uint )(ushort)(uVar317 * uVar317) + ( uint )(ushort)(uVar316 * uVar316) ) * 8 + iVar234;
         uVar286 = puVar238[0x10];
         *(uint*)( local_288 + lVar241 + 8 ) = ( ( ( ( *(int*)( local_288 + lVar241 + 8 ) - (uint)uVar318 * iVar255 * 2 ) + 0x3fffffff ) - (uint)uVar320 * iVar258 * 2 ) - (uint)uVar286 * iVar275 * 2 ) + ( ( uint )(ushort)(uVar286 * uVar286) + ( uint )(ushort)(uVar320 * uVar320) + ( (uint)uVar318 * (uint)uVar318 & 0xffff ) ) * 8;
         if (iVar278 == 4) break;
         iVar234 = *(int*)( local_288 + (long)( iVar278 >> 1 ) * 4 );
         puVar238 = puVar238 + 4;
         piVar243 = piVar243 + 4;
         iVar235 = iVar278;
      }
;
      uVar240 = 0;
      uVar245 = 1;
      do {
         if (*(uint*)( local_288 + uVar245 * 4 ) < *(uint*)( local_288 + uVar240 * 4 )) {
            uVar240 = uVar245;
         }

         uVar245 = uVar245 + 1;
      }
 while ( uVar245 != 4 );
      lVar241 = ( uVar240 * 2 + 1 ) * 8;
      uVar283 = uVar240 << 0x18;
      uVar245 = ( ulong )((uint)uVar240 & 2);
      if (( uVar240 & 2 ) == 0) {
         do {
            lVar242 = uVar245 + lVar241;
            lVar269 = uVar245 + lVar241 + -0x210;
            bVar223 = (char)uVar245 * '\x04';
            uVar245 = uVar245 + 2;
            uVar283 = uVar283 | ( ulong )(*(ushort*)( (long)local_208 + lVar242 ) >> 4) << ( bVar223 + 4 & 0x3f ) | ( ulong )(*(ushort*)( local_218 + lVar269 + 0x218 ) >> 4) << ( bVar223 & 0x3f );
         }
 while ( uVar245 != 6 );
      }
 else {
         lVar242 = 0;
         do {
            lVar269 = lVar242 + lVar241 + -0x210;
            uVar248 = ( uint ) * (ushort*)( (long)local_208 + lVar242 + lVar241 );
            cVar253 = (char)lVar242;
            lVar242 = lVar242 + 2;
            uVar283 = uVar283 | ( ulong )((int)( ( *(ushort*)( local_218 + lVar269 + 0x218 ) & 0xf8 ) - ( uVar248 & 0xf8 ) ) >> 3 & 7U | uVar248 & 0xf8) << ( cVar253 * '\x04' & 0x3fU );
         }
 while ( lVar242 != 6 );
      }

      piVar243 = (int*)local_1c8;
      for (lVar241 = 0x10; lVar241 != 0; lVar241 = lVar241 + -1) {
         piVar243[0] = 0;
         piVar243[1] = 0;
         piVar243 = piVar243 + (ulong)bVar285 * -4 + 2;
      }

      puVar238 = (ushort*)&local_248;
      puVar266 = (uint*)( &g_id + uVar240 * 0x40 );
      piVar243 = piVar257;
      do {
         uVar248 = *puVar266;
         uVar245 = (ulong)uVar248;
         puVar250 = puVar238 + 2;
         plVar277 = (long*)&g_table256;
         lVar241 = 0;
         lVar242 = (long)(int)( ( (uint)local_208[uVar245 * 4] - (uint)(byte)puVar238[1] ) * 0x4d + ( (uint)local_208[uVar245 * 4 + 1] - ( uint ) * (byte*)( (long)puVar238 + 1 ) ) * 0x97 + ( (uint)local_208[uVar245 * 4 + 2] - ( uint )(byte) * puVar238 ) * 0x1c );
         do {
            uVar252 = 1;
            uVar245 = 0;
            lVar269 = *plVar277 + lVar242;
            puVar270 = (uint*)( lVar269 * lVar269 );
            do {
               lVar269 = plVar277[uVar252] + lVar242;
               puVar246 = (uint*)( lVar269 * lVar269 );
               if (puVar246 < puVar270) {
                  uVar245 = uVar252 & 0xffffffff;
                  puVar270 = puVar246;
               }

               uVar252 = uVar252 + 1;
            }
 while ( uVar252 != 4 );
            plVar1 = (long*)( (long)local_1c8 + ( ( ulong )(uVar248 & 1) * 0x10 + lVar241 ) * 4 );
            *plVar1 = *plVar1 + (long)puVar270;
            plVar277 = plVar277 + 4;
            *(short*)( (long)piVar243 + lVar241 ) = (short)uVar245;
            lVar241 = lVar241 + 2;
         }
 while ( lVar241 != 0x10 );
         puVar266 = puVar266 + 1;
         piVar243 = piVar243 + 4;
         puVar238 = puVar250;
      }
 while ( puVar250 != local_208 );
      if (param_5) {
         uVar239 = 0;
         local_398 = 0x3f804000;
         if (local_2ac == '\x02') {
            local_289 = false;
            uVar248 = (anonymous_namespace)::compressBlockTH(&local_248, (Luma*)local_268, (uint*)local_278, (uint*)( local_278 + 4 ), &local_289);
            local_398 = (ulong)uVar248;
            if (local_289 == false) {
               uVar272 = local_278._0_4_ * 4 & 0x180000;
               uVar249 = ( local_278._0_4_ & 0x3f80000 ) << 5;
               uVar261 = local_278._0_4_ * 2 & 0x3fffc;
               uVar248 = local_278._0_4_ * 4 & 0x100000;
               uVar267 = uVar248 >> 0x14;
               uVar273 = ( local_278._0_4_ * 2 & 0x20000U ) >> 0x11;
               uVar276 = uVar261 & ( ( uVar272 & uVar273 << 0x13 ) >> 0x13 ) << 0x10 & ( uVar267 ^ 1 ) << 0x10;
               uVar236 = uVar276 >> 0x10;
               uVar248 = ( uVar248 & uVar273 << 0x14 ) >> 0x14 | ( uVar261 & ( ( uVar272 & uVar267 << 0x13 ) >> 0x13 ) << 0x10 & ( uVar273 ^ 1 ) << 0x10 | uVar276 ) >> 0x10;
               uVar248 = ( uVar249 >> 0x1e ^ 1 ) << 0x1f | uVar261 | uVar249 | uVar272 | local_278._0_4_ & 1 | ( -uVar248 & 7 ) << 0x15 | ( uVar248 ^ 1 ) << 0x12;
            }
 else {
               uVar248 = local_278._0_4_ * 2;
               uVar249 = local_278._0_4_ * 4 & 0x18000000;
               uVar272 = uVar249 >> 0x1c;
               uVar261 = ( uVar248 & 0x2000000 ) >> 0x19;
               uVar276 = uVar248 & 0xe7ffffff & ( ( uVar249 & uVar261 << 0x1b ) >> 0x1b ) << 0x18 & ( uVar272 ^ 1 ) << 0x18;
               uVar236 = uVar276 >> 0x18;
               uVar276 = ( uVar248 & 0x2000000 & uVar272 << 0x19 ) >> 0x19 | ( uVar248 & 0xe7ffffff & ( ( uVar249 & uVar272 << 0x1b ) >> 0x1b ) << 0x18 & ( uVar261 ^ 1 ) << 0x18 | uVar276 ) >> 0x18;
               uVar248 = uVar248 & 0x3ffffff | local_278._0_4_ & 1 | uVar249 | uVar276 * -0x20000000 | ( uVar276 ^ 1 ) << 0x1a;
            }

            puVar270 = (uint*)(ulong)uVar236;
            uVar239 = CONCAT44((uint)local_278._4_4_ >> 0x18 | ( local_278._4_4_ & 0xff0000 ) >> 8 | ( local_278._4_4_ & 0xff00 ) << 8 | local_278._4_4_ << 0x18, uVar248 >> 0x18 | ( uVar248 & 0xff0000 ) >> 8 | ( uVar248 & 0xff00 ) << 8 | ( uVar248 | 2 ) << 0x18);
         }

      }

      local_278._0_8_ = 0;
      lVar241 = 1;
      do {
         if (*(ulong*)( (long)local_1c8 + lVar241 * 2 * 4 ) < *(ulong*)( local_1c8 + local_278._0_8_ * 8 )) {
            local_278._0_8_ = lVar241;
         }

         lVar241 = lVar241 + 1;
      }
 while ( lVar241 != 8 );
      local_278._8_8_ = 0;
      lVar241 = 1;
      do {
         if (auStack_188[lVar241] < auStack_188[local_278._8_8_]) {
            local_278._8_8_ = lVar241;
         }

         lVar241 = lVar241 + 1;
      }
 while ( lVar241 != 8 );
      auVar443 = __LC6;
      if (auStack_188[local_278._8_8_] + *(long*)( local_1c8 + local_278._0_8_ * 8 ) < local_398) {
         lVar241 = 0;
         puVar270 = (uint*)( local_278._8_8_ << 0x1d | local_278._0_8_ << 0x1a | uVar283 );
         do {
            cVar253 = (char)lVar241;
            uVar286 = *(ushort*)( (long)piVar257 + *(long*)( local_278 + ( ulong )(*(uint*)( (long)( &g_id + uVar240 * 0x40 ) + lVar241 * 4 ) & 1) * 8 ) * 2 );
            piVar257 = piVar257 + 4;
            lVar241 = lVar241 + 1;
            puVar270 = (uint*)( (ulong)puVar270 | ( ulong )(uVar286 & 1) << ( cVar253 + 0x20U & 0x3f ) | ( ulong )(uVar286 & 2) << ( cVar253 + 0x2fU & 0x3f ) );
         }
 while ( lVar241 != 0x10 );
         uVar239 = (ulong)puVar270 >> 0x18 & 0xff00000000 | ( (ulong)puVar270 & 0xff00000000 ) << 0x18 | (ulong)puVar270 & 0xffffffff | (ulong)puVar270 >> 8 & 0xff0000000000 | ( (ulong)puVar270 & 0xff0000000000 ) << 8;
      }

   }

   goto LAB_00101de5;
   code_r0x00101d9f:puVar238 = puVar238 + 2;
   if (puVar238 == local_208) goto code_r0x00101da8;
   goto LAB_00101d90;
   code_r0x00101da8:uVar239 = ( ulong )(( local_248 & 0xf8 ) << 0x10 | ( bStack_247 & 0xf8 ) << 8 | bStack_246 & 0xf8 | 0x2000000);
   LAB_00101de5:puVar2 = local_388 + 1;
   *local_388 = uVar239;
   param_1 = local_380;
   puVar238 = (ushort*)&local_248;
   local_388 = puVar2;
   if (puVar2 == param_2 + ( ulong )(param_3 - 1) + 1) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail(puVar270);
   }

   goto LAB_00101d37;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CompressEtc2Rgba(unsigned int const*, unsigned long*, unsigned int, unsigned long, bool) */void CompressEtc2Rgba(uint *param_1, ulong *param_2, uint param_3, ulong param_4, bool param_5) {
   long *plVar1;
   ulong *puVar2;
   char cVar3;
   char cVar9;
   char cVar16;
   byte bVar25;
   byte bVar32;
   char cVar40;
   byte bVar45;
   byte bVar50;
   short sVar55;
   short sVar56;
   short sVar57;
   short sVar58;
   short sVar59;
   short sVar60;
   short sVar61;
   short sVar62;
   short sVar63;
   short sVar64;
   short sVar65;
   short sVar66;
   short sVar67;
   short sVar68;
   short sVar69;
   short sVar70;
   short sVar71;
   short sVar72;
   short sVar73;
   short sVar74;
   short sVar75;
   short sVar76;
   short sVar77;
   short sVar78;
   undefined1 auVar79[15];
   undefined1 auVar80[15];
   undefined1 auVar81[14];
   undefined1 auVar82[15];
   undefined1 auVar83[14];
   undefined1 auVar84[15];
   undefined1 auVar85[15];
   undefined1 auVar86[14];
   undefined1 auVar87[14];
   undefined1 auVar88[14];
   undefined1 auVar89[14];
   undefined1 auVar90[14];
   undefined1 auVar91[14];
   undefined1 auVar92[15];
   undefined1 auVar93[14];
   undefined1 auVar94[14];
   undefined1 auVar95[14];
   undefined1 auVar96[14];
   undefined1 auVar97[14];
   undefined1 auVar98[14];
   undefined1 auVar99[15];
   undefined1 auVar100[15];
   undefined1 auVar101[15];
   undefined1 auVar102[15];
   undefined1 auVar103[15];
   undefined1 auVar104[14];
   undefined1 auVar105[13];
   undefined1 auVar106[13];
   undefined1 auVar107[13];
   undefined1 auVar108[14];
   undefined1 auVar109[13];
   undefined1 auVar110[13];
   undefined1 auVar111[13];
   undefined1 auVar112[14];
   undefined1 auVar113[13];
   undefined1 auVar114[13];
   undefined1 auVar115[13];
   undefined1 auVar116[15];
   undefined1 auVar117[14];
   undefined1 auVar118[15];
   undefined1 auVar119[15];
   undefined1 auVar120[15];
   undefined1 auVar121[15];
   undefined1 auVar122[15];
   undefined1 auVar123[15];
   undefined1 auVar124[15];
   undefined1 auVar125[15];
   undefined1 auVar126[15];
   undefined1 auVar127[15];
   unkuint9 Var128;
   undefined1 auVar129[11];
   undefined1 auVar130[13];
   undefined1 auVar131[14];
   undefined1 auVar132[15];
   undefined1 auVar133[11];
   undefined1 auVar134[13];
   undefined1 auVar135[13];
   undefined1 auVar136[14];
   undefined1 auVar137[15];
   undefined1 auVar138[11];
   undefined1 auVar139[13];
   undefined1 auVar140[13];
   undefined1 auVar141[14];
   undefined1 auVar142[13];
   undefined1 auVar143[16];
   undefined1 auVar144[16];
   undefined1 auVar145[16];
   undefined1 auVar146[16];
   undefined1 auVar147[16];
   undefined1 auVar148[16];
   undefined1 auVar149[16];
   undefined1 auVar150[16];
   undefined1 auVar151[16];
   undefined1 auVar152[16];
   undefined1 auVar153[16];
   undefined1 auVar154[16];
   undefined1 auVar155[15];
   undefined1 auVar156[11];
   undefined1 auVar157[13];
   undefined1 auVar158[15];
   undefined1 auVar159[11];
   undefined1 auVar160[13];
   undefined1 auVar161[15];
   undefined1 auVar162[11];
   undefined1 auVar163[13];
   undefined1 auVar164[12];
   undefined1 auVar165[12];
   undefined1 auVar166[16];
   undefined1 auVar167[16];
   undefined1 auVar168[16];
   undefined1 auVar169[16];
   undefined1 auVar170[16];
   undefined1 auVar171[16];
   undefined1 auVar172[16];
   undefined1 auVar173[16];
   undefined1 auVar174[14];
   undefined1 auVar175[16];
   undefined1 auVar176[14];
   undefined1 auVar177[16];
   undefined1 auVar178[14];
   undefined1 auVar179[12];
   undefined3 uVar180;
   undefined3 uVar181;
   undefined1 auVar182[15];
   undefined1 auVar183[15];
   undefined1 auVar184[15];
   undefined1 auVar185[15];
   undefined1 auVar186[15];
   undefined1 auVar187[15];
   undefined1 auVar188[15];
   undefined1 auVar189[15];
   undefined1 auVar190[15];
   undefined1 auVar191[15];
   undefined1 auVar192[15];
   undefined1 auVar193[15];
   unkbyte10 Var194;
   unkbyte10 Var195;
   undefined1 auVar196[14];
   undefined1 auVar197[14];
   undefined1 auVar198[14];
   undefined1 auVar199[14];
   undefined5 uVar200;
   undefined5 uVar201;
   undefined1 auVar202[12];
   undefined1 auVar203[12];
   undefined1 auVar204[12];
   undefined1 auVar205[12];
   undefined1 auVar206[12];
   undefined1 auVar207[12];
   undefined1 auVar208[14];
   undefined8 uVar209;
   undefined1 auVar210[14];
   undefined8 uVar211;
   undefined1 auVar212[14];
   undefined8 uVar213;
   undefined1 auVar214[14];
   undefined1 auVar215[14];
   undefined1 auVar216[14];
   uint6 uVar217;
   uint6 uVar218;
   uint6 uVar219;
   byte bVar220;
   undefined2 uVar221;
   undefined2 uVar222;
   undefined2 uVar223;
   undefined2 uVar224;
   undefined2 uVar225;
   undefined2 uVar226;
   undefined2 uVar227;
   undefined2 uVar228;
   undefined2 uVar229;
   undefined2 uVar230;
   int iVar231;
   int iVar232;
   uint uVar233;
   uint uVar234;
   ushort *puVar235;
   long lVar236;
   long lVar237;
   int *piVar238;
   int *piVar239;
   ulong uVar240;
   ulong uVar241;
   byte bVar242;
   int iVar243;
   uint uVar244;
   ulong uVar245;
   byte *pbVar246;
   ushort *puVar247;
   int *piVar248;
   int iVar249;
   uint uVar250;
   uint uVar251;
   uint uVar252;
   byte *pbVar253;
   byte *pbVar254;
   int iVar255;
   uint uVar256;
   int iVar257;
   uint uVar258;
   undefined1 *puVar259;
   int iVar260;
   uint uVar261;
   ushort *puVar262;
   uint *puVar263;
   ulong uVar264;
   ulong uVar265;
   uint uVar266;
   char cVar267;
   uint uVar268;
   uint uVar269;
   long *plVar270;
   int iVar271;
   uint uVar272;
   int *piVar273;
   int iVar274;
   uint uVar275;
   int iVar276;
   uint uVar277;
   long lVar278;
   ulong uVar279;
   int iVar280;
   uint uVar281;
   long in_FS_OFFSET;
   bool bVar282;
   char cVar283;
   byte bVar284;
   ushort uVar285;
   undefined4 uVar286;
   ushort uVar315;
   int iVar287;
   float fVar288;
   float fVar289;
   float fVar290;
   float fVar291;
   float fVar292;
   float fVar293;
   ushort uVar316;
   ushort uVar317;
   ushort uVar319;
   ushort uVar320;
   ushort uVar321;
   undefined1 auVar298[16];
   short sVar318;
   ushort uVar322;
   undefined1 auVar299[16];
   undefined1 auVar300[16];
   undefined1 auVar303[16];
   undefined1 auVar307[16];
   undefined1 auVar310[16];
   undefined1 auVar311[16];
   undefined1 auVar312[16];
   undefined1 auVar313[16];
   undefined1 auVar314[16];
   ushort uVar323;
   undefined4 uVar325;
   unkuint10 Var331;
   ushort uVar348;
   ushort uVar350;
   ushort uVar355;
   ushort uVar357;
   undefined1 auVar334[16];
   ushort uVar324;
   ushort uVar346;
   ushort uVar347;
   ushort uVar349;
   ushort uVar351;
   ushort uVar353;
   ushort uVar354;
   ushort uVar356;
   ushort uVar358;
   ushort uVar359;
   ushort uVar360;
   undefined1 auVar335[16];
   int iVar326;
   float fVar327;
   float fVar328;
   short sVar352;
   undefined1 auVar336[16];
   undefined1 auVar337[16];
   undefined1 auVar338[16];
   undefined1 auVar339[16];
   undefined1 auVar340[16];
   undefined1 auVar341[16];
   undefined1 auVar342[16];
   undefined1 auVar343[16];
   undefined1 auVar344[16];
   undefined1 auVar345[16];
   int iVar361;
   short sVar416;
   int iVar417;
   undefined1 auVar364[16];
   undefined1 auVar365[16];
   undefined1 auVar366[16];
   undefined1 auVar367[16];
   undefined1 auVar368[16];
   undefined1 auVar372[16];
   undefined1 auVar376[16];
   undefined1 auVar379[16];
   undefined1 auVar380[16];
   undefined1 auVar381[16];
   undefined1 auVar385[16];
   undefined1 auVar389[16];
   undefined1 auVar392[16];
   undefined1 auVar393[16];
   undefined1 auVar394[16];
   undefined1 auVar395[16];
   undefined4 uVar362;
   undefined1 auVar397[16];
   undefined1 auVar401[16];
   undefined1 auVar404[16];
   undefined1 auVar408[16];
   undefined1 auVar412[16];
   undefined1 auVar415[16];
   float __x;
   float fVar418;
   int iVar419;
   undefined1 auVar422[12];
   undefined1 auVar423[16];
   undefined1 auVar424[16];
   undefined1 auVar428[16];
   undefined1 auVar432[16];
   undefined1 auVar435[16];
   undefined4 uVar420;
   undefined1 auVar437[16];
   undefined1 auVar438[16];
   undefined1 auVar442[16];
   ushort uVar445;
   ushort uVar464;
   float __x_00;
   float __x_01;
   float __z;
   ushort uVar465;
   ushort uVar466;
   ushort uVar467;
   ushort uVar468;
   ushort uVar469;
   ushort uVar470;
   undefined1 auVar446[16];
   undefined1 auVar447[16];
   undefined1 auVar448[16];
   undefined1 auVar452[16];
   undefined1 auVar456[16];
   undefined1 auVar459[16];
   undefined1 auVar460[16];
   undefined1 auVar461[16];
   undefined1 auVar462[16];
   undefined1 auVar463[16];
   undefined1 auVar471[16];
   undefined1 auVar472[16];
   undefined1 auVar473[16];
   undefined1 auVar474[16];
   undefined1 auVar475[16];
   undefined1 auVar476[16];
   undefined1 auVar477[16];
   undefined1 auVar478[16];
   undefined1 auVar479[16];
   undefined1 auVar480[16];
   undefined1 auVar484[16];
   undefined1 auVar488[16];
   undefined1 auVar491[16];
   undefined1 auVar492[16];
   undefined1 auVar493[16];
   undefined1 auVar494[16];
   undefined1 auVar495[16];
   float __z_00;
   float __z_01;
   undefined1 auVar496[16];
   undefined1 auVar497[16];
   undefined1 auVar498[16];
   undefined1 auVar499[16];
   undefined1 auVar500[16];
   undefined1 auVar501[16];
   undefined1 auVar502[16];
   undefined1 auVar503[16];
   undefined1 auVar504[16];
   undefined1 auVar505[16];
   undefined1 auVar506[16];
   undefined1 auVar507[16];
   undefined1 auVar508[16];
   undefined1 auVar509[16];
   undefined1 auVar510[16];
   undefined1 auVar511[16];
   undefined1 auVar512[16];
   undefined1 auVar513[16];
   undefined1 auVar514[16];
   uint uVar515;
   undefined1 auVar516[16];
   undefined1 auVar517[16];
   undefined1 auVar518[16];
   undefined1 auVar519[16];
   undefined1 auVar520[16];
   undefined1 auVar521[16];
   undefined1 auVar522[16];
   undefined1 auVar523[16];
   ulong local_3d8;
   ulong local_3d0;
   uint local_3c0;
   ulong *local_3b8;
   uint *local_3a0;
   int local_390;
   uint local_38c;
   byte local_32a;
   byte local_329;
   short sStack_31c;
   ushort uStack_316;
   ushort uStack_314;
   ushort uStack_312;
   ushort uStack_310;
   ushort uStack_30e;
   ushort uStack_30c;
   ushort uStack_30a;
   short sStack_2fc;
   ushort uStack_2f6;
   ushort uStack_2f4;
   ushort uStack_2f2;
   ushort uStack_2f0;
   ushort uStack_2ee;
   ushort uStack_2ec;
   ushort uStack_2ea;
   short sStack_2dc;
   ushort uStack_2d6;
   ushort uStack_2d4;
   ushort uStack_2d2;
   ushort uStack_2d0;
   ushort uStack_2ce;
   ushort uStack_2cc;
   ushort uStack_2ca;
   bool local_299;
   undefined1 local_298[16];
   undefined1 local_288[16];
   undefined1 local_278[2];
   byte bStack_276;
   byte bStack_275;
   byte local_274[28];
   byte local_258;
   byte bStack_257;
   byte bStack_256;
   byte bStack_255;
   undefined1 auStack_254[12];
   undefined1 local_248[16];
   undefined1 local_238[16];
   undefined1 local_228[16];
   ushort local_218[5];
   undefined2 uStack_20e;
   undefined2 uStack_20c;
   undefined2 uStack_20a;
   undefined2 local_208;
   undefined2 uStack_206;
   undefined2 uStack_204;
   undefined2 uStack_202;
   undefined2 local_200;
   undefined2 uStack_1fe;
   undefined2 uStack_1fc;
   undefined2 uStack_1fa;
   undefined1 local_1d8[16];
   int local_1c8[12];
   ulong auStack_198[8];
   undefined1 local_158[16];
   undefined1 local_148[16];
   undefined1 local_138[16];
   undefined1 local_128[13][16];
   undefined4 local_58;
   byte local_48[8];
   long local_40;
   char cVar4;
   char cVar5;
   char cVar6;
   char cVar7;
   char cVar8;
   char cVar10;
   char cVar11;
   char cVar12;
   char cVar13;
   char cVar14;
   char cVar15;
   byte bVar17;
   byte bVar18;
   byte bVar19;
   byte bVar20;
   byte bVar21;
   byte bVar22;
   byte bVar23;
   byte bVar24;
   byte bVar26;
   byte bVar27;
   byte bVar28;
   byte bVar29;
   byte bVar30;
   byte bVar31;
   byte bVar33;
   byte bVar34;
   byte bVar35;
   byte bVar36;
   byte bVar37;
   byte bVar38;
   byte bVar39;
   byte bVar41;
   byte bVar42;
   byte bVar43;
   byte bVar44;
   byte bVar46;
   byte bVar47;
   byte bVar48;
   byte bVar49;
   byte bVar51;
   byte bVar52;
   byte bVar53;
   byte bVar54;
   undefined6 uVar294;
   undefined8 uVar295;
   undefined1 auVar304[16];
   undefined1 auVar296[12];
   undefined1 auVar301[16];
   undefined1 auVar305[16];
   undefined1 auVar308[16];
   undefined1 auVar297[14];
   undefined1 auVar302[16];
   undefined1 auVar306[16];
   undefined1 auVar309[16];
   undefined6 uVar329;
   undefined8 uVar330;
   undefined1 auVar332[12];
   undefined1 auVar333[14];
   undefined1 auVar369[16];
   undefined1 auVar373[16];
   undefined1 auVar382[16];
   undefined1 auVar386[16];
   undefined1 auVar363[12];
   undefined1 auVar398[16];
   undefined1 auVar405[16];
   undefined1 auVar406[16];
   undefined1 auVar407[16];
   undefined1 auVar409[16];
   undefined1 auVar370[16];
   undefined1 auVar374[16];
   undefined1 auVar377[16];
   undefined1 auVar383[16];
   undefined1 auVar387[16];
   undefined1 auVar390[16];
   undefined1 auVar399[16];
   undefined1 auVar402[16];
   undefined1 auVar410[16];
   undefined1 auVar413[16];
   undefined1 auVar371[16];
   undefined1 auVar375[16];
   undefined1 auVar378[16];
   undefined1 auVar384[16];
   undefined1 auVar388[16];
   undefined1 auVar391[16];
   undefined1 auVar396[16];
   undefined1 auVar400[16];
   undefined1 auVar403[16];
   undefined1 auVar411[16];
   undefined1 auVar414[16];
   undefined1 auVar425[16];
   undefined1 auVar429[16];
   undefined1 auVar421[12];
   undefined1 auVar439[16];
   undefined1 auVar426[16];
   undefined1 auVar430[16];
   undefined1 auVar433[16];
   undefined1 auVar440[16];
   undefined1 auVar443[16];
   undefined1 auVar427[16];
   undefined1 auVar431[16];
   undefined1 auVar434[16];
   undefined1 auVar436[16];
   undefined1 auVar441[16];
   undefined1 auVar444[16];
   undefined1 auVar449[16];
   undefined1 auVar453[16];
   undefined1 auVar450[16];
   undefined1 auVar454[16];
   undefined1 auVar457[16];
   undefined1 auVar451[16];
   undefined1 auVar455[16];
   undefined1 auVar458[16];
   undefined1 auVar481[16];
   undefined1 auVar485[16];
   undefined1 auVar482[16];
   undefined1 auVar486[16];
   undefined1 auVar489[16];
   undefined1 auVar483[16];
   undefined1 auVar487[16];
   undefined1 auVar490[16];
   bVar284 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_390 = 0;
   puVar235 = (ushort*)&local_258;
   puVar263 = &local_58;
   local_3a0 = param_1;
   local_3b8 = param_2;
   auVar516 = __LC6;
   LAB_00103f65:do {
      uVar250 = param_1[param_4 * 2];
      puVar247 = puVar235 + 8;
      uVar275 = *param_1;
      uVar251 = param_1[param_4];
      uVar268 = param_1[param_4 * 3];
      *puVar263 = ( ( ( param_1[param_4 * 3] >> 0x18 ) << 8 | uVar250 >> 0x18 ) << 8 | uVar251 >> 0x18 ) << 8 | uVar275 >> 0x18;
      *(ulong*)puVar235 = CONCAT44(uVar251, uVar275);
      *(ulong*)( puVar235 + 4 ) = CONCAT44(uVar268, uVar250);
      puVar235 = puVar247;
      param_1 = param_1 + 1;
      puVar263 = puVar263 + 1;
   }
 while ( puVar247 != local_218 );
   local_390 = local_390 + 1;
   if ((long)local_390 == param_4 >> 2) {
      local_390 = 0;
      local_3a0 = local_3a0 + param_4 * 3 + 4;
   }
 else {
      local_3a0 = local_3a0 + 4;
   }

   uVar245 = (ulong)(byte)local_58;
   pbVar246 = (byte*)( (long)&local_58 + 1 );
   do {
      pbVar253 = pbVar246 + 1;
      pbVar254 = (byte*)( (long)&local_58 + 1 );
      bVar220 = (byte)local_58;
      if ((byte)local_58 != *pbVar246) goto LAB_001040de;
      pbVar246 = pbVar253;
   }
 while ( pbVar253 != local_48 );
   goto LAB_00104002;
   LAB_001040de:do {
      iVar231 = (int)uVar245;
      bVar242 = *pbVar254;
      if (bVar220 <= bVar242) {
         if ((byte)uVar245 < bVar242) {
            uVar245 = (ulong)bVar242;
         }

         iVar231 = (int)uVar245;
         bVar242 = bVar220;
      }

      pbVar254 = pbVar254 + 1;
      bVar220 = bVar242;
   }
 while ( pbVar254 != local_48 );
   uVar240 = (ulong)local_38c;
   uVar245 = 0;
   iVar231 = iVar231 - (uint)bVar242;
   iVar232 = 0x7fffffff;
   piVar273 = (int*)&g_alpha;
   uVar250 = iVar231 / 2 + (uint)bVar242;
   puVar259 = local_158;
   do {
      uVar251 = ( iVar231 * *(int*)( &g_alphaRange + uVar245 * 4 ) >> 0x10 ) + 1;
      uVar275 = *piVar273 * uVar251 + uVar250;
      if (0xff < uVar275) {
         uVar275 = (int)~uVar275 >> 0x1f;
      }

      lVar236 = 0;
      iVar255 = 0;
      do {
         while (true) {
            bVar220 = *(byte*)( (long)&local_58 + lVar236 );
            iVar257 = (uint)bVar220 - ( uVar275 & 0xff );
            iVar257 = iVar257 * iVar257;
            if (iVar257 == 0) break;
            uVar279 = 1;
            uVar265 = 0;
            do {
               uVar233 = piVar273[uVar279] * uVar251 + uVar250;
               uVar268 = (int)~uVar233 >> 0x1f;
               if (uVar233 < 0x100) {
                  uVar268 = uVar233;
               }

               iVar271 = (uint)bVar220 - ( uVar268 & 0xff );
               iVar271 = iVar271 * iVar271;
               if (iVar271 < iVar257) {
                  uVar265 = uVar279 & 0xffffffff;
                  iVar257 = iVar271;
               }

               uVar279 = uVar279 + 1;
            }
 while ( uVar279 != 8 );
            puVar259[lVar236] = (char)uVar265;
            lVar236 = lVar236 + 1;
            iVar255 = iVar255 + iVar257;
            if (lVar236 == 0x10) goto LAB_00104208;
         }
;
         puVar259[lVar236] = 0;
         lVar236 = lVar236 + 1;
      }
 while ( lVar236 != 0x10 );
      LAB_00104208:if (iVar255 < iVar232) {
         local_38c = (uint)uVar245;
         uVar240 = uVar245 & 0xffffffff;
         local_3c0 = uVar251;
         iVar232 = iVar255;
         if (iVar255 == 0) goto LAB_00104240;
      }

      uVar245 = uVar245 + 1;
      piVar273 = piVar273 + 8;
      puVar259 = puVar259 + 0x10;
   }
 while ( uVar245 != 0x10 );
   local_38c = (uint)uVar240;
   LAB_00104240:pbVar246 = local_158 + (long)(int)local_38c * 0x10;
   uVar245 = (ulong)local_3c0 << 0x34 | (long)(int)local_38c << 0x30 | (ulong)uVar250 << 0x38;
   iVar231 = 0x2d;
   do {
      bVar220 = *pbVar246;
      pbVar246 = pbVar246 + 1;
      bVar242 = (byte)iVar231;
      iVar231 = iVar231 + -3;
      uVar245 = uVar245 | (ulong)bVar220 << ( bVar242 & 0x3f );
   }
 while ( iVar231 != -3 );
   uVar245 = uVar245 >> 0x38 | ( uVar245 & 0xff000000000000 ) >> 0x28 | ( uVar245 & 0xff0000000000 ) >> 0x18 | ( uVar245 & 0xff00000000 ) >> 8 | ( uVar245 & 0xff000000 ) << 8 | ( uVar245 & 0xff0000 ) << 0x18 | ( uVar245 & 0xff00 ) << 0x28 | uVar245 << 0x38;
   LAB_00104002:*local_3b8 = uVar245;
   puVar235 = (ushort*)auStack_254;
   LAB_00104020:if (CONCAT13(bStack_255, CONCAT12(bStack_256, CONCAT11(bStack_257, local_258))) == *(int*)puVar235) goto code_r0x00104028;
   _local_278 = 0xff00;
   cVar40 = param_5;
   if (!param_5) goto LAB_001042ae;
   uVar265 = 0;
   cVar283 = '\0';
   uVar275 = 0;
   uVar240 = (ulong)local_329;
   uVar245 = (ulong)local_32a;
   cVar267 = '\0';
   uVar250 = 0xffffffff;
   puVar235 = (ushort*)&local_258;
   do {
      uVar251 = ( uint ) * (byte*)( (long)puVar235 + 1 ) * 0x96 + (uint)(byte)puVar235[1] * 0x4c + ( uint )(byte) * puVar235 * 0x1c >> 1;
      bVar220 = ( byte )(uVar251 / 0x7f);
      bVar282 = bVar220 < (byte)uVar250;
      local_274[uVar265] = bVar220;
      if (bVar282) {
         uVar245 = uVar265 & 0xffffffff;
         cVar267 = param_5;
      }

      uVar251 = uVar251 / 0x7f;
      if (bVar282) {
         uVar250 = uVar251;
      }

      if ((byte)uVar275 < bVar220) {
         uVar240 = uVar265 & 0xffffffff;
         uVar275 = uVar251;
         cVar283 = param_5;
      }

      uVar265 = uVar265 + 1;
      puVar235 = puVar235 + 2;
   }
 while ( uVar265 != 0x10 );
   local_329 = (byte)uVar240;
   uVar251 = 0;
   local_32a = (byte)uVar245;
   if (cVar283 != '\0') {
      _local_278 = CONCAT12(local_329, 0xff00);
      uVar251 = uVar275 & 0xff;
      _local_278 = CONCAT31(_local_278 >> 8, (char)uVar275);
   }

   uVar275 = 0xff;
   if (cVar267 != '\0') {
      local_278 = (undefined1[2])CONCAT11((char)uVar250, local_278[0]);
      uVar275 = uVar250 & 0xff;
      _local_278 = CONCAT13(local_32a, _local_278);
   }

   fVar288 = (float)(int)( uVar251 - uVar275 ) * __LC5;
   if (fVar288 <= ecmd_threshold) {
      cVar40 = '\0';
      cVar283 = '\x01';
   }
 else if (DAT_00106c34 < fVar288) {
      cVar283 = ( _DAT_00106c38 <= fVar288 ) * '\x02';
   }
 else if (bStack_275 == '\0') {
      cVar283 = bStack_276 == '\x0f';
      cVar40 = !(bool)cVar283;
   }
 else if (bStack_275 == '\x0f') {
      cVar283 = bStack_276 == '\0';
      cVar40 = !(bool)cVar283;
   }
 else if (bStack_275 == '\x03') {
      cVar283 = bStack_276 == '\f';
      cVar40 = !(bool)cVar283;
   }
 else if (bStack_275 == '\f') {
      cVar283 = bStack_276 == '\x03';
      cVar40 = !(bool)cVar283;
   }
 else {
      LAB_001042ae:cVar283 = '\0';
   }

   iVar257 = 0;
   auVar334[1] = bStack_257;
   auVar334[0] = local_258;
   auVar334[2] = bStack_256;
   auVar334[3] = bStack_255;
   auVar334._4_12_ = auStack_254;
   iVar276 = 0;
   iVar232 = -0xff;
   iVar231 = -0xff;
   iVar280 = 0;
   iVar271 = 0;
   iVar274 = 0;
   auVar334 = auVar334 & auVar516;
   iVar255 = 0;
   uVar268 = 0;
   auVar298 = local_248 & auVar516;
   auVar364 = local_228 & auVar516;
   sVar318 = auVar334._0_2_;
   sVar416 = auVar334._2_2_;
   bVar220 = ( 0 < sVar416 ) * ( sVar416 < 0x100 ) * auVar334[2] - ( 0xff < sVar416 );
   sVar416 = auVar334._4_2_;
   sVar56 = auVar334._6_2_;
   cVar3 = ( 0 < sVar56 ) * ( sVar56 < 0x100 ) * auVar334[6] - ( 0xff < sVar56 );
   uVar325 = CONCAT13(cVar3, CONCAT12(( 0 < sVar416 ) * ( sVar416 < 0x100 ) * auVar334[4] - ( 0xff < sVar416 ), CONCAT11(bVar220, ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar334[0] - ( 0xff < sVar318 ))));
   sVar318 = auVar334._8_2_;
   sVar416 = auVar334._10_2_;
   cVar267 = ( 0 < sVar416 ) * ( sVar416 < 0x100 ) * auVar334[10] - ( 0xff < sVar416 );
   uVar329 = CONCAT15(cVar267, CONCAT14(( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar334[8] - ( 0xff < sVar318 ), uVar325));
   sVar318 = auVar334._12_2_;
   sVar416 = auVar334._14_2_;
   cVar4 = ( 0 < sVar416 ) * ( sVar416 < 0x100 ) * auVar334[0xe] - ( 0xff < sVar416 );
   uVar330 = CONCAT17(cVar4, CONCAT16(( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar334[0xc] - ( 0xff < sVar318 ), uVar329));
   sVar318 = auVar298._0_2_;
   sVar416 = auVar298._2_2_;
   cVar5 = ( 0 < sVar416 ) * ( sVar416 < 0x100 ) * auVar298[2] - ( 0xff < sVar416 );
   auVar332._0_10_ = CONCAT19(cVar5, CONCAT18(( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar298[0] - ( 0xff < sVar318 ), uVar330));
   sVar318 = auVar298._4_2_;
   auVar332[10] = ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar298[4] - ( 0xff < sVar318 );
   sVar318 = auVar298._6_2_;
   cVar6 = ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar298[6] - ( 0xff < sVar318 );
   auVar332[0xb] = cVar6;
   sVar318 = auVar298._8_2_;
   auVar333[0xc] = ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar298[8] - ( 0xff < sVar318 );
   auVar333._0_12_ = auVar332;
   sVar318 = auVar298._10_2_;
   cVar7 = ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar298[10] - ( 0xff < sVar318 );
   auVar333[0xd] = cVar7;
   sVar318 = auVar298._12_2_;
   auVar519[0xe] = ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar298[0xc] - ( 0xff < sVar318 );
   auVar519._0_14_ = auVar333;
   sVar318 = auVar298._14_2_;
   cVar8 = ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar298[0xe] - ( 0xff < sVar318 );
   auVar519[0xf] = cVar8;
   uVar445 = local_228._0_2_ >> 8;
   uVar464 = local_228._2_2_ >> 8;
   uVar465 = local_228._4_2_ >> 8;
   uVar466 = local_228._6_2_ >> 8;
   uVar467 = local_228._8_2_ >> 8;
   uVar468 = local_228._10_2_ >> 8;
   uVar469 = local_228._12_2_ >> 8;
   uVar470 = local_228._14_2_ >> 8;
   auVar334 = local_238 & auVar516;
   sVar318 = auVar334._0_2_;
   sVar416 = auVar334._2_2_;
   bVar242 = ( 0 < sVar416 ) * ( sVar416 < 0x100 ) * auVar334[2] - ( 0xff < sVar416 );
   sVar416 = auVar334._4_2_;
   sVar56 = auVar334._6_2_;
   cVar9 = ( 0 < sVar56 ) * ( sVar56 < 0x100 ) * auVar334[6] - ( 0xff < sVar56 );
   uVar286 = CONCAT13(cVar9, CONCAT12(( 0 < sVar416 ) * ( sVar416 < 0x100 ) * auVar334[4] - ( 0xff < sVar416 ), CONCAT11(bVar242, ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar334[0] - ( 0xff < sVar318 ))));
   sVar318 = auVar334._8_2_;
   sVar416 = auVar334._10_2_;
   cVar10 = ( 0 < sVar416 ) * ( sVar416 < 0x100 ) * auVar334[10] - ( 0xff < sVar416 );
   uVar294 = CONCAT15(cVar10, CONCAT14(( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar334[8] - ( 0xff < sVar318 ), uVar286));
   sVar318 = auVar334._12_2_;
   sVar416 = auVar334._14_2_;
   cVar11 = ( 0 < sVar416 ) * ( sVar416 < 0x100 ) * auVar334[0xe] - ( 0xff < sVar416 );
   uVar295 = CONCAT17(cVar11, CONCAT16(( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar334[0xc] - ( 0xff < sVar318 ), uVar294));
   sVar318 = auVar364._0_2_;
   sVar416 = auVar364._2_2_;
   cVar12 = ( 0 < sVar416 ) * ( sVar416 < 0x100 ) * auVar364[2] - ( 0xff < sVar416 );
   auVar296._0_10_ = CONCAT19(cVar12, CONCAT18(( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar364[0] - ( 0xff < sVar318 ), uVar295));
   sVar318 = auVar364._4_2_;
   auVar296[10] = ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar364[4] - ( 0xff < sVar318 );
   sVar318 = auVar364._6_2_;
   cVar13 = ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar364[6] - ( 0xff < sVar318 );
   auVar296[0xb] = cVar13;
   sVar318 = auVar364._8_2_;
   auVar297[0xc] = ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar364[8] - ( 0xff < sVar318 );
   auVar297._0_12_ = auVar296;
   sVar318 = auVar364._10_2_;
   cVar14 = ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar364[10] - ( 0xff < sVar318 );
   auVar297[0xd] = cVar14;
   sVar318 = auVar364._12_2_;
   auVar298[0xe] = ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar364[0xc] - ( 0xff < sVar318 );
   auVar298._0_14_ = auVar297;
   sVar318 = auVar364._14_2_;
   cVar15 = ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar364[0xe] - ( 0xff < sVar318 );
   auVar298[0xf] = cVar15;
   auVar364 = auVar516 & auVar298;
   uVar285 = (ushort)bVar242;
   uVar315 = ( ushort )((uint)uVar286 >> 0x18);
   uVar316 = ( ushort )((uint6)uVar294 >> 0x28);
   uVar317 = ( ushort )((ulong)uVar295 >> 0x38);
   uVar319 = ( ushort )((unkuint10)auVar296._0_10_ >> 0x48);
   uVar320 = auVar296._10_2_ >> 8;
   uVar321 = auVar297._12_2_ >> 8;
   uVar322 = auVar298._14_2_ >> 8;
   auVar334 = auVar516 & auVar519;
   uVar323 = (ushort)bVar220;
   uVar346 = ( ushort )((uint)uVar325 >> 0x18);
   uVar348 = ( ushort )((uint6)uVar329 >> 0x28);
   uVar350 = ( ushort )((ulong)uVar330 >> 0x38);
   uVar353 = ( ushort )((unkuint10)auVar332._0_10_ >> 0x48);
   uVar355 = auVar332._10_2_ >> 8;
   uVar357 = auVar333._12_2_ >> 8;
   uVar359 = auVar519._14_2_ >> 8;
   sVar318 = auVar334._0_2_;
   sVar416 = auVar334._2_2_;
   sVar56 = auVar334._4_2_;
   sVar57 = auVar334._6_2_;
   sVar60 = auVar334._8_2_;
   sVar63 = auVar334._10_2_;
   sVar66 = auVar334._12_2_;
   sVar352 = auVar334._14_2_;
   cVar16 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar334[0xe] - ( 0xff < sVar352 );
   sVar352 = auVar364._0_2_;
   bVar17 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar364[0] - ( 0xff < sVar352 );
   sVar352 = auVar364._2_2_;
   bVar18 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar364[2] - ( 0xff < sVar352 );
   uVar180 = CONCAT12(bVar18, CONCAT11(bVar17, cVar16));
   sVar352 = auVar364._4_2_;
   bVar19 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar364[4] - ( 0xff < sVar352 );
   uVar250 = CONCAT13(bVar19, uVar180);
   sVar352 = auVar364._6_2_;
   bVar20 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar364[6] - ( 0xff < sVar352 );
   uVar200 = CONCAT14(bVar20, uVar250);
   sVar352 = auVar364._8_2_;
   bVar21 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar364[8] - ( 0xff < sVar352 );
   auVar208[5] = bVar21;
   auVar208._0_5_ = uVar200;
   sVar352 = auVar364._10_2_;
   bVar22 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar364[10] - ( 0xff < sVar352 );
   sVar352 = auVar364._12_2_;
   bVar23 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar364[0xc] - ( 0xff < sVar352 );
   sVar352 = auVar364._14_2_;
   bVar24 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar364[0xe] - ( 0xff < sVar352 );
   cVar8 = ( uVar359 != 0 ) * ( uVar359 < 0x100 ) * cVar8 - ( 0xff < uVar359 );
   bVar25 = ( uVar285 != 0 ) * ( uVar285 < 0x100 ) * bVar242 - ( 0xff < uVar285 );
   bVar242 = ( uVar315 != 0 ) * ( uVar315 < 0x100 ) * cVar9 - ( 0xff < uVar315 );
   uVar181 = CONCAT12(bVar242, CONCAT11(bVar25, cVar8));
   bVar26 = ( uVar316 != 0 ) * ( uVar316 < 0x100 ) * cVar10 - ( 0xff < uVar316 );
   uVar251 = CONCAT13(bVar26, uVar181);
   bVar27 = ( uVar317 != 0 ) * ( uVar317 < 0x100 ) * cVar11 - ( 0xff < uVar317 );
   uVar201 = CONCAT14(bVar27, uVar251);
   bVar28 = ( uVar319 != 0 ) * ( uVar319 < 0x100 ) * cVar12 - ( 0xff < uVar319 );
   auVar212[5] = bVar28;
   auVar212._0_5_ = uVar201;
   bVar29 = ( uVar320 != 0 ) * ( uVar320 < 0x100 ) * cVar13 - ( 0xff < uVar320 );
   bVar30 = ( uVar321 != 0 ) * ( uVar321 < 0x100 ) * cVar14 - ( 0xff < uVar321 );
   bVar31 = ( uVar322 != 0 ) * ( uVar322 < 0x100 ) * cVar15 - ( 0xff < uVar322 );
   auVar208._6_8_ = 0;
   auVar79[0xe] = cVar16;
   auVar79._0_14_ = auVar208 << 0x38;
   uVar209 = CONCAT26(auVar79._13_2_, CONCAT15(( 0 < sVar66 ) * ( sVar66 < 0x100 ) * auVar334[0xc] - ( 0xff < sVar66 ), uVar200));
   auVar202._4_8_ = 0;
   auVar202._0_4_ = uVar250;
   auVar99._12_3_ = ( int3 )((ulong)uVar209 >> 0x28);
   auVar99._0_12_ = auVar202 << 0x38;
   uVar250 = auVar99._11_4_;
   uVar330 = CONCAT44(uVar250, CONCAT13(( 0 < sVar63 ) * ( sVar63 < 0x100 ) * auVar334[10] - ( 0xff < sVar63 ), uVar180));
   auVar118._10_5_ = ( int5 )((ulong)uVar330 >> 0x18);
   auVar118._0_10_ = (unkuint10)CONCAT11(bVar17, cVar16) << 0x38;
   uVar295 = CONCAT62(auVar118._9_6_, CONCAT11(( 0 < sVar60 ) * ( sVar60 < 0x100 ) * auVar334[8] - ( 0xff < sVar60 ), cVar16));
   auVar127._7_8_ = 0;
   auVar127._0_7_ = ( uint7 )((ulong)uVar295 >> 8);
   Var128 = CONCAT81(SUB158(auVar127 << 0x40, 7), ( 0 < sVar57 ) * ( sVar57 < 0x100 ) * auVar334[6] - ( 0xff < sVar57 ));
   auVar182._9_6_ = 0;
   auVar182._0_9_ = Var128;
   auVar129._1_10_ = SUB1510(auVar182 << 0x30, 5);
   auVar129[0] = ( 0 < sVar56 ) * ( sVar56 < 0x100 ) * auVar334[4] - ( 0xff < sVar56 );
   auVar183._11_4_ = 0;
   auVar183._0_11_ = auVar129;
   auVar130._1_12_ = SUB1512(auVar183 << 0x20, 3);
   auVar130[0] = ( 0 < sVar416 ) * ( sVar416 < 0x100 ) * auVar334[2] - ( 0xff < sVar416 );
   uVar285 = CONCAT11(0, ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar334[0] - ( 0xff < sVar318 ));
   auVar124._2_13_ = auVar130;
   auVar124._0_2_ = uVar285;
   uVar234 = CONCAT13(0, CONCAT12(bVar18, (ushort)bVar17));
   uVar324 = local_248._0_2_ >> 8;
   uVar347 = local_248._2_2_ >> 8;
   uVar349 = local_248._4_2_ >> 8;
   uVar351 = local_248._6_2_ >> 8;
   uVar354 = local_248._8_2_ >> 8;
   uVar356 = local_248._10_2_ >> 8;
   uVar358 = local_248._12_2_ >> 8;
   uVar360 = local_248._14_2_ >> 8;
   uVar315 = (ushort)bStack_257;
   uVar316 = ( ushort )(( (uint)bStack_255 << 0x18 ) >> 0x18);
   uVar317 = auStack_254._0_2_ >> 8;
   uVar319 = auStack_254._2_2_ >> 8;
   uVar320 = auStack_254._4_2_ >> 8;
   uVar321 = auStack_254._6_2_ >> 8;
   uVar322 = auStack_254._8_2_ >> 8;
   uVar359 = auStack_254._10_2_ >> 8;
   auVar364[1] = ( uVar316 != 0 ) * ( uVar316 < 0x100 ) * bStack_255 - ( 0xff < uVar316 );
   auVar364[0] = ( uVar315 != 0 ) * ( uVar315 < 0x100 ) * bStack_257 - ( 0xff < uVar315 );
   auVar364[2] = ( uVar317 != 0 ) * ( uVar317 < 0x100 ) * auStack_254[1] - ( 0xff < uVar317 );
   auVar364[3] = ( uVar319 != 0 ) * ( uVar319 < 0x100 ) * auStack_254[3] - ( 0xff < uVar319 );
   auVar364[4] = ( uVar320 != 0 ) * ( uVar320 < 0x100 ) * auStack_254[5] - ( 0xff < uVar320 );
   auVar364[5] = ( uVar321 != 0 ) * ( uVar321 < 0x100 ) * auStack_254[7] - ( 0xff < uVar321 );
   auVar364[6] = ( uVar322 != 0 ) * ( uVar322 < 0x100 ) * auStack_254[9] - ( 0xff < uVar322 );
   auVar364[7] = ( uVar359 != 0 ) * ( uVar359 < 0x100 ) * auStack_254[0xb] - ( 0xff < uVar359 );
   auVar364[8] = ( uVar324 != 0 ) * ( uVar324 < 0x100 ) * local_248[1] - ( 0xff < uVar324 );
   auVar364[9] = ( uVar347 != 0 ) * ( uVar347 < 0x100 ) * local_248[3] - ( 0xff < uVar347 );
   auVar364[10] = ( uVar349 != 0 ) * ( uVar349 < 0x100 ) * local_248[5] - ( 0xff < uVar349 );
   auVar364[0xb] = ( uVar351 != 0 ) * ( uVar351 < 0x100 ) * local_248[7] - ( 0xff < uVar351 );
   auVar364[0xc] = ( uVar354 != 0 ) * ( uVar354 < 0x100 ) * local_248[9] - ( 0xff < uVar354 );
   auVar364[0xd] = ( uVar356 != 0 ) * ( uVar356 < 0x100 ) * local_248[0xb] - ( 0xff < uVar356 );
   auVar364[0xe] = ( uVar358 != 0 ) * ( uVar358 < 0x100 ) * local_248[0xd] - ( 0xff < uVar358 );
   auVar364[0xf] = ( uVar360 != 0 ) * ( uVar360 < 0x100 ) * local_248[0xf] - ( 0xff < uVar360 );
   auVar364 = auVar364 & auVar516;
   uVar315 = local_238._0_2_ >> 8;
   uVar316 = local_238._2_2_ >> 8;
   uVar317 = local_238._4_2_ >> 8;
   uVar319 = local_238._6_2_ >> 8;
   uVar320 = local_238._8_2_ >> 8;
   uVar321 = local_238._10_2_ >> 8;
   uVar322 = local_238._12_2_ >> 8;
   uVar359 = local_238._14_2_ >> 8;
   auVar335[1] = ( uVar316 != 0 ) * ( uVar316 < 0x100 ) * local_238[3] - ( 0xff < uVar316 );
   auVar335[0] = ( uVar315 != 0 ) * ( uVar315 < 0x100 ) * local_238[1] - ( 0xff < uVar315 );
   auVar335[2] = ( uVar317 != 0 ) * ( uVar317 < 0x100 ) * local_238[5] - ( 0xff < uVar317 );
   auVar335[3] = ( uVar319 != 0 ) * ( uVar319 < 0x100 ) * local_238[7] - ( 0xff < uVar319 );
   auVar335[4] = ( uVar320 != 0 ) * ( uVar320 < 0x100 ) * local_238[9] - ( 0xff < uVar320 );
   auVar335[5] = ( uVar321 != 0 ) * ( uVar321 < 0x100 ) * local_238[0xb] - ( 0xff < uVar321 );
   auVar335[6] = ( uVar322 != 0 ) * ( uVar322 < 0x100 ) * local_238[0xd] - ( 0xff < uVar322 );
   auVar335[7] = ( uVar359 != 0 ) * ( uVar359 < 0x100 ) * local_238[0xf] - ( 0xff < uVar359 );
   auVar335[8] = ( uVar445 != 0 ) * ( uVar445 < 0x100 ) * local_228[1] - ( 0xff < uVar445 );
   auVar335[9] = ( uVar464 != 0 ) * ( uVar464 < 0x100 ) * local_228[3] - ( 0xff < uVar464 );
   auVar335[10] = ( uVar465 != 0 ) * ( uVar465 < 0x100 ) * local_228[5] - ( 0xff < uVar465 );
   auVar335[0xb] = ( uVar466 != 0 ) * ( uVar466 < 0x100 ) * local_228[7] - ( 0xff < uVar466 );
   auVar335[0xc] = ( uVar467 != 0 ) * ( uVar467 < 0x100 ) * local_228[9] - ( 0xff < uVar467 );
   auVar335[0xd] = ( uVar468 != 0 ) * ( uVar468 < 0x100 ) * local_228[0xb] - ( 0xff < uVar468 );
   auVar335[0xe] = ( uVar469 != 0 ) * ( uVar469 < 0x100 ) * local_228[0xd] - ( 0xff < uVar469 );
   auVar335[0xf] = ( uVar470 != 0 ) * ( uVar470 < 0x100 ) * local_228[0xf] - ( 0xff < uVar470 );
   auVar335 = auVar335 & auVar516;
   uVar320 = ( ushort )((ulong)uVar295 >> 8);
   uVar321 = ( ushort )((ulong)uVar330 >> 0x18);
   sVar318 = auVar364._0_2_;
   sVar416 = auVar364._2_2_;
   sVar56 = auVar364._4_2_;
   sVar57 = auVar364._6_2_;
   sVar60 = auVar364._8_2_;
   sVar63 = auVar364._10_2_;
   sVar66 = auVar364._12_2_;
   sVar352 = auVar364._14_2_;
   cVar9 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar364[0xe] - ( 0xff < sVar352 );
   sVar352 = auVar335._0_2_;
   bVar32 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar335[0] - ( 0xff < sVar352 );
   sVar352 = auVar335._2_2_;
   bVar33 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar335[2] - ( 0xff < sVar352 );
   uVar180 = CONCAT12(bVar33, CONCAT11(bVar32, cVar9));
   sVar352 = auVar335._4_2_;
   bVar34 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar335[4] - ( 0xff < sVar352 );
   uVar275 = CONCAT13(bVar34, uVar180);
   sVar352 = auVar335._6_2_;
   bVar35 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar335[6] - ( 0xff < sVar352 );
   uVar200 = CONCAT14(bVar35, uVar275);
   sVar352 = auVar335._8_2_;
   bVar36 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar335[8] - ( 0xff < sVar352 );
   auVar210[5] = bVar36;
   auVar210._0_5_ = uVar200;
   sVar352 = auVar335._10_2_;
   bVar37 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar335[10] - ( 0xff < sVar352 );
   sVar352 = auVar335._12_2_;
   bVar38 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar335[0xc] - ( 0xff < sVar352 );
   sVar352 = auVar335._14_2_;
   bVar39 = ( 0 < sVar352 ) * ( sVar352 < 0x100 ) * auVar335[0xe] - ( 0xff < sVar352 );
   sVar352 = (short)Var128;
   auVar91._10_2_ = 0;
   auVar91._0_10_ = auVar124._0_10_;
   auVar91._12_2_ = sVar352;
   uVar217 = CONCAT42(auVar91._10_4_, auVar129._0_2_);
   auVar131._6_8_ = 0;
   auVar131._0_6_ = uVar217;
   auVar210._6_8_ = 0;
   auVar80[0xe] = cVar9;
   auVar80._0_14_ = auVar210 << 0x38;
   uVar211 = CONCAT26(auVar80._13_2_, CONCAT15(( 0 < sVar66 ) * ( sVar66 < 0x100 ) * auVar364[0xc] - ( 0xff < sVar66 ), uVar200));
   auVar203._4_8_ = 0;
   auVar203._0_4_ = uVar275;
   auVar100._12_3_ = ( int3 )((ulong)uVar211 >> 0x28);
   auVar100._0_12_ = auVar203 << 0x38;
   uVar275 = auVar100._11_4_;
   uVar330 = CONCAT44(uVar275, CONCAT13(( 0 < sVar63 ) * ( sVar63 < 0x100 ) * auVar364[10] - ( 0xff < sVar63 ), uVar180));
   auVar119._10_5_ = ( int5 )((ulong)uVar330 >> 0x18);
   auVar119._0_10_ = (unkuint10)CONCAT11(bVar32, cVar9) << 0x38;
   uVar295 = CONCAT62(auVar119._9_6_, CONCAT11(( 0 < sVar60 ) * ( sVar60 < 0x100 ) * auVar364[8] - ( 0xff < sVar60 ), cVar9));
   auVar132._7_8_ = 0;
   auVar132._0_7_ = ( uint7 )((ulong)uVar295 >> 8);
   Var128 = CONCAT81(SUB158(auVar132 << 0x40, 7), ( 0 < sVar57 ) * ( sVar57 < 0x100 ) * auVar364[6] - ( 0xff < sVar57 ));
   auVar184._9_6_ = 0;
   auVar184._0_9_ = Var128;
   auVar133._1_10_ = SUB1510(auVar184 << 0x30, 5);
   auVar133[0] = ( 0 < sVar56 ) * ( sVar56 < 0x100 ) * auVar364[4] - ( 0xff < sVar56 );
   auVar185._11_4_ = 0;
   auVar185._0_11_ = auVar133;
   auVar134._1_12_ = SUB1512(auVar185 << 0x20, 3);
   auVar134[0] = ( 0 < sVar416 ) * ( sVar416 < 0x100 ) * auVar364[2] - ( 0xff < sVar416 );
   uVar315 = CONCAT11(0, ( 0 < sVar318 ) * ( sVar318 < 0x100 ) * auVar364[0] - ( 0xff < sVar318 ));
   auVar125._2_13_ = auVar134;
   auVar125._0_2_ = uVar315;
   auVar105[0xc] = bVar20;
   auVar105._0_12_ = ZEXT112(bVar21) << 0x40;
   auVar106._10_3_ = auVar105._10_3_;
   auVar106._0_10_ = (unkuint10)bVar19 << 0x40;
   auVar135._5_8_ = 0;
   auVar135._0_5_ = auVar106._8_5_;
   auVar107[4] = bVar18;
   auVar107._0_4_ = uVar234;
   auVar107[5] = 0;
   auVar107._6_7_ = SUB137(auVar135 << 0x40, 6);
   uVar244 = CONCAT13(0, CONCAT12(bVar33, (ushort)bVar32));
   uVar317 = ( ushort )((ulong)uVar295 >> 8);
   uVar319 = ( ushort )((ulong)uVar330 >> 0x18);
   sVar416 = (short)Var128;
   auVar81._10_2_ = 0;
   auVar81._0_10_ = auVar125._0_10_;
   auVar81._12_2_ = sVar416;
   uVar218 = CONCAT42(auVar81._10_4_, auVar133._0_2_);
   auVar136._6_8_ = 0;
   auVar136._0_6_ = uVar218;
   auVar108._4_2_ = auVar134._0_2_;
   auVar108._0_4_ = auVar125._0_4_;
   auVar108._6_8_ = SUB148(auVar136 << 0x40, 6);
   uVar233 = CONCAT13(0, CONCAT12(bVar242, (ushort)bVar25));
   auVar212._6_8_ = 0;
   auVar82[0xe] = cVar8;
   auVar82._0_14_ = auVar212 << 0x38;
   uVar213 = CONCAT26(auVar82._13_2_, CONCAT15(( uVar357 != 0 ) * ( uVar357 < 0x100 ) * cVar7 - ( 0xff < uVar357 ), uVar201));
   auVar204._4_8_ = 0;
   auVar204._0_4_ = uVar251;
   auVar101._12_3_ = ( int3 )((ulong)uVar213 >> 0x28);
   auVar101._0_12_ = auVar204 << 0x38;
   uVar251 = auVar101._11_4_;
   uVar330 = CONCAT44(uVar251, CONCAT13(( uVar355 != 0 ) * ( uVar355 < 0x100 ) * cVar6 - ( 0xff < uVar355 ), uVar181));
   auVar120._10_5_ = ( int5 )((ulong)uVar330 >> 0x18);
   auVar120._0_10_ = (unkuint10)CONCAT11(bVar25, cVar8) << 0x38;
   uVar295 = CONCAT62(auVar120._9_6_, CONCAT11(( uVar353 != 0 ) * ( uVar353 < 0x100 ) * cVar5 - ( 0xff < uVar353 ), cVar8));
   auVar137._7_8_ = 0;
   auVar137._0_7_ = ( uint7 )((ulong)uVar295 >> 8);
   Var128 = CONCAT81(SUB158(auVar137 << 0x40, 7), ( uVar350 != 0 ) * ( uVar350 < 0x100 ) * cVar4 - ( 0xff < uVar350 ));
   auVar186._9_6_ = 0;
   auVar186._0_9_ = Var128;
   auVar138._1_10_ = SUB1510(auVar186 << 0x30, 5);
   auVar138[0] = ( uVar348 != 0 ) * ( uVar348 < 0x100 ) * cVar267 - ( 0xff < uVar348 );
   auVar187._11_4_ = 0;
   auVar187._0_11_ = auVar138;
   auVar139._1_12_ = SUB1512(auVar187 << 0x20, 3);
   auVar139[0] = ( uVar346 != 0 ) * ( uVar346 < 0x100 ) * cVar3 - ( 0xff < uVar346 );
   uVar316 = CONCAT11(0, ( uVar323 != 0 ) * ( uVar323 < 0x100 ) * bVar220 - ( 0xff < uVar323 ));
   auVar126._2_13_ = auVar139;
   auVar126._0_2_ = uVar316;
   auVar109[0xc] = bVar35;
   auVar109._0_12_ = ZEXT112(bVar36) << 0x40;
   auVar110._10_3_ = auVar109._10_3_;
   auVar110._0_10_ = (unkuint10)bVar34 << 0x40;
   auVar140._5_8_ = 0;
   auVar140._0_5_ = auVar110._8_5_;
   auVar111[4] = bVar33;
   auVar111._0_4_ = uVar244;
   auVar111[5] = 0;
   auVar111._6_7_ = SUB137(auVar140 << 0x40, 6);
   uVar322 = ( ushort )((ulong)uVar295 >> 8);
   uVar359 = ( ushort )((ulong)uVar330 >> 0x18);
   sVar318 = (short)Var128;
   auVar83._10_2_ = 0;
   auVar83._0_10_ = auVar126._0_10_;
   auVar83._12_2_ = sVar318;
   uVar219 = CONCAT42(auVar83._10_4_, auVar138._0_2_);
   auVar141._6_8_ = 0;
   auVar141._0_6_ = uVar219;
   auVar112._4_2_ = auVar139._0_2_;
   auVar112._0_4_ = auVar126._0_4_;
   auVar112._6_8_ = SUB148(auVar141 << 0x40, 6);
   auVar113[0xc] = bVar27;
   auVar113._0_12_ = ZEXT112(bVar28) << 0x40;
   auVar114._10_3_ = auVar113._10_3_;
   auVar114._0_10_ = (unkuint10)bVar26 << 0x40;
   auVar142._5_8_ = 0;
   auVar142._0_5_ = auVar114._8_5_;
   auVar115[4] = bVar242;
   auVar115._0_4_ = uVar233;
   auVar115[5] = 0;
   auVar115._6_7_ = SUB137(auVar142 << 0x40, 6);
   iVar287 = ( auVar126._0_4_ & 0xffff ) + (uint)uVar322 + ( uVar233 & 0xffff ) + (uint)bVar28 + (int)uVar219 + ( uVar251 >> 8 & 0xffff ) + auVar114._8_4_ + (uint)bVar30 + auVar112._4_4_ + (uint)uVar359 + auVar115._4_4_ + (uint)bVar29 + ( auVar83._10_4_ >> 0x10 ) + ( uVar251 >> 0x18 ) + ( uint )(uint3)(auVar113._10_3_ >> 0x10) + (uint)bVar31;
   iVar361 = ( auVar125._0_4_ & 0xffff ) + (uint)uVar317 + ( uVar244 & 0xffff ) + (uint)bVar36 + (int)uVar218 + ( uVar275 >> 8 & 0xffff ) + auVar110._8_4_ + (uint)bVar38 + auVar108._4_4_ + (uint)uVar319 + auVar111._4_4_ + (uint)bVar37 + ( auVar81._10_4_ >> 0x10 ) + ( uVar275 >> 0x18 ) + ( uint )(uint3)(auVar109._10_3_ >> 0x10) + (uint)bVar39;
   iVar326 = (uint)uVar285 + (uint)uVar320 + ( uVar234 & 0xffff ) + (uint)bVar21 + (int)uVar217 + ( uVar250 >> 8 & 0xffff ) + auVar106._8_4_ + (uint)bVar23 + (int)CONCAT82(SUB148(auVar131 << 0x40, 6), auVar130._0_2_) + (uint)uVar321 + auVar107._4_4_ + (uint)bVar22 + ( auVar91._10_4_ >> 0x10 ) + ( uVar250 >> 0x18 ) + ( uint )(uint3)(auVar105._10_3_ >> 0x10) + (uint)bVar24;
   local_158._8_8_ = _UNK_00106c88;
   local_158._0_8_ = __LC7;
   puVar235 = (ushort*)&local_258;
   while (true) {
      uVar268 = uVar268 + 1;
      iVar243 = ( uint ) * (byte*)( (long)puVar235 + 1 ) * 0x10 - iVar361;
      iVar249 = ( uint )(byte) * puVar235 * 0x10 - iVar326;
      iVar260 = (uint)(byte)puVar235[1] * 0x10 - iVar287;
      iVar280 = iVar280 + iVar260 * iVar232;
      iVar255 = iVar255 + iVar260 * iVar231;
      iVar274 = iVar274 + iVar243 * iVar231;
      iVar276 = iVar276 + iVar243 * iVar232;
      iVar271 = iVar271 + iVar231 * iVar249;
      iVar257 = iVar257 + iVar249 * iVar232;
      if (uVar268 == 0x10) break;
      iVar231 = *(int*)( local_158 + ( ulong )(uVar268 & 3) * 4 );
      iVar232 = *(int*)( local_158 + (long)( (int)uVar268 >> 2 ) * 4 );
      puVar235 = puVar235 + 2;
   }
;
   fVar327 = (float)iVar280 * _LC8;
   fVar328 = (float)iVar276 * _LC8;
   __x = (float)iVar257 * _LC8;
   __x_00 = (float)iVar274 * _LC8;
   fVar418 = (float)iVar255 * _LC8;
   __x_01 = (float)iVar271 * _LC8;
   __z_00 = (float)iVar361 * _LC9;
   __z = (float)iVar287 * _LC9;
   __z_01 = (float)iVar326 * _LC9;
   fVar288 = fmaf(fVar418, _LC10, __z);
   fVar289 = fmaf(fVar327, _LC10, fVar288);
   fVar290 = fmaf(__x_00, _LC10, __z_00);
   fVar291 = fmaf(fVar328, _LC10, fVar290);
   fVar292 = fmaf(__x_01, _LC10, __z_01);
   fVar293 = fmaf(__x, _LC10, fVar292);
   fVar288 = fmaf(fVar327, _LC11, fVar288);
   fVar290 = fmaf(fVar328, _LC11, fVar290);
   fVar292 = fmaf(__x, _LC11, fVar292);
   fVar418 = fmaf(fVar418, _LC11, __z);
   fVar418 = fmaf(fVar327, _LC10, fVar418);
   fVar327 = fmaf(__x_00, _LC11, __z_00);
   fVar327 = fmaf(fVar328, _LC10, fVar327);
   fVar328 = fmaf(__x_01, _LC11, __z_01);
   fVar328 = fmaf(__x, _LC10, fVar328);
   iVar231 = (int)fVar289;
   local_3d0 = 0;
   if (0x3ff < iVar231) {
      iVar231 = 0x3ff;
   }

   if (iVar231 < 0) {
      iVar231 = 0;
   }

   iVar232 = iVar231 + -0xf >> 1;
   iVar231 = iVar232 + 0xb;
   iVar255 = (int)fVar291;
   uVar250 = ( iVar231 - ( iVar231 >> 7 ) ) - ( iVar232 + 4 >> 7 ) >> 3;
   uVar275 = uVar250 & 0xff;
   if (0x3ff < iVar255) {
      iVar255 = 0x3ff;
   }

   if (iVar255 < 0) {
      iVar255 = 0;
   }

   iVar232 = iVar255 + -0xf >> 1;
   iVar231 = iVar232 + 9;
   iVar255 = (int)fVar293;
   uVar251 = ( iVar231 - ( iVar231 >> 8 ) ) - ( iVar232 + 6 >> 8 ) >> 2;
   uVar268 = uVar251 & 0xff;
   if (0x3ff < iVar255) {
      iVar255 = 0x3ff;
   }

   if (iVar255 < 0) {
      iVar255 = 0;
   }

   iVar232 = iVar255 + -0xf >> 1;
   iVar231 = iVar232 + 0xb;
   uVar233 = ( iVar231 - ( iVar231 >> 7 ) ) - ( iVar232 + 4 >> 7 ) >> 3;
   uVar234 = uVar233 & 0xff;
   iVar231 = (int)fVar288;
   if (0x3ff < (int)fVar288) {
      iVar231 = 0x3ff;
   }

   if (iVar231 < 0) {
      iVar231 = 0;
   }

   iVar232 = iVar231 + -0xf >> 1;
   iVar231 = iVar232 + 0xb;
   uVar244 = ( iVar231 - ( iVar231 >> 7 ) ) - ( iVar232 + 4 >> 7 ) >> 3;
   uVar272 = uVar244 & 0xff;
   iVar231 = (int)fVar290;
   if (0x3ff < (int)fVar290) {
      iVar231 = 0x3ff;
   }

   if (iVar231 < 0) {
      iVar231 = 0;
   }

   iVar232 = iVar231 + -0xf >> 1;
   iVar231 = iVar232 + 9;
   uVar256 = ( iVar231 - ( iVar231 >> 8 ) ) - ( iVar232 + 6 >> 8 ) >> 2 & 0xff;
   iVar231 = (int)fVar292;
   if (0x3ff < (int)fVar292) {
      iVar231 = 0x3ff;
   }

   if (iVar231 < 0) {
      iVar231 = 0;
   }

   iVar232 = iVar231 + -0xf >> 1;
   iVar231 = iVar232 + 0xb;
   uVar261 = ( iVar231 - ( iVar231 >> 7 ) ) - ( iVar232 + 4 >> 7 ) >> 3 & 0xff;
   iVar231 = (int)fVar418;
   if (0x3ff < (int)fVar418) {
      iVar231 = 0x3ff;
   }

   if (iVar231 < 0) {
      iVar231 = 0;
   }

   iVar232 = iVar231 + -0xf >> 1;
   iVar231 = iVar232 + 0xb;
   uVar281 = ( iVar231 - ( iVar231 >> 7 ) ) - ( iVar232 + 4 >> 7 ) >> 3 & 0xff;
   iVar231 = (int)fVar327;
   if (0x3ff < (int)fVar327) {
      iVar231 = 0x3ff;
   }

   if (iVar231 < 0) {
      iVar231 = 0;
   }

   iVar232 = iVar231 + -0xf >> 1;
   iVar231 = iVar232 + 9;
   uVar277 = ( iVar231 - ( iVar231 >> 8 ) ) - ( iVar232 + 6 >> 8 ) >> 2 & 0xff;
   iVar231 = (int)fVar328;
   if (0x3ff < (int)fVar328) {
      iVar231 = 0x3ff;
   }

   if (iVar231 < 0) {
      iVar231 = 0;
   }

   iVar232 = iVar231 + -0xf >> 1;
   iVar231 = iVar232 + 0xb;
   uVar258 = ( iVar231 - ( iVar231 >> 7 ) ) - ( iVar232 + 4 >> 7 ) >> 3 & 0xff;
   if (cVar40 != '\0') {
      uVar252 = (int)uVar275 >> 4 | uVar275 * 4;
      uVar266 = (int)uVar268 >> 6 | uVar268 * 2;
      uVar269 = (int)uVar234 >> 4 | uVar234 * 4;
      iVar231 = uVar252 * 4 + 2;
      iVar274 = uVar266 * 4 + 2;
      iVar276 = uVar269 * 4 + 2;
      iVar271 = ( (int)uVar272 >> 4 | uVar272 * 4 ) - uVar252;
      iVar280 = ( (int)uVar256 >> 6 | uVar256 * 2 ) - uVar266;
      iVar287 = ( (int)uVar261 >> 4 | uVar261 << 2 ) - uVar269;
      iVar361 = ( (int)uVar281 >> 4 | uVar281 * 4 ) - uVar252;
      auVar365._4_4_ = iVar361;
      auVar365._0_4_ = iVar361;
      auVar365._8_4_ = iVar361;
      auVar365._12_4_ = iVar361;
      iVar326 = ( (int)uVar277 >> 6 | uVar277 * 2 ) - uVar266;
      auVar446._4_4_ = iVar326;
      auVar446._0_4_ = iVar326;
      auVar446._8_4_ = iVar326;
      auVar446._12_4_ = iVar326;
      iVar232 = iVar271 * 2;
      uVar269 = ( (int)uVar258 >> 4 | uVar258 * 4 ) - uVar269;
      iVar257 = iVar271 * 3;
      iVar419 = SUB164(__LC12, 0);
      iVar243 = iVar361 * iVar419;
      iVar260 = SUB164(__LC12, 4);
      iVar361 = iVar361 * iVar260;
      uVar515 = SUB164(__LC12, 0xc);
      iVar249 = (int)( ( auVar365._8_8_ & 0xffffffff ) * (ulong)SUB164(__LC12, 8) );
      iVar417 = (int)( ( auVar365._8_8_ >> 0x20 ) * (ulong)uVar515 );
      auVar520._0_4_ = iVar231 + iVar243 >> 2;
      auVar520._4_4_ = iVar231 + iVar361 >> 2;
      auVar520._8_4_ = iVar231 + iVar249 >> 2;
      auVar520._12_4_ = iVar231 + iVar417 >> 2;
      auVar336._8_4_ = 0xffffffff;
      auVar336._0_8_ = 0xffffffffffffffff;
      auVar336._12_4_ = 0xffffffff;
      auVar299._0_4_ = -(uint)(__LC15 < auVar520._0_4_ - __LC14);
      auVar299._4_4_ = -(uint)(_UNK_00106cb4 < auVar520._4_4_ - _UNK_00106ca4);
      auVar299._8_4_ = -(uint)(_UNK_00106cb8 < auVar520._8_4_ - _UNK_00106ca8);
      auVar299._12_4_ = -(uint)(_UNK_00106cbc < auVar520._12_4_ - _UNK_00106cac);
      iVar255 = iVar280 * 2;
      auVar516 = auVar520 ^ auVar336;
      auVar366._0_4_ = iVar271 + iVar243 + iVar231 >> 2;
      auVar366._4_4_ = iVar271 + iVar361 + iVar231 >> 2;
      auVar366._8_4_ = iVar271 + iVar249 + iVar231 >> 2;
      auVar366._12_4_ = iVar271 + iVar417 + iVar231 >> 2;
      iVar271 = iVar280 * 3;
      auVar517._0_4_ = auVar516._0_4_ >> 0x1f;
      auVar517._4_4_ = auVar516._4_4_ >> 0x1f;
      auVar517._8_4_ = auVar516._8_4_ >> 0x1f;
      auVar517._12_4_ = auVar516._12_4_ >> 0x1f;
      auVar471._0_4_ = iVar232 + iVar243 + iVar231 >> 2;
      auVar471._4_4_ = iVar232 + iVar361 + iVar231 >> 2;
      auVar471._8_4_ = iVar232 + iVar249 + iVar231 >> 2;
      auVar471._12_4_ = iVar232 + iVar417 + iVar231 >> 2;
      auVar496._0_4_ = iVar257 + iVar243 + iVar231 >> 2;
      auVar496._4_4_ = iVar257 + iVar361 + iVar231 >> 2;
      auVar496._8_4_ = iVar257 + iVar249 + iVar231 >> 2;
      auVar496._12_4_ = iVar257 + iVar417 + iVar231 >> 2;
      auVar334 = ~auVar299 & auVar520 | auVar517 & auVar299;
      auVar516 = auVar366 ^ auVar336;
      auVar521._0_4_ = auVar516._0_4_ >> 0x1f;
      auVar521._4_4_ = auVar516._4_4_ >> 0x1f;
      auVar521._8_4_ = auVar516._8_4_ >> 0x1f;
      auVar521._12_4_ = auVar516._12_4_ >> 0x1f;
      auVar518._0_4_ = -(uint)(__LC15 < auVar366._0_4_ - __LC14);
      auVar518._4_4_ = -(uint)(_UNK_00106cb4 < auVar366._4_4_ - _UNK_00106ca4);
      auVar518._8_4_ = -(uint)(_UNK_00106cb8 < auVar366._8_4_ - _UNK_00106ca8);
      auVar518._12_4_ = -(uint)(_UNK_00106cbc < auVar366._12_4_ - _UNK_00106cac);
      auVar519 = ~auVar518 & auVar366 | auVar521 & auVar518;
      auVar516 = auVar471 ^ auVar336;
      auVar367._0_4_ = -(uint)(__LC15 < auVar471._0_4_ - __LC14);
      auVar367._4_4_ = -(uint)(_UNK_00106cb4 < auVar471._4_4_ - _UNK_00106ca4);
      auVar367._8_4_ = -(uint)(_UNK_00106cb8 < auVar471._8_4_ - _UNK_00106ca8);
      auVar367._12_4_ = -(uint)(_UNK_00106cbc < auVar471._12_4_ - _UNK_00106cac);
      auVar522._0_4_ = auVar516._0_4_ >> 0x1f;
      auVar522._4_4_ = auVar516._4_4_ >> 0x1f;
      auVar522._8_4_ = auVar516._8_4_ >> 0x1f;
      auVar522._12_4_ = auVar516._12_4_ >> 0x1f;
      auVar298 = ~auVar367 & auVar471 | auVar522 & auVar367;
      auVar516 = auVar496 ^ auVar336;
      auVar472._0_4_ = -(uint)(__LC15 < auVar496._0_4_ - __LC14);
      auVar472._4_4_ = -(uint)(_UNK_00106cb4 < auVar496._4_4_ - _UNK_00106ca4);
      auVar472._8_4_ = -(uint)(_UNK_00106cb8 < auVar496._8_4_ - _UNK_00106ca8);
      auVar472._12_4_ = -(uint)(_UNK_00106cbc < auVar496._12_4_ - _UNK_00106cac);
      auVar523._0_4_ = auVar516._0_4_ >> 0x1f;
      auVar523._4_4_ = auVar516._4_4_ >> 0x1f;
      auVar523._8_4_ = auVar516._8_4_ >> 0x1f;
      auVar523._12_4_ = auVar516._12_4_ >> 0x1f;
      auVar302._0_12_ = auVar334._0_12_;
      auVar302._12_2_ = auVar334._6_2_;
      auVar302._14_2_ = auVar519._6_2_;
      auVar301._12_4_ = auVar302._12_4_;
      auVar301._0_10_ = auVar334._0_10_;
      auVar301._10_2_ = auVar519._4_2_;
      auVar300._10_6_ = auVar301._10_6_;
      auVar300._0_8_ = auVar334._0_8_;
      auVar300._8_2_ = auVar334._4_2_;
      auVar143._2_8_ = auVar300._8_8_;
      auVar143._0_2_ = auVar519._2_2_;
      auVar143._10_6_ = 0;
      auVar310._0_2_ = auVar334._0_2_;
      auVar516._12_4_ = 0;
      auVar516._0_12_ = SUB1612(auVar143 << 0x30, 4);
      auVar516 = auVar516 << 0x20;
      auVar364 = ~auVar472 & auVar496 | auVar523 & auVar472;
      auVar306._0_12_ = auVar516._0_12_;
      auVar306._12_2_ = auVar519._2_2_;
      auVar306._14_2_ = auVar519._10_2_;
      auVar305._12_4_ = auVar306._12_4_;
      auVar305._0_10_ = auVar516._0_10_;
      auVar305._10_2_ = auVar334._10_2_;
      auVar304._10_6_ = auVar305._10_6_;
      auVar304._0_8_ = auVar516._0_8_;
      auVar304._8_2_ = auVar334._2_2_;
      auVar144._2_8_ = auVar304._8_8_;
      auVar144._0_2_ = auVar519._8_2_;
      auVar144._10_6_ = 0;
      auVar303._12_4_ = 0;
      auVar303._0_12_ = SUB1612(auVar144 << 0x30, 4);
      auVar303 = auVar303 << 0x20;
      auVar371._0_12_ = auVar298._0_12_;
      auVar371._12_2_ = auVar298._6_2_;
      auVar371._14_2_ = auVar364._6_2_;
      auVar370._12_4_ = auVar371._12_4_;
      auVar370._0_10_ = auVar298._0_10_;
      auVar370._10_2_ = auVar364._4_2_;
      auVar369._10_6_ = auVar370._10_6_;
      auVar369._0_8_ = auVar298._0_8_;
      auVar369._8_2_ = auVar298._4_2_;
      auVar145._2_8_ = auVar369._8_8_;
      auVar145._0_2_ = auVar364._2_2_;
      auVar145._10_6_ = 0;
      auVar379._0_2_ = auVar298._0_2_;
      auVar368._12_4_ = 0;
      auVar368._0_12_ = SUB1612(auVar145 << 0x30, 4);
      auVar368 = auVar368 << 0x20;
      auVar309._0_12_ = auVar303._0_12_;
      auVar309._12_2_ = auVar519._8_2_;
      auVar309._14_2_ = auVar519._12_2_;
      auVar308._12_4_ = auVar309._12_4_;
      auVar308._0_10_ = auVar303._0_10_;
      auVar308._10_2_ = auVar519._4_2_;
      auVar307._10_6_ = auVar308._10_6_;
      auVar307._0_8_ = auVar303._0_8_;
      auVar307._8_2_ = auVar519._0_2_;
      auVar310._8_8_ = auVar307._8_8_;
      auVar310._6_2_ = auVar334._12_2_;
      auVar310._4_2_ = auVar334._8_2_;
      auVar310._2_2_ = auVar334._4_2_;
      auVar375._0_12_ = auVar368._0_12_;
      auVar375._12_2_ = auVar364._2_2_;
      auVar375._14_2_ = auVar364._10_2_;
      auVar374._12_4_ = auVar375._12_4_;
      auVar374._0_10_ = auVar368._0_10_;
      auVar374._10_2_ = auVar298._10_2_;
      auVar373._10_6_ = auVar374._10_6_;
      auVar373._0_8_ = auVar368._0_8_;
      auVar373._8_2_ = auVar298._2_2_;
      auVar146._2_8_ = auVar373._8_8_;
      auVar146._0_2_ = auVar364._8_2_;
      auVar146._10_6_ = 0;
      auVar372._12_4_ = 0;
      auVar372._0_12_ = SUB1612(auVar146 << 0x30, 4);
      auVar372 = auVar372 << 0x20;
      auVar310 = auVar310 & __LC6;
      auVar378._0_12_ = auVar372._0_12_;
      auVar378._12_2_ = auVar364._8_2_;
      auVar378._14_2_ = auVar364._12_2_;
      auVar377._12_4_ = auVar378._12_4_;
      auVar377._0_10_ = auVar372._0_10_;
      auVar377._10_2_ = auVar364._4_2_;
      auVar376._10_6_ = auVar377._10_6_;
      auVar376._0_8_ = auVar372._0_8_;
      auVar376._8_2_ = auVar364._0_2_;
      auVar379._8_8_ = auVar376._8_8_;
      auVar379._6_2_ = auVar298._12_2_;
      auVar379._4_2_ = auVar298._8_2_;
      auVar379._2_2_ = auVar298._4_2_;
      auVar379 = auVar379 & __LC6;
      iVar243 = iVar326 * iVar419;
      sVar56 = auVar310._0_2_;
      sVar63 = auVar310._2_2_;
      sVar55 = auVar310._4_2_;
      sVar58 = auVar310._6_2_;
      sVar61 = auVar310._8_2_;
      sVar64 = auVar310._10_2_;
      sVar67 = auVar310._12_2_;
      sVar57 = auVar310._14_2_;
      cVar40 = ( 0 < sVar57 ) * ( sVar57 < 0x100 ) * auVar310[0xe] - ( 0xff < sVar57 );
      sVar57 = auVar379._0_2_;
      bVar220 = ( 0 < sVar57 ) * ( sVar57 < 0x100 ) * auVar379[0] - ( 0xff < sVar57 );
      uVar323 = CONCAT11(bVar220, cVar40);
      sVar57 = auVar379._2_2_;
      bVar41 = ( 0 < sVar57 ) * ( sVar57 < 0x100 ) * auVar379[2] - ( 0xff < sVar57 );
      uVar180 = CONCAT12(bVar41, uVar323);
      sVar57 = auVar379._4_2_;
      bVar42 = ( 0 < sVar57 ) * ( sVar57 < 0x100 ) * auVar379[4] - ( 0xff < sVar57 );
      uVar252 = CONCAT13(bVar42, uVar180);
      sVar57 = auVar379._6_2_;
      bVar43 = ( 0 < sVar57 ) * ( sVar57 < 0x100 ) * auVar379[6] - ( 0xff < sVar57 );
      uVar200 = CONCAT14(bVar43, uVar252);
      sVar57 = auVar379._8_2_;
      bVar44 = ( 0 < sVar57 ) * ( sVar57 < 0x100 ) * auVar379[8] - ( 0xff < sVar57 );
      auVar215[5] = bVar44;
      auVar215._0_5_ = uVar200;
      sVar71 = auVar379._10_2_;
      sVar73 = auVar379._12_2_;
      sVar76 = auVar379._14_2_;
      iVar419 = iVar419 * uVar269;
      iVar326 = iVar326 * iVar260;
      iVar249 = (int)( ( auVar446._8_8_ & 0xffffffff ) * (ulong)SUB164(__LC12, 8) );
      iVar361 = (int)( ( SUB168(__LC12, 8) & 0xffffffff ) * (ulong)uVar269 );
      iVar257 = (int)( ( auVar446._8_8_ >> 0x20 ) * (ulong)uVar515 );
      iVar231 = iVar287 * 2;
      iVar232 = iVar287 * 3;
      auVar473._0_4_ = iVar274 + iVar243 >> 2;
      auVar473._4_4_ = iVar274 + iVar326 >> 2;
      auVar473._8_4_ = iVar274 + iVar249 >> 2;
      auVar473._12_4_ = iVar274 + iVar257 >> 2;
      auVar447._0_4_ = -(uint)(__LC15 < auVar473._0_4_ - __LC14);
      auVar447._4_4_ = -(uint)(_UNK_00106cb4 < auVar473._4_4_ - _UNK_00106ca4);
      auVar447._8_4_ = -(uint)(_UNK_00106cb8 < auVar473._8_4_ - _UNK_00106ca8);
      auVar447._12_4_ = -(uint)(_UNK_00106cbc < auVar473._12_4_ - _UNK_00106cac);
      auVar497._0_4_ = iVar280 + iVar243 + iVar274 >> 2;
      auVar497._4_4_ = iVar280 + iVar326 + iVar274 >> 2;
      auVar497._8_4_ = iVar280 + iVar249 + iVar274 >> 2;
      auVar497._12_4_ = iVar280 + iVar257 + iVar274 >> 2;
      auVar516 = auVar473 ^ auVar336;
      auVar511._0_4_ = auVar516._0_4_ >> 0x1f;
      auVar511._4_4_ = auVar516._4_4_ >> 0x1f;
      auVar511._8_4_ = auVar516._8_4_ >> 0x1f;
      auVar511._12_4_ = auVar516._12_4_ >> 0x1f;
      auVar380._0_4_ = iVar255 + iVar243 + iVar274 >> 2;
      auVar380._4_4_ = iVar255 + iVar326 + iVar274 >> 2;
      auVar380._8_4_ = iVar255 + iVar249 + iVar274 >> 2;
      auVar380._12_4_ = iVar255 + iVar257 + iVar274 >> 2;
      auVar507._0_4_ = iVar271 + iVar243 + iVar274 >> 2;
      auVar507._4_4_ = iVar271 + iVar326 + iVar274 >> 2;
      auVar507._8_4_ = iVar271 + iVar249 + iVar274 >> 2;
      auVar507._12_4_ = iVar271 + iVar257 + iVar274 >> 2;
      auVar516 = ~auVar447 & auVar473 | auVar511 & auVar447;
      auVar334 = auVar497 ^ auVar336;
      auVar474._0_4_ = -(uint)(__LC15 < auVar497._0_4_ - __LC14);
      auVar474._4_4_ = -(uint)(_UNK_00106cb4 < auVar497._4_4_ - _UNK_00106ca4);
      auVar474._8_4_ = -(uint)(_UNK_00106cb8 < auVar497._8_4_ - _UNK_00106ca8);
      auVar474._12_4_ = -(uint)(_UNK_00106cbc < auVar497._12_4_ - _UNK_00106cac);
      auVar512._0_4_ = auVar334._0_4_ >> 0x1f;
      auVar512._4_4_ = auVar334._4_4_ >> 0x1f;
      auVar512._8_4_ = auVar334._8_4_ >> 0x1f;
      auVar512._12_4_ = auVar334._12_4_ >> 0x1f;
      auVar334 = ~auVar474 & auVar497 | auVar512 & auVar474;
      auVar298 = auVar380 ^ auVar336;
      auVar475._0_4_ = -(uint)(__LC15 < auVar380._0_4_ - __LC14);
      auVar475._4_4_ = -(uint)(_UNK_00106cb4 < auVar380._4_4_ - _UNK_00106ca4);
      auVar475._8_4_ = -(uint)(_UNK_00106cb8 < auVar380._8_4_ - _UNK_00106ca8);
      auVar475._12_4_ = -(uint)(_UNK_00106cbc < auVar380._12_4_ - _UNK_00106cac);
      auVar513._0_4_ = auVar298._0_4_ >> 0x1f;
      auVar513._4_4_ = auVar298._4_4_ >> 0x1f;
      auVar513._8_4_ = auVar298._8_4_ >> 0x1f;
      auVar513._12_4_ = auVar298._12_4_ >> 0x1f;
      auVar298 = ~auVar475 & auVar380 | auVar513 & auVar475;
      auVar364 = auVar507 ^ auVar336;
      auVar514._0_4_ = auVar364._0_4_ >> 0x1f;
      auVar514._4_4_ = auVar364._4_4_ >> 0x1f;
      auVar514._8_4_ = auVar364._8_4_ >> 0x1f;
      auVar514._12_4_ = auVar364._12_4_ >> 0x1f;
      auVar476._0_4_ = -(uint)(__LC15 < auVar507._0_4_ - __LC14);
      auVar476._4_4_ = -(uint)(_UNK_00106cb4 < auVar507._4_4_ - _UNK_00106ca4);
      auVar476._8_4_ = -(uint)(_UNK_00106cb8 < auVar507._8_4_ - _UNK_00106ca8);
      auVar476._12_4_ = -(uint)(_UNK_00106cbc < auVar507._12_4_ - _UNK_00106cac);
      auVar451._0_12_ = auVar516._0_12_;
      auVar451._12_2_ = auVar516._6_2_;
      auVar451._14_2_ = auVar334._6_2_;
      auVar450._12_4_ = auVar451._12_4_;
      auVar450._0_10_ = auVar516._0_10_;
      auVar450._10_2_ = auVar334._4_2_;
      auVar449._10_6_ = auVar450._10_6_;
      auVar449._0_8_ = auVar516._0_8_;
      auVar449._8_2_ = auVar516._4_2_;
      auVar147._2_8_ = auVar449._8_8_;
      auVar147._0_2_ = auVar334._2_2_;
      auVar147._10_6_ = 0;
      auVar459._0_2_ = auVar516._0_2_;
      auVar448._12_4_ = 0;
      auVar448._0_12_ = SUB1612(auVar147 << 0x30, 4);
      auVar448 = auVar448 << 0x20;
      auVar364 = ~auVar476 & auVar507 | auVar514 & auVar476;
      auVar455._0_12_ = auVar448._0_12_;
      auVar455._12_2_ = auVar334._2_2_;
      auVar455._14_2_ = auVar334._10_2_;
      auVar454._12_4_ = auVar455._12_4_;
      auVar454._0_10_ = auVar448._0_10_;
      auVar454._10_2_ = auVar516._10_2_;
      auVar453._10_6_ = auVar454._10_6_;
      auVar453._0_8_ = auVar448._0_8_;
      auVar453._8_2_ = auVar516._2_2_;
      auVar148._2_8_ = auVar453._8_8_;
      auVar148._0_2_ = auVar334._8_2_;
      auVar148._10_6_ = 0;
      auVar452._12_4_ = 0;
      auVar452._0_12_ = SUB1612(auVar148 << 0x30, 4);
      auVar452 = auVar452 << 0x20;
      auVar458._0_12_ = auVar452._0_12_;
      auVar458._12_2_ = auVar334._8_2_;
      auVar458._14_2_ = auVar334._12_2_;
      auVar457._12_4_ = auVar458._12_4_;
      auVar457._0_10_ = auVar452._0_10_;
      auVar457._10_2_ = auVar334._4_2_;
      auVar456._10_6_ = auVar457._10_6_;
      auVar456._0_8_ = auVar452._0_8_;
      auVar456._8_2_ = auVar334._0_2_;
      auVar459._8_8_ = auVar456._8_8_;
      auVar459._6_2_ = auVar516._12_2_;
      auVar459._4_2_ = auVar516._8_2_;
      auVar459._2_2_ = auVar516._4_2_;
      auVar384._0_12_ = auVar298._0_12_;
      auVar384._12_2_ = auVar298._6_2_;
      auVar384._14_2_ = auVar364._6_2_;
      auVar383._12_4_ = auVar384._12_4_;
      auVar383._0_10_ = auVar298._0_10_;
      auVar383._10_2_ = auVar364._4_2_;
      auVar382._10_6_ = auVar383._10_6_;
      auVar382._0_8_ = auVar298._0_8_;
      auVar382._8_2_ = auVar298._4_2_;
      auVar149._2_8_ = auVar382._8_8_;
      auVar149._0_2_ = auVar364._2_2_;
      auVar149._10_6_ = 0;
      auVar392._0_2_ = auVar298._0_2_;
      auVar381._12_4_ = 0;
      auVar381._0_12_ = SUB1612(auVar149 << 0x30, 4);
      auVar381 = auVar381 << 0x20;
      auVar459 = auVar459 & __LC6;
      auVar388._0_12_ = auVar381._0_12_;
      auVar388._12_2_ = auVar364._2_2_;
      auVar388._14_2_ = auVar364._10_2_;
      auVar387._12_4_ = auVar388._12_4_;
      auVar387._0_10_ = auVar381._0_10_;
      auVar387._10_2_ = auVar298._10_2_;
      auVar386._10_6_ = auVar387._10_6_;
      auVar386._0_8_ = auVar381._0_8_;
      auVar386._8_2_ = auVar298._2_2_;
      auVar150._2_8_ = auVar386._8_8_;
      auVar150._0_2_ = auVar364._8_2_;
      auVar150._10_6_ = 0;
      auVar385._12_4_ = 0;
      auVar385._0_12_ = SUB1612(auVar150 << 0x30, 4);
      auVar385 = auVar385 << 0x20;
      auVar391._0_12_ = auVar385._0_12_;
      auVar391._12_2_ = auVar364._8_2_;
      auVar391._14_2_ = auVar364._12_2_;
      auVar390._12_4_ = auVar391._12_4_;
      auVar390._0_10_ = auVar385._0_10_;
      auVar390._10_2_ = auVar364._4_2_;
      auVar389._10_6_ = auVar390._10_6_;
      auVar389._0_8_ = auVar385._0_8_;
      auVar389._8_2_ = auVar364._0_2_;
      auVar392._8_8_ = auVar389._8_8_;
      auVar392._6_2_ = auVar298._12_2_;
      auVar392._4_2_ = auVar298._8_2_;
      auVar392._2_2_ = auVar298._4_2_;
      auVar392 = auVar392 & __LC6;
      sVar57 = auVar459._0_2_;
      sVar60 = auVar459._2_2_;
      sVar66 = auVar459._4_2_;
      sVar59 = auVar459._6_2_;
      sVar62 = auVar459._8_2_;
      sVar65 = auVar459._10_2_;
      sVar68 = auVar459._12_2_;
      sVar69 = auVar459._14_2_;
      cVar267 = ( 0 < sVar69 ) * ( sVar69 < 0x100 ) * auVar459[0xe] - ( 0xff < sVar69 );
      sVar69 = auVar392._0_2_;
      bVar45 = ( 0 < sVar69 ) * ( sVar69 < 0x100 ) * auVar392[0] - ( 0xff < sVar69 );
      uVar324 = CONCAT11(bVar45, cVar267);
      sVar69 = auVar392._2_2_;
      bVar46 = ( 0 < sVar69 ) * ( sVar69 < 0x100 ) * auVar392[2] - ( 0xff < sVar69 );
      uVar181 = CONCAT12(bVar46, uVar324);
      sVar69 = auVar392._4_2_;
      bVar47 = ( 0 < sVar69 ) * ( sVar69 < 0x100 ) * auVar392[4] - ( 0xff < sVar69 );
      uVar266 = CONCAT13(bVar47, uVar181);
      sVar69 = auVar392._6_2_;
      bVar48 = ( 0 < sVar69 ) * ( sVar69 < 0x100 ) * auVar392[6] - ( 0xff < sVar69 );
      uVar201 = CONCAT14(bVar48, uVar266);
      sVar69 = auVar392._8_2_;
      bVar49 = ( 0 < sVar69 ) * ( sVar69 < 0x100 ) * auVar392[8] - ( 0xff < sVar69 );
      auVar214[5] = bVar49;
      auVar214._0_5_ = uVar201;
      sVar72 = auVar392._10_2_;
      sVar74 = auVar392._12_2_;
      sVar77 = auVar392._14_2_;
      iVar260 = uVar269 * iVar260;
      iVar255 = uVar269 * uVar515;
      auVar477._0_4_ = iVar276 + iVar419 >> 2;
      auVar477._4_4_ = iVar276 + iVar260 >> 2;
      auVar477._8_4_ = iVar276 + iVar361 >> 2;
      auVar477._12_4_ = iVar276 + iVar255 >> 2;
      auVar516 = auVar477 ^ auVar336;
      auVar498._0_4_ = iVar287 + iVar419 + iVar276 >> 2;
      auVar498._4_4_ = iVar287 + iVar260 + iVar276 >> 2;
      auVar498._8_4_ = iVar287 + iVar361 + iVar276 >> 2;
      auVar498._12_4_ = iVar287 + iVar255 + iVar276 >> 2;
      auVar508._0_4_ = auVar516._0_4_ >> 0x1f;
      auVar508._4_4_ = auVar516._4_4_ >> 0x1f;
      auVar508._8_4_ = auVar516._8_4_ >> 0x1f;
      auVar508._12_4_ = auVar516._12_4_ >> 0x1f;
      auVar393._0_4_ = iVar231 + iVar419 + iVar276 >> 2;
      auVar393._4_4_ = iVar231 + iVar260 + iVar276 >> 2;
      auVar393._8_4_ = iVar231 + iVar361 + iVar276 >> 2;
      auVar393._12_4_ = iVar231 + iVar255 + iVar276 >> 2;
      auVar503._0_4_ = iVar232 + iVar419 + iVar276 >> 2;
      auVar503._4_4_ = iVar232 + iVar260 + iVar276 >> 2;
      auVar503._8_4_ = iVar232 + iVar361 + iVar276 >> 2;
      auVar503._12_4_ = iVar232 + iVar255 + iVar276 >> 2;
      auVar423._0_4_ = -(uint)(__LC15 < auVar477._0_4_ - __LC14);
      auVar423._4_4_ = -(uint)(_UNK_00106cb4 < auVar477._4_4_ - _UNK_00106ca4);
      auVar423._8_4_ = -(uint)(_UNK_00106cb8 < auVar477._8_4_ - _UNK_00106ca8);
      auVar423._12_4_ = -(uint)(_UNK_00106cbc < auVar477._12_4_ - _UNK_00106cac);
      auVar334 = ~auVar423 & auVar477 | auVar508 & auVar423;
      auVar516 = auVar498 ^ auVar336;
      auVar478._0_4_ = -(uint)(__LC15 < auVar498._0_4_ - __LC14);
      auVar478._4_4_ = -(uint)(_UNK_00106cb4 < auVar498._4_4_ - _UNK_00106ca4);
      auVar478._8_4_ = -(uint)(_UNK_00106cb8 < auVar498._8_4_ - _UNK_00106ca8);
      auVar478._12_4_ = -(uint)(_UNK_00106cbc < auVar498._12_4_ - _UNK_00106cac);
      auVar509._0_4_ = auVar516._0_4_ >> 0x1f;
      auVar509._4_4_ = auVar516._4_4_ >> 0x1f;
      auVar509._8_4_ = auVar516._8_4_ >> 0x1f;
      auVar509._12_4_ = auVar516._12_4_ >> 0x1f;
      auVar364 = ~auVar478 & auVar498 | auVar509 & auVar478;
      auVar479._0_4_ = -(uint)(__LC15 < auVar393._0_4_ - __LC14);
      auVar479._4_4_ = -(uint)(_UNK_00106cb4 < auVar393._4_4_ - _UNK_00106ca4);
      auVar479._8_4_ = -(uint)(_UNK_00106cb8 < auVar393._8_4_ - _UNK_00106ca8);
      auVar479._12_4_ = -(uint)(_UNK_00106cbc < auVar393._12_4_ - _UNK_00106cac);
      auVar516 = auVar393 ^ auVar336;
      auVar336 = auVar336 ^ auVar503;
      auVar510._0_4_ = auVar516._0_4_ >> 0x1f;
      auVar510._4_4_ = auVar516._4_4_ >> 0x1f;
      auVar510._8_4_ = auVar516._8_4_ >> 0x1f;
      auVar510._12_4_ = auVar516._12_4_ >> 0x1f;
      auVar337._0_4_ = auVar336._0_4_ >> 0x1f;
      auVar337._4_4_ = auVar336._4_4_ >> 0x1f;
      auVar337._8_4_ = auVar336._8_4_ >> 0x1f;
      auVar337._12_4_ = auVar336._12_4_ >> 0x1f;
      auVar298 = ~auVar479 & auVar393 | auVar510 & auVar479;
      auVar394._0_4_ = -(uint)(__LC15 < auVar503._0_4_ - __LC14);
      auVar394._4_4_ = -(uint)(_UNK_00106cb4 < auVar503._4_4_ - _UNK_00106ca4);
      auVar394._8_4_ = -(uint)(_UNK_00106cb8 < auVar503._8_4_ - _UNK_00106ca8);
      auVar394._12_4_ = -(uint)(_UNK_00106cbc < auVar503._12_4_ - _UNK_00106cac);
      auVar516 = ~auVar394 & auVar503 | auVar337 & auVar394;
      auVar427._0_12_ = auVar334._0_12_;
      auVar427._12_2_ = auVar334._6_2_;
      auVar427._14_2_ = auVar364._6_2_;
      auVar426._12_4_ = auVar427._12_4_;
      auVar426._0_10_ = auVar334._0_10_;
      auVar426._10_2_ = auVar364._4_2_;
      auVar425._10_6_ = auVar426._10_6_;
      auVar425._0_8_ = auVar334._0_8_;
      auVar425._8_2_ = auVar334._4_2_;
      auVar151._2_8_ = auVar425._8_8_;
      auVar151._0_2_ = auVar364._2_2_;
      auVar151._10_6_ = 0;
      auVar435._0_2_ = auVar334._0_2_;
      auVar424._12_4_ = 0;
      auVar424._0_12_ = SUB1612(auVar151 << 0x30, 4);
      auVar424 = auVar424 << 0x20;
      auVar431._0_12_ = auVar424._0_12_;
      auVar431._12_2_ = auVar364._2_2_;
      auVar431._14_2_ = auVar364._10_2_;
      auVar430._12_4_ = auVar431._12_4_;
      auVar430._0_10_ = auVar424._0_10_;
      auVar430._10_2_ = auVar334._10_2_;
      auVar429._10_6_ = auVar430._10_6_;
      auVar429._0_8_ = auVar424._0_8_;
      auVar429._8_2_ = auVar334._2_2_;
      auVar152._2_8_ = auVar429._8_8_;
      auVar152._0_2_ = auVar364._8_2_;
      auVar152._10_6_ = 0;
      auVar428._12_4_ = 0;
      auVar428._0_12_ = SUB1612(auVar152 << 0x30, 4);
      auVar428 = auVar428 << 0x20;
      auVar483._0_12_ = auVar298._0_12_;
      auVar483._12_2_ = auVar298._6_2_;
      auVar483._14_2_ = auVar516._6_2_;
      auVar482._12_4_ = auVar483._12_4_;
      auVar482._0_10_ = auVar298._0_10_;
      auVar482._10_2_ = auVar516._4_2_;
      auVar481._10_6_ = auVar482._10_6_;
      auVar481._0_8_ = auVar298._0_8_;
      auVar481._8_2_ = auVar298._4_2_;
      auVar153._2_8_ = auVar481._8_8_;
      auVar153._0_2_ = auVar516._2_2_;
      auVar153._10_6_ = 0;
      auVar491._0_2_ = auVar298._0_2_;
      auVar480._12_4_ = 0;
      auVar480._0_12_ = SUB1612(auVar153 << 0x30, 4);
      auVar480 = auVar480 << 0x20;
      auVar434._0_12_ = auVar428._0_12_;
      auVar434._12_2_ = auVar364._8_2_;
      auVar434._14_2_ = auVar364._12_2_;
      auVar433._12_4_ = auVar434._12_4_;
      auVar433._0_10_ = auVar428._0_10_;
      auVar433._10_2_ = auVar364._4_2_;
      auVar432._10_6_ = auVar433._10_6_;
      auVar432._0_8_ = auVar428._0_8_;
      auVar432._8_2_ = auVar364._0_2_;
      auVar435._8_8_ = auVar432._8_8_;
      auVar435._6_2_ = auVar334._12_2_;
      auVar435._4_2_ = auVar334._8_2_;
      auVar435._2_2_ = auVar334._4_2_;
      sStack_2dc = (short)( (ulong)uVar213 >> 0x28 );
      auVar487._0_12_ = auVar480._0_12_;
      auVar487._12_2_ = auVar516._2_2_;
      auVar487._14_2_ = auVar516._10_2_;
      auVar486._12_4_ = auVar487._12_4_;
      auVar486._0_10_ = auVar480._0_10_;
      auVar486._10_2_ = auVar298._10_2_;
      auVar485._10_6_ = auVar486._10_6_;
      auVar485._0_8_ = auVar480._0_8_;
      auVar485._8_2_ = auVar298._2_2_;
      auVar154._2_8_ = auVar485._8_8_;
      auVar154._0_2_ = auVar516._8_2_;
      auVar154._10_6_ = 0;
      auVar484._12_4_ = 0;
      auVar484._0_12_ = SUB1612(auVar154 << 0x30, 4);
      auVar484 = auVar484 << 0x20;
      auVar435 = auVar435 & __LC6;
      auVar490._0_12_ = auVar484._0_12_;
      auVar490._12_2_ = auVar516._8_2_;
      auVar490._14_2_ = auVar516._12_2_;
      auVar489._12_4_ = auVar490._12_4_;
      auVar489._0_10_ = auVar484._0_10_;
      auVar489._10_2_ = auVar516._4_2_;
      auVar488._10_6_ = auVar489._10_6_;
      auVar488._0_8_ = auVar484._0_8_;
      auVar488._8_2_ = auVar516._0_2_;
      auVar491._8_8_ = auVar488._8_8_;
      auVar491._6_2_ = auVar298._12_2_;
      auVar491._4_2_ = auVar298._8_2_;
      auVar491._2_2_ = auVar298._4_2_;
      auVar491 = auVar491 & __LC6;
      auVar214._6_8_ = 0;
      auVar92[0xe] = cVar267;
      auVar92._0_14_ = auVar214 << 0x38;
      uVar213 = CONCAT26(auVar92._13_2_, CONCAT15(( 0 < sVar68 ) * ( sVar68 < 0x100 ) * auVar459[0xc] - ( 0xff < sVar68 ), uVar201));
      auVar205._4_8_ = 0;
      auVar205._0_4_ = uVar266;
      auVar116._12_3_ = ( int3 )((ulong)uVar213 >> 0x28);
      auVar116._0_12_ = auVar205 << 0x38;
      uVar330 = CONCAT44(auVar116._11_4_, CONCAT13(( 0 < sVar65 ) * ( sVar65 < 0x100 ) * auVar459[10] - ( 0xff < sVar65 ), uVar181));
      auVar123._10_5_ = ( int5 )((ulong)uVar330 >> 0x18);
      auVar123._0_10_ = (unkuint10)uVar324 << 0x38;
      uVar295 = CONCAT62(auVar123._9_6_, CONCAT11(( 0 < sVar62 ) * ( sVar62 < 0x100 ) * auVar459[8] - ( 0xff < sVar62 ), cVar267));
      auVar155._7_8_ = 0;
      auVar155._0_7_ = ( uint7 )((ulong)uVar295 >> 8);
      Var128 = CONCAT81(SUB158(auVar155 << 0x40, 7), ( 0 < sVar59 ) * ( sVar59 < 0x100 ) * auVar459[6] - ( 0xff < sVar59 ));
      auVar188._9_6_ = 0;
      auVar188._0_9_ = Var128;
      auVar156._1_10_ = SUB1510(auVar188 << 0x30, 5);
      auVar156[0] = ( 0 < sVar66 ) * ( sVar66 < 0x100 ) * auVar459[4] - ( 0xff < sVar66 );
      auVar189._11_4_ = 0;
      auVar189._0_11_ = auVar156;
      auVar157._1_12_ = SUB1512(auVar189 << 0x20, 3);
      auVar157[0] = ( 0 < sVar60 ) * ( sVar60 < 0x100 ) * auVar459[2] - ( 0xff < sVar60 );
      sVar60 = auVar435._0_2_;
      sVar66 = auVar435._2_2_;
      sVar59 = auVar435._4_2_;
      sVar62 = auVar435._6_2_;
      sVar65 = auVar435._8_2_;
      sVar68 = auVar435._10_2_;
      sVar69 = auVar435._12_2_;
      sVar70 = auVar435._14_2_;
      cVar267 = ( 0 < sVar70 ) * ( sVar70 < 0x100 ) * auVar435[0xe] - ( 0xff < sVar70 );
      sVar70 = auVar491._0_2_;
      bVar50 = ( 0 < sVar70 ) * ( sVar70 < 0x100 ) * auVar491[0] - ( 0xff < sVar70 );
      uVar324 = CONCAT11(bVar50, cVar267);
      sVar70 = auVar491._2_2_;
      bVar51 = ( 0 < sVar70 ) * ( sVar70 < 0x100 ) * auVar491[2] - ( 0xff < sVar70 );
      uVar181 = CONCAT12(bVar51, uVar324);
      sVar70 = auVar491._4_2_;
      bVar52 = ( 0 < sVar70 ) * ( sVar70 < 0x100 ) * auVar491[4] - ( 0xff < sVar70 );
      uVar266 = CONCAT13(bVar52, uVar181);
      sVar70 = auVar491._6_2_;
      bVar53 = ( 0 < sVar70 ) * ( sVar70 < 0x100 ) * auVar491[6] - ( 0xff < sVar70 );
      uVar201 = CONCAT14(bVar53, uVar266);
      sVar70 = auVar491._8_2_;
      bVar54 = ( 0 < sVar70 ) * ( sVar70 < 0x100 ) * auVar491[8] - ( 0xff < sVar70 );
      auVar216[5] = bVar54;
      auVar216._0_5_ = uVar201;
      sVar70 = auVar491._10_2_;
      sVar75 = auVar491._12_2_;
      sVar78 = auVar491._14_2_;
      sStack_2fc = (short)( (ulong)uVar211 >> 0x28 );
      auVar492._0_2_ = uVar315 - ( byte )(( 0 < sVar57 ) * ( sVar57 < 0x100 ) * auVar459[0] - ( 0xff < sVar57 ));
      auVar492._2_2_ = auVar134._0_2_ - auVar157._0_2_;
      auVar492._4_2_ = auVar133._0_2_ - auVar156._0_2_;
      auVar492._6_2_ = sVar416 - (short)Var128;
      auVar492._8_2_ = uVar317 - (short)( (ulong)uVar295 >> 8 );
      auVar492._10_2_ = uVar319 - (short)( (ulong)uVar330 >> 0x18 );
      auVar492._12_2_ = sStack_2fc - (short)( (ulong)uVar213 >> 0x28 );
      auVar492._14_2_ = ( auVar80._13_2_ >> 8 ) - ( auVar92._13_2_ >> 8 );
      auVar516 = psllw(auVar492, 2);
      auVar338._0_2_ = auVar516._0_2_ + auVar492._0_2_;
      auVar338._2_2_ = auVar516._2_2_ + auVar492._2_2_;
      auVar338._4_2_ = auVar516._4_2_ + auVar492._4_2_;
      auVar338._6_2_ = auVar516._6_2_ + auVar492._6_2_;
      auVar338._8_2_ = auVar516._8_2_ + auVar492._8_2_;
      auVar338._10_2_ = auVar516._10_2_ + auVar492._10_2_;
      auVar338._12_2_ = auVar516._12_2_ + auVar492._12_2_;
      auVar338._14_2_ = auVar516._14_2_ + auVar492._14_2_;
      auVar516 = psllw(auVar338, 2);
      auVar339._0_2_ = auVar516._0_2_ - auVar492._0_2_;
      auVar339._2_2_ = auVar516._2_2_ - auVar492._2_2_;
      auVar339._4_2_ = auVar516._4_2_ - auVar492._4_2_;
      auVar339._6_2_ = auVar516._6_2_ - auVar492._6_2_;
      auVar339._8_2_ = auVar516._8_2_ - auVar492._8_2_;
      auVar339._10_2_ = auVar516._10_2_ - auVar492._10_2_;
      auVar339._12_2_ = auVar516._12_2_ - auVar492._12_2_;
      auVar339._14_2_ = auVar516._14_2_ - auVar492._14_2_;
      auVar215._6_8_ = 0;
      auVar84[0xe] = cVar40;
      auVar84._0_14_ = auVar215 << 0x38;
      uVar211 = CONCAT26(auVar84._13_2_, CONCAT15(( 0 < sVar67 ) * ( sVar67 < 0x100 ) * auVar310[0xc] - ( 0xff < sVar67 ), uVar200));
      auVar206._4_8_ = 0;
      auVar206._0_4_ = uVar252;
      auVar102._12_3_ = ( int3 )((ulong)uVar211 >> 0x28);
      auVar102._0_12_ = auVar206 << 0x38;
      uVar330 = CONCAT44(auVar102._11_4_, CONCAT13(( 0 < sVar64 ) * ( sVar64 < 0x100 ) * auVar310[10] - ( 0xff < sVar64 ), uVar180));
      auVar121._10_5_ = ( int5 )((ulong)uVar330 >> 0x18);
      auVar121._0_10_ = (unkuint10)uVar323 << 0x38;
      uVar295 = CONCAT62(auVar121._9_6_, CONCAT11(( 0 < sVar61 ) * ( sVar61 < 0x100 ) * auVar310[8] - ( 0xff < sVar61 ), cVar40));
      auVar158._7_8_ = 0;
      auVar158._0_7_ = ( uint7 )((ulong)uVar295 >> 8);
      Var128 = CONCAT81(SUB158(auVar158 << 0x40, 7), ( 0 < sVar58 ) * ( sVar58 < 0x100 ) * auVar310[6] - ( 0xff < sVar58 ));
      auVar190._9_6_ = 0;
      auVar190._0_9_ = Var128;
      auVar159._1_10_ = SUB1510(auVar190 << 0x30, 5);
      auVar159[0] = ( 0 < sVar55 ) * ( sVar55 < 0x100 ) * auVar310[4] - ( 0xff < sVar55 );
      auVar191._11_4_ = 0;
      auVar191._0_11_ = auVar159;
      auVar160._1_12_ = SUB1512(auVar191 << 0x20, 3);
      auVar160[0] = ( 0 < sVar63 ) * ( sVar63 < 0x100 ) * auVar310[2] - ( 0xff < sVar63 );
      auVar516 = psllw(auVar339, 2);
      auVar499._0_2_ = uVar316 - ( byte )(( 0 < sVar56 ) * ( sVar56 < 0x100 ) * auVar310[0] - ( 0xff < sVar56 ));
      auVar499._2_2_ = auVar139._0_2_ - auVar160._0_2_;
      auVar499._4_2_ = auVar138._0_2_ - auVar159._0_2_;
      auVar499._6_2_ = sVar318 - (short)Var128;
      auVar499._8_2_ = uVar322 - (short)( (ulong)uVar295 >> 8 );
      auVar499._10_2_ = uVar359 - (short)( (ulong)uVar330 >> 0x18 );
      auVar499._12_2_ = sStack_2dc - (short)( (ulong)uVar211 >> 0x28 );
      auVar499._14_2_ = ( auVar82._13_2_ >> 8 ) - ( auVar84._13_2_ >> 8 );
      auVar334 = psllw(auVar499, 2);
      auVar493._0_2_ = auVar334._0_2_ + auVar499._0_2_;
      auVar493._2_2_ = auVar334._2_2_ + auVar499._2_2_;
      auVar493._4_2_ = auVar334._4_2_ + auVar499._4_2_;
      auVar493._6_2_ = auVar334._6_2_ + auVar499._6_2_;
      auVar493._8_2_ = auVar334._8_2_ + auVar499._8_2_;
      auVar493._10_2_ = auVar334._10_2_ + auVar499._10_2_;
      auVar493._12_2_ = auVar334._12_2_ + auVar499._12_2_;
      auVar493._14_2_ = auVar334._14_2_ + auVar499._14_2_;
      auVar334 = psllw(auVar493, 2);
      auVar494._0_2_ = auVar334._0_2_ - auVar499._0_2_;
      auVar494._2_2_ = auVar334._2_2_ - auVar499._2_2_;
      auVar494._4_2_ = auVar334._4_2_ - auVar499._4_2_;
      auVar494._6_2_ = auVar334._6_2_ - auVar499._6_2_;
      auVar494._8_2_ = auVar334._8_2_ - auVar499._8_2_;
      auVar494._10_2_ = auVar334._10_2_ - auVar499._10_2_;
      auVar494._12_2_ = auVar334._12_2_ - auVar499._12_2_;
      auVar494._14_2_ = auVar334._14_2_ - auVar499._14_2_;
      sStack_31c = (short)( (ulong)uVar209 >> 0x28 );
      auVar334 = psllw(auVar494, 1);
      auVar216._6_8_ = 0;
      auVar85[0xe] = cVar267;
      auVar85._0_14_ = auVar216 << 0x38;
      uVar209 = CONCAT26(auVar85._13_2_, CONCAT15(( 0 < sVar69 ) * ( sVar69 < 0x100 ) * auVar435[0xc] - ( 0xff < sVar69 ), uVar201));
      auVar207._4_8_ = 0;
      auVar207._0_4_ = uVar266;
      auVar103._12_3_ = ( int3 )((ulong)uVar209 >> 0x28);
      auVar103._0_12_ = auVar207 << 0x38;
      uVar330 = CONCAT44(auVar103._11_4_, CONCAT13(( 0 < sVar68 ) * ( sVar68 < 0x100 ) * auVar435[10] - ( 0xff < sVar68 ), uVar181));
      auVar122._10_5_ = ( int5 )((ulong)uVar330 >> 0x18);
      auVar122._0_10_ = (unkuint10)uVar324 << 0x38;
      uVar295 = CONCAT62(auVar122._9_6_, CONCAT11(( 0 < sVar65 ) * ( sVar65 < 0x100 ) * auVar435[8] - ( 0xff < sVar65 ), cVar267));
      auVar161._7_8_ = 0;
      auVar161._0_7_ = ( uint7 )((ulong)uVar295 >> 8);
      Var128 = CONCAT81(SUB158(auVar161 << 0x40, 7), ( 0 < sVar62 ) * ( sVar62 < 0x100 ) * auVar435[6] - ( 0xff < sVar62 ));
      auVar192._9_6_ = 0;
      auVar192._0_9_ = Var128;
      auVar162._1_10_ = SUB1510(auVar192 << 0x30, 5);
      auVar162[0] = ( 0 < sVar59 ) * ( sVar59 < 0x100 ) * auVar435[4] - ( 0xff < sVar59 );
      auVar193._11_4_ = 0;
      auVar193._0_11_ = auVar162;
      auVar163._1_12_ = SUB1512(auVar193 << 0x20, 3);
      auVar163[0] = ( 0 < sVar66 ) * ( sVar66 < 0x100 ) * auVar435[2] - ( 0xff < sVar66 );
      auVar500._0_2_ = uVar285 - ( byte )(( 0 < sVar60 ) * ( sVar60 < 0x100 ) * auVar435[0] - ( 0xff < sVar60 ));
      auVar500._2_2_ = auVar130._0_2_ - auVar163._0_2_;
      auVar500._4_2_ = auVar129._0_2_ - auVar162._0_2_;
      auVar500._6_2_ = sVar352 - (short)Var128;
      auVar500._8_2_ = uVar320 - (short)( (ulong)uVar295 >> 8 );
      auVar500._10_2_ = uVar321 - (short)( (ulong)uVar330 >> 0x18 );
      auVar500._12_2_ = sStack_31c - (short)( (ulong)uVar209 >> 0x28 );
      auVar500._14_2_ = ( auVar79._13_2_ >> 8 ) - ( auVar85._13_2_ >> 8 );
      auVar298 = psllw(auVar500, 3);
      auVar504._0_2_ = auVar298._0_2_ - auVar500._0_2_;
      auVar504._2_2_ = auVar298._2_2_ - auVar500._2_2_;
      auVar504._4_2_ = auVar298._4_2_ - auVar500._4_2_;
      auVar504._6_2_ = auVar298._6_2_ - auVar500._6_2_;
      auVar504._8_2_ = auVar298._8_2_ - auVar500._8_2_;
      auVar504._10_2_ = auVar298._10_2_ - auVar500._10_2_;
      auVar504._12_2_ = auVar298._12_2_ - auVar500._12_2_;
      auVar504._14_2_ = auVar298._14_2_ - auVar500._14_2_;
      uStack_2f6 = (ushort)bVar33;
      uStack_2f4 = (ushort)bVar34;
      uStack_2f2 = (ushort)bVar35;
      uStack_2f0 = (ushort)bVar36;
      uStack_2ee = (ushort)bVar37;
      uStack_2ec = (ushort)bVar38;
      uStack_2ea = (ushort)bVar39;
      auVar298 = psllw(auVar504, 1);
      auVar501._0_2_ = (ushort)bVar32 - (ushort)bVar45;
      auVar501._2_2_ = uStack_2f6 - bVar46;
      auVar501._4_2_ = uStack_2f4 - bVar47;
      auVar501._6_2_ = uStack_2f2 - bVar48;
      auVar501._8_2_ = uStack_2f0 - bVar49;
      auVar501._10_2_ = uStack_2ee - ( byte )(( 0 < sVar72 ) * ( sVar72 < 0x100 ) * auVar392[10] - ( 0xff < sVar72 ));
      auVar501._12_2_ = uStack_2ec - ( byte )(( 0 < sVar74 ) * ( sVar74 < 0x100 ) * auVar392[0xc] - ( 0xff < sVar74 ));
      auVar501._14_2_ = uStack_2ea - ( byte )(( 0 < sVar77 ) * ( sVar77 < 0x100 ) * auVar392[0xe] - ( 0xff < sVar77 ));
      auVar495._0_2_ = auVar516._0_2_ + auVar334._0_2_ + auVar298._0_2_;
      auVar495._2_2_ = auVar516._2_2_ + auVar334._2_2_ + auVar298._2_2_;
      auVar495._4_2_ = auVar516._4_2_ + auVar334._4_2_ + auVar298._4_2_;
      auVar495._6_2_ = auVar516._6_2_ + auVar334._6_2_ + auVar298._6_2_;
      auVar495._8_2_ = auVar516._8_2_ + auVar334._8_2_ + auVar298._8_2_;
      auVar495._10_2_ = auVar516._10_2_ + auVar334._10_2_ + auVar298._10_2_;
      auVar495._12_2_ = auVar516._12_2_ + auVar334._12_2_ + auVar298._12_2_;
      auVar495._14_2_ = auVar516._14_2_ + auVar334._14_2_ + auVar298._14_2_;
      uStack_2d6 = (ushort)bVar242;
      uStack_2d4 = (ushort)bVar26;
      uStack_2d2 = (ushort)bVar27;
      uStack_2d0 = (ushort)bVar28;
      uStack_2ce = (ushort)bVar29;
      uStack_2cc = (ushort)bVar30;
      uStack_2ca = (ushort)bVar31;
      auVar460._0_2_ = (ushort)bVar25 - (ushort)bVar220;
      auVar460._2_2_ = uStack_2d6 - bVar41;
      auVar460._4_2_ = uStack_2d4 - bVar42;
      auVar460._6_2_ = uStack_2d2 - bVar43;
      auVar460._8_2_ = uStack_2d0 - bVar44;
      auVar460._10_2_ = uStack_2ce - ( byte )(( 0 < sVar71 ) * ( sVar71 < 0x100 ) * auVar379[10] - ( 0xff < sVar71 ));
      auVar460._12_2_ = uStack_2cc - ( byte )(( 0 < sVar73 ) * ( sVar73 < 0x100 ) * auVar379[0xc] - ( 0xff < sVar73 ));
      auVar460._14_2_ = uStack_2ca - ( byte )(( 0 < sVar76 ) * ( sVar76 < 0x100 ) * auVar379[0xe] - ( 0xff < sVar76 ));
      auVar516 = psllw(auVar501, 2);
      auVar340._0_2_ = auVar516._0_2_ + auVar501._0_2_;
      auVar340._2_2_ = auVar516._2_2_ + auVar501._2_2_;
      auVar340._4_2_ = auVar516._4_2_ + auVar501._4_2_;
      auVar340._6_2_ = auVar516._6_2_ + auVar501._6_2_;
      auVar340._8_2_ = auVar516._8_2_ + auVar501._8_2_;
      auVar340._10_2_ = auVar516._10_2_ + auVar501._10_2_;
      auVar340._12_2_ = auVar516._12_2_ + auVar501._12_2_;
      auVar340._14_2_ = auVar516._14_2_ + auVar501._14_2_;
      auVar516 = psllw(auVar460, 2);
      auVar334 = psllw(auVar340, 2);
      auVar311._0_2_ = auVar516._0_2_ + auVar460._0_2_;
      auVar311._2_2_ = auVar516._2_2_ + auVar460._2_2_;
      auVar311._4_2_ = auVar516._4_2_ + auVar460._4_2_;
      auVar311._6_2_ = auVar516._6_2_ + auVar460._6_2_;
      auVar311._8_2_ = auVar516._8_2_ + auVar460._8_2_;
      auVar311._10_2_ = auVar516._10_2_ + auVar460._10_2_;
      auVar311._12_2_ = auVar516._12_2_ + auVar460._12_2_;
      auVar311._14_2_ = auVar516._14_2_ + auVar460._14_2_;
      auVar341._0_2_ = auVar334._0_2_ - auVar501._0_2_;
      auVar341._2_2_ = auVar334._2_2_ - auVar501._2_2_;
      auVar341._4_2_ = auVar334._4_2_ - auVar501._4_2_;
      auVar341._6_2_ = auVar334._6_2_ - auVar501._6_2_;
      auVar341._8_2_ = auVar334._8_2_ - auVar501._8_2_;
      auVar341._10_2_ = auVar334._10_2_ - auVar501._10_2_;
      auVar341._12_2_ = auVar334._12_2_ - auVar501._12_2_;
      auVar341._14_2_ = auVar334._14_2_ - auVar501._14_2_;
      auVar516 = psllw(auVar311, 2);
      auVar334 = psllw(auVar341, 2);
      auVar312._0_2_ = auVar516._0_2_ - auVar460._0_2_;
      auVar312._2_2_ = auVar516._2_2_ - auVar460._2_2_;
      auVar312._4_2_ = auVar516._4_2_ - auVar460._4_2_;
      auVar312._6_2_ = auVar516._6_2_ - auVar460._6_2_;
      auVar312._8_2_ = auVar516._8_2_ - auVar460._8_2_;
      auVar312._10_2_ = auVar516._10_2_ - auVar460._10_2_;
      auVar312._12_2_ = auVar516._12_2_ - auVar460._12_2_;
      auVar312._14_2_ = auVar516._14_2_ - auVar460._14_2_;
      auVar516 = psllw(auVar312, 1);
      uStack_316 = (ushort)bVar18;
      uStack_314 = (ushort)bVar19;
      uStack_312 = (ushort)bVar20;
      uStack_310 = (ushort)bVar21;
      uStack_30e = (ushort)bVar22;
      uStack_30c = (ushort)bVar23;
      uStack_30a = (ushort)bVar24;
      auVar342._0_2_ = (ushort)bVar17 - (ushort)bVar50;
      auVar342._2_2_ = uStack_316 - bVar51;
      auVar342._4_2_ = uStack_314 - bVar52;
      auVar342._6_2_ = uStack_312 - bVar53;
      auVar342._8_2_ = uStack_310 - bVar54;
      auVar342._10_2_ = uStack_30e - ( byte )(( 0 < sVar70 ) * ( sVar70 < 0x100 ) * auVar491[10] - ( 0xff < sVar70 ));
      auVar342._12_2_ = uStack_30c - ( byte )(( 0 < sVar75 ) * ( sVar75 < 0x100 ) * auVar491[0xc] - ( 0xff < sVar75 ));
      auVar342._14_2_ = uStack_30a - ( byte )(( 0 < sVar78 ) * ( sVar78 < 0x100 ) * auVar491[0xe] - ( 0xff < sVar78 ));
      auVar298 = psllw(auVar342, 3);
      auVar395._0_2_ = auVar298._0_2_ - auVar342._0_2_;
      auVar395._2_2_ = auVar298._2_2_ - auVar342._2_2_;
      auVar395._4_2_ = auVar298._4_2_ - auVar342._4_2_;
      auVar395._6_2_ = auVar298._6_2_ - auVar342._6_2_;
      auVar395._8_2_ = auVar298._8_2_ - auVar342._8_2_;
      auVar395._10_2_ = auVar298._10_2_ - auVar342._10_2_;
      auVar395._12_2_ = auVar298._12_2_ - auVar342._12_2_;
      auVar395._14_2_ = auVar298._14_2_ - auVar342._14_2_;
      auVar298 = psllw(auVar395, 1);
      auVar313._0_2_ = auVar516._0_2_ + auVar334._0_2_ + auVar298._0_2_;
      auVar313._2_2_ = auVar516._2_2_ + auVar334._2_2_ + auVar298._2_2_;
      auVar313._4_2_ = auVar516._4_2_ + auVar334._4_2_ + auVar298._4_2_;
      auVar313._6_2_ = auVar516._6_2_ + auVar334._6_2_ + auVar298._6_2_;
      auVar313._8_2_ = auVar516._8_2_ + auVar334._8_2_ + auVar298._8_2_;
      auVar313._10_2_ = auVar516._10_2_ + auVar334._10_2_ + auVar298._10_2_;
      auVar313._12_2_ = auVar516._12_2_ + auVar334._12_2_ + auVar298._12_2_;
      auVar313._14_2_ = auVar516._14_2_ + auVar334._14_2_ + auVar298._14_2_;
      auVar334 = pmulhw(auVar495, auVar495);
      auVar516 = pmulhw(auVar313, auVar313);
      uVar362 = CONCAT22(auVar334._8_2_, auVar495._8_2_ * auVar495._8_2_);
      auVar363._0_8_ = CONCAT26(auVar334._10_2_, CONCAT24(auVar495._10_2_ * auVar495._10_2_, uVar362));
      auVar363._8_2_ = auVar495._12_2_ * auVar495._12_2_;
      auVar363._10_2_ = auVar334._12_2_;
      auVar396._12_2_ = auVar495._14_2_ * auVar495._14_2_;
      auVar396._0_12_ = auVar363;
      auVar396._14_2_ = auVar334._14_2_;
      uVar286 = CONCAT22(auVar334._6_2_, auVar495._6_2_ * auVar495._6_2_);
      Var194 = CONCAT64(CONCAT42(uVar286, auVar334._4_2_), CONCAT22(auVar495._4_2_ * auVar495._4_2_, auVar495._6_2_ * auVar495._6_2_));
      auVar164._4_8_ = (long)( (unkuint10)Var194 >> 0x10 );
      auVar164._2_2_ = auVar334._2_2_;
      auVar164._0_2_ = auVar495._2_2_ * auVar495._2_2_;
      auVar343._0_4_ = CONCAT22(auVar334._0_2_, auVar495._0_2_ * auVar495._0_2_);
      auVar343._4_12_ = auVar164;
      uVar325 = CONCAT22(auVar516._6_2_, auVar313._6_2_ * auVar313._6_2_);
      Var195 = CONCAT64(CONCAT42(uVar325, auVar516._4_2_), CONCAT22(auVar313._4_2_ * auVar313._4_2_, auVar313._6_2_ * auVar313._6_2_));
      auVar165._4_8_ = (long)( (unkuint10)Var195 >> 0x10 );
      auVar165._2_2_ = auVar516._2_2_;
      auVar165._0_2_ = auVar313._2_2_ * auVar313._2_2_;
      auVar502._0_4_ = CONCAT22(auVar516._0_2_, auVar313._0_2_ * auVar313._0_2_);
      auVar502._4_12_ = auVar165;
      uVar420 = CONCAT22(auVar516._8_2_, auVar313._8_2_ * auVar313._8_2_);
      auVar421._0_8_ = CONCAT26(auVar516._10_2_, CONCAT24(auVar313._10_2_ * auVar313._10_2_, uVar420));
      auVar421._8_2_ = auVar313._12_2_ * auVar313._12_2_;
      auVar421._10_2_ = auVar516._12_2_;
      auVar436._12_2_ = auVar313._14_2_ * auVar313._14_2_;
      auVar436._0_12_ = auVar421;
      auVar436._14_2_ = auVar516._14_2_;
      iVar231 = (int)( (unkuint10)Var194 >> 0x10 );
      auVar505._0_8_ = CONCAT44(-(uint)(iVar231 < 0), iVar231);
      auVar505._8_4_ = uVar286;
      auVar505._12_4_ = -(uint)(auVar334._6_2_ < 0);
      auVar314._0_8_ = auVar343._0_8_;
      auVar314._8_4_ = auVar164._0_4_;
      auVar314._12_4_ = -(uint)(auVar164._0_4_ < 0);
      iVar231 = (int)( (unkuint10)Var195 >> 0x10 );
      auVar506._0_8_ = CONCAT44(-(uint)(auVar363._8_4_ < 0), auVar363._8_4_);
      auVar506._8_4_ = auVar396._12_4_;
      auVar506._12_4_ = -(uint)(auVar396._12_4_ < 0);
      auVar461._8_4_ = (int)( (ulong)auVar363._0_8_ >> 0x20 );
      auVar461._0_8_ = auVar363._0_8_;
      auVar461._12_4_ = -(uint)(auVar334._10_2_ < 0);
      auVar462._0_8_ = CONCAT44(-(uint)(iVar231 < 0), iVar231);
      auVar462._8_4_ = uVar325;
      auVar462._12_4_ = -(uint)(auVar516._6_2_ < 0);
      auVar344._0_8_ = auVar502._0_8_;
      auVar344._8_4_ = auVar165._0_4_;
      auVar344._12_4_ = -(uint)(auVar165._0_4_ < 0);
      auVar463._0_8_ = CONCAT44(-(uint)(auVar421._8_4_ < 0), auVar421._8_4_);
      auVar463._8_4_ = auVar436._12_4_;
      auVar463._12_4_ = -(uint)(auVar436._12_4_ < 0);
      auVar345._8_4_ = (int)( (ulong)auVar421._0_8_ >> 0x20 );
      auVar345._0_8_ = auVar421._0_8_;
      auVar345._12_4_ = -(uint)(auVar516._10_2_ < 0);
      local_3d0 = CONCAT44(-(uint)(auVar334._0_2_ < 0), auVar343._0_4_) + auVar505._0_8_ + CONCAT44(-(uint)(auVar334._8_2_ < 0), uVar362) + auVar506._0_8_ + CONCAT44(-(uint)(auVar516._0_2_ < 0), auVar502._0_4_) + auVar462._0_8_ + CONCAT44(-(uint)(auVar516._8_2_ < 0), uVar420) + auVar463._0_8_ + auVar314._8_8_ + auVar505._8_8_ + auVar461._8_8_ + auVar506._8_8_ + auVar344._8_8_ + auVar462._8_8_ + auVar345._8_8_ + auVar463._8_8_;
   }

   uVar250 = uVar275 << 0x19 | *(uint*)( &g_flags + (long)(int)( (int)uVar234 >> 1 & 0xfU | (int)uVar268 >> 1 & 0x10U | uVar250 & 0x20 ) * 4 ) | ( uVar251 & 0x40 ) << 0x12 | uVar272 * 2 & 0x7c | uVar244 & 1 | ( uVar233 & 7 ) << 7 | ( uVar233 & 0x18 ) << 8 | ( uVar233 & 0x20 ) << 0xb | ( uVar251 & 0x3f ) << 0x11 | 2;
   uVar275 = ( uVar256 << 6 | uVar261 ) << 0x13;
   uVar251 = uVar277 << 6 | uVar281 << 0xd;
   uVar258 = uVar251 | uVar258;
   local_3d8 = CONCAT44(uVar275 >> 0x18 | ( ( uVar258 | uVar275 ) & 0xff0000 ) >> 8 | ( uVar251 & 0xff00 ) << 8 | uVar258 << 0x18, uVar250 >> 0x18 | ( uVar250 & 0xff0000 ) >> 8 | ( uVar250 & 0xff00 ) << 8 | uVar250 << 0x18);
   auVar516 = __LC6;
   if (local_3d0 != 0) {
      iVar231 = 0;
      uVar250 = 0;
      iVar255 = 0;
      iVar232 = 0;
      local_298 = (undefined1[16])0x0;
      piVar273 = (int*)local_158;
      local_288 = (undefined1[16])0x0;
      local_1d8 = (undefined1[16])0x0;
      local_158 = (undefined1[16])0x0;
      puVar235 = (ushort*)auStack_254;
      while (true) {
         uVar245 = ( ulong )(uVar250 & 2);
         *(uint*)( local_158 + uVar245 * 4 ) = iVar231 + (uint)(byte)puVar235[-2];
         local_1c8[uVar245 - 4] = ( uint ) * (byte*)( (long)puVar235 + -3 ) + iVar232;
         *(uint*)( local_288 + uVar245 * 4 ) = (uint)(byte)puVar235[-1] + iVar255;
         puVar247 = puVar235;
         iVar231 = 1;
         do {
            iVar232 = iVar231 + 1;
            lVar236 = (long)(int)( ( iVar231 >> 1 ) + ( uVar250 & 2 ) );
            *(uint*)( local_158 + lVar236 * 4 ) = *(int*)( local_158 + lVar236 * 4 ) + ( uint )(byte) * puVar247;
            local_1c8[lVar236 + -4] = local_1c8[lVar236 + -4] + ( uint ) * (byte*)( (long)puVar247 + 1 );
            *(uint*)( local_288 + lVar236 * 4 ) = *(int*)( local_288 + lVar236 * 4 ) + (uint)(byte)puVar247[1];
            puVar247 = puVar247 + 2;
            iVar231 = iVar232;
         }
 while ( iVar232 != 4 );
         uVar250 = uVar250 + 1;
         puVar235 = puVar235 + 8;
         if (uVar250 == 4) break;
         uVar245 = ( ulong )(uVar250 & 2);
         iVar231 = *(int*)( local_158 + uVar245 * 4 );
         iVar232 = local_1c8[uVar245 - 4];
         iVar255 = *(int*)( local_288 + uVar245 * 4 );
      }
;
      uVar250 = ( uint )(local_288._8_4_ + 4 + local_288._12_4_) >> 3;
      uVar221 = ( undefined2 )(( uint )(local_1d8._8_4_ + 4 + local_1d8._12_4_) >> 3);
      uVar222 = ( undefined2 )(( uint )(local_158._8_4_ + 4 + local_158._12_4_) >> 3);
      local_218[3] = 0;
      uVar223 = ( undefined2 )(local_288._0_4_ + 4 + local_288._4_4_ >> 3);
      uVar224 = ( undefined2 )(( uint )(local_1d8._0_4_ + 4 + local_1d8._4_4_) >> 3);
      uVar225 = ( undefined2 )(( uint )(local_158._0_4_ + 4 + local_158._4_4_) >> 3);
      uStack_20a = 0;
      uVar226 = ( undefined2 )(( uint )(local_288._12_4_ + 4 + local_288._4_4_) >> 3);
      uVar227 = ( undefined2 )(( uint )(local_1d8._12_4_ + 4 + local_1d8._4_4_) >> 3);
      uVar228 = ( undefined2 )(( uint )(local_158._12_4_ + 4 + local_158._4_4_) >> 3);
      uStack_202 = 0;
      uVar229 = ( undefined2 )(( uint )(local_288._8_4_ + 4 + local_288._0_4_) >> 3);
      uVar285 = ( ushort )(( uint )(local_1d8._8_4_ + 4 + local_1d8._0_4_) >> 3);
      uVar230 = ( undefined2 )(( uint )(local_158._8_4_ + 4 + local_158._0_4_) >> 3);
      uStack_1fa = 0;
      puVar235 = local_218;
      do {
         iVar231 = ( (uint)puVar235[4] * 0x20 - (uint)puVar235[4] ) + 0x80;
         iVar231 = ( iVar231 >> 8 ) + iVar231;
         iVar255 = iVar231 >> 8;
         iVar232 = ( uint ) * puVar235 * 0x1f + 0x80;
         iVar232 = ( ( iVar232 >> 8 ) + iVar232 >> 8 ) - iVar255;
         if (iVar232 < -4) {
            iVar232 = -4;
         }

         if (3 < iVar232) {
            iVar232 = 3;
         }

         puVar262 = puVar235 + 1;
         puVar235[0x14] = ( ushort )(iVar255 << 3) | ( ushort )(iVar231 >> 10);
         puVar235[0x10] = (short)( iVar232 + iVar255 ) * 8 | ( ushort )(iVar232 + iVar255 >> 2);
         puVar247 = local_218;
         puVar235 = puVar262;
      }
 while ( puVar262 != local_218 + 3 );
      do {
         iVar231 = ( (uint)puVar247[0xc] * 0x20 - (uint)puVar247[0xc] ) + 0x80;
         iVar231 = ( iVar231 >> 8 ) + iVar231;
         iVar255 = iVar231 >> 8;
         iVar232 = (uint)puVar247[8] * 0x1f + 0x80;
         iVar232 = ( ( iVar232 >> 8 ) + iVar232 >> 8 ) - iVar255;
         if (iVar232 < -4) {
            iVar232 = -4;
         }

         if (3 < iVar232) {
            iVar232 = 3;
         }

         puVar235 = puVar247 + 1;
         puVar247[0x1c] = ( ushort )(iVar255 << 3) | ( ushort )(iVar231 >> 10);
         puVar247[0x18] = ( ushort )(iVar232 + iVar255 >> 2) | (short)( iVar232 + iVar255 ) * 8;
         puVar247 = puVar235;
      }
 while ( puVar235 != local_218 + 3 );
      uVar275 = 0;
      auVar166._12_4_ = 0;
      auVar166._0_12_ = SUB1612(ZEXT616(CONCAT42(CONCAT22(uVar225, uVar222), uVar224)) << 0x30, 4);
      auVar167._12_4_ = 0;
      auVar167._0_12_ = SUB1612(ZEXT616(CONCAT42(CONCAT22(uVar225, uVar222), uVar224)) << 0x30, 4);
      auVar196._10_2_ = 0;
      auVar196._0_10_ = SUB1610(auVar166 << 0x20, 0);
      auVar196._12_2_ = uVar224;
      auVar198._8_2_ = uVar221;
      auVar198._0_8_ = SUB168(auVar166 << 0x20, 0);
      auVar198._10_4_ = auVar196._10_4_;
      auVar168._2_6_ = auVar198._8_6_;
      auVar168._0_2_ = uVar225;
      auVar168._8_8_ = 0;
      auVar437._12_4_ = 0;
      auVar437._0_12_ = SUB1612(auVar168 << 0x30, 4);
      auVar437 = auVar437 << 0x20;
      auVar197._10_2_ = 0;
      auVar197._0_10_ = SUB1610(auVar167 << 0x20, 0);
      auVar197._12_2_ = uVar224;
      auVar199._8_2_ = uVar221;
      auVar199._0_8_ = SUB168(auVar167 << 0x20, 0);
      auVar199._10_4_ = auVar197._10_4_;
      auVar400._12_2_ = uVar225;
      auVar400._0_12_ = auVar437._0_12_;
      auVar400._14_2_ = uVar230;
      auVar399._12_4_ = auVar400._12_4_;
      auVar399._10_2_ = uVar229;
      auVar399._0_10_ = auVar437._0_10_;
      auVar398._10_6_ = auVar399._10_6_;
      auVar398._8_2_ = uVar223;
      auVar398._0_8_ = auVar437._0_8_;
      auVar169._2_8_ = auVar398._8_8_;
      auVar169._0_2_ = uVar228;
      auVar169._10_6_ = 0;
      auVar397._12_4_ = 0;
      auVar397._0_12_ = SUB1612(auVar169 << 0x30, 4);
      auVar397 = auVar397 << 0x20;
      auVar441._12_2_ = uVar225;
      auVar441._0_12_ = auVar437._0_12_;
      auVar441._14_2_ = uVar230;
      auVar440._12_4_ = auVar441._12_4_;
      auVar440._10_2_ = uVar229;
      auVar440._0_10_ = auVar437._0_10_;
      auVar439._10_6_ = auVar440._10_6_;
      auVar439._8_2_ = uVar223;
      auVar439._0_8_ = auVar437._0_8_;
      auVar170._2_8_ = auVar439._8_8_;
      auVar170._0_2_ = uVar228;
      auVar170._10_6_ = 0;
      auVar438._12_4_ = 0;
      auVar438._0_12_ = SUB1612(auVar170 << 0x30, 4);
      auVar438 = auVar438 << 0x20;
      auVar403._0_12_ = auVar397._0_12_;
      auVar403._12_2_ = uVar228;
      auVar403._14_2_ = uVar230;
      auVar402._12_4_ = auVar403._12_4_;
      auVar402._0_10_ = auVar397._0_10_;
      auVar402._10_2_ = uVar225;
      auVar401._10_6_ = auVar402._10_6_;
      auVar401._0_8_ = auVar397._0_8_;
      auVar401._8_2_ = uVar222;
      auVar172._2_8_ = auVar401._8_8_;
      auVar172._0_2_ = uVar229;
      auVar172._10_6_ = 0;
      auVar171._12_4_ = 0;
      auVar171._0_12_ = SUB1612(auVar172 << 0x30, 4);
      auVar444._0_12_ = auVar438._0_12_;
      auVar444._12_2_ = uVar228;
      auVar444._14_2_ = uVar230;
      auVar443._12_4_ = auVar444._12_4_;
      auVar443._0_10_ = auVar438._0_10_;
      auVar443._10_2_ = uVar225;
      auVar442._10_6_ = auVar443._10_6_;
      auVar442._0_8_ = auVar438._0_8_;
      auVar442._8_2_ = uVar222;
      auVar422._10_2_ = uVar223;
      auVar422._8_2_ = (short)uVar250;
      auVar173._12_4_ = 0;
      auVar173._0_12_ = SUB1612(ZEXT216(uVar285) << 0x30, 4);
      Var331 = SUB1610(auVar171 << 0x20, 0);
      auVar93._10_2_ = 0;
      auVar93._0_10_ = Var331;
      auVar93._12_2_ = uVar229;
      uVar295 = SUB168(auVar171 << 0x20, 0);
      auVar104._8_2_ = uVar226;
      auVar104._0_8_ = uVar295;
      auVar104._10_4_ = auVar93._10_4_;
      auVar86._10_2_ = 0;
      auVar86._0_10_ = Var331;
      auVar86._12_2_ = uVar229;
      auVar94._8_2_ = uVar226;
      auVar94._0_8_ = uVar295;
      auVar94._10_4_ = auVar86._10_4_;
      auVar174._6_8_ = 0;
      auVar174._0_6_ = auVar94._8_6_;
      uVar251 = auVar442._8_4_;
      auVar422._0_8_ = CONCAT44(auVar443._12_4_, uVar251);
      iVar232 = ( uVar250 & 0xffff ) * 0xf + (int)_LC1;
      iVar255 = (int)CONCAT82(SUB148(auVar174 << 0x40, 6), uVar223) * 0xf + _LC1._4_4_;
      iVar271 = auVar104._8_4_ * 0xf + (int)_LC1;
      iVar231 = ( auVar93._10_4_ >> 0x10 ) * 0xf + _LC1._4_4_;
      uVar286 = *(undefined4*)( &g_avg2 + (long)( ( iVar255 >> 8 ) + iVar255 >> 8 ) * 4 );
      uVar325 = *(undefined4*)( &g_avg2 + (long)( ( iVar232 >> 8 ) + iVar232 >> 8 ) * 4 );
      auVar405._0_8_ = CONCAT44(uVar286, uVar325);
      uVar223 = ( undefined2 )(( uint ) * (undefined4*)( &g_avg2 + (long)( ( iVar231 >> 8 ) + iVar231 >> 8 ) * 4 ) >> 0x10);
      uVar226 = ( undefined2 )((uint)uVar286 >> 0x10);
      auVar407._8_4_ = 0;
      auVar407._0_8_ = auVar405._0_8_;
      uVar222 = ( undefined2 ) * (undefined4*)( &g_avg2 + (long)( ( iVar231 >> 8 ) + iVar231 >> 8 ) * 4 );
      auVar406._8_2_ = 0;
      auVar406._0_8_ = auVar405._0_8_;
      local_218[4] = (ushort)uVar286;
      uVar221 = ( undefined2 )(( uint ) * (undefined4*)( &g_avg2 + (long)( ( iVar271 >> 8 ) + iVar271 >> 8 ) * 4 ) >> 0x10);
      auVar407._12_2_ = uVar226;
      auVar407._14_2_ = uVar223;
      auVar406._12_4_ = auVar407._12_4_;
      auVar406._10_2_ = uVar222;
      auVar405._10_6_ = auVar406._10_6_;
      auVar405._8_2_ = local_218[4];
      auVar175._2_8_ = auVar405._8_8_;
      auVar175._0_2_ = uVar221;
      auVar175._10_6_ = 0;
      auVar404._12_4_ = 0;
      auVar404._0_12_ = SUB1612(auVar175 << 0x30, 4);
      auVar404 = auVar404 << 0x20;
      Var331 = SUB1610(auVar173 << 0x20, 0);
      auVar87._10_2_ = 0;
      auVar87._0_10_ = Var331;
      auVar87._12_2_ = uVar285;
      uVar295 = SUB168(auVar173 << 0x20, 0);
      auVar95._8_2_ = uVar227;
      auVar95._0_8_ = uVar295;
      auVar95._10_4_ = auVar87._10_4_;
      auVar176._6_8_ = 0;
      auVar176._0_6_ = auVar95._8_6_;
      auVar88._10_2_ = 0;
      auVar88._0_10_ = Var331;
      auVar88._12_2_ = uVar285;
      auVar96._8_2_ = uVar227;
      auVar96._0_8_ = uVar295;
      auVar96._10_4_ = auVar88._10_4_;
      auVar411._0_12_ = auVar404._0_12_;
      auVar411._12_2_ = uVar221;
      auVar411._14_2_ = uVar223;
      auVar410._12_4_ = auVar411._12_4_;
      auVar410._0_10_ = auVar404._0_10_;
      auVar410._10_2_ = uVar226;
      auVar409._10_6_ = auVar410._10_6_;
      auVar409._0_8_ = auVar404._0_8_;
      auVar409._8_2_ = (short)( (uint)uVar325 >> 0x10 );
      auVar177._2_8_ = auVar409._8_8_;
      auVar177._0_2_ = uVar222;
      auVar177._10_6_ = 0;
      auVar408._12_4_ = 0;
      auVar408._0_12_ = SUB1612(auVar177 << 0x30, 4);
      auVar408 = auVar408 << 0x20;
      iVar280 = ( auVar199._8_4_ & 0xffff ) * 0xf + (int)_LC1;
      iVar287 = (int)CONCAT82(SUB148(auVar176 << 0x40, 6), uVar224) * 0xf + _LC1._4_4_;
      iVar274 = auVar96._8_4_ * 0xf + (int)_LC1;
      iVar276 = ( auVar88._10_4_ >> 0x10 ) * 0xf + _LC1._4_4_;
      auVar89._10_2_ = 0;
      auVar89._0_10_ = auVar422._0_10_;
      auVar89._12_2_ = uVar230;
      auVar97._8_2_ = uVar228;
      auVar97._0_8_ = auVar422._0_8_;
      auVar97._10_4_ = auVar89._10_4_;
      auVar178._6_8_ = 0;
      auVar178._0_6_ = auVar97._8_6_;
      auVar117._4_2_ = uVar225;
      auVar117._0_4_ = uVar251;
      auVar117._6_8_ = SUB148(auVar178 << 0x40, 6);
      auVar90._10_2_ = 0;
      auVar90._0_10_ = auVar422._0_10_;
      auVar90._12_2_ = uVar230;
      auVar98._8_2_ = uVar228;
      auVar98._0_8_ = auVar422._0_8_;
      auVar98._10_4_ = auVar90._10_4_;
      iVar231 = ( uVar251 & 0xffff ) * 0xf + (int)_LC1;
      iVar232 = auVar117._4_4_ * 0xf + _LC1._4_4_;
      iVar255 = auVar98._8_4_ * 0xf + (int)_LC1;
      iVar257 = ( auVar90._10_4_ >> 0x10 ) * 0xf + _LC1._4_4_;
      local_218[0] = (ushort)uVar325;
      local_218[1] = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar280 >> 8 ) + iVar280 >> 8 ) * 4 );
      auVar414._0_12_ = auVar408._0_12_;
      auVar414._12_2_ = uVar222;
      auVar414._14_2_ = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar276 >> 8 ) + iVar276 >> 8 ) * 4 );
      auVar413._12_4_ = auVar414._12_4_;
      auVar413._0_10_ = auVar408._0_10_;
      auVar413._10_2_ = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar274 >> 8 ) + iVar274 >> 8 ) * 4 );
      auVar412._10_6_ = auVar413._10_6_;
      auVar412._0_8_ = auVar408._0_8_;
      auVar412._8_2_ = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar271 >> 8 ) + iVar271 >> 8 ) * 4 );
      auVar179._4_8_ = auVar412._8_8_;
      auVar179._2_2_ = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar287 >> 8 ) + iVar287 >> 8 ) * 4 );
      auVar179._0_2_ = local_218[4];
      auVar415._10_2_ = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar280 >> 8 ) + iVar280 >> 8 ) * 4 );
      auVar415._8_2_ = (ushort)uVar325;
      auVar415._4_4_ = auVar413._12_4_;
      auVar415._0_4_ = auVar412._8_4_;
      auVar415._12_4_ = auVar179._0_4_;
      uStack_20e = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar287 >> 8 ) + iVar287 >> 8 ) * 4 );
      auVar334 = pshuflw(auVar415, auVar415, 0xd4);
      auVar516 = pshuflw(auVar415, auVar415, 0xde);
      local_218[2] = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar231 >> 8 ) + iVar231 >> 8 ) * 4 );
      uStack_20c = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar232 >> 8 ) + iVar232 >> 8 ) * 4 );
      local_200 = auVar516._0_2_;
      uStack_1fe = auVar516._2_2_;
      uStack_204 = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar255 >> 8 ) + iVar255 >> 8 ) * 4 );
      local_158 = (undefined1[16])0x0;
      local_148 = (undefined1[16])0x0;
      local_138 = (undefined1[16])0x0;
      local_128[0] = (undefined1[16])0x0;
      uStack_1fc = (short)*(undefined4*)( &g_avg2 + (long)( ( iVar257 >> 8 ) + iVar257 >> 8 ) * 4 );
      iVar232 = 0;
      iVar255 = 0;
      iVar231 = 0;
      local_208 = auVar334._0_2_;
      uStack_206 = auVar334._2_2_;
      puVar235 = (ushort*)auStack_254;
      while (true) {
         *(ulong*)( piVar273 + ( ulong )(uVar275 & 2) * 4 ) = CONCAT44(( uint ) * (byte*)( (long)puVar235 + -3 ) + iVar255, (uint)(byte)puVar235[-2] + iVar232);
         *(uint*)( local_158 + ( ulong )(uVar275 & 2) * 0x10 + 8 ) = iVar231 + (uint)(byte)puVar235[-1];
         puVar247 = puVar235;
         iVar231 = 1;
         do {
            iVar232 = iVar231 + 1;
            lVar236 = (long)(int)( ( iVar231 >> 1 ) + ( uVar275 & 2 ) );
            lVar237 = lVar236 * 0x10;
            iVar231 = *(int*)( local_158 + lVar237 + 8 );
            uVar295 = *(undefined8*)( piVar273 + lVar236 * 4 );
            *(ulong*)( piVar273 + lVar236 * 4 ) = CONCAT44((int)( (ulong)uVar295 >> 0x20 ) + ( uint ) * (byte*)( (long)puVar247 + 1 ), (int)uVar295 + ( uint )(byte) * puVar247);
            *(uint*)( local_158 + lVar237 + 8 ) = (uint)(byte)puVar247[1] + iVar231;
            puVar247 = puVar247 + 2;
            iVar231 = iVar232;
         }
 while ( iVar232 != 4 );
         uVar275 = uVar275 + 1;
         puVar235 = puVar235 + 8;
         if (uVar275 == 4) break;
         lVar236 = ( ulong )(uVar275 & 2) * 0x10;
         iVar232 = piVar273[( ulong )(uVar275 & 2) * 4];
         iVar255 = *(int*)( local_158 + lVar236 + 4 );
         iVar231 = *(int*)( local_158 + lVar236 + 8 );
      }
;
      piVar238 = piVar273;
      piVar248 = (int*)local_1d8;
      do {
         iVar231 = piVar238[8];
         iVar232 = piVar238[0xc];
         piVar239 = piVar238 + 1;
         iVar255 = piVar238[4];
         *piVar248 = iVar231 + iVar232;
         iVar257 = *piVar238;
         piVar248[8] = iVar232 + iVar255;
         piVar248[4] = iVar257 + iVar255;
         piVar248[0xc] = iVar231 + iVar257;
         piVar238 = piVar239;
         piVar248 = piVar248 + 1;
      }
 while ( (int*)( local_158 + 0xc ) != piVar239 );
      local_1d8._12_4_ = 0;
      iVar231 = 0;
      for (int i = 0; i < 3; i++) {
         local_1c8[( 4*i + 3 )] = 0;
      }

      puVar235 = local_218;
      piVar238 = (int*)local_1d8;
      iVar232 = 0;
      while (true) {
         iVar255 = *piVar238;
         uVar285 = puVar235[1];
         iVar271 = iVar232 + 1;
         uVar315 = *puVar235;
         uVar316 = puVar235[2];
         iVar257 = piVar238[1];
         lVar236 = (long)( iVar232 >> 1 ) * 4;
         iVar232 = piVar238[2];
         uVar317 = puVar235[0x12];
         uVar319 = puVar235[0x11];
         *(uint*)( local_298 + lVar236 ) = ( ( 0x3fffffff - ( (uint)uVar285 * iVar257 * 2 + (uint)uVar316 * iVar255 * 2 ) ) - (uint)uVar315 * iVar232 * 2 ) + ( ( (uint)uVar315 * (uint)uVar315 & 0xffff ) + ( uint )(ushort)(uVar285 * uVar285) + ( uint )(ushort)(uVar316 * uVar316) ) * 8 + iVar231;
         uVar250 = (uint)uVar317;
         uVar285 = puVar235[0x10];
         *(uint*)( local_298 + lVar236 + 8 ) = ( ( ( ( *(int*)( local_298 + lVar236 + 8 ) - iVar255 * 2 * uVar250 ) + 0x3fffffff ) - iVar257 * 2 * (uint)uVar319 ) - iVar232 * 2 * (uint)uVar285 ) + ( ( uint )(ushort)(uVar285 * uVar285) + ( uint )(ushort)(uVar319 * uVar319) + ( uVar250 * uVar250 & 0xffff ) ) * 8;
         if (iVar271 == 4) break;
         iVar231 = *(int*)( local_298 + (long)( iVar271 >> 1 ) * 4 );
         puVar235 = puVar235 + 4;
         piVar238 = piVar238 + 4;
         iVar232 = iVar271;
      }
;
      uVar245 = 0;
      uVar240 = 1;
      do {
         if (*(uint*)( local_298 + uVar240 * 4 ) < *(uint*)( local_298 + uVar245 * 4 )) {
            uVar245 = uVar240;
         }

         uVar240 = uVar240 + 1;
      }
 while ( uVar240 != 4 );
      lVar236 = ( uVar245 * 2 + 1 ) * 8;
      uVar240 = uVar245 << 0x18;
      uVar265 = ( ulong )((uint)uVar245 & 2);
      if (( uVar245 & 2 ) == 0) {
         do {
            lVar237 = uVar265 + lVar236;
            lVar278 = uVar265 + lVar236 + -0x220;
            bVar220 = (char)uVar265 * '\x04';
            uVar265 = uVar265 + 2;
            uVar240 = uVar240 | ( ulong )(*(ushort*)( (long)local_218 + lVar237 ) >> 4) << ( bVar220 + 4 & 0x3f ) | ( ulong )(*(ushort*)( local_228 + lVar278 + 0x228 ) >> 4) << ( bVar220 & 0x3f );
         }
 while ( uVar265 != 6 );
      }
 else {
         lVar237 = 0;
         do {
            lVar278 = lVar237 + lVar236 + -0x220;
            uVar250 = ( uint ) * (ushort*)( (long)local_218 + lVar237 + lVar236 );
            cVar40 = (char)lVar237;
            lVar237 = lVar237 + 2;
            uVar240 = uVar240 | ( ulong )((int)( ( *(ushort*)( local_228 + lVar278 + 0x228 ) & 0xf8 ) - ( uVar250 & 0xf8 ) ) >> 3 & 7U | uVar250 & 0xf8) << ( cVar40 * '\x04' & 0x3fU );
         }
 while ( lVar237 != 6 );
      }

      piVar238 = (int*)local_1d8;
      for (lVar236 = 0x10; lVar236 != 0; lVar236 = lVar236 + -1) {
         piVar238[0] = 0;
         piVar238[1] = 0;
         piVar238 = piVar238 + (ulong)bVar284 * -4 + 2;
      }

      puVar235 = (ushort*)&local_258;
      puVar263 = (uint*)( &g_id + uVar245 * 0x40 );
      piVar238 = piVar273;
      do {
         uVar250 = *puVar263;
         uVar265 = (ulong)uVar250;
         puVar247 = puVar235 + 2;
         lVar237 = 0;
         plVar270 = (long*)&g_table256;
         lVar236 = (long)(int)( ( (uint)local_218[uVar265 * 4] - (uint)(byte)puVar235[1] ) * 0x4d + ( (uint)local_218[uVar265 * 4 + 1] - ( uint ) * (byte*)( (long)puVar235 + 1 ) ) * 0x97 + ( (uint)local_218[uVar265 * 4 + 2] - ( uint )(byte) * puVar235 ) * 0x1c );
         do {
            uVar264 = 1;
            uVar265 = 0;
            lVar278 = *plVar270 + lVar236;
            uVar279 = lVar278 * lVar278;
            do {
               lVar278 = plVar270[uVar264] + lVar236;
               uVar241 = lVar278 * lVar278;
               if (uVar241 < uVar279) {
                  uVar265 = uVar264 & 0xffffffff;
                  uVar279 = uVar241;
               }

               uVar264 = uVar264 + 1;
            }
 while ( uVar264 != 4 );
            plVar1 = (long*)( (long)local_1d8 + ( ( ulong )(uVar250 & 1) * 0x10 + lVar237 ) * 4 );
            *plVar1 = *plVar1 + uVar279;
            plVar270 = plVar270 + 4;
            *(short*)( (long)piVar238 + lVar237 ) = (short)uVar265;
            lVar237 = lVar237 + 2;
         }
 while ( lVar237 != 0x10 );
         puVar263 = puVar263 + 1;
         piVar238 = piVar238 + 4;
         puVar235 = puVar247;
      }
 while ( puVar247 != local_218 );
      if (param_5) {
         local_3d8 = 0;
         local_3d0 = 0x3f804000;
         if (cVar283 == '\x02') {
            local_299 = false;
            uVar250 = (anonymous_namespace)::compressBlockTH(&local_258, (Luma*)local_278, (uint*)local_288, (uint*)( local_288 + 4 ), &local_299);
            local_3d0 = (ulong)uVar250;
            if (local_299 == false) {
               uVar250 = local_288._0_4_ * 4;
               uVar275 = ( local_288._0_4_ & 0x3f80000 ) << 5;
               uVar268 = local_288._0_4_ * 2 & 0x3fffc;
               uVar251 = ( local_288._0_4_ * 2 & 0x20000U ) >> 0x11;
               uVar251 = ( uVar268 & ( ( uVar250 & 0x80000 & uVar251 << 0x13 ) >> 0x13 ) << 0x10 & ( ( uVar250 & 0x100000 ) >> 0x14 ^ 1 ) << 0x10 | uVar268 & ( ( uVar250 & 0x180000 & ( ( uVar250 & 0x80000 ) >> 0x13 ) << 0x14 ) >> 0x14 ) << 0x10 & ( uVar251 ^ 1 ) << 0x10 ) >> 0x10 | ( uVar250 & 0x100000 & uVar251 << 0x14 ) >> 0x14;
               uVar250 = ( uVar275 >> 0x1e ^ 1 ) << 0x1f | uVar268 | uVar275 | uVar250 & 0x180000 | local_288._0_4_ & 1 | ( -uVar251 & 7 ) << 0x15 | ( uVar251 ^ 1 ) << 0x12;
            }
 else {
               uVar250 = local_288._0_4_ * 2;
               uVar275 = local_288._0_4_ * 4 & 0x18000000;
               uVar251 = uVar275 >> 0x1c;
               uVar268 = ( uVar250 & 0x2000000 ) >> 0x19;
               uVar251 = ( uVar250 & 0x2000000 & uVar251 << 0x19 ) >> 0x19 | ( uVar250 & 0xe7ffffff & ( ( uVar275 & uVar251 << 0x1b ) >> 0x1b ) << 0x18 & ( uVar268 ^ 1 ) << 0x18 | uVar250 & 0xe7ffffff & ( ( uVar275 & uVar268 << 0x1b ) >> 0x1b ) << 0x18 & ( uVar251 ^ 1 ) << 0x18 ) >> 0x18;
               uVar250 = uVar250 & 0x3ffffff | local_288._0_4_ & 1 | uVar275 | uVar251 * -0x20000000 | ( uVar251 ^ 1 ) << 0x1a;
            }

            local_3d8 = CONCAT44((uint)local_288._4_4_ >> 0x18 | ( local_288._4_4_ & 0xff0000 ) >> 8 | ( local_288._4_4_ & 0xff00 ) << 8 | local_288._4_4_ << 0x18, uVar250 >> 0x18 | ( uVar250 & 0xff0000 ) >> 8 | ( uVar250 & 0xff00 ) << 8 | ( uVar250 | 2 ) << 0x18);
         }

      }

      local_288._0_8_ = 0;
      lVar236 = 1;
      do {
         if (*(ulong*)( (long)local_1d8 + lVar236 * 2 * 4 ) < *(ulong*)( local_1d8 + local_288._0_8_ * 8 )) {
            local_288._0_8_ = lVar236;
         }

         lVar236 = lVar236 + 1;
      }
 while ( lVar236 != 8 );
      local_288._8_8_ = 0;
      lVar236 = 1;
      do {
         if (auStack_198[lVar236] < auStack_198[local_288._8_8_]) {
            local_288._8_8_ = lVar236;
         }

         lVar236 = lVar236 + 1;
      }
 while ( lVar236 != 8 );
      auVar516 = __LC6;
      if (auStack_198[local_288._8_8_] + *(long*)( local_1d8 + local_288._0_8_ * 8 ) < local_3d0) {
         lVar236 = 0;
         uVar240 = local_288._8_8_ << 0x1d | local_288._0_8_ << 0x1a | uVar240;
         do {
            cVar40 = (char)lVar236;
            uVar285 = *(ushort*)( (long)piVar273 + *(long*)( local_288 + ( ulong )(*(uint*)( (long)( &g_id + uVar245 * 0x40 ) + lVar236 * 4 ) & 1) * 8 ) * 2 );
            piVar273 = piVar273 + 4;
            lVar236 = lVar236 + 1;
            uVar240 = uVar240 | ( ulong )(uVar285 & 1) << ( cVar40 + 0x20U & 0x3f ) | ( ulong )(uVar285 & 2) << ( cVar40 + 0x2fU & 0x3f );
         }
 while ( lVar236 != 0x10 );
         local_3d8 = uVar240 >> 0x18 & 0xff00000000 | ( uVar240 & 0xff00000000 ) << 0x18 | uVar240 & 0xffffffff | uVar240 >> 8 & 0xff0000000000 | ( uVar240 & 0xff0000000000 ) << 8;
      }

   }

   goto LAB_00104070;
   code_r0x00104028:puVar235 = puVar235 + 2;
   if (puVar235 == local_218) goto code_r0x00104031;
   goto LAB_00104020;
   code_r0x00104031:local_3d8 = ( ulong )(( local_258 & 0xf8 ) << 0x10 | ( bStack_257 & 0xf8 ) << 8 | bStack_256 & 0xf8 | 0x2000000);
   LAB_00104070:puVar2 = local_3b8 + 2;
   local_3b8[1] = local_3d8;
   puVar235 = (ushort*)&local_258;
   param_1 = local_3a0;
   puVar263 = &local_58;
   local_3b8 = puVar2;
   if (puVar2 == param_2 + ( ( ulong )(param_3 - 1) + 1 ) * 2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   goto LAB_00103f65;
}
/* CompressEacR(unsigned int const*, unsigned long*, unsigned int, unsigned long) */void CompressEacR(uint *param_1, ulong *param_2, uint param_3, ulong param_4) {
   byte bVar1;
   uint uVar2;
   byte bVar3;
   int iVar4;
   byte *pbVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   byte *pbVar9;
   ulong uVar10;
   long lVar11;
   uint uVar12;
   ulong uVar13;
   long lVar14;
   uint uVar15;
   ulong in_R10;
   int *piVar16;
   int iVar17;
   ulong unaff_R13;
   ulong *puVar18;
   ulong *puVar19;
   uint uVar20;
   int iVar21;
   long in_FS_OFFSET;
   int local_1b8;
   uint local_1b0;
   int local_1ac;
   uint *local_1a8;
   byte local_158[256];
   byte local_58[16];
   byte local_48[8];
   long local_40;
   uVar13 = unaff_R13 & 0xffffffff;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1ac = 0;
   pbVar5 = local_58;
   local_1a8 = param_1;
   puVar18 = param_2;
   do {
      do {
         pbVar9 = pbVar5 + 4;
         *(uint*)pbVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1*)( (long)param_1 + param_4 * 0xc + 2 ), *(undefined1*)( (long)param_1 + param_4 * 8 + 2 )), *(undefined1*)( (long)param_1 + param_4 * 4 + 2 )), *(undefined1*)( (long)param_1 + 2 ));
         param_1 = param_1 + 1;
         pbVar5 = pbVar9;
      }
 while ( pbVar9 != local_48 );
      local_1ac = local_1ac + 1;
      if ((long)local_1ac == param_4 >> 2) {
         local_1ac = 0;
         local_1a8 = local_1a8 + param_4 * 3 + 4;
      }
 else {
         local_1a8 = local_1a8 + 4;
      }

      uVar12 = (uint)local_58[0];
      pbVar5 = local_58 + 1;
      uVar8 = uVar12;
      do {
         while (true) {
            bVar1 = *pbVar5;
            if ((byte)uVar8 <= bVar1) break;
            pbVar5 = pbVar5 + 1;
            uVar8 = (uint)bVar1;
            if (pbVar5 == local_48) goto LAB_00106403;
         }
;
         if ((byte)uVar12 < bVar1) {
            uVar12 = (uint)bVar1;
         }

         pbVar5 = pbVar5 + 1;
      }
 while ( pbVar5 != local_48 );
      LAB_00106403:local_1b8 = 0x7fffffff;
      piVar16 = (int*)&g_alpha;
      local_1b0 = (uint)uVar13;
      uVar6 = (int)( uVar12 - uVar8 ) / 2 + uVar8;
      lVar11 = 0;
      in_R10 = in_R10 & 0xffffffff;
      pbVar5 = local_158;
      do {
         uVar15 = ( (int)( ( uVar12 - uVar8 ) * *(int*)( &g_alphaRange + lVar11 * 4 ) ) >> 0x10 ) + 1;
         uVar7 = *piVar16 * uVar15 + uVar6;
         if (0xff < uVar7) {
            uVar7 = (int)~uVar7 >> 0x1f;
         }

         lVar14 = 0;
         iVar17 = 0;
         do {
            while (true) {
               bVar1 = local_58[lVar14];
               iVar4 = (uint)bVar1 - ( uVar7 & 0xff );
               iVar4 = iVar4 * iVar4;
               if (iVar4 == 0) break;
               uVar10 = 1;
               uVar13 = 0;
               do {
                  uVar20 = piVar16[uVar10] * uVar15 + uVar6;
                  uVar2 = (int)~uVar20 >> 0x1f;
                  if (uVar20 < 0x100) {
                     uVar2 = uVar20;
                  }

                  iVar21 = (uint)bVar1 - ( uVar2 & 0xff );
                  iVar21 = iVar21 * iVar21;
                  if (iVar21 < iVar4) {
                     uVar13 = uVar10 & 0xffffffff;
                     iVar4 = iVar21;
                  }

                  uVar10 = uVar10 + 1;
               }
 while ( uVar10 != 8 );
               pbVar5[lVar14] = (byte)uVar13;
               lVar14 = lVar14 + 1;
               iVar17 = iVar17 + iVar4;
               if (lVar14 == 0x10) goto LAB_00106515;
            }
;
            pbVar5[lVar14] = 0;
            lVar14 = lVar14 + 1;
         }
 while ( lVar14 != 0x10 );
         LAB_00106515:if (( iVar17 < local_1b8 ) && ( local_1b0 = (uint)lVar11 ),in_R10 = (ulong)uVar15,local_1b8 = iVar17,iVar17 == 0) break;
         lVar11 = lVar11 + 1;
         piVar16 = piVar16 + 8;
         pbVar5 = pbVar5 + 0x10;
      }
 while ( lVar11 != 0x10 );
      uVar13 = (ulong)local_1b0;
      iVar17 = 0x2d;
      uVar10 = uVar13 << 0x30 | in_R10 << 0x34 | (ulong)uVar6 << 0x38;
      pbVar5 = local_158 + (long)(int)local_1b0 * 0x10;
      do {
         bVar1 = *pbVar5;
         pbVar5 = pbVar5 + 1;
         bVar3 = (byte)iVar17;
         iVar17 = iVar17 + -3;
         uVar10 = uVar10 | (ulong)bVar1 << ( bVar3 & 0x3f );
      }
 while ( iVar17 != -3 );
      puVar19 = puVar18 + 1;
      *puVar18 = uVar10 >> 0x38 | ( uVar10 & 0xff000000000000 ) >> 0x28 | ( uVar10 & 0xff0000000000 ) >> 0x18 | ( uVar10 & 0xff00000000 ) >> 8 | ( uVar10 & 0xff000000 ) << 8 | ( uVar10 & 0xff0000 ) << 0x18 | ( uVar10 & 0xff00 ) << 0x28 | uVar10 << 0x38;
      param_1 = local_1a8;
      pbVar5 = local_58;
      puVar18 = puVar19;
      if (puVar19 == param_2 + ( ulong )(param_3 - 1) + 1) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }
 while ( true );
}
/* CompressEacRg(unsigned int const*, unsigned long*, unsigned int, unsigned long) */void CompressEacRg(uint *param_1, ulong *param_2, uint param_3, ulong param_4) {
   byte bVar1;
   uint uVar2;
   byte *pbVar3;
   byte *pbVar4;
   byte bVar5;
   long lVar6;
   int iVar7;
   ulong *puVar8;
   ulong *puVar9;
   uint uVar10;
   undefined4 uVar11;
   ulong uVar12;
   long lVar13;
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   int *piVar17;
   uint uVar18;
   uint uVar19;
   int iVar20;
   uint uVar21;
   int iVar22;
   long in_FS_OFFSET;
   long local_1f0;
   int local_1e4;
   int local_1dc;
   uint local_1d8;
   uint local_1d0;
   int local_1c8;
   int local_1c4;
   uint *local_1c0;
   int *local_1b0;
   byte local_168[256];
   byte local_68[16];
   byte local_58[16];
   byte local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1c4 = 0;
   pbVar4 = local_68;
   local_1c0 = param_1;
   puVar8 = param_2;
   do {
      do {
         uVar15 = *param_1;
         pbVar3 = pbVar4 + 4;
         pbVar4[0x10] = ( byte )(uVar15 >> 8);
         uVar10 = param_1[param_4];
         *pbVar4 = ( byte )(uVar15 >> 0x10);
         pbVar4[0x11] = ( byte )(uVar10 >> 8);
         uVar15 = param_1[param_4 * 2];
         pbVar4[1] = ( byte )(uVar10 >> 0x10);
         pbVar4[0x12] = ( byte )(uVar15 >> 8);
         uVar10 = param_1[param_4 * 3];
         pbVar4[2] = ( byte )(uVar15 >> 0x10);
         pbVar4[3] = ( byte )(uVar10 >> 0x10);
         pbVar4[0x13] = ( byte )(uVar10 >> 8);
         pbVar4 = pbVar3;
         param_1 = param_1 + 1;
      }
 while ( pbVar3 != local_58 );
      local_1c4 = local_1c4 + 1;
      if ((long)local_1c4 == param_4 >> 2) {
         local_1c4 = 0;
         local_1c0 = local_1c0 + param_4 * 3 + 4;
      }
 else {
         local_1c0 = local_1c0 + 4;
      }

      uVar10 = (uint)local_68[0];
      pbVar4 = local_68 + 1;
      uVar15 = uVar10;
      do {
         while (true) {
            bVar1 = *pbVar4;
            if ((byte)uVar10 <= bVar1) break;
            pbVar4 = pbVar4 + 1;
            uVar10 = (uint)bVar1;
            if (local_58 == pbVar4) goto LAB_001067a3;
         }
;
         if ((byte)uVar15 < bVar1) {
            uVar15 = (uint)bVar1;
         }

         pbVar4 = pbVar4 + 1;
      }
 while ( local_58 != pbVar4 );
      LAB_001067a3:local_1e4 = 0x7fffffff;
      piVar17 = (int*)&g_alpha;
      local_1b0 = (int*)&g_alpha;
      uVar18 = (int)( uVar15 - uVar10 ) / 2 + uVar10;
      local_1f0 = 0;
      pbVar4 = local_168;
      do {
         uVar14 = ( (int)( ( uVar15 - uVar10 ) * *(int*)( &g_alphaRange + local_1f0 * 4 ) ) >> 0x10 ) + 1;
         uVar19 = *piVar17 * uVar14 + uVar18;
         if (0xff < uVar19) {
            uVar19 = (int)~uVar19 >> 0x1f;
         }

         lVar13 = 0;
         iVar20 = 0;
         do {
            while (true) {
               bVar1 = local_68[lVar13];
               iVar7 = (uint)bVar1 - ( uVar19 & 0xff );
               iVar7 = iVar7 * iVar7;
               if (iVar7 == 0) break;
               lVar6 = 1;
               uVar11 = 0;
               do {
                  uVar21 = piVar17[lVar6] * uVar14 + uVar18;
                  uVar2 = (int)~uVar21 >> 0x1f;
                  if (uVar21 < 0x100) {
                     uVar2 = uVar21;
                  }

                  iVar22 = (uint)bVar1 - ( uVar2 & 0xff );
                  iVar22 = iVar22 * iVar22;
                  if (iVar22 < iVar7) {
                     iVar7 = iVar22;
                     uVar11 = (int)lVar6;
                  }

                  lVar6 = lVar6 + 1;
               }
 while ( lVar6 != 8 );
               iVar20 = iVar20 + iVar7;
               pbVar4[lVar13] = (byte)uVar11;
               lVar13 = lVar13 + 1;
               if (lVar13 == 0x10) goto LAB_001068d8;
            }
;
            pbVar4[lVar13] = 0;
            lVar13 = lVar13 + 1;
         }
 while ( lVar13 != 0x10 );
         LAB_001068d8:if (iVar20 < local_1e4) {
            local_1c8 = (int)local_1f0;
            local_1e4 = iVar20;
            local_1d0 = uVar14;
            if (iVar20 == 0) break;
         }

         local_1f0 = local_1f0 + 1;
         piVar17 = piVar17 + 8;
         pbVar4 = pbVar4 + 0x10;
      }
 while ( local_1f0 != 0x10 );
      pbVar4 = local_168 + (long)local_1c8 * 0x10;
      iVar20 = 0x2d;
      uVar16 = (long)local_1c8 << 0x30 | (ulong)local_1d0 << 0x34 | (ulong)uVar18 << 0x38;
      do {
         bVar1 = *pbVar4;
         pbVar4 = pbVar4 + 1;
         bVar5 = (byte)iVar20;
         iVar20 = iVar20 + -3;
         uVar16 = uVar16 | (ulong)bVar1 << ( bVar5 & 0x3f );
      }
 while ( iVar20 != -3 );
      *puVar8 = uVar16 >> 0x38 | ( uVar16 & 0xff000000000000 ) >> 0x28 | ( uVar16 & 0xff0000000000 ) >> 0x18 | ( uVar16 & 0xff00000000 ) >> 8 | ( uVar16 & 0xff000000 ) << 8 | ( uVar16 & 0xff0000 ) << 0x18 | ( uVar16 & 0xff00 ) << 0x28 | uVar16 << 0x38;
      uVar15 = (uint)local_58[0];
      pbVar4 = local_58 + 1;
      uVar10 = uVar15;
      do {
         while (true) {
            bVar1 = *pbVar4;
            if ((byte)uVar10 <= bVar1) break;
            pbVar4 = pbVar4 + 1;
            uVar10 = (uint)bVar1;
            if (pbVar4 == local_48) goto LAB_001069c4;
         }
;
         if ((byte)uVar15 < bVar1) {
            uVar15 = (uint)bVar1;
         }

         pbVar4 = pbVar4 + 1;
      }
 while ( pbVar4 != local_48 );
      LAB_001069c4:local_1e4 = 0x7fffffff;
      uVar18 = (int)( uVar15 - uVar10 ) / 2 + uVar10;
      local_1f0 = 0;
      pbVar4 = local_168;
      do {
         uVar14 = ( (int)( ( uVar15 - uVar10 ) * *(int*)( &g_alphaRange + local_1f0 * 4 ) ) >> 0x10 ) + 1;
         uVar19 = *local_1b0 * uVar14 + uVar18;
         if (0xff < uVar19) {
            uVar19 = (int)~uVar19 >> 0x1f;
         }

         lVar13 = 0;
         iVar20 = 0;
         do {
            while (true) {
               bVar1 = local_58[lVar13];
               iVar7 = (uint)bVar1 - ( uVar19 & 0xff );
               iVar7 = iVar7 * iVar7;
               if (iVar7 == 0) break;
               uVar12 = 1;
               uVar16 = 0;
               do {
                  uVar21 = local_1b0[uVar12] * uVar14 + uVar18;
                  uVar2 = (int)~uVar21 >> 0x1f;
                  if (uVar21 < 0x100) {
                     uVar2 = uVar21;
                  }

                  iVar22 = (uint)bVar1 - ( uVar2 & 0xff );
                  iVar22 = iVar22 * iVar22;
                  if (iVar22 < iVar7) {
                     uVar16 = uVar12 & 0xffffffff;
                     iVar7 = iVar22;
                  }

                  uVar12 = uVar12 + 1;
               }
 while ( uVar12 != 8 );
               pbVar4[lVar13] = (byte)uVar16;
               lVar13 = lVar13 + 1;
               iVar20 = iVar20 + iVar7;
               if (lVar13 == 0x10) goto LAB_00106ae8;
            }
;
            pbVar4[lVar13] = 0;
            lVar13 = lVar13 + 1;
         }
 while ( lVar13 != 0x10 );
         LAB_00106ae8:if (iVar20 < local_1e4) {
            local_1dc = (int)local_1f0;
            local_1e4 = iVar20;
            local_1d8 = uVar14;
            if (iVar20 == 0) break;
         }

         local_1f0 = local_1f0 + 1;
         local_1b0 = local_1b0 + 8;
         pbVar4 = pbVar4 + 0x10;
      }
 while ( local_1f0 != 0x10 );
      pbVar4 = local_168 + (long)local_1dc * 0x10;
      iVar20 = 0x2d;
      uVar16 = (long)local_1dc << 0x30 | (ulong)local_1d8 << 0x34 | (ulong)uVar18 << 0x38;
      do {
         bVar1 = *pbVar4;
         pbVar4 = pbVar4 + 1;
         bVar5 = (byte)iVar20;
         iVar20 = iVar20 + -3;
         uVar16 = uVar16 | (ulong)bVar1 << ( bVar5 & 0x3f );
      }
 while ( iVar20 != -3 );
      puVar9 = puVar8 + 2;
      puVar8[1] = uVar16 >> 0x38 | ( uVar16 & 0xff000000000000 ) >> 0x28 | ( uVar16 & 0xff0000000000 ) >> 0x18 | ( uVar16 & 0xff00000000 ) >> 8 | ( uVar16 & 0xff000000 ) << 8 | ( uVar16 & 0xff0000 ) << 0x18 | ( uVar16 & 0xff00 ) << 0x28 | uVar16 << 0x38;
      pbVar4 = local_68;
      param_1 = local_1c0;
      puVar8 = puVar9;
      if (puVar9 == param_2 + ( ( ulong )(param_3 - 1) + 1 ) * 2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

   }
 while ( true );
}


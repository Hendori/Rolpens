/* meshopt::writeTriangle(void*, unsigned long, unsigned long, unsigned int, unsigned int, unsigned
   int) */void meshopt::writeTriangle(void *param_1, ulong param_2, ulong param_3, uint param_4, uint param_5, uint param_6) {
   if (param_3 != 2) {
      *(uint*)( (long)param_1 + param_2 * 4 ) = param_4;
      *(uint*)( (long)param_1 + param_2 * 4 + 4 ) = param_5;
      *(uint*)( (long)param_1 + param_2 * 4 + 8 ) = param_6;
      return;
   }

   *(short*)( (long)param_1 + param_2 * 2 ) = (short)param_4;
   *(short*)( (long)param_1 + param_2 * 2 + 2 ) = (short)param_5;
   *(short*)( (long)param_1 + param_2 * 2 + 4 ) = (short)param_6;
   return;
}
/* meshopt::decodeIndex(unsigned char const*&, unsigned int) */int meshopt::decodeIndex(uchar **param_1, uint param_2) {
   byte *pbVar1;
   byte bVar2;
   int iVar3;
   uint uVar4;
   pbVar1 = *param_1;
   *param_1 = pbVar1 + 1;
   bVar2 = *pbVar1;
   uVar4 = (uint)bVar2;
   if ((char)bVar2 < '\0') {
      uVar4 = bVar2 & 0x7f;
      pbVar1 = pbVar1 + 2;
      iVar3 = 7;
      do {
         *param_1 = pbVar1;
         bVar2 = (byte)iVar3;
         iVar3 = iVar3 + 7;
         uVar4 = uVar4 | ( pbVar1[-1] & 0x7f ) << ( bVar2 & 0x1f );
         if (-1 < (char)pbVar1[-1]) break;
         pbVar1 = pbVar1 + 1;
      }
 while ( iVar3 != 0x23 );
   }

   return ( -(uVar4 & 1) ^ uVar4 >> 1 ) + param_2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */byte *meshopt_encodeIndexBuffer(byte *param_1, ulong param_2, long param_3, ulong param_4) {
   int iVar1;
   int iVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   undefined8 uVar9;
   uint uVar10;
   long lVar11;
   long lVar12;
   ulong uVar13;
   byte *pbVar14;
   uint uVar15;
   int iVar16;
   int iVar17;
   bool bVar18;
   byte bVar19;
   int iVar20;
   ulong uVar21;
   uint uVar22;
   uint uVar23;
   long lVar24;
   byte bVar25;
   uint uVar26;
   byte *pbVar27;
   byte *pbVar28;
   long in_FS_OFFSET;
   bool bVar29;
   ulong local_158;
   int local_14c;
   byte *local_148;
   uint local_130;
   int local_120;
   int local_108[16];
   undefined8 local_c8;
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined4 local_b8;
   undefined4 uStack_b4;
   undefined4 uStack_b0;
   undefined4 uStack_ac;
   undefined4 local_a8;
   undefined4 uStack_a4;
   undefined4 uStack_a0;
   undefined4 uStack_9c;
   undefined4 local_98;
   undefined4 uStack_94;
   undefined4 uStack_90;
   undefined4 uStack_8c;
   undefined4 local_88;
   undefined4 uStack_84;
   undefined4 uStack_80;
   undefined4 uStack_7c;
   undefined4 local_78;
   undefined4 uStack_74;
   undefined4 uStack_70;
   undefined4 uStack_6c;
   undefined4 local_68;
   undefined4 uStack_64;
   undefined4 uStack_60;
   undefined4 uStack_5c;
   undefined4 local_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   long local_40;
   iVar8 = _gEncodeIndexVersion;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 / 3 + 0x11 <= param_2) {
      pbVar27 = param_1 + param_4 / 3 + 1;
      local_c8._0_4_ = 0xffffffff;
      local_c8._4_4_ = 0xffffffff;
      uStack_c0 = 0xffffffff;
      uStack_bc = 0xffffffff;
      local_b8 = 0xffffffff;
      uStack_b4 = 0xffffffff;
      uStack_b0 = 0xffffffff;
      uStack_ac = 0xffffffff;
      *param_1 = (byte)_gEncodeIndexVersion | 0xe0;
      pbVar14 = param_1 + ( param_2 - 0x10 );
      uVar23 = ( iVar8 < 1 ) + 0xd + ( uint )(iVar8 < 1);
      local_a8 = 0xffffffff;
      uStack_a4 = 0xffffffff;
      uStack_a0 = 0xffffffff;
      uStack_9c = 0xffffffff;
      local_98 = 0xffffffff;
      uStack_94 = 0xffffffff;
      uStack_90 = 0xffffffff;
      uStack_8c = 0xffffffff;
      local_88 = 0xffffffff;
      uStack_84 = 0xffffffff;
      uStack_80 = 0xffffffff;
      uStack_7c = 0xffffffff;
      local_78 = 0xffffffff;
      uStack_74 = 0xffffffff;
      uStack_70 = 0xffffffff;
      uStack_6c = 0xffffffff;
      local_68 = 0xffffffff;
      uStack_64 = 0xffffffff;
      uStack_60 = 0xffffffff;
      uStack_5c = 0xffffffff;
      local_58 = 0xffffffff;
      uStack_54 = 0xffffffff;
      uStack_50 = 0xffffffff;
      uStack_4c = 0xffffffff;
      local_108[0] = -1;
      for (int i = 0; i < 5; i++) {
         for (int j = 0; j < 3; j++) {
            local_108[( 3 * i + ( j + 1 ) )] = 4294967295;
         }

      }

      if (param_4 == 0) {
         LAB_0010075f:uVar9 = _UNK_00101318;
         if (pbVar27 <= pbVar14) {
            pbVar14 = pbVar27 + ( 0x10 - (long)param_1 );
            *(undefined8*)pbVar27 = __LC0;
            *(undefined8*)( pbVar27 + 8 ) = uVar9;
            goto LAB_001000eb;
         }

      }
 else if (pbVar27 <= pbVar14) {
         local_148 = param_1 + 2;
         uVar13 = 0;
         lVar24 = 0;
         local_158 = 0;
         local_120 = 0;
         local_14c = 0;
         LAB_001001f8:iVar1 = *(int*)( param_3 + 8 + lVar24 * 4 );
         iVar2 = *(int*)( param_3 + 4 + lVar24 * 4 );
         iVar17 = *(int*)( param_3 + lVar24 * 4 );
         iVar6 = (int)local_158;
         lVar11 = 0;
         do {
            iVar5 = (int)lVar11;
            uVar21 = ( ulong )(( iVar6 + -1 ) - iVar5 & 0xf);
            iVar20 = *(int*)( &local_c8 + uVar21 );
            iVar16 = *(int*)( (long)&local_c8 + uVar21 * 8 + 4 );
            iVar7 = (int)uVar13;
            if (( iVar17 == iVar20 ) && ( iVar2 == iVar16 )) {
               uVar15 = iVar5 << 2;
               LAB_00100643:iVar17 = (int)uVar15 >> 2;
               if (iVar17 != 0xf) {
                  lVar11 = ( ulong )(uVar15 & 3) * 0xc;
                  iVar1 = *(int*)( param_3 + ( ( ulong ) * (uint*)( meshopt::kTriangleIndexOrder + lVar11 + 8 ) + lVar24 ) * 4 );
                  uVar3 = *(undefined4*)( param_3 + ( ( ulong ) * (uint*)( meshopt::kTriangleIndexOrder + lVar11 + 4 ) + lVar24 ) * 4 );
                  uVar4 = *(undefined4*)( param_3 + ( ( ulong ) * (uint*)( meshopt::kTriangleIndexOrder + lVar11 ) + lVar24 ) * 4 );
                  lVar11 = 0;
                  goto LAB_001006a0;
               }

               break;
            }

            if (( iVar2 == iVar20 ) && ( iVar1 == iVar16 )) {
               uVar15 = iVar5 * 4 + 1;
               goto LAB_00100643;
            }

            if (( iVar1 == iVar20 ) && ( iVar17 == iVar16 )) {
               uVar15 = iVar5 * 4 + 2;
               goto LAB_00100643;
            }

            lVar11 = lVar11 + 1;
         }
 while ( lVar11 != 0x10 );
         lVar11 = 0xc;
         if (iVar2 != local_14c) {
            lVar11 = ( ulong )(iVar1 == local_14c) * 0x18;
         }

         iVar1 = *(int*)( param_3 + ( ( ulong ) * (uint*)( meshopt::kTriangleIndexOrder + lVar11 ) + lVar24 ) * 4 );
         iVar2 = *(int*)( param_3 + ( ( ulong ) * (uint*)( meshopt::kTriangleIndexOrder + lVar11 + 4 ) + lVar24 ) * 4 );
         iVar17 = *(int*)( param_3 + ( ( ulong ) * (uint*)( meshopt::kTriangleIndexOrder + lVar11 + 8 ) + lVar24 ) * 4 );
         bVar18 = iVar1 == 0 && iVar2 == 1;
         if (( iVar1 == 0 && iVar2 == 1 ) && ( bVar18 = bVar18 )) {
            local_14c = 0;
            local_108[0] = -1;
            for (int i = 0; i < 5; i++) {
               for (int j = 0; j < 3; j++) {
                  local_108[( 3 * i + ( j + 1 ) )] = 4294967295;
               }

            }

         }

         lVar11 = 0;
         do {
            uVar15 = (uint)lVar11;
            if (iVar2 == local_108[( iVar7 + -1 ) - uVar15 & 0xf]) goto LAB_00100337;
            lVar11 = lVar11 + 1;
         }
 while ( lVar11 != 0x10 );
         uVar15 = 0xffffffff;
         lVar11 = 0xffffffff;
         LAB_00100337:lVar12 = 0;
         do {
            local_130 = (uint)lVar12;
            if (iVar17 == local_108[( iVar7 + -1 ) - local_130 & 0xf]) goto LAB_0010036d;
            lVar12 = lVar12 + 1;
         }
 while ( lVar12 != 0x10 );
         local_130 = 0xffffffff;
         LAB_0010036d:bVar19 = 0xf;
         bVar29 = local_14c == iVar1;
         if (bVar29) {
            local_14c = local_14c + 1;
            bVar19 = 0;
         }

         if (uVar15 < 0xe) {
            iVar20 = (int)lVar11 + 1;
            bVar25 = (byte)iVar20 * '\x10';
            uVar15 = ( uint )(0x8001L >> ( (byte)iVar20 & 0x3f )) & 1;
         }
 else if (local_14c == iVar2) {
            local_14c = local_14c + 1;
            bVar25 = 0;
            iVar20 = 0;
            uVar15 = 1;
         }
 else {
            uVar15 = 1;
            bVar25 = 0xf0;
            iVar20 = 0xf;
         }

         if (local_130 < 0xe) {
            iVar16 = local_130 + 1;
            bVar25 = bVar25 | (byte)iVar16;
            uVar10 = ( uint )(0x8001L >> ( (byte)iVar16 & 0x3f )) & 1;
         }
 else if (local_14c == iVar17) {
            local_14c = local_14c + 1;
            iVar16 = 0;
            uVar10 = 1;
         }
 else {
            uVar10 = 1;
            bVar25 = bVar25 | 0xf;
            iVar16 = 0xf;
         }

         lVar11 = 0;
         do {
            if (bVar25 == ( &meshopt::kCodeAuxEncodingTable )[lVar11]) {
               if (bVar29) {
                  if (( 0xd < (int)lVar11 ) || ( bVar18 )) {
                     pbVar28 = pbVar27 + 1;
                     local_148[-1] = 0xfe;
                     *pbVar27 = bVar25;
                  }
 else {
                     local_148[-1] = (byte)lVar11 | 0xf0;
                     pbVar28 = pbVar27;
                  }

                  goto joined_r0x00100550;
               }

               break;
            }

            lVar11 = lVar11 + 1;
         }
 while ( lVar11 != 0x10 );
         local_148[-1] = bVar19 | 0xfe;
         pbVar28 = pbVar27 + 1;
         *pbVar27 = bVar25;
         if (bVar19 == 0xf) {
            uVar22 = ( iVar1 - local_120 ) * 2 ^ iVar1 - local_120 >> 0x1f;
            uVar26 = uVar22 & 0x7f;
            bVar19 = (byte)uVar26;
            while (0x7f < uVar22) {
               uVar22 = uVar22 >> 7;
               *pbVar28 = (byte)uVar26 | 0x80;
               uVar26 = uVar22 & 0x7f;
               bVar19 = (byte)uVar26;
               pbVar28 = pbVar28 + 1;
            }
;
            ;;
            *pbVar28 = bVar19;
            pbVar28 = pbVar28 + 1;
            local_120 = iVar1;
         }

         joined_r0x00100550:pbVar27 = pbVar28;
         if (iVar20 == 0xf) {
            uVar22 = ( iVar2 - local_120 ) * 2 ^ iVar2 - local_120 >> 0x1f;
            uVar26 = uVar22 & 0x7f;
            bVar19 = (byte)uVar26;
            while (0x7f < uVar22) {
               uVar22 = uVar22 >> 7;
               *pbVar28 = (byte)uVar26 | 0x80;
               uVar26 = uVar22 & 0x7f;
               bVar19 = (byte)uVar26;
               pbVar28 = pbVar28 + 1;
            }
;
            ;;
            *pbVar28 = bVar19;
            local_120 = iVar2;
            pbVar27 = pbVar28 + 1;
         }

         if (iVar16 == 0xf) {
            uVar22 = ( iVar17 - local_120 ) * 2 ^ iVar17 - local_120 >> 0x1f;
            uVar26 = uVar22 & 0x7f;
            bVar19 = (byte)uVar26;
            while (0x7f < uVar22) {
               uVar22 = uVar22 >> 7;
               *pbVar27 = (byte)uVar26 | 0x80;
               uVar26 = uVar22 & 0x7f;
               bVar19 = (byte)uVar26;
               pbVar27 = pbVar27 + 1;
            }
;
            ;;
            *pbVar27 = bVar19;
            pbVar27 = pbVar27 + 1;
            local_120 = iVar17;
         }

         local_108[uVar13] = iVar1;
         uVar22 = iVar7 + 1U & 0xf;
         uVar13 = (ulong)uVar22;
         if (uVar15 != 0) {
            local_108[uVar13] = iVar2;
            uVar13 = ( ulong )(uVar22 + 1 & 0xf);
         }

         if (uVar10 != 0) {
            local_108[uVar13] = iVar17;
            uVar13 = ( ulong )((int)uVar13 + 1U & 0xf);
         }

         ( &local_c8 )[local_158] = CONCAT44(iVar1, iVar2);
         uVar15 = iVar6 + 1U & 0xf;
         ( &local_c8 )[uVar15] = CONCAT44(iVar2, iVar17);
         uVar15 = uVar15 + 1 & 0xf;
         ( &local_c8 )[uVar15] = CONCAT44(iVar17, iVar1);
         goto joined_r0x00100754;
      }

   }

   LAB_001000e9:pbVar14 = (byte*)0x0;
   LAB_001000eb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pbVar14;
   while (lVar11 = lVar11 + 1,lVar11 != 0x10) {
      LAB_001006a0:iVar2 = (int)lVar11;
      if (iVar1 == local_108[( iVar7 + -1 ) - iVar2 & 0xf]) {
         if (( 0 < iVar2 ) && ( iVar2 < (int)uVar23 )) {
            local_148[-1] = ( byte )(iVar17 << 4) | (byte)lVar11;
            goto LAB_00100720;
         }

         break;
      }

   }
;
   ;;
   if (local_14c == iVar1) {
      local_108[uVar13] = iVar1;
      local_14c = local_14c + 1;
      local_148[-1] = ( byte )(iVar17 << 4);
      uVar13 = ( ulong )(iVar7 + 1U & 0xf);
      goto LAB_00100720;
   }

   bVar19 = ( byte )(iVar17 << 4);
   if (iVar8 < 1) {
      LAB_001008be:local_148[-1] = bVar19 | 0xf;
      uVar15 = ( iVar1 - local_120 ) * 2 ^ iVar1 - local_120 >> 0x1f;
      uVar10 = uVar15 & 0x7f;
      bVar19 = (byte)uVar10;
      while (0x7f < uVar15) {
         uVar15 = uVar15 >> 7;
         *pbVar27 = (byte)uVar10 | 0x80;
         uVar10 = uVar15 & 0x7f;
         bVar19 = (byte)uVar10;
         pbVar27 = pbVar27 + 1;
      }
;
      ;;
      *pbVar27 = bVar19;
      pbVar27 = pbVar27 + 1;
      local_108[uVar13] = iVar1;
      uVar13 = ( ulong )(iVar7 + 1U & 0xf);
      local_120 = iVar1;
   }
 else {
      if (iVar1 + 1 == local_120) {
         bVar19 = bVar19 | 0xd;
         uVar15 = 0xd;
      }
 else {
         if (local_120 + 1 != iVar1) goto LAB_001008be;
         bVar19 = bVar19 | 0xe;
         uVar15 = 0xe;
      }

      local_148[-1] = bVar19;
      local_120 = iVar1;
      if (uVar23 <= uVar15) {
         local_108[uVar13] = iVar1;
         uVar13 = ( ulong )(iVar7 + 1U & 0xf);
      }

   }

   LAB_00100720:( &local_c8 )[local_158] = CONCAT44(uVar3, iVar1);
   uVar15 = iVar6 + 1U & 0xf;
   ( &local_c8 )[uVar15] = CONCAT44(iVar1, uVar4);
   joined_r0x00100754:if (param_4 <= lVar24 + 3U) goto LAB_0010075f;
   local_158 = ( ulong )(uVar15 + 1 & 0xf);
   lVar24 = lVar24 + 3;
   local_148 = local_148 + 1;
   if (pbVar14 < pbVar27) goto LAB_001000e9;
   goto LAB_001001f8;
}
long meshopt_encodeIndexBufferBound(ulong param_1, ulong param_2) {
   int iVar1;
   int iVar2;
   ulong uVar3;
   if (param_2 < 3) {
      uVar3 = 5;
   }
 else {
      iVar2 = 1;
      do {
         iVar1 = iVar2;
         iVar2 = iVar1 + 1;
         if (iVar2 == 0x20) {
            uVar3 = 0x11;
            goto LAB_00100989;
         }

      }
 while ( ( ulong )(1L << ( (byte)iVar2 & 0x3f )) < param_2 );
      uVar3 = ( ulong )(( ( iVar1 + 8U ) / 7 ) * 3 + 2);
   }

   LAB_00100989:return ( param_1 / 3 ) * uVar3 + 0x11;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void meshopt_encodeIndexVersion(undefined4 param_1) {
   _gEncodeIndexVersion = param_1;
   return;
}
int meshopt_decodeIndexBuffer(void *param_1, ulong param_2, ulong param_3, byte *param_4, ulong param_5) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
   int iVar4;
   uint uVar5;
   uint uVar6;
   int iVar7;
   uint uVar8;
   ulong uVar9;
   byte bVar10;
   uint uVar11;
   ulong uVar12;
   uint uVar13;
   ulong uVar14;
   char cVar15;
   uint uVar16;
   ulong uVar17;
   uint uVar18;
   byte *pbVar19;
   byte *pbVar20;
   long in_FS_OFFSET;
   bool bVar21;
   bool bVar22;
   undefined4 extraout_XMM0_Da;
   undefined8 extraout_XMM0_Qa;
   undefined8 uVar23;
   undefined4 extraout_XMM1_Da;
   undefined8 extraout_XMM1_Qa;
   undefined8 uVar24;
   uint local_13c;
   byte *local_110;
   uint local_108[16];
   undefined8 local_c8;
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined4 local_b8;
   undefined4 uStack_b4;
   undefined4 uStack_b0;
   undefined4 uStack_ac;
   undefined4 local_a8;
   undefined4 uStack_a4;
   undefined4 uStack_a0;
   undefined4 uStack_9c;
   undefined4 local_98;
   undefined4 uStack_94;
   undefined4 uStack_90;
   undefined4 uStack_8c;
   undefined4 local_88;
   undefined4 uStack_84;
   undefined4 uStack_80;
   undefined4 uStack_7c;
   undefined4 local_78;
   undefined4 uStack_74;
   undefined4 uStack_70;
   undefined4 uStack_6c;
   undefined4 local_68;
   undefined4 uStack_64;
   undefined4 uStack_60;
   undefined4 uStack_5c;
   undefined4 local_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 < param_2 / 3 + 0x11) {
      LAB_00100f98:iVar4 = -2;
   }
 else {
      bVar1 = *param_4;
      if (( ( bVar1 & 0xf0 ) == 0xe0 ) && ( ( bVar1 & 0xe ) == 0 )) {
         pbVar19 = param_4 + 1;
         pbVar20 = pbVar19 + param_2 / 3;
         local_c8._0_4_ = 0xffffffff;
         local_c8._4_4_ = 0xffffffff;
         uStack_c0 = 0xffffffff;
         uStack_bc = 0xffffffff;
         local_b8 = 0xffffffff;
         uStack_b4 = 0xffffffff;
         uStack_b0 = 0xffffffff;
         uStack_ac = 0xffffffff;
         param_4 = param_4 + ( param_5 - 0x10 );
         local_a8 = 0xffffffff;
         uStack_a4 = 0xffffffff;
         uStack_a0 = 0xffffffff;
         uStack_9c = 0xffffffff;
         local_98 = 0xffffffff;
         uStack_94 = 0xffffffff;
         uStack_90 = 0xffffffff;
         uStack_8c = 0xffffffff;
         local_88 = 0xffffffff;
         uStack_84 = 0xffffffff;
         uStack_80 = 0xffffffff;
         uStack_7c = 0xffffffff;
         local_78 = 0xffffffff;
         uStack_74 = 0xffffffff;
         uStack_70 = 0xffffffff;
         uStack_6c = 0xffffffff;
         local_68 = 0xffffffff;
         uStack_64 = 0xffffffff;
         uStack_60 = 0xffffffff;
         uStack_5c = 0xffffffff;
         local_58 = 0xffffffff;
         uStack_54 = 0xffffffff;
         uStack_50 = 0xffffffff;
         uStack_4c = 0xffffffff;
         for (int i = 0; i < 16; i++) {
            local_108[i] = 4294967295;
         }

         local_110 = pbVar20;
         if (param_2 != 0) {
            uVar9 = 0;
            uVar17 = 0;
            uVar14 = 0;
            local_13c = 0;
            uVar13 = 0;
            do {
               if (param_4 < pbVar20) goto LAB_00100f98;
               bVar2 = *pbVar19;
               uVar5 = (uint)bVar2;
               iVar4 = (int)uVar9;
               if (bVar2 < 0xf0) {
                  uVar12 = ( ulong )(( (int)uVar17 + -1 ) - ( uint )(bVar2 >> 4) & 0xf);
                  uVar11 = *(uint*)( &local_c8 + uVar12 );
                  uVar6 = *(uint*)( (long)&local_c8 + uVar12 * 8 + 4 );
                  uVar18 = uVar5 & 0xf;
                  if (( uVar5 & 0xf ) < ( -(uint)((bVar1 & 0xf) == 0) & 2 ) + 0xd) {
                     uVar5 = uVar13;
                     if ((char)uVar18 != '\0') {
                        uVar5 = local_108[( iVar4 + -1 ) - uVar18 & 0xf];
                     }

                     uVar13 = uVar13 + ( ( bVar2 & 0xf ) == 0 );
                     iVar4 = meshopt::writeTriangle(param_1, uVar14, param_3, uVar11, uVar6, uVar5);
                     local_108[uVar9] = uVar5;
                     uVar5 = (int)uVar9 + iVar4;
                     uVar24 = extraout_XMM1_Qa;
                     uVar23 = extraout_XMM0_Qa;
                  }
 else {
                     if ((char)uVar18 == '\x0f') {
                        local_13c = meshopt::decodeIndex(&local_110, local_13c);
                        pbVar20 = local_110;
                     }
 else {
                        local_13c = local_13c + ( ( uVar5 & 0xf ) - ( uVar18 ^ 3 ) );
                     }

                     uVar5 = local_13c;
                     uVar11 = meshopt::writeTriangle(param_1, uVar14, param_3, uVar11, uVar6, local_13c);
                     uVar24 = CONCAT44(uVar6, extraout_XMM1_Da);
                     local_108[uVar9] = uVar11;
                     uVar23 = CONCAT44(uVar5, extraout_XMM0_Da);
                     uVar5 = (int)uVar9 + 1;
                  }

                  ( &local_c8 )[uVar17] = uVar24;
                  uVar9 = ( ulong )(uVar5 & 0xf);
                  uVar5 = (int)uVar17 + 1U & 0xf;
                  ( &local_c8 )[uVar5] = uVar23;
                  uVar17 = ( ulong )(uVar5 + 1 & 0xf);
               }
 else if (bVar2 < 0xfe) {
                  bVar2 = param_4[uVar5 & 0xf];
                  bVar21 = bVar2 >> 4 == 0;
                  uVar5 = uVar13 + 1;
                  if (!bVar21) {
                     uVar5 = local_108[iVar4 - ( uint )(bVar2 >> 4) & 0xf];
                  }

                  bVar22 = ( bVar2 & 0xf ) == 0;
                  uVar11 = (uint)bVar21 + uVar13 + 1;
                  if (!bVar22) {
                     uVar11 = local_108[iVar4 - (uint)bVar2 & 0xf];
                  }

                  uVar6 = meshopt::writeTriangle(param_1, uVar14, param_3, uVar13, uVar5, uVar11);
                  local_108[uVar9] = uVar13;
                  uVar18 = (int)uVar9 + 1U & 0xf;
                  local_108[uVar18] = uVar5;
                  uVar18 = uVar18 + bVar21 & 0xf;
                  local_108[uVar18] = uVar11;
                  uVar16 = (int)uVar17 + 1U & 0xf;
                  *(uint*)( (long)&local_c8 + uVar17 * 8 + 4 ) = uVar13;
                  uVar9 = ( ulong )(uVar18 + bVar22 & 0xf);
                  *(uint*)( &local_c8 + uVar17 ) = uVar5;
                  uVar18 = uVar16 + 1 & 0xf;
                  *(uint*)( &local_c8 + uVar16 ) = uVar11;
                  *(uint*)( (long)&local_c8 + (ulong)uVar16 * 8 + 4 ) = uVar5;
                  *(uint*)( &local_c8 + uVar18 ) = uVar13;
                  uVar17 = ( ulong )(uVar18 + 1 & 0xf);
                  *(uint*)( (long)&local_c8 + (ulong)uVar18 * 8 + 4 ) = uVar11;
                  uVar13 = uVar6;
               }
 else {
                  local_110 = pbVar20 + 1;
                  bVar3 = *pbVar20;
                  bVar10 = bVar3;
                  if (bVar2 == 0xfe) {
                     if (bVar3 != 0) {
                        iVar7 = 0;
                        uVar5 = uVar13 + 1;
                        goto LAB_00100d53;
                     }

                     uVar6 = 1;
                     uVar13 = 0;
                     iVar7 = 0;
                     uVar5 = 1;
                     uVar11 = 1;
                     uVar18 = 2;
                     LAB_00100ed3:cVar15 = '\0';
                     uVar16 = uVar18;
                     uVar18 = uVar18 + 1;
                     uVar8 = uVar13;
                  }
 else {
                     if (bVar3 == 0) {
                        uVar6 = 1;
                        uVar13 = 0;
                        iVar7 = 0xf;
                        uVar5 = 0;
                        uVar11 = 1;
                        uVar18 = 1;
                        goto LAB_00100ed3;
                     }

                     iVar7 = 0xf;
                     uVar5 = uVar13;
                     uVar13 = 0;
                     LAB_00100d53:bVar10 = bVar3 >> 4;
                     cVar15 = (char)( bVar3 & 0xf );
                     uVar11 = ( uint )(0x8001L >> bVar10) & 1;
                     uVar6 = ( uint )(0x8001L >> ( bVar3 & 0xf )) & 1;
                     if (bVar10 == 0) {
                        uVar18 = uVar5 + 1;
                     }
 else {
                        uVar18 = uVar5;
                        uVar5 = local_108[iVar4 - (uint)bVar10 & 0xf];
                     }

                     if (cVar15 == '\0') goto LAB_00100ed3;
                     uVar16 = local_108[iVar4 - ( bVar3 & 0xf ) & 0xf];
                     uVar8 = uVar13;
                  }

                  uVar13 = uVar18;
                  if (iVar7 == 0xf) {
                     uVar8 = meshopt::decodeIndex(&local_110, local_13c);
                     local_13c = uVar8;
                  }

                  if (bVar10 == 0xf) {
                     local_13c = meshopt::decodeIndex(&local_110, local_13c);
                     uVar5 = local_13c;
                  }

                  if (cVar15 == '\x0f') {
                     uVar16 = meshopt::decodeIndex(&local_110, local_13c);
                     local_13c = uVar16;
                  }

                  meshopt::writeTriangle(param_1, uVar14, param_3, uVar8, uVar5, uVar16);
                  local_108[uVar9] = uVar8;
                  uVar18 = (int)uVar9 + 1U & 0xf;
                  local_108[uVar18] = uVar5;
                  uVar11 = uVar11 + uVar18 & 0xf;
                  local_108[uVar11] = uVar16;
                  uVar9 = ( ulong )(uVar6 + uVar11 & 0xf);
                  uVar11 = (int)uVar17 + 1U & 0xf;
                  *(uint*)( (long)&local_c8 + uVar17 * 8 + 4 ) = uVar8;
                  *(uint*)( &local_c8 + uVar17 ) = uVar5;
                  uVar6 = uVar11 + 1 & 0xf;
                  *(uint*)( &local_c8 + uVar11 ) = uVar16;
                  *(uint*)( (long)&local_c8 + (ulong)uVar11 * 8 + 4 ) = uVar5;
                  *(uint*)( &local_c8 + uVar6 ) = uVar8;
                  uVar17 = ( ulong )(uVar6 + 1 & 0xf);
                  *(uint*)( (long)&local_c8 + (ulong)uVar6 * 8 + 4 ) = uVar16;
                  pbVar20 = local_110;
               }

               uVar14 = uVar14 + 3;
               pbVar19 = pbVar19 + 1;
            }
 while ( uVar14 < param_2 );
         }

         iVar4 = ( uint )(param_4 == pbVar20) * 3 + -3;
      }
 else {
         iVar4 = -1;
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar4;
}
byte *meshopt_encodeIndexSequence(byte *param_1, ulong param_2, long param_3, long param_4) {
   byte *pbVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   byte *pbVar6;
   byte bVar7;
   int iVar8;
   long lVar10;
   uint uVar11;
   long in_FS_OFFSET;
   int local_28[2];
   long local_20;
   ulong uVar5;
   uint uVar9;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 + 5U <= param_2) {
      pbVar6 = param_1 + 1;
      pbVar1 = param_1 + ( param_2 - 4 );
      local_28[0] = 0;
      local_28[1] = 0;
      *param_1 = meshopt::gEncodeIndexVersion | 0xd0;
      if (param_4 == 0) {
         LAB_00101100:if (pbVar6 <= pbVar1) {
            for (int i = 0; i < 4; i++) {
               pbVar6[i] = 0;
            }

            pbVar6 = pbVar6 + ( 4 - (long)param_1 );
            goto LAB_001010e2;
         }

      }
 else if (pbVar6 < pbVar1) {
         lVar10 = 0;
         uVar11 = 0;
         iVar8 = 0;
         do {
            iVar2 = *(int*)( param_3 + lVar10 * 4 );
            iVar8 = iVar2 - iVar8;
            iVar3 = -iVar8;
            if (0 < iVar8) {
               iVar3 = iVar8;
            }

            uVar11 = uVar11 ^ 0x1d < iVar3;
            uVar9 = ( ( iVar2 - local_28[uVar11] ) * 2 ^ iVar2 - local_28[uVar11] >> 0x1f ) * 2;
            uVar4 = uVar9 | uVar11;
            uVar5 = (ulong)uVar4;
            uVar9 = uVar9 & 0x7f | uVar11;
            bVar7 = (byte)uVar9;
            while (0x7f < uVar4) {
               uVar5 = uVar5 >> 7;
               *pbVar6 = (byte)uVar9 | 0x80;
               uVar4 = (uint)uVar5;
               uVar9 = uVar4 & 0x7f;
               bVar7 = (byte)uVar9;
               pbVar6 = pbVar6 + 1;
            }
;
            ;;
            lVar10 = lVar10 + 1;
            *pbVar6 = bVar7;
            pbVar6 = pbVar6 + 1;
            local_28[uVar11] = iVar2;
            if (param_4 == lVar10) goto LAB_00101100;
            iVar8 = iVar2;
         }
 while ( pbVar6 < pbVar1 );
      }

   }

   pbVar6 = (byte*)0x0;
   LAB_001010e2:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pbVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
long meshopt_encodeIndexSequenceBound(long param_1, ulong param_2) {
   int iVar1;
   int iVar2;
   if (2 < param_2) {
      iVar2 = 1;
      do {
         iVar1 = iVar2;
         iVar2 = iVar1 + 1;
         if (iVar2 == 0x20) {
            return param_1 * 5 + 5;
         }

      }
 while ( ( ulong )(1L << ( (byte)iVar2 & 0x3f )) < param_2 );
      param_1 = param_1 * ( ulong )(( iVar1 + 9U ) / 7);
   }

   return param_1 + 5;
}
int meshopt_decodeIndexSequence(long param_1, long param_2, long param_3, byte *param_4, ulong param_5) {
   byte bVar1;
   uint uVar2;
   byte bVar3;
   int iVar4;
   byte *pbVar5;
   long lVar6;
   long in_FS_OFFSET;
   int local_18[2];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 + 5U <= param_5) {
      if (( ( *param_4 & 0xf0 ) != 0xd0 ) || ( ( *param_4 & 0xe ) != 0 )) {
         iVar4 = -1;
         goto LAB_00101267;
      }

      local_18[0] = 0;
      local_18[1] = 0;
      pbVar5 = param_4 + 1;
      param_4 = param_4 + ( param_5 - 4 );
      if (param_2 == 0) {
         LAB_0010128e:iVar4 = ( uint )(param_4 == pbVar5) * 3 + -3;
         goto LAB_00101267;
      }

      if (pbVar5 < param_4) {
         lVar6 = 0;
         do {
            bVar1 = *pbVar5;
            uVar2 = (uint)bVar1;
            pbVar5 = pbVar5 + 1;
            if ((char)bVar1 < '\0') {
               uVar2 = bVar1 & 0x7f;
               iVar4 = 7;
               do {
                  bVar1 = *pbVar5;
                  pbVar5 = pbVar5 + 1;
                  bVar3 = (byte)iVar4;
                  iVar4 = iVar4 + 7;
                  uVar2 = uVar2 | ( bVar1 & 0x7f ) << ( bVar3 & 0x1f );
                  if (-1 < (char)bVar1) break;
               }
 while ( iVar4 != 0x23 );
            }

            iVar4 = ( (int)( uVar2 << 0x1e ) >> 0x1f ^ uVar2 >> 2 ) + local_18[uVar2 & 1];
            local_18[uVar2 & 1] = iVar4;
            if (param_3 == 2) {
               *(short*)( param_1 + lVar6 * 2 ) = (short)iVar4;
            }
 else {
               *(int*)( param_1 + lVar6 * 4 ) = iVar4;
            }

            if (param_2 == lVar6 + 1) goto LAB_0010128e;
            lVar6 = lVar6 + 1;
         }
 while ( pbVar5 < param_4 );
      }

   }

   iVar4 = -2;
   LAB_00101267:if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar4;
}


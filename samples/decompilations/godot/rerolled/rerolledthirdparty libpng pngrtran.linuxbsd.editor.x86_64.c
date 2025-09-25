void png_do_gray_to_rgb(uint *param_1, long param_2) {
   undefined1 uVar1;
   uint uVar2;
   char cVar3;
   undefined1 *puVar4;
   undefined1 *puVar5;
   undefined1 *puVar6;
   ulong uVar7;
   byte bVar8;
   byte bVar9;
   bVar8 = *(byte*)( (long)param_1 + 0x11 );
   if (( bVar8 < 8 ) || ( bVar9 = (byte)param_1[4](bVar9 & 2) != 0 )) {
      return;
   }

   uVar2 = *param_1;
   uVar7 = (ulong)uVar2;
   if (bVar9 == 0) {
      if (bVar8 == 8) {
         puVar4 = (undefined1*)( param_2 + -1 + uVar7 );
         if (uVar2 == 0) goto LAB_001000a6;
         puVar5 = puVar4 + uVar7 * 2;
         do {
            uVar1 = *puVar4;
            puVar6 = puVar4 + -1;
            *puVar5 = uVar1;
            puVar5[-1] = uVar1;
            puVar5[-2] = *puVar4;
            puVar5 = puVar5 + -3;
            puVar4 = puVar6;
         }
 while ( (undefined1*)( param_2 + -1 ) != puVar6 );
      }
 else {
         puVar4 = (undefined1*)( param_2 + -1 + uVar7 * 2 );
         if (uVar2 == 0) goto LAB_001000a6;
         puVar5 = puVar4 + uVar7 * 4;
         do {
            puVar6 = puVar4 + -2;
            *puVar5 = *puVar4;
            puVar5[-1] = puVar4[-1];
            puVar5[-2] = *puVar4;
            puVar5[-3] = puVar4[-1];
            puVar5[-4] = *puVar4;
            puVar5[-5] = puVar4[-1];
            puVar4 = puVar6;
            puVar5 = puVar5 + -6;
         }
 while ( (undefined1*)( param_2 + -1 ) != puVar6 );
      }

   }
 else {
      if (bVar9 != 4) goto LAB_001000a6;
      if (bVar8 == 8) {
         puVar4 = (undefined1*)( param_2 + -1 + uVar7 * 2 );
         if (uVar2 == 0) goto LAB_001000a6;
         puVar5 = puVar4 + uVar7 * 2;
         do {
            puVar6 = puVar4 + -2;
            *puVar5 = *puVar4;
            uVar1 = puVar4[-1];
            puVar5[-1] = uVar1;
            puVar5[-2] = uVar1;
            puVar5[-3] = puVar4[-1];
            puVar5 = puVar5 + -4;
            puVar4 = puVar6;
         }
 while ( (undefined1*)( param_2 + -1 ) != puVar6 );
      }
 else {
         puVar4 = (undefined1*)( param_2 + -1 + uVar7 * 4 );
         if (uVar2 == 0) goto LAB_001000a6;
         puVar5 = puVar4 + uVar7 * 4;
         do {
            puVar6 = puVar4 + -4;
            *puVar5 = *puVar4;
            puVar5[-1] = puVar4[-1];
            for (int i = 0; i < 3; i++) {
               puVar5[( -2*i + -2 )] = puVar4[-2];
               puVar5[( -2*i + -3 )] = puVar4[-3];
            }

            puVar4 = puVar6;
            puVar5 = puVar5 + -8;
         }
 while ( (undefined1*)( param_2 + -1 ) != puVar6 );
      }

   }

   bVar9 = (byte)param_1[4];
   bVar8 = *(byte*)( (long)param_1 + 0x11 );
   LAB_001000a6:cVar3 = *(char*)( (long)param_1 + 0x12 ) + '\x02';
   *(byte*)( param_1 + 4 ) = bVar9 | 2;
   *(char*)( (long)param_1 + 0x12 ) = cVar3;
   bVar8 = cVar3 * bVar8;
   *(byte*)( (long)param_1 + 0x13 ) = bVar8;
   if (bVar8 < 8) {
      *(ulong*)( param_1 + 2 ) = bVar8 * uVar7 + 7 >> 3;
      return;
   }

   *(ulong*)( param_1 + 2 ) = ( bVar8 >> 3 ) * uVar7;
   return;
}
void png_do_expand(uint *param_1, long param_2, long param_3) {
   undefined2 uVar1;
   undefined2 uVar2;
   undefined2 uVar3;
   uint uVar4;
   byte bVar5;
   char cVar13;
   uint uVar6;
   int iVar7;
   ulong uVar8;
   char *pcVar9;
   char *pcVar10;
   byte *pbVar11;
   char *pcVar12;
   byte bVar14;
   bool bVar15;
   char cVar16;
   char *pcVar17;
   char cVar19;
   long lVar18;
   ushort uVar20;
   char cVar21;
   bool bVar22;
   bool bVar23;
   byte *pbVar24;
   char cVar25;
   char cVar26;
   uVar4 = *param_1;
   if ((char)param_1[4] != '\0') {
      if ((char)param_1[4] != '\x02') {
         return;
      }

      if (param_3 == 0) {
         return;
      }

      bVar5 = *(byte*)( (long)param_1 + 0x11 );
      uVar8 = (ulong)uVar4;
      if (bVar5 == 8) {
         cVar13 = *(char*)( param_3 + 2 );
         cVar19 = *(char*)( param_3 + 4 );
         cVar21 = *(char*)( param_3 + 6 );
         pcVar17 = (char*)( param_2 + -1 + *(long*)( param_1 + 2 ) );
         if (uVar4 != 0) {
            pcVar9 = pcVar17;
            pcVar10 = (char*)( param_2 + -1 + uVar8 * 4 );
            do {
               cVar16 = -1;
               if (( cVar13 == pcVar9[-2] ) && ( cVar19 == pcVar9[-1] )) {
                  cVar16 = -(*pcVar9 != cVar21);
               }

               *pcVar10 = cVar16;
               pcVar12 = pcVar9 + -3;
               pcVar10[-1] = *pcVar9;
               pcVar10[-2] = pcVar9[-1];
               pcVar10[-3] = pcVar9[-2];
               pcVar9 = pcVar12;
               pcVar10 = pcVar10 + -4;
            }
 while ( pcVar17 + uVar8 * -3 != pcVar12 );
            goto LAB_0010077c;
         }

         LAB_0010042a:bVar14 = bVar5 << 2;
         *(undefined1*)( param_1 + 4 ) = 6;
         *(undefined1*)( (long)param_1 + 0x12 ) = 4;
         *(byte*)( (long)param_1 + 0x13 ) = bVar14;
      }
 else {
         if (bVar5 == 0x10) {
            uVar1 = *(undefined2*)( param_3 + 2 );
            uVar2 = *(undefined2*)( param_3 + 4 );
            cVar21 = (char)( (ushort)uVar1 >> 8 );
            cVar19 = (char)( (ushort)uVar2 >> 8 );
            uVar3 = *(undefined2*)( param_3 + 6 );
            cVar13 = (char)( (ushort)uVar3 >> 8 );
            pcVar17 = (char*)( param_2 + -1 + *(long*)( param_1 + 2 ) );
            if (uVar4 == 0) goto LAB_0010042a;
            pcVar9 = pcVar17;
            lVar18 = param_2 + -1 + uVar8 * 8;
            do {
               cVar16 = pcVar9[-5];
               cVar25 = (char)uVar1;
               bVar23 = pcVar9[-4] == cVar25 && cVar16 == cVar21;
               bVar22 = pcVar9[-3] == cVar19 && bVar23;
               cVar26 = (char)uVar2;
               bVar15 = pcVar9[-2] == cVar26 && bVar22;
               pcVar10 = pcVar9 + -6;
               cVar16 = -(bVar15 && (*pcVar9 != (char)uVar3 && pcVar9[-1] == cVar13) ||
                    ((pcVar9[-2] != cVar26 && bVar22 ||
                     (pcVar9[-3] != cVar19 && bVar23 ||
                     (cVar16 != cVar21 || pcVar9[-4] != cVar25 && cVar16 == cVar21))) ||
                    pcVar9[-1] != cVar13 && bVar15));
               *(ushort*)( lVar18 + -1 ) = CONCAT11(cVar16, cVar16);
               *(char*)( lVar18 + -2 ) = *pcVar9;
               for (int i = 0; i < 5; i++) {
                  *(char*)( lVar18 + ( -3 - i ) ) = pcVar9[( -1 - i )];
               }

               pcVar9 = pcVar10;
               lVar18 = lVar18 + -8;
            }
 while ( pcVar10 != pcVar17 + uVar8 * -6 );
            LAB_0010077c:bVar5 = *(byte*)( (long)param_1 + 0x11 );
         }

         *(undefined1*)( param_1 + 4 ) = 6;
         *(undefined1*)( (long)param_1 + 0x12 ) = 4;
         bVar14 = ( byte )((uint)bVar5 << 2);
         *(byte*)( (long)param_1 + 0x13 ) = bVar14;
         if (bVar14 < 8) {
            uVar8 = ( (uint)bVar5 << 2 & 0xff ) * uVar8 + 7 >> 3;
            goto LAB_00100350;
         }

      }

      uVar8 = ( bVar14 >> 3 ) * uVar8;
      LAB_00100350:*(ulong*)( param_1 + 2 ) = uVar8;
      return;
   }

   bVar5 = *(byte*)( (long)param_1 + 0x11 );
   if (param_3 == 0) {
      if (7 < bVar5) {
         return;
      }

      if (bVar5 == 2) {
         uVar20 = 0;
         LAB_00100556:lVar18 = (ulong)uVar4 - 1;
         pcVar17 = (char*)( param_2 + lVar18 );
         pbVar24 = (byte*)( ( ulong )(uVar4 - 1 >> 2) + param_2 );
         uVar6 = uVar4 * -2 & 6;
         if (uVar4 != 0) {
            do {
               *pcVar17 = ( ( byte )((int)( uint ) * pbVar24 >> ( (byte)uVar6 & 0x1f )) & 3 ) * 'U';
               if (uVar6 == 6) {
                  pbVar24 = pbVar24 + -1;
                  uVar6 = 0;
               }
 else {
                  uVar6 = uVar6 + 2;
               }

               pcVar17 = pcVar17 + -1;
            }
 while ( pcVar17 != (char*)( param_2 + -1 ) );
         }

      }
 else if (bVar5 == 4) {
         uVar20 = 0;
         LAB_001004ad:lVar18 = (ulong)uVar4 - 1;
         pcVar17 = (char*)( param_2 + lVar18 );
         pbVar24 = (byte*)( ( ulong )(uVar4 - 1 >> 1) + param_2 );
         uVar6 = uVar4 * 4 & 4;
         if (uVar4 != 0) {
            do {
               iVar7 = (int)( uint ) * pbVar24 >> (sbyte)uVar6;
               *pcVar17 = (char)( iVar7 << 4 ) + ( (byte)iVar7 & 0xf );
               if (uVar6 == 4) {
                  pbVar24 = pbVar24 + -1;
                  uVar6 = 0;
               }
 else {
                  uVar6 = 4;
               }

               pcVar17 = pcVar17 + -1;
            }
 while ( (char*)( param_2 + -1 ) != pcVar17 );
         }

      }
 else {
         if (bVar5 != 1) {
            *(undefined1*)( (long)param_1 + 0x11 ) = 8;
            uVar8 = (ulong)uVar4;
            *(undefined1*)( (long)param_1 + 0x13 ) = 8;
            goto LAB_001002f4;
         }

         uVar20 = 0;
         LAB_0010025d:lVar18 = (ulong)uVar4 - 1;
         pbVar24 = (byte*)( ( ulong )(uVar4 - 1 >> 3) + param_2 );
         pcVar17 = (char*)( param_2 + lVar18 );
         uVar6 = ~(uVar4 + 7) & 7;
         if (uVar4 != 0) {
            do {
               *pcVar17 = -((*pbVar24 >> (uVar6 & 0x1f) & 1) != 0);
               if (uVar6 == 7) {
                  pbVar24 = pbVar24 + -1;
                  uVar6 = 0;
               }
 else {
                  uVar6 = uVar6 + 1;
               }

               pcVar17 = pcVar17 + -1;
            }
 while ( pcVar17 != (char*)( param_2 + -1 ) );
         }

      }

      *(undefined1*)( (long)param_1 + 0x11 ) = 8;
      *(undefined1*)( (long)param_1 + 0x13 ) = 8;
      *(ulong*)( param_1 + 2 ) = (ulong)uVar4;
      if (param_3 == 0) {
         return;
      }

      LAB_00100460:if (uVar4 == 0) {
         LAB_00100421:bVar5 = *(byte*)( (long)param_1 + 0x11 );
      }
 else {
         pbVar24 = (byte*)( param_2 + lVar18 );
         pcVar17 = (char*)( param_2 + -1 + (ulong)uVar4 * 2 );
         do {
            pbVar11 = pbVar24 + -1;
            *pcVar17 = -((ushort)*pbVar24 != (uVar20 & 0xff));
            pcVar17[-1] = *pbVar24;
            pbVar24 = pbVar11;
            pcVar17 = pcVar17 + -2;
         }
 while ( pbVar11 != (byte*)( param_2 + -1 ) );
         bVar5 = *(byte*)( (long)param_1 + 0x11 );
      }

      LAB_001002d0:uVar8 = (ulong)uVar4;
      bVar5 = bVar5 * '\x02';
      *(undefined1*)( param_1 + 4 ) = 4;
      *(undefined1*)( (long)param_1 + 0x12 ) = 2;
      *(byte*)( (long)param_1 + 0x13 ) = bVar5;
      if (bVar5 < 8) {
         uVar8 = bVar5 * uVar8 + 7 >> 3;
         goto LAB_001002f4;
      }

   }
 else {
      uVar20 = *(ushort*)( param_3 + 8 );
      uVar8 = (ulong)uVar4;
      if (bVar5 < 8) {
         if (bVar5 == 2) {
            uVar20 = ( uVar20 & 3 ) * 0x55;
            goto LAB_00100556;
         }

         if (bVar5 == 4) {
            uVar20 = ( uVar20 & 0xf ) * 0x11;
            goto LAB_001004ad;
         }

         if (bVar5 == 1) {
            uVar20 = -(uVar20 & 1) & 0xff;
            goto LAB_0010025d;
         }

         *(undefined1*)( (long)param_1 + 0x11 ) = 8;
         lVar18 = uVar8 - 1;
         *(undefined1*)( (long)param_1 + 0x13 ) = 8;
         *(ulong*)( param_1 + 2 ) = uVar8;
         goto LAB_00100460;
      }

      if (bVar5 == 8) {
         lVar18 = uVar8 - 1;
         goto LAB_00100460;
      }

      if (bVar5 != 0x10) goto LAB_001002d0;
      pcVar17 = (char*)( param_2 + -1 + *(long*)( param_1 + 2 ) * 2 );
      if (uVar4 != 0) {
         pcVar9 = pcVar17;
         pbVar24 = (byte*)( param_2 + -1 + *(long*)( param_1 + 2 ) );
         do {
            cVar13 = -1;
            if (uVar20 >> 8 == (ushort)pbVar24[-1]) {
               cVar13 = -((ushort)*pbVar24 != (uVar20 & 0xff));
            }

            pcVar9[-1] = cVar13;
            pcVar10 = pcVar9 + -4;
            *pcVar9 = cVar13;
            pcVar9[-2] = *pbVar24;
            pcVar9[-3] = pbVar24[-1];
            pcVar9 = pcVar10;
            pbVar24 = pbVar24 + -2;
         }
 while ( pcVar10 != pcVar17 + uVar8 * -4 );
         goto LAB_00100421;
      }

      *(undefined1*)( param_1 + 4 ) = 4;
      uVar8 = 0;
      *(undefined2*)( (long)param_1 + 0x12 ) = 0x2002;
      bVar5 = 0x20;
   }

   uVar8 = ( bVar5 >> 3 ) * uVar8;
   LAB_001002f4:*(ulong*)( param_1 + 2 ) = uVar8;
   return;
}
void png_set_alpha_mode_fixed_part_0(long param_1, int param_2, int param_3) {
   int iVar1;
   uint uVar2;
   undefined4 uVar3;
   uint uVar4;
   int iVar5;
   if (( param_3 == -1 ) || ( param_3 == -100000 )) {
      *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) | 0x1000;
      param_3 = 220000;
      LAB_0010080f:uVar3 = png_reciprocal(param_3);
      iVar5 = param_3;
      if (param_2 != 2) goto LAB_00100820;
      LAB_00100916:*(uint*)( param_1 + 0x134 ) = *(uint*)( param_1 + 0x134 ) & 0xff7fffff;
      iVar1 = *(int*)( param_1 + 0x4a0 );
      *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) | 0x2000;
      param_3 = iVar5;
   }
 else {
      if (( param_3 != -2 ) && ( param_3 != -50000 )) {
         if (0x989298 < param_3 - 1000U) {
            /* WARNING: Subroutine does not return */
            png_error(param_1, "output gamma out of expected range");
         }

         goto LAB_0010080f;
      }

      iVar5 = 0x250ac;
      param_3 = 0x250ac;
      uVar3 = png_reciprocal(0x250ac);
      if (param_2 == 2) goto LAB_00100916;
      LAB_00100820:if (param_2 < 3) {
         if (param_2 == 0) {
            *(ulong*)( param_1 + 0x130 ) = *(ulong*)( param_1 + 0x130 ) & _LC1;
            if (*(int*)( param_1 + 0x4a0 ) == 0) {
               *(ushort*)( param_1 + 0x4ea ) = *(ushort*)( param_1 + 0x4ea ) | 1;
               *(undefined4*)( param_1 + 0x4a0 ) = uVar3;
            }

            *(int*)( param_1 + 0x2a4 ) = param_3;
            return;
         }

         if (param_2 != 1) goto LAB_0010098f;
         *(ulong*)( param_1 + 0x130 ) = *(ulong*)( param_1 + 0x130 ) & _LC1;
         if (*(int*)( param_1 + 0x4a0 ) == 0) {
            *(ushort*)( param_1 + 0x4ea ) = *(ushort*)( param_1 + 0x4ea ) | 1;
            *(undefined4*)( param_1 + 0x4a0 ) = uVar3;
         }

         *(undefined4*)( param_1 + 0x2a4 ) = 100000;
         goto LAB_001008aa;
      }

      if (param_2 != 3) {
         LAB_0010098f:/* WARNING: Subroutine does not return */png_error(param_1, "invalid alpha mode");
      }

      *(uint*)( param_1 + 0x134 ) = *(uint*)( param_1 + 0x134 ) | 0x800000;
      iVar1 = *(int*)( param_1 + 0x4a0 );
      *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) & 0xffffdfff;
   }

   if (iVar1 == 0) {
      *(ushort*)( param_1 + 0x4ea ) = *(ushort*)( param_1 + 0x4ea ) | 1;
      *(undefined4*)( param_1 + 0x4a0 ) = uVar3;
   }

   *(int*)( param_1 + 0x2a4 ) = param_3;
   LAB_001008aa:uVar2 = *(uint*)( param_1 + 0x134 );
   *(undefined8*)( param_1 + 0x27c ) = 0;
   *(undefined2*)( param_1 + 0x284 ) = 0;
   *(undefined1*)( param_1 + 0x274 ) = 2;
   *(undefined4*)( param_1 + 0x278 ) = *(undefined4*)( param_1 + 0x4a0 );
   uVar4 = uVar2 & 0xfffffeff;
   *(uint*)( param_1 + 0x134 ) = uVar4;
   if (( uVar2 & 0x80 ) != 0) {
      /* WARNING: Subroutine does not return */
      png_error(param_1, "conflicting calls to set alpha mode and background");
   }

   *(uint*)( param_1 + 0x134 ) = uVar4 | 0x80;
   return;
}
void png_set_crc_action(long param_1, int param_2, int param_3) {
   if (param_1 == 0) {
      return;
   }

   if (param_2 == 4) {
      *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) | 0xc00;
   }
 else if (param_2 < 5) {
      if (param_2 == 2) {
         png_warning(param_1, "Can\'t discard critical data on CRC error");
         *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) & 0xfffff3ff;
      }
 else {
         if (param_2 != 3) goto LAB_00100a25;
         *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) & 0xfffff3ff | 0x400;
      }

   }
 else if (param_2 != 5) {
      LAB_00100a25:*(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) & 0xfffff3ff;
   }

   if (param_3 == 4) {
      *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) | 0x300;
      return;
   }

   if (param_3 < 5) {
      if (param_3 == 1) {
         *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) & 0xfffffcff | 0x200;
         return;
      }

      if (param_3 != 3) {
         LAB_00100a4d:*(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) & 0xfffffcff;
         return;
      }

      *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) & 0xfffffcff | 0x100;
   }
 else if (param_3 != 5) goto LAB_00100a4d;
   return;
}
void png_set_background_fixed(long param_1, undefined8 *param_2, int param_3, int param_4, undefined4 param_5) {
   undefined2 uVar1;
   uint uVar2;
   if (param_1 != 0) {
      uVar2 = *(uint*)( param_1 + 0x130 );
      if (( uVar2 & 0x40 ) != 0) {
         png_app_error(param_1, "invalid after png_start_read_image or png_read_update_info");
         return;
      }

      *(uint*)( param_1 + 0x130 ) = uVar2 | 0x4000;
      if (param_2 != (undefined8*)0x0) {
         if (param_3 == 0) {
            png_warning(param_1, "Application must supply a known background gamma");
            return;
         }

         *(undefined4*)( param_1 + 0x278 ) = param_5;
         *(char*)( param_1 + 0x274 ) = (char)param_3;
         *(uint*)( param_1 + 0x130 ) = uVar2 & 0xffffdfff | 0x4000;
         uVar1 = *(undefined2*)( param_2 + 1 );
         *(undefined8*)( param_1 + 0x27c ) = *param_2;
         *(undefined2*)( param_1 + 0x284 ) = uVar1;
         if (param_4 != 0) {
            *(uint*)( param_1 + 0x134 ) = *(uint*)( param_1 + 0x134 ) & 0xff7fffff | 0x40180;
            return;
         }

         *(uint*)( param_1 + 0x134 ) = *(uint*)( param_1 + 0x134 ) & 0xff7ffeff | 0x40080;
      }

   }

   return;
}
void png_set_background(long param_1, undefined8 *param_2, int param_3, int param_4) {
   uint uVar1;
   undefined4 uVar2;
   uVar2 = png_fixed(param_1, "png_set_background");
   if (param_1 != 0) {
      uVar1 = *(uint*)( param_1 + 0x130 );
      if (( uVar1 & 0x40 ) != 0) {
         png_app_error(param_1, "invalid after png_start_read_image or png_read_update_info");
         return;
      }

      *(uint*)( param_1 + 0x130 ) = uVar1 | 0x4000;
      if (param_2 != (undefined8*)0x0) {
         if (param_3 == 0) {
            png_warning(param_1, "Application must supply a known background gamma");
            return;
         }

         *(undefined4*)( param_1 + 0x278 ) = uVar2;
         *(char*)( param_1 + 0x274 ) = (char)param_3;
         *(uint*)( param_1 + 0x130 ) = uVar1 & 0xffffdfff | 0x4000;
         *(undefined8*)( param_1 + 0x27c ) = *param_2;
         *(undefined2*)( param_1 + 0x284 ) = *(undefined2*)( param_2 + 1 );
         if (param_4 == 0) {
            *(uint*)( param_1 + 0x134 ) = *(uint*)( param_1 + 0x134 ) & 0xff7ffeff | 0x40080;
            return;
         }

         *(uint*)( param_1 + 0x134 ) = *(uint*)( param_1 + 0x134 ) & 0xff7fffff | 0x40180;
      }

   }

   return;
}
void png_set_scale_16(long param_1) {
   if (param_1 != 0) {
      if (( *(byte*)( param_1 + 0x130 ) & 0x40 ) != 0) {
         png_app_error(param_1, "invalid after png_start_read_image or png_read_update_info");
         return;
      }

      *(ulong*)( param_1 + 0x130 ) = _LC8 | *(ulong*)( param_1 + 0x130 );
   }

   return;
}
void png_set_strip_16(long param_1) {
   if (param_1 != 0) {
      if (( *(byte*)( param_1 + 0x130 ) & 0x40 ) != 0) {
         png_app_error(param_1, "invalid after png_start_read_image or png_read_update_info");
         return;
      }

      *(ulong*)( param_1 + 0x130 ) = _LC9 | *(ulong*)( param_1 + 0x130 );
   }

   return;
}
void png_set_strip_alpha(long param_1) {
   if (param_1 != 0) {
      if (( *(byte*)( param_1 + 0x130 ) & 0x40 ) != 0) {
         png_app_error(param_1, "invalid after png_start_read_image or png_read_update_info");
         return;
      }

      *(ulong*)( param_1 + 0x130 ) = _LC10 | *(ulong*)( param_1 + 0x130 );
   }

   return;
}
void png_set_alpha_mode_fixed(long param_1) {
   if (param_1 == 0) {
      return;
   }

   if (( *(uint*)( param_1 + 0x130 ) & 0x40 ) == 0) {
      *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) | 0x4000;
      png_set_alpha_mode_fixed_part_0();
      return;
   }

   png_app_error(param_1, "invalid after png_start_read_image or png_read_update_info");
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void png_set_alpha_mode(double param_1, long param_2, undefined8 param_3, undefined8 param_4, uint param_5, long param_6, int param_7) {
   byte bVar1;
   byte bVar2;
   undefined2 uVar3;
   byte *pbVar4;
   int iVar5;
   bool bVar6;
   int iVar7;
   uint uVar8;
   byte *pbVar9;
   undefined1 *puVar10;
   undefined8 uVar11;
   ulong uVar12;
   long *plVar13;
   long *plVar14;
   uint uVar15;
   byte *pbVar16;
   long lVar17;
   int iVar18;
   int iVar19;
   ulong extraout_RDX;
   ulong uVar20;
   byte *pbVar21;
   byte bVar22;
   int iVar23;
   long *plVar24;
   int iVar25;
   long *plVar26;
   uint uVar27;
   char *pcVar28;
   uint uVar29;
   int iVar30;
   uint uVar31;
   long lVar32;
   int iVar33;
   long *plVar34;
   uint uVar35;
   int iVar36;
   uint uVar37;
   long *plVar38;
   ulong uStack_98;
   int iStack_80;
   if (( 0.0 < param_1 ) && ( param_1 < _LC12 )) {
      param_1 = param_1 * __LC13;
   }

   param_1 = param_1 + _LC14;
   if ((double)( (ulong)param_1 & _LC21 ) < _LC15) {
      param_1 = (double)( ( ulong )((double)(long)param_1 - (double)( -(ulong)(param_1 < (double)(long)param_1) & _LC17 )) | ~_LC21 & (ulong)param_1 );
   }

   if (( param_1 <= _LC18 ) && ( _LC19 <= param_1 )) {
      if (param_2 == 0) {
         return;
      }

      if (( *(uint*)( param_2 + 0x130 ) & 0x40 ) == 0) {
         *(uint*)( param_2 + 0x130 ) = *(uint*)( param_2 + 0x130 ) | 0x4000;
         png_set_alpha_mode_fixed_part_0(param_2, param_3, (int)param_1);
         return;
      }

      png_app_error(param_2, "invalid after png_start_read_image or png_read_update_info");
      return;
   }

   pcVar28 = "gamma value";
   png_fixed_error();
   if (param_2 == 0) {
      return;
   }

   if (( *(byte*)( param_2 + 0x130 ) & 0x40 ) != 0) {
      png_app_error();
      return;
   }

   uVar31 = (uint)extraout_RDX;
   uVar12 = extraout_RDX & 0xffffffff;
   *(ulong*)( param_2 + 0x130 ) = _LC22 | *(ulong*)( param_2 + 0x130 );
   if (param_7 == 0) {
      puVar10 = (undefined1*)png_malloc();
      *(undefined1**)( param_2 + 0x380 ) = puVar10;
      lVar17 = 0;
      if (0 < (int)uVar31) {
         if (( extraout_RDX & 1 ) != 0) {
            *puVar10 = 0;
            lVar17 = 1;
            if ((long)(int)uVar31 == 1) goto LAB_00101131;
         }

         do {
            lVar32 = lVar17 + 1;
            puVar10[lVar17] = (char)lVar17;
            lVar17 = lVar17 + 2;
            puVar10[lVar32] = (char)lVar32;
         }
 while ( (int)uVar31 != lVar17 );
      }

      LAB_00101131:if ((int)uVar31 <= (int)param_5) {
         if (*(long*)( param_2 + 0x250 ) != 0) {
            *(short*)( param_2 + 600 ) = (short)uVar12;
            return;
         }

         *(char**)( param_2 + 0x250 ) = pcVar28;
         *(short*)( param_2 + 600 ) = (short)uVar12;
         return;
      }

   }
 else if ((int)uVar31 <= (int)param_5) {
      if (*(long*)( param_2 + 0x250 ) == 0) {
         *(char**)( param_2 + 0x250 ) = pcVar28;
         *(short*)( param_2 + 600 ) = (short)extraout_RDX;
      }
 else {
         *(short*)( param_2 + 600 ) = (short)extraout_RDX;
      }

      goto LAB_0010116d;
   }

   uStack_98 = (ulong)(int)uVar31;
   if (param_6 == 0) {
      uVar11 = png_malloc(param_2, uStack_98);
      *(undefined8*)( param_2 + 0x410 ) = uVar11;
      lVar17 = png_malloc(param_2, uStack_98);
      *(long*)( param_2 + 0x418 ) = lVar17;
      if (0 < (int)uVar31) {
         lVar32 = *(long*)( param_2 + 0x410 );
         uVar12 = 0;
         do {
            *(char*)( lVar32 + uVar12 ) = (char)uVar12;
            *(char*)( lVar17 + uVar12 ) = (char)uVar12;
            uVar12 = uVar12 + 1;
         }
 while ( uVar12 != uStack_98 );
      }

      plVar13 = (long*)png_calloc(param_2, 0x1808);
      if ((int)param_5 < (int)uVar31) {
         plVar14 = (long*)0x0;
         plVar38 = plVar13 + 0x61;
         iStack_80 = 0x60;
         uVar29 = uVar31;
         do {
            uVar37 = 0;
            pbVar9 = (byte*)pcVar28;
            plVar26 = plVar13;
            if (0 < (int)( uVar29 - 1 )) {
               do {
                  uVar15 = uVar37 + 1;
                  pbVar16 = pbVar9 + 3;
                  uVar8 = uVar15;
                  if ((int)uVar15 < (int)uVar29) {
                     do {
                        while (true) {
                           iVar30 = ( uint ) * pbVar9 - ( uint ) * pbVar16;
                           iVar7 = -iVar30;
                           if (0 < iVar30) {
                              iVar7 = iVar30;
                           }

                           iVar30 = (uint)pbVar9[1] - (uint)pbVar16[1];
                           if (iVar30 < 1) {
                              iVar30 = -iVar30;
                           }

                           iVar23 = (uint)pbVar9[2] - (uint)pbVar16[2];
                           if (iVar23 < 1) {
                              iVar23 = -iVar23;
                           }

                           iVar23 = iVar7 + iVar30 + iVar23;
                           if (iStack_80 < iVar23) break;
                           plVar14 = (long*)png_malloc_warn(param_2, 0x10);
                           if (plVar14 == (long*)0x0) goto LAB_00101756;
                           lVar17 = plVar13[iVar23];
                           *(char*)( (long)plVar14 + 9 ) = (char)uVar8;
                           uVar8 = uVar8 + 1;
                           *(char*)( plVar14 + 1 ) = (char)uVar37;
                           *plVar14 = lVar17;
                           plVar13[iVar23] = (long)plVar14;
                           pbVar16 = pbVar16 + 3;
                           if (uVar8 == uVar29) goto LAB_001015e8;
                        }
;
                        uVar8 = uVar8 + 1;
                        pbVar16 = pbVar16 + 3;
                     }
 while ( uVar8 != uVar29 );
                  }

                  LAB_001015e8:if (plVar14 == (long*)0x0) goto LAB_00101756;
                  uVar37 = uVar15;
                  pbVar9 = pbVar9 + 3;
               }
 while ( (int)uVar15 < (int)( uVar29 - 1 ) );
            }

            plVar24 = plVar13;
            if (plVar14 == (long*)0x0) {
               LAB_00101756:plVar14 = (long*)0x0;
            }
 else {
               do {
                  plVar34 = (long*)*plVar24;
                  if (plVar34 != (long*)0x0) {
                     lVar17 = *(long*)( param_2 + 0x410 );
                     do {
                        bVar22 = *(byte*)( plVar34 + 1 );
                        bVar1 = *(byte*)( (ulong)bVar22 + lVar17 );
                        uVar12 = (ulong)bVar1;
                        if ((int)(uint)bVar1 < (int)uVar29) {
                           uVar20 = ( ulong ) * (byte*)( (long)plVar34 + 9 );
                           pbVar9 = (byte*)( uVar20 + lVar17 );
                           uVar37 = ( uint ) * pbVar9;
                           if ((int)uVar37 < (int)uVar29) {
                              pbVar16 = (byte*)( (ulong)bVar22 + lVar17 );
                              if (( uVar29 & 1 ) == 0) {
                                 uVar20 = (ulong)bVar22;
                                 uVar12 = (ulong)uVar37;
                                 pbVar16 = pbVar9;
                                 bVar22 = *(byte*)( (long)plVar34 + 9 );
                              }

                              uVar29 = uVar29 - 1;
                              *(undefined2*)( (byte*)pcVar28 + uVar12 * 3 ) = *(undefined2*)( (byte*)pcVar28 + (long)(int)uVar29 * 3 );
                              ( (byte*)pcVar28 + uVar12 * 3 )[2] = ( (byte*)pcVar28 + (long)(int)uVar29 * 3 )[2];
                              uVar12 = ( ulong ) * pbVar16;
                              if (( param_7 == 0 ) && ( 0 < (int)uVar31 )) {
                                 pbVar9 = *(byte**)( param_2 + 0x380 );
                                 pbVar21 = pbVar9 + uStack_98;
                                 do {
                                    bVar1 = *pbVar9;
                                    if (bVar1 == (byte)uVar12) {
                                       bVar1 = *(byte*)( lVar17 + uVar20 );
                                       *pbVar9 = bVar1;
                                       uVar12 = ( ulong ) * pbVar16;
                                    }

                                    if (bVar1 == uVar29) {
                                       *pbVar9 = (byte)uVar12;
                                       uVar12 = ( ulong ) * pbVar16;
                                    }

                                    pbVar9 = pbVar9 + 1;
                                 }
 while ( pbVar21 != pbVar9 );
                              }

                              lVar32 = *(long*)( param_2 + 0x418 );
                              pbVar9 = (byte*)( (int)uVar29 + lVar32 );
                              *(char*)( lVar17 + ( ulong ) * pbVar9 ) = (char)uVar12;
                              *(byte*)( lVar32 + uVar12 ) = *pbVar9;
                              *pbVar16 = (byte)uVar29;
                              *pbVar9 = bVar22;
                           }

                        }

                        if ((int)uVar29 <= (int)param_5) goto LAB_0010177a;
                        plVar34 = (long*)*plVar34;
                     }
 while ( plVar34 != (long*)0x0 );
                  }

                  plVar24 = plVar24 + 1;
               }
 while ( plVar24 != plVar38 );
            }

            LAB_0010177a:do {
               plVar24 = (long*)*plVar26;
               if ((long*)*plVar26 != (long*)0x0) {
                  do {
                     plVar14 = (long*)*plVar24;
                     png_free(param_2, plVar24);
                     plVar24 = plVar14;
                  }
 while ( plVar14 != (long*)0x0 );
                  plVar14 = (long*)0x0;
               }

               *plVar26 = 0;
               plVar26 = plVar26 + 1;
            }
 while ( plVar26 != plVar13 + 0x301 );
            iStack_80 = iStack_80 + 0x60;
            plVar38 = plVar38 + 0x60;
         }
 while ( (int)param_5 < (int)uVar29 );
      }

      png_free(param_2, plVar13);
      png_free(param_2, *(undefined8*)( param_2 + 0x418 ));
      png_free(param_2, *(undefined8*)( param_2 + 0x410 ));
      *(undefined1(*) [16])( param_2 + 0x410 ) = (undefined1[16])0x0;
   }
 else {
      pbVar9 = (byte*)png_malloc(param_2, uStack_98);
      *(byte**)( param_2 + 0x408 ) = pbVar9;
      iVar7 = uVar31 - 1;
      if ((int)uVar31 < 1) {
         if ((int)param_5 <= iVar7) goto LAB_00100f68;
         if (param_7 == 0) {
            if ((int)param_5 < 1) goto LAB_00101035;
            goto LAB_001012ea;
         }

         LAB_00101818:if (0 < (int)param_5) goto LAB_00100fd5;
      }
 else {
         uVar20 = 0;
         if (( uStack_98 & 1 ) == 0) {
            LAB_00100f4b:do {
               lVar17 = uVar20 + 1;
               pbVar9[uVar20] = (byte)uVar20;
               uVar20 = uVar20 + 2;
               pbVar9[lVar17] = (byte)lVar17;
            }
 while ( uVar20 != uStack_98 );
         }
 else {
            uVar20 = 1;
            *pbVar9 = 0;
            if (uStack_98 != 1) goto LAB_00100f4b;
         }

         if ((int)param_5 <= iVar7) {
            LAB_00100f68:pbVar16 = pbVar9 + iVar7;
            do {
               if (iVar7 < 1) {
                  LAB_001012d7:if (param_7 != 0) goto LAB_00101818;
                  if (0 < (int)param_5) goto LAB_001012ea;
                  goto LAB_00101367;
               }

               bVar6 = true;
               pbVar21 = pbVar9;
               do {
                  if (*(ushort*)( param_6 + ( ulong ) * pbVar21 * 2 ) < *(ushort*)( param_6 + (ulong)pbVar21[1] * 2 )) {
                     *(ushort*)pbVar21 = CONCAT11(*pbVar21, pbVar21[1]);
                     bVar6 = false;
                  }

                  pbVar21 = pbVar21 + 1;
               }
 while ( pbVar16 != pbVar21 );
               if (bVar6) goto LAB_001012d7;
               iVar7 = iVar7 + -1;
               pbVar16 = pbVar16 + -1;
            }
 while ( (int)param_5 <= iVar7 );
         }

         if (param_7 == 0) {
            LAB_001012ea:lVar17 = 0;
            pbVar16 = (byte*)pcVar28;
            do {
               while ((int)param_5 <= (int)(uint)pbVar9[lVar17]) {
                  uVar12 = (long)( (int)uVar12 + -1 );
                  do {
                     uVar20 = uVar12;
                     uVar12 = uVar20 - 1;
                  }
 while ( (int)param_5 <= (int)(uint)pbVar9[uVar20] );
                  uVar12 = uVar20 & 0xffffffff;
                  pbVar21 = (byte*)pcVar28 + uVar20 * 3;
                  uVar3 = *(undefined2*)pbVar21;
                  bVar22 = pbVar21[2];
                  *(undefined2*)pbVar21 = *(undefined2*)pbVar16;
                  pbVar21[2] = pbVar16[2];
                  lVar32 = *(long*)( param_2 + 0x380 );
                  *(undefined2*)pbVar16 = uVar3;
                  pbVar16[2] = bVar22;
                  *(char*)( lVar32 + uVar20 ) = (char)lVar17;
                  *(char*)( lVar32 + lVar17 ) = (char)uVar20;
                  lVar17 = lVar17 + 1;
                  pbVar16 = pbVar16 + 3;
                  if ((int)param_5 <= (int)lVar17) goto LAB_00101367;
               }
;
               lVar17 = lVar17 + 1;
               pbVar16 = pbVar16 + 3;
            }
 while ( (int)lVar17 < (int)param_5 );
            LAB_00101367:if (0 < (int)uVar31) {
               pbVar9 = *(byte**)( param_2 + 0x380 );
               pbVar16 = pbVar9 + uStack_98;
               do {
                  if ((int)param_5 <= (int)( uint ) * pbVar9) {
                     pbVar21 = (byte*)pcVar28 + ( ulong ) * pbVar9 * 3;
                     iVar30 = ( uint ) * pbVar21 - ( uint )(byte) * pcVar28;
                     iVar7 = -iVar30;
                     if (0 < iVar30) {
                        iVar7 = iVar30;
                     }

                     iVar23 = (uint)pbVar21[1] - ( uint )((byte*)pcVar28)[1];
                     iVar30 = -iVar23;
                     if (0 < iVar23) {
                        iVar30 = iVar23;
                     }

                     iVar25 = (uint)pbVar21[2] - ( uint )((byte*)pcVar28)[2];
                     iVar23 = -iVar25;
                     if (0 < iVar25) {
                        iVar23 = iVar25;
                     }

                     iVar23 = iVar7 + iVar30 + iVar23;
                     if ((int)param_5 < 2) {
                        bVar22 = 0;
                     }
 else {
                        uVar31 = 0;
                        uVar29 = 1;
                        pbVar4 = (byte*)pcVar28;
                        do {
                           iVar30 = (uint)pbVar21[1] - (uint)pbVar4[4];
                           iVar7 = -iVar30;
                           if (0 < iVar30) {
                              iVar7 = iVar30;
                           }

                           iVar25 = ( uint ) * pbVar21 - (uint)pbVar4[3];
                           iVar30 = -iVar25;
                           if (0 < iVar25) {
                              iVar30 = iVar25;
                           }

                           iVar36 = (uint)pbVar21[2] - (uint)pbVar4[5];
                           iVar25 = -iVar36;
                           if (0 < iVar36) {
                              iVar25 = iVar36;
                           }

                           iVar25 = iVar7 + iVar30 + iVar25;
                           if (iVar25 < iVar23) {
                              iVar23 = iVar25;
                              uVar31 = uVar29;
                           }

                           bVar22 = (byte)uVar31;
                           uVar29 = uVar29 + 1;
                           pbVar4 = pbVar4 + 3;
                        }
 while ( param_5 != uVar29 );
                     }

                     *pbVar9 = bVar22;
                  }

                  pbVar9 = pbVar9 + 1;
               }
 while ( pbVar9 != pbVar16 );
            }

         }
 else {
            LAB_00100fd5:pbVar16 = pbVar9;
            pbVar21 = (byte*)pcVar28;
            do {
               while ((int)param_5 <= (int)( uint ) * pbVar16) {
                  uVar12 = (long)( (int)uVar12 + -1 );
                  do {
                     uVar20 = uVar12;
                     uVar12 = uVar20 - 1;
                  }
 while ( (int)param_5 <= (int)(uint)pbVar9[uVar20] );
                  uVar12 = uVar20 & 0xffffffff;
                  pbVar16 = pbVar16 + 1;
                  *(undefined2*)pbVar21 = *(undefined2*)( (byte*)pcVar28 + uVar20 * 3 );
                  pbVar21[2] = ( (byte*)pcVar28 + uVar20 * 3 )[2];
                  pbVar21 = pbVar21 + 3;
                  if (pbVar16 == pbVar9 + (int)param_5) goto LAB_00101035;
               }
;
               pbVar16 = pbVar16 + 1;
               pbVar21 = pbVar21 + 3;
            }
 while ( pbVar16 != pbVar9 + (int)param_5 );
         }

      }

      LAB_00101035:png_free(param_2);
      *(undefined8*)( param_2 + 0x408 ) = 0;
   }

   if (*(long*)( param_2 + 0x250 ) == 0) {
      *(char**)( param_2 + 0x250 ) = pcVar28;
   }

   *(short*)( param_2 + 600 ) = (short)param_5;
   uVar31 = param_5;
   if (param_7 == 0) {
      return;
   }

   LAB_0010116d:uVar11 = png_calloc(param_2, 0x8000);
   *(undefined8*)( param_2 + 0x378 ) = uVar11;
   pbVar9 = (byte*)png_malloc(param_2, 0x8000);
   memset(pbVar9, 0xff, 0x8000);
   if (0 < (int)uVar31) {
      uVar29 = 0xff;
      uVar37 = 0;
      while (true) {
         bVar22 = *pcVar28;
         bVar1 = ( (byte*)pcVar28 )[2];
         bVar2 = ( (byte*)pcVar28 )[1];
         iVar7 = -(uint)(bVar22 >> 3);
         lVar17 = 0;
         while (true) {
            iVar30 = -iVar7;
            if ((int)( uint )(bVar22 >> 3) < (int)lVar17) {
               iVar30 = iVar7;
            }

            iVar25 = -(uint)(bVar2 >> 3);
            iVar23 = 0;
            uVar8 = (int)lVar17 << 10;
            while (true) {
               iVar36 = -iVar25;
               if ((int)( uint )(bVar2 >> 3) < iVar23) {
                  iVar36 = iVar25;
               }

               iVar5 = iVar36;
               if (iVar36 <= iVar30) {
                  iVar5 = iVar30;
               }

               uVar15 = iVar23 * 0x20;
               iVar33 = -(uint)(bVar1 >> 3);
               uVar27 = 0;
               uVar35 = uVar15 | uVar8;
               while (true) {
                  iVar19 = -iVar33;
                  if ((int)( uint )(bVar1 >> 3) < (int)uVar27) {
                     iVar19 = iVar33;
                  }

                  iVar18 = iVar5;
                  if (iVar5 <= iVar19) {
                     iVar18 = iVar19;
                  }

                  iVar19 = iVar18 + iVar30 + iVar36 + iVar19;
                  if (iVar19 < (int)uVar29) {
                     lVar32 = (long)(int)( uVar35 | uVar27 );
                     pbVar9[lVar32] = (byte)iVar19;
                     *(char*)( *(long*)( param_2 + 0x378 ) + lVar32 ) = (char)uVar37;
                  }

                  uVar27 = uVar27 + 1;
                  iVar33 = iVar33 + 1;
                  if (uVar27 == 0x20) break;
                  uVar29 = (uint)pbVar9[(int)( uVar35 | uVar27 )];
               }
;
               iVar25 = iVar25 + 1;
               iVar23 = iVar23 + 1;
               if (iVar23 == 0x20) break;
               uVar29 = (uint)pbVar9[(int)( uVar15 + 0x20 | uVar8 )];
            }
;
            lVar17 = lVar17 + 1;
            iVar7 = iVar7 + 1;
            if (lVar17 == 0x20) break;
            uVar29 = (uint)pbVar9[lVar17 * 0x400];
         }
;
         uVar37 = uVar37 + 1;
         pcVar28 = (char*)( (byte*)pcVar28 + 3 );
         if (uVar37 == uVar31) break;
         uVar29 = ( uint ) * pbVar9;
      }
;
   }

   png_free(param_2, pbVar9);
   return;
}
void png_set_quantize(long param_1, byte *param_2, ulong param_3, uint param_4, long param_5, int param_6) {
   long lVar1;
   byte bVar2;
   byte bVar3;
   undefined2 uVar4;
   int iVar5;
   bool bVar6;
   int iVar7;
   uint uVar8;
   byte *pbVar9;
   undefined1 *puVar10;
   undefined8 uVar11;
   ulong uVar12;
   long *plVar13;
   long *plVar14;
   uint uVar15;
   byte *pbVar16;
   long lVar17;
   int iVar18;
   int iVar19;
   ulong uVar20;
   byte *pbVar21;
   byte bVar22;
   int iVar23;
   long *plVar24;
   int iVar25;
   long *plVar26;
   uint uVar27;
   uint uVar28;
   int iVar29;
   uint uVar30;
   long lVar31;
   int iVar32;
   byte *pbVar33;
   long *plVar34;
   uint uVar35;
   int iVar36;
   uint uVar37;
   long *plVar38;
   ulong local_90;
   int local_78;
   if (param_1 == 0) {
      return;
   }

   if (( *(byte*)( param_1 + 0x130 ) & 0x40 ) != 0) {
      png_app_error(param_1, "invalid after png_start_read_image or png_read_update_info");
      return;
   }

   uVar30 = (uint)param_3;
   uVar12 = param_3 & 0xffffffff;
   *(ulong*)( param_1 + 0x130 ) = _LC22 | *(ulong*)( param_1 + 0x130 );
   if (param_6 == 0) {
      lVar31 = (long)(int)uVar30;
      puVar10 = (undefined1*)png_malloc(param_1, lVar31);
      *(undefined1**)( param_1 + 0x380 ) = puVar10;
      lVar17 = 0;
      if (0 < (int)uVar30) {
         if (( param_3 & 1 ) != 0) {
            *puVar10 = 0;
            lVar17 = 1;
            if (lVar31 == 1) goto LAB_00101131;
         }

         do {
            lVar1 = lVar17 + 1;
            puVar10[lVar17] = (char)lVar17;
            lVar17 = lVar17 + 2;
            puVar10[lVar1] = (char)lVar1;
         }
 while ( lVar31 != lVar17 );
      }

      LAB_00101131:if ((int)uVar30 <= (int)param_4) {
         if (*(long*)( param_1 + 0x250 ) != 0) {
            *(short*)( param_1 + 600 ) = (short)uVar12;
            return;
         }

         *(byte**)( param_1 + 0x250 ) = param_2;
         *(short*)( param_1 + 600 ) = (short)uVar12;
         return;
      }

   }
 else if ((int)uVar30 <= (int)param_4) {
      if (*(long*)( param_1 + 0x250 ) == 0) {
         *(byte**)( param_1 + 0x250 ) = param_2;
         *(short*)( param_1 + 600 ) = (short)param_3;
      }
 else {
         *(short*)( param_1 + 600 ) = (short)param_3;
      }

      goto LAB_0010116d;
   }

   local_90 = (ulong)(int)uVar30;
   if (param_5 == 0) {
      uVar11 = png_malloc(param_1, local_90);
      *(undefined8*)( param_1 + 0x410 ) = uVar11;
      lVar17 = png_malloc(param_1, local_90);
      *(long*)( param_1 + 0x418 ) = lVar17;
      if (0 < (int)uVar30) {
         lVar31 = *(long*)( param_1 + 0x410 );
         uVar12 = 0;
         do {
            *(char*)( lVar31 + uVar12 ) = (char)uVar12;
            *(char*)( lVar17 + uVar12 ) = (char)uVar12;
            uVar12 = uVar12 + 1;
         }
 while ( uVar12 != local_90 );
      }

      plVar13 = (long*)png_calloc(param_1, 0x1808);
      if ((int)param_4 < (int)uVar30) {
         plVar14 = (long*)0x0;
         plVar38 = plVar13 + 0x61;
         local_78 = 0x60;
         uVar28 = uVar30;
         do {
            pbVar9 = param_2 + 3;
            uVar37 = 0;
            plVar26 = plVar13;
            if (0 < (int)( uVar28 - 1 )) {
               do {
                  uVar15 = uVar37 + 1;
                  pbVar16 = pbVar9;
                  uVar8 = uVar15;
                  if ((int)uVar15 < (int)uVar28) {
                     do {
                        while (true) {
                           iVar29 = (uint)pbVar9[-3] - ( uint ) * pbVar16;
                           iVar7 = -iVar29;
                           if (0 < iVar29) {
                              iVar7 = iVar29;
                           }

                           iVar29 = (uint)pbVar9[-2] - (uint)pbVar16[1];
                           if (iVar29 < 1) {
                              iVar29 = -iVar29;
                           }

                           iVar23 = (uint)pbVar9[-1] - (uint)pbVar16[2];
                           if (iVar23 < 1) {
                              iVar23 = -iVar23;
                           }

                           iVar23 = iVar7 + iVar29 + iVar23;
                           if (local_78 < iVar23) break;
                           plVar14 = (long*)png_malloc_warn(param_1, 0x10);
                           if (plVar14 == (long*)0x0) goto LAB_00101756;
                           lVar17 = plVar13[iVar23];
                           *(char*)( (long)plVar14 + 9 ) = (char)uVar8;
                           uVar8 = uVar8 + 1;
                           *(char*)( plVar14 + 1 ) = (char)uVar37;
                           *plVar14 = lVar17;
                           plVar13[iVar23] = (long)plVar14;
                           pbVar16 = pbVar16 + 3;
                           if (uVar8 == uVar28) goto LAB_001015e8;
                        }
;
                        uVar8 = uVar8 + 1;
                        pbVar16 = pbVar16 + 3;
                     }
 while ( uVar8 != uVar28 );
                  }

                  LAB_001015e8:pbVar9 = pbVar9 + 3;
                  if (plVar14 == (long*)0x0) goto LAB_00101756;
                  uVar37 = uVar15;
               }
 while ( (int)uVar15 < (int)( uVar28 - 1 ) );
            }

            plVar24 = plVar13;
            if (plVar14 == (long*)0x0) {
               LAB_00101756:plVar14 = (long*)0x0;
            }
 else {
               do {
                  plVar34 = (long*)*plVar24;
                  if (plVar34 != (long*)0x0) {
                     lVar17 = *(long*)( param_1 + 0x410 );
                     do {
                        bVar22 = *(byte*)( plVar34 + 1 );
                        bVar2 = *(byte*)( (ulong)bVar22 + lVar17 );
                        uVar12 = (ulong)bVar2;
                        if ((int)(uint)bVar2 < (int)uVar28) {
                           uVar20 = ( ulong ) * (byte*)( (long)plVar34 + 9 );
                           pbVar9 = (byte*)( uVar20 + lVar17 );
                           uVar37 = ( uint ) * pbVar9;
                           if ((int)uVar37 < (int)uVar28) {
                              pbVar16 = (byte*)( (ulong)bVar22 + lVar17 );
                              if (( uVar28 & 1 ) == 0) {
                                 uVar20 = (ulong)bVar22;
                                 uVar12 = (ulong)uVar37;
                                 pbVar16 = pbVar9;
                                 bVar22 = *(byte*)( (long)plVar34 + 9 );
                              }

                              uVar28 = uVar28 - 1;
                              *(undefined2*)( param_2 + uVar12 * 3 ) = *(undefined2*)( param_2 + (long)(int)uVar28 * 3 );
                              ( param_2 + uVar12 * 3 )[2] = ( param_2 + (long)(int)uVar28 * 3 )[2];
                              uVar12 = ( ulong ) * pbVar16;
                              if (( param_6 == 0 ) && ( 0 < (int)uVar30 )) {
                                 pbVar9 = *(byte**)( param_1 + 0x380 );
                                 pbVar21 = pbVar9 + local_90;
                                 do {
                                    bVar2 = *pbVar9;
                                    if (bVar2 == (byte)uVar12) {
                                       bVar2 = *(byte*)( lVar17 + uVar20 );
                                       *pbVar9 = bVar2;
                                       uVar12 = ( ulong ) * pbVar16;
                                    }

                                    if (bVar2 == uVar28) {
                                       *pbVar9 = (byte)uVar12;
                                       uVar12 = ( ulong ) * pbVar16;
                                    }

                                    pbVar9 = pbVar9 + 1;
                                 }
 while ( pbVar21 != pbVar9 );
                              }

                              lVar31 = *(long*)( param_1 + 0x418 );
                              pbVar9 = (byte*)( (int)uVar28 + lVar31 );
                              *(char*)( lVar17 + ( ulong ) * pbVar9 ) = (char)uVar12;
                              *(byte*)( lVar31 + uVar12 ) = *pbVar9;
                              *pbVar16 = (byte)uVar28;
                              *pbVar9 = bVar22;
                           }

                        }

                        if ((int)uVar28 <= (int)param_4) goto LAB_0010177a;
                        plVar34 = (long*)*plVar34;
                     }
 while ( plVar34 != (long*)0x0 );
                  }

                  plVar24 = plVar24 + 1;
               }
 while ( plVar24 != plVar38 );
            }

            LAB_0010177a:do {
               plVar24 = (long*)*plVar26;
               if ((long*)*plVar26 != (long*)0x0) {
                  do {
                     plVar14 = (long*)*plVar24;
                     png_free(param_1, plVar24);
                     plVar24 = plVar14;
                  }
 while ( plVar14 != (long*)0x0 );
                  plVar14 = (long*)0x0;
               }

               *plVar26 = 0;
               plVar26 = plVar26 + 1;
            }
 while ( plVar26 != plVar13 + 0x301 );
            local_78 = local_78 + 0x60;
            plVar38 = plVar38 + 0x60;
         }
 while ( (int)param_4 < (int)uVar28 );
      }

      png_free(param_1, plVar13);
      png_free(param_1, *(undefined8*)( param_1 + 0x418 ));
      png_free(param_1, *(undefined8*)( param_1 + 0x410 ));
      *(undefined1(*) [16])( param_1 + 0x410 ) = (undefined1[16])0x0;
   }
 else {
      pbVar9 = (byte*)png_malloc(param_1, local_90);
      *(byte**)( param_1 + 0x408 ) = pbVar9;
      iVar7 = uVar30 - 1;
      if ((int)uVar30 < 1) {
         if ((int)param_4 <= iVar7) goto LAB_00100f68;
         if (param_6 == 0) {
            if ((int)param_4 < 1) goto LAB_00101035;
            goto LAB_001012ea;
         }

         LAB_00101818:if (0 < (int)param_4) goto LAB_00100fd5;
      }
 else {
         uVar20 = 0;
         if (( local_90 & 1 ) == 0) {
            LAB_00100f4b:do {
               lVar17 = uVar20 + 1;
               pbVar9[uVar20] = (byte)uVar20;
               uVar20 = uVar20 + 2;
               pbVar9[lVar17] = (byte)lVar17;
            }
 while ( uVar20 != local_90 );
         }
 else {
            uVar20 = 1;
            *pbVar9 = 0;
            if (local_90 != 1) goto LAB_00100f4b;
         }

         if ((int)param_4 <= iVar7) {
            LAB_00100f68:pbVar16 = pbVar9 + iVar7;
            do {
               if (iVar7 < 1) {
                  LAB_001012d7:if (param_6 != 0) goto LAB_00101818;
                  if (0 < (int)param_4) goto LAB_001012ea;
                  goto LAB_00101367;
               }

               bVar6 = true;
               pbVar21 = pbVar9;
               do {
                  if (*(ushort*)( param_5 + ( ulong ) * pbVar21 * 2 ) < *(ushort*)( param_5 + (ulong)pbVar21[1] * 2 )) {
                     *(ushort*)pbVar21 = CONCAT11(*pbVar21, pbVar21[1]);
                     bVar6 = false;
                  }

                  pbVar21 = pbVar21 + 1;
               }
 while ( pbVar16 != pbVar21 );
               if (bVar6) goto LAB_001012d7;
               iVar7 = iVar7 + -1;
               pbVar16 = pbVar16 + -1;
            }
 while ( (int)param_4 <= iVar7 );
         }

         if (param_6 == 0) {
            LAB_001012ea:lVar17 = 0;
            pbVar16 = param_2;
            do {
               while ((int)param_4 <= (int)(uint)pbVar9[lVar17]) {
                  uVar12 = (long)( (int)uVar12 + -1 );
                  do {
                     uVar20 = uVar12;
                     uVar12 = uVar20 - 1;
                  }
 while ( (int)param_4 <= (int)(uint)pbVar9[uVar20] );
                  uVar12 = uVar20 & 0xffffffff;
                  pbVar21 = param_2 + uVar20 * 3;
                  uVar4 = *(undefined2*)pbVar21;
                  bVar22 = pbVar21[2];
                  *(undefined2*)pbVar21 = *(undefined2*)pbVar16;
                  pbVar21[2] = pbVar16[2];
                  lVar31 = *(long*)( param_1 + 0x380 );
                  *(undefined2*)pbVar16 = uVar4;
                  pbVar16[2] = bVar22;
                  *(char*)( lVar31 + uVar20 ) = (char)lVar17;
                  *(char*)( lVar31 + lVar17 ) = (char)uVar20;
                  lVar17 = lVar17 + 1;
                  pbVar16 = pbVar16 + 3;
                  if ((int)param_4 <= (int)lVar17) goto LAB_00101367;
               }
;
               lVar17 = lVar17 + 1;
               pbVar16 = pbVar16 + 3;
            }
 while ( (int)lVar17 < (int)param_4 );
            LAB_00101367:if (0 < (int)uVar30) {
               pbVar9 = *(byte**)( param_1 + 0x380 );
               pbVar16 = pbVar9 + local_90;
               do {
                  if ((int)param_4 <= (int)( uint ) * pbVar9) {
                     pbVar21 = param_2 + ( ulong ) * pbVar9 * 3;
                     iVar29 = ( uint ) * pbVar21 - ( uint ) * param_2;
                     iVar7 = -iVar29;
                     if (0 < iVar29) {
                        iVar7 = iVar29;
                     }

                     iVar23 = (uint)pbVar21[1] - (uint)param_2[1];
                     iVar29 = -iVar23;
                     if (0 < iVar23) {
                        iVar29 = iVar23;
                     }

                     iVar25 = (uint)pbVar21[2] - (uint)param_2[2];
                     iVar23 = -iVar25;
                     if (0 < iVar25) {
                        iVar23 = iVar25;
                     }

                     iVar23 = iVar7 + iVar29 + iVar23;
                     if ((int)param_4 < 2) {
                        bVar22 = 0;
                     }
 else {
                        pbVar33 = param_2 + 3;
                        uVar30 = 0;
                        uVar28 = 1;
                        do {
                           iVar29 = (uint)pbVar21[1] - (uint)pbVar33[1];
                           iVar7 = -iVar29;
                           if (0 < iVar29) {
                              iVar7 = iVar29;
                           }

                           iVar25 = ( uint ) * pbVar21 - ( uint ) * pbVar33;
                           iVar29 = -iVar25;
                           if (0 < iVar25) {
                              iVar29 = iVar25;
                           }

                           iVar36 = (uint)pbVar21[2] - (uint)pbVar33[2];
                           iVar25 = -iVar36;
                           if (0 < iVar36) {
                              iVar25 = iVar36;
                           }

                           iVar25 = iVar7 + iVar29 + iVar25;
                           if (iVar25 < iVar23) {
                              iVar23 = iVar25;
                              uVar30 = uVar28;
                           }

                           bVar22 = (byte)uVar30;
                           uVar28 = uVar28 + 1;
                           pbVar33 = pbVar33 + 3;
                        }
 while ( param_4 != uVar28 );
                     }

                     *pbVar9 = bVar22;
                  }

                  pbVar9 = pbVar9 + 1;
               }
 while ( pbVar9 != pbVar16 );
            }

         }
 else {
            LAB_00100fd5:pbVar16 = pbVar9;
            pbVar21 = param_2;
            do {
               while ((int)param_4 <= (int)( uint ) * pbVar16) {
                  uVar12 = (long)( (int)uVar12 + -1 );
                  do {
                     uVar20 = uVar12;
                     uVar12 = uVar20 - 1;
                  }
 while ( (int)param_4 <= (int)(uint)pbVar9[uVar20] );
                  uVar12 = uVar20 & 0xffffffff;
                  pbVar16 = pbVar16 + 1;
                  *(undefined2*)pbVar21 = *(undefined2*)( param_2 + uVar20 * 3 );
                  pbVar21[2] = ( param_2 + uVar20 * 3 )[2];
                  pbVar21 = pbVar21 + 3;
                  if (pbVar16 == pbVar9 + (int)param_4) goto LAB_00101035;
               }
;
               pbVar16 = pbVar16 + 1;
               pbVar21 = pbVar21 + 3;
            }
 while ( pbVar16 != pbVar9 + (int)param_4 );
         }

      }

      LAB_00101035:png_free(param_1);
      *(undefined8*)( param_1 + 0x408 ) = 0;
   }

   if (*(long*)( param_1 + 0x250 ) == 0) {
      *(byte**)( param_1 + 0x250 ) = param_2;
   }

   *(short*)( param_1 + 600 ) = (short)param_4;
   uVar30 = param_4;
   if (param_6 == 0) {
      return;
   }

   LAB_0010116d:uVar11 = png_calloc(param_1, 0x8000);
   *(undefined8*)( param_1 + 0x378 ) = uVar11;
   pbVar9 = (byte*)png_malloc(param_1, 0x8000);
   memset(pbVar9, 0xff, 0x8000);
   if (0 < (int)uVar30) {
      uVar28 = 0xff;
      uVar37 = 0;
      while (true) {
         bVar22 = *param_2;
         bVar2 = param_2[2];
         bVar3 = param_2[1];
         iVar7 = -(uint)(bVar22 >> 3);
         lVar17 = 0;
         while (true) {
            iVar29 = -iVar7;
            if ((int)( uint )(bVar22 >> 3) < (int)lVar17) {
               iVar29 = iVar7;
            }

            iVar25 = -(uint)(bVar3 >> 3);
            iVar23 = 0;
            uVar8 = (int)lVar17 << 10;
            while (true) {
               iVar36 = -iVar25;
               if ((int)( uint )(bVar3 >> 3) < iVar23) {
                  iVar36 = iVar25;
               }

               iVar5 = iVar36;
               if (iVar36 <= iVar29) {
                  iVar5 = iVar29;
               }

               uVar15 = iVar23 * 0x20;
               iVar32 = -(uint)(bVar2 >> 3);
               uVar27 = 0;
               uVar35 = uVar15 | uVar8;
               while (true) {
                  iVar19 = -iVar32;
                  if ((int)( uint )(bVar2 >> 3) < (int)uVar27) {
                     iVar19 = iVar32;
                  }

                  iVar18 = iVar5;
                  if (iVar5 <= iVar19) {
                     iVar18 = iVar19;
                  }

                  iVar19 = iVar18 + iVar29 + iVar36 + iVar19;
                  if (iVar19 < (int)uVar28) {
                     lVar31 = (long)(int)( uVar35 | uVar27 );
                     pbVar9[lVar31] = (byte)iVar19;
                     *(char*)( *(long*)( param_1 + 0x378 ) + lVar31 ) = (char)uVar37;
                  }

                  uVar27 = uVar27 + 1;
                  iVar32 = iVar32 + 1;
                  if (uVar27 == 0x20) break;
                  uVar28 = (uint)pbVar9[(int)( uVar35 | uVar27 )];
               }
;
               iVar25 = iVar25 + 1;
               iVar23 = iVar23 + 1;
               if (iVar23 == 0x20) break;
               uVar28 = (uint)pbVar9[(int)( uVar15 + 0x20 | uVar8 )];
            }
;
            lVar17 = lVar17 + 1;
            iVar7 = iVar7 + 1;
            if (lVar17 == 0x20) break;
            uVar28 = (uint)pbVar9[lVar17 * 0x400];
         }
;
         uVar37 = uVar37 + 1;
         param_2 = param_2 + 3;
         if (uVar37 == uVar30) break;
         uVar28 = ( uint ) * pbVar9;
      }
;
   }

   png_free(param_1, pbVar9);
   return;
}
void png_set_gamma_fixed(long param_1, int param_2, int param_3) {
   uint uVar1;
   if (param_1 == 0) {
      return;
   }

   uVar1 = *(uint*)( param_1 + 0x130 );
   if (( uVar1 & 0x40 ) != 0) {
      png_app_error(param_1, "invalid after png_start_read_image or png_read_update_info");
      return;
   }

   *(uint*)( param_1 + 0x130 ) = uVar1 | 0x4000;
   if (( param_2 == -1 ) || ( param_2 == -100000 )) {
      param_2 = 220000;
      *(uint*)( param_1 + 0x130 ) = uVar1 | 0x5000;
   }
 else if (( param_2 == -2 ) || ( param_2 == -50000 )) {
      param_2 = 0x250ac;
   }

   if (( param_3 == -1 ) || ( param_3 == -100000 )) {
      *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) | 0x1000;
      param_3 = 0xb18f;
   }
 else if (( param_3 == -2 ) || ( param_3 == -50000 )) {
      param_3 = 0x10175;
   }
 else if (param_3 < 1) {
      /* WARNING: Subroutine does not return */
      png_error(param_1, "invalid file gamma in png_set_gamma");
   }

   if (param_2 < 1) {
      /* WARNING: Subroutine does not return */
      png_error(param_1, "invalid screen gamma in png_set_gamma");
   }

   *(ushort*)( param_1 + 0x4ea ) = *(ushort*)( param_1 + 0x4ea ) | 1;
   *(int*)( param_1 + 0x4a0 ) = param_3;
   *(int*)( param_1 + 0x2a4 ) = param_2;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void png_set_gamma(double param_1, double param_2, long param_3, undefined8 param_4, int param_5) {
   if (( 0.0 < param_2 ) && ( param_2 < _LC12 )) {
      param_2 = param_2 * __LC13;
   }

   param_2 = param_2 + _LC14;
   if ((double)( (ulong)param_2 & _LC21 ) < _LC15) {
      param_2 = (double)( ( ulong )((double)(long)param_2 - (double)( -(ulong)(param_2 < (double)(long)param_2) & _LC17 )) | ~_LC21 & (ulong)param_2 );
   }

   if (( param_2 <= _LC18 ) && ( _LC19 <= param_2 )) {
      param_5 = (int)param_2;
      if (( 0.0 < param_1 ) && ( param_1 < _LC12 )) {
         param_1 = param_1 * __LC13;
      }

      param_1 = param_1 + _LC14;
      if ((double)( (ulong)param_1 & _LC21 ) < _LC15) {
         param_1 = (double)( ( ulong )((double)(long)param_1 - (double)( -(ulong)(param_1 < (double)(long)param_1) & _LC17 )) | ~_LC21 & (ulong)param_1 );
      }

      if (( param_1 <= _LC18 ) && ( _LC19 <= param_1 )) {
         png_set_gamma_fixed(param_3, (int)param_1);
         return;
      }

   }

   png_fixed_error(param_3, "gamma value", param_5);
   if (param_3 != 0) {
      if (( *(byte*)( param_3 + 0x130 ) & 0x40 ) != 0) {
         png_app_error();
         return;
      }

      *(ulong*)( param_3 + 0x130 ) = _LC26 | *(ulong*)( param_3 + 0x130 );
   }

   return;
}
void png_set_expand(long param_1) {
   if (param_1 != 0) {
      if (( *(byte*)( param_1 + 0x130 ) & 0x40 ) != 0) {
         png_app_error(param_1, "invalid after png_start_read_image or png_read_update_info");
         return;
      }

      *(ulong*)( param_1 + 0x130 ) = _LC26 | *(ulong*)( param_1 + 0x130 );
   }

   return;
}
void png_set_palette_to_rgb(long param_1) {
   if (param_1 != 0) {
      if (( *(byte*)( param_1 + 0x130 ) & 0x40 ) != 0) {
         png_app_error(param_1, "invalid after png_start_read_image or png_read_update_info");
         return;
      }

      *(ulong*)( param_1 + 0x130 ) = _LC26 | *(ulong*)( param_1 + 0x130 );
   }

   return;
}
void png_set_expand_gray_1_2_4_to_8(long param_1) {
   if (param_1 != 0) {
      if (( *(byte*)( param_1 + 0x130 ) & 0x40 ) != 0) {
         png_app_error(param_1, "invalid after png_start_read_image or png_read_update_info");
         return;
      }

      *(ulong*)( param_1 + 0x130 ) = _LC27 | *(ulong*)( param_1 + 0x130 );
   }

   return;
}
void png_set_tRNS_to_alpha(long param_1) {
   if (param_1 != 0) {
      if (( *(byte*)( param_1 + 0x130 ) & 0x40 ) != 0) {
         png_app_error(param_1, "invalid after png_start_read_image or png_read_update_info");
         return;
      }

      *(ulong*)( param_1 + 0x130 ) = _LC26 | *(ulong*)( param_1 + 0x130 );
   }

   return;
}
void png_set_expand_16(long param_1) {
   if (param_1 != 0) {
      if (( *(byte*)( param_1 + 0x130 ) & 0x40 ) != 0) {
         png_app_error(param_1, "invalid after png_start_read_image or png_read_update_info");
         return;
      }

      *(ulong*)( param_1 + 0x130 ) = _LC28 | *(ulong*)( param_1 + 0x130 );
   }

   return;
}
void png_set_gray_to_rgb(long param_1) {
   if (param_1 != 0) {
      if (( *(byte*)( param_1 + 0x130 ) & 0x40 ) != 0) {
         png_app_error(param_1, "invalid after png_start_read_image or png_read_update_info");
         return;
      }

      *(ulong*)( param_1 + 0x130 ) = _LC29 | *(ulong*)( param_1 + 0x130 );
   }

   return;
}
void png_set_rgb_to_gray_fixed(long param_1, int param_2, uint param_3, uint param_4) {
   uint uVar1;
   if (param_1 == 0) {
      return;
   }

   if (( *(uint*)( param_1 + 0x130 ) & 0x40 ) == 0) {
      if (( *(byte*)( param_1 + 300 ) & 1 ) == 0) {
         png_app_error(param_1, "invalid before the PNG header has been read");
         return;
      }

      *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) | 0x4000;
      if (param_2 == 2) {
         uVar1 = *(uint*)( param_1 + 0x134 ) | 0x400000;
      }
 else if (param_2 == 3) {
         uVar1 = *(uint*)( param_1 + 0x134 ) | 0x200000;
      }
 else {
         if (param_2 != 1) {
            /* WARNING: Subroutine does not return */
            png_error(param_1, "invalid error action to rgb_to_gray");
         }

         uVar1 = *(uint*)( param_1 + 0x134 ) | 0x600000;
      }

      *(uint*)( param_1 + 0x134 ) = uVar1;
      if (*(char*)( param_1 + 0x267 ) == '\x03') {
         *(uint*)( param_1 + 0x134 ) = uVar1 | 0x1000;
      }

      if (-1 < (int)( param_3 | param_4 )) {
         if ((int)( param_3 + param_4 ) < 0x186a1) {
            *(undefined1*)( param_1 + 0x3d1 ) = 1;
            *(short*)( param_1 + 0x3d2 ) = (short)( ( ulong )(( param_3 << 0xf ) >> 5) / 0xc35 );
            *(short*)( param_1 + 0x3d4 ) = (short)( ( ulong )(( param_4 << 0xf ) >> 5) / 0xc35 );
            return;
         }

         png_app_warning(param_1, "ignoring out of range rgb_to_gray coefficients");
      }

      if (( *(ulong*)( param_1 + 0x3d0 ) & 0xffffffff0000 ) == 0) {
         *(undefined4*)( param_1 + 0x3d2 ) = 0x5b8a1b38;
      }

      return;
   }

   png_app_error(param_1, "invalid after png_start_read_image or png_read_update_info");
   return;
}
void png_set_rgb_to_gray(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4) {
   undefined4 uVar1;
   undefined4 uVar2;
   uVar1 = png_fixed(param_2, param_3, "rgb to gray green coefficient");
   uVar2 = png_fixed(param_1, param_3, "rgb to gray red coefficient");
   png_set_rgb_to_gray_fixed(param_3, param_4, uVar2, uVar1);
   return;
}
void png_set_read_user_transform_fn(long param_1, undefined8 param_2) {
   *(uint*)( param_1 + 0x134 ) = *(uint*)( param_1 + 0x134 ) | 0x100000;
   *(undefined8*)( param_1 + 0x110 ) = param_2;
   return;
}
void png_init_read_transformations(long param_1) {
   ulong uVar1;
   char cVar2;
   ushort uVar3;
   long lVar4;
   long lVar5;
   bool bVar6;
   byte bVar7;
   byte bVar8;
   byte bVar9;
   byte bVar10;
   byte bVar11;
   byte bVar12;
   byte bVar13;
   undefined2 uVar14;
   undefined4 uVar15;
   int iVar16;
   int iVar17;
   undefined4 uVar18;
   uint uVar19;
   byte *pbVar20;
   byte *pbVar21;
   uint uVar22;
   byte *pbVar23;
   long lVar24;
   uint uVar25;
   ushort uVar26;
   short sVar27;
   uint uVar28;
   byte *pbVar29;
   byte *pbVar30;
   long in_FS_OFFSET;
   undefined8 extraout_XMM0_Qa;
   undefined8 extraout_XMM0_Qa_00;
   undefined8 extraout_XMM0_Qa_01;
   undefined8 extraout_XMM0_Qa_02;
   undefined8 extraout_XMM0_Qa_03;
   undefined8 extraout_XMM0_Qb;
   undefined8 extraout_XMM0_Qb_00;
   undefined8 extraout_XMM0_Qb_01;
   undefined8 extraout_XMM0_Qb_02;
   undefined8 extraout_XMM0_Qb_03;
   undefined1 auVar34[16];
   undefined8 extraout_XMM0_Qb_04;
   undefined8 extraout_XMM1_Qa;
   undefined8 extraout_XMM1_Qa_00;
   undefined8 extraout_XMM1_Qa_01;
   undefined8 extraout_XMM1_Qa_02;
   undefined8 extraout_XMM1_Qb;
   undefined1 auVar36[16];
   undefined8 extraout_XMM1_Qb_00;
   undefined8 extraout_XMM1_Qb_01;
   undefined8 extraout_XMM1_Qb_02;
   undefined4 local_44;
   long local_40;
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar35[16];
   iVar16 = *(int*)( param_1 + 0x4a0 );
   iVar17 = *(int*)( param_1 + 0x2a4 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (iVar16 == 0) {
      if (iVar17 == 0) {
         *(ushort*)( param_1 + 0x4ea ) = *(ushort*)( param_1 + 0x4ea ) | 1;
         *(undefined4*)( param_1 + 0x4a0 ) = 100000;
         *(undefined4*)( param_1 + 0x2a4 ) = 100000;
      }
 else {
         uVar15 = png_reciprocal(iVar17);
         *(ushort*)( param_1 + 0x4ea ) = *(ushort*)( param_1 + 0x4ea ) | 1;
         *(undefined4*)( param_1 + 0x4a0 ) = uVar15;
      }

      LAB_00101e78:uVar25 = *(uint*)( param_1 + 0x134 ) & 0xffffdfff;
      *(uint*)( param_1 + 0x134 ) = uVar25;
   }
 else {
      if (iVar17 == 0) {
         uVar15 = png_reciprocal(iVar16);
         *(ushort*)( param_1 + 0x4ea ) = *(ushort*)( param_1 + 0x4ea ) | 1;
         *(undefined4*)( param_1 + 0x2a4 ) = uVar15;
         goto LAB_00101e78;
      }

      iVar16 = png_muldiv(&local_44, iVar16, iVar17, 100000);
      if (( iVar16 != 0 ) && ( iVar16 = iVar16 == 0 )) {
         *(ushort*)( param_1 + 0x4ea ) = *(ushort*)( param_1 + 0x4ea ) | 1;
         goto LAB_00101e78;
      }

      uVar25 = *(uint*)( param_1 + 0x134 ) | 0x2000;
      *(ushort*)( param_1 + 0x4ea ) = *(ushort*)( param_1 + 0x4ea ) | 1;
      *(uint*)( param_1 + 0x134 ) = uVar25;
   }

   if (( uVar25 & 0x40080 ) == 0x40000) {
      *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) & 0xffffdfff;
      *(uint*)( param_1 + 0x134 ) = uVar25 & 0xfd7ffeff;
      *(undefined2*)( param_1 + 0x260 ) = 0;
   }

   iVar16 = png_gamma_significant();
   auVar34._8_8_ = extraout_XMM0_Qb;
   auVar34._0_8_ = extraout_XMM0_Qa;
   uVar25 = *(uint*)( param_1 + 0x134 );
   if (iVar16 == 0) {
      uVar25 = uVar25 & 0xff7fffff;
      *(ulong*)( param_1 + 0x130 ) = *(ulong*)( param_1 + 0x130 ) & 0xff7fffffffffdfff;
   }

   if (( uVar25 & 0x600000 ) != 0) {
      auVar34._0_8_ = png_colorspace_set_rgb_coefficients();
      auVar34._8_8_ = extraout_XMM0_Qb_01;
      uVar25 = *(uint*)( param_1 + 0x134 );
   }

   bVar12 = *(byte*)( param_1 + 0x267 );
   if (( uVar25 & 0x100 ) == 0) {
      if (( ( ( ~uVar25 & 0x4080 ) == 0 ) && ( sVar27 = *(short*)( param_1 + 0x27e ) ),sVar27 == *(short*)( param_1 + 0x280 ) )) &&( sVar27 == *(short*)( param_1 + 0x282 ) ) * (uint*)( param_1 + 300 ) = *(uint*)( param_1 + 300 ) | 0x800;
      *(short*)( param_1 + 0x284 ) = sVar27;
   }

}
else if = (( bVar12 & 2 ) == 0){
   *(uint*)( param_1 + 300 ) = *(uint*)( param_1 + 300 ) | 0x800;
}
uVar26 = *(ushort*)( param_1 + 0x260 );uVar28 = uVar25;if (bVar12 == 3) {
   if (uVar26 != 0) {
      pbVar20 = *(byte**)( param_1 + 0x2e8 );
      bVar6 = false;
      pbVar23 = pbVar20 + 1;
      pbVar21 = pbVar20;
      do {
         if (*pbVar21 != 0xff) {
            if (*pbVar21 != 0) goto LAB_0010250b;
            bVar6 = true;
         }

         pbVar21 = pbVar21 + 1;
      }
 while ( pbVar23 + ( uVar26 - 1 ) != pbVar21 );
      *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) & 0xffffdfff;
      uVar28 = uVar25 & 0xff7fffff;
      *(uint*)( param_1 + 0x134 ) = uVar28;
      if (!bVar6) goto LAB_0010261a;
      LAB_0010250b:if (( ~uVar28 & 0x1100 ) == 0) {
         pbVar21 = (byte*)( ( ulong ) * (byte*)( param_1 + 0x27c ) * 3 + *(long*)( param_1 + 0x250 ) );
         *(ushort*)( param_1 + 0x27e ) = ( ushort ) * pbVar21;
         bVar12 = pbVar21[2];
         *(ushort*)( param_1 + 0x280 ) = (ushort)pbVar21[1];
         *(ushort*)( param_1 + 0x282 ) = (ushort)bVar12;
         if (( ( uVar28 & 0x80000 ) != 0 ) && ( pbVar21 = pbVar23(uVar28 & 0x2000000) == 0 )) {
            while (pbVar30 = pbVar21,*pbVar20 = ~*pbVar20,pbVar23 + ( uVar26 - 1 ) != pbVar30) {
               pbVar20 = pbVar30;
               pbVar21 = pbVar30 + 1;
            }
;
            uVar28 = *(uint*)( param_1 + 0x134 );
         }

      }

      goto LAB_0010202f;
   }

   *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) & 0xffffdfff;
   LAB_0010261a:uVar28 = uVar25 & 0xff7ffe7f;
   *(uint*)( param_1 + 0x134 ) = uVar28;
   LAB_00102041:if (( ( ( uVar28 & 0x4000400 ) != 0 ) && ( ( uVar28 & 0x180 ) == 0x80 ) ) && ( *(char*)( param_1 + 0x268 ) == '\x10' )) {
      uVar1 = *(ulong*)( param_1 + 0x27e );
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar1;
      auVar34 = psllw(auVar36, 8);
      *(ulong*)( param_1 + 0x27e ) = CONCAT26(auVar34._6_2_ + (short)( uVar1 >> 0x30 ), CONCAT24(auVar34._4_2_ + (short)( uVar1 >> 0x20 ), CONCAT22(auVar34._2_2_ + (short)( uVar1 >> 0x10 ), auVar34._0_2_ + (short)uVar1)));
   }

}
 else {
   if (( bVar12 & 4 ) != 0) {
      LAB_00102022:if (( ( ~uVar28 & 0x1100 ) == 0 ) && ( ( bVar12 & 2 ) == 0 )) {
         uVar25 = ( uint ) * (ushort*)( param_1 + 0x284 );
         cVar2 = *(char*)( param_1 + 0x268 );
         uVar26 = *(ushort*)( param_1 + 0x2f8 );
         uVar19 = (uint)uVar26;
         uVar22 = (uint)uVar26;
         if (cVar2 == '\x02') {
            uVar19 = uVar22 * 0x55;
            uVar25 = ( uint ) * (ushort*)( param_1 + 0x284 ) * 0x55;
         }
 else if (cVar2 == '\x04') {
            uVar19 = uVar22 + (uint)uVar26 * 0x10;
            uVar25 = uVar25 * 0x11;
         }
 else if (cVar2 == '\x01') {
            uVar19 = (uint)uVar26 * 0x100 - uVar22;
            uVar25 = uVar25 * 0xff;
         }

         *(short*)( param_1 + 0x282 ) = (short)uVar25;
         auVar34 = pshuflw(auVar34, ZEXT416(uVar25), 0);
         *(int*)( param_1 + 0x27e ) = auVar34._0_4_;
         if (( uVar28 & 0x2000000 ) == 0) {
            *(short*)( param_1 + 0x2f6 ) = (short)uVar19;
            auVar34 = pshuflw(auVar34, ZEXT416(uVar19), 0);
            *(int*)( param_1 + 0x2f2 ) = auVar34._0_4_;
         }

      }

      LAB_0010202f:if (( ( uVar28 & 0x380 ) == 0x280 ) && ( *(char*)( param_1 + 0x268 ) != '\x10' )) {
         *(ulong*)( param_1 + 0x27e ) = ( ( ulong )(( ( uint ) * (ushort*)( param_1 + 0x284 ) * 0x100 - ( uint ) * (ushort*)( param_1 + 0x284 ) ) + 0x807f & 0xffff0000 | ( uint ) * (ushort*)( param_1 + 0x282 ) * 0xff + 0x807f >> 0x10) << 0x10 | ( ulong )(( ( uint ) * (ushort*)( param_1 + 0x280 ) * 0x100 - ( uint ) * (ushort*)( param_1 + 0x280 ) ) + 0x807f >> 0x10) ) << 0x10 | ( ulong )(( uint ) * (ushort*)( param_1 + 0x27e ) * 0xff + 0x807f >> 0x10);
      }

      goto LAB_00102041;
   }

   *(uint*)( param_1 + 0x130 ) = *(uint*)( param_1 + 0x130 ) & 0xffffdfff;
   uVar28 = uVar25 & 0xff7fffff;
   *(uint*)( param_1 + 0x134 ) = uVar28;
   if (uVar26 != 0) goto LAB_00102022;
   uVar28 = uVar25 & 0xff7ffe7f;
   *(uint*)( param_1 + 0x134 ) = uVar28;
}
*(undefined8*)( param_1 + 0x286 ) = *(undefined8*)( param_1 + 0x27c );*(undefined2*)( param_1 + 0x28e ) = *(undefined2*)( param_1 + 0x284 );if (( uVar28 & 0x2000 ) == 0) {
   if (( uVar28 & 0x600000 ) != 0) {
      iVar16 = png_gamma_significant(*(undefined4*)( param_1 + 0x4a0 ));
      if (( iVar16 != 0 ) || ( iVar16 = iVar16 != 0 )) goto LAB_001021e8;
      uVar28 = *(uint*)( param_1 + 0x134 );
   }

   if (( uVar28 & 0x80 ) == 0) {
      if (( uVar28 & 0x800000 ) == 0) goto LAB_00102292;
      LAB_001020a1:iVar16 = png_gamma_significant(*(undefined4*)( param_1 + 0x2a4 ));
      if (iVar16 != 0) goto LAB_001021e8;
      uVar28 = *(uint*)( param_1 + 0x134 );
   }
 else {
      iVar16 = png_gamma_significant(*(undefined4*)( param_1 + 0x4a0 ));
      if (( ( iVar16 != 0 ) || ( iVar16 = png_gamma_significant(*(undefined4*)( param_1 + 0x2a4 )) ),iVar16 != 0 )) goto LAB_001021e8;
      uVar28 = *(uint*)( param_1 + 0x134 );
      if (( uVar28 & 0x800000 ) != 0) goto LAB_001020a1;
   }

   if (( uVar28 & 0x80 ) != 0) {
      if (*(char*)( param_1 + 0x267 ) != '\x03') goto LAB_001022a2;
      uVar26 = *(ushort*)( param_1 + 0x282 );
      uVar3 = *(ushort*)( param_1 + 0x260 );
      pbVar23 = *(byte**)( param_1 + 0x250 );
      if (uVar3 != 0) {
         bVar12 = ( byte ) * (undefined2*)( param_1 + 0x27e );
         bVar8 = ( byte ) * (undefined2*)( param_1 + 0x280 );
         pbVar20 = *(byte**)( param_1 + 0x2e8 ) + 1;
         pbVar21 = pbVar20;
         pbVar30 = *(byte**)( param_1 + 0x2e8 );
         while (true) {
            pbVar29 = pbVar21;
            bVar9 = *pbVar30;
            if (bVar9 == 0) {
               *pbVar23 = bVar12;
               pbVar23[1] = bVar8;
               pbVar23[2] = (byte)uVar26;
            }
 else if (bVar9 != 0xff) {
               uVar25 = ( ushort )((ushort)bVar9 * ( ushort ) * pbVar23) + 0x80 + ( 0xff - (uint)bVar9 ) * (uint)bVar12;
               *pbVar23 = ( byte )(uVar25 + ( uVar25 >> 8 & 0xff ) >> 8);
               uVar25 = ( 0xff - ( uint ) * pbVar30 ) * (uint)bVar8 + 0x80 + ( uint )(ushort)(( ushort ) * pbVar30 * (ushort)pbVar23[1]);
               pbVar23[1] = ( byte )(uVar25 + ( uVar25 >> 8 & 0xff ) >> 8);
               uVar25 = ( ushort )(( 0xff - ( ushort ) * pbVar30 ) * ( uVar26 & 0xff )) + 0x80 + ( uint )(ushort)(( ushort ) * pbVar30 * (ushort)pbVar23[2]);
               pbVar23[2] = ( byte )(uVar25 + ( uVar25 >> 8 & 0xff ) >> 8);
            }

            pbVar23 = pbVar23 + 3;
            if (pbVar20 + ( uVar3 - 1 ) == pbVar29) break;
            pbVar21 = pbVar29 + 1;
            pbVar30 = pbVar29;
         }
;
      }

      uVar28 = uVar28 & 0xffffff7f;
      *(uint*)( param_1 + 0x134 ) = uVar28;
      goto LAB_001022f0;
   }

   LAB_00102292:if (( ( uVar28 & 0x1008 ) != 8 ) || ( *(char*)( param_1 + 0x267 ) != '\x03' )) goto LAB_001022a2;
}
 else {
   LAB_001021e8:png_build_gamma_table(param_1, *(undefined1*)( param_1 + 0x268 ));
   uVar28 = *(uint*)( param_1 + 0x134 );
   if (( uVar28 & 0x80 ) != 0) {
      if (( uVar28 & 0x600000 ) != 0) {
         png_warning(param_1, "libpng does not support gamma+background+rgb_to_gray");
      }

      cVar2 = *(char*)( param_1 + 0x274 );
      if (*(char*)( param_1 + 0x267 ) == '\x03') {
         pbVar23 = *(byte**)( param_1 + 0x250 );
         uVar26 = *(ushort*)( param_1 + 600 );
         if (cVar2 == '\x02') {
            lVar24 = *(long*)( param_1 + 0x2a8 );
            bVar11 = *(byte*)( lVar24 + ( ulong ) * (ushort*)( param_1 + 0x27e ) );
            bVar12 = *(byte*)( lVar24 + ( ulong ) * (ushort*)( param_1 + 0x280 ) );
            bVar13 = *(byte*)( lVar24 + ( ulong ) * (ushort*)( param_1 + 0x282 ) );
            lVar24 = *(long*)( param_1 + 0x2c0 );
            bVar8 = *(byte*)( lVar24 + ( ulong ) * (ushort*)( param_1 + 0x27e ) );
            bVar9 = *(byte*)( lVar24 + ( ulong ) * (ushort*)( param_1 + 0x280 ) );
            bVar10 = *(byte*)( lVar24 + ( ulong ) * (ushort*)( param_1 + 0x282 ) );
         }
 else {
            if (cVar2 == '\x01') {
               uVar15 = *(undefined4*)( param_1 + 0x2a4 );
               uVar18 = 100000;
            }
 else if (cVar2 == '\x03') {
               uVar15 = png_reciprocal(*(undefined4*)( param_1 + 0x278 ));
               uVar18 = png_reciprocal2(*(undefined4*)( param_1 + 0x278 ), *(undefined4*)( param_1 + 0x2a4 ));
            }
 else {
               uVar18 = 100000;
               uVar15 = 100000;
            }

            iVar16 = png_gamma_significant(uVar18);
            if (iVar16 == 0) {
               bVar12 = *(byte*)( param_1 + 0x280 );
               bVar11 = *(byte*)( param_1 + 0x27e );
               bVar13 = *(byte*)( param_1 + 0x282 );
            }
 else {
               bVar11 = png_gamma_8bit_correct(*(undefined2*)( param_1 + 0x27e ), uVar18);
               bVar12 = png_gamma_8bit_correct(*(undefined2*)( param_1 + 0x280 ), uVar18);
               bVar13 = png_gamma_8bit_correct(*(undefined2*)( param_1 + 0x282 ), uVar18);
            }

            iVar16 = png_gamma_significant(uVar15);
            if (iVar16 == 0) {
               bVar8 = *(byte*)( param_1 + 0x27e );
               bVar9 = *(byte*)( param_1 + 0x280 );
               bVar10 = *(byte*)( param_1 + 0x282 );
            }
 else {
               bVar8 = png_gamma_8bit_correct(*(undefined2*)( param_1 + 0x27e ), uVar15);
               bVar9 = png_gamma_8bit_correct(*(undefined2*)( param_1 + 0x280 ), uVar15);
               bVar10 = png_gamma_8bit_correct(*(undefined2*)( param_1 + 0x282 ), uVar15);
            }

         }

         if (uVar26 != 0) {
            lVar24 = 0;
            uVar3 = *(ushort*)( param_1 + 0x260 );
            LAB_001028fa:do {
               if ((int)lVar24 < (int)(uint)uVar3) {
                  pbVar20 = (byte*)( *(long*)( param_1 + 0x2e8 ) + lVar24 );
                  bVar7 = *pbVar20;
                  if (bVar7 != 0xff) {
                     if (bVar7 == 0) {
                        *pbVar23 = bVar11;
                        pbVar23[1] = bVar12;
                        bVar7 = bVar13;
                     }
 else {
                        lVar4 = *(long*)( param_1 + 0x2c0 );
                        uVar25 = ( ushort )((ushort)bVar7 * ( ushort ) * (byte*)( lVar4 + ( ulong ) * pbVar23 )) + 0x80 + ( uint )(ushort)(( 0xff - (ushort)bVar7 ) * (ushort)bVar8);
                        lVar5 = *(long*)( param_1 + 0x2b8 );
                        *pbVar23 = *(byte*)( lVar5 + ( ulong )(uVar25 + ( uVar25 >> 8 & 0xff ) >> 8 & 0xff) );
                        uVar25 = ( ushort )(( ushort ) * pbVar20 * ( ushort ) * (byte*)( lVar4 + (ulong)pbVar23[1] )) + 0x80 + ( uint )(ushort)(( 0xff - ( ushort ) * pbVar20 ) * (ushort)bVar9);
                        pbVar23[1] = *(byte*)( lVar5 + ( ulong )(uVar25 + ( uVar25 >> 8 & 0xff ) >> 8 & 0xff) );
                        uVar25 = ( ushort )(( ushort ) * pbVar20 * ( ushort ) * (byte*)( lVar4 + (ulong)pbVar23[2] )) + 0x80 + ( 0xff - ( uint ) * pbVar20 ) * (uint)bVar10;
                        bVar7 = *(byte*)( lVar5 + ( (ulong)uVar25 + ( ulong )(byte)(uVar25 >> 8) >> 8 & 0xff ) );
                     }

                     lVar24 = lVar24 + 1;
                     pbVar23[2] = bVar7;
                     pbVar23 = pbVar23 + 3;
                     if ((int)(uint)uVar26 <= (int)lVar24) break;
                     goto LAB_001028fa;
                  }

               }

               lVar4 = *(long*)( param_1 + 0x2a8 );
               lVar24 = lVar24 + 1;
               *pbVar23 = *(byte*)( lVar4 + ( ulong ) * pbVar23 );
               pbVar23[1] = *(byte*)( lVar4 + (ulong)pbVar23[1] );
               pbVar23[2] = *(byte*)( lVar4 + (ulong)pbVar23[2] );
               pbVar23 = pbVar23 + 3;
            }
 while ( (int)lVar24 < (int)(uint)uVar26 );
         }

         uVar28 = *(uint*)( param_1 + 0x134 ) & 0xffffdf7f;
         *(uint*)( param_1 + 0x134 ) = uVar28;
         goto LAB_00102292;
      }

      if (cVar2 == '\x02') {
         uVar15 = png_reciprocal(*(undefined4*)( param_1 + 0x4a0 ));
         uVar18 = png_reciprocal2(*(undefined4*)( param_1 + 0x4a0 ), *(undefined4*)( param_1 + 0x2a4 ));
      }
 else if (cVar2 == '\x03') {
         uVar15 = png_reciprocal(*(undefined4*)( param_1 + 0x278 ));
         uVar18 = png_reciprocal2(*(undefined4*)( param_1 + 0x278 ), *(undefined4*)( param_1 + 0x2a4 ));
      }
 else {
         if (cVar2 != '\x01') {
            /* WARNING: Subroutine does not return */
            png_error(param_1, "invalid background gamma type");
         }

         uVar15 = *(undefined4*)( param_1 + 0x2a4 );
         uVar18 = 100000;
      }

      iVar16 = png_gamma_significant(uVar15);
      iVar17 = png_gamma_significant(uVar18);
      auVar35._8_8_ = extraout_XMM1_Qb;
      auVar35._0_8_ = extraout_XMM1_Qa;
      auVar31._8_8_ = extraout_XMM0_Qb_00;
      auVar31._0_8_ = extraout_XMM0_Qa_00;
      if (iVar16 == 0) {
         if (iVar17 == 0) {
            uVar26 = *(ushort*)( param_1 + 0x280 );
            if (( uVar26 == *(ushort*)( param_1 + 0x27e ) ) && ( uVar26 == *(ushort*)( param_1 + 0x282 ) )) {
               auVar34 = pshuflw(auVar31, ZEXT216(uVar26), 0);
               uVar15 = auVar34._0_4_;
               if (uVar26 == *(ushort*)( param_1 + 0x284 )) goto LAB_00102ae8;
            }

         }
 else {
            uVar25 = png_gamma_correct(param_1, *(undefined2*)( param_1 + 0x284 ), uVar18);
            auVar35._8_8_ = extraout_XMM1_Qb_01;
            auVar35._0_8_ = extraout_XMM1_Qa_01;
            auVar33._8_8_ = extraout_XMM0_Qb_03;
            auVar33._0_8_ = extraout_XMM0_Qa_02;
            sVar27 = *(short*)( param_1 + 0x27e );
            *(short*)( param_1 + 0x284 ) = (short)uVar25;
            if (( ( sVar27 != *(short*)( param_1 + 0x280 ) ) || ( *(short*)( param_1 + 0x282 ) != sVar27 ) ) || ( *(short*)( param_1 + 0x284 ) != sVar27 )) goto LAB_00102a1b;
            auVar34 = pshuflw(auVar33, ZEXT416(uVar25), 0);
            uVar15 = auVar34._0_4_;
            LAB_00102ae8:*(undefined4*)( param_1 + 0x27e ) = uVar15;
            *(ushort*)( param_1 + 0x28c ) = *(ushort*)( param_1 + 0x28e );
            auVar34 = pshuflw(auVar35, ZEXT216(*(ushort*)( param_1 + 0x28e )), 0);
            *(int*)( param_1 + 0x288 ) = auVar34._0_4_;
         }

      }
 else {
         uVar14 = png_gamma_correct(param_1, *(undefined2*)( param_1 + 0x284 ), uVar15);
         auVar35._8_8_ = extraout_XMM1_Qb_00;
         auVar35._0_8_ = extraout_XMM1_Qa_00;
         auVar32._8_8_ = extraout_XMM0_Qb_02;
         auVar32._0_8_ = extraout_XMM0_Qa_01;
         *(undefined2*)( param_1 + 0x28e ) = uVar14;
         if (iVar17 == 0) {
            uVar3 = *(ushort*)( param_1 + 0x280 );
            uVar25 = (uint)uVar3;
            uVar26 = *(ushort*)( param_1 + 0x27e );
            if (( ( *(ushort*)( param_1 + 0x27e ) == uVar3 ) && ( uVar26 = uVar3 ),uVar3 == *(ushort*)( param_1 + 0x282 ) )) {
               LAB_00102dc7:auVar34 = pshuflw(auVar32, ZEXT416(uVar25), 0);
               uVar15 = auVar34._0_4_;
               goto LAB_00102ae8;
            }

         }
 else {
            uVar25 = png_gamma_correct(param_1, *(undefined2*)( param_1 + 0x284 ), uVar18);
            auVar35._8_8_ = extraout_XMM1_Qb_02;
            auVar35._0_8_ = extraout_XMM1_Qa_02;
            auVar32._8_8_ = extraout_XMM0_Qb_04;
            auVar32._0_8_ = extraout_XMM0_Qa_03;
            uVar26 = *(ushort*)( param_1 + 0x27e );
            *(short*)( param_1 + 0x284 ) = (short)uVar25;
            if (( ( uVar26 == *(ushort*)( param_1 + 0x280 ) ) && ( *(ushort*)( param_1 + 0x282 ) == uVar26 ) ) && ( *(ushort*)( param_1 + 0x284 ) == uVar26 )) goto LAB_00102dc7;
         }

         uVar14 = png_gamma_correct(param_1, uVar26, uVar15);
         *(undefined2*)( param_1 + 0x288 ) = uVar14;
         uVar14 = png_gamma_correct(param_1, *(undefined2*)( param_1 + 0x280 ), uVar15);
         *(undefined2*)( param_1 + 0x28a ) = uVar14;
         uVar14 = png_gamma_correct(param_1, *(undefined2*)( param_1 + 0x282 ), uVar15);
         *(undefined2*)( param_1 + 0x28c ) = uVar14;
         if (iVar17 != 0) {
            sVar27 = *(short*)( param_1 + 0x27e );
            LAB_00102a1b:uVar14 = png_gamma_correct(param_1, sVar27, uVar18);
            *(undefined2*)( param_1 + 0x27e ) = uVar14;
            uVar14 = png_gamma_correct(param_1, *(undefined2*)( param_1 + 0x280 ), uVar18);
            *(undefined2*)( param_1 + 0x280 ) = uVar14;
            uVar14 = png_gamma_correct(param_1, *(undefined2*)( param_1 + 0x282 ), uVar18);
            *(undefined2*)( param_1 + 0x282 ) = uVar14;
         }

      }

      *(undefined1*)( param_1 + 0x274 ) = 1;
      uVar28 = *(uint*)( param_1 + 0x134 );
      goto LAB_00102292;
   }

   if (*(char*)( param_1 + 0x267 ) != '\x03') goto LAB_001022a2;
   if (( ( uVar28 & 0x1000 ) == 0 ) || ( ( uVar28 & 0x600000 ) == 0 )) {
      uVar26 = *(ushort*)( param_1 + 600 );
      pbVar23 = *(byte**)( param_1 + 0x250 );
      if (uVar26 != 0) {
         lVar24 = *(long*)( param_1 + 0x2a8 );
         pbVar20 = pbVar23;
         do {
            pbVar21 = pbVar20 + 3;
            *pbVar20 = *(byte*)( lVar24 + ( ulong ) * pbVar20 );
            pbVar20[1] = *(byte*)( lVar24 + (ulong)pbVar20[1] );
            pbVar20[2] = *(byte*)( lVar24 + (ulong)pbVar20[2] );
            pbVar20 = pbVar21;
         }
 while ( pbVar23 + ( ulong )(uVar26 - 1) * 3 + 3 != pbVar21 );
      }

      uVar28 = uVar28 & 0xffffdfff;
      *(uint*)( param_1 + 0x134 ) = uVar28;
   }

   LAB_001022f0:if (( uVar28 & 0x1008 ) != 8) goto LAB_001022a2;
}
bVar12 = *(byte*)( param_1 + 0x2d9 );uVar26 = *(ushort*)( param_1 + 600 );*(uint*)( param_1 + 0x134 ) = uVar28 & 0xfffffff7;bVar8 = *(byte*)( param_1 + 0x2d8 );uVar25 = 7 - bVar12;if (7 - bVar8 < 7) {
   if (uVar26 == 0) goto LAB_001022a2;
   pbVar23 = *(byte**)( param_1 + 0x250 ) + 3;
   pbVar20 = pbVar23;
   pbVar21 = *(byte**)( param_1 + 0x250 );
   while (pbVar30 = pbVar20,*pbVar21 = ( byte )((int)( uint ) * pbVar21 >> ( 8 - bVar8 & 0x1f )),pbVar30 != pbVar23 + ( ulong )(uVar26 - 1) * 3) {
      pbVar21 = pbVar30;
      pbVar20 = pbVar30 + 3;
   }
;
   if (uVar25 < 7) goto LAB_00102379;
   LAB_001023b1:bVar12 = *(byte*)( param_1 + 0x2da );
   if (6 < 7 - bVar12) goto LAB_001022a2;
}
 else {
   if (uVar25 < 7) {
      if (uVar26 == 0) goto LAB_001022a2;
      LAB_00102379:lVar24 = *(long*)( param_1 + 0x250 );
      pbVar23 = (byte*)( lVar24 + 1 );
      do {
         pbVar20 = pbVar23 + 3;
         *pbVar23 = ( byte )((int)( uint ) * pbVar23 >> ( 8 - bVar12 & 0x1f ));
         pbVar23 = pbVar20;
      }
 while ( pbVar20 != (byte*)( lVar24 + 4 + ( ulong )(uVar26 - 1) * 3 ) );
      goto LAB_001023b1;
   }

   bVar12 = *(byte*)( param_1 + 0x2da );
   if (( 6 < 7 - bVar12 ) || ( uVar26 == 0 )) goto LAB_001022a2;
}
lVar24 = *(long*)( param_1 + 0x250 );pbVar23 = (byte*)( lVar24 + 2 );do {
   pbVar20 = pbVar23 + 3;
   *pbVar23 = ( byte )((int)( uint ) * pbVar23 >> ( 8 - bVar12 & 0x1f ));
   pbVar23 = pbVar20;
}
 while ( pbVar20 != (byte*)( lVar24 + 5 + ( ulong )(uVar26 - 1) * 3 ) );LAB_001022a2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* WARNING: Type propagation algorithm not settling */void png_read_transform_info(long param_1, uint *param_2) {
   char cVar1;
   short sVar2;
   uint uVar3;
   long lVar4;
   ulong uVar5;
   byte bVar6;
   byte bVar7;
   uVar3 = *(uint*)( param_1 + 0x134 );
   if (( uVar3 & 0x1000 ) == 0) {
      bVar6 = (byte)param_2[9];
      LAB_00102e2a:if (( uVar3 & 0x80 ) != 0) {
         *(undefined8*)( (long)param_2 + 0xd2 ) = *(undefined8*)( param_1 + 0x27c );
         *(undefined2*)( (long)param_2 + 0xda ) = *(undefined2*)( param_1 + 0x284 );
      }

      param_2[0xd] = *(uint*)( param_1 + 0x4a0 );
      if (bVar6 == 0x10) {
         if (( uVar3 & 0x4000000 ) != 0) {
            *(undefined1*)( param_2 + 9 ) = 8;
         }

         if (( uVar3 & 0x400 ) != 0) {
            *(undefined1*)( param_2 + 9 ) = 8;
         }

      }

   }
 else {
      sVar2 = *(short*)( param_1 + 0x260 );
      if (*(byte*)( (long)param_2 + 0x25 ) == 3) {
         *(undefined1*)( param_2 + 9 ) = 8;
         *(undefined2*)( (long)param_2 + 0x22 ) = 0;
         lVar4 = *(long*)( param_1 + 0x250 );
         *(byte*)( (long)param_2 + 0x25 ) = ( -(sVar2 == 0) & 0xfcU ) + 6;
         if (lVar4 == 0) {
            /* WARNING: Subroutine does not return */
            png_error(param_1, "Palette is NULL in indexed image");
         }

      }
 else {
         if (( sVar2 != 0 ) && ( ( uVar3 & 0x2000000 ) != 0 )) {
            *(byte*)( (long)param_2 + 0x25 ) = *(byte*)( (long)param_2 + 0x25 ) | 4;
         }

         bVar6 = (byte)param_2[9];
         if (7 < bVar6) {
            *(undefined2*)( (long)param_2 + 0x22 ) = 0;
            goto LAB_00102e2a;
         }

         *(undefined1*)( param_2 + 9 ) = 8;
         *(undefined2*)( (long)param_2 + 0x22 ) = 0;
      }

      if (( uVar3 & 0x80 ) == 0) {
         param_2[0xd] = *(uint*)( param_1 + 0x4a0 );
      }
 else {
         *(undefined8*)( (long)param_2 + 0xd2 ) = *(undefined8*)( param_1 + 0x27c );
         *(undefined2*)( (long)param_2 + 0xda ) = *(undefined2*)( param_1 + 0x284 );
         param_2[0xd] = *(uint*)( param_1 + 0x4a0 );
      }

   }

   if (( uVar3 & 0x4000 ) != 0) {
      *(byte*)( (long)param_2 + 0x25 ) = *(byte*)( (long)param_2 + 0x25 ) | 2;
   }

   if (( uVar3 & 0x600000 ) == 0) {
      bVar6 = *(byte*)( (long)param_2 + 0x25 );
      if (( ( ( uVar3 & 0x40 ) == 0 ) || ( ( bVar6 & 0xfb ) != 2 ) ) || ( *(long*)( param_1 + 0x378 ) == 0 )) goto LAB_00102e90;
      if ((char)param_2[9] != '\b') goto LAB_00102e9e;
      *(undefined1*)( (long)param_2 + 0x25 ) = 3;
      bVar6 = 3;
      if (( uVar3 & 0x200 ) != 0) goto LAB_00102ff0;
      LAB_00102eac:if (bVar6 != 3) goto LAB_00102ec3;
      LAB_00102ff0:*(undefined1*)( (long)param_2 + 0x29 ) = 1;
      if (( uVar3 & 0x40000 ) == 0) goto joined_r0x00103040;
      bVar6 = 3;
      LAB_00103003:bVar6 = bVar6 & 0xfb;
      *(byte*)( (long)param_2 + 0x25 ) = bVar6;
      *(undefined2*)( (long)param_2 + 0x22 ) = 0;
      LAB_00103011:if (( ( ( uVar3 & 0x8000 ) != 0 ) && ( ( bVar6 & 0xfd ) == 0 ) ) && ( *(char*)( (long)param_2 + 0x29 ) = *(char*)( (long)param_2 + 0x29 ) + '\x01'(uVar3 & 0x1000000) != 0 )) {
         *(byte*)( (long)param_2 + 0x25 ) = bVar6 | 4;
      }

   }
 else {
      *(byte*)( (long)param_2 + 0x25 ) = *(byte*)( (long)param_2 + 0x25 ) & 0xfd;
      bVar6 = *(byte*)( (long)param_2 + 0x25 );
      LAB_00102e90:if (( ( uVar3 & 0x200 ) == 0 ) || ( (char)param_2[9] != '\b' )) {
         LAB_00102e9e:if (( ( uVar3 & 4 ) != 0 ) && ( (byte)param_2[9] < 8 )) {
            *(undefined1*)( param_2 + 9 ) = 8;
         }

         goto LAB_00102eac;
      }

      if (bVar6 == 3) goto LAB_00102ff0;
      *(undefined1*)( param_2 + 9 ) = 0x10;
      LAB_00102ec3:bVar7 = -((bVar6 & 2) == 0) & 0xfe;
      *(byte*)( (long)param_2 + 0x29 ) = bVar7 + 3;
      if (( uVar3 & 0x40000 ) != 0) goto LAB_00103003;
      if (( bVar6 & 4 ) == 0) goto LAB_00103011;
      *(byte*)( (long)param_2 + 0x29 ) = bVar7 + 4;
   }

   joined_r0x00103040:if (( uVar3 & 0x100000 ) != 0) {
      if (*(char*)( param_1 + 0x128 ) != '\0') {
         *(char*)( param_2 + 9 ) = *(char*)( param_1 + 0x128 );
      }

      cVar1 = *(char*)( param_1 + 0x129 );
      if (cVar1 != '\0') {
         *(char*)( (long)param_2 + 0x29 ) = cVar1;
         bVar6 = cVar1 * (char)param_2[9];
         uVar3 = *param_2;
         *(byte*)( (long)param_2 + 0x2a ) = bVar6;
         goto joined_r0x0010305e;
      }

   }

   bVar6 = *(char*)( (long)param_2 + 0x29 ) * (char)param_2[9];
   uVar3 = *param_2;
   *(byte*)( (long)param_2 + 0x2a ) = bVar6;
   joined_r0x0010305e:if (7 < bVar6) {
      lVar4 = ( ulong )(bVar6 >> 3) * (ulong)uVar3;
      *(long*)( param_2 + 4 ) = lVar4;
      *(long*)( param_1 + 0x240 ) = lVar4;
      return;
   }

   uVar5 = (ulong)bVar6 * (ulong)uVar3 + 7 >> 3;
   *(ulong*)( param_2 + 4 ) = uVar5;
   *(ulong*)( param_1 + 0x240 ) = uVar5;
   return;
}
void png_do_read_transformations(long param_1, uint *param_2) {
   undefined1 *puVar1;
   int *piVar2;
   ulong *puVar3;
   undefined1 uVar4;
   short sVar5;
   ushort uVar6;
   undefined4 uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   bool bVar12;
   char cVar13;
   undefined2 uVar14;
   ushort uVar15;
   ushort uVar16;
   ushort uVar17;
   int iVar18;
   int iVar19;
   ulong uVar20;
   undefined2 *puVar21;
   byte bVar34;
   byte *pbVar22;
   undefined1 uVar35;
   undefined1 *puVar23;
   undefined1 *puVar24;
   undefined4 *puVar25;
   long lVar26;
   ulong *puVar27;
   ulong *puVar28;
   byte *pbVar29;
   ulong uVar30;
   long lVar31;
   undefined4 *puVar32;
   undefined4 *puVar33;
   byte bVar36;
   uint uVar37;
   int iVar38;
   long lVar39;
   undefined1 *puVar40;
   char cVar41;
   int iVar42;
   undefined2 *puVar43;
   int *piVar44;
   ushort *puVar45;
   undefined1 *puVar46;
   uint uVar47;
   ushort *puVar48;
   byte *pbVar49;
   uint uVar50;
   ushort *puVar51;
   undefined1 uVar52;
   byte *pbVar53;
   ushort *puVar54;
   byte bVar55;
   uint uVar56;
   uint uVar57;
   long in_FS_OFFSET;
   bool bVar58;
   undefined1 auVar59[16];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pbVar29 = *(byte**)( param_1 + 0x228 );
   if (pbVar29 == (byte*)0x0) {
      /* WARNING: Subroutine does not return */
      png_error(param_1, "NULL row buffer");
   }

   if (( *(uint*)( param_1 + 0x130 ) & 0x4040 ) == 0x4000) {
      /* WARNING: Subroutine does not return */
      png_error(param_1, "Uninitialized row");
   }

   uVar47 = *(uint*)( param_1 + 0x134 );
   if (( uVar47 & 0x1000 ) == 0) {
      LAB_001031b5:if (( ( uVar47 & 0x40080 ) == 0x40000 ) && ( ( param_2[4] & 0xfd ) == 4 )) {
         LAB_001039a7:png_do_strip_channel(param_2, *(long*)( param_1 + 0x228 ) + 1, 0);
         uVar47 = *(uint*)( param_1 + 0x134 );
      }

   }
 else {
      uVar16 = *(ushort*)( param_1 + 0x260 );
      pbVar22 = pbVar29 + 1;
      if ((char)param_2[4] != '\x03') {
         if (( uVar16 == 0 ) || ( ( uVar47 & 0x2000000 ) == 0 )) {
            png_do_expand(param_2, pbVar22, 0);
            uVar47 = *(uint*)( param_1 + 0x134 );
         }
 else {
            png_do_expand(param_2, pbVar22, param_1 + 0x2f0);
            uVar47 = *(uint*)( param_1 + 0x134 );
         }

         goto LAB_001031b5;
      }

      bVar34 = *(byte*)( (long)param_2 + 0x11 );
      lVar31 = *(long*)( param_1 + 0x2e8 );
      lVar39 = *(long*)( param_1 + 0x250 );
      uVar37 = *param_2;
      if (bVar34 < 8) {
         pbVar49 = pbVar29 + uVar37;
         if (bVar34 == 2) {
            pbVar22 = pbVar22 + ( uVar37 - 1 >> 2 );
            uVar47 = uVar37 * -2 & 6;
            pbVar53 = pbVar49;
            if (uVar37 != 0) {
               do {
                  *pbVar53 = ( byte )((int)( uint ) * pbVar22 >> ( (byte)uVar47 & 0x1f )) & 3;
                  if (uVar47 == 6) {
                     pbVar22 = pbVar22 + -1;
                     uVar47 = 0;
                  }
 else {
                     uVar47 = uVar47 + 2;
                  }

                  pbVar53 = pbVar53 + -1;
               }
 while ( pbVar29 != pbVar53 );
            }

         }
 else if (bVar34 == 4) {
            pbVar22 = pbVar22 + ( uVar37 - 1 >> 1 );
            uVar47 = uVar37 * 4 & 4;
            pbVar53 = pbVar49;
            if (uVar37 != 0) {
               do {
                  *pbVar53 = ( byte )((int)( uint ) * pbVar22 >> ( (byte)uVar47 & 0x1f )) & 0xf;
                  if (uVar47 == 4) {
                     pbVar22 = pbVar22 + -1;
                     uVar47 = 0;
                  }
 else {
                     uVar47 = uVar47 + 4;
                  }

                  pbVar53 = pbVar53 + -1;
               }
 while ( pbVar29 != pbVar53 );
            }

         }
 else if (bVar34 == 1) {
            pbVar22 = pbVar22 + ( uVar37 - 1 >> 3 );
            uVar47 = ~(uVar37 + 7) & 7;
            pbVar53 = pbVar49;
            if (uVar37 != 0) {
               do {
                  *pbVar53 = ( byte )((int)( uint ) * pbVar22 >> ( (byte)uVar47 & 0x1f )) & 1;
                  if (uVar47 == 7) {
                     pbVar22 = pbVar22 + -1;
                     uVar47 = 0;
                  }
 else {
                     uVar47 = uVar47 + 1;
                  }

                  pbVar53 = pbVar53 + -1;
               }
 while ( pbVar29 != pbVar53 );
            }

         }

         *(undefined1*)( (long)param_2 + 0x11 ) = 8;
         *(undefined1*)( (long)param_2 + 0x13 ) = 8;
         *(ulong*)( param_2 + 2 ) = (ulong)uVar37;
      }
 else {
         if (bVar34 != 8) goto LAB_001031b5;
         pbVar49 = pbVar29 + uVar37;
      }

      uVar20 = (ulong)uVar37;
      if (uVar16 != 0) {
         pbVar29 = pbVar29 + uVar20 * 4;
         pbVar22 = pbVar49;
         if (uVar37 != 0) {
            do {
               bVar34 = 0xff;
               if (*pbVar22 < uVar16) {
                  bVar34 = *(byte*)( lVar31 + ( ulong ) * pbVar22 );
               }

               *pbVar29 = bVar34;
               pbVar53 = pbVar22 + -1;
               pbVar29[-1] = *(byte*)( lVar39 + 2 + ( ulong ) * pbVar22 * 3 );
               pbVar29[-2] = *(byte*)( lVar39 + 1 + ( ulong ) * pbVar22 * 3 );
               pbVar29[-3] = *(byte*)( lVar39 + ( ulong ) * pbVar22 * 3 );
               pbVar29 = pbVar29 + -4;
               pbVar22 = pbVar53;
            }
 while ( pbVar53 != pbVar49 + -uVar20 );
         }

         uVar47 = *(uint*)( param_1 + 0x134 );
         param_2[4] = 0x20040806;
         *(ulong*)( param_2 + 2 ) = uVar20 * 4 & 0xffffffff;
         if (( uVar47 & 0x40080 ) != 0x40000) goto joined_r0x001039c8;
         goto LAB_001039a7;
      }

      pbVar29 = pbVar29 + uVar37 * 3;
      pbVar22 = pbVar49;
      if (uVar37 != 0) {
         do {
            pbVar53 = pbVar22 + -1;
            *pbVar29 = *(byte*)( lVar39 + 2 + ( ulong ) * pbVar22 * 3 );
            pbVar29[-1] = *(byte*)( lVar39 + 1 + ( ulong ) * pbVar22 * 3 );
            pbVar29[-2] = *(byte*)( lVar39 + ( ulong ) * pbVar22 * 3 );
            pbVar29 = pbVar29 + -3;
            pbVar22 = pbVar53;
         }
 while ( pbVar53 != pbVar49 + -uVar20 );
      }

      *(ulong*)( param_2 + 2 ) = ( ulong )(uVar37 * 3);
      param_2[4] = 0x18030802;
      uVar47 = *(uint*)( param_1 + 0x134 );
   }

   joined_r0x001039c8:if (( uVar47 & 0x600000 ) != 0) {
      bVar34 = (byte)param_2[4];
      if (( bVar34 & 3 ) == 2) {
         uVar16 = *(ushort*)( param_1 + 0x3d4 );
         puVar45 = (ushort*)( *(long*)( param_1 + 0x228 ) + 1 );
         cVar13 = *(char*)( (long)param_2 + 0x11 );
         bVar55 = bVar34 & 4;
         uVar50 = ( uint ) * (ushort*)( param_1 + 0x3d2 );
         iVar38 = 0x8000 - ( uVar50 + uVar16 );
         uVar37 = *param_2;
         uVar56 = (uint)uVar16;
         if (cVar13 == '\b') {
            lVar31 = *(long*)( param_1 + 0x2b8 );
            if (( lVar31 == 0 ) || ( lVar39 = lVar39 == 0 )) {
               bVar58 = false;
               uVar57 = 0;
               puVar48 = puVar45;
               bVar12 = false;
               if (uVar37 != 0) {
                  do {
                     bVar58 = bVar12;
                     bVar34 = ( byte ) * puVar48;
                     if (( bVar34 != *(byte*)( (long)puVar48 + 1 ) ) || ( bVar34 != (byte)puVar48[1] )) {
                        bVar58 = true;
                        bVar34 = ( byte )(bVar34 * uVar50 + *(byte*)( (long)puVar48 + 1 ) * uVar56 + (uint)(byte)puVar48[1] * iVar38 >> 0xf);
                     }

                     *(byte*)puVar45 = bVar34;
                     if (bVar55 == 0) {
                        puVar51 = (ushort*)( (long)puVar45 + 1 );
                        puVar54 = (ushort*)( (long)puVar48 + 3 );
                     }
 else {
                        puVar51 = puVar45 + 1;
                        puVar54 = puVar48 + 2;
                        *(byte*)( (long)puVar45 + 1 ) = *(byte*)( (long)puVar48 + 3 );
                     }

                     uVar57 = uVar57 + 1;
                     puVar45 = puVar51;
                     puVar48 = puVar54;
                     bVar12 = bVar58;
                  }
 while ( uVar37 != uVar57 );
                  goto LAB_001052a0;
               }

            }
 else {
               if (uVar37 != 0) {
                  bVar58 = false;
                  uVar47 = 0;
                  puVar48 = puVar45;
                  do {
                     bVar34 = ( byte ) * puVar45;
                     if (( bVar34 == *(byte*)( (long)puVar45 + 1 ) ) && ( bVar34 == (byte)puVar45[1] )) {
                        if (*(long*)( param_1 + 0x2a8 ) != 0) {
                           bVar34 = *(byte*)( *(long*)( param_1 + 0x2a8 ) + (ulong)bVar34 );
                        }

                     }
 else {
                        bVar58 = true;
                        bVar34 = *(byte*)( lVar31 + ( ulong )(*(byte*)( lVar39 + (ulong)bVar34 ) * uVar50 + 0x4000 + ( uint ) * (byte*)( lVar39 + ( ulong ) * (byte*)( (long)puVar45 + 1 ) ) * (uint)uVar16 + ( uint ) * (byte*)( lVar39 + (ulong)(byte)puVar45[1] ) * iVar38 >> 0xf) );
                     }

                     *(byte*)puVar48 = bVar34;
                     if (bVar55 == 0) {
                        puVar51 = (ushort*)( (long)puVar48 + 1 );
                        puVar45 = (ushort*)( (long)puVar45 + 3 );
                     }
 else {
                        pbVar29 = (byte*)( (long)puVar45 + 3 );
                        puVar51 = puVar48 + 1;
                        puVar45 = puVar45 + 2;
                        *(byte*)( (long)puVar48 + 1 ) = *pbVar29;
                     }

                     uVar47 = uVar47 + 1;
                     puVar48 = puVar51;
                  }
 while ( uVar37 != uVar47 );
                  goto LAB_00104cd4;
               }

               LAB_00105da7:bVar58 = false;
            }

         }
 else {
            lVar31 = *(long*)( param_1 + 0x2d0 );
            if (( lVar31 == 0 ) || ( lVar39 = lVar39 == 0 )) {
               bVar58 = false;
               uVar57 = 0;
               puVar48 = puVar45;
               bVar12 = false;
               if (uVar37 != 0) {
                  do {
                     bVar58 = bVar12;
                     uVar16 = *puVar45;
                     uVar17 = puVar45[1];
                     uVar6 = puVar45[2];
                     if (( uVar17 != uVar16 ) || ( uVar6 != uVar16 )) {
                        bVar58 = true;
                     }

                     uVar16 = ( ushort )(( uint )(ushort)(uVar6 << 8 | uVar6 >> 8) * iVar38 + ( ushort )(uVar16 << 8 | uVar16 >> 8) * uVar50 + 0x4000 + ( ushort )(uVar17 << 8 | uVar17 >> 8) * uVar56 >> 0xf);
                     *puVar48 = uVar16 << 8 | uVar16 >> 8;
                     if (bVar55 == 0) {
                        puVar51 = puVar45 + 3;
                        puVar54 = puVar48 + 1;
                     }
 else {
                        puVar54 = puVar48 + 2;
                        puVar51 = puVar45 + 4;
                        *(byte*)( puVar48 + 1 ) = (byte)puVar45[3];
                        *(byte*)( (long)puVar48 + 3 ) = *(byte*)( (long)puVar45 + 7 );
                     }

                     uVar57 = uVar57 + 1;
                     puVar45 = puVar51;
                     puVar48 = puVar54;
                     bVar12 = bVar58;
                  }
 while ( uVar37 != uVar57 );
                  LAB_00104cd4:uVar47 = *(uint*)( param_1 + 0x134 );
                  bVar34 = (byte)param_2[4];
                  cVar13 = *(char*)( (long)param_2 + 0x11 );
               }

            }
 else {
               if (uVar37 == 0) goto LAB_00105da7;
               bVar58 = false;
               uVar47 = 0;
               puVar48 = puVar45;
               do {
                  uVar16 = *puVar48;
                  uVar17 = puVar48[1];
                  uVar6 = puVar48[2];
                  uVar15 = uVar16 << 8 | uVar16 >> 8;
                  bVar34 = ( byte )(uVar16 >> 8);
                  if (( uVar16 == uVar17 ) && ( uVar6 == uVar16 )) {
                     if (*(long*)( param_1 + 0x2b0 ) != 0) {
                        uVar15 = *(ushort*)( *(long*)( *(long*)( param_1 + 0x2b0 ) + (long)( (int)(uint)bVar34 >> ( ( byte ) * (undefined4*)( param_1 + 0x2a0 ) & 0x1f ) ) * 8 ) + (ulong)(byte)uVar16 * 2 );
                     }

                  }
 else {
                     bVar36 = ( byte ) * (undefined4*)( param_1 + 0x2a0 );
                     bVar58 = true;
                     uVar57 = *(ushort*)( *(long*)( lVar31 + (long)( (int)( uint )(byte)(uVar17 >> 8) >> ( bVar36 & 0x1f ) ) * 8 ) + (ulong)(byte)uVar17 * 2 ) * uVar56 + 0x4000 + *(ushort*)( *(long*)( lVar31 + (long)( (int)(uint)bVar34 >> ( bVar36 & 0x1f ) ) * 8 ) + (ulong)(byte)uVar16 * 2 ) * uVar50 + ( uint ) * (ushort*)( *(long*)( lVar31 + (long)( (int)( uint )(byte)(uVar6 >> 8) >> ( bVar36 & 0x1f ) ) * 8 ) + (ulong)(byte)uVar6 * 2 ) * iVar38;
                     uVar15 = *(ushort*)( *(long*)( lVar39 + (long)( (int)( uVar57 >> 0xf & 0xff ) >> ( bVar36 & 0x1f ) ) * 8 ) + ( ulong )(uVar57 >> 0x17 & 0xff) * 2 );
                  }

                  *puVar45 = uVar15 << 8 | uVar15 >> 8;
                  if (bVar55 == 0) {
                     puVar54 = puVar48 + 3;
                     puVar51 = puVar45 + 1;
                  }
 else {
                     puVar51 = puVar45 + 2;
                     puVar54 = puVar48 + 4;
                     *(byte*)( puVar45 + 1 ) = (byte)puVar48[3];
                     *(byte*)( (long)puVar45 + 3 ) = *(byte*)( (long)puVar48 + 7 );
                  }

                  uVar47 = uVar47 + 1;
                  puVar45 = puVar51;
                  puVar48 = puVar54;
               }
 while ( uVar37 != uVar47 );
               LAB_001052a0:uVar47 = *(uint*)( param_1 + 0x134 );
               bVar34 = (byte)param_2[4];
               cVar13 = *(char*)( (long)param_2 + 0x11 );
            }

         }

         *(byte*)( param_2 + 4 ) = bVar34 & 0xfd;
         cVar41 = *(char*)( (long)param_2 + 0x12 ) + -2;
         *(char*)( (long)param_2 + 0x12 ) = cVar41;
         bVar34 = cVar41 * cVar13;
         *(byte*)( (long)param_2 + 0x13 ) = bVar34;
         if (bVar34 < 8) {
            uVar20 = (ulong)bVar34 * (ulong)uVar37 + 7 >> 3;
         }
 else {
            uVar20 = ( ulong )(bVar34 >> 3) * (ulong)uVar37;
         }

         *(ulong*)( param_2 + 2 ) = uVar20;
         if (bVar58) {
            *(undefined1*)( param_1 + 0x3d0 ) = 1;
            uVar37 = uVar47 & 0x600000;
            if (uVar37 == 0x400000) {
               png_warning(param_1, "png_do_rgb_to_gray found nongray pixel");
               uVar47 = *(uint*)( param_1 + 0x134 );
               uVar37 = uVar47 & 0x600000;
            }

            if (uVar37 == 0x200000) {
               /* WARNING: Subroutine does not return */
               png_error(param_1, "png_do_rgb_to_gray found nongray pixel");
            }

         }

      }

   }

   if (( ( uVar47 & 0x4000 ) == 0 ) || ( ( *(byte*)( param_1 + 0x12d ) & 8 ) != 0 )) {
      if (( uVar47 & 0x80 ) == 0) goto LAB_001031e9;
      LAB_001034e0:lVar31 = *(long*)( param_1 + 0x228 );
      bVar34 = (byte)param_2[4];
      lVar39 = *(long*)( param_1 + 0x2a8 );
      lVar26 = *(long*)( param_1 + 0x2b8 );
      lVar8 = *(long*)( param_1 + 0x2c0 );
      puVar45 = (ushort*)( lVar31 + 1 );
      uVar50 = *(uint*)( param_1 + 0x130 ) & 0x2000;
      lVar9 = *(long*)( param_1 + 0x2b0 );
      lVar10 = *(long*)( param_1 + 0x2c8 );
      lVar11 = *(long*)( param_1 + 0x2d0 );
      uVar37 = *param_2;
      uVar20 = (ulong)uVar37;
      bVar55 = ( byte ) * (undefined4*)( param_1 + 0x2a0 );
      if (bVar34 == 4) {
         if (*(char*)( (long)param_2 + 0x11 ) == '\b') {
            if (( lVar8 == 0 || lVar26 == 0 ) || ( lVar39 == 0 )) {
               if (uVar37 != 0) {
                  do {
                     bVar34 = *(byte*)( (long)puVar45 + 1 );
                     if (bVar34 == 0) {
                        *(byte*)puVar45 = ( byte ) * (undefined2*)( param_1 + 0x284 );
                     }
 else if (bVar34 != 0xff) {
                        uVar47 = ( ushort )(( 0xff - (ushort)bVar34 ) * *(short*)( param_1 + 0x284 )) + 0x80 + ( uint )(ushort)((ushort)bVar34 * ( ushort )(byte) * puVar45);
                        *(byte*)puVar45 = ( byte )(uVar47 + ( uVar47 >> 8 & 0xff ) >> 8);
                     }

                     puVar45 = puVar45 + 1;
                  }
 while ( puVar45 != (ushort*)( lVar31 + 1 + uVar20 * 2 ) );
                  goto LAB_00103d10;
               }

            }
 else if (uVar37 != 0) {
               do {
                  bVar34 = *(byte*)( (long)puVar45 + 1 );
                  if (bVar34 == 0xff) {
                     bVar34 = *(byte*)( lVar39 + ( ulong )(byte) * puVar45 );
                  }
 else if (bVar34 == 0) {
                     bVar34 = *(byte*)( param_1 + 0x284 );
                  }
 else {
                     uVar47 = ( ushort )((ushort)bVar34 * ( ushort ) * (byte*)( lVar8 + ( ulong )(byte) * puVar45 )) + 0x80 + ( uint ) * (ushort*)( param_1 + 0x28e ) * ( 0xff - (uint)bVar34 );
                     iVar38 = ( uVar47 & 0xffff ) + ( uVar47 >> 8 & 0xff );
                     bVar34 = ( byte )((uint)iVar38 >> 8);
                     if (uVar50 == 0) {
                        bVar34 = *(byte*)( lVar26 + ( ulong )(iVar38 >> 8 & 0xff) );
                     }

                  }

                  *(byte*)puVar45 = bVar34;
                  puVar45 = puVar45 + 1;
               }
 while ( puVar45 != (ushort*)( lVar31 + 1 + uVar20 * 2 ) );
               LAB_00103d10:uVar47 = *(uint*)( param_1 + 0x134 );
               goto LAB_00103d16;
            }

            goto switchD_0010432d_caseD_0;
         }

         if (( lVar9 == 0 || lVar10 == 0 ) || ( lVar11 == 0 )) {
            if (uVar37 != 0) {
               do {
                  uVar16 = puVar45[1];
                  if (uVar16 == 0) {
                     uVar14 = *(undefined2*)( param_1 + 0x284 );
                     *(byte*)puVar45 = ( byte )((ushort)uVar14 >> 8);
                     *(byte*)( (long)puVar45 + 1 ) = (byte)uVar14;
                  }
 else if (uVar16 != 0xffff) {
                     uVar47 = ( uint )(ushort)(uVar16 << 8 | uVar16 >> 8);
                     uVar47 = ( ushort )(*puVar45 << 8 | *puVar45 >> 8) * uVar47 + 0x8000 + ( uint ) * (ushort*)( param_1 + 0x284 ) * ( 0xffff - uVar47 );
                     iVar38 = ( uVar47 >> 0x10 ) + uVar47;
                     *(byte*)puVar45 = ( byte )((uint)iVar38 >> 0x18);
                     *(byte*)( (long)puVar45 + 1 ) = ( byte )((uint)iVar38 >> 0x10);
                  }

                  puVar45 = puVar45 + 2;
               }
 while ( puVar45 != (ushort*)( lVar31 + 1 + uVar20 * 4 ) );
               goto LAB_00103d10;
            }

            goto switchD_0010432d_caseD_0;
         }

         if (uVar37 == 0) goto switchD_0010432d_caseD_0;
         do {
            uVar16 = puVar45[1];
            if (uVar16 == 0xffff) {
               uVar16 = *(ushort*)( *(long*)( lVar9 + (long)( (int)( uint ) * (byte*)( (long)puVar45 + 1 ) >> ( bVar55 & 0x1f ) ) * 8 ) + ( ulong )(byte) * puVar45 * 2 );
               uVar47 = (uint)uVar16;
               bVar34 = ( byte )(uVar16 >> 8);
            }
 else if (uVar16 == 0) {
               uVar47 = ( uint ) * (ushort*)( param_1 + 0x284 );
               bVar34 = ( byte )(*(ushort*)( param_1 + 0x284 ) >> 8);
            }
 else {
               uVar47 = ( uint )(ushort)(uVar16 << 8 | uVar16 >> 8);
               uVar37 = *(ushort*)( *(long*)( lVar11 + (long)( (int)( uint ) * (byte*)( (long)puVar45 + 1 ) >> ( bVar55 & 0x1f ) ) * 8 ) + ( ulong )(byte) * puVar45 * 2 ) * uVar47 + 0x8000 + ( uint ) * (ushort*)( param_1 + 0x28e ) * ( 0xffff - uVar47 );
               uVar37 = ( uVar37 >> 0x10 ) + uVar37;
               uVar47 = uVar37 >> 0x10;
               if (uVar50 == 0) {
                  uVar47 = ( uint ) * (ushort*)( *(long*)( lVar10 + (long)( (int)( uVar47 & 0xff ) >> ( bVar55 & 0x1f ) ) * 8 ) + ( ulong )(uVar37 >> 0x18) * 2 );
               }

               bVar34 = ( byte )(uVar47 >> 8);
            }

            *(byte*)puVar45 = bVar34;
            puVar48 = puVar45 + 2;
            *(byte*)( (long)puVar45 + 1 ) = (byte)uVar47;
            puVar45 = puVar48;
         }
 while ( puVar48 != (ushort*)( lVar31 + 1 + uVar20 * 4 ) );
         LAB_001054a8:uVar47 = *(uint*)( param_1 + 0x134 );
         LAB_00103d16:if (( uVar47 & 0x602000 ) == 0x2000) {
            if (( uVar47 & 0x80 ) == 0) goto LAB_00103d38;
            goto LAB_00104678;
         }

      }
 else {
         if (bVar34 < 5) {
            if (bVar34 == 0) {
               switch (*(undefined1*)( (long)param_2 + 0x11 )) {
                  case 1:
            if (uVar37 != 0) {
              uVar16 = *(ushort *)(param_1 + 0x2f8);
              uVar47 = 0;
              iVar38 = 7;
              do {
                bVar34 = (byte)iVar38;
                if (((int)(uint)(byte)*puVar45 >> (bVar34 & 0x1f) & 1U) == (uint)uVar16) {
                  *(byte *)puVar45 =
                       (byte)(0x7f7f >> (7 - bVar34 & 0x1f)) & (byte)*puVar45 |
                       (char)*(undefined2 *)(param_1 + 0x284) << (bVar34 & 0x1f);
                }
                if (iVar38 == 0) {
                  puVar45 = (ushort *)((long)puVar45 + 1);
                  iVar38 = 7;
                }
                else {
                  iVar38 = iVar38 + -1;
                }
                uVar47 = uVar47 + 1;
              } while (uVar37 != uVar47);
              goto LAB_00103d10;
            }
            break;
                  case 2:
            if (lVar39 == 0) {
              if (uVar37 != 0) {
                uVar16 = *(ushort *)(param_1 + 0x2f8);
                uVar47 = 0;
                iVar38 = 6;
                do {
                  bVar34 = (byte)iVar38;
                  if (((int)(uint)(byte)*puVar45 >> (bVar34 & 0x1f) & 3U) == (uint)uVar16) {
                    *(byte *)puVar45 =
                         (char)*(undefined2 *)(param_1 + 0x284) << (bVar34 & 0x1f) |
                         (byte)(0x3f3f >> (6 - bVar34 & 0x1f)) & (byte)*puVar45;
                  }
                  if (iVar38 == 0) {
                    puVar45 = (ushort *)((long)puVar45 + 1);
                    iVar38 = 6;
                  }
                  else {
                    iVar38 = iVar38 + -2;
                  }
                  uVar47 = uVar47 + 1;
                } while (uVar37 != uVar47);
                goto LAB_00103d10;
              }
            }
            else if (uVar37 != 0) {
              uVar47 = 0;
              uVar16 = *(ushort *)(param_1 + 0x2f8);
              iVar38 = 6;
              do {
                bVar34 = (byte)iVar38;
                uVar50 = (int)(uint)(byte)*puVar45 >> (bVar34 & 0x1f) & 3;
                if (uVar50 == uVar16) {
                  bVar55 = (char)*(undefined2 *)(param_1 + 0x284) << (bVar34 & 0x1f);
                }
                else {
                  bVar55 = (*(byte *)(lVar39 + (ulong)(uVar50 * 0x55)) >> 6) << (bVar34 & 0x1f);
                }
                *(byte *)puVar45 = (byte)(0x3f3f >> (6 - bVar34 & 0x1f)) & (byte)*puVar45 | bVar55;
                if (iVar38 == 0) {
                  puVar45 = (ushort *)((long)puVar45 + 1);
                  iVar38 = 6;
                }
                else {
                  iVar38 = iVar38 + -2;
                }
                uVar47 = uVar47 + 1;
              } while (uVar37 != uVar47);
              goto LAB_00103d10;
            }
            break;
                  case 4:
            if (lVar39 == 0) {
              if (uVar37 != 0) {
                uVar16 = *(ushort *)(param_1 + 0x2f8);
                uVar47 = 0;
                iVar38 = 4;
                do {
                  bVar34 = (byte)iVar38;
                  if (((int)(uint)(byte)*puVar45 >> (bVar34 & 0x1f) & 0xfU) == (uint)uVar16) {
                    *(byte *)puVar45 =
                         (byte)*puVar45 & (byte)(0xf0f >> (4 - bVar34 & 0x1f)) |
                         (char)*(undefined2 *)(param_1 + 0x284) << (bVar34 & 0x1f);
                  }
                  if (iVar38 == 0) {
                    puVar45 = (ushort *)((long)puVar45 + 1);
                    iVar38 = 4;
                  }
                  else {
                    iVar38 = iVar38 + -4;
                  }
                  uVar47 = uVar47 + 1;
                } while (uVar37 != uVar47);
                goto LAB_00103d10;
              }
            }
            else if (uVar37 != 0) {
              uVar16 = *(ushort *)(param_1 + 0x2f8);
              uVar47 = 0;
              iVar38 = 4;
              do {
                bVar34 = (byte)iVar38;
                uVar50 = (int)(uint)(byte)*puVar45 >> (bVar34 & 0x1f) & 0xf;
                if (uVar50 == uVar16) {
                  bVar55 = (char)*(undefined2 *)(param_1 + 0x284) << (bVar34 & 0x1f);
                }
                else {
                  bVar55 = (*(byte *)(lVar39 + (ulong)(uVar50 * 0x11)) >> 4) << (bVar34 & 0x1f);
                }
                *(byte *)puVar45 = (byte)(0xf0f >> (4 - bVar34 & 0x1f)) & (byte)*puVar45 | bVar55;
                if (iVar38 == 0) {
                  puVar45 = (ushort *)((long)puVar45 + 1);
                  iVar38 = 4;
                }
                else {
                  iVar38 = iVar38 + -4;
                }
                uVar47 = uVar47 + 1;
              } while (uVar37 != uVar47);
              goto LAB_00103d10;
            }
            break;
                  case 8:
            if (lVar39 == 0) {
              if (uVar37 != 0) {
                uVar16 = *(ushort *)(param_1 + 0x2f8);
                do {
                  if ((byte)*puVar45 == uVar16) {
                    *(byte *)puVar45 = (byte)*(undefined2 *)(param_1 + 0x284);
                  }
                  puVar45 = (ushort *)((long)puVar45 + 1);
                } while (puVar45 != (ushort *)(lVar31 + 1 + uVar20));
                goto LAB_00103d10;
              }
            }
            else if (uVar37 != 0) {
              uVar16 = *(ushort *)(param_1 + 0x2f8);
              do {
                if ((byte)*puVar45 == uVar16) {
                  bVar34 = *(byte *)(param_1 + 0x284);
                }
                else {
                  bVar34 = *(byte *)(lVar39 + (ulong)(byte)*puVar45);
                }
                *(byte *)puVar45 = bVar34;
                puVar45 = (ushort *)((long)puVar45 + 1);
              } while (puVar45 != (ushort *)(lVar31 + 1 + uVar20));
              goto LAB_00103d10;
            }
            break;
                  case 0x10:
            if (lVar9 == 0) {
              if (uVar37 != 0) {
                uVar16 = *(ushort *)(param_1 + 0x2f8);
                do {
                  if ((ushort)(*puVar45 << 8 | *puVar45 >> 8) == uVar16) {
                    uVar14 = *(undefined2 *)(param_1 + 0x284);
                    *(byte *)puVar45 = (byte)((ushort)uVar14 >> 8);
                    *(byte *)((long)puVar45 + 1) = (byte)uVar14;
                  }
                  puVar45 = puVar45 + 1;
                } while (puVar45 != (ushort *)(lVar31 + 1 + uVar20 * 2));
LAB_001059d1:
                uVar47 = *(uint *)(param_1 + 0x134);
                goto LAB_00103d16;
              }
            }
            else if (uVar37 != 0) {
              uVar16 = *(ushort *)(param_1 + 0x2f8);
              do {
                if ((ushort)(*puVar45 << 8 | *puVar45 >> 8) == uVar16) {
                  uVar14 = *(undefined2 *)(param_1 + 0x284);
                  bVar34 = (byte)((ushort)uVar14 >> 8);
                }
                else {
                  uVar14 = *(undefined2 *)
                            (*(long *)(lVar9 + (long)((int)(uint)*(byte *)((long)puVar45 + 1) >>
                                                     (bVar55 & 0x1f)) * 8) +
                            (ulong)(byte)*puVar45 * 2);
                  bVar34 = (byte)((ushort)uVar14 >> 8);
                }
                *(byte *)((long)puVar45 + 1) = (byte)uVar14;
                puVar48 = puVar45 + 1;
                *(byte *)puVar45 = bVar34;
                puVar45 = puVar48;
              } while (puVar48 != (ushort *)(lVar31 + 1 + uVar20 * 2));
LAB_001056e8:
              uVar47 = *(uint *)(param_1 + 0x134);
              goto LAB_00103d16;
            }
               }

            }
 else if (bVar34 == 2) {
               if (*(char*)( (long)param_2 + 0x11 ) == '\b') {
                  if (lVar39 == 0) {
                     if (uVar37 != 0) {
                        uVar16 = *(ushort*)( param_1 + 0x2f2 );
                        do {
                           if (( ( ( byte ) * puVar45 == uVar16 ) && ( ( ushort ) * (byte*)( (long)puVar45 + 1 ) == *(ushort*)( param_1 + 0x2f4 ) ) ) && ( (ushort)(byte)puVar45[1] == *(ushort*)( param_1 + 0x2f6 ) )) {
                              *(byte*)puVar45 = ( byte ) * (undefined2*)( param_1 + 0x27e );
                              *(byte*)( (long)puVar45 + 1 ) = ( byte ) * (undefined2*)( param_1 + 0x280 );
                              *(byte*)( puVar45 + 1 ) = ( byte ) * (undefined2*)( param_1 + 0x282 );
                           }

                           puVar45 = (ushort*)( (long)puVar45 + 3 );
                        }
 while ( puVar45 != (ushort*)( uVar20 * 3 + 1 + lVar31 ) );
                        goto LAB_00103d10;
                     }

                  }
 else if (uVar37 != 0) {
                     uVar16 = *(ushort*)( param_1 + 0x2f2 );
                     do {
                        if (( ( ( byte ) * puVar45 == uVar16 ) && ( ( ushort ) * (byte*)( (long)puVar45 + 1 ) == *(ushort*)( param_1 + 0x2f4 ) ) ) && ( (ushort)(byte)puVar45[1] == *(ushort*)( param_1 + 0x2f6 ) )) {
                           *(byte*)puVar45 = ( byte ) * (undefined2*)( param_1 + 0x27e );
                           *(byte*)( (long)puVar45 + 1 ) = ( byte ) * (undefined2*)( param_1 + 0x280 );
                           bVar34 = *(byte*)( param_1 + 0x282 );
                        }
 else {
                           *(byte*)puVar45 = *(byte*)( lVar39 + ( ulong )(byte) * puVar45 );
                           *(byte*)( (long)puVar45 + 1 ) = *(byte*)( lVar39 + ( ulong ) * (byte*)( (long)puVar45 + 1 ) );
                           bVar34 = *(byte*)( lVar39 + (ulong)(byte)puVar45[1] );
                        }

                        *(byte*)( puVar45 + 1 ) = bVar34;
                        puVar45 = (ushort*)( (long)puVar45 + 3 );
                     }
 while ( puVar45 != (ushort*)( uVar20 * 3 + 1 + lVar31 ) );
                     goto LAB_00103d10;
                  }

               }
 else if (lVar9 == 0) {
                  if (uVar37 != 0) {
                     uVar16 = *(ushort*)( param_1 + 0x2f2 );
                     do {
                        if (( ( ( ushort )(*puVar45 << 8 | *puVar45 >> 8) == uVar16 ) && ( ( ushort )(puVar45[1] << 8 | puVar45[1] >> 8) == *(ushort*)( param_1 + 0x2f4 ) ) ) && ( ( ushort )(puVar45[2] << 8 | puVar45[2] >> 8) == *(ushort*)( param_1 + 0x2f6 ) )) {
                           uVar14 = *(undefined2*)( param_1 + 0x27e );
                           *(byte*)puVar45 = ( byte )((ushort)uVar14 >> 8);
                           *(byte*)( (long)puVar45 + 1 ) = (byte)uVar14;
                           uVar14 = *(undefined2*)( param_1 + 0x280 );
                           *(byte*)( puVar45 + 1 ) = ( byte )((ushort)uVar14 >> 8);
                           *(byte*)( (long)puVar45 + 3 ) = (byte)uVar14;
                           uVar14 = *(undefined2*)( param_1 + 0x282 );
                           *(byte*)( puVar45 + 2 ) = ( byte )((ushort)uVar14 >> 8);
                           *(byte*)( (long)puVar45 + 5 ) = (byte)uVar14;
                        }

                        puVar45 = puVar45 + 3;
                     }
 while ( puVar45 != (ushort*)( lVar31 + 1 + uVar20 * 6 ) );
                     goto LAB_001059d1;
                  }

               }
 else if (uVar37 != 0) {
                  uVar16 = *(ushort*)( param_1 + 0x2f2 );
                  do {
                     if (( ( ( ushort )(*puVar45 << 8 | *puVar45 >> 8) == uVar16 ) && ( ( ushort )(puVar45[1] << 8 | puVar45[1] >> 8) == *(ushort*)( param_1 + 0x2f4 ) ) ) && ( ( ushort )(puVar45[2] << 8 | puVar45[2] >> 8) == *(ushort*)( param_1 + 0x2f6 ) )) {
                        uVar14 = *(undefined2*)( param_1 + 0x27e );
                        *(byte*)puVar45 = ( byte )((ushort)uVar14 >> 8);
                        *(byte*)( (long)puVar45 + 1 ) = (byte)uVar14;
                        uVar14 = *(undefined2*)( param_1 + 0x280 );
                        *(byte*)( puVar45 + 1 ) = ( byte )((ushort)uVar14 >> 8);
                        *(byte*)( (long)puVar45 + 3 ) = (byte)uVar14;
                        uVar14 = *(undefined2*)( param_1 + 0x282 );
                        bVar34 = ( byte )((ushort)uVar14 >> 8);
                     }
 else {
                        uVar14 = *(undefined2*)( *(long*)( lVar9 + (long)( (int)( uint ) * (byte*)( (long)puVar45 + 1 ) >> ( bVar55 & 0x1f ) ) * 8 ) + ( ulong )(byte) * puVar45 * 2 );
                        *(byte*)( (long)puVar45 + 1 ) = (byte)uVar14;
                        *(byte*)puVar45 = ( byte )((ushort)uVar14 >> 8);
                        uVar14 = *(undefined2*)( *(long*)( lVar9 + (long)( (int)( uint ) * (byte*)( (long)puVar45 + 3 ) >> ( bVar55 & 0x1f ) ) * 8 ) + (ulong)(byte)puVar45[1] * 2 );
                        *(byte*)( (long)puVar45 + 3 ) = (byte)uVar14;
                        *(byte*)( puVar45 + 1 ) = ( byte )((ushort)uVar14 >> 8);
                        uVar14 = *(undefined2*)( *(long*)( lVar9 + (long)( (int)( uint ) * (byte*)( (long)puVar45 + 5 ) >> ( bVar55 & 0x1f ) ) * 8 ) + (ulong)(byte)puVar45[2] * 2 );
                        bVar34 = ( byte )((ushort)uVar14 >> 8);
                     }

                     *(byte*)( puVar45 + 2 ) = bVar34;
                     puVar48 = puVar45 + 3;
                     *(byte*)( (long)puVar45 + 5 ) = (byte)uVar14;
                     puVar45 = puVar48;
                  }
 while ( puVar48 != (ushort*)( lVar31 + 1 + uVar20 * 6 ) );
                  uVar47 = *(uint*)( param_1 + 0x134 );
                  goto LAB_00103d16;
               }

            }

         }
 else if (bVar34 == 6) {
            if (*(char*)( (long)param_2 + 0x11 ) == '\b') {
               if (( lVar8 == 0 || lVar26 == 0 ) || ( lVar39 == 0 )) {
                  if (uVar37 != 0) {
                     do {
                        bVar34 = *(byte*)( (long)puVar45 + 3 );
                        if (bVar34 == 0) {
                           *(byte*)puVar45 = ( byte ) * (undefined2*)( param_1 + 0x27e );
                           *(byte*)( (long)puVar45 + 1 ) = ( byte ) * (undefined2*)( param_1 + 0x280 );
                           *(byte*)( puVar45 + 1 ) = ( byte ) * (undefined2*)( param_1 + 0x282 );
                        }
 else if (bVar34 != 0xff) {
                           iVar38 = 0xff - (uint)bVar34;
                           uVar47 = ( ushort )((ushort)bVar34 * ( ushort )(byte) * puVar45) + 0x80 + ( uint ) * (ushort*)( param_1 + 0x27e ) * iVar38;
                           uVar16 = *(ushort*)( param_1 + 0x280 );
                           *(byte*)puVar45 = ( byte )(uVar47 + ( uVar47 >> 8 & 0xff ) >> 8);
                           sVar5 = *(short*)( param_1 + 0x282 );
                           uVar47 = ( ushort )((ushort)bVar34 * ( ushort ) * (byte*)( (long)puVar45 + 1 )) + 0x80 + (uint)uVar16 * iVar38;
                           *(byte*)( (long)puVar45 + 1 ) = ( byte )(uVar47 + ( uVar47 >> 8 & 0xff ) >> 8);
                           uVar47 = ( ushort )((ushort)bVar34 * (ushort)(byte)puVar45[1]) + 0x80 + ( uint )(ushort)((short)iVar38 * sVar5);
                           *(byte*)( puVar45 + 1 ) = ( byte )(uVar47 + ( uVar47 >> 8 & 0xff ) >> 8);
                        }

                        puVar45 = puVar45 + 2;
                     }
 while ( puVar45 != (ushort*)( lVar31 + 1 + uVar20 * 4 ) );
                     goto LAB_001056e8;
                  }

               }
 else if (uVar37 != 0) {
                  do {
                     bVar34 = *(byte*)( (long)puVar45 + 3 );
                     if (bVar34 == 0xff) {
                        *(byte*)puVar45 = *(byte*)( lVar39 + ( ulong )(byte) * puVar45 );
                        *(byte*)( (long)puVar45 + 1 ) = *(byte*)( lVar39 + ( ulong ) * (byte*)( (long)puVar45 + 1 ) );
                        bVar34 = *(byte*)( lVar39 + (ulong)(byte)puVar45[1] );
                     }
 else if (bVar34 == 0) {
                        bVar34 = *(byte*)( param_1 + 0x282 );
                        *(byte*)puVar45 = ( byte ) * (undefined2*)( param_1 + 0x27e );
                        *(byte*)( (long)puVar45 + 1 ) = ( byte ) * (undefined2*)( param_1 + 0x280 );
                     }
 else {
                        iVar19 = 0xff - (uint)bVar34;
                        uVar47 = ( ushort )((ushort)bVar34 * ( ushort ) * (byte*)( lVar8 + ( ulong )(byte) * puVar45 )) + 0x80 + ( uint ) * (ushort*)( param_1 + 0x288 ) * iVar19;
                        iVar38 = ( uVar47 >> 8 & 0xff ) + ( uVar47 & 0xffff );
                        bVar55 = ( byte )((uint)iVar38 >> 8);
                        if (uVar50 == 0) {
                           bVar55 = *(byte*)( lVar26 + ( ulong )(iVar38 >> 8 & 0xff) );
                        }

                        *(byte*)puVar45 = bVar55;
                        uVar47 = ( ushort )((ushort)bVar34 * ( ushort ) * (byte*)( lVar8 + ( ulong ) * (byte*)( (long)puVar45 + 1 ) )) + 0x80 + ( uint ) * (ushort*)( param_1 + 0x28a ) * iVar19;
                        iVar38 = ( uVar47 >> 8 & 0xff ) + ( uVar47 & 0xffff );
                        bVar55 = ( byte )((uint)iVar38 >> 8);
                        if (uVar50 == 0) {
                           bVar55 = *(byte*)( lVar26 + ( ulong )(iVar38 >> 8 & 0xff) );
                        }

                        sVar5 = *(short*)( param_1 + 0x28c );
                        *(byte*)( (long)puVar45 + 1 ) = bVar55;
                        uVar47 = ( ushort )((ushort)bVar34 * ( ushort ) * (byte*)( lVar8 + (ulong)(byte)puVar45[1] )) + 0x80 + ( uint )(ushort)((short)iVar19 * sVar5);
                        iVar38 = ( uVar47 & 0xffff ) + ( uVar47 >> 8 & 0xff );
                        bVar34 = ( byte )((uint)iVar38 >> 8);
                        if (uVar50 == 0) {
                           bVar34 = *(byte*)( lVar26 + ( ulong )(iVar38 >> 8 & 0xff) );
                        }

                     }

                     *(byte*)( puVar45 + 1 ) = bVar34;
                     puVar45 = puVar45 + 2;
                  }
 while ( puVar45 != (ushort*)( lVar31 + 1 + uVar20 * 4 ) );
                  goto LAB_00103d10;
               }

            }
 else if (( lVar9 == 0 || lVar10 == 0 ) || ( lVar11 == 0 )) {
               if (uVar37 != 0) {
                  do {
                     uVar16 = puVar45[3];
                     if (uVar16 == 0) {
                        uVar14 = *(undefined2*)( param_1 + 0x27e );
                        *(byte*)puVar45 = ( byte )((ushort)uVar14 >> 8);
                        *(byte*)( (long)puVar45 + 1 ) = (byte)uVar14;
                        uVar14 = *(undefined2*)( param_1 + 0x280 );
                        *(byte*)( puVar45 + 1 ) = ( byte )((ushort)uVar14 >> 8);
                        *(byte*)( (long)puVar45 + 3 ) = (byte)uVar14;
                        uVar14 = *(undefined2*)( param_1 + 0x282 );
                        *(byte*)( puVar45 + 2 ) = ( byte )((ushort)uVar14 >> 8);
                        *(byte*)( (long)puVar45 + 5 ) = (byte)uVar14;
                     }
 else if (uVar16 != 0xffff) {
                        uVar17 = uVar16 << 8 | uVar16 >> 8;
                        iVar19 = 0xffff - (uint)uVar17;
                        uVar47 = ( uint )(ushort)(*puVar45 << 8 | *puVar45 >> 8) * (uint)uVar17 + 0x8000 + ( uint ) * (ushort*)( param_1 + 0x27e ) * iVar19;
                        iVar38 = ( uVar47 >> 0x10 ) + uVar47;
                        *(byte*)puVar45 = ( byte )((uint)iVar38 >> 0x18);
                        uVar16 = *(ushort*)( param_1 + 0x280 );
                        *(byte*)( (long)puVar45 + 1 ) = ( byte )((uint)iVar38 >> 0x10);
                        uVar47 = (uint)uVar16 * iVar19 + 0x8000 + ( uint )(ushort)(puVar45[1] << 8 | puVar45[1] >> 8) * (uint)uVar17;
                        iVar38 = ( uVar47 >> 0x10 ) + uVar47;
                        *(byte*)( puVar45 + 1 ) = ( byte )((uint)iVar38 >> 0x18);
                        uVar16 = *(ushort*)( param_1 + 0x282 );
                        *(byte*)( (long)puVar45 + 3 ) = ( byte )((uint)iVar38 >> 0x10);
                        uVar47 = (uint)uVar16 * iVar19 + 0x8000 + ( uint )(ushort)(puVar45[2] << 8 | puVar45[2] >> 8) * (uint)uVar17;
                        iVar38 = ( uVar47 >> 0x10 ) + uVar47;
                        *(byte*)( puVar45 + 2 ) = ( byte )((uint)iVar38 >> 0x18);
                        *(byte*)( (long)puVar45 + 5 ) = ( byte )((uint)iVar38 >> 0x10);
                     }

                     puVar45 = puVar45 + 4;
                  }
 while ( puVar45 != (ushort*)( lVar31 + 1 + uVar20 * 8 ) );
                  goto LAB_00103d10;
               }

            }
 else if (uVar37 != 0) {
               do {
                  uVar16 = puVar45[3];
                  if (uVar16 == 0xffff) {
                     uVar14 = *(undefined2*)( *(long*)( lVar9 + (long)( (int)( uint ) * (byte*)( (long)puVar45 + 1 ) >> ( bVar55 & 0x1f ) ) * 8 ) + ( ulong )(byte) * puVar45 * 2 );
                     *(byte*)puVar45 = ( byte )((ushort)uVar14 >> 8);
                     *(byte*)( (long)puVar45 + 1 ) = (byte)uVar14;
                     uVar14 = *(undefined2*)( *(long*)( lVar9 + (long)( (int)( uint ) * (byte*)( (long)puVar45 + 3 ) >> ( bVar55 & 0x1f ) ) * 8 ) + (ulong)(byte)puVar45[1] * 2 );
                     *(byte*)( puVar45 + 1 ) = ( byte )((ushort)uVar14 >> 8);
                     *(byte*)( (long)puVar45 + 3 ) = (byte)uVar14;
                     uVar16 = *(ushort*)( *(long*)( lVar9 + (long)( (int)( uint ) * (byte*)( (long)puVar45 + 5 ) >> ( bVar55 & 0x1f ) ) * 8 ) + (ulong)(byte)puVar45[2] * 2 );
                     uVar37 = (uint)uVar16;
                     bVar34 = ( byte )(uVar16 >> 8);
                  }
 else if (uVar16 == 0) {
                     uVar14 = *(undefined2*)( param_1 + 0x27e );
                     *(byte*)puVar45 = ( byte )((ushort)uVar14 >> 8);
                     *(byte*)( (long)puVar45 + 1 ) = (byte)uVar14;
                     uVar14 = *(undefined2*)( param_1 + 0x280 );
                     *(byte*)( puVar45 + 1 ) = ( byte )((ushort)uVar14 >> 8);
                     *(byte*)( (long)puVar45 + 3 ) = (byte)uVar14;
                     uVar37 = ( uint ) * (ushort*)( param_1 + 0x282 );
                     bVar34 = ( byte )(*(ushort*)( param_1 + 0x282 ) >> 8);
                  }
 else {
                     uVar16 = uVar16 << 8 | uVar16 >> 8;
                     iVar38 = 0xffff - (uint)uVar16;
                     uVar47 = ( uint ) * (ushort*)( *(long*)( lVar11 + (long)( (int)( uint ) * (byte*)( (long)puVar45 + 1 ) >> ( bVar55 & 0x1f ) ) * 8 ) + ( ulong )(byte) * puVar45 * 2 ) * (uint)uVar16 + 0x8000 + ( uint ) * (ushort*)( param_1 + 0x288 ) * iVar38;
                     uVar47 = ( uVar47 >> 0x10 ) + uVar47;
                     uVar14 = ( undefined2 )(uVar47 >> 0x10);
                     if (uVar50 == 0) {
                        uVar14 = *(undefined2*)( *(long*)( lVar10 + (long)( (int)( uVar47 >> 0x10 & 0xff ) >> ( bVar55 & 0x1f ) ) * 8 ) + ( ulong )(uVar47 >> 0x18) * 2 );
                     }

                     *(byte*)( (long)puVar45 + 1 ) = (byte)uVar14;
                     *(byte*)puVar45 = ( byte )((ushort)uVar14 >> 8);
                     uVar47 = ( uint ) * (ushort*)( *(long*)( lVar11 + (long)( (int)( uint ) * (byte*)( (long)puVar45 + 3 ) >> ( bVar55 & 0x1f ) ) * 8 ) + (ulong)(byte)puVar45[1] * 2 ) * (uint)uVar16 + 0x8000 + ( uint ) * (ushort*)( param_1 + 0x28a ) * iVar38;
                     uVar47 = ( uVar47 >> 0x10 ) + uVar47;
                     uVar14 = ( undefined2 )(uVar47 >> 0x10);
                     if (uVar50 == 0) {
                        uVar14 = *(undefined2*)( *(long*)( lVar10 + (long)( (int)( uVar47 >> 0x10 & 0xff ) >> ( bVar55 & 0x1f ) ) * 8 ) + ( ulong )(uVar47 >> 0x18) * 2 );
                     }

                     *(byte*)( (long)puVar45 + 3 ) = (byte)uVar14;
                     *(byte*)( puVar45 + 1 ) = ( byte )((ushort)uVar14 >> 8);
                     uVar47 = ( uint ) * (ushort*)( *(long*)( lVar11 + (long)( (int)( uint ) * (byte*)( (long)puVar45 + 5 ) >> ( bVar55 & 0x1f ) ) * 8 ) + (ulong)(byte)puVar45[2] * 2 ) * (uint)uVar16 + 0x8000 + ( uint ) * (ushort*)( param_1 + 0x28c ) * iVar38;
                     uVar47 = ( uVar47 >> 0x10 ) + uVar47;
                     uVar37 = uVar47 >> 0x10;
                     if (uVar50 == 0) {
                        uVar37 = ( uint ) * (ushort*)( *(long*)( lVar10 + (long)( (int)( uVar37 & 0xff ) >> ( bVar55 & 0x1f ) ) * 8 ) + ( ulong )(uVar47 >> 0x18) * 2 );
                     }

                     bVar34 = ( byte )(uVar37 >> 8);
                  }

                  *(byte*)( puVar45 + 2 ) = bVar34;
                  puVar48 = puVar45 + 4;
                  *(byte*)( (long)puVar45 + 5 ) = (byte)uVar37;
                  puVar45 = puVar48;
               }
 while ( puVar48 != (ushort*)( lVar31 + 1 + uVar20 * 8 ) );
               goto LAB_001054a8;
            }

         }

         switchD_0010432d_caseD_0:if (( uVar47 & 0x602000 ) == 0x2000) {
            LAB_00104678:if (( *(short*)( param_1 + 0x260 ) == 0 ) && ( bVar34 = *(byte*)( param_1 + 0x267 )(bVar34 & 4) == 0 )) goto LAB_00103d3f;
            goto LAB_00103df0;
         }

      }

      LAB_00103df6:if (( ( ~uVar47 & 0x40080 ) == 0 ) && ( ( param_2[4] & 0xfd ) == 4 )) {
         lVar26 = *(long*)( param_1 + 0x228 );
         LAB_00103e1b:png_do_strip_channel(param_2, lVar26 + 1, 0);
         goto LAB_00103e29;
      }

      LAB_001031fb:if (( uVar47 & 0x800000 ) != 0) goto LAB_00103340;
      joined_r0x00103388:if (( uVar47 & 0x4000000 ) != 0) {
         if (*(char*)( (long)param_2 + 0x11 ) == '\x10') {
            pbVar29 = *(byte**)( param_1 + 0x228 );
            LAB_001033a1:pbVar29 = pbVar29 + 1;
            pbVar49 = pbVar29 + *(long*)( param_2 + 2 );
            pbVar22 = pbVar29;
            for (; pbVar29 < pbVar49; pbVar29 = pbVar29 + 2) {
               *pbVar22 = *pbVar29 + (char)( ( ( (uint)pbVar29[1] - ( uint ) * pbVar29 ) + 0x80 ) * 0xffff >> 0x18 );
               pbVar22 = pbVar22 + 1;
            }

            uVar47 = *(uint*)( param_1 + 0x134 );
            *(undefined1*)( (long)param_2 + 0x11 ) = 8;
            *(byte*)( (long)param_2 + 0x13 ) = *(byte*)( (long)param_2 + 0x12 ) * '\b';
            *(ulong*)( param_2 + 2 ) = ( ulong )(( uint ) * (byte*)( (long)param_2 + 0x12 ) * *param_2);
         }

         goto joined_r0x00103223;
      }

      if (( ( uVar47 & 0x400 ) == 0 ) || ( pbVar29 = *(byte**)( param_1 + 0x228 ) * (char*)( (long)param_2 + 0x11 ) != '\x10' )) goto joined_r0x00103223;
      LAB_001038f1:lVar31 = *(long*)( param_2 + 2 );
      pbVar22 = pbVar29 + 1;
      if (pbVar22 < pbVar22 + lVar31) {
         uVar20 = 0;
         do {
            pbVar29[uVar20 + 1] = pbVar29[uVar20 * 2 + 1];
            bVar58 = uVar20 != ( ulong )(pbVar22 + lVar31 + ( -2 - (long)pbVar29 )) >> 1;
            uVar20 = uVar20 + 1;
         }
 while ( bVar58 );
         uVar47 = *(uint*)( param_1 + 0x134 );
      }

      *(undefined1*)( (long)param_2 + 0x11 ) = 8;
      *(byte*)( (long)param_2 + 0x13 ) = *(byte*)( (long)param_2 + 0x12 ) * '\b';
      uVar37 = *param_2;
      *(ulong*)( param_2 + 2 ) = ( ulong )(*(byte*)( (long)param_2 + 0x12 ) * uVar37);
      if (( uVar47 & 0x40 ) != 0) {
         lVar31 = *(long*)( param_1 + 0x228 );
         lVar39 = *(long*)( param_1 + 0x380 );
         lVar26 = *(long*)( param_1 + 0x378 );
         goto LAB_001041f4;
      }

      if (( uVar47 & 0x200 ) != 0) goto LAB_00103443;
   }
 else {
      png_do_gray_to_rgb(param_2, *(long*)( param_1 + 0x228 ) + 1);
      uVar47 = *(uint*)( param_1 + 0x134 );
      if (( uVar47 & 0x80 ) != 0) goto LAB_001034e0;
      LAB_001031e9:if (( uVar47 & 0x602000 ) != 0x2000) goto LAB_001031fb;
      LAB_00103d38:bVar34 = *(byte*)( param_1 + 0x267 );
      LAB_00103d3f:if (bVar34 == 3) {
         LAB_00103df0:uVar47 = *(uint*)( param_1 + 0x134 );
         goto LAB_00103df6;
      }

      lVar26 = *(long*)( param_1 + 0x228 );
      bVar34 = *(byte*)( (long)param_2 + 0x11 );
      lVar31 = *(long*)( param_1 + 0x2a8 );
      lVar39 = *(long*)( param_1 + 0x2b0 );
      uVar47 = *param_2;
      uVar20 = (ulong)uVar47;
      pbVar29 = (byte*)( lVar26 + 1 );
      bVar55 = ( byte ) * (undefined4*)( param_1 + 0x2a0 );
      if (8 < bVar34) {
         if (( lVar39 != 0 ) && ( bVar34 == 0x10 )) {
            bVar34 = (byte)param_2[4];
            if (bVar34 == 4) {
               LAB_00105c90:if (uVar47 == 0) goto LAB_00105f85;
               do {
                  pbVar22 = pbVar29 + 4;
                  uVar14 = *(undefined2*)( *(long*)( lVar39 + (long)( (int)(uint)pbVar29[1] >> ( bVar55 & 0x1f ) ) * 8 ) + ( ulong ) * pbVar29 * 2 );
                  *pbVar29 = ( byte )((ushort)uVar14 >> 8);
                  pbVar29[1] = (byte)uVar14;
                  pbVar29 = pbVar22;
               }
 while ( pbVar22 != (byte*)( lVar26 + 1 + uVar20 * 4 ) );
            }
 else if (bVar34 < 5) {
               if (bVar34 == 0) {
                  if (uVar47 != 0) {
                     LAB_00105fb1:do {
                        pbVar22 = pbVar29 + 2;
                        uVar14 = *(undefined2*)( *(long*)( lVar39 + (long)( (int)(uint)pbVar29[1] >> ( bVar55 & 0x1f ) ) * 8 ) + ( ulong ) * pbVar29 * 2 );
                        *pbVar29 = ( byte )((ushort)uVar14 >> 8);
                        pbVar29[1] = (byte)uVar14;
                        pbVar29 = pbVar22;
                     }
 while ( pbVar22 != (byte*)( lVar26 + 1 + uVar20 * 2 ) );
                  }

               }
 else if (bVar34 == 2) goto LAB_001043ea;
            }
 else if (bVar34 == 6) {
               LAB_00105be8:if (uVar47 == 0) goto LAB_00105f85;
               do {
                  pbVar22 = pbVar29 + 8;
                  uVar14 = *(undefined2*)( *(long*)( lVar39 + (long)( (int)(uint)pbVar29[1] >> ( bVar55 & 0x1f ) ) * 8 ) + ( ulong ) * pbVar29 * 2 );
                  *pbVar29 = ( byte )((ushort)uVar14 >> 8);
                  pbVar29[1] = (byte)uVar14;
                  uVar14 = *(undefined2*)( *(long*)( lVar39 + (long)( (int)(uint)pbVar29[3] >> ( bVar55 & 0x1f ) ) * 8 ) + (ulong)pbVar29[2] * 2 );
                  pbVar29[2] = ( byte )((ushort)uVar14 >> 8);
                  pbVar29[3] = (byte)uVar14;
                  uVar14 = *(undefined2*)( *(long*)( lVar39 + (long)( (int)(uint)pbVar29[5] >> ( bVar55 & 0x1f ) ) * 8 ) + (ulong)pbVar29[4] * 2 );
                  pbVar29[4] = ( byte )((ushort)uVar14 >> 8);
                  pbVar29[5] = (byte)uVar14;
                  pbVar29 = pbVar22;
               }
 while ( pbVar22 != (byte*)( lVar26 + 1 + uVar20 * 8 ) );
            }

         }

         goto LAB_00103df0;
      }

      if (lVar31 == 0) goto LAB_00103df0;
      bVar36 = (byte)param_2[4];
      if (bVar36 != 2) {
         if (bVar36 < 3) {
            if (bVar36 == 0) {
               if (bVar34 == 2) {
                  if (uVar47 != 0) {
                     uVar37 = 0;
                     pbVar22 = pbVar29;
                     do {
                        bVar34 = *pbVar22;
                        uVar37 = uVar37 + 4;
                        uVar50 = bVar34 & 0xc0;
                        uVar57 = bVar34 & 0x30;
                        uVar56 = bVar34 & 0xc;
                        *pbVar22 = *(byte*)( lVar31 + ( ulong )(( bVar34 & 3 ) * 0x55) ) >> 6 | *(byte*)( lVar31 + (int)( (int)uVar57 >> 4 | (int)uVar57 >> 2 | uVar57 * 5 ) ) >> 2 & 0x30 | *(byte*)( lVar31 + (int)( (int)uVar50 >> 2 | (int)uVar50 >> 4 | uVar50 | (int)uVar50 >> 6 ) ) & 0xc0 | *(byte*)( lVar31 + (int)( (int)uVar56 >> 2 | uVar56 | uVar56 * 0x14 ) ) >> 4 & 0xc;
                        pbVar22 = pbVar22 + 1;
                     }
 while ( uVar37 < uVar47 );
                     cVar13 = *(char*)( (long)param_2 + 0x11 );
                     if (cVar13 == '\x04') {
                        LAB_00105ad7:uVar37 = 0;
                        do {
                           uVar37 = uVar37 + 2;
                           uVar50 = *pbVar29 & 0xf0;
                           *pbVar29 = *(byte*)( lVar31 + (int)( (int)uVar50 >> 4 | uVar50 ) ) & 0xf0 | *(byte*)( lVar31 + ( ulong )(( *pbVar29 & 0xf ) * 0x11) ) >> 4;
                           pbVar29 = pbVar29 + 1;
                        }
 while ( uVar37 < uVar47 );
                     }
 else {
                        if (cVar13 == '\b') goto LAB_00106017;
                        if (cVar13 == '\x10') goto LAB_00105fb1;
                     }

                  }

               }
 else if (bVar34 == 4) {
                  if (uVar47 != 0) goto LAB_00105ad7;
               }
 else if (( bVar34 == 8 ) && ( uVar47 != 0 )) {
                  LAB_00106017:do {
                     pbVar22 = pbVar29 + 1;
                     *pbVar29 = *(byte*)( lVar31 + ( ulong ) * pbVar29 );
                     pbVar29 = pbVar22;
                  }
 while ( pbVar22 != (byte*)( lVar26 + 1 + uVar20 ) );
               }

            }

            goto LAB_00103df0;
         }

         if (bVar36 != 4) {
            if (bVar36 == 6) {
               if (bVar34 != 8) goto LAB_00105be8;
               if (uVar47 == 0) goto LAB_00105f85;
               do {
                  pbVar22 = pbVar29 + 4;
                  *pbVar29 = *(byte*)( lVar31 + ( ulong ) * pbVar29 );
                  pbVar29[1] = *(byte*)( lVar31 + (ulong)pbVar29[1] );
                  pbVar29[2] = *(byte*)( lVar31 + (ulong)pbVar29[2] );
                  pbVar29 = pbVar22;
               }
 while ( pbVar22 != (byte*)( lVar26 + 1 + uVar20 * 4 ) );
            }

            goto LAB_00103df0;
         }

         if (bVar34 != 8) goto LAB_00105c90;
         if (uVar47 != 0) {
            do {
               pbVar22 = pbVar29 + 2;
               *pbVar29 = *(byte*)( lVar31 + ( ulong ) * pbVar29 );
               pbVar29 = pbVar22;
            }
 while ( pbVar22 != (byte*)( lVar26 + 1 + uVar20 * 2 ) );
            goto LAB_00103df0;
         }

         LAB_00105f85:uVar47 = *(uint*)( param_1 + 0x134 );
         if (( ~uVar47 & 0x40080 ) != 0) goto LAB_001031fb;
         goto LAB_00103e1b;
      }

      if (bVar34 == 8) {
         if (uVar47 != 0) {
            do {
               pbVar22 = pbVar29 + 3;
               *pbVar29 = *(byte*)( lVar31 + ( ulong ) * pbVar29 );
               pbVar29[1] = *(byte*)( lVar31 + (ulong)pbVar29[1] );
               pbVar29[2] = *(byte*)( lVar31 + (ulong)pbVar29[2] );
               pbVar29 = pbVar22;
            }
 while ( pbVar22 != (byte*)( uVar20 * 3 + 1 + lVar26 ) );
            goto LAB_00103df0;
         }

      }
 else {
         LAB_001043ea:if (uVar47 != 0) {
            do {
               pbVar22 = pbVar29 + 6;
               uVar14 = *(undefined2*)( *(long*)( lVar39 + (long)( (int)(uint)pbVar29[1] >> ( bVar55 & 0x1f ) ) * 8 ) + ( ulong ) * pbVar29 * 2 );
               *pbVar29 = ( byte )((ushort)uVar14 >> 8);
               pbVar29[1] = (byte)uVar14;
               uVar14 = *(undefined2*)( *(long*)( lVar39 + (long)( (int)(uint)pbVar29[3] >> ( bVar55 & 0x1f ) ) * 8 ) + (ulong)pbVar29[2] * 2 );
               pbVar29[2] = ( byte )((ushort)uVar14 >> 8);
               pbVar29[3] = (byte)uVar14;
               uVar14 = *(undefined2*)( *(long*)( lVar39 + (long)( (int)(uint)pbVar29[5] >> ( bVar55 & 0x1f ) ) * 8 ) + (ulong)pbVar29[4] * 2 );
               pbVar29[4] = ( byte )((ushort)uVar14 >> 8);
               pbVar29[5] = (byte)uVar14;
               pbVar29 = pbVar22;
            }
 while ( pbVar22 != (byte*)( lVar26 + 1 + uVar20 * 6 ) );
            goto LAB_00103df0;
         }

      }

      LAB_00103e29:uVar47 = *(uint*)( param_1 + 0x134 );
      if (( uVar47 & 0x800000 ) == 0) goto joined_r0x00103388;
      LAB_00103340:uVar37 = param_2[4];
      if (( uVar37 & 4 ) == 0) goto joined_r0x00103388;
      pbVar29 = *(byte**)( param_1 + 0x228 );
      uVar50 = *param_2;
      if (*(char*)( (long)param_2 + 0x11 ) == '\b') {
         lVar31 = *(long*)( param_1 + 0x2b8 );
         if (lVar31 == 0) goto LAB_0010336d;
         if (uVar50 == 0) goto joined_r0x00103388;
         do {
            pbVar29 = pbVar29 + ( -(ulong)((uVar37 & 2) == 0) & 0xfffffffffffffffe ) + 4;
            *pbVar29 = *(byte*)( lVar31 + ( ulong ) * pbVar29 );
            uVar50 = uVar50 - 1;
         }
 while ( uVar50 != 0 );
         LAB_0010337c:uVar47 = *(uint*)( param_1 + 0x134 );
         goto joined_r0x00103388;
      }

      if (( *(char*)( (long)param_2 + 0x11 ) != '\x10' ) || ( lVar31 = lVar31 == 0 )) {
         LAB_0010336d:png_warning(param_1, "png_do_encode_alpha: unexpected call");
         goto LAB_0010337c;
      }

      uVar7 = *(undefined4*)( param_1 + 0x2a0 );
      uVar20 = -(ulong)((uVar37 & 2) == 0) & 0xfffffffffffffffc;
      pbVar22 = pbVar29 + uVar20 + 7;
      if (uVar50 != 0) {
         do {
            uVar14 = *(undefined2*)( *(long*)( lVar31 + (long)( (int)(uint)pbVar22[1] >> ( (byte)uVar7 & 0x1f ) ) * 8 ) + ( ulong ) * pbVar22 * 2 );
            *pbVar22 = ( byte )((ushort)uVar14 >> 8);
            pbVar22[1] = (byte)uVar14;
            pbVar22 = pbVar22 + uVar20 + 8;
            uVar50 = uVar50 - 1;
         }
 while ( uVar50 != 0 );
         uVar47 = *(uint*)( param_1 + 0x134 );
         goto joined_r0x00103388;
      }

      if (( uVar47 & 0x4000000 ) != 0) goto LAB_001033a1;
      if (( uVar47 & 0x400 ) != 0) goto LAB_001038f1;
      joined_r0x00103223:if (( uVar47 & 0x40 ) != 0) {
         if (*(char*)( (long)param_2 + 0x11 ) == '\b') {
            lVar31 = *(long*)( param_1 + 0x228 );
            lVar39 = *(long*)( param_1 + 0x380 );
            lVar26 = *(long*)( param_1 + 0x378 );
            uVar37 = *param_2;
            LAB_001041f4:uVar20 = (ulong)uVar37;
            pbVar29 = (byte*)( lVar31 + 1 );
            cVar13 = (char)param_2[4];
            if (cVar13 != '\x02') {
               if (cVar13 == '\x06') {
                  if (lVar26 != 0) {
                     uVar30 = 0;
                     if (uVar37 != 0) {
                        do {
                           pbVar29[uVar30] = *(byte*)( lVar26 + ( ( (int)(uint)pbVar29[uVar30 * 4] >> 3 ) << 10 | ( (int)( uint ) * (byte*)( lVar31 + 2 + uVar30 * 4 ) >> 3 ) << 5 | (int)( uint ) * (byte*)( lVar31 + 3 + uVar30 * 4 ) >> 3 ) );
                           uVar30 = uVar30 + 1;
                        }
 while ( uVar30 != uVar20 );
                     }

                     goto LAB_00104570;
                  }

               }
 else if (( ( lVar39 != 0 ) && ( cVar13 == '\x03' ) ) && ( uVar37 != 0 )) {
                  pbVar22 = pbVar29;
                  do {
                     pbVar49 = pbVar22 + 1;
                     *pbVar22 = *(byte*)( lVar39 + ( ulong ) * pbVar22 );
                     pbVar22 = pbVar49;
                  }
 while ( pbVar49 != pbVar29 + uVar20 );
               }

               goto LAB_0010341a;
            }

            if (lVar26 == 0) goto LAB_0010341a;
            pbVar22 = pbVar29 + uVar20;
            pbVar49 = pbVar29;
            if (uVar37 != 0) {
               do {
                  pbVar53 = pbVar49 + 1;
                  *pbVar49 = *(byte*)( lVar26 + ( ( (int)( uint ) * pbVar29 >> 3 ) << 10 | ( (int)(uint)pbVar29[1] >> 3 ) << 5 | (int)(uint)pbVar29[2] >> 3 ) );
                  pbVar29 = pbVar29 + 3;
                  pbVar49 = pbVar53;
               }
 while ( pbVar53 != pbVar22 );
            }

            LAB_00104570:bVar34 = *(byte*)( (long)param_2 + 0x11 );
            *(undefined1*)( param_2 + 4 ) = 3;
            *(undefined1*)( (long)param_2 + 0x12 ) = 1;
            *(byte*)( (long)param_2 + 0x13 ) = bVar34;
            if (bVar34 < 8) {
               uVar20 = bVar34 * uVar20 + 7 >> 3;
            }
 else {
               uVar20 = uVar20 * ( bVar34 >> 3 );
            }

            *(ulong*)( param_2 + 2 ) = uVar20;
         }
 else {
            LAB_0010341a:uVar20 = *(ulong*)( param_2 + 2 );
         }

         if (uVar20 == 0) {
            /* WARNING: Subroutine does not return */
            png_error(param_1, "png_do_quantize returned rowbytes=0");
         }

         uVar47 = *(uint*)( param_1 + 0x134 );
      }

      if (( ( uVar47 & 0x200 ) != 0 ) && ( *(char*)( (long)param_2 + 0x11 ) == '\b' )) {
         LAB_00103443:if ((char)param_2[4] != '\x03') {
            lVar31 = *(long*)( param_2 + 2 );
            puVar21 = (undefined2*)( *(long*)( param_1 + 0x228 ) + 1 + lVar31 );
            puVar43 = (undefined2*)( (long)puVar21 + lVar31 );
            if (puVar21 < puVar43) {
               do {
                  puVar1 = (undefined1*)( (long)puVar21 - 1 );
                  puVar21 = (undefined2*)( (long)puVar21 - 1 );
                  puVar43 = puVar43 + -1;
                  *puVar43 = CONCAT11(*puVar1, *puVar1);
               }
 while ( puVar21 < puVar43 );
               lVar31 = *(long*)( param_2 + 2 );
               uVar47 = *(uint*)( param_1 + 0x134 );
            }

            *(undefined1*)( (long)param_2 + 0x11 ) = 0x10;
            *(long*)( param_2 + 2 ) = lVar31 * 2;
            *(char*)( (long)param_2 + 0x13 ) = *(char*)( (long)param_2 + 0x12 ) << 4;
         }

      }

   }

   if (( ( uVar47 & 0x4000 ) == 0 ) || ( ( *(byte*)( param_1 + 0x12d ) & 8 ) == 0 )) {
      if (( uVar47 & 0x20 ) == 0) goto LAB_0010324b;
      LAB_001036a0:png_do_invert(param_2, *(long*)( param_1 + 0x228 ) + 1);
      uVar47 = *(uint*)( param_1 + 0x134 );
      if (( uVar47 & 0x80000 ) == 0) goto joined_r0x00103739;
      LAB_001036c5:pbVar29 = *(byte**)( param_1 + 0x228 );
      bVar34 = (byte)param_2[4];
      uVar37 = *param_2;
      uVar20 = (ulong)uVar37;
      puVar45 = (ushort*)( pbVar29 + 1 );
      if (bVar34 == 6) {
         pbVar22 = (byte*)( *(long*)( param_2 + 2 ) + (long)puVar45 );
         if (*(char*)( (long)param_2 + 0x11 ) == '\b') {
            if (uVar37 == 0) goto LAB_00103f40;
            pbVar29 = pbVar22 + uVar20 * -4;
            if (( (int)pbVar22 - (int)pbVar29 & 4U ) != 0) {
               pbVar22[-1] = ~pbVar22[-1];
               pbVar22 = pbVar22 + -4;
               if (pbVar22 == pbVar29) goto LAB_0010372f;
            }

            do {
               pbVar22[-1] = ~pbVar22[-1];
               pbVar22[-5] = ~pbVar22[-5];
               pbVar22 = pbVar22 + -8;
            }
 while ( pbVar22 != pbVar29 );
            LAB_0010372f:uVar47 = *(uint*)( param_1 + 0x134 );
            goto joined_r0x00103739;
         }

         if (uVar37 != 0) {
            pbVar29 = pbVar22;
            do {
               pbVar49 = pbVar29 + -8;
               *(ushort*)( pbVar29 + -2 ) = *(ushort*)( pbVar29 + -2 ) ^ 0xffff;
               pbVar29 = pbVar49;
            }
 while ( pbVar49 != pbVar22 + uVar20 * -8 );
            goto LAB_0010372f;
         }

         LAB_00103f40:if (( uVar47 & 8 ) == 0) goto joined_r0x00103264;
         uVar47 = ( uint ) * (byte*)( (long)param_2 + 0x11 );
         LAB_00103f58:local_58[0] = uVar47 - *(byte*)( param_1 + 0x2dd );
         local_58[1] = uVar47 - *(byte*)( param_1 + 0x2de );
         local_58[2] = uVar47 - *(byte*)( param_1 + 0x2df );
         iVar38 = 3;
         goto LAB_00103780;
      }

      if (bVar34 != 4) goto joined_r0x00103739;
      pbVar22 = (byte*)( *(long*)( param_2 + 2 ) + (long)puVar45 );
      if (*(char*)( (long)param_2 + 0x11 ) == '\b') {
         if (uVar37 != 0) {
            pbVar29 = pbVar22 + uVar20 * -2;
            if (( (int)pbVar22 - (int)pbVar29 & 2U ) != 0) {
               pbVar22[-1] = ~pbVar22[-1];
               pbVar22 = pbVar22 + -2;
               if (pbVar22 == pbVar29) goto LAB_0010372f;
            }

            do {
               pbVar22[-1] = ~pbVar22[-1];
               pbVar22[-3] = ~pbVar22[-3];
               pbVar22 = pbVar22 + -4;
            }
 while ( pbVar22 != pbVar29 );
            goto LAB_0010372f;
         }

      }
 else if (uVar37 != 0) {
         pbVar29 = pbVar22;
         do {
            pbVar49 = pbVar29 + -4;
            *(ushort*)( pbVar29 + -2 ) = *(ushort*)( pbVar29 + -2 ) ^ 0xffff;
            pbVar29 = pbVar49;
         }
 while ( pbVar49 != pbVar22 + uVar20 * -4 );
         goto LAB_0010372f;
      }

      if (( uVar47 & 8 ) != 0) {
         uVar47 = ( uint ) * (byte*)( (long)param_2 + 0x11 );
         goto LAB_0010376c;
      }

      joined_r0x00103264:if (( uVar47 & 4 ) != 0) {
         pbVar29 = *(byte**)( param_1 + 0x228 );
         puVar45 = (ushort*)( pbVar29 + 1 );
         LAB_0010385b:uVar47 = ( uint ) * (byte*)( (long)param_2 + 0x11 );
         LAB_0010385f:bVar34 = (byte)uVar47;
         if (bVar34 < 8) {
            uVar47 = *param_2;
            if (bVar34 == 2) {
               pbVar22 = pbVar29 + uVar47;
               pbVar49 = (byte*)( (long)puVar45 + ( ulong )(uVar47 - 1 >> 2) );
               uVar37 = ( -4 - uVar47 ) * 2 & 6;
               if (uVar47 != 0) {
                  do {
                     *pbVar22 = ( byte )((int)( uint ) * pbVar49 >> ( (byte)uVar37 & 0x1f )) & 3;
                     if (uVar37 == 6) {
                        pbVar49 = pbVar49 + -1;
                        uVar37 = 0;
                     }
 else {
                        uVar37 = uVar37 + 2;
                     }

                     pbVar22 = pbVar22 + -1;
                  }
 while ( pbVar22 != pbVar29 );
               }

            }
 else if (bVar34 == 4) {
               pbVar22 = pbVar29 + uVar47;
               pbVar49 = (byte*)( (long)puVar45 + ( ulong )(uVar47 - 1 >> 1) );
               iVar38 = ( uVar47 & 1 ) << 2;
               if (uVar47 != 0) {
                  do {
                     *pbVar22 = ( byte )((int)( uint ) * pbVar49 >> (sbyte)iVar38) & 0xf;
                     if (iVar38 == 4) {
                        pbVar49 = pbVar49 + -1;
                        iVar38 = 0;
                     }
 else {
                        iVar38 = 4;
                     }

                     pbVar22 = pbVar22 + -1;
                  }
 while ( pbVar22 != pbVar29 );
               }

            }
 else if (bVar34 == 1) {
               pbVar22 = pbVar29 + uVar47;
               pbVar49 = (byte*)( ( ulong )(uVar47 - 1 >> 3) + (long)puVar45 );
               uVar37 = -uVar47 & 7;
               if (uVar47 != 0) {
                  do {
                     *pbVar22 = ( *pbVar49 >> ( uVar37 & 0x1f ) & 1 ) != 0;
                     if (uVar37 == 7) {
                        pbVar49 = pbVar49 + -1;
                        uVar37 = 0;
                     }
 else {
                        uVar37 = uVar37 + 1;
                     }

                     pbVar22 = pbVar22 + -1;
                  }
 while ( pbVar22 != pbVar29 );
               }

            }

            *(undefined1*)( (long)param_2 + 0x11 ) = 8;
            *(byte*)( (long)param_2 + 0x13 ) = *(byte*)( (long)param_2 + 0x12 ) * '\b';
            *(ulong*)( param_2 + 2 ) = ( ulong )(*(byte*)( (long)param_2 + 0x12 ) * uVar47);
         }

      }

      if ((char)param_2[4] == '\x03') {
         LAB_00103971:if (-1 < *(int*)( param_1 + 0x25c )) {
            png_do_check_palette_indexes(param_1, param_2);
         }

      }

      uVar37 = *(uint*)( param_1 + 0x134 );
   }
 else {
      png_do_gray_to_rgb(param_2, *(long*)( param_1 + 0x228 ) + 1);
      uVar47 = *(uint*)( param_1 + 0x134 );
      if (( uVar47 & 0x20 ) != 0) goto LAB_001036a0;
      LAB_0010324b:if (( uVar47 & 0x80000 ) != 0) goto LAB_001036c5;
      joined_r0x00103739:if (( uVar47 & 8 ) == 0) goto joined_r0x00103264;
      pbVar29 = *(byte**)( param_1 + 0x228 );
      bVar34 = (byte)param_2[4];
      puVar45 = (ushort*)( pbVar29 + 1 );
      if (bVar34 == 3) {
         if (( uVar47 & 4 ) != 0) goto LAB_0010385b;
         goto LAB_00103971;
      }

      uVar47 = ( uint ) * (byte*)( (long)param_2 + 0x11 );
      if (( bVar34 & 2 ) != 0) goto LAB_00103f58;
      LAB_0010376c:local_58[0] = uVar47 - *(byte*)( param_1 + 0x2e0 );
      iVar38 = 1;
      LAB_00103780:if (( bVar34 & 4 ) != 0) {
         lVar31 = (long)iVar38;
         iVar38 = iVar38 + 1;
         local_58[lVar31] = uVar47 - *(byte*)( param_1 + 0x2e1 );
      }

      piVar44 = local_58;
      bVar58 = false;
      piVar2 = piVar44 + iVar38;
      do {
         if (( *piVar44 < (int)uVar47 ) && ( 0 < *piVar44 )) {
            bVar58 = true;
         }
 else {
            *piVar44 = 0;
         }

         piVar44 = piVar44 + 1;
      }
 while ( piVar44 != piVar2 );
      if (bVar58) {
         bVar34 = (byte)uVar47;
         if (bVar34 == 8) {
            lVar31 = *(long*)( param_2 + 2 );
            if (puVar45 < (ushort*)( lVar31 + (long)puVar45 )) {
               iVar19 = 0;
               puVar48 = puVar45;
               do {
                  lVar39 = (long)iVar19;
                  iVar19 = iVar19 + 1;
                  if (iVar38 <= iVar19) {
                     iVar19 = 0;
                  }

                  puVar51 = (ushort*)( (long)puVar48 + 1 );
                  *(byte*)puVar48 = ( byte )((int)( uint )(byte) * puVar48 >> ( (byte)local_58[lVar39] & 0x1f ));
                  puVar48 = puVar51;
               }
 while ( (ushort*)( lVar31 + (long)puVar45 ) != puVar51 );
            }

         }
 else if (bVar34 < 9) {
            if (bVar34 == 2) {
               puVar48 = (ushort*)( *(long*)( param_2 + 2 ) + (long)puVar45 );
               if (puVar45 < puVar48) {
                  do {
                     puVar51 = (ushort*)( (long)puVar45 + 1 );
                     *(byte*)puVar45 = ( byte ) * puVar45 >> 1 & 0x55;
                     puVar45 = puVar51;
                  }
 while ( puVar48 != puVar51 );
               }

            }
 else if (bVar34 == 4) {
               puVar48 = (ushort*)( *(long*)( param_2 + 2 ) + (long)puVar45 );
               if (puVar45 < puVar48) {
                  do {
                     puVar51 = (ushort*)( (long)puVar45 + 1 );
                     *(byte*)puVar45 = ( byte )((int)( uint )(byte) * puVar45 >> ( (byte)local_58[0] & 0x1f )) & (char)( 0xf >> ( (byte)local_58[0] & 0x1f ) ) * '\x11';
                     puVar45 = puVar51;
                  }
 while ( puVar48 != puVar51 );
               }

            }

         }
 else if (( bVar34 == 0x10 ) && ( lVar31 = *(long*)( param_2 + 2 ) ),puVar45 < (ushort*)( lVar31 + (long)puVar45 )) {
            iVar19 = 0;
            puVar48 = puVar45;
            do {
               iVar42 = iVar19 + 1;
               iVar18 = (int)( uint )(ushort)(*puVar48 << 8 | *puVar48 >> 8) >> ( (byte)local_58[iVar19] & 0x1f );
               *(byte*)puVar48 = ( byte )((uint)iVar18 >> 8);
               iVar19 = iVar42;
               if (iVar38 <= iVar42) {
                  iVar19 = 0;
               }

               puVar51 = puVar48 + 1;
               *(byte*)( (long)puVar48 + 1 ) = (byte)iVar18;
               puVar48 = puVar51;
            }
 while ( puVar51 < (ushort*)( lVar31 + (long)puVar45 ) );
         }

         uVar47 = *(uint*)( param_1 + 0x134 );
         goto joined_r0x00103264;
      }

      uVar37 = *(uint*)( param_1 + 0x134 );
      if (( uVar37 & 4 ) != 0) {
         puVar45 = (ushort*)( pbVar29 + 1 );
         goto LAB_0010385f;
      }

   }

   if (( uVar37 & 1 ) != 0) {
      png_do_bgr(param_2, *(long*)( param_1 + 0x228 ) + 1);
      uVar37 = *(uint*)( param_1 + 0x134 );
   }

   if (( uVar37 & 0x10000 ) != 0) {
      png_do_packswap(param_2, *(long*)( param_1 + 0x228 ) + 1);
      uVar37 = *(uint*)( param_1 + 0x134 );
   }

   if (( uVar37 & 0x8000 ) != 0) {
      uVar47 = *(uint*)( param_1 + 0x130 );
      uVar50 = *param_2;
      puVar1 = (undefined1*)( *(long*)( param_1 + 0x228 ) + 1 );
      uVar35 = ( undefined1 )(( ushort ) * (undefined2*)( param_1 + 0x272 ) >> 8);
      uVar52 = ( undefined1 ) * (undefined2*)( param_1 + 0x272 );
      if ((char)param_2[4] == '\0') {
         if (*(char*)( (long)param_2 + 0x11 ) == '\b') {
            uVar20 = (ulong)uVar50;
            puVar46 = puVar1 + uVar20 * 2;
            if (( uVar47 & 0x80 ) == 0) {
               if (uVar50 != 0) {
                  lVar31 = 0;
                  do {
                     *(ushort*)( puVar46 + lVar31 * 2 + -2 ) = CONCAT11(puVar1[lVar31 + ( uVar20 - 1 )], uVar52);
                     lVar31 = lVar31 + -1;
                  }
 while ( lVar31 != -uVar20 );
                  uVar37 = *(uint*)( param_1 + 0x134 );
               }

               *(undefined2*)( (long)param_2 + 0x12 ) = 0x1002;
               *(ulong*)( param_2 + 2 ) = ( ulong )(uVar50 * 2);
            }
 else {
               if (1 < uVar50) {
                  uVar30 = 0;
                  do {
                     puVar46[uVar30 * 2 + -1] = uVar52;
                     puVar46[uVar30 * 2 + -2] = puVar1[uVar30 + ( uVar20 - 1 )];
                     uVar30 = uVar30 - 1;
                  }
 while ( uVar30 != ~(ulong)(uVar50 - 2) );
                  puVar46 = puVar46 + ~(ulong)(uVar50 - 2) * 2;
               }

               puVar46[-1] = uVar52;
               uVar37 = *(uint*)( param_1 + 0x134 );
               *(undefined2*)( (long)param_2 + 0x12 ) = 0x1002;
               *(ulong*)( param_2 + 2 ) = ( ulong )(uVar50 * 2);
            }

         }
 else {
            if (*(char*)( (long)param_2 + 0x11 ) != '\x10') goto LAB_001032a6;
            puVar46 = puVar1 + (ulong)uVar50 * 2;
            puVar23 = puVar46 + (ulong)uVar50 * 2;
            if (( uVar47 & 0x80 ) == 0) {
               if (uVar50 != 0) {
                  do {
                     puVar40 = puVar46 + -1;
                     puVar46 = puVar46 + -2;
                     puVar23[-1] = *puVar40;
                     uVar4 = *puVar46;
                     puVar23[-3] = uVar52;
                     puVar23[-2] = uVar4;
                     puVar23[-4] = uVar35;
                     puVar23 = puVar23 + -4;
                  }
 while ( puVar1 != puVar46 );
                  uVar37 = *(uint*)( param_1 + 0x134 );
               }

               *(undefined2*)( (long)param_2 + 0x12 ) = 0x2002;
               *(ulong*)( param_2 + 2 ) = ( ulong )(uVar50 * 4);
            }
 else {
               if (1 < uVar50) {
                  puVar1 = puVar23 + ( ulong )(uVar50 - 1) * -4;
                  puVar40 = puVar23;
                  do {
                     puVar40[-1] = uVar52;
                     puVar24 = puVar40 + -4;
                     puVar40[-2] = uVar35;
                     puVar40[-3] = puVar46[-1];
                     *puVar24 = puVar46[-2];
                     puVar40 = puVar24;
                     puVar46 = puVar46 + -2;
                     puVar23 = puVar1;
                  }
 while ( puVar24 != puVar1 );
               }

               puVar23[-1] = uVar52;
               puVar23[-2] = uVar35;
               uVar37 = *(uint*)( param_1 + 0x134 );
               *(undefined2*)( (long)param_2 + 0x12 ) = 0x2002;
               *(ulong*)( param_2 + 2 ) = ( ulong )(uVar50 * 4);
            }

         }

      }
 else if ((char)param_2[4] == '\x02') {
         if (*(char*)( (long)param_2 + 0x11 ) == '\b') {
            puVar23 = puVar1 + (ulong)uVar50 * 3;
            puVar46 = puVar23 + uVar50;
            if (( uVar47 & 0x80 ) == 0) {
               if (uVar50 != 0) {
                  do {
                     puVar40 = puVar23 + -3;
                     puVar46[-1] = puVar23[-1];
                     puVar46[-2] = puVar23[-2];
                     puVar46[-3] = *puVar40;
                     puVar46[-4] = uVar52;
                     puVar46 = puVar46 + -4;
                     puVar23 = puVar40;
                  }
 while ( puVar1 != puVar40 );
                  uVar37 = *(uint*)( param_1 + 0x134 );
               }

               *(undefined2*)( (long)param_2 + 0x12 ) = 0x2004;
               *(ulong*)( param_2 + 2 ) = ( ulong )(uVar50 * 4);
            }
 else {
               if (1 < uVar50) {
                  puVar1 = puVar46 + ( ulong )(uVar50 - 1) * -4;
                  puVar40 = puVar46;
                  do {
                     puVar40[-1] = uVar52;
                     puVar24 = puVar40 + -4;
                     puVar40[-2] = puVar23[-1];
                     puVar40[-3] = puVar23[-2];
                     *puVar24 = puVar23[-3];
                     puVar40 = puVar24;
                     puVar23 = puVar23 + -3;
                     puVar46 = puVar1;
                  }
 while ( puVar24 != puVar1 );
               }

               puVar46[-1] = uVar52;
               uVar37 = *(uint*)( param_1 + 0x134 );
               *(undefined2*)( (long)param_2 + 0x12 ) = 0x2004;
               *(ulong*)( param_2 + 2 ) = ( ulong )(uVar50 * 4);
            }

         }
 else {
            if (*(char*)( (long)param_2 + 0x11 ) != '\x10') goto LAB_001032a6;
            puVar46 = puVar1 + (ulong)uVar50 * 6;
            puVar23 = puVar46 + (ulong)uVar50 * 2;
            if (( uVar47 & 0x80 ) == 0) {
               if (uVar50 != 0) {
                  do {
                     puVar40 = puVar46 + -6;
                     for (int i = 0; i < 5; i++) {
                        puVar23[( -1 - i )] = puVar46[( -1 - i )];
                     }

                     uVar4 = *puVar40;
                     puVar23[-7] = uVar52;
                     puVar23[-6] = uVar4;
                     puVar23[-8] = uVar35;
                     puVar23 = puVar23 + -8;
                     puVar46 = puVar40;
                  }
 while ( puVar1 != puVar40 );
                  uVar37 = *(uint*)( param_1 + 0x134 );
               }

               *(undefined2*)( (long)param_2 + 0x12 ) = 0x4004;
               *(ulong*)( param_2 + 2 ) = ( ulong )(uVar50 * 8);
            }
 else {
               if (1 < uVar50) {
                  puVar1 = puVar23 + ( ulong )(uVar50 - 1) * -8;
                  puVar40 = puVar23;
                  do {
                     puVar40[-1] = uVar52;
                     puVar24 = puVar40 + -8;
                     puVar40[-2] = uVar35;
                     for (int i = 0; i < 5; i++) {
                        puVar40[( -3 - i )] = puVar46[( -1 - i )];
                     }

                     *puVar24 = puVar46[-6];
                     puVar40 = puVar24;
                     puVar46 = puVar46 + -6;
                     puVar23 = puVar1;
                  }
 while ( puVar24 != puVar1 );
               }

               puVar23[-1] = uVar52;
               puVar23[-2] = uVar35;
               uVar37 = *(uint*)( param_1 + 0x134 );
               *(undefined2*)( (long)param_2 + 0x12 ) = 0x4004;
               *(ulong*)( param_2 + 2 ) = ( ulong )(uVar50 * 8);
            }

         }

      }

   }

   if (( uVar37 & 0x20000 ) != 0) {
      uVar47 = *param_2;
      uVar20 = (ulong)uVar47;
      lVar31 = *(long*)( param_1 + 0x228 ) + 1;
      if ((char)param_2[4] == '\x06') {
         if (*(char*)( (long)param_2 + 0x11 ) == '\b') {
            if (uVar47 == 0) goto LAB_001032a6;
            puVar32 = (undefined4*)( lVar31 + *(long*)( param_2 + 2 ) );
            puVar25 = puVar32;
            do {
               puVar33 = puVar25 + -1;
               *puVar33 = CONCAT31(*(undefined3*)puVar33, *(undefined1*)( (long)puVar25 + -1 ));
               puVar25 = puVar33;
            }
 while ( puVar33 != puVar32 + -uVar20 );
         }
 else {
            if (uVar47 == 0) goto LAB_001032a6;
            puVar3 = (ulong*)( *(long*)( param_1 + 0x228 ) + -7 + *(long*)( param_2 + 2 ) );
            puVar27 = puVar3;
            do {
               auVar59._8_8_ = 0;
               auVar59._0_8_ = *puVar27;
               puVar28 = puVar27 + -1;
               auVar59 = pshuflw(auVar59, auVar59, 0x93);
               *puVar27 = auVar59._0_8_;
               puVar27 = puVar28;
            }
 while ( puVar28 != puVar3 + -uVar20 );
         }

      }
 else {
         if ((char)param_2[4] != '\x04') goto LAB_001032a6;
         puVar25 = (undefined4*)( lVar31 + *(long*)( param_2 + 2 ) );
         if (*(char*)( (long)param_2 + 0x11 ) == '\b') {
            if (uVar47 == 0) goto LAB_001032a6;
            puVar32 = (undefined4*)( (long)puVar25 + uVar20 * -2 );
            do {
               puVar1 = (undefined1*)( (long)puVar25 + -1 );
               puVar25 = (undefined4*)( (long)puVar25 + -2 );
               *(ushort*)puVar25 = CONCAT11(*(undefined1*)puVar25, *puVar1);
            }
 while ( puVar25 != puVar32 );
         }
 else {
            if (uVar47 == 0) goto LAB_001032a6;
            puVar32 = puVar25 + -uVar20;
            do {
               puVar1 = (undefined1*)( (long)puVar25 + -1 );
               puVar43 = (undefined2*)( (long)puVar25 + -2 );
               puVar25 = puVar25 + -1;
               *puVar25 = CONCAT31(CONCAT21(*(undefined2*)puVar25, *puVar1), *(undefined1*)puVar43);
            }
 while ( puVar25 != puVar32 );
         }

      }

      uVar37 = *(uint*)( param_1 + 0x134 );
   }

   LAB_001032a6:if (( uVar37 & 0x10 ) != 0) {
      png_do_swap(param_2, *(long*)( param_1 + 0x228 ) + 1);
      uVar37 = *(uint*)( param_1 + 0x134 );
   }

   if (( uVar37 & 0x100000 ) != 0) {
      if (*(code**)( param_1 + 0x110 ) != (code*)0x0) {
         ( **(code**)( param_1 + 0x110 ) )(param_1, param_2, *(long*)( param_1 + 0x228 ) + 1);
      }

      cVar13 = *(char*)( param_1 + 0x128 );
      if (cVar13 == '\0') {
         cVar13 = *(char*)( (long)param_2 + 0x11 );
      }
 else {
         *(char*)( (long)param_2 + 0x11 ) = cVar13;
      }

      cVar41 = *(char*)( param_1 + 0x129 );
      if (cVar41 == '\0') {
         cVar41 = *(char*)( (long)param_2 + 0x12 );
      }
 else {
         *(char*)( (long)param_2 + 0x12 ) = cVar41;
      }

      bVar34 = cVar13 * cVar41;
      *(byte*)( (long)param_2 + 0x13 ) = bVar34;
      if (bVar34 < 8) {
         uVar20 = (ulong)bVar34 * ( ulong ) * param_2 + 7 >> 3;
      }
 else {
         uVar20 = ( ulong )(bVar34 >> 3) * ( ulong ) * param_2;
      }

      *(ulong*)( param_2 + 2 ) = uVar20;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}


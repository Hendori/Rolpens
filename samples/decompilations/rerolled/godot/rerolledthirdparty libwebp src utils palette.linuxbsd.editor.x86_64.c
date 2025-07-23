uint PaletteCompareColorsForQsort(uint *param_1, uint *param_2) {
   return -(uint)(*param_1 < *param_2) | 1;
}
void SearchColorNoIdx(uint *param_1, uint param_2, int param_3) {
   int iVar1;
   int iVar2;
   int iVar3;
   iVar1 = 0;
   if (*param_1 == param_2) {
      return;
   }

   while (true) {
      iVar2 = iVar1;
      iVar3 = iVar2 + param_3 >> 1;
      if (param_2 == param_1[iVar3]) break;
      iVar1 = iVar3;
      if (param_2 <= param_1[iVar3]) {
         iVar1 = iVar2;
         param_3 = iVar3;
      }

   }
;
   return;
}
void PrepareMapToPalette(void *param_1, uint param_2, uint *param_3, undefined4 *param_4) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   undefined4 *puVar4;
   ulong uVar5;
   ulong uVar6;
   ulong __nmemb;
   __nmemb = (ulong)param_2;
   memcpy(param_3, param_1, __nmemb * 4);
   qsort(param_3, __nmemb, 4, PaletteCompareColorsForQsort);
   if (param_2 != 0) {
      uVar5 = 0;
      do {
         uVar1 = *(uint*)( (long)param_1 + uVar5 * 4 );
         puVar4 = param_4;
         if (uVar1 != *param_3) {
            uVar6 = __nmemb;
            uVar3 = 0;
            while (true) {
               uVar2 = uVar3;
               uVar3 = (int)( uVar2 + (int)uVar6 ) >> 1;
               if (uVar1 == param_3[(int)uVar3]) break;
               if (uVar1 <= param_3[(int)uVar3]) {
                  uVar6 = (ulong)uVar3;
                  uVar3 = uVar2;
               }

            }
;
            puVar4 = param_4 + (int)uVar3;
         }

         uVar6 = uVar5 + 1;
         *puVar4 = (int)uVar5;
         uVar5 = uVar6;
      }
 while ( __nmemb != uVar6 );
   }

   return;
}
undefined8 PaletteSortModifiedZeng(long param_1, long param_2, uint param_3, undefined4 *param_4) {
   uint uVar1;
   long lVar2;
   undefined8 uVar3;
   uint *puVar4;
   uint uVar5;
   uint uVar6;
   long lVar7;
   ulong uVar8;
   int iVar9;
   uint uVar10;
   long lVar11;
   int *piVar12;
   long lVar13;
   long lVar14;
   ulong uVar15;
   int iVar16;
   int iVar17;
   uint uVar18;
   uint uVar19;
   uint *puVar20;
   long in_FS_OFFSET;
   bool bVar21;
   bool bVar22;
   byte bVar23;
   uint *local_d80;
   byte local_d74;
   uint local_d50;
   int local_d48[256];
   uint local_948[512];
   byte local_148[264];
   long local_40;
   bVar23 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (1 < param_3) {
      lVar2 = WebPSafeCalloc(param_3 * param_3, 4);
      if (lVar2 != 0) {
         puVar20 = *(uint**)( param_1 + 0x48 );
         uVar5 = *puVar20;
         piVar12 = local_d48;
         for (lVar7 = 0x80; lVar7 != 0; lVar7 = lVar7 + -1) {
            piVar12[0] = 0;
            piVar12[1] = 0;
            piVar12 = piVar12 + ( (ulong)bVar23 * -2 + 1 ) * 2;
         }

         lVar7 = WebPSafeMalloc((long)( *(int*)( param_1 + 8 ) * 2 ), 4);
         if (lVar7 != 0) {
            iVar9 = *(int*)( param_1 + 8 );
            PrepareMapToPalette(param_2, param_3, local_948, local_d48);
            if (0 < *(int*)( param_1 + 0xc )) {
               iVar17 = 0;
               iVar16 = 0;
               uVar5 = ~uVar5;
               lVar13 = lVar7 + (long)iVar9 * 4;
               do {
                  lVar14 = lVar13;
                  lVar13 = 0;
                  uVar18 = uVar5;
                  if (0 < *(int*)( param_1 + 8 )) {
                     do {
                        uVar5 = puVar20[lVar13];
                        if (uVar5 != uVar18) {
                           lVar11 = 0;
                           if (uVar5 != local_948[0]) {
                              uVar18 = 0;
                              uVar6 = param_3;
                              while (true) {
                                 uVar10 = uVar18;
                                 uVar1 = (int)( uVar10 + uVar6 ) >> 1;
                                 lVar11 = (long)(int)uVar1;
                                 if (uVar5 == local_948[lVar11]) break;
                                 uVar18 = uVar1;
                                 if (uVar5 <= local_948[lVar11]) {
                                    uVar18 = uVar10;
                                    uVar6 = uVar1;
                                 }

                              }
;
                           }

                           iVar17 = local_d48[lVar11];
                        }

                        *(int*)( lVar14 + lVar13 * 4 ) = iVar17;
                        if (( lVar13 != 0 ) && ( iVar9 = iVar17 != iVar9 )) {
                           piVar12 = (int*)( lVar2 + ( ulong )(param_3 * iVar17 + iVar9) * 4 );
                           *piVar12 = *piVar12 + 1;
                           piVar12 = (int*)( lVar2 + ( ulong )(iVar9 * param_3 + iVar17) * 4 );
                           *piVar12 = *piVar12 + 1;
                        }

                        if (( iVar16 != 0 ) && ( iVar9 = iVar17 != iVar9 )) {
                           piVar12 = (int*)( lVar2 + ( ulong )(param_3 * iVar17 + iVar9) * 4 );
                           *piVar12 = *piVar12 + 1;
                           piVar12 = (int*)( lVar2 + ( ulong )(iVar9 * param_3 + iVar17) * 4 );
                           *piVar12 = *piVar12 + 1;
                        }

                        lVar13 = lVar13 + 1;
                        uVar18 = uVar5;
                     }
 while ( (int)lVar13 < *(int*)( param_1 + 8 ) );
                  }

                  iVar16 = iVar16 + 1;
                  puVar20 = puVar20 + *(int*)( param_1 + 0x50 );
                  lVar13 = lVar7;
                  lVar7 = lVar14;
               }
 while ( iVar16 < *(int*)( param_1 + 0xc ) );
            }

            WebPSafeFree();
            uVar8 = (ulong)local_d74;
            uVar10 = 0;
            local_148[0] = 0;
            bVar22 = false;
            uVar18 = 0;
            uVar5 = 0;
            uVar6 = param_3;
            do {
               uVar19 = uVar5;
               uVar1 = 0;
               uVar5 = uVar10;
               do {
                  uVar15 = (ulong)uVar5;
                  uVar5 = uVar5 + 1;
                  uVar1 = uVar1 + *(int*)( lVar2 + uVar15 * 4 );
               }
 while ( uVar5 != uVar6 );
               if (uVar18 < uVar1) {
                  uVar8 = ( ulong )(uVar19 & 0xff);
                  bVar22 = true;
                  uVar18 = uVar1;
               }

               uVar5 = uVar19 + 1;
               uVar10 = uVar10 + param_3;
               uVar6 = uVar6 + param_3;
            }
 while ( param_3 != uVar5 );
            if (bVar22) {
               local_148[0] = (byte)uVar8;
               iVar9 = uVar5 * (int)uVar8;
            }
 else {
               iVar9 = 0;
               uVar8 = 0;
            }

            bVar23 = local_148[0];
            local_148[1] = 0;
            bVar22 = false;
            uVar18 = 0;
            uVar10 = local_d50 & 0xff;
            uVar6 = 0;
            do {
               uVar1 = *(uint*)( lVar2 + ( ulong )(uVar6 + iVar9) * 4 );
               if (uVar18 < uVar1) {
                  bVar22 = true;
                  uVar18 = uVar1;
                  uVar10 = uVar6;
               }

               bVar21 = uVar19 != uVar6;
               uVar6 = uVar6 + 1;
            }
 while ( bVar21 );
            if (bVar22) {
               local_148[1] = (byte)uVar10;
            }

            if (uVar19 != 1) {
               uVar6 = (uint)uVar8;
               uVar15 = 0;
               local_948[0] = local_948[0] & 0xffffff00;
               local_948[1] = 0;
               uVar10 = (uint)local_148[1];
               local_d80 = local_948;
               uVar18 = 0;
               do {
                  if (( uVar18 != uVar6 ) && ( uVar10 != uVar18 )) {
                     *(char*)( local_948 + uVar15 * 2 ) = (char)uVar18;
                     uVar1 = *(int*)( lVar2 + uVar8 * 4 ) + *(int*)( lVar2 + ( ulong )(( uVar10 - uVar6 ) + (int)uVar8) * 4 );
                     local_948[uVar15 * 2 + 1] = uVar1;
                     if (local_d80[1] < uVar1) {
                        local_d80 = local_948 + uVar15 * 2;
                     }

                     uVar15 = ( ulong )((int)uVar15 + 1);
                  }

                  uVar8 = ( ulong )((int)uVar8 + uVar5);
                  bVar22 = uVar18 != uVar19;
                  uVar18 = uVar18 + 1;
               }
 while ( bVar22 );
               uVar18 = uVar19 - 3;
               uVar10 = 0;
               puVar20 = local_948 + ( ulong )(uVar19 - 2) * 2;
               uVar6 = 1;
               do {
                  uVar1 = uVar6 + 1;
                  bVar23 = ( byte ) * local_d80;
                  uVar8 = (ulong)uVar10 % (ulong)uVar5;
                  if ((uint)uVar8 == uVar1) {
                     LAB_001005fb:local_148[uVar1] = bVar23;
                     uVar6 = uVar1;
                  }
 else {
                     iVar17 = 0;
                     iVar9 = 0;
                     do {
                        iVar17 = iVar17 + ( ( ( uVar19 - 2 ) - uVar18 ) + iVar9 * -2 ) * *(int*)( lVar2 + ( ulong )((uint)local_148[uVar8] + bVar23 * uVar5) * 4 );
                        uVar8 = ( ulong )(iVar9 + 1 + uVar10) % (ulong)uVar5;
                        iVar9 = iVar9 + 1;
                     }
 while ( (uint)uVar8 != uVar1 );
                     if (iVar17 < 1) goto LAB_001005fb;
                     bVar22 = uVar10 == 0;
                     uVar10 = uVar10 - 1;
                     if (bVar22) {
                        uVar10 = uVar19;
                     }

                     local_148[uVar10] = bVar23;
                  }

                  *(undefined8*)local_d80 = *(undefined8*)puVar20;
                  if (uVar18 == 0xffffffff) goto LAB_0010060b;
                  puVar4 = local_948;
                  local_d80 = local_948;
                  do {
                     uVar1 = puVar4[1] + *(int*)( lVar2 + ( ulong )(( uint )(byte) * puVar4 + bVar23 * uVar5) * 4 );
                     puVar4[1] = uVar1;
                     if (local_d80[1] < uVar1) {
                        local_d80 = puVar4;
                     }

                     puVar4 = puVar4 + 2;
                  }
 while ( puVar4 != local_948 + (ulong)uVar18 * 2 + 2 );
                  uVar18 = uVar18 - 1;
                  puVar20 = puVar20 + -2;
               }
 while ( true );
            }

            uVar10 = 0;
            WebPSafeFree(lVar2);
            goto LAB_00100360;
         }

         WebPSafeFree(lVar2);
      }

      uVar3 = 0;
      goto LAB_001003a6;
   }

   goto LAB_001003a1;
   LAB_0010060b:WebPSafeFree(lVar2);
   bVar23 = local_148[(ulong)uVar10 % (ulong)uVar5];
   LAB_00100360:uVar8 = 1;
   *param_4 = *(undefined4*)( param_2 + (ulong)bVar23 * 4 );
   do {
      param_4[uVar8] = *(undefined4*)( param_2 + (ulong)local_148[( ulong )(uVar10 + (int)uVar8) % (ulong)uVar5] * 4 );
      uVar8 = uVar8 + 1;
   }
 while ( uVar5 != uVar8 );
   LAB_001003a1:uVar3 = 1;
   LAB_001003a6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
int GetColorPalette(long param_1, void *param_2) {
   char cVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   long lVar7;
   uint uVar8;
   long lVar9;
   int iVar10;
   uint *puVar11;
   char *pcVar12;
   uint *puVar13;
   int iVar14;
   long in_FS_OFFSET;
   uint local_1448[1024];
   char local_448[1032];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar13 = *(uint**)( param_1 + 0x48 );
   iVar2 = *(int*)( param_1 + 0xc );
   iVar3 = *(int*)( param_1 + 8 );
   pcVar12 = local_448;
   for (lVar7 = 0x80; lVar7 != 0; lVar7 = lVar7 + -1) {
      for (int i = 0; i < 8; i++) {
         pcVar12[i] = '\0';
      }

      pcVar12 = pcVar12 + 8;
   }

   puVar11 = local_1448;
   for (lVar7 = 0x200; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined8*)puVar11 = 0;
      puVar11 = (uint*)( (long)puVar11 + 8 );
   }

   if (iVar2 < 1) {
      iVar10 = 0;
   }
 else {
      uVar4 = ~*puVar13;
      iVar10 = 0;
      iVar14 = 0;
      do {
         puVar11 = puVar13;
         uVar5 = uVar4;
         if (0 < iVar3) {
            do {
               while (uVar4 = *puVar11,uVar4 != uVar5) {
                  uVar8 = uVar4 * 0x1e35a7bd >> 0x16;
                  uVar6 = (ulong)(int)uVar8;
                  cVar1 = local_448[uVar6];
                  while (cVar1 != '\0') {
                     uVar5 = local_1448[uVar6];
                     if (uVar4 == local_1448[uVar6]) goto LAB_00100719;
                     uVar6 = ( ulong )(uVar8 + 1 & 0x3ff);
                     uVar8 = uVar8 + 1 & 0x3ff;
                     cVar1 = local_448[uVar6];
                  }
;
                  iVar10 = iVar10 + 1;
                  local_1448[uVar6] = uVar4;
                  local_448[uVar6] = '\x01';
                  if (0x100 < iVar10) {
                     iVar10 = 0x101;
                     goto LAB_001007af;
                  }

                  puVar11 = puVar11 + 1;
                  uVar5 = uVar4;
                  if (puVar13 + iVar3 == puVar11) goto LAB_00100722;
               }
;
               LAB_00100719:uVar4 = uVar5;
               puVar11 = puVar11 + 1;
               uVar5 = uVar4;
            }
 while ( puVar13 + iVar3 != puVar11 );
         }

         LAB_00100722:iVar14 = iVar14 + 1;
         puVar13 = puVar13 + *(int*)( param_1 + 0x50 );
      }
 while ( iVar2 != iVar14 );
   }

   if (param_2 != (void*)0x0) {
      lVar7 = 0;
      iVar10 = 0;
      do {
         if (local_448[lVar7] != '\0') {
            lVar9 = (long)iVar10;
            iVar10 = iVar10 + 1;
            *(uint*)( (long)param_2 + lVar9 * 4 ) = local_1448[lVar7];
         }

         lVar7 = lVar7 + 1;
      }
 while ( lVar7 != 0x400 );
      qsort(param_2, (long)iVar10, 4, PaletteCompareColorsForQsort);
   }

   LAB_001007af:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 PaletteSort(int param_1, undefined8 param_2, uint *param_3, uint param_4, void *param_5) {
   uint *puVar1;
   char cVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   undefined8 uVar6;
   void *pvVar7;
   ulong uVar8;
   uint uVar9;
   uint uVar10;
   byte bVar11;
   ulong uVar12;
   uint uVar13;
   int iVar14;
   ulong uVar15;
   if (param_1 == 1) {
      pvVar7 = memcpy(param_5, param_3, (long)(int)param_4 << 2);
      if (0 < (int)param_4) {
         bVar11 = 0;
         puVar1 = param_3 + ( ulong )(param_4 - 1) + 1;
         uVar5 = 0;
         do {
            uVar10 = *param_3;
            uVar3 = ( -0xff0100 - ( uVar5 & 0xff00ff ) ) + ( uVar10 & 0xff00ff );
            uVar4 = uVar3 & 0xff00ff;
            cVar2 = (char)( ( 0xff00ff - ( uVar5 & 0xff00ff00 ) ) + ( uVar10 & 0xff00ff00 ) >> 8 );
            if (( uVar3 & 0xff0000 ) != 0) {
               bVar11 = bVar11 | 1U - ( (char)( uVar4 >> 0x10 ) >> 7 );
            }

            if (cVar2 != '\0') {
               bVar11 = bVar11 | ( cVar2 >> 7 & 8U ) + 8;
            }

            cVar2 = (char)uVar4;
            if (cVar2 != '\0') {
               bVar11 = bVar11 | ( cVar2 >> 7 & 0x40U ) + 0x40;
            }

            param_3 = param_3 + 1;
            uVar5 = uVar10;
         }
 while ( puVar1 != param_3 );
         if (( bVar11 * '\x02' & bVar11 ) != 0) {
            uVar15 = 0;
            uVar5 = 0;
            do {
               iVar14 = (int)uVar15;
               uVar12 = uVar15 & 0xffffffff;
               if (iVar14 < (int)param_4) {
                  uVar10 = 0xffffffff;
                  uVar8 = uVar15;
                  do {
                     uVar3 = *(uint*)( (long)pvVar7 + uVar8 * 4 );
                     uVar9 = ( uVar3 & 0xff00ff00 ) + ( 0xff00ff - ( uVar5 & 0xff00ff00 ) );
                     uVar13 = ( uVar3 & 0xff00ff ) + ( -0xff0100 - ( uVar5 & 0xff00ff ) );
                     uVar4 = uVar9 >> 8 & 0xff;
                     uVar3 = uVar13 & 0xff;
                     if (0x80 < uVar3) {
                        uVar3 = 0x100 - uVar3;
                     }

                     if (0x80 < uVar4) {
                        uVar4 = 0x100 - uVar4;
                     }

                     uVar13 = ( uVar13 & 0xff00ff ) >> 0x10;
                     if (0x80 < uVar13) {
                        uVar13 = 0x100 - uVar13;
                     }

                     uVar9 = uVar9 >> 0x18;
                     if (0x80 < uVar9) {
                        uVar9 = 0x100 - uVar9;
                     }

                     uVar9 = uVar9 + ( uVar13 + uVar4 + uVar3 ) * 9;
                     if (uVar9 < uVar10) {
                        uVar12 = uVar8 & 0xffffffff;
                     }

                     iVar14 = (int)uVar12;
                     if (uVar9 < uVar10) {
                        uVar10 = uVar9;
                     }

                     uVar8 = uVar8 + 1;
                  }
 while ( (int)uVar8 < (int)param_4 );
               }

               puVar1 = (uint*)( (long)pvVar7 + (long)iVar14 * 4 );
               uVar5 = *puVar1;
               *puVar1 = *(uint*)( (long)pvVar7 + uVar15 * 4 );
               *(uint*)( (long)pvVar7 + uVar15 * 4 ) = uVar5;
               uVar15 = uVar15 + 1;
            }
 while ( param_4 != uVar15 );
         }

      }

   }
 else {
      if (param_1 == 2) {
         uVar6 = PaletteSortModifiedZeng(param_2, param_3, param_4, param_5);
         return uVar6;
      }

      if (param_1 != 0) {
         return 0;
      }

      memcpy(param_5, param_3, (ulong)param_4 << 2);
   }

   return 1;
}


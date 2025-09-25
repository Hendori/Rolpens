bool SmoothenBlock(long param_1, int param_2, long param_3, int param_4, int param_5, int param_6) {
   int iVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   int iVar5;
   int iVar6;
   long lVar7;
   bool bVar8;
   iVar1 = 0;
   iVar5 = 0;
   lVar4 = param_1;
   lVar7 = param_3;
   iVar3 = 0;
   do {
      iVar6 = iVar3;
      lVar2 = 0;
      do {
         if (*(char*)( lVar4 + lVar2 ) != '\0') {
            iVar5 = iVar5 + 1;
            iVar1 = iVar1 + ( uint ) * (byte*)( lVar7 + lVar2 );
         }

         lVar2 = lVar2 + 1;
      }
 while ( lVar2 != param_5 );
      iVar3 = iVar6 + 1;
      lVar4 = lVar4 + param_2;
      lVar7 = lVar7 + param_4;
   }
 while ( param_6 != iVar3 );
   if (( 0 < iVar5 ) && ( iVar5 < param_5 * param_6 )) {
      iVar3 = 0;
      do {
         lVar4 = 0;
         do {
            if (*(char*)( param_1 + lVar4 ) == '\0') {
               *(char*)( param_3 + lVar4 ) = (char)( iVar1 / iVar5 );
            }

            lVar4 = lVar4 + 1;
         }
 while ( lVar4 != param_5 );
         param_1 = param_1 + param_2;
         param_3 = param_3 + param_4;
         bVar8 = iVar6 != iVar3;
         iVar3 = iVar3 + 1;
      }
 while ( bVar8 );
   }

   return iVar5 == 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void WebPReplaceTransparentPixels(int *param_1, uint param_2) {
   int iVar1;
   long lVar2;
   if (param_1 == (int*)0x0) {
      return;
   }

   if (*param_1 != 0) {
      iVar1 = param_1[3];
      lVar2 = *(long*)( param_1 + 0x12 );
      WebPInitAlphaProcessing();
      if (0 < iVar1) {
         do {
            iVar1 = iVar1 + -1;
            ( *_WebPAlphaReplace )(lVar2, param_1[2], param_2 & 0xffffff);
            lVar2 = lVar2 + (long)param_1[0x14] * 4;
         }
 while ( iVar1 != 0 );
         return;
      }

   }

   return;
}
void WebPCleanupTransparentArea(int *param_1) {
   byte bVar1;
   int iVar2;
   int iVar3;
   bool bVar4;
   uint *puVar5;
   byte *pbVar6;
   long lVar7;
   uint *puVar8;
   uint *puVar9;
   long lVar10;
   byte *pbVar11;
   long lVar12;
   int iVar13;
   long *plVar14;
   int iVar15;
   long *plVar16;
   long lVar17;
   int iVar18;
   long lVar19;
   int iVar20;
   uint *puVar21;
   long lVar22;
   long lVar23;
   int iVar24;
   int iVar25;
   long lVar26;
   long lVar27;
   uint uVar28;
   uint local_9c;
   long local_98;
   long local_90;
   uint local_88;
   int local_80;
   if (param_1 == (int*)0x0) {
      return;
   }

   iVar15 = param_1[2];
   iVar2 = param_1[3];
   if (*param_1 == 0) {
      iVar20 = param_1[10];
      local_98 = *(long*)( param_1 + 6 );
      local_90 = *(long*)( param_1 + 8 );
      lVar23 = *(long*)( param_1 + 0xc );
      iVar18 = param_1[0xb];
      iVar3 = param_1[0xe];
      lVar26 = *(long*)( param_1 + 4 );
      if (( ( ( lVar23 != 0 ) && ( lVar26 != 0 ) ) && ( local_98 != 0 ) ) && ( local_90 != 0 )) {
         if (iVar2 < 8) {
            iVar18 = 0;
         }
 else {
            local_88 = 0;
            local_9c = 0;
            bVar1 = 0;
            uVar28 = ( iVar15 - 8U >> 3 ) + 1;
            local_80 = 0;
            lVar12 = lVar26;
            lVar27 = lVar23;
            do {
               iVar25 = 0;
               if (7 < iVar15) {
                  lVar22 = 0;
                  bVar4 = true;
                  lVar19 = (long)iVar20;
                  do {
                     plVar14 = (long*)( lVar12 + lVar22 );
                     lVar17 = lVar27 + lVar22;
                     iVar13 = 0;
                     iVar25 = 0;
                     iVar24 = 8;
                     lVar7 = lVar17;
                     plVar16 = plVar14;
                     do {
                        lVar10 = 0;
                        do {
                           if (*(char*)( lVar7 + lVar10 ) != '\0') {
                              iVar13 = iVar13 + 1;
                              iVar25 = iVar25 + ( uint ) * (byte*)( (long)plVar16 + lVar10 );
                           }

                           lVar10 = lVar10 + 1;
                        }
 while ( lVar10 != 8 );
                        lVar7 = lVar7 + iVar3;
                        plVar16 = (long*)( (long)plVar16 + lVar19 );
                        iVar24 = iVar24 + -1;
                     }
 while ( iVar24 != 0 );
                     if (iVar13 < 1) {
                        if (iVar13 != 0) goto LAB_001003a8;
                        lVar17 = (long)( (int)lVar22 >> 1 );
                        pbVar11 = (byte*)( local_98 + lVar17 );
                        pbVar6 = (byte*)( lVar17 + local_90 );
                        if (bVar4) {
                           bVar1 = *(byte*)( lVar12 + lVar22 );
                           local_9c = ( uint ) * pbVar11;
                           local_88 = ( uint ) * pbVar6;
                        }

                        iVar25 = 8;
                        do {
                           *plVar14 = (ulong)bVar1 * 0x101010101010101;
                           plVar14 = (long*)( (long)plVar14 + lVar19 );
                           iVar25 = iVar25 + -1;
                        }
 while ( iVar25 != 0 );
                        iVar25 = 4;
                        do {
                           *(uint*)pbVar11 = local_9c * 0x1010101;
                           pbVar11 = pbVar11 + iVar18;
                           iVar25 = iVar25 + -1;
                        }
 while ( iVar25 != 0 );
                        iVar25 = 4;
                        do {
                           *(uint*)pbVar6 = local_88 * 0x1010101;
                           pbVar6 = pbVar6 + iVar18;
                           iVar25 = iVar25 + -1;
                        }
 while ( iVar25 != 0 );
                        bVar4 = false;
                     }
 else {
                        if (iVar13 < 0x40) {
                           iVar24 = 8;
                           do {
                              lVar7 = 0;
                              do {
                                 if (*(char*)( lVar17 + lVar7 ) == '\0') {
                                    *(char*)( (long)plVar14 + lVar7 ) = (char)( iVar25 / iVar13 );
                                 }

                                 lVar7 = lVar7 + 1;
                              }
 while ( lVar7 != 8 );
                              lVar17 = lVar17 + iVar3;
                              plVar14 = (long*)( (long)plVar14 + lVar19 );
                              iVar24 = iVar24 + -1;
                           }
 while ( iVar24 != 0 );
                        }

                        LAB_001003a8:bVar4 = true;
                     }

                     lVar22 = lVar22 + 8;
                     iVar25 = uVar28 * 8;
                  }
 while ( lVar22 != (ulong)uVar28 * 8 );
               }

               if (iVar25 < iVar15) {
                  SmoothenBlock(iVar25 + lVar27, iVar3, lVar12 + iVar25, iVar20, iVar15 - iVar25, 8);
               }

               local_80 = local_80 + 8;
               lVar27 = lVar27 + iVar3 * 8;
               local_98 = local_98 + iVar18 * 4;
               local_90 = local_90 + iVar18 * 4;
               lVar12 = lVar12 + iVar20 * 8;
            }
 while ( local_80 != ( iVar2 - 8U & 0xfffffff8 ) + 8 );
            uVar28 = ( iVar2 - 8U >> 3 ) + 1;
            iVar18 = uVar28 * 8;
            lVar26 = lVar26 + (long)( iVar20 * 8 ) * (ulong)uVar28;
            lVar23 = lVar23 + (long)( iVar3 * 8 ) * (ulong)uVar28;
         }

         if (iVar18 < iVar2) {
            iVar25 = 0;
            if (7 < iVar15) {
               uVar28 = ( iVar15 - 8U >> 3 ) + 1;
               lVar12 = lVar26;
               lVar27 = lVar23;
               do {
                  lVar19 = lVar27 + 8;
                  SmoothenBlock(lVar27, iVar3, lVar12, iVar20, 8);
                  lVar12 = lVar12 + 8;
                  lVar27 = lVar19;
               }
 while ( lVar19 != lVar23 + (ulong)uVar28 * 8 );
               iVar25 = uVar28 * 8;
            }

            if (iVar25 < iVar15) {
               SmoothenBlock(lVar23 + iVar25, iVar3, lVar26 + iVar25, iVar20, iVar15 - iVar25, iVar2 - iVar18);
               return;
            }

         }

      }

   }
 else if (7 < iVar2) {
      iVar20 = iVar15 + 7;
      if (-1 < iVar15) {
         iVar20 = iVar15;
      }

      iVar18 = 0;
      do {
         if (7 < iVar15) {
            lVar23 = *(long*)( param_1 + 0x12 );
            uVar28 = 0;
            do {
               bVar4 = true;
               iVar15 = 0;
               do {
                  iVar3 = param_1[0x14];
                  iVar25 = 8;
                  puVar8 = (uint*)( lVar23 + (long)( ( iVar3 * iVar18 + iVar15 ) * 8 ) * 4 );
                  puVar9 = puVar8 + 8;
                  puVar5 = puVar8;
                  puVar21 = puVar8;
                  do {
                     do {
                        if (0xffffff < *puVar5) {
                           bVar4 = true;
                           goto LAB_0010020b;
                        }

                        puVar5 = puVar5 + 1;
                     }
 while ( puVar9 != puVar5 );
                     puVar5 = puVar21 + iVar3;
                     puVar9 = puVar9 + iVar3;
                     iVar25 = iVar25 + -1;
                     puVar21 = puVar5;
                  }
 while ( iVar25 != 0 );
                  if (bVar4) {
                     uVar28 = *puVar8;
                  }

                  iVar25 = 8;
                  do {
                     *puVar8 = uVar28;
                     for (int i = 0; i < 7; i++) {
                        puVar8[( i + 1 )] = uVar28;
                     }

                     puVar8 = puVar8 + iVar3;
                     iVar25 = iVar25 + -1;
                  }
 while ( iVar25 != 0 );
                  bVar4 = false;
                  LAB_0010020b:iVar15 = iVar15 + 1;
               }
 while ( iVar15<iVar20> > 3 );
               iVar18 = iVar18 + 1;
               if (iVar2 >> 3 <= iVar18) {
                  return;
               }

            }
 while ( true );
         }

         iVar18 = iVar18 + 1;
      }
 while ( iVar18<iVar2> > 3 );
   }

   return;
}
void WebPBlendAlpha(int *param_1, uint param_2) {
   byte bVar1;
   uint uVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   void *pvVar8;
   int iVar9;
   size_t __n;
   long lVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   void *pvVar14;
   int iVar15;
   long lVar16;
   int iVar17;
   long lVar18;
   uVar2 = param_2 >> 8 & 0xff;
   if (param_1 == (int*)0x0) {
      return;
   }

   uVar13 = param_2 >> 0x10 & 0xff;
   param_2 = param_2 & 0xff;
   if (*param_1 == 0) {
      pvVar8 = *(void**)( param_1 + 0xc );
      if (( ( ( *(byte*)( param_1 + 1 ) & 4 ) != 0 ) && ( pvVar8 != (void*)0x0 ) ) && ( 0 < param_1[3] )) {
         iVar9 = param_1[2];
         lVar10 = *(long*)( param_1 + 4 );
         lVar18 = *(long*)( param_1 + 6 );
         lVar16 = *(long*)( param_1 + 8 );
         iVar15 = iVar9 >> 1;
         iVar3 = (int)( uVar13 * -0x97dc + uVar2 * -0x12a24 + 0x2020000 + param_2 * 0x1c200 ) >> 0x12;
         iVar4 = (int)( uVar2 * -0x178d0 + uVar13 * 0x1c200 + 0x2020000 + param_2 * -0x4930 ) >> 0x12;
         iVar17 = 0;
         if (-1 < iVar15) {
            iVar17 = iVar15;
         }

         lVar6 = (long)iVar17;
         uVar11 = 0;
         while (true) {
            lVar7 = 0;
            if (0 < iVar9) {
               do {
                  bVar1 = *(byte*)( (long)pvVar8 + lVar7 );
                  if (bVar1 != 0xff) {
                     *(char*)( lVar10 + lVar7 ) = (char)( ( (uint)bVar1 * ( uint ) * (byte*)( lVar10 + lVar7 ) + ( 0xff - (uint)bVar1 ) * ( (int)( uVar13 * 0x41c7 + uVar2 * 0x8123 + 0x108000 + param_2 * 0x1914 ) >> 0x10 ) ) * 0x101 + 0x100 >> 0x10 );
                  }

                  lVar7 = lVar7 + 1;
               }
 while ( (int)lVar7 < param_1[2] );
            }

            uVar12 = uVar11 + 1;
            if (( uVar11 & 1 ) == 0) {
               pvVar14 = pvVar8;
               if (param_1[3] != uVar12) {
                  pvVar14 = (void*)( (long)param_1[0xe] + (long)pvVar8 );
               }

               if (0 < iVar15) {
                  lVar7 = 0;
                  do {
                     iVar9 = ( uint ) * (byte*)( (long)pvVar14 + lVar7 * 2 ) + ( uint ) * (byte*)( (long)pvVar8 + lVar7 * 2 + 1 ) + ( uint ) * (byte*)( (long)pvVar8 + lVar7 * 2 ) + ( uint ) * (byte*)( (long)pvVar14 + lVar7 * 2 + 1 );
                     *(char*)( lVar18 + lVar7 ) = (char)( ( ( 0x3fc - iVar9 ) * iVar3 + ( uint ) * (byte*)( lVar18 + lVar7 ) * iVar9 ) * 0x101 + 0x400 >> 0x12 );
                     *(char*)( lVar16 + lVar7 ) = (char)( ( ( 0x3fc - iVar9 ) * iVar4 + ( uint ) * (byte*)( lVar16 + lVar7 ) * iVar9 ) * 0x101 + 0x400 >> 0x12 );
                     lVar7 = lVar7 + 1;
                  }
 while ( lVar6 != lVar7 );
               }

               __n = (size_t)param_1[2];
               if (( __n & 1 ) != 0) {
                  iVar5 = ( uint ) * (byte*)( (long)pvVar8 + (long)( iVar17 * 2 ) ) + ( uint ) * (byte*)( (long)pvVar14 + (long)( iVar17 * 2 ) );
                  iVar9 = iVar5 * 2;
                  iVar5 = iVar5 * -2 + 0x3fc;
                  *(byte*)( lVar18 + lVar6 ) = ( byte )(( iVar3 * iVar5 + ( uint ) * (byte*)( lVar18 + lVar6 ) * iVar9 ) * 0x101 + 0x400 >> 0x12);
                  *(byte*)( lVar16 + lVar6 ) = ( byte )(( ( uint ) * (byte*)( lVar16 + lVar6 ) * iVar9 + iVar5 * iVar4 ) * 0x101 + 0x400 >> 0x12);
                  __n = (size_t)param_1[2];
               }

            }
 else {
               __n = (size_t)param_1[2];
               lVar18 = lVar18 + param_1[0xb];
               lVar16 = lVar16 + param_1[0xb];
            }

            pvVar8 = memset(pvVar8, 0xff, __n);
            pvVar8 = (void*)( (long)pvVar8 + (long)param_1[0xe] );
            lVar10 = lVar10 + param_1[10];
            if (param_1[3] <= (int)uVar12) break;
            iVar9 = param_1[2];
            uVar11 = uVar12;
         }
;
      }

   }
 else {
      lVar10 = *(long*)( param_1 + 0x12 );
      iVar9 = 0;
      if (0 < param_1[3]) {
         do {
            lVar18 = 0;
            if (0 < param_1[2]) {
               do {
                  while (true) {
                     uVar11 = *(uint*)( lVar10 + lVar18 * 4 );
                     uVar12 = uVar11 >> 0x18;
                     if (uVar12 != 0xff) break;
                     LAB_001008eb:lVar18 = lVar18 + 1;
                     if (param_1[2] <= (int)lVar18) goto LAB_0010091d;
                  }
;
                  if (uVar12 != 0) {
                     iVar17 = 0xff - uVar12;
                     *(uint*)( lVar10 + lVar18 * 4 ) = ( (int)( ( ( uVar11 >> 8 & 0xff ) * uVar12 + iVar17 * uVar2 ) * 0x101 + 0x100 ) >> 0x10 ) << 8 | (int)( ( ( uVar11 & 0xff ) * uVar12 + iVar17 * param_2 ) * 0x101 + 0x100 ) >> 0x10 | ( ( uVar11 >> 0x10 & 0xff ) * uVar12 + iVar17 * uVar13 ) * 0x101 + 0x100 & 0xffff0000 | 0xff000000;
                     goto LAB_001008eb;
                  }

                  *(uint*)( lVar10 + lVar18 * 4 ) = uVar13 << 0x10 | uVar2 << 8 | param_2 | 0xff000000;
                  lVar18 = lVar18 + 1;
               }
 while ( (int)lVar18 < param_1[2] );
            }

            LAB_0010091d:iVar9 = iVar9 + 1;
            lVar10 = lVar10 + (long)param_1[0x14] * 4;
         }
 while ( iVar9 < param_1[3] );
      }

   }

   return;
}


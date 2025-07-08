int icomp(undefined8 *param_1, undefined8 *param_2) {
   return *(int*)*param_1 - *(int*)*param_2;
}
int accumulate_fit(long param_1, long param_2, int param_3, int param_4, int *param_5, int param_6, long param_7) {
   float fVar1;
   int iVar2;
   long lVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   int local_50;
   int local_4c;
   int local_48;
   int local_44;
   int local_40;
   int local_3c;
   param_5[1] = param_4;
   if (param_6 <= param_4) {
      param_4 = param_6 + -1;
   }

   *param_5 = param_3;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( param_5 + ( 4*i + 2 ) ) = (undefined1[16])0;
   }

   if (param_4 < param_3) {
      local_3c = 0;
      iVar6 = 0;
      iVar8 = 0;
      iVar9 = 0;
      local_40 = 0;
      iVar5 = 0;
      iVar10 = 0;
      iVar11 = 0;
      local_44 = 0;
      local_48 = 0;
      local_4c = 0;
      local_50 = 0;
   }
 else {
      local_3c = 0;
      lVar3 = (long)param_3;
      iVar6 = 0;
      local_40 = 0;
      iVar8 = 0;
      iVar9 = 0;
      iVar5 = 0;
      local_44 = 0;
      iVar10 = 0;
      iVar11 = 0;
      local_48 = 0;
      local_4c = 0;
      local_50 = 0;
      do {
         while (true) {
            fVar1 = *(float*)( param_1 + lVar3 * 4 );
            iVar4 = (int)( fVar1 * _LC0 + _LC1 );
            if (0x3ff < iVar4) break;
            if (0 < iVar4) {
               iVar7 = iVar4 * iVar4;
               goto LAB_001000fc;
            }

            LAB_001000c6:lVar3 = lVar3 + 1;
            if (param_4 + 1 == lVar3) goto LAB_0010013e;
         }
;
         iVar7 = 0xff801;
         iVar4 = 0x3ff;
         LAB_001000fc:iVar2 = (int)lVar3;
         if (fVar1 <= *(float*)( param_2 + lVar3 * 4 ) + *(float*)( param_7 + 0x458 )) {
            local_50 = local_50 + iVar2;
            iVar11 = iVar11 + iVar7;
            iVar10 = iVar10 + iVar4 * iVar2;
            iVar5 = iVar5 + 1;
            local_4c = local_4c + iVar4;
            local_48 = local_48 + iVar2 * iVar2;
            goto LAB_001000c6;
         }

         local_44 = local_44 + iVar2;
         lVar3 = lVar3 + 1;
         iVar9 = iVar9 + iVar7;
         iVar8 = iVar8 + iVar4 * iVar2;
         local_40 = local_40 + iVar4;
         iVar6 = iVar6 + 1;
         local_3c = local_3c + iVar2 * iVar2;
      }
 while ( param_4 + 1 != lVar3 );
   }

   LAB_0010013e:param_5[5] = iVar11;
   param_5[6] = iVar10;
   param_5[2] = local_50;
   param_5[7] = iVar5;
   param_5[3] = local_4c;
   param_5[0xb] = iVar9;
   param_5[4] = local_48;
   param_5[0xc] = iVar8;
   param_5[8] = local_44;
   param_5[0xd] = iVar6;
   param_5[9] = local_40;
   param_5[10] = local_3c;
   return iVar5;
}
undefined8 floor1_inverse2(long param_1, long param_2, int *param_3, void *param_4) {
   int *piVar1;
   float fVar2;
   int iVar3;
   long lVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   float *pfVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   long lVar13;
   float *pfVar14;
   int iVar15;
   int iVar16;
   int iVar17;
   int iVar18;
   int iVar19;
   int iVar20;
   int *piVar21;
   lVar4 = *(long*)( param_2 + 0x510 );
   iVar15 = (int)( *(long*)( *(long*)( *(long*)( *(long*)( param_1 + 0x68 ) + 8 ) + 0x30 ) + *(long*)( param_1 + 0x38 ) * 8 ) / 2 );
   if (param_3 == (int*)0x0) {
      memset(param_4, 0, (long)iVar15 << 2);
      return 0;
   }

   iVar12 = *(int*)( lVar4 + 0x340 );
   iVar18 = *param_3 * iVar12;
   if (0xff < iVar18) {
      iVar18 = 0xff;
   }

   if (iVar18 < 0) {
      iVar18 = 0;
   }

   if (*(int*)( param_2 + 0x504 ) < 2) {
      iVar12 = 0;
   }
 else {
      piVar21 = (int*)( param_2 + 0x108 );
      lVar13 = 0;
      piVar1 = (int*)( param_2 + 0x10c + ( ulong )(*(int*)( param_2 + 0x504 ) - 2) * 4 );
      do {
         while (true) {
            if (0x7fff < (uint)param_3[*piVar21]) break;
            iVar3 = *(int*)( lVar4 + 0x344 + (long)*piVar21 * 4 );
            iVar20 = param_3[*piVar21] * iVar12;
            if (0xff < iVar20) {
               iVar20 = 0xff;
            }

            if (iVar20 < 0) {
               iVar20 = 0;
            }

            iVar10 = (int)lVar13;
            iVar19 = iVar3 - iVar10;
            iVar16 = iVar20 - iVar18;
            iVar5 = -iVar16;
            if (0 < iVar16) {
               iVar5 = iVar16;
            }

            iVar6 = iVar16 / iVar19;
            iVar7 = iVar6 + 1;
            if (iVar16 < 0) {
               iVar7 = iVar6 + -1;
            }

            iVar16 = iVar19 * iVar6;
            if (iVar16 < 1) {
               iVar16 = -iVar16;
            }

            iVar17 = iVar15;
            if (iVar3 < iVar15) {
               iVar17 = iVar3;
            }

            if (iVar10 < iVar17) {
               pfVar9 = (float*)( (long)param_4 + (long)iVar10 * 4 );
               *pfVar9 = *pfVar9 * *(float*)( FLOOR1_fromdB_LOOKUP + (long)iVar18 * 4 );
            }

            if (iVar10 + 1 < iVar17) {
               iVar11 = 0;
               pfVar9 = (float*)( (long)param_4 + (long)( iVar10 + 1 ) * 4 );
               do {
                  iVar11 = iVar11 + ( iVar5 - iVar16 );
                  iVar8 = iVar6;
                  if (iVar19 <= iVar11) {
                     iVar11 = iVar11 - iVar19;
                     iVar8 = iVar7;
                  }

                  iVar18 = iVar18 + iVar8;
                  pfVar14 = pfVar9 + 1;
                  *pfVar9 = *pfVar9 * *(float*)( FLOOR1_fromdB_LOOKUP + (long)iVar18 * 4 );
                  pfVar9 = pfVar14;
               }
 while ( pfVar14 != (float*)( (long)param_4 + ( ( ulong )(uint)(iVar17 + ( -2 - iVar10 )) + lVar13 ) * 4 + 8 ) );
            }

            piVar21 = piVar21 + 1;
            lVar13 = (long)iVar3;
            iVar18 = iVar20;
            if (piVar21 == piVar1) goto LAB_001003e3;
         }
;
         piVar21 = piVar21 + 1;
      }
 while ( piVar21 != piVar1 );
      LAB_001003e3:iVar12 = (int)lVar13;
   }

   if (iVar12 < iVar15) {
      fVar2 = *(float*)( FLOOR1_fromdB_LOOKUP + (long)iVar18 * 4 );
      pfVar9 = (float*)( (long)param_4 + (long)iVar12 * 4 );
      do {
         pfVar14 = pfVar9 + 1;
         *pfVar9 = *pfVar9 * fVar2;
         pfVar9 = pfVar14;
      }
 while ( (float*)( (long)param_4 + ( ( ulong )(uint)(( iVar15 + -1 ) - iVar12) + (long)iVar12 ) * 4 + 4 ) != pfVar14 );
   }

   return 1;
}
void floor1_pack(int *param_1, undefined8 param_2) {
   long lVar1;
   int iVar2;
   undefined4 uVar3;
   uint uVar4;
   int iVar5;
   long lVar6;
   int *piVar7;
   int *piVar8;
   int iVar9;
   long local_48;
   int local_40;
   lVar6 = 0;
   iVar5 = param_1[0xd2];
   oggpack_write(param_2, (long)*param_1, 5);
   local_48._0_4_ = -1;
   if (0 < *param_1) {
      do {
         oggpack_write(param_2, (long)param_1[lVar6 + 1], 4);
         iVar2 = param_1[lVar6 + 1];
         if (param_1[lVar6 + 1] <= (int)local_48) {
            iVar2 = (int)local_48;
         }

         lVar6 = lVar6 + 1;
         local_48._0_4_ = iVar2;
      }
 while ( (int)lVar6 < *param_1 );
      if (-1 < iVar2) {
         local_40 = 0;
         piVar8 = param_1 + 0x20;
         piVar7 = param_1;
         do {
            oggpack_write(param_2, (long)( *piVar8 + -1 ), 3);
            oggpack_write(param_2, (long)piVar8[0x10], 2);
            if (( piVar8[0x10] == 0 ) || ( oggpack_write(param_2, (long)piVar8[0x20], 8),0 < 1 << ( (byte)piVar8[0x10] & 0x1f ) )) {
               lVar6 = 0;
               do {
                  lVar1 = lVar6 + 0x50;
                  lVar6 = lVar6 + 1;
                  oggpack_write(param_2, (long)( piVar7[lVar1] + 1 ), 8);
               }
 while ( (int)lVar6 < 1 << ( (byte)piVar8[0x10] & 0x1f ) );
            }

            local_40 = local_40 + 1;
            piVar8 = piVar8 + 1;
            piVar7 = piVar7 + 8;
         }
 while ( local_40 <= iVar2 );
      }

   }

   iVar9 = 0;
   oggpack_write(param_2, (long)( param_1[0xd0] + -1 ), 2);
   iVar2 = ov_ilog(iVar5 + -1);
   oggpack_write(param_2, (long)iVar2, 4);
   uVar3 = ov_ilog(iVar5 + -1);
   local_48 = 0;
   iVar5 = 0;
   if (0 < *param_1) {
      do {
         iVar9 = iVar9 + param_1[(long)param_1[local_48 + 1] + 0x20];
         if (iVar5 < iVar9) {
            uVar4 = iVar9 - iVar5;
            piVar8 = param_1 + iVar5;
            lVar6 = (long)iVar5;
            do {
               piVar7 = piVar8 + 0xd3;
               piVar8 = piVar8 + 1;
               oggpack_write(param_2, (long)*piVar7, uVar3);
               iVar5 = iVar9;
            }
 while ( param_1 + (ulong)uVar4 + lVar6 != piVar8 );
         }

         local_48 = local_48 + 1;
      }
 while ( (int)local_48 < *param_1 );
   }

   return;
}
undefined4 *floor1_inverse1(long param_1, long param_2) {
   int *piVar1;
   undefined4 uVar2;
   int iVar3;
   uint uVar4;
   int iVar5;
   long lVar6;
   undefined4 *puVar7;
   long lVar8;
   byte bVar9;
   uint uVar10;
   int *piVar11;
   uint uVar12;
   long lVar13;
   uint uVar14;
   long lVar15;
   int local_58;
   piVar1 = *(int**)( param_2 + 0x510 );
   lVar8 = *(long*)( *(long*)( *(long*)( *(long*)( param_1 + 0x68 ) + 8 ) + 0x30 ) + 0x1328 );
   lVar13 = param_1 + 8;
   lVar6 = oggpack_read(lVar13, 1);
   if (lVar6 == 1) {
      puVar7 = (undefined4*)_vorbis_block_alloc(param_1, (long)*(int*)( param_2 + 0x504 ) << 2);
      uVar2 = ov_ilog(*(int*)( param_2 + 0x50c ) + -1);
      uVar2 = oggpack_read(lVar13, uVar2);
      *puVar7 = uVar2;
      uVar2 = ov_ilog(*(int*)( param_2 + 0x50c ) + -1);
      uVar2 = oggpack_read(lVar13, uVar2);
      local_58 = 2;
      lVar6 = 0;
      puVar7[1] = uVar2;
      if (0 < *piVar1) {
         do {
            lVar15 = (long)piVar1[lVar6 + 1];
            uVar4 = 0;
            iVar5 = piVar1[lVar15 + 0x20];
            bVar9 = (byte)piVar1[lVar15 + 0x30];
            if (( piVar1[lVar15 + 0x30] != 0 ) && ( uVar4 = vorbis_book_decode((long)piVar1[lVar15 + 0x40] * 0x60 + lVar8, lVar13) ),uVar4 == 0xffffffff) goto LAB_001006f3;
            if (0 < iVar5) {
               piVar11 = puVar7 + local_58;
               do {
                  while (true) {
                     uVar12 = (int)uVar4 >> ( bVar9 & 0x1f );
                     if (piVar1[(long)(int)( uVar4 & ( 1 << ( bVar9 & 0x1f ) ) - 1U ) + 0x50 + lVar15 * 8] < 0) break;
                     iVar3 = vorbis_book_decode((long)piVar1[(long)(int)( uVar4 & ( 1 << ( bVar9 & 0x1f ) ) - 1U ) + 0x50 + lVar15 * 8] * 0x60 + lVar8, lVar13);
                     *piVar11 = iVar3;
                     if (iVar3 == -1) goto LAB_001006f3;
                     piVar11 = piVar11 + 1;
                     uVar4 = uVar12;
                     if (piVar11 == puVar7 + (long)iVar5 + (long)local_58) goto LAB_00100868;
                  }
;
                  *piVar11 = 0;
                  piVar11 = piVar11 + 1;
                  uVar4 = uVar12;
               }
 while ( piVar11 != puVar7 + (long)iVar5 + (long)local_58 );
            }

            LAB_00100868:local_58 = local_58 + iVar5;
            lVar6 = lVar6 + 1;
         }
 while ( (int)lVar6 < *piVar1 );
      }

      lVar13 = 2;
      if (2 < *(int*)( param_2 + 0x504 )) {
         do {
            lVar8 = (long)*(int*)( param_2 + 0x400 + lVar13 * 4 );
            lVar6 = (long)*(int*)( param_2 + 0x304 + lVar13 * 4 );
            iVar3 = ( puVar7[lVar6] & 0x7fff ) - ( puVar7[lVar8] & 0x7fff );
            iVar5 = -iVar3;
            if (0 < iVar3) {
               iVar5 = iVar3;
            }

            iVar5 = ( ( piVar1[lVar13 + 0xd1] - piVar1[lVar8 + 0xd1] ) * iVar5 ) / ( piVar1[lVar6 + 0xd1] - piVar1[lVar8 + 0xd1] );
            uVar4 = puVar7[lVar13];
            if (iVar3 < 0) {
               iVar5 = -iVar5;
            }

            uVar12 = ( puVar7[lVar8] & 0x7fff ) + iVar5;
            if (uVar4 == 0) {
               puVar7[lVar13] = uVar12 | 0x8000;
            }
 else {
               uVar10 = *(int*)( param_2 + 0x50c ) - uVar12;
               uVar14 = uVar12;
               if ((int)uVar10 <= (int)uVar12) {
                  uVar14 = uVar10;
               }

               if ((int)uVar4 < (int)( uVar14 * 2 )) {
                  if (( uVar4 & 1 ) == 0) {
                     uVar4 = ( (int)uVar4 >> 1 ) + uVar12;
                  }
 else {
                     uVar4 = uVar12 - ( (int)( uVar4 + 1 ) >> 1 );
                  }

               }
 else if ((int)uVar10 <= (int)uVar12) {
                  uVar4 = ~uVar4 + uVar10 + uVar12;
               }

               puVar7[lVar13] = uVar4 & 0x7fff;
               puVar7[*(int*)( param_2 + 0x400 + lVar13 * 4 )] = puVar7[*(int*)( param_2 + 0x400 + lVar13 * 4 )] & 0x7fff;
               puVar7[*(int*)( param_2 + 0x304 + lVar13 * 4 )] = puVar7[*(int*)( param_2 + 0x304 + lVar13 * 4 )] & 0x7fff;
            }

            lVar13 = lVar13 + 1;
         }
 while ( (int)lVar13 < *(int*)( param_2 + 0x504 ) );
      }

   }
 else {
      LAB_001006f3:puVar7 = (undefined4*)0x0;
   }

   return puVar7;
}
void floor1_free_info(void *param_1) {
   if (param_1 != (void*)0x0) {
      free(param_1);
      return;
   }

   return;
}
int *floor1_look(undefined8 param_1, int *param_2) {
   int iVar1;
   int iVar2;
   int iVar3;
   int *piVar4;
   long *plVar5;
   size_t sVar6;
   int *piVar7;
   int *piVar8;
   ulong uVar9;
   ulong uVar10;
   long lVar11;
   int iVar12;
   int iVar13;
   int iVar14;
   int iVar15;
   ulong uVar16;
   int iVar17;
   int iVar18;
   size_t __nmemb;
   long in_FS_OFFSET;
   long local_248[65];
   long local_40;
   plVar5 = local_248;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar4 = (int*)calloc(1, 0x530);
   iVar3 = *param_2;
   *(int**)( piVar4 + 0x144 ) = param_2;
   piVar4[0x142] = param_2[0xd2];
   if (iVar3 < 1) {
      iVar17 = 0;
      __nmemb = 2;
      piVar4[0x141] = 2;
      LAB_00100a96:piVar7 = param_2 + 0xd1;
      do {
         *plVar5 = (long)piVar7;
         plVar5 = plVar5 + 1;
         piVar7 = piVar7 + 1;
      }
 while ( plVar5 != local_248 + __nmemb );
      qsort(local_248, __nmemb, 8, icomp);
      lVar11 = 0;
      do {
         *(int*)( (long)piVar4 + lVar11 + 0x104 ) = (int)( *(long*)( (long)local_248 + lVar11 * 2 ) - (long)( param_2 + 0xd1 ) >> 2 );
         lVar11 = lVar11 + 4;
      }
 while ( lVar11 != __nmemb * 4 );
      sVar6 = 0;
      do {
         piVar4[(long)piVar4[sVar6 + 0x41] + 0x82] = (int)sVar6;
         sVar6 = sVar6 + 1;
      }
 while ( __nmemb != sVar6 );
      piVar7 = piVar4;
      do {
         piVar8 = piVar7 + 1;
         *piVar7 = param_2[(long)piVar7[0x41] + 0xd1];
         piVar7 = piVar8;
      }
 while ( piVar4 + __nmemb != piVar8 );
      iVar3 = param_2[0xd0];
      if (iVar3 == 3) {
         piVar4[0x143] = 0x56;
      }
 else if (iVar3 < 4) {
         LAB_00100b4f:if (iVar3 == 1) {
            piVar4[0x143] = 0x100;
         }
 else if (iVar3 == 2) {
            piVar4[0x143] = 0x80;
         }

      }
 else if (iVar3 == 4) goto LAB_00100c35;
   }
 else {
      iVar17 = 0;
      piVar7 = param_2;
      do {
         piVar8 = piVar7 + 1;
         piVar7 = piVar7 + 1;
         iVar17 = iVar17 + param_2[(long)*piVar8 + 0x20];
      }
 while ( param_2 + iVar3 != piVar7 );
      iVar3 = iVar17 + 2;
      __nmemb = (size_t)iVar3;
      piVar4[0x141] = iVar3;
      if (0 < iVar3) goto LAB_00100a96;
      qsort(local_248, __nmemb, 8, icomp);
      iVar3 = param_2[0xd0];
      if (iVar3 == 3) {
         piVar4[0x143] = 0x56;
         goto LAB_00100c00;
      }

      if (iVar3 < 4) goto LAB_00100b4f;
      if (iVar3 != 4) goto LAB_00100c00;
      LAB_00100c35:piVar4[0x143] = 0x40;
   }

   if (0 < iVar17) {
      iVar3 = piVar4[0x142];
      uVar10 = 2;
      do {
         uVar9 = 0;
         uVar16 = 1;
         iVar18 = 0;
         iVar14 = iVar3;
         iVar13 = 0;
         do {
            while (true) {
               iVar15 = (int)uVar16;
               iVar1 = param_2[uVar9 + 0xd1];
               if (( ( iVar1 <= iVar13 ) || ( iVar2 = (int)uVar9 ),iVar12 = iVar1,param_2[uVar10 + 0xd1] <= iVar1 )) &&( iVar2= iVar18,iVar12 = iVar13,iVar1 < iVar14 );
               iVar18 = iVar2;
               uVar9 = uVar9 + 1;
               iVar13 = iVar12;
               if (uVar9 == uVar10) goto LAB_00100be7;
            }
;
            if (param_2[uVar10 + 0xd1] < iVar1) {
               uVar16 = uVar9 & 0xffffffff;
               iVar14 = iVar1;
            }

            iVar15 = (int)uVar16;
            uVar9 = uVar9 + 1;
         }
 while ( uVar9 != uVar10 );
         LAB_00100be7:piVar4[uVar10 + 0x100] = iVar18;
         piVar4[uVar10 + 0xc1] = iVar15;
         uVar10 = uVar10 + 1;
      }
 while ( (long)( iVar17 + 2 ) != uVar10 );
   }

   LAB_00100c00:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return piVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int *floor1_unpack(long param_1, undefined8 param_2) {
   long lVar1;
   byte bVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int *__ptr;
   int **ppiVar6;
   ulong uVar7;
   int *piVar8;
   size_t __nmemb;
   uint uVar9;
   long lVar10;
   long in_FS_OFFSET;
   int *local_260;
   uint local_254;
   long local_250;
   int *local_248[65];
   long local_40;
   lVar10 = 0;
   iVar4 = -1;
   lVar1 = *(long*)( param_1 + 0x30 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   __ptr = (int*)calloc(1, 0x460);
   iVar3 = oggpack_read(param_2, 5);
   *__ptr = iVar3;
   if (0 < iVar3) {
      do {
         iVar3 = oggpack_read(param_2, 4);
         __ptr[lVar10 + 1] = iVar3;
         if (iVar3 < 0) goto LAB_00100d5d;
         if (iVar4 < iVar3) {
            iVar4 = iVar3;
         }

         lVar10 = lVar10 + 1;
      }
 while ( (int)lVar10 < *__ptr );
      piVar8 = __ptr + 0x20;
      local_254 = 0;
      local_260 = __ptr;
      do {
         iVar3 = oggpack_read(param_2, 3);
         *piVar8 = iVar3 + 1;
         iVar3 = oggpack_read(param_2, 2);
         piVar8[0x10] = iVar3;
         if (iVar3 < 0) goto LAB_00100d5d;
         if (iVar3 == 0) {
            iVar3 = piVar8[0x20];
         }
 else {
            iVar3 = oggpack_read(param_2, 8);
            piVar8[0x20] = iVar3;
         }

         if (( iVar3 < 0 ) || ( *(int*)( lVar1 + 0x20 ) <= iVar3 )) goto LAB_00100d5d;
         lVar10 = 0;
         if (0 < 1 << ( (byte)piVar8[0x10] & 0x1f )) {
            do {
               iVar3 = oggpack_read(param_2, 8);
               iVar3 = iVar3 + -1;
               local_260[lVar10 + 0x50] = iVar3;
               if (( iVar3 < -1 ) || ( *(int*)( lVar1 + 0x20 ) <= iVar3 )) goto LAB_00100d5d;
               lVar10 = lVar10 + 1;
            }
 while ( (int)lVar10 < 1 << ( (byte)piVar8[0x10] & 0x1f ) );
         }

         local_254 = local_254 + 1;
         piVar8 = piVar8 + 1;
         local_260 = local_260 + 8;
      }
 while ( (int)local_254 <= iVar4 );
   }

   iVar4 = oggpack_read(param_2, 2);
   __ptr[0xd0] = iVar4 + 1;
   iVar4 = oggpack_read(param_2, 4);
   if (-1 < iVar4) {
      bVar2 = (byte)iVar4;
      if (*__ptr < 1) {
         __nmemb = 2;
         __ptr[0xd1] = 0;
         uVar9 = 1;
         local_254 = 0;
         __ptr[0xd2] = 1 << ( bVar2 & 0x1f );
         uVar7 = 1;
         LAB_00100fc2:piVar8 = __ptr + 0xd1;
         ppiVar6 = local_248;
         do {
            *ppiVar6 = piVar8;
            piVar8 = piVar8 + 1;
            ppiVar6 = ppiVar6 + 1;
         }
 while ( piVar8 != __ptr + uVar7 + 0xd2 );
         qsort(local_248, __nmemb, 8, icomp);
         if (uVar9 != 0) {
            ppiVar6 = local_248 + 1;
            do {
               iVar4 = *local_248[0];
               local_248[0] = *ppiVar6;
               if (iVar4 == *local_248[0]) goto LAB_00100d5d;
               ppiVar6 = ppiVar6 + 1;
            }
 while ( local_248 + (ulong)local_254 + 2 != ppiVar6 );
         }

         goto LAB_00100d67;
      }

      local_254 = __ptr[(long)__ptr[1] + 0x20];
      if ((int)local_254 < 0x40) {
         local_250 = 1;
         iVar3 = 0;
         do {
            if (iVar3 < (int)local_254) {
               lVar1 = (long)( iVar3 + 1 );
               do {
                  lVar10 = lVar1;
                  iVar5 = oggpack_read(param_2, iVar4);
                  __ptr[lVar10 + 0xd2] = iVar5;
                  if (( iVar5 < 0 ) || ( 1 << ( bVar2 & 0x1f ) <= iVar5 )) goto LAB_00100d5d;
                  lVar1 = lVar10 + 1;
               }
 while ( lVar10 + 1 != (long)iVar3 + 1 + ( ulong )(local_254 - iVar3) );
               iVar3 = (int)lVar10;
            }

            if (*__ptr <= (int)local_250) {
               __ptr[0xd1] = 0;
               __ptr[0xd2] = 1 << ( bVar2 & 0x1f );
               uVar9 = local_254 + 1;
               uVar7 = (ulong)uVar9;
               __nmemb = (size_t)(int)( local_254 + 2 );
               if (-1 < (int)uVar9) goto LAB_00100fc2;
               qsort(local_248, __nmemb, 8, icomp);
               goto LAB_00100d67;
            }

            lVar1 = local_250 + 1;
            local_250 = local_250 + 1;
            local_254 = local_254 + __ptr[(long)__ptr[lVar1] + 0x20];
         }
 while ( (int)local_254 < 0x40 );
      }

   }

   LAB_00100d5d:free(__ptr);
   __ptr = (int*)0x0;
   LAB_00100d67:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return __ptr;
}
undefined8 fit_line_constprop_0(int *param_1, int param_2, int *param_3, int *param_4, long param_5) {
   int iVar1;
   double dVar2;
   ulong uVar3;
   int iVar4;
   int *piVar5;
   int *piVar6;
   double dVar7;
   double dVar8;
   double dVar9;
   double dVar10;
   double dVar11;
   double dVar12;
   uVar3 = _LC6;
   dVar2 = _LC5;
   iVar4 = param_1[(long)param_2 * 0xe + -0xd];
   if (0 < param_2) {
      dVar11 = 0.0;
      dVar9 = 0.0;
      dVar8 = 0.0;
      dVar10 = 0.0;
      piVar5 = param_1;
      dVar12 = dVar10;
      do {
         iVar1 = piVar5[7];
         piVar6 = piVar5 + 0xe;
         dVar7 = (double)( ( (float)( piVar5[0xd] + iVar1 ) * *(float*)( param_5 + 0x454 ) ) / (float)( iVar1 + 1 ) ) + _LC4;
         dVar10 = dVar10 + (double)piVar5[2] * dVar7 + (double)piVar5[8];
         dVar12 = dVar12 + (double)piVar5[3] * dVar7 + (double)piVar5[9];
         dVar8 = dVar8 + (double)piVar5[4] * dVar7 + (double)piVar5[10];
         dVar9 = dVar9 + (double)piVar5[6] * dVar7 + (double)piVar5[0xc];
         dVar11 = dVar11 + dVar7 * (double)iVar1 + (double)piVar5[0xd];
         piVar5 = piVar6;
      }
 while ( param_1 + (long)param_2 * 0xe != piVar6 );
      dVar7 = dVar8 * dVar11 - dVar10 * dVar10;
      if (0.0 < dVar7) {
         dVar8 = ( dVar8 * dVar12 - dVar10 * dVar9 ) / dVar7;
         dVar7 = ( dVar9 * dVar11 - dVar10 * dVar12 ) / dVar7;
         dVar12 = (double)*param_1 * dVar7 + dVar8;
         if ((double)( (ulong)dVar12 & _LC6 ) < _LC5) {
            dVar12 = (double)( ( ulong )(( (double)( (ulong)dVar12 & _LC6 ) + _LC5 ) - _LC5) | ~_LC6 & (ulong)dVar12 );
         }

         *param_3 = (int)dVar12;
         dVar8 = (double)iVar4 * dVar7 + dVar8;
         dVar12 = (double)( (ulong)dVar8 & uVar3 );
         if (dVar12 < dVar2) {
            dVar8 = (double)( ( ulong )(( dVar12 + dVar2 ) - dVar2) | ~uVar3 & (ulong)dVar8 );
         }

         *param_4 = (int)dVar8;
         iVar4 = *param_3;
         if (0x3ff < iVar4) {
            iVar4 = 0x3ff;
         }

         *param_3 = iVar4;
         iVar4 = *param_4;
         if (0x3ff < *param_4) {
            iVar4 = 0x3ff;
         }

         *param_4 = iVar4;
         iVar4 = *param_3;
         if (iVar4 < 0) {
            iVar4 = 0;
         }

         *param_3 = iVar4;
         if (*param_4 < 0) {
            *param_4 = 0;
         }

         return 0;
      }

   }

   *param_3 = 0;
   *param_4 = 0;
   return 1;
}
void floor1_free_look(void *param_1) {
   if (param_1 != (void*)0x0) {
      free(param_1);
      return;
   }

   return;
}
/* WARNING: Type propagation algorithm not settling */int *floor1_fit(undefined8 param_1, long param_2, long param_3, long param_4) {
   float *pfVar1;
   ulong __n;
   float fVar2;
   float fVar3;
   float fVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   long lVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   undefined8 *puVar14;
   uint *puVar15;
   long lVar16;
   int *piVar17;
   int iVar18;
   long lVar19;
   uint *puVar20;
   int iVar21;
   int iVar22;
   uint *extraout_RDX;
   uint *extraout_RDX_00;
   float *pfVar23;
   int iVar24;
   int iVar25;
   long lVar26;
   int iVar27;
   int iVar28;
   uint uVar29;
   int iVar30;
   long lVar31;
   int iVar32;
   long lVar33;
   long in_FS_OFFSET;
   bool bVar34;
   float fVar35;
   float fVar36;
   float fVar37;
   undefined4 uVar38;
   uint uVar39;
   uint local_1454;
   int local_13b0;
   int local_13ac;
   uint local_13a8;
   uint local_13a4;
   uint local_13a0;
   uint local_139c;
   undefined1 local_1398[8];
   uint local_1390[66];
   undefined1 local_1288[8];
   uint local_1280[66];
   uint local_1178[68];
   uint local_1068[68];
   uint local_f58[68];
   undefined1 local_e48[3592];
   long local_40;
   lVar8 = *(long*)( param_2 + 0x510 );
   iVar13 = *(int*)( param_2 + 0x504 );
   lVar19 = (long)iVar13;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar38 = *(undefined4*)( param_2 + 0x508 );
   if (lVar19 < 1) {
      if (lVar19 == 0) {
         iVar13 = accumulate_fit(param_4, param_3, 0, uVar38, local_e48, uVar38, lVar8);
         if (iVar13 != 0) {
            local_13b0 = -200;
            local_13ac = -200;
            fit_line_constprop_0(local_e48, 0xffffffff, &local_13b0, &local_13ac, lVar8);
            local_1398 = (undefined1[8])CONCAT44(local_13ac, local_13b0);
            puVar15 = extraout_RDX_00;
            iVar13 = local_13b0;
            iVar12 = local_13b0;
            iVar25 = local_13ac;
            iVar18 = local_13ac;
            local_1288 = local_1398;
            goto LAB_00101a6d;
         }

      }

   }
 else {
      __n = lVar19 * 4;
      puVar14 = (undefined8*)local_1398;
      if (( __n & 4 ) == 0) goto LAB_001013e8;
      /* WARNING: Ignoring partial resolution of indirect */
      local_1398._0_4_ = 0xffffff38;
      for (puVar14 = (undefined8*)( (long)local_1398 + 4 ); puVar14 != (undefined8*)( (long)local_1398 + lVar19 * 4 ); puVar14 = puVar14 + 1) {
         LAB_001013e8:*(undefined4*)puVar14 = 0xffffff38;
         *(undefined4*)( (long)puVar14 + 4 ) = 0xffffff38;
      }

      puVar14 = (undefined8*)local_1288;
      if (( __n & 4 ) == 0) goto LAB_00101430;
      /* WARNING: Ignoring partial resolution of indirect */
      local_1288._0_4_ = 0xffffff38;
      for (puVar14 = (undefined8*)( (long)local_1288 + 4 ); (undefined8*)( (long)local_1288 + lVar19 * 4 ) != puVar14; puVar14 = puVar14 + 1) {
         LAB_00101430:*(undefined4*)puVar14 = 0xffffff38;
         *(undefined4*)( (long)puVar14 + 4 ) = 0xffffff38;
      }

      memset(local_1178, 0, __n);
      puVar15 = local_1068;
      if (( __n & 4 ) == 0) goto LAB_001014a0;
      local_1068[0] = 1;
      for (puVar15 = local_1068 + 1; puVar15 != local_1068 + lVar19; puVar15 = puVar15 + 2) {
         LAB_001014a0:*puVar15 = 1;
         puVar15[1] = 1;
      }

      memset(local_f58, 0xff, __n);
      if (lVar19 != 1) {
         lVar31 = 0;
         lVar33 = 0;
         do {
            lVar31 = lVar31 + 1;
            iVar12 = accumulate_fit();
            lVar33 = lVar33 + iVar12;
         }
 while ( lVar31 != lVar19 + -1 );
         if (lVar33 != 0) {
            local_13b0 = -200;
            local_13ac = -200;
            fit_line_constprop_0(local_e48, iVar13 + -1, &local_13b0, &local_13ac, lVar8, 0x1014cb, uVar38);
            local_1288 = (undefined1[8])CONCAT44(local_13ac, local_13b0);
            local_1398 = (undefined1[8])CONCAT44(local_13ac, local_13b0);
            puVar15 = extraout_RDX;
            iVar13 = local_13b0;
            iVar12 = local_13b0;
            iVar25 = local_13ac;
            iVar18 = local_13ac;
            if (lVar19 != 2) {
               lVar31 = 2;
               fVar36 = _LC1;
               fVar37 = _LC0;
               do {
                  while (true) {
                     iVar13 = *(int*)( param_2 + 0x208 + lVar31 * 4 );
                     lVar33 = (long)iVar13;
                     uVar5 = local_1178[lVar33];
                     uVar6 = local_1068[lVar33];
                     lVar16 = (long)(int)uVar5;
                     puVar15 = (uint*)(ulong)uVar5;
                     if (local_f58[lVar16] != uVar6) break;
                     LAB_00101a40:lVar31 = lVar31 + 1;
                     if (lVar19 == lVar31) goto LAB_00101a4f;
                  }
;
                  lVar26 = (long)(int)uVar6;
                  iVar12 = *(int*)( param_2 + 0x208 + lVar16 * 4 );
                  local_f58[lVar16] = uVar6;
                  iVar25 = *(int*)( param_2 + 0x208 + lVar26 * 4 );
                  iVar18 = *(int*)( lVar8 + 0x344 + lVar26 * 4 );
                  iVar32 = *(int*)( lVar8 + 0x344 + lVar16 * 4 );
                  uVar39 = local_1390[lVar16 + -2];
                  uVar29 = local_1280[lVar16 + -2];
                  if ((int)uVar39 < 0) {
                     bVar34 = uVar29 == 0xffffffff;
                     uVar39 = uVar29;
                  }
 else {
                     bVar34 = false;
                     if (-1 < (int)uVar29) {
                        uVar39 = (int)( uVar39 + uVar29 ) >> 1;
                     }

                  }

                  uVar29 = local_1390[lVar26 + -2];
                  uVar7 = local_1280[lVar26 + -2];
                  if ((int)uVar29 < 0) {
                     bVar34 = (bool)( bVar34 | uVar7 == 0xffffffff );
                     local_1454 = uVar7;
                  }
 else {
                     local_1454 = (int)( uVar29 + uVar7 ) >> 1;
                     if ((int)uVar7 < 0) {
                        local_1454 = uVar29;
                     }

                  }

                  if (bVar34) {
                     /* WARNING: Subroutine does not return */
                     exit(1);
                  }

                  iVar30 = iVar18 - iVar32;
                  fVar2 = *(float*)( lVar8 + 0x448 );
                  iVar24 = local_1454 - uVar39;
                  fVar3 = *(float*)( lVar8 + 0x44c );
                  fVar4 = *(float*)( lVar8 + 0x450 );
                  iVar9 = iVar24 / iVar30;
                  iVar10 = iVar9 + 1;
                  if (iVar24 < 0) {
                     iVar10 = iVar9 + -1;
                  }

                  pfVar1 = (float*)( param_4 + (long)iVar32 * 4 );
                  fVar35 = *pfVar1;
                  iVar21 = (int)( fVar35 * fVar37 + fVar36 );
                  if (iVar21 < 0) {
                     iVar21 = 0;
                  }

                  if (0x3ff < iVar21) {
                     iVar21 = 0x3ff;
                  }

                  pfVar23 = (float*)( (long)iVar32 * 4 + param_3 );
                  if (fVar35 <= *pfVar23 + *(float*)( lVar8 + 0x458 )) {
                     if (( (float)iVar21 <= fVar2 + (float)(int)uVar39 ) && ( (float)(int)uVar39 - fVar3 <= (float)iVar21 )) goto LAB_001017ae;
                     LAB_0010189b:local_13a8 = 0xffffff38;
                     local_13a4 = 0xffffff38;
                     local_13a0 = 0xffffff38;
                     local_139c = 0xffffff38;
                     iVar12 = fit_line_constprop_0(local_e48 + (long)iVar12 * 0x38, iVar13 - iVar12, &local_13a8, &local_13a4);
                     iVar25 = fit_line_constprop_0(local_e48 + lVar33 * 0x38, iVar25 - iVar13, &local_13a0, &local_139c);
                     if (iVar12 == 0) {
                        puVar15 = (uint*)(ulong)local_13a4;
                        if (iVar25 != 0) {
                           local_139c = local_1454;
                           local_13a0 = local_13a4;
                        }

                     }
 else {
                        puVar15 = (uint*)(ulong)local_13a0;
                        local_13a4 = local_13a0;
                        local_13a8 = uVar39;
                        if (iVar25 != 0) goto LAB_00101c09;
                     }

                     local_1280[lVar16 + -2] = local_13a8;
                     if (uVar5 == 0) {
                        local_1398._0_4_ = local_13a8;
                     }

                     *(uint*)( (long)local_1398 + lVar31 * 4 ) = (uint)puVar15;
                     *(uint*)( (long)local_1288 + lVar31 * 4 ) = local_13a0;
                     local_1390[lVar26 + -2] = local_139c;
                     if (uVar6 == 1) {
                        local_1288._4_4_ = local_139c;
                     }

                     if (-1 < (int)( (uint)puVar15 & local_13a0 )) {
                        lVar33 = (long)( iVar13 + -1 );
                        if (iVar13 + -1 < 0) {
                           lVar33 = (long)( iVar13 + 1 );
                        }
 else {
                           do {
                              if (local_1068[lVar33] != uVar6) break;
                              local_1068[lVar33] = (uint)lVar31;
                              bVar34 = lVar33 != 0;
                              lVar33 = lVar33 + -1;
                           }
 while ( bVar34 );
                           lVar33 = (long)( iVar13 + 1 );
                           puVar15 = local_1068;
                           if (lVar19 <= lVar33) goto LAB_00101a40;
                        }

                        do {
                           puVar15 = local_1178;
                           if (local_1178[lVar33] != uVar5) break;
                           local_1178[lVar33] = (uint)lVar31;
                           lVar33 = lVar33 + 1;
                        }
 while ( lVar19 != lVar33 );
                     }

                     goto LAB_00101a40;
                  }

                  LAB_001017ae:puVar15 = (uint*)( ulong )(iVar32 + 1U);
                  iVar21 = ( uVar39 - iVar21 ) * ( uVar39 - iVar21 );
                  if ((int)( iVar32 + 1U ) < iVar18) {
                     iVar11 = -iVar24;
                     if (0 < iVar24) {
                        iVar11 = iVar24;
                     }

                     iVar24 = iVar30 * iVar9;
                     if (iVar24 < 1) {
                        iVar24 = -iVar24;
                     }

                     iVar27 = 0;
                     puVar15 = (uint*)0x0;
                     uVar29 = uVar39;
                     do {
                        puVar20 = puVar15;
                        iVar27 = iVar27 + ( iVar11 - iVar24 );
                        iVar22 = iVar9;
                        if (iVar30 <= iVar27) {
                           iVar27 = iVar27 - iVar30;
                           iVar22 = iVar10;
                        }

                        uVar29 = uVar29 + iVar22;
                        fVar35 = pfVar1[(long)puVar20 + 1];
                        iVar28 = (int)( fVar35 * fVar37 + fVar36 );
                        iVar22 = 0;
                        if (-1 < iVar28) {
                           iVar22 = iVar28;
                        }

                        if (0x3ff < iVar22) {
                           iVar22 = 0x3ff;
                        }

                        iVar21 = iVar21 + ( uVar29 - iVar22 ) * ( uVar29 - iVar22 );
                        if (( fVar35 <= pfVar23[(long)puVar20 + 1] + *(float*)( lVar8 + 0x458 ) ) && ( 0 < iVar28 )) {
                           if (( fVar2 + (float)(int)uVar29 < (float)iVar22 ) || ( (float)iVar22 < (float)(int)uVar29 - fVar3 )) goto LAB_0010189b;
                        }

                        puVar15 = (uint*)( (long)puVar20 + 1 );
                     }
 while ( puVar20 != (uint*)( ulong )(uint)(( iVar18 + -2 ) - iVar32) );
                     iVar18 = (int)puVar20 + 2;
                     fVar35 = (float)iVar18;
                  }
 else {
                     iVar18 = 1;
                     fVar35 = _LC8;
                  }

                  if (( ( ( fVar2 * fVar2 ) / fVar35 <= fVar4 ) && ( ( fVar3 * fVar3 ) / fVar35 <= fVar4 ) ) && ( puVar15 = (uint*)( (long)iVar21 % (long)iVar18 & 0xffffffff ) ),fVar4 < (float)( iVar21 / iVar18 )) goto LAB_0010189b;
                  LAB_00101c09:*(undefined4*)( (long)local_1398 + lVar31 * 4 ) = 0xffffff38;
                  *(undefined4*)( (long)local_1288 + lVar31 * 4 ) = 0xffffff38;
                  lVar31 = lVar31 + 1;
               }
 while ( lVar19 != lVar31 );
               LAB_00101a4f:iVar13 = local_1398._0_4_;
               iVar12 = local_1288._0_4_;
               iVar25 = local_1398._4_4_;
               iVar18 = local_1288._4_4_;
            }

            LAB_00101a6d:piVar17 = (int*)_vorbis_block_alloc(param_1, lVar19 * 4, puVar15);
            iVar32 = iVar12;
            if (( -1 < iVar13 ) && ( iVar32 = -1 < iVar12 )) {
               iVar32 = iVar13 + iVar12 >> 1;
            }

            *piVar17 = iVar32;
            iVar13 = iVar18;
            if (( -1 < iVar25 ) && ( iVar13 = -1 < iVar18 )) {
               iVar13 = iVar25 + iVar18 >> 1;
            }

            piVar17[1] = iVar13;
            lVar31 = 2;
            if (2 < lVar19) {
               do {
                  while (true) {
                     lVar33 = (long)*(int*)( param_2 + 0x400 + lVar31 * 4 );
                     lVar16 = (long)*(int*)( param_2 + 0x304 + lVar31 * 4 );
                     iVar13 = *(int*)( lVar8 + 0x344 + lVar33 * 4 );
                     iVar25 = ( piVar17[lVar16] & 0x7fffU ) - ( piVar17[lVar33] & 0x7fffU );
                     iVar12 = -iVar25;
                     if (0 < iVar25) {
                        iVar12 = iVar25;
                     }

                     iVar13 = ( ( *(int*)( lVar8 + 0x344 + lVar31 * 4 ) - iVar13 ) * iVar12 ) / ( *(int*)( lVar8 + 0x344 + lVar16 * 4 ) - iVar13 );
                     uVar5 = local_1390[lVar31 + -2];
                     if (iVar25 < 0) {
                        iVar13 = -iVar13;
                     }

                     uVar39 = iVar13 + ( piVar17[lVar33] & 0x7fffU );
                     uVar6 = local_1280[lVar31 + -2];
                     uVar29 = uVar6;
                     if (( -1 < (int)uVar5 ) && ( uVar29 = uVar5 ),-1 < (int)uVar6) {
                        uVar29 = (int)( uVar6 + uVar5 ) >> 1;
                     }

                     if (( uVar29 != uVar39 ) && ( -1 < (int)uVar29 )) break;
                     piVar17[lVar31] = uVar39 | 0x8000;
                     lVar31 = lVar31 + 1;
                     if (lVar19 == lVar31) goto LAB_00101b96;
                  }
;
                  piVar17[lVar31] = uVar29;
                  lVar31 = lVar31 + 1;
               }
 while ( lVar19 != lVar31 );
            }

            goto LAB_00101b96;
         }

      }

   }

   piVar17 = (int*)0x0;
   LAB_00101b96:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return piVar17;
}
long floor1_interpolate_fit(undefined8 param_1, long param_2, long param_3, long param_4, int param_5) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   if (param_3 != 0) {
      lVar2 = 0;
      if (param_4 != 0) {
         lVar4 = (long)*(int*)( param_2 + 0x504 );
         lVar2 = _vorbis_block_alloc(param_1, lVar4 * 4);
         if (0 < lVar4) {
            lVar3 = 0;
            do {
               iVar1 = ( *(uint*)( param_3 + lVar3 * 4 ) & 0x7fff ) * ( 0x10000 - param_5 ) + 0x8000 + ( *(uint*)( param_4 + lVar3 * 4 ) & 0x7fff ) * param_5;
               *(int*)( lVar2 + lVar3 * 4 ) = iVar1 >> 0x10;
               if (( ( *(byte*)( param_3 + 1 + lVar3 * 4 ) & 0x80 ) != 0 ) && ( ( *(byte*)( param_4 + 1 + lVar3 * 4 ) & 0x80 ) != 0 )) {
                  *(uint*)( lVar2 + lVar3 * 4 ) = (int)(short)( (uint)iVar1 >> 0x10 ) | 0x8000;
               }

               lVar3 = lVar3 + 1;
            }
 while ( lVar4 != lVar3 );
         }

      }

      return lVar2;
   }

   return 0;
}
undefined8 floor1_encode(undefined8 param_1, long param_2, long param_3, uint *param_4, void *param_5) {
   int *piVar1;
   uint uVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   undefined4 uVar6;
   uint uVar7;
   long lVar8;
   long lVar9;
   undefined8 uVar10;
   byte bVar11;
   uint uVar12;
   int iVar13;
   uint uVar14;
   int iVar15;
   int iVar16;
   uint *puVar17;
   uint *puVar18;
   long lVar19;
   uint uVar20;
   int iVar21;
   long lVar22;
   long lVar23;
   uint uVar24;
   int iVar25;
   int *piVar26;
   int iVar27;
   int iVar28;
   long lVar29;
   int iVar30;
   long in_FS_OFFSET;
   long local_1e8;
   long local_1d8;
   undefined1 local_188[16];
   undefined1 local_178[16];
   undefined1 local_168[16];
   undefined1 local_158[16];
   undefined8 local_148;
   uint local_140[64];
   long local_40;
   piVar1 = *(int**)( param_3 + 0x510 );
   lVar29 = (long)*(int*)( param_3 + 0x504 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar9 = *(long*)( *(long*)( *(long*)( param_2 + 0x68 ) + 8 ) + 0x30 );
   lVar19 = *(long*)( lVar9 + 0x1328 );
   if (param_4 == (uint*)0x0) {
      oggpack_write(param_1, 0, 1);
      memset(param_5, 0, (long)( *(int*)( param_2 + 0x48 ) / 2 ) << 2);
      uVar10 = 0;
   }
 else {
      uVar20 = *param_4;
      if (lVar29 < 1) {
         local_148 = *(undefined8*)param_4;
         uVar14 = param_4[1];
      }
 else {
         puVar18 = param_4;
         do {
            iVar5 = piVar1[0xd0];
            uVar20 = *puVar18 & 0x7fff;
            if (iVar5 == 3) {
               uVar20 = uVar20 / 0xc;
            }
 else if (iVar5 < 4) {
               if (iVar5 == 1) {
                  uVar20 = (int)uVar20 >> 2;
               }
 else if (iVar5 == 2) {
                  uVar20 = (int)uVar20 >> 3;
               }

            }
 else if (iVar5 == 4) {
               uVar20 = (int)uVar20 >> 4;
            }

            puVar17 = puVar18 + 1;
            *puVar18 = *puVar18 & 0x8000 | uVar20;
            puVar18 = puVar17;
         }
 while ( param_4 + lVar29 != puVar17 );
         uVar20 = *param_4;
         uVar14 = param_4[1];
         local_148 = *(undefined8*)param_4;
         if (2 < lVar29) {
            lVar23 = 2;
            do {
               while (true) {
                  lVar8 = (long)*(int*)( param_3 + 0x400 + lVar23 * 4 );
                  lVar22 = (long)*(int*)( param_3 + 0x304 + lVar23 * 4 );
                  puVar18 = param_4 + lVar22;
                  uVar24 = param_4[lVar8] & 0x7fff;
                  iVar13 = ( *puVar18 & 0x7fff ) - uVar24;
                  iVar5 = -iVar13;
                  if (0 < iVar13) {
                     iVar5 = iVar13;
                  }

                  iVar5 = ( iVar5 * ( piVar1[lVar23 + 0xd1] - piVar1[lVar8 + 0xd1] ) ) / ( piVar1[lVar22 + 0xd1] - piVar1[lVar8 + 0xd1] );
                  if (iVar13 < 0) {
                     iVar5 = -iVar5;
                  }

                  uVar2 = iVar5 + uVar24;
                  uVar7 = param_4[lVar23];
                  if (( ( uVar7 & 0x8000 ) == 0 ) && ( uVar7 != uVar2 )) break;
                  local_140[lVar23 + -2] = 0;
                  param_4[lVar23] = uVar2 | 0x8000;
                  lVar23 = lVar23 + 1;
                  if (lVar29 == lVar23) goto LAB_0010206e;
               }
;
               uVar12 = *(int*)( param_3 + 0x50c ) - uVar2;
               if ((int)uVar2 < (int)uVar12) {
                  uVar12 = uVar2;
               }

               iVar5 = uVar7 - uVar2;
               if (iVar5 < 0) {
                  if (iVar5 < (int)-uVar12) {
                     uVar7 = ( uVar12 - iVar5 ) - 1;
                  }
 else {
                     uVar7 = ~(iVar5 * 2);
                  }

               }
 else {
                  uVar7 = iVar5 * 2;
                  if ((int)uVar12 <= iVar5) {
                     uVar7 = uVar12 + iVar5;
                  }

               }

               local_140[lVar23 + -2] = uVar7;
               lVar23 = lVar23 + 1;
               param_4[lVar8] = uVar24;
               *puVar18 = *puVar18 & 0x7fff;
            }
 while ( lVar29 != lVar23 );
         }

      }

      LAB_0010206e:oggpack_write(param_1, 1, 1);
      *(long*)( param_3 + 0x528 ) = *(long*)( param_3 + 0x528 ) + 1;
      iVar5 = ov_ilog(*(int*)( param_3 + 0x50c ) + -1);
      *(long*)( param_3 + 0x520 ) = *(long*)( param_3 + 0x520 ) + (long)( iVar5 * 2 );
      uVar6 = ov_ilog(*(int*)( param_3 + 0x50c ) + -1);
      oggpack_write(param_1, (long)(int)uVar20, uVar6);
      uVar6 = ov_ilog(*(int*)( param_3 + 0x50c ) + -1);
      oggpack_write(param_1, (long)(int)uVar14, uVar6);
      local_1d8 = 2;
      local_1e8 = 0;
      if (0 < *piVar1) {
         do {
            local_188 = (undefined1[16])0x0;
            lVar29 = (long)piVar1[local_1e8 + 1];
            local_178 = (undefined1[16])0x0;
            iVar5 = piVar1[lVar29 + 0x20];
            iVar13 = piVar1[lVar29 + 0x30];
            if (iVar13 != 0) {
               local_168 = (undefined1[16])0x0;
               iVar30 = 1 << ( (byte)iVar13 & 0x1f );
               local_158 = (undefined1[16])0x0;
               if (0 < iVar30) {
                  lVar23 = 0;
                  do {
                     iVar16 = *(int*)( (long)piVar1 + lVar23 + lVar29 * 0x20 + 0x140 );
                     uVar6 = 1;
                     if (-1 < iVar16) {
                        uVar6 = *(undefined4*)( *(long*)( lVar9 + 0xb28 + (long)iVar16 * 8 ) + 8 );
                     }

                     *(undefined4*)( local_168 + lVar23 ) = uVar6;
                     lVar23 = lVar23 + 4;
                  }
 while ( lVar23 != (long)iVar30 * 4 );
               }

               if (iVar5 < 1) {
                  uVar20 = 0;
               }
 else {
                  iVar16 = 0;
                  uVar20 = 0;
                  puVar18 = local_140 + local_1d8 + -2;
                  piVar26 = (int*)local_188;
                  do {
                     if (0 < iVar30) {
                        lVar23 = 0;
                        do {
                           if ((int)*puVar18 < *(int*)( local_168 + lVar23 * 4 )) {
                              iVar15 = (int)lVar23;
                              *piVar26 = iVar15;
                              goto LAB_00102472;
                           }

                           lVar23 = lVar23 + 1;
                        }
 while ( iVar30 != lVar23 );
                     }

                     iVar15 = *piVar26;
                     LAB_00102472:bVar11 = (byte)iVar16;
                     piVar26 = piVar26 + 1;
                     iVar16 = iVar16 + iVar13;
                     puVar18 = puVar18 + 1;
                     uVar20 = uVar20 | iVar15 << ( bVar11 & 0x1f );
                  }
 while ( piVar26 != (int*)( (long)local_188 + (long)iVar5 * 4 ) );
               }

               iVar13 = vorbis_book_encode((long)piVar1[lVar29 + 0x40] * 0x60 + lVar19, uVar20, param_1);
               *(long*)( param_3 + 0x518 ) = *(long*)( param_3 + 0x518 ) + (long)iVar13;
            }

            if (0 < iVar5) {
               lVar8 = 0;
               lVar23 = (long)iVar5 * 4;
               do {
                  while (piVar1[(long)*(int*)( (long)local_188 + lVar8 ) + 0x50 + lVar29 * 8] < 0) {
                     LAB_001021c8:lVar8 = lVar8 + 4;
                     if (lVar23 - lVar8 == 0) goto LAB_00102233;
                  }
;
                  iVar13 = *(int*)( (long)local_140 + lVar8 + local_1d8 * 4 + -8 );
                  lVar22 = (long)piVar1[(long)*(int*)( (long)local_188 + lVar8 ) + 0x50 + lVar29 * 8] * 0x60 + lVar19;
                  if (*(long*)( lVar22 + 8 ) <= (long)iVar13) goto LAB_001021c8;
                  lVar8 = lVar8 + 4;
                  iVar13 = vorbis_book_encode(lVar22, iVar13, param_1);
                  *(long*)( param_3 + 0x520 ) = *(long*)( param_3 + 0x520 ) + (long)iVar13;
               }
 while ( lVar23 - lVar8 != 0 );
            }

            LAB_00102233:local_1e8 = local_1e8 + 1;
            local_1d8 = local_1d8 + iVar5;
         }
 while ( local_1e8 < *piVar1 );
      }

      lVar19 = 0;
      lVar29 = 1;
      iVar5 = *param_4 * piVar1[0xd0];
      iVar13 = (int)( *(long*)( lVar9 + *(long*)( param_2 + 0x38 ) * 8 ) / 2 );
      if (*(int*)( param_3 + 0x504 ) < 2) {
         lVar19 = 0;
      }
 else {
         do {
            lVar9 = (long)*(int*)( param_3 + 0x104 + lVar29 * 4 );
            if (param_4[lVar9] < 0x8000) {
               iVar21 = param_4[lVar9] * piVar1[0xd0];
               iVar30 = piVar1[lVar9 + 0xd1];
               iVar15 = (int)lVar19;
               iVar25 = iVar30 - iVar15;
               iVar27 = iVar21 - iVar5;
               iVar16 = -iVar27;
               if (0 < iVar27) {
                  iVar16 = iVar27;
               }

               iVar3 = iVar27 / iVar25;
               iVar4 = iVar3 + 1;
               if (iVar27 < 0) {
                  iVar4 = iVar3 + -1;
               }

               iVar27 = iVar25 * iVar3;
               if (iVar27 < 1) {
                  iVar27 = -iVar27;
               }

               iVar28 = iVar13;
               if (iVar30 < iVar13) {
                  iVar28 = iVar30;
               }

               if (iVar15 < iVar28) {
                  *(int*)( (long)param_5 + (long)iVar15 * 4 ) = iVar5;
               }

               if (iVar15 + 1 < iVar28) {
                  lVar9 = (long)( iVar15 + 1 );
                  iVar15 = 0;
                  do {
                     while (iVar15 = iVar15 + ( iVar16 - iVar27 ),iVar25 <= iVar15) {
                        iVar5 = iVar5 + iVar4;
                        iVar15 = iVar15 - iVar25;
                        *(int*)( (long)param_5 + lVar9 * 4 ) = iVar5;
                        lVar9 = lVar9 + 1;
                        if (iVar28 <= (int)lVar9) goto LAB_00102378;
                     }
;
                     iVar5 = iVar5 + iVar3;
                     *(int*)( (long)param_5 + lVar9 * 4 ) = iVar5;
                     lVar9 = lVar9 + 1;
                  }
 while ( (int)lVar9 < iVar28 );
               }

               LAB_00102378:lVar19 = (long)iVar30;
               iVar5 = iVar21;
            }

            lVar29 = lVar29 + 1;
         }
 while ( lVar29 < *(int*)( param_3 + 0x504 ) );
      }

      for (; lVar19 < *(int*)( param_2 + 0x48 ) / 2; lVar19 = lVar19 + 1) {
         *(int*)( (long)param_5 + lVar19 * 4 ) = iVar5;
      }

      uVar10 = 1;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar10;
}


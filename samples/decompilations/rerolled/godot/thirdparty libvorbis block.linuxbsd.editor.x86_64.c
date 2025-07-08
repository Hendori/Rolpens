undefined8 vorbis_block_init(int *param_1, undefined8 *param_2) {
   undefined8 *puVar1;
   void *pvVar2;
   void *pvVar3;
   ulong uVar4;
   long lVar5;
   undefined8 *puVar6;
   puVar1 = param_2 + 1;
   *param_2 = 0;
   param_2[0x17] = 0;
   puVar6 = (undefined8*)( (ulong)puVar1 & 0xfffffffffffffff8 );
   for (uVar4 = ( ulong )(( (int)param_2 - (int)(undefined8*)( (ulong)puVar1 & 0xfffffffffffffff8 ) ) + 0xc0U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
   }

   param_2[0xd] = param_1;
   if (*param_1 == 0) {
      return 0;
   }

   pvVar2 = calloc(1, 0x88);
   *(undefined4*)( (long)pvVar2 + 8 ) = 0xc61c3c00;
   param_2[0x17] = pvVar2;
   lVar5 = 0;
   do {
      if (lVar5 == 7) {
         *(undefined8**)( (long)pvVar2 + 0x48 ) = puVar1;
         lVar5 = 8;
         oggpack_writeinit(puVar1);
      }

      pvVar3 = calloc(1, 0x28);
      *(void**)( (long)pvVar2 + lVar5 * 8 + 0x10 ) = pvVar3;
      lVar5 = lVar5 + 1;
      oggpack_writeinit(pvVar3);
   }
 while ( lVar5 != 0xf );
   return 0;
}
void vorbis_block_clear(undefined8 *param_1) {
   long lVar1;
   void *__ptr;
   ulong uVar2;
   long lVar3;
   undefined8 *puVar4;
   byte bVar5;
   bVar5 = 0;
   __ptr = (void*)param_1[0x17];
   _vorbis_block_ripcord();
   if ((void*)param_1[0xe] != (void*)0x0) {
      free((void*)param_1[0xe]);
   }

   if (__ptr != (void*)0x0) {
      lVar3 = 0;
      do {
         while (true) {
            oggpack_writeclear(*(undefined8*)( (long)__ptr + lVar3 * 8 + 0x10 ));
            if (lVar3 != 7) break;
            lVar3 = 8;
         }
;
         lVar1 = lVar3 * 8;
         lVar3 = lVar3 + 1;
         free(*(void**)( (long)__ptr + lVar1 + 0x10 ));
      }
 while ( lVar3 != 0xf );
      free(__ptr);
   }

   *param_1 = 0;
   param_1[0x17] = 0;
   puVar4 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar2 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0xc0U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
   }

   return;
}
void vorbis_dsp_clear(undefined8 *param_1) {
   long lVar1;
   long lVar2;
   void *__ptr;
   void *pvVar3;
   ulong uVar4;
   long *__ptr_00;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   byte bVar9;
   bVar9 = 0;
   if (param_1 == (undefined8*)0x0) {
      return;
   }

   lVar2 = param_1[1];
   __ptr_00 = (long*)param_1[0x11];
   if (lVar2 == 0) {
      lVar6 = 0;
      if (__ptr_00 != (long*)0x0) goto LAB_0010048f;
      if ((void*)param_1[2] == (void*)0x0) goto LAB_0010068f;
      free((void*)param_1[2]);
      __ptr_00 = (long*)param_1[3];
      if (__ptr_00 == (long*)0x0) goto LAB_0010068f;
   }
 else {
      lVar6 = *(long*)( lVar2 + 0x30 );
      if (__ptr_00 == (long*)0x0) {
         pvVar3 = (void*)param_1[2];
         if (pvVar3 == (void*)0x0) goto LAB_0010068f;
         LAB_0010060b:if (0 < *(int*)( lVar2 + 4 )) {
            lVar6 = 0;
            do {
               __ptr = *(void**)( (long)pvVar3 + lVar6 * 8 );
               if (__ptr != (void*)0x0) {
                  free(__ptr);
                  pvVar3 = (void*)param_1[2];
               }

               lVar6 = lVar6 + 1;
            }
 while ( (int)lVar6 < *(int*)( lVar2 + 4 ) );
         }

         free(pvVar3);
         if ((void*)param_1[3] != (void*)0x0) {
            free((void*)param_1[3]);
         }

         if (__ptr_00 == (long*)0x0) goto LAB_0010068f;
      }
 else {
         LAB_0010048f:if (*__ptr_00 != 0) {
            _ve_envelope_clear();
            free((void*)*__ptr_00);
         }

         if ((undefined8*)__ptr_00[2] != (undefined8*)0x0) {
            mdct_clear(*(undefined8*)__ptr_00[2]);
            free(*(void**)__ptr_00[2]);
            free((void*)__ptr_00[2]);
         }

         if ((undefined8*)__ptr_00[3] != (undefined8*)0x0) {
            mdct_clear(*(undefined8*)__ptr_00[3]);
            free(*(void**)__ptr_00[3]);
            free((void*)__ptr_00[3]);
         }

         pvVar3 = (void*)__ptr_00[0xb];
         if (pvVar3 == (void*)0x0) {
            pvVar3 = (void*)__ptr_00[0xc];
            if (pvVar3 != (void*)0x0) {
               if (lVar6 == 0) goto LAB_00100720;
               LAB_00100550:lVar7 = 0;
               if (0 < *(int*)( lVar6 + 0x1c )) {
                  do {
                     lVar1 = lVar7 * 4;
                     lVar8 = lVar7 * 8;
                     lVar7 = lVar7 + 1;
                     ( **(code**)( *(long*)( &_residue_P + (long)*(int*)( lVar6 + 0x828 + lVar1 ) * 8 ) + 0x20 ) )(*(undefined8*)( (long)pvVar3 + lVar8 ));
                     pvVar3 = (void*)__ptr_00[0xc];
                  }
 while ( (int)lVar7 < *(int*)( lVar6 + 0x1c ) );
               }

               free(pvVar3);
               goto LAB_0010058f;
            }

            pvVar3 = (void*)__ptr_00[0xd];
            if (pvVar3 == (void*)0x0) goto LAB_001005cd;
            if (lVar6 == 0) goto LAB_001005c8;
            LAB_00100598:if (0 < *(int*)( lVar6 + 0x24 )) {
               lVar7 = 0;
               do {
                  lVar8 = lVar7 + 1;
                  _vp_psy_clear((void*)( (long)pvVar3 + lVar7 * 0x60 ));
                  pvVar3 = (void*)__ptr_00[0xd];
                  lVar7 = lVar8;
               }
 while ( (int)lVar8 < *(int*)( lVar6 + 0x24 ) );
            }

            LAB_001005c8:free(pvVar3);
         }
 else if (lVar6 == 0) {
            free(pvVar3);
            pvVar3 = (void*)__ptr_00[0xc];
            if (pvVar3 == (void*)0x0) {
               pvVar3 = (void*)__ptr_00[0xd];
            }
 else {
               LAB_00100720:free(pvVar3);
               pvVar3 = (void*)__ptr_00[0xd];
            }

            if (pvVar3 != (void*)0x0) goto LAB_001005c8;
         }
 else {
            lVar7 = 0;
            if (0 < *(int*)( lVar6 + 0x18 )) {
               do {
                  lVar1 = lVar7 * 4;
                  lVar8 = lVar7 * 8;
                  lVar7 = lVar7 + 1;
                  ( **(code**)( *(long*)( &_floor_P + (long)*(int*)( lVar6 + 0x528 + lVar1 ) * 8 ) + 0x20 ) )(*(undefined8*)( (long)pvVar3 + lVar8 ));
                  pvVar3 = (void*)__ptr_00[0xb];
               }
 while ( (int)lVar7 < *(int*)( lVar6 + 0x18 ) );
            }

            free(pvVar3);
            pvVar3 = (void*)__ptr_00[0xc];
            if (pvVar3 != (void*)0x0) goto LAB_00100550;
            LAB_0010058f:pvVar3 = (void*)__ptr_00[0xd];
            if (pvVar3 != (void*)0x0) goto LAB_00100598;
         }

         LAB_001005cd:if (__ptr_00[0xe] != 0) {
            _vp_global_free();
         }

         vorbis_bitrate_clear(__ptr_00 + 0x12);
         drft_clear(__ptr_00 + 4);
         drft_clear(__ptr_00 + 7);
         pvVar3 = (void*)param_1[2];
         if (pvVar3 != (void*)0x0) {
            if (lVar2 != 0) goto LAB_0010060b;
            free(pvVar3);
            if ((void*)param_1[3] != (void*)0x0) {
               free((void*)param_1[3]);
            }

         }

      }

      for (int i = 0; i < 3; i++) {
         if ((void*)__ptr_00[( i + 15 )] != (void*)0) {
            free((void*)__ptr_00[( i + 15 )]);
         }

      }

   }

   free(__ptr_00);
   LAB_0010068f:*param_1 = 0;
   param_1[0x11] = 0;
   puVar5 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar4 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x90U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar9 * -2 + 1;
   }

   return;
}
bool vorbis_analysis_init(long param_1, undefined8 param_2) {
   undefined8 *puVar1;
   int iVar2;
   undefined8 uVar3;
   void *pvVar4;
   iVar2 = _vds_shared_init(param_1, param_2, 1);
   if (iVar2 == 0) {
      puVar1 = *(undefined8**)( param_1 + 0x88 );
      uVar3 = _vp_global_look(param_2);
      puVar1[0xe] = uVar3;
      pvVar4 = calloc(1, 0x118);
      *puVar1 = pvVar4;
      _ve_envelope_init(pvVar4, param_2);
      vorbis_bitrate_init(param_2, puVar1 + 0x12);
      *(undefined8*)( param_1 + 0x60 ) = 3;
   }

   return iVar2 != 0;
}
long vorbis_analysis_buffer(long param_1, int param_2) {
   undefined8 *puVar1;
   int iVar2;
   long lVar3;
   void *pvVar4;
   long lVar5;
   int iVar6;
   long lVar7;
   lVar7 = *(long*)( param_1 + 0x88 );
   lVar3 = *(long*)( param_1 + 8 );
   if (*(void**)( lVar7 + 0x78 ) != (void*)0x0) {
      free(*(void**)( lVar7 + 0x78 ));
   }

   *(undefined8*)( lVar7 + 0x78 ) = 0;
   if (*(void**)( lVar7 + 0x80 ) != (void*)0x0) {
      free(*(void**)( lVar7 + 0x80 ));
   }

   *(undefined8*)( lVar7 + 0x80 ) = 0;
   if (*(void**)( lVar7 + 0x88 ) != (void*)0x0) {
      free(*(void**)( lVar7 + 0x88 ));
   }

   iVar6 = *(int*)( param_1 + 0x24 );
   iVar2 = *(int*)( lVar3 + 4 );
   *(undefined8*)( lVar7 + 0x88 ) = 0;
   iVar6 = iVar6 + param_2;
   if (*(int*)( param_1 + 0x20 ) <= iVar6) {
      iVar6 = iVar6 + param_2;
      *(int*)( param_1 + 0x20 ) = iVar6;
      if (iVar2 < 1) {
         return *(long*)( param_1 + 0x18 );
      }

      lVar7 = 0;
      while (true) {
         puVar1 = (undefined8*)( *(long*)( param_1 + 0x10 ) + lVar7 * 8 );
         lVar7 = lVar7 + 1;
         pvVar4 = realloc((void*)*puVar1, (long)iVar6 << 2);
         *puVar1 = pvVar4;
         iVar2 = *(int*)( lVar3 + 4 );
         if (iVar2 <= (int)lVar7) break;
         iVar6 = *(int*)( param_1 + 0x20 );
      }
;
   }

   lVar7 = *(long*)( param_1 + 0x18 );
   if (0 < iVar2) {
      iVar6 = *(int*)( param_1 + 0x24 );
      lVar3 = *(long*)( param_1 + 0x10 );
      lVar5 = 0;
      do {
         *(long*)( lVar7 + lVar5 ) = *(long*)( lVar3 + lVar5 ) + (long)iVar6 * 4;
         lVar5 = lVar5 + 8;
      }
 while ( (long)iVar2 * 8 - lVar5 != 0 );
   }

   return lVar7;
}
/* WARNING: Removing unreachable block (ram,0x00100e70) *//* WARNING: Restarted to delay deadcode elimination for space: stack */undefined8 vorbis_analysis_wrote(long param_1, int param_2) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   int iVar7;
   long lVar8;
   undefined1 *puVar9;
   long lVar10;
   long in_FS_OFFSET;
   undefined1 auStack_d8[8];
   undefined1 auStack_d0[128];
   undefined8 local_50;
   undefined1 auStack_48[8];
   long local_40;
   puVar9 = auStack_48;
   lVar2 = *(long*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( lVar2 + 0x30 );
   if (param_2 < 1) {
      puVar9 = auStack_d8;
      if (*(int*)( param_1 + 0x2c ) == 0) {
         _preextrapolate_helper(param_1);
      }

      lVar10 = 0;
      vorbis_analysis_buffer(param_1, (int)*(undefined8*)( lVar3 + 8 ) * 3);
      uVar6 = *(undefined8*)( lVar3 + 8 );
      iVar7 = *(int*)( param_1 + 0x24 );
      iVar1 = *(int*)( lVar2 + 4 );
      *(int*)( param_1 + 0x30 ) = iVar7;
      *(int*)( param_1 + 0x24 ) = (int)uVar6 * 3 + iVar7;
      if (0 < iVar1) {
         while (true) {
            lVar4 = *(long*)( *(long*)( param_1 + 0x10 ) + lVar10 * 8 );
            lVar5 = (long)iVar7;
            if (iVar7 < 0x41) {
               memset((void*)( lVar4 + lVar5 * 4 ), 0, (long)( *(int*)( param_1 + 0x24 ) - iVar7 ) << 2);
            }
 else {
               lVar8 = *(long*)( lVar3 + 8 );
               if (lVar5 <= *(long*)( lVar3 + 8 )) {
                  lVar8 = lVar5;
               }

               vorbis_lpc_from_data(lVar4 + ( lVar5 - lVar8 ) * 4, auStack_d0, lVar8, 0x20);
               iVar7 = *(int*)( param_1 + 0x30 );
               lVar4 = *(long*)( *(long*)( param_1 + 0x10 ) + lVar10 * 8 );
               vorbis_lpc_predict(auStack_d0, lVar4 + -0x80 + (long)iVar7 * 4, 0x20, lVar4 + (long)iVar7 * 4, (long)( *(int*)( param_1 + 0x24 ) - iVar7 ));
            }

            lVar10 = lVar10 + 1;
            puVar9 = auStack_d8;
            if (*(int*)( lVar2 + 4 ) <= (int)lVar10) break;
            iVar7 = *(int*)( param_1 + 0x30 );
         }
;
      }

   }
 else {
      param_2 = param_2 + *(int*)( param_1 + 0x24 );
      if (*(int*)( param_1 + 0x20 ) < param_2) {
         uVar6 = 0xffffff7d;
         goto LAB_00100e2b;
      }

      *(int*)( param_1 + 0x24 ) = param_2;
      puVar9 = auStack_48;
      if (( *(int*)( param_1 + 0x2c ) == 0 ) && ( puVar9 = auStack_48 * (long*)( lVar3 + 8 ) < (long)param_2 - *(long*)( param_1 + 0x50 ) )) {
         local_50 = 0x100e62;
         _preextrapolate_helper();
         puVar9 = auStack_48;
      }

   }

   uVar6 = 0;
   LAB_00100e2b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   *(undefined**)( puVar9 + -8 ) = &UNK_00100f74;
   __stack_chk_fail();
}
undefined8 vorbis_analysis_blockout(long param_1, long *param_2) {
   float fVar1;
   int iVar2;
   undefined8 *puVar3;
   long lVar4;
   long *plVar5;
   float *pfVar6;
   long *plVar7;
   long lVar8;
   int iVar9;
   long lVar10;
   long lVar11;
   void *pvVar12;
   long lVar13;
   int iVar14;
   size_t __n;
   long lVar15;
   uint uVar16;
   long lVar17;
   ulong uVar18;
   float fVar19;
   int local_40;
   puVar3 = *(undefined8**)( param_1 + 0x88 );
   lVar4 = *(long*)( param_1 + 8 );
   plVar5 = (long*)param_2[0x17];
   pfVar6 = (float*)puVar3[0xe];
   plVar7 = *(long**)( lVar4 + 0x30 );
   lVar13 = *(long*)( param_1 + 0x50 );
   lVar15 = plVar7[*(long*)( param_1 + 0x40 )];
   if (( *(int*)( param_1 + 0x2c ) != 0 ) && ( *(int*)( param_1 + 0x30 ) != -1 )) {
      lVar10 = _ve_envelope_search();
      if (lVar10 == -1) {
         if (*(int*)( param_1 + 0x30 ) == 0) {
            return 0;
         }

         *(undefined8*)( param_1 + 0x48 ) = 0;
         lVar11 = *plVar7;
      }
 else {
         lVar11 = *plVar7;
         if (lVar11 == plVar7[1]) {
            *(undefined8*)( param_1 + 0x48 ) = 0;
         }
 else {
            *(long*)( param_1 + 0x48 ) = lVar10;
            lVar11 = plVar7[lVar10];
         }

      }

      lVar10 = plVar7[*(long*)( param_1 + 0x40 )];
      lVar17 = lVar10 + 3;
      if (-1 < lVar10) {
         lVar17 = lVar10;
      }

      lVar10 = lVar11 + 3;
      if (-1 < lVar11) {
         lVar10 = lVar11;
      }

      lVar10 = ( lVar17 >> 2 ) + *(long*)( param_1 + 0x50 ) + ( lVar10 >> 2 );
      if (lVar11 / 2 + lVar10 <= (long)*(int*)( param_1 + 0x24 )) {
         _vorbis_block_ripcord(param_2);
         lVar8 = *(long*)( param_1 + 0x40 );
         lVar11 = *(long*)( param_1 + 0x40 );
         lVar17 = *(long*)( param_1 + 0x38 );
         param_2[6] = *(long*)( param_1 + 0x38 );
         param_2[7] = lVar8;
         lVar8 = *(long*)( param_1 + 0x48 );
         param_2[8] = lVar8;
         if (lVar11 == 0) {
            iVar9 = _ve_envelope_mark(param_1);
            if (iVar9 == 0) {
               *(undefined4*)( (long)plVar5 + 0xc ) = 1;
               lVar11 = *(long*)( param_1 + 0x40 );
            }
 else {
               *(undefined4*)( (long)plVar5 + 0xc ) = 0;
               lVar11 = *(long*)( param_1 + 0x40 );
            }

         }
 else {
            *(uint*)( (long)plVar5 + 0xc ) = ( uint )(lVar8 != 0 && lVar17 != 0);
         }

         lVar17 = *(long*)( param_1 + 0x58 );
         lVar8 = *(long*)( param_1 + 0x60 );
         param_2[0xd] = param_1;
         fVar19 = *(float*)( plVar5 + 1 );
         *(long*)( param_1 + 0x60 ) = *(long*)( param_1 + 0x60 ) + 1;
         param_2[0xb] = lVar17;
         param_2[0xc] = lVar8;
         fVar1 = *pfVar6;
         *(int*)( param_2 + 9 ) = (int)plVar7[lVar11];
         if (fVar1 < fVar19) {
            *pfVar6 = fVar19;
         }

         fVar19 = (float)_vp_ampmax_decay(param_1);
         *pfVar6 = fVar19;
         iVar9 = *(int*)( lVar4 + 4 );
         *(float*)( plVar5 + 1 ) = fVar19;
         lVar17 = (long)iVar9 << 3;
         lVar11 = _vorbis_block_alloc(param_2, lVar17);
         *param_2 = lVar11;
         lVar11 = _vorbis_block_alloc(param_2, lVar17);
         *plVar5 = lVar11;
         if (0 < iVar9) {
            lVar17 = 0;
            lVar13 = lVar13 - lVar15 / 2;
            do {
               __n = ( (int)param_2[9] + lVar13 ) * 4;
               pvVar12 = (void*)_vorbis_block_alloc(param_2, __n);
               *(void**)( lVar11 + lVar17 * 8 ) = pvVar12;
               memcpy(pvVar12, *(void**)( *(long*)( param_1 + 0x10 ) + lVar17 * 8 ), __n);
               lVar11 = *plVar5;
               *(long*)( *param_2 + lVar17 * 8 ) = lVar13 * 4 + *(long*)( lVar11 + lVar17 * 8 );
               lVar17 = lVar17 + 1;
            }
 while ( (int)lVar17 < *(int*)( lVar4 + 4 ) );
         }

         if (( *(int*)( param_1 + 0x30 ) == 0 ) || ( *(long*)( param_1 + 0x50 ) < (long)*(int*)( param_1 + 0x30 ) )) {
            local_40 = (int)lVar10;
            iVar9 = (int)( plVar7[1] / 2 );
            uVar16 = local_40 - iVar9;
            if (0 < (int)uVar16) {
               uVar18 = (ulong)uVar16;
               _ve_envelope_shift(*puVar3, uVar18);
               iVar2 = *(int*)( lVar4 + 4 );
               iVar14 = *(int*)( param_1 + 0x24 ) - uVar16;
               *(int*)( param_1 + 0x24 ) = iVar14;
               if (0 < iVar2) {
                  lVar13 = 0;
                  while (true) {
                     pvVar12 = *(void**)( *(long*)( param_1 + 0x10 ) + lVar13 * 8 );
                     lVar13 = lVar13 + 1;
                     memmove(pvVar12, (void*)( (long)pvVar12 + uVar18 * 4 ), (long)iVar14 << 2);
                     if (*(int*)( lVar4 + 4 ) <= (int)lVar13) break;
                     iVar14 = *(int*)( param_1 + 0x24 );
                  }
;
               }

               lVar13 = (long)iVar9;
               *(long*)( param_1 + 0x50 ) = lVar13;
               lVar4 = *(long*)( param_1 + 0x58 );
               *(undefined8*)( param_1 + 0x38 ) = *(undefined8*)( param_1 + 0x40 );
               *(undefined8*)( param_1 + 0x40 ) = *(undefined8*)( param_1 + 0x48 );
               if (*(int*)( param_1 + 0x30 ) == 0) {
                  *(ulong*)( param_1 + 0x58 ) = uVar18 + lVar4;
               }
 else {
                  iVar9 = *(int*)( param_1 + 0x30 ) - uVar16;
                  lVar15 = (long)iVar9;
                  if (iVar9 < 1) {
                     lVar15 = -1;
                     iVar9 = -1;
                  }

                  *(int*)( param_1 + 0x30 ) = iVar9;
                  if (lVar13 < lVar15) {
                     *(ulong*)( param_1 + 0x58 ) = uVar18 + lVar4;
                  }
 else {
                     *(ulong*)( param_1 + 0x58 ) = ( uVar18 - ( lVar13 - lVar15 ) ) + lVar4;
                  }

               }

            }

         }
 else {
            *(undefined4*)( param_1 + 0x30 ) = 0xffffffff;
            *(undefined4*)( param_2 + 10 ) = 1;
         }

         return 1;
      }

   }

   return 0;
}
undefined8 vorbis_synthesis_restart(long param_1) {
   undefined4 uVar1;
   byte bVar2;
   long lVar3;
   if (( ( *(long*)( param_1 + 8 ) != 0 ) && ( *(long*)( param_1 + 0x88 ) != 0 ) ) && ( lVar3 = lVar3 != 0 )) {
      uVar1 = *(undefined4*)( lVar3 + 0x1690 );
      lVar3 = *(long*)( lVar3 + 8 );
      *(undefined4*)( param_1 + 0x28 ) = 0xffffffff;
      *(undefined8*)( param_1 + 0x58 ) = 0xffffffffffffffff;
      bVar2 = (byte)uVar1;
      *(undefined8*)( param_1 + 0x60 ) = 0xffffffffffffffff;
      lVar3 = lVar3 >> ( bVar2 + 1 & 0x3f );
      *(undefined4*)( param_1 + 0x30 ) = 0;
      *(long*)( param_1 + 0x50 ) = lVar3;
      *(int*)( param_1 + 0x24 ) = (int)( lVar3 >> ( bVar2 & 0x3f ) );
      *(undefined8*)( *(long*)( param_1 + 0x88 ) + 0xe0 ) = 0xffffffffffffffff;
      return 0;
   }

   return 0xffffffff;
}
ulong vorbis_synthesis_init(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   ulong uVar2;
   iVar1 = _vds_shared_init(param_1, param_2, 0);
   if (iVar1 == 0) {
      uVar2 = 0;
      vorbis_synthesis_restart(param_1);
      return uVar2 & 0xffffffff;
   }

   vorbis_dsp_clear(param_1);
   return 1;
}
undefined8 vorbis_synthesis_blockin(long param_1, long *param_2) {
   long *plVar1;
   byte bVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   byte bVar7;
   uint uVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   int iVar13;
   int iVar14;
   ulong uVar15;
   long lVar16;
   long lVar17;
   long lVar18;
   long lVar19;
   int iVar20;
   int iVar21;
   int iVar22;
   ulong uVar23;
   float *pfVar24;
   long lVar25;
   long lVar26;
   int iVar27;
   int iVar28;
   int iVar29;
   bool bVar30;
   undefined1 auVar31[16];
   long local_98;
   long local_48;
   int local_40;
   int local_3c;
   lVar5 = *(long*)( param_1 + 8 );
   lVar17 = *(long*)( param_1 + 0x88 );
   plVar1 = *(long**)( lVar5 + 0x30 );
   iVar22 = (int)plVar1[0x2d2];
   if (( param_2 == (long*)0x0 ) || ( ( iVar28 = *(int*)( param_1 + 0x28 ) ),iVar28 < *(int*)( param_1 + 0x24 ) && ( iVar28 != -1 ) )) {
      return 0xffffff7d;
   }

   lVar6 = param_2[7];
   lVar18 = *(long*)( param_1 + 0x40 );
   *(undefined8*)( param_1 + 0x48 ) = 0xffffffffffffffff;
   *(long*)( param_1 + 0x38 ) = lVar18;
   *(long*)( param_1 + 0x40 ) = lVar6;
   lVar9 = param_2[0xc];
   if (( *(long*)( param_1 + 0x60 ) == -1 ) || ( *(long*)( param_1 + 0x60 ) + 1 != lVar9 )) {
      *(undefined8*)( param_1 + 0x58 ) = 0xffffffffffffffff;
      *(undefined8*)( lVar17 + 0xe0 ) = 0xffffffffffffffff;
   }

   lVar12 = *param_2;
   *(long*)( param_1 + 0x60 ) = lVar9;
   bVar2 = (byte)iVar22;
   if (lVar12 != 0) {
      bVar7 = bVar2 + 1;
      lVar10 = param_2[0x15];
      lVar11 = param_2[0x16];
      auVar31._0_8_ = param_2[0x13] + *(long*)( param_1 + 0x68 );
      auVar31._8_8_ = param_2[0x14] + *(long*)( param_1 + 0x70 );
      iVar13 = (int)( plVar1[lVar6] >> ( bVar7 & 0x3f ) );
      lVar9 = *plVar1;
      lVar12 = plVar1[1];
      *(undefined1(*) [16])( param_1 + 0x68 ) = auVar31;
      uVar23 = lVar9 >> ( bVar7 & 0x3f );
      *(long*)( param_1 + 0x78 ) = lVar10 + *(long*)( param_1 + 0x78 );
      *(long*)( param_1 + 0x80 ) = lVar11 + *(long*)( param_1 + 0x80 );
      uVar15 = lVar12 >> ( bVar7 & 0x3f );
      iVar20 = (int)uVar23;
      iVar14 = (int)uVar15;
      if (*(long*)( param_1 + 0x50 ) == 0) {
         local_40 = iVar14;
         if (0 < *(int*)( lVar5 + 4 )) {
            local_3c = 0;
            lVar9 = (long)iVar14;
            lVar12 = 0;
            local_98 = lVar9 << 2;
            LAB_0010157f:local_48 = (long)iVar14;
            iVar29 = (int)( ( ( uint )(uVar23 >> 0x1f) & 1 ) + iVar20 ) >> 1;
            iVar27 = (int)( ( ( uint )(uVar15 >> 0x1f) & 1 ) + iVar14 ) >> 1;
            lVar10 = (long)iVar27 - (long)iVar29;
            lVar11 = (long)iVar20 * 4;
            iVar28 = 0;
            if (-1 < iVar20) {
               iVar28 = iVar20;
            }

            lVar19 = 0;
            lVar26 = 0;
            uVar8 = iVar20 - 1;
            if (lVar18 == 0) goto LAB_00101721;
            do {
               if (lVar6 == 0) {
                  lVar3 = _vorbis_window_get(*(int*)( lVar17 + 8 ) - iVar22);
                  lVar6 = *(long*)( *(long*)( param_1 + 0x10 ) + lVar26 );
                  lVar18 = *(long*)( *param_2 + lVar26 );
                  if (0 < iVar20) {
                     pfVar24 = (float*)( lVar3 + lVar11 );
                     lVar26 = ( lVar10 + lVar9 ) * 4 + lVar6;
                     uVar15 = 0;
                     do {
                        pfVar24 = pfVar24 + -1;
                        *(float*)( lVar26 + uVar15 * 4 ) = *(float*)( lVar26 + uVar15 * 4 ) * *pfVar24 + *(float*)( lVar18 + uVar15 * 4 ) * *(float*)( lVar3 + uVar15 * 4 );
                        bVar30 = uVar15 != uVar8;
                        uVar15 = uVar15 + 1;
                     }
 while ( bVar30 );
                  }

               }
 else {
                  lVar3 = _vorbis_window_get(*(int*)( lVar17 + 0xc ) - iVar22);
                  lVar6 = *(long*)( *(long*)( param_1 + 0x10 ) + lVar26 );
                  lVar18 = *(long*)( *param_2 + lVar26 );
                  if (0 < iVar14) {
                     pfVar24 = (float*)( local_48 * 4 + lVar3 );
                     uVar15 = 0;
                     do {
                        pfVar24 = pfVar24 + -1;
                        *(float*)( local_98 + lVar6 + uVar15 * 4 ) = *(float*)( local_98 + lVar6 + uVar15 * 4 ) * *pfVar24 + *(float*)( lVar18 + uVar15 * 4 ) * *(float*)( lVar3 + uVar15 * 4 );
                        bVar30 = uVar15 != iVar14 - 1;
                        uVar15 = uVar15 + 1;
                     }
 while ( bVar30 );
                  }

               }

               while (true) {
                  if (0 < iVar13) {
                     uVar15 = 0;
                     do {
                        *(undefined4*)( lVar6 + lVar12 * 4 + uVar15 * 4 ) = *(undefined4*)( lVar18 + (long)iVar13 * 4 + uVar15 * 4 );
                        bVar30 = uVar15 != iVar13 - 1;
                        uVar15 = uVar15 + 1;
                     }
 while ( bVar30 );
                  }

                  lVar19 = lVar19 + 1;
                  if (*(int*)( lVar5 + 4 ) <= (int)lVar19) {
                     lVar5 = 0;
                     if (*(long*)( param_1 + 0x50 ) == 0) {
                        lVar5 = local_48;
                     }

                     iVar28 = *(int*)( param_1 + 0x28 );
                     goto LAB_001017f8;
                  }

                  lVar6 = *(long*)( param_1 + 0x40 );
                  lVar26 = lVar19 * 8;
                  if (*(long*)( param_1 + 0x38 ) != 0) break;
                  LAB_00101721:iVar21 = *(int*)( lVar17 + 8 ) - iVar22;
                  if (lVar6 == 0) {
                     lVar3 = _vorbis_window_get(iVar21);
                     lVar6 = *(long*)( *(long*)( param_1 + 0x10 ) + lVar26 );
                     lVar18 = *(long*)( *param_2 + lVar26 );
                     if (0 < iVar20) {
                        pfVar24 = (float*)( lVar3 + lVar11 );
                        uVar15 = 0;
                        do {
                           pfVar24 = pfVar24 + -1;
                           *(float*)( local_98 + lVar6 + uVar15 * 4 ) = *(float*)( local_98 + lVar6 + uVar15 * 4 ) * *pfVar24 + *(float*)( lVar18 + uVar15 * 4 ) * *(float*)( lVar3 + uVar15 * 4 );
                           bVar30 = uVar8 != uVar15;
                           uVar15 = uVar15 + 1;
                        }
 while ( bVar30 );
                     }

                  }
 else {
                     lVar4 = _vorbis_window_get(iVar21);
                     lVar6 = *(long*)( *(long*)( param_1 + 0x10 ) + lVar26 );
                     lVar3 = lVar6 + local_98;
                     lVar18 = *(long*)( *param_2 + lVar26 );
                     lVar26 = lVar18 + lVar10 * 4;
                     lVar16 = (long)iVar28;
                     iVar21 = iVar28;
                     if (0 < iVar20) {
                        lVar25 = lVar11 + lVar4;
                        uVar15 = 0;
                        do {
                           pfVar24 = (float*)( lVar25 + -4 );
                           lVar25 = lVar25 + -4;
                           *(float*)( lVar3 + uVar15 * 4 ) = *(float*)( lVar3 + uVar15 * 4 ) * *pfVar24 + *(float*)( lVar26 + uVar15 * 4 ) * *(float*)( lVar4 + uVar15 * 4 );
                           bVar30 = uVar8 != uVar15;
                           uVar15 = uVar15 + 1;
                        }
 while ( bVar30 );
                     }

                     while (iVar21 < iVar29 + iVar27) {
                        *(undefined4*)( lVar3 + lVar16 * 4 ) = *(undefined4*)( lVar26 + lVar16 * 4 );
                        lVar16 = lVar16 + 1;
                        iVar21 = (int)lVar16;
                     }
;
                  }

               }
;
            }
 while ( true );
         }

         local_3c = 0;
         lVar5 = (long)iVar14;
      }
 else {
         local_3c = iVar14;
         if (0 < *(int*)( lVar5 + 4 )) {
            lVar9 = 0;
            local_98 = 0;
            local_40 = 0;
            lVar12 = (long)iVar14;
            goto LAB_0010157f;
         }

         local_40 = 0;
         lVar5 = 0;
      }

      LAB_001017f8:*(long*)( param_1 + 0x50 ) = lVar5;
      if (iVar28 == -1) {
         *(ulong*)( param_1 + 0x24 ) = CONCAT44(local_3c, local_3c);
      }
 else {
         lVar5 = plVar1[*(long*)( param_1 + 0x38 )];
         *(int*)( param_1 + 0x28 ) = local_40;
         lVar6 = lVar5 + 3;
         if (-1 < lVar5) {
            lVar6 = lVar5;
         }

         lVar5 = plVar1[*(long*)( param_1 + 0x40 )];
         lVar18 = lVar5 + 3;
         if (-1 < lVar5) {
            lVar18 = lVar5;
         }

         *(int*)( param_1 + 0x24 ) = (int)( ( lVar6 >> 2 ) + ( lVar18 >> 2 ) >> ( bVar2 & 0x3f ) ) + local_40;
      }

   }

   lVar5 = 0;
   if (*(long*)( lVar17 + 0xe0 ) != -1) {
      lVar5 = plVar1[*(long*)( param_1 + 0x38 )];
      lVar6 = lVar5 + 3;
      if (-1 < lVar5) {
         lVar6 = lVar5;
      }

      lVar5 = plVar1[*(long*)( param_1 + 0x40 )];
      lVar18 = lVar5 + 3;
      if (-1 < lVar5) {
         lVar18 = lVar5;
      }

      lVar5 = ( lVar6 >> 2 ) + ( lVar18 >> 2 ) + *(long*)( lVar17 + 0xe0 );
   }

   lVar6 = *(long*)( param_1 + 0x58 );
   *(long*)( lVar17 + 0xe0 ) = lVar5;
   lVar17 = param_2[0xb];
   iVar22 = (int)param_2[10];
   if (lVar6 == -1) {
      if (( lVar17 != -1 ) && ( *(long*)( param_1 + 0x58 ) = lVar17 < lVar5 )) {
         lVar5 = lVar5 - lVar17;
         iVar28 = *(int*)( param_1 + 0x24 );
         if (iVar22 == 0) {
            iVar22 = *(int*)( param_1 + 0x28 ) + (int)( lVar5 >> ( bVar2 & 0x3f ) );
            if (iVar22 < iVar28) {
               iVar28 = iVar22;
            }

            *(int*)( param_1 + 0x28 ) = iVar28;
            return 0;
         }

         lVar17 = (long)( iVar28 - *(int*)( param_1 + 0x28 ) << ( bVar2 & 0x1f ) );
         if (lVar5 < lVar17) {
            lVar17 = lVar5;
         }

         *(int*)( param_1 + 0x24 ) = iVar28 - (int)( lVar17 >> ( bVar2 & 0x3f ) );
         goto LAB_00101934;
      }

   }
 else {
      lVar5 = plVar1[*(long*)( param_1 + 0x38 )];
      lVar18 = lVar5 + 3;
      if (-1 < lVar5) {
         lVar18 = lVar5;
      }

      lVar5 = plVar1[*(long*)( param_1 + 0x40 )];
      lVar9 = lVar5 + 3;
      if (-1 < lVar5) {
         lVar9 = lVar5;
      }

      lVar6 = ( lVar18 >> 2 ) + ( lVar9 >> 2 ) + lVar6;
      *(long*)( param_1 + 0x58 ) = lVar6;
      if (( lVar6 != lVar17 ) && ( lVar17 != -1 )) {
         if (lVar17 < lVar6) {
            if (iVar22 == 0) {
               *(long*)( param_1 + 0x58 ) = lVar17;
               return 0;
            }

            *(long*)( param_1 + 0x58 ) = lVar17;
            lVar18 = (long)( *(int*)( param_1 + 0x24 ) - *(int*)( param_1 + 0x28 ) << ( bVar2 & 0x1f ) );
            lVar5 = lVar6 - lVar17;
            if (lVar18 <= lVar6 - lVar17) {
               lVar5 = lVar18;
            }

            if (lVar5 < 0) {
               lVar5 = 0;
            }

            *(int*)( param_1 + 0x24 ) = *(int*)( param_1 + 0x24 ) - (int)( lVar5 >> ( bVar2 & 0x3f ) );
            goto LAB_00101934;
         }

         *(long*)( param_1 + 0x58 ) = lVar17;
      }

   }

   if (iVar22 == 0) {
      return 0;
   }

   LAB_00101934:*(undefined4*)( param_1 + 0x30 ) = 1;
   return 0;
}
int vorbis_synthesis_pcmout(long param_1, long *param_2) {
   int iVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   iVar1 = *(int*)( param_1 + 0x28 );
   if (( -1 < iVar1 ) && ( iVar2 = iVar1 < iVar2 )) {
      if (param_2 != (long*)0x0) {
         lVar4 = *(long*)( param_1 + 0x18 );
         iVar3 = *(int*)( *(long*)( param_1 + 8 ) + 4 );
         if (0 < iVar3) {
            lVar5 = *(long*)( param_1 + 0x10 );
            lVar6 = 0;
            do {
               *(long*)( lVar4 + lVar6 ) = *(long*)( lVar5 + lVar6 ) + (long)iVar1 * 4;
               lVar6 = lVar6 + 8;
            }
 while ( (long)iVar3 * 8 != lVar6 );
         }

         *param_2 = lVar4;
      }

      return iVar2 - iVar1;
   }

   return 0;
}
undefined8 vorbis_synthesis_read(long param_1, int param_2) {
   int iVar1;
   iVar1 = *(int*)( param_1 + 0x28 ) + param_2;
   if (( param_2 != 0 ) && ( *(int*)( param_1 + 0x24 ) < iVar1 )) {
      return 0xffffff7d;
   }

   *(int*)( param_1 + 0x28 ) = iVar1;
   return 0;
}
int vorbis_synthesis_lapout(long param_1, long *param_2) {
   undefined8 *puVar1;
   undefined4 *puVar2;
   undefined4 uVar3;
   long lVar4;
   ulong uVar5;
   long *plVar6;
   long lVar7;
   int iVar8;
   long lVar9;
   undefined4 *puVar10;
   byte bVar11;
   long lVar12;
   int iVar13;
   int iVar14;
   undefined8 *puVar15;
   int iVar16;
   long *plVar17;
   iVar13 = *(int*)( param_1 + 0x28 );
   if (iVar13 < 0) {
      return 0;
   }

   lVar4 = *(long*)( param_1 + 8 );
   uVar5 = *(ulong*)( param_1 + 0x40 );
   plVar6 = *(long**)( lVar4 + 0x30 );
   lVar7 = plVar6[uVar5];
   lVar12 = *plVar6;
   bVar11 = (char)(int)plVar6[0x2d2] + 1;
   iVar14 = (int)( plVar6[1] >> ( bVar11 & 0x3f ) );
   iVar16 = iVar13;
   if (*(long*)( param_1 + 0x50 ) == (long)iVar14) {
      if (0 < *(int*)( lVar4 + 4 )) {
         puVar15 = *(undefined8**)( param_1 + 0x10 );
         puVar1 = puVar15 + *(int*)( lVar4 + 4 );
         LAB_00101d78:if (iVar14 < 1) goto LAB_00101e90;
         puVar10 = (undefined4*)*puVar15;
         while (true) {
            puVar2 = puVar10 + ( ulong )(iVar14 - 1) + 1;
            do {
               uVar3 = *puVar10;
               *puVar10 = puVar10[iVar14];
               puVar10[iVar14] = uVar3;
               puVar10 = puVar10 + 1;
            }
 while ( puVar2 != puVar10 );
            puVar15 = puVar15 + 1;
            if (puVar1 == puVar15) break;
            puVar10 = (undefined4*)*puVar15;
         }
;
      }

      LAB_00101e4d:*(undefined8*)( param_1 + 0x50 ) = 0;
      iVar16 = iVar13 - iVar14;
      *(ulong*)( param_1 + 0x24 ) = CONCAT44(iVar13 - iVar14, *(int*)( param_1 + 0x24 ) - iVar14);
   }

   iVar13 = (int)( lVar12 >> ( bVar11 & 0x3f ) );
   if (( uVar5 ^ *(ulong*)( param_1 + 0x38 ) ) == 1) {
      iVar8 = ( iVar14 - iVar13 ) / 2;
      if (0 < *(int*)( lVar4 + 4 )) {
         plVar17 = *(long**)( param_1 + 0x10 );
         iVar13 = ( iVar13 + iVar14 ) / 2 + -1;
         plVar6 = plVar17 + *(int*)( lVar4 + 4 );
         LAB_00101d0d:if (iVar13 < 0) goto LAB_00101e7e;
         lVar12 = *plVar17;
         while (true) {
            lVar9 = (long)iVar13;
            do {
               *(undefined4*)( lVar12 + (long)iVar8 * 4 + lVar9 * 4 ) = *(undefined4*)( lVar12 + lVar9 * 4 );
               lVar9 = lVar9 + -1;
            }
 while ( -1 < (int)lVar9 );
            plVar17 = plVar17 + 1;
            if (plVar17 == plVar6) break;
            lVar12 = *plVar17;
         }
;
      }

   }
 else {
      if (*(ulong*)( param_1 + 0x38 ) != 0) goto LAB_00101de8;
      if (0 < *(int*)( lVar4 + 4 )) {
         plVar17 = *(long**)( param_1 + 0x10 );
         plVar6 = plVar17 + *(int*)( lVar4 + 4 );
         LAB_00101c7f:if (iVar13 < 1) goto LAB_00101dc5;
         lVar12 = *plVar17;
         while (true) {
            lVar9 = (long)( iVar13 + -1 );
            do {
               *(undefined4*)( lVar12 + ( (long)iVar14 - (long)iVar13 ) * 4 + lVar9 * 4 ) = *(undefined4*)( lVar12 + lVar9 * 4 );
               lVar9 = lVar9 + -1;
            }
 while ( -1 < (int)lVar9 );
            plVar17 = plVar17 + 1;
            if (plVar17 == plVar6) break;
            lVar12 = *plVar17;
         }
;
      }

      LAB_00101dd8:iVar8 = iVar14 - iVar13;
   }

   LAB_00101dde:iVar16 = iVar16 + iVar8;
   *(int*)( param_1 + 0x24 ) = *(int*)( param_1 + 0x24 ) + iVar8;
   *(int*)( param_1 + 0x28 ) = iVar16;
   LAB_00101de8:if (param_2 != (long*)0x0) {
      iVar13 = *(int*)( lVar4 + 4 );
      lVar4 = *(long*)( param_1 + 0x18 );
      if (0 < iVar13) {
         lVar12 = *(long*)( param_1 + 0x10 );
         lVar9 = 0;
         do {
            *(long*)( lVar4 + lVar9 ) = *(long*)( lVar12 + lVar9 ) + (long)iVar16 * 4;
            lVar9 = lVar9 + 8;
         }
 while ( lVar9 != (long)iVar13 * 8 );
      }

      *param_2 = lVar4;
   }

   return ( iVar14 + (int)( lVar7 >> ( bVar11 & 0x3f ) ) ) - iVar16;
   LAB_00101e90:puVar15 = puVar15 + 1;
   if (puVar1 == puVar15) goto LAB_00101e4d;
   goto LAB_00101d78;
   LAB_00101e7e:plVar17 = plVar17 + 1;
   if (plVar17 == plVar6) goto LAB_00101dde;
   goto LAB_00101d0d;
   LAB_00101dc5:plVar17 = plVar17 + 1;
   if (plVar6 == plVar17) goto LAB_00101dd8;
   goto LAB_00101c7f;
}
undefined8 vorbis_window(long param_1, int param_2) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = *(int*)( *(long*)( param_1 + 0x88 ) + 8 + (long)param_2 * 4 );
   if (0 < iVar1) {
      uVar2 = _vorbis_window_get(iVar1 - *(int*)( *(long*)( *(long*)( param_1 + 8 ) + 0x30 ) + 0x1690 ));
      return uVar2;
   }

   return 0;
}


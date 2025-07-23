void vorbis_comment_init(undefined1 (*param_1)[16]) {
   *param_1 = (undefined1[16])0x0;
   param_1[1] = (undefined1[16])0x0;
   return;
}
void vorbis_comment_add(long *param_1, char *param_2) {
   long lVar1;
   long lVar2;
   void *pvVar3;
   size_t sVar4;
   long lVar5;
   pvVar3 = realloc((void*)*param_1, (long)( (int)param_1[2] + 2 ) << 3);
   *param_1 = (long)pvVar3;
   pvVar3 = realloc((void*)param_1[1], (long)( (int)param_1[2] + 2 ) << 2);
   param_1[1] = (long)pvVar3;
   sVar4 = strlen(param_2);
   lVar1 = *param_1;
   *(int*)( (long)pvVar3 + (long)(int)param_1[2] * 4 ) = (int)sVar4;
   lVar2 = param_1[2];
   lVar5 = (long)(int)lVar2;
   sVar4 = (size_t)( *(int*)( (long)pvVar3 + lVar5 * 4 ) + 1 );
   pvVar3 = malloc(sVar4);
   *(void**)( lVar1 + lVar5 * 8 ) = pvVar3;
   __strcpy_chk(pvVar3, param_2, sVar4);
   *(int*)( param_1 + 2 ) = (int)lVar2 + 1;
   *(undefined8*)( lVar1 + 8 + lVar5 * 8 ) = 0;
   return;
}
void vorbis_comment_add_tag(undefined8 param_1, char *param_2, char *param_3) {
   size_t __size;
   size_t sVar1;
   size_t sVar2;
   void *__ptr;
   sVar1 = strlen(param_2);
   sVar2 = strlen(param_3);
   __size = sVar1 + 2 + sVar2;
   __ptr = malloc(__size);
   __memcpy_chk(__ptr, param_2, sVar1, __size);
   *(undefined1*)( (long)__ptr + sVar1 ) = 0x3d;
   __memcpy_chk((long)__ptr + sVar1 + 1, param_3, sVar2 + 1, ( __size - sVar1 ) + -1);
   vorbis_comment_add(param_1, __ptr);
   free(__ptr);
   return;
}
long vorbis_comment_query(long *param_1, char *param_2, int param_3) {
   byte bVar1;
   int iVar2;
   byte bVar3;
   size_t sVar4;
   void *__ptr;
   ulong uVar5;
   long lVar6;
   long lVar7;
   int iVar8;
   int iVar9;
   size_t __size;
   bool bVar10;
   sVar4 = strlen(param_2);
   iVar9 = (int)sVar4 + 1;
   __size = (size_t)( (int)sVar4 + 2 );
   __ptr = malloc(__size);
   __memcpy_chk(__ptr, param_2, sVar4, __size);
   __memcpy_chk((long)__ptr + sVar4, &_LC2, 2);
   iVar2 = (int)param_1[2];
   if (0 < iVar2) {
      iVar8 = 0;
      lVar7 = 0;
      do {
         lVar6 = *(long*)( *param_1 + lVar7 * 8 );
         if (0 < iVar9) {
            while (true) {
               uVar5 = 0;
               while (true) {
                  bVar1 = *(byte*)( lVar6 + uVar5 );
                  if ((int)(char)bVar1 - 0x61U < 0x1a) {
                     bVar1 = bVar1 & 0xdf;
                  }

                  bVar3 = *(byte*)( (long)__ptr + uVar5 );
                  if ((int)(char)bVar3 - 0x61U < 0x1a) {
                     bVar3 = bVar3 & 0xdf;
                  }

                  if (bVar1 != bVar3) break;
                  bVar10 = uVar5 == ( sVar4 & 0xffffffff );
                  uVar5 = uVar5 + 1;
                  if (bVar10) goto LAB_001003d0;
               }
;
               lVar7 = lVar7 + 1;
               if (lVar7 == iVar2) break;
               lVar6 = *(long*)( *param_1 + lVar7 * 8 );
            }
;
            break;
         }

         LAB_001003d0:if (param_3 == iVar8) {
            free(__ptr);
            return lVar6 + iVar9;
         }

         lVar7 = lVar7 + 1;
         iVar8 = iVar8 + 1;
      }
 while ( lVar7 != iVar2 );
   }

   free(__ptr);
   return 0;
}
int vorbis_comment_query_count(long *param_1, char *param_2) {
   long *plVar1;
   byte bVar2;
   byte bVar3;
   size_t sVar4;
   void *__ptr;
   ulong uVar5;
   long *plVar6;
   int iVar7;
   size_t __size;
   bool bVar8;
   sVar4 = strlen(param_2);
   __size = (size_t)( (int)sVar4 + 2 );
   __ptr = malloc(__size);
   __memcpy_chk(__ptr, param_2, sVar4, __size);
   __memcpy_chk((long)__ptr + sVar4, &_LC2, 2);
   if ((int)param_1[2] < 1) {
      iVar7 = 0;
   }
 else {
      plVar6 = (long*)*param_1;
      iVar7 = 0;
      plVar1 = plVar6 + (int)param_1[2];
      do {
         if (0 < (int)sVar4 + 1) {
            do {
               uVar5 = 0;
               while (true) {
                  bVar2 = *(byte*)( *plVar6 + uVar5 );
                  if ((int)(char)bVar2 - 0x61U < 0x1a) {
                     bVar2 = bVar2 & 0xdf;
                  }

                  bVar3 = *(byte*)( (long)__ptr + uVar5 );
                  if ((int)(char)bVar3 - 0x61U < 0x1a) {
                     bVar3 = bVar3 & 0xdf;
                  }

                  if (bVar2 != bVar3) break;
                  bVar8 = uVar5 == ( sVar4 & 0xffffffff );
                  uVar5 = uVar5 + 1;
                  if (bVar8) goto LAB_00100510;
               }
;
               plVar6 = plVar6 + 1;
            }
 while ( plVar6 != plVar1 );
            break;
         }

         LAB_00100510:plVar6 = plVar6 + 1;
         iVar7 = iVar7 + 1;
      }
 while ( plVar1 != plVar6 );
   }

   free(__ptr);
   return iVar7;
}
void vorbis_comment_clear(undefined1 (*param_1)[16]) {
   void *__ptr;
   void *__ptr_00;
   long lVar1;
   if (param_1 != (undefined1(*) [16])0x0) {
      __ptr_00 = *(void**)*param_1;
      if (__ptr_00 != (void*)0x0) {
         if (0 < *(int*)param_1[1]) {
            lVar1 = 0;
            do {
               __ptr = *(void**)( (long)__ptr_00 + lVar1 * 8 );
               if (__ptr != (void*)0x0) {
                  free(__ptr);
                  __ptr_00 = *(void**)*param_1;
               }

               lVar1 = lVar1 + 1;
            }
 while ( lVar1 < *(int*)param_1[1] );
         }

         free(__ptr_00);
      }

      if (*(void**)( *param_1 + 8 ) != (void*)0x0) {
         free(*(void**)( *param_1 + 8 ));
      }

      if (*(void**)( param_1[1] + 8 ) != (void*)0x0) {
         free(*(void**)( param_1[1] + 8 ));
      }

      *param_1 = (undefined1[16])0x0;
      param_1[1] = (undefined1[16])0x0;
      return;
   }

   return;
}
undefined4 vorbis_info_blocksize(long param_1, int param_2) {
   if (*(long*)( param_1 + 0x30 ) != 0) {
      return *(undefined4*)( *(long*)( param_1 + 0x30 ) + (long)param_2 * 8 );
   }

   return 0xffffffff;
}
void vorbis_info_init(undefined1 (*param_1)[16]) {
   void *pvVar1;
   *(undefined8*)param_1[3] = 0;
   *param_1 = (undefined1[16])0x0;
   param_1[1] = (undefined1[16])0x0;
   param_1[2] = (undefined1[16])0x0;
   pvVar1 = calloc(1, 0x1698);
   *(void**)param_1[3] = pvVar1;
   return;
}
void vorbis_info_clear(undefined1 (*param_1)[16]) {
   long lVar1;
   void *__ptr;
   void *__ptr_00;
   long lVar2;
   __ptr = *(void**)param_1[3];
   if (__ptr != (void*)0x0) {
      if (0 < *(int*)( (long)__ptr + 0x10 )) {
         lVar2 = 0;
         do {
            __ptr_00 = *(void**)( (long)__ptr + lVar2 * 8 + 0x28 );
            if (__ptr_00 != (void*)0x0) {
               free(__ptr_00);
            }

            lVar2 = lVar2 + 1;
         }
 while ( (int)lVar2 < *(int*)( (long)__ptr + 0x10 ) );
      }

      if (0 < *(int*)( (long)__ptr + 0x14 )) {
         lVar2 = 0;
         do {
            if (*(long*)( (long)__ptr + lVar2 * 8 + 0x328 ) != 0) {
               ( **(code**)( *(long*)( &_mapping_P + (long)*(int*)( (long)__ptr + lVar2 * 4 + 0x228 ) * 8 ) + 0x10 ) )();
            }

            lVar2 = lVar2 + 1;
         }
 while ( (int)lVar2 < *(int*)( (long)__ptr + 0x14 ) );
      }

      if (0 < *(int*)( (long)__ptr + 0x18 )) {
         lVar2 = 0;
         do {
            if (*(long*)( (long)__ptr + lVar2 * 8 + 0x628 ) != 0) {
               ( **(code**)( *(long*)( &_floor_P + (long)*(int*)( (long)__ptr + lVar2 * 4 + 0x528 ) * 8 ) + 0x18 ) )();
            }

            lVar2 = lVar2 + 1;
         }
 while ( (int)lVar2 < *(int*)( (long)__ptr + 0x18 ) );
      }

      if (0 < *(int*)( (long)__ptr + 0x1c )) {
         lVar2 = 0;
         do {
            if (*(long*)( (long)__ptr + lVar2 * 8 + 0x928 ) != 0) {
               ( **(code**)( *(long*)( &_residue_P + (long)*(int*)( (long)__ptr + lVar2 * 4 + 0x828 ) * 8 ) + 0x18 ) )();
            }

            lVar2 = lVar2 + 1;
         }
 while ( (int)lVar2 < *(int*)( (long)__ptr + 0x1c ) );
      }

      if (0 < *(int*)( (long)__ptr + 0x20 )) {
         lVar2 = 0;
         do {
            if (*(long*)( (long)__ptr + lVar2 * 8 + 0xb28 ) != 0) {
               vorbis_staticbook_destroy();
            }

            if (*(long*)( (long)__ptr + 0x1328 ) != 0) {
               vorbis_book_clear(*(long*)( (long)__ptr + 0x1328 ) + lVar2 * 0x60);
            }

            lVar2 = lVar2 + 1;
         }
 while ( (int)lVar2 < *(int*)( (long)__ptr + 0x20 ) );
      }

      if (*(void**)( (long)__ptr + 0x1328 ) != (void*)0x0) {
         free(*(void**)( (long)__ptr + 0x1328 ));
      }

      if (0 < *(int*)( (long)__ptr + 0x24 )) {
         lVar2 = 0;
         do {
            lVar1 = lVar2 * 8;
            lVar2 = lVar2 + 1;
            _vi_psy_free(*(undefined8*)( (long)__ptr + lVar1 + 0x1330 ));
         }
 while ( (int)lVar2 < *(int*)( (long)__ptr + 0x24 ) );
      }

      free(__ptr);
   }

   *(undefined8*)param_1[3] = 0;
   *param_1 = (undefined1[16])0x0;
   param_1[1] = (undefined1[16])0x0;
   param_1[2] = (undefined1[16])0x0;
   return;
}
uint vorbis_synthesis_idheader(undefined8 *param_1) {
   undefined1 uVar1;
   uint uVar2;
   long lVar3;
   long *plVar4;
   long *plVar5;
   long in_FS_OFFSET;
   undefined1 auStack_58[50];
   undefined1 local_26[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 == (undefined8*)0x0 ) || ( oggpack_readinit(auStack_58, *param_1, *(undefined4*)( param_1 + 1 )),param_1[2] == 0 ) ) || ( lVar3 = lVar3 != 1 )) {
      uVar2 = 0;
   }
 else {
      local_26._0_4_ = 0;
      local_26._4_2_ = 0;
      plVar4 = (long*)local_26;
      do {
         plVar5 = (long*)( (long)plVar4 + 1 );
         uVar1 = oggpack_read(auStack_58, 8);
         *(undefined1*)plVar4 = uVar1;
         plVar4 = plVar5;
      }
 while ( plVar5 != &local_20 );
      if (( local_26._0_4_ != 0x62726f76 ) || ( uVar2 = local_26._4_2_ != 0x7369 )) {
         uVar2 = 1;
      }

      uVar2 = uVar2 ^ 1;
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 vorbis_synthesis_headerin(int *param_1, long *param_2, undefined8 *param_3) {
   undefined1 uVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   undefined4 uVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   void *pvVar10;
   undefined1 *puVar11;
   undefined8 uVar12;
   undefined1 *puVar13;
   undefined1 *puVar14;
   int iVar15;
   long *plVar16;
   long *plVar17;
   long in_FS_OFFSET;
   undefined1 local_78[32];
   long local_58;
   undefined1 local_46[6];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 != (undefined8*)0x0) {
      oggpack_readinit(local_78, *param_3, *(undefined4*)( param_3 + 1 ));
      iVar2 = oggpack_read(local_78, 8);
      local_46._0_4_ = 0;
      local_46._4_2_ = 0;
      plVar16 = (long*)local_46;
      do {
         plVar17 = (long*)( (long)plVar16 + 1 );
         uVar1 = oggpack_read(local_78, 8);
         *(undefined1*)plVar16 = uVar1;
         plVar16 = plVar17;
      }
 while ( plVar17 != local_40 );
      if (( local_46._0_4_ != 0x62726f76 ) || ( local_46._4_2_ != 0x7369 )) {
         uVar12 = 0xffffff7c;
         goto LAB_00100951;
      }

      uVar12 = 0;
      if (iVar2 == 3) {
         if (( *(long*)( param_1 + 2 ) != 0 ) && ( param_2[3] == 0 )) {
            iVar2 = oggpack_read(local_78, 0x20);
            if (( -1 < iVar2 ) && ( (long)iVar2 < local_58 + -7 )) {
               puVar11 = (undefined1*)calloc((long)( iVar2 + 1 ), 1);
               param_2[3] = (long)puVar11;
               if (iVar2 != 0) {
                  puVar14 = puVar11;
                  do {
                     puVar13 = puVar14 + 1;
                     uVar1 = oggpack_read(local_78, 8);
                     *puVar14 = uVar1;
                     puVar14 = puVar13;
                  }
 while ( puVar13 != puVar11 + ( ulong )(iVar2 - 1) + 1 );
               }

               iVar2 = oggpack_read(local_78, 0x20);
               lVar8 = local_58;
               if (( -1 < iVar2 ) && ( lVar7 = oggpack_bytes(local_78) ),(long)iVar2 <= lVar8 - lVar7 >> 2) {
                  *(int*)( param_2 + 2 ) = iVar2;
                  pvVar10 = calloc((long)( iVar2 + 1 ), 8);
                  *param_2 = (long)pvVar10;
                  pvVar10 = calloc((long)( iVar2 + 1 ), 4);
                  param_2[1] = (long)pvVar10;
                  if (iVar2 != 0) {
                     lVar8 = 0;
                     do {
                        iVar2 = oggpack_read(local_78, 0x20);
                        lVar7 = local_58;
                        if (( iVar2 < 0 ) || ( lVar9 = oggpack_bytes(local_78) ),lVar7 - lVar9 < (long)iVar2) goto LAB_00100f58;
                        *(int*)( param_2[1] + lVar8 * 4 ) = iVar2;
                        lVar7 = *param_2;
                        puVar11 = (undefined1*)calloc((long)( iVar2 + 1 ), 1);
                        *(undefined1**)( lVar7 + lVar8 * 8 ) = puVar11;
                        if (iVar2 != 0) {
                           puVar14 = puVar11;
                           do {
                              puVar13 = puVar14 + 1;
                              uVar1 = oggpack_read(local_78, 8);
                              *puVar14 = uVar1;
                              puVar14 = puVar13;
                           }
 while ( puVar13 != puVar11 + ( ulong )(iVar2 - 1) + 1 );
                        }

                        lVar8 = lVar8 + 1;
                     }
 while ( (int)lVar8 < (int)param_2[2] );
                  }

                  lVar8 = oggpack_read(local_78, 1);
                  if (lVar8 == 1) goto LAB_00100951;
               }

            }

            LAB_00100f58:vorbis_comment_clear(param_2);
         }

      }
 else if (iVar2 == 5) {
         if (( *(long*)( param_1 + 2 ) != 0 ) && ( param_2[3] != 0 )) {
            lVar8 = *(long*)( param_1 + 0xc );
            if (lVar8 == 0) goto LAB_00100f65;
            if (*(int*)( lVar8 + 0x20 ) < 1) {
               iVar2 = oggpack_read(local_78, 8);
               *(int*)( lVar8 + 0x20 ) = iVar2 + 1;
               if (0 < iVar2 + 1) {
                  lVar7 = 0;
                  do {
                     lVar9 = vorbis_staticbook_unpack(local_78);
                     *(long*)( lVar8 + 0xb28 + lVar7 * 8 ) = lVar9;
                     if (lVar9 == 0) goto LAB_00100ac7;
                     lVar7 = lVar7 + 1;
                  }
 while ( (int)lVar7 < *(int*)( lVar8 + 0x20 ) );
                  iVar2 = oggpack_read(local_78, 6);
                  if (0 < iVar2 + 1) {
                     iVar15 = 0;
                     do {
                        iVar3 = oggpack_read(local_78, 0x10);
                        if (iVar3 != 0) goto LAB_00100ac7;
                        iVar15 = iVar15 + 1;
                     }
 while ( iVar2 + 1 != iVar15 );
                     iVar2 = oggpack_read(local_78, 6);
                     *(int*)( lVar8 + 0x18 ) = iVar2 + 1;
                     if (0 < iVar2 + 1) {
                        lVar7 = 0;
                        do {
                           uVar4 = oggpack_read(local_78, 0x10);
                           *(uint*)( lVar8 + 0x528 + lVar7 * 4 ) = uVar4;
                           if (1 < uVar4) goto LAB_00100ac7;
                           lVar9 = ( **(code**)( *(long*)( &_floor_P + (long)(int)uVar4 * 8 ) + 8 ) )(param_1, local_78);
                           *(long*)( lVar8 + 0x628 + lVar7 * 8 ) = lVar9;
                           if (lVar9 == 0) goto LAB_00100ac7;
                           lVar7 = lVar7 + 1;
                        }
 while ( (int)lVar7 < *(int*)( lVar8 + 0x18 ) );
                        iVar2 = oggpack_read(local_78, 6);
                        *(int*)( lVar8 + 0x1c ) = iVar2 + 1;
                        if (0 < iVar2 + 1) {
                           lVar7 = 0;
                           do {
                              uVar4 = oggpack_read(local_78, 0x10);
                              *(uint*)( lVar8 + 0x828 + lVar7 * 4 ) = uVar4;
                              if (2 < uVar4) goto LAB_00100ac7;
                              lVar9 = ( **(code**)( *(long*)( &_residue_P + (long)(int)uVar4 * 8 ) + 8 ) )(param_1, local_78);
                              *(long*)( lVar8 + 0x928 + lVar7 * 8 ) = lVar9;
                              if (lVar9 == 0) goto LAB_00100ac7;
                              lVar7 = lVar7 + 1;
                           }
 while ( (int)lVar7 < *(int*)( lVar8 + 0x1c ) );
                           iVar2 = oggpack_read(local_78, 6);
                           *(int*)( lVar8 + 0x14 ) = iVar2 + 1;
                           if (0 < iVar2 + 1) {
                              lVar7 = 0;
                              do {
                                 iVar2 = oggpack_read(local_78, 0x10);
                                 *(int*)( lVar8 + 0x228 + lVar7 * 4 ) = iVar2;
                                 if (iVar2 != 0) goto LAB_00100ac7;
                                 lVar9 = ( **(code**)( __mapping_P + 8 ) )(param_1, local_78);
                                 *(long*)( lVar8 + 0x328 + lVar7 * 8 ) = lVar9;
                                 if (lVar9 == 0) goto LAB_00100ac7;
                                 lVar7 = lVar7 + 1;
                              }
 while ( (int)lVar7 < *(int*)( lVar8 + 0x14 ) );
                              iVar2 = oggpack_read(local_78, 6);
                              *(int*)( lVar8 + 0x10 ) = iVar2 + 1;
                              if (0 < iVar2 + 1) {
                                 lVar7 = 0;
                                 do {
                                    pvVar10 = calloc(1, 0x10);
                                    *(void**)( lVar8 + 0x28 + lVar7 * 8 ) = pvVar10;
                                    uVar5 = oggpack_read(local_78, 1);
                                    **(undefined4**)( lVar8 + 0x28 + lVar7 * 8 ) = uVar5;
                                    uVar5 = oggpack_read(local_78, 0x10);
                                    *(undefined4*)( *(long*)( lVar8 + 0x28 + lVar7 * 8 ) + 4 ) = uVar5;
                                    uVar5 = oggpack_read(local_78, 0x10);
                                    *(undefined4*)( *(long*)( lVar8 + 0x28 + lVar7 * 8 ) + 8 ) = uVar5;
                                    iVar2 = oggpack_read(local_78, 8);
                                    lVar9 = *(long*)( lVar8 + 0x28 + lVar7 * 8 );
                                    *(int*)( lVar9 + 0xc ) = iVar2;
                                    if (( ( ( 0 < *(int*)( lVar9 + 4 ) ) || ( 0 < *(int*)( lVar9 + 8 ) ) ) || ( *(int*)( lVar8 + 0x14 ) <= iVar2 ) ) || ( iVar2 < 0 )) goto LAB_00100ac7;
                                    lVar7 = lVar7 + 1;
                                 }
 while ( (int)lVar7 < *(int*)( lVar8 + 0x10 ) );
                                 goto LAB_00100ab0;
                              }

                           }

                        }

                     }

                  }

               }

               goto LAB_00100ac7;
            }

         }

      }
 else if (( ( iVar2 == 1 ) && ( param_3[2] != 0 ) ) && ( *(long*)( param_1 + 2 ) == 0 )) {
         plVar16 = *(long**)( param_1 + 0xc );
         if (plVar16 == (long*)0x0) {
            LAB_00100f65:uVar12 = 0xffffff7f;
            goto LAB_00100951;
         }

         iVar2 = oggpack_read(local_78, 0x20);
         *param_1 = iVar2;
         if (iVar2 != 0) {
            uVar12 = 0xffffff7a;
            goto LAB_00100951;
         }

         iVar2 = oggpack_read(local_78, 8);
         param_1[1] = iVar2;
         uVar6 = oggpack_read(local_78, 0x20);
         *(undefined8*)( param_1 + 2 ) = uVar6;
         for (int i = 0; i < 3; i++) {
            iVar2 = oggpack_read(local_78, 32);
            *(long*)( param_1 + ( 2*i + 4 ) ) = (long)iVar2;
         }

         iVar2 = oggpack_read(local_78, 4);
         if (-1 < iVar2) {
            *plVar16 = (long)( 1 << ( (byte)iVar2 & 0x1f ) );
            iVar2 = oggpack_read(local_78, 4);
            if (-1 < iVar2) {
               lVar8 = *(long*)( param_1 + 2 );
               lVar7 = (long)( 1 << ( (byte)iVar2 & 0x1f ) );
               plVar16[1] = lVar7;
               if (( ( 0 < lVar8 ) && ( 0 < param_1[1] ) ) && ( ( lVar7 < 0x2001 && *plVar16 <= lVar7 && ( 0x3f < *plVar16 ) ) )) {
                  LAB_00100ab0:lVar8 = oggpack_read(local_78, 1);
                  if (lVar8 == 1) goto LAB_00100951;
               }

            }

         }

         LAB_00100ac7:vorbis_info_clear(param_1);
      }

   }

   uVar12 = 0xffffff7b;
   LAB_00100951:if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar12;
}
undefined8 vorbis_commentheader_out(undefined8 param_1, undefined8 *param_2) {
   int iVar1;
   size_t sVar2;
   void *pvVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined1 auStack_48[16];
   void *local_38;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   oggpack_writeinit(auStack_48);
   iVar1 = _vorbis_pack_comment(auStack_48, param_1);
   if (iVar1 == 0) {
      uVar5 = 0;
      sVar2 = oggpack_bytes(auStack_48);
      pvVar3 = malloc(sVar2);
      *param_2 = pvVar3;
      sVar2 = oggpack_bytes(auStack_48);
      memcpy((void*)*param_2, local_38, sVar2);
      uVar4 = oggpack_bytes(auStack_48);
      param_2[2] = 0;
      param_2[1] = uVar4;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 1;
      oggpack_writeclear(auStack_48);
   }
 else {
      uVar5 = 0xffffff7e;
      oggpack_writeclear(auStack_48);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined4 vorbis_analysis_headerout(long param_1, undefined8 param_2, undefined1 (*param_3)[16], undefined1 (*param_4)[16], undefined1 (*param_5)[16]) {
   long lVar1;
   long lVar2;
   char cVar3;
   long lVar4;
   long *plVar5;
   long lVar6;
   undefined4 uVar7;
   int iVar8;
   size_t sVar9;
   void *pvVar10;
   undefined8 uVar11;
   long lVar12;
   long lVar13;
   char *pcVar14;
   long in_FS_OFFSET;
   int local_78;
   undefined1 local_68[16];
   void *local_58;
   long local_40;
   lVar4 = *(long*)( param_1 + 0x88 );
   lVar12 = *(long*)( param_1 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( lVar4 == 0 ) || ( 0xff < *(int*)( lVar12 + 4 ) - 1U )) {
      uVar7 = 0xffffff7f;
      *param_3 = (undefined1[16])0x0;
      param_3[1] = (undefined1[16])0x0;
      param_3[2] = (undefined1[16])0x0;
      *param_4 = (undefined1[16])0x0;
      param_4[1] = (undefined1[16])0x0;
      param_4[2] = (undefined1[16])0x0;
      *param_5 = (undefined1[16])0x0;
      param_5[1] = (undefined1[16])0x0;
      param_5[2] = (undefined1[16])0x0;
   }
 else {
      oggpack_writeinit(local_68);
      plVar5 = *(long**)( lVar12 + 0x30 );
      if (( ( plVar5 != (long*)0x0 ) && ( 0x3f < *plVar5 ) ) && ( *plVar5 <= plVar5[1] )) {
         oggpack_write(local_68, 1, 8);
         pcVar14 = "vorbis";
         do {
            cVar3 = *pcVar14;
            pcVar14 = pcVar14 + 1;
            oggpack_write(local_68, (long)cVar3, 8);
         }
 while ( pcVar14 != "" );
         oggpack_write(local_68, 0, 0x20);
         oggpack_write(local_68, (long)*(int*)( lVar12 + 4 ), 8);
         for (int i = 0; i < 4; i++) {
            oggpack_write(local_68, *(undefined8*)( lVar12 + ( 8*i + 8 ) ), 32);
         }

         local_78 = (int)*plVar5;
         iVar8 = ov_ilog(local_78 + -1);
         oggpack_write(local_68, (long)iVar8, 4);
         iVar8 = ov_ilog((int)plVar5[1] + -1);
         oggpack_write(local_68, (long)iVar8, 4);
         oggpack_write(local_68, 1, 1);
         if (*(void**)( lVar4 + 0x78 ) != (void*)0x0) {
            free(*(void**)( lVar4 + 0x78 ));
         }

         sVar9 = oggpack_bytes(local_68);
         pvVar10 = malloc(sVar9);
         *(void**)( lVar4 + 0x78 ) = pvVar10;
         sVar9 = oggpack_bytes(local_68);
         memcpy(*(void**)( lVar4 + 0x78 ), local_58, sVar9);
         *(undefined8*)*param_3 = *(undefined8*)( lVar4 + 0x78 );
         uVar11 = oggpack_bytes(local_68);
         *(undefined8*)param_3[1] = 1;
         *(undefined8*)( *param_3 + 8 ) = uVar11;
         *(undefined8*)( param_3[1] + 8 ) = 0;
         *(undefined8*)param_3[2] = 0;
         *(undefined8*)( param_3[2] + 8 ) = 0;
         oggpack_reset(local_68);
         iVar8 = _vorbis_pack_comment(local_68, param_2);
         if (iVar8 == 0) {
            if (*(void**)( lVar4 + 0x80 ) != (void*)0x0) {
               free(*(void**)( lVar4 + 0x80 ));
            }

            sVar9 = oggpack_bytes(local_68);
            pvVar10 = malloc(sVar9);
            *(void**)( lVar4 + 0x80 ) = pvVar10;
            sVar9 = oggpack_bytes(local_68);
            memcpy(*(void**)( lVar4 + 0x80 ), local_58, sVar9);
            *(undefined8*)*param_4 = *(undefined8*)( lVar4 + 0x80 );
            uVar11 = oggpack_bytes(local_68);
            *(undefined8*)param_4[1] = 0;
            *(undefined8*)( *param_4 + 8 ) = uVar11;
            *(undefined8*)( param_4[1] + 8 ) = 0;
            *(undefined8*)param_4[2] = 0;
            *(undefined8*)( param_4[2] + 8 ) = 1;
            oggpack_reset(local_68);
            lVar6 = *(long*)( lVar12 + 0x30 );
            if (lVar6 != 0) {
               oggpack_write(local_68, 5, 8);
               pcVar14 = "vorbis";
               do {
                  cVar3 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                  oggpack_write(local_68, (long)cVar3, 8);
               }
 while ( pcVar14 != "" );
               oggpack_write(local_68, (long)( *(int*)( lVar6 + 0x20 ) + -1 ), 8);
               lVar13 = 0;
               if (0 < *(int*)( lVar6 + 0x20 )) {
                  do {
                     iVar8 = vorbis_staticbook_pack(*(undefined8*)( lVar6 + 0xb28 + lVar13 * 8 ), local_68);
                     if (iVar8 != 0) goto LAB_00101404;
                     lVar13 = lVar13 + 1;
                  }
 while ( (int)lVar13 < *(int*)( lVar6 + 0x20 ) );
               }

               oggpack_write(local_68, 0, 6);
               oggpack_write(local_68, 0, 0x10);
               oggpack_write(local_68, (long)( *(int*)( lVar6 + 0x18 ) + -1 ), 6);
               lVar13 = 0;
               if (0 < *(int*)( lVar6 + 0x18 )) {
                  do {
                     oggpack_write(local_68, (long)*(int*)( lVar6 + 0x528 + lVar13 * 4 ), 0x10);
                     if ((code*)**(undefined8**)( &_floor_P + (long)*(int*)( lVar6 + 0x528 + lVar13 * 4 ) * 8 ) == (code*)0x0) goto LAB_00101404;
                     ( *(code*)**(undefined8**)( &_floor_P + (long)*(int*)( lVar6 + 0x528 + lVar13 * 4 ) * 8 ) )(*(undefined8*)( lVar6 + 0x628 + lVar13 * 8 ), local_68);
                     lVar13 = lVar13 + 1;
                  }
 while ( (int)lVar13 < *(int*)( lVar6 + 0x18 ) );
               }

               lVar13 = 0;
               oggpack_write(local_68, (long)( *(int*)( lVar6 + 0x1c ) + -1 ), 6);
               if (0 < *(int*)( lVar6 + 0x1c )) {
                  do {
                     oggpack_write(local_68, (long)*(int*)( lVar6 + 0x828 + lVar13 * 4 ), 0x10);
                     lVar1 = lVar13 * 4;
                     lVar2 = lVar13 * 8;
                     lVar13 = lVar13 + 1;
                     ( *(code*)**(undefined8**)( &_residue_P + (long)*(int*)( lVar6 + 0x828 + lVar1 ) * 8 ) )(*(undefined8*)( lVar6 + 0x928 + lVar2 ), local_68);
                  }
 while ( (int)lVar13 < *(int*)( lVar6 + 0x1c ) );
               }

               lVar13 = 0;
               oggpack_write(local_68, (long)( *(int*)( lVar6 + 0x14 ) + -1 ), 6);
               if (0 < *(int*)( lVar6 + 0x14 )) {
                  do {
                     oggpack_write(local_68, (long)*(int*)( lVar6 + 0x228 + lVar13 * 4 ), 0x10);
                     lVar1 = lVar13 * 4;
                     lVar2 = lVar13 * 8;
                     lVar13 = lVar13 + 1;
                     ( *(code*)**(undefined8**)( &_mapping_P + (long)*(int*)( lVar6 + 0x228 + lVar1 ) * 8 ) )(lVar12, *(undefined8*)( lVar6 + 0x328 + lVar2 ), local_68);
                  }
 while ( (int)lVar13 < *(int*)( lVar6 + 0x14 ) );
               }

               lVar12 = 0;
               oggpack_write(local_68, (long)( *(int*)( lVar6 + 0x10 ) + -1 ), 6);
               if (0 < *(int*)( lVar6 + 0x10 )) {
                  do {
                     oggpack_write(local_68, (long)**(int**)( lVar6 + 0x28 + lVar12 * 8 ), 1);
                     oggpack_write(local_68, (long)*(int*)( *(long*)( lVar6 + 0x28 + lVar12 * 8 ) + 4 ), 0x10);
                     oggpack_write(local_68, (long)*(int*)( *(long*)( lVar6 + 0x28 + lVar12 * 8 ) + 8 ), 0x10);
                     lVar13 = lVar12 * 8;
                     lVar12 = lVar12 + 1;
                     oggpack_write(local_68, (long)*(int*)( *(long*)( lVar6 + 0x28 + lVar13 ) + 0xc ), 8);
                  }
 while ( (int)lVar12 < *(int*)( lVar6 + 0x10 ) );
               }

               oggpack_write(local_68, 1, 1);
               if (*(void**)( lVar4 + 0x88 ) != (void*)0x0) {
                  free(*(void**)( lVar4 + 0x88 ));
               }

               sVar9 = oggpack_bytes(local_68);
               pvVar10 = malloc(sVar9);
               *(void**)( lVar4 + 0x88 ) = pvVar10;
               sVar9 = oggpack_bytes(local_68);
               memcpy(*(void**)( lVar4 + 0x88 ), local_58, sVar9);
               *(undefined8*)*param_5 = *(undefined8*)( lVar4 + 0x88 );
               uVar11 = oggpack_bytes(local_68);
               *(undefined8*)param_5[1] = 0;
               *(undefined8*)( *param_5 + 8 ) = uVar11;
               *(undefined8*)( param_5[1] + 8 ) = 0;
               *(undefined8*)param_5[2] = 0;
               *(undefined8*)( param_5[2] + 8 ) = 2;
               oggpack_writeclear(local_68);
               uVar7 = 0;
               goto LAB_001010e7;
            }

         }

      }

      LAB_00101404:*param_3 = (undefined1[16])0x0;
      param_3[1] = (undefined1[16])0x0;
      param_3[2] = (undefined1[16])0x0;
      *param_4 = (undefined1[16])0x0;
      param_4[1] = (undefined1[16])0x0;
      param_4[2] = (undefined1[16])0x0;
      *param_5 = (undefined1[16])0x0;
      param_5[1] = (undefined1[16])0x0;
      param_5[2] = (undefined1[16])0x0;
      if (0 < *(int*)( lVar12 + 4 )) {
         oggpack_writeclear(local_68);
      }

      for (int i = 0; i < 3; i++) {
         if (*(void**)( lVar4 + ( 8*i + 120 ) ) != (void*)0) {
            free(*(void**)( lVar4 + ( 8*i + 120 ) ));
         }

      }

      uVar7 = 0xffffff7e;
      *(undefined8*)( lVar4 + 0x88 ) = 0;
      *(undefined1(*) [16])( lVar4 + 0x78 ) = (undefined1[16])0x0;
   }

   LAB_001010e7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */double vorbis_granule_time(long param_1, long param_2) {
   double dVar1;
   if (param_2 == -1) {
      return _LC3;
   }

   dVar1 = (double)*(long*)( *(long*)( param_1 + 8 ) + 8 );
   if (-1 < param_2) {
      return (double)param_2 / dVar1;
   }

   return ( (double)param_2 + __LC4 + _LC5 + _LC5 ) / dVar1;
}
char *vorbis_version_string(void) {
   return "Xiph.Org libVorbis 1.3.7";
}


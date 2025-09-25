uint ktxTexture2_NeedsTranscoding(long param_1) {
   char cVar1;
   cVar1 = *(char*)( *(long*)( param_1 + 0x80 ) + 0xc );
   return (uint)CONCAT71(( int7 )(( ulong ) * (long*)( param_1 + 0x80 ) >> 8), cVar1 == -0x5a) | ( uint )(cVar1 == -0x5d);
}
undefined1[16];ktxTexture2_IterateLevels(long param_1, code *param_2, ulong param_3) {
   long lVar1;
   byte bVar2;
   uint uVar3;
   byte bVar4;
   undefined1 auVar5[16];
   undefined8 uVar6;
   ulong uVar7;
   uint uVar8;
   ulong uVar9;
   uint uVar10;
   long lVar11;
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   if (param_2 == (code*)0x0) {
      auVar13._8_8_ = param_3;
      auVar13._0_8_ = 0xb;
      return auVar13;
   }

   uVar6 = 10;
   uVar7 = param_3;
   if (*(int*)( param_1 + 0x88 ) == 0) {
      lVar1 = *(long*)( param_1 + 0xa0 );
      uVar8 = *(int*)( param_1 + 0x34 ) - 1;
      if (-1 < (int)uVar8) {
         uVar9 = (ulong)uVar8;
         lVar11 = lVar1;
         while (true) {
            bVar4 = (byte)uVar9;
            bVar2 = bVar4 & 0x1f;
            uVar8 = *(uint*)( param_1 + 0x28 ) >> ( bVar4 & 0x1f );
            if (*(uint*)( param_1 + 0x28 ) >> ( bVar4 & 0x1f ) == 0) {
               uVar8 = 1;
            }

            uVar3 = *(uint*)( param_1 + 0x24 ) >> ( bVar4 & 0x1f );
            if (*(uint*)( param_1 + 0x24 ) >> ( bVar4 & 0x1f ) == 0) {
               uVar3 = 1;
            }

            uVar7 = *(long*)( lVar11 + 0x20 + ( uVar9 & 0xffffffff ) * 0x18 ) + *(long*)( param_1 + 0x70 );
            uVar10 = 1;
            if (*(uint*)( param_1 + 0x2c ) >> bVar2 != 0) {
               uVar10 = *(uint*)( param_1 + 0x2c ) >> bVar2;
            }

            uVar6 = ( *param_2 )(uVar9 & 0xffffffff, 0 >> bVar2, uVar3, uVar8, uVar10, *(undefined8*)( lVar1 + 0x30 + uVar9 * 0x18 ), uVar7, param_3);
            if ((int)uVar6 != 0) goto LAB_001000ec;
            uVar9 = uVar9 - 1;
            if ((int)uVar9 < 0) break;
            lVar11 = *(long*)( param_1 + 0xa0 );
         }
;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar7;
      return auVar5 << 0x40;
   }

   LAB_001000ec:auVar12._8_8_ = uVar7;
   auVar12._0_8_ = uVar6;
   return auVar12;
}
undefined8 ktxTexture2_SetImageFromStdioStream(void) {
   return 10;
}
undefined8 ktxTexture2_WriteToStdioStream(void) {
   return 10;
}
undefined8 ktxTexture2_WriteToMemory(void) {
   return 10;
}
undefined8 ktxTexture2_constructCommon(undefined4 *param_1, int param_2) {
   size_t __size;
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   void *pvVar4;
   undefined8 uVar5;
   *(undefined1**)( param_1 + 2 ) = ktxTexture2_vtbl;
   uVar3 = ktxTexture2_vtblInt._16_8_;
   uVar2 = ktxTexture2_vtblInt._8_8_;
   uVar5 = ktxTexture2_vtblInt._0_8_;
   puVar1 = *(undefined8**)( param_1 + 6 );
   *param_1 = 2;
   puVar1[2] = uVar3;
   *puVar1 = uVar5;
   puVar1[1] = uVar2;
   __size = ( ulong )(param_2 - 1) * 0x18 + 0x38;
   pvVar4 = malloc(__size);
   *(void**)( param_1 + 0x28 ) = pvVar4;
   if (pvVar4 == (void*)0x0) {
      uVar5 = 0xd;
   }
 else {
      __memset_chk(pvVar4, 0, __size, __size);
      uVar5 = 0;
   }

   return uVar5;
}
long ktxTexture2_calcDataSizeLevels(long param_1, int param_2) {
   ulong uVar1;
   long lVar2;
   long lVar3;
   float fVar4;
   float fVar5;
   param_2 = param_2 + -1;
   if (param_2 == 0) {
      lVar3 = 0;
   }
 else {
      lVar3 = 0;
      do {
         uVar1 = ktxTexture_calcLevelSize(param_1, param_2, 2);
         fVar5 = (float)*(uint*)( *(long*)( param_1 + 0xa0 ) + 8 );
         fVar4 = (float)uVar1 / fVar5;
         if ((float)( (uint)fVar4 & _LC3 ) < _LC0) {
            fVar4 = (float)( ( uint )((float)(int)fVar4 + (float)( -(uint)((float)(int)fVar4 < fVar4) & _LC2 )) | ~_LC3 & (uint)fVar4 );
         }

         lVar3 = lVar3 + ( (long)( fVar5 * fVar4 ) & 0xffffffffU );
         param_2 = param_2 + -1;
      }
 while ( param_2 != 0 );
   }

   lVar2 = ktxTexture_calcLevelSize(param_1, 0, 2);
   return lVar2 + lVar3;
}
long ktxTexture2_calcLevelOffset(long param_1, uint param_2) {
   ulong uVar1;
   long lVar2;
   uint uVar3;
   float fVar4;
   float fVar5;
   uVar3 = *(int*)( param_1 + 0x34 ) - 1;
   if (param_2 < uVar3) {
      lVar2 = 0;
      do {
         uVar1 = ktxTexture_calcLevelSize(param_1, uVar3, 2);
         fVar5 = (float)*(uint*)( *(long*)( param_1 + 0xa0 ) + 8 );
         fVar4 = (float)uVar1 / fVar5;
         if ((float)( (uint)fVar4 & _LC3 ) < _LC0) {
            fVar4 = (float)( ( uint )((float)(int)fVar4 + (float)( -(uint)((float)(int)fVar4 < fVar4) & _LC2 )) | ~_LC3 & (uint)fVar4 );
         }

         uVar3 = uVar3 - 1;
         lVar2 = lVar2 + ( (long)( fVar5 * fVar4 ) & 0xffffffffU );
      }
 while ( param_2 < uVar3 );
   }
 else {
      lVar2 = 0;
   }

   return lVar2;
}
void ktxTexture2_GetImageSize(undefined8 param_1, undefined8 param_2) {
   ktxTexture_calcImageSize(param_1, param_2, 2);
   return;
}
int ktxTexture2_IterateLoadLevelFaces(int *param_1, code *param_2, undefined8 param_3) {
   long lVar1;
   long lVar2;
   size_t __size;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   int iVar6;
   int iVar7;
   uint uVar8;
   void *__ptr;
   ulong uVar9;
   byte bVar10;
   uint uVar11;
   void *pvVar12;
   uint uVar13;
   long in_FS_OFFSET;
   float fVar14;
   float fVar15;
   long local_b0;
   void *local_68;
   void *local_58;
   long local_50;
   size_t local_48;
   long local_40;
   lVar2 = *(long*)( param_1 + 6 );
   iVar6 = 10;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   if (*param_1 != 2) goto LAB_00100650;
   iVar7 = param_1[0x22];
   if (( iVar7 != 0 ) && ( 1 < iVar7 - 2U )) goto LAB_00100650;
   if (param_2 == (code*)0x0) {
      iVar6 = 0xb;
      goto LAB_00100650;
   }

   if (*(long*)( lVar2 + 0x80 ) == 0) {
      iVar6 = 10;
      goto LAB_00100650;
   }

   local_b0 = *(long*)( param_1 + 0x28 );
   __size = *(size_t*)( local_b0 + 0x28 );
   __ptr = malloc(__size);
   if (__ptr == (void*)0x0) {
      LAB_001009a7:iVar6 = 0xd;
   }
 else {
      if (iVar7 - 2U < 2) {
         local_48 = *(size_t*)( local_b0 + 0x30 );
         local_68 = malloc(local_48);
         if (local_68 == (void*)0x0) {
            free(__ptr);
            goto LAB_001009a7;
         }

         local_50 = 0;
         local_58 = local_68;
         if (iVar7 == 2) {
            local_50 = ZSTD_createDCtx();
         }

      }
 else {
         local_50 = 0;
         local_58 = (void*)0x0;
         local_68 = __ptr;
      }

      lVar1 = lVar2 + 0x40;
      uVar11 = param_1[0xd] - 1;
      if (-1 < (int)uVar11) {
         local_b0 = local_b0 + (ulong)uVar11 * 0x18;
         do {
            bVar10 = (byte)uVar11;
            uVar3 = (uint)param_1[9] >> ( bVar10 & 0x1f );
            if ((uint)param_1[9] >> ( bVar10 & 0x1f ) == 0) {
               uVar3 = 1;
            }

            uVar4 = (uint)param_1[10] >> ( bVar10 & 0x1f );
            if ((uint)param_1[10] >> ( bVar10 & 0x1f ) == 0) {
               uVar4 = 1;
            }

            uVar5 = (uint)param_1[0xb] >> ( bVar10 & 0x1f );
            if ((uint)param_1[0xb] >> ( bVar10 & 0x1f ) == 0) {
               uVar5 = 1;
            }

            uVar9 = *(ulong*)( local_b0 + 0x28 );
            if (__size < uVar9) {
               iVar6 = 1;
               goto LAB_001007c3;
            }

            iVar6 = ( **(code**)( lVar2 + 0x60 ) )(lVar1, *(long*)( *(long*)( param_1 + 0x28 ) + 0x18 ) + *(long*)( *(long*)( param_1 + 0x28 ) + 0x20 + (ulong)uVar11 * 0x18 ));
            if (( iVar6 != 0 ) || ( iVar6 = iVar6 != 0 )) goto LAB_001007c3;
            if (param_1[0x22] == 2) {
               uVar9 = ZSTD_decompressDCtx(local_50, local_58, local_48, __ptr);
               iVar6 = ZSTD_isError(uVar9);
               if (iVar6 == 0) goto LAB_001004e9;
               iVar7 = ZSTD_getErrorCode(uVar9);
               if (iVar7 == 0x40) goto LAB_001009a7;
               if (iVar7 == 0x46) {
                  LAB_00100990:iVar6 = 0x13;
               }
 else {
                  iVar6 = 0x14;
                  if (iVar7 != 0x16) {
                     iVar6 = 1;
                  }

               }

               goto LAB_00100650;
            }

            if (( param_1[0x22] == 3 ) && ( iVar6 = iVar6 != 0 )) goto LAB_00100650;
            LAB_001004e9:if (*(ulong*)( local_b0 + 0x30 ) != uVar9) goto LAB_00100990;
            if (( *(char*)( (long)param_1 + 0x21 ) == '\0' ) || ( (char)param_1[8] != '\0' )) {
               iVar6 = ( *param_2 )(uVar11, 0, uVar3, uVar4, uVar5, uVar9 & 0xffffffff, local_68, param_3);
               if (iVar6 != 0) goto LAB_001007c3;
            }
 else {
               fVar15 = (float)(int)uVar3 / (float)*(uint*)( lVar2 + 0x24 );
               if ((float)( (uint)fVar15 & _LC3 ) < _LC0) {
                  fVar15 = (float)( ( uint )((float)(int)fVar15 + (float)( -(uint)((float)(int)fVar15 < fVar15) & _LC2 )) | ~_LC3 & (uint)fVar15 );
               }

               fVar14 = (float)(int)uVar4 / (float)*(uint*)( lVar2 + 0x28 );
               if ((float)( (uint)fVar14 & _LC3 ) < _LC0) {
                  fVar14 = (float)( ( uint )((float)(int)fVar14 + (float)( -(uint)((float)(int)fVar14 < fVar14) & _LC2 )) | ~_LC3 & (uint)fVar14 );
               }

               uVar13 = *(uint*)( lVar2 + 0x30 );
               uVar8 = (uint)(long)fVar15;
               if ((uint)(long)fVar15 <= uVar13) {
                  uVar8 = uVar13;
               }

               if (uVar13 < (uint)(long)fVar14) {
                  uVar13 = (uint)(long)fVar14;
               }

               uVar9 = ( ulong )(uVar8 * uVar13 * *(int*)( lVar2 + 0x20 ) >> 3);
               if (param_1[0xf] != 0) {
                  uVar13 = 0;
                  pvVar12 = local_68;
                  do {
                     iVar6 = ( *param_2 )(uVar11, uVar13, uVar3, uVar4, uVar5, uVar9, pvVar12, param_3);
                     if (iVar6 != 0) goto LAB_001007c3;
                     uVar13 = uVar13 + 1;
                     pvVar12 = (void*)( (long)pvVar12 + uVar9 );
                  }
 while ( uVar13 < (uint)param_1[0xf] );
               }

            }

            uVar11 = uVar11 - 1;
            local_b0 = local_b0 + -0x18;
         }
 while ( uVar11 != 0xffffffff );
      }

      ( **(code**)( lVar2 + 0x70 ) )(lVar1);
      iVar6 = 0;
      *(undefined8*)( *(long*)( param_1 + 0x28 ) + 0x18 ) = 0;
      LAB_001007c3:free(__ptr);
      if (local_58 != (void*)0x0) {
         free(local_58);
      }

      if (local_50 != 0) {
         ZSTD_freeDCtx();
      }

   }

   LAB_00100650:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar6;
}
undefined8 ktxTexture2_calcFaceLodSize(long param_1, ulong param_2) {
   undefined8 uVar1;
   if (( *(char*)( param_1 + 0x21 ) != '\0' ) && ( *(char*)( param_1 + 0x20 ) == '\0' )) {
      uVar1 = ktxTexture_calcImageSize(param_1, param_2, 2);
      return uVar1;
   }

   return *(undefined8*)( *(long*)( param_1 + 0xa0 ) + ( param_2 & 0xffffffff ) * 0x18 + 0x30 );
}
undefined4 ktxTexture2_GetImageOffset(long param_1, ulong param_2, uint param_3, uint param_4, long *param_5) {
   byte bVar1;
   uint uVar2;
   long lVar3;
   if (param_1 == 0) {
      return 0xb;
   }

   if (( (uint)param_2 < *(uint*)( param_1 + 0x34 ) ) && ( param_3 < *(uint*)( param_1 + 0x38 ) )) {
      if (*(int*)( param_1 + 0x88 ) == 0) {
         if (*(char*)( param_1 + 0x21 ) == '\0') {
            bVar1 = (byte)param_2 & 0x1f;
            uVar2 = *(uint*)( param_1 + 0x2c ) >> bVar1;
            if (*(uint*)( param_1 + 0x2c ) >> bVar1 == 0) {
               uVar2 = 1;
            }

         }
 else {
            uVar2 = *(uint*)( param_1 + 0x3c );
         }

         if (param_4 < uVar2) {
            *param_5 = *(long*)( *(long*)( param_1 + 0xa0 ) + ( param_2 & 0xffffffff ) * 0x18 + 0x20 );
            if (param_3 != 0) {
               lVar3 = ktxTexture_layerSize(param_1, param_2, 2);
               param_2 = param_2 & 0xffffffff;
               *param_5 = *param_5 + (ulong)param_3 * lVar3;
            }

            if (param_4 == 0) {
               return 0;
            }

            lVar3 = ktxTexture_calcImageSize(param_1, param_2, 2);
            *param_5 = *param_5 + (ulong)param_4 * lVar3;
            return 0;
         }

      }

      return 10;
   }

   return 10;
}
undefined8 ktxTexture2_WriteToStream(void) {
   return 10;
}
undefined8 ktxTexture2_SetImageFromMemory(void) {
   return 10;
}
undefined8 ktxTexture2_WriteToNamedFile(void) {
   return 10;
}
long ktxTexture2_GetDataSizeUncompressed(long param_1) {
   long lVar1;
   ulong uVar2;
   ulong uVar3;
   long lVar4;
   long lVar5;
   uint uVar6;
   uint uVar7;
   long lVar8;
   uint uVar9;
   float fVar10;
   if (*(uint*)( param_1 + 0x88 ) < 2) {
      return *(long*)( param_1 + 0x68 );
   }

   if (*(uint*)( param_1 + 0x88 ) - 2 < 2) {
      lVar1 = *(long*)( param_1 + 0xa0 );
      uVar6 = 0x10;
      if (( *(int*)( param_1 + 0x78 ) != 0 ) && ( uVar9 = *(uint*)( *(long*)( param_1 + 0x18 ) + 0x20 ) ),uVar6 = uVar9 >> 3,( uVar9 & 0x18 ) != 0) {
         uVar3 = 4;
         uVar9 = uVar6;
         do {
            uVar7 = uVar9;
            uVar2 = uVar3 % (ulong)uVar7;
            uVar3 = (ulong)uVar7;
            uVar9 = (uint)uVar2;
         }
 while ( uVar9 != 0 );
         uVar6 = ( uVar6 * 4 ) / uVar7;
      }

      uVar9 = *(int*)( param_1 + 0x34 ) - 1;
      if ((int)uVar9 < 1) {
         lVar5 = 0;
      }
 else {
         lVar4 = (ulong)uVar9 * 0x18;
         lVar8 = lVar1 + lVar4;
         lVar5 = 0;
         do {
            fVar10 = (float)*(ulong*)( lVar8 + 0x30 ) / (float)uVar6;
            if ((float)( (uint)fVar10 & _LC3 ) < _LC0) {
               fVar10 = (float)( ( uint )((float)(int)fVar10 + (float)( -(uint)((float)(int)fVar10 < fVar10) & _LC2 )) | ~_LC3 & (uint)fVar10 );
            }

            lVar8 = lVar8 + -0x18;
            lVar5 = lVar5 + ( (long)( fVar10 * (float)uVar6 ) & 0xffffffffU );
         }
 while ( lVar1 + -0x18 + lVar4 + ( ulong )(*(int*)( param_1 + 0x34 ) - 2) * -0x18 != lVar8 );
      }

      return lVar5 + *(long*)( lVar1 + 0x30 );
   }

   return 0;
}
undefined8 ktxFormatSize_initFromDfd(uint *param_1, long param_2) {
   byte bVar1;
   uint uVar2;
   int iVar3;
   uint uVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined1 local_4c[4];
   undefined1 local_48[8];
   undefined1 local_40[8];
   undefined1 local_38[8];
   undefined1 local_30[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(int*)( param_2 + 4 ) == 0 ) && ( *(short*)( param_2 + 8 ) == 2 )) {
      for (int i = 0; i < 3; i++) {
         param_1[( i + 3 )] = *(byte*)( param_2 + ( i + 16 ) ) + 1;
      }

      uVar5 = _LC4;
      bVar1 = *(byte*)( param_2 + 0x14 );
      param_1[0] = 0;
      param_1[1] = 0;
      uVar4 = (uint)bVar1 << 3;
      param_1[2] = uVar4;
      *(undefined8*)( param_1 + 6 ) = uVar5;
      if (( *(byte*)( param_2 + 0xc ) & 0x80 ) == 0) {
         uVar2 = *(uint*)( param_2 + 0x1c ) & 0xf000000;
         if (uVar2 == 0xe000000) {
            uVar2 = *(uint*)( param_2 + 8 ) >> 0x12;
            if (uVar2 - 10 < 4) {
               *param_1 = 8;
            }
 else {
               if (3 < uVar2 - 0xe) goto LAB_00100cdd;
               *param_1 = 0x19;
            }

         }
 else if (uVar2 == 0xd000000) {
            *param_1 = 0x10;
         }
 else {
            if (( *(uint*)( param_2 + 8 ) >> 0x12 ) - 0x1e < 4) {
               iVar3 = memcmp(e5b9g9r9_ufloat_comparator + 0xc, (void*)( param_2 + 0x10 ), 0x6c);
               if (iVar3 == 0) {
                  *param_1 = 1;
                  goto LAB_00100d48;
               }

            }

            uVar4 = interpretDFD(param_2, local_48, local_40, local_38, local_30, local_4c);
            if (0x1ff < uVar4) goto LAB_00100cdd;
            if (( uVar4 & 2 ) != 0) {
               *param_1 = *param_1 | 1;
            }

            if (( uVar4 & 0x80 ) != 0) {
               *param_1 = *param_1 | 2;
            }

            if (( uVar4 & 0x100 ) != 0) {
               *param_1 = *param_1 | 0x20;
            }

            uVar4 = param_1[2];
         }

      }
 else {
         *param_1 = 2;
         if (*(char*)( param_2 + 0xc ) == -0x5c) {
            *(undefined8*)( param_1 + 6 ) = _LC5;
         }

      }

      LAB_00100d48:if (uVar4 == 0) {
         iVar3 = reconstructDFDBytesPlane0FromSamples(param_2);
         param_1[2] = iVar3 << 3;
      }

      uVar5 = 1;
   }
 else {
      LAB_00100cdd:uVar5 = 0;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ktxTexture2_destruct(long param_1) {
   undefined8 *__ptr;
   if (*(void**)( param_1 + 0x80 ) != (void*)0x0) {
      free(*(void**)( param_1 + 0x80 ));
   }

   __ptr = *(undefined8**)( param_1 + 0xa0 );
   if (__ptr != (undefined8*)0x0) {
      if ((void*)*__ptr != (void*)0x0) {
         free((void*)*__ptr);
         __ptr = *(undefined8**)( param_1 + 0xa0 );
      }

      free(__ptr);
   }

   ktxTexture_destruct(param_1);
   return;
}
void ktxTexture2_Destroy(void *param_1) {
   ktxTexture2_destruct();
   free(param_1);
   return;
}
int ktxTexture2_Create(long param_1, int param_2, undefined8 *param_3) {
   int iVar1;
   uint *puVar2;
   long lVar3;
   ulong uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   void *__ptr;
   void *pvVar8;
   undefined8 uVar9;
   long lVar10;
   ulong uVar11;
   size_t __size;
   uint uVar12;
   uint uVar13;
   uint uVar14;
   undefined8 *puVar15;
   long in_FS_OFFSET;
   undefined1 auStack_68[40];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == (undefined8*)0x0) {
      iVar6 = 0xb;
      goto LAB_00100fb8;
   }

   __ptr = calloc(0xa8, 1);
   if (__ptr == (void*)0x0) {
      iVar6 = 0xd;
      goto LAB_00100fb8;
   }

   if (*(int*)( param_1 + 4 ) == 0) {
      puVar2 = *(uint**)( param_1 + 8 );
      uVar11 = ( ulong ) * puVar2;
      pvVar8 = malloc(uVar11);
      *(void**)( (long)__ptr + 0x80 ) = pvVar8;
      if (pvVar8 != (void*)0x0) {
         uVar9 = __memcpy_chk(pvVar8, puVar2, uVar11, uVar11);
         cVar5 = ktxFormatSize_initFromDfd(auStack_68, uVar9);
         if (cVar5 != '\0') goto LAB_00100f81;
         iVar6 = 0x10;
         goto LAB_00100fa8;
      }

      iVar6 = 0xd;
   }
 else {
      lVar10 = vk2dfd();
      *(long*)( (long)__ptr + 0x80 ) = lVar10;
      if (lVar10 == 0) {
         iVar6 = 0xb;
      }
 else {
         ktxFormatSize_initFromDfd(auStack_68, lVar10);
         LAB_00100f81:iVar6 = ktxTexture_construct(__ptr, param_1, auStack_68);
         if (iVar6 == 0) {
            iVar6 = ktxTexture2_constructCommon(__ptr, *(undefined4*)( param_1 + 0x20 ));
            if (iVar6 == 0) {
               lVar10 = *(long*)( (long)__ptr + 0x18 );
               *(undefined4*)( (long)__ptr + 0x78 ) = *(undefined4*)( param_1 + 4 );
               uVar7 = vkFormatTypeSize();
               lVar3 = *(long*)( (long)__ptr + 0xa0 );
               *(undefined4*)( lVar10 + 0x38 ) = uVar7;
               *(undefined4*)( (long)__ptr + 0x88 ) = 0;
               uVar14 = *(uint*)( *(long*)( (long)__ptr + 0x18 ) + 0x20 );
               uVar12 = uVar14 >> 3;
               if (( uVar14 & 0x18 ) != 0) {
                  uVar11 = 4;
                  uVar14 = uVar12;
                  do {
                     uVar13 = uVar14;
                     uVar4 = uVar11 % (ulong)uVar13;
                     uVar11 = (ulong)uVar13;
                     uVar14 = (uint)uVar4;
                  }
 while ( uVar14 != 0 );
                  uVar12 = ( uVar12 * 4 ) / uVar13;
               }

               iVar1 = *(int*)( (long)__ptr + 0x34 );
               *(uint*)( lVar3 + 8 ) = uVar12;
               *(undefined8*)( lVar3 + 0x18 ) = 0;
               if (iVar1 != 0) {
                  puVar15 = (undefined8*)( lVar3 + 0x20 );
                  uVar14 = 0;
                  do {
                     uVar9 = ktxTexture_calcLevelSize(__ptr, uVar14, 2);
                     uVar12 = uVar14 + 1;
                     lVar10 = *(long*)( (long)__ptr + 0x18 );
                     puVar15[1] = uVar9;
                     puVar15[2] = uVar9;
                     uVar9 = ( **(code**)( lVar10 + 0x10 ) )(__ptr, uVar14);
                     *puVar15 = uVar9;
                     puVar15 = puVar15 + 3;
                     uVar14 = uVar12;
                  }
 while ( uVar12 < *(uint*)( (long)__ptr + 0x34 ) );
               }

               if (param_2 == 1) {
                  __size = ktxTexture_calcDataSizeTexture(__ptr);
                  *(size_t*)( (long)__ptr + 0x68 ) = __size;
                  pvVar8 = malloc(__size);
                  *(void**)( (long)__ptr + 0x70 ) = pvVar8;
                  if (pvVar8 == (void*)0x0) {
                     iVar6 = 0xd;
                     goto LAB_00100fa8;
                  }

               }

               *param_3 = __ptr;
               goto LAB_00100fb8;
            }

            LAB_00100fa8:ktxTexture2_destruct(__ptr);
         }

      }

   }

   free(__ptr);
   LAB_00100fb8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar6;
}
long ktxTexture2_levelFileOffset(long param_1, uint param_2) {
   return *(long*)( *(long*)( param_1 + 0xa0 ) + 0x18 ) + *(long*)( *(long*)( param_1 + 0xa0 ) + 0x20 + (ulong)param_2 * 0x18 );
}
undefined1[16];lcm4(ulong param_1, undefined8 param_2, undefined8 param_3) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   auVar5._0_8_ = param_1 & 0xffffffff;
   if (( param_1 & 3 ) == 0) {
      auVar5._8_8_ = param_3;
      return auVar5;
   }

   uVar2 = 4;
   uVar1 = param_1;
   do {
      uVar3 = uVar1;
      uVar1 = uVar2 % ( uVar3 & 0xffffffff );
      uVar2 = uVar3 & 0xffffffff;
   }
 while ( (int)uVar1 != 0 );
   uVar1 = ( ulong )(uint)((int)param_1 * 4);
   auVar4._8_8_ = uVar1 % ( uVar3 & 0xffffffff );
   auVar4._0_8_ = uVar1 / ( uVar3 & 0xffffffff );
   return auVar4;
}
undefined1[16];ktxTexture2_calcRequiredLevelAlignment(long param_1, undefined8 param_2, ulong param_3) {
   uint uVar1;
   ulong uVar2;
   ulong uVar3;
   uint uVar4;
   uint uVar5;
   undefined1 auVar6[16];
   uVar4 = 1;
   if (( *(int*)( param_1 + 0x88 ) == 0 ) && ( uVar1 = *(uint*)( *(long*)( param_1 + 0x18 ) + 0x20 ) ),uVar4 = uVar1 >> 3,( uVar1 & 0x18 ) != 0) {
      uVar1 = uVar4 * 4;
      uVar3 = 4;
      do {
         uVar5 = uVar4;
         uVar2 = uVar3 % (ulong)uVar5;
         uVar3 = (ulong)uVar5;
         uVar4 = (uint)uVar2;
      }
 while ( uVar4 != 0 );
      uVar4 = uVar1 / uVar5;
      param_3 = (ulong)uVar1 % (ulong)uVar5;
   }

   auVar6._4_4_ = 0;
   auVar6._0_4_ = uVar4;
   auVar6._8_8_ = param_3;
   return auVar6;
}
undefined1[16];ktxTexture2_calcPostInflationLevelAlignment(long param_1, undefined8 param_2, ulong param_3) {
   uint uVar1;
   ulong uVar2;
   ulong uVar3;
   uint uVar4;
   uint uVar5;
   undefined1 auVar6[16];
   uVar4 = 0x10;
   if (( *(int*)( param_1 + 0x78 ) != 0 ) && ( uVar1 = *(uint*)( *(long*)( param_1 + 0x18 ) + 0x20 ) ),uVar4 = uVar1 >> 3,( uVar1 & 0x18 ) != 0) {
      uVar1 = uVar4 * 4;
      uVar3 = 4;
      do {
         uVar5 = uVar4;
         uVar2 = uVar3 % (ulong)uVar5;
         uVar3 = (ulong)uVar5;
         uVar4 = (uint)uVar2;
      }
 while ( uVar4 != 0 );
      uVar4 = uVar1 / uVar5;
      param_3 = (ulong)uVar1 % (ulong)uVar5;
   }

   auVar6._4_4_ = 0;
   auVar6._0_4_ = uVar4;
   auVar6._8_8_ = param_3;
   return auVar6;
}
void ktxTexture2_GetComponentInfo(long param_1) {
   getDFDComponentInfoUnpacked(*(undefined8*)( param_1 + 0x80 ));
   return;
}
ulong ktxTexture2_GetNumComponents(long param_1) {
   long lVar1;
   ulong uVar2;
   uint uVar3;
   lVar1 = *(long*)( param_1 + 0x80 );
   uVar2 = getDFDNumComponents(lVar1);
   uVar3 = *(uint*)( lVar1 + 0xc );
   if (( uVar3 & 0x80 ) != 0) {
      if ((char)uVar3 == -0x5d) {
         if ((int)uVar2 == 1) {
            uVar2 = uVar2 & 0xffffffff;
            if (( *(byte*)( lVar1 + 0x1f ) & 0xf ) == 0) {
               uVar2 = 3;
            }

            return uVar2;
         }

         if (( ( ~*(uint *)(lVar1 + 0x2c) & 0xf000000 ) != 0 ) || ( uVar2 = 4(*(byte*)( lVar1 + 0x1f ) & 0xf) != 0 )) {
            return 2;
         }

      }
 else if (( uVar3 & 0xff ) == 0xa6) {
         uVar2 = 1;
         uVar3 = *(byte*)( lVar1 + 0x1f ) & 0xf;
         if (uVar3 < 6) {
            return ( ulong ) * (uint*)( CSWTCH_56 + (ulong)uVar3 * 4 );
         }

      }

   }

   return uVar2;
}
undefined1 ktxTexture2_GetOETF_e(long param_1) {
   return *(undefined1*)( *(long*)( param_1 + 0x80 ) + 0xe );
}
undefined1 ktxTexture2_GetOETF(long param_1) {
   return *(undefined1*)( *(long*)( param_1 + 0x80 ) + 0xe );
}
undefined1 ktxTexture2_GetColorModel_e(long param_1) {
   return *(undefined1*)( *(long*)( param_1 + 0x80 ) + 0xc );
}
byte ktxTexture2_GetPremultipliedAlpha(long param_1) {
   return *(byte*)( *(long*)( param_1 + 0x80 ) + 0xf ) & 1;
}
undefined8 ktxTexture2_levelDataOffset(long param_1, uint param_2) {
   return *(undefined8*)( *(long*)( param_1 + 0xa0 ) + (ulong)param_2 * 0x18 + 0x20 );
}
undefined8 ktxTexture2_inflateZstdInt(long param_1, long param_2, long param_3, long param_4) {
   long lVar1;
   long lVar2;
   int iVar3;
   undefined8 uVar4;
   ulong __size;
   void *__src;
   ulong uVar5;
   ulong uVar6;
   uint uVar7;
   ulong uVar8;
   long *plVar9;
   uint uVar10;
   long lVar11;
   long *plVar12;
   float fVar13;
   if (( param_2 == 0 ) || ( param_3 == 0 )) {
      return 0xb;
   }

   uVar4 = 10;
   if (*(int*)( param_1 + 0x88 ) == 2) {
      lVar1 = *(long*)( param_1 + 0x18 );
      lVar2 = *(long*)( param_1 + 0xa0 );
      __size = ( ulong )(uint)(*(int*)( param_1 + 0x34 ) * 0x18);
      __src = malloc(__size);
      if (__src != (void*)0x0) {
         uVar7 = 0x10;
         if (*(int*)( param_1 + 0x78 ) != 0) {
            uVar10 = *(uint*)( lVar1 + 0x20 );
            uVar7 = uVar10 >> 3;
            if (( uVar10 & 0x18 ) != 0) {
               uVar5 = 4;
               uVar6 = (ulong)uVar7;
               do {
                  uVar8 = uVar6;
                  uVar6 = uVar5 % uVar8;
                  uVar5 = uVar8;
               }
 while ( (int)uVar6 != 0 );
               uVar7 = ( uint )(( uVar7 * 4 ) / uVar8);
            }

         }

         uVar4 = ZSTD_createDCtx();
         uVar10 = *(int*)( param_1 + 0x34 ) - 1;
         if ((int)uVar10 < 0) {
            lVar11 = 0;
         }
 else {
            lVar11 = 0;
            plVar12 = (long*)( lVar2 + 0x20 + (ulong)uVar10 * 0x18 );
            plVar9 = (long*)( (ulong)uVar10 * 0x18 + (long)__src );
            do {
               uVar6 = ZSTD_decompressDCtx(uVar4, param_3 + lVar11, param_4, param_2 + *plVar12, plVar12[1]);
               iVar3 = ZSTD_isError(uVar6);
               if (iVar3 != 0) {
                  iVar3 = ZSTD_getErrorCode(uVar6);
                  if (iVar3 != 0x40) {
                     if (iVar3 == 0x46) {
                        return 0x13;
                     }

                     if (iVar3 == 0x16) {
                        return 0x14;
                     }

                     return 1;
                  }

                  goto LAB_001016b8;
               }

               if (*(ulong*)( (long)(int)uVar10 * 0x18 + *(long*)( param_1 + 0xa0 ) + 0x30 ) != uVar6) {
                  return 0x13;
               }

               *plVar9 = lVar11;
               plVar9[1] = uVar6;
               plVar9[2] = uVar6;
               fVar13 = (float)uVar6 / (float)uVar7;
               if ((float)( _LC3 & (uint)fVar13 ) < _LC0) {
                  fVar13 = (float)( ( uint )((float)(int)fVar13 + (float)( -(uint)((float)(int)fVar13 < fVar13) & _LC2 )) | ~_LC3 & (uint)fVar13 );
               }

               uVar10 = uVar10 - 1;
               plVar12 = plVar12 + -3;
               plVar9 = plVar9 + -3;
               uVar6 = (long)( fVar13 * (float)uVar7 ) & 0xffffffff;
               lVar11 = lVar11 + uVar6;
               param_4 = param_4 - uVar6;
            }
 while ( uVar10 != 0xffffffff );
         }

         ZSTD_freeDCtx(uVar4);
         *(long*)( param_1 + 0x68 ) = lVar11;
         *(undefined4*)( param_1 + 0x88 ) = 0;
         memcpy((void*)( lVar2 + 0x20 ), __src, __size);
         free(__src);
         lVar2 = *(long*)( param_1 + 0x80 );
         *(uint*)( *(long*)( param_1 + 0xa0 ) + 8 ) = uVar7;
         *(uint*)( lVar2 + 0x14 ) = *(uint*)( lVar1 + 0x20 ) >> 3;
         return 0;
      }

      LAB_001016b8:uVar4 = 0xd;
   }

   return uVar4;
}
undefined8 ktxTexture2_inflateZLIBInt(long param_1, long param_2, long param_3, ulong param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   undefined8 uVar5;
   ulong __size;
   void *__src;
   ulong uVar6;
   uint uVar7;
   long *plVar8;
   uint uVar9;
   uint uVar10;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   float fVar13;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 == 0 ) || ( param_3 == 0 )) {
      uVar5 = 0xb;
   }
 else {
      uVar5 = 10;
      if (*(int*)( param_1 + 0x88 ) == 3) {
         lVar2 = *(long*)( param_1 + 0xa0 );
         iVar1 = *(int*)( param_1 + 0x34 );
         lVar3 = *(long*)( param_1 + 0x18 );
         __size = ( ulong )(uint)(iVar1 * 0x18);
         __src = malloc(__size);
         if (__src == (void*)0x0) {
            uVar5 = 0xd;
         }
 else {
            uVar9 = 0x10;
            if (( *(int*)( param_1 + 0x78 ) != 0 ) && ( uVar7 = *(uint*)( lVar3 + 0x20 ) ),uVar9 = uVar7 >> 3,( uVar7 & 0x18 ) != 0) {
               uVar6 = 4;
               uVar7 = uVar9;
               do {
                  uVar10 = uVar7;
                  uVar4 = uVar6 % (ulong)uVar10;
                  uVar6 = (ulong)uVar10;
                  uVar7 = (uint)uVar4;
               }
 while ( uVar7 != 0 );
               uVar9 = ( uVar9 * 4 ) / uVar10;
            }

            uVar7 = iVar1 - 1;
            if ((int)uVar7 < 0) {
               lVar12 = 0;
            }
 else {
               lVar12 = 0;
               lVar11 = lVar2 + (ulong)uVar7 * 0x18;
               plVar8 = (long*)( (ulong)uVar7 * 0x18 + (long)__src );
               do {
                  local_48 = param_4;
                  uVar5 = ktxUncompressZLIBInt(param_3 + lVar12, &local_48, param_2 + *(long*)( lVar11 + 0x20 ), *(undefined8*)( lVar11 + 0x28 ));
                  if ((int)uVar5 != 0) goto LAB_0010171e;
                  if (*(ulong*)( (long)(int)uVar7 * 0x18 + *(long*)( param_1 + 0xa0 ) + 0x30 ) != local_48) {
                     uVar5 = 0x13;
                     goto LAB_0010171e;
                  }

                  plVar8[2] = local_48;
                  *plVar8 = lVar12;
                  plVar8[1] = local_48;
                  fVar13 = (float)local_48 / (float)uVar9;
                  if ((float)( _LC3 & (uint)fVar13 ) < _LC0) {
                     fVar13 = (float)( ( uint )((float)(int)fVar13 + (float)( -(uint)((float)(int)fVar13 < fVar13) & _LC2 )) | ~_LC3 & (uint)fVar13 );
                  }

                  uVar7 = uVar7 - 1;
                  lVar11 = lVar11 + -0x18;
                  plVar8 = plVar8 + -3;
                  uVar6 = (long)( fVar13 * (float)uVar9 ) & 0xffffffff;
                  lVar12 = lVar12 + uVar6;
                  param_4 = param_4 - uVar6;
               }
 while ( uVar7 != 0xffffffff );
            }

            *(long*)( param_1 + 0x68 ) = lVar12;
            *(undefined4*)( param_1 + 0x88 ) = 0;
            memcpy((void*)( lVar2 + 0x20 ), __src, __size);
            free(__src);
            lVar2 = *(long*)( param_1 + 0x80 );
            *(uint*)( *(long*)( param_1 + 0xa0 ) + 8 ) = uVar9;
            *(uint*)( lVar2 + 0x14 ) = *(uint*)( lVar3 + 0x20 ) >> 3;
            uVar5 = 0;
         }

      }

   }

   LAB_0010171e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int ktxTexture2_LoadImageData(long param_1, void *param_2, ulong param_3) {
   long lVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   ulong __size;
   void *__ptr;
   void *local_50;
   void *local_40;
   if (*(long*)( param_1 + 0x70 ) != 0) {
      return 10;
   }

   lVar2 = *(long*)( param_1 + 0x18 );
   if (*(long*)( lVar2 + 0x80 ) == 0) {
      return 10;
   }

   lVar3 = *(long*)( param_1 + 0xa0 );
   __size = ktxTexture2_GetDataSizeUncompressed();
   if (param_2 == (void*)0x0) {
      local_50 = malloc(__size);
      *(void**)( param_1 + 0x70 ) = local_50;
      if (local_50 == (void*)0x0) {
         return 0xd;
      }

   }
 else {
      local_50 = param_2;
      if (param_3 < __size) {
         return 0xb;
      }

   }

   local_40 = local_50;
   __ptr = (void*)0x0;
   if (( *(int*)( param_1 + 0x88 ) - 2U < 2 ) && ( __ptr = malloc(*(size_t*)( param_1 + 0x68 )) ),local_40 = __ptr,__ptr == (void*)0x0) {
      return 0xd;
   }

   lVar1 = lVar2 + 0x40;
   iVar4 = ( **(code**)( lVar2 + 0x60 ) )(lVar1, *(undefined8*)( lVar3 + 0x18 ));
   if (iVar4 != 0) {
      return iVar4;
   }

   iVar4 = ( **(code**)( lVar2 + 0x40 ) )(lVar1, local_40, *(undefined8*)( param_1 + 0x68 ));
   if (iVar4 == 0) {
      if (*(int*)( param_1 + 0x88 ) - 2U < 2) {
         if (*(int*)( param_1 + 0x88 ) == 2) {
            iVar4 = ktxTexture2_inflateZstdInt(param_1, __ptr, local_50, __size);
         }
 else {
            iVar4 = ktxTexture2_inflateZLIBInt();
         }

         free(__ptr);
         if (iVar4 != 0) {
            if (param_2 == (void*)0x0) {
               free(*(void**)( param_1 + 0x70 ));
               *(undefined8*)( param_1 + 0x70 ) = 0;
               return iVar4;
            }

            return iVar4;
         }

      }

      ( **(code**)( lVar2 + 0x70 ) )(lVar1);
      *(undefined8*)( lVar3 + 0x18 ) = 0;
      return 0;
   }

   return iVar4;
}
undefined8 ktxTexture2_constructCopy(undefined8 *param_1, undefined8 *param_2) {
   size_t sVar1;
   uint uVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   char cVar6;
   undefined8 *puVar7;
   void *pvVar8;
   ulong __size;
   uVar4 = param_2[1];
   *param_1 = *param_2;
   param_1[1] = uVar4;
   for (int i = 0; i < 8; i++) {
      uVar4 = param_2[( 2*i + 3 )];
      param_1[( 2*i + 2 )] = param_2[( 2*i + 2 )];
      param_1[( 2*i + 3 )] = uVar4;
   }

   uVar4 = param_2[0x12];
   uVar5 = param_2[0x13];
   param_1[0x14] = 0;
   param_1[0x12] = uVar4;
   param_1[0x13] = uVar5;
   param_1[0x10] = 0;
   param_1[0xc] = 0;
   param_1[10] = 0;
   param_1[0xe] = 0;
   puVar7 = (undefined8*)malloc(0xa8);
   param_1[3] = puVar7;
   if (puVar7 == (undefined8*)0x0) {
      return 0xd;
   }

   if (param_2[0xe] == 0) {
      cVar6 = ktxTexture_isActiveStream(param_2);
      if (cVar6 != '\0') {
         ktxTexture2_LoadImageData(param_2, 0, 0);
      }

      puVar7 = (undefined8*)param_1[3];
   }

   puVar3 = (undefined8*)param_2[3];
   uVar4 = puVar3[1];
   *puVar7 = *puVar3;
   puVar7[1] = uVar4;
   for (int i = 0; i < 9; i++) {
      uVar4 = puVar3[( 2*i + 3 )];
      puVar7[( 2*i + 2 )] = puVar3[( 2*i + 2 )];
      puVar7[( 2*i + 3 )] = uVar4;
   }

   puVar7[0x14] = puVar3[0x14];
   sVar1 = ( ulong )(*(int*)( (long)param_2 + 0x34 ) - 1) * 0x18 + 0x38;
   puVar7 = (undefined8*)malloc(sVar1);
   param_1[0x14] = puVar7;
   if (puVar7 == (undefined8*)0x0) {
      pvVar8 = (void*)param_1[3];
      if (pvVar8 == (void*)0x0) goto LAB_00101e92;
      goto LAB_00101e67;
   }

   puVar3 = (undefined8*)param_2[0x14];
   __memcpy_chk(puVar7, puVar3, sVar1, sVar1);
   sVar1 = puVar3[2];
   if (sVar1 == 0) {
      LAB_00101d4e:uVar2 = *(uint*)param_2[0x10];
      pvVar8 = malloc((ulong)uVar2);
      param_1[0x10] = pvVar8;
      if (pvVar8 == (void*)0x0) {
         LAB_00101e5e:pvVar8 = (void*)param_1[3];
         if (pvVar8 != (void*)0x0) goto LAB_00101e67;
      }
 else {
         __memcpy_chk(pvVar8, (undefined4*)param_2[0x10], *(undefined4*)param_2[0x10], (ulong)uVar2);
         if (param_2[10] == 0) {
            if (param_2[0xc] != 0) {
               __size = ( ulong ) * (uint*)( param_2 + 0xb );
               pvVar8 = malloc(__size);
               param_1[0xc] = pvVar8;
               if (pvVar8 == (void*)0x0) goto LAB_00101e5e;
               __memcpy_chk(pvVar8, param_2[0xc], __size, __size);
            }

         }
 else {
            ktxHashList_ConstructCopy(param_1 + 10);
         }

         sVar1 = param_1[0xd];
         pvVar8 = malloc(sVar1);
         param_1[0xe] = pvVar8;
         if (pvVar8 != (void*)0x0) {
            __memcpy_chk(pvVar8, param_2[0xe], param_2[0xd], sVar1);
            return 0;
         }

         pvVar8 = (void*)param_1[3];
         if (pvVar8 != (void*)0x0) {
            LAB_00101e67:free(pvVar8);
         }

         puVar7 = (undefined8*)param_1[0x14];
         if (puVar7 == (undefined8*)0x0) goto LAB_00101e92;
      }

      if ((void*)*puVar7 != (void*)0x0) {
         free((void*)*puVar7);
      }

   }
 else {
      pvVar8 = malloc(sVar1);
      *puVar7 = pvVar8;
      if (pvVar8 != (void*)0x0) {
         __memcpy_chk(pvVar8, *puVar3, sVar1, sVar1);
         goto LAB_00101d4e;
      }

      pvVar8 = (void*)param_1[3];
      if (pvVar8 != (void*)0x0) goto LAB_00101e67;
   }

   free((void*)param_1[0x14]);
   LAB_00101e92:if ((void*)param_1[0x10] != (void*)0x0) {
      free((void*)param_1[0x10]);
   }

   if (param_1[10] != 0) {
      ktxHashList_Destruct(param_1 + 10);
   }

   return 0xd;
}
ulong ktxTexture2_CreateCopy(undefined8 param_1, undefined8 *param_2) {
   void *__ptr;
   ulong uVar1;
   if (param_2 == (undefined8*)0x0) {
      return 0xb;
   }

   __ptr = malloc(0xa8);
   if (__ptr == (void*)0x0) {
      uVar1 = 0xd;
   }
 else {
      uVar1 = ktxTexture2_constructCopy(__ptr, param_1);
      if ((int)uVar1 != 0) {
         free(__ptr);
         return uVar1 & 0xffffffff;
      }

      *param_2 = __ptr;
   }

   return uVar1;
}
int ktxTexture2_constructFromStreamAndHeader(undefined8 *param_1, undefined8 param_2, long param_3, uint param_4) {
   long lVar1;
   undefined8 *puVar2;
   long *plVar3;
   uint uVar4;
   undefined4 uVar5;
   long lVar6;
   long lVar7;
   int *piVar8;
   size_t __size;
   char cVar9;
   int iVar10;
   int iVar11;
   uint uVar12;
   long *plVar13;
   void *pvVar14;
   ulong uVar15;
   ulong uVar16;
   ulong uVar17;
   ulong uVar18;
   undefined8 *puVar19;
   long in_FS_OFFSET;
   bool bVar20;
   double dVar21;
   int local_64;
   int local_60;
   undefined1 local_5c;
   char local_5b;
   ushort local_5a;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_1 = 0;
   param_1[0x14] = 0;
   puVar19 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar16 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0xa8U >> 3); uVar16 != 0; uVar16 = uVar16 - 1) {
      *puVar19 = 0;
      puVar19 = puVar19 + 1;
   }

   iVar10 = ktxTexture_constructFromStream(param_1, param_2, param_4);
   if (iVar10 != 0) goto LAB_00101fca;
   iVar11 = ktxCheckHeader2_(param_3, &local_5c);
   if (iVar11 == 0) {
      uVar4 = *(uint*)( param_3 + 0x28 );
      iVar11 = ktxTexture2_constructCommon(param_1, uVar4);
      if (iVar11 == 0) {
         lVar6 = param_1[3];
         puVar19 = (undefined8*)param_1[0x14];
         lVar1 = lVar6 + 0x40;
         *(undefined4*)( param_1 + 0xf ) = *(undefined4*)( param_3 + 0xc );
         *(undefined4*)( param_1 + 0x11 ) = *(undefined4*)( param_3 + 0x2c );
         *(undefined4*)( lVar6 + 0x38 ) = *(undefined4*)( param_3 + 0x10 );
         *(uint*)( param_1 + 6 ) = (uint)local_5a;
         *(undefined4*)( (long)param_1 + 0x24 ) = *(undefined4*)( param_3 + 0x14 );
         if (local_5a == 2) {
            uVar5 = *(undefined4*)( param_3 + 0x18 );
            *(undefined4*)( (long)param_1 + 0x2c ) = 1;
            *(undefined4*)( param_1 + 5 ) = uVar5;
         }
 else if (local_5a == 3) {
            param_1[5] = *(undefined8*)( param_3 + 0x18 );
         }
 else if (local_5a == 1) {
            param_1[5] = _LC4;
         }

         iVar10 = *(int*)( param_3 + 0x20 );
         bVar20 = iVar10 != 0;
         if (!bVar20) {
            iVar10 = 1;
         }

         *(bool*)( param_1 + 4 ) = bVar20;
         iVar11 = *(int*)( param_3 + 0x24 );
         plVar13 = puVar19 + 4;
         *(int*)( (long)param_1 + 0x3c ) = iVar11;
         *(bool*)( (long)param_1 + 0x21 ) = iVar11 == 6;
         *(bool*)( (long)param_1 + 0x23 ) = local_5b != '\0';
         *(ulong*)( (long)param_1 + 0x34 ) = CONCAT44(iVar10, uVar4);
         iVar11 = ( **(code**)( lVar6 + 0x40 ) )(lVar1, plVar13, (ulong)uVar4 * 0x18);
         if (iVar11 == 0) {
            uVar4 = *(uint*)( (long)param_1 + 0x34 );
            lVar7 = puVar19[( ulong )(uVar4 - 1) * 3 + 4];
            puVar19[3] = lVar7;
            if (uVar4 == 0) {
               LAB_0010213d:if (( *(int*)( param_3 + 0x30 ) != 0 ) && ( uVar4 = 0xf < uVar4 )) {
                  pvVar14 = malloc((ulong)uVar4);
                  param_1[0x10] = pvVar14;
                  if (pvVar14 == (void*)0x0) {
                     LAB_001024e9:iVar11 = 0xd;
                     goto LAB_00102310;
                  }

                  iVar10 = ( **(code**)( lVar6 + 0x40 ) )(lVar1, pvVar14, (ulong)uVar4);
                  iVar11 = iVar10;
                  if (iVar10 != 0) goto LAB_00102310;
                  piVar8 = (int*)param_1[0x10];
                  if (( ( ( *(int*)( param_3 + 0x34 ) != *piVar8 ) || ( *(ushort*)( (long)piVar8 + 10 ) < 0x18 ) ) || ( ( *(ushort*)( (long)piVar8 + 10 ) + 8 & 0xf ) != 0 ) ) || ( 1 < ( byte )(*(char*)( (long)piVar8 + 0xe ) - 1U) )) goto LAB_00102300;
                  cVar9 = ktxFormatSize_initFromDfd(param_1[3] + 0x18, piVar8);
                  if (cVar9 == '\0') {
                     iVar11 = 0x10;
                     goto LAB_00102310;
                  }

                  uVar16 = param_1[3];
                  uVar4 = *(uint*)( param_1 + 0x11 );
                  *(byte*)( (long)param_1 + 0x22 ) = ( byte )(*(uint*)( uVar16 + 0x18 ) >> 1) & 1;
                  if (( uVar4 != 1 ) || ( (char)piVar8[3] == -0x5d )) {
                     if (( param_4 & 8 ) != 0) {
                        uVar12 = *(uint*)( param_3 + 0x1c );
                        if (*(uint*)( param_3 + 0x1c ) < *(uint*)( param_3 + 0x18 )) {
                           uVar12 = *(uint*)( param_3 + 0x18 );
                        }

                        if (uVar12 < *(uint*)( param_3 + 0x14 )) {
                           uVar12 = *(uint*)( param_3 + 0x14 );
                        }

                        dVar21 = log2((double)uVar12);
                        if (( ( ( ( (int)(long)dVar21 + 1 != *(int*)( param_3 + 0x28 ) ) && ( *(int*)( param_3 + 0x28 ) != 1 ) ) || ( ( *(int*)( param_1 + 6 ) != 2 || ( ( ( *(short*)( param_1 + 4 ) != 0 || ( ( *(byte*)( (long)param_1 + 0x24 ) & 3 ) != 0 ) ) || ( ( *(byte*)( param_1 + 5 ) & 3 ) != 0 ) ) ) ) ) ) || ( ( cVar9 = (char)piVar8[3] ),cVar9 != -0x5d && ( cVar9 != -0x5a ) ) )) goto LAB_00102300;
                     }

                     uVar18 = (ulong)uVar4;
                     uVar12 = ( *(uint*)( param_1[0x10] + 8 ) >> 0x12 ) - 6;
                     if (( 3 < uVar12 ) && ( ( ( cVar9 = (char)piVar8[3] ),cVar9 != -0x5d && ( cVar9 != -0x5a ) ) || ( ( uVar12 = uVar12 >> 2 ),uVar12 - 1 < 2 && ( ( ( uVar12 != 2 || ( cVar9 != -0x5a ) ) && ( piVar8[4] == 0x303 ) ) ) ) )) {
                        uVar12 = 1;
                        if (uVar4 == 0) {
                           uVar12 = *(uint*)( uVar16 + 0x20 ) >> 3;
                           if (( *(uint*)( uVar16 + 0x20 ) & 0x18 ) != 0) {
                              uVar16 = ( ulong )(uVar12 * 4);
                              uVar15 = 4;
                              uVar18 = (ulong)uVar12;
                              do {
                                 uVar17 = uVar18;
                                 uVar18 = uVar15 % uVar17;
                                 uVar15 = uVar17;
                              }
 while ( (int)uVar18 != 0 );
                              uVar18 = uVar16 % uVar17;
                              uVar12 = ( uint )(uVar16 / uVar17);
                           }

                        }

                        *(uint*)( param_1[0x14] + 8 ) = uVar12;
                        puVar2 = param_1 + 10;
                        ktxHashList_Construct(puVar2, uVar16, uVar18);
                        uVar4 = *(uint*)( param_3 + 0x3c );
                        if (uVar4 == 0) {
                           if (*(int*)( param_3 + 0x38 ) != 0) goto LAB_00102300;
                           goto LAB_001022cd;
                        }

                        if (( *(int*)( param_3 + 0x34 ) + *(int*)( param_3 + 0x30 ) + 3U & 0xfffffffc ) != *(uint*)( param_3 + 0x38 )) goto LAB_00102300;
                        uVar16 = (ulong)uVar4;
                        if (( param_4 & 4 ) != 0) {
                           ( **(code**)( lVar6 + 0x48 ) )(lVar1, uVar16);
                           goto LAB_001022cd;
                        }

                        pvVar14 = malloc(uVar16);
                        if (pvVar14 == (void*)0x0) goto LAB_001024e9;
                        iVar11 = ( **(code**)( lVar6 + 0x40 ) )(lVar1, pvVar14, uVar16);
                        if (iVar11 != 0) goto LAB_00102310;
                        if (( param_4 & 2 ) != 0) {
                           *(uint*)( param_1 + 0xb ) = uVar4;
                           param_1[0xc] = pvVar14;
                           goto LAB_001022cd;
                        }

                        iVar11 = ktxHashList_Deserialize(puVar2, uVar4, pvVar14);
                        free(pvVar14);
                        if (iVar11 != 0) goto LAB_00102310;
                        iVar11 = ktxHashList_FindValue(puVar2, "KTXorientation", &local_64, &local_58);
                        if (iVar11 == 0) {
                           iVar11 = *(int*)( param_1 + 6 );
                           if (iVar11 + 1 == local_64) {
                              if (iVar11 == 2) {
                                 LAB_00102608:*(int*)( (long)param_1 + 0x44 ) = (int)local_58[1];
                              }
 else {
                                 if (iVar11 == 3) {
                                    *(int*)( param_1 + 9 ) = (int)local_58[2];
                                    goto LAB_00102608;
                                 }

                                 if (iVar11 != 1) goto LAB_001025ab;
                              }

                              *(int*)( param_1 + 8 ) = (int)*local_58;
                              goto LAB_001025ab;
                           }

                           LAB_00102618:iVar11 = 1;
                        }
 else {
                           LAB_001025ab:iVar11 = ktxHashList_FindValue(puVar2, "KTXanimData", &local_60, &local_50);
                           if (iVar11 == 0) {
                              if (( local_60 != 0xc ) || ( *(char*)( param_1 + 4 ) == '\0' )) goto LAB_00102618;
                              *(undefined1*)( (long)param_1 + 0x8c ) = 1;
                              param_1[0x12] = local_50;
                              *(undefined4*)( param_1 + 0x13 ) = local_48;
                           }

                           LAB_001022cd:if (*(long*)( param_3 + 0x48 ) == 0) {
                              if (( *(long*)( param_3 + 0x40 ) != 0 ) || ( *(int*)( param_1 + 0x11 ) == 1 )) goto LAB_00102300;
                              LAB_0010245a:param_1[0xd] = puVar19[5] + puVar19[4];
                              if (( ( param_4 & 1 ) == 0 ) || ( iVar11 = iVar11 == 0 )) goto LAB_00101fca;
                           }
 else {
                              uVar4 = *(uint*)( param_1 + 0x11 );
                              if (uVar4 == 1) {
                                 ( **(code**)( lVar6 + 0x60 ) )(lVar1, *(undefined8*)( param_3 + 0x40 ));
                                 __size = *(size_t*)( param_3 + 0x48 );
                                 pvVar14 = malloc(__size);
                                 *puVar19 = pvVar14;
                                 if (pvVar14 == (void*)0x0) goto LAB_001024e9;
                                 puVar19[2] = __size;
                                 iVar11 = ( **(code**)( lVar6 + 0x40 ) )(lVar1, pvVar14, __size);
                                 if (iVar11 == 0) goto LAB_0010245a;
                              }
 else if (( uVar4 < 2 ) || ( iVar11 = uVar4 - 2 < 2 )) goto LAB_00102300;
                           }

                        }

                        goto LAB_00102310;
                     }

                  }

               }

            }
 else {
               iVar10 = *(int*)( param_1 + 0x11 );
               plVar3 = plVar13 + (ulong)uVar4 * 3;
               bVar20 = false;
               do {
                  *plVar13 = *plVar13 - lVar7;
                  if (( iVar10 == 0 ) && ( plVar13[1] != plVar13[2] )) {
                     bVar20 = true;
                  }

                  plVar13 = plVar13 + 3;
               }
 while ( plVar13 != plVar3 );
               if (!bVar20) goto LAB_0010213d;
            }

            LAB_00102300:iVar11 = 1;
         }

      }

   }

   LAB_00102310:iVar10 = iVar11;
   ktxTexture2_destruct(param_1);
   LAB_00101fca:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar10;
}
ulong ktxTexture2_CreateFromNamedFile(char *param_1, undefined4 param_2, undefined8 *param_3) {
   void *__ptr;
   ulong uVar1;
   FILE *pFVar2;
   long in_FS_OFFSET;
   code *local_f8[14];
   undefined1 local_88[88];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == (undefined8*)0x0) {
      uVar1 = 0xb;
   }
 else {
      __ptr = malloc(0xa8);
      if (__ptr == (void*)0x0) {
         uVar1 = 0xd;
      }
 else {
         uVar1 = 0xb;
         if (param_1 != (char*)0x0) {
            pFVar2 = fopen64(param_1, "rb");
            if (pFVar2 == (FILE*)0x0) {
               uVar1 = 3;
            }
 else {
               uVar1 = ktxFileStream_construct(local_f8, pFVar2, 1);
               if ((int)uVar1 == 0) {
                  uVar1 = ( *local_f8[0] )(local_f8, local_88, 0x50);
                  if ((int)uVar1 == 0) {
                     uVar1 = ktxTexture2_constructFromStreamAndHeader(__ptr, local_f8, local_88, param_2);
                     if ((int)uVar1 == 0) {
                        *param_3 = __ptr;
                        goto LAB_001026d0;
                     }

                  }

               }

            }

         }

         free(__ptr);
         *param_3 = 0;
         uVar1 = uVar1 & 0xffffffff;
      }

   }

   LAB_001026d0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ktxTexture2_CreateFromStream(undefined8 *param_1, undefined4 param_2, undefined8 *param_3) {
   void *__ptr;
   ulong uVar1;
   long in_FS_OFFSET;
   undefined1 local_88[88];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == (undefined8*)0x0) {
      uVar1 = 0xb;
   }
 else {
      __ptr = malloc(0xa8);
      if (__ptr == (void*)0x0) {
         uVar1 = 0xd;
      }
 else {
         uVar1 = ( *(code*)*param_1 )(param_1, local_88, 0x50);
         if ((int)uVar1 == 0) {
            uVar1 = ktxTexture2_constructFromStreamAndHeader(__ptr, param_1, local_88, param_2);
            if ((int)uVar1 == 0) {
               *param_3 = __ptr;
               goto LAB_001027c2;
            }

         }

         free(__ptr);
         *param_3 = 0;
         uVar1 = uVar1 & 0xffffffff;
      }

   }

   LAB_001027c2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ktxTexture2_CreateFromMemory(long param_1, long param_2, undefined4 param_3, undefined8 *param_4) {
   void *__ptr;
   ulong uVar1;
   long in_FS_OFFSET;
   code *local_108[14];
   undefined1 local_98[88];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 == (undefined8*)0x0) {
      uVar1 = 0xb;
   }
 else {
      __ptr = malloc(0xa8);
      if (__ptr == (void*)0x0) {
         uVar1 = 0xd;
      }
 else {
         if (( param_1 == 0 ) || ( param_2 == 0 )) {
            uVar1 = 0xb;
         }
 else {
            uVar1 = ktxMemStream_construct_ro(local_108, param_1, param_2);
            if ((int)uVar1 == 0) {
               uVar1 = ( *local_108[0] )(local_108, local_98, 0x50);
               if ((int)uVar1 == 0) {
                  uVar1 = ktxTexture2_constructFromStreamAndHeader(__ptr, local_108, local_98, param_3);
                  if ((int)uVar1 == 0) {
                     *param_4 = __ptr;
                     goto LAB_001028aa;
                  }

               }

            }

         }

         free(__ptr);
         *param_4 = 0;
         uVar1 = uVar1 & 0xffffffff;
      }

   }

   LAB_001028aa:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ulong ktxTexture2_CreateFromStdioStream(long param_1, undefined4 param_2, undefined8 *param_3) {
   void *__ptr;
   ulong uVar1;
   long in_FS_OFFSET;
   code *local_f8[14];
   undefined1 local_88[88];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == (undefined8*)0x0) {
      uVar1 = 0xb;
   }
 else {
      __ptr = malloc(0xa8);
      if (__ptr == (void*)0x0) {
         uVar1 = 0xd;
      }
 else {
         uVar1 = 0xb;
         if (param_1 != 0) {
            uVar1 = ktxFileStream_construct(local_f8, param_1, 0);
            if ((int)uVar1 == 0) {
               uVar1 = ( *local_f8[0] )(local_f8, local_88, 0x50);
               if ((int)uVar1 == 0) {
                  uVar1 = ktxTexture2_constructFromStreamAndHeader(__ptr, local_f8, local_88, param_2);
                  if ((int)uVar1 == 0) {
                     *param_3 = __ptr;
                     goto LAB_001029c4;
                  }

               }

            }

         }

         free(__ptr);
         *param_3 = 0;
         uVar1 = uVar1 & 0xffffffff;
      }

   }

   LAB_001029c4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}


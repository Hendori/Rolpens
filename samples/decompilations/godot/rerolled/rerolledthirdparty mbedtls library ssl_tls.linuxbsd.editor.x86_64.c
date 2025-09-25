undefined8 ssl_cookie_write_dummy(void) {
   return 0xffff8f80;
}
undefined8 ssl_cookie_check_dummy(void) {
   return 0xffff8f80;
}
undefined8 ssl_append_key_cert(long *param_1, long param_2, long param_3) {
   long lVar1;
   void *pvVar2;
   void *__ptr;
   long *plVar3;
   long lVar4;
   if (param_2 == 0) {
      __ptr = (void*)*param_1;
      while (__ptr != (void*)0x0) {
         pvVar2 = *(void**)( (long)__ptr + 0x10 );
         free(__ptr);
         __ptr = pvVar2;
      }
;
      *param_1 = 0;
   }
 else {
      plVar3 = (long*)calloc(1, 0x18);
      if (plVar3 == (long*)0x0) {
         return 0xffff8100;
      }

      lVar1 = *param_1;
      *plVar3 = param_2;
      plVar3[1] = param_3;
      plVar3[2] = 0;
      if (lVar1 == 0) {
         *param_1 = (long)plVar3;
      }
 else {
         do {
            lVar4 = lVar1;
            lVar1 = *(long*)( lVar4 + 0x10 );
         }
 while ( lVar1 != 0 );
         *(long**)( lVar4 + 0x10 ) = plVar3;
      }

   }

   return 0;
}
int tls_prf_generic(undefined4 param_1, undefined8 param_2, undefined8 param_3, char *param_4, undefined8 param_5, long param_6, long param_7, ulong param_8) {
   size_t __size;
   ulong uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   byte bVar4;
   int iVar5;
   int iVar6;
   long lVar7;
   size_t sVar8;
   void *__ptr;
   size_t sVar9;
   ulong uVar10;
   ulong uVar11;
   undefined8 *puVar12;
   undefined8 *puVar13;
   ulong uVar14;
   undefined4 *puVar15;
   long in_FS_OFFSET;
   byte bVar16;
   undefined8 *local_e8;
   undefined1 local_a8[24];
   undefined8 uStack_90;
   undefined8 local_88;
   long local_40;
   bVar16 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_md_init(local_a8);
   lVar7 = mbedtls_md_info_from_type(param_1);
   if (lVar7 == 0) {
      iVar5 = -0x6c00;
   }
 else {
      bVar4 = mbedtls_md_get_size(lVar7);
      uVar11 = CONCAT71(0, bVar4);
      sVar8 = strlen(param_4);
      __size = sVar8 + param_6 + uVar11;
      __ptr = calloc(1, __size);
      if (__ptr == (void*)0x0) {
         iVar5 = -0x7f00;
         mbedtls_md_free(local_a8);
      }
 else {
         sVar9 = __size;
         if (__size <= uVar11) {
            sVar9 = uVar11;
         }

         uVar14 = sVar8 + uVar11;
         __memcpy_chk((long)__ptr + uVar11, param_4, sVar8, sVar9 - uVar11);
         sVar9 = __size;
         if (__size <= uVar14) {
            sVar9 = uVar14;
         }

         __memcpy_chk((long)__ptr + uVar14, param_5, param_6, sVar9 - uVar14);
         iVar5 = mbedtls_md_setup(local_a8, lVar7, 1);
         if (( ( ( iVar5 == 0 ) && ( iVar5 = mbedtls_md_hmac_starts(local_a8, param_2, param_3) ),iVar5 == 0 ) ) && ( iVar5 = mbedtls_md_hmac_update(local_a8, (long)__ptr + uVar11, sVar8 + param_6) ),iVar5 == 0) {
            iVar6 = iVar5;
            if (param_8 != 0) {
               uVar14 = 0;
               do {
                  iVar6 = mbedtls_md_hmac_reset(local_a8);
                  if (( ( ( iVar6 != 0 ) || ( iVar6 = mbedtls_md_hmac_update(local_a8, __ptr, __size) ),iVar6 != 0 ) ) || ( ( iVar6 = mbedtls_md_hmac_finish(local_a8, &local_88) ),iVar6 != 0 || ( ( iVar6 = mbedtls_md_hmac_reset(local_a8) ),iVar6 != 0 || ( iVar6 = mbedtls_md_hmac_update(local_a8, __ptr, uVar11) ),iVar6 != 0 ) )) break;
                  uVar1 = uVar11 + uVar14;
                  if (param_8 < uVar1) {
                     auVar2._8_8_ = 0;
                     auVar2._0_8_ = uVar11;
                     auVar3._8_8_ = 0;
                     auVar3._0_8_ = param_8;
                     uVar10 = SUB168(auVar3 % auVar2, 0);
                     iVar6 = iVar5;
                     if (uVar10 == 0) break;
                     if (SUB164(auVar3 % auVar2, 0) < 8) goto LAB_001002e4;
                     LAB_001003ac:puVar13 = (undefined8*)( uVar14 + param_7 );
                     *puVar13 = CONCAT44(local_88._4_4_, (undefined4)local_88);
                     *(undefined8*)( ( uVar10 - 8 ) + (long)puVar13 ) = *(undefined8*)( (long)&uStack_90 + uVar10 );
                     lVar7 = (long)puVar13 - (long)( ( ulong )(puVar13 + 1) & 0xfffffffffffffff8 );
                     puVar12 = (undefined8*)( (long)&local_88 - lVar7 );
                     puVar13 = (undefined8*)( ( ulong )(puVar13 + 1) & 0xfffffffffffffff8 );
                     for (uVar14 = ( ulong )(( uint )((int)uVar10 + (int)lVar7) >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
                        *puVar13 = *puVar12;
                        puVar12 = puVar12 + (ulong)bVar16 * -2 + 1;
                        puVar13 = puVar13 + (ulong)bVar16 * -2 + 1;
                     }

                  }
 else if (uVar11 != 0) {
                     uVar10 = uVar11;
                     if (7 < bVar4) goto LAB_001003ac;
                     LAB_001002e4:puVar15 = (undefined4*)( uVar14 + param_7 );
                     if (( uVar10 & 4 ) == 0) {
                        if ((int)uVar10 != 0) {
                           *(undefined1*)puVar15 = (undefined1)local_88;
                           if (( uVar10 & 2 ) != 0) {
                              *(undefined2*)( (long)puVar15 + ( uVar10 - 2 ) ) = *(undefined2*)( (long)&uStack_90 + uVar10 + 6 );
                           }

                        }

                     }
 else {
                        *puVar15 = (undefined4)local_88;
                        *(undefined4*)( (long)puVar15 + ( uVar10 - 4 ) ) = *(undefined4*)( (long)&uStack_90 + uVar10 + 4 );
                     }

                  }

                  uVar14 = uVar1;
                  iVar6 = iVar5;
               }
 while ( uVar1 < param_8 );
            }

            iVar5 = iVar6;
            mbedtls_md_free(local_a8);
         }
 else {
            mbedtls_md_free(local_a8);
         }

         mbedtls_platform_zeroize(__ptr, __size);
      }

      local_e8 = &local_88;
      mbedtls_platform_zeroize(local_e8, 0x40);
      free(__ptr);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar5;
}
void tls_prf_sha256(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   tls_prf_generic(9, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
   return;
}
void tls_prf_sha384(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   tls_prf_generic(10, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
   return;
}
void ssl_update_checksum_sha256(long param_1) {
   mbedtls_md_update(*(long*)( param_1 + 0x70 ) + 0x520);
   return;
}
void ssl_update_checksum_sha384(long param_1) {
   mbedtls_md_update(*(long*)( param_1 + 0x70 ) + 0x538);
   return;
}
uint ssl_session_save(undefined1 *param_1, char param_2, ulong *param_3, ulong param_4, ulong *param_5) {
   undefined4 *puVar1;
   ulong uVar2;
   byte bVar3;
   int iVar4;
   undefined8 uVar5;
   char cVar6;
   uint uVar7;
   size_t sVar8;
   void *pvVar9;
   long lVar10;
   ulong uVar11;
   undefined8 *puVar12;
   ulong *puVar13;
   undefined8 *puVar14;
   ulong *puVar15;
   uint *__dest;
   ulong uVar16;
   ulong uVar17;
   byte bVar18;
   bVar18 = 0;
   if (param_1 == (undefined1*)0x0) {
      return 0xffff9400;
   }

   if (param_2 == '\0') {
      if (4 < param_4) {
         *(uint*)param_3 = 0x30603;
         uVar17 = 9;
         *(undefined1*)( (long)param_3 + 4 ) = 0xff;
         param_3 = (ulong*)( (long)param_3 + 5 );
         goto LAB_00100636;
      }

      iVar4 = *(int*)( param_1 + 4 );
      uVar17 = 9;
      puVar13 = param_3;
      LAB_0010053f:if (iVar4 == 0x303) {
         uVar11 = 0;
         LAB_001006a2:lVar10 = *(long*)( param_1 + 0x70 );
         if (lVar10 == 0) {
            uVar16 = 0x60;
         }
 else {
            LAB_001006af:sVar8 = *(size_t*)( lVar10 + 0x10 );
            uVar16 = sVar8 + 0x60;
            LAB_001006b7:if (uVar16 <= uVar11) {
               puVar15 = (ulong*)( (long)puVar13 + 3 );
               *(char*)puVar13 = (char)( sVar8 >> 0x10 );
               *(ushort*)( (long)puVar13 + 1 ) = (ushort)sVar8 << 8 | (ushort)sVar8 >> 8;
               puVar13 = puVar15;
               if (*(long*)( param_1 + 0x70 ) != 0) {
                  pvVar9 = memcpy(puVar15, *(void**)( *(long*)( param_1 + 0x70 ) + 0x18 ), sVar8);
                  puVar13 = (ulong*)( (long)pvVar9 + sVar8 );
               }

            }

         }

         cVar6 = param_1[2];
         if (cVar6 == '\0') {
            uVar16 = *(long*)( param_1 + 0x88 ) + 7 + uVar16;
            puVar15 = puVar13;
            if (uVar16 <= uVar11) {
               __dest = (uint*)( (long)puVar13 + 3 );
               *(char*)puVar13 = (char)( ( ulong ) * (long*)( param_1 + 0x88 ) >> 0x10 );
               *(char*)( (long)puVar13 + 1 ) = (char)( ( ulong ) * (undefined8*)( param_1 + 0x88 ) >> 8 );
               *(char*)( (long)puVar13 + 2 ) = (char)*(undefined8*)( param_1 + 0x88 );
               if (*(void**)( param_1 + 0x80 ) != (void*)0x0) {
                  pvVar9 = memcpy(__dest, *(void**)( param_1 + 0x80 ), *(size_t*)( param_1 + 0x88 ));
                  __dest = (uint*)( *(long*)( param_1 + 0x88 ) + (long)pvVar9 );
               }

               uVar7 = *(uint*)( param_1 + 0x90 );
               puVar13 = (ulong*)( __dest + 1 );
               *__dest = uVar7 >> 0x18 | ( uVar7 & 0xff0000 ) >> 8 | ( uVar7 & 0xff00 ) << 8 | uVar7 << 0x18;
               cVar6 = param_1[2];
               goto LAB_00100778;
            }

         }
 else {
            LAB_00100778:puVar15 = puVar13;
            if (( cVar6 == '\x01' ) && ( uVar16 = uVar16 <= uVar11 )) {
               uVar2 = *(ulong*)( param_1 + 0x98 );
               puVar15 = puVar13 + 1;
               *puVar13 = uVar2 >> 0x38 | ( uVar2 & 0xff000000000000 ) >> 0x28 | ( uVar2 & 0xff0000000000 ) >> 0x18 | ( uVar2 & 0xff00000000 ) >> 8 | ( uVar2 & 0xff000000 ) << 8 | ( uVar2 & 0xff0000 ) << 0x18 | ( uVar2 & 0xff00 ) << 0x28 | uVar2 << 0x38;
            }

         }

         puVar13 = puVar15;
         if (uVar16 + 1 <= uVar11) {
            puVar13 = (ulong*)( (long)puVar15 + 1 );
            *(undefined1*)puVar15 = *param_1;
         }

         uVar16 = uVar16 + 2;
         if (uVar16 <= uVar11) {
            *(char*)puVar13 = (char)*(undefined4*)( param_1 + 0xe8 );
         }

         goto LAB_0010060a;
      }

      if (iVar4 != 0x304) {
         return 0xffff8f80;
      }

      uVar11 = 0;
   }
 else {
      uVar17 = 4;
      LAB_00100636:iVar4 = *(int*)( param_1 + 4 );
      puVar13 = param_3;
      if (param_4 < uVar17) goto LAB_0010053f;
      *(char*)param_3 = (char)iVar4;
      puVar13 = (ulong*)( (long)param_3 + 4 );
      uVar11 = param_4 - uVar17;
      *(undefined1*)( (long)param_3 + 1 ) = param_1[2];
      *(ushort*)( (long)param_3 + 2 ) = *(ushort*)( param_1 + 0x10 ) << 8 | *(ushort*)( param_1 + 0x10 ) >> 8;
      if (*(int*)( param_1 + 4 ) == 0x303) {
         if (uVar11 < 8) goto LAB_001006a2;
         uVar16 = *(ulong*)( param_1 + 8 );
         *(ulong*)( (long)param_3 + 4 ) = uVar16 >> 0x38 | ( uVar16 & 0xff000000000000 ) >> 0x28 | ( uVar16 & 0xff0000000000 ) >> 0x18 | ( uVar16 & 0xff00000000 ) >> 8 | ( uVar16 & 0xff000000 ) << 8 | ( uVar16 & 0xff0000 ) << 0x18 | ( uVar16 & 0xff00 ) << 0x28 | uVar16 << 0x38;
         if (uVar11 < 0x5d) {
            puVar13 = (ulong*)( (long)param_3 + 0xc );
            goto LAB_001006a2;
         }

         puVar13 = (ulong*)( (long)param_3 + 0x61 );
         *(char*)( (long)param_3 + 0xc ) = (char)*(undefined8*)( param_1 + 0x18 );
         for (int i = 0; i < 5; i++) {
            uVar5 = *(undefined8*)( param_1 + ( 16*i + 40 ) );
            *(undefined8*)( (long)param_3 + ( 16*i + 13 ) ) = *(undefined8*)( param_1 + ( 16*i + 32 ) );
            *(undefined8*)( (long)param_3 + ( 16*i + 21 ) ) = uVar5;
         }

         uVar7 = *(uint*)( param_1 + 0x78 );
         *(uint*)( (long)param_3 + 0x5d ) = uVar7 >> 0x18 | ( uVar7 & 0xff0000 ) >> 8 | ( uVar7 & 0xff00 ) << 8 | uVar7 << 0x18;
         lVar10 = *(long*)( param_1 + 0x70 );
         if (lVar10 != 0) goto LAB_001006af;
         uVar16 = 0x60;
         sVar8 = 0;
         goto LAB_001006b7;
      }

      if (*(int*)( param_1 + 4 ) != 0x304) {
         return 0xffff8f80;
      }

   }

   sVar8 = 0;
   if (*(char**)( param_1 + 0xd8 ) != (char*)0x0) {
      sVar8 = strlen(*(char**)( param_1 + 0xd8 ));
      sVar8 = sVar8 + 1;
   }

   bVar3 = param_1[0xa5];
   if (0x30 < bVar3) {
      return 0xffff8f00;
   }

   if (param_1[2] == '\0') {
      uVar2 = sVar8 + 0x16 + (ulong)bVar3;
      uVar16 = uVar2 + *(ulong*)( param_1 + 0x88 );
      if (CARRY8(uVar2, *(ulong*)( param_1 + 0x88 ))) {
         return 0xffff8f00;
      }

   }
 else {
      uVar16 = (ulong)bVar3 + 0xe;
   }

   if (uVar16 <= uVar11) {
      uVar7 = *(uint*)( param_1 + 0xa0 );
      puVar1 = (undefined4*)( (long)puVar13 + 6 );
      *(uint*)puVar13 = uVar7 >> 0x18 | ( uVar7 & 0xff0000 ) >> 8 | ( uVar7 & 0xff00 ) << 8 | uVar7 << 0x18;
      *(undefined1*)( (long)puVar13 + 4 ) = param_1[0xa4];
      bVar3 = param_1[0xa5];
      uVar11 = (ulong)bVar3;
      *(byte*)( (long)puVar13 + 5 ) = bVar3;
      uVar7 = (uint)bVar3;
      if (uVar7 < 8) {
         if (( bVar3 & 4 ) == 0) {
            if (( uVar7 != 0 ) && ( *(undefined1*)puVar1 = param_1[0xa6](bVar3 & 2) != 0 )) {
               *(undefined2*)( (long)puVar13 + uVar11 + 4 ) = *(undefined2*)( param_1 + uVar11 + 0xa4 );
            }

         }
 else {
            *puVar1 = *(undefined4*)( param_1 + 0xa6 );
            *(undefined4*)( (long)puVar13 + uVar11 + 2 ) = *(undefined4*)( param_1 + uVar11 + 0xa2 );
         }

      }
 else {
         puVar14 = (undefined8*)( (long)puVar13 + 0xeU & 0xfffffffffffffff8 );
         *(undefined8*)( (long)puVar13 + 6 ) = *(undefined8*)( param_1 + 0xa6 );
         *(undefined8*)( (long)puVar13 + ( uVar11 - 2 ) ) = *(undefined8*)( param_1 + uVar11 + 0x9e );
         lVar10 = (long)puVar1 - (long)puVar14;
         puVar12 = (undefined8*)( param_1 + ( 0xa6 - lVar10 ) );
         for (uVar11 = ( ulong )((int)lVar10 + uVar7 >> 3); uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar14 = *puVar12;
            puVar12 = puVar12 + (ulong)bVar18 * -2 + 1;
            puVar14 = puVar14 + (ulong)bVar18 * -2 + 1;
         }

      }

      puVar15 = (ulong*)( (long)puVar1 + (ulong)(byte)param_1[0xa5] );
      cVar6 = param_1[2];
      puVar13 = puVar15;
      if (cVar6 == '\x01') {
         uVar11 = *(ulong*)( param_1 + 0x98 );
         puVar13 = puVar15 + 1;
         *puVar15 = uVar11 >> 0x38 | ( uVar11 & 0xff000000000000 ) >> 0x28 | ( uVar11 & 0xff0000000000 ) >> 0x18 | ( uVar11 & 0xff00000000 ) >> 8 | ( uVar11 & 0xff000000 ) << 8 | ( uVar11 & 0xff0000 ) << 0x18 | ( uVar11 & 0xff00 ) << 0x28 | uVar11 << 0x38;
         cVar6 = param_1[2];
      }

      if (cVar6 == '\0') {
         puVar15 = (ulong*)( (long)puVar13 + 2 );
         *(ushort*)puVar13 = (ushort)sVar8 << 8 | (ushort)sVar8 >> 8;
         if (sVar8 != 0) {
            pvVar9 = memcpy(puVar15, *(void**)( param_1 + 0xd8 ), sVar8);
            puVar15 = (ulong*)( (long)pvVar9 + sVar8 );
         }

         uVar11 = *(ulong*)( param_1 + 0xe0 );
         *puVar15 = uVar11 >> 0x38 | ( uVar11 & 0xff000000000000 ) >> 0x28 | ( uVar11 & 0xff0000000000 ) >> 0x18 | ( uVar11 & 0xff00000000 ) >> 8 | ( uVar11 & 0xff000000 ) << 8 | ( uVar11 & 0xff0000 ) << 0x18 | ( uVar11 & 0xff00 ) << 0x28 | uVar11 << 0x38;
         uVar7 = *(uint*)( param_1 + 0x90 );
         *(uint*)( puVar15 + 1 ) = uVar7 >> 0x18 | ( uVar7 & 0xff0000 ) >> 8 | ( uVar7 & 0xff00 ) << 8 | uVar7 << 0x18;
         *(ushort*)( (long)puVar15 + 0xc ) = *(ushort*)( param_1 + 0x88 ) << 8 | *(ushort*)( param_1 + 0x88 ) >> 8;
         if (( *(void**)( param_1 + 0x80 ) != (void*)0x0 ) && ( *(size_t*)( param_1 + 0x88 ) != 0 )) {
            memcpy((ushort*)( (long)puVar15 + 0xe ), *(void**)( param_1 + 0x80 ), *(size_t*)( param_1 + 0x88 ));
         }

      }

   }

   LAB_0010060a:*param_5 = uVar16 + uVar17;
   return -(uint)(param_4 < uVar16 + uVar17) & 0xffff9600;
}
int ssl_session_load(byte *param_1, char param_2, int *param_3, ulong param_4) {
   ulong *puVar1;
   byte bVar2;
   byte bVar3;
   undefined8 uVar4;
   int iVar5;
   byte *pbVar6;
   long lVar7;
   void *pvVar8;
   ushort uVar9;
   ulong uVar10;
   uint uVar11;
   ulong uVar12;
   ulong *puVar13;
   uint *puVar14;
   uint *puVar15;
   ulong *puVar16;
   uint uVar17;
   puVar1 = (ulong*)( (long)param_3 + param_4 );
   if (param_1 == (byte*)0x0) {
      return -0x6c00;
   }

   if (param_2 == '\0') {
      if (param_4 < 5) {
         return -0x7100;
      }

      if (( *param_3 != 0x30603 ) || ( (char)param_3[1] != -1 )) {
         return -0x5f00;
      }

      param_3 = (int*)( (long)param_3 + 5 );
   }

   if (( ulong )((long)puVar1 - (long)param_3) < 4) {
      return -0x7100;
   }

   uVar9 = CONCAT11(3, (char)*param_3);
   *(uint*)( param_1 + 4 ) = (uint)uVar9;
   bVar2 = *(byte*)( (long)param_3 + 1 );
   param_1[2] = bVar2;
   *(uint*)( param_1 + 0x10 ) = ( uint )(ushort)(*(ushort*)( (long)param_3 + 2 ) << 8 | *(ushort*)( (long)param_3 + 2 ) >> 8);
   uVar12 = (long)puVar1 - (long)( param_3 + 1 );
   if (uVar9 == 0x303) {
      if (uVar12 < 8) {
         return -0x7100;
      }

      uVar10 = *(ulong*)( param_3 + 1 );
      *(ulong*)( param_1 + 8 ) = uVar10 >> 0x38 | ( uVar10 & 0xff000000000000 ) >> 0x28 | ( uVar10 & 0xff0000000000 ) >> 0x18 | ( uVar10 & 0xff00000000 ) >> 8 | ( uVar10 & 0xff000000 ) << 8 | ( uVar10 & 0xff0000 ) << 0x18 | ( uVar10 & 0xff00 ) << 0x28 | uVar10 << 0x38;
      if (uVar12 - 8 < 0x55) {
         return -0x7100;
      }

      *(ulong*)( param_1 + 0x18 ) = ( ulong ) * (byte*)( param_3 + 3 );
      for (int i = 0; i < 5; i++) {
         uVar4 = *(undefined8*)( (long)param_3 + ( 16*i + 21 ) );
         *(undefined8*)( param_1 + ( 16*i + 32 ) ) = *(undefined8*)( (long)param_3 + ( 16*i + 13 ) );
         *(undefined8*)( param_1 + ( 16*i + 40 ) ) = uVar4;
      }

      uVar11 = *(uint*)( (long)param_3 + 0x5d );
      param_1[0x70] = 0;
      param_1[0x71] = 0;
      param_1[0x72] = 0;
      param_1[0x73] = 0;
      param_1[0x74] = 0;
      param_1[0x75] = 0;
      param_1[0x76] = 0;
      param_1[0x77] = 0;
      param_1[0x80] = 0;
      param_1[0x81] = 0;
      param_1[0x82] = 0;
      param_1[0x83] = 0;
      param_1[0x84] = 0;
      param_1[0x85] = 0;
      param_1[0x86] = 0;
      param_1[0x87] = 0;
      *(uint*)( param_1 + 0x78 ) = uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18;
      if (uVar12 - 0x5d < 3) {
         return -0x7100;
      }

      puVar16 = (ulong*)( param_3 + 0x19 );
      uVar11 = ( uint ) * (byte*)( (long)param_3 + 0x61 ) << 0x10 | ( uint ) * (byte*)( (long)param_3 + 0x62 ) << 8 | ( uint ) * (byte*)( (long)param_3 + 99 );
      if (uVar11 != 0) {
         uVar10 = (ulong)uVar11;
         if (uVar12 - 0x60 < uVar10) {
            return -0x7100;
         }

         pvVar8 = calloc(1, 0x2e8);
         *(void**)( param_1 + 0x70 ) = pvVar8;
         if (pvVar8 == (void*)0x0) {
            return -0x7f00;
         }

         mbedtls_x509_crt_init(pvVar8);
         iVar5 = mbedtls_x509_crt_parse_der(*(undefined8*)( param_1 + 0x70 ), puVar16, uVar10);
         if (iVar5 != 0) {
            mbedtls_x509_crt_free(*(undefined8*)( param_1 + 0x70 ));
            free(*(void**)( param_1 + 0x70 ));
            for (int i = 0; i < 8; i++) {
               param_1[( i + 112 )] = 0;
            }

            return iVar5;
         }

         bVar2 = param_1[2];
         puVar16 = (ulong*)( (long)puVar16 + uVar10 );
      }

      if (bVar2 == 0) {
         if (( ulong )((long)puVar1 - (long)puVar16) < 3) {
            return -0x7100;
         }

         puVar14 = (uint*)( (long)puVar16 + 3 );
         uVar11 = ( uint )(byte) * puVar16 << 0x10 | ( uint ) * (byte*)( (long)puVar16 + 1 ) << 8 | ( uint ) * (byte*)( (long)puVar16 + 2 );
         uVar12 = (ulong)uVar11;
         *(ulong*)( param_1 + 0x88 ) = uVar12;
         puVar15 = puVar14;
         if (uVar11 != 0) {
            if (( ulong )((long)puVar1 - (long)puVar14) < uVar12) {
               return -0x7100;
            }

            pvVar8 = calloc(1, uVar12);
            *(void**)( param_1 + 0x80 ) = pvVar8;
            if (pvVar8 == (void*)0x0) {
               return -0x7f00;
            }

            puVar15 = (uint*)( (long)puVar14 + uVar12 );
            __memcpy_chk(pvVar8, puVar14, uVar12, uVar12);
         }

         if (( ulong )((long)puVar1 - (long)puVar15) < 4) {
            return -0x7100;
         }

         uVar11 = *puVar15;
         puVar16 = (ulong*)( puVar15 + 1 );
         *(uint*)( param_1 + 0x90 ) = uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18;
      }
 else if (bVar2 == 1) {
         if (( ulong )((long)puVar1 - (long)puVar16) < 8) {
            return -0x7100;
         }

         uVar12 = *puVar16;
         puVar16 = puVar16 + 1;
         *(ulong*)( param_1 + 0x98 ) = uVar12 >> 0x38 | ( uVar12 & 0xff000000000000 ) >> 0x28 | ( uVar12 & 0xff0000000000 ) >> 0x18 | ( uVar12 & 0xff00000000 ) >> 8 | ( uVar12 & 0xff000000 ) << 8 | ( uVar12 & 0xff0000 ) << 0x18 | ( uVar12 & 0xff00 ) << 0x28 | uVar12 << 0x38;
      }

      if (( ( puVar1 == puVar16 ) || ( *param_1 = ( byte ) * puVar16 ),puVar1 == (ulong*)( (long)puVar16 + 1 ) )) {
         return -0x7100;
      }

   }
 else {
      if (uVar9 != 0x304) {
         return -0x7100;
      }

      if ((long)uVar12 < 6) {
         return -0x7100;
      }

      uVar11 = param_3[1];
      pbVar6 = (byte*)( (long)param_3 + 10 );
      *(uint*)( param_1 + 0xa0 ) = uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18;
      param_1[0xa4] = *(byte*)( param_3 + 2 );
      bVar3 = *(byte*)( (long)param_3 + 9 );
      uVar10 = (ulong)bVar3;
      param_1[0xa5] = bVar3;
      if ((long)( uVar12 - 6 ) < (long)uVar10) {
         return -0x7100;
      }

      if (0x30 < bVar3) {
         return -0x7100;
      }

      uVar11 = (uint)bVar3;
      if (uVar11 < 8) {
         if (( bVar3 & 4 ) == 0) {
            if (( uVar11 != 0 ) && ( param_1[0xa6] = *pbVar6(bVar3 & 2) != 0 )) {
               *(undefined2*)( param_1 + uVar10 + 0xa4 ) = *(undefined2*)( (long)param_3 + uVar10 + 8 );
            }

         }
 else {
            *(undefined4*)( param_1 + 0xa6 ) = *(undefined4*)pbVar6;
            *(undefined4*)( param_1 + uVar10 + 0xa2 ) = *(undefined4*)( (long)param_3 + uVar10 + 6 );
         }

      }
 else {
         *(undefined8*)( param_1 + 0xa6 ) = *(undefined8*)pbVar6;
         *(undefined8*)( param_1 + uVar10 + 0x9e ) = *(undefined8*)( (long)param_3 + uVar10 + 2 );
         uVar11 = (int)( param_1 + ( 0xa6 - ( ( ulong )(param_1 + 0xae) & 0xfffffffffffffff8 ) ) ) + uVar11 & 0xfffffff8;
         if (7 < uVar11) {
            uVar17 = 0;
            do {
               uVar12 = (ulong)uVar17;
               uVar17 = uVar17 + 8;
               *(undefined8*)( ( ( ulong )(param_1 + 0xae) & 0xfffffffffffffff8 ) + uVar12 ) = *(undefined8*)( pbVar6 + ( uVar12 - (long)( param_1 + ( 0xa6 - ( ( ulong )(param_1 + 0xae) & 0xfffffffffffffff8 ) ) ) ) );
            }
 while ( uVar17 < uVar11 );
         }

      }

      puVar16 = (ulong*)( pbVar6 + uVar10 );
      if (bVar2 == 1) {
         if (7 < (long)puVar1 - (long)puVar16) {
            uVar12 = *puVar16;
            *(ulong*)( param_1 + 0x98 ) = uVar12 >> 0x38 | ( uVar12 & 0xff000000000000 ) >> 0x28 | ( uVar12 & 0xff0000000000 ) >> 0x18 | ( uVar12 & 0xff00000000 ) >> 8 | ( uVar12 & 0xff000000 ) << 8 | ( uVar12 & 0xff0000 ) << 0x18 | ( uVar12 & 0xff00 ) << 0x28 | uVar12 << 0x38;
            return 0;
         }

         return -0x7100;
      }

      if (bVar2 == 0) {
         if ((long)puVar1 - (long)puVar16 < 2) {
            return -0x7100;
         }

         puVar13 = (ulong*)( (long)puVar16 + 2 );
         lVar7 = (long)puVar1 - (long)puVar13;
         uVar12 = ( ulong )(ushort)(( ushort ) * puVar16 << 8 | ( ushort ) * puVar16 >> 8);
         if (lVar7 < (long)uVar12) {
            return -0x7100;
         }

         puVar16 = puVar13;
         if (uVar12 != 0) {
            pvVar8 = calloc(1, uVar12);
            *(void**)( param_1 + 0xd8 ) = pvVar8;
            if (pvVar8 == (void*)0x0) {
               return -0x7f00;
            }

            puVar16 = (ulong*)( (long)puVar13 + uVar12 );
            __memcpy_chk(pvVar8, puVar13, uVar12, uVar12);
            lVar7 = (long)puVar1 - (long)puVar16;
         }

         if (lVar7 < 8) {
            return -0x7100;
         }

         uVar12 = *puVar16;
         *(ulong*)( param_1 + 0xe0 ) = uVar12 >> 0x38 | ( uVar12 & 0xff000000000000 ) >> 0x28 | ( uVar12 & 0xff0000000000 ) >> 0x18 | ( uVar12 & 0xff00000000 ) >> 8 | ( uVar12 & 0xff000000 ) << 8 | ( uVar12 & 0xff0000 ) << 0x18 | ( uVar12 & 0xff00 ) << 0x28 | uVar12 << 0x38;
         if ((long)puVar1 - (long)( puVar16 + 1 ) < 4) {
            return -0x7100;
         }

         uVar11 = (uint)puVar16[1];
         *(uint*)( param_1 + 0x90 ) = uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18;
         if ((long)puVar1 - (long)( (long)puVar16 + 0xc ) < 2) {
            return -0x7100;
         }

         uVar12 = ( ulong )(ushort)(*(ushort*)( (long)puVar16 + 0xc ) << 8 | *(ushort*)( (long)puVar16 + 0xc ) >> 8);
         *(ulong*)( param_1 + 0x88 ) = uVar12;
         if ((long)puVar1 - ( (long)puVar16 + 0xe ) < (long)uVar12) {
            return -0x7100;
         }

         if (uVar12 != 0) {
            pvVar8 = calloc(1, uVar12);
            *(void**)( param_1 + 0x80 ) = pvVar8;
            if (pvVar8 == (void*)0x0) {
               return -0x7f00;
            }

            __memcpy_chk(pvVar8, (ushort*)( (long)puVar16 + 0xe ), uVar12, uVar12);
            return 0;
         }

      }

   }

   return 0;
}
int ssl_write_hello_request(long param_1) {
   int iVar1;
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x1254, "=> write hello request");
   *(undefined8*)( param_1 + 400 ) = 4;
   *(undefined4*)( param_1 + 0x188 ) = 0x16;
   **(undefined1**)( param_1 + 0x180 ) = 0;
   iVar1 = mbedtls_ssl_write_handshake_msg_ext(param_1, 1, 1);
   if (iVar1 == 0) {
      mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x125f, "<= write hello request");
      return 0;
   }

   mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x125b, "mbedtls_ssl_write_handshake_msg", iVar1);
   return iVar1;
}
undefined8 ssl_check_no_sig_alg_duplication(short *param_1) {
   undefined8 uVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   bool bVar5;
   uVar1 = 0;
   if (*param_1 == 0) {
      return 0;
   }

   lVar4 = 0;
   while (lVar3 = lVar4,lVar4 = lVar3 + 1,param_1[lVar4] != 0) {
      lVar2 = 0;
      do {
         if (param_1[lVar4] == param_1[lVar2]) {
            __printf_chk(2, " entry(%04x,%zu) is duplicated at %zu\n", param_1[lVar4], lVar2, lVar4);
            uVar1 = 0xffffffff;
         }

         bVar5 = lVar3 != lVar2;
         lVar2 = lVar2 + 1;
      }
 while ( bVar5 );
   }
;
   return uVar1;
}
int ssl_calc_finished_tls_generic(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, int param_6) {
   int iVar1;
   char *pcVar2;
   undefined8 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_md_init(local_58);
   lVar4 = *(long*)( param_1 + 0x68 );
   if (lVar4 == 0) {
      lVar4 = *(long*)( param_1 + 0x60 );
   }

   pcVar2 = "client finished";
   if (param_6 != 0) {
      pcVar2 = "server finished";
   }

   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x2007, "=> calc finished tls");
   uVar3 = mbedtls_md_info_from_ctx(param_2);
   iVar1 = mbedtls_md_setup(local_58, uVar3, 0);
   if (iVar1 == 0) {
      iVar1 = mbedtls_md_clone(local_58, param_2);
      if (iVar1 == 0) {
         iVar1 = mbedtls_md_finish(local_58, param_3);
         if (iVar1 == 0) {
            mbedtls_debug_print_buf(param_1, 4, "thirdparty/mbedtls/library/ssl_tls.c", 0x2018, "finished output", param_3, param_4);
            ( **(code**)( *(long*)( param_1 + 0x70 ) + 0x30 ) )(lVar4 + 0x40, 0x30, pcVar2, param_3, param_4, param_5, 0xc);
            mbedtls_debug_print_buf(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x2022, "calc finished result", param_5, 0xc);
            mbedtls_platform_zeroize(param_3, param_4);
            mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x2026, "<= calc finished");
         }

      }

   }

   mbedtls_md_free(local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ssl_calc_finished_tls_sha256(long param_1, undefined8 param_2, undefined4 param_3) {
   long in_FS_OFFSET;
   undefined1 auStack_38[40];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ssl_calc_finished_tls_generic(param_1, *(long*)( param_1 + 0x70 ) + 0x520, auStack_38, 0x20, param_2, param_3);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ssl_calc_finished_tls_sha384(long param_1, undefined8 param_2, undefined4 param_3) {
   long in_FS_OFFSET;
   undefined1 auStack_48[56];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ssl_calc_finished_tls_generic(param_1, *(long*)( param_1 + 0x70 ) + 0x538, auStack_48, 0x30, param_2, param_3);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int ssl_calc_verify_tls_legacy(undefined8 param_1, undefined8 param_2, undefined8 param_3, ulong *param_4) {
   byte bVar1;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_md_init(local_58);
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x1cb9, "=> calc verify");
   uVar3 = mbedtls_md_info_from_ctx(param_2);
   iVar2 = mbedtls_md_setup(local_58, uVar3, 0);
   if (iVar2 == 0) {
      iVar2 = mbedtls_md_clone(local_58, param_2);
      if (iVar2 == 0) {
         iVar2 = mbedtls_md_finish(local_58, param_3);
         if (iVar2 == 0) {
            uVar3 = mbedtls_md_info_from_ctx(param_2);
            bVar1 = mbedtls_md_get_size(uVar3);
            *param_4 = (ulong)bVar1;
            mbedtls_debug_print_buf(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x1ccb, "calculated verify result", param_3, (ulong)bVar1);
            mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x1ccc, "<= calc verify");
         }

      }

   }

   mbedtls_md_free(local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void ssl_calc_verify_tls_sha256(long param_1, undefined8 param_2, undefined8 param_3) {
   ssl_calc_verify_tls_legacy(param_1, *(long*)( param_1 + 0x70 ) + 0x520, param_2, param_3);
   return;
}
void ssl_calc_verify_tls_sha384(long param_1, undefined8 param_2, undefined8 param_3) {
   ssl_calc_verify_tls_legacy(param_1, *(long*)( param_1 + 0x70 ) + 0x538, param_2, param_3);
   return;
}
void ssl_update_checksum_start(long param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   iVar1 = mbedtls_md_update(*(long*)( param_1 + 0x70 ) + 0x520);
   if (iVar1 != 0) {
      return;
   }

   mbedtls_md_update(*(long*)( param_1 + 0x70 ) + 0x538, param_2, param_3);
   return;
}
undefined8 mbedtls_ssl_conf_cid(long param_1, ulong param_2, uint param_3) {
   if (( param_2 < 0x21 ) && ( param_3 < 2 )) {
      *(char*)( param_1 + 0x16 ) = (char)param_3;
      *(ulong*)( param_1 + 0xc0 ) = param_2;
      return 0;
   }

   return 0xffff8f00;
}
undefined8 mbedtls_ssl_set_cid(long *param_1, int param_2, void *param_3, ulong param_4) {
   size_t __n;
   undefined8 uVar1;
   if (*(char*)( *param_1 + 9 ) == '\x01') {
      *(char*)( (long)param_1 + 0x219 ) = (char)param_2;
      if (param_2 == 0) {
         mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x70, "Disable use of CID extension.");
      }
 else {
         mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x73, "Enable use of CID extension.");
         mbedtls_debug_print_buf(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x74, "Own CID", param_3, param_4);
         __n = *(size_t*)( *param_1 + 0xc0 );
         if (__n != param_4) {
            mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x77, "CID length %u does not match CID length %u in config", param_4 & 0xffffffff, __n);
            goto LAB_001015e9;
         }

         memcpy(param_1 + 0x3f, param_3, __n);
         *(char*)( param_1 + 0x43 ) = (char)__n;
      }

      uVar1 = 0;
   }
 else {
      LAB_001015e9:uVar1 = 0xffff8f00;
   }

   return uVar1;
}
undefined8 mbedtls_ssl_get_own_cid(long *param_1, undefined4 *param_2, long *param_3, ulong *param_4) {
   byte bVar1;
   ulong uVar2;
   uint uVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   long lVar6;
   lVar6 = *param_1;
   *param_2 = 0;
   if (*(char*)( lVar6 + 9 ) != '\x01') {
      return 0xffff8f00;
   }

   bVar1 = *(byte*)( param_1 + 0x43 );
   uVar2 = (ulong)bVar1;
   if (( bVar1 != 0 ) && ( *(char*)( (long)param_1 + 0x219 ) != '\0' )) {
      if (( param_4 != (ulong*)0x0 ) && ( *param_4 = uVar2 ),param_3 != (long*)0x0) {
         uVar3 = (uint)bVar1;
         if (uVar3 < 8) {
            if (( bVar1 & 4 ) == 0) {
               if (( uVar3 != 0 ) && ( *(char*)param_3 = (char)param_1[0x3f](bVar1 & 2) != 0 )) {
                  *(undefined2*)( (long)param_3 + ( uVar2 - 2 ) ) = *(undefined2*)( (long)param_1 + uVar2 + 0x1f6 );
               }

            }
 else {
               *(int*)param_3 = (int)param_1[0x3f];
               *(undefined4*)( (long)param_3 + ( uVar2 - 4 ) ) = *(undefined4*)( (long)param_1 + uVar2 + 500 );
            }

         }
 else {
            *param_3 = param_1[0x3f];
            *(undefined8*)( (long)param_3 + ( uVar2 - 8 ) ) = *(undefined8*)( (long)param_1 + uVar2 + 0x1f0 );
            lVar6 = (long)param_3 - (long)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
            puVar4 = (undefined8*)( (long)param_1 + ( 0x1f8 - lVar6 ) );
            puVar5 = (undefined8*)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
            for (uVar2 = ( ulong )(uVar3 + (int)lVar6 >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
               *puVar5 = *puVar4;
               puVar4 = puVar4 + 1;
               puVar5 = puVar5 + 1;
            }

         }

      }

      *param_2 = 1;
   }

   return 0;
}
undefined8 mbedtls_ssl_get_peer_cid(long *param_1, undefined4 *param_2, undefined8 *param_3, ulong *param_4) {
   byte bVar1;
   long lVar2;
   ulong uVar3;
   long lVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   *param_2 = 0;
   if (( *(char*)( *param_1 + 9 ) == '\x01' ) && ( 0x1a < (int)param_1[1] )) {
      lVar2 = param_1[0xf];
      if (*(short*)( lVar2 + 0x140 ) != 0) {
         if (param_4 != (ulong*)0x0) {
            bVar1 = *(byte*)( lVar2 + 0x141 );
            uVar3 = (ulong)bVar1;
            *param_4 = uVar3;
            if (param_3 != (undefined8*)0x0) {
               if (bVar1 < 8) {
                  if (( bVar1 & 4 ) == 0) {
                     if (( bVar1 != 0 ) && ( *(undefined1*)param_3 = *(undefined1*)( lVar2 + 0x162 )(bVar1 & 2) != 0 )) {
                        *(undefined2*)( (long)param_3 + ( uVar3 - 2 ) ) = *(undefined2*)( lVar2 + 0x160 + uVar3 );
                     }

                  }
 else {
                     *(undefined4*)param_3 = *(undefined4*)( lVar2 + 0x162 );
                     *(undefined4*)( (long)param_3 + ( uVar3 - 4 ) ) = *(undefined4*)( lVar2 + 0x15e + uVar3 );
                  }

               }
 else {
                  *param_3 = *(undefined8*)( lVar2 + 0x162 );
                  *(undefined8*)( (long)param_3 + ( uVar3 - 8 ) ) = *(undefined8*)( lVar2 + 0x15a + uVar3 );
                  lVar4 = (long)param_3 - (long)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
                  puVar5 = (undefined8*)( ( lVar2 + 0x162 ) - lVar4 );
                  puVar6 = (undefined8*)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
                  for (uVar3 = ( ulong )((uint)bVar1 + (int)lVar4 >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
                     *puVar6 = *puVar5;
                     puVar5 = puVar5 + 1;
                     puVar6 = puVar6 + 1;
                  }

               }

            }

         }

         *param_2 = 1;
      }

      return 0;
   }

   return 0xffff8f00;
}
undefined8 mbedtls_ssl_tls_prf(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8) {
   undefined8 uVar1;
   if (param_1 == 1) {
      uVar1 = tls_prf_generic(10, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
      return uVar1;
   }

   if (param_1 != 2) {
      return 0xffff8f80;
   }

   uVar1 = tls_prf_generic(9, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
   return uVar1;
}
undefined1 mbedtls_ssl_get_extension_id(uint param_1) {
   undefined1 uVar1;
   uVar1 = 0;
   if (param_1 < 0x34) {
      uVar1 = CSWTCH_174[param_1];
   }

   return uVar1;
}
int mbedtls_ssl_get_extension_mask(uint param_1) {
   int iVar1;
   iVar1 = 1;
   if (param_1 < 0x34) {
      iVar1 = 1 << ( CSWTCH_174[param_1] & 0x1f );
   }

   return iVar1;
}
char *mbedtls_ssl_get_extension_name(uint param_1) {
   char *pcVar1;
   pcVar1 = "unrecognized";
   if (param_1 < 0x34) {
      pcVar1 = *(char**)( extension_name_table + (ulong)(byte)CSWTCH_174[param_1] * 8 );
   }

   return pcVar1;
}
void mbedtls_ssl_print_extension(void) {
   undefined4 in_R8D;
   long in_stack_00000008;
   long in_stack_00000010;
   if (in_stack_00000008 != 0) {
      if (in_stack_00000010 != 0) {
         switch (in_R8D) {
            case 1:
        break;
            case 2:
        break;
            case 4:
        break;
            case 8:
        break;
            case 0xb:
        break;
            case 0xd:
        break;
            case 0xfffffffe:
        break;
            default:
         }

         mbedtls_debug_print_msg();
         return;
      }

      if (in_stack_00000008 != 0) goto code_r0x0010190e;
   }

   if (in_stack_00000010 == 0) {
      switch (in_R8D) {
         case 1:
      break;
         case 2:
      break;
         case 4:
      break;
         case 8:
      break;
         case 0xb:
      break;
         case 0xd:
      break;
         case 0xfffffffe:
      break;
         default:
      }

      mbedtls_debug_print_msg();
      return;
   }

   code_r0x0010190e:switch (in_R8D) {
      case 1:
    break;
      case 2:
    break;
      case 4:
    break;
      case 8:
    break;
      case 0xb:
    break;
      case 0xd:
    break;
      case 0xfffffffe:
    break;
      default:
   }

   mbedtls_debug_print_msg();
   return;
}
undefined1[16];mbedtls_ssl_print_extensions(undefined8 param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5, uint param_6, undefined8 param_7) {
   undefined4 *puVar1;
   undefined1 auVar2[16];
   char *pcVar3;
   long lVar4;
   lVar4 = 0;
   do {
      puVar1 = &extension_type_table + lVar4;
      pcVar3 = "exists";
      if (( 1 << ( (byte)lVar4 & 0x1f ) & param_6 ) == 0) {
         pcVar3 = "does not exist";
      }

      lVar4 = lVar4 + 1;
      mbedtls_ssl_print_extension(param_1, param_2, param_3, param_4, param_5, *puVar1);
      auVar2._8_8_ = param_7;
      auVar2._0_8_ = pcVar3;
   }
 while ( lVar4 != 0x1d );
   return auVar2;
}
void mbedtls_ssl_print_ticket_flags(undefined8 param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4, uint param_5) {
   long lVar1;
   lVar1 = 0;
   mbedtls_debug_print_msg();
   do {
      if (( ( param_5 & 0xd ) >> ( (uint)lVar1 & 0x1f ) & 1 ) != 0) {
         mbedtls_debug_print_msg(param_1, param_2, param_3, param_4, "- %s is set.", ( &ticket_flag_name_table )[lVar1]);
      }

      lVar1 = lVar1 + 1;
   }
 while ( lVar1 != 4 );
   return;
}
void mbedtls_ssl_optimize_checksum(long param_1, long param_2) {
   code *pcVar1;
   pcVar1 = ssl_update_checksum_sha384;
   if (*(char*)( param_2 + 0x11 ) != '\n') {
      pcVar1 = ssl_update_checksum_sha256;
   }

   *(code**)( *(long*)( param_1 + 0x70 ) + 0x18 ) = pcVar1;
   return;
}
void mbedtls_ssl_add_hs_hdr_to_checksum(long param_1, byte param_2, undefined8 param_3) {
   long in_FS_OFFSET;
   uint local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_14 = ( ( ( (uint)param_3 & 0xff ) << 8 | ( uint )(byte)((ulong)param_3 >> 8) ) << 8 | ( uint )((ulong)param_3 >> 0x10) & 0xff ) << 8 | (uint)param_2;
   ( **(code**)( *(long*)( param_1 + 0x70 ) + 0x18 ) )(param_1, &local_14, 4);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void mbedtls_ssl_add_hs_msg_to_checksum(long param_1, byte param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   long in_FS_OFFSET;
   uint local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_24 = ( ( ( (uint)param_4 & 0xff ) << 8 | ( uint )(byte)((ulong)param_4 >> 8) ) << 8 | ( uint )((ulong)param_4 >> 0x10) & 0xff ) << 8 | (uint)param_2;
   iVar1 = ( **(code**)( *(long*)( param_1 + 0x70 ) + 0x18 ) )(param_1, &local_24, 4);
   if (iVar1 == 0) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x00101d9b. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *(long*)( param_1 + 0x70 ) + 0x18 ) )(param_1, param_3, param_4);
         return;
      }

   }
 else if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void mbedtls_ssl_reset_checksum(long param_1) {
   int iVar1;
   undefined8 uVar2;
   mbedtls_md_free(*(long*)( param_1 + 0x70 ) + 0x520);
   mbedtls_md_init(*(long*)( param_1 + 0x70 ) + 0x520);
   uVar2 = mbedtls_md_info_from_type(9);
   iVar1 = mbedtls_md_setup(*(long*)( param_1 + 0x70 ) + 0x520, uVar2, 0);
   if (iVar1 == 0) {
      iVar1 = mbedtls_md_starts(*(long*)( param_1 + 0x70 ) + 0x520);
      if (iVar1 == 0) {
         mbedtls_md_free(*(long*)( param_1 + 0x70 ) + 0x538);
         mbedtls_md_init(*(long*)( param_1 + 0x70 ) + 0x538);
         uVar2 = mbedtls_md_info_from_type(10);
         iVar1 = mbedtls_md_setup(*(long*)( param_1 + 0x70 ) + 0x538, uVar2, 0);
         if (iVar1 == 0) {
            mbedtls_md_starts(*(long*)( param_1 + 0x70 ) + 0x538);
            return;
         }

      }

   }

   return;
}
void mbedtls_ssl_transform_init(undefined8 *param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   *param_1 = 0;
   param_1[0x38] = 0;
   puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x1c8U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
   }

   mbedtls_cipher_init(param_1 + 0x10);
   mbedtls_cipher_init(param_1 + 0x1c);
   mbedtls_md_init(param_1 + 9);
   mbedtls_md_init(param_1 + 0xc);
   return;
}
void mbedtls_ssl_session_init(undefined8 *param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   *param_1 = 0;
   param_1[0x3d] = 0;
   puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x1f0U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
   }

   return;
}
void mbedtls_ssl_init(undefined8 *param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   *param_1 = 0;
   param_1[0x46] = 0;
   puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x238U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
   }

   return;
}
void mbedtls_ssl_session_reset_msg_layer(long param_1, int param_2) {
   mbedtls_ssl_set_timer();
   mbedtls_ssl_reset_in_pointers(param_1);
   mbedtls_ssl_reset_out_pointers(param_1);
   *(undefined8*)( param_1 + 0x78 ) = 0;
   *(undefined8*)( param_1 + 0xf0 ) = 0;
   *(undefined4*)( param_1 + 0xf8 ) = 0;
   *(undefined8*)( param_1 + 0x100 ) = 0;
   *(undefined8*)( param_1 + 0x130 ) = 0;
   *(undefined8*)( param_1 + 0x138 ) = 0;
   if (param_2 == 0) {
      *(undefined4*)( param_1 + 0x18 ) = 0;
      *(undefined2*)( param_1 + 0x110 ) = 0;
      *(undefined8*)( param_1 + 0x118 ) = 0;
      *(undefined8*)( param_1 + 0x108 ) = 0;
      memset(*(void**)( param_1 + 0xb8 ), 0, 0x417d);
   }
 else {
      *(undefined8*)( param_1 + 0x118 ) = 0;
      *(undefined2*)( param_1 + 0x110 ) = 0;
   }

   *(undefined1*)( param_1 + 0x140 ) = 0;
   *(undefined1(*) [16])( param_1 + 400 ) = (undefined1[16])0x0;
   *(undefined4*)( param_1 + 0x188 ) = 0;
   memset(*(void**)( param_1 + 0x150 ), 0, 0x417d);
   *(undefined8*)( param_1 + 0x1a0 ) = 0;
   *(undefined8*)( param_1 + 0x80 ) = 0;
   mbedtls_ssl_dtls_replay_reset(param_1);
   if (*(long*)( param_1 + 0x88 ) != 0) {
      mbedtls_ssl_transform_free();
      free(*(void**)( param_1 + 0x88 ));
      *(undefined8*)( param_1 + 0x88 ) = 0;
   }

   mbedtls_ssl_transform_free(*(undefined8*)( param_1 + 0x98 ));
   free(*(void**)( param_1 + 0x98 ));
   *(undefined8*)( param_1 + 0x98 ) = 0;
   if (*(long*)( param_1 + 0x70 ) != 0) {
      mbedtls_ssl_transform_free(*(undefined8*)( *(long*)( param_1 + 0x70 ) + 0x680 ));
      free(*(void**)( *(long*)( param_1 + 0x70 ) + 0x680 ));
      *(undefined8*)( *(long*)( param_1 + 0x70 ) + 0x680 ) = 0;
   }

   return;
}
void mbedtls_ssl_conf_endpoint(long param_1, undefined1 param_2) {
   *(undefined1*)( param_1 + 8 ) = param_2;
   return;
}
void mbedtls_ssl_conf_transport(long param_1, undefined1 param_2) {
   *(undefined1*)( param_1 + 9 ) = param_2;
   return;
}
void mbedtls_ssl_conf_dtls_anti_replay(long param_1, undefined1 param_2) {
   *(undefined1*)( param_1 + 0xf ) = param_2;
   return;
}
void mbedtls_ssl_conf_dtls_badmac_limit(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x138 ) = param_2;
   return;
}
void mbedtls_ssl_set_datagram_packing(long param_1, int param_2) {
   *(bool*)( param_1 + 0x148 ) = param_2 == 0;
   return;
}
void mbedtls_ssl_conf_handshake_timeout(long param_1, undefined4 param_2, undefined4 param_3) {
   *(undefined4*)( param_1 + 0x124 ) = param_2;
   *(undefined4*)( param_1 + 0x128 ) = param_3;
   return;
}
void mbedtls_ssl_conf_authmode(long param_1, undefined1 param_2) {
   *(undefined1*)( param_1 + 10 ) = param_2;
   return;
}
void mbedtls_ssl_conf_verify(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x70 ) = param_2;
   *(undefined8*)( param_1 + 0x78 ) = param_3;
   return;
}
void mbedtls_ssl_conf_rng(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x38 ) = param_2;
   *(undefined8*)( param_1 + 0x40 ) = param_3;
   return;
}
void mbedtls_ssl_conf_dbg(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x28 ) = param_2;
   *(undefined8*)( param_1 + 0x30 ) = param_3;
   return;
}
void mbedtls_ssl_set_bio(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   *(undefined8*)( param_1 + 0x48 ) = param_2;
   *(undefined8*)( param_1 + 0x30 ) = param_3;
   *(undefined8*)( param_1 + 0x38 ) = param_4;
   *(undefined8*)( param_1 + 0x40 ) = param_5;
   return;
}
void mbedtls_ssl_set_mtu(long param_1, undefined2 param_2) {
   *(undefined2*)( param_1 + 0x1a8 ) = param_2;
   return;
}
void mbedtls_ssl_conf_read_timeout(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 0x120 ) = param_2;
   return;
}
void mbedtls_ssl_set_timer_cb(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   *(undefined8*)( param_1 + 0xa0 ) = param_2;
   *(undefined8*)( param_1 + 0xa8 ) = param_3;
   *(undefined8*)( param_1 + 0xb0 ) = param_4;
   mbedtls_ssl_set_timer(param_1, 0);
   return;
}
void mbedtls_ssl_conf_session_cache(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   *(undefined8*)( param_1 + 0x58 ) = param_2;
   *(undefined8*)( param_1 + 0x48 ) = param_3;
   *(undefined8*)( param_1 + 0x50 ) = param_4;
   return;
}
void mbedtls_ssl_conf_ciphersuites(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x18 ) = param_2;
   return;
}
void mbedtls_ssl_conf_tls13_key_exchange_modes(long param_1, uint param_2) {
   *(uint*)( param_1 + 0x20 ) = param_2 & 7;
   return;
}
void mbedtls_ssl_conf_cert_profile(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 200 ) = param_2;
   return;
}
void mbedtls_ssl_conf_own_cert(long param_1) {
   ssl_append_key_cert(param_1 + 0xd0);
   return;
}
void mbedtls_ssl_conf_ca_chain(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0xd8 ) = param_2;
   *(undefined8*)( param_1 + 0xe0 ) = param_3;
   return;
}
undefined8 mbedtls_ssl_get_hs_sni(long param_1, undefined8 *param_2) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( *(long*)( param_1 + 0x70 ) + 0x748 );
   *param_2 = *(undefined8*)( *(long*)( param_1 + 0x70 ) + 0x750 );
   return uVar1;
}
void mbedtls_ssl_set_hs_own_cert(long param_1) {
   ssl_append_key_cert(*(long*)( param_1 + 0x70 ) + 0x410);
   return;
}
void mbedtls_ssl_set_hs_ca_chain(long param_1, undefined8 param_2, undefined8 param_3) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0x70 );
   *(undefined8*)( lVar1 + 0x418 ) = param_2;
   *(undefined8*)( lVar1 + 0x420 ) = param_3;
   return;
}
void mbedtls_ssl_set_hs_dn_hints(long param_1, undefined8 param_2) {
   *(undefined8*)( *(long*)( param_1 + 0x70 ) + 0x758 ) = param_2;
   return;
}
void mbedtls_ssl_set_hs_authmode(long param_1, undefined1 param_2) {
   *(undefined1*)( *(long*)( param_1 + 0x70 ) + 2 ) = param_2;
   return;
}
void mbedtls_ssl_set_verify(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x20 ) = param_2;
   *(undefined8*)( param_1 + 0x28 ) = param_3;
   return;
}
bool mbedtls_ssl_conf_has_static_psk(long param_1) {
   if (( ( *(long*)( param_1 + 0x108 ) != 0 ) && ( *(long*)( param_1 + 0x110 ) != 0 ) ) && ( *(long*)( param_1 + 0xf8 ) != 0 )) {
      return *(long*)( param_1 + 0x100 ) != 0;
   }

   return false;
}
undefined4 mbedtls_ssl_conf_psk(long param_1, long param_2, size_t param_3, long param_4, size_t param_5) {
   undefined4 uVar1;
   void *pvVar2;
   void *pvVar3;
   if (( ( ( *(long*)( param_1 + 0x108 ) == 0 ) || ( *(long*)( param_1 + 0x110 ) == 0 ) ) || ( *(long*)( param_1 + 0xf8 ) == 0 ) ) || ( uVar1 = 0xffff8f80 * (long*)( param_1 + 0x100 ) == 0 )) {
      if (( param_3 - 1 < 0x30 ) && ( param_2 != 0 )) {
         pvVar2 = calloc(1, param_3);
         *(void**)( param_1 + 0xf8 ) = pvVar2;
         if (pvVar2 == (void*)0x0) {
            uVar1 = 0xffff8100;
         }
 else {
            *(size_t*)( param_1 + 0x100 ) = param_3;
            __memcpy_chk(pvVar2, param_2, param_3, param_3);
            if (( param_5 - 1 < 0x4000 ) && ( param_4 != 0 )) {
               pvVar3 = calloc(1, param_5);
               *(void**)( param_1 + 0x108 ) = pvVar3;
               if (pvVar3 != (void*)0x0) {
                  *(size_t*)( param_1 + 0x110 ) = param_5;
                  __memcpy_chk(pvVar3, param_4, param_5, param_5);
                  return 0;
               }

               uVar1 = 0xffff8100;
            }
 else {
               uVar1 = 0xffff8f00;
            }

            mbedtls_zeroize_and_free(pvVar2, param_3);
            *(undefined8*)( param_1 + 0xf8 ) = 0;
            *(undefined8*)( param_1 + 0x100 ) = 0;
            if (*(void**)( param_1 + 0x108 ) != (void*)0x0) {
               free(*(void**)( param_1 + 0x108 ));
               *(undefined8*)( param_1 + 0x108 ) = 0;
               *(undefined8*)( param_1 + 0x110 ) = 0;
               return uVar1;
            }

         }

      }
 else {
         uVar1 = 0xffff8f00;
      }

   }

   return uVar1;
}
undefined8 mbedtls_ssl_set_hs_psk(long param_1, long param_2, ulong param_3) {
   void *pvVar1;
   undefined8 uVar2;
   long lVar3;
   if (param_2 != 0) {
      lVar3 = *(long*)( param_1 + 0x70 );
      if (( lVar3 == 0 ) || ( 0x30 < param_3 )) {
         uVar2 = 0xffff8f00;
      }
 else {
         if (*(long*)( lVar3 + 0x3f0 ) != 0) {
            mbedtls_zeroize_and_free(*(long*)( lVar3 + 0x3f0 ), *(undefined8*)( lVar3 + 0x3f8 ));
            lVar3 = *(long*)( param_1 + 0x70 );
            *(undefined8*)( lVar3 + 0x3f8 ) = 0;
            *(undefined8*)( lVar3 + 0x3f0 ) = 0;
         }

         pvVar1 = calloc(1, param_3);
         *(void**)( lVar3 + 0x3f0 ) = pvVar1;
         if (pvVar1 == (void*)0x0) {
            uVar2 = 0xffff8100;
         }
 else {
            *(ulong*)( lVar3 + 0x3f8 ) = param_3;
            __memcpy_chk(pvVar1, param_2, param_3, param_3);
            uVar2 = 0;
         }

      }

      return uVar2;
   }

   return 0xffff8f00;
}
void mbedtls_ssl_conf_psk_cb(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x80 ) = param_2;
   *(undefined8*)( param_1 + 0x88 ) = param_3;
   return;
}
uint mbedtls_ssl_get_mode_from_transform(long param_1) {
   byte bVar1;
   uint uVar2;
   if (*(long*)( param_1 + 0x80 ) != 0) {
      bVar1 = *(byte*)( *(long*)( param_1 + 0x80 ) + 9 ) >> 4;
      uVar2 = (uint)bVar1;
      if (bVar1 == 2) {
         if (*(int*)( param_1 + 0x78 ) != 1) {
            uVar2 = 1;
         }

         return uVar2;
      }

      if (bVar1 < 0xc) {
         return ( (int)CONCAT71(9, ( 0x940UL >> uVar2 & 1 ) != 0) << 0x1f ) >> 0x1f & 3;
      }

   }

   return 0;
}
char mbedtls_ssl_get_mode_from_ciphersuite(int param_1, long param_2) {
   byte bVar1;
   long lVar2;
   char cVar3;
   lVar2 = mbedtls_cipher_info_from_type(*(undefined1*)( param_2 + 0x10 ));
   cVar3 = '\0';
   if (lVar2 != 0) {
      bVar1 = *(byte*)( lVar2 + 9 ) >> 4;
      if (bVar1 == 6) {
         return '\x03';
      }

      if (bVar1 < 7) {
         cVar3 = '\0';
         if (bVar1 == 2) {
            return ( param_1 == 1 ) + '\x01';
         }

      }
 else {
         cVar3 = '\x03';
         if (bVar1 != 8) {
            cVar3 = ( bVar1 == 0xb ) * '\x03';
         }

      }

   }

   return cVar3;
}
int ssl_tls12_populate_transform(ulong *param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4, code *param_5, undefined8 *param_6, int param_7, int param_8, long param_9) {
   ulong *puVar1;
   ulong *puVar2;
   byte bVar3;
   byte bVar4;
   char cVar5;
   uint uVar6;
   int iVar7;
   uint uVar8;
   int iVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   undefined8 uVar13;
   ulong uVar14;
   long lVar15;
   ulong uVar16;
   ulong uVar17;
   ulong uVar18;
   undefined8 *puVar19;
   undefined8 *puVar20;
   long in_FS_OFFSET;
   byte bVar21;
   undefined1 *local_1a0;
   undefined1 *local_198;
   undefined1 *local_190;
   ulong local_188;
   undefined1 *local_178;
   undefined1 local_148[264];
   long local_40;
   bVar21 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)( param_1 + 0xf ) = param_4;
   *(int*)( (long)param_1 + 0x7c ) = param_7;
   uVar13 = param_6[1];
   *(undefined8*)( (long)param_1 + 0x182 ) = *param_6;
   *(undefined8*)( (long)param_1 + 0x18a ) = uVar13;
   for (int i = 0; i < 3; i++) {
      uVar13 = param_6[( 2*i + 3 )];
      *(undefined8*)( (long)param_1 + ( 16*i + 402 ) ) = param_6[( 2*i + 2 )];
      *(undefined8*)( (long)param_1 + ( 16*i + 410 ) ) = uVar13;
   }

   if (param_7 == 0x304) {
      LAB_001030e3:iVar7 = -0x6c00;
      goto LAB_0010296d;
   }

   lVar10 = mbedtls_ssl_ciphersuite_from_id(param_2);
   if (lVar10 == 0) {
      mbedtls_debug_print_msg(param_9, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x21f0, "ciphersuite info for %d not found", param_2);
   }
 else {
      uVar6 = mbedtls_ssl_get_mode_from_ciphersuite(param_4, lVar10);
      if (uVar6 == 3) {
         param_1[4] = ( ulong )(-(uint)((*(byte *)(lVar10 + 0x13) & 2) == 0) & 8) + 8;
      }

      lVar11 = mbedtls_cipher_info_from_type(*(undefined1*)( lVar10 + 0x10 ));
      if (lVar11 == 0) {
         mbedtls_debug_print_msg(param_9, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x220d, "cipher info for %u not found", *(undefined1*)( lVar10 + 0x10 ));
      }
 else {
         lVar12 = mbedtls_md_info_from_type(*(undefined1*)( lVar10 + 0x11 ));
         if (lVar12 != 0) {
            if (*(char*)( *(long*)( param_9 + 0x70 ) + 0x4f8 ) == '\x01') {
               mbedtls_debug_print_msg(param_9, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x2227, "Copy CIDs into SSL transform");
               bVar3 = *(byte*)( param_9 + 0x218 );
               uVar17 = (ulong)bVar3;
               *(byte*)( param_1 + 0x28 ) = bVar3;
               uVar8 = (uint)bVar3;
               if (uVar8 < 8) {
                  if (( bVar3 & 4 ) == 0) {
                     if (( uVar8 != 0 ) && ( *(undefined1*)( (long)param_1 + 0x142 ) = *(undefined1*)( param_9 + 0x1f8 )(bVar3 & 2) != 0 )) {
                        *(undefined2*)( (long)param_1 + uVar17 + 0x140 ) = *(undefined2*)( param_9 + 0x1f6 + uVar17 );
                     }

                  }
 else {
                     *(undefined4*)( (long)param_1 + 0x142 ) = *(undefined4*)( param_9 + 0x1f8 );
                     *(undefined4*)( (long)param_1 + uVar17 + 0x13e ) = *(undefined4*)( param_9 + 500 + uVar17 );
                  }

               }
 else {
                  puVar20 = (undefined8*)( (long)param_1 + 0x14aU & 0xfffffffffffffff8 );
                  *(undefined8*)( (long)param_1 + 0x142 ) = *(undefined8*)( param_9 + 0x1f8 );
                  lVar10 = ( (long)param_1 + 0x142 ) - (long)puVar20;
                  *(undefined8*)( (long)param_1 + uVar17 + 0x13a ) = *(undefined8*)( param_9 + 0x1f0 + uVar17 );
                  puVar19 = (undefined8*)( ( param_9 + 0x1f8 ) - lVar10 );
                  for (uVar16 = ( ulong )((int)lVar10 + uVar8 >> 3); uVar16 != 0; uVar16 = uVar16 - 1) {
                     *puVar20 = *puVar19;
                     puVar19 = puVar19 + (ulong)bVar21 * -2 + 1;
                     puVar20 = puVar20 + (ulong)bVar21 * -2 + 1;
                  }

               }

               mbedtls_debug_print_buf(param_9, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x222b, "Incoming CID", (long)param_1 + 0x142, uVar17);
               lVar10 = *(long*)( param_9 + 0x70 );
               bVar3 = *(byte*)( lVar10 + 0x519 );
               uVar17 = (ulong)bVar3;
               *(byte*)( (long)param_1 + 0x141 ) = bVar3;
               uVar8 = (uint)bVar3;
               if (uVar8 < 8) {
                  if (( bVar3 & 4 ) == 0) {
                     if (( uVar8 != 0 ) && ( *(undefined1*)( (long)param_1 + 0x162 ) = *(undefined1*)( lVar10 + 0x4f9 )(bVar3 & 2) != 0 )) {
                        *(undefined2*)( (long)param_1 + uVar17 + 0x160 ) = *(undefined2*)( lVar10 + 0x4f7 + uVar17 );
                     }

                  }
 else {
                     *(undefined4*)( (long)param_1 + 0x162 ) = *(undefined4*)( lVar10 + 0x4f9 );
                     *(undefined4*)( (long)param_1 + uVar17 + 0x15e ) = *(undefined4*)( lVar10 + 0x4f5 + uVar17 );
                  }

               }
 else {
                  puVar20 = (undefined8*)( (long)param_1 + 0x16aU & 0xfffffffffffffff8 );
                  *(undefined8*)( (long)param_1 + 0x162 ) = *(undefined8*)( lVar10 + 0x4f9 );
                  lVar15 = ( (long)param_1 + 0x162 ) - (long)puVar20;
                  *(undefined8*)( (long)param_1 + uVar17 + 0x15a ) = *(undefined8*)( lVar10 + 0x4f1 + uVar17 );
                  puVar19 = (undefined8*)( ( lVar10 + 0x4f9 ) - lVar15 );
                  for (uVar16 = ( ulong )((int)lVar15 + uVar8 >> 3); uVar16 != 0; uVar16 = uVar16 - 1) {
                     *puVar20 = *puVar19;
                     puVar19 = puVar19 + (ulong)bVar21 * -2 + 1;
                     puVar20 = puVar20 + (ulong)bVar21 * -2 + 1;
                  }

               }

               mbedtls_debug_print_buf(param_9, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x2231, "Outgoing CID", (long)param_1 + 0x162, uVar17);
            }

            iVar7 = ( *param_5 )(param_3, 0x30, "key expansion", param_6, 0x40, local_148, 0x100);
            if (iVar7 != 0) {
               mbedtls_debug_print_ret(param_9, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x223b, &_LC41, iVar7);
               goto LAB_0010296d;
            }

            uVar13 = mbedtls_ssl_get_ciphersuite_name(param_2);
            mbedtls_debug_print_msg(param_9, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x223f, "ciphersuite = %s", uVar13);
            mbedtls_debug_print_buf(param_9, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x2241, "master secret", param_3, 0x30);
            mbedtls_debug_print_buf(param_9, 4, "thirdparty/mbedtls/library/ssl_tls.c", 0x2242, "random bytes", param_6, 0x40);
            uVar13 = 0x100;
            mbedtls_debug_print_buf(param_9, 4, "thirdparty/mbedtls/library/ssl_tls.c", 0x2243, "key block", local_148);
            bVar21 = *(byte*)( lVar11 + 9 );
            if (uVar6 == 3) {
               param_1[3] = 0;
               uVar14 = 0xc;
               param_1[1] = 0xc;
               local_188 = 0;
               uVar16 = ( ulong )(bVar21 >> 4 == 0xb) * 8 + 4;
               uVar17 = ( param_1[4] + 0xc ) - uVar16;
               param_1[2] = uVar16;
               uVar18 = 0;
               uVar16 = uVar17 & 0xffffffff;
               goto LAB_001029dd;
            }

            if (2 < uVar6) {
               mbedtls_debug_print_msg(param_9, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x22b5, "should never happen", uVar13);
               goto LAB_001030e3;
            }

            bVar3 = *(byte*)( lVar11 + 8 );
            iVar7 = mbedtls_md_setup(param_1 + 9, lVar12, 1);
            if (( iVar7 == 0 ) && ( iVar7 = iVar7 == 0 )) {
               uVar8 = mbedtls_md_get_size(lVar12);
               local_188 = ( ulong )(uVar8 & 0xff);
               bVar4 = *(byte*)( lVar11 + 8 );
               param_1[3] = local_188;
               uVar14 = ( ulong )(bVar4 >> 5) * 4;
               param_1[1] = uVar14;
               if (uVar6 == 0) {
                  uVar18 = (ulong)uVar8 & 0xff;
                  uVar17 = local_188;
                  uVar16 = uVar18;
                  LAB_001029dd:*param_1 = uVar17;
                  lVar10 = ( ulong )(bVar21 & 0xf) * 8;
                  mbedtls_debug_print_msg(param_9, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x22b9, "keylen: %u, minlen: %u, ivlen: %u, maclen: %u", lVar10, uVar16, uVar14, uVar18);
                  if (param_8 == 0) {
                     uVar17 = param_1[2];
                     local_190 = local_148 + local_188 * 2;
                     local_178 = local_148 + local_188 * 2 + lVar10;
                     local_1a0 = local_148 + local_188;
                     if (uVar17 == 0) {
                        uVar17 = param_1[1];
                     }

                     memcpy(param_1 + 5, local_178 + lVar10, uVar17);
                     memcpy(param_1 + 7, local_178 + lVar10 + uVar17, uVar17);
                     local_198 = local_148;
                  }
 else {
                     if (param_8 != 1) {
                        uVar13 = 0x22e1;
                        goto LAB_00102f44;
                     }

                     uVar17 = param_1[2];
                     local_178 = local_148 + local_188 * 2;
                     local_190 = local_148 + local_188 * 2 + lVar10;
                     if (uVar17 == 0) {
                        uVar17 = param_1[1];
                     }

                     memcpy(param_1 + 7, local_190 + lVar10, uVar17);
                     memcpy(param_1 + 5, local_190 + lVar10 + uVar17, uVar17);
                     local_1a0 = local_148;
                     local_198 = local_148 + local_188;
                  }

                  if (*(code**)( param_9 + 0x220 ) != (code*)0x0) {
                     if (param_5 == tls_prf_sha384) {
                        cVar5 = '\x01';
                     }
 else {
                        cVar5 = ( param_5 == tls_prf_sha256 ) * '\x02';
                     }

                     ( **(code**)( param_9 + 0x220 ) )(*(undefined8*)( param_9 + 0x228 ), 0, param_3, 0x30, param_6 + 4, param_6, cVar5);
                  }

                  puVar1 = param_1 + 0x10;
                  iVar7 = mbedtls_cipher_setup(puVar1, lVar11);
                  if (iVar7 == 0) {
                     puVar2 = param_1 + 0x1c;
                     iVar7 = mbedtls_cipher_setup(puVar2, lVar11);
                     if (iVar7 == 0) {
                        iVar7 = mbedtls_cipher_setkey(puVar1, local_190, ( *(byte*)( lVar11 + 9 ) & 0xf ) << 6, 1);
                        if (iVar7 == 0) {
                           iVar7 = mbedtls_cipher_setkey(puVar2, local_178, ( *(byte*)( lVar11 + 9 ) & 0xf ) << 6, 0);
                           if (iVar7 == 0) {
                              if (*(byte*)( lVar11 + 9 ) >> 4 == 2) {
                                 iVar9 = mbedtls_cipher_set_padding_mode(puVar1, 4);
                                 if (iVar9 == 0) {
                                    iVar9 = mbedtls_cipher_set_padding_mode(puVar2, 4);
                                    if (iVar9 == 0) goto LAB_00102bce;
                                    mbedtls_debug_print_ret(param_9, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x2331, "mbedtls_cipher_set_padding_mode", iVar9);
                                    iVar7 = iVar9;
                                 }
 else {
                                    mbedtls_debug_print_ret(param_9, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x232b, "mbedtls_cipher_set_padding_mode", iVar9);
                                    iVar7 = iVar9;
                                 }

                              }
 else {
                                 LAB_00102bce:if (( local_188 != 0 ) && ( iVar7 = iVar7 == 0 )) {
                                    iVar7 = mbedtls_md_hmac_starts(param_1 + 0xc, local_1a0, local_188);
                                 }

                              }

                           }
 else {
                              mbedtls_debug_print_ret(param_9, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x2323, "mbedtls_cipher_setkey", iVar7);
                           }

                        }
 else {
                           mbedtls_debug_print_ret(param_9, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x231c, "mbedtls_cipher_setkey", iVar7);
                        }

                     }
 else {
                        mbedtls_debug_print_ret(param_9, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x2315, "mbedtls_cipher_setup", iVar7);
                     }

                  }
 else {
                     mbedtls_debug_print_ret(param_9, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x230f, "mbedtls_cipher_setup", iVar7);
                  }

               }
 else {
                  uVar16 = (ulong)bVar3 & 0x1f;
                  uVar17 = local_188 + uVar16;
                  if (uVar6 != 2) {
                     uVar17 = uVar17 - local_188 % uVar16;
                  }

                  *param_1 = uVar17;
                  if (param_7 == 0x303) {
                     uVar17 = uVar17 + uVar14;
                     uVar18 = (ulong)uVar8 & 0xff;
                     uVar16 = uVar17 & 0xffffffff;
                     goto LAB_001029dd;
                  }

                  uVar13 = 0x22ad;
                  LAB_00102f44:mbedtls_debug_print_msg(param_9, 1, "thirdparty/mbedtls/library/ssl_tls.c", uVar13, "should never happen");
                  iVar7 = -0x6c00;
               }

            }
 else {
               mbedtls_debug_print_ret(param_9, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x2284, "mbedtls_md_setup", iVar7);
            }

            mbedtls_platform_zeroize(local_148, 0x100);
            goto LAB_0010296d;
         }

         mbedtls_debug_print_msg(param_9, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x221d, "mbedtls_md info for %u not found", *(undefined1*)( lVar10 + 0x11 ));
      }

   }

   iVar7 = -0x7100;
   LAB_0010296d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar7;
}
undefined8 mbedtls_ssl_cipher_to_psa(undefined4 param_1, long param_2, uint *param_3, undefined2 *param_4, undefined8 *param_5) {
   uint uVar1;
   uint uVar2;
   uVar2 = (uint)param_2;
   switch (param_1) {
      default:
    return 0xffffff7a;
      case 1:
    *param_3 = 0x4000000;
    *param_4 = 0;
    *param_5 = 0;
    break;
      case 5:
    *param_3 = 0x4404000;
    *param_4 = 0x2400;
    *param_5 = 0x80;
    break;
      case 7:
    *param_3 = 0x4404000;
    *param_4 = 0x2400;
    *param_5 = 0x100;
    break;
      case 0xe:
    *param_3 = 0x5500200;
    *param_4 = 0x2400;
    *param_5 = 0x80;
    break;
      case 0xf:
    *param_3 = 0x5500200;
    *param_4 = 0x2400;
    *param_5 = 0xc0;
    break;
      case 0x10:
    *param_3 = 0x5500200;
    *param_4 = 0x2400;
    *param_5 = 0x100;
    break;
      case 0x14:
    *param_3 = 0x4404000;
    *param_4 = 0x2403;
    *param_5 = 0x80;
    break;
      case 0x16:
    *param_3 = 0x4404000;
    *param_4 = 0x2403;
    *param_5 = 0x100;
    break;
      case 0x1d:
    *param_3 = 0x5500200;
    *param_4 = 0x2403;
    *param_5 = 0x80;
    break;
      case 0x1e:
    *param_3 = 0x5500200;
    *param_4 = 0x2403;
    *param_5 = 0xc0;
    break;
      case 0x1f:
    *param_3 = 0x5500200;
    *param_4 = 0x2403;
    *param_5 = 0x100;
    break;
      case 0x26:
    uVar1 = 0x5500100;
    if (param_2 != 0) {
      uVar1 = (uVar2 & 0x3f) << 0x10 | 0x5400100;
    }
    *param_3 = uVar1;
    *param_4 = 0x2400;
    *param_5 = 0x80;
    break;
      case 0x27:
    uVar1 = 0x5500100;
    if (param_2 != 0) {
      uVar1 = (uVar2 & 0x3f) << 0x10 | 0x5400100;
    }
    *param_3 = uVar1;
    *param_4 = 0x2400;
    *param_5 = 0xc0;
    break;
      case 0x28:
    uVar1 = 0x5500100;
    if (param_2 != 0) {
      uVar1 = (uVar2 & 0x3f) << 0x10 | 0x5400100;
    }
    *param_3 = uVar1;
    *param_4 = 0x2400;
    *param_5 = 0x100;
    break;
      case 0x2c:
    uVar1 = 0x5500100;
    if (param_2 != 0) {
      uVar1 = (uVar2 & 0x3f) << 0x10 | 0x5400100;
    }
    *param_3 = uVar1;
    *param_4 = 0x2403;
    *param_5 = 0x80;
    break;
      case 0x2d:
    uVar1 = 0x5500100;
    if (param_2 != 0) {
      uVar1 = (uVar2 & 0x3f) << 0x10 | 0x5400100;
    }
    *param_3 = uVar1;
    *param_4 = 0x2403;
    *param_5 = 0xc0;
    break;
      case 0x2e:
    uVar1 = 0x5500100;
    if (param_2 != 0) {
      uVar1 = (uVar2 & 0x3f) << 0x10 | 0x5400100;
    }
    *param_3 = uVar1;
    *param_4 = 0x2403;
    *param_5 = 0x100;
    break;
      case 0x35:
    *param_3 = 0x4404000;
    *param_4 = 0x2406;
    *param_5 = 0x80;
    break;
      case 0x37:
    *param_3 = 0x4404000;
    *param_4 = 0x2406;
    *param_5 = 0x100;
    break;
      case 0x3e:
    *param_3 = 0x5500200;
    *param_4 = 0x2406;
    *param_5 = 0x80;
    break;
      case 0x3f:
    *param_3 = 0x5500200;
    *param_4 = 0x2406;
    *param_5 = 0xc0;
    break;
      case 0x40:
    *param_3 = 0x5500200;
    *param_4 = 0x2406;
    *param_5 = 0x100;
    break;
      case 0x41:
    uVar1 = 0x5500100;
    if (param_2 != 0) {
      uVar1 = (uVar2 & 0x3f) << 0x10 | 0x5400100;
    }
    *param_3 = uVar1;
    *param_4 = 0x2406;
    *param_5 = 0x80;
    break;
      case 0x42:
    uVar1 = 0x5500100;
    if (param_2 != 0) {
      uVar1 = (uVar2 & 0x3f) << 0x10 | 0x5400100;
    }
    *param_3 = uVar1;
    *param_4 = 0x2406;
    *param_5 = 0xc0;
    break;
      case 0x43:
    uVar1 = 0x5500100;
    if (param_2 != 0) {
      uVar1 = (uVar2 & 0x3f) << 0x10 | 0x5400100;
    }
    *param_3 = uVar1;
    *param_4 = 0x2406;
    *param_5 = 0x100;
    break;
      case 0x4d:
    *param_3 = 0x5100500;
    *param_4 = 0x2004;
    *param_5 = 0x100;
   }

   return 0;
}
void mbedtls_ssl_conf_sig_algs(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0xe8 ) = param_2;
   return;
}
void mbedtls_ssl_conf_groups(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0xf0 ) = param_2;
   return;
}
undefined *mbedtls_ssl_get_hostname_pointer(long param_1) {
   undefined *puVar1;
   puVar1 = *(undefined**)( param_1 + 0x1b0 );
   if (puVar1 == &_LC52) {
      puVar1 = (undefined*)0x0;
   }

   return puVar1;
}
undefined8 mbedtls_ssl_set_hostname(long param_1, char *param_2) {
   char *pcVar1;
   size_t sVar2;
   size_t sVar3;
   void *pvVar4;
   long lVar5;
   if (param_2 == (char*)0x0) {
      pcVar1 = *(char**)( param_1 + 0x1b0 );
      if (( pcVar1 != (char*)0x0 ) && ( pcVar1 != "" )) {
         sVar2 = strlen(pcVar1);
         mbedtls_zeroize_and_free(pcVar1, sVar2);
      }

      *(undefined**)( param_1 + 0x1b0 ) = &_LC52;
   }
 else {
      sVar2 = strlen(param_2);
      if (0xff < sVar2) {
         return 0xffff8f00;
      }

      pcVar1 = *(char**)( param_1 + 0x1b0 );
      if (( pcVar1 != (char*)0x0 ) && ( pcVar1 != "" )) {
         sVar3 = strlen(pcVar1);
         mbedtls_zeroize_and_free(pcVar1, sVar3);
      }

      pvVar4 = calloc(1, sVar2 + 1);
      *(void**)( param_1 + 0x1b0 ) = pvVar4;
      if (pvVar4 == (void*)0x0) {
         return 0xffff8100;
      }

      lVar5 = __memcpy_chk(pvVar4, param_2, sVar2, sVar2 + 1);
      *(undefined1*)( lVar5 + sVar2 ) = 0;
   }

   return 0;
}
void mbedtls_ssl_conf_sni(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x60 ) = param_2;
   *(undefined8*)( param_1 + 0x68 ) = param_3;
   return;
}
undefined8 mbedtls_ssl_conf_alpn_protocols(long param_1, long *param_2) {
   size_t sVar1;
   char *__s;
   ulong uVar2;
   long *plVar3;
   __s = (char*)*param_2;
   if (__s != (char*)0x0) {
      uVar2 = 0;
      plVar3 = param_2;
      do {
         sVar1 = strlen(__s);
         uVar2 = uVar2 + sVar1;
         if (( 0xfe < sVar1 - 1 ) || ( 0xffff < uVar2 )) {
            return 0xffff8f00;
         }

         __s = (char*)plVar3[1];
         plVar3 = plVar3 + 1;
      }
 while ( __s != (char*)0x0 );
   }

   *(long**)( param_1 + 0x118 ) = param_2;
   return 0;
}
undefined8 mbedtls_ssl_get_alpn_protocol(long param_1) {
   return *(undefined8*)( param_1 + 0x1b8 );
}
void mbedtls_ssl_conf_cert_req_ca_list(long param_1, undefined1 param_2) {
   *(undefined1*)( param_1 + 0x14 ) = param_2;
   return;
}
void mbedtls_ssl_conf_encrypt_then_mac(long param_1, undefined1 param_2) {
   *(undefined1*)( param_1 + 0xd ) = param_2;
   return;
}
void mbedtls_ssl_conf_extended_master_secret(long param_1, undefined1 param_2) {
   *(undefined1*)( param_1 + 0xe ) = param_2;
   return;
}
undefined8 mbedtls_ssl_conf_max_frag_len(long param_1, byte param_2) {
   if (( param_2 < 5 ) && ( ( 3 < param_2 - 1 || ( *(uint*)( CSWTCH_117 + ( ulong )(param_2 - 1) * 4 ) < 0x4001 ) ) )) {
      *(byte*)( param_1 + 0xc ) = param_2;
      return 0;
   }

   return 0xffff8f00;
}
void mbedtls_ssl_conf_legacy_renegotiation(long param_1, undefined1 param_2) {
   *(undefined1*)( param_1 + 0xb ) = param_2;
   return;
}
void mbedtls_ssl_conf_renegotiation(long param_1, undefined1 param_2) {
   *(undefined1*)( param_1 + 0x10 ) = param_2;
   return;
}
void mbedtls_ssl_conf_renegotiation_enforced(long param_1, undefined4 param_2) {
   *(undefined4*)( param_1 + 300 ) = param_2;
   return;
}
void mbedtls_ssl_conf_renegotiation_period(long param_1, undefined8 *param_2) {
   *(undefined8*)( param_1 + 0x130 ) = *param_2;
   return;
}
void mbedtls_ssl_conf_session_tickets(long param_1, int param_2) {
   *(byte*)( param_1 + 0x11 ) = *(byte*)( param_1 + 0x11 ) & 0xfe | param_2 != 0;
   return;
}
void mbedtls_ssl_conf_tls13_enable_signal_new_session_tickets(long param_1, int param_2) {
   *(byte*)( param_1 + 0x11 ) = *(byte*)( param_1 + 0x11 ) & 0xfd | ( param_2 != 0 ) * '\x02';
   return;
}
void mbedtls_ssl_conf_new_session_tickets(long param_1, undefined2 param_2) {
   *(undefined2*)( param_1 + 0x12 ) = param_2;
   return;
}
void mbedtls_ssl_conf_session_tickets_cb(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   *(undefined8*)( param_1 + 0xa8 ) = param_2;
   *(undefined8*)( param_1 + 0xb0 ) = param_3;
   *(undefined8*)( param_1 + 0xb8 ) = param_4;
   return;
}
void mbedtls_ssl_set_export_keys_cb(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x220 ) = param_2;
   *(undefined8*)( param_1 + 0x228 ) = param_3;
   return;
}
undefined4 mbedtls_ssl_get_verify_result(long param_1) {
   undefined4 uVar1;
   if (*(long*)( param_1 + 0x60 ) != 0) {
      return *(undefined4*)( *(long*)( param_1 + 0x60 ) + 0x78 );
   }

   uVar1 = 0xffffffff;
   if (*(long*)( param_1 + 0x68 ) != 0) {
      uVar1 = *(undefined4*)( *(long*)( param_1 + 0x68 ) + 0x78 );
   }

   return uVar1;
}
undefined4 mbedtls_ssl_get_ciphersuite_id_from_ssl(long param_1) {
   if (( param_1 != 0 ) && ( *(long*)( param_1 + 0x60 ) != 0 )) {
      return *(undefined4*)( *(long*)( param_1 + 0x60 ) + 0x10 );
   }

   return 0;
}
undefined8 mbedtls_ssl_get_ciphersuite(long param_1) {
   undefined8 uVar1;
   if (( param_1 != 0 ) && ( *(long*)( param_1 + 0x60 ) != 0 )) {
      uVar1 = mbedtls_ssl_get_ciphersuite_name(*(undefined4*)( *(long*)( param_1 + 0x60 ) + 0x10 ));
      return uVar1;
   }

   return 0;
}
char *mbedtls_ssl_get_version(long *param_1) {
   int iVar1;
   char *pcVar2;
   iVar1 = *(int*)( (long)param_1 + 0x14 );
   if (*(char*)( *param_1 + 9 ) != '\x01') {
      pcVar2 = "TLSv1.2";
      if (( iVar1 != 0x303 ) && ( pcVar2 = iVar1 != 0x304 )) {
         pcVar2 = "unknown";
      }

      return pcVar2;
   }

   pcVar2 = "unknown (DTLS)";
   if (iVar1 == 0x303) {
      pcVar2 = "DTLSv1.2";
   }

   return pcVar2;
}
uint mbedtls_ssl_get_input_max_frag_len(long *param_1) {
   uint uVar1;
   uint uVar2;
   if (( *(char*)( *param_1 + 8 ) == '\0' ) && ( 5 < (int)param_1[1] )) {
      uVar1 = 0x4000;
      uVar2 = *(byte*)( *param_1 + 0xc ) - 1;
      if (uVar2 < 4) {
         return *(uint*)( CSWTCH_117 + (ulong)uVar2 * 4 );
      }

   }
 else {
      uVar1 = 0x4000;
      if (( (byte*)param_1[0xb] != (byte*)0x0 ) && ( ( uVar2 = *(byte*)param_1[0xb] - 1 ),uVar2 < 4 && ( uVar1 = 0x4000 < uVar1 ) )) {
         uVar1 = 0x4000;
      }

      if ((byte*)param_1[0xd] != (byte*)0x0) {
         uVar2 = *(byte*)param_1[0xd] - 1;
         if (uVar2 < 4) {
            if (*(uint*)( CSWTCH_117 + (ulong)uVar2 * 4 ) < uVar1) {
               uVar1 = *(uint*)( CSWTCH_117 + (ulong)uVar2 * 4 );
            }

            return uVar1;
         }

         if (0x4000 < uVar1) {
            uVar1 = 0x4000;
         }

      }

   }

   return uVar1;
}
uint mbedtls_ssl_get_output_max_frag_len(long *param_1) {
   uint uVar1;
   uint uVar2;
   uVar1 = *(byte*)( *param_1 + 0xc ) - 1;
   if (uVar1 < 4) {
      uVar1 = *(uint*)( CSWTCH_117 + (ulong)uVar1 * 4 );
   }
 else {
      uVar1 = 0x4000;
   }

   if (( ( (byte*)param_1[0xb] != (byte*)0x0 ) && ( uVar2 = *(byte*)param_1[0xb] - 1 ),uVar2 < 4 )) {
      uVar1 = *(uint*)( CSWTCH_117 + (ulong)uVar2 * 4 );
   }

   if ((byte*)param_1[0xd] != (byte*)0x0) {
      uVar2 = *(byte*)param_1[0xd] - 1;
      if (uVar2 < 4) {
         if (*(uint*)( CSWTCH_117 + (ulong)uVar2 * 4 ) < uVar1) {
            uVar1 = *(uint*)( CSWTCH_117 + (ulong)uVar2 * 4 );
         }

         return uVar1;
      }

      if (0x4000 < uVar1) {
         uVar1 = 0x4000;
      }

   }

   return uVar1;
}
ushort mbedtls_ssl_get_current_mtu(long *param_1) {
   ushort uVar1;
   ushort uVar2;
   ushort uVar3;
   if (( *(char*)( *param_1 + 8 ) == '\0' ) && ( (int)param_1[1] - 1U < 2 )) {
      return 0;
   }

   uVar1 = *(ushort*)( param_1 + 0x35 );
   if (( param_1[0xe] != 0 ) && ( uVar2 = uVar2 != 0 )) {
      uVar3 = uVar2;
      if (uVar1 < uVar2) {
         uVar3 = uVar1;
      }

      if (uVar1 != 0) {
         return uVar3;
      }

      return uVar2;
   }

   return uVar1;
}
ulong mbedtls_ssl_get_max_out_record_payload(long *param_1) {
   ushort uVar1;
   ushort uVar2;
   ushort uVar3;
   int iVar4;
   ulong uVar5;
   ulong uVar6;
   ulong uVar7;
   long *plVar8;
   plVar8 = param_1;
   uVar5 = mbedtls_ssl_get_output_max_frag_len();
   if (0x4000 < uVar5) {
      uVar5 = 0x4000;
   }

   if (( plVar8[0x10] != 0 ) && ( *(int*)( plVar8[0x10] + 0x7c ) == 0x304 )) {
      uVar5 = ( uVar5 & 0xfffffffffffffff0 ) - 1;
   }

   if (( *(char*)( *param_1 + 8 ) != '\0' ) || ( 1 < (int)param_1[1] - 1U )) {
      uVar1 = *(ushort*)( param_1 + 0x35 );
      uVar7 = (ulong)uVar1;
      if (( param_1[0xe] == 0 ) || ( uVar2 = uVar2 == 0 )) {
         if (uVar7 == 0) goto LAB_00103bc4;
      }
 else {
         uVar3 = uVar2;
         if (uVar1 <= uVar2) {
            uVar3 = uVar1;
         }

         uVar7 = (ulong)uVar3;
         if (uVar1 == 0) {
            uVar7 = (ulong)uVar2;
         }

      }

      uVar6 = mbedtls_ssl_get_record_expansion(param_1);
      iVar4 = (int)uVar6;
      if (iVar4 < 0) {
         return uVar6;
      }

      if (uVar7 <= (ulong)(long)iVar4) {
         mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0xd19, "MTU too low for record expansion");
         return 0xffff8f80;
      }

      uVar7 = uVar7 - (long)iVar4;
      if (uVar7 < uVar5) {
         uVar5 = uVar7;
      }

   }

   LAB_00103bc4:return uVar5 & 0xffffffff;
}
uint mbedtls_ssl_get_max_in_record_payload(long *param_1) {
   uint uVar1;
   uint uVar2;
   if (( *(char*)( *param_1 + 8 ) == '\0' ) && ( 5 < (int)param_1[1] )) {
      uVar1 = 0x4000;
      uVar2 = *(byte*)( *param_1 + 0xc ) - 1;
      if (uVar2 < 4) {
         return *(uint*)( CSWTCH_117 + (ulong)uVar2 * 4 );
      }

   }
 else {
      uVar1 = 0x4000;
      if (( (byte*)param_1[0xb] != (byte*)0x0 ) && ( ( uVar2 = *(byte*)param_1[0xb] - 1 ),uVar2 < 4 && ( uVar1 = 0x4000 < uVar1 ) )) {
         uVar1 = 0x4000;
      }

      if ((byte*)param_1[0xd] != (byte*)0x0) {
         uVar2 = *(byte*)param_1[0xd] - 1;
         if (uVar2 < 4) {
            if (*(uint*)( CSWTCH_117 + (ulong)uVar2 * 4 ) < uVar1) {
               uVar1 = *(uint*)( CSWTCH_117 + (ulong)uVar2 * 4 );
            }

            return uVar1;
         }

         if (0x4000 < uVar1) {
            uVar1 = 0x4000;
         }

      }

   }

   return uVar1;
}
long mbedtls_ssl_get_peer_cert(long param_1) {
   long lVar1;
   if (param_1 == 0) {
      lVar1 = 0;
   }
 else {
      lVar1 = *(long*)( param_1 + 0x60 );
      if (lVar1 != 0) {
         return *(long*)( lVar1 + 0x70 );
      }

   }

   return lVar1;
}
void mbedtls_ssl_session_save(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   ssl_session_save(param_1, 0, param_2, param_3, param_4);
   return;
}
int mbedtls_ssl_session_load(long param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   iVar1 = ssl_session_load(param_1, 0, param_2, param_3);
   if (( param_1 != 0 ) && ( iVar1 != 0 )) {
      if (*(long*)( param_1 + 0x70 ) != 0) {
         mbedtls_x509_crt_free();
         free(*(void**)( param_1 + 0x70 ));
         *(undefined8*)( param_1 + 0x70 ) = 0;
      }

      free(*(void**)( param_1 + 0xd8 ));
      free(*(void**)( param_1 + 0x80 ));
      mbedtls_platform_zeroize(param_1, 0x1f0);
   }

   return iVar1;
}
ulong mbedtls_ssl_handshake_step(long *param_1) {
   uint uVar1;
   undefined8 uVar2;
   ulong uVar3;
   if (( ( ( param_1 == (long*)0x0 ) || ( *param_1 == 0 ) ) || ( param_1[0xe] == 0 ) ) || ( (int)param_1[1] == 0x1b )) {
      return 0xffff8f00;
   }

   uVar1 = mbedtls_ssl_flush_output();
   if (uVar1 != 0) {
      return (ulong)uVar1;
   }

   if (( *(char*)( *param_1 + 9 ) == '\x01' ) && ( *(char*)( param_1[0xe] + 0xd ) == '\x01' )) {
      uVar1 = mbedtls_ssl_flight_transmit(param_1);
      if (uVar1 != 0) {
         return (ulong)uVar1;
      }

   }

   uVar1 = mbedtls_ssl_handle_pending_alert(param_1);
   uVar3 = (ulong)uVar1;
   if (uVar1 != 0) {
      return uVar3;
   }

   if (*(char*)( *param_1 + 8 ) == '\0') {
      uVar2 = mbedtls_ssl_states_str((int)param_1[1]);
      mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x11e9, "client state: %s", uVar2);
      if ((int)param_1[1] == 0) {
         *(undefined4*)( param_1 + 1 ) = 1;
         if (*(char*)( *param_1 + 8 ) != '\x01') {
            return uVar3;
         }

         goto LAB_00103e82;
      }

      if ((int)param_1[1] == 1) {
         uVar1 = mbedtls_ssl_write_client_hello(param_1);
      }
 else if (*(int*)( (long)param_1 + 0x14 ) == 0x304) {
         uVar1 = mbedtls_ssl_tls13_handshake_client_step(param_1);
      }
 else {
         uVar1 = mbedtls_ssl_handshake_client_step();
      }

      if (*(char*)( *param_1 + 8 ) == '\x01') goto LAB_00103e82;
   }
 else {
      if (*(char*)( *param_1 + 8 ) != '\x01') {
         uVar3 = 0xffff8f00;
         goto LAB_00103dff;
      }

      LAB_00103e82:if (*(int*)( (long)param_1 + 0x14 ) == 0x304) {
         uVar1 = mbedtls_ssl_tls13_handshake_server_step(param_1);
      }
 else {
         uVar1 = mbedtls_ssl_handshake_server_step(param_1);
      }

   }

   if (uVar1 == 0) {
      return uVar3;
   }

   uVar3 = (ulong)uVar1;
   LAB_00103dff:if ((char)param_1[0x28] == '\0') {
      return uVar3;
   }

   uVar3 = mbedtls_ssl_handle_pending_alert(param_1);
   return uVar3;
}
int mbedtls_ssl_handshake(long *param_1) {
   int iVar1;
   if (( param_1 != (long*)0x0 ) && ( *param_1 != 0 )) {
      if (( *(char*)( *param_1 + 9 ) != '\x01' ) || ( ( param_1[0x15] != 0 && ( param_1[0x16] != 0 ) ) )) {
         mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x123a, "=> handshake");
         do {
            if ((int)param_1[1] == 0x1b) {
               iVar1 = 0;
               break;
            }

            iVar1 = mbedtls_ssl_handshake_step(param_1);
         }
 while ( iVar1 == 0 );
         mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x1245, "<= handshake");
         return iVar1;
      }

      mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1234, "You must use mbedtls_ssl_set_timer_cb() for DTLS");
   }

   return -0x7100;
}
void mbedtls_ssl_handshake_free(long param_1) {
   long lVar1;
   void *pvVar2;
   void *__ptr;
   lVar1 = *(long*)( param_1 + 0x70 );
   if (lVar1 != 0) {
      if (*(void**)( lVar1 + 0x678 ) != (void*)0x0) {
         free(*(void**)( lVar1 + 0x678 ));
      }

      mbedtls_md_free(lVar1 + 0x520);
      mbedtls_md_free(lVar1 + 0x538);
      mbedtls_ecdh_free(lVar1 + 0x68);
      free(*(void**)( lVar1 + 1000 ));
      if (*(long*)( lVar1 + 0x3f0 ) != 0) {
         mbedtls_zeroize_and_free(*(long*)( lVar1 + 0x3f0 ), *(undefined8*)( lVar1 + 0x3f8 ));
      }

      __ptr = *(void**)( lVar1 + 0x410 );
      while (__ptr != (void*)0x0) {
         pvVar2 = *(void**)( (long)__ptr + 0x10 );
         free(__ptr);
         __ptr = pvVar2;
      }
;
      free(*(void**)( lVar1 + 0x4b0 ));
      mbedtls_ssl_flight_free(*(undefined8*)( lVar1 + 0x4c8 ));
      mbedtls_ssl_buffering_free(param_1);
      if (*(char*)( lVar1 + 0x1cc ) == '\0') {
         psa_destroy_key(*(undefined4*)( lVar1 + 0x1c8 ));
      }

      mbedtls_ssl_transform_free(*(undefined8*)( lVar1 + 0x680 ));
      free(*(void**)( lVar1 + 0x680 ));
      mbedtls_platform_zeroize(lVar1, 0x760);
      return;
   }

   return;
}
int ssl_handshake_init(long *param_1) {
   long lVar1;
   long lVar2;
   int iVar3;
   void *pvVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   byte bVar8;
   bVar8 = 0;
   if (param_1[0x12] != 0) {
      mbedtls_ssl_transform_free();
   }

   lVar1 = param_1[0xd];
   if (lVar1 != 0) {
      if (*(long*)( lVar1 + 0x70 ) != 0) {
         mbedtls_x509_crt_free();
         free(*(void**)( lVar1 + 0x70 ));
         *(undefined8*)( lVar1 + 0x70 ) = 0;
      }

      free(*(void**)( lVar1 + 0xd8 ));
      free(*(void**)( lVar1 + 0x80 ));
      mbedtls_platform_zeroize(lVar1, 0x1f0);
   }

   if (param_1[0xe] != 0) {
      mbedtls_ssl_handshake_free(param_1);
   }

   if (param_1[0x12] == 0) {
      pvVar4 = calloc(1, 0x1c8);
      param_1[0x12] = (long)pvVar4;
   }

   if (param_1[0xd] == 0) {
      pvVar4 = calloc(1, 0x1f0);
      lVar1 = param_1[0xe];
      param_1[0xd] = (long)pvVar4;
   }
 else {
      lVar1 = param_1[0xe];
   }

   if (lVar1 == 0) {
      pvVar4 = calloc(1, 0x760);
      param_1[0xe] = (long)pvVar4;
      if (pvVar4 == (void*)0x0) goto LAB_00104300;
   }

   if (( param_1[0x12] != 0 ) && ( puVar6 = (undefined8*)param_1[0xd] ),puVar6 != (undefined8*)0x0) {
      *puVar6 = 0;
      puVar6[0x3d] = 0;
      uVar5 = ( ulong )(( (int)puVar6 - (int)(undefined8*)( ( ulong )(puVar6 + 1) & 0xfffffffffffffff8 ) ) + 0x1f0U >> 3);
      puVar6 = (undefined8*)( ( ulong )(puVar6 + 1) & 0xfffffffffffffff8 );
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
         *puVar6 = 0;
         puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
      }

      puVar6 = (undefined8*)param_1[0xe];
      *puVar6 = 0;
      puVar6[0xeb] = 0;
      puVar7 = (undefined8*)( ( ulong )(puVar6 + 1) & 0xfffffffffffffff8 );
      for (uVar5 = ( ulong )(( (int)puVar6 - (int)(undefined8*)( ( ulong )(puVar6 + 1) & 0xfffffffffffffff8 ) ) + 0x760U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
         *puVar7 = 0;
         puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
      }

      mbedtls_md_init(puVar6 + 0xa4);
      mbedtls_md_init(puVar6 + 0xa7);
      puVar6[3] = ssl_update_checksum_start;
      mbedtls_ecdh_init(puVar6 + 0xd);
      *(undefined1*)( (long)puVar6 + 2 ) = 3;
      mbedtls_ssl_transform_init(param_1[0x12]);
      iVar3 = mbedtls_ssl_reset_checksum(param_1);
      if (iVar3 != 0) {
         mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x471, "mbedtls_ssl_reset_checksum", iVar3);
         return iVar3;
      }

      lVar1 = *param_1;
      lVar2 = param_1[0xe];
      *(undefined2*)( lVar2 + 0x3e ) = *(undefined2*)( lVar1 + 0x12 );
      if (*(char*)( lVar1 + 9 ) == '\x01') {
         *(long*)( lVar2 + 0x4e8 ) = param_1[0x10];
         *(char*)( lVar2 + 0xd ) = ( *(char*)( lVar1 + 8 ) != '\0' ) * '\x02';
         mbedtls_ssl_set_timer(param_1, 0);
         return 0;
      }

      return 0;
   }

   LAB_00104300:mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x44c, "alloc() of ssl sub-contexts failed");
   free((void*)param_1[0xe]);
   param_1[0xe] = 0;
   free((void*)param_1[0x12]);
   param_1[0x12] = 0;
   free((void*)param_1[0xd]);
   param_1[0xd] = 0;
   return -0x7f00;
}
ulong mbedtls_ssl_setup(undefined8 *param_1, long *param_2) {
   undefined4 uVar1;
   long lVar2;
   void *pvVar3;
   ulong uVar4;
   undefined8 uVar5;
   char *pcVar6;
   lVar2 = *param_2;
   *param_1 = param_2;
   if (lVar2 == 0x30400000304) {
      if (*(char*)( (long)param_2 + 9 ) == '\x01') {
         pcVar6 = "DTLS 1.3 is not yet supported.";
         uVar5 = 0x528;
         LAB_0010459d:mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", uVar5, pcVar6);
         return 0xffff8f80;
      }

      pcVar6 = "The SSL configuration is tls13 only.";
      uVar5 = 0x52c;
   }
 else if (lVar2 == 0x30300000303) {
      pcVar6 = "The SSL configuration is tls12 only.";
      uVar5 = 0x533;
   }
 else {
      if (lVar2 != 0x30300000304) {
         mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x544, "The SSL configuration is invalid.");
         return 0xffffa180;
      }

      if (*(char*)( (long)param_2 + 9 ) == '\x01') {
         pcVar6 = "DTLS not yet supported in Hybrid TLS 1.3 + TLS 1.2";
         uVar5 = 0x53b;
         goto LAB_0010459d;
      }

      pcVar6 = "The SSL configuration is TLS 1.3 or TLS 1.2.";
      uVar5 = 0x53f;
   }

   mbedtls_debug_print_msg(param_1, 4, "thirdparty/mbedtls/library/ssl_tls.c", uVar5, pcVar6);
   if (*(long*)( (undefined4*)*param_1 + 0xe ) == 0) {
      mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x552, "no RNG provided");
      return 0xffff8c00;
   }

   uVar1 = *(undefined4*)*param_1;
   param_1[0x2a] = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = uVar1;
   pvVar3 = calloc(1, 0x417d);
   param_1[0x17] = pvVar3;
   if (pvVar3 == (void*)0x0) {
      mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x579, "alloc(%zu bytes) failed", 0x417d);
   }
 else {
      pvVar3 = calloc(1, 0x417d);
      param_1[0x2a] = pvVar3;
      if (pvVar3 != (void*)0x0) {
         mbedtls_ssl_reset_in_pointers(param_1);
         mbedtls_ssl_reset_out_pointers(param_1);
         uVar4 = ssl_handshake_init(param_1);
         if ((int)uVar4 == 0) {
            return uVar4;
         }

         goto LAB_001044d2;
      }

      mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x583, "alloc(%zu bytes) failed", 0x417d);
   }

   uVar4 = 0xffff8100;
   LAB_001044d2:free((void*)param_1[0x17]);
   free((void*)param_1[0x2a]);
   *param_1 = 0;
   param_1[0x19] = 0;
   param_1[0x1d] = 0;
   param_1[0x2c] = 0;
   param_1[0x30] = 0;
   *(undefined1(*) [16])( param_1 + 0x17 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_1 + 0x1b ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_1 + 0x2a ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_1 + 0x2e ) = (undefined1[16])0x0;
   return uVar4 & 0xffffffff;
}
int mbedtls_ssl_start_renegotiation(long *param_1) {
   int iVar1;
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x1272, "=> renegotiate");
   iVar1 = ssl_handshake_init(param_1);
   if (iVar1 == 0) {
      if (( *(char*)( *param_1 + 9 ) == '\x01' ) && ( *(int*)( (long)param_1 + 0xc ) == 3 )) {
         if (*(char*)( *param_1 + 8 ) == '\x01') {
            *(undefined4*)( param_1[0xe] + 0x4bc ) = 1;
         }
 else {
            *(undefined4*)( param_1[0xe] + 0x4c0 ) = 1;
         }

      }

      param_1[1] = _LC74;
      iVar1 = mbedtls_ssl_handshake(param_1);
      if (iVar1 != 0) {
         mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1289, "mbedtls_ssl_handshake", iVar1);
         return iVar1;
      }

      mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x128d, "<= renegotiate");
      iVar1 = 0;
   }

   return iVar1;
}
ulong mbedtls_ssl_renegotiate(long *param_1) {
   ulong uVar1;
   undefined8 uVar2;
   char *pcVar3;
   uint local_c;
   if (param_1 == (long*)0x0) {
      return 0xffff8f00;
   }

   if (*param_1 != 0) {
      if (*(char*)( *param_1 + 8 ) != '\x01') {
         if (*(int*)( (long)param_1 + 0xc ) == 1) {
            uVar1 = mbedtls_ssl_handshake();
            local_c = (uint)uVar1;
            if (local_c == 0) {
               return uVar1;
            }

            uVar2 = 0x12c0;
            pcVar3 = "mbedtls_ssl_handshake";
         }
 else {
            if ((int)param_1[1] < 0x1b) {
               return 0xffff8f00;
            }

            uVar1 = mbedtls_ssl_start_renegotiation();
            local_c = (uint)uVar1;
            if (local_c == 0) {
               return uVar1;
            }

            uVar2 = 0x12bb;
            pcVar3 = "mbedtls_ssl_start_renegotiation";
         }

         mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", uVar2, pcVar3, uVar1 & 0xffffffff);
         return (ulong)local_c;
      }

      if (0x1a < (int)param_1[1]) {
         *(undefined4*)( (long)param_1 + 0xc ) = 3;
         if (param_1[0x33] != 0) {
            uVar1 = mbedtls_ssl_flush_output();
            return uVar1;
         }

         uVar1 = ssl_write_hello_request();
         return uVar1;
      }

   }

   return 0xffff8f00;
}
void mbedtls_ssl_session_reset_int(undefined8 *param_1, int param_2) {
   long lVar1;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = *(undefined4*)*param_1;
   mbedtls_ssl_session_reset_msg_layer();
   lVar1 = param_1[0xc];
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   param_1[0x3b] = 0;
   param_1[0x3c] = 0;
   *(undefined4*)( param_1 + 0x3d ) = 0;
   *(undefined8*)( (long)param_1 + 0x1ec ) = 0;
   *(undefined4*)( (long)param_1 + 500 ) = 0;
   *(undefined4*)( param_1 + 0x3a ) = 0;
   *(undefined1(*) [16])( param_1 + 10 ) = (undefined1[16])0x0;
   if (lVar1 != 0) {
      if (*(long*)( lVar1 + 0x70 ) != 0) {
         mbedtls_x509_crt_free();
         free(*(void**)( lVar1 + 0x70 ));
         *(undefined8*)( lVar1 + 0x70 ) = 0;
      }

      free(*(void**)( lVar1 + 0xd8 ));
      free(*(void**)( lVar1 + 0x80 ));
      mbedtls_platform_zeroize(lVar1, 0x1f0);
      free((void*)param_1[0xc]);
      param_1[0xc] = 0;
   }

   param_1[0x37] = 0;
   if (param_2 != 0) {
      ssl_handshake_init(param_1);
      return;
   }

   free((void*)param_1[0x38]);
   param_1[0x38] = 0;
   param_1[0x39] = 0;
   ssl_handshake_init(param_1);
   return;
}
void mbedtls_ssl_session_reset(undefined8 param_1) {
   mbedtls_ssl_session_reset_int(param_1, 0);
   return;
}
void mbedtls_ssl_free_part_0(long param_1) {
   long lVar1;
   char *__s;
   size_t sVar2;
   void *__ptr;
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x15cd, "=> free");
   if (*(long*)( param_1 + 0x150 ) != 0) {
      mbedtls_zeroize_and_free(*(long*)( param_1 + 0x150 ), 0x417d);
      *(undefined8*)( param_1 + 0x150 ) = 0;
   }

   if (*(long*)( param_1 + 0xb8 ) != 0) {
      mbedtls_zeroize_and_free(*(long*)( param_1 + 0xb8 ), 0x417d);
      *(undefined8*)( param_1 + 0xb8 ) = 0;
   }

   if (*(long*)( param_1 + 0x88 ) != 0) {
      mbedtls_ssl_transform_free();
      free(*(void**)( param_1 + 0x88 ));
   }

   if (*(long*)( param_1 + 0x70 ) != 0) {
      mbedtls_ssl_handshake_free(param_1);
      free(*(void**)( param_1 + 0x70 ));
      mbedtls_ssl_transform_free(*(undefined8*)( param_1 + 0x90 ));
      free(*(void**)( param_1 + 0x90 ));
      __ptr = *(void**)( param_1 + 0x68 );
      if (__ptr != (void*)0x0) {
         if (*(long*)( (long)__ptr + 0x70 ) != 0) {
            mbedtls_x509_crt_free();
            free(*(void**)( (long)__ptr + 0x70 ));
            *(undefined8*)( (long)__ptr + 0x70 ) = 0;
         }

         free(*(void**)( (long)__ptr + 0xd8 ));
         free(*(void**)( (long)__ptr + 0x80 ));
         mbedtls_platform_zeroize(__ptr, 0x1f0);
         __ptr = *(void**)( param_1 + 0x68 );
      }

      free(__ptr);
   }

   mbedtls_ssl_transform_free(*(undefined8*)( param_1 + 0x98 ));
   free(*(void**)( param_1 + 0x98 ));
   lVar1 = *(long*)( param_1 + 0x60 );
   if (lVar1 != 0) {
      if (*(long*)( lVar1 + 0x70 ) != 0) {
         mbedtls_x509_crt_free();
         free(*(void**)( lVar1 + 0x70 ));
         *(undefined8*)( lVar1 + 0x70 ) = 0;
      }

      free(*(void**)( lVar1 + 0xd8 ));
      free(*(void**)( lVar1 + 0x80 ));
      mbedtls_platform_zeroize(lVar1, 0x1f0);
      free(*(void**)( param_1 + 0x60 ));
   }

   __s = *(char**)( param_1 + 0x1b0 );
   if (( __s != (char*)0x0 ) && ( __s != "" )) {
      sVar2 = strlen(__s);
      mbedtls_zeroize_and_free(__s, sVar2);
   }

   *(undefined8*)( param_1 + 0x1b0 ) = 0;
   free(*(void**)( param_1 + 0x1c0 ));
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x1609, "<= free");
   mbedtls_platform_zeroize(param_1, 0x238);
   return;
}
void mbedtls_ssl_session_free(long param_1) {
   if (param_1 != 0) {
      if (*(long*)( param_1 + 0x70 ) != 0) {
         mbedtls_x509_crt_free();
         free(*(void**)( param_1 + 0x70 ));
         *(undefined8*)( param_1 + 0x70 ) = 0;
      }

      free(*(void**)( param_1 + 0xd8 ));
      free(*(void**)( param_1 + 0x80 ));
      mbedtls_platform_zeroize(param_1, 0x1f0);
      return;
   }

   return;
}
ulong mbedtls_ssl_context_save(long *param_1, ulong *param_2, ulong param_3, ulong *param_4) {
   byte *pbVar1;
   byte bVar2;
   int iVar3;
   uint uVar4;
   ulong uVar5;
   long lVar6;
   size_t sVar7;
   ulong uVar8;
   ulong uVar9;
   undefined8 uVar10;
   long lVar11;
   byte *pbVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   char *pcVar15;
   ulong uVar16;
   ulong *puVar17;
   ulong *puVar18;
   long in_FS_OFFSET;
   byte bVar19;
   undefined8 uStack_60;
   long local_48;
   long local_40;
   bVar19 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((int)param_1[1] < 0x1b) {
      mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x13fa, "Initial handshake isn\'t over");
      LAB_00104da2:uVar8 = 0xffff8f00;
   }
 else {
      if (param_1[0xe] != 0) {
         pcVar15 = "Handshake isn\'t completed";
         uVar10 = 0x13fe;
         LAB_00104d8c:mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", uVar10, pcVar15);
         goto LAB_00104da2;
      }

      if (( param_1[0x11] == 0 ) || ( param_1[0xc] == 0 )) {
         pcVar15 = "Serialised structures aren\'t ready";
         uVar10 = 0x1403;
         goto LAB_00104d8c;
      }

      iVar3 = mbedtls_ssl_check_pending();
      if (iVar3 != 0) {
         pcVar15 = "There is pending incoming data";
         uVar10 = 0x1408;
         goto LAB_00104d8c;
      }

      if (param_1[0x33] != 0) {
         pcVar15 = "There is pending outgoing data";
         uVar10 = 0x140c;
         goto LAB_00104d8c;
      }

      if (*(char*)( *param_1 + 9 ) != '\x01') {
         pcVar15 = "Only DTLS is supported";
         uVar10 = 0x1411;
         goto LAB_00104d8c;
      }

      if (*(int*)( (long)param_1 + 0x14 ) != 0x303) {
         pcVar15 = "Only version 1.2 supported";
         uVar10 = 0x1416;
         goto LAB_00104d8c;
      }

      if (( *(long*)( param_1[0x11] + 0x18 ) != 0 ) || ( *(long*)( param_1[0x11] + 0x20 ) == 0 )) {
         pcVar15 = "Only AEAD ciphersuites supported";
         uVar10 = 0x141b;
         goto LAB_00104d8c;
      }

      if (*(char*)( *param_1 + 0x10 ) != '\0') {
         pcVar15 = "Renegotiation must not be enabled";
         uVar10 = 0x1421;
         goto LAB_00104d8c;
      }

      puVar17 = param_2;
      if (7 < param_3) {
         puVar17 = param_2 + 1;
         *param_2 = 0xf0000ff00030603;
      }

      uStack_60 = 0x104c79;
      uVar4 = ssl_session_save(param_1[0xc], 1, 0, 0);
      lVar6 = local_48;
      uVar8 = (ulong)uVar4;
      if (uVar4 == 0xffff9600) {
         if (local_48 + 0xcU <= param_3) {
            uVar4 = (uint)local_48;
            *(uint*)puVar17 = uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18;
            uStack_60 = 0x104e99;
            uVar4 = ssl_session_save(param_1[0xc], 1, (uint*)( (long)puVar17 + 4 ), local_48, &local_48);
            if (uVar4 != 0) {
               uVar8 = (ulong)uVar4;
               goto LAB_00104d59;
            }

            puVar17 = (ulong*)( (long)puVar17 + 4 + local_48 );
         }

         uVar16 = 0;
         puVar18 = puVar17;
         if (lVar6 + 0x4cU <= param_3) {
            lVar11 = param_1[0x11];
            puVar18 = puVar17 + 8;
            uVar5 = *(ulong*)( lVar11 + 0x18a );
            *puVar17 = *(ulong*)( lVar11 + 0x182 );
            puVar17[1] = uVar5;
            for (int i = 0; i < 3; i++) {
               uVar5 = *(ulong*)( lVar11 + ( 16*i + 410 ) );
               puVar17[( 2*i + 2 )] = *(ulong*)( lVar11 + ( 16*i + 402 ) );
               puVar17[( 2*i + 3 )] = uVar5;
            }

         }

         bVar2 = *(byte*)( param_1[0x11] + 0x140 );
         uVar5 = ( ulong )(*(byte*)( param_1[0x11] + 0x141 ) + 2 + (uint)bVar2) + lVar6 + 0x4cU;
         if (uVar5 <= param_3) {
            *(byte*)puVar18 = bVar2;
            lVar6 = param_1[0x11];
            pbVar12 = (byte*)( (long)puVar18 + 1 );
            bVar2 = *(byte*)( lVar6 + 0x140 );
            uVar9 = (ulong)bVar2;
            if (bVar2 < 8) {
               if (( bVar2 & 4 ) == 0) {
                  if (bVar2 != 0) {
                     *pbVar12 = *(byte*)( lVar6 + 0x142 );
                     if (( bVar2 & 2 ) == 0) goto LAB_00104f1d;
                     *(undefined2*)( (long)puVar18 + ( uVar9 - 1 ) ) = *(undefined2*)( lVar6 + 0x140 + uVar9 );
                     lVar6 = param_1[0x11];
                  }

               }
 else {
                  *(undefined4*)pbVar12 = *(undefined4*)( lVar6 + 0x142 );
                  *(undefined4*)( (long)puVar18 + ( uVar9 - 3 ) ) = *(undefined4*)( lVar6 + 0x13e + uVar9 );
                  lVar6 = param_1[0x11];
               }

            }
 else {
               puVar13 = (undefined8*)( ( ulong )((long)puVar18 + 9U) & 0xfffffffffffffff8 );
               *(undefined8*)( (long)puVar18 + 1 ) = *(undefined8*)( lVar6 + 0x142 );
               *(undefined8*)( (long)puVar18 + ( uVar9 - 7 ) ) = *(undefined8*)( lVar6 + 0x13a + uVar9 );
               lVar11 = (long)pbVar12 - (long)puVar13;
               puVar14 = (undefined8*)( ( lVar6 + 0x142 ) - lVar11 );
               for (uVar9 = ( ulong )((uint)bVar2 + (int)lVar11 >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
                  *puVar13 = *puVar14;
                  puVar14 = puVar14 + (ulong)bVar19 * -2 + 1;
                  puVar13 = puVar13 + (ulong)bVar19 * -2 + 1;
               }

               LAB_00104f1d:lVar6 = param_1[0x11];
            }

            pbVar12 = pbVar12 + *(byte*)( lVar6 + 0x140 );
            *pbVar12 = *(byte*)( lVar6 + 0x141 );
            lVar6 = param_1[0x11];
            bVar2 = *(byte*)( lVar6 + 0x141 );
            uVar9 = (ulong)bVar2;
            if (bVar2 < 8) {
               if (( bVar2 & 4 ) == 0) {
                  if (bVar2 != 0) {
                     pbVar12[1] = *(byte*)( lVar6 + 0x162 );
                     if (( bVar2 & 2 ) == 0) goto LAB_00104f79;
                     *(undefined2*)( pbVar12 + ( uVar9 - 1 ) ) = *(undefined2*)( lVar6 + 0x160 + uVar9 );
                     lVar6 = param_1[0x11];
                  }

               }
 else {
                  *(undefined4*)( pbVar12 + 1 ) = *(undefined4*)( lVar6 + 0x162 );
                  *(undefined4*)( pbVar12 + ( uVar9 - 3 ) ) = *(undefined4*)( lVar6 + 0x15e + uVar9 );
                  lVar6 = param_1[0x11];
               }

            }
 else {
               *(undefined8*)( pbVar12 + 1 ) = *(undefined8*)( lVar6 + 0x162 );
               *(undefined8*)( pbVar12 + ( uVar9 - 7 ) ) = *(undefined8*)( lVar6 + 0x15a + uVar9 );
               puVar14 = (undefined8*)( ( lVar6 + 0x162 ) - (long)( pbVar12 + ( 1 - (long)( ( ulong )(pbVar12 + 9) & 0xfffffffffffffff8 ) ) ) );
               puVar13 = (undefined8*)( ( ulong )(pbVar12 + 9) & 0xfffffffffffffff8 );
               for (uVar9 = ( ulong )((uint)bVar2 + (int)( pbVar12 + ( 1 - (long)( ( ulong )(pbVar12 + 9) & 0xfffffffffffffff8 ) ) ) >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
                  *puVar13 = *puVar14;
                  puVar14 = puVar14 + (ulong)bVar19 * -2 + 1;
                  puVar13 = puVar13 + (ulong)bVar19 * -2 + 1;
               }

               LAB_00104f79:lVar6 = param_1[0x11];
            }

            puVar18 = (ulong*)( pbVar12 + ( ulong ) * (byte*)( lVar6 + 0x141 ) + 1 );
         }

         puVar17 = puVar18;
         if (uVar5 + 4 <= param_3) {
            uVar4 = *(uint*)( param_1 + 3 );
            puVar17 = (ulong*)( (long)puVar18 + 4 );
            *(uint*)puVar18 = uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18;
         }

         puVar18 = puVar17;
         if (uVar5 + 0x14 <= param_3) {
            uVar9 = param_1[0x24];
            puVar18 = puVar17 + 2;
            *puVar17 = uVar9 >> 0x38 | ( uVar9 & 0xff000000000000 ) >> 0x28 | ( uVar9 & 0xff0000000000 ) >> 0x18 | ( uVar9 & 0xff00000000 ) >> 8 | ( uVar9 & 0xff000000 ) << 8 | ( uVar9 & 0xff0000 ) << 0x18 | ( uVar9 & 0xff00 ) << 0x28 | uVar9 << 0x38;
            uVar9 = param_1[0x25];
            puVar17[1] = uVar9 >> 0x38 | ( uVar9 & 0xff000000000000 ) >> 0x28 | ( uVar9 & 0xff0000000000 ) >> 0x18 | ( uVar9 & 0xff00000000 ) >> 8 | ( uVar9 & 0xff000000 ) << 8 | ( uVar9 & 0xff0000 ) << 0x18 | ( uVar9 & 0xff00 ) << 0x28 | uVar9 << 0x38;
         }

         puVar17 = puVar18;
         if (uVar5 + 0x15 <= param_3) {
            puVar17 = (ulong*)( (long)puVar18 + 1 );
            *(byte*)puVar18 = *(byte*)( param_1 + 0x29 );
         }

         puVar18 = puVar17;
         if (uVar5 + 0x1d <= param_3) {
            puVar18 = puVar17 + 1;
            *puVar17 = param_1[0x34];
         }

         puVar17 = puVar18;
         if (uVar5 + 0x1f <= param_3) {
            puVar17 = (ulong*)( (long)puVar18 + 2 );
            *(ushort*)puVar18 = *(ushort*)( param_1 + 0x35 ) << 8 | *(ushort*)( param_1 + 0x35 ) >> 8;
         }

         lVar6 = 1;
         if ((char*)param_1[0x37] != (char*)0x0) {
            uStack_60 = 0x104d3e;
            sVar7 = strlen((char*)param_1[0x37]);
            uVar16 = sVar7 & 0xff;
            lVar6 = ( sVar7 & 0xff ) + 1;
         }

         uVar5 = lVar6 + uVar5 + 0x1f;
         if (uVar5 <= param_3) {
            *(byte*)puVar17 = (byte)uVar16;
            pbVar12 = (byte*)param_1[0x37];
            if (pbVar12 != (byte*)0x0) {
               pbVar1 = (byte*)( (long)puVar17 + 1 );
               uVar4 = (uint)uVar16;
               if (uVar4 < 8) {
                  if (( uVar16 & 4 ) == 0) {
                     if (( uVar4 != 0 ) && ( *pbVar1 = *pbVar12(uVar16 & 2) != 0 )) {
                        *(undefined2*)( (long)puVar17 + ( uVar16 - 1 ) ) = *(undefined2*)( pbVar12 + ( uVar16 - 2 ) );
                     }

                  }
 else {
                     *(undefined4*)pbVar1 = *(undefined4*)pbVar12;
                     *(undefined4*)( (long)puVar17 + ( uVar16 - 3 ) ) = *(undefined4*)( pbVar12 + ( uVar16 - 4 ) );
                  }

               }
 else {
                  puVar14 = (undefined8*)( ( ulong )((long)puVar17 + 9U) & 0xfffffffffffffff8 );
                  *(undefined8*)( (long)puVar17 + 1 ) = *(undefined8*)pbVar12;
                  *(undefined8*)( (long)puVar17 + ( uVar16 - 7 ) ) = *(undefined8*)( pbVar12 + ( uVar16 - 8 ) );
                  lVar6 = (long)pbVar1 - (long)puVar14;
                  pbVar12 = pbVar12 + -lVar6;
                  for (uVar8 = ( ulong )(uVar4 + (int)lVar6 >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
                     *puVar14 = *(undefined8*)pbVar12;
                     pbVar12 = pbVar12 + ( (ulong)bVar19 * -2 + 1 ) * 8;
                     puVar14 = puVar14 + (ulong)bVar19 * -2 + 1;
                  }

               }

            }

            *param_4 = uVar5;
            mbedtls_debug_print_buf(param_1, 4, "thirdparty/mbedtls/library/ssl_tls.c", 0x14a2, "saved context", param_2, uVar5);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar8 = mbedtls_ssl_session_reset_int(param_1, 0, uStack_60);
               return uVar8;
            }

            goto LAB_001051fd;
         }

         *param_4 = uVar5;
      }

   }

   LAB_00104d59:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }

   LAB_001051fd:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
int mbedtls_ssl_context_load(long *param_1, long *param_2, ulong param_3) {
   byte *pbVar1;
   byte bVar2;
   undefined4 uVar3;
   long lVar4;
   int iVar5;
   long lVar6;
   byte *pbVar7;
   uint *puVar8;
   size_t sVar9;
   uint uVar10;
   ulong uVar11;
   uint *puVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   code *pcVar15;
   long lVar16;
   long *plVar17;
   char *__s;
   byte bVar18;
   bVar18 = 0;
   if (( ( ( ( (int)param_1[1] == 0 ) && ( param_1[0xc] == 0 ) ) && ( puVar12 = (uint*)*param_1 ),(char)puVar12[4] == '\0' ) ) && ( ( *(char*)( (long)puVar12 + 9 ) == '\x01' && ( 0x302 < *puVar12 ) ) )) &&( ( puVar12[1] < 0x304 && ( mbedtls_debug_print_buf(param_1, 4, "thirdparty/mbedtls/library/ssl_tls.c", 0x14d4, "context to load", param_2, param_3),7 < param_3 ) ) )(*param_2 != 0xf0000ff00030603);
   {
      iVar5 = -0x5f00;
      goto LAB_001053c2;
   }

   if (3 < param_3 - 8) {
      lVar6 = param_1[0xd];
      uVar10 = *(uint*)( param_2 + 1 );
      param_1[0xd] = 0;
      uVar11 = ( ulong )(uVar10 >> 0x18 | ( uVar10 & 0xff0000 ) >> 8 | ( uVar10 & 0xff00 ) << 8 | uVar10 << 0x18);
      param_1[0xc] = lVar6;
      param_1[10] = lVar6;
      param_1[0xb] = lVar6;
      if (uVar11 <= param_3 - 0xc) {
         iVar5 = ssl_session_load(lVar6, 1, (long)param_2 + 0xc, uVar11);
         if (iVar5 != 0) {
            lVar6 = param_1[0xc];
            if (lVar6 != 0) {
               if (*(long*)( lVar6 + 0x70 ) != 0) {
                  mbedtls_x509_crt_free();
                  free(*(void**)( lVar6 + 0x70 ));
                  *(undefined8*)( lVar6 + 0x70 ) = 0;
               }

               free(*(void**)( lVar6 + 0xd8 ));
               free(*(void**)( lVar6 + 0x80 ));
               mbedtls_platform_zeroize(lVar6, 0x1f0);
            }

            goto LAB_001053c2;
         }

         lVar6 = param_1[0x12];
         lVar16 = uVar11 + (long)param_2 + 0xc;
         param_1[0x12] = 0;
         param_1[0x11] = lVar6;
         uVar3 = *(undefined4*)( param_1[0xc] + 0x10 );
         param_1[0xf] = lVar6;
         param_1[0x10] = lVar6;
         lVar6 = mbedtls_ssl_ciphersuite_from_id(uVar3);
         if (lVar6 != 0) {
            if (*(char*)( lVar6 + 0x11 ) == '\n') {
               pcVar15 = tls_prf_sha384;
            }
 else {
               pcVar15 = tls_prf_sha256;
               if (*(char*)( lVar6 + 0x11 ) != '\t') goto LAB_001053bd;
            }

            puVar12 = (uint*)( (long)param_2 + param_3 );
            if (0x3f < ( ulong )((long)puVar12 - lVar16)) {
               lVar6 = param_1[0xc];
               iVar5 = ssl_tls12_populate_transform(param_1[0x11], *(undefined4*)( lVar6 + 0x10 ), lVar6 + 0x40, *(undefined4*)( lVar6 + 0xe8 ), pcVar15, lVar16, 0x303, *(undefined1*)( *param_1 + 8 ), param_1);
               if (iVar5 != 0) goto LAB_001053c2;
               if (puVar12 != (uint*)( lVar16 + 0x40 )) {
                  bVar2 = *(byte*)( lVar16 + 0x40 );
                  uVar11 = (ulong)bVar2;
                  lVar4 = param_1[0x11];
                  lVar6 = lVar16 + 0x41;
                  *(byte*)( lVar4 + 0x140 ) = bVar2;
                  if (uVar11 + 1 <= ( ulong )((long)puVar12 - lVar6)) {
                     if (bVar2 < 8) {
                        if (( bVar2 & 4 ) == 0) {
                           if (( bVar2 != 0 ) && ( *(undefined1*)( lVar4 + 0x142 ) = *(undefined1*)( lVar16 + 0x41 )(bVar2 & 2) != 0 )) {
                              *(undefined2*)( lVar4 + 0x140 + uVar11 ) = *(undefined2*)( lVar16 + 0x3f + uVar11 );
                           }

                        }
 else {
                           *(undefined4*)( lVar4 + 0x142 ) = *(undefined4*)( lVar16 + 0x41 );
                           *(undefined4*)( lVar4 + 0x13e + uVar11 ) = *(undefined4*)( lVar16 + 0x3d + uVar11 );
                        }

                     }
 else {
                        *(undefined8*)( lVar4 + 0x142 ) = *(undefined8*)( lVar16 + 0x41 );
                        puVar13 = (undefined8*)( lVar4 + 0x14aU & 0xfffffffffffffff8 );
                        *(undefined8*)( lVar4 + 0x13a + uVar11 ) = *(undefined8*)( lVar16 + 0x39 + uVar11 );
                        lVar16 = ( lVar4 + 0x142 ) - (long)puVar13;
                        puVar14 = (undefined8*)( lVar6 - lVar16 );
                        for (uVar11 = ( ulong )((int)lVar16 + (uint)bVar2 >> 3); uVar11 != 0; uVar11 = uVar11 - 1) {
                           *puVar13 = *puVar14;
                           puVar14 = puVar14 + (ulong)bVar18 * -2 + 1;
                           puVar13 = puVar13 + (ulong)bVar18 * -2 + 1;
                        }

                     }

                     lVar16 = param_1[0x11];
                     pbVar7 = (byte*)( ( ulong ) * (byte*)( lVar16 + 0x140 ) + lVar6 );
                     bVar2 = *pbVar7;
                     uVar11 = (ulong)bVar2;
                     pbVar1 = pbVar7 + 1;
                     *(byte*)( lVar16 + 0x141 ) = bVar2;
                     if (uVar11 <= ( ulong )((long)puVar12 - (long)pbVar1)) {
                        uVar10 = (uint)bVar2;
                        if (uVar10 < 8) {
                           if (( bVar2 & 4 ) == 0) {
                              if (( uVar10 != 0 ) && ( *(byte*)( lVar16 + 0x162 ) = pbVar7[1](bVar2 & 2) != 0 )) {
                                 *(undefined2*)( lVar16 + 0x160 + uVar11 ) = *(undefined2*)( pbVar7 + ( uVar11 - 1 ) );
                              }

                           }
 else {
                              *(undefined4*)( lVar16 + 0x162 ) = *(undefined4*)( pbVar7 + 1 );
                              *(undefined4*)( lVar16 + 0x15e + uVar11 ) = *(undefined4*)( pbVar7 + ( uVar11 - 3 ) );
                           }

                        }
 else {
                           *(undefined8*)( lVar16 + 0x162 ) = *(undefined8*)( pbVar7 + 1 );
                           puVar14 = (undefined8*)( lVar16 + 0x16aU & 0xfffffffffffffff8 );
                           *(undefined8*)( lVar16 + 0x15a + uVar11 ) = *(undefined8*)( pbVar7 + ( uVar11 - 7 ) );
                           lVar6 = ( lVar16 + 0x162 ) - (long)puVar14;
                           pbVar7 = pbVar1 + -lVar6;
                           for (uVar11 = ( ulong )(uVar10 + (int)lVar6 >> 3); uVar11 != 0; uVar11 = uVar11 - 1) {
                              *puVar14 = *(undefined8*)pbVar7;
                              pbVar7 = pbVar7 + ( (ulong)bVar18 * -2 + 1 ) * 8;
                              puVar14 = puVar14 + (ulong)bVar18 * -2 + 1;
                           }

                        }

                        lVar6 = param_1[0x11];
                        puVar8 = (uint*)( pbVar1 + *(byte*)( lVar6 + 0x141 ) );
                        if (3 < ( ulong )((long)puVar12 - (long)puVar8)) {
                           uVar10 = *puVar8;
                           *(uint*)( param_1 + 3 ) = uVar10 >> 0x18 | ( uVar10 & 0xff0000 ) >> 8 | ( uVar10 & 0xff00 ) << 8 | uVar10 << 0x18;
                           if (0xf < ( ulong )((long)puVar12 - (long)( puVar8 + 1 ))) {
                              uVar11 = *(ulong*)( puVar8 + 1 );
                              param_1[0x24] = uVar11 >> 0x38 | ( uVar11 & 0xff000000000000 ) >> 0x28 | ( uVar11 & 0xff0000000000 ) >> 0x18 | ( uVar11 & 0xff00000000 ) >> 8 | ( uVar11 & 0xff000000 ) << 8 | ( uVar11 & 0xff0000 ) << 0x18 | ( uVar11 & 0xff00 ) << 0x28 | uVar11 << 0x38;
                              uVar11 = *(ulong*)( puVar8 + 3 );
                              param_1[0x25] = uVar11 >> 0x38 | ( uVar11 & 0xff000000000000 ) >> 0x28 | ( uVar11 & 0xff0000000000 ) >> 0x18 | ( uVar11 & 0xff00000000 ) >> 8 | ( uVar11 & 0xff000000 ) << 8 | ( uVar11 & 0xff0000 ) << 0x18 | ( uVar11 & 0xff00 ) << 0x28 | uVar11 << 0x38;
                              if (( ( ( puVar12 != puVar8 + 5 ) && ( *(byte*)( param_1 + 0x29 ) = (byte)puVar8[5] ),7 < ( ulong )((long)puVar12 - (long)( (long)puVar8 + 0x15 )) ) ) && ( param_1[0x34] = *(long*)( (long)puVar8 + 0x15 ) ),1 < ( ulong )((long)puVar12 - (long)( (long)puVar8 + 0x1d ))) {
                                 bVar18 = *(byte*)( (long)puVar8 + 0x1f );
                                 if (bVar18 == 0) {
                                    uVar11 = 0;
                                 }
 else {
                                    plVar17 = *(long**)( *param_1 + 0x118 );
                                    if (( plVar17 != (long*)0x0 ) && ( __s = (char*)*plVar17 ),__s != (char*)0x0) {
                                       uVar11 = (ulong)bVar18;
                                       do {
                                          sVar9 = strlen(__s);
                                          if (( sVar9 == uVar11 ) && ( iVar5 = iVar5 == 0 )) {
                                             param_1[0x37] = (long)__s;
                                             goto LAB_00105694;
                                          }

                                          __s = (char*)plVar17[1];
                                          plVar17 = plVar17 + 1;
                                       }
 while ( __s != (char*)0x0 );
                                    }

                                    if (param_1[0x37] == 0) goto LAB_001053bd;
                                    uVar11 = (ulong)bVar18;
                                 }

                                 LAB_00105694:*(undefined4*)( param_1 + 1 ) = 0x1b;
                                 *(undefined4*)( (long)param_1 + 0x14 ) = 0x303;
                                 mbedtls_ssl_update_out_pointers(param_1, lVar6);
                                 *(undefined2*)( param_1 + 0x22 ) = 1;
                                 if (param_1[0xe] != 0) {
                                    mbedtls_ssl_handshake_free(param_1);
                                    free((void*)param_1[0xe]);
                                    param_1[0xe] = 0;
                                 }

                                 if (puVar12 == (uint*)( (long)( puVar8 + 8 ) + uVar11 )) {
                                    return 0;
                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

}
LAB_001053bd:iVar5 = -0x7100;LAB_001053c2:mbedtls_ssl_free_part_0(param_1);return iVar5;}void mbedtls_ssl_free(long param_1) {
   if (param_1 != 0) {
      mbedtls_ssl_free_part_0();
      return;
   }

   return;
}
void mbedtls_ssl_config_init(undefined8 *param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   *param_1 = 0;
   param_1[0x2a] = 0;
   puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x158U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
   }

   return;
}
undefined4 mbedtls_ssl_config_defaults(long *param_1, int param_2, int param_3, int param_4) {
   undefined8 uVar1;
   int iVar2;
   undefined6 *puVar3;
   long lVar4;
   undefined1 *puVar5;
   iVar2 = ssl_check_no_sig_alg_duplication(&ssl_preset_suiteb_sig_algs);
   if (iVar2 == 0) {
      iVar2 = ssl_check_no_sig_alg_duplication(ssl_preset_default_sig_algs);
      if (iVar2 == 0) {
         iVar2 = ssl_check_no_sig_alg_duplication(&ssl_tls12_preset_suiteb_sig_algs);
         if (iVar2 == 0) {
            iVar2 = ssl_check_no_sig_alg_duplication(ssl_tls12_preset_default_sig_algs);
            if (iVar2 == 0) {
               *(char*)( param_1 + 1 ) = (char)param_2;
               *(char*)( (long)param_1 + 9 ) = (char)param_3;
               if (param_2 == 0) {
                  *(undefined1*)( (long)param_1 + 10 ) = 2;
                  *(byte*)( (long)param_1 + 0x11 ) = *(byte*)( (long)param_1 + 0x11 ) & 0xfc | 1;
               }

               *(undefined1*)( (long)param_1 + 0xf ) = 1;
               *(undefined2*)( (long)param_1 + 0xd ) = 0x101;
               uVar1 = _LC96;
               *(undefined4*)( (long)param_1 + 300 ) = 0x10;
               *(undefined2*)( param_1 + 0x26 ) = 0;
               *(undefined8*)( (long)param_1 + 0x124 ) = uVar1;
               *(undefined2*)( (long)param_1 + 0x136 ) = 0xffff;
               *(undefined4*)( (long)param_1 + 0x12 ) = 0x10001;
               *(undefined4*)( (long)param_1 + 0x132 ) = 0xffffffff;
               *(undefined4*)( param_1 + 4 ) = 7;
               *(uint*)param_1 = ( param_3 != 1 ) + 0x303;
               *(undefined4*)( (long)param_1 + 4 ) = 0x303;
               param_1[0x12] = 0x100000;
               param_1[0x13] = (long)ssl_cookie_check_dummy;
               if (param_4 == 2) {
                  param_1[3] = (long)ssl_preset_suiteb_ciphersuites;
                  param_1[0x19] = (long)&mbedtls_x509_crt_profile_suiteb;
                  puVar3 = &ssl_preset_suiteb_sig_algs;
                  if (*param_1 == 0x30300000303) {
                     puVar3 = &ssl_tls12_preset_suiteb_sig_algs;
                  }

                  param_1[0x1d] = (long)puVar3;
                  param_1[0x1e] = (long)&ssl_preset_suiteb_groups;
                  return 0;
               }

               lVar4 = mbedtls_ssl_list_ciphersuites();
               param_1[3] = lVar4;
               param_1[0x19] = (long)&mbedtls_x509_crt_profile_default;
               puVar5 = ssl_preset_default_sig_algs;
               if (*param_1 == 0x30300000303) {
                  puVar5 = ssl_tls12_preset_default_sig_algs;
               }

               param_1[0x1d] = (long)puVar5;
               param_1[0x1e] = (long)ssl_preset_default_groups;
               return 0;
            }

            puts("ssl_tls12_preset_default_sig_algs has duplicated entries");
         }
 else {
            puts("ssl_tls12_preset_suiteb_sig_algs has duplicated entries");
         }

      }
 else {
         puts("ssl_preset_default_sig_algs has duplicated entries");
      }

   }
 else {
      puts("ssl_preset_suiteb_sig_algs has duplicated entries");
   }

   return 0xffffff92;
}
void mbedtls_ssl_config_free(long param_1) {
   void *pvVar1;
   void *__ptr;
   if (param_1 == 0) {
      return;
   }

   if (*(long*)( param_1 + 0xf8 ) != 0) {
      mbedtls_zeroize_and_free(*(long*)( param_1 + 0xf8 ), *(undefined8*)( param_1 + 0x100 ));
      *(undefined8*)( param_1 + 0xf8 ) = 0;
      *(undefined8*)( param_1 + 0x100 ) = 0;
   }

   if (*(long*)( param_1 + 0x108 ) != 0) {
      mbedtls_zeroize_and_free(*(long*)( param_1 + 0x108 ), *(undefined8*)( param_1 + 0x110 ));
      *(undefined8*)( param_1 + 0x108 ) = 0;
      *(undefined8*)( param_1 + 0x110 ) = 0;
   }

   __ptr = *(void**)( param_1 + 0xd0 );
   while (__ptr != (void*)0x0) {
      pvVar1 = *(void**)( (long)__ptr + 0x10 );
      free(__ptr);
      __ptr = pvVar1;
   }
;
   mbedtls_platform_zeroize(param_1, 0x158);
   return;
}
byte mbedtls_ssl_sig_from_pk(undefined8 param_1) {
   int iVar1;
   iVar1 = mbedtls_pk_can_do(param_1, 1);
   if (iVar1 != 0) {
      return 1;
   }

   iVar1 = mbedtls_pk_can_do(param_1, 4);
   return -(iVar1 != 0) & 3;
}
undefined4 mbedtls_ssl_sig_from_pk_alg(int param_1) {
   uint uVar1;
   uVar1 = param_1 - 2U & 0xfffffffd;
   if (uVar1 != 0) {
      return CONCAT31(( int3 )(uVar1 >> 8), param_1 == 1);
   }

   return 3;
}
long mbedtls_ssl_pk_alg_from_sig(char param_1) {
   long lVar1;
   lVar1 = 1;
   if (param_1 != '\x01') {
      lVar1 = ( ulong )(param_1 == '\x03') << 2;
   }

   return lVar1;
}
undefined4 mbedtls_ssl_md_alg_from_hash(char param_1) {
   undefined4 uVar1;
   uVar1 = 0;
   if (( byte )(param_1 - 1U) < 6) {
      uVar1 = *(undefined4*)( CSWTCH_277 + ( ulong )(byte)(param_1 - 1U) * 4 );
   }

   return uVar1;
}
undefined1 mbedtls_ssl_hash_from_md_alg(int param_1) {
   undefined1 uVar1;
   uVar1 = 0;
   if (param_1 - 3U < 9) {
      uVar1 = CSWTCH_279[param_1 - 3U];
   }

   return uVar1;
}
undefined8 mbedtls_ssl_check_curve_tls_id(long *param_1, short param_2) {
   short *psVar1;
   psVar1 = *(short**)( *param_1 + 0xf0 );
   if (psVar1 != (short*)0x0) {
      for (; *psVar1 != 0; psVar1 = psVar1 + 1) {
         if (param_2 == *psVar1) {
            return 0;
         }

      }

   }

   return 0xffffffff;
}
undefined8 mbedtls_ssl_check_curve(long *param_1, int param_2) {
   int iVar1;
   short *psVar2;
   int iVar3;
   int *piVar4;
   piVar4 = &DAT_0010a570;
   iVar3 = 0;
   iVar1 = 5;
   while (param_2 != iVar1) {
      iVar1 = *piVar4;
      piVar4 = piVar4 + 3;
      iVar3 = iVar3 + 1;
      if (iVar1 == 0) {
         return 0xffffffff;
      }

   }
;
   if (( &tls_id_match_table )[(long)iVar3 * 6] == 0) {
      return 0xffffffff;
   }

   psVar2 = *(short**)( *param_1 + 0xf0 );
   if (psVar2 == (short*)0x0) {
      return 0xffffffff;
   }

   while (true) {
      if (*psVar2 == 0) {
         return 0xffffffff;
      }

      if (( &tls_id_match_table )[(long)iVar3 * 6] == *psVar2) break;
      psVar2 = psVar2 + 1;
   }
;
   return 0;
}
undefined8 mbedtls_ssl_get_psa_curve_info_from_tls_id(short param_1, undefined2 *param_2, ulong *param_3) {
   short sVar1;
   int iVar2;
   short *psVar3;
   iVar2 = 0;
   sVar1 = 0x19;
   psVar3 = &DAT_0010a56c;
   do {
      if (param_1 == sVar1) {
         if (param_2 != (undefined2*)0x0) {
            *param_2 = CONCAT11(0x71, ( &DAT_0010a568 )[(long)iVar2 * 0xc]);
         }

         if (param_3 != (ulong*)0x0) {
            *param_3 = ( ulong )(ushort)(&DAT_0010a56a)[(long)iVar2 * 6];
         }

         return 0;
      }

      sVar1 = *psVar3;
      psVar3 = psVar3 + 6;
      iVar2 = iVar2 + 1;
   }
 while ( sVar1 != 0 );
   return 0xffffff7a;
}
undefined4 mbedtls_ssl_get_ecp_group_id_from_tls_id(short param_1) {
   short sVar1;
   int iVar2;
   short *psVar3;
   psVar3 = &DAT_0010a56c;
   iVar2 = 0;
   sVar1 = 0x19;
   do {
      if (param_1 == sVar1) {
         return ( &DAT_0010a564 )[(long)iVar2 * 3];
      }

      sVar1 = *psVar3;
      psVar3 = psVar3 + 6;
      iVar2 = iVar2 + 1;
   }
 while ( sVar1 != 0 );
   return 0;
}
uint mbedtls_ssl_get_tls_id_from_ecp_group_id(uint param_1) {
   uint uVar1;
   int iVar2;
   uint *puVar3;
   puVar3 = &DAT_0010a570;
   iVar2 = 0;
   uVar1 = 5;
   do {
      if (param_1 == uVar1) {
         return ( uint )(ushort)(&tls_id_match_table)[(long)iVar2 * 6];
      }

      uVar1 = *puVar3;
      puVar3 = puVar3 + 3;
      iVar2 = iVar2 + 1;
   }
 while ( uVar1 != 0 );
   return uVar1;
}
undefined8 mbedtls_ssl_get_curve_name_from_tls_id(short param_1) {
   short sVar1;
   int iVar2;
   short *psVar3;
   psVar3 = (short*)( tls_id_curve_name_table + 0x10 );
   iVar2 = 0;
   sVar1 = 0x19;
   do {
      if (param_1 == sVar1) {
         return *(undefined8*)( tls_id_curve_name_table + (long)iVar2 * 0x10 + 8 );
      }

      sVar1 = *psVar3;
      psVar3 = psVar3 + 8;
      iVar2 = iVar2 + 1;
   }
 while ( sVar1 != 0 );
   return 0;
}
int mbedtls_ssl_get_handshake_transcript(long param_1, int param_2, undefined8 param_3, ulong param_4, undefined8 *param_5) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined1 auStack_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 9) {
      if (param_4 < 0x20) {
         iVar1 = -0x6c00;
         goto LAB_00105de8;
      }

      mbedtls_md_init(auStack_48);
      uVar2 = mbedtls_md_info_from_type(9);
      iVar1 = mbedtls_md_setup(auStack_48, uVar2, 0);
      if (iVar1 == 0) {
         iVar1 = mbedtls_md_clone(auStack_48, *(long*)( param_1 + 0x70 ) + 0x520);
         if (iVar1 == 0) {
            iVar1 = mbedtls_md_finish(auStack_48, param_3);
            if (iVar1 == 0) {
               *param_5 = 0x20;
            }
 else {
               mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1993, "mbedtls_md_finish", iVar1);
            }

         }

      }

   }
 else {
      iVar1 = -0x6c00;
      if (( param_2 != 10 ) || ( param_4 < 0x30 )) goto LAB_00105de8;
      mbedtls_md_init(auStack_48);
      uVar2 = mbedtls_md_info_from_type(10);
      iVar1 = mbedtls_md_setup(auStack_48, uVar2, 0);
      if (iVar1 == 0) {
         iVar1 = mbedtls_md_clone(auStack_48, *(long*)( param_1 + 0x70 ) + 0x538);
         if (iVar1 == 0) {
            iVar1 = mbedtls_md_finish(auStack_48, param_3);
            if (iVar1 == 0) {
               *param_5 = 0x30;
            }
 else {
               mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x196d, "mbedtls_md_finish", iVar1);
            }

         }

      }

   }

   mbedtls_md_free(auStack_48);
   LAB_00105de8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 mbedtls_ssl_parse_sig_alg_ext(long *param_1, ushort *param_2, ushort *param_3) {
   ushort *puVar1;
   ushort *puVar2;
   ushort uVar3;
   long lVar4;
   ulong uVar5;
   ushort *puVar6;
   undefined8 uVar7;
   ulong extraout_RDX;
   ushort *puVar8;
   ushort uVar9;
   uint local_48;
   if (( param_3 < param_2 ) || ( (long)param_3 - (long)param_2 < 2 )) {
      uVar7 = 0x19f4;
   }
 else {
      lVar4 = param_1[0xe];
      puVar8 = param_2 + 1;
      uVar3 = *param_2;
      *(undefined8*)( lVar4 + 0x60 ) = 0;
      *(undefined1(*) [16])( lVar4 + 0x40 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( lVar4 + 0x50 ) = (undefined1[16])0x0;
      if (( param_3 < puVar8 ) || ( uVar5 = ( ulong )(ushort)(uVar3 << 8 | uVar3 >> 8)(ulong)((long)param_3 - (long)puVar8) < uVar5 )) {
         uVar7 = 0x19fb;
      }
 else {
         puVar2 = (ushort*)( (long)puVar8 + uVar5 );
         if (puVar2 <= puVar8) {
            if (param_3 != puVar8) {
               LAB_00106231:mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1a16, "Signature algorithms extension length misaligned");
               mbedtls_ssl_pend_fatal_alert(param_1, 0x32, 0xffff8d00);
               return 0xffff8d00;
            }

            LAB_001061cc:mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x1a1e, "no signature algorithm in common");
            mbedtls_ssl_pend_fatal_alert(param_1, 0x28, 0xffff9200);
            return 0xffff9200;
         }

         if (uVar3 != 0x100) {
            local_48 = 0;
            do {
               uVar3 = *puVar8;
               puVar8 = puVar8 + 1;
               uVar9 = uVar3 << 8 | uVar3 >> 8;
               uVar7 = mbedtls_ssl_sig_alg_to_str(uVar9);
               mbedtls_debug_print_msg(param_1, 4, "thirdparty/mbedtls/library/ssl_tls.c", 0x1a01, "received signature algorithm: 0x%x %s", uVar9);
               uVar5 = extraout_RDX;
               if (*(int*)( (long)param_1 + 0x14 ) == 0x303) {
                  if (( ( (byte)uVar3 - 1 < 6 ) && ( ( ( byte )(uVar3 >> 8) & 0xfd ) == 1 ) ) && ( puVar6 = *(ushort**)( *param_1 + 0xe8 ) ),puVar6 != (ushort*)0x0) {
                     uVar3 = *puVar6;
                     while (uVar3 != 0) {
                        uVar5 = (ulong)uVar3;
                        if (uVar9 == uVar3) goto LAB_0010616f;
                        puVar1 = puVar6 + 1;
                        puVar6 = puVar6 + 1;
                        uVar3 = *puVar1;
                     }
;
                  }

               }
 else {
                  LAB_0010616f:uVar7 = mbedtls_ssl_sig_alg_to_str(uVar9, 0x106088, uVar5, uVar7);
                  mbedtls_debug_print_msg(param_1, 4, "thirdparty/mbedtls/library/ssl_tls.c", 0x1a0c, "valid signature algorithm: %s", uVar7);
                  if (local_48 + 1 < 0x14) {
                     *(ushort*)( param_1[0xe] + 0x40 + (ulong)local_48 * 2 ) = uVar9;
                     local_48 = local_48 + 1;
                  }

               }

               if (puVar2 <= puVar8) {
                  if (param_3 != puVar8) goto LAB_00106231;
                  if (local_48 != 0) {
                     *(undefined2*)( param_1[0xe] + 0x40 + (ulong)local_48 * 2 ) = 0;
                     return 0;
                  }

                  goto LAB_001061cc;
               }

            }
 while ( (long)puVar2 - (long)puVar8 != 1 );
         }

         uVar7 = 0x19fe;
      }

   }

   mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", uVar7, "missing input data in %s", "mbedtls_ssl_parse_sig_alg_ext");
   mbedtls_ssl_pend_fatal_alert(param_1, 0x32, 0xffff8d00);
   return 0xffff8d00;
}
int mbedtls_ssl_derive_keys(long *param_1) {
   char *pcVar1;
   long lVar2;
   char *pcVar3;
   int iVar4;
   code *pcVar5;
   code *pcVar6;
   char *pcVar7;
   code *pcVar8;
   char *pcVar9;
   undefined8 extraout_RDX;
   long in_FS_OFFSET;
   bool bVar10;
   undefined8 uStack_90;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)( param_1[0xe] + 0x10 );
   uStack_90 = 0x1062bb;
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x1c3d, "=> derive keys");
   pcVar6 = tls_prf_sha384;
   pcVar3 = (char*)param_1[0xe];
   bVar10 = *(char*)( lVar2 + 0x11 ) != '\n';
   local_80 = 0x40;
   if (bVar10) {
      pcVar6 = tls_prf_sha256;
   }

   pcVar5 = ssl_calc_verify_tls_sha384;
   if (bVar10) {
      pcVar5 = ssl_calc_verify_tls_sha256;
   }

   pcVar8 = ssl_calc_finished_tls_sha384;
   if (bVar10) {
      pcVar8 = ssl_calc_finished_tls_sha256;
   }

   lVar2 = param_1[0xd];
   *(code**)( pcVar3 + 0x30 ) = pcVar6;
   *(code**)( pcVar3 + 0x20 ) = pcVar5;
   *(code**)( pcVar3 + 0x28 ) = pcVar8;
   if (*pcVar3 == '\0') {
      if (pcVar3[0xc] == '\x01') {
         pcVar7 = (char*)&local_78;
         uStack_90 = 0x106542;
         iVar4 = ( *pcVar5 )(param_1, pcVar7, &local_80);
         if (iVar4 != 0) {
            uStack_90 = 0x1065cf;
            mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1ba8, "calc_verify", iVar4);
         }

         mbedtls_debug_print_buf(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x1bab, "session hash for extended master secret", pcVar7, local_80);
         pcVar9 = "extended master secret";
      }
 else {
         pcVar7 = pcVar3 + 0x5a8;
         pcVar9 = "master secret";
      }

      pcVar1 = pcVar3 + 0x5e8;
      iVar4 = ( **(code**)( pcVar3 + 0x30 ) )(pcVar1, *(undefined8*)( pcVar3 + 0x660 ), pcVar9, pcVar7, local_80, lVar2 + 0x40, 0x30);
      if (iVar4 != 0) {
         mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1c28, &_LC41, iVar4);
         mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1c4c, "ssl_compute_master", iVar4);
         goto LAB_00106499;
      }

      mbedtls_debug_print_buf(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x1c2c, "premaster secret", pcVar1, *(undefined8*)( pcVar3 + 0x660 ));
      mbedtls_platform_zeroize(pcVar1, 0x76);
   }
 else {
      mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x1b9e, "no premaster (session resumed)");
      uStack_90 = extraout_RDX;
   }

   lVar2 = param_1[0xe];
   local_78 = *(undefined8*)( lVar2 + 0x5a8 );
   uStack_70 = *(undefined8*)( lVar2 + 0x5b0 );
   local_68 = *(undefined8*)( lVar2 + 0x5b8 );
   uStack_60 = *(undefined8*)( lVar2 + 0x5c0 );
   local_58 = *(undefined8*)( lVar2 + 0x5c8 );
   uStack_50 = *(undefined8*)( lVar2 + 0x5d0 );
   local_48 = *(undefined8*)( lVar2 + 0x5d8 );
   uStack_40 = *(undefined8*)( lVar2 + 0x5e0 );
   *(undefined8*)( lVar2 + 0x5a8 ) = local_58;
   *(undefined8*)( lVar2 + 0x5b0 ) = uStack_50;
   *(undefined8*)( lVar2 + 0x5b8 ) = local_48;
   *(undefined8*)( lVar2 + 0x5c0 ) = uStack_40;
   lVar2 = param_1[0xe];
   *(undefined8*)( lVar2 + 0x5c8 ) = local_78;
   *(undefined8*)( lVar2 + 0x5d0 ) = uStack_70;
   *(undefined8*)( lVar2 + 0x5d8 ) = local_68;
   *(undefined8*)( lVar2 + 0x5e0 ) = uStack_60;
   mbedtls_platform_zeroize(&local_78, 0x40, uStack_90);
   lVar2 = param_1[0xd];
   iVar4 = ssl_tls12_populate_transform(param_1[0x12], *(undefined4*)( lVar2 + 0x10 ), lVar2 + 0x40, *(undefined4*)( lVar2 + 0xe8 ), *(undefined8*)( param_1[0xe] + 0x30 ), param_1[0xe] + 0x5a8, *(undefined4*)( (long)param_1 + 0x14 ), *(undefined1*)( *param_1 + 8 ), param_1);
   if (iVar4 == 0) {
      mbedtls_platform_zeroize(param_1[0xe] + 0x5a8, 0x40);
      mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x1c70, "<= derive keys");
   }
 else {
      mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1c68, "ssl_tls12_populate_transform", iVar4);
   }

   LAB_00106499:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 mbedtls_ssl_set_calc_verify_md(long param_1, int param_2) {
   if (param_2 == 4) {
      *(code**)( *(long*)( param_1 + 0x70 ) + 0x20 ) = ssl_calc_verify_tls_sha256;
      return 0;
   }

   if (param_2 == 5) {
      *(code**)( *(long*)( param_1 + 0x70 ) + 0x20 ) = ssl_calc_verify_tls_sha384;
      return 0;
   }

   return 0xffffffff;
}
int mbedtls_ssl_psk_derive_premaster(long *param_1, int param_2) {
   ushort *puVar1;
   long lVar2;
   long lVar3;
   ushort uVar4;
   int iVar5;
   undefined8 uVar6;
   ushort *__dest;
   ushort *puVar7;
   ulong __n;
   void *__src;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   lVar2 = param_1[0xe];
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *param_1;
   __src = *(void**)( lVar2 + 0x3f0 );
   if (( ( __src == (void*)0x0 ) || ( __n = *(ulong*)( lVar2 + 0x3f8 ) ),__n == 0 )) {
      if (param_2 == 6) {
         LAB_001067ad:uVar6 = 0x1d57;
      }
 else {
         uVar6 = 0x1d05;
      }

      mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", uVar6, "should never happen");
      iVar5 = -0x6c00;
      goto LAB_00106761;
   }

   puVar1 = (ushort*)( lVar2 + 0x65e );
   uVar4 = (ushort)__n;
   if (param_2 == 5) {
      *(ushort*)( lVar2 + 0x5e8 ) = uVar4 << 8 | uVar4 >> 8;
      if (__n < 0x75) {
         puVar7 = (ushort*)( lVar2 + 0x5ea + __n );
         memset((void*)( lVar2 + 0x5ea ), 0, __n);
         goto LAB_0010670d;
      }

   }
 else {
      if (param_2 == 7) {
         puVar7 = (ushort*)( lVar2 + 0x61a );
         *(undefined2*)( lVar2 + 0x5e8 ) = 0x3000;
      }
 else {
         if (param_2 != 8) goto LAB_001067ad;
         iVar5 = mbedtls_ecdh_calc_secret(lVar2 + 0x68, &local_38, lVar2 + 0x5ea, 0x74, *(undefined8*)( lVar3 + 0x38 ), *(undefined8*)( lVar3 + 0x40 ));
         if (iVar5 != 0) {
            mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1d4b, "mbedtls_ecdh_calc_secret", iVar5);
            goto LAB_00106761;
         }

         *(ushort*)( lVar2 + 0x5e8 ) = (ushort)local_38 << 8 | (ushort)local_38 >> 8;
         puVar7 = (ushort*)( lVar2 + 0x5ea + local_38 );
         mbedtls_debug_printf_ecdh(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x1d52, param_1[0xe] + 0x68, 2);
         LAB_0010670d:if ((long)puVar1 - (long)puVar7 < 2) goto LAB_00106868;
      }

      __dest = puVar7 + 1;
      *puVar7 = uVar4 << 8 | uVar4 >> 8;
      if (( __dest <= puVar1 ) && ( __n <= ( ulong )((long)puVar1 - (long)__dest) )) {
         memcpy(__dest, __src, __n);
         *(ulong*)( param_1[0xe] + 0x660 ) = (long)__dest + __n + ( -0x5e8 - param_1[0xe] );
         iVar5 = 0;
         goto LAB_00106761;
      }

   }

   LAB_00106868:iVar5 = -0x7100;
   LAB_00106761:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 mbedtls_ssl_resend_hello_request(long *param_1) {
   long lVar1;
   uint uVar2;
   undefined8 uVar3;
   int iVar4;
   lVar1 = *param_1;
   if (*(int*)( lVar1 + 300 ) < 0) {
      uVar2 = *(uint*)( lVar1 + 0x128 ) / *(uint*)( lVar1 + 0x124 ) + 1;
      if (uVar2 == 0) {
         uVar2 = 1;
      }
 else {
         iVar4 = 0x1f;
         if (uVar2 != 0) {
            for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {}
         }

         uVar2 = iVar4 + 2U & 0xff;
      }

      iVar4 = (int)param_1[2] + 1;
      *(int*)( param_1 + 2 ) = iVar4;
      if ((int)uVar2 < iVar4) {
         mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x1d83, "no longer retransmitting hello request");
         return 0;
      }

   }

   uVar3 = ssl_write_hello_request();
   return uVar3;
}
int mbedtls_ssl_write_certificate(long *param_1) {
   byte bVar1;
   size_t __n;
   int iVar2;
   undefined1 uVar4;
   long *plVar3;
   char cVar5;
   undefined8 uVar6;
   undefined1 uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   lVar8 = *(long*)( param_1[0xe] + 0x10 );
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x1dbf, "=> write certificate");
   bVar1 = *(byte*)( lVar8 + 0x12 );
   if (( 10 < bVar1 ) || ( ( 0x69eUL >> ( (ulong)bVar1 & 0x3f ) & 1 ) == 0 )) {
      uVar6 = 0x1dc2;
      LAB_001069ac:mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", uVar6, "<= skip write certificate");
      *(int*)( param_1 + 1 ) = (int)param_1[1] + 1;
      return 0;
   }

   lVar8 = *param_1;
   if (*(char*)( lVar8 + 8 ) == '\0') {
      lVar10 = param_1[0xe];
      if (*(char*)( lVar10 + 0x552 ) == '\0') {
         uVar6 = 0x1dca;
         goto LAB_001069ac;
      }

      LAB_001069e9:plVar3 = *(long**)( lVar10 + 0x408 );
      if (plVar3 != (long*)0x0) goto LAB_00106a01;
      LAB_001069f5:plVar3 = *(long**)( lVar8 + 0xd0 );
      LAB_001069fc:if (plVar3 == (long*)0x0) goto LAB_00106a04;
   }
 else {
      lVar10 = param_1[0xe];
      if (*(char*)( lVar8 + 8 ) != '\x01') {
         if (lVar10 != 0) goto LAB_001069e9;
         goto LAB_001069f5;
      }

      if (lVar10 != 0) {
         plVar3 = *(long**)( lVar10 + 0x408 );
         if (plVar3 != (long*)0x0) {
            if (*plVar3 == 0) {
               return -0x6c00;
            }

            goto LAB_00106a01;
         }

         plVar3 = *(long**)( lVar8 + 0xd0 );
         if (plVar3 == (long*)0x0) {
            return -0x6c00;
         }

         if (*plVar3 == 0) {
            return -0x6c00;
         }

         goto LAB_001069fc;
      }

      plVar3 = *(long**)( lVar8 + 0xd0 );
      if (plVar3 == (long*)0x0) {
         return -0x6c00;
      }

      if (*plVar3 == 0) {
         return -0x6c00;
      }

   }

   LAB_00106a01:plVar3 = (long*)*plVar3;
   LAB_00106a04:mbedtls_debug_print_crt(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x1dda, "own certificate", plVar3);
   if (( ( ( param_1[0xe] == 0 ) || ( plVar3 = *(long**)( param_1[0xe] + 0x408 ) ),plVar3 == (long*)0x0 ) ) && ( plVar3 = *(long**)( *param_1 + 0xd0 ) ),plVar3 == (long*)0x0) {
      cVar5 = '\0';
      uVar4 = 0;
      uVar7 = 0;
      lVar10 = 7;
   }
 else {
      lVar9 = 7;
      do {
         __n = *(size_t*)( lVar8 + 0x10 );
         lVar10 = __n + lVar9 + 3;
         if (0x3ffdU - lVar9 < __n) {
            mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1deb, "certificate too large, %zu > %zu", lVar10, 0x4000);
            return -0x6a00;
         }

         *(char*)( param_1[0x30] + lVar9 ) = (char)( __n >> 0x10 );
         *(char*)( param_1[0x30] + 1 + lVar9 ) = (char)( __n >> 8 );
         *(char*)( param_1[0x30] + 2 + lVar9 ) = (char)__n;
         memcpy((void*)( lVar9 + 3 + param_1[0x30] ), *(void**)( lVar8 + 0x18 ), __n);
         lVar8 = *(long*)( lVar8 + 0x2e0 );
         lVar9 = lVar10;
      }
 while ( lVar8 != 0 );
      cVar5 = (char)lVar10 + -7;
      uVar4 = ( undefined1 )(( ulong )(lVar10 + -7) >> 8);
      uVar7 = ( undefined1 )(( ulong )(lVar10 + -7) >> 0x10);
   }

   *(undefined1*)( param_1[0x30] + 4 ) = uVar7;
   *(undefined1*)( param_1[0x30] + 5 ) = uVar4;
   *(char*)( param_1[0x30] + 6 ) = cVar5;
   param_1[0x32] = lVar10;
   *(undefined4*)( param_1 + 0x31 ) = 0x16;
   *(undefined1*)param_1[0x30] = 0xb;
   *(int*)( param_1 + 1 ) = (int)param_1[1] + 1;
   iVar2 = mbedtls_ssl_write_handshake_msg_ext(param_1, 1, 1);
   if (iVar2 == 0) {
      mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x1e08, "<= write certificate");
      return 0;
   }

   mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1e04, "mbedtls_ssl_write_handshake_msg", iVar2);
   return iVar2;
}
void mbedtls_ssl_handshake_wrapup_free_hs_transform(long param_1) {
   undefined8 uVar1;
   mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x2055, "=> handshake wrapup: final free");
   mbedtls_ssl_handshake_free(param_1);
   free(*(void**)( param_1 + 0x70 ));
   *(undefined8*)( param_1 + 0x70 ) = 0;
   if (*(long*)( param_1 + 0x88 ) != 0) {
      mbedtls_ssl_transform_free();
      free(*(void**)( param_1 + 0x88 ));
   }

   uVar1 = *(undefined8*)( param_1 + 0x90 );
   *(undefined8*)( param_1 + 0x90 ) = 0;
   *(undefined8*)( param_1 + 0x88 ) = uVar1;
   mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x2068, "<= handshake wrapup: final free");
   return;
}
void mbedtls_ssl_handshake_wrapup(long *param_1) {
   char cVar1;
   long lVar2;
   code *pcVar3;
   int iVar4;
   long lVar5;
   cVar1 = *(char*)param_1[0xe];
   mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x206f, "=> handshake wrapup");
   if (*(int*)( (long)param_1 + 0xc ) == 1) {
      *(undefined8*)( (long)param_1 + 0xc ) = 2;
   }

   lVar5 = param_1[0xc];
   if (lVar5 != 0) {
      lVar2 = *(long*)( lVar5 + 0x70 );
      *(undefined4*)( param_1[0xd] + 0xe8 ) = *(undefined4*)( lVar5 + 0xe8 );
      if (lVar2 != 0) {
         mbedtls_x509_crt_free();
         free(*(void**)( lVar5 + 0x70 ));
         *(undefined8*)( lVar5 + 0x70 ) = 0;
      }

      free(*(void**)( lVar5 + 0xd8 ));
      free(*(void**)( lVar5 + 0x80 ));
      mbedtls_platform_zeroize(lVar5, 0x1f0);
      free((void*)param_1[0xc]);
   }

   lVar5 = *param_1;
   lVar2 = param_1[0xd];
   param_1[0xd] = 0;
   pcVar3 = *(code**)( lVar5 + 0x50 );
   param_1[0xc] = lVar2;
   if (( ( pcVar3 != (code*)0x0 ) && ( cVar1 == '\0' ) ) && ( *(long*)( lVar2 + 0x18 ) != 0 )) {
      iVar4 = ( *pcVar3 )(*(undefined8*)( lVar5 + 0x58 ), lVar2 + 0x20);
      if (iVar4 != 0) {
         mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x2092, "cache did not store session");
      }

      lVar5 = *param_1;
   }

   if (( *(char*)( lVar5 + 9 ) == '\x01' ) && ( *(long*)( param_1[0xe] + 0x4c8 ) != 0 )) {
      mbedtls_ssl_set_timer(param_1, 0);
      mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x209e, "skip freeing handshake and transform");
   }
 else {
      mbedtls_ssl_handshake_wrapup_free_hs_transform(param_1);
   }

   *(undefined4*)( param_1 + 1 ) = 0x1b;
   mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x20a5, "<= handshake wrapup");
   return;
}
int mbedtls_ssl_write_finished(long *param_1) {
   char *pcVar1;
   long *plVar2;
   undefined4 uVar3;
   undefined1 *puVar4;
   int iVar5;
   long lVar6;
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x20ad, "=> write finished");
   mbedtls_ssl_update_out_pointers(param_1, param_1[0x12]);
   iVar5 = ( **(code**)( param_1[0xe] + 0x28 ) )(param_1, param_1[0x30] + 4, *(undefined1*)( *param_1 + 8 ));
   if (iVar5 != 0) {
      mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x20b3, "calc_finished", iVar5);
      return iVar5;
   }

   puVar4 = (undefined1*)param_1[0x30];
   param_1[0x3b] = 0xc;
   param_1[0x3c] = *(long*)( puVar4 + 4 );
   uVar3 = *(undefined4*)( puVar4 + 0xc );
   param_1[0x32] = 0x10;
   *(undefined4*)( param_1 + 0x3d ) = uVar3;
   *(undefined4*)( param_1 + 0x31 ) = 0x16;
   *puVar4 = 0x14;
   if (*(char*)param_1[0xe] == '\0') {
      *(int*)( param_1 + 1 ) = (int)param_1[1] + 1;
   }
 else if (*(char*)( *param_1 + 8 ) == '\0') {
      *(undefined4*)( param_1 + 1 ) = 0xf;
   }
 else if (*(char*)( *param_1 + 8 ) == '\x01') {
      *(undefined4*)( param_1 + 1 ) = 10;
   }

   mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x20df, "switching to new transform spec for outbound data");
   lVar6 = *param_1;
   if (*(char*)( lVar6 + 9 ) == '\x01') {
      lVar6 = param_1[0xe];
      *(long*)( lVar6 + 0x4e8 ) = param_1[0x10];
      *(long*)( lVar6 + 0x4f0 ) = param_1[0x34];
      pcVar1 = (char*)( (long)param_1 + 0x1a1 );
      *pcVar1 = *pcVar1 + '\x01';
      *(undefined4*)( (long)param_1 + 0x1a2 ) = 0;
      *(undefined2*)( (long)param_1 + 0x1a6 ) = 0;
      if (*pcVar1 == '\0') {
         plVar2 = param_1 + 0x34;
         *(char*)plVar2 = (char)*plVar2 + '\x01';
         if ((char)*plVar2 == '\0') {
            mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x20f7, "DTLS epoch would wrap");
            return -0x6b80;
         }

      }

      lVar6 = *param_1;
   }
 else {
      param_1[0x34] = 0;
   }

   param_1[0x10] = param_1[0x12];
   param_1[0xb] = param_1[0xd];
   if (*(char*)( lVar6 + 9 ) == '\x01') {
      mbedtls_ssl_send_flight_completed(param_1);
   }

   iVar5 = mbedtls_ssl_write_handshake_msg_ext(param_1, 1, 1);
   if (iVar5 == 0) {
      if (( *(char*)( *param_1 + 9 ) == '\x01' ) && ( iVar5 = iVar5 != 0 )) {
         mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x210f, "mbedtls_ssl_flight_transmit", iVar5);
         return iVar5;
      }

      mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x2114, "<= write finished");
      return 0;
   }

   mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x2108, "mbedtls_ssl_write_handshake_msg", iVar5);
   return iVar5;
}
int mbedtls_ssl_parse_finished(long *param_1) {
   char cVar1;
   int iVar2;
   long in_FS_OFFSET;
   bool bVar3;
   undefined8 local_3c;
   undefined4 local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x2121, "=> parse finished");
   iVar2 = ( **(code**)( param_1[0xe] + 0x28 ) )(param_1, &local_3c, *(byte*)( *param_1 + 8 ) ^ 1);
   if (iVar2 != 0) {
      mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x2125, "calc_finished", iVar2);
      goto LAB_00107311;
   }

   iVar2 = mbedtls_ssl_read_record(param_1, 1);
   if (iVar2 == 0) {
      if ((int)param_1[0x1f] == 0x16) {
         if (*(char*)param_1[0x1d] == '\x14') {
            bVar3 = *(char*)( *param_1 + 9 ) == '\x01';
            if (param_1[0x26] == (ulong)bVar3 * 8 + 0x10) {
               iVar2 = mbedtls_ct_memcmp((char*)param_1[0x1d] + (ulong)bVar3 * 8 + 4, &local_3c, 0xc);
               if (iVar2 == 0) {
                  param_1[0x3b] = 0xc;
                  *(undefined8*)( (long)param_1 + 0x1ec ) = local_3c;
                  *(undefined4*)( (long)param_1 + 500 ) = local_34;
                  if (*(char*)param_1[0xe] == '\0') {
                     *(int*)( param_1 + 1 ) = (int)param_1[1] + 1;
                  }
 else {
                     cVar1 = *(char*)( *param_1 + 8 );
                     if (cVar1 == '\0') {
                        *(undefined4*)( param_1 + 1 ) = 10;
                     }
 else if (cVar1 == '\x01') {
                        *(undefined4*)( param_1 + 1 ) = 0xf;
                     }

                  }

                  if (*(char*)( *param_1 + 9 ) == '\x01') {
                     mbedtls_ssl_recv_flight_completed(param_1);
                  }

                  mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x2168, "<= parse finished");
                  iVar2 = 0;
               }
 else {
                  iVar2 = -0x6e00;
                  mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x2147, "bad finished message");
                  mbedtls_ssl_send_alert_message(param_1, 2, 0x33);
               }

            }
 else {
               iVar2 = -0x7300;
               mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x213e, "bad finished message");
               mbedtls_ssl_send_alert_message(param_1, 2, 0x32);
            }

            goto LAB_0010736d;
         }

         mbedtls_ssl_send_alert_message(param_1, 2, 10);
      }
 else {
         mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x212f, "bad finished message");
         mbedtls_ssl_send_alert_message(param_1, 2, 10);
      }

      iVar2 = -0x7700;
   }
 else {
      mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x212a, "mbedtls_ssl_read_record", iVar2);
   }

   LAB_0010736d:mbedtls_platform_zeroize(&local_3c, 0xc);
   LAB_00107311:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_ssl_get_key_exchange_md_tls1_2(long param_1, undefined8 param_2, ulong *param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6) {
   byte bVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 extraout_RDX;
   char *pcVar4;
   long in_FS_OFFSET;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = mbedtls_md_info_from_type(param_6);
   bVar1 = mbedtls_md_get_size(uVar3);
   *param_3 = (ulong)bVar1;
   mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x240e, "Perform mbedtls-based computation of digest of ServerKeyExchange");
   mbedtls_md_init(local_58);
   iVar2 = mbedtls_md_setup(local_58, uVar3, 0);
   if (iVar2 == 0) {
      iVar2 = mbedtls_md_starts(local_58);
      if (iVar2 == 0) {
         iVar2 = mbedtls_md_update(local_58, *(long*)( param_1 + 0x70 ) + 0x5a8, 0x40);
         pcVar4 = "mbedtls_md_update";
         uVar3 = 0x2422;
         if (iVar2 == 0) {
            iVar2 = mbedtls_md_update(local_58, param_4, param_5, 0x2422, "mbedtls_md_update", 0);
            pcVar4 = "mbedtls_md_update";
            uVar3 = 0x2426;
            if (iVar2 == 0) {
               iVar2 = mbedtls_md_finish(local_58, param_2, extraout_RDX, 0x2426, "mbedtls_md_update", 0);
               pcVar4 = "mbedtls_md_finish";
               uVar3 = 0x242a;
               if (iVar2 == 0) {
                  mbedtls_md_free(local_58);
                  goto LAB_001075f9;
               }

            }

         }

      }
 else {
         pcVar4 = "mbedtls_md_starts";
         uVar3 = 0x241e;
      }

   }
 else {
      uVar3 = 0x241a;
      pcVar4 = "mbedtls_md_setup";
   }

   mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", uVar3, pcVar4, iVar2);
   mbedtls_md_free(local_58);
   mbedtls_ssl_send_alert_message(param_1, 2, 0x50);
   LAB_001075f9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
ushort mbedtls_ssl_tls12_get_preferred_hash_for_sig_alg(long param_1, uint param_2) {
   ulong uVar1;
   ushort uVar2;
   byte bVar3;
   if (param_2 != 0) {
      uVar2 = *(ushort*)( *(long*)( param_1 + 0x70 ) + 0x40 );
      if (uVar2 != 0) {
         uVar1 = 0;
         do {
            bVar3 = (char)( uVar2 >> 8 ) - 1;
            if (( ( bVar3 < 6 ) && ( (byte)uVar2 == param_2 ) ) && ( *(int*)( CSWTCH_277 + (ulong)bVar3 * 4 ) != 0 )) {
               return uVar2 >> 8;
            }

            uVar1 = ( ulong )((int)uVar1 + 1);
            uVar2 = *(ushort*)( *(long*)( param_1 + 0x70 ) + 0x40 + uVar1 * 2 );
         }
 while ( uVar2 != 0 );
      }

   }

   return 0;
}
ulong mbedtls_ssl_validate_ciphersuite(long *param_1, long param_2, uint param_3, uint param_4) {
   long lVar1;
   ulong uVar2;
   if (param_2 == 0) {
      return 0xffffffff;
   }

   if (( param_4 < *(ushort*)( param_2 + 0x14 ) ) || ( *(ushort*)( param_2 + 0x16 ) < param_3 )) {
      return 0xffffffff;
   }

   uVar2 = mbedtls_ssl_ciphersuite_uses_psk(param_2);
   if ((int)uVar2 != 0) {
      lVar1 = *param_1;
      if (*(long*)( lVar1 + 0x108 ) == 0) {
         return 0xffffffff;
      }

      if (*(long*)( lVar1 + 0x110 ) == 0) {
         return 0xffffffff;
      }

      if (*(long*)( lVar1 + 0xf8 ) == 0) {
         return 0xffffffff;
      }

      uVar2 = ( ulong ) - ( uint )(*(long*)( lVar1 + 0x100 ) == 0);
   }

   return uVar2;
}
undefined8 mbedtls_ssl_write_sig_alg_ext(long *param_1, ushort *param_2, ushort *param_3, long *param_4) {
   ushort uVar1;
   undefined8 uVar2;
   long lVar3;
   ushort *puVar4;
   ushort *puVar5;
   *param_4 = 0;
   mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x24d6, "adding signature_algorithms extension");
   if (( param_3 < param_2 ) || ( (long)param_3 - (long)param_2 < 6 )) {
      LAB_00107860:uVar2 = 0xffff9600;
   }
 else {
      puVar5 = *(ushort**)( *param_1 + 0xe8 );
      if (puVar5 == (ushort*)0x0) {
         uVar2 = 0xffffa180;
      }
 else {
         uVar1 = *puVar5;
         puVar4 = param_2 + 3;
         if (uVar1 != 0) {
            do {
               uVar2 = mbedtls_ssl_sig_alg_to_str(uVar1);
               mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x24ea, "got signature scheme [%x] %s", *puVar5, uVar2);
               uVar1 = *puVar5;
               if (*(int*)( (long)param_1 + 0x14 ) == 0x303) {
                  if (( ( byte )(uVar1 >> 8) - 1 < 6 ) && ( ( (byte)uVar1 & 0xfd ) == 1 )) goto LAB_00107894;
               }
 else if (*(int*)( (long)param_1 + 0x14 ) == 0x304) {
                  if (( ( uVar1 & 0xfeff ) == 0x401 ) || ( ( uVar1 & 0xfffd ) == 0x601 )) {
                     LAB_00107894:if (( param_3 < puVar4 ) || ( (long)param_3 - (long)puVar4 < 2 )) goto LAB_00107860;
                     *puVar4 = uVar1 << 8 | uVar1 >> 8;
                     uVar2 = mbedtls_ssl_sig_alg_to_str(*puVar5);
                     mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x24f3, "sent signature scheme [%x] %s", *puVar5, uVar2);
                     puVar4 = puVar4 + 1;
                  }
 else if (uVar1 < 0x604) {
                     if (( uVar1 & 0xfeff ) == 0x403) goto LAB_00107894;
                  }
 else if (( ushort )(uVar1 - 0x804) < 3) goto LAB_00107894;
               }

               uVar1 = puVar5[1];
               puVar5 = puVar5 + 1;
            }
 while ( uVar1 != 0 );
            lVar3 = (long)puVar4 - (long)( param_2 + 3 );
            if (lVar3 != 0) {
               *param_2 = 0xd00;
               uVar1 = (ushort)lVar3;
               param_2[2] = uVar1 << 8 | uVar1 >> 8;
               param_2[1] = ( uVar1 + 2 ) * 0x100 | ( ushort )(uVar1 + 2) >> 8;
               lVar3 = param_1[0xe];
               *param_4 = (long)puVar4 - (long)param_2;
               *(uint*)( lVar3 + 0x668 ) = *(uint*)( lVar3 + 0x668 ) | 0x20;
               return 0;
            }

         }

         mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x24fb, "No signature algorithms defined.");
         uVar2 = 0xffff9400;
      }

   }

   return uVar2;
}
undefined8 mbedtls_ssl_parse_server_name_ext(long *param_1, ushort *param_2, ushort *param_3) {
   ulong uVar1;
   ushort *puVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   ushort uVar6;
   int iVar7;
   undefined8 uVar8;
   ulong uVar9;
   ulong uVar10;
   ushort *puVar11;
   mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x252c, "parse ServerName extension");
   if (( param_3 < param_2 ) || ( (long)param_3 - (long)param_2 < 2 )) {
      uVar8 = 0x252e;
   }
 else {
      puVar11 = param_2 + 1;
      if (puVar11 <= param_3) {
         uVar6 = *param_2 << 8 | *param_2 >> 8;
         uVar10 = (ulong)uVar6;
         if (uVar10 <= ( ulong )((long)param_3 - (long)puVar11)) {
            puVar2 = (ushort*)( (long)puVar11 + uVar10 );
            if (puVar2 <= puVar11) {
               return 0;
            }

            if (2 < uVar6) {
               do {
                  uVar9 = ( ulong )(ushort)(*(ushort*)( (long)puVar11 + 1 ) << 8 | *(ushort*)( (long)puVar11 + 1 ) >> 8);
                  uVar1 = uVar9 + 3;
                  if (uVar10 < uVar1) {
                     uVar8 = 0x2537;
                     goto LAB_001079cd;
                  }

                  if ((char)*puVar11 == '\0') {
                     lVar3 = param_1[0xe];
                     lVar4 = *param_1;
                     *(char**)( lVar3 + 0x748 ) = (char*)( (long)puVar11 + 3 );
                     *(ulong*)( lVar3 + 0x750 ) = uVar9;
                     pcVar5 = *(code**)( lVar4 + 0x60 );
                     if (pcVar5 == (code*)0x0) {
                        return 0;
                     }

                     iVar7 = ( *pcVar5 )(*(undefined8*)( lVar4 + 0x68 ), param_1, (char*)( (long)puVar11 + 3 ));
                     if (iVar7 == 0) {
                        return 0;
                     }

                     mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x2548, "ssl_sni_wrapper", iVar7);
                     mbedtls_ssl_pend_fatal_alert(param_1, 0x70, 0xffff8800);
                     return 0xffff8800;
                  }

                  puVar11 = (ushort*)( (long)puVar11 + uVar1 );
                  if (puVar2 <= puVar11) {
                     return 0;
                  }

                  uVar10 = (long)puVar2 - (long)puVar11;
               }
 while ( 2 < (long)uVar10 );
            }

            uVar8 = 0x2535;
            goto LAB_001079cd;
         }

      }

      uVar8 = 0x2532;
   }

   LAB_001079cd:mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", uVar8, "missing input data in %s", "mbedtls_ssl_parse_server_name_ext");
   mbedtls_ssl_pend_fatal_alert(param_1, 0x32, 0xffff8d00);
   return 0xffff8d00;
}
undefined8 mbedtls_ssl_parse_alpn_ext(long *param_1, ushort *param_2, ushort *param_3) {
   ushort *puVar1;
   ushort *puVar2;
   char *__s;
   byte bVar3;
   ushort uVar4;
   int iVar5;
   ulong uVar6;
   ushort *puVar7;
   size_t __n;
   undefined8 uVar8;
   undefined8 *puVar9;
   ushort *puVar10;
   puVar9 = *(undefined8**)( *param_1 + 0x118 );
   if (puVar9 == (undefined8*)0x0) {
      LAB_00107cc0:uVar8 = 0;
   }
 else {
      if (( param_3 < param_2 ) || ( (long)param_3 - (long)param_2 < 4 )) {
         uVar8 = 0x2576;
      }
 else {
         puVar1 = param_2 + 1;
         if (( param_3 < puVar1 ) || ( uVar6 = ( ulong )(ushort)(*param_2 << 8 | *param_2 >> 8)(ulong)((long)param_3 - (long)puVar1) < uVar6 )) {
            uVar8 = 0x257a;
         }
 else {
            puVar10 = (ushort*)( uVar6 + (long)puVar1 );
            if (puVar10 <= puVar1) {
               LAB_00107c4c:do {
                  __s = (char*)*puVar9;
                  if (__s == (char*)0x0) {
                     mbedtls_ssl_pend_fatal_alert(param_1, 0x78, 0xffff8a80);
                     return 0xffff8a80;
                  }

                  __n = strlen(__s);
                  for (puVar2 = puVar1; puVar2 < puVar10; puVar2 = (ushort*)( (byte*)( (long)puVar2 + 1 ) + (byte)uVar4 )) {
                     uVar4 = *puVar2;
                     if (( __n == (byte)uVar4 ) && ( iVar5 = iVar5 == 0 )) {
                        param_1[0x37] = (long)__s;
                        goto LAB_00107cc0;
                     }

                  }

                  puVar9 = puVar9 + 1;
               }
 while ( true );
            }

            puVar2 = (ushort*)( (long)param_2 + 3 );
            bVar3 = (byte)param_2[1];
            while (( puVar2 <= puVar10 && ( uVar6 = (ulong)bVar3 ),uVar6 <= ( ulong )((long)puVar10 - (long)puVar2) )) {
               if (uVar6 == 0) {
                  mbedtls_ssl_pend_fatal_alert(param_1, 0x2f, 0xffff9a00);
                  return 0xffff9a00;
               }

               puVar7 = (ushort*)( uVar6 + (long)puVar2 );
               if (puVar10 <= puVar7) goto LAB_00107c4c;
               puVar2 = (ushort*)( (long)puVar7 + 1 );
               bVar3 = ( byte ) * puVar7;
            }
;
            uVar8 = 0x2581;
         }

      }

      mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", uVar8, "missing input data in %s", "mbedtls_ssl_parse_alpn_ext");
      mbedtls_ssl_pend_fatal_alert(param_1, 0x32, 0xffff8d00);
      uVar8 = 0xffff8d00;
   }

   return uVar8;
}
undefined8 mbedtls_ssl_write_alpn_ext(long param_1, undefined2 *param_2, undefined2 *param_3, ulong *param_4) {
   uint *puVar1;
   char *__s;
   ushort uVar2;
   size_t __n;
   __s = *(char**)( param_1 + 0x1b8 );
   *param_4 = 0;
   if (__s != (char*)0x0) {
      if (param_3 < param_2) {
         return 0xffff9600;
      }

      __n = strlen(__s);
      if (( ulong )((long)param_3 - (long)param_2) < __n + 7) {
         return 0xffff9600;
      }

      mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x25b4, "server side, adding alpn extension");
      *param_2 = 0x1000;
      uVar2 = (short)__n + 3;
      *param_4 = __n + 7;
      param_2[1] = uVar2 * 0x100 | uVar2 >> 8;
      uVar2 = (short)__n + 1;
      *(char*)( param_2 + 3 ) = (char)__n;
      param_2[2] = uVar2 * 0x100 | uVar2 >> 8;
      memcpy((void*)( (long)param_2 + 7 ), *(void**)( param_1 + 0x1b8 ), __n);
      puVar1 = (uint*)( *(long*)( param_1 + 0x70 ) + 0x668 );
      *puVar1 = *puVar1 | 0x100;
   }

   return 0;
}
undefined8 mbedtls_ssl_session_set_hostname(long param_1, char *param_2) {
   char *pcVar1;
   size_t sVar2;
   size_t sVar3;
   void *pvVar4;
   if (param_2 == (char*)0x0) {
      pcVar1 = *(char**)( param_1 + 0xd8 );
      if (pcVar1 != (char*)0x0) {
         sVar2 = strlen(pcVar1);
         mbedtls_zeroize_and_free(pcVar1, sVar2);
      }

      *(undefined8*)( param_1 + 0xd8 ) = 0;
   }
 else {
      sVar2 = strlen(param_2);
      if (0xff < sVar2) {
         return 0xffff8f00;
      }

      pcVar1 = *(char**)( param_1 + 0xd8 );
      if (pcVar1 != (char*)0x0) {
         sVar3 = strlen(pcVar1);
         mbedtls_zeroize_and_free(pcVar1, sVar3);
      }

      pvVar4 = calloc(1, sVar2 + 1);
      *(void**)( param_1 + 0xd8 ) = pvVar4;
      if (pvVar4 == (void*)0x0) {
         return 0xffff8100;
      }

      __memcpy_chk(pvVar4, param_2, sVar2, sVar2 + 1);
   }

   return 0;
}
ulong mbedtls_ssl_session_copy(undefined8 *param_1, undefined8 *param_2) {
   size_t __size;
   uint uVar1;
   void *pvVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   byte bVar7;
   bVar7 = 0;
   if (param_1 != (undefined8*)0x0) {
      if (param_1[0xe] != 0) {
         mbedtls_x509_crt_free();
         free((void*)param_1[0xe]);
         param_1[0xe] = 0;
      }

      free((void*)param_1[0x1b]);
      free((void*)param_1[0x10]);
      mbedtls_platform_zeroize(param_1, 0x1f0);
   }

   lVar3 = (long)param_1 - (long)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   *param_1 = *param_2;
   param_1[0x3d] = param_2[0x3d];
   puVar5 = (undefined8*)( (long)param_2 - lVar3 );
   puVar6 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar4 = ( ulong )((int)lVar3 + 0x1f0U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
      puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
   }

   param_1[0x10] = 0;
   param_1[0x1b] = 0;
   if (param_2[0xe] == 0) {
      LAB_00107faa:if (param_2[0x10] != 0) {
         __size = param_2[0x11];
         pvVar2 = calloc(1, __size);
         param_1[0x10] = pvVar2;
         if (pvVar2 == (void*)0x0) goto LAB_00108042;
         __memcpy_chk(pvVar2, param_2[0x10], __size, __size);
      }

      uVar4 = 0;
      if (*(char*)( (long)param_2 + 2 ) == '\0') {
         uVar4 = mbedtls_ssl_session_set_hostname(param_1, param_2[0x1b]);
         return uVar4;
      }

   }
 else {
      pvVar2 = calloc(1, 0x2e8);
      param_1[0xe] = pvVar2;
      if (pvVar2 != (void*)0x0) {
         mbedtls_x509_crt_init(pvVar2);
         uVar1 = mbedtls_x509_crt_parse_der(param_1[0xe], *(undefined8*)( param_2[0xe] + 0x18 ), *(undefined8*)( param_2[0xe] + 0x10 ));
         if (uVar1 != 0) {
            free((void*)param_1[0xe]);
            param_1[0xe] = 0;
            return (ulong)uVar1;
         }

         goto LAB_00107faa;
      }

      LAB_00108042:uVar4 = 0xffff8100;
   }

   return uVar4;
}
undefined8 mbedtls_ssl_set_session(long *param_1, long param_2) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   if (param_1 == (long*)0x0) {
      return 0xffff8f00;
   }

   if (( ( param_2 == 0 ) || ( lVar3 = lVar3 == 0 ) ) || ( *(char*)( *param_1 + 8 ) != '\0' )) {
      LAB_00108118:uVar2 = 0xffff8f00;
   }
 else {
      if (*(char*)param_1[0xe] == '\x01') {
         return 0xffff8f80;
      }

      if (*(int*)( param_2 + 4 ) == 0x304) {
         uVar2 = mbedtls_ssl_ciphersuite_from_id(*(undefined4*)( param_2 + 0x10 ));
         iVar1 = mbedtls_ssl_validate_ciphersuite(param_1, uVar2, 0x304, 0x304);
         if (iVar1 != 0) {
            mbedtls_debug_print_msg(param_1, 4, "thirdparty/mbedtls/library/ssl_tls.c", 0x6df, "%d is not a valid TLS 1.3 ciphersuite.", *(undefined4*)( param_2 + 0x10 ));
            goto LAB_00108118;
         }

         lVar3 = param_1[0xd];
      }

      uVar2 = mbedtls_ssl_session_copy(lVar3, param_2);
      if ((int)uVar2 == 0) {
         *(undefined1*)param_1[0xe] = 1;
      }

   }

   return uVar2;
}
undefined8 mbedtls_ssl_get_session(long *param_1, long param_2) {
   undefined8 uVar1;
   if (( ( ( param_1 != (long*)0x0 ) && ( param_2 != 0 ) ) && ( param_1[0xc] != 0 ) ) && ( *(char*)( *param_1 + 8 ) == '\0' )) {
      if (*(char*)( param_1[0xc] + 1 ) != '\x01') {
         uVar1 = mbedtls_ssl_session_copy(param_2);
         if ((int)uVar1 == 0) {
            *(undefined1*)( param_1[0xc] + 1 ) = 1;
         }

         return uVar1;
      }

      return 0xffff8f80;
   }

   return 0xffff8f00;
}
int mbedtls_ssl_check_cert_usage(undefined8 param_1, long param_2, int param_3, int param_4, uint *param_5) {
   byte bVar1;
   int iVar2;
   int iVar3;
   undefined *puVar4;
   long lVar5;
   if (( param_4 == 0x303 ) && ( param_3 == 0 )) {
      bVar1 = *(byte*)( param_2 + 0x12 );
      if (bVar1 == 7) {
         LAB_00108260:lVar5 = 0x20;
      }
 else if (bVar1 < 8) {
         if (bVar1 == 1) goto LAB_00108260;
         lVar5 = ( ulong )(( byte )(bVar1 - 2) < 3) << 7;
      }
 else {
         lVar5 = 8;
         if (1 < ( byte )(bVar1 - 9)) {
            lVar5 = 0;
         }

      }

      iVar3 = 0;
      iVar2 = mbedtls_x509_crt_check_key_usage(param_1, lVar5);
      puVar4 = &_LC148;
      if (iVar2 == 0) goto LAB_0010823d;
      *param_5 = *param_5 | 0x800;
      iVar3 = -1;
   }
 else {
      iVar3 = mbedtls_x509_crt_check_key_usage(param_1, 0x80);
      if (iVar3 != 0) {
         *param_5 = *param_5 | 0x800;
         iVar3 = -1;
      }

      puVar4 = &_LC149;
      if (param_3 != 0) goto LAB_0010823d;
   }

   puVar4 = &_LC148;
   LAB_0010823d:iVar2 = mbedtls_x509_crt_check_extended_key_usage(param_1, puVar4, 8);
   if (iVar2 != 0) {
      *param_5 = *param_5 | 0x1000;
      iVar3 = -1;
   }

   return iVar3;
}
int mbedtls_ssl_verify_certificate_part_0(long *param_1, int param_2, long param_3, undefined8 param_4, undefined8 param_5) {
   uint *puVar1;
   undefined4 uVar2;
   long lVar3;
   code *pcVar4;
   int iVar5;
   int iVar6;
   undefined8 uVar7;
   long lVar8;
   undefined *puVar9;
   long lVar10;
   long lVar11;
   long in_FS_OFFSET;
   uint uVar12;
   undefined8 local_58;
   undefined4 *puStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1[4] == 0) {
      mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x26a0, "Use configuration-specific verification callback");
      puVar9 = (undefined*)param_1[0x36];
      lVar10 = *(long*)( *param_1 + 0x70 );
      lVar11 = *(long*)( *param_1 + 0x78 );
      if (puVar9 == (undefined*)0x0) goto LAB_001084ed;
      LAB_00108310:if (puVar9 == &_LC52) goto LAB_00108540;
   }
 else {
      mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x269c, "Use context-specific verification callback");
      puVar9 = (undefined*)param_1[0x36];
      lVar10 = param_1[4];
      lVar11 = param_1[5];
      if (puVar9 != (undefined*)0x0) goto LAB_00108310;
      LAB_001084ed:mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x267b, "Certificate verification without having set hostname", lVar10, lVar10, lVar11);
      if (( *(char*)( *param_1 + 8 ) == '\0' ) && ( *(char*)( *param_1 + 10 ) == '\x02' )) {
         iVar5 = -0x5d80;
         mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x26a8, "get_hostname_for_verification", 0xffffa280);
         goto LAB_0010843d;
      }

      puVar9 = (undefined*)param_1[0x36];
      if (puVar9 != (undefined*)0x0) goto LAB_00108310;
      LAB_00108540:mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x2686, "Certificate verification without CN verification", lVar10, lVar10, lVar11);
      puVar9 = (undefined*)0x0;
   }

   lVar3 = *param_1;
   lVar8 = *(long*)( param_1[0xe] + 0x418 );
   if (lVar8 == 0) {
      lVar8 = *(long*)( lVar3 + 0xd8 );
      uVar7 = *(undefined8*)( lVar3 + 0xe0 );
      uVar12 = ( uint )(lVar8 != 0);
   }
 else {
      uVar12 = 1;
      uVar7 = *(undefined8*)( param_1[0xe] + 0x420 );
   }

   iVar5 = mbedtls_x509_crt_verify_restartable(param_3, lVar8, uVar7, *(undefined8*)( lVar3 + 200 ), puVar9, param_1[0xd] + 0x78, lVar10, lVar11, param_5);
   if (iVar5 == 0) {
      iVar6 = *(int*)( (long)param_1 + 0x14 );
      if (iVar6 != 0x303) goto LAB_00108383;
      LAB_001085af:iVar6 = mbedtls_pk_can_do(param_3 + 0x168, 2);
      if (iVar6 == 0) {
         LAB_001085c8:iVar6 = *(int*)( (long)param_1 + 0x14 );
         goto LAB_00108383;
      }

      local_58 = *(undefined8*)( param_3 + 0x168 );
      puStack_50 = *(undefined4**)( param_3 + 0x170 );
      iVar6 = mbedtls_pk_get_type(&local_58);
      if (2 < iVar6 - 2U) {
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      iVar6 = mbedtls_ssl_check_curve(param_1, *puStack_50);
      if (iVar6 == 0) goto LAB_001085c8;
      mbedtls_debug_print_msg();
      lVar10 = param_1[0xd];
      uVar2 = *(undefined4*)( (long)param_1 + 0x14 );
      puVar1 = (uint*)( lVar10 + 0x78 );
      *puVar1 = *puVar1 | 0x10000;
      if (iVar5 == 0) {
         iVar5 = -0x7a00;
      }

      iVar6 = mbedtls_ssl_check_cert_usage(param_3, param_4, *(undefined1*)( *param_1 + 8 ), uVar2, lVar10 + 0x78);
      if (iVar6 != 0) {
         mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x2701, "bad certificate (usage extensions)");
         goto LAB_001086b0;
      }

      if (param_2 != 1) {
         if (( param_2 != 2 ) || ( uVar12 != 0 )) goto LAB_001083e7;
         goto LAB_001083c4;
      }

      LAB_001087b0:if (( iVar5 != -0x7a00 ) && ( iVar5 != -0x2700 )) goto LAB_001083e7;
      LAB_00108482:iVar5 = 0;
      iVar6 = *(int*)( param_1[0xd] + 0x78 );
   }
 else {
      mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x26d9, "x509_verify_cert", iVar5);
      iVar6 = *(int*)( (long)param_1 + 0x14 );
      if (iVar6 == 0x303) goto LAB_001085af;
      LAB_00108383:iVar6 = mbedtls_ssl_check_cert_usage(param_3, param_4, *(undefined1*)( *param_1 + 8 ), iVar6, param_1[0xd] + 0x78);
      if (iVar6 == 0) {
         if (param_2 == 1) {
            if (( iVar5 == -0x2700 ) || ( iVar5 == -0x7a00 )) goto LAB_00108482;
         }
 else if (( uVar12 == 0 ) && ( param_2 == 2 )) goto LAB_001083c4;
         if (iVar5 == 0) goto LAB_00108482;
      }
 else {
         mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x2701, "bad certificate (usage extensions)");
         if (iVar5 == 0) {
            if (param_2 == 1) goto LAB_00108482;
            if (( uVar12 == 0 ) && ( param_2 == 2 )) goto LAB_001083c4;
            iVar5 = -0x7a00;
         }
 else {
            LAB_001086b0:if (param_2 == 1) goto LAB_001087b0;
            if (( uVar12 == 0 ) && ( param_2 == 2 )) {
               LAB_001083c4:iVar5 = -0x7680;
               mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x2718, "got no CA chain");
            }

         }

      }

      LAB_001083e7:iVar6 = 0x31;
      uVar12 = *(uint*)( param_1[0xd] + 0x78 );
      if (( ( ( uVar12 & 0x100 ) == 0 ) && ( ( ( iVar6 = 0x2a(uVar12 & 4) == 0 && ( iVar6 = 0x2b(uVar12 & 0x19800) == 0 ) ) && ( iVar6 = 0x2d(uVar12 & 1) == 0 ) ) ) ) && ( iVar6 = 0x2c(uVar12 & 2) == 0 )) {
         iVar6 = ( -(uint)((uVar12 & 8) == 0) & 0xfffffffe ) + 0x30;
      }

      mbedtls_ssl_send_alert_message(param_1, 2, iVar6);
      iVar6 = *(int*)( param_1[0xd] + 0x78 );
   }

   if (iVar6 == 0) {
      mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x2740, "Certificate verification flags clear");
   }
 else {
      mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x273d, "! Certificate verification flags %08x");
   }

   LAB_0010843d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_ssl_parse_certificate(long *param_1) {
   ulong uVar1;
   char cVar2;
   byte bVar3;
   long lVar4;
   ushort uVar5;
   int iVar6;
   short *psVar7;
   void *__ptr;
   ulong uVar8;
   undefined8 uVar9;
   int iVar10;
   long lVar11;
   char *pcVar12;
   ulong uVar13;
   ulong uVar14;
   bool bVar15;
   cVar2 = *(char*)( param_1[0xe] + 2 );
   if (cVar2 == '\x03') {
      cVar2 = *(char*)( *param_1 + 10 );
   }

   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", 0x1f54, "=> parse certificate");
   bVar3 = *(byte*)( *(long*)( param_1[0xe] + 0x10 ) + 0x12 );
   if (( bVar3 < 0xb ) && ( ( 0x69eUL >> ( (ulong)bVar3 & 0x3f ) & 1 ) != 0 )) {
      if (*(char*)( *param_1 + 8 ) == '\x01') {
         if (bVar3 != 7) {
            if (cVar2 != '\0') goto LAB_00108862;
            *(undefined4*)( param_1[0xd] + 0x78 ) = 0x80;
         }

         goto LAB_00108a60;
      }

      LAB_00108862:iVar6 = mbedtls_ssl_read_record(param_1, 1);
      if (iVar6 != 0) {
         mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1f68, "mbedtls_ssl_read_record", iVar6);
         return iVar6;
      }

      if (( ( ( ( *(char*)( *param_1 + 8 ) != '\0' ) && ( bVar15 = *(char*)( *param_1 + 9 ) == '\x01' ),(ulong)bVar15 * 8 + 7 == param_1[0x26] ) ) && ( (int)param_1[0x1f] == 0x16 ) ) && ( ( *(char*)param_1[0x1d] == '\v' && ( psVar7 = (short*)( (char*)param_1[0x1d] + (ulong)bVar15 * 8 + 4 ) * psVar7 == 0 ) ) )) {
         mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1ee4, "peer has no certificate");
         *(undefined4*)( param_1[0xd] + 0x78 ) = 0x40;
         if (cVar2 != '\x01') {
            return -0x7480;
         }

         goto LAB_00108a7e;
      }

      lVar11 = param_1[0xd];
      if (*(long*)( lVar11 + 0x70 ) != 0) {
         mbedtls_x509_crt_free();
         free(*(void**)( lVar11 + 0x70 ));
         *(undefined8*)( lVar11 + 0x70 ) = 0;
      }

      __ptr = calloc(1, 0x2e8);
      if (__ptr == (void*)0x0) {
         mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1f7e, "alloc(%zu bytes) failed", 0x2e8);
         mbedtls_ssl_send_alert_message(param_1, 2, 0x50);
         return -0x7f00;
      }

      mbedtls_x509_crt_init(__ptr);
      if ((int)param_1[0x1f] != 0x16) {
         mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1e54, "bad certificate message");
         LAB_00108d50:iVar6 = -0x7700;
         mbedtls_ssl_send_alert_message(param_1, 2, 10);
         LAB_00108b94:mbedtls_x509_crt_free(__ptr);
         free(__ptr);
         return iVar6;
      }

      pcVar12 = (char*)param_1[0x1d];
      if (*pcVar12 != '\v') goto LAB_00108d50;
      uVar8 = param_1[0x26];
      bVar15 = *(char*)( *param_1 + 9 ) == '\x01';
      lVar11 = (ulong)bVar15 * 8;
      if (uVar8 < (ulong)bVar15 * 8 + 10) {
         uVar9 = 0x1e61;
         LAB_00108cae:mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", uVar9, "bad certificate message");
         mbedtls_ssl_send_alert_message(param_1, 2, 0x32);
         iVar6 = -0x7300;
         goto LAB_00108b94;
      }

      if (pcVar12[lVar11 + 4] != '\0') {
         LAB_00108cdc:uVar9 = 0x1e70;
         goto LAB_00108cae;
      }

      uVar13 = lVar11 + 7;
      iVar10 = 0;
      if (uVar8 != ( ushort )(*(ushort*)( pcVar12 + lVar11 + 5 ) << 8 | *(ushort*)( pcVar12 + lVar11 + 5 ) >> 8) + uVar13) goto LAB_00108cdc;
      while (uVar13 < uVar8) {
         uVar1 = uVar13 + 3;
         if (uVar8 < uVar1) {
            uVar9 = 0x1e7d;
            goto LAB_00108cae;
         }

         lVar11 = param_1[0x1d];
         if (*(char*)( lVar11 + uVar13 ) != '\0') {
            mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1e86, "bad certificate message");
            mbedtls_ssl_send_alert_message(param_1, 2, 0x2b);
            LAB_00108d28:iVar6 = -0x7a00;
            goto LAB_00108b94;
         }

         uVar5 = *(ushort*)( lVar11 + 1 + uVar13 );
         uVar5 = uVar5 << 8 | uVar5 >> 8;
         uVar14 = (ulong)uVar5;
         if (( uVar5 < 0x80 ) || ( uVar13 = uVar8 < uVar13 )) {
            uVar9 = 0x1e92;
            goto LAB_00108cae;
         }

         if (( ( iVar10 == 0 ) && ( *(char*)( *param_1 + 8 ) == '\0' ) ) && ( *(int*)( (long)param_1 + 0xc ) == 1 )) {
            mbedtls_debug_print_msg(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x1ea2, "Check that peer CRT hasn\'t changed during renegotiation");
            lVar4 = param_1[0xc];
            lVar11 = *(long*)( lVar4 + 0x70 );
            if (( ( lVar11 == 0 ) || ( uVar14 != *(size_t*)( lVar11 + 0x10 ) ) ) || ( iVar6 = memcmp(*(void**)( lVar11 + 0x18 ), (void*)( uVar1 + param_1[0x1d] ), *(size_t*)( lVar11 + 0x10 )) ),iVar6 != 0) {
               mbedtls_debug_print_msg(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1ea6, "new server cert during renegotiation");
               mbedtls_ssl_send_alert_message(param_1, 2, 0x31);
               goto LAB_00108d28;
            }

            mbedtls_x509_crt_free(lVar11);
            free(*(void**)( lVar4 + 0x70 ));
            lVar11 = param_1[0x1d];
            *(undefined8*)( lVar4 + 0x70 ) = 0;
         }

         iVar6 = mbedtls_x509_crt_parse_der(__ptr, lVar11 + uVar1, uVar14);
         if (iVar6 == -0x2580) {
            uVar9 = 0x2b;
            LAB_00108b65:mbedtls_ssl_send_alert_message(param_1, 2, uVar9);
            mbedtls_debug_print_ret(param_1, 1, "thirdparty/mbedtls/library/ssl_tls.c", 0x1ecd, " mbedtls_x509_crt_parse_der", iVar6);
            goto LAB_00108b94;
         }

         if (iVar6 < -0x257f) {
            if (iVar6 == -0x2880) {
               uVar9 = 0x50;
               goto LAB_00108b65;
            }

            if (iVar6 != -0x262e) goto LAB_00108a36;
         }
 else if (iVar6 != 0) {
            LAB_00108a36:uVar9 = 0x2a;
            goto LAB_00108b65;
         }

         iVar10 = iVar10 + 1;
         uVar8 = param_1[0x26];
      }
;
      mbedtls_debug_print_crt(param_1, 3, "thirdparty/mbedtls/library/ssl_tls.c", 0x1ed4, "peer certificate", __ptr);
      if (( cVar2 != '\0' ) && ( iVar6 = mbedtls_ssl_verify_certificate_part_0(param_1, cVar2, __ptr, *(undefined8*)( param_1[0xe] + 0x10 ), 0) ),iVar6 != 0) goto LAB_00108b94;
      pcVar12 = "<= parse certificate";
      uVar9 = 0x1fc6;
      *(void**)( param_1[0xd] + 0x70 ) = __ptr;
   }
 else {
      LAB_00108a60:pcVar12 = "<= skip parse certificate";
      uVar9 = 0x1f58;
   }

   mbedtls_debug_print_msg(param_1, 2, "thirdparty/mbedtls/library/ssl_tls.c", uVar9, pcVar12);
   LAB_00108a7e:*(int*)( param_1 + 1 ) = (int)param_1[1] + 1;
   return 0;
}
undefined8 mbedtls_ssl_verify_certificate(undefined8 param_1, int param_2) {
   undefined8 uVar1;
   if (param_2 != 0) {
      uVar1 = mbedtls_ssl_verify_certificate_part_0();
      return uVar1;
   }

   return 0;
}
void mbedtls_ssl_verify_certificate_part_0_cold(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}


int unwrap_constprop_0(undefined8 param_1, undefined8 *param_2, ulong param_3, byte *param_4, undefined8 *param_5, size_t *param_6) {
   size_t __n;
   byte *pbVar1;
   undefined8 *puVar2;
   byte bVar3;
   int iVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   undefined8 *local_a0;
   undefined1 local_70[8];
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_6 = 0;
   if (param_3 < 3) {
      iVar4 = -0x6100;
   }
 else {
      uVar5 = param_3 * 6 - 6;
      __n = param_3 * 8 - 8;
      *(undefined8*)param_4 = *param_2;
      memmove(param_5, param_2 + 1, __n);
      if (uVar5 != 0) {
         puVar2 = param_5 + ( param_3 - 2 );
         do {
            iVar4 = 0x38;
            pbVar1 = param_4;
            do {
               bVar3 = (byte)iVar4;
               iVar4 = iVar4 + -8;
               *pbVar1 = *pbVar1 ^ ( byte )(uVar5 >> ( bVar3 & 0x3f ));
               pbVar1 = pbVar1 + 1;
            }
 while ( iVar4 != -8 );
            local_58 = *(undefined8*)param_4;
            uStack_50 = *puVar2;
            iVar4 = mbedtls_cipher_update(param_1, &local_58, 0x10, &local_68, local_70);
            if (iVar4 != 0) {
               memset(param_5, 0, __n);
               goto LAB_00100125;
            }

            bVar6 = param_5 == puVar2;
            *(undefined8*)param_4 = local_68;
            *puVar2 = local_60;
            puVar2 = puVar2 + -1;
            if (bVar6) {
               puVar2 = param_5 + ( param_3 - 2 );
            }

            uVar5 = uVar5 - 1;
         }
 while ( uVar5 != 0 );
      }

      iVar4 = 0;
      *param_6 = __n;
      LAB_00100125:local_a0 = &local_68;
      mbedtls_platform_zeroize(&local_58, 0x10);
      mbedtls_platform_zeroize(local_a0, 0x10);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar4;
}
void mbedtls_nist_kw_init(undefined8 *param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   *param_1 = 0;
   param_1[0xb] = 0;
   puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x60U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
   }

   return;
}
undefined8 mbedtls_nist_kw_setkey(undefined8 param_1, int param_2, undefined8 param_3, undefined4 param_4, int param_5) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = mbedtls_cipher_info_from_values(param_2, param_4, 1);
   if (( lVar1 == 0 ) || ( ( *(byte*)( lVar1 + 8 ) & 0x1f ) != 0x10 )) {
      uVar2 = 0xffff9f00;
   }
 else if (param_2 == 2) {
      mbedtls_cipher_free(param_1);
      uVar2 = mbedtls_cipher_setup(param_1, lVar1);
      if ((int)uVar2 == 0) {
         uVar2 = mbedtls_cipher_setkey(param_1, param_3, param_4, param_5 != 0);
         return uVar2;
      }

   }
 else {
      uVar2 = 0xffff9f80;
   }

   return uVar2;
}
void mbedtls_nist_kw_free(long param_1) {
   if (param_1 != 0) {
      mbedtls_cipher_free();
      mbedtls_platform_zeroize(param_1, 0x60);
      return;
   }

   return;
}
int mbedtls_nist_kw_wrap(undefined8 param_1, int param_2, void *param_3, ulong param_4, byte *param_5, size_t *param_6, ulong param_7) {
   ulong uVar1;
   int iVar2;
   uint uVar3;
   byte *pbVar4;
   byte *pbVar5;
   byte bVar6;
   ulong uVar7;
   size_t __n;
   ulong uVar8;
   byte *pbVar9;
   long in_FS_OFFSET;
   undefined1 local_70[8];
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   uVar1 = param_4 + 8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_6 = 0;
   if (param_2 == 0) {
      if (( ( param_7 < uVar1 ) || ( 0x1ffffffffffffe8 < param_4 - 0x10 ) ) || ( ( param_4 & 7 ) != 0 )) {
         LAB_00100593:iVar2 = -0x6100;
         goto LAB_0010052d;
      }

      for (int i = 0; i < 8; i++) {
         param_5[i] = 166;
      }

      pbVar4 = (byte*)memmove(param_5 + 8, param_3, param_4);
      uVar1 = ( param_4 >> 3 ) + 1;
      __n = uVar1 * 8;
      LAB_0010035e:uVar8 = 1;
      pbVar9 = pbVar4;
      do {
         local_58 = *(undefined8*)param_5;
         uStack_50 = *(undefined8*)pbVar9;
         iVar2 = mbedtls_cipher_update(param_1, &local_58, 0x10, &local_68, local_70);
         if (iVar2 != 0) {
            memset(param_5, 0, __n);
            goto LAB_00100513;
         }

         iVar2 = 0x38;
         *(undefined8*)param_5 = local_68;
         pbVar5 = param_5;
         do {
            bVar6 = (byte)iVar2;
            iVar2 = iVar2 + -8;
            *pbVar5 = *pbVar5 ^ ( byte )(uVar8 >> ( bVar6 & 0x3f ));
            pbVar5 = pbVar5 + 1;
         }
 while ( iVar2 != -8 );
         pbVar5 = pbVar9 + 8;
         *(undefined8*)pbVar9 = local_60;
         pbVar9 = pbVar5;
         if (param_5 + __n <= pbVar5) {
            pbVar9 = pbVar4;
         }

         uVar8 = uVar8 + 1;
      }
 while ( uVar8 <= uVar1 * 6 - 6 );
      LAB_00100508:iVar2 = 0;
      *param_6 = __n;
   }
 else {
      uVar3 = (uint)param_4;
      uVar8 = ( ulong )(uVar3 & 7);
      if (uVar8 != 0) {
         uVar8 = 8 - uVar8;
      }

      if (( param_7 < uVar8 + uVar1 ) || ( 0xfffffffe < param_4 - 1 )) goto LAB_00100593;
      param_5[0] = 0xa6;
      param_5[1] = 0x59;
      param_5[2] = 0x59;
      param_5[3] = 0xa6;
      *(uint*)( param_5 + 4 ) = uVar3 >> 0x18 | ( uVar3 & 0xff0000 ) >> 8 | ( uVar3 & 0xff00 ) << 8 | uVar3 << 0x18;
      pbVar4 = (byte*)memcpy(param_5 + 8, param_3, param_4);
      if ((uint)uVar8 != 0) {
         uVar3 = 0;
         do {
            uVar7 = (ulong)uVar3;
            uVar3 = uVar3 + 1;
            param_5[uVar7 + uVar1] = 0;
         }
 while ( uVar3 < (uint)uVar8 );
      }

      uVar1 = ( uVar8 + param_4 >> 3 ) + 1;
      __n = uVar1 * 8;
      if (( param_2 == 1 ) && ( param_4 < 9 )) {
         local_58 = *(undefined8*)param_5;
         uStack_50 = *(undefined8*)( param_5 + 8 );
         iVar2 = mbedtls_cipher_update(param_1, &local_58, 0x10, param_5, local_70);
         if (iVar2 == 0) goto LAB_00100508;
      }
 else {
         if (2 < uVar1) goto LAB_0010035e;
         iVar2 = -0x6100;
      }

      memset(param_5, 0, __n);
   }

   LAB_00100513:mbedtls_platform_zeroize(&local_58, 0x10);
   mbedtls_platform_zeroize(&local_68, 0x10);
   LAB_0010052d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
int mbedtls_nist_kw_unwrap(undefined8 param_1, int param_2, undefined8 param_3, ulong param_4, undefined8 *param_5, size_t *param_6, ulong param_7) {
   int iVar1;
   size_t __n;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   undefined8 *local_80;
   int local_6c[3];
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_6 = 0;
   if (param_7 < param_4 - 8) {
      LAB_00100880:iVar1 = -0x6100;
   }
 else {
      if (param_2 == 0) {
         if (( 0x1ffffffffffffe8 < param_4 - 0x18 ) || ( ( param_4 & 7 ) != 0 )) goto LAB_00100880;
         iVar1 = unwrap_constprop_0(param_1, param_3, param_4 >> 3, &local_60);
         if (iVar1 != 0) {
            LAB_00100778:__n = *param_6;
            goto LAB_0010077b;
         }

         local_6c[0] = mbedtls_ct_memcmp(&NIST_KW_ICV1, &local_60, 8);
         if (local_6c[0] != 0) {
            LAB_00100810:__n = *param_6;
            iVar1 = -0x6300;
            goto LAB_0010077b;
         }

         LAB_00100659:iVar1 = 0;
      }
 else {
         if (param_2 == 1) {
            if (( param_4 - 0x10 < 0xfffffff1 ) && ( uVar2 = (uint)param_4 & 7(param_4 & 7) == 0 )) {
               if (param_4 == 0x10) {
                  iVar1 = mbedtls_cipher_update();
                  if (iVar1 != 0) {
                     __n = *param_6;
                     goto LAB_0010077b;
                  }

                  local_60 = local_58;
                  *param_5 = local_50;
                  mbedtls_platform_zeroize(&local_58, 0x10);
                  *param_6 = 8;
               }
 else {
                  iVar1 = unwrap_constprop_0(param_1, param_3, param_4 >> 3, &local_60);
                  if (iVar1 != 0) goto LAB_00100778;
               }

               local_80 = &local_58;
               local_6c[0] = mbedtls_ct_memcmp(&NIST_KW_ICV2, &local_60, 4);
               uVar5 = ( ulong )(local_60._4_4_ >> 0x18 | ( local_60._4_4_ & 0xff0000 ) >> 8 | ( local_60._4_4_ & 0xff00 ) << 8 | local_60._4_4_ << 0x18);
               if (local_6c[0] != 0) {
                  uVar2 = 0x6300;
               }

               uVar4 = ( param_4 - 8 ) - uVar5;
               uVar3 = ( uint )(uVar4 >> 0x20);
               uVar3 = (int)( ( uint )(7 - uVar4 >> 0x20) & ~uVar3 | uVar3 ) >> 0x1f;
               uVar2 = uVar2 & ~uVar3 | uVar3 & 0x6300;
               uVar3 = (uint)uVar4 & 7;
               local_58 = 0;
               local_6c[0] = mbedtls_ct_memcmp_partial((long)param_5 + ( *param_6 - 8 ), local_80, 8, 8 - (ulong)uVar3, 0);
               if (local_6c[0] != 0) goto LAB_00100810;
               if (uVar2 == 0) {
                  if (( uVar4 & 7 ) != 0) {
                     uVar2 = 0;
                     do {
                        uVar4 = (ulong)uVar2;
                        uVar2 = uVar2 + 1;
                        *(undefined1*)( (long)param_5 + uVar4 + uVar5 ) = 0;
                     }
 while ( uVar2 < uVar3 );
                  }

                  *param_6 = uVar5;
                  goto LAB_00100659;
               }

               iVar1 = -uVar2;
               goto LAB_00100778;
            }

            goto LAB_00100880;
         }

         __n = 0;
         iVar1 = -0x6080;
         LAB_0010077b:memset(param_5, 0, __n);
         *param_6 = 0;
      }

      mbedtls_platform_zeroize(local_6c, 4);
      mbedtls_platform_zeroize(&local_60, 8);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int mbedtls_nist_kw_self_test(int param_1) {
   size_t sVar1;
   size_t sVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   undefined8 *puVar6;
   long in_FS_OFFSET;
   int local_100;
   size_t local_e0;
   undefined8 local_d8[12];
   undefined1 local_78[56];
   long local_40;
   local_100 = 0x80;
   lVar5 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar6 = local_d8;
   for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
   }

   lVar4 = lVar5;
   if (param_1 != 0) goto LAB_00100a5b;
   while (true) {
      iVar3 = mbedtls_nist_kw_setkey(local_d8, 2, kw_key + lVar4 * 8, local_100, 1);
      if (iVar3 != 0) break;
      sVar1 = *(size_t*)( (long)&kw_msg_len + lVar4 * 2 );
      iVar3 = mbedtls_nist_kw_wrap(local_d8, 0, kw_msg + lVar4 * 10, sVar1, local_78, &local_e0, 0x30);
      if (( ( iVar3 != 0 ) || ( sVar2 = *(size_t*)( (long)&kw_out_len + lVar4 * 2 ) ),sVar2 != local_e0 )) goto LAB_00100c40;
      iVar3 = mbedtls_nist_kw_setkey(local_d8, 2, kw_key + lVar4 * 8, local_100, 0);
      if (iVar3 != 0) break;
      iVar3 = mbedtls_nist_kw_unwrap(local_d8, 0, local_78, sVar2, local_78, &local_e0, 0x30);
      if (( ( iVar3 != 0 ) || ( sVar1 != local_e0 ) ) || ( iVar3 = iVar3 != 0 )) {
         if (param_1 == 0) goto LAB_00100c48;
         puts("failed");
         goto LAB_00100cc3;
      }

      if (param_1 == 0) {
         if (lVar4 + 4 == 0xc) {
            LAB_00100a86:local_100 = 0x80;
            lVar4 = 0;
            goto LAB_00100a9c;
         }

         local_100 = *(int*)( key_len + lVar4 + 4 ) * 8;
         lVar4 = lVar4 + 4;
      }
 else {
         lVar5 = lVar4 + 4;
         puts(" passed");
         if (lVar5 == 0xc) {
            if (param_1 != 0) {
               local_100 = 0x80;
               lVar4 = 0;
               goto LAB_00100c23;
            }

            goto LAB_00100a86;
         }

         local_100 = *(int*)( key_len + lVar4 + 4 ) << 3;
         LAB_00100a5b:__printf_chk(2, "  KW-AES-%u ", local_100);
         lVar4 = lVar5;
      }

   }
;
   if (param_1 == 0) goto LAB_00100d65;
   __printf_chk(2, "  KW: setup failed ");
   goto LAB_00100d1b;
   LAB_00100c40:if (param_1 == 0) {
      LAB_00100c48:mbedtls_cipher_free(local_d8);
      mbedtls_platform_zeroize(local_d8, 0x60);
      iVar3 = 1;
      goto LAB_00100c62;
   }

   __printf_chk(2, "failed. ");
   LAB_00100cc3:mbedtls_cipher_free(local_d8);
   mbedtls_platform_zeroize(local_d8, 0x60);
   iVar3 = 1;
   goto LAB_00100cdd;
   LAB_00100a9c:iVar3 = mbedtls_nist_kw_setkey(local_d8, 2, kwp_key + lVar4 * 0x20, local_100, 1);
   if (iVar3 == 0) {
      sVar1 = ( &kwp_msg_len )[lVar4];
      iVar3 = mbedtls_nist_kw_wrap(local_d8, 1, kwp_msg + lVar4 * 0x1f, sVar1, local_78, &local_e0, 0x30);
      if (( ( iVar3 != 0 ) || ( sVar2 = sVar2 != local_e0 ) ) || ( iVar3 = iVar3 != 0 )) goto LAB_00100c40;
      iVar3 = mbedtls_nist_kw_setkey(local_d8, 2, kwp_key + lVar4 * 0x20, local_100, 0);
      if (iVar3 != 0) goto LAB_00100d88;
      iVar3 = mbedtls_nist_kw_unwrap(local_d8, 1, local_78, sVar2, local_78, &local_e0, 0x30);
      if (( ( iVar3 != 0 ) || ( sVar1 != local_e0 ) ) || ( iVar3 = iVar3 != 0 )) goto LAB_00100c40;
      if (param_1 == 0) {
         lVar4 = lVar4 + 1;
         if (lVar4 == 3) {
            mbedtls_cipher_free(local_d8);
            mbedtls_platform_zeroize(local_d8, 0x60);
            iVar3 = 0;
            goto LAB_00100c62;
         }

         local_100 = *(int*)( key_len + lVar4 * 4 ) << 3;
      }
 else {
         lVar4 = lVar4 + 1;
         puts(" passed");
         if (lVar4 == 3) {
            iVar3 = 0;
            goto LAB_00100d1b;
         }

         local_100 = *(int*)( key_len + lVar4 * 4 ) << 3;
         LAB_00100c23:__printf_chk(2, "  KWP-AES-%u ", local_100);
      }

      goto LAB_00100a9c;
   }

   LAB_00100d88:if (param_1 == 0) {
      LAB_00100d65:mbedtls_cipher_free(local_d8);
      mbedtls_platform_zeroize(local_d8, 0x60);
      goto LAB_00100c62;
   }

   __printf_chk(2, "  KWP: setup failed ");
   LAB_00100d1b:mbedtls_cipher_free(local_d8);
   mbedtls_platform_zeroize(local_d8, 0x60);
   LAB_00100cdd:putchar(10);
   LAB_00100c62:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar3;
}


undefined1 *krb5kdf_settable_ctx_params(void) {
   return known_settable_ctx_params_2;
}
undefined1 *krb5kdf_gettable_ctx_params(void) {
   return known_gettable_ctx_params_3;
}
undefined8 krb5kdf_get_ctx_params(long param_1, undefined8 param_2) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   lVar4 = 0x40;
   lVar2 = ossl_prov_cipher_cipher(param_1 + 8);
   if (lVar2 != 0) {
      iVar1 = EVP_CIPHER_get_key_length(lVar2);
      lVar4 = (long)iVar1;
   }

   lVar2 = OSSL_PARAM_locate(param_2, &_LC0);
   if (lVar2 != 0) {
      uVar3 = OSSL_PARAM_set_size_t(lVar2, lVar4);
      return uVar3;
   }

   return 0xfffffffe;
}
void krb5kdf_reset(undefined8 *param_1) {
   undefined8 uVar1;
   uVar1 = *param_1;
   ossl_prov_cipher_reset(param_1 + 1);
   CRYPTO_clear_free(param_1[4], param_1[5], "providers/implementations/kdfs/krb5kdf.c", 0x59);
   CRYPTO_clear_free(param_1[6], param_1[7], "providers/implementations/kdfs/krb5kdf.c", 0x5a);
   param_1[7] = 0;
   *param_1 = uVar1;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( param_1 + ( 2*i + 1 ) ) = (undefined1[16])0;
   }

   return;
}
undefined8 *krb5kdf_new(undefined8 param_1) {
   int iVar1;
   undefined8 *puVar2;
   iVar1 = ossl_prov_is_running();
   puVar2 = (undefined8*)0x0;
   if (iVar1 != 0) {
      puVar2 = (undefined8*)CRYPTO_zalloc(0x40, "providers/implementations/kdfs/krb5kdf.c", 0x43);
      if (puVar2 != (undefined8*)0x0) {
         *puVar2 = param_1;
      }

   }

   return puVar2;
}
bool krb5kdf_set_ctx_params(undefined8 *param_1, long *param_2) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
   if (( param_2 != (long*)0x0 ) && ( *param_2 != 0 )) {
      iVar1 = ossl_prov_cipher_load_from_params(param_1 + 1, param_2, uVar2);
      if (iVar1 == 0) {
         return false;
      }

      lVar3 = OSSL_PARAM_locate_const(param_2, &_LC2);
      if (lVar3 != 0) {
         CRYPTO_clear_free(param_1[4], param_1[5], "providers/implementations/kdfs/krb5kdf.c", 0x62);
         param_1[4] = 0;
         param_1[5] = 0;
         iVar1 = OSSL_PARAM_get_octet_string(lVar3, param_1 + 4, 0, param_1 + 5);
         if (iVar1 == 0) {
            return false;
         }

      }

      lVar3 = OSSL_PARAM_locate_const(param_2, "constant");
      if (lVar3 != 0) {
         CRYPTO_clear_free(param_1[6], param_1[7], "providers/implementations/kdfs/krb5kdf.c", 0x62);
         param_1[6] = 0;
         param_1[7] = 0;
         iVar1 = OSSL_PARAM_get_octet_string(lVar3, param_1 + 6, 0, param_1 + 7);
         return iVar1 != 0;
      }

   }

   return true;
}
void krb5kdf_free(undefined8 *param_1) {
   undefined8 uVar1;
   if (param_1 != (undefined8*)0x0) {
      uVar1 = *param_1;
      ossl_prov_cipher_reset(param_1 + 1);
      CRYPTO_clear_free(param_1[4], param_1[5], "providers/implementations/kdfs/krb5kdf.c", 0x59);
      CRYPTO_clear_free(param_1[6], param_1[7], "providers/implementations/kdfs/krb5kdf.c", 0x5a);
      *param_1 = uVar1;
      param_1[7] = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( param_1 + ( 2*i + 1 ) ) = (undefined1[16])0;
      }

      CRYPTO_free(param_1);
      return;
   }

   return;
}
undefined4 krb5kdf_derive(long param_1, DES_cblock *param_2, ulong param_3, undefined8 param_4) {
   uchar *__dest;
   ulong uVar1;
   long lVar2;
   byte bVar3;
   int iVar4;
   undefined4 uVar5;
   uint inl;
   uint uVar6;
   EVP_CIPHER *cipher;
   ENGINE *impl;
   EVP_CIPHER_CTX *ctx;
   ulong uVar7;
   int iVar8;
   byte *pbVar9;
   byte *pbVar10;
   undefined8 uVar11;
   uint uVar12;
   ulong uVar13;
   DES_cblock *key;
   uint uVar14;
   ulong uVar15;
   byte *out;
   ulong uVar16;
   uchar *puVar17;
   long in_FS_OFFSET;
   bool bVar18;
   ulong local_d8;
   int local_b8;
   byte *local_b0;
   int local_8c;
   byte local_88[32];
   byte local_68[40];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = ossl_prov_is_running();
   if (( iVar4 != 0 ) && ( iVar4 = iVar4 != 0 )) {
      cipher = (EVP_CIPHER*)ossl_prov_cipher_cipher(param_1 + 8);
      if (cipher == (EVP_CIPHER*)0x0) {
         ERR_new();
         ERR_set_debug("providers/implementations/kdfs/krb5kdf.c", 0x89, "krb5kdf_derive");
         ERR_set_error(0x39, 0x9b, 0);
      }
 else if (*(long*)( param_1 + 0x20 ) == 0) {
         ERR_new();
         ERR_set_debug("providers/implementations/kdfs/krb5kdf.c", 0x8d, "krb5kdf_derive");
         ERR_set_error(0x39, 0x80, 0);
      }
 else if (*(long*)( param_1 + 0x30 ) == 0) {
         ERR_new();
         ERR_set_debug("providers/implementations/kdfs/krb5kdf.c", 0x91, "krb5kdf_derive");
         ERR_set_error(0x39, 0x9c, 0);
      }
 else {
         impl = (ENGINE*)ossl_prov_cipher_engine(param_1 + 8);
         uVar1 = *(ulong*)( param_1 + 0x28 );
         puVar17 = *(uchar**)( param_1 + 0x20 );
         uVar13 = *(ulong*)( param_1 + 0x38 );
         lVar2 = *(long*)( param_1 + 0x30 );
         if (uVar1 == param_3) {
            bVar18 = true;
         }
 else {
            iVar4 = EVP_CIPHER_get_nid(cipher);
            if (( ( iVar4 != 0x2c ) || ( uVar1 != 0x18 ) ) || ( bVar18 = param_3 != 0x15 )) {
               ERR_new();
               ERR_set_debug("providers/implementations/kdfs/krb5kdf.c", 0x191, "KRB5KDF");
               ERR_set_error(0x39, 0x8b, 0);
               goto LAB_0010032d;
            }

         }

         ctx = EVP_CIPHER_CTX_new();
         if (ctx != (EVP_CIPHER_CTX*)0x0) {
            iVar4 = EVP_EncryptInit_ex(ctx, cipher, impl, puVar17, (uchar*)0x0);
            if (iVar4 == 0) {
               LAB_0010042f:uVar5 = 0;
            }
 else {
               iVar4 = EVP_CIPHER_CTX_get_key_length(ctx);
               local_b8 = (int)uVar1;
               if (( ( uVar1 != (long)iVar4 ) && ( iVar4 = EVP_CIPHER_CTX_set_key_length(ctx, local_b8) ),iVar4 < 1 )) goto LAB_0010042f;
               inl = EVP_CIPHER_CTX_get_block_size(ctx);
               if ((long)(int)inl == 0) {
                  ERR_new();
                  ERR_set_debug("providers/implementations/kdfs/krb5kdf.c", 0x1a4, "KRB5KDF");
                  uVar11 = 0x9b;
                  LAB_00100851:ERR_set_error(0x39, uVar11, 0);
                  goto LAB_0010042f;
               }

               if ((ulong)(long)(int)inl < uVar13) {
                  ERR_new();
                  ERR_set_debug("providers/implementations/kdfs/krb5kdf.c", 0x1aa, "KRB5KDF");
                  uVar11 = 0x9d;
                  goto LAB_00100851;
               }

               uVar16 = (ulong)inl;
               if (uVar13 == uVar16) {
                  __memcpy_chk(local_88, lVar2, uVar13, 0x40);
               }
 else {
                  local_d8 = uVar16;
                  if ((int)uVar13 != 0) {
                     uVar7 = (ulong)inl;
                     uVar15 = uVar13 & 0xffffffff;
                     do {
                        local_d8 = uVar15;
                        uVar15 = uVar7 % local_d8;
                        uVar7 = local_d8;
                     }
 while ( (int)uVar15 != 0 );
                  }

                  __memset_chk(local_88, 0, uVar16, 0x40);
                  uVar6 = 0;
                  uVar14 = (int)( ( uVar16 * uVar13 ) / local_d8 ) - 1;
                  uVar16 = (ulong)uVar14;
                  uVar15 = uVar16;
                  if (-1 < (int)uVar14) {
                     do {
                        uVar14 = (int)( uVar15 / uVar13 ) * 0xd;
                        bVar3 = (byte)uVar14 & 7;
                        uVar14 = (int)uVar16 - ( uVar14 >> 3 );
                        uVar12 = (int)uVar16 - 1;
                        pbVar9 = local_88 + uVar16 % (ulong)inl;
                        uVar14 = ( ( ( uint ) * (byte*)( lVar2 + ( ulong )(uVar14 - 1) % uVar13 ) << ( 8 - bVar3 & 0x1f ) | (int)( uint ) * (byte*)( lVar2 + (ulong)uVar14 % uVar13 ) >> bVar3 ) & 0xff ) + ( uint ) * pbVar9 + uVar6;
                        *pbVar9 = (byte)uVar14;
                        uVar6 = uVar14 >> 8;
                        uVar16 = (ulong)uVar12;
                        uVar15 = uVar15 - 1;
                     }
 while ( uVar12 != 0xffffffff );
                     if (( uVar14 >> 8 != 0 ) && ( -1 < (int)( inl - 1 ) )) {
                        pbVar9 = local_88 + ( inl - 1 );
                        pbVar10 = pbVar9;
                        do {
                           iVar4 = (int)pbVar10;
                           iVar8 = *pbVar10 + uVar6;
                           uVar6 = 1;
                           *pbVar10 = (byte)iVar8;
                           pbVar10 = pbVar10 + -1;
                        }
 while ( ( byte )(( byte )((uint)iVar8 >> 8) & (byte)~(byte)(((inl - 2) - (int)pbVar9) + iVar4 >> 0x18) >> 7) != 0 );
                     }

                  }

               }

               local_b0 = local_88;
               if (param_3 != 0) {
                  uVar13 = 0;
                  pbVar9 = local_b0;
                  pbVar10 = local_68;
                  while (out = pbVar10,iVar4 = EVP_EncryptUpdate(ctx, out, &local_8c, pbVar9, inl),iVar4 != 0) {
                     uVar16 = (ulong)local_8c;
                     iVar4 = EVP_EncryptFinal_ex(ctx, out, &local_8c);
                     if (iVar4 == 0) break;
                     if (local_8c != 0) {
                        ERR_new();
                        ERR_set_debug("providers/implementations/kdfs/krb5kdf.c", 0x1bf, "KRB5KDF");
                        ERR_set_error(0x39, 0x6b, 0);
                        break;
                     }

                     __dest = *param_2 + uVar13;
                     if (param_3 - uVar13 <= uVar16) {
                        uVar16 = param_3 - uVar13;
                     }

                     uVar13 = uVar13 + uVar16;
                     memcpy(__dest, out, uVar16);
                     if (param_3 <= uVar13) goto LAB_001006db;
                     iVar4 = EVP_CIPHER_CTX_reset(ctx);
                     if (( ( iVar4 == 0 ) || ( iVar4 = EVP_EncryptInit_ex(ctx, cipher, impl, puVar17, (uchar*)0x0) ),iVar4 == 0 )) break;
                     pbVar9 = out;
                     pbVar10 = local_68;
                     if (out != local_b0) {
                        pbVar10 = local_b0;
                     }

                  }
;
                  goto LAB_0010042f;
               }

               LAB_001006db:iVar4 = EVP_CIPHER_get_nid(cipher);
               if (( iVar4 == 0x2c ) && ( bVar18 )) {
                  puVar17 = param_2[1] + 6;
                  key = param_2 + 2;
                  do {
                     memmove(key, puVar17, 7);
                     puVar17 = puVar17 + -7;
                     ( *key )[7] = ( *key )[0] * '\x02' & 2 | ( *key )[1] * '\x04' & 4 | ( *key )[6] << 7 | ( *key )[2] * '\b' & 8 | ( byte )(( ( *key )[3] & 1 ) << 4) | ( byte )(( ( *key )[4] & 1 ) << 5) | ( byte )(( ( *key )[5] & 1 ) << 6);
                     DES_set_odd_parity(key);
                     bVar18 = param_2 != key;
                     key = key + -1;
                  }
 while ( bVar18 );
                  iVar4 = CRYPTO_memcmp(param_2, param_2 + 1, 8);
                  if (( iVar4 == 0 ) || ( iVar4 = iVar4 == 0 )) {
                     ERR_new();
                     ERR_set_debug("providers/implementations/kdfs/krb5kdf.c", 0x1e1, "KRB5KDF");
                     ERR_set_error(0x39, 0x79, 0);
                     goto LAB_0010042f;
                  }

               }

               uVar5 = 1;
            }

            local_b0 = local_88;
            EVP_CIPHER_CTX_free(ctx);
            OPENSSL_cleanse(local_b0, 0x40);
            goto LAB_0010032f;
         }

      }

   }

   LAB_0010032d:uVar5 = 0;
   LAB_0010032f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
undefined8 *krb5kdf_dup(undefined8 *param_1) {
   undefined8 uVar1;
   int iVar2;
   undefined8 *ptr;
   uVar1 = *param_1;
   iVar2 = ossl_prov_is_running();
   if (iVar2 != 0) {
      ptr = (undefined8*)CRYPTO_zalloc(0x40, "providers/implementations/kdfs/krb5kdf.c", 0x43);
      if (ptr != (undefined8*)0x0) {
         *ptr = uVar1;
         iVar2 = ossl_prov_memdup(param_1[4], param_1[5], ptr + 4, ptr + 5);
         if (iVar2 != 0) {
            iVar2 = ossl_prov_memdup(param_1[6], param_1[7], ptr + 6, ptr + 7);
            if (iVar2 != 0) {
               iVar2 = ossl_prov_cipher_copy(ptr + 1, param_1 + 1);
               if (iVar2 != 0) {
                  return ptr;
               }

            }

         }

         uVar1 = *ptr;
         ossl_prov_cipher_reset((undefined1(*) [16])( ptr + 1 ));
         CRYPTO_clear_free(ptr[4], ptr[5], "providers/implementations/kdfs/krb5kdf.c", 0x59);
         CRYPTO_clear_free(ptr[6], ptr[7], "providers/implementations/kdfs/krb5kdf.c", 0x5a);
         ptr[7] = 0;
         for (int i = 0; i < 3; i++) {
            *(undefined1(*) [16])( ptr + ( 2*i + 1 ) ) = (undefined1[16])0;
         }

         *ptr = uVar1;
         CRYPTO_free(ptr);
      }

   }

   return (undefined8*)0x0;
}


EVP_PKEY *evp_pkey_new_raw_nist_public_key(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5) {
   int iVar1;
   EVP_PKEY_CTX *ctx;
   EVP_PKEY *pEVar2;
   long in_FS_OFFSET;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   EVP_PKEY *local_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = (EVP_PKEY*)0x0;
   ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(param_1, &_LC0, param_2);
   OSSL_PARAM_construct_utf8_string(&local_c8, "group", param_3, 0);
   local_68 = local_a8;
   local_88 = local_c8;
   uStack_80 = uStack_c0;
   local_78 = local_b8;
   uStack_70 = uStack_b0;
   OSSL_PARAM_construct_end(&local_c8);
   local_60 = local_c8;
   uStack_58 = uStack_c0;
   local_40 = local_a8;
   local_50 = local_b8;
   uStack_48 = uStack_b0;
   if (ctx != (EVP_PKEY_CTX*)0x0) {
      iVar1 = EVP_PKEY_paramgen_init(ctx);
      if (0 < iVar1) {
         iVar1 = EVP_PKEY_CTX_set_params(ctx, &local_88);
         if (0 < iVar1) {
            iVar1 = EVP_PKEY_paramgen(ctx, &local_90);
            if (0 < iVar1) {
               iVar1 = EVP_PKEY_set1_encoded_public_key(local_90, param_4, param_5);
               if (iVar1 == 1) {
                  EVP_PKEY_CTX_free(ctx);
                  pEVar2 = local_90;
                  goto LAB_00100144;
               }

            }

         }

      }

   }

   EVP_PKEY_CTX_free(ctx);
   EVP_PKEY_free(local_90);
   ERR_new();
   ERR_set_debug("crypto/hpke/hpke.c", 0x7a, "evp_pkey_new_raw_nist_public_key");
   ERR_set_error(0xf, 0xc0103, 0);
   pEVar2 = (EVP_PKEY*)0x0;
   LAB_00100144:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pEVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int hpke_do_middle(undefined8 *param_1, undefined8 param_2, undefined8 param_3) {
   uint uVar1;
   char *__s;
   ulong uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   size_t sVar7;
   void *pvVar8;
   long lVar9;
   undefined8 uVar10;
   undefined8 *puVar11;
   long in_FS_OFFSET;
   byte bVar12;
   uint local_450;
   ushort local_44c;
   undefined1 local_448;
   undefined1 local_447[511];
   undefined1 local_248[520];
   long local_40;
   bVar12 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1[0x10] == 0) {
      lVar4 = ossl_HPKE_KEM_INFO_find_id(*(undefined2*)( (long)param_1 + 0x14 ));
      if (lVar4 == 0) {
         ERR_new();
         uVar10 = 0x29d;
      }
 else {
         lVar4 = ossl_HPKE_AEAD_INFO_find_id(*(undefined2*)( param_1 + 3 ));
         if (lVar4 == 0) {
            ERR_new();
            uVar10 = 0x2a2;
         }
 else {
            lVar5 = ossl_HPKE_KDF_INFO_find_id(*(undefined2*)( (long)param_1 + 0x16 ));
            if (lVar5 == 0) {
               ERR_new();
               uVar10 = 0x2a7;
            }
 else {
               uVar1 = *(uint*)( param_1 + 2 );
               uVar10 = *(undefined8*)( lVar5 + 8 );
               puVar11 = (undefined8*)&local_448;
               for (lVar9 = 0x40; lVar9 != 0; lVar9 = lVar9 + -1) {
                  *puVar11 = 0;
                  puVar11 = puVar11 + (ulong)bVar12 * -2 + 1;
               }

               lVar9 = *(long*)( lVar5 + 0x10 );
               local_448 = (undefined1)uVar1;
               if (( ulong )(lVar9 * 2) < 0x200) {
                  if (( ( uVar1 & 0xfffffffd ) == 1 ) && ( ( ( param_1[0x13] == 0 || ( param_1[0x14] == 0 ) ) || ( param_1[0x12] == 0 ) ) )) {
                     ERR_new(puVar11, uVar10);
                     ERR_set_debug("crypto/hpke/hpke.c", 0x2b8, "hpke_do_middle");
                     ERR_set_error(0xf, 0x80106, 0);
                     goto LAB_001001ce;
                  }

                  lVar6 = ossl_kdf_ctx_create(&_LC3, uVar10, *param_1, param_1[1]);
                  if (lVar6 == 0) {
                     ERR_new();
                     uVar10 = 0x2be;
                     goto LAB_00100410;
                  }

                  sVar7 = 0;
                  __s = (char*)param_1[0x12];
                  if (param_1[0x13] != 0) {
                     sVar7 = strlen(__s);
                  }

                  local_450 = ( ( ( *(ushort*)( (long)param_1 + 0x16 ) & 0xff ) << 8 | ( uint )(byte)(*(ushort*)( (long)param_1 + 0x16 ) >> 8) ) << 8 | ( uint )(byte) * (undefined2*)( (long)param_1 + 0x14 ) ) << 8 | ( uint )(byte)(( ushort ) * (undefined2*)( (long)param_1 + 0x14 ) >> 8);
                  local_44c = *(ushort*)( param_1 + 3 ) << 8 | *(ushort*)( param_1 + 3 ) >> 8;
                  iVar3 = ossl_hpke_labeled_extract(lVar6, local_447, lVar9, 0, 0, &OSSL_HPKE_SEC51LABEL, &local_450, 6, "psk_id_hash", __s, sVar7);
                  if (iVar3 == 1) {
                     iVar3 = ossl_hpke_labeled_extract(lVar6, local_447 + lVar9, lVar9, 0, 0, &OSSL_HPKE_SEC51LABEL, &local_450, 6, "info_hash", param_2, param_3);
                     if (iVar3 != 1) {
                        ERR_new();
                        uVar10 = 0x2d7;
                        goto LAB_0010039a;
                     }

                     uVar2 = *(ulong*)( lVar5 + 0x10 );
                     if (0x200 < uVar2) {
                        ERR_new();
                        uVar10 = 0x2dd;
                        goto LAB_0010039a;
                     }

                     iVar3 = ossl_hpke_labeled_extract(lVar6, local_248, uVar2, param_1[10], param_1[0xb], &OSSL_HPKE_SEC51LABEL, &local_450, 6, "secret", param_1[0x13], param_1[0x14]);
                     if (iVar3 != 1) {
                        ERR_new();
                        uVar10 = 0x2e6;
                        goto LAB_001005e3;
                     }

                     lVar9 = lVar9 * 2 + 1;
                     if (*(short*)( param_1 + 3 ) != -1) {
                        uVar10 = *(undefined8*)( lVar4 + 0x20 );
                        param_1[0xf] = uVar10;
                        pvVar8 = CRYPTO_malloc((int)uVar10, "crypto/hpke/hpke.c", 0x2ec);
                        param_1[0xe] = pvVar8;
                        if (pvVar8 != (void*)0x0) {
                           iVar3 = ossl_hpke_labeled_expand(lVar6, pvVar8, param_1[0xf], local_248, uVar2, &OSSL_HPKE_SEC51LABEL, &local_450, 6, "base_nonce", &local_448, lVar9);
                           if (iVar3 == 1) {
                              uVar10 = *(undefined8*)( lVar4 + 0x18 );
                              param_1[0xd] = uVar10;
                              pvVar8 = CRYPTO_malloc((int)uVar10, "crypto/hpke/hpke.c", 0x2f8);
                              param_1[0xc] = pvVar8;
                              if (pvVar8 == (void*)0x0) goto LAB_001003c1;
                              iVar3 = ossl_hpke_labeled_expand(lVar6, pvVar8, param_1[0xd], local_248, uVar2, &OSSL_HPKE_SEC51LABEL, &local_450, 6, &OSSL_HPKE_KEY_LABEL, &local_448, lVar9);
                              if (iVar3 == 1) goto LAB_0010069f;
                              ERR_new();
                              uVar10 = 0x300;
                           }
 else {
                              ERR_new();
                              uVar10 = 0x2f4;
                           }

                           LAB_001005e3:ERR_set_debug("crypto/hpke/hpke.c", uVar10, "hpke_do_middle");
                           ERR_set_error(0xf, 0xc0103, 0);
                        }

                        goto LAB_001003c1;
                     }

                     LAB_0010069f:uVar10 = *(undefined8*)( lVar5 + 0x10 );
                     param_1[0x11] = uVar10;
                     pvVar8 = CRYPTO_malloc((int)uVar10, "crypto/hpke/hpke.c", 0x305);
                     param_1[0x10] = pvVar8;
                     if (pvVar8 == (void*)0x0) goto LAB_001003c1;
                     iVar3 = ossl_hpke_labeled_expand(lVar6, pvVar8, param_1[0x11], local_248, uVar2, &OSSL_HPKE_SEC51LABEL, &local_450, 6, &OSSL_HPKE_EXP_LABEL, &local_448, lVar9);
                     if (iVar3 != 1) {
                        ERR_new();
                        uVar10 = 0x30d;
                        goto LAB_001005e3;
                     }

                  }
 else {
                     ERR_new();
                     uVar10 = 0x2cf;
                     LAB_0010039a:ERR_set_debug("crypto/hpke/hpke.c", uVar10, "hpke_do_middle");
                     ERR_set_error(0xf, 0xc0103, 0);
                     LAB_001003c1:iVar3 = 0;
                  }

                  OPENSSL_cleanse(&local_448, 0x200);
                  OPENSSL_cleanse(local_248, 0x200);
                  EVP_KDF_CTX_free(lVar6);
                  goto LAB_001001d0;
               }

               ERR_new(puVar11, uVar10);
               uVar10 = 0x2b1;
            }

         }

      }

      LAB_00100410:ERR_set_debug("crypto/hpke/hpke.c", uVar10, "hpke_do_middle");
      ERR_set_error(0xf, 0xc0103, 0);
   }
 else {
      ERR_new();
      ERR_set_debug("crypto/hpke/hpke.c", 0x299, "hpke_do_middle");
      ERR_set_error(0xf, 0xc0101, 0);
   }

   LAB_001001ce:iVar3 = 0;
   LAB_001001d0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar3;
}
undefined8 *OSSL_HPKE_CTX_new(uint param_1, ulong param_2, uint param_3, undefined8 param_4, char *param_5) {
   long lVar1;
   long lVar2;
   long lVar3;
   undefined8 *ptr;
   char *pcVar4;
   long lVar5;
   short sVar6;
   undefined8 uVar7;
   undefined4 local_40;
   if (param_1 < 4) {
      lVar1 = ossl_HPKE_KEM_INFO_find_id(param_2 & 0xffff);
      if (( lVar1 != 0 ) && ( lVar2 = ossl_HPKE_KDF_INFO_find_id(param_2 >> 0x10 & 0xffff) ),lVar2 != 0) {
         sVar6 = (short)( param_2 >> 0x20 );
         lVar3 = ossl_HPKE_AEAD_INFO_find_id(param_2 >> 0x20 & 0xffff);
         if (lVar3 != 0) {
            if (1 < param_3) {
               ERR_new();
               uVar7 = 0x32f;
               goto LAB_001007e4;
            }

            ptr = (undefined8*)CRYPTO_zalloc(0xd0, "crypto/hpke/hpke.c", 0x332);
            if (ptr == (undefined8*)0x0) {
               return (undefined8*)0x0;
            }

            *ptr = param_4;
            if (param_5 != (char*)0x0) {
               pcVar4 = CRYPTO_strdup(param_5, "crypto/hpke/hpke.c", 0x337);
               ptr[1] = pcVar4;
               if (pcVar4 == (char*)0x0) goto LAB_0010098e;
            }

            if (sVar6 != -1) {
               lVar5 = EVP_CIPHER_fetch(param_4, *(undefined8*)( lVar3 + 8 ), param_5);
               ptr[7] = lVar5;
               if (lVar5 == 0) {
                  ERR_new();
                  ERR_set_debug("crypto/hpke/hpke.c", 0x33e, "OSSL_HPKE_CTX_new");
                  ERR_set_error(0xf, 0x8010d, 0);
                  LAB_0010098e:EVP_CIPHER_free(ptr[7]);
                  CRYPTO_free((void*)ptr[1]);
                  CRYPTO_free(ptr);
                  return (undefined8*)0x0;
               }

            }

            local_40 = (undefined4)param_2;
            *(uint*)( ptr + 8 ) = param_3;
            *(uint*)( ptr + 2 ) = param_1;
            *(undefined4*)( (long)ptr + 0x14 ) = local_40;
            ptr[4] = lVar1;
            *(short*)( ptr + 3 ) = sVar6;
            ptr[5] = lVar2;
            ptr[6] = lVar3;
            return ptr;
         }

      }

      ERR_new();
      uVar7 = 0x32b;
   }
 else {
      ERR_new();
      uVar7 = 0x327;
   }

   LAB_001007e4:ERR_set_debug("crypto/hpke/hpke.c", uVar7, "OSSL_HPKE_CTX_new");
   ERR_set_error(0xf, 0x80106, 0);
   return (undefined8*)0x0;
}
void OSSL_HPKE_CTX_free(void *param_1) {
   if (param_1 != (void*)0x0) {
      EVP_CIPHER_free(*(undefined8*)( (long)param_1 + 0x38 ));
      CRYPTO_free(*(void**)( (long)param_1 + 8 ));
      CRYPTO_clear_free(*(undefined8*)( (long)param_1 + 0x80 ), *(undefined8*)( (long)param_1 + 0x88 ), "crypto/hpke/hpke.c", 0x357);
      CRYPTO_free(*(void**)( (long)param_1 + 0x90 ));
      CRYPTO_clear_free(*(undefined8*)( (long)param_1 + 0x98 ), *(undefined8*)( (long)param_1 + 0xa0 ), "crypto/hpke/hpke.c", 0x359);
      CRYPTO_clear_free(*(undefined8*)( (long)param_1 + 0x60 ), *(undefined8*)( (long)param_1 + 0x68 ), "crypto/hpke/hpke.c", 0x35a);
      CRYPTO_clear_free(*(undefined8*)( (long)param_1 + 0x70 ), *(undefined8*)( (long)param_1 + 0x78 ), "crypto/hpke/hpke.c", 0x35b);
      CRYPTO_clear_free(*(undefined8*)( (long)param_1 + 0x50 ), *(undefined8*)( (long)param_1 + 0x58 ), "crypto/hpke/hpke.c", 0x35c);
      CRYPTO_clear_free(*(undefined8*)( (long)param_1 + 0xc0 ), *(undefined8*)( (long)param_1 + 200 ), "crypto/hpke/hpke.c", 0x35d);
      EVP_PKEY_free(*(EVP_PKEY**)( (long)param_1 + 0xa8 ));
      CRYPTO_free(*(void**)( (long)param_1 + 0xb0 ));
      CRYPTO_free(param_1);
      return;
   }

   return;
}
undefined4 OSSL_HPKE_CTX_set1_psk(long param_1, char *param_2, long param_3, ulong param_4) {
   size_t sVar1;
   long lVar2;
   char *pcVar3;
   undefined8 uVar4;
   if (( ( ( param_1 == 0 ) || ( param_2 == (char*)0x0 ) ) || ( param_3 == 0 ) ) || ( param_4 == 0 )) {
      ERR_new();
      uVar4 = 0x36a;
   }
 else if (param_4 < 0x43) {
      if (param_4 < 0x20) {
         ERR_new();
         uVar4 = 0x372;
      }
 else {
         sVar1 = strlen(param_2);
         if (sVar1 < 0x43) {
            if (*param_2 == '\0') {
               ERR_new();
               uVar4 = 0x37a;
            }
 else {
               if (( *(uint*)( param_1 + 0x10 ) & 0xfffffffd ) == 1) {
                  CRYPTO_clear_free(*(undefined8*)( param_1 + 0x98 ), *(undefined8*)( param_1 + 0xa0 ), "crypto/hpke/hpke.c", 899);
                  lVar2 = CRYPTO_memdup(param_3, param_4, "crypto/hpke/hpke.c", 900);
                  *(long*)( param_1 + 0x98 ) = lVar2;
                  if (lVar2 == 0) {
                     return 0;
                  }

                  *(ulong*)( param_1 + 0xa0 ) = param_4;
                  CRYPTO_free(*(void**)( param_1 + 0x90 ));
                  pcVar3 = CRYPTO_strdup(param_2, "crypto/hpke/hpke.c", 0x389);
                  *(char**)( param_1 + 0x90 ) = pcVar3;
                  if (pcVar3 == (char*)0x0) {
                     CRYPTO_clear_free(*(undefined8*)( param_1 + 0x98 ), *(undefined8*)( param_1 + 0xa0 ), "crypto/hpke/hpke.c", 0x38b);
                     *(undefined8*)( param_1 + 0x98 ) = 0;
                     *(undefined8*)( param_1 + 0xa0 ) = 0;
                     return 0;
                  }

                  return 1;
               }

               ERR_new();
               uVar4 = 0x37f;
            }

         }
 else {
            ERR_new();
            uVar4 = 0x376;
         }

      }

   }
 else {
      ERR_new();
      uVar4 = 0x36e;
   }

   ERR_set_debug("crypto/hpke/hpke.c", uVar4, "OSSL_HPKE_CTX_set1_psk");
   ERR_set_error(0xf, 0x80106, 0);
   return 0;
}
undefined8 OSSL_HPKE_CTX_set1_ikme(long param_1, long param_2, long param_3) {
   long lVar1;
   undefined8 uVar2;
   if (( param_1 == 0 ) || ( param_2 == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/hpke/hpke.c", 0x397, "OSSL_HPKE_CTX_set1_ikme");
      ERR_set_error(0xf, 0xc0102, 0);
   }
 else {
      if (param_3 - 1U < 0x42) {
         if (*(int*)( param_1 + 0x40 ) == 0) {
            CRYPTO_clear_free(*(undefined8*)( param_1 + 0xc0 ), *(undefined8*)( param_1 + 200 ), "crypto/hpke/hpke.c", 0x3a2);
            lVar1 = CRYPTO_memdup(param_2, param_3, "crypto/hpke/hpke.c", 0x3a3);
            *(long*)( param_1 + 0xc0 ) = lVar1;
            if (lVar1 == 0) {
               return 0;
            }

            *(long*)( param_1 + 200 ) = param_3;
            return 1;
         }

         ERR_new();
         uVar2 = 0x39f;
      }
 else {
         ERR_new();
         uVar2 = 0x39b;
      }

      ERR_set_debug("crypto/hpke/hpke.c", uVar2, "OSSL_HPKE_CTX_set1_ikme");
      ERR_set_error(0xf, 0x80106, 0);
   }

   return 0;
}
bool OSSL_HPKE_CTX_set1_authpriv(long param_1, long param_2) {
   long lVar1;
   undefined8 uVar2;
   if (( param_1 == 0 ) || ( param_2 == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/hpke/hpke.c", 0x3ad, "OSSL_HPKE_CTX_set1_authpriv");
      ERR_set_error(0xf, 0xc0102, 0);
   }
 else {
      if (*(int*)( param_1 + 0x10 ) - 2U < 2) {
         if (*(int*)( param_1 + 0x40 ) == 0) {
            EVP_PKEY_free(*(EVP_PKEY**)( param_1 + 0xa8 ));
            lVar1 = EVP_PKEY_dup(param_2);
            *(long*)( param_1 + 0xa8 ) = lVar1;
            return lVar1 != 0;
         }

         ERR_new();
         uVar2 = 0x3b6;
      }
 else {
         ERR_new();
         uVar2 = 0x3b2;
      }

      ERR_set_debug("crypto/hpke/hpke.c", uVar2, "OSSL_HPKE_CTX_set1_authpriv");
      ERR_set_error(0xf, 0x80106, 0);
   }

   return false;
}
undefined4 OSSL_HPKE_CTX_set1_authpub(undefined8 *param_1, long param_2, long param_3) {
   int iVar1;
   undefined4 uVar2;
   long lVar3;
   long lVar4;
   EVP_PKEY *pkey;
   void *ptr;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   if (( param_2 == 0 || param_3 == 0 ) || ( param_1 == (undefined8*)0x0 )) {
      ERR_new();
      ERR_set_debug("crypto/hpke/hpke.c", 0x3ca, "OSSL_HPKE_CTX_set1_authpub");
      ERR_set_error(0xf, 0xc0102, 0);
   }
 else {
      if (*(int*)( param_1 + 2 ) - 2U < 2) {
         if (*(int*)( param_1 + 8 ) == 1) {
            lVar3 = ossl_HPKE_KEM_INFO_find_id(*(undefined2*)( (long)param_1 + 0x14 ));
            if (lVar3 == 0) goto LAB_001010c8;
            lVar4 = ossl_HPKE_KEM_INFO_find_id(*(undefined2*)( (long)param_1 + 0x14 ));
            if (( lVar4 == 0 ) || ( *(long*)( lVar4 + 0x10 ) == 0 )) {
               pkey = (EVP_PKEY*)EVP_PKEY_new_raw_public_key_ex(*param_1, *(undefined8*)( lVar3 + 8 ), param_1[1], param_2, param_3);
            }
 else {
               pkey = (EVP_PKEY*)evp_pkey_new_raw_nist_public_key(*param_1, param_1[1], *(undefined8*)( lVar3 + 0x10 ), param_2, param_3);
            }

            if (pkey == (EVP_PKEY*)0x0) {
               ERR_new();
               ERR_set_debug("crypto/hpke/hpke.c", 0x3e6, "OSSL_HPKE_CTX_set1_authpub");
               ERR_set_error(0xf, 0x80106, 0);
               uVar2 = 0;
            }
 else {
               ptr = CRYPTO_malloc(0x200, "crypto/hpke/hpke.c", 0x3ed);
               if (ptr != (void*)0x0) {
                  iVar1 = EVP_PKEY_get_octet_string_param(pkey, "encoded-pub-key", ptr, 0x200, &local_38);
                  if (iVar1 == 1) {
                     CRYPTO_free((void*)param_1[0x16]);
                     param_1[0x16] = ptr;
                     param_1[0x17] = local_38;
                     uVar2 = 1;
                     goto LAB_0010118f;
                  }

                  CRYPTO_free(ptr);
                  ERR_new();
                  ERR_set_debug("crypto/hpke/hpke.c", 0x3f5, "OSSL_HPKE_CTX_set1_authpub");
                  ERR_set_error(0xf, 0xc0103, 0);
               }

               uVar2 = 0;
            }

            LAB_0010118f:EVP_PKEY_free(pkey);
            goto LAB_001010ca;
         }

         ERR_new();
         uVar5 = 0x3d3;
      }
 else {
         ERR_new();
         uVar5 = 0x3cf;
      }

      ERR_set_debug("crypto/hpke/hpke.c", uVar5, "OSSL_HPKE_CTX_set1_authpub");
      ERR_set_error(0xf, 0x80106, 0);
   }

   LAB_001010c8:uVar2 = 0;
   LAB_001010ca:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 OSSL_HPKE_CTX_get_seq(long param_1, undefined8 *param_2) {
   if (( param_1 != 0 ) && ( param_2 != (undefined8*)0x0 )) {
      *param_2 = *(undefined8*)( param_1 + 0x48 );
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/hpke/hpke.c", 0x406, "OSSL_HPKE_CTX_get_seq");
   ERR_set_error(0xf, 0xc0102, 0);
   return 0;
}
undefined8 OSSL_HPKE_CTX_set_seq(long param_1, undefined8 param_2) {
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/hpke/hpke.c", 0x410, "OSSL_HPKE_CTX_set_seq");
      ERR_set_error(0xf, 0xc0102, 0);
   }
 else {
      if (*(int*)( param_1 + 0x40 ) != 0) {
         *(undefined8*)( param_1 + 0x48 ) = param_2;
         return 1;
      }

      ERR_new();
      ERR_set_debug("crypto/hpke/hpke.c", 0x419, "OSSL_HPKE_CTX_set_seq");
      ERR_set_error(0xf, 0x80106, 0);
   }

   return 0;
}
undefined4 OSSL_HPKE_seal(long param_1, uchar *param_2, ulong *param_3, uchar *param_4, long param_5, uchar *param_6, ulong param_7) {
   ulong uVar1;
   ulong uVar2;
   long lVar3;
   ulong *puVar4;
   ulong uVar5;
   byte bVar6;
   byte bVar7;
   byte bVar8;
   byte bVar9;
   int iVar10;
   EVP_CIPHER_CTX *ctx;
   undefined8 uVar11;
   undefined4 uVar12;
   long in_FS_OFFSET;
   uint uVar13;
   byte local_90;
   byte local_88;
   int local_6c;
   uchar local_68[4];
   byte bStack_64;
   byte bStack_63;
   byte bStack_62;
   byte bStack_61;
   byte bStack_60;
   byte bStack_5f;
   byte bStack_5e;
   byte bStack_5d;
   undefined1 local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( param_2 == (uchar*)0x0 || param_3 == (ulong*)0x0 ) || ( param_1 == 0 ) ) || ( uVar2 = uVar2 == 0 ) ) || ( ( param_6 == (uchar*)0x0 || ( param_7 == 0 ) ) )) {
      ERR_new();
      uVar11 = 0x48a;
      LAB_001013e1:ERR_set_debug("crypto/hpke/hpke.c", uVar11, "OSSL_HPKE_seal");
      ERR_set_error(0xf, 0x80106, 0);
   }
 else {
      if (*(int*)( param_1 + 0x40 ) != 0) {
         ERR_new();
         uVar11 = 0x48e;
         goto LAB_001013e1;
      }

      lVar3 = *(long*)( param_1 + 0x48 );
      bVar8 = ( byte )((ulong)lVar3 >> 0x38);
      bVar9 = ( byte )((ulong)lVar3 >> 0x28);
      bVar7 = ( byte )((ulong)lVar3 >> 0x20);
      bVar6 = ( byte )((ulong)lVar3 >> 8);
      if (lVar3 == -1) {
         ERR_new();
         ERR_set_debug("crypto/hpke/hpke.c", 0x492, "OSSL_HPKE_seal");
         ERR_set_error(0xf, 0xc0101, 0);
      }
 else {
         if (( *(long*)( param_1 + 0x60 ) == 0 ) || ( puVar4 = *(ulong**)( param_1 + 0x70 ) ),puVar4 == (ulong*)0x0) {
            ERR_new();
            uVar11 = 0x497;
            goto LAB_001013e1;
         }

         if (*(long*)( param_1 + 0x78 ) != 0xc) {
            ERR_new();
            ERR_set_debug("crypto/hpke/hpke.c", 0x49c, "OSSL_HPKE_seal");
            ERR_set_error(0xf, 0xc0103, 0);
            goto LAB_00101400;
         }

         bStack_5d = (byte)lVar3;
         if (( ulong )((long)local_68 - ( (long)puVar4 + 1 )) < 7) {
            local_68[0] = ( uchar ) * puVar4;
            bStack_64 = bVar8 ^ *(byte*)( (long)puVar4 + 4 );
            bStack_63 = ( byte )((ulong)lVar3 >> 0x30) ^ *(byte*)( (long)puVar4 + 5 );
            bStack_62 = bVar9 ^ *(byte*)( (long)puVar4 + 6 );
            local_68[1] = *(undefined1*)( (long)puVar4 + 1 );
            bStack_5d = bStack_5d ^ *(byte*)( (long)puVar4 + 0xb );
            local_68[2] = *(undefined1*)( (long)puVar4 + 2 );
            local_68[3] = *(undefined1*)( (long)puVar4 + 3 );
            bStack_61 = bVar7 ^ *(byte*)( (long)puVar4 + 7 );
            local_88 = ( byte )((ulong)lVar3 >> 0x18);
            bStack_60 = local_88 ^ (byte)puVar4[1];
            local_90 = ( byte )((ulong)lVar3 >> 0x10);
            bStack_5f = local_90 ^ *(byte*)( (long)puVar4 + 9 );
            bStack_5e = bVar6 ^ *(byte*)( (long)puVar4 + 10 );
         }
 else {
            uVar1 = *puVar4;
            uVar5 = (ulong)CONCAT13(bVar7, CONCAT12(bVar9, (ushort)bVar8 | ( ushort )((ulong)lVar3 >> 0x28) & 0xff00)) << 0x20 ^ uVar1;
            local_68[0] = (uchar)uVar1;
            for (int i = 0; i < 3; i++) {
               local_68[( i + 1 )] = ( uchar )(uVar1 >> ( 8*i + 8 ));
            }

            bStack_64 = ( byte )(uVar5 >> 0x20);
            bStack_63 = ( byte )(uVar5 >> 0x28);
            bStack_62 = ( byte )(uVar5 >> 0x30);
            bStack_61 = ( byte )(uVar5 >> 0x38);
            uVar13 = CONCAT13(bStack_5d, CONCAT12(bVar6, ( ushort )((ulong)lVar3 >> 0x18) & 0xff | ( ushort )((ulong)lVar3 >> 8) & 0xff00)) ^ (uint)puVar4[1];
            bStack_60 = (byte)uVar13;
            bStack_5f = ( byte )(uVar13 >> 8);
            bStack_5e = ( byte )(uVar13 >> 0x10);
            bStack_5d = ( byte )(uVar13 >> 0x18);
         }

         uVar1 = *(ulong*)( *(long*)( param_1 + 0x30 ) + 0x10 );
         if (( uVar1 < uVar2 ) && ( param_7 <= uVar2 - uVar1 )) {
            if (0x10 < uVar1) {
               ERR_new();
               uVar11 = 0xea;
               goto LAB_00101649;
            }

            ctx = EVP_CIPHER_CTX_new();
            if (ctx != (EVP_CIPHER_CTX*)0x0) {
               iVar10 = EVP_EncryptInit_ex(ctx, *(EVP_CIPHER**)( param_1 + 0x38 ), (ENGINE*)0x0, (uchar*)0x0, (uchar*)0x0);
               if (iVar10 == 1) {
                  iVar10 = EVP_CIPHER_CTX_ctrl(ctx, 9, *(int*)( param_1 + 0x78 ), (void*)0x0);
                  if (iVar10 == 1) {
                     iVar10 = EVP_EncryptInit_ex(ctx, (EVP_CIPHER*)0x0, (ENGINE*)0x0, *(uchar**)( param_1 + 0x60 ), local_68);
                     if (iVar10 == 1) {
                        if (( ( param_5 == 0 ) || ( param_4 == (uchar*)0x0 ) ) || ( iVar10 = EVP_EncryptUpdate(ctx, (uchar*)0x0, &local_6c, param_4, (int)param_5) ),iVar10 == 1) {
                           iVar10 = EVP_EncryptUpdate(ctx, param_2, &local_6c, param_6, (int)param_7);
                           if (iVar10 == 1) {
                              *param_3 = (long)local_6c;
                              iVar10 = EVP_EncryptFinal_ex(ctx, param_2 + local_6c, &local_6c);
                              if (iVar10 == 1) {
                                 *param_3 = *param_3 + (long)local_6c;
                                 iVar10 = EVP_CIPHER_CTX_ctrl(ctx, 0x10, (int)uVar1, local_58);
                                 if (iVar10 == 1) {
                                    memcpy(param_2 + *param_3, local_58, uVar1);
                                    *param_3 = *param_3 + uVar1;
                                    EVP_CIPHER_CTX_free(ctx);
                                    *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + 1;
                                    OPENSSL_cleanse(local_68, 0xc);
                                    uVar12 = 1;
                                    goto LAB_00101403;
                                 }

                                 ERR_new();
                                 uVar11 = 0x113;
                              }
 else {
                                 ERR_new();
                                 uVar11 = 0x10d;
                              }

                           }
 else {
                              ERR_new();
                              uVar11 = 0x107;
                           }

                        }
 else {
                           ERR_new();
                           uVar11 = 0x102;
                        }

                     }
 else {
                        ERR_new();
                        uVar11 = 0xfc;
                     }

                  }
 else {
                     ERR_new();
                     uVar11 = 0xf7;
                  }

               }
 else {
                  ERR_new();
                  uVar11 = 0xf2;
               }

               ERR_set_debug("crypto/hpke/hpke.c", uVar11, "hpke_aead_enc");
               ERR_set_error(0xf, 0xc0103, 0);
               OPENSSL_cleanse(param_2, *param_3);
               EVP_CIPHER_CTX_free(ctx);
            }

         }
 else {
            ERR_new();
            uVar11 = 0xe6;
            LAB_00101649:ERR_set_debug("crypto/hpke/hpke.c", uVar11, "hpke_aead_enc");
            ERR_set_error(0xf, 0x80106, 0);
         }

         ERR_new();
         ERR_set_debug("crypto/hpke/hpke.c", 0x4a0, "OSSL_HPKE_seal");
         ERR_set_error(0xf, 0xc0103, 0);
         OPENSSL_cleanse(local_68, 0xc);
      }

   }

   LAB_00101400:uVar12 = 0;
   LAB_00101403:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar12;
}
undefined4 OSSL_HPKE_open(long param_1, uchar *param_2, ulong *param_3, uchar *param_4, long param_5, uchar *param_6, ulong param_7) {
   ulong uVar1;
   long lVar2;
   ulong *puVar3;
   ulong uVar4;
   byte bVar5;
   byte bVar6;
   byte bVar7;
   byte bVar8;
   int iVar9;
   EVP_CIPHER_CTX *ctx;
   undefined8 uVar10;
   undefined4 uVar11;
   long in_FS_OFFSET;
   uint uVar12;
   int *local_68;
   byte local_60;
   int local_54;
   uchar local_50[4];
   byte bStack_4c;
   byte bStack_4b;
   byte bStack_4a;
   byte bStack_49;
   byte bStack_48;
   byte bStack_47;
   byte bStack_46;
   byte bStack_45;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( param_2 == (uchar*)0x0 || param_3 == (ulong*)0x0 ) || ( param_1 == 0 ) ) || ( *param_3 == 0 ) ) || ( ( param_6 == (uchar*)0x0 || ( param_7 == 0 ) ) )) {
      ERR_new();
      uVar10 = 0x4b4;
      LAB_001019f1:ERR_set_debug("crypto/hpke/hpke.c", uVar10, "OSSL_HPKE_open");
      ERR_set_error(0xf, 0x80106, 0);
   }
 else {
      if (*(int*)( param_1 + 0x40 ) != 1) {
         ERR_new();
         uVar10 = 0x4b8;
         goto LAB_001019f1;
      }

      lVar2 = *(long*)( param_1 + 0x48 );
      bVar7 = ( byte )((ulong)lVar2 >> 0x38);
      bVar8 = ( byte )((ulong)lVar2 >> 0x28);
      bVar6 = ( byte )((ulong)lVar2 >> 0x20);
      bVar5 = ( byte )((ulong)lVar2 >> 8);
      if (lVar2 == -1) {
         ERR_new();
         ERR_set_debug("crypto/hpke/hpke.c", 0x4bc, "OSSL_HPKE_open");
         ERR_set_error(0xf, 0xc0101, 0);
      }
 else {
         if (( *(long*)( param_1 + 0x60 ) == 0 ) || ( puVar3 = *(ulong**)( param_1 + 0x70 ) ),puVar3 == (ulong*)0x0) {
            ERR_new();
            uVar10 = 0x4c1;
            goto LAB_001019f1;
         }

         if (*(long*)( param_1 + 0x78 ) == 0xc) {
            bStack_45 = (byte)lVar2;
            if (( ulong )((long)local_50 - ( (long)puVar3 + 1 )) < 7) {
               local_50[0] = ( uchar ) * puVar3;
               bStack_4c = bVar7 ^ *(byte*)( (long)puVar3 + 4 );
               bStack_4b = ( byte )((ulong)lVar2 >> 0x30) ^ *(byte*)( (long)puVar3 + 5 );
               bStack_4a = bVar8 ^ *(byte*)( (long)puVar3 + 6 );
               bStack_49 = bVar6 ^ *(byte*)( (long)puVar3 + 7 );
               bStack_45 = bStack_45 ^ *(byte*)( (long)puVar3 + 0xb );
               for (int i = 0; i < 3; i++) {
                  local_50[( i + 1 )] = *(undefined1*)( (long)puVar3 + ( i + 1 ) );
               }

               local_60 = ( byte )((ulong)lVar2 >> 0x18);
               bStack_48 = local_60 ^ (byte)puVar3[1];
               local_68._0_1_ = ( byte )((ulong)lVar2 >> 0x10);
               bStack_47 = (byte)local_68 ^ *(byte*)( (long)puVar3 + 9 );
               bStack_46 = bVar5 ^ *(byte*)( (long)puVar3 + 10 );
            }
 else {
               uVar1 = *puVar3;
               uVar4 = (ulong)CONCAT13(bVar6, CONCAT12(bVar8, (ushort)bVar7 | ( ushort )((ulong)lVar2 >> 0x28) & 0xff00)) << 0x20 ^ uVar1;
               local_50[0] = (uchar)uVar1;
               for (int i = 0; i < 3; i++) {
                  local_50[( i + 1 )] = ( uchar )(uVar1 >> ( 8*i + 8 ));
               }

               bStack_4c = ( byte )(uVar4 >> 0x20);
               bStack_4b = ( byte )(uVar4 >> 0x28);
               bStack_4a = ( byte )(uVar4 >> 0x30);
               bStack_49 = ( byte )(uVar4 >> 0x38);
               uVar12 = CONCAT13(bStack_45, CONCAT12(bVar5, ( ushort )((ulong)lVar2 >> 0x18) & 0xff | ( ushort )((ulong)lVar2 >> 8) & 0xff00)) ^ (uint)puVar3[1];
               bStack_48 = (byte)uVar12;
               bStack_47 = ( byte )(uVar12 >> 8);
               bStack_46 = ( byte )(uVar12 >> 0x10);
               bStack_45 = ( byte )(uVar12 >> 0x18);
            }

            local_54 = 0;
            uVar1 = *(ulong*)( *(long*)( param_1 + 0x30 ) + 0x10 );
            if (( uVar1 < param_7 ) && ( param_7 - uVar1 <= *param_3 )) {
               ctx = EVP_CIPHER_CTX_new();
               if (ctx != (EVP_CIPHER_CTX*)0x0) {
                  iVar9 = EVP_DecryptInit_ex(ctx, *(EVP_CIPHER**)( param_1 + 0x38 ), (ENGINE*)0x0, (uchar*)0x0, (uchar*)0x0);
                  if (iVar9 == 1) {
                     iVar9 = EVP_CIPHER_CTX_ctrl(ctx, 9, *(int*)( param_1 + 0x78 ), (void*)0x0);
                     if (iVar9 == 1) {
                        iVar9 = EVP_DecryptInit_ex(ctx, (EVP_CIPHER*)0x0, (ENGINE*)0x0, *(uchar**)( param_1 + 0x60 ), local_50);
                        if (iVar9 == 1) {
                           if (( ( param_5 == 0 ) || ( param_4 == (uchar*)0x0 ) ) || ( iVar9 = EVP_DecryptUpdate(ctx, (uchar*)0x0, &local_54, param_4, (int)param_5) ),iVar9 == 1) {
                              local_68 = &local_54;
                              iVar9 = EVP_DecryptUpdate(ctx, param_2, local_68, param_6, (int)param_7 - (int)uVar1);
                              if (iVar9 == 1) {
                                 *param_3 = (long)local_54;
                                 iVar9 = EVP_CIPHER_CTX_ctrl(ctx, 0x11, (int)uVar1, param_6 + ( param_7 - uVar1 ));
                                 if (iVar9 == 0) {
                                    ERR_new();
                                    uVar10 = 0xbc;
                                 }
 else {
                                    iVar9 = EVP_DecryptFinal_ex(ctx, param_2 + local_54, local_68);
                                    if (0 < iVar9) {
                                       EVP_CIPHER_CTX_free(ctx);
                                       *(long*)( param_1 + 0x48 ) = *(long*)( param_1 + 0x48 ) + 1;
                                       OPENSSL_cleanse(local_50, 0xc);
                                       uVar11 = 1;
                                       goto LAB_00101a13;
                                    }

                                    ERR_new();
                                    uVar10 = 0xc1;
                                 }

                              }
 else {
                                 ERR_new();
                                 uVar10 = 0xb6;
                              }

                           }
 else {
                              ERR_new();
                              uVar10 = 0xb1;
                           }

                        }
 else {
                           ERR_new();
                           uVar10 = 0xab;
                        }

                     }
 else {
                        ERR_new();
                        uVar10 = 0xa6;
                     }

                  }
 else {
                     ERR_new();
                     uVar10 = 0xa1;
                  }

                  ERR_set_debug("crypto/hpke/hpke.c", uVar10, "hpke_aead_dec");
                  ERR_set_error(0xf, 0xc0103, 0);
                  OPENSSL_cleanse(param_2, *param_3);
                  EVP_CIPHER_CTX_free(ctx);
               }

            }
 else {
               ERR_new();
               ERR_set_debug("crypto/hpke/hpke.c", 0x99, "hpke_aead_dec");
               ERR_set_error(0xf, 0x80106, 0);
            }

            ERR_new();
            ERR_set_debug("crypto/hpke/hpke.c", 0x4ca, "OSSL_HPKE_open");
            ERR_set_error(0xf, 0xc0103, 0);
            OPENSSL_cleanse(local_50, 0xc);
         }
 else {
            ERR_new();
            ERR_set_debug("crypto/hpke/hpke.c", 0x4c6, "OSSL_HPKE_open");
            ERR_set_error(0xf, 0xc0103, 0);
         }

      }

   }

   uVar11 = 0;
   LAB_00101a13:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar11;
}
int OSSL_HPKE_export(undefined8 *param_1, long param_2, long param_3, long param_4, ulong param_5) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   uint local_48;
   ushort local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 == 0 || param_3 == 0 ) || ( param_1 == (undefined8*)0x0 )) {
      ERR_new();
      uVar3 = 0x4de;
      LAB_00102051:ERR_set_debug("crypto/hpke/hpke.c", uVar3, "OSSL_HPKE_export");
      ERR_set_error(0xf, 0x80106, 0);
   }
 else {
      if (0x42 < param_5) {
         ERR_new();
         uVar3 = 0x4e2;
         goto LAB_00102051;
      }

      if (( param_5 != 0 ) && ( param_4 == 0 )) {
         ERR_new();
         uVar3 = 0x4e6;
         goto LAB_00102051;
      }

      if (param_1[0x10] == 0) {
         ERR_new();
         ERR_set_debug("crypto/hpke/hpke.c", 0x4ea, "OSSL_HPKE_export");
         ERR_set_error(0xf, 0xc0101, 0);
      }
 else {
         lVar2 = ossl_HPKE_KDF_INFO_find_id(*(undefined2*)( (long)param_1 + 0x16 ));
         if (lVar2 == 0) {
            ERR_new();
            uVar3 = 0x4ef;
         }
 else {
            lVar2 = ossl_kdf_ctx_create(&_LC3, *(undefined8*)( lVar2 + 8 ), *param_1, param_1[1]);
            if (lVar2 != 0) {
               local_48 = ( ( ( *(ushort*)( (long)param_1 + 0x16 ) & 0xff ) << 8 | ( uint )(byte)(*(ushort*)( (long)param_1 + 0x16 ) >> 8) ) << 8 | *(ushort*)( (long)param_1 + 0x14 ) & 0xff ) << 8 | ( uint )(byte)(*(ushort*)( (long)param_1 + 0x14 ) >> 8);
               local_44 = *(ushort*)( param_1 + 3 ) << 8 | *(ushort*)( param_1 + 3 ) >> 8;
               iVar1 = ossl_hpke_labeled_expand(lVar2, param_2, param_3, param_1[0x10], param_1[0x11], &OSSL_HPKE_SEC51LABEL, &local_48, 6, &OSSL_HPKE_EXP_SEC_LABEL, param_4, param_5);
               EVP_KDF_CTX_free(lVar2);
               if (iVar1 != 1) {
                  ERR_new();
                  ERR_set_debug("crypto/hpke/hpke.c", 0x507, "OSSL_HPKE_export");
                  ERR_set_error(0xf, 0xc0103, 0);
               }

               goto LAB_00102072;
            }

            ERR_new();
            uVar3 = 0x4f5;
         }

         ERR_set_debug("crypto/hpke/hpke.c", uVar3, "OSSL_HPKE_export");
         ERR_set_error(0xf, 0xc0103, 0);
      }

   }

   iVar1 = 0;
   LAB_00102072:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined4 OSSL_HPKE_keygen(ulong param_1, long param_2, long *param_3, undefined8 *param_4, long param_5, ulong param_6, undefined8 param_7, undefined8 param_8) {
   int iVar1;
   undefined4 uVar2;
   long lVar3;
   long lVar4;
   EVP_PKEY_CTX *ctx;
   undefined8 uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   long in_FS_OFFSET;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   ulong local_d0;
   EVP_PKEY *local_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 local_90[10];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c0 = (EVP_PKEY*)0x0;
   local_d0 = param_1;
   if (( ( ( param_2 == 0 ) || ( param_3 == (long*)0x0 ) ) || ( *param_3 == 0 ) ) || ( param_4 == (undefined8*)0x0 )) {
      ERR_new(param_1, param_2, 0);
      uVar5 = 0x517;
   }
 else {
      lVar3 = ossl_HPKE_KEM_INFO_find_id(param_1 & 0xffff);
      if (lVar3 != 0) {
         lVar4 = ossl_HPKE_KDF_INFO_find_id(param_1 >> 0x10 & 0xffff);
         if (lVar4 != 0) {
            lVar4 = ossl_HPKE_AEAD_INFO_find_id(param_1 >> 0x20 & 0xffff);
            if (lVar4 != 0) {
               if (( ( param_6 != 0 ) != ( param_5 != 0 ) ) || ( 0x42 < param_6 )) {
                  ERR_new();
                  uVar5 = 0x521;
                  goto LAB_00102411;
               }

               lVar4 = ossl_HPKE_KEM_INFO_find_id(param_1 & 0xffff);
               if (( lVar4 == 0 ) || ( *(long*)( lVar4 + 0x10 ) == 0 )) {
                  ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(param_7, *(undefined8*)( lVar3 + 8 ), param_8);
                  puVar6 = &local_b8;
               }
 else {
                  OSSL_PARAM_construct_utf8_string(&local_108, "group", *(undefined8*)( lVar3 + 0x10 ), 0);
                  local_b8 = local_108;
                  uStack_b0 = uStack_100;
                  local_98 = local_e8;
                  local_a8 = local_f8;
                  uStack_a0 = uStack_f0;
                  ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(param_7, &_LC0, param_8);
                  puVar6 = local_90;
               }

               if (ctx == (EVP_PKEY_CTX*)0x0) {
                  LAB_001024c0:ERR_new();
                  uVar5 = 0x52e;
                  LAB_001024d1:ERR_set_debug("crypto/hpke/hpke.c", uVar5, "OSSL_HPKE_keygen");
                  ERR_set_error(0xf, 0xc0103, 0);
                  LAB_001024f0:EVP_PKEY_free(local_c0);
                  uVar2 = 0;
               }
 else {
                  iVar1 = EVP_PKEY_keygen_init(ctx);
                  if (iVar1 < 1) goto LAB_001024c0;
                  puVar7 = puVar6;
                  if (param_5 != 0) {
                     puVar7 = puVar6 + 5;
                     OSSL_PARAM_construct_octet_string(&local_108, "dhkem-ikm", param_5, param_6);
                     *puVar6 = local_108;
                     puVar6[1] = uStack_100;
                     puVar6[2] = local_f8;
                     puVar6[3] = uStack_f0;
                     puVar6[4] = local_e8;
                  }

                  OSSL_PARAM_construct_end(&local_108);
                  *puVar7 = local_108;
                  puVar7[1] = uStack_100;
                  puVar7[2] = local_f8;
                  puVar7[3] = uStack_f0;
                  puVar7[4] = local_e8;
                  iVar1 = EVP_PKEY_CTX_set_params(ctx, &local_b8);
                  if (iVar1 < 1) {
                     ERR_new();
                     uVar5 = 0x536;
                     goto LAB_001024d1;
                  }

                  iVar1 = EVP_PKEY_generate(ctx, &local_c0);
                  if (iVar1 < 1) {
                     ERR_new();
                     uVar5 = 0x53a;
                     goto LAB_001024d1;
                  }

                  EVP_PKEY_CTX_free(ctx);
                  iVar1 = EVP_PKEY_get_octet_string_param(local_c0, "encoded-pub-key", param_2, *param_3, param_3);
                  if (iVar1 != 1) {
                     ERR_new();
                     ctx = (EVP_PKEY_CTX*)0x0;
                     ERR_set_debug("crypto/hpke/hpke.c", 0x541, "OSSL_HPKE_keygen");
                     ERR_set_error(0xf, 0xc0103, 0);
                     goto LAB_001024f0;
                  }

                  ctx = (EVP_PKEY_CTX*)0x0;
                  *param_4 = local_c0;
                  uVar2 = 1;
               }

               EVP_PKEY_CTX_free(ctx);
               goto LAB_00102432;
            }

         }

      }

      ERR_new();
      uVar5 = 0x51b;
   }

   LAB_00102411:ERR_set_debug("crypto/hpke/hpke.c", uVar5, "OSSL_HPKE_keygen");
   ERR_set_error(0xf, 0x80106, 0);
   uVar2 = 0;
   LAB_00102432:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool OSSL_HPKE_suite_check(ulong param_1) {
   long lVar1;
   lVar1 = ossl_HPKE_KEM_INFO_find_id(param_1 & 0xffff);
   if (lVar1 != 0) {
      lVar1 = ossl_HPKE_KDF_INFO_find_id(param_1 >> 0x10 & 0xffff);
      if (lVar1 != 0) {
         lVar1 = ossl_HPKE_AEAD_INFO_find_id(param_1 >> 0x20 & 0xffff);
         return lVar1 != 0;
      }

   }

   return false;
}
undefined4 OSSL_HPKE_get_grease_value(undefined4 *param_1, undefined4 *param_2, long param_3, ulong *param_4, long param_5, ulong param_6, undefined8 param_7) {
   undefined2 uVar1;
   ulong uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   undefined2 *puVar6;
   undefined8 uVar7;
   undefined4 uVar8;
   long in_FS_OFFSET;
   undefined4 local_74;
   undefined2 uStack_4a;
   EVP_PKEY *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (EVP_PKEY*)0x0;
   if (( param_3 == 0 ) || ( param_4 == (ulong*)0x0 )) {
      LAB_00102740:ERR_new();
      ERR_set_debug("crypto/hpke/hpke.c", 0x561, "OSSL_HPKE_get_grease_value");
      ERR_set_error(0xf, 0x80106, 0);
   }
 else {
      if (( param_5 == 0 || param_6 == 0 ) || ( param_2 == (undefined4*)0x0 )) goto LAB_00102740;
      if (param_1 == (undefined4*)0x0) {
         puVar6 = (undefined2*)ossl_HPKE_KEM_INFO_find_random(param_7);
         if (puVar6 != (undefined2*)0x0) {
            uVar1 = *puVar6;
            puVar6 = (undefined2*)ossl_HPKE_KDF_INFO_find_random(param_7);
            if (puVar6 != (undefined2*)0x0) {
               local_74 = CONCAT22(*puVar6, uVar1);
               puVar6 = (undefined2*)ossl_HPKE_AEAD_INFO_find_random(param_7);
               if (puVar6 != (undefined2*)0x0) {
                  uVar1 = *puVar6;
                  goto LAB_0010267c;
               }

            }

         }

         ERR_new();
         uVar7 = 0x567;
      }
 else {
         uVar1 = *(undefined2*)( param_1 + 1 );
         local_74 = *param_1;
         LAB_0010267c:lVar4 = ossl_HPKE_KEM_INFO_find_id((short)local_74);
         if (lVar4 != 0) {
            lVar5 = ossl_HPKE_KDF_INFO_find_id((short)( (uint)local_74 >> 0x10 ));
            if (lVar5 != 0) {
               lVar5 = ossl_HPKE_AEAD_INFO_find_id(uVar1);
               if (lVar5 != 0) {
                  uVar2 = *(ulong*)( lVar5 + 0x10 );
                  *(undefined2*)( param_2 + 1 ) = uVar1;
                  *param_2 = local_74;
                  if (uVar2 < param_6) {
                     if (*param_4 < *(ulong*)( lVar4 + 0x30 )) {
                        ERR_new();
                        uVar7 = 0x57a;
                     }
 else {
                        iVar3 = OSSL_HPKE_keygen(CONCAT26(uStack_4a, CONCAT24(uVar1, local_74)), param_3, param_4, &local_48, 0, 0, param_7);
                        if (iVar3 == 1) {
                           EVP_PKEY_free(local_48);
                           iVar3 = RAND_bytes_ex(param_7, param_5, param_6, 0);
                           uVar8 = 1;
                           if (0 < iVar3) goto LAB_00102773;
                           ERR_new();
                           uVar7 = 0x58b;
                        }
 else {
                           ERR_new();
                           uVar7 = 0x586;
                        }

                     }

                  }
 else {
                     ERR_new();
                     uVar7 = 0x574;
                  }

                  goto LAB_001027b1;
               }

            }

         }

         ERR_new();
         uVar7 = 0x56e;
      }

      LAB_001027b1:ERR_set_debug("crypto/hpke/hpke.c", uVar7, "OSSL_HPKE_get_grease_value");
      ERR_set_error(0xf, 0xc0103, 0);
   }

   uVar8 = 0;
   LAB_00102773:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void OSSL_HPKE_str2suite(void) {
   ossl_hpke_str2suite();
   return;
}
long OSSL_HPKE_get_ciphertext_size(ulong param_1, long param_2) {
   long lVar1;
   lVar1 = ossl_HPKE_KEM_INFO_find_id(param_1 & 0xffff);
   if (lVar1 != 0) {
      lVar1 = ossl_HPKE_KDF_INFO_find_id(param_1 >> 0x10 & 0xffff);
      if (lVar1 != 0) {
         lVar1 = ossl_HPKE_AEAD_INFO_find_id(param_1 >> 0x20 & 0xffff);
         if (lVar1 != 0) {
            return param_2 + *(long*)( lVar1 + 0x10 );
         }

      }

   }

   ERR_new();
   ERR_set_debug("crypto/hpke/hpke.c", 0x193, "hpke_expansion");
   ERR_set_error(0xf, 0x80106, 0);
   return 0;
}
undefined8 OSSL_HPKE_get_public_encap_size(ulong param_1) {
   long lVar1;
   long lVar2;
   lVar1 = ossl_HPKE_KEM_INFO_find_id(param_1 & 0xffff);
   if (lVar1 != 0) {
      lVar2 = ossl_HPKE_KDF_INFO_find_id(param_1 >> 0x10 & 0xffff);
      if (lVar2 != 0) {
         lVar2 = ossl_HPKE_AEAD_INFO_find_id(param_1 >> 0x20 & 0xffff);
         if (lVar2 != 0) {
            return *(undefined8*)( lVar1 + 0x28 );
         }

      }

   }

   ERR_new();
   ERR_set_debug("crypto/hpke/hpke.c", 0x193, "hpke_expansion");
   ERR_set_error(0xf, 0x80106, 0);
   return 0;
}
undefined8 OSSL_HPKE_encap(undefined8 *param_1, long param_2, ulong *param_3, long param_4, long param_5, long param_6, ulong param_7) {
   int iVar1;
   ulong uVar2;
   long lVar3;
   long lVar4;
   EVP_PKEY *pkey;
   EVP_PKEY_CTX *ctx;
   undefined8 *puVar5;
   void *pvVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   undefined8 local_c8;
   ulong local_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 uStack_88;
   undefined8 local_80;
   undefined8 uStack_78;
   undefined8 local_70;
   undefined8 local_68[5];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( param_2 == 0 || param_3 == (ulong*)0x0 ) || ( param_1 == (undefined8*)0x0 ) ) || ( *param_3 == 0 ) ) || ( ( param_4 == 0 || ( param_5 == 0 ) ) )) {
      ERR_new();
      uVar7 = 0x42a;
      LAB_00102ac9:ERR_set_debug("crypto/hpke/hpke.c", uVar7, "OSSL_HPKE_encap");
      ERR_set_error(0xf, 0x80106, 0);
   }
 else {
      if (*(int*)( param_1 + 8 ) != 0) {
         ERR_new();
         uVar7 = 0x42e;
         goto LAB_00102ac9;
      }

      if (0x400 < param_7) {
         ERR_new();
         uVar7 = 0x432;
         goto LAB_00102ac9;
      }

      if (( param_7 != 0 ) && ( param_6 == 0 )) {
         ERR_new();
         uVar7 = 0x436;
         goto LAB_00102ac9;
      }

      uVar2 = OSSL_HPKE_get_public_encap_size(( ulong ) * (uint6*)( (long)param_1 + 0x14 ));
      if (( uVar2 == 0 ) || ( *param_3 < uVar2 )) {
         ERR_new();
         uVar7 = 0x43b;
         goto LAB_00102ac9;
      }

      if (param_1[10] == 0) {
         local_c8 = 0;
         local_c0 = 0;
         lVar3 = ossl_HPKE_KEM_INFO_find_id(*(undefined2*)( (long)param_1 + 0x14 ));
         if (lVar3 == 0) {
            ERR_new();
            ERR_set_debug("crypto/hpke/hpke.c", 0x1d4, "hpke_encap");
            ERR_set_error(0xf, 0xc0103, 0);
         }
 else {
            lVar4 = ossl_HPKE_KEM_INFO_find_id(*(undefined2*)( (long)param_1 + 0x14 ));
            if (( lVar4 == 0 ) || ( *(long*)( lVar4 + 0x10 ) == 0 )) {
               pkey = (EVP_PKEY*)EVP_PKEY_new_raw_public_key_ex(*param_1, *(undefined8*)( lVar3 + 8 ), param_1[1], param_4, param_5);
            }
 else {
               pkey = (EVP_PKEY*)evp_pkey_new_raw_nist_public_key(*param_1, param_1[1], *(undefined8*)( lVar3 + 0x10 ));
            }

            if (pkey == (EVP_PKEY*)0x0) {
               ERR_new();
               ERR_set_debug("crypto/hpke/hpke.c", 0x1e1, "hpke_encap");
               ERR_set_error(0xf, 0xc0103, 0);
               EVP_PKEY_CTX_free((EVP_PKEY_CTX*)0x0);
               EVP_PKEY_free((EVP_PKEY*)0x0);
            }
 else {
               ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_pkey(*param_1, pkey, param_1[1]);
               if (ctx == (EVP_PKEY_CTX*)0x0) {
                  ERR_new();
                  ERR_set_debug("crypto/hpke/hpke.c", 0x1e6, "hpke_encap");
                  ERR_set_error(0xf, 0xc0103, 0);
                  EVP_PKEY_CTX_free((EVP_PKEY_CTX*)0x0);
                  EVP_PKEY_free(pkey);
               }
 else {
                  OSSL_PARAM_construct_utf8_string(&local_f8, "operation", "DHKEM", 0);
                  local_98 = local_d8;
                  puVar5 = &local_90;
                  local_b8 = local_f8;
                  uStack_b0 = uStack_f0;
                  local_a8 = local_e8;
                  uStack_a0 = uStack_e0;
                  if (param_1[0x18] != 0) {
                     OSSL_PARAM_construct_octet_string(&local_f8, &_LC8, param_1[0x18], param_1[0x19]);
                     local_70 = local_d8;
                     puVar5 = local_68;
                     local_90 = local_f8;
                     uStack_88 = uStack_f0;
                     local_80 = local_e8;
                     uStack_78 = uStack_e0;
                  }

                  OSSL_PARAM_construct_end(&local_f8);
                  *puVar5 = local_f8;
                  puVar5[1] = uStack_f0;
                  puVar5[2] = local_e8;
                  puVar5[3] = uStack_e0;
                  puVar5[4] = local_d8;
                  if (*(int*)( param_1 + 2 ) - 2U < 2) {
                     iVar1 = EVP_PKEY_auth_encapsulate_init(ctx, param_1[0x15], &local_b8);
                     if (iVar1 == 1) goto LAB_00102de3;
                     ERR_new();
                     uVar7 = 0x1f5;
                     LAB_00102f15:ERR_set_debug("crypto/hpke/hpke.c", uVar7, "hpke_encap");
                     uVar7 = 0xc0103;
                     LAB_00102f24:ERR_set_error(0xf, uVar7, 0);
                  }
 else {
                     iVar1 = EVP_PKEY_encapsulate_init(ctx, &local_b8);
                     if (iVar1 != 1) {
                        ERR_new();
                        uVar7 = 0x1fa;
                        goto LAB_00102f15;
                     }

                     LAB_00102de3:local_c0 = *param_3;
                     iVar1 = EVP_PKEY_encapsulate(ctx, 0, &local_c0, 0, &local_c8);
                     if (iVar1 != 1) {
                        ERR_new();
                        uVar7 = 0x200;
                        goto LAB_00102f15;
                     }

                     if (*param_3 < local_c0) {
                        ERR_new();
                        ERR_set_debug("crypto/hpke/hpke.c", 0x204, "hpke_encap");
                        uVar7 = 0x80106;
                        goto LAB_00102f24;
                     }

                     pvVar6 = CRYPTO_malloc((int)local_c8, "crypto/hpke/hpke.c", 0x207);
                     param_1[10] = pvVar6;
                     if (pvVar6 != (void*)0x0) {
                        param_1[0xb] = local_c8;
                        iVar1 = EVP_PKEY_encapsulate(ctx, param_2, param_3, pvVar6, param_1 + 0xb);
                        if (iVar1 == 1) {
                           EVP_PKEY_CTX_free(ctx);
                           EVP_PKEY_free(pkey);
                           if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                              uVar7 = hpke_do_middle(param_1, param_6, param_7);
                              return uVar7;
                           }

                           goto LAB_0010302a;
                        }

                        param_1[0xb] = 0;
                        CRYPTO_free((void*)param_1[10]);
                        param_1[10] = 0;
                        ERR_new();
                        uVar7 = 0x210;
                        goto LAB_00102f15;
                     }

                  }

                  EVP_PKEY_CTX_free(ctx);
                  EVP_PKEY_free(pkey);
               }

            }

         }

         ERR_new();
         ERR_set_debug("crypto/hpke/hpke.c", 0x444, "OSSL_HPKE_encap");
         ERR_set_error(0xf, 0xc0103, 0);
      }
 else {
         ERR_new();
         ERR_set_debug("crypto/hpke/hpke.c", 0x440, "OSSL_HPKE_encap");
         ERR_set_error(0xf, 0xc0101, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   LAB_0010302a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined8 OSSL_HPKE_decap(undefined8 *param_1, long param_2, ulong param_3, long param_4, long param_5, ulong param_6) {
   int iVar1;
   long lVar2;
   EVP_PKEY_CTX *ctx;
   long lVar3;
   void *pvVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   EVP_PKEY *local_e8;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( param_1 == (undefined8*)0x0 ) || ( param_2 == 0 ) ) || ( param_3 == 0 ) ) || ( param_4 == 0 )) {
      ERR_new();
      uVar5 = 0x459;
      LAB_00103191:ERR_set_debug("crypto/hpke/hpke.c", uVar5, "OSSL_HPKE_decap");
      ERR_set_error(0xf, 0x80106, 0);
   }
 else {
      if (*(int*)( param_1 + 8 ) != 1) {
         ERR_new();
         uVar5 = 0x45d;
         goto LAB_00103191;
      }

      if (0x400 < param_6) {
         ERR_new();
         uVar5 = 0x461;
         goto LAB_00103191;
      }

      if (( param_6 != 0 ) && ( param_5 == 0 )) {
         ERR_new();
         uVar5 = 0x465;
         goto LAB_00103191;
      }

      lVar2 = OSSL_HPKE_get_public_encap_size(( ulong ) * (uint6*)( (long)param_1 + 0x14 ));
      if (param_3 <= lVar2 - 1U) {
         ERR_new();
         uVar5 = 0x46a;
         goto LAB_00103191;
      }

      if (param_1[10] == 0) {
         local_a0 = 0;
         ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_pkey(*param_1, param_4, param_1[1]);
         if (ctx == (EVP_PKEY_CTX*)0x0) {
            ERR_new();
            ERR_set_debug("crypto/hpke/hpke.c", 0x238, "hpke_decap");
            ERR_set_error(0xf, 0xc0103, 0);
            EVP_PKEY_CTX_free((EVP_PKEY_CTX*)0x0);
            EVP_PKEY_free((EVP_PKEY*)0x0);
         }
 else {
            OSSL_PARAM_construct_utf8_string(&local_d8, "operation", "DHKEM", 0);
            local_78 = local_b8;
            local_98 = local_d8;
            uStack_90 = uStack_d0;
            local_88 = local_c8;
            uStack_80 = uStack_c0;
            OSSL_PARAM_construct_end(&local_d8);
            local_50 = local_b8;
            local_70 = local_d8;
            uStack_68 = uStack_d0;
            local_60 = local_c8;
            uStack_58 = uStack_c0;
            if (*(int*)( param_1 + 2 ) - 2U < 2) {
               lVar2 = ossl_HPKE_KEM_INFO_find_id(*(undefined2*)( (long)param_1 + 0x14 ));
               if (lVar2 == 0) {
                  ERR_new();
                  uVar5 = 0x245;
               }
 else {
                  lVar3 = ossl_HPKE_KEM_INFO_find_id(*(undefined2*)( (long)param_1 + 0x14 ));
                  if (( lVar3 == 0 ) || ( *(long*)( lVar3 + 0x10 ) == 0 )) {
                     local_e8 = (EVP_PKEY*)EVP_PKEY_new_raw_public_key_ex(*param_1, *(undefined8*)( lVar2 + 8 ), param_1[1], param_1[0x16], param_1[0x17]);
                  }
 else {
                     local_e8 = (EVP_PKEY*)evp_pkey_new_raw_nist_public_key(*param_1, param_1[1], *(undefined8*)( lVar2 + 0x10 ), param_1[0x16], param_1[0x17]);
                  }

                  if (local_e8 != (EVP_PKEY*)0x0) {
                     iVar1 = EVP_PKEY_auth_decapsulate_init(ctx, local_e8, &local_98);
                     if (iVar1 == 1) goto LAB_0010335c;
                     ERR_new();
                     uVar5 = 0x259;
                     goto LAB_001033b1;
                  }

                  ERR_new();
                  uVar5 = 0x255;
               }

            }
 else {
               iVar1 = EVP_PKEY_decapsulate_init(ctx, &local_98);
               local_e8 = (EVP_PKEY*)0x0;
               if (iVar1 == 1) {
                  LAB_0010335c:iVar1 = EVP_PKEY_decapsulate(ctx, 0, &local_a0, param_2, param_3);
                  if (iVar1 == 1) {
                     pvVar4 = CRYPTO_malloc((int)local_a0, "crypto/hpke/hpke.c", 0x266);
                     param_1[10] = pvVar4;
                     if (pvVar4 != (void*)0x0) {
                        iVar1 = EVP_PKEY_decapsulate(ctx, pvVar4, &local_a0, param_2, param_3);
                        if (iVar1 == 1) {
                           param_1[0xb] = local_a0;
                           EVP_PKEY_CTX_free(ctx);
                           EVP_PKEY_free(local_e8);
                           if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                              uVar5 = hpke_do_middle(param_1, param_5, param_6);
                              return uVar5;
                           }

                           goto LAB_001036b9;
                        }

                        ERR_new();
                        uVar5 = 0x26b;
                        goto LAB_001033b1;
                     }

                  }
 else {
                     ERR_new();
                     uVar5 = 0x263;
                     LAB_001033b1:ERR_set_debug("crypto/hpke/hpke.c", uVar5, "hpke_decap");
                     ERR_set_error(0xf, 0xc0103, 0);
                  }

                  EVP_PKEY_CTX_free(ctx);
                  EVP_PKEY_free(local_e8);
                  goto LAB_001033db;
               }

               ERR_new();
               uVar5 = 0x25e;
            }

            ERR_set_debug("crypto/hpke/hpke.c", uVar5, "hpke_decap");
            ERR_set_error(0xf, 0xc0103, 0);
            EVP_PKEY_CTX_free(ctx);
            EVP_PKEY_free((EVP_PKEY*)0x0);
         }

         LAB_001033db:CRYPTO_free((void*)param_1[10]);
         param_1[10] = 0;
         param_1[0xb] = 0;
         ERR_new();
         ERR_set_debug("crypto/hpke/hpke.c", 0x474, "OSSL_HPKE_decap");
         ERR_set_error(0xf, 0xc0103, 0);
      }
 else {
         ERR_new();
         ERR_set_debug("crypto/hpke/hpke.c", 0x46f, "OSSL_HPKE_decap");
         ERR_set_error(0xf, 0xc0101, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   LAB_001036b9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined8 OSSL_HPKE_get_recommended_ikmelen(ulong param_1) {
   long lVar1;
   long lVar2;
   lVar1 = ossl_HPKE_KEM_INFO_find_id(param_1 & 0xffff);
   if (lVar1 != 0) {
      lVar2 = ossl_HPKE_KDF_INFO_find_id(param_1 >> 0x10 & 0xffff);
      if (lVar2 != 0) {
         lVar2 = ossl_HPKE_AEAD_INFO_find_id(param_1 >> 0x20 & 0xffff);
         if (lVar2 != 0) {
            return *(undefined8*)( lVar1 + 0x38 );
         }

      }

   }

   return 0;
}


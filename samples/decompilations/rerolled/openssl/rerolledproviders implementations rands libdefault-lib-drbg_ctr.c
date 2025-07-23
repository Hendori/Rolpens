undefined1 *drbg_ctr_gettable_ctx_params(void) {
   return known_gettable_ctx_params_5;
}
undefined1 *drbg_ctr_settable_ctx_params(void) {
   return known_settable_ctx_params_1;
}
bool drbg_ctr_verify_zeroization(long *param_1) {
   long lVar1;
   int iVar2;
   char *pcVar3;
   long lVar4;
   bool bVar5;
   lVar1 = param_1[0x1e];
   lVar4 = *param_1;
   if (lVar4 != 0) {
      iVar2 = CRYPTO_THREAD_read_lock();
      if (iVar2 == 0) {
         return false;
      }

      lVar4 = *param_1;
   }

   pcVar3 = (char*)( lVar1 + 0x34 );
   do {
      if (*pcVar3 != '\0') goto LAB_00100066;
      pcVar3 = pcVar3 + 1;
   }
 while ( pcVar3 != (char*)( lVar1 + 0x54 ) );
   if (( ( ( ( ( ( ( *(char*)( lVar1 + 0x54 ) == '\0' ) && ( *(char*)( lVar1 + 0x55 ) == '\0' ) ) && ( *(char*)( lVar1 + 0x56 ) == '\0' ) ) && ( ( ( *(char*)( lVar1 + 0x57 ) == '\0' && ( *(char*)( lVar1 + 0x58 ) == '\0' ) ) && ( ( *(char*)( lVar1 + 0x59 ) == '\0' && ( ( *(char*)( lVar1 + 0x5a ) == '\0' && ( *(char*)( lVar1 + 0x5b ) == '\0' ) ) ) ) ) ) ) ) && ( *(char*)( lVar1 + 0x5c ) == '\0' ) ) && ( ( ( ( ( ( *(char*)( lVar1 + 0x5d ) == '\0' && ( *(char*)( lVar1 + 0x5e ) == '\0' ) ) && ( *(char*)( lVar1 + 0x5f ) == '\0' ) ) && ( ( *(char*)( lVar1 + 0x60 ) == '\0' && ( *(char*)( lVar1 + 0x61 ) == '\0' ) ) ) ) && ( *(char*)( lVar1 + 0x62 ) == '\0' ) ) && ( ( ( *(char*)( lVar1 + 99 ) == '\0' && ( *(char*)( lVar1 + 100 ) == '\0' ) ) && ( ( ( *(char*)( lVar1 + 0x65 ) == '\0' && ( ( ( *(char*)( lVar1 + 0x66 ) == '\0' && ( *(char*)( lVar1 + 0x67 ) == '\0' ) ) && ( *(char*)( lVar1 + 0x68 ) == '\0' ) ) ) ) && ( ( ( *(char*)( lVar1 + 0x69 ) == '\0' && ( *(char*)( lVar1 + 0x6a ) == '\0' ) ) && ( *(char*)( lVar1 + 0x6b ) == '\0' ) ) ) ) ) ) ) ) ) ) && ( ( ( *(char*)( lVar1 + 0x6c ) == '\0' && ( *(char*)( lVar1 + 0x6d ) == '\0' ) ) && ( ( *(char*)( lVar1 + 0x6e ) == '\0' && ( ( ( *(char*)( lVar1 + 0x6f ) == '\0' && ( *(char*)( lVar1 + 0x70 ) == '\0' ) ) && ( *(char*)( lVar1 + 0x71 ) == '\0' ) ) ) ) ) ) ) ) && ( ( *(char*)( lVar1 + 0x72 ) == '\0' && ( *(char*)( lVar1 + 0x73 ) == '\0' ) ) )) {
      pcVar3 = (char*)( lVar1 + 0x80 );
      do {
         if (*pcVar3 != '\0') goto LAB_00100066;
         pcVar3 = pcVar3 + 1;
      }
 while ( pcVar3 != (char*)( lVar1 + 0xb0 ) );
      bVar5 = *(long*)( lVar1 + 0x78 ) == 0;
   }
 else {
      LAB_00100066:bVar5 = false;
   }

   if (lVar4 != 0) {
      CRYPTO_THREAD_unlock();
   }

   return bVar5;
}
undefined4 drbg_ctr_get_ctx_params(long *param_1, undefined8 param_2) {
   long lVar1;
   int iVar2;
   undefined4 uVar3;
   long lVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   int local_34;
   long local_30;
   lVar1 = param_1[0x1e];
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_34 = 0;
   iVar2 = ossl_drbg_get_ctx_params_no_lock(param_1, param_2, &local_34);
   if (iVar2 == 0) {
      LAB_001002d0:uVar3 = 0;
      goto LAB_001002a6;
   }

   if (local_34 != 0) {
      uVar3 = 1;
      goto LAB_001002a6;
   }

   if (*param_1 != 0) {
      iVar2 = CRYPTO_THREAD_read_lock();
      if (iVar2 == 0) goto LAB_001002d0;
   }

   lVar4 = OSSL_PARAM_locate(param_2, "use_derivation_function");
   uVar3 = 0;
   if (lVar4 == 0) {
      LAB_0010024e:lVar4 = OSSL_PARAM_locate(param_2, "cipher");
      if (lVar4 == 0) {
         LAB_00100282:uVar3 = ossl_drbg_get_ctx_params(param_1, param_2);
      }
 else if (*(long*)( lVar1 + 0x20 ) != 0) {
         uVar5 = EVP_CIPHER_get0_name();
         iVar2 = OSSL_PARAM_set_utf8_string(lVar4, uVar5);
         if (iVar2 != 0) goto LAB_00100282;
      }

   }
 else {
      iVar2 = OSSL_PARAM_set_int(lVar4, *(undefined4*)( lVar1 + 0x30 ));
      if (iVar2 != 0) goto LAB_0010024e;
   }

   if (*param_1 != 0) {
      CRYPTO_THREAD_unlock();
   }

   LAB_001002a6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void drbg_ctr_reseed_wrapper(void) {
   ossl_prov_drbg_reseed();
   return;
}
void drbg_ctr_generate_wrapper(void) {
   ossl_prov_drbg_generate();
   return;
}
void drbg_ctr_uninstantiate(long param_1) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0xf0 );
   OPENSSL_cleanse((void*)( lVar1 + 0x34 ), 0x20);
   OPENSSL_cleanse((void*)( lVar1 + 0x54 ), 0x10);
   OPENSSL_cleanse((void*)( lVar1 + 100 ), 0x10);
   OPENSSL_cleanse((void*)( lVar1 + 0x80 ), 0x30);
   *(undefined8*)( lVar1 + 0x78 ) = 0;
   ossl_prov_drbg_uninstantiate(param_1);
   return;
}
void drbg_ctr_free(long param_1) {
   undefined8 *puVar1;
   if (( param_1 != 0 ) && ( puVar1 = *(undefined8**)( param_1 + 0xf0 ) ),puVar1 != (undefined8*)0x0) {
      EVP_CIPHER_CTX_free((EVP_CIPHER_CTX*)*puVar1);
      EVP_CIPHER_CTX_free((EVP_CIPHER_CTX*)puVar1[1]);
      EVP_CIPHER_CTX_free((EVP_CIPHER_CTX*)puVar1[2]);
      EVP_CIPHER_free(puVar1[3]);
      EVP_CIPHER_free(puVar1[4]);
      CRYPTO_secure_clear_free(puVar1, 0xb0, "providers/implementations/rands/drbg_ctr.c", 0x290);
   }

   ossl_rand_drbg_free(param_1);
   return;
}
void drbg_ctr_new_wrapper(void) {
   ossl_rand_drbg_new();
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 drbg_ctr_set_ctx_params_locked(long param_1, undefined8 param_2) {
   long lVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   ulong uVar4;
   bool bVar5;
   int iVar6;
   int iVar7;
   undefined8 uVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   void *ptr;
   undefined8 uVar12;
   EVP_CIPHER_CTX *pEVar13;
   EVP_CIPHER_CTX *pEVar14;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   lVar1 = *(long*)( param_1 + 0xf0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ossl_prov_ctx_get0_libctx(*(undefined8*)( param_1 + 8 ));
   lVar9 = OSSL_PARAM_locate_const(param_2, "use_derivation_function");
   if (( lVar9 == 0 ) || ( iVar6 = iVar6 == 0 )) {
      bVar5 = false;
   }
 else {
      bVar5 = true;
      *(uint*)( lVar1 + 0x30 ) = ( uint )(local_44 != 0);
   }

   lVar9 = OSSL_PARAM_locate_const(param_2, "properties");
   if (lVar9 == 0) {
      LAB_001004e4:lVar10 = OSSL_PARAM_locate_const(param_2, "provider-name");
      if (( lVar10 == 0 ) || ( ( *(int*)( lVar10 + 8 ) == 4 && ( lVar10 = ossl_provider_find(uVar8, *(undefined8*)( lVar10 + 0x10 ), 1) ),lVar10 != 0 ) )) {
         lVar11 = OSSL_PARAM_locate_const(param_2, "cipher");
         if (lVar11 == 0) {
            ossl_provider_free(lVar10);
            if (!bVar5) {
               LAB_00100770:uVar8 = ossl_drbg_set_ctx_params(param_1, param_2);
               goto LAB_001004b8;
            }

            LAB_00100645:pauVar3 = *(undefined1(**) [16])( param_1 + 0xf0 );
            if (*(long*)pauVar3[2] == 0) {
               ERR_new();
               ERR_set_debug("providers/implementations/rands/drbg_ctr.c", 0x236, "drbg_ctr_init");
               ERR_set_error(0x39, 0x9b, 0);
               goto LAB_001004b2;
            }

            iVar6 = EVP_CIPHER_get_key_length();
            pEVar14 = *(EVP_CIPHER_CTX**)*pauVar3;
            *(long*)( pauVar3[2] + 8 ) = (long)iVar6;
            if (pEVar14 == (EVP_CIPHER_CTX*)0x0) {
               pEVar14 = EVP_CIPHER_CTX_new();
               lVar1 = *(long*)( *pauVar3 + 8 );
               *(EVP_CIPHER_CTX**)*pauVar3 = pEVar14;
               if (lVar1 == 0) goto LAB_001008f6;
               if (pEVar14 != (EVP_CIPHER_CTX*)0x0) goto LAB_00100683;
               LAB_00100912:ERR_new();
               uVar8 = 0x23f;
               LAB_00100923:ERR_set_debug("providers/implementations/rands/drbg_ctr.c", uVar8, "drbg_ctr_init");
               ERR_set_error(0x39, 0x80006, 0);
            }
 else {
               if (*(long*)( *pauVar3 + 8 ) == 0) {
                  LAB_001008f6:pEVar13 = EVP_CIPHER_CTX_new();
                  pEVar14 = *(EVP_CIPHER_CTX**)*pauVar3;
                  *(EVP_CIPHER_CTX**)( *pauVar3 + 8 ) = pEVar13;
                  if (( pEVar14 == (EVP_CIPHER_CTX*)0x0 ) || ( pEVar13 == (EVP_CIPHER_CTX*)0x0 )) goto LAB_00100912;
               }

               LAB_00100683:iVar7 = EVP_CipherInit_ex(pEVar14, *(EVP_CIPHER**)( pauVar3[1] + 8 ), (ENGINE*)0x0, (uchar*)0x0, (uchar*)0x0, 1);
               if (( iVar7 != 0 ) && ( iVar7 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX**)( *pauVar3 + 8 ), *(EVP_CIPHER**)pauVar3[2], (ENGINE*)0x0, (uchar*)0x0, (uchar*)0x0, 1) ),iVar7 != 0) {
                  iVar7 = *(int*)pauVar3[3];
                  *(int*)( param_1 + 0x78 ) = iVar6 << 3;
                  *(long*)( param_1 + 0xe0 ) = (long)iVar6 + 0x10;
                  if (iVar7 != 0) {
                     pEVar14 = *(EVP_CIPHER_CTX**)pauVar3[1];
                     if (pEVar14 == (EVP_CIPHER_CTX*)0x0) {
                        pEVar14 = EVP_CIPHER_CTX_new();
                        *(EVP_CIPHER_CTX**)pauVar3[1] = pEVar14;
                        if (pEVar14 == (EVP_CIPHER_CTX*)0x0) {
                           ERR_new();
                           uVar8 = 0x25a;
                           goto LAB_00100923;
                        }

                     }

                     iVar6 = EVP_CipherInit_ex(pEVar14, *(EVP_CIPHER**)( pauVar3[1] + 8 ), (ENGINE*)0x0, df_key_2, (uchar*)0x0, 1);
                     if (iVar6 == 0) {
                        ERR_new();
                        ERR_set_debug("providers/implementations/rands/drbg_ctr.c", 0x260, "drbg_ctr_init");
                        ERR_set_error(0x39, 0xcd, 0);
                        goto LAB_001008a0;
                     }

                  }

                  *(undefined8*)( param_1 + 0x80 ) = 0x10000;
                  uVar12 = _UNK_001033f8;
                  uVar8 = __LC6;
                  uVar4 = *(ulong*)( *(long*)( param_1 + 0xf0 ) + 0x28 );
                  if (*(int*)( *(long*)( param_1 + 0xf0 ) + 0x30 ) == 0) {
                     uVar8 = 0x7fffffff;
                     if (uVar4 != 0) {
                        uVar8 = *(undefined8*)( param_1 + 0xe0 );
                     }

                     *(undefined1(*) [16])( param_1 + 0x98 ) = (undefined1[16])0x0;
                     *(undefined8*)( param_1 + 0x88 ) = uVar8;
                     *(undefined8*)( param_1 + 0x90 ) = uVar8;
                     *(undefined8*)( param_1 + 0xa8 ) = uVar8;
                     *(undefined8*)( param_1 + 0xb0 ) = uVar8;
                  }
 else {
                     *(undefined8*)( param_1 + 0x88 ) = __LC6;
                     *(undefined8*)( param_1 + 0x90 ) = uVar12;
                     *(undefined8*)( param_1 + 0x98 ) = uVar8;
                     *(undefined8*)( param_1 + 0xa0 ) = uVar12;
                     uVar8 = _UNK_00103408;
                     *(undefined8*)( param_1 + 0xa8 ) = __LC7;
                     *(undefined8*)( param_1 + 0xb0 ) = uVar8;
                     if (uVar4 != 0) {
                        *(ulong*)( param_1 + 0x88 ) = uVar4;
                        *(ulong*)( param_1 + 0x98 ) = uVar4 >> 1;
                     }

                  }

                  goto LAB_00100770;
               }

               ERR_new();
               ERR_set_debug("providers/implementations/rands/drbg_ctr.c", 0x247, "drbg_ctr_init");
               ERR_set_error(0x39, 0xd0, 0);
            }

            LAB_001008a0:EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX**)*pauVar3);
            EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX**)( *pauVar3 + 8 ));
            *pauVar3 = (undefined1[16])0x0;
         }
 else {
            lVar2 = *(long*)( lVar11 + 0x10 );
            if (( *(int*)( lVar11 + 8 ) == 4 ) && ( 2 < *(ulong*)( lVar11 + 0x18 ) )) {
               iVar6 = OPENSSL_strcasecmp(&_LC5, lVar2 + -3 + *(ulong*)( lVar11 + 0x18 ));
               if (iVar6 == 0) {
                  ptr = (void*)CRYPTO_strndup(lVar2, *(undefined8*)( lVar11 + 0x18 ), "providers/implementations/rands/drbg_ctr.c", 0x2f7);
                  if (ptr == (void*)0x0) goto LAB_001007d0;
                  *(undefined4*)( (long)ptr + *(long*)( lVar11 + 0x18 ) + -3 ) = 0x424345;
                  EVP_CIPHER_free(*(undefined8*)( lVar1 + 0x18 ));
                  EVP_CIPHER_free(*(undefined8*)( lVar1 + 0x20 ));
                  ERR_set_mark();
                  lVar11 = evp_cipher_fetch_from_prov(lVar10, lVar2, 0);
                  *(long*)( lVar1 + 0x20 ) = lVar11;
                  if (lVar11 == 0) {
                     ERR_pop_to_mark();
                     uVar12 = EVP_CIPHER_fetch(uVar8, lVar2, lVar9);
                     *(undefined8*)( lVar1 + 0x20 ) = uVar12;
                  }
 else {
                     ERR_clear_last_mark();
                  }

                  ERR_set_mark();
                  lVar11 = evp_cipher_fetch_from_prov(lVar10, ptr, 0);
                  *(long*)( lVar1 + 0x18 ) = lVar11;
                  if (lVar11 == 0) {
                     ERR_pop_to_mark();
                     uVar8 = EVP_CIPHER_fetch(uVar8, ptr, lVar9);
                     *(undefined8*)( lVar1 + 0x18 ) = uVar8;
                  }
 else {
                     ERR_clear_last_mark();
                  }

                  CRYPTO_free(ptr);
                  if (( *(long*)( lVar1 + 0x20 ) != 0 ) && ( *(long*)( lVar1 + 0x18 ) != 0 )) {
                     ossl_provider_free(lVar10);
                     goto LAB_00100645;
                  }

                  ERR_new();
                  ERR_set_debug("providers/implementations/rands/drbg_ctr.c", 0x314, "drbg_ctr_set_ctx_params_locked");
                  uVar8 = 0xcf;
               }
 else {
                  ERR_new();
                  ERR_set_debug("providers/implementations/rands/drbg_ctr.c", 0x2f3, "drbg_ctr_set_ctx_params_locked");
                  uVar8 = 0xce;
               }

               ERR_set_error(0x39, uVar8, 0);
            }

            LAB_001007d0:ossl_provider_free(lVar10);
         }

      }

   }
 else if (*(int*)( lVar9 + 8 ) == 4) {
      lVar9 = *(long*)( lVar9 + 0x10 );
      goto LAB_001004e4;
   }

   LAB_001004b2:uVar8 = 0;
   LAB_001004b8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
undefined4 drbg_ctr_set_ctx_params(long *param_1, undefined8 param_2) {
   int iVar1;
   undefined4 uVar2;
   if (( *param_1 != 0 ) && ( iVar1 = iVar1 == 0 )) {
      return 0;
   }

   uVar2 = drbg_ctr_set_ctx_params_locked(param_1, param_2);
   if (*param_1 != 0) {
      CRYPTO_THREAD_unlock();
   }

   return uVar2;
}
undefined4 drbg_ctr_instantiate_wrapper(long *param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   int iVar1;
   undefined4 uVar2;
   if (( *param_1 != 0 ) && ( iVar1 = iVar1 == 0 )) {
      return 0;
   }

   iVar1 = ossl_prov_is_running();
   if (( iVar1 == 0 ) || ( iVar1 = drbg_ctr_set_ctx_params_locked(param_1, param_6) ),iVar1 == 0) {
      uVar2 = 0;
   }
 else {
      uVar2 = ossl_prov_drbg_instantiate(param_1, param_2, param_3, param_4, param_5);
   }

   if (*param_1 != 0) {
      CRYPTO_THREAD_unlock();
   }

   return uVar2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 drbg_ctr_new(long param_1) {
   ulong uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   long lVar4;
   lVar4 = CRYPTO_secure_zalloc(0xb0, "providers/implementations/rands/drbg_ctr.c", 0x271);
   uVar3 = _UNK_00103418;
   uVar2 = __LC9;
   if (lVar4 != 0) {
      *(undefined4*)( lVar4 + 0x30 ) = 1;
      *(long*)( param_1 + 0xf0 ) = lVar4;
      uVar1 = *(ulong*)( lVar4 + 0x28 );
      *(undefined8*)( param_1 + 0x80 ) = uVar2;
      *(undefined8*)( param_1 + 0x88 ) = uVar3;
      uVar3 = _UNK_00103428;
      uVar2 = __LC10;
      *(undefined8*)( param_1 + 0xb0 ) = 0x7fffffff;
      *(undefined8*)( param_1 + 0x90 ) = uVar2;
      *(undefined8*)( param_1 + 0x98 ) = uVar3;
      uVar2 = _UNK_00103408;
      *(undefined8*)( param_1 + 0xa0 ) = __LC7;
      *(undefined8*)( param_1 + 0xa8 ) = uVar2;
      if (uVar1 != 0) {
         *(ulong*)( param_1 + 0x88 ) = uVar1;
         *(ulong*)( param_1 + 0x98 ) = uVar1 >> 1;
      }

      return 1;
   }

   return 0;
}
undefined4 drbg_ctr_uninstantiate_wrapper(long *param_1) {
   long lVar1;
   int iVar2;
   undefined4 uVar3;
   if (( *param_1 != 0 ) && ( iVar2 = iVar2 == 0 )) {
      return 0;
   }

   lVar1 = param_1[0x1e];
   OPENSSL_cleanse((void*)( lVar1 + 0x34 ), 0x20);
   OPENSSL_cleanse((void*)( lVar1 + 0x54 ), 0x10);
   OPENSSL_cleanse((void*)( lVar1 + 100 ), 0x10);
   OPENSSL_cleanse((void*)( lVar1 + 0x80 ), 0x30);
   *(undefined8*)( lVar1 + 0x78 ) = 0;
   uVar3 = ossl_prov_drbg_uninstantiate(param_1);
   if (*param_1 != 0) {
      CRYPTO_THREAD_unlock();
   }

   return uVar3;
}
undefined8 ctr_BCC_update(long param_1, ulong *param_2, ulong param_3) {
   ulong uVar1;
   ulong uVar2;
   int iVar3;
   uint uVar4;
   undefined8 uVar5;
   uint uVar6;
   long lVar7;
   ulong *puVar8;
   int iVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   int local_7c[9];
   ulong local_58;
   ulong uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != (ulong*)0x0 ) && ( param_3 != 0 )) {
      lVar7 = *(long*)( param_1 + 0x78 );
      if (( lVar7 == 0 ) || ( uVar10 = param_3 < uVar10 )) {
         if (0xf < param_3) goto LAB_00100c80;
      }
 else {
         memcpy((void*)( param_1 + 100 + lVar7 ), param_2, uVar10);
         iVar9 = 0x20;
         uVar1 = *(ulong*)( param_1 + 100 );
         uVar2 = *(ulong*)( param_1 + 0x6c );
         if (*(long*)( param_1 + 0x28 ) != 0x10) {
            iVar9 = 0x30;
            local_58 = uVar1;
            uStack_50 = uVar2;
         }

         puVar8 = (ulong*)( param_1 + 0x80 );
         local_7c[0] = 0x10;
         *puVar8 = *puVar8 ^ uVar1;
         *(ulong*)( param_1 + 0x88 ) = *(ulong*)( param_1 + 0x88 ) ^ uVar2;
         *(ulong*)( param_1 + 0x90 ) = uVar1 ^ *(ulong*)( param_1 + 0x90 );
         *(ulong*)( param_1 + 0x98 ) = uVar2 ^ *(ulong*)( param_1 + 0x98 );
         if (iVar9 == 0x30) {
            *(ulong*)( param_1 + 0xa0 ) = *(ulong*)( param_1 + 0xa0 ) ^ local_58;
            *(ulong*)( param_1 + 0xa8 ) = *(ulong*)( param_1 + 0xa8 ) ^ uStack_50;
         }

         iVar3 = EVP_CipherUpdate(*(EVP_CIPHER_CTX**)( param_1 + 0x10 ), (uchar*)puVar8, local_7c, (uchar*)puVar8, iVar9);
         if (( iVar3 == 0 ) || ( local_7c[0] != iVar9 )) {
            LAB_00100cef:uVar5 = 0;
            goto LAB_00100cf1;
         }

         *(undefined8*)( param_1 + 0x78 ) = 0;
         param_2 = (ulong*)( (long)param_2 + uVar10 );
         for (param_3 = lVar7 + -0x10 + param_3; 0xf < param_3; param_3 = param_3 - 0x10) {
            LAB_00100c80:puVar8 = (ulong*)( param_1 + 0x80 );
            uVar10 = *param_2;
            uVar1 = param_2[1];
            iVar9 = 0x20;
            if (*(long*)( param_1 + 0x28 ) != 0x10) {
               iVar9 = 0x30;
               local_58 = uVar10;
               uStack_50 = uVar1;
            }

            local_7c[0] = 0x10;
            *puVar8 = *puVar8 ^ uVar10;
            *(ulong*)( param_1 + 0x88 ) = *(ulong*)( param_1 + 0x88 ) ^ uVar1;
            *(ulong*)( param_1 + 0x90 ) = *(ulong*)( param_1 + 0x90 ) ^ uVar10;
            *(ulong*)( param_1 + 0x98 ) = *(ulong*)( param_1 + 0x98 ) ^ uVar1;
            if (iVar9 == 0x30) {
               *(ulong*)( param_1 + 0xa0 ) = *(ulong*)( param_1 + 0xa0 ) ^ local_58;
               *(ulong*)( param_1 + 0xa8 ) = *(ulong*)( param_1 + 0xa8 ) ^ uStack_50;
            }

            iVar3 = EVP_CipherUpdate(*(EVP_CIPHER_CTX**)( param_1 + 0x10 ), (uchar*)puVar8, local_7c, (uchar*)puVar8, iVar9);
            if (( iVar3 == 0 ) || ( local_7c[0] != iVar9 )) goto LAB_00100cef;
            param_2 = param_2 + 2;
         }

         if (param_3 == 0) goto LAB_00100d33;
         lVar7 = *(long*)( param_1 + 0x78 );
      }

      puVar8 = (ulong*)( param_1 + 100 + lVar7 );
      uVar4 = (uint)param_3;
      uVar10 = param_3 & 0xffffffff;
      if (uVar4 < 8) {
         if (( param_3 & 4 ) == 0) {
            if (( uVar4 != 0 ) && ( *(char*)puVar8 = (char)*param_2(param_3 & 2) != 0 )) {
               *(undefined2*)( (long)puVar8 + ( uVar10 - 2 ) ) = *(undefined2*)( (long)param_2 + ( uVar10 - 2 ) );
            }

         }
 else {
            *(int*)puVar8 = (int)*param_2;
            *(undefined4*)( (long)puVar8 + ( uVar10 - 4 ) ) = *(undefined4*)( (long)param_2 + ( uVar10 - 4 ) );
         }

      }
 else {
         *puVar8 = *param_2;
         *(undefined8*)( (long)puVar8 + ( ( param_3 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)param_2 + ( ( param_3 & 0xffffffff ) - 8 ) );
         lVar7 = (long)puVar8 - ( ( ulong )(puVar8 + 1) & 0xfffffffffffffff8 );
         uVar4 = uVar4 + (int)lVar7 & 0xfffffff8;
         if (7 < uVar4) {
            uVar6 = 0;
            do {
               uVar10 = (ulong)uVar6;
               uVar6 = uVar6 + 8;
               *(undefined8*)( ( ( ulong )(puVar8 + 1) & 0xfffffffffffffff8 ) + uVar10 ) = *(undefined8*)( (long)param_2 + ( uVar10 - lVar7 ) );
            }
 while ( uVar6 < uVar4 );
         }

      }

      *(long*)( param_1 + 0x78 ) = *(long*)( param_1 + 0x78 ) + param_3;
   }

   LAB_00100d33:uVar5 = 1;
   LAB_00100cf1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool ctr_update(long param_1, ulong *param_2, ulong param_3, ulong *param_4, ulong param_5, long param_6, undefined8 param_7) {
   uchar *key;
   uchar *out;
   ulong *out_00;
   ulong *puVar1;
   byte *pbVar2;
   undefined8 *puVar3;
   long lVar4;
   undefined8 uVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   int iVar10;
   uint uVar11;
   int iVar12;
   ulong uVar13;
   ulong uVar14;
   uint uVar15;
   ulong uVar16;
   uint uVar17;
   uint uVar18;
   ulong uVar19;
   uint uVar20;
   uint uVar21;
   uint uVar22;
   uint uVar23;
   ulong uVar24;
   uint uVar25;
   uint uVar26;
   uint uVar27;
   uint uVar28;
   uint uVar29;
   long in_FS_OFFSET;
   bool bVar30;
   byte local_158;
   char local_148;
   byte local_130;
   byte local_12c;
   byte local_128;
   byte local_124;
   byte local_108;
   byte local_104;
   ulong local_100;
   int local_e4;
   int local_e0;
   int local_dc;
   undefined8 local_d8;
   undefined8 uStack_d0;
   ulong local_c8;
   ulong uStack_c0;
   ulong local_b8;
   ulong uStack_b0;
   uchar local_a8[8];
   undefined8 auStack_a0[9];
   ulong local_58;
   ulong uStack_50;
   long local_40;
   puVar3 = *(undefined8**)( param_1 + 0xf0 );
   local_d8 = *(undefined8*)( (long)puVar3 + 0x54 );
   uStack_d0 = *(undefined8*)( (long)puVar3 + 0x5c );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e4 = 0x10;
   uVar6 = *(byte*)( (long)puVar3 + 99 ) + 1;
   uVar29 = ( uint ) * (byte*)( (long)puVar3 + 0x62 ) + ( uVar6 >> 8 );
   uVar23 = ( uint ) * (byte*)( (long)puVar3 + 0x61 ) + ( uVar29 >> 8 );
   uVar28 = ( uint ) * (byte*)( puVar3 + 0xc ) + ( uVar23 >> 8 );
   uVar26 = ( uint ) * (byte*)( (long)puVar3 + 0x5f ) + ( uVar28 >> 8 );
   uVar25 = ( uint ) * (byte*)( (long)puVar3 + 0x5e ) + ( uVar26 >> 8 );
   uVar22 = ( uint ) * (byte*)( (long)puVar3 + 0x5d ) + ( uVar25 >> 8 );
   uVar21 = ( uint ) * (byte*)( (long)puVar3 + 0x5c ) + ( uVar22 >> 8 );
   uVar15 = ( uint ) * (byte*)( (long)puVar3 + 0x5b ) + ( uVar21 >> 8 );
   uVar20 = ( uint ) * (byte*)( (long)puVar3 + 0x5a ) + ( uVar15 >> 8 );
   uVar27 = ( uint ) * (byte*)( (long)puVar3 + 0x59 ) + ( uVar20 >> 8 );
   uVar7 = ( uVar27 >> 8 ) + ( uint ) * (byte*)( puVar3 + 0xb );
   uVar17 = ( uint ) * (byte*)( (long)puVar3 + 0x57 ) + ( uVar7 >> 8 );
   uVar8 = ( uVar17 >> 8 ) + ( uint ) * (byte*)( (long)puVar3 + 0x56 );
   uVar18 = ( uint ) * (byte*)( (long)puVar3 + 0x55 ) + ( uVar8 >> 8 );
   uVar11 = ( uint ) * (byte*)( (long)puVar3 + 0x54 ) + ( uVar18 >> 8 );
   local_130 = (byte)uVar7;
   local_12c = (byte)uVar17;
   local_128 = (byte)uVar8;
   local_124 = (byte)uVar18;
   local_148 = (char)uVar11;
   local_c8 = (ulong)uVar11 & 0xff | ( ( ( ( ( ( ( ulong )(uVar15 & 0xff) << 8 | ( ulong )(uVar20 & 0xff) ) << 8 | ( ulong )(uVar27 & 0xff) ) << 8 | (ulong)local_130 ) << 8 | (ulong)local_12c ) << 8 | (ulong)local_128 ) << 8 | (ulong)local_124 ) << 8;
   uStack_c0 = ( ( ( ( ( ( ( ulong )(byte)(*(byte*)( (long)puVar3 + 99 ) + 1) << 8 | ( ulong )(uVar29 & 0xff) ) << 8 | ( ulong )(uVar23 & 0xff) ) << 8 | ( ulong )(uVar28 & 0xff) ) << 8 | ( ulong )(uVar26 & 0xff) ) << 8 | ( ulong )(uVar25 & 0xff) ) << 8 | ( ulong )(uVar22 & 0xff) ) << 8 | ( ulong )(uVar21 & 0xff);
   iVar12 = 0x20;
   *(ulong*)( (long)puVar3 + 0x54 ) = local_c8;
   *(ulong*)( (long)puVar3 + 0x5c ) = uStack_c0;
   if (puVar3[5] != 0x10) {
      uVar9 = ( uVar6 & 0xff ) + 1;
      uVar11 = ( uVar29 & 0xff ) + ( uVar9 >> 8 );
      uVar6 = ( uVar23 & 0xff ) + ( uVar11 >> 8 );
      uVar28 = ( uVar28 & 0xff ) + ( uVar6 >> 8 );
      uVar26 = ( uVar26 & 0xff ) + ( uVar28 >> 8 );
      uVar25 = ( uVar25 & 0xff ) + ( uVar26 >> 8 );
      uVar22 = ( uVar22 & 0xff ) + ( uVar25 >> 8 );
      uVar21 = ( uVar21 & 0xff ) + ( uVar22 >> 8 );
      uVar15 = ( uVar15 & 0xff ) + ( uVar21 >> 8 );
      uVar20 = ( uVar20 & 0xff ) + ( uVar15 >> 8 );
      uVar27 = ( uVar27 & 0xff ) + ( uVar20 >> 8 );
      uVar23 = ( uVar7 & 0xff ) + ( uVar27 >> 8 );
      uVar17 = ( uVar17 & 0xff ) + ( uVar23 >> 8 );
      uVar7 = ( uVar8 & 0xff ) + ( uVar17 >> 8 );
      uVar8 = ( uVar18 & 0xff ) + ( uVar7 >> 8 );
      local_130 = (byte)uVar7;
      local_158 = (byte)uVar9;
      local_108 = (byte)uVar6;
      local_b8 = ( ( ( ( ( ( ( ulong )(uVar15 & 0xff) << 8 | ( ulong )(uVar20 & 0xff) ) << 8 | ( ulong )(uVar27 & 0xff) ) << 8 | ( ulong )(uVar23 & 0xff) ) << 8 | ( ulong )(uVar17 & 0xff) ) << 8 | (ulong)local_130 ) << 8 | ( ulong )(uVar8 & 0xff) ) << 8 | ( ulong )(byte)(local_148 + (char)( uVar8 >> 8 ));
      iVar12 = 0x30;
      local_104 = (byte)uVar28;
      uStack_b0 = ( ( ( ( ( ( (ulong)local_158 << 8 | (ulong)uVar11 & 0xff ) << 8 | (ulong)local_108 ) << 8 | (ulong)local_104 ) << 8 | ( ulong )(uVar26 & 0xff) ) << 8 | ( ulong )(uVar25 & 0xff) ) << 8 | ( ulong )(uVar22 & 0xff) ) << 8 | ( ulong )(uVar21 & 0xff);
      *(ulong*)( (long)puVar3 + 0x54 ) = local_b8;
      *(ulong*)( (long)puVar3 + 0x5c ) = uStack_b0;
   }

   iVar10 = EVP_CipherUpdate((EVP_CIPHER_CTX*)*puVar3, local_a8, &local_e4, (uchar*)&local_d8, iVar12);
   if (( iVar10 == 0 ) || ( local_e4 != iVar12 )) goto LAB_001012b2;
   uVar13 = puVar3[5];
   key = (uchar*)( (long)puVar3 + 0x34 );
   memcpy(key, local_a8, uVar13);
   uVar5 = *(undefined8*)( (long)auStack_a0 + uVar13 );
   *(undefined8*)( (long)puVar3 + 0x54 ) = *(undefined8*)( local_a8 + uVar13 );
   *(undefined8*)( (long)puVar3 + 0x5c ) = uVar5;
   if (*(int*)( puVar3 + 6 ) == 0) {
      uVar19 = param_5;
      if (( param_2 == (ulong*)0x0 ) || ( param_3 == 0 )) {
         LAB_001019fc:if (( param_4 == (ulong*)0x0 ) || ( param_5 == 0 )) goto LAB_001017d0;
         if (uVar13 <= param_5) {
            uVar19 = uVar13;
         }

         if (uVar19 != 0) goto LAB_00101a28;
      }
 else {
         uVar14 = param_3;
         if (uVar13 <= param_3) {
            uVar14 = uVar13;
         }

         if (uVar14 != 0) {
            if (uVar14 - 1 < 7) {
               uVar16 = 0;
            }
 else {
               uVar16 = 0;
               if (0xe < ( ulong )((long)key - ( (long)param_2 + 1 ))) {
                  if (uVar14 - 1 < 0xf) {
                     uVar24 = 0;
                     uVar16 = uVar14;
                     LAB_00101d6f:puVar1 = (ulong*)( (long)puVar3 + uVar24 + 0x34 );
                     *puVar1 = *(ulong*)( (long)param_2 + uVar24 ) ^ *puVar1;
                     uVar24 = uVar24 + ( uVar16 & 0xfffffffffffffff8 );
                     if (( uVar16 & 7 ) == 0) goto LAB_001018b1;
                  }
 else {
                     uVar16 = param_2[1];
                     *(ulong*)( (long)puVar3 + 0x34 ) = *(ulong*)( (long)puVar3 + 0x34 ) ^ *param_2;
                     *(ulong*)( (long)puVar3 + 0x3c ) = *(ulong*)( (long)puVar3 + 0x3c ) ^ uVar16;
                     if (uVar14 >> 4 != 1) {
                        uVar16 = param_2[3];
                        *(ulong*)( (long)puVar3 + 0x44 ) = *(ulong*)( (long)puVar3 + 0x44 ) ^ param_2[2];
                        *(ulong*)( (long)puVar3 + 0x4c ) = *(ulong*)( (long)puVar3 + 0x4c ) ^ uVar16;
                     }

                     uVar24 = uVar14 & 0xfffffffffffffff0;
                     if (( uVar14 & 0xf ) == 0) goto LAB_001018b1;
                     uVar16 = uVar14 - uVar24;
                     if (6 < ( uVar14 - uVar24 ) - 1) goto LAB_00101d6f;
                  }

                  pbVar2 = (byte*)( (long)puVar3 + uVar24 + 0x34 );
                  *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_2 + uVar24 );
                  if (uVar24 + 1 < uVar14) {
                     pbVar2 = (byte*)( (long)puVar3 + uVar24 + 0x35 );
                     *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_2 + uVar24 + 1 );
                     if (uVar24 + 2 < uVar14) {
                        pbVar2 = (byte*)( (long)puVar3 + uVar24 + 0x36 );
                        *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_2 + uVar24 + 2 );
                        if (uVar24 + 3 < uVar14) {
                           pbVar2 = (byte*)( (long)puVar3 + uVar24 + 0x37 );
                           *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_2 + uVar24 + 3 );
                           if (uVar24 + 4 < uVar14) {
                              pbVar2 = (byte*)( (long)puVar3 + uVar24 + 0x38 );
                              *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_2 + uVar24 + 4 );
                              if (uVar24 + 5 < uVar14) {
                                 pbVar2 = (byte*)( (long)puVar3 + uVar24 + 0x39 );
                                 *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_2 + uVar24 + 5 );
                                 if (uVar24 + 6 < uVar14) {
                                    pbVar2 = (byte*)( (long)puVar3 + uVar24 + 0x3a );
                                    *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_2 + uVar24 + 6 );
                                 }

                              }

                           }

                        }

                     }

                  }

                  goto LAB_001018b1;
               }

            }

            do {
               pbVar2 = (byte*)( (long)puVar3 + uVar16 + 0x34 );
               *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_2 + uVar16 );
               uVar16 = uVar16 + 1;
            }
 while ( uVar14 != uVar16 );
         }

         LAB_001018b1:if (uVar13 < param_3) {
            param_3 = param_3 - uVar13;
            uVar14 = 0x10;
            if (param_3 < 0x11) {
               uVar14 = param_3;
            }

            if (( uVar14 - 1 < 7 ) || ( (long)puVar3 + ( 0x54 - ( (long)param_2 + uVar13 + 1 ) ) < 0xf )) {
               *(byte*)( (long)puVar3 + 0x54 ) = *(byte*)( (long)puVar3 + 0x54 ) ^ *(byte*)( (long)param_2 + uVar13 );
               if (( ( ( 1 < param_3 ) && ( ( ( *(byte*)( (long)puVar3 + 0x55 ) = *(byte*)( (long)puVar3 + 0x55 ) ^ *(byte*)( (long)param_2 + uVar13 + 1 ) ),2 < param_3 && ( *(byte*)( (long)puVar3 + 0x56 ) = *(byte*)( (long)puVar3 + 0x56 ) ^ *(byte*)( (long)param_2 + uVar13 + 2 ) ),3 < param_3 ) ) && ( *(byte*)( (long)puVar3 + 0x57 ) = *(byte*)( (long)puVar3 + 0x57 ) ^ *(byte*)( (long)param_2 + uVar13 + 3 ) ),4 < param_3 ) )) ( ( ( *(byte*)( puVar3 + 0xb ) = *(byte*)( puVar3 + 0xb ) ^ *(byte*)( (long)param_2 + uVar13 + 4 ) ),5 < param_3 && ( *(byte*)( (long)puVar3 + 0x59 ) = *(byte*)( (long)puVar3 + 0x59 ) ^ *(byte*)( (long)param_2 + uVar13 + 5 ) ),6 < param_3 ) ) && ( *(byte*)( (long)puVar3 + 0x5a ) = 7 < param_3 ) && ( ( ( ( *(byte*)( (long)puVar3 + 0x5b ) = *(byte*)( (long)puVar3 + 0x5b ) ^ *(byte*)( (long)param_2 + uVar13 + 7 ) ),8 < param_3 && ( *(byte*)( (long)puVar3 + 0x5c ) = *(byte*)( (long)puVar3 + 0x5c ) ^ *(byte*)( (long)param_2 + uVar13 + 8 ) ),9 < param_3 ) ) && ( ( *(byte*)( (long)puVar3 + 0x5d ) = *(byte*)( (long)puVar3 + 0x5d ) ^ *(byte*)( (long)param_2 + uVar13 + 9 ) ),10 < param_3 && ( ( ( *(byte*)( (long)puVar3 + 0x5e ) = *(byte*)( (long)puVar3 + 0x5e ) ^ *(byte*)( (long)param_2 + uVar13 + 10 ) ),0xb < param_3 && ( *(byte*)( (long)puVar3 + 0x5f ) = *(byte*)( (long)puVar3 + 0x5f ) ^ *(byte*)( (long)param_2 + uVar13 + 0xb ) ),0xc < param_3 ) ) && ( *(byte*)( puVar3 + 0xc ) = *(byte*)( puVar3 + 0xc ) ^ *(byte*)( (long)param_2 + uVar13 + 0xc ) ),0xd < param_3 ) ) && ( ( *(byte*)( (long)puVar3 + 0x61 ) = *(byte*)( (long)puVar3 + 0x61 ) ^ *(byte*)( (long)param_2 + uVar13 + 0xd ) ),0xe < param_3 && ( *(byte*)( (long)puVar3 + 0x62 ) = *(byte*)( (long)puVar3 + 0x62 ) ^ *(byte*)( (long)param_2 + uVar13 + 0xe ) ),0xf < param_3 ) * (byte*)( (long)puVar3 + 99 ) = *(byte*)( (long)puVar3 + 99 ) ^ *(byte*)( (long)param_2 + uVar13 + 0xf );
            }

         }
 else if (uVar14 - 1 == 0xf) {
            uVar14 = ( (ulong*)( (long)param_2 + uVar13 ) )[1];
            *(ulong*)( (long)puVar3 + 0x54 ) = *(ulong*)( (long)param_2 + uVar13 ) ^ *(ulong*)( (long)puVar3 + 0x54 );
            *(ulong*)( (long)puVar3 + 0x5c ) = uVar14 ^ *(ulong*)( (long)puVar3 + 0x5c );
         }
 else {
            *(ulong*)( (long)puVar3 + 0x54 ) = *(ulong*)( (long)param_2 + uVar13 ) ^ *(ulong*)( (long)puVar3 + 0x54 );
            if (( ( param_3 != 8 ) && ( *(byte*)( (long)puVar3 + 0x5c ) = *(byte*)( (long)puVar3 + 0x5c ) ^ *(byte*)( (long)param_2 + uVar13 + 8 ) ),param_3 != 9 )) &&( ( *(byte*)( (long)puVar3 + 0x5d ) = *(byte*)( (long)puVar3 + 0x5d ) ^ *(byte*)( (long)param_2 + uVar13 + 9 ) ),param_3 != 10 && ( ( ( ( *(byte*)( (long)puVar3 + 0x5e ) = *(byte*)( (long)puVar3 + 0x5e ) ^ *(byte*)( (long)param_2 + uVar13 + 10 ) ),param_3 != 0xb && ( *(byte*)( (long)puVar3 + 0x5f ) = *(byte*)( (long)puVar3 + 0x5f ) ^ *(byte*)( (long)param_2 + uVar13 + 0xb ) ),param_3 != 0xc ) ) && ( *(byte*)( puVar3 + 0xc ) = *(byte*)( puVar3 + 0xc ) ^ *(byte*)( (long)param_2 + uVar13 + 0xc ) ),param_3 != 0xd ) ) && ( *(byte*)( (long)puVar3 + 0x61 ) = param_3 == 0xf ) * (byte*)( (long)puVar3 + 0x62 ) = *(byte*)( (long)puVar3 + 0x62 ) ^ *(byte*)( (long)param_2 + uVar13 + 0xe );
         }

      }

      goto LAB_001019fc;
   }

   if (( param_5 == 0 ) || ( param_4 == (ulong*)0x0 )) goto LAB_001017d0;
   if (uVar13 <= param_5) {
      uVar19 = uVar13;
   }

   LAB_00101a28:if (uVar19 - 1 < 7) {
      uVar14 = 0;
   }
 else {
      uVar14 = 0;
      if (0xe < ( ulong )((long)key - ( (long)param_4 + 1 ))) {
         if (uVar19 - 1 < 0xf) {
            uVar16 = 0;
            uVar14 = uVar19;
            LAB_00101c3a:puVar1 = (ulong*)( (long)puVar3 + uVar16 + 0x34 );
            *puVar1 = *(ulong*)( (long)param_4 + uVar16 ) ^ *puVar1;
            uVar16 = uVar16 + ( uVar14 & 0xfffffffffffffff8 );
            if (( uVar14 & 7 ) == 0) goto LAB_00101a69;
         }
 else {
            uVar14 = param_4[1];
            *(ulong*)( (long)puVar3 + 0x34 ) = *(ulong*)( (long)puVar3 + 0x34 ) ^ *param_4;
            *(ulong*)( (long)puVar3 + 0x3c ) = *(ulong*)( (long)puVar3 + 0x3c ) ^ uVar14;
            if (uVar19 >> 4 != 1) {
               uVar14 = param_4[3];
               *(ulong*)( (long)puVar3 + 0x44 ) = *(ulong*)( (long)puVar3 + 0x44 ) ^ param_4[2];
               *(ulong*)( (long)puVar3 + 0x4c ) = *(ulong*)( (long)puVar3 + 0x4c ) ^ uVar14;
            }

            uVar16 = uVar19 & 0xfffffffffffffff0;
            if (( uVar19 & 0xf ) == 0) goto LAB_00101a69;
            uVar14 = uVar19 - uVar16;
            if (6 < ( uVar19 - uVar16 ) - 1) goto LAB_00101c3a;
         }

         pbVar2 = (byte*)( (long)puVar3 + uVar16 + 0x34 );
         *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_4 + uVar16 );
         if (uVar16 + 1 < uVar19) {
            pbVar2 = (byte*)( (long)puVar3 + uVar16 + 0x35 );
            *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_4 + uVar16 + 1 );
            if (uVar16 + 2 < uVar19) {
               pbVar2 = (byte*)( (long)puVar3 + uVar16 + 0x36 );
               *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_4 + uVar16 + 2 );
               if (uVar16 + 3 < uVar19) {
                  pbVar2 = (byte*)( (long)puVar3 + uVar16 + 0x37 );
                  *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_4 + uVar16 + 3 );
                  if (uVar16 + 4 < uVar19) {
                     pbVar2 = (byte*)( (long)puVar3 + uVar16 + 0x38 );
                     *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_4 + uVar16 + 4 );
                     if (uVar16 + 5 < uVar19) {
                        pbVar2 = (byte*)( (long)puVar3 + uVar16 + 0x39 );
                        *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_4 + uVar16 + 5 );
                        if (uVar16 + 6 < uVar19) {
                           pbVar2 = (byte*)( (long)puVar3 + uVar16 + 0x3a );
                           *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_4 + uVar16 + 6 );
                        }

                     }

                  }

               }

            }

         }

         goto LAB_00101a69;
      }

   }

   do {
      pbVar2 = (byte*)( (long)puVar3 + uVar14 + 0x34 );
      *pbVar2 = *pbVar2 ^ *(byte*)( (long)param_4 + uVar14 );
      uVar14 = uVar14 + 1;
   }
 while ( uVar14 != uVar19 );
}
LAB_00101a69:if (uVar13 < param_5) {
   param_5 = param_5 - uVar13;
   uVar19 = 0x10;
   if (param_5 < 0x11) {
      uVar19 = param_5;
   }

   if (( uVar19 - 1 < 7 ) || ( (long)puVar3 + ( 0x54 - ( (long)param_4 + uVar13 + 1 ) ) < 0xf )) {
      *(byte*)( (long)puVar3 + 0x54 ) = *(byte*)( (long)puVar3 + 0x54 ) ^ *(byte*)( (long)param_4 + uVar13 );
      if (( ( ( ( 1 < param_5 ) && ( ( ( *(byte*)( (long)puVar3 + 0x55 ) = *(byte*)( (long)puVar3 + 0x55 ) ^ *(byte*)( (long)param_4 + uVar13 + 1 ) ),2 < param_5 && ( *(byte*)( (long)puVar3 + 0x56 ) = *(byte*)( (long)puVar3 + 0x56 ) ^ *(byte*)( (long)param_4 + uVar13 + 2 ) ),3 < param_5 ) ) && ( *(byte*)( (long)puVar3 + 0x57 ) = *(byte*)( (long)puVar3 + 0x57 ) ^ *(byte*)( (long)param_4 + uVar13 + 3 ) ),4 < param_5 ) ) )) &&( ( ( *(byte*)( puVar3 + 0xb ) = *(byte*)( puVar3 + 0xb ) ^ *(byte*)( (long)param_4 + uVar13 + 4 ) ),5 < param_5 && ( *(byte*)( (long)puVar3 + 0x59 ) = *(byte*)( (long)puVar3 + 0x59 ) ^ *(byte*)( (long)param_4 + uVar13 + 5 ) ),6 < param_5 ) ) && ( *(byte*)( (long)puVar3 + 0x5a ) = 7 < param_5 ) && ( ( ( *(byte*)( (long)puVar3 + 0x5b ) = *(byte*)( (long)puVar3 + 0x5b ) ^ *(byte*)( (long)param_4 + uVar13 + 7 ) ),8 < param_5 && ( *(byte*)( (long)puVar3 + 0x5c ) = *(byte*)( (long)puVar3 + 0x5c ) ^ *(byte*)( (long)param_4 + uVar13 + 8 ) ),9 < param_5 ) ) && ( ( *(byte*)( (long)puVar3 + 0x5d ) = *(byte*)( (long)puVar3 + 0x5d ) ^ *(byte*)( (long)param_4 + uVar13 + 9 ) ),10 < param_5 && ( ( ( *(byte*)( (long)puVar3 + 0x5e ) = *(byte*)( (long)puVar3 + 0x5e ) ^ *(byte*)( (long)param_4 + uVar13 + 10 ) ),0xb < param_5 && ( *(byte*)( (long)puVar3 + 0x5f ) = *(byte*)( (long)puVar3 + 0x5f ) ^ *(byte*)( (long)param_4 + uVar13 + 0xb ) ),0xc < param_5 ) ) && ( *(byte*)( puVar3 + 0xc ) = *(byte*)( puVar3 + 0xc ) ^ *(byte*)( (long)param_4 + uVar13 + 0xc ) ),0xd < param_5 ) && ( ( *(byte*)( (long)puVar3 + 0x61 ) = *(byte*)( (long)puVar3 + 0x61 ) ^ *(byte*)( (long)param_4 + uVar13 + 0xd ) ),0xe < param_5 && ( *(byte*)( (long)puVar3 + 0x62 ) = *(byte*)( (long)puVar3 + 0x62 ) ^ *(byte*)( (long)param_4 + uVar13 + 0xe ) ),0xf < param_5 ) * (byte*)( (long)puVar3 + 99 ) = *(byte*)( (long)puVar3 + 99 ) ^ *(byte*)( (long)param_4 + uVar13 + 0xf );
   }

}
 else if (uVar19 - 1 == 0xf) {
   uVar19 = ( (ulong*)( (long)param_4 + uVar13 ) )[1];
   *(ulong*)( (long)puVar3 + 0x54 ) = *(ulong*)( (long)param_4 + uVar13 ) ^ *(ulong*)( (long)puVar3 + 0x54 );
   *(ulong*)( (long)puVar3 + 0x5c ) = uVar19 ^ *(ulong*)( (long)puVar3 + 0x5c );
}
 else {
   *(ulong*)( (long)puVar3 + 0x54 ) = *(ulong*)( (long)param_4 + uVar13 ) ^ *(ulong*)( (long)puVar3 + 0x54 );
   if (( ( param_5 != 8 ) && ( *(byte*)( (long)puVar3 + 0x5c ) = *(byte*)( (long)puVar3 + 0x5c ) ^ *(byte*)( (long)param_4 + uVar13 + 8 ) ),param_5 != 9 )) &&( ( *(byte*)( (long)puVar3 + 0x5d ) = *(byte*)( (long)puVar3 + 0x5d ) ^ *(byte*)( (long)param_4 + uVar13 + 9 ) ),param_5 != 10 && ( ( ( ( *(byte*)( (long)puVar3 + 0x5e ) = *(byte*)( (long)puVar3 + 0x5e ) ^ *(byte*)( (long)param_4 + uVar13 + 10 ) ),param_5 != 0xb && ( *(byte*)( (long)puVar3 + 0x5f ) = *(byte*)( (long)puVar3 + 0x5f ) ^ *(byte*)( (long)param_4 + uVar13 + 0xb ) ),param_5 != 0xc ) ) && ( *(byte*)( puVar3 + 0xc ) = *(byte*)( puVar3 + 0xc ) ^ *(byte*)( (long)param_4 + uVar13 + 0xc ) ),param_5 != 0xd ) ) && ( *(byte*)( (long)puVar3 + 0x61 ) = param_5 == 0xf ) * (byte*)( (long)puVar3 + 0x62 ) = *(byte*)( (long)puVar3 + 0x62 ) ^ *(byte*)( (long)param_4 + uVar13 + 0xe );
}
}
    }LAB_001017d0:iVar12 = EVP_CipherInit_ex((EVP_CIPHER_CTX*)*puVar3, (EVP_CIPHER*)0x0, (ENGINE*)0x0, key, (uchar*)0x0, -1);if (iVar12 != 0) {
   iVar12 = EVP_CipherInit_ex((EVP_CIPHER_CTX*)puVar3[1], (EVP_CIPHER*)0x0, (ENGINE*)0x0, key, (uchar*)0x0, -1);
   bVar30 = iVar12 != 0;
   goto LAB_00101811;
}
 else {
   if (( param_4 == (ulong*)0x0 && param_6 == 0 ) && param_2 == (ulong*)0x0) {
      LAB_00101532:if (( param_3 != 0 ) && ( uVar13 = uVar13 != 0 )) {
         uVar19 = puVar3[5];
         uVar14 = uVar19;
         if (uVar13 <= uVar19) {
            uVar14 = uVar13;
         }

         if (uVar14 != 0) {
            if (uVar14 - 1 < 0xf) {
               uVar16 = 0;
            }
 else {
               *(ulong*)( (long)puVar3 + 0x34 ) = *(ulong*)( (long)puVar3 + 0x34 ) ^ puVar3[0x10];
               *(ulong*)( (long)puVar3 + 0x3c ) = *(ulong*)( (long)puVar3 + 0x3c ) ^ puVar3[0x11];
               if (uVar14 >> 4 != 1) {
                  *(ulong*)( (long)puVar3 + 0x44 ) = puVar3[0x12] ^ *(ulong*)( (long)puVar3 + 0x44 );
                  *(ulong*)( (long)puVar3 + 0x4c ) = puVar3[0x13] ^ *(ulong*)( (long)puVar3 + 0x4c );
               }

               uVar16 = uVar14 & 0xfffffffffffffff0;
               if (( uVar14 & 0xf ) == 0) goto LAB_001016a2;
            }

            uVar24 = uVar14 - uVar16;
            if (6 < uVar24 - 1) {
               puVar1 = (ulong*)( (long)puVar3 + uVar16 + 0x34 );
               *puVar1 = *puVar1 ^ *(ulong*)( (long)puVar3 + uVar16 + 0x80 );
               uVar16 = uVar16 + ( uVar24 & 0xfffffffffffffff8 );
               if (( uVar24 & 7 ) == 0) goto LAB_001016a2;
            }

            pbVar2 = (byte*)( (long)puVar3 + uVar16 + 0x34 );
            *pbVar2 = *pbVar2 ^ *(byte*)( (long)puVar3 + uVar16 + 0x80 );
            if (uVar16 + 1 < uVar14) {
               pbVar2 = (byte*)( (long)puVar3 + uVar16 + 0x35 );
               *pbVar2 = *pbVar2 ^ *(byte*)( (long)puVar3 + uVar16 + 0x81 );
               if (uVar16 + 2 < uVar14) {
                  pbVar2 = (byte*)( (long)puVar3 + uVar16 + 0x36 );
                  *pbVar2 = *pbVar2 ^ *(byte*)( (long)puVar3 + uVar16 + 0x82 );
                  if (uVar16 + 3 < uVar14) {
                     pbVar2 = (byte*)( (long)puVar3 + uVar16 + 0x37 );
                     *pbVar2 = *pbVar2 ^ *(byte*)( (long)puVar3 + uVar16 + 0x83 );
                     if (uVar16 + 4 < uVar14) {
                        pbVar2 = (byte*)( (long)puVar3 + uVar16 + 0x38 );
                        *pbVar2 = *pbVar2 ^ *(byte*)( (long)puVar3 + uVar16 + 0x84 );
                        if (uVar16 + 5 < uVar14) {
                           pbVar2 = (byte*)( (long)puVar3 + uVar16 + 0x39 );
                           *pbVar2 = *pbVar2 ^ *(byte*)( (long)puVar3 + uVar16 + 0x85 );
                           if (uVar16 + 6 < uVar14) {
                              pbVar2 = (byte*)( (long)puVar3 + uVar16 + 0x3a );
                              *pbVar2 = *pbVar2 ^ *(byte*)( (long)puVar3 + uVar16 + 0x86 );
                           }

                        }

                     }

                  }

               }

            }

         }

         LAB_001016a2:if (uVar19 < uVar13) {
            uVar13 = uVar13 - uVar19;
            uVar14 = 0x10;
            if (uVar13 < 0x11) {
               uVar14 = uVar13;
            }

            if (( uVar14 - 1 < 7 ) || ( -uVar19 - 0x2d < 0xf )) {
               *(byte*)( (long)puVar3 + 0x54 ) = *(byte*)( (long)puVar3 + 0x54 ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x80 );
               if (( ( ( 1 < uVar13 ) && ( ( ( *(byte*)( (long)puVar3 + 0x55 ) = *(byte*)( (long)puVar3 + 0x55 ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x81 ) ),2 < uVar13 && ( *(byte*)( (long)puVar3 + 0x56 ) = *(byte*)( (long)puVar3 + 0x56 ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x82 ) ),3 < uVar13 ) ) && ( *(byte*)( (long)puVar3 + 0x57 ) = *(byte*)( (long)puVar3 + 0x57 ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x83 ) ),4 < uVar13 ) )) ( ( ( *(byte*)( puVar3 + 0xb ) = *(byte*)( puVar3 + 0xb ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x84 ) ),5 < uVar13 && ( *(byte*)( (long)puVar3 + 0x59 ) = *(byte*)( (long)puVar3 + 0x59 ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x85 ) ),6 < uVar13 ) ) && ( *(byte*)( (long)puVar3 + 0x5a ) = 7 < uVar13 ) && ( ( ( *(byte*)( (long)puVar3 + 0x5b ) = *(byte*)( (long)puVar3 + 0x5b ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x87 ) ),8 < uVar13 && ( *(byte*)( (long)puVar3 + 0x5c ) = *(byte*)( (long)puVar3 + 0x5c ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x88 ) ),9 < uVar13 ) ) && ( ( *(byte*)( (long)puVar3 + 0x5d ) = *(byte*)( (long)puVar3 + 0x5d ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x89 ) ),10 < uVar13 && ( ( ( ( *(byte*)( (long)puVar3 + 0x5e ) = *(byte*)( (long)puVar3 + 0x5e ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x8a ) ),0xb < uVar13 && ( *(byte*)( (long)puVar3 + 0x5f ) = *(byte*)( (long)puVar3 + 0x5f ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x8b ) ),0xc < uVar13 ) ) && ( *(byte*)( puVar3 + 0xc ) = *(byte*)( puVar3 + 0xc ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x8c ) ),0xd < uVar13 ) ) && ( ( *(byte*)( (long)puVar3 + 0x61 ) = *(byte*)( (long)puVar3 + 0x61 ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x8d ) ),0xe < uVar13 && ( *(byte*)( (long)puVar3 + 0x62 ) = *(byte*)( (long)puVar3 + 0x62 ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x8e ) ),0xf < uVar13 ) * (byte*)( (long)puVar3 + 99 ) = *(byte*)( (long)puVar3 + 99 ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x8f );
            }

         }
 else if (uVar14 - 1 == 0xf) {
            puVar1 = (ulong*)( (long)puVar3 + uVar19 + 0x80 );
            uVar13 = puVar1[1];
            *(ulong*)( (long)puVar3 + 0x54 ) = *puVar1 ^ *(ulong*)( (long)puVar3 + 0x54 );
            *(ulong*)( (long)puVar3 + 0x5c ) = uVar13 ^ *(ulong*)( (long)puVar3 + 0x5c );
         }
 else {
            *(ulong*)( (long)puVar3 + 0x54 ) = *(ulong*)( (long)puVar3 + uVar19 + 0x80 ) ^ *(ulong*)( (long)puVar3 + 0x54 );
            if (( ( uVar13 != 8 ) && ( *(byte*)( (long)puVar3 + 0x5c ) = *(byte*)( (long)puVar3 + 0x5c ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x88 ) ),uVar13 != 9 )) &&( ( ( *(byte*)( (long)puVar3 + 0x5d ) = *(byte*)( (long)puVar3 + 0x5d ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x89 ) ),uVar13 != 10 && ( ( ( *(byte*)( (long)puVar3 + 0x5e ) = *(byte*)( (long)puVar3 + 0x5e ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x8a ) ),uVar13 != 0xb && ( *(byte*)( (long)puVar3 + 0x5f ) = *(byte*)( (long)puVar3 + 0x5f ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x8b ) ),uVar13 != 0xc ) ) && ( *(byte*)( puVar3 + 0xc ) = *(byte*)( puVar3 + 0xc ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x8c ) ),uVar13 != 0xd ) ) && ( *(byte*)( (long)puVar3 + 0x61 ) = uVar13 == 0xf ) * (byte*)( (long)puVar3 + 0x62 ) = *(byte*)( (long)puVar3 + 0x62 ) ^ *(byte*)( (long)puVar3 + uVar19 + 0x8e );
         }

      }

   }

}
goto LAB_001017d0;}out = (uchar*)( puVar3 + 0x10 );puVar1 = puVar3 + 0x14;local_e0 = 0x10;*(undefined1(*) [16])( puVar3 + 0x10 ) = (undefined1[16])0x0;out_00 = puVar3 + 0x12;iVar12 = 0x20;*(undefined1(*) [16])( puVar3 + 0x12 ) = (undefined1[16])0x0;*(undefined1(*) [16])( puVar3 + 0x14 ) = (undefined1[16])0x0;local_dc = 0x10;uVar19 = puVar3[0x13] ^ _UNK_00103438;puVar3[0x12] = puVar3[0x12] ^ __LC11;puVar3[0x13] = uVar19;if (uVar13 != 0x10) {
   uVar13 = puVar3[0x15] ^ _UNK_00103448;
   iVar12 = 0x30;
   puVar3[0x14] = puVar3[0x14] ^ __LC12;
   puVar3[0x15] = uVar13;
}
iVar10 = EVP_CipherUpdate((EVP_CIPHER_CTX*)puVar3[2], out, &local_dc, out, iVar12);if (( iVar10 != 0 ) && ( local_dc == iVar12 )) {
   uVar13 = 0;
   if (param_2 != (ulong*)0x0) {
      uVar13 = param_3;
   }

   uVar11 = (uint)uVar13;
   if (param_6 == 0) {
      param_7 = 0;
   }
 else {
      uVar11 = (int)param_7 + uVar11;
   }

   if (param_4 == (ulong*)0x0) {
      local_100 = 0;
   }
 else {
      uVar11 = uVar11 + (int)param_5;
      local_100 = param_5;
   }

   *(uint*)( (long)puVar3 + 100 ) = uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 << 0x18;
   *(undefined2*)( puVar3 + 0xd ) = 0;
   *(undefined1*)( (long)puVar3 + 0x6a ) = 0;
   puVar3[0xf] = 8;
   *(char*)( (long)puVar3 + 0x6b ) = *(char*)( puVar3 + 5 ) + '\x10';
   iVar12 = ctr_BCC_update(puVar3, param_2);
   if (( ( iVar12 != 0 ) && ( iVar12 = ctr_BCC_update(puVar3, param_6, param_7) ),iVar12 != 0 )) {
      lVar4 = puVar3[0xf];
      if (lVar4 != 0) {
         memset((void*)( (long)puVar3 + lVar4 + 100 ), 0, 0x10 - lVar4);
         uVar13 = *(ulong*)( (long)puVar3 + 100 );
         uVar19 = *(ulong*)( (long)puVar3 + 0x6c );
         iVar12 = 0x20;
         if (puVar3[5] != 0x10) {
            iVar12 = 0x30;
            local_58 = uVar13;
            uStack_50 = uVar19;
         }

         local_dc = 0x10;
         puVar3[0x10] = puVar3[0x10] ^ uVar13;
         puVar3[0x11] = puVar3[0x11] ^ uVar19;
         *out_00 = uVar13 ^ *out_00;
         puVar3[0x13] = uVar19 ^ puVar3[0x13];
         if (iVar12 == 0x30) {
            *puVar1 = local_58 ^ *puVar1;
            puVar3[0x15] = uStack_50 ^ puVar3[0x15];
         }

         iVar10 = EVP_CipherUpdate((EVP_CIPHER_CTX*)puVar3[2], out, &local_dc, out, iVar12);
         if (iVar10 == 0) goto LAB_001012b2;
         if (local_dc != iVar12) {
            bVar30 = false;
            goto LAB_00101811;
         }

      }

      iVar12 = EVP_CipherInit_ex((EVP_CIPHER_CTX*)*puVar3, (EVP_CIPHER*)0x0, (ENGINE*)0x0, out, (uchar*)0x0, -1);
      if (iVar12 != 0) {
         iVar12 = EVP_CipherUpdate((EVP_CIPHER_CTX*)*puVar3, out, &local_e0, out + puVar3[5], 0x10);
         if (( ( ( ( iVar12 != 0 ) && ( local_e0 == 0x10 ) ) && ( iVar12 = EVP_CipherUpdate((EVP_CIPHER_CTX*)*puVar3, (uchar*)out_00, &local_e0, out, 0x10) ),iVar12 != 0 ) ) && ( local_e0 == 0x10 )) &&( ( puVar3[5] == 0x10 || ( ( iVar12 = EVP_CipherUpdate((EVP_CIPHER_CTX*)*puVar3, (uchar*)puVar1, &local_e0, (uchar*)out_00, 0x10) ),iVar12 != 0 && ( local_e0 == 0x10 ) ) ) );
      }

   }

}
}LAB_001012b2:bVar30 = false;LAB_00101811:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return bVar30;}undefined1[16];drbg_ctr_reseed(long param_1, long param_2, ulong param_3, undefined8 param_4, undefined8 param_5) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   long lVar4;
   undefined1 auVar5[16];
   uint uVar6;
   uint uVar7;
   int iVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   uint uVar17;
   undefined1 local_68;
   undefined1 local_48;
   undefined1 local_44;
   undefined1 local_40;
   undefined1 local_3c;
   if (param_2 != 0) {
      lVar4 = *(long*)( param_1 + 0xf0 );
      uVar11 = ( uint ) * (byte*)( lVar4 + 0x62 ) + ( *(byte*)( lVar4 + 99 ) + 1 >> 8 );
      uVar10 = ( uint ) * (byte*)( lVar4 + 0x61 ) + ( uVar11 >> 8 );
      uVar6 = ( uVar10 >> 8 ) + ( uint ) * (byte*)( lVar4 + 0x60 );
      uVar1 = ( uint ) * (byte*)( lVar4 + 0x5f ) + ( uVar6 >> 8 );
      uVar2 = ( uint ) * (byte*)( lVar4 + 0x5e ) + ( uVar1 >> 8 );
      uVar3 = ( uint ) * (byte*)( lVar4 + 0x5d ) + ( uVar2 >> 8 );
      uVar15 = ( uint ) * (byte*)( lVar4 + 0x5c ) + ( uVar3 >> 8 );
      uVar7 = ( uint ) * (byte*)( lVar4 + 0x5b ) + ( uVar15 >> 8 );
      uVar17 = ( uint ) * (byte*)( lVar4 + 0x5a ) + ( uVar7 >> 8 );
      uVar16 = ( uint ) * (byte*)( lVar4 + 0x59 ) + ( uVar17 >> 8 );
      uVar9 = ( uint ) * (byte*)( lVar4 + 0x58 ) + ( uVar16 >> 8 );
      uVar14 = ( uint ) * (byte*)( lVar4 + 0x57 ) + ( uVar9 >> 8 );
      uVar13 = ( uint ) * (byte*)( lVar4 + 0x56 ) + ( uVar14 >> 8 );
      uVar12 = ( uint ) * (byte*)( lVar4 + 0x55 ) + ( uVar13 >> 8 );
      local_68 = (byte)uVar6;
      local_48 = (byte)uVar1;
      local_44 = (byte)uVar2;
      local_40 = (byte)uVar3;
      local_3c = (byte)uVar15;
      *(ulong*)( lVar4 + 0x54 ) = ( ( ( ( ( ( ( ulong )(uVar7 & 0xff) << 8 | ( ulong )(uVar17 & 0xff) ) << 8 | ( ulong )(uVar16 & 0xff) ) << 8 | ( ulong )(uVar9 & 0xff) ) << 8 | ( ulong )(uVar14 & 0xff) ) << 8 | ( ulong )(uVar13 & 0xff) ) << 8 | ( ulong )(uVar12 & 0xff) ) << 8 | ( ulong )(byte)((char)( uVar12 >> 8 ) + *(char*)( lVar4 + 0x54 ));
      *(ulong*)( lVar4 + 0x5c ) = ( ( ( ( ( ( ( ulong )(byte)(*(char*)( lVar4 + 99 ) + 1) << 8 | ( ulong )(uVar11 & 0xff) ) << 8 | ( ulong )(uVar10 & 0xff) ) << 8 | (ulong)local_68 ) << 8 | (ulong)local_48 ) << 8 | (ulong)local_44 ) << 8 | (ulong)local_40 ) << 8 | (ulong)local_3c;
      iVar8 = ctr_update(param_1, param_2, param_3, param_4, param_5, 0);
      return ZEXT116(iVar8 != 0);
   }

   auVar5._8_8_ = 0;
   auVar5._0_8_ = param_3;
   return auVar5 << 0x40;
}
undefined1[16];drbg_ctr_instantiate(long param_1, long param_2, ulong param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   uint uVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   undefined8 *puVar5;
   undefined1 auVar6[16];
   int iVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   ulong extraout_RDX;
   ulong uVar11;
   uint uVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   uint uVar17;
   uint uVar18;
   undefined1 auVar19[16];
   undefined1 local_68;
   undefined1 local_50;
   undefined1 local_4c;
   undefined1 local_48;
   undefined1 local_44;
   undefined1 local_40;
   undefined1 local_3c;
   puVar5 = *(undefined8**)( param_1 + 0xf0 );
   uVar11 = param_3;
   if (param_2 != 0) {
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( (long)puVar5 + ( 16*i + 52 ) ) = (undefined1[16])0;
      }

      iVar7 = EVP_CipherInit_ex((EVP_CIPHER_CTX*)*puVar5, (EVP_CIPHER*)0x0, (ENGINE*)0x0, (uchar*)( (long)puVar5 + 0x34 ), (uchar*)0x0, -1);
      uVar11 = extraout_RDX;
      if (iVar7 != 0) {
         uVar8 = ( *(byte*)( (long)puVar5 + 99 ) + 1 >> 8 ) + ( uint ) * (byte*)( (long)puVar5 + 0x62 );
         uVar1 = ( uint ) * (byte*)( (long)puVar5 + 0x61 ) + ( uVar8 >> 8 );
         uVar2 = ( uint ) * (byte*)( puVar5 + 0xc ) + ( uVar1 >> 8 );
         uVar3 = ( uint ) * (byte*)( (long)puVar5 + 0x5f ) + ( uVar2 >> 8 );
         uVar14 = ( uint ) * (byte*)( (long)puVar5 + 0x5e ) + ( uVar3 >> 8 );
         uVar4 = ( uint ) * (byte*)( (long)puVar5 + 0x5d ) + ( uVar14 >> 8 );
         uVar17 = ( uint ) * (byte*)( (long)puVar5 + 0x5c ) + ( uVar4 >> 8 );
         uVar9 = ( uint ) * (byte*)( (long)puVar5 + 0x5b ) + ( uVar17 >> 8 );
         uVar18 = ( uint ) * (byte*)( (long)puVar5 + 0x5a ) + ( uVar9 >> 8 );
         uVar16 = ( uint ) * (byte*)( (long)puVar5 + 0x59 ) + ( uVar18 >> 8 );
         uVar15 = ( uint ) * (byte*)( puVar5 + 0xb ) + ( uVar16 >> 8 );
         uVar13 = ( uint ) * (byte*)( (long)puVar5 + 0x57 ) + ( uVar15 >> 8 );
         uVar12 = ( uint ) * (byte*)( (long)puVar5 + 0x56 ) + ( uVar13 >> 8 );
         uVar10 = ( uint ) * (byte*)( (long)puVar5 + 0x55 ) + ( uVar12 >> 8 );
         local_68 = (undefined1)uVar8;
         local_50 = (undefined1)uVar1;
         local_4c = (undefined1)uVar2;
         local_48 = (undefined1)uVar3;
         local_44 = (undefined1)uVar14;
         local_40 = (undefined1)uVar4;
         local_3c = (undefined1)uVar17;
         *(ulong*)( (long)puVar5 + 0x54 ) = ( ( ( ( ( ( ( ulong )(uVar9 & 0xff) << 8 | ( ulong )(uVar18 & 0xff) ) << 8 | ( ulong )(uVar16 & 0xff) ) << 8 | ( ulong )(uVar15 & 0xff) ) << 8 | ( ulong )(uVar13 & 0xff) ) << 8 | ( ulong )(uVar12 & 0xff) ) << 8 | ( ulong )(uVar10 & 0xff) ) << 8 | ( ulong )(byte)((char)( uVar10 >> 8 ) + *(char*)( (long)puVar5 + 0x54 ));
         *(ulong*)( (long)puVar5 + 0x5c ) = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(char*)( (long)puVar5 + 99 ) + '\x01', local_68), local_50), local_4c), local_48), local_44), local_40), local_3c);
         iVar7 = ctr_update(param_1, param_2, param_3, param_6, param_7, param_4);
         auVar19._1_7_ = 0;
         auVar19[0] = iVar7 != 0;
         auVar19._8_8_ = param_5;
         return auVar19;
      }

   }

   auVar6._8_8_ = 0;
   auVar6._0_8_ = uVar11;
   return auVar6 << 0x40;
}
bool drbg_ctr_generate(long param_1, uchar *param_2, size_t param_3, long param_4, long param_5) {
   long lVar1;
   uint uVar2;
   uint uVar3;
   int iVar4;
   uint uVar5;
   uint uVar6;
   int iVar7;
   uint uVar8;
   ulong uVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   uint uVar17;
   uint uVar18;
   uint uVar19;
   uint uVar20;
   long in_FS_OFFSET;
   bool bVar21;
   byte local_98;
   long local_88;
   long local_80;
   byte local_74;
   byte local_70;
   undefined1 local_6c;
   undefined1 local_68;
   undefined1 local_64;
   undefined1 local_58;
   undefined1 local_54;
   undefined1 local_50;
   int local_44;
   long local_40;
   lVar1 = *(long*)( param_1 + 0xf0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 == 0 ) || ( param_5 == 0 )) {
      local_88 = 0;
      local_80 = param_4;
   }
 else {
      uVar12 = ( uint ) * (byte*)( lVar1 + 0x62 ) + ( *(byte*)( lVar1 + 99 ) + 1 >> 8 );
      uVar11 = ( uint ) * (byte*)( lVar1 + 0x61 ) + ( uVar12 >> 8 );
      uVar10 = ( uint ) * (byte*)( lVar1 + 0x60 ) + ( uVar11 >> 8 );
      uVar6 = ( uint ) * (byte*)( lVar1 + 0x5f ) + ( uVar10 >> 8 );
      uVar2 = ( uVar6 >> 8 ) + ( uint ) * (byte*)( lVar1 + 0x5e );
      uVar8 = ( uint ) * (byte*)( lVar1 + 0x5d ) + ( uVar2 >> 8 );
      uVar5 = ( uint ) * (byte*)( lVar1 + 0x5c ) + ( uVar8 >> 8 );
      uVar3 = ( uint ) * (byte*)( lVar1 + 0x5b ) + ( uVar5 >> 8 );
      uVar19 = ( uint ) * (byte*)( lVar1 + 0x5a ) + ( uVar3 >> 8 );
      uVar17 = ( uint ) * (byte*)( lVar1 + 0x59 ) + ( uVar19 >> 8 );
      uVar16 = ( uint ) * (byte*)( lVar1 + 0x58 ) + ( uVar17 >> 8 );
      uVar15 = ( uint ) * (byte*)( lVar1 + 0x57 ) + ( uVar16 >> 8 );
      uVar14 = ( uint ) * (byte*)( lVar1 + 0x56 ) + ( uVar15 >> 8 );
      uVar13 = ( uint ) * (byte*)( lVar1 + 0x55 ) + ( uVar14 >> 8 );
      local_98 = (byte)uVar2;
      local_74 = (byte)uVar8;
      local_70 = (byte)uVar5;
      *(ulong*)( lVar1 + 0x54 ) = ( ( ( ( ( ( ( ulong )(uVar3 & 0xff) << 8 | ( ulong )(uVar19 & 0xff) ) << 8 | ( ulong )(uVar17 & 0xff) ) << 8 | ( ulong )(uVar16 & 0xff) ) << 8 | ( ulong )(uVar15 & 0xff) ) << 8 | ( ulong )(uVar14 & 0xff) ) << 8 | ( ulong )(uVar13 & 0xff) ) << 8 | ( ulong )(byte)((char)( uVar13 >> 8 ) + *(char*)( lVar1 + 0x54 ));
      *(ulong*)( lVar1 + 0x5c ) = ( ( ( ( ( ( ( ulong )(byte)(*(char*)( lVar1 + 99 ) + 1) << 8 | ( ulong )(uVar12 & 0xff) ) << 8 | ( ulong )(uVar11 & 0xff) ) << 8 | ( ulong )(uVar10 & 0xff) ) << 8 | (ulong)uVar6 & 0xff ) << 8 | (ulong)local_98 ) << 8 | (ulong)local_74 ) << 8 | (ulong)local_70;
      iVar4 = ctr_update(param_1, param_4, param_5, 0, 0, 0, 0);
      if (iVar4 == 0) {
         LAB_00102c30:bVar21 = false;
         goto LAB_00102c09;
      }

      bVar21 = *(int*)( lVar1 + 0x30 ) == 0;
      local_88 = 1;
      if (bVar21) {
         local_88 = param_5;
      }

      local_80 = 0;
      if (bVar21) {
         local_80 = param_4;
      }

   }

   uVar5 = *(byte*)( lVar1 + 99 ) + 1;
   uVar18 = ( uint ) * (byte*)( lVar1 + 0x62 ) + ( uVar5 >> 8 );
   uVar19 = ( uint ) * (byte*)( lVar1 + 0x61 ) + ( uVar18 >> 8 );
   uVar17 = ( uint ) * (byte*)( lVar1 + 0x60 ) + ( uVar19 >> 8 );
   uVar16 = ( uint ) * (byte*)( lVar1 + 0x5f ) + ( uVar17 >> 8 );
   uVar15 = ( uint ) * (byte*)( lVar1 + 0x5e ) + ( uVar16 >> 8 );
   uVar14 = ( uint ) * (byte*)( lVar1 + 0x5d ) + ( uVar15 >> 8 );
   uVar13 = ( uint ) * (byte*)( lVar1 + 0x5c ) + ( uVar14 >> 8 );
   uVar3 = ( uint ) * (byte*)( lVar1 + 0x5b ) + ( uVar13 >> 8 );
   uVar2 = ( uVar3 >> 8 ) + ( uint ) * (byte*)( lVar1 + 0x5a );
   uVar10 = ( uint ) * (byte*)( lVar1 + 0x59 ) + ( uVar2 >> 8 );
   uVar6 = ( uint ) * (byte*)( lVar1 + 0x58 ) + ( uVar10 >> 8 );
   uVar11 = ( uint ) * (byte*)( lVar1 + 0x57 ) + ( uVar6 >> 8 );
   uVar12 = ( uint ) * (byte*)( lVar1 + 0x56 ) + ( uVar11 >> 8 );
   uVar8 = ( uint ) * (byte*)( lVar1 + 0x55 ) + ( uVar12 >> 8 );
   local_74 = *(char*)( lVar1 + 0x54 ) + (char)( uVar8 >> 8 );
   local_70 = (byte)uVar2;
   local_6c = (undefined1)uVar10;
   local_68 = (undefined1)uVar6;
   local_64 = (undefined1)uVar11;
   local_58 = (undefined1)uVar12;
   *(ulong*)( lVar1 + 0x54 ) = (ulong)local_74 | ( (ulong)CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)uVar3, local_70), local_6c), local_68), local_64), local_58) << 8 | (ulong)uVar8 & 0xff ) << 8;
   *(ulong*)( lVar1 + 0x5c ) = ( ( ( ( ( ( ( ulong )(byte)(*(byte*)( lVar1 + 99 ) + 1) << 8 | ( ulong )(uVar18 & 0xff) ) << 8 | ( ulong )(uVar19 & 0xff) ) << 8 | ( ulong )(uVar17 & 0xff) ) << 8 | ( ulong )(uVar16 & 0xff) ) << 8 | ( ulong )(uVar15 & 0xff) ) << 8 | ( ulong )(uVar14 & 0xff) ) << 8 | ( ulong )(uVar13 & 0xff);
   if (param_3 == 0) {
      uVar20 = ( uVar5 & 0xff ) + 1;
      uVar5 = ( uVar20 >> 8 ) + ( uVar18 & 0xff );
      uVar19 = ( uVar19 & 0xff ) + ( uVar5 >> 8 );
      uVar17 = ( uVar17 & 0xff ) + ( uVar19 >> 8 );
      uVar16 = ( uVar16 & 0xff ) + ( uVar17 >> 8 );
      uVar15 = ( uVar15 & 0xff ) + ( uVar16 >> 8 );
      uVar14 = ( uVar14 & 0xff ) + ( uVar15 >> 8 );
      uVar13 = ( uVar13 & 0xff ) + ( uVar14 >> 8 );
      uVar3 = ( uVar3 & 0xff ) + ( uVar13 >> 8 );
      uVar18 = ( uVar2 & 0xff ) + ( uVar3 >> 8 );
      uVar2 = ( uVar10 & 0xff ) + ( uVar18 >> 8 );
      uVar10 = ( uVar6 & 0xff ) + ( uVar2 >> 8 );
      uVar11 = ( uVar11 & 0xff ) + ( uVar10 >> 8 );
      uVar12 = ( uVar12 & 0xff ) + ( uVar11 >> 8 );
      uVar6 = ( uVar8 & 0xff ) + ( uVar12 >> 8 );
      local_54 = (undefined1)uVar5;
      local_50 = (undefined1)uVar20;
      local_98 = (byte)uVar19;
      *(ulong*)( lVar1 + 0x54 ) = ( ( ( ( ( ( ( ulong )(uVar3 & 0xff) << 8 | ( ulong )(uVar18 & 0xff) ) << 8 | ( ulong )(uVar2 & 0xff) ) << 8 | ( ulong )(uVar10 & 0xff) ) << 8 | ( ulong )(uVar11 & 0xff) ) << 8 | ( ulong )(uVar12 & 0xff) ) << 8 | ( ulong )(uVar6 & 0xff) ) << 8 | ( ulong )(byte)(local_74 + (char)( uVar6 >> 8 ));
      *(ulong*)( lVar1 + 0x5c ) = ( ( ( ( (ulong)CONCAT21(CONCAT11(local_50, local_54), local_98) << 8 | ( ulong )(uVar17 & 0xff) ) << 8 | ( ulong )(uVar16 & 0xff) ) << 8 | ( ulong )(uVar15 & 0xff) ) << 8 | ( ulong )(uVar14 & 0xff) ) << 8 | ( ulong )(uVar13 & 0xff);
   }
 else {
      memset(param_2, 0, param_3);
      do {
         iVar4 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX**)( lVar1 + 8 ), (EVP_CIPHER*)0x0, (ENGINE*)0x0, (uchar*)0x0, (uchar*)( lVar1 + 0x54 ), -1);
         if (iVar4 == 0) goto LAB_00102c30;
         uVar6 = *(uint*)( lVar1 + 0x60 );
         uVar9 = 0x40000000;
         if (param_3 < 0x40000001) {
            uVar9 = param_3;
         }

         uVar5 = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
         iVar4 = (int)uVar9;
         uVar8 = iVar4 + 0xf >> 4;
         uVar6 = uVar8 + uVar5;
         if (CARRY4(uVar8, uVar5)) {
            if (uVar6 != 0) {
               iVar4 = uVar5 * -0x10;
            }

            uVar5 = ( uint ) * (byte*)( lVar1 + 0x5e ) + ( *(byte*)( lVar1 + 0x5f ) + 1 >> 8 );
            uVar6 = ( uint ) * (byte*)( lVar1 + 0x5d ) + ( uVar5 >> 8 );
            uVar8 = ( uint ) * (byte*)( lVar1 + 0x5c ) + ( uVar6 >> 8 );
            *(uint*)( lVar1 + 0x5c ) = ( ( ( *(byte*)( lVar1 + 0x5f ) + 1 & 0xff ) << 8 | uVar5 & 0xff ) << 8 | uVar6 & 0xff ) << 8 | uVar8 & 0xff;
            uVar6 = ( uint ) * (byte*)( lVar1 + 0x5b ) + ( uVar8 >> 8 );
            uVar11 = ( uint ) * (byte*)( lVar1 + 0x5a ) + ( uVar6 >> 8 );
            uVar10 = ( uint ) * (byte*)( lVar1 + 0x59 ) + ( uVar11 >> 8 );
            uVar3 = ( uint ) * (byte*)( lVar1 + 0x58 ) + ( uVar10 >> 8 );
            uVar2 = ( uint ) * (byte*)( lVar1 + 0x57 ) + ( uVar3 >> 8 );
            uVar5 = ( uint ) * (byte*)( lVar1 + 0x56 ) + ( uVar2 >> 8 );
            uVar8 = ( uint ) * (byte*)( lVar1 + 0x55 ) + ( uVar5 >> 8 );
            *(ulong*)( lVar1 + 0x54 ) = ( ( ( ( ( ( ( ulong )(uVar6 & 0xff) << 8 | ( ulong )(uVar11 & 0xff) ) << 8 | ( ulong )(uVar10 & 0xff) ) << 8 | ( ulong )(uVar3 & 0xff) ) << 8 | ( ulong )(uVar2 & 0xff) ) << 8 | ( ulong )(uVar5 & 0xff) ) << 8 | ( ulong )(uVar8 & 0xff) ) << 8 | ( ulong )(byte)((char)( uVar8 >> 8 ) + *(char*)( lVar1 + 0x54 ));
            uVar6 = 0;
         }

         *(uint*)( lVar1 + 0x60 ) = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
         iVar7 = EVP_CipherUpdate(*(EVP_CIPHER_CTX**)( lVar1 + 8 ), param_2, &local_44, param_2, iVar4);
         if (( iVar7 == 0 ) || ( local_44 != iVar4 )) goto LAB_00102c30;
         param_2 = param_2 + iVar4;
         param_3 = param_3 - (long)iVar4;
      }
 while ( param_3 != 0 );
   }

   iVar4 = ctr_update(param_1, local_80, local_88, 0, 0, 0, 0);
   bVar21 = iVar4 != 0;
   LAB_00102c09:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar21;
}


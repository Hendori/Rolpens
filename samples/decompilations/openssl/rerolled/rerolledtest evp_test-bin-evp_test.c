undefined8 void_test_parse(void) {
   return 0;
}
void openssl_free(void *param_1) {
   CRYPTO_free(param_1);
   return;
}
void pbe_test_cleanup(long param_1) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0x9c8 );
   for (int i = 0; i < 3; i++) {
      CRYPTO_free(*(void**)( lVar1 + ( 16*i + 56 ) ));
   }

   return;
}
void keypair_test_cleanup(long param_1) {
   CRYPTO_free(*(void**)( param_1 + 0x9c8 ));
   *(undefined8*)( param_1 + 0x9c8 ) = 0;
   return;
}
undefined8 fips_indicator_cb(undefined8 param_1, undefined8 param_2) {
   fips_indicator_callback_unapproved_count = fips_indicator_callback_unapproved_count + 1;
   test_info("test/evp_test.c", 0x6e, "(Indicator Callback received %s : %s is not approved)", param_1, param_2);
   return 1;
}
undefined8 pbe_test_init(long param_1, char *param_2) {
   int iVar1;
   undefined4 *puVar2;
   undefined4 uVar3;
   iVar1 = strcmp(param_2, "scrypt");
   if (iVar1 == 0) {
      uVar3 = 1;
   }
 else {
      iVar1 = strcmp(param_2, "pbkdf2");
      if (iVar1 == 0) {
         uVar3 = 2;
      }
 else {
         uVar3 = 3;
         iVar1 = strcmp(param_2, "pkcs12");
         if (iVar1 != 0) {
            test_error("test/evp_test.c", 0xc84, "Unknown pbe algorithm %s", param_2);
            return 0;
         }

      }

   }

   puVar2 = (undefined4*)CRYPTO_zalloc(0x68, "test/evp_test.c", 0xc87);
   iVar1 = test_ptr("test/evp_test.c", 0xc87, "pdat = OPENSSL_zalloc(sizeof(*pdat))", puVar2);
   if (iVar1 == 0) {
      return 0;
   }

   *puVar2 = uVar3;
   *(undefined4**)( param_1 + 0x9c8 ) = puVar2;
   return 1;
}
undefined8 prov_available(byte *param_1) {
   ushort uVar1;
   int iVar2;
   ushort **ppuVar3;
   byte *pbVar4;
   do {
      ppuVar3 = __ctype_b_loc();
      while (true) {
         uVar1 = ( *ppuVar3 )[*param_1];
         if (( uVar1 & 0x2000 ) == 0) break;
         param_1 = param_1 + 1;
      }
;
      pbVar4 = param_1;
      if (*param_1 == 0) {
         return 0;
      }

      while (( uVar1 & 0x2000 ) == 0) {
         if (pbVar4[1] == 0) {
            iVar2 = OSSL_PROVIDER_available(libctx, param_1);
            if (iVar2 == 0) {
               return 0;
            }

            return 1;
         }

         uVar1 = ( *ppuVar3 )[pbVar4[1]];
         pbVar4 = pbVar4 + 1;
      }
;
      *pbVar4 = 0;
      iVar2 = OSSL_PROVIDER_available(libctx, param_1);
   }
 while ( iVar2 == 0 );
   return 1;
}
undefined8 encode_test_init(long param_1, char *param_2) {
   int iVar1;
   void *ptr;
   undefined8 uVar2;
   char *pcVar3;
   ptr = (void*)CRYPTO_zalloc(0x28, "test/evp_test.c", 0xd08);
   iVar1 = test_ptr("test/evp_test.c", 0xd08, "edata = OPENSSL_zalloc(sizeof(*edata))", ptr);
   if (iVar1 == 0) {
      LAB_00100390:uVar2 = 0;
   }
 else {
      iVar1 = strcmp(param_2, "canonical");
      if (iVar1 == 0) {
         *(undefined4*)( (long)ptr + 0x20 ) = 0;
      }
 else {
         iVar1 = strcmp(param_2, "valid");
         if (iVar1 != 0) {
            iVar1 = strcmp(param_2, "invalid");
            if (iVar1 == 0) {
               *(undefined4*)( (long)ptr + 0x20 ) = 2;
               pcVar3 = CRYPTO_strdup("DECODE_ERROR", "test/evp_test.c", 0xd10);
               *(char**)( param_1 + 0x9b8 ) = pcVar3;
               iVar1 = test_ptr("test/evp_test.c", 0xd10, "t->expected_err = OPENSSL_strdup(\"DECODE_ERROR\")", pcVar3);
               if (iVar1 != 0) goto LAB_001002f9;
            }
 else {
               test_error("test/evp_test.c", 0xd13, "Bad encoding: %s. Should be one of {canonical, valid, invalid}", param_2);
            }

            CRYPTO_free(ptr);
            goto LAB_00100390;
         }

         *(undefined4*)( (long)ptr + 0x20 ) = 1;
      }

      LAB_001002f9:*(void**)( param_1 + 0x9c8 ) = ptr;
      uVar2 = 1;
   }

   return uVar2;
}
undefined8 ctrl2params(long param_1, undefined8 param_2, undefined1 *param_3, long param_4, ulong param_5, long *param_6) {
   undefined8 *puVar1;
   long lVar2;
   int iVar3;
   int iVar4;
   undefined1 *puVar5;
   char *pcVar6;
   char *pcVar7;
   size_t sVar8;
   undefined8 uVar9;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   long local_40;
   lVar2 = *param_6;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar5 = settable_ctx_params;
   if (param_3 != (undefined1*)0x0) {
      puVar5 = param_3;
   }

   iVar3 = OPENSSL_sk_num(param_2);
   if (( ulong )(iVar3 + lVar2) < param_5) {
      iVar3 = 0;
      while (true) {
         iVar4 = OPENSSL_sk_num(param_2);
         if (iVar4 <= iVar3) break;
         pcVar6 = (char*)OPENSSL_sk_value(param_2, iVar3);
         pcVar6 = CRYPTO_strdup(pcVar6, "test/evp_test.c", 0x106);
         iVar4 = test_ptr("test/evp_test.c", 0x106, "tmpkey = OPENSSL_strdup(value)", pcVar6);
         if (iVar4 == 0) {
            LAB_00100588:pcVar6 = "ERR_PARAM_ERROR";
            goto LAB_00100547;
         }

         pcVar7 = strchr(pcVar6, 0x3a);
         if (pcVar7 == (char*)0x0) {
            LAB_00100578:CRYPTO_free(pcVar6);
            goto LAB_00100588;
         }

         *pcVar7 = '\0';
         sVar8 = strlen(pcVar7 + 1);
         iVar4 = OSSL_PARAM_allocate_from_text(param_4 + *param_6 * 0x28, puVar5, pcVar6, pcVar7 + 1, sVar8, 0);
         if (iVar4 == 0) goto LAB_00100578;
         *param_6 = *param_6 + 1;
         iVar3 = iVar3 + 1;
         CRYPTO_free(pcVar6);
      }
;
      puVar1 = (undefined8*)( param_4 + *param_6 * 0x28 );
      OSSL_PARAM_construct_end(&local_78);
      *puVar1 = local_78;
      puVar1[1] = uStack_70;
      puVar1[2] = local_68;
      puVar1[3] = uStack_60;
      puVar1[4] = local_58;
      uVar9 = 1;
   }
 else {
      pcVar6 = "ERR_TOO_MANY_PARAMETERS";
      LAB_00100547:*(char**)( param_1 + 0x9a8 ) = pcVar6;
      uVar9 = 0;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int pkey_fromdata_test_run(long param_1) {
   undefined8 *puVar1;
   void *ptr;
   int iVar2;
   long lVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   long lVar6;
   long in_FS_OFFSET;
   EVP_PKEY *local_118;
   long local_110;
   undefined8 local_108[25];
   long local_40;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar4 = local_108;
   local_118 = (EVP_PKEY*)0x0;
   local_110 = 0;
   puVar5 = puVar4;
   for (lVar3 = 0x19; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
   }

   iVar2 = OPENSSL_sk_num(puVar1[10]);
   if (iVar2 < 1) {
      lVar3 = -1;
      lVar6 = 0;
      puVar4 = (undefined8*)0x0;
   }
 else {
      iVar2 = ctrl2params(param_1, puVar1[10], key_settable_ctx_params_2, puVar4, 5, &local_110);
      lVar3 = local_110 + -1;
      lVar6 = local_110;
      if (iVar2 == 0) goto LAB_00100656;
   }

   iVar2 = EVP_PKEY_fromdata(*puVar1, &local_118, 0x87, puVar4);
   if (iVar2 < 1) {
      *(char**)( param_1 + 0x9a8 ) = "KEY_FROMDATA_ERROR";
   }

   iVar2 = 1;
   LAB_00100656:if (lVar6 != 0) {
      puVar4 = local_108 + lVar3 * 5 + 2;
      do {
         ptr = (void*)*puVar4;
         lVar3 = lVar3 + -1;
         puVar4 = puVar4 + -5;
         CRYPTO_free(ptr);
      }
 while ( lVar3 != -1 );
   }

   EVP_PKEY_free(local_118);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void pkey_kdf_test_cleanup(long param_1) {
   undefined8 *puVar1;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   CRYPTO_free((void*)puVar1[1]);
   EVP_PKEY_CTX_free((EVP_PKEY_CTX*)*puVar1);
   return;
}
void pkey_fromdata_test_cleanup(long param_1) {
   undefined8 *puVar1;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   OPENSSL_sk_pop_free(puVar1[10], openssl_free);
   EVP_PKEY_CTX_free((EVP_PKEY_CTX*)*puVar1);
   return;
}
void kem_test_cleanup(long param_1) {
   undefined8 *puVar1;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   OPENSSL_sk_pop_free(puVar1[6], openssl_free);
   CRYPTO_free((void*)puVar1[2]);
   CRYPTO_free((void*)puVar1[4]);
   CRYPTO_free((void*)puVar1[7]);
   CRYPTO_free((void*)puVar1[8]);
   CRYPTO_free((void*)puVar1[9]);
   CRYPTO_free((void*)puVar1[0xb]);
   CRYPTO_free((void*)puVar1[0xd]);
   CRYPTO_free((void*)puVar1[0xf]);
   EVP_PKEY_CTX_free((EVP_PKEY_CTX*)*puVar1);
   return;
}
void keygen_test_cleanup(long param_1) {
   undefined8 *puVar1;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   OPENSSL_sk_pop_free(puVar1[3], openssl_free);
   OPENSSL_sk_pop_free(puVar1[4], openssl_free);
   CRYPTO_free((void*)puVar1[2]);
   CRYPTO_free((void*)*puVar1);
   CRYPTO_free((void*)puVar1[1]);
   CRYPTO_free(*(void**)( param_1 + 0x9c8 ));
   *(undefined8*)( param_1 + 0x9c8 ) = 0;
   return;
}
undefined8 pkey_fromdata_test_init(long param_1, undefined8 param_2) {
   int iVar1;
   long *ptr;
   EVP_PKEY_CTX *ctx;
   long lVar2;
   ptr = (long*)CRYPTO_zalloc(0x68, "test/evp_test.c", 0xac9);
   iVar1 = test_ptr("test/evp_test.c", 0xac9, "kdata = OPENSSL_zalloc(sizeof(*kdata))", ptr);
   if (iVar1 != 0) {
      ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(libctx, param_2, &_LC19);
      *ptr = (long)ctx;
      if (ctx != (EVP_PKEY_CTX*)0x0) {
         iVar1 = EVP_PKEY_fromdata_init();
         if (0 < iVar1) {
            lVar2 = OPENSSL_sk_new_null();
            ptr[10] = lVar2;
            if (lVar2 != 0) {
               *(long**)( param_1 + 0x9c8 ) = ptr;
               return 1;
            }

         }

         ctx = (EVP_PKEY_CTX*)*ptr;
      }

      EVP_PKEY_CTX_free(ctx);
      CRYPTO_free(ptr);
   }

   return 0;
}
undefined8 kem_test_init(long param_1, char *param_2) {
   int iVar1;
   void *ptr;
   char *pcVar2;
   undefined8 uVar3;
   ptr = (void*)CRYPTO_zalloc(0x88, "test/evp_test.c", 0x86e);
   iVar1 = test_ptr("test/evp_test.c", 0x86e, "kdata = OPENSSL_zalloc(sizeof(*kdata))", ptr);
   if (iVar1 != 0) {
      pcVar2 = CRYPTO_strdup(param_2, "test/evp_test.c", 0x86f);
      *(char**)( (long)ptr + 0x38 ) = pcVar2;
      iVar1 = test_ptr("test/evp_test.c", 0x86f, "kdata->algname = OPENSSL_strdup(alg)", pcVar2);
      if (iVar1 != 0) {
         uVar3 = OPENSSL_sk_new_null();
         *(void**)( param_1 + 0x9c8 ) = ptr;
         *(undefined8*)( (long)ptr + 0x30 ) = uVar3;
         return 1;
      }

   }

   EVP_PKEY_free((EVP_PKEY*)0x0);
   CRYPTO_free(ptr);
   return 0;
}
undefined8 keygen_test_init(long param_1, char *param_2) {
   undefined1(*pauVar1)[16];
   undefined8 uVar2;
   char *pcVar3;
   pauVar1 = (undefined1(*) [16])CRYPTO_zalloc(0x28, "test/evp_test.c", 0x10c5);
   uVar2 = test_ptr("test/evp_test.c", 0x10c5, "data = OPENSSL_zalloc(sizeof(*data))", pauVar1);
   if ((int)uVar2 != 0) {
      *pauVar1 = (undefined1[16])0x0;
      uVar2 = OPENSSL_sk_new_null();
      *(undefined8*)( pauVar1[1] + 8 ) = uVar2;
      uVar2 = OPENSSL_sk_new_null();
      *(undefined8*)pauVar1[2] = uVar2;
      pcVar3 = CRYPTO_strdup(param_2, "test/evp_test.c", 0x10cb);
      *(undefined1(**) [16])( param_1 + 0x9c8 ) = pauVar1;
      *(undefined8*)( param_1 + 0x9a8 ) = 0;
      *(char**)pauVar1[1] = pcVar3;
      uVar2 = 1;
   }

   return uVar2;
}
undefined8 pkey_test_init_keyctx(long param_1, char *param_2, int param_3) {
   EVP_PKEY *pkey;
   int iVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   puVar2 = private_keys;
   if (( param_3 != 0 ) && ( puVar4 = public_keys ),public_keys != (undefined8*)0x0) {
      do {
         iVar1 = strcmp((char*)*puVar4, param_2);
         if (iVar1 == 0) {
            pkey = (EVP_PKEY*)puVar4[1];
            goto joined_r0x00100bfb;
         }

         puVar4 = (undefined8*)puVar4[2];
         puVar2 = private_keys;
      }
 while ( puVar4 != (undefined8*)0x0 );
   }

   while (true) {
      if (puVar2 == (undefined8*)0x0) goto LAB_00100c08;
      iVar1 = strcmp((char*)*puVar2, param_2);
      if (iVar1 == 0) break;
      puVar2 = (undefined8*)puVar2[2];
   }
;
   pkey = (EVP_PKEY*)puVar2[1];
   joined_r0x00100bfb:if (pkey == (EVP_PKEY*)0x0) {
      LAB_00100c08:test_info("test/evp_test.c", 0x9b0, "skipping, key \'%s\' is disabled", param_2);
      uVar3 = 1;
      *(undefined4*)( param_1 + 0x998 ) = 1;
   }
 else {
      puVar2 = (undefined8*)CRYPTO_zalloc(0x68, "test/evp_test.c", 0x9b5);
      iVar1 = test_ptr("test/evp_test.c", 0x9b5, "kdata = OPENSSL_zalloc(sizeof(*kdata))", puVar2);
      if (iVar1 == 0) {
         EVP_PKEY_free(pkey);
         uVar3 = 0;
      }
 else {
         uVar3 = EVP_PKEY_CTX_new_from_pkey(libctx, pkey, propquery);
         *puVar2 = uVar3;
         iVar1 = test_ptr("test/evp_test.c", 0x9b9, "kdata->ctx = EVP_PKEY_CTX_new_from_pkey(libctx, pkey, propquery)", uVar3);
         if (iVar1 == 0) {
            EVP_PKEY_free(pkey);
            CRYPTO_free(puVar2);
            uVar3 = 0;
         }
 else {
            *(undefined8**)( param_1 + 0x9c8 ) = puVar2;
            uVar3 = 1;
         }

      }

   }

   return uVar3;
}
undefined4 pkey_test_ctrl(long param_1, EVP_PKEY_CTX *param_2, char *param_3) {
   int iVar1;
   char *__s;
   char *pcVar2;
   undefined4 uVar3;
   __s = CRYPTO_strdup(param_3, "test/evp_test.c", 0xa17);
   iVar1 = test_ptr("test/evp_test.c", 0xa17, "tmpval = OPENSSL_strdup(value)", __s);
   if (iVar1 != 0) {
      uVar3 = 0;
      pcVar2 = strchr(__s, 0x3a);
      if (pcVar2 != (char*)0x0) {
         *pcVar2 = '\0';
         pcVar2 = pcVar2 + 1;
         iVar1 = EVP_PKEY_CTX_ctrl_str(param_2, __s, pcVar2);
         if (iVar1 == -2) {
            *(char**)( param_1 + 0x9a8 ) = "PKEY_CTRL_INVALID";
         }
 else if (iVar1 < 1) {
            iVar1 = OPENSSL_strcasecmp(pcVar2, &_LC26);
            if (( iVar1 == 0 ) || ( iVar1 = iVar1 == 0 )) {
               test_info("test/evp_test.c", 0xa23, "skipping, \'%s\' is disabled", pcVar2);
               *(undefined4*)( param_1 + 0x998 ) = 1;
            }
 else {
               *(char**)( param_1 + 0x9a8 ) = "PKEY_CTRL_ERROR";
            }

         }

         uVar3 = 1;
      }

      CRYPTO_free(__s);
      return uVar3;
   }

   return 0;
}
undefined8 pkey_test_run_init(long param_1) {
   undefined8 *puVar1;
   undefined *ptr;
   int iVar2;
   int iVar3;
   long lVar4;
   undefined **ppuVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   undefined *apuStack_110[2];
   long local_100;
   undefined8 local_f8[25];
   long local_30;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_100 = 0;
   puVar6 = local_f8;
   for (lVar4 = 0x19; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
   }

   apuStack_110[0] = (undefined*)0x100ddc;
   iVar2 = OPENSSL_sk_num(puVar1[9]);
   puVar6 = (undefined8*)0x0;
   if (iVar2 < 1) {
      LAB_00100de6:if ((code*)puVar1[2] == (code*)0x0) {
         if ((code*)puVar1[3] != (code*)0x0) {
            apuStack_110[0] = (undefined*)0x100ece;
            iVar2 = ( *(code*)puVar1[3] )(*puVar1, puVar1[1], puVar6);
            goto joined_r0x00100ed0;
         }

      }
 else {
         apuStack_110[0] = (undefined*)0x100df9;
         iVar2 = ( *(code*)puVar1[2] )(*puVar1);
         joined_r0x00100ed0:if (0 < iVar2) {
            iVar2 = 0;
            while (true) {
               apuStack_110[0] = (undefined*)0x100e44;
               iVar3 = OPENSSL_sk_num(puVar1[10]);
               if (iVar3 <= iVar2) break;
               apuStack_110[0] = (undefined*)0x100e13;
               uVar7 = OPENSSL_sk_value(puVar1[10], iVar2);
               apuStack_110[0] = (undefined*)0x100e22;
               iVar3 = pkey_test_ctrl(param_1, *puVar1, uVar7);
               if (( iVar3 == 0 ) || ( *(long*)( param_1 + 0x9a8 ) != 0 )) goto LAB_00100ee4;
               iVar2 = iVar2 + 1;
            }
;
            uVar7 = 1;
            goto LAB_00100e4e;
         }

      }

      *(char**)( param_1 + 0x9a8 ) = "KEYOP_INIT_ERROR";
   }
 else {
      apuStack_110[0] = (undefined*)0x100f0c;
      iVar2 = ctrl2params(param_1, puVar1[9], 0, local_f8, 5, &local_100);
      puVar6 = local_f8;
      if (iVar2 != 0) goto LAB_00100de6;
   }

   LAB_00100ee4:uVar7 = 0;
   LAB_00100e4e:lVar4 = local_100 + -1;
   if (local_100 != 0) {
      ppuVar5 = apuStack_110 + local_100 * 5;
      do {
         ptr = *ppuVar5;
         lVar4 = lVar4 + -1;
         ppuVar5 = ppuVar5 + -5;
         apuStack_110[0] = (undefined*)0x100e89;
         CRYPTO_free(ptr);
      }
 while ( lVar4 != -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar7;
   }

   /* WARNING: Subroutine does not return */
   apuStack_110[0] = &UNK_00100f1e;
   __stack_chk_fail();
}
void pkey_test_cleanup(long param_1) {
   undefined8 *puVar1;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   OPENSSL_sk_pop_free(puVar1[9], openssl_free);
   OPENSSL_sk_pop_free(puVar1[10], openssl_free);
   CRYPTO_free((void*)puVar1[5]);
   CRYPTO_free((void*)puVar1[7]);
   EVP_PKEY_CTX_free((EVP_PKEY_CTX*)*puVar1);
   EVP_SIGNATURE_free(puVar1[1]);
   return;
}
undefined8 memory_err_compare(long param_1, char *param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   int iVar1;
   undefined8 uVar2;
   if (( *(char**)( param_1 + 0x9b8 ) == (char*)0x0 ) || ( iVar1 = iVar1 != 0 )) {
      uVar2 = test_mem_eq("test/evp_test.c", 0x14f, "expected", &_LC31, param_3, param_4, param_5, param_6);
      if ((int)uVar2 != 0) {
         return uVar2;
      }

   }
 else {
      iVar1 = test_mem_ne("test/evp_test.c", 0x14d, "expected", &_LC31, param_3, param_4, param_5, param_6);
      if (iVar1 == 0) {
         return 1;
      }

   }

   *(char**)( param_1 + 0x9a8 ) = param_2;
   return 0;
}
void digest_test_cleanup(long param_1) {
   long lVar1;
   lVar1 = *(long*)( param_1 + 0x9c8 );
   OPENSSL_sk_pop_free(*(undefined8*)( lVar1 + 0x10 ), evp_test_buffer_free);
   CRYPTO_free(*(void**)( lVar1 + 0x18 ));
   EVP_MD_free(*(undefined8*)( lVar1 + 8 ));
   return;
}
undefined8 digest_test_init(long param_1, char *param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   EVP_MD *pEVar4;
   undefined8 *puVar5;
   iVar1 = OPENSSL_strcasecmp(param_2, &_LC26);
   if (iVar1 == 0) {
      test_info("test/evp_test.c", 0x2a0, "skipping, \'%s\' is disabled", param_2);
      *(undefined4*)( param_1 + 0x998 ) = 1;
      return 1;
   }

   lVar2 = EVP_MD_fetch(libctx, param_2, propquery);
   if (lVar2 == 0) {
      pEVar4 = EVP_get_digestbyname(param_2);
      if (pEVar4 != (EVP_MD*)0x0) {
         puVar5 = (undefined8*)CRYPTO_zalloc(0x38, "test/evp_test.c", 0x2a8);
         iVar1 = test_ptr("test/evp_test.c", 0x2a8, "mdat = OPENSSL_zalloc(sizeof(*mdat))", puVar5);
         if (iVar1 != 0) {
            *(undefined8**)( param_1 + 0x9c8 ) = puVar5;
            *puVar5 = pEVar4;
            puVar5[1] = 0;
            puVar5[5] = 0;
            return 1;
         }

      }

   }
 else {
      plVar3 = (long*)CRYPTO_zalloc(0x38, "test/evp_test.c", 0x2a8);
      iVar1 = test_ptr("test/evp_test.c", 0x2a8, "mdat = OPENSSL_zalloc(sizeof(*mdat))", plVar3);
      if (iVar1 != 0) {
         *(long**)( param_1 + 0x9c8 ) = plVar3;
         plVar3[5] = 0;
         *plVar3 = lVar2;
         plVar3[1] = lVar2;
         test_info("test/evp_test.c", 0x2b0, "%s is fetched", param_2);
         return 1;
      }

   }

   return 0;
}
undefined8 parse_uint64(byte *param_1, ulong *param_2) {
   int iVar1;
   ushort **ppuVar2;
   ulong uVar3;
   byte *pbVar4;
   iVar1 = test_true("test/evp_test.c", 0xc2c, &_LC35, *param_1 != 0);
   if (iVar1 == 0) {
      test_info("test/evp_test.c", 0xc2d, "Invalid empty integer value");
   }
 else {
      *param_2 = 0;
      uVar3 = 0;
      pbVar4 = param_1;
      if (*param_1 == 0) {
         return 1;
      }

      do {
         *param_2 = uVar3 * 10;
         ppuVar2 = __ctype_b_loc();
         iVar1 = test_true("test/evp_test.c", 0xc36, "isdigit((unsigned char)*p)", ( *ppuVar2 )[*pbVar4] >> 0xb & 1);
         if (iVar1 == 0) {
            test_error("test/evp_test.c", 0xc37, "Invalid character in string %s", param_1);
            return 0xffffffff;
         }

         uVar3 = (long)( (char)*pbVar4 + -0x30 ) + *param_2;
         *param_2 = uVar3;
         if (pbVar4[1] == 0) {
            return 1;
         }

         pbVar4 = pbVar4 + 1;
      }
 while ( uVar3 < 0x199999999999999a );
      test_error("test/evp_test.c", 0xc32, "Integer overflow in string %s", param_1);
   }

   return 0xffffffff;
}
undefined8 keypair_test_init(long param_1, char *param_2) {
   int iVar1;
   char *__s;
   char *pcVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   undefined8 *puVar6;
   __s = CRYPTO_strdup(param_2, "test/evp_test.c", 0x104d);
   iVar1 = test_ptr("test/evp_test.c", 0x104d, "priv = OPENSSL_strdup(pair)", __s);
   if (iVar1 == 0) {
      LAB_001013aa:*(char**)( param_1 + 0x9a8 ) = "PARSING_ERROR";
   }
 else {
      pcVar2 = strchr(__s, 0x3a);
      iVar1 = test_ptr("test/evp_test.c", 0x104e, "pub = strchr(priv, \':\')", pcVar2);
      if (iVar1 == 0) goto LAB_001013aa;
      *pcVar2 = '\0';
      puVar4 = private_keys;
      if (private_keys == (undefined8*)0x0) {
         puVar4 = (undefined8*)0x0;
      }
 else {
         do {
            iVar1 = strcmp((char*)*puVar4, __s);
            if (iVar1 == 0) {
               puVar4 = (undefined8*)puVar4[1];
               uVar5 = 1;
               goto LAB_0010144d;
            }

            puVar4 = (undefined8*)puVar4[2];
         }
 while ( puVar4 != (undefined8*)0x0 );
      }

      uVar5 = 0;
      LAB_0010144d:iVar1 = test_true("test/evp_test.c", 0x1054, "find_key(&pk, priv, private_keys)", uVar5);
      if (iVar1 == 0) {
         test_info("test/evp_test.c", 0x1055, "Can\'t find private key: %s", __s);
         *(char**)( param_1 + 0x9a8 ) = "MISSING_PRIVATE_KEY";
      }
 else {
         puVar6 = public_keys;
         if (public_keys == (undefined8*)0x0) {
            puVar6 = (undefined8*)0x0;
         }
 else {
            do {
               iVar1 = strcmp((char*)*puVar6, pcVar2 + 1);
               if (iVar1 == 0) {
                  puVar6 = (undefined8*)puVar6[1];
                  uVar5 = 1;
                  goto LAB_001014a6;
               }

               puVar6 = (undefined8*)puVar6[2];
            }
 while ( puVar6 != (undefined8*)0x0 );
         }

         uVar5 = 0;
         LAB_001014a6:iVar1 = test_true("test/evp_test.c", 0x1059, "find_key(&pubk, pub, public_keys)", uVar5);
         if (iVar1 != 0) {
            if (puVar6 == (undefined8*)0x0 && puVar4 == (undefined8*)0x0) {
               *(undefined4*)( param_1 + 0x998 ) = 1;
            }
 else {
               puVar3 = (undefined8*)CRYPTO_malloc(0x10, "test/evp_test.c", 0x1066);
               iVar1 = test_ptr("test/evp_test.c", 0x1066, "data = OPENSSL_malloc(sizeof(*data))", puVar3);
               if (iVar1 == 0) goto LAB_001013b8;
               *puVar3 = puVar4;
               puVar3[1] = puVar6;
               *(undefined8**)( param_1 + 0x9c8 ) = puVar3;
               *(undefined8*)( param_1 + 0x9a8 ) = 0;
            }

            uVar5 = 1;
            goto LAB_001013ba;
         }

         test_info("test/evp_test.c", 0x105a, "Can\'t find public key: %s", pcVar2 + 1);
         *(char**)( param_1 + 0x9a8 ) = "MISSING_PUBLIC_KEY";
      }

   }

   LAB_001013b8:uVar5 = 0;
   LAB_001013ba:CRYPTO_free(__s);
   return uVar5;
}
undefined8 signverify_init(long param_1, int *param_2) {
   undefined *ptr;
   int iVar1;
   int iVar2;
   long lVar3;
   undefined1 *puVar4;
   undefined **ppuVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   undefined *apuStack_110[2];
   long local_100;
   undefined1 local_f8[200];
   long local_30;
   lVar3 = *(long*)( param_2 + 2 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar3 != 0) {
      apuStack_110[0] = (undefined*)0x1015e7;
      lVar3 = EVP_MD_get0_name(lVar3);
   }

   local_100 = 0;
   apuStack_110[0] = (undefined*)0x1015fc;
   iVar1 = OPENSSL_sk_num(*(undefined8*)( param_2 + 0x16 ));
   puVar4 = (undefined1*)0x0;
   if (iVar1 < 1) {
      LAB_00101608:if (*param_2 == 0) {
         iVar1 = EVP_DigestSignInit_ex(*(undefined8*)( param_2 + 4 ), param_2 + 6, lVar3, libctx, 0, *(undefined8*)( param_2 + 0x14 ));
         if (iVar1 != 0) goto LAB_00101641;
         *(char**)( param_1 + 0x9a8 ) = "DIGESTSIGNINIT_ERROR";
      }
 else {
         iVar1 = EVP_DigestVerifyInit_ex(*(undefined8*)( param_2 + 4 ), param_2 + 6, lVar3, libctx, 0, *(undefined8*)( param_2 + 0x14 ), puVar4);
         if (iVar1 != 0) {
            LAB_00101641:iVar1 = 0;
            while (true) {
               apuStack_110[0] = (undefined*)0x101685;
               iVar2 = OPENSSL_sk_num(*(undefined8*)( param_2 + 0x18 ));
               if (iVar2 <= iVar1) break;
               apuStack_110[0] = (undefined*)0x101653;
               uVar6 = OPENSSL_sk_value(*(undefined8*)( param_2 + 0x18 ), iVar1);
               apuStack_110[0] = (undefined*)0x101662;
               iVar2 = pkey_test_ctrl(param_1, *(undefined8*)( param_2 + 6 ), uVar6);
               if (( iVar2 == 0 ) || ( *(long*)( param_1 + 0x9a8 ) != 0 )) goto LAB_00101770;
               iVar1 = iVar1 + 1;
            }
;
            uVar6 = 1;
            goto LAB_0010168f;
         }

         *(char**)( param_1 + 0x9a8 ) = "DIGESTVERIFYINIT_ERROR";
      }

   }
 else {
      puVar4 = local_f8;
      apuStack_110[0] = (undefined*)0x101751;
      iVar1 = ctrl2params(param_1, *(undefined8*)( param_2 + 0x16 ), 0, puVar4, 5, &local_100);
      if (iVar1 != 0) goto LAB_00101608;
   }

   LAB_00101770:uVar6 = 0;
   LAB_0010168f:lVar3 = local_100 + -1;
   if (local_100 != 0) {
      ppuVar5 = apuStack_110 + local_100 * 5;
      do {
         ptr = *ppuVar5;
         lVar3 = lVar3 + -1;
         ppuVar5 = ppuVar5 + -5;
         apuStack_110[0] = (undefined*)0x1016c9;
         CRYPTO_free(ptr);
      }
 while ( lVar3 != -1 );
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      apuStack_110[0] = &UNK_0010177d;
      __stack_chk_fail();
   }

   return uVar6;
}
undefined8 oneshot_digestverify_test_run(long param_1) {
   long lVar1;
   int iVar2;
   lVar1 = *(long*)( param_1 + 0x9c8 );
   iVar2 = signverify_init(param_1, lVar1);
   if (iVar2 != 0) {
      iVar2 = EVP_DigestVerify(*(undefined8*)( lVar1 + 0x10 ), *(undefined8*)( lVar1 + 0x38 ), *(undefined8*)( lVar1 + 0x40 ), *(undefined8*)( lVar1 + 0x28 ), *(undefined8*)( lVar1 + 0x30 ));
      if (iVar2 < 1) {
         *(char**)( param_1 + 0x9a8 ) = "VERIFY_ERROR";
         return 1;
      }

   }

   return 1;
}
void digestsigver_test_cleanup(long param_1) {
   void *ptr;
   ptr = *(void**)( param_1 + 0x9c8 );
   OPENSSL_sk_pop_free(*(undefined8*)( (long)ptr + 0x58 ), openssl_free);
   OPENSSL_sk_pop_free(*(undefined8*)( (long)ptr + 0x60 ), openssl_free);
   EVP_MD_CTX_free(*(undefined8*)( (long)ptr + 0x10 ));
   OPENSSL_sk_pop_free(*(undefined8*)( (long)ptr + 0x20 ), evp_test_buffer_free);
   CRYPTO_free(*(void**)( (long)ptr + 0x28 ));
   CRYPTO_free(*(void**)( (long)ptr + 0x38 ));
   CRYPTO_free(ptr);
   *(undefined8*)( param_1 + 0x9c8 ) = 0;
   return;
}
undefined8 digestsign_test_init(long param_1, char *param_2) {
   int iVar1;
   EVP_MD *pEVar2;
   undefined8 *ptr;
   undefined8 uVar3;
   iVar1 = strcmp(param_2, "NULL");
   if (iVar1 == 0) {
      pEVar2 = (EVP_MD*)0x0;
   }
 else {
      iVar1 = OPENSSL_strcasecmp(param_2, &_LC26);
      if (iVar1 == 0) {
         *(undefined4*)( param_1 + 0x998 ) = 1;
         return 1;
      }

      pEVar2 = EVP_get_digestbyname(param_2);
      if (pEVar2 == (EVP_MD*)0x0) {
         return 0;
      }

   }

   ptr = (undefined8*)CRYPTO_zalloc(0x68, "test/evp_test.c", 0x11a4);
   iVar1 = test_ptr("test/evp_test.c", 0x11a4, "mdat = OPENSSL_zalloc(sizeof(*mdat))", ptr);
   if (iVar1 != 0) {
      uVar3 = OPENSSL_sk_new_null();
      ptr[0xb] = uVar3;
      uVar3 = OPENSSL_sk_new_null();
      ptr[1] = pEVar2;
      ptr[0xc] = uVar3;
      uVar3 = EVP_MD_CTX_new();
      ptr[2] = uVar3;
      iVar1 = test_ptr("test/evp_test.c", 0x11a9, "mdat->ctx = EVP_MD_CTX_new()", uVar3);
      if (iVar1 != 0) {
         *ptr = 0;
         *(undefined8**)( param_1 + 0x9c8 ) = ptr;
         return 1;
      }

      CRYPTO_free(ptr);
   }

   return 0;
}
void cipher_test_cleanup(long param_1) {
   long lVar1;
   void *ptr;
   undefined8 *puVar2;
   lVar1 = *(long*)( param_1 + 0x9c8 );
   puVar2 = (undefined8*)( lVar1 + 0x70 );
   CRYPTO_free(*(void**)( lVar1 + 0x18 ));
   CRYPTO_free(*(void**)( lVar1 + 0x30 ));
   CRYPTO_free(*(void**)( lVar1 + 0x38 ));
   CRYPTO_free(*(void**)( lVar1 + 0x60 ));
   CRYPTO_free(*(void**)( lVar1 + 0x50 ));
   do {
      ptr = (void*)*puVar2;
      puVar2 = puVar2 + 1;
      CRYPTO_free(ptr);
   }
 while ( puVar2 != (undefined8*)( lVar1 + 0x90 ) );
   CRYPTO_free(*(void**)( lVar1 + 0xb8 ));
   CRYPTO_free(*(void**)( lVar1 + 0xd8 ));
   EVP_CIPHER_free(*(undefined8*)( lVar1 + 8 ));
   OPENSSL_sk_pop_free(*(undefined8*)( lVar1 + 0xf0 ), openssl_free);
   return;
}
void mac_test_cleanup(long param_1) {
   undefined8 *puVar1;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   EVP_MAC_free(puVar1[1]);
   CRYPTO_free((void*)*puVar1);
   OPENSSL_sk_pop_free(puVar1[0x11], openssl_free);
   CRYPTO_free((void*)puVar1[3]);
   CRYPTO_free((void*)puVar1[4]);
   CRYPTO_free((void*)puVar1[6]);
   CRYPTO_free((void*)puVar1[0xc]);
   CRYPTO_free((void*)puVar1[0xe]);
   CRYPTO_free((void*)puVar1[8]);
   CRYPTO_free((void*)puVar1[10]);
   return;
}
undefined8 mac_test_init(long param_1, char *param_2) {
   int iVar1;
   long lVar2;
   undefined8 *ptr;
   char *pcVar3;
   undefined8 uVar4;
   size_t sVar5;
   size_t sVar6;
   undefined4 uVar7;
   uVar7 = 0;
   lVar2 = EVP_MAC_fetch(libctx, param_2, propquery);
   if (lVar2 == 0) {
      sVar5 = strlen(param_2);
      if (0xc < sVar5) {
         iVar1 = strcmp(param_2 + ( sVar5 - 0xc ), " by EVP_PKEY");
         if (iVar1 == 0) {
            sVar5 = sVar5 - 0xc;
         }

      }

      sVar6 = 5;
      if (sVar5 < 6) {
         sVar6 = sVar5;
      }

      iVar1 = strncmp(param_2, "HMAC", sVar6);
      if (iVar1 == 0) {
         uVar7 = 0x357;
      }
 else {
         iVar1 = strncmp(param_2, "CMAC", sVar6);
         if (iVar1 == 0) {
            uVar7 = 0x37e;
         }
 else {
            sVar6 = 9;
            if (sVar5 < 10) {
               sVar6 = sVar5;
            }

            iVar1 = strncmp(param_2, "Poly1305", sVar6);
            if (iVar1 == 0) {
               uVar7 = 0x425;
            }
 else {
               uVar7 = 0x426;
               sVar6 = 8;
               if (sVar5 < 9) {
                  sVar6 = sVar5;
               }

               iVar1 = strncmp(param_2, "SipHash", sVar6);
               if (iVar1 != 0) {
                  return 0;
               }

            }

         }

      }

   }

   ptr = (undefined8*)CRYPTO_zalloc(0x98, "test/evp_test.c", 0x666);
   iVar1 = test_ptr("test/evp_test.c", 0x666, "mdat = OPENSSL_zalloc(sizeof(*mdat))", ptr);
   if (iVar1 != 0) {
      *(undefined4*)( ptr + 2 ) = uVar7;
      pcVar3 = CRYPTO_strdup(param_2, "test/evp_test.c", 0x66a);
      *ptr = pcVar3;
      iVar1 = test_ptr("test/evp_test.c", 0x66a, "mdat->mac_name = OPENSSL_strdup(alg)", pcVar3);
      if (iVar1 == 0) {
         CRYPTO_free(ptr);
      }
 else {
         ptr[1] = lVar2;
         uVar4 = OPENSSL_sk_new_null();
         ptr[0x11] = uVar4;
         iVar1 = test_ptr("test/evp_test.c", 0x670, "mdat->controls = sk_OPENSSL_STRING_new_null()", uVar4);
         if (iVar1 != 0) {
            ptr[0x12] = 0xffffffffffffffff;
            *(undefined8**)( param_1 + 0x9c8 ) = ptr;
            return 1;
         }

         CRYPTO_free((void*)*ptr);
         CRYPTO_free(ptr);
      }

   }

   return 0;
}
undefined8 pkey_kdf_test_init(long param_1, undefined8 param_2) {
   int iVar1;
   undefined8 *ptr;
   EVP_PKEY_CTX *ctx;
   ptr = (undefined8*)CRYPTO_zalloc(0x18, "test/evp_test.c", 0xfdd);
   iVar1 = test_ptr("test/evp_test.c", 0xfdd, "kdata = OPENSSL_zalloc(sizeof(*kdata))", ptr);
   if (iVar1 != 0) {
      ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(libctx, param_2, propquery);
      *ptr = ctx;
      if (ctx != (EVP_PKEY_CTX*)0x0) {
         iVar1 = EVP_PKEY_derive_init(ctx);
         if (0 < iVar1) {
            *(undefined8**)( param_1 + 0x9c8 ) = ptr;
            return 1;
         }

         ctx = (EVP_PKEY_CTX*)*ptr;
      }

      EVP_PKEY_CTX_free(ctx);
      CRYPTO_free(ptr);
   }

   return 0;
}
void kdf_test_cleanup(long param_1) {
   long *plVar1;
   undefined8 *puVar2;
   long *plVar3;
   puVar2 = *(undefined8**)( param_1 + 0x9c8 );
   OPENSSL_sk_pop_free(puVar2[0x68], openssl_free);
   if (puVar2[3] != 0) {
      plVar3 = puVar2 + 3;
      do {
         plVar1 = plVar3 + 2;
         plVar3 = plVar3 + 5;
         CRYPTO_free((void*)*plVar1);
      }
 while ( *plVar3 != 0 );
   }

   CRYPTO_free((void*)puVar2[1]);
   EVP_KDF_CTX_free(*puVar2);
   return;
}
undefined8 kdf_test_init(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   int iVar2;
   long *ptr;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   long local_68;
   long lStack_60;
   long local_58;
   long lStack_50;
   long local_48;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ptr = (long*)CRYPTO_zalloc(0x348, "test/evp_test.c", 0xef2);
   iVar2 = test_ptr("test/evp_test.c", 0xef2, "kdata = OPENSSL_zalloc(sizeof(*kdata))", ptr);
   if (iVar2 == 0) {
      uVar5 = 0;
   }
 else {
      ptr[0x67] = (long)( ptr + 3 );
      OSSL_PARAM_construct_end(&local_68);
      uVar1 = libctx;
      uVar5 = propquery;
      ptr[3] = local_68;
      ptr[4] = lStack_60;
      ptr[5] = local_58;
      ptr[6] = lStack_50;
      ptr[7] = local_48;
      lVar3 = EVP_KDF_fetch(uVar1, param_2, uVar5);
      if (lVar3 == 0) {
         CRYPTO_free(ptr);
         uVar5 = 0;
      }
 else {
         lVar4 = EVP_KDF_CTX_new(lVar3);
         *ptr = lVar4;
         EVP_KDF_free(lVar3);
         if (*ptr == 0) {
            CRYPTO_free(ptr);
            uVar5 = 0;
         }
 else {
            *(long**)( param_1 + 0x9c8 ) = ptr;
            lVar3 = OPENSSL_sk_new_null();
            ptr[0x68] = lVar3;
            uVar5 = 1;
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void encode_test_cleanup(long param_1) {
   undefined1(*pauVar1)[16];
   pauVar1 = *(undefined1(**) [16])( param_1 + 0x9c8 );
   CRYPTO_free(*(void**)*pauVar1);
   CRYPTO_free(*(void**)pauVar1[1]);
   *(undefined8*)pauVar1[2] = 0;
   *pauVar1 = (undefined1[16])0x0;
   pauVar1[1] = (undefined1[16])0x0;
   return;
}
bool cipher_test_valid_fragmentation(undefined8 *param_1) {
   int iVar1;
   ulong uVar2;
   undefined8 uVar3;
   iVar1 = *(int*)( (long)param_1 + 0x14 );
   if (( iVar1 == 7 ) || ( iVar1 == 2 )) {
      return false;
   }

   uVar3 = *param_1;
   if (iVar1 == -1) {
      iVar1 = EVP_CIPHER_get_mode(uVar3);
      if (iVar1 == 0) {
         return false;
      }

      uVar3 = *param_1;
   }

   uVar2 = EVP_CIPHER_get_flags(uVar3);
   if (( ( ( ( uVar2 & 0x4000 ) == 0 ) && ( iVar1 = EVP_CIPHER_get_mode(*param_1) ),iVar1 != 0x10004 ) ) && ( iVar1 = iVar1 != 0x10005 )) {
      iVar1 = EVP_CIPHER_get_mode(*param_1);
      return iVar1 != 0x10002;
   }

   return false;
}
undefined8 evp_test_buffer_ncopy(char *param_1, long param_2) {
   int iVar1;
   int iVar2;
   long lVar3;
   undefined8 *puVar4;
   void *pvVar5;
   void *pvVar6;
   size_t __n;
   lVar3 = strtol(param_1, (char**)0x0, 10);
   if (( param_2 != 0 ) && ( iVar1= (int)lVar3,0 < iVar1 )) {
      iVar2 = OPENSSL_sk_num(param_2);
      if (iVar2 != 0) {
         iVar2 = OPENSSL_sk_num(param_2);
         puVar4 = (undefined8*)OPENSSL_sk_value(param_2, iVar2 + -1);
         lVar3 = puVar4[1];
         pvVar5 = CRYPTO_malloc((int)( iVar1 * lVar3 ), "test/evp_test.c", 0x1b4);
         iVar2 = test_ptr("test/evp_test.c", 0x1b4, "tbuf = OPENSSL_malloc(tbuflen)", pvVar5);
         if (iVar2 != 0) {
            __n = puVar4[1];
            iVar2 = 0;
            pvVar6 = pvVar5;
            do {
               iVar2 = iVar2 + 1;
               pvVar6 = memcpy(pvVar6, (void*)*puVar4, __n);
               __n = puVar4[1];
               pvVar6 = (void*)( (long)pvVar6 + __n );
            }
 while ( iVar2 < iVar1 );
            CRYPTO_free((void*)*puVar4);
            *puVar4 = pvVar5;
            puVar4[1] = iVar1 * lVar3;
            return 1;
         }

      }

   }

   return 0;
}
undefined8 cipher_test_init(long param_1, char *param_2) {
   int iVar1;
   int iVar2;
   EVP_CIPHER *pEVar3;
   long *ptr;
   long lVar4;
   ulong uVar5;
   undefined8 uVar6;
   EVP_CIPHER *pEVar7;
   char *pcVar8;
   int iVar9;
   iVar1 = OPENSSL_strncasecmp(param_2, &_LC27, 3);
   if (iVar1 == 0) {
      *(undefined4*)( param_1 + 0x998 ) = 1;
      test_info("test/evp_test.c", 0x3a5, "skipping, \'%s\' is disabled", param_2);
      LAB_00102398:uVar6 = 1;
   }
 else {
      ERR_set_mark();
      pEVar3 = (EVP_CIPHER*)EVP_CIPHER_fetch(libctx, param_2, propquery);
      pEVar7 = pEVar3;
      if (pEVar3 == (EVP_CIPHER*)0x0) {
         pEVar7 = EVP_get_cipherbyname(param_2);
         if (pEVar7 != (EVP_CIPHER*)0x0) goto LAB_0010229e;
         pcVar8 = strstr(param_2, "HMAC");
         if (pcVar8 != (char*)0x0) {
            ERR_pop_to_mark();
            *(undefined4*)( param_1 + 0x998 ) = 1;
            test_info("test/evp_test.c", 0x3b0, "skipping, \'%s\' is not available", param_2);
            goto LAB_00102398;
         }

         ERR_clear_last_mark();
      }
 else {
         LAB_0010229e:ERR_clear_last_mark();
         ptr = (long*)CRYPTO_zalloc(0xf8, "test/evp_test.c", 0x3b8);
         iVar1 = test_ptr("test/evp_test.c", 0x3b8, "cdat = OPENSSL_zalloc(sizeof(*cdat))", ptr);
         if (iVar1 != 0) {
            lVar4 = OPENSSL_sk_new_null();
            *ptr = (long)pEVar7;
            ptr[0x1e] = lVar4;
            ptr[1] = (long)pEVar3;
            *(undefined4*)( ptr + 2 ) = 0xffffffff;
            iVar2 = EVP_CIPHER_get_mode(pEVar7);
            uVar5 = EVP_CIPHER_get_flags(pEVar7);
            iVar1 = data_chunk_size;
            iVar9 = 0;
            if (( ( uVar5 & 0x200000 ) != 0 ) && ( iVar9 = iVar2 == 0 )) {
               iVar9 = -1;
            }

            *(int*)( (long)ptr + 0x14 ) = iVar9;
            if (iVar1 != 0) {
               iVar1 = cipher_test_valid_fragmentation(ptr);
               if (iVar1 == 0) {
                  ERR_pop_to_mark();
                  EVP_CIPHER_free(pEVar3);
                  CRYPTO_free(ptr);
                  *(undefined4*)( param_1 + 0x998 ) = 1;
                  test_info("test/evp_test.c", 0x3ca, "skipping, \'%s\' does not support fragmentation", param_2);
                  goto LAB_00102398;
               }

            }

            *(long**)( param_1 + 0x9c8 ) = ptr;
            if (pEVar3 != (EVP_CIPHER*)0x0) {
               test_info("test/evp_test.c", 0x3d0, "%s is fetched", param_2);
            }

            goto LAB_00102398;
         }

      }

      uVar6 = 0;
   }

   return uVar6;
}
void rand_test_cleanup(long param_1) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   int iVar3;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   OPENSSL_sk_pop_free(puVar1[6], openssl_free);
   CRYPTO_free((void*)puVar1[4]);
   CRYPTO_free((void*)puVar1[5]);
   if (-1 < *(int*)( puVar1 + 2 )) {
      iVar3 = 0;
      puVar2 = puVar1 + 7;
      do {
         iVar3 = iVar3 + 1;
         CRYPTO_free((void*)*puVar2);
         for (int i = 0; i < 9; i++) {
            CRYPTO_free((void*)puVar2[( i + 1 )]);
         }

         puVar2 = puVar2 + 0x14;
      }
 while ( iVar3 <= *(int*)( puVar1 + 2 ) );
   }

   EVP_RAND_CTX_free(*puVar1);
   EVP_RAND_CTX_free(puVar1[1]);
   return;
}
undefined8 rand_test_init(long param_1, undefined8 param_2) {
   int iVar1;
   long *ptr;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined4 local_8c;
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_8c = 0x100;
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   ptr = (long*)CRYPTO_zalloc(0x998, "test/evp_test.c", 0xdd4);
   iVar1 = test_ptr("test/evp_test.c", 0xdd4, "rdata = OPENSSL_zalloc(sizeof(*rdata))", ptr);
   if (iVar1 != 0) {
      lVar2 = EVP_RAND_fetch(libctx, "TEST-RAND", "-fips");
      if (lVar2 == 0) {
         LAB_001026fe:lVar2 = ptr[1];
      }
 else {
         lVar3 = EVP_RAND_CTX_new(lVar2, 0);
         ptr[1] = lVar3;
         EVP_RAND_free(lVar2);
         lVar2 = ptr[1];
         if (lVar2 != 0) {
            OSSL_PARAM_construct_uint(&local_c8, "strength", &local_8c);
            local_88._8_8_ = uStack_c0;
            local_88._0_8_ = local_c8;
            local_68._0_8_ = local_a8;
            local_78._8_8_ = uStack_b0;
            local_78._0_8_ = local_b8;
            iVar1 = EVP_RAND_CTX_set_params(ptr[1], local_88);
            if (iVar1 != 0) {
               lVar2 = EVP_RAND_fetch(libctx, param_2, propquery);
               if (lVar2 != 0) {
                  lVar3 = EVP_RAND_CTX_new(lVar2, ptr[1]);
                  *ptr = lVar3;
                  EVP_RAND_free(lVar2);
                  if (*ptr != 0) {
                     lVar2 = OPENSSL_sk_new_null();
                     *(undefined4*)( ptr + 2 ) = 0xffffffff;
                     ptr[6] = lVar2;
                     uVar4 = 1;
                     *(long**)( param_1 + 0x9c8 ) = ptr;
                     goto LAB_0010264d;
                  }

               }

            }

            goto LAB_001026fe;
         }

      }

      EVP_RAND_CTX_free(lVar2);
      CRYPTO_free(ptr);
   }

   uVar4 = 0;
   LAB_0010264d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void clear_test(long param_1) {
   undefined8 uVar1;
   void *ptr;
   test_clearstanza();
   ERR_clear_error();
   ptr = *(void**)( param_1 + 0x9c8 );
   if (ptr != (void*)0x0) {
      if (*(long*)( param_1 + 0x9a0 ) != 0) {
         ( **(code**)( *(long*)( param_1 + 0x9a0 ) + 0x10 ) )(param_1);
         ptr = *(void**)( param_1 + 0x9c8 );
      }

      CRYPTO_free(ptr);
      *(undefined8*)( param_1 + 0x9c8 ) = 0;
   }

   CRYPTO_free(*(void**)( param_1 + 0x9b8 ));
   *(undefined8*)( param_1 + 0x9b8 ) = 0;
   CRYPTO_free(*(void**)( param_1 + 0x9c0 ));
   uVar1 = libctx;
   *(undefined8*)( param_1 + 0x9c0 ) = 0;
   *(undefined4*)( param_1 + 0x998 ) = 0;
   *(undefined4*)( param_1 + 0x9d0 ) = 0;
   *(undefined1(*) [16])( param_1 + 0x9a0 ) = (undefined1[16])0x0;
   OSSL_set_max_threads(uVar1, 0);
   return;
}
void *unescape_part_0(char *param_1, ulong param_2, ulong *param_3) {
   long lVar1;
   int iVar2;
   void *ptr;
   ulong uVar3;
   long lVar4;
   ptr = CRYPTO_malloc((int)param_2, "test/evp_test.c", 0x1fb);
   iVar2 = test_ptr("test/evp_test.c", 0x1fb, "ret = p = OPENSSL_malloc(input_len)");
   if (iVar2 == 0) {
      return (void*)0x0;
   }

   if (param_2 != 0) {
      uVar3 = 0;
      lVar1 = (long)ptr + 1;
      do {
         while (lVar4 = lVar1,*param_1 != '\\') {
            uVar3 = uVar3 + 1;
            *(char*)( lVar4 + -1 ) = *param_1;
            param_1 = param_1 + 1;
            lVar1 = lVar4 + 1;
            if (param_2 <= uVar3) goto LAB_0010290d;
         }
;
         if (( param_2 - 1 == uVar3 ) || ( param_1[1] != 'n' )) {
            test_error("test/evp_test.c", 0x201, "Bad escape sequence in file");
            CRYPTO_free(ptr);
            return (void*)0x0;
         }

         param_1 = param_1 + 2;
         uVar3 = uVar3 + 2;
         *(undefined1*)( lVar4 + -1 ) = 10;
         lVar1 = lVar4 + 1;
      }
 while ( uVar3 < param_2 );
      LAB_0010290d:param_2 = lVar4 - (long)ptr;
   }

   *param_3 = param_2;
   return ptr;
}
ulong parse_bin(char *param_1, long *param_2, undefined8 *param_3) {
   int iVar1;
   size_t sVar2;
   undefined1 *puVar3;
   ulong uVar4;
   long lVar5;
   long in_FS_OFFSET;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = strcmp(param_1, "NULL");
   if (iVar1 == 0) {
      *param_2 = 0;
      *param_3 = 0;
      LAB_001029f2:uVar4 = 1;
   }
 else {
      if (*param_1 == '\0') {
         puVar3 = (undefined1*)CRYPTO_malloc(1, "test/evp_test.c", 0x22a);
         *param_2 = (long)puVar3;
         if (puVar3 != (undefined1*)0x0) {
            *puVar3 = 0;
            *param_3 = 0;
            goto LAB_001029f2;
         }

      }
 else {
         if (*param_1 != '\"') {
            lVar5 = OPENSSL_hexstr2buf(param_1, &local_38);
            *param_2 = lVar5;
            iVar1 = test_ptr("test/evp_test.c", 0x23e, "*buf = OPENSSL_hexstr2buf(value, &len)", lVar5);
            if (iVar1 == 0) {
               test_info("test/evp_test.c", 0x23f, "Can\'t convert %s", param_1);
               test_openssl_errors();
               uVar4 = 0xffffffff;
               goto LAB_001029f7;
            }

            *param_3 = local_38;
            goto LAB_001029f2;
         }

         sVar2 = strlen(param_1 + 1);
         if (( sVar2 != 0 ) && ( param_1[sVar2] == '\"' )) {
            if (sVar2 - 1 == 0) {
               *param_3 = 0;
               lVar5 = CRYPTO_zalloc(1, "test/evp_test.c", 0x1f7);
            }
 else {
               lVar5 = unescape_part_0(param_1 + 1, sVar2 - 1, param_3);
            }

            *param_2 = lVar5;
            uVar4 = ( ulong )(lVar5 != 0);
            goto LAB_001029f7;
         }

      }

      uVar4 = 0;
   }

   LAB_001029f7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 encode_test_parse(long param_1, char *param_2, undefined8 param_3) {
   int iVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   lVar4 = *(long*)( param_1 + 0x9c8 );
   iVar1 = strcmp(param_2, "Input");
   lVar3 = lVar4 + 8;
   if (iVar1 != 0) {
      iVar1 = strcmp(param_2, "Output");
      if (iVar1 != 0) {
         return 0;
      }

      lVar3 = lVar4 + 0x18;
      lVar4 = lVar4 + 0x10;
   }

   uVar2 = parse_bin(param_3, lVar4, lVar3);
   return uVar2;
}
undefined8 pkey_kdf_test_parse(long param_1, char *param_2, undefined8 param_3) {
   undefined8 *puVar1;
   int iVar2;
   undefined8 uVar3;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   iVar2 = strcmp(param_2, "Output");
   if (iVar2 == 0) {
      uVar3 = parse_bin(param_3, puVar1 + 1, puVar1 + 2);
      return uVar3;
   }

   iVar2 = strncmp(param_2, "Ctrl", 4);
   if (iVar2 != 0) {
      return 0;
   }

   uVar3 = pkey_test_ctrl(param_1, *puVar1, param_3);
   return uVar3;
}
ulong cipher_test_parse(long param_1, char *param_2, char *param_3) {
   long lVar1;
   undefined8 uVar2;
   int iVar3;
   uint uVar4;
   long lVar5;
   ulong uVar6;
   char *ptr;
   long lVar7;
   long in_FS_OFFSET;
   char *local_38;
   long local_30;
   lVar1 = *(long*)( param_1 + 0x9c8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = strcmp(param_2, "Key");
   if (iVar3 == 0) {
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010312a;
      lVar7 = lVar1 + 0x20;
      lVar5 = lVar1 + 0x18;
      goto LAB_00102e0c;
   }

   iVar3 = strcmp(param_2, "Rounds");
   if (iVar3 == 0) {
      lVar7 = strtol(param_3, (char**)0x0, 10);
      if ((int)lVar7 < 0) goto LAB_00102f10;
      *(int*)( lVar1 + 0x40 ) = (int)lVar7;
      goto LAB_00102dc2;
   }

   if (( ( *param_2 == 'I' ) && ( param_2[1] == 'V' ) ) && ( param_2[2] == '\0' )) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         lVar7 = lVar1 + 0x48;
         lVar5 = lVar1 + 0x30;
         goto LAB_00102e0c;
      }

      goto LAB_0010312a;
   }

   iVar3 = strcmp(param_2, "NextIV");
   if (iVar3 == 0) {
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010312a;
      lVar7 = lVar1 + 0x48;
      lVar5 = lVar1 + 0x38;
      goto LAB_00102e0c;
   }

   iVar3 = strcmp(param_2, "Plaintext");
   if (iVar3 == 0) {
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010312a;
      lVar7 = lVar1 + 0x58;
      lVar5 = lVar1 + 0x50;
      goto LAB_00102e0c;
   }

   iVar3 = strcmp(param_2, "Ciphertext");
   if (iVar3 == 0) {
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010312a;
      lVar7 = lVar1 + 0x68;
      lVar5 = lVar1 + 0x60;
      goto LAB_00102e0c;
   }

   iVar3 = strcmp(param_2, "KeyBits");
   if (iVar3 == 0) {
      lVar7 = strtol(param_3, (char**)0x0, 10);
      if ((int)lVar7 < 0) goto LAB_00102f10;
      *(long*)( lVar1 + 0x28 ) = (long)(int)lVar7;
      goto LAB_00102dc2;
   }

   if (*(int*)( lVar1 + 0x14 ) != 0) {
      iVar3 = strcmp(param_2, "TLSAAD");
      if (iVar3 == 0) {
         *(undefined4*)( lVar1 + 0xb0 ) = 1;
      }
 else {
         iVar3 = strcmp(param_2, "AAD");
         if (iVar3 != 0) {
            iVar3 = strcmp(param_2, "Tag");
            if (iVar3 == 0) {
               if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010312a;
               lVar7 = lVar1 + 200;
               lVar5 = lVar1 + 0xb8;
               goto LAB_00102e0c;
            }

            iVar3 = strcmp(param_2, "SetTagLate");
            if (iVar3 != 0) {
               iVar3 = strcmp(param_2, "MACKey");
               if (iVar3 == 0) {
                  if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010312a;
                  lVar7 = lVar1 + 0xe0;
                  lVar5 = lVar1 + 0xd8;
                  goto LAB_00102e0c;
               }

               uVar4 = strcmp(param_2, "TLSVersion");
               uVar6 = (ulong)uVar4;
               if (uVar4 != 0) goto LAB_00102e60;
               lVar7 = strtol(param_3, &local_38, 0);
               *(int*)( lVar1 + 0xb4 ) = (int)lVar7;
               if (*param_3 != '\0') {
                  uVar6 = ( ulong )(*local_38 == '\0');
               }

               goto LAB_00102dc8;
            }

            iVar3 = strcmp(param_3, "TRUE");
            if (iVar3 == 0) {
               *(undefined4*)( lVar1 + 0xd0 ) = 1;
            }
 else {
               iVar3 = strcmp(param_3, "FALSE");
               if (iVar3 != 0) goto LAB_00102f10;
               *(undefined4*)( lVar1 + 0xd0 ) = 0;
            }

            goto LAB_00102dc2;
         }

      }

      if (*(long*)( lVar1 + 0x70 ) == 0) {
         iVar3 = 0;
      }
 else if (*(long*)( lVar1 + 0x78 ) == 0) {
         iVar3 = 1;
      }
 else if (*(long*)( lVar1 + 0x80 ) == 0) {
         iVar3 = 2;
      }
 else {
         iVar3 = 3;
         if (*(long*)( lVar1 + 0x88 ) != 0) {
            LAB_00102f10:uVar6 = 0xffffffff;
            goto LAB_00102dc8;
         }

      }

      lVar5 = (long)( iVar3 + 0x12 ) * 8;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         lVar7 = lVar1 + lVar5;
         lVar5 = lVar1 + -0x20 + lVar5;
         LAB_00102e0c:uVar6 = parse_bin(param_3, lVar5, lVar7);
         return uVar6;
      }

      goto LAB_0010312a;
   }

   LAB_00102e60:iVar3 = strcmp(param_2, "Operation");
   if (iVar3 == 0) {
      iVar3 = strcmp(param_3, "ENCRYPT");
      if (iVar3 == 0) {
         *(undefined4*)( lVar1 + 0x10 ) = 1;
      }
 else {
         iVar3 = strcmp(param_3, "DECRYPT");
         if (iVar3 != 0) goto LAB_00102f10;
         *(undefined4*)( lVar1 + 0x10 ) = 0;
      }

      LAB_00102dc2:uVar6 = 1;
   }
 else {
      iVar3 = strcmp(param_2, "CTSMode");
      if (iVar3 == 0) {
         *(char**)( lVar1 + 0xc0 ) = param_3;
         goto LAB_00102dc2;
      }

      iVar3 = strcmp(param_2, "XTSStandard");
      if (iVar3 == 0) {
         *(char**)( lVar1 + 0xe8 ) = param_3;
         goto LAB_00102dc2;
      }

      uVar6 = 0;
      iVar3 = strcmp(param_2, "CtrlInit");
      if (iVar3 == 0) {
         uVar2 = *(undefined8*)( lVar1 + 0xf0 );
         ptr = CRYPTO_strdup(param_3, "test/evp_test.c", 0xcb);
         if (ptr != (char*)0x0) {
            iVar3 = OPENSSL_sk_push(uVar2, ptr);
            if (0 < iVar3) goto LAB_00102dc2;
            CRYPTO_free(ptr);
         }

         goto LAB_00102f10;
      }

   }

   LAB_00102dc8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   LAB_0010312a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined8 keypair_test_run(long param_1) {
   int iVar1;
   if (( **(long**)( param_1 + 0x9c8 ) != 0 ) && ( ( *(long**)( param_1 + 0x9c8 ) )[1] != 0 )) {
      iVar1 = EVP_PKEY_eq();
      if (iVar1 == 1) {
         *(undefined8*)( param_1 + 0x9a8 ) = 0;
         return 1;
      }

      if (iVar1 == 0) {
         *(char**)( param_1 + 0x9a8 ) = "KEYPAIR_MISMATCH";
         return 1;
      }

      if (iVar1 != -1) {
         if (iVar1 == -2) {
            *(char**)( param_1 + 0x9a8 ) = "UNSUPPORTED_KEY_COMPARISON";
            return 1;
         }

         test_error("test/evp_test.c", 0x1099, "Unexpected error in key comparison");
         return 0;
      }

   }

   *(char**)( param_1 + 0x9a8 ) = "KEYPAIR_TYPE_MISMATCH";
   return 1;
}
undefined8 sign_test_init(long param_1, char *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined *puVar3;
   int iVar4;
   char *pcVar5;
   undefined8 uVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined1 auStack_68[56];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar5 = strchr(param_2, 0x3a);
   if (pcVar5 == (char*)0x0) {
      uVar6 = pkey_test_init_keyctx(param_1, param_2, 0);
      if (( *(int*)( param_1 + 0x998 ) != 0 ) || ( (int)uVar6 == 0 )) goto LAB_00103258;
      lVar7 = *(long*)( param_1 + 0x9c8 );
      *(undefined**)( lVar7 + 0x10 ) = &EVP_PKEY_sign_init_ex;
      *(undefined**)( lVar7 + 0x20 ) = &EVP_PKEY_sign;
      LAB_001032bb:uVar6 = OPENSSL_sk_new_null();
      *(undefined8*)( lVar7 + 0x48 ) = uVar6;
      uVar6 = OPENSSL_sk_new_null();
      *(undefined8*)( lVar7 + 0x50 ) = uVar6;
      uVar6 = 1;
   }
 else {
      if (( ( pcVar5 == param_2 ) || ( pcVar5[1] == '\0' ) ) || ( lVar7 = 0x32 < lVar7 )) {
         test_info("test/evp_test.c", 0x9ea, "Can\'t extract algorithm or key name from \'%s\'", param_2);
      }
 else {
         __memcpy_chk(auStack_68, param_2, lVar7, 0x33);
         auStack_68[lVar7] = 0;
         uVar6 = pkey_test_init_keyctx(param_1, pcVar5 + 1, 0);
         puVar3 = PTR_EVP_PKEY_sign_00115008;
         uVar2 = libctx;
         uVar1 = propquery;
         if (*(int*)( param_1 + 0x998 ) != 0) goto LAB_00103258;
         if ((int)uVar6 != 0) {
            lVar7 = *(long*)( param_1 + 0x9c8 );
            *(undefined**)( lVar7 + 0x18 ) = _GLOBAL_OFFSET_TABLE_;
            *(undefined**)( lVar7 + 0x20 ) = puVar3;
            uVar6 = EVP_SIGNATURE_fetch(uVar2, auStack_68, uVar1);
            *(undefined8*)( lVar7 + 8 ) = uVar6;
            iVar4 = test_ptr("test/evp_test.c", 0x9fb, "kdata->sigalgo = EVP_SIGNATURE_fetch(libctx, algoname, propquery)", uVar6);
            if (iVar4 == 0) {
               test_info("test/evp_test.c", 0x9fd, "algoname = \'%s\'", auStack_68);
               uVar6 = 0;
               goto LAB_00103258;
            }

            goto LAB_001032bb;
         }

      }

      uVar6 = 0;
   }

   LAB_00103258:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Type propagation algorithm not settling */void decapsulate_isra_0(long param_1, undefined8 param_2, long param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   int iVar1;
   char *pcVar2;
   long lVar3;
   undefined1 *puVar4;
   void *pvVar5;
   void **ppvVar6;
   long in_FS_OFFSET;
   void *local_b0[2];
   long local_a0;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   lVar3 = *(long*)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (undefined1[16])0x0;
   local_b0[1] = (void*)0x0;
   local_a0 = 0;
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   iVar1 = OPENSSL_sk_num(*(undefined8*)( lVar3 + 0x30 ));
   if (iVar1 < 1) {
      puVar4 = (undefined1*)0x0;
      LAB_0010344f:iVar1 = EVP_PKEY_decapsulate_init(param_2, puVar4);
      if (iVar1 < 1) {
         *(char**)( param_1 + 0x9a8 ) = "TEST_DECAPSULATE_INIT_ERROR";
      }
 else {
         if (param_3 != 0) {
            iVar1 = EVP_PKEY_CTX_set_kem_op(param_2, param_3);
            if (iVar1 < 1) {
               *(char**)( param_1 + 0x9a8 ) = "TEST_SET_KEM_OP_ERROR";
               goto LAB_0010356e;
            }

         }

         iVar1 = EVP_PKEY_decapsulate(param_2, 0, local_b0 + 1, param_4, param_5);
         if (0 < iVar1) {
            local_b0[0] = CRYPTO_malloc((int)local_b0[1], "test/evp_test.c", 0x91f);
            iVar1 = test_ptr("test/evp_test.c", 0x91f, "out = OPENSSL_malloc(outlen)", local_b0[0]);
            pvVar5 = local_b0[0];
            if (iVar1 != 0) {
               iVar1 = EVP_PKEY_decapsulate(param_2, local_b0[0], local_b0 + 1, param_4, param_5);
               if (iVar1 < 1) {
                  *(char**)( param_1 + 0x9a8 ) = "TEST_DECAPSULATE_ERROR";
               }
 else {
                  iVar1 = test_mem_eq("test/evp_test.c", 0x928, &_LC109, "expected", pvVar5, local_b0[1], param_6, param_7);
                  pcVar2 = "TEST_SECRET_MISMATCH";
                  if (iVar1 != 0) {
                     pcVar2 = (char*)0x0;
                  }

                  *(char**)( param_1 + 0x9a8 ) = pcVar2;
               }

            }

            goto LAB_00103578;
         }

         *(char**)( param_1 + 0x9a8 ) = "TEST_DECAPSULATE_LEN_ERROR";
      }

   }
 else {
      puVar4 = local_98;
      iVar1 = ctrl2params(param_1, *(undefined8*)( lVar3 + 0x30 ), 0, puVar4, 2, &local_a0);
      if (iVar1 != 0) goto LAB_0010344f;
   }

   LAB_0010356e:pvVar5 = (void*)0x0;
   LAB_00103578:CRYPTO_free(pvVar5);
   iVar1 = OPENSSL_sk_num(*(undefined8*)( lVar3 + 0x30 ));
   if (0 < iVar1) {
      lVar3 = local_a0 + -1;
      if (local_a0 != 0) {
         ppvVar6 = local_b0 + local_a0 * 5;
         do {
            pvVar5 = *ppvVar6;
            lVar3 = lVar3 + -1;
            ppvVar6 = ppvVar6 + -5;
            CRYPTO_free(pvVar5);
         }
 while ( lVar3 != -1 );
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined4 cipher_test_enc(long param_1, int param_2, long param_3, long param_4, int param_5, int param_6, undefined8 param_7) {
   undefined8 *puVar1;
   int iVar2;
   int iVar3;
   EVP_CIPHER_CTX *ctx;
   void *ptr;
   uchar *in;
   ulong uVar4;
   EVP_CIPHER_CTX *pEVar5;
   void *pvVar6;
   undefined8 uVar7;
   ulong uVar8;
   long lVar9;
   uchar *puVar10;
   undefined4 uVar11;
   undefined8 *puVar12;
   EVP_CIPHER_CTX *a;
   long lVar13;
   uchar *in_00;
   long in_FS_OFFSET;
   EVP_CIPHER_CTX *local_198;
   size_t local_180;
   long local_178;
   long local_170;
   undefined8 local_158;
   undefined8 uStack_150;
   undefined8 local_148;
   undefined8 uStack_140;
   undefined8 local_138;
   int local_128;
   int local_124;
   int local_120;
   int local_11c;
   undefined1 local_118[16];
   undefined1 local_108[16];
   undefined1 local_f8[16];
   undefined1 auStack_e8[16];
   undefined1 auStack_d8[16];
   undefined1 local_c8[136];
   long local_40;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = fips_provider_version_ge(libctx, 3, 2, 0);
   *(char**)( param_1 + 0x9a8 ) = "TEST_FAILURE";
   ctx = EVP_CIPHER_CTX_new();
   iVar3 = test_ptr("test/evp_test.c", 0x448, "ctx_base = EVP_CIPHER_CTX_new()", ctx);
   if (iVar3 == 0) {
      uVar11 = 0;
      local_198 = (EVP_CIPHER_CTX*)0x0;
      ptr = (void*)0x0;
      goto LAB_001036fc;
   }

   local_198 = EVP_CIPHER_CTX_new();
   iVar3 = test_ptr("test/evp_test.c", 0x44a, "ctx = EVP_CIPHER_CTX_new()");
   if (iVar3 != 0) {
      EVP_CIPHER_CTX_set_flags(ctx, 1);
      if (param_2 == 0) {
         local_180 = puVar1[0xd];
         pvVar6 = (void*)puVar1[0xc];
         local_170 = puVar1[10];
         local_178 = puVar1[0xb];
      }
 else {
         local_180 = puVar1[0xb];
         pvVar6 = (void*)puVar1[10];
         local_170 = puVar1[0xc];
         local_178 = puVar1[0xd];
      }

      if (param_6 == 1) {
         ptr = CRYPTO_malloc((int)local_180 + 0x40 + (int)param_3, "test/evp_test.c", 0x45a);
         if (ptr != (void*)0x0) {
            in = (uchar*)memcpy((void*)( (long)ptr + param_3 ), pvVar6, local_180);
            goto LAB_0010381d;
         }

      }
 else {
         param_4 = ( param_3 + local_180 & 0xfffffffffffffff0 ) + 0x10 + param_4;
         ptr = CRYPTO_malloc((int)param_4 + 0x40 + (int)local_180, "test/evp_test.c", 0x468);
         if (ptr != (void*)0x0) {
            in = (uchar*)memcpy((void*)( (long)ptr + param_4 + 0x40 ), pvVar6, local_180);
            LAB_0010381d:iVar3 = EVP_CipherInit_ex2(ctx, *puVar1, 0, 0, param_2, param_7);
            if (iVar3 == 0) {
               uVar11 = 0;
               *(char**)( param_1 + 0x9a8 ) = "CIPHERINIT_ERROR";
               goto LAB_001036fc;
            }

            if (puVar1[0x18] != 0) {
               OSSL_PARAM_construct_utf8_string(&local_158, "cts_mode");
               local_f8._0_8_ = local_138;
               OSSL_PARAM_construct_end(&local_158);
               local_f8._8_8_ = local_158;
               auStack_e8._8_8_ = local_148;
               auStack_e8._0_8_ = uStack_150;
               auStack_d8._8_8_ = local_138;
               auStack_d8._0_8_ = uStack_140;
               iVar3 = EVP_CIPHER_CTX_set_params(ctx, local_118);
               if (iVar3 == 0) {
                  *(char**)( param_1 + 0x9a8 ) = "INVALID_CTS_MODE";
                  uVar11 = 0;
                  goto LAB_001036fc;
               }

            }

            iVar3 = *(int*)( (long)puVar1 + 0x14 );
            if (puVar1[6] != 0) {
               lVar9 = puVar1[9];
               if (iVar3 == 0) {
                  iVar3 = EVP_CIPHER_CTX_get_iv_length(ctx);
                  if (iVar3 != lVar9) goto LAB_00103e43;
               }
 else {
                  iVar3 = EVP_CIPHER_CTX_ctrl(ctx, 9, (int)lVar9, (void*)0x0);
                  if (iVar3 < 1) {
                     LAB_00103e43:uVar11 = 0;
                     *(char**)( param_1 + 0x9a8 ) = "INVALID_IV_LENGTH";
                     goto LAB_001036fc;
                  }

               }

               iVar3 = *(int*)( (long)puVar1 + 0x14 );
            }

            if (( iVar3 == 0 ) || ( *(int*)( puVar1 + 0x16 ) != 0 )) {
               LAB_00103990:if (( *(int*)( puVar1 + 8 ) == 0 ) || ( iVar3 = EVP_CIPHER_CTX_ctrl(ctx, 5, *(int*)( puVar1 + 8 ), (void*)0x0) ),0 < iVar3) {
                  iVar3 = EVP_CIPHER_CTX_set_key_length(ctx, *(int*)( puVar1 + 4 ));
                  if (iVar3 == 0) {
                     uVar11 = 0;
                     *(char**)( param_1 + 0x9a8 ) = "INVALID_KEY_LENGTH";
                     goto LAB_001036fc;
                  }

                  if (( puVar1[5] != 0 ) && ( iVar3 = iVar3 < 1 )) {
                     uVar11 = 0;
                     *(char**)( param_1 + 0x9a8 ) = "INVALID KEY BITS";
                     goto LAB_001036fc;
                  }

                  iVar3 = EVP_CipherInit_ex(ctx, (EVP_CIPHER*)0x0, (ENGINE*)0x0, (uchar*)puVar1[3], (uchar*)puVar1[6], -1);
                  if (iVar3 == 0) {
                     uVar11 = 0;
                     *(char**)( param_1 + 0x9a8 ) = "KEY_SET_ERROR";
                     goto LAB_001036fc;
                  }

                  if (puVar1[6] != 0) {
                     iVar3 = EVP_CIPHER_CTX_get_updated_iv(ctx, local_c8, 0x80);
                     iVar3 = test_true("test/evp_test.c", 0x4be, "EVP_CIPHER_CTX_get_updated_iv(ctx_base, iv, sizeof(iv))", iVar3 != 0);
                     if (( iVar3 == 0 ) || ( ( uVar4 = EVP_CIPHER_get_flags(*puVar1)(uVar4 & 0x10) == 0 && ( iVar3 = test_mem_eq("test/evp_test.c", 0x4c0, "expected->iv", &_LC126, puVar1[6], puVar1[9], local_c8, puVar1[9]) == 0 ) ) )) {
                        uVar11 = 0;
                        *(char**)( param_1 + 0x9a8 ) = "INVALID_IV";
                        goto LAB_001036fc;
                     }

                  }

                  ERR_set_mark();
                  iVar3 = EVP_CIPHER_CTX_copy(local_198, ctx);
                  if (iVar3 == 0) {
                     if (iVar2 != 0) {
                        uVar11 = 0;
                        uVar7 = EVP_CIPHER_get0_name(*puVar1);
                        test_info("test/evp_test.c", 0x4cb, "Doing a copy of Cipher %s Fails!\n", uVar7);
                        ERR_print_errors_fp(_stderr);
                        goto LAB_001036fc;
                     }

                     test_info("test/evp_test.c", 0x4d0, "Allowing copy fail as an old fips provider is in use.");
                     EVP_CIPHER_CTX_free(local_198);
                     pEVar5 = (EVP_CIPHER_CTX*)EVP_CIPHER_CTX_dup(ctx);
                     a = ctx;
                     local_198 = ctx;
                     if (pEVar5 == (EVP_CIPHER_CTX*)0x0) goto LAB_00104088;
                     LAB_00103afe:local_198 = pEVar5;
                     EVP_CIPHER_CTX_free(a);
                  }
 else {
                     EVP_CIPHER_CTX_free(ctx);
                     pEVar5 = (EVP_CIPHER_CTX*)EVP_CIPHER_CTX_dup(local_198);
                     if (pEVar5 != (EVP_CIPHER_CTX*)0x0) {
                        ctx = (EVP_CIPHER_CTX*)0x0;
                        a = local_198;
                        goto LAB_00103afe;
                     }

                     if (iVar2 != 0) {
                        ctx = (EVP_CIPHER_CTX*)0x0;
                        uVar11 = 0;
                        uVar7 = EVP_CIPHER_get0_name(*puVar1);
                        test_info("test/evp_test.c", 0x4df, "Doing a dup of Cipher %s Fails!\n", uVar7);
                        ERR_print_errors_fp(_stderr);
                        goto LAB_001036fc;
                     }

                     ctx = (EVP_CIPHER_CTX*)0x0;
                     LAB_00104088:test_info("test/evp_test.c", 0x4e4, "Allowing dup fail as an old fips provider is in use.");
                  }

                  ERR_pop_to_mark();
                  if (( (void*)puVar1[0x1b] == (void*)0x0 ) || ( iVar2 = EVP_CIPHER_CTX_ctrl(local_198, 0x17, *(int*)( puVar1 + 0x1c ), (void*)puVar1[0x1b]) ),0 < iVar2) {
                     if (*(int*)( (long)puVar1 + 0xb4 ) != 0) {
                        OSSL_PARAM_construct_int(&local_158, "tls-version", (long)puVar1 + 0xb4);
                        local_f8._0_8_ = local_138;
                        OSSL_PARAM_construct_end(&local_158);
                        local_f8._8_8_ = local_158;
                        auStack_e8._8_8_ = local_148;
                        auStack_e8._0_8_ = uStack_150;
                        auStack_d8._8_8_ = local_138;
                        auStack_d8._0_8_ = uStack_140;
                        iVar2 = EVP_CIPHER_CTX_set_params(local_198);
                        if (iVar2 == 0) {
                           *(char**)( param_1 + 0x9a8 ) = "SET_TLS_VERSION_ERROR";
                           uVar11 = 0;
                           goto LAB_001036fc;
                        }

                     }

                     if (( *(int*)( (long)puVar1 + 0x14 ) == 7 ) && ( iVar2 = EVP_CipherUpdate(local_198, (uchar*)0x0, &local_128, (uchar*)0x0, (int)local_178) ),iVar2 == 0) {
                        *(char**)( param_1 + 0x9a8 ) = "CCM_PLAINTEXT_LENGTH_SET_ERROR";
                     }
 else {
                        puVar10 = (uchar*)puVar1[0xe];
                        if (puVar10 == (uchar*)0x0) {
                           LAB_00103fb3:if (*(int*)( puVar1 + 0x16 ) != 0) {
                              puVar10 = (uchar*)puVar1[0xe];
                              goto LAB_00103b72;
                           }

                           LAB_00103fc4:if (( param_2 == 0 ) && ( ( ( *(int*)( (long)puVar1 + 0x14 ) == 0x10003 || ( *(int*)( puVar1 + 0x1a ) != 0 ) ) && ( iVar2 = EVP_CIPHER_CTX_ctrl(local_198, 0x11, *(int*)( puVar1 + 0x19 ), (void*)puVar1[0x17]) ),iVar2 < 1 ) )) {
                              *(char**)( param_1 + 0x9a8 ) = "TAG_SET_ERROR";
                              goto LAB_00103db0;
                           }

                           LAB_00103c44:if (puVar1[0x1d] != 0) {
                              OSSL_PARAM_construct_utf8_string(&local_158, "xts_standard", puVar1[0x1d], 0);
                              local_f8._0_8_ = local_138;
                              OSSL_PARAM_construct_end(&local_158);
                              local_f8._8_8_ = local_158;
                              auStack_e8._8_8_ = local_148;
                              auStack_e8._0_8_ = uStack_150;
                              auStack_d8._8_8_ = local_138;
                              auStack_d8._0_8_ = uStack_140;
                              iVar2 = EVP_CIPHER_CTX_set_params(local_198);
                              if (iVar2 == 0) {
                                 *(char**)( param_1 + 0x9a8 ) = "SET_XTS_STANDARD_ERROR";
                                 goto LAB_00103db0;
                              }

                           }

                           EVP_CIPHER_CTX_set_padding(local_198, 0);
                           local_128 = 0;
                           *(char**)( param_1 + 0x9a8 ) = "CIPHERUPDATE_ERROR";
                           puVar10 = (uchar*)( (long)ptr + param_3 );
                           if (param_5 == 0) {
                              do {
                                 uVar4 = (long)data_chunk_size;
                                 if (local_180 < (ulong)(long)data_chunk_size) {
                                    uVar4 = local_180;
                                 }

                                 if (data_chunk_size == 0) {
                                    uVar4 = local_180;
                                 }

                                 iVar2 = EVP_CipherUpdate(local_198, (uchar*)( local_128 + param_3 + (long)ptr ), &local_124, in, (int)uVar4);
                                 if (iVar2 == 0) goto LAB_00103db0;
                                 local_128 = local_124 + local_128;
                                 in = in + uVar4;
                                 local_180 = local_180 - uVar4;
                              }
 while ( local_180 != 0 );
                              lVar9 = local_128 + param_3;
                           }
 else {
                              lVar9 = param_3;
                              if (local_180 != 0) {
                                 iVar2 = EVP_CipherUpdate(local_198, puVar10, &local_124, in, 1);
                                 if (iVar2 != 0) {
                                    in_00 = in + 1;
                                    local_128 = local_124 + local_128;
                                    uVar4 = local_180 - 1;
                                    lVar9 = local_128 + param_3;
                                    if (uVar4 < 2) {
                                       if (uVar4 == 0) goto LAB_0010426d;
                                    }
 else {
                                       iVar2 = EVP_CipherUpdate(local_198, (uchar*)( (long)ptr + lVar9 ), &local_124, in_00, (int)uVar4 + -1);
                                       if (iVar2 == 0) goto LAB_00103db0;
                                       local_128 = local_128 + local_124;
                                       in_00 = in + ( local_180 - 1 );
                                    }

                                    iVar2 = EVP_CipherUpdate(local_198, (uchar*)( local_128 + param_3 + (long)ptr ), &local_124, in_00, 1);
                                    if (iVar2 != 0) {
                                       local_128 = local_124 + local_128;
                                       lVar9 = local_128 + param_3;
                                       goto LAB_0010426d;
                                    }

                                 }

                                 goto LAB_00103db0;
                              }

                           }

                           LAB_0010426d:iVar2 = EVP_CipherFinal_ex(local_198, (uchar*)( (long)ptr + lVar9 ), &local_120);
                           if (iVar2 == 0) {
                              *(char**)( param_1 + 0x9a8 ) = "CIPHERFINAL_ERROR";
                           }
 else {
                              local_11c = 1;
                              local_118 = (undefined1[16])0x0;
                              local_108 = (undefined1[16])0x0;
                              local_f8 = (undefined1[16])0x0;
                              auStack_e8 = (undefined1[16])0x0;
                              auStack_d8 = (undefined1[16])0x0;
                              OSSL_PARAM_construct_int(&local_158, "fips-indicator", &local_11c);
                              local_f8._0_8_ = local_138;
                              iVar2 = EVP_CIPHER_CTX_get_params(local_198, local_118);
                              if (iVar2 != 0) {
                                 if (*(int*)( param_1 + 0x9d0 ) == 0) {
                                    if (( local_11c != 0 ) && ( fips_indicator_callback_unapproved_count < 1 )) goto LAB_001045f9;
                                    test_error("test/evp_test.c", 0x81, "Test is expected to be FIPS approved");
                                 }
 else {
                                    if (( local_11c != 1 ) && ( fips_indicator_callback_unapproved_count != 0 )) {
                                       LAB_001045f9:if (param_2 == 0) {
                                          if (*(int*)( puVar1 + 0x16 ) != 0) {
                                             if (( 0x301 < *(int*)( (long)puVar1 + 0xb4 ) ) && ( ( iVar2 = EVP_CIPHER_is_a(*puVar1, "AES-128-CBC-HMAC-SHA1") ),iVar2 != 0 || ( iVar2 = EVP_CIPHER_is_a(*puVar1, "AES-256-CBC-HMAC-SHA1") ),iVar2 != 0 )) {
                                                lVar9 = puVar1[9];
                                                local_128 = local_128 - (int)lVar9;
                                                local_170 = local_170 + lVar9;
                                                puVar10 = (uchar*)( (long)ptr + param_3 + lVar9 );
                                             }

                                             if (local_128 + local_120 < (int)local_178) {
                                                local_178 = (long)( local_128 + local_120 );
                                             }

                                          }

                                          iVar2 = memory_err_compare(param_1, "VALUE_MISMATCH", local_170, local_178, puVar10, (long)( local_120 + local_128 ));
                                          joined_r0x00104b55:if (iVar2 != 0) {
                                             LAB_0010464c:if (puVar1[7] != 0) {
                                                iVar2 = EVP_CIPHER_CTX_get_updated_iv(local_198, local_c8, 0x80);
                                                iVar2 = test_true("test/evp_test.c", 0x5aa, "EVP_CIPHER_CTX_get_updated_iv(ctx, iv, sizeof(iv))", iVar2 != 0);
                                                if (( iVar2 == 0 ) || ( ( uVar4 = EVP_CIPHER_get_flags(*puVar1)(uVar4 & 0x10) == 0 && ( iVar2 = test_mem_eq("test/evp_test.c", 0x5ac, "expected->next_iv", &_LC126, puVar1[7], puVar1[9], local_c8, puVar1[9]) == 0 ) ) )) {
                                                   *(char**)( param_1 + 0x9a8 ) = "INVALID_NEXT_IV";
                                                   goto LAB_00103db0;
                                                }

                                             }

                                             uVar11 = 1;
                                             *(undefined8*)( param_1 + 0x9a8 ) = 0;
                                             goto LAB_001036fc;
                                          }

                                       }
 else {
                                          iVar2 = memory_err_compare(param_1, "VALUE_MISMATCH", local_170, local_178, puVar10, (long)( local_120 + local_128 ));
                                          if (iVar2 != 0) {
                                             if (( *(int*)( (long)puVar1 + 0x14 ) == 0 ) || ( *(int*)( puVar1 + 0x16 ) != 0 )) goto LAB_0010464c;
                                             iVar2 = test_size_t_le("test/evp_test.c", 0x598, "expected->tag_len", "sizeof(rtag)", puVar1[0x19], 0x30);
                                             if (iVar2 == 0) {
                                                *(char**)( param_1 + 0x9a8 ) = "TAG_LENGTH_INTERNAL_ERROR";
                                             }
 else {
                                                iVar2 = EVP_CIPHER_CTX_ctrl(local_198, 0x10, *(int*)( puVar1 + 0x19 ), local_c8);
                                                if (0 < iVar2) {
                                                   iVar2 = memory_err_compare(param_1, "TAG_VALUE_MISMATCH", puVar1[0x17], puVar1[0x19], local_c8, puVar1[0x19]);
                                                   goto joined_r0x00104b55;
                                                }

                                                *(char**)( param_1 + 0x9a8 ) = "TAG_RETRIEVE_ERROR";
                                             }

                                          }

                                       }

                                       goto LAB_00103db0;
                                    }

                                    test_error("test/evp_test.c", 0x7c, "Test is not expected to be FIPS approved");
                                 }

                              }

                              *(char**)( param_1 + 0x9a8 ) = "FIPSAPPROVED_ERROR";
                           }

                        }
 else {
                           if (*(int*)( puVar1 + 0x16 ) == 0) {
                              *(char**)( param_1 + 0x9a8 ) = "AAD_SET_ERROR";
                              if (param_5 == 0) {
                                 puVar12 = puVar1 + 0xe;
                                 do {
                                    lVar9 = 0;
                                    uVar4 = puVar12[4];
                                    while (true) {
                                       if (data_chunk_size == 0) break;
                                       uVar8 = (long)data_chunk_size;
                                       if (uVar4 < (ulong)(long)data_chunk_size) {
                                          uVar8 = uVar4;
                                       }

                                       iVar2 = EVP_CipherUpdate(local_198, (uchar*)0x0, &local_124, puVar10 + lVar9, (int)uVar8);
                                       if (iVar2 == 0) goto LAB_00103db0;
                                       lVar9 = lVar9 + uVar8;
                                       uVar4 = uVar4 - uVar8;
                                       if (uVar4 == 0) goto LAB_00103f93;
                                       puVar10 = (uchar*)*puVar12;
                                    }
;
                                    iVar2 = EVP_CipherUpdate(local_198, (uchar*)0x0, &local_124, puVar10 + lVar9, (int)uVar4);
                                    if (iVar2 == 0) goto LAB_00103db0;
                                    LAB_00103f93:puVar10 = (uchar*)puVar12[1];
                                    puVar12 = puVar12 + 1;
                                 }
 while ( puVar10 != (uchar*)0x0 );
                                 goto LAB_00103fb3;
                              }

                              if (puVar1[0x12] != 0) {
                                 iVar2 = EVP_CipherUpdate(local_198, (uchar*)0x0, &local_124, puVar10, 1);
                                 if (iVar2 != 0) {
                                    uVar4 = puVar1[0x12];
                                    if (uVar4 < 3) {
                                       lVar9 = 1;
                                    }
 else {
                                       iVar2 = EVP_CipherUpdate(local_198, (uchar*)0x0, &local_124, (uchar*)( puVar1[0xe] + 1 ), (int)uVar4 + -2);
                                       if (iVar2 == 0) goto LAB_001043e6;
                                       uVar4 = puVar1[0x12];
                                       lVar9 = uVar4 - 1;
                                    }

                                    if (( uVar4 < 2 ) || ( iVar2 = EVP_CipherUpdate(local_198, (uchar*)0x0, &local_124, (uchar*)( lVar9 + puVar1[0xe] ), 1) ),iVar2 != 0) {
                                       puVar10 = (uchar*)puVar1[0xf];
                                       if (puVar10 != (uchar*)0x0) goto LAB_00104316;
                                       goto LAB_00103fb3;
                                    }

                                 }

                                 goto LAB_001043e6;
                              }

                              puVar10 = (uchar*)puVar1[0xf];
                              lVar9 = 0;
                              if (puVar10 != (uchar*)0x0) {
                                 LAB_00104316:if (puVar1[0x13] != 0) {
                                    iVar2 = EVP_CipherUpdate(local_198, (uchar*)0x0, &local_124, puVar10, 1);
                                    if (iVar2 != 0) {
                                       uVar4 = puVar1[0x13];
                                       lVar9 = lVar9 + 1;
                                       if (2 < uVar4) {
                                          iVar2 = EVP_CipherUpdate(local_198, (uchar*)0x0, &local_124, (uchar*)( lVar9 + puVar1[0xf] ), (int)uVar4 + -2);
                                          if (iVar2 == 0) goto LAB_001043e6;
                                          uVar4 = puVar1[0x13];
                                          lVar9 = ( uVar4 - 2 ) + lVar9;
                                       }

                                       if (( uVar4 < 2 ) || ( iVar2 = EVP_CipherUpdate(local_198, (uchar*)0x0, &local_124, (uchar*)( lVar9 + puVar1[0xf] ), 1) ),iVar2 != 0) goto LAB_00104325;
                                    }

                                    goto LAB_001043e6;
                                 }

                                 LAB_00104325:if ((uchar*)puVar1[0x10] == (uchar*)0x0) goto LAB_00103fb3;
                                 if (puVar1[0x14] == 0) {
                                    LAB_00104345:if ((uchar*)puVar1[0x11] == (uchar*)0x0) goto LAB_00103fb3;
                                    iVar2 = EVP_CipherUpdate(local_198, (uchar*)0x0, &local_124, (uchar*)puVar1[0x11], 1);
                                    if (iVar2 == 0) goto LAB_00103db0;
                                    lVar13 = lVar9 + 1;
                                    if (2 < (ulong)puVar1[0x15]) {
                                       iVar2 = EVP_CipherUpdate(local_198, (uchar*)0x0, &local_124, (uchar*)( puVar1[0x11] + lVar13 ), (int)puVar1[0x15] + -2);
                                       if (iVar2 == 0) goto LAB_001043e6;
                                       lVar13 = lVar9 + -1 + puVar1[0x15];
                                    }

                                    EVP_CipherUpdate(local_198, (uchar*)0x0, &local_124, (uchar*)( puVar1[0x11] + lVar13 ), 1);
                                 }
 else {
                                    iVar2 = EVP_CipherUpdate(local_198, (uchar*)0x0, &local_124, (uchar*)puVar1[0x10], 1);
                                    if (iVar2 != 0) {
                                       uVar4 = puVar1[0x14];
                                       lVar9 = lVar9 + 1;
                                       if (2 < uVar4) {
                                          iVar2 = EVP_CipherUpdate(local_198, (uchar*)0x0, &local_124, (uchar*)( lVar9 + puVar1[0x10] ), (int)uVar4 + -2);
                                          if (iVar2 == 0) goto LAB_001043e6;
                                          uVar4 = puVar1[0x14];
                                          lVar9 = ( uVar4 - 2 ) + lVar9;
                                       }

                                       if (( uVar4 < 2 ) || ( iVar2 = EVP_CipherUpdate(local_198, (uchar*)0x0, &local_124, (uchar*)( lVar9 + puVar1[0x10] ), 1) ),iVar2 != 0) goto LAB_00104345;
                                    }

                                 }

                                 LAB_001043e6:uVar11 = 0;
                                 goto LAB_001036fc;
                              }

                              goto LAB_00103fc4;
                           }

                           LAB_00103b72:pvVar6 = (void*)CRYPTO_memdup(puVar10, puVar1[0x12], "test/evp_test.c", 0x534);
                           if (pvVar6 != (void*)0x0) {
                              OSSL_PARAM_construct_octet_string(&local_158, "tlsaad", pvVar6, puVar1[0x12]);
                              local_f8._0_8_ = local_138;
                              OSSL_PARAM_construct_end(&local_158);
                              local_f8._8_8_ = local_158;
                              auStack_e8._8_8_ = local_148;
                              auStack_e8._0_8_ = uStack_150;
                              auStack_d8._8_8_ = local_138;
                              auStack_d8._0_8_ = uStack_140;
                              iVar2 = EVP_CIPHER_CTX_set_params(local_198, local_118);
                              if (iVar2 != 0) {
                                 CRYPTO_free(pvVar6);
                                 goto LAB_00103c44;
                              }

                              CRYPTO_free(pvVar6);
                              *(char**)( param_1 + 0x9a8 ) = "TLS1_AAD_ERROR";
                           }

                        }

                     }

                  }
 else {
                     *(char**)( param_1 + 0x9a8 ) = "SET_MAC_KEY_ERROR";
                  }

                  LAB_00103db0:uVar11 = 0;
                  goto LAB_001036fc;
               }

               *(char**)( param_1 + 0x9a8 ) = "INVALID_ROUNDS";
            }
 else {
               if (param_2 == 0) {
                  if (iVar3 != 0x10003) {
                     if (*(int*)( puVar1 + 0x1a ) != 0) goto LAB_00103ed0;
                     *(char**)( param_1 + 0x9a8 ) = "TAG_SET_ERROR";
                     pvVar6 = (void*)puVar1[0x17];
                     if (pvVar6 != (void*)0x0) goto LAB_00103974;
                     goto LAB_00103ee3;
                  }

                  pvVar6 = (void*)0x0;
                  *(char**)( param_1 + 0x9a8 ) = "TAG_LENGTH_SET_ERROR";
               }
 else {
                  LAB_00103ed0:*(char**)( param_1 + 0x9a8 ) = "TAG_LENGTH_SET_ERROR";
                  LAB_00103ee3:if (iVar3 == 6) goto LAB_00103990;
                  pvVar6 = (void*)0x0;
               }

               LAB_00103974:iVar3 = EVP_CIPHER_CTX_ctrl(ctx, 0x11, *(int*)( puVar1 + 0x19 ), pvVar6);
               if (0 < iVar3) goto LAB_00103990;
            }

            uVar11 = 0;
            goto LAB_001036fc;
         }

      }

   }

   uVar11 = 0;
   ptr = (void*)0x0;
   LAB_001036fc:CRYPTO_free(ptr);
   if (ctx != local_198) {
      EVP_CIPHER_CTX_free(ctx);
   }

   EVP_CIPHER_CTX_free(local_198);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar11;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
uint cipher_test_run(long param_1) {
   undefined8 *puVar1;
   void *pvVar2;
   char cVar3;
   int iVar4;
   uint uVar5;
   undefined8 uVar6;
   undefined *puVar7;
   char cVar8;
   long lVar9;
   long *plVar10;
   char *pcVar11;
   undefined *puVar12;
   char cVar13;
   char *pcVar14;
   long in_FS_OFFSET;
   bool bVar15;
   long alStack_b0[3];
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (undefined1[16])0x0;
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   alStack_b0[2] = 0;
   uVar6 = EVP_CIPHER_get0_name(*puVar1);
   test_info("test/evp_test.c", 0x5c5, "RUNNING TEST FOR CIPHER %s\n", uVar6);
   if (puVar1[3] == 0) {
      *(char**)( param_1 + 0x9a8 ) = "NO_KEY";
      uVar5 = 0;
   }
 else if (( ( puVar1[6] == 0 ) && ( iVar4 = EVP_CIPHER_get_iv_length(*puVar1) ),0 < iVar4 )) &&( iVar4 = iVar4 != 0x10002 ) * (char**)( param_1 + 0x9a8 ) = "NO_IV";
   uVar5 = 0;
}
else{if (((*(int *)((long)puVar1 + 0x14) == 0) || (puVar1[0x17] != 0)) ||
       (*(int *)(puVar1 + 0x16) != 0)){iVar4 = OPENSSL_sk_num(puVar1[0x1e]);
      if ((iVar4 < 1) ||
         (iVar4 = ctrl2params(param_1,puVar1[0x1e],0,local_98,2,alStack_b0 + 2), iVar4 != 0)) {
        iVar4 = cipher_test_valid_fragmentation(puVar1);
        *(undefined1 **)(param_1 + 0x9b0) = aux_err_0;
        cVar13 = '\x01';
LAB_00104ca8:
        bVar15 = false;
LAB_00104cc0:
        puVar7 = &_LC158;
        if (bVar15 != false) {
          puVar7 = &_LC19;
        }
        cVar8 = '\0';
LAB_00104cdc:
        pcVar14 = "aligned";
        if (cVar8 != '\0') {
          pcVar14 = "misaligned";
        }
        cVar3 = cVar8;
        if (cVar13 == '\x01') goto LAB_00104de8;
        lVar9 = 0;
        pcVar11 = "aligned";LAB_00104d54:BIO_snprintf(aux_err_0,0x40,"%s output and %s input, %sfragmented",pcVar14,pcVar11,puVar7);
        do{if (*(int *)(puVar1 + 2) == 0) {
LAB_00104d10:
            uVar5 = cipher_test_enc(param_1,0,cVar8,lVar9,bVar15,cVar13,local_98);
            if (uVar5 != 1) {
LAB_00104ed8:
              lVar9 = alStack_b0[2] + -1;
              if (alStack_b0[2] != 0) {
                plVar10 = alStack_b0 + alStack_b0[2] * 5;
                do {
                  pvVar2 = (void *)*plVar10;
                  lVar9 = lVar9 + -1;
                  plVar10 = plVar10 + -5;
                  CRYPTO_free(pvVar2);
                } while (lVar9 != -1);
              }
              uVar5 = ~uVar5 >> 0x1f;
              goto LAB_00104f2b;
            }
            if (lVar9 != 1) goto LAB_00104d41;
LAB_00104dc0:
            if (cVar8 == '\0') {
              cVar8 = '\x01';
              goto LAB_00104cdc;
            }
LAB_00104e38:
            if ((bVar15 < (iVar4 != 0)) && (bVar15 = true, data_chunk_size == 0)) goto LAB_00104cc0;
            if (cVar13 != '\0') {
              cVar13 = '\0';
              bVar15 = process_mode_in_place != 1;
              *(undefined1 **)(param_1 + 0x9b0) = aux_err_0;
              if (bVar15) goto LAB_00104ca8;
            }
            lVar9 = alStack_b0[2] + -1;
            if (alStack_b0[2] != 0) {
              plVar10 = alStack_b0 + alStack_b0[2] * 5;
              do {
                pvVar2 = (void *)*plVar10;
                lVar9 = lVar9 + -1;
                plVar10 = plVar10 + -5;
                CRYPTO_free(pvVar2);
              } while (lVar9 != -1);
            }
            *(undefined8 *)(param_1 + 0x9b0) = 0;
            uVar5 = 1;
            goto LAB_00104f2b;
          }
          uVar5 = cipher_test_enc(param_1,1,cVar8,lVar9,bVar15,cVar13,local_98);
          if (uVar5 != 1) goto LAB_00104ed8;
          if (*(int *)(puVar1 + 2) != 1) goto LAB_00104d10;
          if (lVar9 == 1) goto LAB_00104dc0;
LAB_00104d41:
          lVar9 = 1;
          pcVar11 = "misaligned";
          if (cVar13 == '\0') goto LAB_00104d54;
          pcVar14 = "misaligned";
          if (cVar8 == '\x01') goto LAB_00104e38;
          cVar8 = '\x01';
          cVar3 = cVar13;
LAB_00104de8:
          puVar12 = &_LC158;
          if (bVar15 != false) {
            puVar12 = &_LC19;
          }
          pcVar11 = "misaligned";
          if (cVar3 == '\0') {
            pcVar11 = "aligned";
          }
          lVar9 = 0;BIO_snprintf(aux_err_0, 0x40, "%s in-place, %sfragmented", pcVar11, puVar12);}while( true );}};else{*(char**)( param_1 + 0x9a8 ) = "NO_TAG";};uVar5 = 0;}LAB_00104f2b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar5;}void evp_test_buffer_free(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      CRYPTO_free((void*)*param_1);
      CRYPTO_free(param_1);
      return;
   }

   return;
}
undefined8 evp_test_buffer_append(char *param_1, ulong param_2, long *param_3) {
   char cVar1;
   char cVar2;
   bool bVar3;
   int iVar4;
   long *ptr;
   undefined1 *puVar5;
   undefined8 uVar6;
   size_t sVar7;
   void *ptr_00;
   ulong uVar8;
   long lVar9;
   long lVar10;
   char *__s;
   long in_FS_OFFSET;
   long local_68;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_3 == 0) {
      lVar9 = OPENSSL_sk_new_null();
      *param_3 = lVar9;
      iVar4 = test_ptr("test/evp_test.c", 0x17e, "*sk = sk_EVP_TEST_BUFFER_new_null()", lVar9);
      if (iVar4 == 0) {
         uVar6 = 0;
         goto LAB_00105148;
      }

   }

   if (param_2 == 0) {
      ptr = (long*)CRYPTO_zalloc(0x20, "test/evp_test.c", 0x182);
      iVar4 = test_ptr("test/evp_test.c", 0x182, "db = OPENSSL_zalloc(sizeof(*db))", ptr);
      if (( iVar4 == 0 ) || ( iVar4 = iVar4 != 1 )) {
         LAB_00105280:if (ptr == (long*)0x0) {
            uVar6 = 0;
            goto LAB_00105148;
         }

         LAB_00105126:CRYPTO_free((void*)*ptr);
         CRYPTO_free(ptr);
         uVar6 = 0;
         goto LAB_00105148;
      }

      ptr[2] = 1;
      *(undefined4*)( ptr + 3 ) = 0;
      if (*ptr == 0) {
         CRYPTO_free((void*)0x0);
         CRYPTO_free(ptr);
      }
 else {
         iVar4 = OPENSSL_sk_push(*param_3, ptr);
         joined_r0x00105120:if (iVar4 == 0) goto LAB_00105126;
      }

   }
 else {
      local_68 = 0;
      do {
         ptr = (long*)CRYPTO_zalloc(0x20, "test/evp_test.c", 0x182);
         iVar4 = test_ptr("test/evp_test.c", 0x182, "db = OPENSSL_zalloc(sizeof(*db))", ptr);
         if (iVar4 == 0) goto LAB_00105280;
         cVar1 = *param_1;
         if (cVar1 == '\"') {
            lVar9 = local_68 + 1;
            LAB_00105221:__s = param_1 + lVar9;
            if (( ( *param_1 == '\"' ) && ( param_1[1] == '\"' ) ) && ( param_1[2] == '\0' )) goto LAB_001050d9;
            cVar2 = *__s;
            if (cVar2 == '\0') {
               LAB_00105290:local_68 = 0;
               lVar9 = *ptr;
               bVar3 = false;
            }
 else {
               sVar7 = strlen(__s);
               if (cVar1 == '\"') {
                  if (sVar7 == 1) {
                     if (cVar2 == '\"') goto LAB_00105290;
                     goto LAB_00105280;
                  }

                  uVar8 = sVar7 - 1;
                  if (param_2 < sVar7 - 1) {
                     uVar8 = param_2;
                  }

                  lVar9 = unescape_part_0(__s, uVar8, ptr + 1);
                  *ptr = lVar9;
                  if (lVar9 == 0) goto LAB_00105126;
                  lVar10 = ptr[1];
               }
 else {
                  uVar8 = param_2 * 2;
                  if (sVar7 < param_2 * 2) {
                     uVar8 = sVar7;
                  }

                  ptr_00 = (void*)CRYPTO_strndup(__s, uVar8, "test/evp_test.c", 0x275);
                  if (ptr_00 == (void*)0x0) goto LAB_00105280;
                  lVar9 = OPENSSL_hexstr2buf(ptr_00, &local_48);
                  *ptr = lVar9;
                  iVar4 = test_ptr("test/evp_test.c", 0x278, "*buf = OPENSSL_hexstr2buf(chunk, &len)", lVar9);
                  if (iVar4 == 0) {
                     CRYPTO_free(ptr_00);
                     test_openssl_errors();
                     goto LAB_00105126;
                  }

                  CRYPTO_free(ptr_00);
                  lVar9 = *ptr;
                  ptr[1] = local_48;
                  lVar10 = local_48;
               }

               if (*param_1 == '\"') {
                  local_68 = local_68 + lVar10;
                  bVar3 = true;
               }
 else {
                  bVar3 = true;
                  local_68 = local_68 + lVar10 * 2;
               }

            }

            ptr[2] = 1;
            *(undefined4*)( ptr + 3 ) = 0;
            if (lVar9 == 0) goto LAB_001052f0;
            iVar4 = OPENSSL_sk_push(*param_3, ptr);
            if (iVar4 == 0) goto LAB_00105280;
         }
 else {
            lVar9 = local_68;
            if (cVar1 != '\0') goto LAB_00105221;
            LAB_001050d9:puVar5 = (undefined1*)CRYPTO_malloc(1, "test/evp_test.c", 599);
            *ptr = (long)puVar5;
            if (puVar5 != (undefined1*)0x0) {
               *puVar5 = 0;
               lVar9 = *param_3;
               ptr[1] = 0;
               ptr[2] = 1;
               *(undefined4*)( ptr + 3 ) = 0;
               iVar4 = OPENSSL_sk_push(lVar9, ptr);
               goto joined_r0x00105120;
            }

            ptr[2] = 1;
            bVar3 = false;
            *(undefined4*)( ptr + 3 ) = 0;
            local_68 = 0;
            LAB_001052f0:CRYPTO_free((void*)0x0);
            CRYPTO_free(ptr);
         }

      }
 while ( bVar3 );
   }

   uVar6 = 1;
   LAB_00105148:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 decrypt_test_init(long param_1, undefined8 param_2) {
   long lVar1;
   undefined8 uVar2;
   uVar2 = pkey_test_init_keyctx(param_1, param_2, 0);
   if (( *(int*)( param_1 + 0x998 ) == 0 ) && ( (int)uVar2 != 0 )) {
      lVar1 = *(long*)( param_1 + 0x9c8 );
      *(undefined**)( lVar1 + 0x10 ) = &EVP_PKEY_decrypt_init_ex;
      *(undefined**)( lVar1 + 0x20 ) = &EVP_PKEY_decrypt;
      uVar2 = OPENSSL_sk_new_null();
      *(undefined8*)( lVar1 + 0x48 ) = uVar2;
      uVar2 = OPENSSL_sk_new_null();
      *(undefined8*)( lVar1 + 0x50 ) = uVar2;
      return 1;
   }

   return uVar2;
}
undefined8 pderive_test_init(long param_1, undefined8 param_2) {
   long lVar1;
   undefined8 uVar2;
   uVar2 = pkey_test_init_keyctx(param_1, param_2, 0);
   if (( *(int*)( param_1 + 0x998 ) == 0 ) && ( (int)uVar2 != 0 )) {
      lVar1 = *(long*)( param_1 + 0x9c8 );
      *(undefined8*)( lVar1 + 0x20 ) = 0;
      *(undefined**)( lVar1 + 0x10 ) = &EVP_PKEY_derive_init_ex;
      uVar2 = OPENSSL_sk_new_null();
      *(undefined8*)( lVar1 + 0x48 ) = uVar2;
      uVar2 = OPENSSL_sk_new_null();
      *(undefined8*)( lVar1 + 0x50 ) = uVar2;
      return 1;
   }

   return uVar2;
}
undefined8 digestverify_test_run(long param_1) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   int iVar5;
   undefined8 *puVar6;
   ulong uVar7;
   lVar1 = *(long*)( param_1 + 0x9c8 );
   iVar4 = signverify_init(param_1, lVar1);
   if (iVar4 != 0) {
      uVar2 = *(undefined8*)( lVar1 + 0x20 );
      uVar3 = *(undefined8*)( lVar1 + 0x10 );
      for (iVar4 = 0; iVar5 = OPENSSL_sk_num(uVar2),iVar4 < iVar5; iVar4 = iVar4 + 1) {
         puVar6 = (undefined8*)OPENSSL_sk_value(uVar2, iVar4);
         if (puVar6[2] != 0) {
            uVar7 = 0;
            do {
               iVar5 = EVP_DigestVerifyUpdate(uVar3, *puVar6, puVar6[1]);
               if (iVar5 < 1) {
                  *(char**)( param_1 + 0x9a8 ) = "DIGESTUPDATE_ERROR";
                  return 1;
               }

               uVar7 = uVar7 + 1;
            }
 while ( uVar7 < (ulong)puVar6[2] );
         }

      }

      iVar4 = EVP_DigestVerifyFinal(*(EVP_MD_CTX**)( lVar1 + 0x10 ), *(uchar**)( lVar1 + 0x38 ), *(size_t*)( lVar1 + 0x40 ));
      if (iVar4 < 1) {
         *(char**)( param_1 + 0x9a8 ) = "VERIFY_ERROR";
      }

   }

   return 1;
}
ulong digest_test_parse(long param_1, char *param_2, char *param_3) {
   int iVar1;
   ulong uVar2;
   long lVar3;
   long lVar4;
   lVar4 = *(long*)( param_1 + 0x9c8 );
   iVar1 = strcmp(param_2, "Input");
   if (iVar1 == 0) {
      uVar2 = evp_test_buffer_append(param_3, (long)data_chunk_size, lVar4 + 0x10);
      return uVar2;
   }

   iVar1 = strcmp(param_2, "Output");
   if (iVar1 == 0) {
      uVar2 = parse_bin(param_3, lVar4 + 0x18, lVar4 + 0x20);
      return uVar2;
   }

   iVar1 = strcmp(param_2, "Count");
   if (iVar1 == 0) {
      lVar4 = *(long*)( lVar4 + 0x10 );
      lVar3 = strtol(param_3, (char**)0x0, 10);
      if (( ( lVar4 != 0 ) && ( 0 < (int)lVar3 ) ) && ( iVar1 = iVar1 != 0 )) {
         iVar1 = OPENSSL_sk_num(lVar4);
         lVar4 = OPENSSL_sk_value(lVar4, iVar1 + -1);
         if (*(int*)( lVar4 + 0x18 ) == 0) {
            *(undefined4*)( lVar4 + 0x18 ) = 1;
            *(long*)( lVar4 + 0x10 ) = (long)(int)lVar3;
            return 1;
         }

      }

   }
 else {
      iVar1 = strcmp(param_2, "Ncopy");
      if (iVar1 == 0) {
         uVar2 = evp_test_buffer_ncopy(param_3, *(undefined8*)( lVar4 + 0x10 ));
         return uVar2;
      }

      iVar1 = strcmp(param_2, "Padding");
      if (iVar1 == 0) {
         lVar3 = strtol(param_3, (char**)0x0, 10);
         *(int*)( lVar4 + 0x28 ) = (int)lVar3;
         return ( ulong )(0 < (int)lVar3);
      }

      iVar1 = strcmp(param_2, "XOF");
      if (iVar1 == 0) {
         lVar3 = strtol(param_3, (char**)0x0, 10);
         *(int*)( lVar4 + 0x2c ) = (int)lVar3;
         return ( ulong )(0 < (int)lVar3);
      }

      iVar1 = strcmp(param_2, "OutputSize");
      if (iVar1 == 0) {
         lVar3 = strtol(param_3, (char**)0x0, 10);
         if (-1 < (int)lVar3) {
            *(long*)( lVar4 + 0x30 ) = (long)(int)lVar3;
            return 1;
         }

         return 0xffffffff;
      }

   }

   return 0;
}
undefined8 pbe_test_parse(long param_1, char *param_2, char *param_3) {
   char cVar1;
   int *piVar2;
   int iVar3;
   EVP_MD *pEVar4;
   long lVar5;
   undefined8 uVar6;
   int *piVar7;
   int *piVar8;
   piVar2 = *(int**)( param_1 + 0x9c8 );
   iVar3 = strcmp(param_2, "Password");
   piVar7 = piVar2 + 0x10;
   piVar8 = piVar2 + 0xe;
   if (iVar3 == 0) {
      LAB_00105878:uVar6 = parse_bin(param_3, piVar8, piVar7);
      return uVar6;
   }

   iVar3 = strcmp(param_2, "Salt");
   if (iVar3 == 0) {
      piVar7 = piVar2 + 0x14;
      piVar8 = piVar2 + 0x12;
      goto LAB_00105878;
   }

   iVar3 = strcmp(param_2, "Key");
   piVar7 = piVar2 + 0x18;
   piVar8 = piVar2 + 0x16;
   if (iVar3 == 0) goto LAB_00105878;
   iVar3 = *piVar2;
   if (iVar3 == 2) {
      iVar3 = strcmp(param_2, "iter");
      if (iVar3 != 0) {
         cVar1 = *param_2;
         joined_r0x001058aa:if (( ( cVar1 == 'M' ) && ( param_2[1] == 'D' ) ) && ( param_2[2] == '\0' )) {
            pEVar4 = EVP_get_digestbyname(param_3);
            *(EVP_MD**)( piVar2 + 0xc ) = pEVar4;
            if (pEVar4 == (EVP_MD*)0x0) {
               return 0xffffffff;
            }

            return 1;
         }

         return 0;
      }

   }
 else {
      if (iVar3 != 3) {
         if (iVar3 != 1) {
            return 0;
         }

         cVar1 = *param_2;
         if (( ( ( cVar1 != 'N' ) || ( piVar7 = piVar2 + 2 ),param_2[1] != '\0' ) ) && ( ( cVar1 != 'p' || ( piVar7 = piVar2 + 6 ),param_2[1] != '\0' ) )) {
            iVar3 = strcmp(param_2, "maxmem");
            if (iVar3 != 0) {
               return 0;
            }

            piVar7 = piVar2 + 8;
         }

         uVar6 = parse_uint64(param_3, piVar7);
         return uVar6;
      }

      cVar1 = *param_2;
      if (( ( cVar1 == 'i' ) && ( param_2[1] == 'd' ) ) && ( param_2[2] == '\0' )) {
         lVar5 = strtol(param_3, (char**)0x0, 10);
         iVar3 = (int)lVar5;
         piVar2[10] = iVar3;
         goto joined_r0x0010590a;
      }

      iVar3 = strcmp(param_2, "iter");
      if (iVar3 != 0) goto joined_r0x001058aa;
   }

   lVar5 = strtol(param_3, (char**)0x0, 10);
   iVar3 = (int)lVar5;
   piVar2[0xb] = iVar3;
   joined_r0x0010590a:if (iVar3 < 1) {
      return 0xffffffff;
   }

   return 1;
}
undefined8 pkey_check_fips_approved(undefined8 param_1, long param_2) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   int local_7c;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_7c = 1;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   local_38 = (undefined1[16])0x0;
   lVar2 = EVP_PKEY_CTX_gettable_params();
   if (lVar2 != 0) {
      lVar2 = OSSL_PARAM_locate_const(lVar2, "fips-indicator");
      if (lVar2 != 0) {
         lVar2 = EVP_PKEY_CTX_gettable_params(param_1);
         if (lVar2 != 0) {
            OSSL_PARAM_construct_int(&local_b8, "fips-indicator", &local_7c);
            local_78._8_8_ = uStack_b0;
            local_78._0_8_ = local_b8;
            local_58._0_8_ = local_98;
            local_68._8_8_ = uStack_a0;
            local_68._0_8_ = local_a8;
            iVar1 = EVP_PKEY_CTX_get_params(param_1, local_78);
            if (iVar1 == 0) {
               uVar3 = 0;
               goto LAB_00105acd;
            }

            if (*(int*)( param_2 + 0x9d0 ) == 0) {
               if (( local_7c == 0 ) || ( 0 < fips_indicator_callback_unapproved_count )) {
                  test_error("test/evp_test.c", 0x81, "Test is expected to be FIPS approved");
                  uVar3 = 0;
                  goto LAB_00105acd;
               }

            }
 else if (( local_7c == 1 ) || ( fips_indicator_callback_unapproved_count == 0 )) {
               test_error("test/evp_test.c", 0x7c, "Test is not expected to be FIPS approved");
               uVar3 = 0;
               goto LAB_00105acd;
            }

         }

      }

   }

   uVar3 = 1;
   LAB_00105acd:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool verify_test_run(long param_1) {
   undefined8 *puVar1;
   int iVar2;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   iVar2 = pkey_test_run_init();
   if (iVar2 != 0) {
      iVar2 = EVP_PKEY_verify((EVP_PKEY_CTX*)*puVar1, (uchar*)puVar1[7], puVar1[8], (uchar*)puVar1[5], puVar1[6]);
      if (0 < iVar2) {
         iVar2 = pkey_check_fips_approved(*puVar1, param_1);
         return iVar2 != 0;
      }

      *(char**)( param_1 + 0x9a8 ) = "VERIFY_ERROR";
   }

   return true;
}
int keygen_test_run(long param_1) {
   char *pcVar1;
   bool bVar2;
   EVP_PKEY *pEVar3;
   int iVar4;
   int iVar5;
   EVP_PKEY_CTX *ctx;
   void *pvVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   void *pvVar9;
   undefined8 *puVar10;
   long *plVar11;
   long lVar12;
   undefined8 *puVar13;
   long in_FS_OFFSET;
   bool bVar14;
   EVP_PKEY *local_108;
   long local_100;
   long local_f8;
   long local_f0;
   long local_e8[2];
   undefined8 local_d8[19];
   long local_40;
   puVar13 = *(undefined8**)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_108 = (EVP_PKEY*)0x0;
   local_100 = 0;
   pcVar1 = (char*)puVar13[1];
   if (pcVar1 != (char*)0x0) {
      puVar10 = public_keys;
      if (public_keys != (undefined8*)0x0) {
         do {
            iVar4 = strcmp((char*)*puVar10, pcVar1);
            if (iVar4 == 0) {
               if (puVar10[1] != 0) {
                  ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_pkey(libctx, puVar10[1], propquery);
                  iVar4 = test_ptr("test/evp_test.c", 0x1126, "genctx = EVP_PKEY_CTX_new_from_pkey(libctx, keyparams, propquery)", ctx);
                  if (iVar4 != 0) goto LAB_00105ca0;
                  pvVar6 = (void*)0x0;
                  iVar4 = 1;
                  goto LAB_00105d18;
               }

               break;
            }

            puVar10 = (undefined8*)puVar10[2];
         }
 while ( puVar10 != (undefined8*)0x0 );
      }

      iVar4 = 1;
      test_info("test/evp_test.c", 0x1122, "skipping, key \'%s\' is disabled", pcVar1);
      *(undefined4*)( param_1 + 0x998 ) = 1;
      goto LAB_00105dbd;
   }

   ctx = (EVP_PKEY_CTX*)EVP_PKEY_CTX_new_from_name(libctx, puVar13[2], propquery);
   iVar4 = test_ptr("test/evp_test.c", 0x112b, "genctx = EVP_PKEY_CTX_new_from_name(libctx, keygen->alg, propquery)", ctx);
   pvVar6 = (void*)0x0;
   if (iVar4 == 0) {
      LAB_00105e60:iVar4 = 1;
      LAB_00105d18:EVP_PKEY_free(local_108);
      local_108 = (EVP_PKEY*)0x0;
   }
 else {
      LAB_00105ca0:iVar4 = EVP_PKEY_keygen_init(ctx);
      if (iVar4 < 1) {
         pvVar6 = (void*)0x0;
         iVar4 = 1;
         *(char**)( param_1 + 0x9a8 ) = "KEYGEN_INIT_ERROR";
         goto LAB_00105d18;
      }

      iVar4 = OPENSSL_sk_num(puVar13[3]);
      if (0 < iVar4) {
         pvVar6 = CRYPTO_malloc(0xa0, "test/evp_test.c", 0x1136);
         if (pvVar6 == (void*)0x0) goto LAB_00105e60;
         iVar4 = 1;
         uVar7 = EVP_PKEY_CTX_settable_params(ctx);
         iVar5 = ctrl2params(param_1, puVar13[3], uVar7, pvVar6, 4, &local_100);
         if (iVar5 != 0) {
            iVar5 = EVP_PKEY_CTX_set_params(ctx, pvVar6);
            if (iVar5 != 0) goto LAB_00105e6d;
            *(char**)( param_1 + 0x9a8 ) = "PKEY_CTRL_ERROR";
         }

         goto LAB_00105d18;
      }

      pvVar6 = (void*)0x0;
      LAB_00105e6d:iVar4 = EVP_PKEY_keygen(ctx, &local_108);
      if (iVar4 < 1) {
         iVar4 = 1;
         *(char**)( param_1 + 0x9a8 ) = "KEYGEN_GENERATE_ERROR";
         goto LAB_00105d18;
      }

      iVar4 = pkey_check_fips_approved(ctx, param_1);
      pEVar3 = local_108;
      if (iVar4 == 0) goto LAB_00105d18;
      if (*(long*)&local_108[1].save_parameters == 0) {
         iVar4 = 1;
         test_info("test/evp_test.c", 0x114d, "Warning: legacy key generated %s", *puVar13);
         goto LAB_00105d18;
      }

      local_f8 = 0;
      uVar7 = puVar13[4];
      iVar4 = OPENSSL_sk_num(uVar7);
      if (0 < iVar4) {
         uVar8 = EVP_PKEY_gettable_params(pEVar3);
         plVar11 = local_e8;
         iVar4 = ctrl2params(param_1, uVar7, uVar8, plVar11, 4, &local_f8);
         lVar12 = local_f8;
         if (iVar4 == 0) {
            joined_r0x00106263:bVar2 = false;
            if (lVar12 != 0) {
               LAB_001060b4:puVar10 = local_d8 + ( lVar12 + -1 ) * 5;
               lVar12 = lVar12 + -1;
               do {
                  pvVar9 = (void*)*puVar10;
                  puVar10 = puVar10 + -5;
                  CRYPTO_free(pvVar9);
                  bVar14 = lVar12 != 0;
                  lVar12 = lVar12 + -1;
               }
 while ( bVar14 );
               LAB_00106106:if (bVar2) goto LAB_00105eca;
            }

            iVar4 = 1;
            *(char**)( param_1 + 0x9a8 ) = "KEYGEN_PKEY_MISMATCH_ERROR";
            goto LAB_00105d18;
         }

         if (local_e8[0] != 0) {
            bVar2 = false;
            do {
               if ((int)plVar11[1] == 5) {
                  pvVar9 = CRYPTO_malloc((int)plVar11[3], "test/evp_test.c", 0x10fe);
                  if (pvVar9 == (void*)0x0) {
                     if (lVar12 != 0) goto LAB_001060b4;
                     goto LAB_00106106;
                  }

                  iVar4 = EVP_PKEY_get_octet_string_param(pEVar3, *plVar11, pvVar9, plVar11[3], &local_f0);
                  if (( ( iVar4 == 0 ) || ( plVar11[3] != local_f0 ) ) || ( iVar4 = test_mem_eq("test/evp_test.c", 0x1105, "p->data", &_LC185, plVar11[2], local_f0, pvVar9, local_f0) ),iVar4 != 1) {
                     CRYPTO_free(pvVar9);
                     test_error("test/evp_test.c", 0x1108, "Expected %s value is incorrect", *plVar11);
                     goto joined_r0x00106263;
                  }

                  CRYPTO_free(pvVar9);
                  bVar2 = true;
               }

               plVar11 = plVar11 + 5;
            }
 while ( *plVar11 != 0 );
         }

         if (lVar12 != 0) {
            bVar2 = true;
            goto LAB_001060b4;
         }

      }

      LAB_00105eca:pcVar1 = (char*)*puVar13;
      puVar10 = private_keys;
      if (pcVar1 == (char*)0x0) {
         *(undefined8*)( param_1 + 0x9a8 ) = 0;
         iVar4 = 1;
         goto LAB_00105d18;
      }

      for (; puVar10 != (undefined8*)0x0; puVar10 = (undefined8*)puVar10[2]) {
         iVar4 = strcmp((char*)*puVar10, pcVar1);
         if (iVar4 == 0) {
            iVar4 = 0;
            test_info("test/evp_test.c", 0x115b, "Duplicate key %s", pcVar1);
            goto LAB_00105d18;
         }

      }

      puVar10 = (undefined8*)CRYPTO_malloc(0x18, "test/evp_test.c", 0x115f);
      iVar4 = test_ptr("test/evp_test.c", 0x115f, "key = OPENSSL_malloc(sizeof(*key))", puVar10);
      if (iVar4 == 0) goto LAB_00105d18;
      iVar4 = 1;
      *puVar10 = *puVar13;
      *puVar13 = 0;
      puVar10[1] = local_108;
      *(undefined8*)( param_1 + 0x9a8 ) = 0;
      puVar10[2] = private_keys;
      private_keys = puVar10;
   }

   EVP_PKEY_CTX_free(ctx);
   iVar5 = OPENSSL_sk_num(puVar13[3]);
   if (( 0 < iVar5 ) && ( lVar12 = local_100 != 0 )) {
      puVar13 = (undefined8*)( (long)pvVar6 + local_100 * 0x28 + -0x18 );
      do {
         pvVar9 = (void*)*puVar13;
         lVar12 = lVar12 + -1;
         puVar13 = puVar13 + -5;
         CRYPTO_free(pvVar9);
      }
 while ( lVar12 != -1 );
   }

   OSSL_PARAM_free(pvVar6);
   OSSL_PARAM_BLD_free(0);
   LAB_00105dbd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
int pkey_kdf_test_run(long param_1) {
   undefined8 *puVar1;
   int iVar2;
   uchar *key;
   char *pcVar3;
   ulong uVar4;
   size_t sVar5;
   long in_FS_OFFSET;
   size_t local_38;
   long local_30;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   iVar2 = fips_provider_version_eq(libctx, 3, 0, 0);
   if (iVar2 == 0) {
      iVar2 = EVP_PKEY_derive((EVP_PKEY_CTX*)*puVar1, (uchar*)0x0, &local_38);
      if (iVar2 < 1) {
         key = (uchar*)0x0;
         iVar2 = 1;
         *(char**)( param_1 + 0x9a8 ) = "INTERNAL_ERROR";
         goto LAB_00106359;
      }

      uVar4 = local_38 - 1;
      local_38 = puVar1[2];
      if (uVar4 < 0xfffffffffffffffe) {
         local_38 = puVar1[2] * 2;
      }

   }
 else {
      local_38 = puVar1[2];
   }

   sVar5 = local_38;
   if (local_38 == 0) {
      sVar5 = 1;
   }

   key = (uchar*)CRYPTO_malloc((int)sVar5, "test/evp_test.c", 0x101d);
   iVar2 = test_ptr("test/evp_test.c", 0x101d, "got = OPENSSL_malloc(got_len == 0 ? 1 : got_len)", key);
   if (iVar2 == 0) {
      *(char**)( param_1 + 0x9a8 ) = "INTERNAL_ERROR";
   }
 else {
      iVar2 = EVP_PKEY_derive((EVP_PKEY_CTX*)*puVar1, key, &local_38);
      if (iVar2 < 1) {
         *(char**)( param_1 + 0x9a8 ) = "KDF_DERIVE_ERROR";
      }
 else {
         iVar2 = pkey_check_fips_approved(*puVar1, param_1);
         if (iVar2 == 0) goto LAB_00106359;
         iVar2 = test_mem_eq("test/evp_test.c", 0x1029, "expected->output", &_LC31, puVar1[1], puVar1[2], key, local_38);
         pcVar3 = "KDF_MISMATCH";
         if (iVar2 != 0) {
            pcVar3 = (char*)0x0;
         }

         *(char**)( param_1 + 0x9a8 ) = pcVar3;
      }

   }

   iVar2 = 1;
   LAB_00106359:CRYPTO_free(key);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
/* WARNING: Type propagation algorithm not settling */undefined8 encapsulate_constprop_0(long param_1, undefined8 param_2, long param_3, undefined8 *param_4, long *param_5, undefined8 *param_6, undefined8 *param_7) {
   int iVar1;
   int iVar2;
   void *pvVar3;
   void *ptr;
   long lVar4;
   long lVar5;
   long *plVar6;
   undefined8 uVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_228;
   undefined8 uStack_220;
   undefined8 local_218;
   undefined8 uStack_210;
   undefined8 local_208;
   long local_1f0[54];
   long local_40;
   lVar5 = *(long*)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 3; i++) {
      local_1f0[i] = 0;
   }

   lVar4 = 9 - ( ulong )(*(long*)( lVar5 + 0x68 ) != 0);
   iVar1 = OPENSSL_sk_num(*(undefined8*)( lVar5 + 0x30 ));
   if (iVar1 < 1) {
      lVar8 = 0;
      LAB_00106541:iVar1 = test_size_t_lt("test/evp_test.c", 0x8bb, "params_n", "params_max", lVar8, lVar4);
      if (iVar1 == 0) goto LAB_001067e7;
      lVar4 = lVar8;
      if (*(long*)( lVar5 + 0x68 ) != 0) {
         lVar4 = lVar8 + 1;
         local_1f0[2] = lVar4;
         OSSL_PARAM_construct_octet_string(&local_228, &_LC198, *(long*)( lVar5 + 0x68 ), *(undefined8*)( lVar5 + 0x70 ));
         local_1f0[lVar8 * 5U + 3] = local_228;
         local_1f0[lVar8 * 5 + 4] = uStack_220;
         local_1f0[lVar8 * 5 + 5] = local_218;
         local_1f0[lVar8 * 5 + 6] = uStack_210;
         local_1f0[lVar8 * 5 + 7] = local_208;
      }

      OSSL_PARAM_construct_end(&local_228);
      local_1f0[lVar4 * 5U + 3] = local_228;
      local_1f0[lVar4 * 5 + 4] = uStack_220;
      local_1f0[lVar4 * 5 + 5] = local_218;
      local_1f0[lVar4 * 5 + 6] = uStack_210;
      local_1f0[lVar4 * 5 + 7] = local_208;
      iVar1 = EVP_PKEY_encapsulate_init(param_2, local_1f0 + 3);
      if (iVar1 < 1) {
         *(char**)( param_1 + 0x9a8 ) = "TEST_ENCAPSULATE_INIT_ERROR";
         LAB_001068af:uVar7 = 1;
         goto LAB_00106810;
      }

      if (( param_3 != 0 ) && ( iVar1 = iVar1 < 1 )) {
         *(char**)( param_1 + 0x9a8 ) = "TEST_SET_KEM_OP_ERROR";
         goto LAB_001068af;
      }

      iVar1 = EVP_PKEY_encapsulate(param_2, 0, local_1f0, 0);
      if (iVar1 < 1) {
         *(char**)( param_1 + 0x9a8 ) = "TEST_ENCAPSULATE_LEN_ERROR";
         goto LAB_001068af;
      }

      pvVar3 = CRYPTO_malloc((int)local_1f0[0], "test/evp_test.c", 0x8d3);
      ptr = CRYPTO_malloc((int)local_1f0[1], "test/evp_test.c", 0x8d4);
      iVar1 = test_ptr("test/evp_test.c", 0x8d5, "wrapped", pvVar3);
      if (( iVar1 != 0 ) && ( iVar1 = iVar1 != 0 )) {
         iVar1 = EVP_PKEY_encapsulate(param_2, pvVar3, local_1f0, ptr, local_1f0 + 1);
         if (iVar1 < 1) {
            *(char**)( param_1 + 0x9a8 ) = "TEST_ENCAPSULATE_ERROR";
         }
 else {
            iVar1 = pkey_check_fips_approved(param_2, param_1);
            if (( ( ( *(long*)( lVar5 + 0x78 ) != 0 ) && ( iVar2 = test_mem_eq("test/evp_test.c", 0x8e0, "wrapped", "kdata->ciphertext", pvVar3, local_1f0[0], *(long*)( lVar5 + 0x78 ), *(undefined8*)( lVar5 + 0x80 )) ),iVar2 == 0 ) ) || ( ( *(long*)( lVar5 + 0x20 ) != 0 && ( iVar2 = test_mem_eq("test/evp_test.c", 0x8e6, "secret", "kdata->output", ptr, local_1f0[1], *(long*)( lVar5 + 0x20 ), *(undefined8*)( lVar5 + 0x28 )) ),iVar2 == 0 ) )) goto LAB_001067ed;
            *(undefined8*)( param_1 + 0x9a8 ) = 0;
            *param_4 = pvVar3;
            *param_6 = ptr;
            *param_5 = local_1f0[0];
            *param_7 = local_1f0[1];
         }

         goto LAB_001068af;
      }

   }
 else {
      iVar1 = ctrl2params(param_1, *(undefined8*)( lVar5 + 0x30 ), 0, local_1f0 + 3, lVar4, local_1f0 + 2);
      lVar8 = local_1f0[2];
      if (iVar1 != 0) goto LAB_00106541;
      LAB_001067e7:ptr = (void*)0x0;
      pvVar3 = (void*)0x0;
   }

   LAB_001067ed:uVar7 = 0;
   CRYPTO_free(pvVar3);
   CRYPTO_free(ptr);
   LAB_00106810:iVar1 = OPENSSL_sk_num(*(undefined8*)( lVar5 + 0x30 ));
   if (( 0 < iVar1 ) && ( lVar5 = local_1f0[2] + -1 ),local_1f0[2] != 0) {
      plVar6 = local_1f0 + local_1f0[2] * 5;
      do {
         pvVar3 = (void*)*plVar6;
         lVar5 = lVar5 + -1;
         plVar6 = plVar6 + -5;
         CRYPTO_free(pvVar3);
      }
 while ( lVar5 != -1 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
}
int kem_test_run(long param_1) {
   undefined8 *puVar1;
   char *__s2;
   bool bVar2;
   int iVar3;
   undefined8 uVar4;
   EVP_PKEY *pkey;
   undefined8 *puVar5;
   void *ptr;
   long in_FS_OFFSET;
   void *local_78;
   void *local_60;
   void *local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (void*)0x0;
   local_58 = (void*)0x0;
   __s2 = (char*)puVar1[8];
   if (__s2 != (char*)0x0) {
      puVar5 = private_keys;
      if (private_keys != (undefined8*)0x0) {
         do {
            iVar3 = strcmp((char*)*puVar5, __s2);
            if (iVar3 == 0) {
               pkey = (EVP_PKEY*)puVar5[1];
               if (pkey == (EVP_PKEY*)0x0) {
                  bVar2 = true;
                  goto LAB_00106a38;
               }

               uVar4 = EVP_PKEY_CTX_new_from_pkey(libctx, pkey, propquery);
               *puVar1 = uVar4;
               iVar3 = test_ptr("test/evp_test.c", 0x95d, "kdata->ctx = EVP_PKEY_CTX_new_from_pkey(libctx, pkey, propquery)", uVar4);
               if (iVar3 == 0) {
                  local_78 = (void*)0x0;
                  ptr = (void*)0x0;
                  iVar3 = 0;
                  goto LAB_00106a7e;
               }

               bVar2 = true;
               goto LAB_001069d4;
            }

            puVar5 = (undefined8*)puVar5[2];
         }
 while ( puVar5 != (undefined8*)0x0 );
      }

      bVar2 = false;
      LAB_00106a38:ptr = (void*)0x0;
      pkey = (EVP_PKEY*)0x0;
      test_info("test/evp_test.c", 0x942, "skipping, key \'%s\' is disabled", __s2);
      local_78 = (void*)0x0;
      iVar3 = 1;
      *(undefined4*)( param_1 + 0x998 ) = 1;
      goto joined_r0x00106a1e;
   }

   ptr = (void*)0x0;
   if (puVar1[9] == 0) {
      if (puVar1[0xb] == 0) {
         iVar3 = 0;
         test_info("test/evp_test.c", 0x959, "Missing parameters to create key");
         local_78 = (void*)0x0;
         pkey = (EVP_PKEY*)0x0;
      }
 else {
         pkey = (EVP_PKEY*)EVP_PKEY_new_raw_private_key_ex(libctx, puVar1[7], propquery, puVar1[0xb], puVar1[0xc]);
         if (pkey != (EVP_PKEY*)0x0) goto LAB_00106afb;
         local_78 = (void*)0x0;
         iVar3 = 1;
         *(char**)( param_1 + 0x9a8 ) = "TEST_PARSE_PRIVATE_KEY_ERROR";
      }

   }
 else {
      pkey = (EVP_PKEY*)EVP_PKEY_new_raw_public_key_ex(libctx, puVar1[7], propquery, puVar1[9], puVar1[10]);
      if (pkey == (EVP_PKEY*)0x0) {
         local_78 = (void*)0x0;
         iVar3 = 1;
         *(char**)( param_1 + 0x9a8 ) = "TEST_PARSE_PUBLIC_KEY_ERROR";
      }
 else {
         LAB_00106afb:uVar4 = EVP_PKEY_CTX_new_from_pkey(libctx, pkey, propquery);
         *puVar1 = uVar4;
         iVar3 = test_ptr("test/evp_test.c", 0x95d, "kdata->ctx = EVP_PKEY_CTX_new_from_pkey(libctx, pkey, propquery)", uVar4);
         if (iVar3 == 0) {
            local_78 = (void*)0x0;
            iVar3 = 0;
         }
 else {
            bVar2 = false;
            LAB_001069d4:if (puVar1[2] == 0) {
               local_50 = 0;
               local_48 = 0;
               iVar3 = encapsulate_constprop_0(param_1, *puVar1, puVar1[1], &local_60, &local_50, &local_58, &local_48);
               local_78 = local_58;
               ptr = local_60;
               if (( iVar3 != 0 ) && ( *(long*)( param_1 + 0x9a8 ) == 0 )) {
                  if (( !bVar2 ) && ( iVar3 = puVar1[0xb] == 0 )) goto LAB_00106a20;
                  iVar3 = 1;
                  decapsulate_isra_0(param_1, *puVar1, puVar1[1], local_60, local_50, local_58, local_48);
               }

            }
 else {
               ptr = (void*)0x0;
               iVar3 = 1;
               decapsulate_isra_0(param_1);
               local_78 = (void*)0x0;
            }

            joined_r0x00106a1e:if (bVar2) goto LAB_00106a7e;
         }

      }

   }

   LAB_00106a20:EVP_PKEY_free(pkey);
   LAB_00106a7e:CRYPTO_free(ptr);
   CRYPTO_free(local_78);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar3;
}
undefined8 pkey_add_control(long param_1, long param_2, char *param_3) {
   int iVar1;
   char *pcVar2;
   if (param_2 == 0) {
      return 0;
   }

   pcVar2 = strchr(param_3, 0x3a);
   if (pcVar2 == (char*)0x0) {
      return 0;
   }

   pcVar2 = pcVar2 + 1;
   iVar1 = OPENSSL_strcasecmp(pcVar2, &_LC26);
   if (( iVar1 != 0 ) && ( iVar1 = iVar1 != 0 )) {
      pcVar2 = CRYPTO_strdup(param_3, "test/evp_test.c", 0xcb);
      if (pcVar2 != (char*)0x0) {
         iVar1 = OPENSSL_sk_push(param_2, pcVar2);
         if (0 < iVar1) {
            return 1;
         }

         CRYPTO_free(pcVar2);
      }

      return 0;
   }

   test_info("test/evp_test.c", 0xa3c, "skipping, \'%s\' is disabled", pcVar2);
   *(undefined4*)( param_1 + 0x998 ) = 1;
   return 1;
}
undefined8 oneshot_digestverify_test_init(long param_1, char *param_2) {
   int iVar1;
   EVP_MD *pEVar2;
   undefined8 *ptr;
   undefined8 uVar3;
   iVar1 = strcmp(param_2, "NULL");
   if (iVar1 == 0) {
      pEVar2 = (EVP_MD*)0x0;
   }
 else {
      iVar1 = OPENSSL_strcasecmp(param_2, &_LC26);
      if (iVar1 == 0) {
         *(undefined4*)( param_1 + 0x998 ) = 1;
         return 1;
      }

      pEVar2 = EVP_get_digestbyname(param_2);
      if (pEVar2 == (EVP_MD*)0x0) {
         return 0;
      }

   }

   ptr = (undefined8*)CRYPTO_zalloc(0x68, "test/evp_test.c", 0x11a4);
   iVar1 = test_ptr("test/evp_test.c", 0x11a4, "mdat = OPENSSL_zalloc(sizeof(*mdat))", ptr);
   if (iVar1 != 0) {
      uVar3 = OPENSSL_sk_new_null();
      ptr[0xb] = uVar3;
      uVar3 = OPENSSL_sk_new_null();
      ptr[1] = pEVar2;
      ptr[0xc] = uVar3;
      uVar3 = EVP_MD_CTX_new();
      ptr[2] = uVar3;
      iVar1 = test_ptr("test/evp_test.c", 0x11a9, "mdat->ctx = EVP_MD_CTX_new()", uVar3);
      uVar3 = _LC209;
      if (iVar1 != 0) {
         *(undefined8**)( param_1 + 0x9c8 ) = ptr;
         *ptr = uVar3;
         return 1;
      }

      CRYPTO_free(ptr);
   }

   return 0;
}
undefined8 oneshot_digestsign_test_init(long param_1, char *param_2) {
   int iVar1;
   EVP_MD *pEVar2;
   undefined8 *ptr;
   undefined8 uVar3;
   iVar1 = strcmp(param_2, "NULL");
   if (iVar1 == 0) {
      pEVar2 = (EVP_MD*)0x0;
   }
 else {
      iVar1 = OPENSSL_strcasecmp(param_2, &_LC26);
      if (iVar1 == 0) {
         *(undefined4*)( param_1 + 0x998 ) = 1;
         return 1;
      }

      pEVar2 = EVP_get_digestbyname(param_2);
      if (pEVar2 == (EVP_MD*)0x0) {
         return 0;
      }

   }

   ptr = (undefined8*)CRYPTO_zalloc(0x68, "test/evp_test.c", 0x11a4);
   iVar1 = test_ptr("test/evp_test.c", 0x11a4, "mdat = OPENSSL_zalloc(sizeof(*mdat))", ptr);
   if (iVar1 != 0) {
      uVar3 = OPENSSL_sk_new_null();
      ptr[0xb] = uVar3;
      uVar3 = OPENSSL_sk_new_null();
      ptr[1] = pEVar2;
      ptr[0xc] = uVar3;
      uVar3 = EVP_MD_CTX_new();
      ptr[2] = uVar3;
      iVar1 = test_ptr("test/evp_test.c", 0x11a9, "mdat->ctx = EVP_MD_CTX_new()", uVar3);
      uVar3 = _LC210;
      if (iVar1 != 0) {
         *(undefined8**)( param_1 + 0x9c8 ) = ptr;
         *ptr = uVar3;
         return 1;
      }

      CRYPTO_free(ptr);
   }

   return 0;
}
undefined8 digestverify_test_init(long param_1, char *param_2) {
   int iVar1;
   EVP_MD *pEVar2;
   undefined8 *ptr;
   undefined8 uVar3;
   iVar1 = strcmp(param_2, "NULL");
   if (iVar1 == 0) {
      pEVar2 = (EVP_MD*)0x0;
   }
 else {
      iVar1 = OPENSSL_strcasecmp(param_2, &_LC26);
      if (iVar1 == 0) {
         *(undefined4*)( param_1 + 0x998 ) = 1;
         return 1;
      }

      pEVar2 = EVP_get_digestbyname(param_2);
      if (pEVar2 == (EVP_MD*)0x0) {
         return 0;
      }

   }

   ptr = (undefined8*)CRYPTO_zalloc(0x68, "test/evp_test.c", 0x11a4);
   iVar1 = test_ptr("test/evp_test.c", 0x11a4, "mdat = OPENSSL_zalloc(sizeof(*mdat))", ptr);
   if (iVar1 != 0) {
      uVar3 = OPENSSL_sk_new_null();
      ptr[0xb] = uVar3;
      uVar3 = OPENSSL_sk_new_null();
      ptr[1] = pEVar2;
      ptr[0xc] = uVar3;
      uVar3 = EVP_MD_CTX_new();
      ptr[2] = uVar3;
      iVar1 = test_ptr("test/evp_test.c", 0x11a9, "mdat->ctx = EVP_MD_CTX_new()", uVar3);
      if (iVar1 != 0) {
         *ptr = 1;
         *(undefined8**)( param_1 + 0x9c8 ) = ptr;
         return 1;
      }

      CRYPTO_free(ptr);
   }

   return 0;
}
undefined8 kdf_test_parse(long param_1, char *param_2, char *param_3) {
   undefined8 *puVar1;
   int iVar2;
   undefined8 uVar3;
   char *pcVar4;
   char *pcVar5;
   long lVar6;
   size_t sVar7;
   char *__s;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   long local_40;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = strcmp(param_2, "Output");
   if (iVar2 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar3 = parse_bin(param_3, puVar1 + 1, puVar1 + 2);
         return uVar3;
      }

      goto LAB_001076d3;
   }

   iVar2 = strcmp(param_2, "CtrlInit");
   if (iVar2 == 0) {
      uVar3 = puVar1[0x68];
      pcVar4 = CRYPTO_strdup(param_3, "test/evp_test.c", 0xcb);
      if (pcVar4 != (char*)0x0) {
         iVar2 = OPENSSL_sk_push(uVar3, pcVar4);
         if (0 < iVar2) goto LAB_001074b5;
         CRYPTO_free(pcVar4);
      }

      uVar3 = 0xffffffff;
   }
 else {
      iVar2 = strncmp(param_2, "Ctrl", 4);
      if (iVar2 == 0) {
         uVar3 = EVP_KDF_CTX_kdf(*puVar1);
         uVar3 = EVP_KDF_settable_ctx_params(uVar3);
         pcVar4 = CRYPTO_strdup(param_3, "test/evp_test.c", 0xf1b);
         iVar2 = test_ptr("test/evp_test.c", 0xf1b, "name = OPENSSL_strdup(value)", pcVar4);
         if (iVar2 != 0) {
            __s = "";
            pcVar5 = strchr(pcVar4, 0x3a);
            if (pcVar5 != (char*)0x0) {
               *pcVar5 = '\0';
               __s = pcVar5 + 1;
            }

            if (( *pcVar4 == 'r' ) && ( pcVar4[1] == '\0' )) {
               lVar6 = OSSL_PARAM_locate_const(uVar3, pcVar4);
               if (lVar6 != 0) goto LAB_001072be;
               test_info("test/evp_test.c", 0xf25, "skipping, setting \'r\' is unsupported");
               *(undefined4*)( param_1 + 0x998 ) = 1;
            }
 else {
               LAB_001072be:iVar2 = strcmp(pcVar4, "lanes");
               if (iVar2 == 0) {
                  lVar6 = OSSL_PARAM_locate_const(uVar3, pcVar4);
                  if (lVar6 == 0) {
                     test_info("test/evp_test.c", 0xf2c, "skipping, setting \'lanes\' is unsupported");
                     *(undefined4*)( param_1 + 0x998 ) = 1;
                     goto LAB_00107500;
                  }

               }

               iVar2 = strcmp(pcVar4, "iter");
               if (iVar2 == 0) {
                  lVar6 = OSSL_PARAM_locate_const(uVar3, pcVar4);
                  if (lVar6 == 0) {
                     test_info("test/evp_test.c", 0xf33, "skipping, setting \'iter\' is unsupported");
                     *(undefined4*)( param_1 + 0x998 ) = 1;
                     goto LAB_00107500;
                  }

               }

               iVar2 = strcmp(pcVar4, "memcost");
               if (iVar2 == 0) {
                  lVar6 = OSSL_PARAM_locate_const(uVar3, pcVar4);
                  if (lVar6 == 0) {
                     test_info("test/evp_test.c", 0xf3a, "skipping, setting \'memcost\' is unsupported");
                     *(undefined4*)( param_1 + 0x998 ) = 1;
                     goto LAB_00107500;
                  }

               }

               iVar2 = strcmp(pcVar4, "secret");
               if (iVar2 == 0) {
                  lVar6 = OSSL_PARAM_locate_const(uVar3, pcVar4);
                  if (lVar6 == 0) {
                     test_info("test/evp_test.c", 0xf41, "skipping, setting \'secret\' is unsupported");
                     *(undefined4*)( param_1 + 0x998 ) = 1;
                     goto LAB_00107500;
                  }

               }

               iVar2 = strcmp(pcVar4, "pass");
               if (iVar2 == 0) {
                  lVar6 = OSSL_PARAM_locate_const(uVar3, pcVar4);
                  if (lVar6 == 0) {
                     test_info("test/evp_test.c", 0xf48, "skipping, setting \'pass\' is unsupported");
                     *(undefined4*)( param_1 + 0x998 ) = 1;
                     goto LAB_00107500;
                  }

               }

               if (( ( *pcVar4 == 'a' ) && ( pcVar4[1] == 'd' ) ) && ( pcVar4[2] == '\0' )) {
                  lVar6 = OSSL_PARAM_locate_const(uVar3, pcVar4);
                  if (lVar6 == 0) {
                     test_info("test/evp_test.c", 0xf4f, "skipping, setting \'ad\' is unsupported");
                     *(undefined4*)( param_1 + 0x998 ) = 1;
                     goto LAB_00107500;
                  }

               }

               sVar7 = strlen(__s);
               iVar2 = OSSL_PARAM_allocate_from_text(puVar1[0x67], uVar3, pcVar4, __s, sVar7, 0);
               lVar6 = puVar1[0x67];
               puVar1[0x67] = lVar6 + 0x28;
               OSSL_PARAM_construct_end(&local_78);
               *(undefined8*)( lVar6 + 0x28 ) = local_78;
               *(undefined8*)( lVar6 + 0x30 ) = uStack_70;
               *(undefined8*)( lVar6 + 0x38 ) = local_68;
               *(undefined8*)( lVar6 + 0x40 ) = uStack_60;
               *(undefined8*)( lVar6 + 0x48 ) = local_58;
               if (iVar2 == 0) {
                  *(char**)( param_1 + 0x9a8 ) = "KDF_PARAM_ERROR";
                  CRYPTO_free(pcVar4);
                  goto LAB_001071e4;
               }

               iVar2 = strcmp(pcVar4, "digest");
               if (iVar2 == 0) {
                  iVar2 = OPENSSL_strcasecmp(__s, &_LC26);
                  if (iVar2 == 0) {
                     test_info("test/evp_test.c", 0xf5e, "skipping, \'%s\' is disabled", __s);
                     *(undefined4*)( param_1 + 0x998 ) = 1;
                  }

               }
 else {
                  iVar2 = strcmp(pcVar4, "cipher");
                  if (iVar2 != 0) {
                     iVar2 = strcmp(pcVar4, "cekalg");
                     if (iVar2 != 0) goto LAB_00107500;
                  }

                  iVar2 = OPENSSL_strncasecmp(__s, &_LC27, 3);
                  if (iVar2 == 0) {
                     test_info("test/evp_test.c", 0xf67, "skipping, \'%s\' is disabled", __s);
                     *(undefined4*)( param_1 + 0x998 ) = 1;
                  }

               }

            }

            LAB_00107500:CRYPTO_free(pcVar4);
            LAB_001074b5:uVar3 = 1;
            goto LAB_001071e6;
         }

      }

      LAB_001071e4:uVar3 = 0;
   }

   LAB_001071e6:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   LAB_001076d3:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
int rand_test_run(long param_1) {
   int iVar1;
   void *ptr;
   undefined8 uVar2;
   uint num;
   int iVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   void *pvVar6;
   long lVar7;
   undefined *puVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   long lVar11;
   undefined8 *puVar12;
   long in_FS_OFFSET;
   bool bVar13;
   undefined8 uVar14;
   undefined8 local_218;
   undefined8 uStack_210;
   undefined8 local_208;
   undefined8 uStack_200;
   undefined8 local_1f8;
   int local_1e4;
   long local_1e0;
   undefined1 local_1d8[16];
   undefined1 local_1c8[16];
   undefined1 local_1b8[16];
   undefined1 local_1a8[16];
   undefined1 local_198[16];
   undefined8 local_188[4];
   undefined8 local_168;
   undefined8 local_160;
   undefined8 uStack_158;
   undefined8 local_150;
   undefined8 uStack_148;
   undefined8 local_140;
   undefined8 local_138;
   undefined8 uStack_130;
   undefined8 local_128;
   undefined8 uStack_120;
   undefined8 local_118;
   long local_40;
   puVar9 = *(undefined8**)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1e0 = 0;
   num = *(uint*)( (long)puVar9 + 0x1c ) >> 3;
   pvVar6 = CRYPTO_malloc(num, "test/evp_test.c", 0xe59);
   iVar3 = test_ptr("test/evp_test.c", 0xe59, "got = OPENSSL_malloc(got_len)", pvVar6);
   if (iVar3 == 0) goto LAB_00107765;
   iVar3 = OPENSSL_sk_num(puVar9[6]);
   if (iVar3 < 1) {
      lVar7 = -1;
      lVar11 = 0;
      puVar10 = local_188;
      LAB_0010787d:puVar12 = puVar10 + 5;
      OSSL_PARAM_construct_int(&local_218, "use_derivation_function", puVar9 + 3);
      *puVar10 = local_218;
      puVar10[1] = uStack_210;
      puVar10[2] = local_208;
      puVar10[3] = uStack_200;
      puVar10[4] = local_1f8;
      if (puVar9[4] != 0) {
         puVar12 = puVar10 + 10;
         OSSL_PARAM_construct_utf8_string(&local_218, "cipher", puVar9[4], 0);
         puVar10[5] = local_218;
         puVar10[6] = uStack_210;
         puVar10[7] = local_208;
         puVar10[8] = uStack_200;
         puVar10[9] = local_1f8;
      }

      puVar10 = puVar12;
      if (puVar9[5] != 0) {
         puVar10 = puVar12 + 5;
         OSSL_PARAM_construct_utf8_string(&local_218, "digest", puVar9[5], 0);
         *puVar12 = local_218;
         puVar12[1] = uStack_210;
         puVar12[2] = local_208;
         puVar12[3] = uStack_200;
         puVar12[4] = local_1f8;
      }

      OSSL_PARAM_construct_utf8_string(&local_218, &_LC229, &_LC55, 0);
      *puVar10 = local_218;
      puVar10[1] = uStack_210;
      puVar10[2] = local_208;
      puVar10[3] = uStack_200;
      puVar10[4] = local_1f8;
      OSSL_PARAM_construct_end(&local_218);
      uVar14 = *puVar9;
      puVar10[5] = local_218;
      puVar10[6] = uStack_210;
      puVar10[7] = local_208;
      puVar10[8] = uStack_200;
      puVar10[9] = local_1f8;
      iVar3 = EVP_RAND_CTX_set_params(uVar14, local_188);
      if (iVar3 != 0) {
         if (lVar11 != 0) {
            puVar10 = local_188 + lVar7 * 5 + 2;
            do {
               ptr = (void*)*puVar10;
               puVar10 = puVar10 + -5;
               CRYPTO_free(ptr);
               bVar13 = lVar7 != 0;
               lVar7 = lVar7 + -1;
            }
 while ( bVar13 );
         }

         local_1e0 = 0;
         uVar4 = EVP_RAND_get_strength(*puVar9);
         if (-1 < *(int*)( puVar9 + 2 )) {
            iVar1 = 0;
            puVar10 = puVar9 + 7;
            do {
               puVar8 = (undefined*)*puVar10;
               if (puVar8 == (undefined*)0x0) {
                  puVar8 = &_LC19;
               }

               OSSL_PARAM_construct_octet_string(&local_218, "test_entropy", puVar8, puVar10[10]);
               local_188[0] = local_218;
               local_188[1] = uStack_210;
               local_188[2] = local_208;
               local_188[3] = uStack_200;
               local_168 = local_1f8;
               puVar8 = (undefined*)puVar10[2];
               if (puVar8 == (undefined*)0x0) {
                  puVar8 = &_LC19;
               }

               OSSL_PARAM_construct_octet_string(&local_218, "test_nonce", puVar8, puVar10[0xb]);
               local_140 = local_1f8;
               local_160 = local_218;
               uStack_158 = uStack_210;
               local_150 = local_208;
               uStack_148 = uStack_200;
               OSSL_PARAM_construct_end(&local_218);
               local_138 = local_218;
               uStack_130 = uStack_210;
               local_128 = local_208;
               uStack_120 = uStack_200;
               local_118 = local_1f8;
               iVar3 = EVP_RAND_instantiate(puVar9[1], uVar4, 0, 0, 0, local_188);
               iVar3 = test_true("test/evp_test.c", 0xe83, "EVP_RAND_instantiate(expected->parent, strength, 0, NULL, 0, params)", iVar3 != 0);
               if (iVar3 == 0) {
                  LAB_00107f34:iVar3 = 0;
                  test_info("test/evp_test.c", 0xec7, "Error in test case %d of %d\n", iVar1, *(int*)( puVar9 + 2 ) + 1);
                  CRYPTO_free(pvVar6);
                  goto LAB_00107765;
               }

               puVar8 = (undefined*)puVar10[3];
               if (puVar8 == (undefined*)0x0) {
                  puVar8 = &_LC19;
               }

               iVar3 = EVP_RAND_instantiate(*puVar9, uVar4, *(undefined4*)( (long)puVar9 + 0x14 ), puVar8, puVar10[0xc], 0);
               iVar3 = test_true("test/evp_test.c", 0xe88, "EVP_RAND_instantiate (expected->ctx, strength, expected->prediction_resistance, z, item->pers_len, NULL)", iVar3 != 0);
               if (iVar3 == 0) goto LAB_00107f34;
               if (puVar10[1] != 0) {
                  OSSL_PARAM_construct_octet_string(&local_218, "test_entropy", puVar10[1], puVar10[0x12]);
                  local_168 = local_1f8;
                  local_188[0] = local_218;
                  local_188[1] = uStack_210;
                  local_188[2] = local_208;
                  local_188[3] = uStack_200;
                  OSSL_PARAM_construct_end(&local_218);
                  local_160 = local_218;
                  uStack_158 = uStack_210;
                  local_140 = local_1f8;
                  local_150 = local_208;
                  uStack_148 = uStack_200;
                  iVar3 = EVP_RAND_CTX_set_params(puVar9[1], local_188);
                  iVar3 = test_true("test/evp_test.c", 0xe93, "EVP_RAND_CTX_set_params(expected->parent, params)", iVar3 != 0);
                  if (iVar3 != 0) {
                     iVar3 = EVP_RAND_reseed(*puVar9, *(undefined4*)( (long)puVar9 + 0x14 ), 0, 0, puVar10[4], puVar10[0x13]);
                     iVar3 = test_true("test/evp_test.c", 0xe96, "EVP_RAND_reseed (expected->ctx, expected->prediction_resistance, NULL, 0, item->reseed_addin, item->reseed_addin_len)", iVar3 != 0);
                     if (iVar3 != 0) goto LAB_00107c67;
                  }

                  goto LAB_00107f34;
               }

               LAB_00107c67:if (puVar10[7] != 0) {
                  OSSL_PARAM_construct_octet_string(&local_218, "test_entropy", puVar10[7], puVar10[0xf]);
                  local_188[0] = local_218;
                  local_188[1] = uStack_210;
                  local_168 = local_1f8;
                  local_188[2] = local_208;
                  local_188[3] = uStack_200;
                  OSSL_PARAM_construct_end(&local_218);
                  local_160 = local_218;
                  uStack_158 = uStack_210;
                  local_140 = local_1f8;
                  local_150 = local_208;
                  uStack_148 = uStack_200;
                  iVar3 = EVP_RAND_CTX_set_params(puVar9[1], local_188);
                  iVar3 = test_true("test/evp_test.c", 0xea1, "EVP_RAND_CTX_set_params(expected->parent, params)", iVar3 != 0);
                  if (iVar3 == 0) goto LAB_00107f34;
               }

               iVar3 = EVP_RAND_generate(*puVar9, pvVar6, num, uVar4, *(undefined4*)( (long)puVar9 + 0x14 ), puVar10[5], puVar10[0xd]);
               iVar3 = test_true("test/evp_test.c", 0xea4, "EVP_RAND_generate (expected->ctx, got, got_len, strength, expected->prediction_resistance, item->addinA, item->addinA_len)", iVar3 != 0);
               if (iVar3 == 0) goto LAB_00107f34;
               if (puVar10[8] != 0) {
                  OSSL_PARAM_construct_octet_string(&local_218, "test_entropy", puVar10[8], puVar10[0x10]);
                  local_168 = local_1f8;
                  local_188[0] = local_218;
                  local_188[1] = uStack_210;
                  local_188[2] = local_208;
                  local_188[3] = uStack_200;
                  OSSL_PARAM_construct_end(&local_218);
                  local_160 = local_218;
                  uStack_158 = uStack_210;
                  local_140 = local_1f8;
                  local_150 = local_208;
                  uStack_148 = uStack_200;
                  iVar3 = EVP_RAND_CTX_set_params(puVar9[1], local_188);
                  iVar3 = test_true("test/evp_test.c", 0xeaf, "EVP_RAND_CTX_set_params(expected->parent, params)", iVar3 != 0);
                  if (iVar3 == 0) goto LAB_00107f34;
               }

               iVar3 = EVP_RAND_generate(*puVar9, pvVar6, num, uVar4, *(undefined4*)( (long)puVar9 + 0x14 ), puVar10[6], puVar10[0xe]);
               iVar3 = test_true("test/evp_test.c", 0xeb2, "EVP_RAND_generate (expected->ctx, got, got_len, strength, expected->prediction_resistance, item->addinB, item->addinB_len)", iVar3 != 0);
               if (iVar3 == 0) goto LAB_00107f34;
               uVar14 = puVar10[9];
               iVar3 = test_mem_eq("test/evp_test.c", 0xeb7, &_LC31, "item->output", pvVar6, num, uVar14, puVar10[0x11]);
               if (iVar3 == 0) goto LAB_00107f34;
               uVar2 = *puVar9;
               local_1e4 = 1;
               local_1d8 = (undefined1[16])0x0;
               local_1c8 = (undefined1[16])0x0;
               local_1b8 = (undefined1[16])0x0;
               local_1a8 = (undefined1[16])0x0;
               local_198 = (undefined1[16])0x0;
               lVar7 = EVP_RAND_CTX_gettable_params(uVar2, uVar14);
               if (lVar7 == 0) goto LAB_00107f9e;
               OSSL_PARAM_construct_int(&local_218, "fips-indicator", &local_1e4);
               local_1d8._8_8_ = uStack_210;
               local_1d8._0_8_ = local_218;
               local_1b8._0_8_ = local_1f8;
               local_1c8._8_8_ = uStack_200;
               local_1c8._0_8_ = local_208;
               iVar3 = EVP_RAND_CTX_get_params(uVar2, local_1d8);
               if (iVar3 == 0) goto LAB_00107f34;
               if (*(int*)( param_1 + 0x9d0 ) == 0) {
                  if (( local_1e4 != 0 ) && ( fips_indicator_callback_unapproved_count < 1 )) goto LAB_00107f9e;
                  test_error("test/evp_test.c", 0x81, "Test is expected to be FIPS approved");
                  goto LAB_00107f34;
               }

               if (( local_1e4 == 1 ) || ( fips_indicator_callback_unapproved_count == 0 )) {
                  test_error("test/evp_test.c", 0x7c, "Test is not expected to be FIPS approved");
                  goto LAB_00107f34;
               }

               LAB_00107f9e:iVar3 = EVP_RAND_uninstantiate(*puVar9);
               iVar3 = test_true("test/evp_test.c", 0xebb, "EVP_RAND_uninstantiate(expected->ctx)", iVar3 != 0);
               if (iVar3 == 0) goto LAB_00107f34;
               iVar3 = EVP_RAND_uninstantiate(puVar9[1]);
               iVar3 = test_true("test/evp_test.c", 0xebc, "EVP_RAND_uninstantiate(expected->parent)", iVar3 != 0);
               if (iVar3 == 0) goto LAB_00107f34;
               iVar3 = EVP_RAND_verify_zeroization(*puVar9);
               iVar3 = test_true("test/evp_test.c", 0xebd, "EVP_RAND_verify_zeroization(expected->ctx)", iVar3 != 0);
               if (iVar3 == 0) goto LAB_00107f34;
               uVar5 = EVP_RAND_get_state(*puVar9);
               iVar3 = test_int_eq("test/evp_test.c", 0xebe, "EVP_RAND_get_state(expected->ctx)", "EVP_RAND_STATE_UNINITIALISED", uVar5, 0);
               if (iVar3 == 0) goto LAB_00107f34;
               iVar1 = iVar1 + 1;
               puVar10 = puVar10 + 0x14;
            }
 while ( iVar1 <= *(int*)( puVar9 + 2 ) );
         }

         iVar3 = 1;
         *(undefined8*)( param_1 + 0x9a8 ) = 0;
         CRYPTO_free(pvVar6);
         goto LAB_00107765;
      }

      iVar3 = 0;
      if (*(int*)( param_1 + 0x9d0 ) == 0) {
         iVar3 = 1;
         *(char**)( param_1 + 0x9a8 ) = "EVP_RAND_CTX_set_params";
      }

   }
 else {
      iVar3 = ctrl2params(param_1, puVar9[6], 0, local_188, 8, &local_1e0);
      lVar7 = local_1e0 + -1;
      lVar11 = local_1e0;
      if (iVar3 != 0) {
         puVar10 = local_188 + local_1e0 * 5;
         goto LAB_0010787d;
      }

   }

   CRYPTO_free(pvVar6);
   if (lVar11 != 0) {
      puVar9 = local_188 + lVar7 * 5 + 2;
      do {
         pvVar6 = (void*)*puVar9;
         lVar7 = lVar7 + -1;
         puVar9 = puVar9 + -5;
         CRYPTO_free(pvVar6);
      }
 while ( lVar7 != -1 );
   }

   LAB_00107765:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar3;
}
undefined8 pkey_test_parse(long param_1, char *param_2, char *param_3) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   char *ptr;
   long lVar4;
   long lVar5;
   lVar1 = *(long*)( param_1 + 0x9c8 );
   iVar2 = strcmp(param_2, "Input");
   lVar4 = lVar1 + 0x30;
   lVar5 = lVar1 + 0x28;
   if (iVar2 != 0) {
      iVar2 = strcmp(param_2, "Output");
      if (iVar2 != 0) {
         iVar2 = strcmp(param_2, "CtrlInit");
         if (iVar2 == 0) {
            uVar3 = *(undefined8*)( lVar1 + 0x48 );
            ptr = CRYPTO_strdup(param_3, "test/evp_test.c", 0xcb);
            if (ptr != (char*)0x0) {
               iVar2 = OPENSSL_sk_push(uVar3, ptr);
               if (0 < iVar2) {
                  return 1;
               }

               CRYPTO_free(ptr);
            }

            uVar3 = 0xffffffff;
         }
 else {
            iVar2 = strcmp(param_2, "Ctrl");
            uVar3 = 0;
            if (iVar2 == 0) {
               uVar3 = pkey_add_control(param_1, *(undefined8*)( lVar1 + 0x50 ), param_3);
               return uVar3;
            }

         }

         return uVar3;
      }

      lVar4 = lVar1 + 0x40;
      lVar5 = lVar1 + 0x38;
   }

   uVar3 = parse_bin(param_3, lVar5, lVar4);
   return uVar3;
}
undefined8 keygen_test_parse(long param_1, char *param_2, char *param_3) {
   undefined8 *puVar1;
   int iVar2;
   char *pcVar3;
   char *pcVar4;
   undefined8 uVar5;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   iVar2 = strcmp(param_2, "KeyName");
   if (iVar2 == 0) {
      pcVar3 = CRYPTO_strdup(param_3, "test/evp_test.c", 0x10e4);
      pcVar4 = "keygen->keyname = OPENSSL_strdup(value)";
      uVar5 = 0x10e4;
      *puVar1 = pcVar3;
   }
 else {
      iVar2 = strcmp(param_2, "KeyParam");
      if (iVar2 != 0) {
         iVar2 = strcmp(param_2, "Ctrl");
         if (iVar2 == 0) {
            uVar5 = puVar1[3];
         }
 else {
            iVar2 = strcmp(param_2, "CtrlOut");
            if (iVar2 != 0) {
               return 0;
            }

            uVar5 = puVar1[4];
         }

         pcVar3 = CRYPTO_strdup(param_3, "test/evp_test.c", 0xcb);
         if (pcVar3 != (char*)0x0) {
            iVar2 = OPENSSL_sk_push(uVar5, pcVar3);
            if (0 < iVar2) {
               return 1;
            }

            CRYPTO_free(pcVar3);
         }

         return 0xffffffff;
      }

      pcVar3 = CRYPTO_strdup(param_3, "test/evp_test.c", 0x10e6);
      pcVar4 = "keygen->paramname = OPENSSL_strdup(value)";
      uVar5 = 0x10e6;
      puVar1[1] = pcVar3;
   }

   uVar5 = test_ptr("test/evp_test.c", uVar5, pcVar4, pcVar3);
   return uVar5;
}
undefined8 kem_test_parse(long param_1, char *param_2, char *param_3) {
   long lVar1;
   int iVar2;
   char *pcVar3;
   undefined8 uVar4;
   long lVar5;
   long lVar6;
   lVar1 = *(long*)( param_1 + 0x9c8 );
   if (( ( *param_2 == 'O' ) && ( param_2[1] == 'p' ) ) && ( param_2[2] == '\0' )) {
      *(char**)( lVar1 + 8 ) = param_3;
      return 1;
   }

   iVar2 = strcmp(param_2, "CtrlInit");
   if (iVar2 != 0) {
      iVar2 = strcmp(param_2, "Input");
      lVar5 = lVar1 + 0x18;
      lVar6 = lVar1 + 0x10;
      if (iVar2 != 0) {
         iVar2 = strcmp(param_2, "Output");
         if (iVar2 == 0) {
            lVar5 = lVar1 + 0x28;
            lVar6 = lVar1 + 0x20;
         }
 else {
            iVar2 = strcmp(param_2, "EncodedPublicKey");
            lVar5 = lVar1 + 0x50;
            lVar6 = lVar1 + 0x48;
            if (iVar2 != 0) {
               iVar2 = strcmp(param_2, "EncodedPrivateKey");
               lVar5 = lVar1 + 0x60;
               lVar6 = lVar1 + 0x58;
               if (iVar2 != 0) {
                  iVar2 = strcmp(param_2, "Entropy");
                  lVar5 = lVar1 + 0x70;
                  lVar6 = lVar1 + 0x68;
                  if (iVar2 != 0) {
                     iVar2 = strcmp(param_2, "Ciphertext");
                     lVar5 = lVar1 + 0x80;
                     lVar6 = lVar1 + 0x78;
                     if (iVar2 != 0) {
                        iVar2 = strcmp(param_2, "KeyName");
                        if (iVar2 != 0) {
                           return 1;
                        }

                        pcVar3 = CRYPTO_strdup(param_3, "test/evp_test.c", 0x8a4);
                        *(char**)( lVar1 + 0x40 ) = pcVar3;
                        uVar4 = test_ptr("test/evp_test.c", 0x8a4, "kdata->keyname = OPENSSL_strdup(value)", pcVar3);
                        return uVar4;
                     }

                  }

               }

            }

         }

      }

      uVar4 = parse_bin(param_3, lVar6, lVar5);
      return uVar4;
   }

   uVar4 = *(undefined8*)( lVar1 + 0x30 );
   pcVar3 = CRYPTO_strdup(param_3, "test/evp_test.c", 0xcb);
   if (pcVar3 != (char*)0x0) {
      iVar2 = OPENSSL_sk_push(uVar4, pcVar3);
      if (0 < iVar2) {
         return 1;
      }

      CRYPTO_free(pcVar3);
   }

   return 0xffffffff;
}
undefined8 verify_message_test_init(long param_1, char *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   char *pcVar4;
   undefined8 uVar5;
   long lVar6;
   long in_FS_OFFSET;
   undefined1 auStack_68[56];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar4 = strchr(param_2, 0x3a);
   if (( ( ( param_2 == pcVar4 ) || ( pcVar4 == (char*)0x0 ) ) || ( pcVar4[1] == '\0' ) ) || ( lVar6 = 0x32 < lVar6 )) {
      test_info("test/evp_test.c", 0x9ea, "Can\'t extract algorithm or key name from \'%s\'", param_2);
      uVar5 = 0;
   }
 else {
      __memcpy_chk(auStack_68, param_2, lVar6, 0x33);
      auStack_68[lVar6] = 0;
      uVar5 = pkey_test_init_keyctx(param_1, pcVar4 + 1, 0);
      uVar2 = libctx;
      uVar1 = propquery;
      if (*(int*)( param_1 + 0x998 ) == 0) {
         if ((int)uVar5 == 0) {
            uVar5 = 0;
         }
 else {
            lVar6 = *(long*)( param_1 + 0x9c8 );
            *(undefined**)( lVar6 + 0x18 ) = &EVP_PKEY_verify_message_init;
            *(undefined8*)( lVar6 + 0x20 ) = 0;
            uVar5 = EVP_SIGNATURE_fetch(uVar2, auStack_68, uVar1);
            *(undefined8*)( lVar6 + 8 ) = uVar5;
            iVar3 = test_ptr("test/evp_test.c", 0x9fb, "kdata->sigalgo = EVP_SIGNATURE_fetch(libctx, algoname, propquery)", uVar5);
            if (iVar3 == 0) {
               test_info("test/evp_test.c", 0x9fd, "algoname = \'%s\'", auStack_68);
               uVar5 = 0;
            }
 else {
               uVar5 = OPENSSL_sk_new_null();
               *(undefined8*)( lVar6 + 0x48 ) = uVar5;
               uVar5 = OPENSSL_sk_new_null();
               *(undefined8*)( lVar6 + 0x50 ) = uVar5;
               uVar5 = 1;
            }

         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 sign_test_message_init(long param_1, char *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined *puVar3;
   int iVar4;
   char *pcVar5;
   undefined8 uVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined1 auStack_68[56];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar5 = strchr(param_2, 0x3a);
   if (( ( ( param_2 == pcVar5 ) || ( pcVar5 == (char*)0x0 ) ) || ( pcVar5[1] == '\0' ) ) || ( lVar7 = 0x32 < lVar7 )) {
      test_info("test/evp_test.c", 0x9ea, "Can\'t extract algorithm or key name from \'%s\'", param_2);
      uVar6 = 0;
   }
 else {
      __memcpy_chk(auStack_68, param_2, lVar7, 0x33);
      auStack_68[lVar7] = 0;
      uVar6 = pkey_test_init_keyctx(param_1, pcVar5 + 1, 0);
      puVar3 = PTR_EVP_PKEY_sign_00115008;
      uVar2 = libctx;
      uVar1 = propquery;
      if (*(int*)( param_1 + 0x998 ) == 0) {
         if ((int)uVar6 == 0) {
            uVar6 = 0;
         }
 else {
            lVar7 = *(long*)( param_1 + 0x9c8 );
            *(undefined**)( lVar7 + 0x18 ) = PTR_EVP_PKEY_sign_message_init_00115010;
            *(undefined**)( lVar7 + 0x20 ) = puVar3;
            uVar6 = EVP_SIGNATURE_fetch(uVar2, auStack_68, uVar1);
            *(undefined8*)( lVar7 + 8 ) = uVar6;
            iVar4 = test_ptr("test/evp_test.c", 0x9fb, "kdata->sigalgo = EVP_SIGNATURE_fetch(libctx, algoname, propquery)", uVar6);
            if (iVar4 == 0) {
               test_info("test/evp_test.c", 0x9fd, "algoname = \'%s\'", auStack_68);
               uVar6 = 0;
            }
 else {
               uVar6 = OPENSSL_sk_new_null();
               *(undefined8*)( lVar7 + 0x48 ) = uVar6;
               uVar6 = OPENSSL_sk_new_null();
               *(undefined8*)( lVar7 + 0x50 ) = uVar6;
               uVar6 = 1;
            }

         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 verify_message_public_test_init(long param_1, char *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   char *pcVar4;
   undefined8 uVar5;
   long lVar6;
   long in_FS_OFFSET;
   undefined1 auStack_68[56];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar4 = strchr(param_2, 0x3a);
   if (( ( ( param_2 == pcVar4 ) || ( pcVar4 == (char*)0x0 ) ) || ( pcVar4[1] == '\0' ) ) || ( lVar6 = 0x32 < lVar6 )) {
      test_info("test/evp_test.c", 0x9ea, "Can\'t extract algorithm or key name from \'%s\'", param_2);
      uVar5 = 0;
   }
 else {
      __memcpy_chk(auStack_68, param_2, lVar6, 0x33);
      auStack_68[lVar6] = 0;
      uVar5 = pkey_test_init_keyctx(param_1, pcVar4 + 1, 1);
      uVar2 = libctx;
      uVar1 = propquery;
      if (*(int*)( param_1 + 0x998 ) == 0) {
         if ((int)uVar5 == 0) {
            uVar5 = 0;
         }
 else {
            lVar6 = *(long*)( param_1 + 0x9c8 );
            *(undefined**)( lVar6 + 0x18 ) = &EVP_PKEY_verify_message_init;
            *(undefined8*)( lVar6 + 0x20 ) = 0;
            uVar5 = EVP_SIGNATURE_fetch(uVar2, auStack_68, uVar1);
            *(undefined8*)( lVar6 + 8 ) = uVar5;
            iVar3 = test_ptr("test/evp_test.c", 0x9fb, "kdata->sigalgo = EVP_SIGNATURE_fetch(libctx, algoname, propquery)", uVar5);
            if (iVar3 == 0) {
               test_info("test/evp_test.c", 0x9fd, "algoname = \'%s\'", auStack_68);
               uVar5 = 0;
            }
 else {
               uVar5 = OPENSSL_sk_new_null();
               *(undefined8*)( lVar6 + 0x48 ) = uVar5;
               uVar5 = OPENSSL_sk_new_null();
               *(undefined8*)( lVar6 + 0x50 ) = uVar5;
               uVar5 = 1;
            }

         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 pkey_fromdata_test_parse(long param_1, char *param_2, char *param_3) {
   long lVar1;
   int iVar2;
   char *pcVar3;
   iVar2 = strcmp(param_2, "Ctrl");
   if (iVar2 != 0) {
      return 0;
   }

   lVar1 = *(long*)( *(long*)( param_1 + 0x9c8 ) + 0x50 );
   if (lVar1 == 0) {
      return 0;
   }

   pcVar3 = strchr(param_3, 0x3a);
   if (pcVar3 == (char*)0x0) {
      return 0;
   }

   pcVar3 = pcVar3 + 1;
   iVar2 = OPENSSL_strcasecmp(pcVar3, &_LC26);
   if (( iVar2 != 0 ) && ( iVar2 = iVar2 != 0 )) {
      pcVar3 = CRYPTO_strdup(param_3, "test/evp_test.c", 0xcb);
      if (pcVar3 == (char*)0x0) {
         return 0;
      }

      iVar2 = OPENSSL_sk_push(lVar1, pcVar3);
      if (0 < iVar2) {
         return 1;
      }

      CRYPTO_free(pcVar3);
      return 0;
   }

   test_info("test/evp_test.c", 0xa3c, "skipping, \'%s\' is disabled", pcVar3);
   *(undefined4*)( param_1 + 0x998 ) = 1;
   return 1;
}
undefined8 pbe_test_run(long param_1) {
   int *piVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 uVar4;
   uchar *out;
   undefined8 uVar5;
   EVP_MD *md_type;
   char *local_40;
   piVar1 = *(int**)( param_1 + 0x9c8 );
   uVar4 = OSSL_LIB_CTX_set0_default(libctx);
   out = (uchar*)CRYPTO_malloc((int)*(undefined8*)( piVar1 + 0x18 ), "test/evp_test.c", 0xcb6);
   iVar3 = test_ptr("test/evp_test.c", 0xcb6, "key = OPENSSL_malloc(expected->key_len)", out);
   uVar2 = propquery;
   local_40 = "INTERNAL_ERROR";
   md_type = (EVP_MD*)0x0;
   if (iVar3 == 0) goto LAB_00108bf8;
   iVar3 = *piVar1;
   if (iVar3 == 2) {
      iVar3 = PKCS5_PBKDF2_HMAC(*(char**)( piVar1 + 0xe ), (int)*(undefined8*)( piVar1 + 0x10 ), *(uchar**)( piVar1 + 0x12 ), (int)*(undefined8*)( piVar1 + 0x14 ), piVar1[0xb], *(EVP_MD**)( piVar1 + 0xc ), (int)*(undefined8*)( piVar1 + 0x18 ), out);
      local_40 = "PBKDF2_ERROR";
      joined_r0x00108ce0:md_type = (EVP_MD*)0x0;
      if (iVar3 == 0) goto LAB_00108bf8;
      LAB_00108b98:md_type = (EVP_MD*)0x0;
   }
 else {
      if (iVar3 == 1) {
         iVar3 = EVP_PBE_scrypt(*(undefined8*)( piVar1 + 0xe ), *(undefined8*)( piVar1 + 0x10 ), *(undefined8*)( piVar1 + 0x12 ), *(undefined8*)( piVar1 + 0x14 ), *(undefined8*)( piVar1 + 2 ), *(undefined8*)( piVar1 + 4 ), *(undefined8*)( piVar1 + 6 ), *(undefined8*)( piVar1 + 8 ), out, *(undefined8*)( piVar1 + 0x18 ));
         local_40 = "SCRYPT_ERROR";
         goto joined_r0x00108ce0;
      }

      if (iVar3 != 3) goto LAB_00108b98;
      uVar5 = EVP_MD_get0_name(*(undefined8*)( piVar1 + 0xc ));
      md_type = (EVP_MD*)EVP_MD_fetch(libctx, uVar5, uVar2);
      local_40 = "PKCS12_ERROR";
      if (md_type == (EVP_MD*)0x0) goto LAB_00108bf8;
      local_40 = "PKCS12_ERROR";
      iVar3 = PKCS12_key_gen_uni(*(uchar**)( piVar1 + 0xe ), (int)*(undefined8*)( piVar1 + 0x10 ), *(uchar**)( piVar1 + 0x12 ), (int)*(undefined8*)( piVar1 + 0x14 ), piVar1[10], piVar1[0xb], (int)*(undefined8*)( piVar1 + 0x18 ), out, md_type);
      if (iVar3 == 0) goto LAB_00108bf8;
   }

   uVar2 = *(undefined8*)( piVar1 + 0x18 );
   uVar5 = *(undefined8*)( piVar1 + 0x16 );
   if (( *(char**)( param_1 + 0x9b8 ) == (char*)0x0 ) || ( iVar3 = iVar3 != 0 )) {
      iVar3 = test_mem_eq("test/evp_test.c", 0x14f, "expected", &_LC31, uVar5, uVar2, out, uVar2);
      if (iVar3 != 0) goto LAB_00108c5f;
   }
 else {
      iVar3 = test_mem_ne("test/evp_test.c", 0x14d, "expected", &_LC31, uVar5, uVar2, out, uVar2);
      if (iVar3 == 0) {
         LAB_00108c5f:local_40 = (char*)0x0;
         goto LAB_00108bf8;
      }

   }

   local_40 = "KEY_MISMATCH";
   LAB_00108bf8:*(char**)( param_1 + 0x9a8 ) = local_40;
   EVP_MD_free(md_type);
   CRYPTO_free(out);
   OSSL_LIB_CTX_set0_default(uVar4);
   return 1;
}
undefined8 pderive_test_parse(long param_1, char *param_2, char *param_3) {
   long lVar1;
   undefined8 *puVar2;
   int iVar3;
   char *ptr;
   undefined8 uVar4;
   lVar1 = *(long*)( param_1 + 0x9c8 );
   iVar3 = strcmp(param_2, "PeerKeyValidate");
   if (iVar3 == 0) {
      iVar3 = 1;
   }
 else {
      iVar3 = strcmp(param_2, "PeerKey");
      if (iVar3 != 0) {
         iVar3 = strcmp(param_2, "SharedSecret");
         if (iVar3 == 0) {
            uVar4 = parse_bin(param_3, lVar1 + 0x38, lVar1 + 0x40);
            return uVar4;
         }

         iVar3 = strcmp(param_2, "Ctrl");
         if (iVar3 == 0) {
            uVar4 = pkey_add_control(param_1, *(undefined8*)( lVar1 + 0x50 ), param_3);
            return uVar4;
         }

         iVar3 = strcmp(param_2, "CtrlInit");
         if (iVar3 != 0) {
            return 0;
         }

         uVar4 = *(undefined8*)( lVar1 + 0x48 );
         ptr = CRYPTO_strdup(param_3, "test/evp_test.c", 0xcb);
         if (ptr != (char*)0x0) {
            iVar3 = OPENSSL_sk_push(uVar4, ptr);
            if (0 < iVar3) {
               return 1;
            }

            CRYPTO_free(ptr);
            return 0xffffffff;
         }

         return 0xffffffff;
      }

   }

   puVar2 = public_keys;
   *(int*)( lVar1 + 0x60 ) = iVar3;
   while (true) {
      if (puVar2 == (undefined8*)0x0) {
         return 0xffffffff;
      }

      iVar3 = strcmp((char*)*puVar2, param_3);
      if (iVar3 == 0) break;
      puVar2 = (undefined8*)puVar2[2];
   }
;
   *(undefined8*)( lVar1 + 0x58 ) = puVar2[1];
   return 1;
}
undefined8 verify_test_init(long param_1, char *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   char *pcVar4;
   undefined8 uVar5;
   long lVar6;
   long in_FS_OFFSET;
   undefined1 auStack_68[56];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar4 = strchr(param_2, 0x3a);
   if (pcVar4 == (char*)0x0) {
      uVar5 = pkey_test_init_keyctx(param_1, param_2, 1);
      if (( *(int*)( param_1 + 0x998 ) != 0 ) || ( (int)uVar5 == 0 )) goto LAB_00108f58;
      lVar6 = *(long*)( param_1 + 0x9c8 );
      *(undefined8*)( lVar6 + 0x20 ) = 0;
      *(undefined**)( lVar6 + 0x10 ) = &EVP_PKEY_verify_init_ex;
      LAB_00108fbb:uVar5 = OPENSSL_sk_new_null();
      *(undefined8*)( lVar6 + 0x48 ) = uVar5;
      uVar5 = OPENSSL_sk_new_null();
      *(undefined8*)( lVar6 + 0x50 ) = uVar5;
      uVar5 = 1;
   }
 else {
      if (( ( pcVar4 == param_2 ) || ( pcVar4[1] == '\0' ) ) || ( lVar6 = 0x32 < lVar6 )) {
         test_info("test/evp_test.c", 0x9ea, "Can\'t extract algorithm or key name from \'%s\'", param_2);
      }
 else {
         __memcpy_chk(auStack_68, param_2, lVar6, 0x33);
         auStack_68[lVar6] = 0;
         uVar5 = pkey_test_init_keyctx(param_1, pcVar4 + 1, 1);
         uVar2 = libctx;
         uVar1 = propquery;
         if (*(int*)( param_1 + 0x998 ) != 0) goto LAB_00108f58;
         if ((int)uVar5 != 0) {
            lVar6 = *(long*)( param_1 + 0x9c8 );
            *(undefined**)( lVar6 + 0x18 ) = &EVP_PKEY_verify_init_ex2;
            *(undefined8*)( lVar6 + 0x20 ) = 0;
            uVar5 = EVP_SIGNATURE_fetch(uVar2, auStack_68, uVar1);
            *(undefined8*)( lVar6 + 8 ) = uVar5;
            iVar3 = test_ptr("test/evp_test.c", 0x9fb, "kdata->sigalgo = EVP_SIGNATURE_fetch(libctx, algoname, propquery)", uVar5);
            if (iVar3 == 0) {
               test_info("test/evp_test.c", 0x9fd, "algoname = \'%s\'", auStack_68);
               uVar5 = 0;
               goto LAB_00108f58;
            }

            goto LAB_00108fbb;
         }

      }

      uVar5 = 0;
   }

   LAB_00108f58:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 verify_recover_test_init(long param_1, char *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined *puVar3;
   int iVar4;
   char *pcVar5;
   undefined8 uVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined1 auStack_68[56];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar5 = strchr(param_2, 0x3a);
   if (pcVar5 == (char*)0x0) {
      uVar6 = pkey_test_init_keyctx(param_1, param_2, 1);
      if (( *(int*)( param_1 + 0x998 ) != 0 ) || ( (int)uVar6 == 0 )) goto LAB_00109118;
      lVar7 = *(long*)( param_1 + 0x9c8 );
      *(undefined**)( lVar7 + 0x10 ) = &EVP_PKEY_verify_recover_init_ex;
      *(undefined**)( lVar7 + 0x20 ) = &EVP_PKEY_verify_recover;
      LAB_0010917e:uVar6 = OPENSSL_sk_new_null();
      *(undefined8*)( lVar7 + 0x48 ) = uVar6;
      uVar6 = OPENSSL_sk_new_null();
      *(undefined8*)( lVar7 + 0x50 ) = uVar6;
      uVar6 = 1;
   }
 else {
      if (( ( pcVar5 == param_2 ) || ( pcVar5[1] == '\0' ) ) || ( lVar7 = 0x32 < lVar7 )) {
         test_info("test/evp_test.c", 0x9ea, "Can\'t extract algorithm or key name from \'%s\'", param_2);
      }
 else {
         __memcpy_chk(auStack_68, param_2, lVar7, 0x33);
         auStack_68[lVar7] = 0;
         uVar6 = pkey_test_init_keyctx(param_1, pcVar5 + 1, 1);
         puVar3 = PTR_EVP_PKEY_verify_recover_00115020;
         uVar2 = libctx;
         uVar1 = propquery;
         if (*(int*)( param_1 + 0x998 ) != 0) goto LAB_00109118;
         if ((int)uVar6 != 0) {
            lVar7 = *(long*)( param_1 + 0x9c8 );
            *(undefined**)( lVar7 + 0x18 ) = PTR_EVP_PKEY_verify_recover_init_ex2_00115018;
            *(undefined**)( lVar7 + 0x20 ) = puVar3;
            uVar6 = EVP_SIGNATURE_fetch(uVar2, auStack_68, uVar1);
            *(undefined8*)( lVar7 + 8 ) = uVar6;
            iVar4 = test_ptr("test/evp_test.c", 0x9fb, "kdata->sigalgo = EVP_SIGNATURE_fetch(libctx, algoname, propquery)", uVar6);
            if (iVar4 == 0) {
               test_info("test/evp_test.c", 0x9fd, "algoname = \'%s\'", auStack_68);
               uVar6 = 0;
               goto LAB_00109118;
            }

            goto LAB_0010917e;
         }

      }

      uVar6 = 0;
   }

   LAB_00109118:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 digestsigver_test_parse(long param_1, char *param_2, char *param_3) {
   undefined8 *puVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   char *ptr;
   int *piVar6;
   undefined8 *puVar7;
   int *piVar8;
   piVar8 = *(int**)( param_1 + 0x9c8 );
   iVar2 = strcmp(param_2, "Key");
   if (iVar2 != 0) {
      iVar2 = strcmp(param_2, "Input");
      if (iVar2 == 0) {
         if (piVar8[1] == 0) {
            uVar3 = evp_test_buffer_append(param_3, (long)data_chunk_size, piVar8 + 8);
            return uVar3;
         }

         piVar6 = piVar8 + 0xc;
         piVar8 = piVar8 + 10;
      }
 else {
         iVar2 = strcmp(param_2, "Output");
         if (iVar2 != 0) {
            if (piVar8[1] == 0 && data_chunk_size == 0) {
               iVar2 = strcmp(param_2, "Count");
               if (iVar2 == 0) {
                  lVar5 = *(long*)( piVar8 + 8 );
                  lVar4 = strtol(param_3, (char**)0x0, 10);
                  if (lVar5 == 0) {
                     return 0;
                  }

                  if ((int)lVar4 < 1) {
                     return 0;
                  }

                  iVar2 = OPENSSL_sk_num(lVar5);
                  if (iVar2 == 0) {
                     return 0;
                  }

                  iVar2 = OPENSSL_sk_num(lVar5);
                  lVar5 = OPENSSL_sk_value(lVar5, iVar2 + -1);
                  if (*(int*)( lVar5 + 0x18 ) != 0) {
                     return 0;
                  }

                  *(undefined4*)( lVar5 + 0x18 ) = 1;
                  *(long*)( lVar5 + 0x10 ) = (long)(int)lVar4;
                  return 1;
               }

               iVar2 = strcmp(param_2, "Ncopy");
               if (iVar2 == 0) {
                  uVar3 = evp_test_buffer_ncopy(param_3, *(undefined8*)( piVar8 + 8 ));
                  return uVar3;
               }

            }

            iVar2 = strcmp(param_2, "Ctrl");
            if (iVar2 == 0) {
               uVar3 = pkey_add_control(param_1, *(undefined8*)( piVar8 + 0x18 ), param_3);
               return uVar3;
            }

            iVar2 = strcmp(param_2, "CtrlInit");
            if (iVar2 == 0) {
               uVar3 = *(undefined8*)( piVar8 + 0x16 );
               ptr = CRYPTO_strdup(param_3, "test/evp_test.c", 0xcb);
               if (ptr != (char*)0x0) {
                  iVar2 = OPENSSL_sk_push(uVar3, ptr);
                  if (0 < iVar2) {
                     return 1;
                  }

                  CRYPTO_free(ptr);
               }

               return 0xffffffff;
            }

            iVar2 = strcmp(param_2, "NonceType");
            if (iVar2 != 0) {
               return 0;
            }

            iVar2 = strcmp(param_3, "deterministic");
            if (iVar2 != 0) {
               return 1;
            }

            piVar8[0x12] = 1;
            return 1;
         }

         piVar6 = piVar8 + 0x10;
         piVar8 = piVar8 + 0xe;
      }

      uVar3 = parse_bin(param_3, piVar8, piVar6);
      return uVar3;
   }

   puVar7 = public_keys;
   puVar1 = private_keys;
   if (*piVar8 != 0) {
      for (; puVar1 = private_keys,puVar7 != (undefined8*)0x0; puVar7 = (undefined8*)puVar7[2]) {
         iVar2 = strcmp((char*)*puVar7, param_3);
         if (iVar2 == 0) goto LAB_001092d8;
      }

   }

   while (puVar7 = puVar1,puVar7 != (undefined8*)0x0) {
      iVar2 = strcmp((char*)*puVar7, param_3);
      if (iVar2 == 0) goto LAB_001092d8;
      puVar1 = (undefined8*)puVar7[2];
   }
;
   LAB_001093e0:*(undefined4*)( param_1 + 0x998 ) = 1;
   return 1;
   LAB_001092d8:if (puVar7[1] != 0) {
      *(undefined8*)( piVar8 + 0x14 ) = puVar7[1];
      return 1;
   }

   goto LAB_001093e0;
}
undefined8 rand_test_parse(long param_1, char *param_2, char *param_3) {
   long lVar1;
   int iVar2;
   char *pcVar3;
   long lVar4;
   undefined8 uVar5;
   ulong uVar6;
   long lVar7;
   char *pcVar8;
   lVar7 = *(long*)( param_1 + 0x9c8 );
   pcVar3 = strchr(param_2, 0x2e);
   if (pcVar3 != (char*)0x0) {
      lVar4 = strtol(pcVar3 + 1, (char**)0x0, 10);
      iVar2 = (int)lVar4;
      if (0xe < iVar2) {
         return 0;
      }

      if (*(int*)( lVar7 + 0x10 ) < iVar2) {
         *(int*)( lVar7 + 0x10 ) = iVar2;
      }

      lVar1 = lVar7 + 0x38 + (long)iVar2 * 0xa0;
      iVar2 = strncmp(param_2, "Entropy.", 8);
      lVar7 = lVar1 + 0x50;
      lVar4 = lVar1;
      if (iVar2 != 0) {
         iVar2 = strncmp(param_2, "ReseedEntropy.", 0xe);
         if (iVar2 == 0) {
            lVar7 = lVar1 + 0x90;
            lVar4 = lVar1 + 8;
         }
 else {
            iVar2 = strncmp(param_2, "Nonce.", 6);
            lVar7 = lVar1 + 0x58;
            lVar4 = lVar1 + 0x10;
            if (iVar2 != 0) {
               iVar2 = strncmp(param_2, "PersonalisationString.", 0x16);
               lVar7 = lVar1 + 0x60;
               lVar4 = lVar1 + 0x18;
               if (iVar2 != 0) {
                  iVar2 = strncmp(param_2, "ReseedAdditionalInput.", 0x16);
                  lVar7 = lVar1 + 0x98;
                  lVar4 = lVar1 + 0x20;
                  if (iVar2 != 0) {
                     iVar2 = strncmp(param_2, "AdditionalInputA.", 0x11);
                     lVar7 = lVar1 + 0x68;
                     lVar4 = lVar1 + 0x28;
                     if (iVar2 != 0) {
                        iVar2 = strncmp(param_2, "AdditionalInputB.", 0x11);
                        lVar7 = lVar1 + 0x70;
                        lVar4 = lVar1 + 0x30;
                        if (iVar2 != 0) {
                           iVar2 = strncmp(param_2, "EntropyPredictionResistanceA.", 0x1d);
                           lVar7 = lVar1 + 0x78;
                           lVar4 = lVar1 + 0x38;
                           if (iVar2 != 0) {
                              iVar2 = strncmp(param_2, "EntropyPredictionResistanceB.", 0x1d);
                              lVar7 = lVar1 + 0x80;
                              lVar4 = lVar1 + 0x40;
                              if (iVar2 != 0) {
                                 iVar2 = strncmp(param_2, "Output.", 7);
                                 lVar7 = lVar1 + 0x88;
                                 lVar4 = lVar1 + 0x48;
                                 if (iVar2 != 0) {
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

      uVar5 = parse_bin(param_3, lVar4, lVar7);
      return uVar5;
   }

   iVar2 = strcmp(param_2, "Cipher");
   if (iVar2 == 0) {
      pcVar3 = CRYPTO_strdup(param_3, "test/evp_test.c", 0xe36);
      pcVar8 = "rdata->cipher = OPENSSL_strdup(value)";
      uVar5 = 0xe36;
      *(char**)( lVar7 + 0x20 ) = pcVar3;
   }
 else {
      iVar2 = strcmp(param_2, "Digest");
      if (iVar2 != 0) {
         iVar2 = strcmp(param_2, "DerivationFunction");
         if (iVar2 == 0) {
            lVar4 = strtol(param_3, (char**)0x0, 10);
            *(uint*)( lVar7 + 0x18 ) = ( uint )((int)lVar4 != 0);
         }
 else {
            iVar2 = strcmp(param_2, "GenerateBits");
            if (iVar2 == 0) {
               uVar6 = strtol(param_3, (char**)0x0, 10);
               if (( (int)uVar6 < 1 ) || ( ( uVar6 & 7 ) != 0 )) {
                  return 0;
               }

               *(int*)( lVar7 + 0x1c ) = (int)uVar6;
            }
 else {
               iVar2 = strcmp(param_2, "PredictionResistance");
               if (iVar2 == 0) {
                  lVar4 = strtol(param_3, (char**)0x0, 10);
                  *(uint*)( lVar7 + 0x14 ) = ( uint )((int)lVar4 != 0);
               }
 else {
                  iVar2 = strcmp(param_2, "CtrlInit");
                  if (iVar2 != 0) {
                     return 0;
                  }

                  uVar5 = *(undefined8*)( lVar7 + 0x30 );
                  pcVar3 = CRYPTO_strdup(param_3, "test/evp_test.c", 0xcb);
                  if (pcVar3 == (char*)0x0) {
                     return 0xffffffff;
                  }

                  iVar2 = OPENSSL_sk_push(uVar5, pcVar3);
                  if (iVar2 < 1) {
                     CRYPTO_free(pcVar3);
                     return 0xffffffff;
                  }

               }

            }

         }

         return 1;
      }

      pcVar3 = CRYPTO_strdup(param_3, "test/evp_test.c", 0xe38);
      pcVar8 = "rdata->digest = OPENSSL_strdup(value)";
      uVar5 = 0xe38;
      *(char**)( lVar7 + 0x28 ) = pcVar3;
   }

   uVar5 = test_ptr("test/evp_test.c", uVar5, pcVar8, pcVar3);
   return uVar5;
}
undefined8 mac_test_parse(long param_1, char *param_2, char *param_3) {
   long lVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   char *pcVar5;
   long lVar6;
   lVar1 = *(long*)( param_1 + 0x9c8 );
   iVar2 = strcmp(param_2, "Key");
   lVar3 = lVar1 + 0x28;
   lVar6 = lVar1 + 0x20;
   if (iVar2 != 0) {
      if (( ( *param_2 == 'I' ) && ( param_2[1] == 'V' ) ) && ( param_2[2] == '\0' )) {
         lVar3 = lVar1 + 0x38;
         lVar6 = lVar1 + 0x30;
      }
 else {
         iVar2 = strcmp(param_2, "Custom");
         lVar3 = lVar1 + 0x68;
         lVar6 = lVar1 + 0x60;
         if (iVar2 != 0) {
            iVar2 = strcmp(param_2, "Salt");
            lVar3 = lVar1 + 0x78;
            lVar6 = lVar1 + 0x70;
            if (iVar2 != 0) {
               iVar2 = strcmp(param_2, "Algorithm");
               if (iVar2 == 0) {
                  pcVar5 = CRYPTO_strdup(param_3, "test/evp_test.c", 0x699);
                  *(char**)( lVar1 + 0x18 ) = pcVar5;
                  if (pcVar5 != (char*)0x0) {
                     return 1;
                  }

                  return 0xffffffff;
               }

               iVar2 = strcmp(param_2, "Input");
               lVar3 = lVar1 + 0x48;
               lVar6 = lVar1 + 0x40;
               if (iVar2 != 0) {
                  iVar2 = strcmp(param_2, "Output");
                  if (iVar2 != 0) {
                     iVar2 = strcmp(param_2, "XOF");
                     if (iVar2 == 0) {
                        *(undefined4*)( lVar1 + 0x80 ) = 1;
                     }
 else {
                        iVar2 = strcmp(param_2, "NoReinit");
                        if (iVar2 != 0) {
                           iVar2 = strcmp(param_2, "Ctrl");
                           if (iVar2 == 0) {
                              uVar4 = *(undefined8*)( lVar1 + 0x88 );
                              pcVar5 = CRYPTO_strdup(param_3, "test/evp_test.c", 0xcb);
                              if (pcVar5 != (char*)0x0) {
                                 iVar2 = OPENSSL_sk_push(uVar4, pcVar5);
                                 if (0 < iVar2) {
                                    return 1;
                                 }

                                 CRYPTO_free(pcVar5);
                              }

                           }
 else {
                              iVar2 = strcmp(param_2, "OutputSize");
                              if (iVar2 == 0) {
                                 lVar3 = strtol(param_3, (char**)0x0, 10);
                                 iVar2 = (int)lVar3;
                                 *(int*)( lVar1 + 0x90 ) = iVar2;
                              }
 else {
                                 iVar2 = strcmp(param_2, "BlockSize");
                                 if (iVar2 != 0) {
                                    return 0;
                                 }

                                 lVar3 = strtol(param_3, (char**)0x0, 10);
                                 iVar2 = (int)lVar3;
                                 *(int*)( lVar1 + 0x94 ) = iVar2;
                              }

                              if (-1 < iVar2) {
                                 return 1;
                              }

                           }

                           return 0xffffffff;
                        }

                        *(undefined4*)( lVar1 + 0x84 ) = 1;
                     }

                     return 1;
                  }

                  lVar3 = lVar1 + 0x58;
                  lVar6 = lVar1 + 0x50;
               }

            }

         }

      }

   }

   uVar4 = parse_bin(param_3, lVar6, lVar3);
   return uVar4;
}
undefined8 oneshot_digestsign_test_run(long param_1) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   long lVar4;
   int iVar5;
   void *ptr;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   lVar1 = *(long*)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = signverify_init(param_1, lVar1);
   if (iVar5 != 0) {
      iVar5 = EVP_DigestSign(*(undefined8*)( lVar1 + 0x10 ), 0, &local_48, *(undefined8*)( lVar1 + 0x28 ), *(undefined8*)( lVar1 + 0x30 ));
      if (iVar5 != 0) {
         ptr = CRYPTO_malloc((int)local_48, "test/evp_test.c", 0x12ac);
         iVar5 = test_ptr("test/evp_test.c", 0x12ac, "got = OPENSSL_malloc(got_len)", ptr);
         if (iVar5 == 0) {
            *(char**)( param_1 + 0x9a8 ) = "MALLOC_FAILURE";
            goto LAB_00109c02;
         }

         local_48 = local_48 << 1;
         iVar5 = EVP_DigestSign(*(undefined8*)( lVar1 + 0x10 ), ptr, &local_48, *(undefined8*)( lVar1 + 0x28 ), *(undefined8*)( lVar1 + 0x30 ));
         lVar4 = local_48;
         if (iVar5 == 0) {
            *(char**)( param_1 + 0x9a8 ) = "DIGESTSIGN_ERROR";
            goto LAB_00109c02;
         }

         uVar2 = *(undefined8*)( lVar1 + 0x40 );
         uVar3 = *(undefined8*)( lVar1 + 0x38 );
         if (( *(char**)( param_1 + 0x9b8 ) == (char*)0x0 ) || ( iVar5 = iVar5 != 0 )) {
            iVar5 = test_mem_eq("test/evp_test.c", 0x14f, "expected", &_LC31, uVar3, uVar2, ptr, lVar4);
            if (iVar5 != 0) goto LAB_00109d9a;
         }
 else {
            iVar5 = test_mem_ne("test/evp_test.c", 0x14d, "expected", &_LC31, uVar3, uVar2, ptr, lVar4);
            if (iVar5 == 0) {
               LAB_00109d9a:*(undefined8*)( param_1 + 0x9a8 ) = 0;
               goto LAB_00109c02;
            }

         }

         *(char**)( param_1 + 0x9a8 ) = "SIGNATURE_MISMATCH";
         goto LAB_00109c02;
      }

      *(char**)( param_1 + 0x9a8 ) = "DIGESTSIGN_LENGTH_ERROR";
   }

   ptr = (void*)0x0;
   LAB_00109c02:CRYPTO_free(ptr);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 1;
}
undefined8 kdf_test_run(long param_1) {
   long *plVar1;
   void *ptr;
   long lVar2;
   int iVar3;
   void *ptr_00;
   long lVar4;
   char *pcVar5;
   long lVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   undefined1 local_128[32];
   undefined8 local_108;
   undefined8 uStack_100;
   int local_f4;
   long local_f0;
   undefined1 local_e8[16];
   undefined1 local_d8[16];
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   plVar1 = *(long**)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_f0 = 0;
   lVar6 = plVar1[2];
   local_e8 = (undefined1[16])0x0;
   local_d8 = (undefined1[16])0x0;
   local_c8 = (undefined1[16])0x0;
   local_b8 = (undefined1[16])0x0;
   local_a8 = (undefined1[16])0x0;
   iVar3 = OPENSSL_sk_num(plVar1[0x68]);
   if (iVar3 < 1) {
      LAB_00109ebf:iVar3 = EVP_KDF_CTX_set_params(*plVar1, plVar1 + 3);
      if (iVar3 != 0) {
         lVar4 = 1;
         if (lVar6 != 0) {
            lVar4 = lVar6;
         }

         ptr_00 = CRYPTO_malloc((int)lVar4, "test/evp_test.c", 0xf9c);
         iVar3 = test_ptr("test/evp_test.c", 0xf9c, "got = OPENSSL_malloc(got_len == 0 ? 1 : got_len)", ptr_00);
         pcVar5 = "INTERNAL_ERROR";
         if (iVar3 != 0) {
            iVar3 = fips_provider_version_gt(libctx, 3, 0, 0);
            if (( iVar3 == 0 ) || ( lVar4 = lVar4 == 0 )) {
               lVar4 = *plVar1;
            }
 else {
               EVP_KDF_CTX_free(*plVar1);
               *plVar1 = lVar4;
            }

            iVar3 = EVP_KDF_derive(lVar4, ptr_00, lVar6, 0);
            if (0 < iVar3) {
               lVar4 = *plVar1;
               local_f4 = 1;
               local_98 = (undefined1[16])0x0;
               local_88 = (undefined1[16])0x0;
               local_78 = (undefined1[16])0x0;
               local_68 = (undefined1[16])0x0;
               local_58 = (undefined1[16])0x0;
               OSSL_PARAM_construct_int(local_128, "fips-indicator", &local_f4);
               local_78._0_8_ = local_108;
               iVar3 = EVP_KDF_CTX_get_params(lVar4, local_98);
               if (iVar3 != 0) {
                  if (*(int*)( param_1 + 0x9d0 ) == 0) {
                     if (( local_f4 != 0 ) && ( fips_indicator_callback_unapproved_count < 1 )) goto LAB_0010a093;
                     test_error("test/evp_test.c", 0x81, "Test is expected to be FIPS approved");
                  }
 else {
                     if (( local_f4 != 1 ) && ( fips_indicator_callback_unapproved_count != 0 )) {
                        LAB_0010a093:lVar4 = plVar1[2];
                        lVar2 = plVar1[1];
                        if (( *(char**)( param_1 + 0x9b8 ) == (char*)0x0 ) || ( iVar3 = iVar3 != 0 )) {
                           iVar3 = test_mem_eq("test/evp_test.c", 0x14f, "expected", &_LC31, lVar2, lVar4, ptr_00, lVar6);
                           if (iVar3 != 0) goto LAB_0010a151;
                        }
 else {
                           iVar3 = test_mem_ne("test/evp_test.c", 0x14d, "expected", &_LC31, lVar2, lVar4, ptr_00, lVar6);
                           if (iVar3 == 0) {
                              LAB_0010a151:pcVar5 = (char*)0x0;
                              goto LAB_00109f7d;
                           }

                        }

                        *(char**)( param_1 + 0x9a8 ) = "KDF_MISMATCH";
                        uVar8 = 1;
                        goto joined_r0x00109ef9;
                     }

                     test_error("test/evp_test.c", 0x7c, "Test is not expected to be FIPS approved");
                  }

               }

               uVar8 = 0;
               goto joined_r0x00109ef9;
            }

            pcVar5 = "KDF_DERIVE_ERROR";
         }

         LAB_00109f7d:*(char**)( param_1 + 0x9a8 ) = pcVar5;
         uVar8 = 1;
         goto joined_r0x00109ef9;
      }

   }
 else {
      iVar3 = ctrl2params(param_1, plVar1[0x68], 0, local_e8, 2, &local_f0);
      if (iVar3 == 0) {
         ptr_00 = (void*)0x0;
         uVar8 = 1;
         goto joined_r0x00109ef9;
      }

      iVar3 = EVP_KDF_CTX_set_params(*plVar1, local_e8);
      if (iVar3 != 0) goto LAB_00109ebf;
   }

   ptr_00 = (void*)0x0;
   uVar8 = 1;
   *(char**)( param_1 + 0x9a8 ) = "KDF_CTRL_ERROR";
   joined_r0x00109ef9:if (local_f0 != 0) {
      lVar6 = local_f0 + -1;
      puVar7 = &uStack_100 + local_f0 * 5;
      do {
         ptr = (void*)*puVar7;
         lVar6 = lVar6 + -1;
         puVar7 = puVar7 + -5;
         CRYPTO_free(ptr);
      }
 while ( lVar6 != -1 );
   }

   CRYPTO_free(ptr_00);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Type propagation algorithm not settling */bool run_file_tests(int param_1) {
   undefined8 uVar1;
   uint uVar2;
   void *ptr;
   int iVar3;
   int iVar4;
   uint uVar5;
   uint uVar6;
   int iVar7;
   undefined8 uVar8;
   undefined8 *ptr_00;
   ulong uVar9;
   long lVar10;
   char *pcVar11;
   undefined8 *puVar12;
   char *pcVar13;
   undefined8 *puVar14;
   undefined8 *puVar15;
   undefined **ppuVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   bool bVar18;
   long local_60;
   void *local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = test_get_argument((long)param_1);
   ptr_00 = (undefined8*)CRYPTO_zalloc(0x9d8, "test/evp_test.c", 0x14db);
   iVar3 = test_ptr("test/evp_test.c", 0x14db, "t = OPENSSL_zalloc(sizeof(*t))");
   if (iVar3 != 0) {
      iVar3 = test_start_file(ptr_00, uVar8);
      if (iVar3 != 0) {
         OSSL_INDICATOR_set_callback(libctx, fips_indicator_cb);
         LAB_0010a270:uVar9 = BIO_ctrl((BIO*)ptr_00[1], 2, 0, (void*)0x0);
         uVar17 = uVar9 & 0xffffffff;
         if ((int)uVar9 == 0) {
            fips_indicator_callback_unapproved_count = 0;
            LAB_0010a2cd:lVar10 = BIO_ctrl((BIO*)ptr_00[1], 2, 0, (void*)0x0);
            if ((int)lVar10 == 0) {
               clear_test(ptr_00);
               iVar3 = test_readstanza(ptr_00);
               if (iVar3 != 0) goto code_r0x0010a2b8;
               goto LAB_0010a4e0;
            }

            LAB_0010a2e3:iVar3 = *(int*)( ptr_00 + 0x133 );
            joined_r0x0010b13a:if (iVar3 != 0) goto LAB_0010a4ef;
            if (ptr_00[0x134] != 0) {
               pcVar11 = (char*)ptr_00[0x135];
               *(int*)( (long)ptr_00 + 0x1c ) = *(int*)( (long)ptr_00 + 0x1c ) + 1;
               if (pcVar11 == (char*)0x0) {
                  iVar3 = ( **(code**)( ptr_00[0x134] + 0x20 ) )(ptr_00);
                  if (iVar3 != 1) {
                     test_info("test/evp_test.c", 0x1373, "%s:%d %s error", *ptr_00, *(undefined4*)( (long)ptr_00 + 0x14 ), *(undefined8*)ptr_00[0x134]);
                     goto LAB_0010aa9e;
                  }

                  pcVar11 = (char*)ptr_00[0x135];
                  pcVar13 = (char*)ptr_00[0x137];
                  if (pcVar11 != (char*)0x0) goto LAB_0010a31e;
                  if (pcVar13 != (char*)0x0) {
                     test_info("test/evp_test.c", 0x133c, "%s:%d: Succeeded but was expecting %s", *ptr_00, *(undefined4*)( (long)ptr_00 + 0x14 ), pcVar13);
                     goto LAB_0010a553;
                  }

                  goto LAB_0010a270;
               }

               pcVar13 = (char*)ptr_00[0x137];
               LAB_0010a31e:if (pcVar13 == (char*)0x0) {
                  if (ptr_00[0x136] == 0) {
                     test_info("test/evp_test.c", 0x1336, "%s:%d: Source of above error; unexpected error %s", *ptr_00, *(undefined4*)( (long)ptr_00 + 0x14 ), pcVar11);
                  }
 else {
                     test_info("test/evp_test.c", 0x1333, "%s:%d: Source of above error (%s); unexpected error %s", *ptr_00, *(undefined4*)( (long)ptr_00 + 0x14 ), ptr_00[0x136], pcVar11);
                  }

               }
 else {
                  iVar3 = strcmp(pcVar11, pcVar13);
                  if (iVar3 == 0) {
                     if (ptr_00[0x138] == 0) goto LAB_0010a270;
                     uVar9 = ERR_peek_error();
                     if (uVar9 == 0) {
                        test_info("test/evp_test.c", 0x1352, "%s:%d: Expected error \"%s\" not set", *ptr_00, *(undefined4*)( (long)ptr_00 + 0x14 ), ptr_00[0x138]);
                     }
 else {
                        pcVar11 = ERR_reason_error_string(uVar9);
                        if (pcVar11 == (char*)0x0) {
                           test_info("test/evp_test.c", 0x1359, "%s:%d: Expected error \"%s\", no strings available. Assuming ok.", *ptr_00, *(undefined4*)( (long)ptr_00 + 0x14 ), ptr_00[0x138]);
                           goto LAB_0010a270;
                        }

                        pcVar13 = (char*)ptr_00[0x138];
                        iVar3 = strcmp(pcVar11, pcVar13);
                        if (iVar3 == 0) goto LAB_0010a270;
                        test_info("test/evp_test.c", 0x1362, "%s:%d: Expected error \"%s\", got \"%s\"", *ptr_00, *(undefined4*)( (long)ptr_00 + 0x14 ), pcVar13, pcVar11);
                     }

                  }
 else {
                     test_info("test/evp_test.c", 0x1342, "%s:%d: Expected %s got %s", *ptr_00, *(undefined4*)( (long)ptr_00 + 0x14 ), pcVar13, pcVar11);
                  }

               }

               LAB_0010a553:test_openssl_errors();
               *(int*)( ptr_00 + 3 ) = *(int*)( ptr_00 + 3 ) + 1;
            }

            goto LAB_0010a270;
         }

         LAB_0010aaa3:test_end_file(ptr_00);
         clear_test(ptr_00);
         puVar14 = public_keys;
         while (puVar15 = private_keys,puVar14 != (undefined8*)0x0) {
            puVar15 = (undefined8*)puVar14[2];
            EVP_PKEY_free((EVP_PKEY*)puVar14[1]);
            CRYPTO_free((void*)*puVar14);
            CRYPTO_free(puVar14);
            puVar14 = puVar15;
         }
;
         while (puVar15 != (undefined8*)0x0) {
            puVar14 = (undefined8*)puVar15[2];
            EVP_PKEY_free((EVP_PKEY*)puVar15[1]);
            CRYPTO_free((void*)*puVar15);
            CRYPTO_free(puVar15);
            puVar15 = puVar14;
         }
;
         BIO_free((BIO*)ptr_00[0x131]);
         iVar3 = *(int*)( ptr_00 + 3 );
         CRYPTO_free(ptr_00);
         bVar18 = iVar3 == 0;
         goto LAB_0010a217;
      }

      CRYPTO_free(ptr_00);
   }

   bVar18 = false;
   LAB_0010a217:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar18;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   code_r0x0010a2b8:puVar14 = ptr_00 + 7;
   uVar2 = (uint)uVar17;
   if (*(int*)( (long)ptr_00 + 0x24 ) != 0) {
      LAB_0010a404:pcVar11 = (char*)puVar14[-2];
      uVar17 = (ulong)uVar2;
      iVar3 = strcmp(pcVar11, "PrivateKey");
      if (iVar3 == 0) goto LAB_0010a562;
      iVar3 = strcmp(pcVar11, "PublicKey");
      if (iVar3 == 0) {
         puVar15 = &public_keys;
         local_60 = PEM_read_bio_PUBKEY_ex(ptr_00[0x131], 0, 0, 0, libctx, 0);
         if (local_60 != 0) goto LAB_0010a598;
         uVar9 = ERR_peek_last_error();
         uVar5 = (uint)uVar9;
         if (( uVar9 & 0x80000000 ) == 0) {
            uVar6 = uVar5 & 0x7fffff;
            if (( ( uVar6 != 0x9c && uVar6 != 0x72 || (char)( uVar9 >> 0x17 ) != '\x06' ) && ( ( uVar5 & 0x7fffff ) != 0x8010c ) ) && ( ( ( ( uint )(uVar9 >> 0x17) & 0xff ) != 0x10 || ( ( uVar6 != 0x81 && ( uVar6 != 0x8d ) ) ) ) )) {
               LAB_0010a721:EVP_PKEY_free((EVP_PKEY*)0x0);
               uVar8 = 0x141d;
               pcVar11 = "Can\'t read public key %s";
               goto LAB_0010a739;
            }

         }
 else if (( uVar5 & 0x7fffffff ) != 0x8010c) goto LAB_0010a721;
      }
 else {
         iVar3 = strcmp(pcVar11, "ParamKey");
         if (iVar3 != 0) {
            iVar3 = strcmp(pcVar11, "PrivateKeyRaw");
            if (iVar3 == 0) {
               puVar15 = &private_keys;
               LAB_0010a817:pcVar11 = strchr((char*)puVar14[-1], 0x3a);
               if (pcVar11 != (char*)0x0) {
                  *pcVar11 = '\0';
                  pcVar11 = pcVar11 + 1;
                  pcVar13 = strchr(pcVar11, 0x3a);
                  if (pcVar13 != (char*)0x0) {
                     *pcVar13 = '\0';
                     iVar3 = OBJ_txt2nid(pcVar11);
                     if (iVar3 == 0) {
                        test_info("test/evp_test.c", 0x1445, "Unrecognised algorithm NID");
                        goto LAB_0010ac36;
                     }

                     iVar3 = parse_bin(pcVar13 + 1, &local_50, &local_48);
                     ptr = local_50;
                     if (iVar3 == 0) {
                        test_info("test/evp_test.c", 0x1449, "Failed to create binary key");
                        goto LAB_0010ac36;
                     }

                     if ((undefined8**)puVar15 == &private_keys) {
                        local_60 = EVP_PKEY_new_raw_private_key_ex(libctx, pcVar11, 0, local_50, local_48);
                     }
 else {
                        local_60 = EVP_PKEY_new_raw_public_key_ex();
                     }

                     if (local_60 == 0) {
                        uVar9 = ERR_peek_last_error();
                        uVar5 = (uint)uVar9;
                        if (( uVar9 & 0x80000000 ) == 0) {
                           uVar6 = uVar5 & 0x7fffff;
                           if (( ( ( uVar6 == 0x9c || uVar6 == 0x72 ) && (char)( uVar9 >> 0x17 ) == '\x06' ) || ( ( uVar5 & 0x7fffff ) == 0x8010c ) ) || ( ( ( ( uint )(uVar9 >> 0x17) & 0xff ) == 0x10 && ( ( uVar6 == 0x81 || ( uVar6 == 0x8d ) ) ) ) )) {
                              LAB_0010ad67:ERR_clear_error();
                              goto LAB_0010a8bc;
                           }

                        }
 else if (( uVar5 & 0x7fffffff ) == 0x8010c) goto LAB_0010ad67;
                        test_info("test/evp_test.c", 0x1453, "Can\'t read %s data");
                        CRYPTO_free(ptr);
                        test_openssl_errors();
                        goto LAB_0010ac36;
                     }

                     LAB_0010a8bc:CRYPTO_free(ptr);
                     goto LAB_0010a598;
                  }

               }

               test_info("test/evp_test.c", 0x143f, "Failed to parse %s value");
               goto LAB_0010ac36;
            }

            iVar3 = strcmp(pcVar11, "PublicKeyRaw");
            if (iVar3 == 0) {
               puVar15 = &public_keys;
               goto LAB_0010a817;
            }

            iVar3 = strcmp(pcVar11, "Availablein");
            if (iVar3 == 0) {
               iVar3 = prov_available(puVar14[-1]);
               if (iVar3 != 0) goto LAB_0010a3fd;
               test_info("test/evp_test.c", 0x145b, "skipping, \'%s\' provider not available: %s:%d", puVar14[-1], *ptr_00, *(undefined4*)( (long)ptr_00 + 0x14 ));
               *(undefined4*)( ptr_00 + 0x133 ) = 1;
               goto LAB_0010a4ef;
            }

            iVar3 = strcmp(pcVar11, "FIPSversion");
            if (iVar3 != 0) {
               ppuVar16 = &evp_test_list;
               puVar15 = (undefined8*)evp_test_list;
               while (( puVar15 != (undefined8*)0x0 && ( iVar3 = iVar3 != 0 ) )) {
                  puVar15 = (undefined8*)ppuVar16[1];
                  ppuVar16 = ppuVar16 + 1;
               }
;
               ptr_00[0x134] = puVar15;
               iVar3 = test_ptr("test/evp_test.c", 0x1489, "t->meth = find_test(pp->key)");
               if (iVar3 != 0) {
                  iVar3 = ( **(code**)( ptr_00[0x134] + 8 ) )(ptr_00, puVar14[-1]);
                  if (iVar3 == 0) {
                     test_error("test/evp_test.c", 0x148c, "unknown %s: %s\n", puVar14[-2], puVar14[-1]);
                     goto LAB_0010ac36;
                  }

                  iVar3 = *(int*)( ptr_00 + 0x133 );
                  if (iVar3 != 1) {
                     iVar7 = *(int*)( (long)ptr_00 + 0x24 );
                     if (1 < (int)( iVar7 - uVar2 )) {
                        iVar3 = 1;
                        do {
                           pcVar11 = (char*)*puVar14;
                           iVar4 = strcmp(pcVar11, "Securitycheck");
                           if (iVar4 == 0) {
                              test_info("test/evp_test.c", 0x149b, "skipping, Securitycheck is disabled: %s:%d", *ptr_00, *(undefined4*)( (long)ptr_00 + 0x14 ));
                              *(undefined4*)( ptr_00 + 0x133 ) = 1;
                              goto LAB_0010a4ef;
                           }

                           iVar4 = strcmp(pcVar11, "Availablein");
                           if (iVar4 == 0) {
                              test_info("test/evp_test.c", 0x14a1, "Line %d: \'Availablein\' should be the first option", *(undefined4*)( ptr_00 + 2 ));
                              iVar3 = *(int*)( ptr_00 + 0x133 );
                              goto joined_r0x0010b12d;
                           }

                           iVar4 = strcmp(pcVar11, "Result");
                           if (iVar4 == 0) {
                              if (ptr_00[0x137] != 0) {
                                 test_info("test/evp_test.c", 0x14a6, "Line %d: multiple result lines");
                                 iVar3 = *(int*)( ptr_00 + 0x133 );
                                 goto joined_r0x0010b12d;
                              }

                              uVar8 = puVar14[1];
                              puVar14[1] = 0;
                              ptr_00[0x137] = uVar8;
                           }
 else {
                              iVar4 = strcmp(pcVar11, "Function");
                              if (iVar4 != 0) {
                                 iVar4 = strcmp(pcVar11, "Reason");
                                 if (iVar4 == 0) {
                                    if (ptr_00[0x138] != 0) {
                                       test_info("test/evp_test.c", 0x14ae, "Line %d: multiple reason lines");
                                       iVar3 = *(int*)( ptr_00 + 0x133 );
                                       goto joined_r0x0010b12d;
                                    }

                                    uVar8 = puVar14[1];
                                    puVar14[1] = 0;
                                    ptr_00[0x138] = uVar8;
                                 }
 else {
                                    iVar4 = strcmp(pcVar11, "Threads");
                                    if (iVar4 == 0) {
                                       lVar10 = strtol((char*)puVar14[1], (char**)0x0, 10);
                                       iVar7 = OSSL_set_max_threads(libctx, (long)(int)lVar10);
                                       if (iVar7 == 0) {
                                          test_info("test/evp_test.c", 0x14b4, "skipping, \'%s\' threads not available: %s:%d", puVar14[1], *ptr_00, *(undefined4*)( (long)ptr_00 + 0x14 ));
                                          iVar7 = *(int*)( (long)ptr_00 + 0x24 );
                                          *(undefined4*)( ptr_00 + 0x133 ) = 1;
                                       }
 else {
                                          LAB_0010afb6:iVar7 = *(int*)( (long)ptr_00 + 0x24 );
                                       }

                                    }
 else {
                                       iVar4 = strcmp(pcVar11, "Unapproved");
                                       if (iVar4 == 0) {
                                          *(undefined4*)( ptr_00 + 0x13a ) = 1;
                                       }
 else {
                                          iVar4 = strcmp(pcVar11, "Extended-Test");
                                          if (iVar4 != 0) {
                                             iVar7 = ( **(code**)( ptr_00[0x134] + 0x18 ) )(ptr_00, pcVar11, puVar14[1]);
                                             if (iVar7 == 0) {
                                                test_info("test/evp_test.c", 0x14c5, "Line %d: unknown keyword %s", *(undefined4*)( ptr_00 + 2 ), *puVar14);
                                                iVar3 = *(int*)( ptr_00 + 0x133 );
                                                goto joined_r0x0010b12d;
                                             }

                                             if (iVar7 < 0) {
                                                test_info("test/evp_test.c", 0x14c9, "Line %d: error processing keyword %s = %s\n", *(undefined4*)( ptr_00 + 2 ), *puVar14, puVar14[1]);
                                                goto LAB_0010ac36;
                                             }

                                             if (*(int*)( ptr_00 + 0x133 ) != 0) goto LAB_0010a4ef;
                                             goto LAB_0010afb6;
                                          }

                                          if (extended_tests == 0) {
                                             test_info("test/evp_test.c", 0x14bc, "skipping extended test: %s:%d", *ptr_00, *(undefined4*)( (long)ptr_00 + 0x14 ));
                                             iVar7 = *(int*)( (long)ptr_00 + 0x24 );
                                             *(undefined4*)( ptr_00 + 0x133 ) = 1;
                                          }

                                       }

                                    }

                                 }

                              }

                           }

                           iVar3 = iVar3 + 1;
                           puVar14 = puVar14 + 2;
                        }
 while ( iVar3 < (int)( iVar7 - uVar2 ) );
                        goto LAB_0010a2e3;
                     }

                     goto joined_r0x0010b13a;
                  }

                  goto LAB_0010a4ef;
               }

               LAB_0010ac36:iVar3 = *(int*)( ptr_00 + 0x133 );
               goto joined_r0x0010b12d;
            }

            iVar3 = prov_available(&_LC307);
            if (iVar3 != 0) {
               iVar3 = fips_provider_version_match(libctx, puVar14[-1]);
               if (-1 < iVar3) {
                  if (iVar3 != 0) goto LAB_0010a3fd;
                  test_info("test/evp_test.c", 0x146a, "skipping, FIPS provider incompatible version: %s:%d", *ptr_00, *(undefined4*)( (long)ptr_00 + 0x14 ));
                  *(undefined4*)( ptr_00 + 0x133 ) = 1;
                  goto LAB_0010a4ef;
               }

               test_info("test/evp_test.c", 0x1467, "Line %d: error matching FIPS versions\n");
               iVar3 = *(int*)( ptr_00 + 0x133 );
               goto joined_r0x0010b12d;
            }

            LAB_0010a3fd:puVar14 = puVar14 + 2;
            uVar2 = uVar2 + 1;
            goto LAB_0010a404;
         }

         puVar15 = &public_keys;
         local_60 = PEM_read_bio_Parameters_ex(ptr_00[0x131], 0, libctx, 0);
         if (local_60 != 0) goto LAB_0010a598;
         uVar9 = ERR_peek_last_error();
         uVar5 = (uint)uVar9;
         if (( uVar9 & 0x80000000 ) == 0) {
            uVar6 = uVar5 & 0x7fffff;
            if (( ( ( uVar6 == 0x9c || uVar6 == 0x72 ) && (char)( uVar9 >> 0x17 ) == '\x06' ) || ( ( uVar5 & 0x7fffff ) == 0x8010c ) ) || ( ( ( ( uint )(uVar9 >> 0x17) & 0xff ) == 0x10 && ( ( uVar6 == 0x81 || ( uVar6 == 0x8d ) ) ) ) )) goto LAB_0010ae00;
            LAB_0010a7f2:EVP_PKEY_free((EVP_PKEY*)0x0);
            uVar8 = 0x1426;
            pcVar11 = "Can\'t read params key %s";
            goto LAB_0010a739;
         }

         if (( uVar5 & 0x7fffffff ) != 0x8010c) goto LAB_0010a7f2;
      }

      LAB_0010ae00:ERR_clear_error();
      puVar15 = &public_keys;
      local_60 = 0;
      goto LAB_0010a598;
   }

   goto LAB_0010a2cd;
   LAB_0010a562:puVar15 = &private_keys;
   local_60 = PEM_read_bio_PrivateKey_ex(ptr_00[0x131], 0, 0, 0, libctx, 0);
   if (local_60 == 0) {
      uVar9 = ERR_peek_last_error();
      uVar5 = (uint)uVar9;
      if (( uVar9 & 0x80000000 ) == 0) {
         uVar6 = uVar5 & 0x7fffff;
         if (( ( uVar6 != 0x9c && uVar6 != 0x72 || (char)( uVar9 >> 0x17 ) != '\x06' ) && ( ( uVar5 & 0x7fffff ) != 0x8010c ) ) && ( ( ( ( uint )(uVar9 >> 0x17) & 0xff ) != 0x10 || ( ( uVar6 != 0x81 && ( uVar6 != 0x8d ) ) ) ) )) {
            LAB_0010adcf:EVP_PKEY_free((EVP_PKEY*)0x0);
            uVar8 = 0x1414;
            pcVar11 = "Can\'t read private key %s";
            LAB_0010a739:test_info("test/evp_test.c", uVar8, pcVar11);
            test_openssl_errors();
            iVar3 = *(int*)( ptr_00 + 0x133 );
            joined_r0x0010b12d:if (iVar3 == 0) {
               LAB_0010aa9e:*(int*)( ptr_00 + 3 ) = *(int*)( ptr_00 + 3 ) + 1;
               goto LAB_0010aaa3;
            }

            LAB_0010a4ef:*(int*)( ptr_00 + 4 ) = *(int*)( ptr_00 + 4 ) + 1;
            goto LAB_0010a270;
         }

      }
 else if (( uVar5 & 0x7fffffff ) != 0x8010c) goto LAB_0010adcf;
      ERR_clear_error();
      puVar15 = &private_keys;
   }

   LAB_0010a598:pcVar11 = (char*)puVar14[-1];
   for (puVar12 = (undefined8*)*puVar15; puVar12 != (undefined8*)0x0; puVar12 = (undefined8*)puVar12[2]) {
      iVar3 = strcmp((char*)*puVar12, pcVar11);
      if (iVar3 == 0) {
         test_info("test/evp_test.c", 0x1478, "Duplicate key %s");
         iVar3 = *(int*)( ptr_00 + 0x133 );
         goto joined_r0x0010b12d;
      }

   }

   puVar12 = (undefined8*)CRYPTO_malloc(0x18, "test/evp_test.c", 0x147b);
   iVar3 = test_ptr("test/evp_test.c", 0x147b, "key = OPENSSL_malloc(sizeof(*key))");
   if (iVar3 == 0) {
      LAB_0010a4e0:iVar3 = *(int*)( ptr_00 + 0x133 );
      goto joined_r0x0010b12d;
   }

   uVar1 = *puVar15;
   uVar8 = puVar14[-1];
   *puVar15 = puVar12;
   puVar14[-1] = 0;
   puVar12[2] = uVar1;
   iVar3 = *(int*)( (long)ptr_00 + 0x24 );
   *puVar12 = uVar8;
   puVar12[1] = local_60;
   if (iVar3 - uVar2 != 1) {
      test_info("test/evp_test.c", 0x1484, "Line %d: missing blank line\n");
   }

   goto LAB_0010a2cd;
}
int pderive_test_run(long param_1) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   EVP_PKEY_CTX *ctx;
   uchar *key;
   uchar *extraout_RDX;
   uchar *puVar5;
   long in_FS_OFFSET;
   size_t local_48;
   long local_40;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = pkey_test_run_init();
   if (iVar4 != 0) {
      *(undefined8*)( param_1 + 0x9a8 ) = 0;
      iVar4 = EVP_PKEY_derive_set_peer_ex(*puVar1, puVar1[0xb], *(undefined4*)( puVar1 + 0xc ));
      if (0 < iVar4) {
         ctx = EVP_PKEY_CTX_dup((EVP_PKEY_CTX*)*puVar1);
         iVar4 = test_ptr("test/evp_test.c", 0xbe1, "dctx = EVP_PKEY_CTX_dup(expected->ctx)", ctx);
         if (iVar4 != 0) {
            iVar4 = EVP_PKEY_derive(ctx, (uchar*)0x0, &local_48);
            if (( 0 < iVar4 ) && ( iVar4 = test_size_t_ne("test/evp_test.c", 0xbe7, "got_len", &_LC339, local_48, 0) ),iVar4 != 0) {
               key = (uchar*)CRYPTO_malloc((int)local_48, "test/evp_test.c", 0xbeb);
               iVar4 = test_ptr("test/evp_test.c", 0xbeb, "got = OPENSSL_malloc(got_len)", key);
               if (( iVar4 == 0 ) || ( iVar4 = iVar4 < 1 )) {
                  *(char**)( param_1 + 0x9a8 ) = "DERIVE_ERROR";
               }
 else {
                  uVar2 = puVar1[8];
                  uVar3 = puVar1[7];
                  if (( *(char**)( param_1 + 0x9b8 ) == (char*)0x0 ) || ( iVar4 = strcmp(*(char**)( param_1 + 0x9b8 ), "SHARED_SECRET_MISMATCH") ),iVar4 != 0) {
                     puVar5 = key;
                     iVar4 = test_mem_eq("test/evp_test.c", 0x14f, "expected", &_LC31, uVar3, uVar2, key, local_48);
                     if (iVar4 != 0) goto LAB_0010b42f;
                  }
 else {
                     iVar4 = test_mem_ne("test/evp_test.c", 0x14d, "expected", &_LC31, uVar3, uVar2, key, local_48);
                     puVar5 = extraout_RDX;
                     if (iVar4 == 0) {
                        LAB_0010b42f:iVar4 = pkey_check_fips_approved(ctx, param_1, puVar5);
                        if (iVar4 == 0) goto LAB_0010b227;
                        *(undefined8*)( param_1 + 0x9a8 ) = 0;
                        goto LAB_0010b3e8;
                     }

                  }

                  *(char**)( param_1 + 0x9a8 ) = "SHARED_SECRET_MISMATCH";
               }

               LAB_0010b3e8:iVar4 = 1;
               goto LAB_0010b227;
            }

         }

         iVar4 = 1;
         key = (uchar*)0x0;
         *(char**)( param_1 + 0x9a8 ) = "DERIVE_ERROR";
         goto LAB_0010b227;
      }

      *(char**)( param_1 + 0x9a8 ) = "DERIVE_SET_PEER_ERROR";
   }

   iVar4 = 1;
   key = (uchar*)0x0;
   ctx = (EVP_PKEY_CTX*)0x0;
   LAB_0010b227:CRYPTO_free(key);
   EVP_PKEY_CTX_free(ctx);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar4;
}
undefined8 encode_test_run(long param_1) {
   size_t __n;
   long *plVar1;
   long lVar2;
   undefined1 auVar3[16];
   int iVar4;
   int iVar5;
   int extraout_EAX;
   int extraout_EAX_00;
   int iVar6;
   EVP_ENCODE_CTX *ctx;
   void *__s;
   EVP_ENCODE_CTX *ctx_00;
   long lVar7;
   ulong uVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   uchar *local_80;
   int local_44;
   long local_40;
   plVar1 = *(long**)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ctx = (EVP_ENCODE_CTX*)EVP_ENCODE_CTX_new();
   iVar4 = test_ptr("test/evp_test.c", 0xd3c, "decode_ctx = EVP_ENCODE_CTX_new()", ctx);
   if (iVar4 == 0) {
      ctx_00 = (EVP_ENCODE_CTX*)0x0;
      __s = (void*)0x0;
      local_80 = (uchar*)0x0;
      *(char**)( param_1 + 0x9a8 ) = "INTERNAL_ERROR";
      goto LAB_0010b520;
   }

   if ((int)plVar1[4] != 0) {
      local_80 = (uchar*)0x0;
      ctx_00 = (EVP_ENCODE_CTX*)0x0;
      goto LAB_0010b4d3;
   }

   ctx_00 = (EVP_ENCODE_CTX*)EVP_ENCODE_CTX_new();
   iVar4 = test_ptr("test/evp_test.c", 0xd43, "encode_ctx = EVP_ENCODE_CTX_new()", ctx_00);
   if (iVar4 == 0) {
      local_80 = (uchar*)0x0;
      __s = (void*)0x0;
      goto LAB_0010b520;
   }

   auVar3._8_8_ = 0;
   auVar3._0_8_ = plVar1[1] + 2;
   local_80 = (uchar*)CRYPTO_malloc(( ( SUB164(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab), 8) & 0xfffffffe ) + 0x29 + (int)( (ulong)plVar1[1] / 0x30 ) ) * 2, "test/evp_test.c", 0xd45);
   iVar4 = test_ptr("test/evp_test.c", 0xd44, "encode_out = OPENSSL_malloc(EVP_ENCODE_LENGTH(expected->input_len))", local_80);
   if (iVar4 == 0) {
      LAB_0010b826:__s = (void*)0x0;
      goto LAB_0010b520;
   }

   iVar4 = 0;
   EVP_EncodeInit(ctx_00);
   uVar9 = plVar1[1];
   lVar7 = 0;
   do {
      if (data_chunk_size == 0) {
         EVP_EncodeUpdate(ctx_00, local_80, &local_44, (uchar*)( *plVar1 + lVar7 ), (int)uVar9);
         iVar6 = test_true("test/evp_test.c", 0xd52, "EVP_EncodeUpdate(encode_ctx, encode_out, &chunk_len, expected->input + donelen, current_len)", extraout_EAX_00 != 0);
         if (iVar6 == 0) goto LAB_0010b826;
         iVar4 = iVar4 + local_44;
         break;
      }

      uVar8 = (long)data_chunk_size;
      if (uVar9 < (ulong)(long)data_chunk_size) {
         uVar8 = uVar9;
      }

      EVP_EncodeUpdate(ctx_00, local_80, &local_44, (uchar*)( *plVar1 + lVar7 ), (int)uVar8);
      iVar6 = test_true("test/evp_test.c", 0xd52, "EVP_EncodeUpdate(encode_ctx, encode_out, &chunk_len, expected->input + donelen, current_len)", extraout_EAX != 0);
      if (iVar6 == 0) goto LAB_0010b826;
      lVar7 = lVar7 + uVar8;
      iVar4 = iVar4 + local_44;
      uVar9 = uVar9 - uVar8;
   }
 while ( uVar9 != 0 );
   EVP_EncodeFinal(ctx_00, local_80 + iVar4, &local_44);
   iVar4 = iVar4 + local_44;
   lVar7 = plVar1[3];
   lVar2 = plVar1[2];
   if (( *(char**)( param_1 + 0x9b8 ) == (char*)0x0 ) || ( iVar6 = iVar6 != 0 )) {
      iVar4 = test_mem_eq("test/evp_test.c", 0x14f, "expected", &_LC31, lVar2, lVar7, local_80, (long)iVar4);
      if (iVar4 == 0) goto LAB_0010b995;
   }
 else {
      iVar4 = test_mem_ne("test/evp_test.c", 0x14d, "expected", &_LC31, lVar2, lVar7, local_80, (long)iVar4);
      if (iVar4 != 0) {
         LAB_0010b995:*(char**)( param_1 + 0x9a8 ) = "BAD_ENCODING";
         goto LAB_0010b826;
      }

   }

   LAB_0010b4d3:__n = ( plVar1[3] + 3U >> 2 ) * 3 + 0x50;
   iVar6 = (int)__n;
   __s = CRYPTO_malloc(iVar6, "test/evp_test.c", 0xd65);
   iVar4 = test_ptr("test/evp_test.c", 0xd65, "decode_out = OPENSSL_malloc(decode_length)", __s);
   if (iVar4 == 0) goto LAB_0010b520;
   iVar4 = 0;
   memset(__s, 0xff, __n);
   EVP_DecodeInit(ctx);
   uVar9 = plVar1[3];
   lVar7 = 0;
   do {
      if (data_chunk_size == 0) {
         iVar5 = EVP_DecodeUpdate(ctx, (uchar*)( (long)iVar4 + (long)__s ), &local_44, (uchar*)( plVar1[2] + lVar7 ), (int)uVar9);
         if (iVar5 < 0) goto LAB_0010b6b7;
         iVar4 = iVar4 + local_44;
         break;
      }

      uVar8 = (long)data_chunk_size;
      if (uVar9 < (ulong)(long)data_chunk_size) {
         uVar8 = uVar9;
      }

      iVar5 = EVP_DecodeUpdate(ctx, (uchar*)( (long)iVar4 + (long)__s ), &local_44, (uchar*)( plVar1[2] + lVar7 ), (int)uVar8);
      if (iVar5 < 0) goto LAB_0010b6b7;
      lVar7 = lVar7 + uVar8;
      iVar4 = iVar4 + local_44;
      uVar9 = uVar9 - uVar8;
   }
 while ( uVar9 != 0 );
   iVar5 = EVP_DecodeFinal(ctx, (uchar*)( (long)iVar4 + (long)__s ), &local_44);
   if (iVar5 != 1) {
      LAB_0010b6b7:*(char**)( param_1 + 0x9a8 ) = "DECODE_ERROR";
      goto LAB_0010b520;
   }

   iVar4 = iVar4 + local_44;
   if ((int)plVar1[4] == 2) {
      LAB_0010b9d0:lVar7 = (long)iVar4;
      while (iVar4 < iVar6) {
         if (*(char*)( (long)__s + lVar7 ) != -1) {
            *(char**)( param_1 + 0x9a8 ) = "BAD_DECODING";
            goto LAB_0010b520;
         }

         lVar7 = lVar7 + 1;
         iVar4 = (int)lVar7;
      }
;
      *(undefined8*)( param_1 + 0x9a8 ) = 0;
   }
 else {
      lVar7 = plVar1[1];
      lVar2 = *plVar1;
      if (( *(char**)( param_1 + 0x9b8 ) == (char*)0x0 ) || ( iVar5 = iVar5 != 0 )) {
         iVar5 = test_mem_eq("test/evp_test.c", 0x14f, "expected", &_LC31, lVar2, lVar7, __s, (long)iVar4);
         if (iVar5 != 0) goto LAB_0010b9d0;
      }
 else {
         iVar5 = test_mem_ne("test/evp_test.c", 0x14d, "expected", &_LC31, lVar2, lVar7, __s, (long)iVar4);
         if (iVar5 == 0) goto LAB_0010b9d0;
      }

      *(char**)( param_1 + 0x9a8 ) = "BAD_DECODING";
   }

   LAB_0010b520:CRYPTO_free(local_80);
   CRYPTO_free(__s);
   EVP_ENCODE_CTX_free(ctx);
   EVP_ENCODE_CTX_free(ctx_00);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 pkey_test_run(long param_1) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   int iVar5;
   EVP_PKEY_CTX *ctx;
   void *ptr;
   void *pvVar6;
   void *extraout_RDX;
   long in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = pkey_test_run_init();
   if (iVar5 == 0) {
      ctx = (EVP_PKEY_CTX*)0x0;
      ptr = (void*)0x0;
      goto LAB_0010baf2;
   }

   ctx = EVP_PKEY_CTX_dup((EVP_PKEY_CTX*)*puVar1);
   iVar5 = test_ptr("test/evp_test.c", 0xa8b, "copy = EVP_PKEY_CTX_dup(expected->ctx)", ctx);
   if (iVar5 == 0) {
      ptr = (void*)0x0;
      *(char**)( param_1 + 0x9a8 ) = "INTERNAL_ERROR";
      goto LAB_0010baf2;
   }

   iVar5 = ( *(code*)puVar1[4] )(*puVar1, 0, &local_48, puVar1[5], puVar1[6]);
   if (iVar5 < 1) {
      LAB_0010bd78:ptr = (void*)0x0;
   }
 else {
      ptr = CRYPTO_malloc((int)local_48, "test/evp_test.c", 0xa92);
      iVar5 = test_ptr("test/evp_test.c", 0xa92, "got = OPENSSL_malloc(got_len)", ptr);
      if (iVar5 != 0) {
         iVar5 = ( *(code*)puVar1[4] )(*puVar1, ptr, &local_48, puVar1[5], puVar1[6]);
         uVar4 = local_48;
         if (iVar5 < 1) {
            LAB_0010bdb0:*(char**)( param_1 + 0x9a8 ) = "KEYOP_ERROR";
            goto LAB_0010baf2;
         }

         uVar2 = puVar1[8];
         uVar3 = puVar1[7];
         if (( *(char**)( param_1 + 0x9b8 ) == (char*)0x0 ) || ( iVar5 = iVar5 != 0 )) {
            iVar5 = test_mem_eq("test/evp_test.c", 0x14f, "expected", &_LC31, uVar3, uVar2, ptr, uVar4);
            if (iVar5 != 0) goto LAB_0010bc70;
         }
 else {
            iVar5 = test_mem_ne("test/evp_test.c", 0x14d, "expected", &_LC31, uVar3, uVar2, ptr, uVar4);
            if (iVar5 == 0) {
               LAB_0010bc70:*(undefined8*)( param_1 + 0x9a8 ) = 0;
               CRYPTO_free(ptr);
               iVar5 = ( *(code*)puVar1[4] )(ctx, 0, &local_48, puVar1[5], puVar1[6]);
               if (iVar5 < 1) goto LAB_0010bd78;
               ptr = CRYPTO_malloc((int)local_48, "test/evp_test.c", 0xaa8);
               iVar5 = test_ptr("test/evp_test.c", 0xaa8, "got = OPENSSL_malloc(got_len)", ptr);
               if (iVar5 == 0) goto LAB_0010bd7b;
               iVar5 = ( *(code*)puVar1[4] )(ctx, ptr, &local_48, puVar1[5], puVar1[6]);
               if (iVar5 < 1) goto LAB_0010bdb0;
               uVar4 = puVar1[8];
               uVar2 = puVar1[7];
               if (( *(char**)( param_1 + 0x9b8 ) == (char*)0x0 ) || ( iVar5 = iVar5 != 0 )) {
                  pvVar6 = ptr;
                  iVar5 = test_mem_eq("test/evp_test.c", 0x14f, "expected", &_LC31);
                  if (iVar5 != 0) goto LAB_0010bd60;
               }
 else {
                  iVar5 = test_mem_ne("test/evp_test.c", 0x14d, "expected", &_LC31, uVar2, uVar4, ptr, local_48);
                  pvVar6 = extraout_RDX;
                  if (iVar5 == 0) {
                     LAB_0010bd60:pkey_check_fips_approved(*puVar1, param_1, pvVar6);
                     goto LAB_0010baf2;
                  }

               }

            }

         }

         *(char**)( param_1 + 0x9a8 ) = "KEYOP_MISMATCH";
         goto LAB_0010baf2;
      }

   }

   LAB_0010bd7b:*(char**)( param_1 + 0x9a8 ) = "KEYOP_LENGTH_ERROR";
   LAB_0010baf2:CRYPTO_free(ptr);
   EVP_PKEY_CTX_free(ctx);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 1;
}
undefined8 digest_test_run(long param_1) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   long lVar4;
   bool bVar5;
   uint uVar6;
   int iVar7;
   int iVar8;
   EVP_MD_CTX *ctx;
   uchar *md;
   undefined8 *puVar9;
   EVP_MD_CTX *out;
   undefined8 uVar10;
   ulong uVar11;
   undefined8 uVar12;
   undefined8 *puVar13;
   long in_FS_OFFSET;
   undefined8 *local_148;
   undefined8 local_128;
   undefined8 uStack_120;
   undefined8 local_118;
   undefined8 uStack_110;
   undefined8 local_108;
   uint local_f4;
   undefined8 local_f0;
   undefined8 local_e8[5];
   undefined8 local_c0[15];
   undefined4 local_46;
   undefined2 local_42;
   long local_40;
   md = (uchar*)0x0;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_f0 = 0;
   *(char**)( param_1 + 0x9a8 ) = "TEST_FAILURE";
   ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
   iVar7 = test_ptr("test/evp_test.c", 0x2ff, "mctx = EVP_MD_CTX_new()", ctx);
   if (iVar7 == 0) goto LAB_0010bed6;
   uVar11 = puVar1[4];
   if (uVar11 < 0x40) {
      uVar11 = 0x40;
   }

   md = (uchar*)CRYPTO_malloc((int)uVar11, "test/evp_test.c", 0x302);
   iVar7 = test_ptr("test/evp_test.c", 0x304, &_LC31, md);
   if (iVar7 == 0) goto LAB_0010bed6;
   bVar5 = 0 < *(int*)( (long)puVar1 + 0x2c );
   if (bVar5) {
      puVar9 = local_c0;
      OSSL_PARAM_construct_size_t(&local_128, "xoflen", puVar1 + 4);
      lVar4 = puVar1[6];
   }
 else {
      puVar9 = local_e8;
      lVar4 = puVar1[6];
   }

   puVar13 = puVar9;
   if (lVar4 != 0) {
      puVar13 = puVar9 + 5;
      OSSL_PARAM_construct_size_t(&local_128, &_LC355, puVar1 + 6);
      *puVar9 = local_128;
      puVar9[1] = uStack_120;
      puVar9[2] = local_118;
      puVar9[3] = uStack_110;
      puVar9[4] = local_108;
   }

   local_148 = local_e8;
   puVar9 = puVar13;
   if (0 < *(int*)( puVar1 + 5 )) {
      puVar9 = puVar13 + 5;
      OSSL_PARAM_construct_int(&local_128, "pad-type", puVar1 + 5);
      *puVar13 = local_128;
      puVar13[1] = uStack_120;
      puVar13[2] = local_118;
      puVar13[3] = uStack_110;
      puVar13[4] = local_108;
   }

   OSSL_PARAM_construct_end(&local_128);
   uVar2 = *puVar1;
   *puVar9 = local_128;
   puVar9[1] = uStack_120;
   puVar9[2] = local_118;
   puVar9[3] = uStack_110;
   puVar9[4] = local_108;
   iVar7 = EVP_DigestInit_ex2(ctx, uVar2, local_148);
   if (iVar7 == 0) {
      *(char**)( param_1 + 0x9a8 ) = "DIGESTINIT_ERROR";
      goto LAB_0010bed6;
   }

   uVar2 = puVar1[2];
   for (iVar7 = 0; iVar8 = OPENSSL_sk_num(uVar2),iVar7 < iVar8; iVar7 = iVar7 + 1) {
      puVar9 = (undefined8*)OPENSSL_sk_value(uVar2, iVar7);
      if (puVar9[2] != 0) {
         uVar11 = 0;
         do {
            iVar8 = EVP_DigestUpdate(ctx, (void*)*puVar9, puVar9[1]);
            if (iVar8 < 1) {
               *(char**)( param_1 + 0x9a8 ) = "DIGESTUPDATE_ERROR";
               goto LAB_0010bed6;
            }

            uVar11 = uVar11 + 1;
         }
 while ( uVar11 < (ulong)puVar9[2] );
      }

   }

   iVar7 = EVP_MD_xof(*puVar1);
   if (bVar5 || iVar7 != 0) {
      out = (EVP_MD_CTX*)EVP_MD_CTX_new();
      iVar8 = test_ptr("test/evp_test.c", 0x323, "mctx_cpy = EVP_MD_CTX_new()", out);
      if (iVar8 == 0) goto LAB_0010bed6;
      iVar8 = EVP_MD_CTX_copy(out, ctx);
      iVar8 = test_true("test/evp_test.c", 0x326, "EVP_MD_CTX_copy(mctx_cpy, mctx)", iVar8 != 0);
      if (iVar8 == 0) {
         EVP_MD_CTX_free(out);
         goto LAB_0010bed6;
      }

      local_46 = 0x63756f74;
      local_42 = 0x68;
      iVar8 = test_ptr("test/evp_test.c", 0x2e3, &_LC360, out);
      if (iVar8 == 0) goto LAB_0010bed6;
      iVar8 = EVP_DigestFinalXOF(out, &local_46, 0);
      if (( iVar8 == 0 ) || ( iVar8 = test_str_eq("test/evp_test.c", 0x2ea, &_LC364, "\"touch\"", &local_46, "touch") ),iVar8 == 0) {
         LAB_0010c564:EVP_MD_CTX_free(out);
      }
 else {
         EVP_MD_CTX_free(out);
         out = (EVP_MD_CTX*)EVP_MD_CTX_dup(ctx);
         local_42 = 0x68;
         local_46 = 0x63756f74;
         iVar8 = test_ptr("test/evp_test.c", 0x2e3, &_LC360, out);
         if (iVar8 == 0) goto LAB_0010bed6;
         iVar8 = EVP_DigestFinalXOF(out, &local_46, 0);
         if (( iVar8 == 0 ) || ( iVar8 = test_str_eq("test/evp_test.c", 0x2ea, &_LC364, "\"touch\"", &local_46, "touch") ),iVar8 == 0) goto LAB_0010c564;
         EVP_MD_CTX_free(out);
         local_f4 = (uint)puVar1[4];
         iVar8 = EVP_DigestFinalXOF(ctx, md, puVar1[4] & 0xffffffff);
         if (iVar8 != 0) goto LAB_0010c330;
      }

      *(char**)( param_1 + 0x9a8 ) = "DIGESTFINALXOF_ERROR";
      goto LAB_0010bed6;
   }

   iVar8 = EVP_DigestFinal(ctx, md, &local_f4);
   if (iVar8 == 0) {
      *(char**)( param_1 + 0x9a8 ) = "DIGESTFINAL_ERROR";
      goto LAB_0010bed6;
   }

   LAB_0010c330:iVar8 = test_int_eq("test/evp_test.c", 0x33b, "expected->output_len", "got_len", *(undefined4*)( puVar1 + 4 ), local_f4);
   uVar6 = local_f4;
   if (iVar8 == 0) {
      *(char**)( param_1 + 0x9a8 ) = "DIGEST_LENGTH_MISMATCH";
      goto LAB_0010bed6;
   }

   uVar2 = puVar1[4];
   uVar12 = puVar1[3];
   if (( *(char**)( param_1 + 0x9b8 ) == (char*)0x0 ) || ( iVar8 = iVar8 != 0 )) {
      iVar8 = test_mem_eq("test/evp_test.c", 0x14f, "expected", &_LC31, uVar12, uVar2, md, uVar6);
      if (iVar8 == 0) goto LAB_0010c548;
   }
 else {
      iVar8 = test_mem_ne("test/evp_test.c", 0x14d, "expected", &_LC31, uVar12, uVar2, md, uVar6);
      if (iVar8 != 0) {
         LAB_0010c548:*(char**)( param_1 + 0x9a8 ) = "DIGEST_MISMATCH";
         goto LAB_0010bed6;
      }

   }

   *(undefined8*)( param_1 + 0x9a8 ) = 0;
   iVar8 = OPENSSL_sk_num(puVar1[2]);
   if (( iVar8 == 1 ) && ( !bVar5 && iVar7 == 0 )) {
      puVar9 = (undefined8*)OPENSSL_sk_value(puVar1[2], 0);
      iVar7 = test_ptr("test/evp_test.c", 0x34a, "inbuf = sk_EVP_TEST_BUFFER_value(expected->input, 0)", puVar9);
      if (( iVar7 == 0 ) && ( *(int*)( puVar9 + 3 ) == 0 )) {
         OPENSSL_cleanse(md, (ulong)local_f4);
         uVar2 = puVar9[1];
         uVar12 = puVar1[1];
         uVar3 = *puVar9;
         uVar10 = EVP_MD_get0_name();
         iVar7 = EVP_Q_digest(libctx, uVar10, 0, uVar3, uVar2, md, &local_f0, uVar12);
         iVar7 = test_true("test/evp_test.c", 0x34d, "EVP_Q_digest(libctx, EVP_MD_get0_name(expected->fetched_digest), NULL, inbuf->buf, inbuf->buflen, got, &size)", iVar7 != 0);
         if (( iVar7 == 0 ) || ( iVar7 = test_mem_eq("test/evp_test.c", 0x351, &_LC31, "expected->output", md, local_f0, puVar1[3], puVar1[4]) ),iVar7 == 0) {
            *(char**)( param_1 + 0x9a8 ) = "EVP_Q_digest failed";
         }

      }

   }

   LAB_0010bed6:CRYPTO_free(md);
   EVP_MD_CTX_free(ctx);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 digestsign_test_run(long param_1) {
   long lVar1;
   undefined8 uVar2;
   size_t sVar3;
   int iVar4;
   int iVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   uchar *sigret;
   char *pcVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   size_t local_a0;
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
   lVar1 = *(long*)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = signverify_init();
   if (iVar4 != 0) {
      if (*(int*)( lVar1 + 0x48 ) == 1) {
         local_a0 = CONCAT44(local_a0._4_4_, 1);
         OSSL_PARAM_construct_uint(&local_d8, "nonce-type", &local_a0);
         local_78 = local_b8;
         local_98 = local_d8;
         uStack_90 = uStack_d0;
         local_88 = local_c8;
         uStack_80 = uStack_c0;
         OSSL_PARAM_construct_end(&local_d8);
         local_70 = local_d8;
         uStack_68 = uStack_d0;
         local_50 = local_b8;
         local_60 = local_c8;
         uStack_58 = uStack_c0;
         iVar4 = EVP_PKEY_CTX_set_params(*(undefined8*)( lVar1 + 0x18 ), &local_98);
         if (iVar4 == 0) {
            *(char**)( param_1 + 0x9a8 ) = "EVP_PKEY_CTX_set_params_ERROR";
         }
 else {
            iVar4 = EVP_PKEY_CTX_get_params(*(undefined8*)( lVar1 + 0x18 ));
            if (iVar4 == 0) {
               *(char**)( param_1 + 0x9a8 ) = "EVP_PKEY_CTX_get_params_ERROR";
            }
 else {
               iVar4 = OSSL_PARAM_modified(&local_98);
               if (iVar4 == 0) {
                  *(char**)( param_1 + 0x9a8 ) = "nonce_type_not_modified_ERROR";
               }
 else {
                  if ((int)local_a0 == 1) goto LAB_0010c622;
                  *(char**)( param_1 + 0x9a8 ) = "nonce_type_value_ERROR";
               }

            }

         }

      }
 else {
         LAB_0010c622:if (*(long*)( param_1 + 0x9a8 ) == 0) {
            for (iVar4 = 0; iVar5 = OPENSSL_sk_num(*(undefined8*)( lVar1 + 0x60 )),iVar4 < iVar5; iVar4 = iVar4 + 1) {
               uVar6 = OPENSSL_sk_value(*(undefined8*)( lVar1 + 0x60 ), iVar4);
               uVar6 = pkey_test_ctrl(param_1, *(undefined8*)( lVar1 + 0x18 ), uVar6);
               if ((int)uVar6 == 0) goto LAB_0010c5ec;
               if (*(long*)( param_1 + 0x9a8 ) != 0) {
                  uVar6 = 0;
                  goto LAB_0010c5ec;
               }

            }

            uVar6 = *(undefined8*)( lVar1 + 0x20 );
            uVar2 = *(undefined8*)( lVar1 + 0x10 );
            for (iVar4 = 0; iVar5 = OPENSSL_sk_num(uVar6),iVar4 < iVar5; iVar4 = iVar4 + 1) {
               uVar9 = 0;
               puVar7 = (undefined8*)OPENSSL_sk_value(uVar6);
               if (puVar7[2] != 0) {
                  do {
                     iVar5 = EVP_DigestSignUpdate(uVar2, *puVar7, puVar7[1]);
                     if (iVar5 < 1) {
                        *(char**)( param_1 + 0x9a8 ) = "DIGESTUPDATE_ERROR";
                        goto LAB_0010c5ce;
                     }

                     uVar9 = uVar9 + 1;
                  }
 while ( uVar9 < (ulong)puVar7[2] );
               }

            }

            iVar4 = EVP_DigestSignFinal(*(EVP_MD_CTX**)( lVar1 + 0x10 ), (uchar*)0x0, &local_a0);
            if (iVar4 != 0) {
               sigret = (uchar*)CRYPTO_malloc((int)local_a0, "test/evp_test.c", 0x1258);
               iVar4 = test_ptr("test/evp_test.c", 0x1258, "got = OPENSSL_malloc(got_len)", sigret);
               if (iVar4 == 0) {
                  pcVar8 = "MALLOC_FAILURE";
               }
 else {
                  local_a0 = local_a0 << 1;
                  iVar4 = EVP_DigestSignFinal(*(EVP_MD_CTX**)( lVar1 + 0x10 ), sigret, &local_a0);
                  sVar3 = local_a0;
                  if (iVar4 == 0) {
                     pcVar8 = "DIGESTSIGNFINAL_ERROR";
                  }
 else {
                     uVar6 = *(undefined8*)( lVar1 + 0x40 );
                     uVar2 = *(undefined8*)( lVar1 + 0x38 );
                     pcVar8 = (char*)0x0;
                     if (( *(char**)( param_1 + 0x9b8 ) == (char*)0x0 ) || ( iVar4 = iVar4 != 0 )) {
                        iVar4 = test_mem_eq("test/evp_test.c", 0x14f, "expected", &_LC31, uVar2, uVar6, sigret, sVar3);
                        if (iVar4 == 0) goto LAB_0010c8ec;
                     }
 else {
                        iVar4 = test_mem_ne("test/evp_test.c", 0x14d, "expected", &_LC31, uVar2, uVar6, sigret, sVar3);
                        if (iVar4 != 0) {
                           LAB_0010c8ec:pcVar8 = "SIGNATURE_MISMATCH";
                        }

                     }

                  }

               }

               *(char**)( param_1 + 0x9a8 ) = pcVar8;
               goto LAB_0010c5d7;
            }

            *(char**)( param_1 + 0x9a8 ) = "DIGESTSIGNFINAL_LENGTH_ERROR";
         }

      }

   }

   LAB_0010c5ce:sigret = (uchar*)0x0;
   LAB_0010c5d7:CRYPTO_free(sigret);
   uVar6 = 1;
   LAB_0010c5ec:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
undefined8 mac_test_run_mac(long param_1) {
   undefined8 *puVar1;
   undefined8 uVar2;
   size_t sVar3;
   int iVar4;
   int iVar5;
   undefined8 uVar6;
   long lVar7;
   char *pcVar8;
   long lVar9;
   undefined8 *puVar10;
   long lVar11;
   ulong uVar12;
   ulong uVar13;
   ulong uVar14;
   undefined8 *puVar15;
   long in_FS_OFFSET;
   undefined8 *local_4e0;
   undefined8 local_4b8;
   undefined8 uStack_4b0;
   undefined8 local_4a8;
   undefined8 uStack_4a0;
   undefined8 local_498;
   undefined4 local_484;
   undefined4 local_480;
   int local_47c;
   size_t local_478;
   undefined8 local_470;
   long local_468;
   ulong local_460;
   undefined1 local_458[16];
   undefined1 local_448[16];
   undefined1 local_438[16];
   undefined1 local_428[16];
   undefined1 local_418[16];
   undefined8 local_408;
   undefined8 uStack_400;
   undefined8 local_3f8;
   undefined8 uStack_3f0;
   undefined8 local_3e8;
   undefined8 local_3e0[11];
   undefined8 local_388[105];
   long local_40;
   puVar1 = *(undefined8**)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_484 = 0xffffffff;
   local_478 = 0;
   local_470 = 0;
   local_468 = 0;
   local_480 = 0xffffffff;
   local_460 = 0;
   uVar6 = EVP_MAC_settable_ctx_params(puVar1[1]);
   if (puVar1[3] == 0) {
      test_info("test/evp_test.c", 0x759, "Trying the EVP_MAC %s test", *puVar1);
   }
 else {
      test_info("test/evp_test.c", 0x75b, "Trying the EVP_MAC %s test with %s", *puVar1);
   }

   if (puVar1[3] == 0) {
      uVar14 = 1;
      uVar13 = 0;
   }
 else {
      lVar7 = OSSL_PARAM_locate_const(uVar6, "cipher");
      if (lVar7 == 0) {
         lVar7 = OSSL_PARAM_locate_const(uVar6, "digest");
         if (lVar7 == 0) {
            pcVar8 = "MAC_BAD_PARAMS";
            goto LAB_0010cf95;
         }

         iVar4 = OPENSSL_strcasecmp(puVar1[3], &_LC26);
         if (iVar4 == 0) goto LAB_0010cf68;
         local_460 = 1;
         OSSL_PARAM_construct_utf8_string(&local_4b8, "digest", puVar1[3], 0);
      }
 else {
         iVar4 = OPENSSL_strncasecmp(puVar1[3], &_LC27, 3);
         if (iVar4 == 0) {
            LAB_0010cf68:test_info("test/evp_test.c", 0x77b, "skipping, algorithm \'%s\' is disabled", puVar1[3]);
            *(undefined4*)( param_1 + 0x998 ) = 1;
            pcVar8 = (char*)0x0;
            LAB_0010cf95:lVar7 = 0;
            local_4e0 = (undefined8*)0x0;
            *(char**)( param_1 + 0x9a8 ) = pcVar8;
            goto LAB_0010cd01;
         }

         local_460 = 1;
         OSSL_PARAM_construct_utf8_string(&local_4b8, "cipher", puVar1[3], 0);
      }

      uVar14 = 2;
      uVar13 = 1;
   }

   if (puVar1[0xc] != 0) {
      local_460 = uVar14;
      OSSL_PARAM_construct_octet_string(&local_4b8, "custom", puVar1[0xc], puVar1[0xd]);
      local_388[uVar13 * 5] = local_4b8;
      local_388[uVar13 * 5 + 1] = uStack_4b0;
      local_388[uVar13 * 5 + 2] = local_4a8;
      local_388[uVar13 * 5 + 3] = uStack_4a0;
      local_388[uVar13 * 5 + 4] = local_498;
      uVar13 = uVar14;
   }

   uVar14 = uVar13;
   if (puVar1[0xe] != 0) {
      uVar14 = uVar13 + 1;
      local_460 = uVar14;
      OSSL_PARAM_construct_octet_string(&local_4b8, &_LC389, puVar1[0xe], puVar1[0xf]);
      local_388[uVar13 * 5] = local_4b8;
      local_388[uVar13 * 5 + 1] = uStack_4b0;
      local_388[uVar13 * 5 + 2] = local_4a8;
      local_388[uVar13 * 5 + 3] = uStack_4a0;
      local_388[uVar13 * 5 + 4] = local_498;
   }

   uVar13 = uVar14;
   if (puVar1[6] != 0) {
      uVar13 = uVar14 + 1;
      local_460 = uVar13;
      OSSL_PARAM_construct_octet_string(&local_4b8, &_LC126, puVar1[6], puVar1[7]);
      local_388[uVar14 * 5] = local_4b8;
      local_388[uVar14 * 5 + 1] = uStack_4b0;
      local_388[uVar14 * 5 + 2] = local_4a8;
      local_388[uVar14 * 5 + 3] = uStack_4a0;
      local_388[uVar14 * 5 + 4] = local_498;
   }

   iVar4 = ctrl2params(param_1, puVar1[0x11], uVar6, local_388, 0x15, &local_460);
   if (( iVar4 != 0 ) && ( ( lVar7 = OSSL_PARAM_locate(local_388 + uVar13 * 5, &_LC355) ),lVar7 == 0 || ( iVar4 = OSSL_PARAM_get_size_t(lVar7, &local_468) ),iVar4 != 0 )) {
      lVar7 = EVP_MAC_CTX_new(puVar1[1]);
      if (lVar7 != 0) {
         lVar11 = 0;
         iVar4 = fips_provider_version_gt(libctx, 3, 2, 0);
         if (iVar4 != 0) {
            ERR_set_mark();
            lVar11 = EVP_MAC_CTX_get_mac_size(lVar7);
            ERR_pop_to_mark();
         }

         iVar4 = EVP_MAC_init(lVar7, puVar1[4], puVar1[5], local_388);
         if (iVar4 == 0) {
            pcVar8 = "MAC_INIT_ERROR";
         }
 else {
            lVar9 = EVP_MAC_CTX_get_mac_size(lVar7);
            iVar4 = test_false("test/evp_test.c", 0x7ab, "size_before_init == 0 && size_after_init == 0", lVar11 == 0 && lVar9 == 0);
            if (iVar4 == 0) {
               local_4e0 = (undefined8*)0x0;
               *(char**)( param_1 + 0x9a8 ) = "MAC SIZE not set";
               puVar10 = local_4e0;
               goto LAB_0010ccbc;
            }

            if (lVar11 == 0) {
               LAB_0010cee2:if (*(int*)( puVar1 + 0x12 ) < 0) {
                  if (-1 < *(int*)( (long)puVar1 + 0x94 )) {
                     puVar10 = &local_408;
                     goto LAB_0010d330;
                  }

                  LAB_0010cefe:local_4e0._0_4_ = 2;
                  LAB_0010cf06:uVar14 = puVar1[9];
                  lVar11 = 0;
                  do {
                     if (data_chunk_size == 0) {
                        iVar4 = EVP_MAC_update(lVar7, puVar1[8] + lVar11, uVar14);
                        if (iVar4 == 0) {
                           LAB_0010cf57:pcVar8 = "MAC_UPDATE_ERROR";
                           goto LAB_0010cc81;
                        }

                        break;
                     }

                     uVar12 = (long)data_chunk_size;
                     if (uVar14 < (ulong)(long)data_chunk_size) {
                        uVar12 = uVar14;
                     }

                     iVar4 = EVP_MAC_update(lVar7, puVar1[8] + lVar11, uVar12);
                     if (iVar4 == 0) goto LAB_0010cf57;
                     lVar11 = lVar11 + uVar12;
                     uVar14 = uVar14 - uVar12;
                  }
 while ( uVar14 != 0 );
                  iVar4 = *(int*)( puVar1 + 0x10 );
                  if (iVar4 != 0) {
                     puVar10 = (undefined8*)CRYPTO_malloc((int)puVar1[0xb], "test/evp_test.c", 0x7e4);
                     iVar5 = test_ptr("test/evp_test.c", 0x7e4, "got = OPENSSL_malloc(expected->output_len)", puVar10);
                     if (iVar5 == 0) {
                        LAB_0010d740:*(char**)( param_1 + 0x9a8 ) = "TEST_FAILURE";
                        goto LAB_0010ccbc;
                     }

                     iVar5 = EVP_MAC_finalXOF(lVar7, puVar10, puVar1[0xb]);
                     if (iVar5 == 0) {
                        LAB_0010d1b5:*(char**)( param_1 + 0x9a8 ) = "MAC_FINAL_ERROR";
                        goto LAB_0010ccbc;
                     }

                     uVar6 = puVar1[0xb];
                     uVar2 = puVar1[10];
                     if (( *(char**)( param_1 + 0x9b8 ) == (char*)0x0 ) || ( iVar5 = iVar5 != 0 )) {
                        iVar5 = test_mem_eq("test/evp_test.c", 0x14f, "expected", &_LC31, uVar2, uVar6, puVar10, uVar6);
                        if (iVar5 == 0) goto LAB_0010d1b5;
                     }
 else {
                        iVar5 = test_mem_ne("test/evp_test.c", 0x14d, "expected", &_LC31, uVar2, uVar6, puVar10, uVar6);
                        if (iVar5 != 0) goto LAB_0010d1b5;
                     }

                     LAB_0010d200:if (( (int)local_4e0 == 1 ) || ( iVar5 = iVar5 == 0 )) {
                        LAB_0010d661:*(undefined8*)( param_1 + 0x9a8 ) = 0;
                        if (iVar4 == 0) {
                           OPENSSL_cleanse(puVar10, local_478);
                           lVar11 = EVP_Q_mac(libctx, *puVar1, 0, puVar1[3], local_388, puVar1[4], puVar1[5], puVar1[8], puVar1[9], puVar10, local_478, &local_470);
                           iVar4 = test_true("test/evp_test.c", 0x829, "EVP_Q_mac(libctx, expected->mac_name, NULL, expected->alg, params, expected->key, expected->key_len, expected->input, expected->input_len, got, got_len, &size)", lVar11 != 0);
                           if (( iVar4 == 0 ) || ( iVar4 = test_mem_eq("test/evp_test.c", 0x82e, &_LC31, "expected->output", puVar10, local_470, puVar1[10], puVar1[0xb]) ),iVar4 == 0) {
                              *(char**)( param_1 + 0x9a8 ) = "EVP_Q_mac failed";
                           }

                        }

                        goto LAB_0010ccbc;
                     }

                     local_458 = (undefined1[16])0x0;
                     local_448 = (undefined1[16])0x0;
                     local_438 = (undefined1[16])0x0;
                     local_428 = (undefined1[16])0x0;
                     local_418 = (undefined1[16])0x0;
                     if (puVar1[6] != 0) {
                        OSSL_PARAM_construct_octet_string(&local_4b8, &_LC126, puVar1[6], puVar1[7]);
                        local_438._0_8_ = local_498;
                        local_458._8_8_ = uStack_4b0;
                        local_458._0_8_ = local_4b8;
                        local_448._8_8_ = uStack_4a0;
                        local_448._0_8_ = local_4a8;
                        OSSL_PARAM_construct_end(&local_4b8);
                        local_438._8_8_ = local_4b8;
                        local_428._8_8_ = local_4a8;
                        local_428._0_8_ = uStack_4b0;
                        local_418._8_8_ = local_498;
                        local_418._0_8_ = uStack_4a0;
                     }

                     ERR_set_mark();
                     iVar5 = EVP_MAC_init(lVar7, 0, 0);
                     if (*(int*)( (long)puVar1 + 0x84 ) != 0) {
                        if (iVar5 == 0) {
                           ERR_pop_to_mark();
                           goto LAB_0010d661;
                        }

                        ERR_clear_last_mark();
                        pcVar8 = "MAC_REINIT_SHOULD_FAIL";
                        goto LAB_0010d30f;
                     }

                     if (iVar5 == 0) goto code_r0x0010d2fe;
                     ERR_clear_last_mark();
                     CRYPTO_free(puVar10);
                     local_4e0._0_4_ = 1;
                     goto LAB_0010cf06;
                  }

                  iVar5 = EVP_MAC_final(lVar7, 0, &local_478, 0);
                  if (iVar5 == 0) {
                     local_4e0 = (undefined8*)0x0;
                     *(char**)( param_1 + 0x9a8 ) = "MAC_FINAL_LENGTH_ERROR";
                     puVar10 = local_4e0;
                     goto LAB_0010ccbc;
                  }

                  puVar10 = (undefined8*)CRYPTO_malloc((int)local_478, "test/evp_test.c", 0x7f4);
                  iVar5 = test_ptr("test/evp_test.c", 0x7f4, "got = OPENSSL_malloc(got_len)", puVar10);
                  if (iVar5 == 0) goto LAB_0010d740;
                  iVar5 = EVP_MAC_final(lVar7, puVar10, &local_478, local_478);
                  sVar3 = local_478;
                  if (iVar5 != 0) {
                     uVar6 = puVar1[0xb];
                     uVar2 = puVar1[10];
                     if (( *(char**)( param_1 + 0x9b8 ) == (char*)0x0 ) || ( iVar5 = iVar5 != 0 )) {
                        iVar5 = test_mem_eq("test/evp_test.c", 0x14f, "expected", &_LC31, uVar2, uVar6, puVar10, sVar3);
                        if (iVar5 != 0) goto LAB_0010d47e;
                     }
 else {
                        iVar5 = test_mem_ne("test/evp_test.c", 0x14d, "expected", &_LC31, uVar2, uVar6, puVar10, sVar3);
                        if (iVar5 == 0) {
                           LAB_0010d47e:local_47c = 1;
                           local_458 = (undefined1[16])0x0;
                           local_448 = (undefined1[16])0x0;
                           local_438 = (undefined1[16])0x0;
                           local_428 = (undefined1[16])0x0;
                           local_418 = (undefined1[16])0x0;
                           lVar11 = EVP_MAC_CTX_gettable_params(lVar7);
                           if (lVar11 != 0) {
                              OSSL_PARAM_construct_int(&local_4b8, "fips-indicator", &local_47c);
                              local_458._8_8_ = uStack_4b0;
                              local_458._0_8_ = local_4b8;
                              local_438._0_8_ = local_498;
                              local_448._8_8_ = uStack_4a0;
                              local_448._0_8_ = local_4a8;
                              iVar5 = EVP_MAC_CTX_get_params(lVar7, local_458);
                              if (iVar5 == 0) goto LAB_0010ccbc;
                              if (*(int*)( param_1 + 0x9d0 ) == 0) {
                                 if (( local_47c != 0 ) && ( fips_indicator_callback_unapproved_count < 1 )) goto LAB_0010d200;
                                 test_error("test/evp_test.c", 0x81, "Test is expected to be FIPS approved");
                                 goto LAB_0010ccbc;
                              }

                              if (( local_47c == 1 ) || ( fips_indicator_callback_unapproved_count == 0 )) {
                                 test_error("test/evp_test.c", 0x7c, "Test is not expected to be FIPS approved");
                                 goto LAB_0010ccbc;
                              }

                           }

                           goto LAB_0010d200;
                        }

                     }

                  }

                  *(char**)( param_1 + 0x9a8 ) = "TEST_MAC_ERR";
                  goto LAB_0010ccbc;
               }

               OSSL_PARAM_construct_int(&local_4b8, &_LC355, &local_480);
               local_408 = local_4b8;
               uStack_400 = uStack_4b0;
               local_3e8 = local_498;
               local_3f8 = local_4a8;
               uStack_3f0 = uStack_4a0;
               if (*(int*)( (long)puVar1 + 0x94 ) < 0) {
                  puVar15 = local_3e0;
               }
 else {
                  puVar10 = local_3e0;
                  LAB_0010d330:OSSL_PARAM_construct_int(&local_4b8, "block-size", &local_484);
                  puVar15 = puVar10 + 5;
                  *puVar10 = local_4b8;
                  puVar10[1] = uStack_4b0;
                  puVar10[2] = local_4a8;
                  puVar10[3] = uStack_4a0;
                  puVar10[4] = local_498;
               }

               local_4e0 = &local_4b8;
               OSSL_PARAM_construct_end(local_4e0);
               *puVar15 = local_4b8;
               puVar15[1] = uStack_4b0;
               puVar15[2] = local_4a8;
               puVar15[3] = uStack_4a0;
               puVar15[4] = local_498;
               iVar4 = EVP_MAC_CTX_get_params(lVar7, &local_408);
               iVar4 = test_true("test/evp_test.c", 0x7c3, "EVP_MAC_CTX_get_params(ctx, sizes)", iVar4 != 0);
               if (iVar4 == 0) {
                  pcVar8 = "INTERNAL_ERROR";
               }
 else {
                  if (( ( *(int*)( puVar1 + 0x12 ) < 0 ) || ( iVar4 = test_int_eq("test/evp_test.c", 0x7c8, "output_size", "expected->output_size", local_480) ),iVar4 != 0 )) &&( ( *(int*)( (long)puVar1 + 0x94 ) < 0 || ( iVar4 = test_int_eq("test/evp_test.c", 0x7cd, "block_size", "expected->block_size", local_484) ),iVar4 != 0 ) );
                  pcVar8 = "TEST_FAILURE";
               }

            }
 else {
               if (local_468 == 0) {
                  iVar4 = test_size_t_eq("test/evp_test.c", 0x7b1, "size_before_init", "size_after_init", lVar11, lVar9);
                  if (iVar4 != 0) {
                     if (local_468 == 0) goto LAB_0010cee2;
                     goto LAB_0010ce61;
                  }

               }
 else {
                  LAB_0010ce61:iVar4 = test_size_t_eq("test/evp_test.c", 0x7b6, "size_val", "size_after_init", local_468, lVar9);
                  if (iVar4 != 0) goto LAB_0010cee2;
               }

               pcVar8 = "MAC SIZE check failed";
            }

         }

         LAB_0010cc81:local_4e0 = (undefined8*)0x0;
         *(char**)( param_1 + 0x9a8 ) = pcVar8;
         puVar10 = local_4e0;
         goto LAB_0010ccbc;
      }

      *(char**)( param_1 + 0x9a8 ) = "MAC_CREATE_ERROR";
   }

   local_4e0 = (undefined8*)0x0;
   lVar7 = 0;
   puVar10 = local_4e0;
   goto LAB_0010ccbc;
   code_r0x0010d2fe:ERR_clear_last_mark();
   pcVar8 = "MAC_REINIT_ERROR";
   LAB_0010d30f:*(char**)( param_1 + 0x9a8 ) = pcVar8;
   LAB_0010ccbc:local_4e0 = puVar10;
   uVar14 = local_460;
   if (uVar13 < local_460) {
      do {
         uVar14 = uVar14 - 1;
         CRYPTO_free((void*)local_388[uVar14 * 5 + 2]);
      }
 while ( uVar14 != uVar13 );
   }

   LAB_0010cd01:EVP_MAC_CTX_free(lVar7);
   CRYPTO_free(local_4e0);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 mac_test_run(long param_1) {
   long lVar1;
   undefined8 uVar2;
   EVP_PKEY_CTX *ctx;
   int iVar3;
   int iVar4;
   undefined8 uVar5;
   char *pcVar6;
   char *pcVar7;
   uchar *sigret;
   long lVar8;
   ulong uVar9;
   long lVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   EVP_MD_CTX *local_80;
   EVP_PKEY *local_78;
   undefined8 local_70;
   EVP_PKEY_CTX *local_50;
   size_t local_48;
   long local_40;
   lVar1 = *(long*)( param_1 + 0x9c8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( lVar1 + 8 ) != 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = mac_test_run_mac();
         return uVar5;
      }

      goto LAB_0010dde9;
   }

   local_50 = (EVP_PKEY_CTX*)0x0;
   if (*(int*)( lVar1 + 0x80 ) == 0) {
      lVar8 = *(long*)( lVar1 + 0x18 );
      if (lVar8 == 0) {
         pcVar6 = OBJ_nid2sn(*(int*)( lVar1 + 0x10 ));
         test_info("test/evp_test.c", 0x6e0, "Trying the EVP_PKEY %s test", pcVar6);
      }
 else {
         pcVar6 = OBJ_nid2sn(*(int*)( lVar1 + 0x10 ));
         test_info("test/evp_test.c", 0x6e2, "Trying the EVP_PKEY %s test with %s", pcVar6, lVar8);
      }

      sigret = (uchar*)0x0;
      if (*(int*)( lVar1 + 0x10 ) == 0x37e) {
         lVar8 = *(long*)( lVar1 + 0x18 );
         if (lVar8 == 0) {
            LAB_0010d898:local_70 = EVP_CIPHER_fetch(libctx, lVar8, propquery);
            iVar3 = test_ptr("test/evp_test.c", 0x6f4, "cipher = EVP_CIPHER_fetch(libctx, expected->alg, propquery)", local_70);
            if (iVar3 != 0) {
               uVar5 = OSSL_LIB_CTX_set0_default(libctx);
               local_78 = (EVP_PKEY*)EVP_PKEY_new_CMAC_key(0, *(undefined8*)( lVar1 + 0x20 ), *(undefined8*)( lVar1 + 0x28 ), local_70);
               OSSL_LIB_CTX_set0_default(uVar5);
               goto LAB_0010d902;
            }

            local_78 = (EVP_PKEY*)0x0;
            pcVar6 = "MAC_KEY_CREATE_ERROR";
            local_80 = (EVP_MD_CTX*)0x0;
         }
 else {
            iVar3 = OPENSSL_strncasecmp(lVar8, &_LC27, 3);
            if (iVar3 != 0) {
               lVar8 = *(long*)( lVar1 + 0x18 );
               goto LAB_0010d898;
            }

            test_info("test/evp_test.c", 0x6ef, "skipping, PKEY CMAC \'%s\' is disabled", *(undefined8*)( lVar1 + 0x18 ));
            pcVar6 = (char*)0x0;
            *(undefined4*)( param_1 + 0x998 ) = 1;
            local_70 = 0;
            local_78 = (EVP_PKEY*)0x0;
            local_80 = (EVP_MD_CTX*)0x0;
         }

      }
 else {
         uVar5 = *(undefined8*)( lVar1 + 0x28 );
         uVar2 = *(undefined8*)( lVar1 + 0x20 );
         pcVar6 = OBJ_nid2sn(*(int*)( lVar1 + 0x10 ));
         local_78 = (EVP_PKEY*)EVP_PKEY_new_raw_private_key_ex(libctx, pcVar6, 0, uVar2, uVar5);
         local_70 = 0;
         LAB_0010d902:if (local_78 == (EVP_PKEY*)0x0) {
            local_80 = (EVP_MD_CTX*)0x0;
            sigret = (uchar*)0x0;
            pcVar6 = "MAC_KEY_CREATE_ERROR";
         }
 else {
            if (*(int*)( lVar1 + 0x10 ) == 0x357) {
               lVar8 = *(long*)( lVar1 + 0x18 );
               if (lVar8 != 0) {
                  iVar3 = OPENSSL_strcasecmp(lVar8, &_LC26);
                  if (iVar3 == 0) {
                     test_info("test/evp_test.c", 0x709, "skipping, HMAC \'%s\' is disabled", *(undefined8*)( lVar1 + 0x18 ));
                     pcVar6 = (char*)0x0;
                     *(undefined4*)( param_1 + 0x998 ) = 1;
                     local_80 = (EVP_MD_CTX*)0x0;
                     goto LAB_0010d9b0;
                  }

                  lVar8 = *(long*)( lVar1 + 0x18 );
               }

            }
 else {
               lVar8 = 0;
            }

            local_80 = (EVP_MD_CTX*)EVP_MD_CTX_new();
            iVar3 = test_ptr("test/evp_test.c", 0x710, "mctx = EVP_MD_CTX_new()", local_80);
            pcVar6 = "INTERNAL_ERROR";
            if (iVar3 != 0) {
               iVar4 = EVP_DigestSignInit_ex(local_80, &local_50, lVar8, libctx, 0, local_78, 0);
               pcVar6 = "DIGESTSIGNINIT_ERROR";
               iVar3 = 0;
               if (iVar4 != 0) {
                  for (; iVar4 = OPENSSL_sk_num(*(undefined8*)( lVar1 + 0x88 )),iVar3 < iVar4; iVar3 = iVar3 + 1) {
                     pcVar6 = (char*)OPENSSL_sk_value(*(undefined8*)( lVar1 + 0x88 ), iVar3);
                     ctx = local_50;
                     pcVar6 = CRYPTO_strdup(pcVar6, "test/evp_test.c", 0x6bd);
                     iVar4 = test_ptr("test/evp_test.c", 0x6bd, "tmpval = OPENSSL_strdup(value)");
                     if (iVar4 == 0) {
                        LAB_0010db2e:pcVar6 = "EVPPKEYCTXCTRL_ERROR";
                        goto LAB_0010d9b0;
                     }

                     pcVar7 = strchr(pcVar6, 0x3a);
                     if (pcVar7 == (char*)0x0) {
                        LAB_0010db10:pcVar7 = "PKEY_CTRL_ERROR";
                        LAB_0010db17:*(char**)( param_1 + 0x9a8 ) = pcVar7;
                        CRYPTO_free(pcVar6);
                        goto LAB_0010db2e;
                     }

                     *pcVar7 = '\0';
                     iVar4 = EVP_PKEY_CTX_ctrl_str(ctx, pcVar6, pcVar7 + 1);
                     if (iVar4 == -2) {
                        pcVar7 = "PKEY_CTRL_INVALID";
                        goto LAB_0010db17;
                     }

                     if (iVar4 < 1) goto LAB_0010db10;
                     CRYPTO_free(pcVar6);
                  }

                  uVar11 = *(ulong*)( lVar1 + 0x48 );
                  lVar8 = 0;
                  do {
                     lVar10 = lVar8 + *(long*)( lVar1 + 0x40 );
                     if (data_chunk_size == 0) {
                        iVar3 = EVP_DigestSignUpdate(local_80, lVar10, uVar11);
                        if (iVar3 == 0) {
                           LAB_0010dc7d:pcVar6 = "DIGESTSIGNUPDATE_ERROR";
                           goto LAB_0010d9b0;
                        }

                        break;
                     }

                     uVar9 = (long)data_chunk_size;
                     if (uVar11 < (ulong)(long)data_chunk_size) {
                        uVar9 = uVar11;
                     }

                     iVar3 = EVP_DigestSignUpdate(local_80, lVar10, uVar9);
                     if (iVar3 == 0) goto LAB_0010dc7d;
                     lVar8 = lVar8 + uVar9;
                     uVar11 = uVar11 - uVar9;
                  }
 while ( uVar11 != 0 );
                  iVar3 = EVP_DigestSignFinal(local_80, (uchar*)0x0, &local_48);
                  pcVar6 = "DIGESTSIGNFINAL_LENGTH_ERROR";
                  if (iVar3 != 0) {
                     sigret = (uchar*)CRYPTO_malloc((int)local_48, "test/evp_test.c", 0x732);
                     iVar3 = test_ptr("test/evp_test.c", 0x732, "got = OPENSSL_malloc(got_len)", sigret);
                     pcVar6 = "TEST_FAILURE";
                     if (iVar3 != 0) {
                        iVar3 = EVP_DigestSignFinal(local_80, sigret, &local_48);
                        if (iVar3 == 0) {
                           LAB_0010ddda:pcVar6 = "TEST_MAC_ERR";
                        }
 else {
                           uVar5 = *(undefined8*)( lVar1 + 0x58 );
                           uVar2 = *(undefined8*)( lVar1 + 0x50 );
                           if (( *(char**)( param_1 + 0x9b8 ) == (char*)0x0 ) || ( iVar3 = iVar3 != 0 )) {
                              iVar3 = test_mem_eq("test/evp_test.c", 0x14f, "expected", &_LC31, uVar2, uVar5, sigret, local_48);
                              if (iVar3 == 0) goto LAB_0010ddda;
                           }
 else {
                              iVar3 = test_mem_ne("test/evp_test.c", 0x14d, "expected", &_LC31, uVar2, uVar5, sigret, local_48);
                              if (iVar3 != 0) goto LAB_0010ddda;
                           }

                           pcVar6 = (char*)0x0;
                        }

                     }

                  }

               }

            }

         }

      }

      LAB_0010d9b0:*(char**)( param_1 + 0x9a8 ) = pcVar6;
      EVP_CIPHER_free(local_70);
      EVP_MD_CTX_free(local_80);
      CRYPTO_free(sigret);
      EVP_PKEY_CTX_free((EVP_PKEY_CTX*)0x0);
      EVP_PKEY_free(local_78);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010dde9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
undefined1 *test_get_options(void) {
   return test_options_3;
}
undefined8 setup_tests(void) {
   int iVar1;
   char *pcVar2;
   undefined8 uVar3;
   ulong uVar4;
   char *pcVar5;
   long lVar6;
   pcVar2 = getenv("EVP_TEST_EXTENDED");
   pcVar5 = (char*)0x0;
   lVar6 = 0;
   extended_tests = ( uint )(pcVar2 != (char*)0x0);
   LAB_0010de40:iVar1 = opt_next();
   joined_r0x0010de47:if (iVar1 == 0) {
      pcVar2 = "default";
      if (lVar6 != 0 || pcVar5 != (char*)0x0) {
         pcVar2 = pcVar5;
      }

      iVar1 = test_get_libctx(&libctx, &prov_null, lVar6, &libprov, pcVar2);
      if (iVar1 == 0) {
         return 0;
      }

      uVar4 = test_get_argument_count();
      if (uVar4 == 0) {
         return 0;
      }

      add_all_tests("run_file_tests", run_file_tests, uVar4 & 0xffffffff, 1);
      return 1;
   }

   if (5 < iVar1) {
      if (5 < iVar1 - 500U) {
         return 0;
      }

      goto LAB_0010de40;
   }

   if (iVar1 < 1) {
      return 0;
   }

   switch (iVar1) {
      default:
    lVar6 = opt_arg();
    break;
      case 2:
    pcVar2 = (char *)opt_arg();
    iVar1 = strcmp(pcVar2,"in_place");
    if (iVar1 == 0) {
      process_mode_in_place = 1;
      break;
    }
    iVar1 = strcmp(pcVar2,"both");
    if (iVar1 == 0) {
      process_mode_in_place = 0;
      break;
    }
    process_mode_in_place = 0xffffffff;
      case 5:
    uVar3 = opt_arg();
    iVar1 = opt_int(uVar3,&data_chunk_size);
    if (iVar1 == 0) {
      return 0;
    }
    break;
      case 3:
    pcVar5 = (char *)opt_arg();
    break;
      case 4:
    goto switchD_0010de6c_caseD_4;
   }

   goto LAB_0010de40;
   switchD_0010de6c_caseD_4:propquery = opt_arg();
   iVar1 = opt_next();
   goto joined_r0x0010de47;
}
void cleanup_tests(void) {
   OSSL_PROVIDER_unload(libprov);
   OSSL_PROVIDER_unload(prov_null);
   OSSL_LIB_CTX_free(libctx);
   return;
}


undefined8 OSSL_CMP_CTX_get0_trustedStore(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0xa8 );
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x26, "OSSL_CMP_CTX_get0_trustedStore");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_set0_trustedStore(long param_1, undefined8 param_2) {
   if (param_1 != 0) {
      X509_STORE_free(*(X509_STORE**)( param_1 + 0xa8 ));
      *(undefined8*)( param_1 + 0xa8 ) = param_2;
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x3b, "OSSL_CMP_CTX_set0_trustedStore");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_get0_libctx(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      return *param_1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x3d, "OSSL_CMP_CTX_get0_libctx");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_get0_propq(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 8 );
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x3e, "OSSL_CMP_CTX_get0_propq");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_get0_untrusted(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0xb0 );
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x41, "OSSL_CMP_CTX_get0_untrusted");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_set1_untrusted(long param_1, undefined8 param_2) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = 0;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x4c, "OSSL_CMP_CTX_set1_untrusted");
      ERR_set_error(0x3a, 0x67, 0);
      uVar2 = 0;
   }
 else {
      iVar1 = ossl_x509_add_certs_new(&local_18, param_2, 5);
      if (iVar1 == 0) {
         OSSL_STACK_OF_X509_free(local_18);
         uVar2 = 0;
      }
 else {
         OSSL_STACK_OF_X509_free(*(undefined8*)( param_1 + 0xb0 ));
         *(undefined8*)( param_1 + 0xb0 ) = local_18;
         uVar2 = 1;
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_cmp_ctx_set_status(long param_1, undefined4 param_2) {
   if (param_1 != 0) {
      *(undefined4*)( param_1 + 0x1d0 ) = param_2;
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x10a, "ossl_cmp_ctx_set_status");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined4 OSSL_CMP_CTX_get_status(long param_1) {
   if (param_1 != 0) {
      return *(undefined4*)( param_1 + 0x1d0 );
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x11a, "OSSL_CMP_CTX_get_status");
   ERR_set_error(0x3a, 0x67, 0);
   return 0xffffffff;
}
undefined8 OSSL_CMP_CTX_get0_statusString(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0x1d8 );
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x120, "OSSL_CMP_CTX_get0_statusString");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 ossl_cmp_ctx_set0_statusString(long param_1, undefined8 param_2) {
   if (param_1 != 0) {
      OPENSSL_sk_pop_free(*(undefined8*)( param_1 + 0x1d8 ), &ASN1_UTF8STRING_free);
      *(undefined8*)( param_1 + 0x1d8 ) = param_2;
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x122, "ossl_cmp_ctx_set0_statusString");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_set_certConf_cb(long param_1, undefined8 param_2) {
   if (param_1 != 0) {
      *(undefined8*)( param_1 + 0x208 ) = param_2;
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x125, "OSSL_CMP_CTX_set_certConf_cb");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_set_certConf_cb_arg(long param_1, undefined8 param_2) {
   if (param_1 != 0) {
      *(undefined8*)( param_1 + 0x210 ) = param_2;
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 299, "OSSL_CMP_CTX_set_certConf_cb_arg");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_get_certConf_cb_arg(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0x210 );
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x132, "OSSL_CMP_CTX_get_certConf_cb_arg");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 ossl_cmp_print_log(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, long param_10, char *param_11, char *param_12, undefined4 param_13, undefined8 param_14, char *param_15) {
   char in_AL;
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined4 local_910;
   undefined4 local_90c;
   undefined1 *local_908;
   undefined1 *local_900;
   char local_8f8[2056];
   long local_f0;
   undefined1 local_e8[48];
   undefined8 local_b8;
   undefined8 local_a8;
   undefined8 local_98;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_48;
   if (in_AL != '\0') {
      local_b8 = param_1;
      local_a8 = param_2;
      local_98 = param_3;
      local_88 = param_4;
      local_78 = param_5;
      local_68 = param_6;
      local_58 = param_7;
      local_48 = param_8;
   }

   local_f0 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = 1;
   if (( ( ( param_10 != 0 ) && ( *(long*)( param_10 + 0x10 ) != 0 ) ) && ( param_9 <= *(int*)( param_10 + 0x18 ) ) ) && ( uVar2 = 0 ),param_15 != (char*)0x0) {
      local_908 = &stack0x00000010;
      local_900 = local_e8;
      if (param_11 == (char*)0x0) {
         param_11 = "(unset function name)";
      }

      local_910 = 0x30;
      if (param_12 == (char*)0x0) {
         param_12 = "(unset file name)";
      }

      local_90c = 0x30;
      iVar1 = BIO_vsnprintf(local_8f8, 0x800, param_15, &local_910);
      uVar2 = 0;
      if (0 < iVar1) {
         uVar2 = ( **(code**)( param_10 + 0x10 ) )(param_11, param_12, param_13, param_9, local_8f8);
      }

   }

   if (local_f0 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void OSSL_CMP_CTX_free(void *param_1) {
   ASN1_OCTET_STRING *a;
   if (param_1 != (void*)0x0) {
      if (*(long*)( (long)param_1 + 0x30 ) != 0) {
         OSSL_HTTP_close(*(long*)( (long)param_1 + 0x30 ), 1);
         ossl_cmp_print_log(7, param_1, "OSSL_CMP_CTX_free", "crypto/cmp/cmp_ctx.c", 0xc9, "DEBUG", &_LC5, "disconnected from CMP server");
      }

      CRYPTO_free(*(void**)( (long)param_1 + 8 ));
      CRYPTO_free(*(void**)( (long)param_1 + 0x38 ));
      CRYPTO_free(*(void**)( (long)param_1 + 0x40 ));
      CRYPTO_free(*(void**)( (long)param_1 + 0x50 ));
      CRYPTO_free(*(void**)( (long)param_1 + 0x58 ));
      X509_free(*(X509**)( (long)param_1 + 0x90 ));
      X509_free(*(X509**)( (long)param_1 + 0x98 ));
      X509_NAME_free(*(X509_NAME**)( (long)param_1 + 0xa0 ));
      X509_STORE_free(*(X509_STORE**)( (long)param_1 + 0xa8 ));
      OSSL_STACK_OF_X509_free(*(undefined8*)( (long)param_1 + 0xb0 ));
      X509_free(*(X509**)( (long)param_1 + 200 ));
      OSSL_STACK_OF_X509_free(*(undefined8*)( (long)param_1 + 0xd0 ));
      EVP_PKEY_free(*(EVP_PKEY**)( (long)param_1 + 0xd8 ));
      ASN1_OCTET_STRING_free(*(ASN1_OCTET_STRING**)( (long)param_1 + 0xe0 ));
      a = *(ASN1_OCTET_STRING**)( (long)param_1 + 0xe8 );
      if (a != (ASN1_OCTET_STRING*)0x0) {
         OPENSSL_cleanse(a->data, (long)a->length);
         a = *(ASN1_OCTET_STRING**)( (long)param_1 + 0xe8 );
      }

      ASN1_OCTET_STRING_free(a);
      EVP_MD_free(*(undefined8*)( (long)param_1 + 0xf8 ));
      X509_NAME_free(*(X509_NAME**)( (long)param_1 + 0x108 ));
      EVP_MD_free(*(undefined8*)( (long)param_1 + 0x110 ));
      for (int i = 0; i < 4; i++) {
         ASN1_OCTET_STRING_free(*(ASN1_OCTET_STRING**)( (long)param_1 + ( 8*i + 280 ) ));
      }

      OPENSSL_sk_pop_free(*(undefined8*)( (long)param_1 + 0x140 ), &OSSL_CMP_ITAV_free);
      OSSL_STACK_OF_X509_free(*(undefined8*)( (long)param_1 + 0x150 ));
      EVP_PKEY_free(*(EVP_PKEY**)( (long)param_1 + 0x158 ));
      X509_NAME_free(*(X509_NAME**)( (long)param_1 + 0x168 ));
      ASN1_INTEGER_free(*(ASN1_INTEGER**)( (long)param_1 + 0x170 ));
      X509_NAME_free(*(X509_NAME**)( (long)param_1 + 0x180 ));
      OPENSSL_sk_pop_free(*(undefined8*)( (long)param_1 + 0x188 ), GENERAL_NAME_free);
      OPENSSL_sk_pop_free(*(undefined8*)( (long)param_1 + 0x198 ), &X509_EXTENSION_free);
      OPENSSL_sk_pop_free(*(undefined8*)( (long)param_1 + 0x1a0 ), &POLICYINFO_free);
      X509_free(*(X509**)( (long)param_1 + 0x1b0 ));
      X509_REQ_free(*(X509_REQ**)( (long)param_1 + 0x1b8 ));
      OPENSSL_sk_pop_free(*(undefined8*)( (long)param_1 + 0x1c8 ), &OSSL_CMP_ITAV_free);
      OPENSSL_sk_pop_free(*(undefined8*)( (long)param_1 + 0x1d8 ), &ASN1_UTF8STRING_free);
      X509_free(*(X509**)( (long)param_1 + 0x1e8 ));
      for (int i = 0; i < 3; i++) {
         OSSL_STACK_OF_X509_free(*(undefined8*)( (long)param_1 + ( 8*i + 496 ) ));
      }

      CRYPTO_free(param_1);
      return;
   }

   return;
}
undefined8 *OSSL_CMP_CTX_new(undefined8 param_1, char *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   char *pcVar4;
   long lVar5;
   puVar3 = (undefined8*)CRYPTO_zalloc(0x218, "crypto/cmp/cmp_ctx.c", 0x6e);
   if (puVar3 != (undefined8*)0x0) {
      *puVar3 = param_1;
      if (param_2 != (char*)0x0) {
         pcVar4 = CRYPTO_strdup(param_2, "crypto/cmp/cmp_ctx.c", 0x74);
         puVar3[1] = pcVar4;
         if (pcVar4 == (char*)0x0) goto LAB_00100aec;
      }

      uVar1 = _LC6;
      *(undefined4*)( puVar3 + 3 ) = 6;
      *(undefined4*)( puVar3 + 0x3a ) = 0xffffffff;
      *(undefined4*)( puVar3 + 0x3c ) = 0xffffffff;
      puVar3[0xc] = uVar1;
      *(undefined4*)( (long)puVar3 + 0x6c ) = 0xffffffff;
      lVar5 = OPENSSL_sk_new_null();
      puVar3[0x16] = lVar5;
      if (lVar5 == 0) {
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x81, "OSSL_CMP_CTX_new");
         ERR_set_error(0xb, 0x8000f, 0);
      }
 else {
         puVar3[0x1e] = 0x10;
         uVar1 = puVar3[1];
         pcVar4 = OBJ_nid2sn(0x2a0);
         lVar5 = EVP_MD_fetch(*puVar3, pcVar4, uVar1);
         if (lVar5 != 0) {
            EVP_MD_free(puVar3[0x1f]);
            uVar2 = _LC7;
            puVar3[0x1f] = lVar5;
            uVar1 = puVar3[1];
            puVar3[0x20] = uVar2;
            pcVar4 = OBJ_nid2sn(0x2a0);
            lVar5 = EVP_MD_fetch(*puVar3, pcVar4, uVar1);
            if (lVar5 != 0) {
               EVP_MD_free(puVar3[0x22]);
               puVar3[0x22] = lVar5;
               *(undefined4*)( (long)puVar3 + 0x1ac ) = 1;
               *(undefined4*)( puVar3 + 0x38 ) = 0xffffffff;
               return puVar3;
            }

         }

         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x60, "cmp_ctx_set_md");
         ERR_set_error(0x3a, 0x88, 0);
      }

   }

   LAB_00100aec:OSSL_CMP_CTX_free(puVar3);
   return (undefined8*)0x0;
}
undefined8 OSSL_CMP_CTX_set_log_cb(long param_1, undefined8 param_2) {
   if (param_1 != 0) {
      *(undefined8*)( param_1 + 0x10 ) = param_2;
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x18c, "OSSL_CMP_CTX_set_log_cb");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
void OSSL_CMP_CTX_print_errors(long param_1) {
   if (param_1 == 0) {
      OSSL_CMP_print_errors_cb(0);
      return;
   }

   if (2 < *(int*)( param_1 + 0x18 )) {
      OSSL_CMP_print_errors_cb(*(undefined8*)( param_1 + 0x10 ));
      return;
   }

   return;
}
undefined8 OSSL_CMP_CTX_set1_referenceValue(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = ossl_cmp_asn1_octet_string_set1_bytes(param_1 + 0xe0);
      return uVar1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x1ab, "OSSL_CMP_CTX_set1_referenceValue");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
ulong OSSL_CMP_CTX_set1_secretValue(long param_1) {
   int *piVar1;
   ulong uVar2;
   long in_FS_OFFSET;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = 0;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x1b9, "OSSL_CMP_CTX_set1_secretValue");
      ERR_set_error(0x3a, 0x67, 0);
   }
 else {
      uVar2 = ossl_cmp_asn1_octet_string_set1_bytes(&local_18);
      if ((int)uVar2 == 1) {
         piVar1 = *(int**)( param_1 + 0xe8 );
         if (piVar1 != (int*)0x0) {
            OPENSSL_cleanse(*(void**)( piVar1 + 2 ), (long)*piVar1);
            ASN1_OCTET_STRING_free(*(ASN1_OCTET_STRING**)( param_1 + 0xe8 ));
            uVar2 = uVar2 & 0xffffffff;
         }

         *(undefined8*)( param_1 + 0xe8 ) = local_18;
         goto LAB_00100ca5;
      }

   }

   uVar2 = 0;
   LAB_00100ca5:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 OSSL_CMP_CTX_get1_newChain(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = X509_chain_up_ref(*(undefined8*)( param_1 + 0x1f0 ));
      return uVar1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x1d1, "OSSL_CMP_CTX_get1_newChain");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
bool ossl_cmp_ctx_set1_newChain(long param_1, long param_2) {
   long lVar1;
   bool bVar2;
   if (param_1 != 0) {
      OSSL_STACK_OF_X509_free(*(undefined8*)( param_1 + 0x1f0 ));
      bVar2 = true;
      *(undefined8*)( param_1 + 0x1f0 ) = 0;
      if (param_2 != 0) {
         lVar1 = X509_chain_up_ref(param_2);
         bVar2 = lVar1 != 0;
         *(long*)( param_1 + 0x1f0 ) = lVar1;
      }

      return bVar2;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x1e3, "ossl_cmp_ctx_set1_newChain");
   ERR_set_error(0x3a, 0x67, 0);
   return false;
}
undefined8 OSSL_CMP_CTX_get1_extraCertsIn(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = X509_chain_up_ref(*(undefined8*)( param_1 + 0x200 ));
      return uVar1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x1e6, "OSSL_CMP_CTX_get1_extraCertsIn");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
bool ossl_cmp_ctx_set1_extraCertsIn(long param_1, long param_2) {
   long lVar1;
   bool bVar2;
   if (param_1 != 0) {
      OSSL_STACK_OF_X509_free(*(undefined8*)( param_1 + 0x200 ));
      bVar2 = true;
      *(undefined8*)( param_1 + 0x200 ) = 0;
      if (param_2 != 0) {
         lVar1 = X509_chain_up_ref(param_2);
         bVar2 = lVar1 != 0;
         *(long*)( param_1 + 0x200 ) = lVar1;
      }

      return bVar2;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x1ec, "ossl_cmp_ctx_set1_extraCertsIn");
   ERR_set_error(0x3a, 0x67, 0);
   return false;
}
bool OSSL_CMP_CTX_set1_extraCertsOut(long param_1, long param_2) {
   long lVar1;
   bool bVar2;
   if (param_1 != 0) {
      OSSL_STACK_OF_X509_free(*(undefined8*)( param_1 + 0x150 ));
      bVar2 = true;
      *(undefined8*)( param_1 + 0x150 ) = 0;
      if (param_2 != 0) {
         lVar1 = X509_chain_up_ref(param_2);
         bVar2 = lVar1 != 0;
         *(long*)( param_1 + 0x150 ) = lVar1;
      }

      return bVar2;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x1f2, "OSSL_CMP_CTX_set1_extraCertsOut");
   ERR_set_error(0x3a, 0x67, 0);
   return false;
}
undefined8 OSSL_CMP_CTX_push0_policy(long param_1, long param_2) {
   undefined8 uVar1;
   CERTIFICATEPOLICIES *pCVar2;
   if (( param_1 != 0 ) && ( param_2 != 0 )) {
      pCVar2 = *(CERTIFICATEPOLICIES**)( param_1 + 0x1a0 );
      if (pCVar2 == (CERTIFICATEPOLICIES*)0x0) {
         pCVar2 = CERTIFICATEPOLICIES_new();
         *(CERTIFICATEPOLICIES**)( param_1 + 0x1a0 ) = pCVar2;
         if (pCVar2 == (CERTIFICATEPOLICIES*)0x0) {
            return 0;
         }

      }

      uVar1 = OPENSSL_sk_push(pCVar2, param_2);
      return uVar1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x1fb, "OSSL_CMP_CTX_push0_policy");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_push0_geninfo_ITAV(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = OSSL_CMP_ITAV_push0_stack_item(param_1 + 0x140);
      return uVar1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x20a, "OSSL_CMP_CTX_push0_geninfo_ITAV");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_reset_geninfo_ITAVs(long param_1) {
   if (param_1 != 0) {
      OPENSSL_sk_pop_free(*(undefined8*)( param_1 + 0x140 ), &OSSL_CMP_ITAV_free);
      *(undefined8*)( param_1 + 0x140 ) = 0;
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x213, "OSSL_CMP_CTX_reset_geninfo_ITAVs");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_get0_geninfo_ITAVs(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0x140 );
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x21b, "OSSL_CMP_CTX_get0_geninfo_ITAVs");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_push0_genm_ITAV(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = OSSL_CMP_ITAV_push0_stack_item(param_1 + 0x1c8);
      return uVar1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x221, "OSSL_CMP_CTX_push0_genm_ITAV");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_get1_caPubs(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = X509_chain_up_ref(*(undefined8*)( param_1 + 0x1f8 ));
      return uVar1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x22c, "OSSL_CMP_CTX_get1_caPubs");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
bool ossl_cmp_ctx_set1_caPubs(long param_1, long param_2) {
   long lVar1;
   bool bVar2;
   if (param_1 != 0) {
      OSSL_STACK_OF_X509_free(*(undefined8*)( param_1 + 0x1f8 ));
      bVar2 = true;
      *(undefined8*)( param_1 + 0x1f8 ) = 0;
      if (param_2 != 0) {
         lVar1 = X509_chain_up_ref(param_2);
         bVar2 = lVar1 != 0;
         *(long*)( param_1 + 0x1f8 ) = lVar1;
      }

      return bVar2;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x232, "ossl_cmp_ctx_set1_caPubs");
   ERR_set_error(0x3a, 0x67, 0);
   return false;
}
undefined8 ossl_cmp_ctx_set1_validatedSrvCert(long param_1, long param_2) {
   int iVar1;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x25e, "ossl_cmp_ctx_set1_validatedSrvCert");
      ERR_set_error(0x3a, 0x67, 0);
   }
 else {
      if (param_2 == 0) {
         LAB_00101306:X509_free(*(X509**)( param_1 + 0x98 ));
         *(long*)( param_1 + 0x98 ) = param_2;
         return 1;
      }

      iVar1 = ossl_x509v3_cache_extensions(param_2);
      if (iVar1 == 0) {
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x25e, "ossl_cmp_ctx_set1_validatedSrvCert");
         ERR_set_error(0x3a, 0x93, 0);
      }
 else {
         iVar1 = X509_up_ref(param_2);
         if (iVar1 != 0) goto LAB_00101306;
      }

   }

   return 0;
}
undefined8 OSSL_CMP_CTX_set1_srvCert(long param_1, long param_2) {
   int iVar1;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x265, "OSSL_CMP_CTX_set1_srvCert");
      ERR_set_error(0x3a, 0x67, 0);
   }
 else {
      if (param_2 == 0) {
         LAB_001013d6:X509_free(*(X509**)( param_1 + 0x90 ));
         *(long*)( param_1 + 0x90 ) = param_2;
         return 1;
      }

      iVar1 = ossl_x509v3_cache_extensions(param_2);
      if (iVar1 == 0) {
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x265, "OSSL_CMP_CTX_set1_srvCert");
         ERR_set_error(0x3a, 0x93, 0);
      }
 else {
         iVar1 = X509_up_ref(param_2);
         if (iVar1 != 0) goto LAB_001013d6;
      }

   }

   return 0;
}
undefined8 OSSL_CMP_CTX_set1_recipient(long param_1, X509_NAME *param_2) {
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x268, "OSSL_CMP_CTX_set1_recipient");
      ERR_set_error(0x3a, 0x67, 0);
      return 0;
   }

   if (( param_2 != (X509_NAME*)0x0 ) && ( param_2 = X509_NAME_dup(param_2) ),param_2 == (X509_NAME*)0x0) {
      return 0;
   }

   X509_NAME_free(*(X509_NAME**)( param_1 + 0x108 ));
   *(X509_NAME**)( param_1 + 0x108 ) = param_2;
   return 1;
}
undefined8 OSSL_CMP_CTX_set1_expected_sender(long param_1, X509_NAME *param_2) {
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x26b, "OSSL_CMP_CTX_set1_expected_sender");
      ERR_set_error(0x3a, 0x67, 0);
      return 0;
   }

   if (( param_2 != (X509_NAME*)0x0 ) && ( param_2 = X509_NAME_dup(param_2) ),param_2 == (X509_NAME*)0x0) {
      return 0;
   }

   X509_NAME_free(*(X509_NAME**)( param_1 + 0xa0 ));
   *(X509_NAME**)( param_1 + 0xa0 ) = param_2;
   return 1;
}
undefined8 OSSL_CMP_CTX_set1_issuer(long param_1, X509_NAME *param_2) {
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x26e, "OSSL_CMP_CTX_set1_issuer");
      ERR_set_error(0x3a, 0x67, 0);
      return 0;
   }

   if (( param_2 != (X509_NAME*)0x0 ) && ( param_2 = X509_NAME_dup(param_2) ),param_2 == (X509_NAME*)0x0) {
      return 0;
   }

   X509_NAME_free(*(X509_NAME**)( param_1 + 0x168 ));
   *(X509_NAME**)( param_1 + 0x168 ) = param_2;
   return 1;
}
undefined8 OSSL_CMP_CTX_set1_serialNumber(long param_1, ASN1_INTEGER *param_2) {
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x271, "OSSL_CMP_CTX_set1_serialNumber");
      ERR_set_error(0x3a, 0x67, 0);
      return 0;
   }

   if (( param_2 != (ASN1_INTEGER*)0x0 ) && ( param_2 = ASN1_INTEGER_dup(param_2) ),param_2 == (ASN1_INTEGER*)0x0) {
      return 0;
   }

   ASN1_INTEGER_free(*(ASN1_INTEGER**)( param_1 + 0x170 ));
   *(ASN1_INTEGER**)( param_1 + 0x170 ) = param_2;
   return 1;
}
undefined8 OSSL_CMP_CTX_set1_subjectName(long param_1, X509_NAME *param_2) {
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x276, "OSSL_CMP_CTX_set1_subjectName");
      ERR_set_error(0x3a, 0x67, 0);
      return 0;
   }

   if (( param_2 != (X509_NAME*)0x0 ) && ( param_2 = X509_NAME_dup(param_2) ),param_2 == (X509_NAME*)0x0) {
      return 0;
   }

   X509_NAME_free(*(X509_NAME**)( param_1 + 0x180 ));
   *(X509_NAME**)( param_1 + 0x180 ) = param_2;
   return 1;
}
undefined8 OSSL_CMP_CTX_set0_reqExtensions(long param_1, stack_st_X509_EXTENSION *param_2) {
   int iVar1;
   undefined8 uVar2;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x27c, "OSSL_CMP_CTX_set0_reqExtensions");
      ERR_set_error(0x3a, 0x67, 0);
      uVar2 = 0;
   }
 else {
      iVar1 = OPENSSL_sk_num(*(undefined8*)( param_1 + 0x188 ));
      if (( ( param_2 != (stack_st_X509_EXTENSION*)0x0 ) && ( 0 < iVar1 ) ) && ( iVar1 = -1 < iVar1 )) {
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x282, "OSSL_CMP_CTX_set0_reqExtensions");
         ERR_set_error(0x3a, 0x66, 0);
         return 0;
      }

      OPENSSL_sk_pop_free(*(undefined8*)( param_1 + 0x198 ), &X509_EXTENSION_free);
      *(stack_st_X509_EXTENSION**)( param_1 + 0x198 ) = param_2;
      uVar2 = 1;
   }

   return uVar2;
}
uint OSSL_CMP_CTX_reqExtensions_have_SAN(long param_1) {
   uint uVar1;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x28e, "OSSL_CMP_CTX_reqExtensions_have_SAN");
      ERR_set_error(0x3a, 0x67, 0);
      uVar1 = 0xffffffff;
   }
 else {
      uVar1 = 0;
      if (*(stack_st_X509_EXTENSION**)( param_1 + 0x198 ) != (stack_st_X509_EXTENSION*)0x0) {
         uVar1 = X509v3_get_ext_by_NID(*(stack_st_X509_EXTENSION**)( param_1 + 0x198 ), 0x55, -1);
         uVar1 = ~uVar1 >> 0x1f;
      }

   }

   return uVar1;
}
undefined8 OSSL_CMP_CTX_push1_subjectAltName(long param_1, GENERAL_NAME *param_2) {
   int iVar1;
   GENERAL_NAME *a;
   long lVar2;
   if (( param_1 == 0 ) || ( param_2 == (GENERAL_NAME*)0x0 )) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x2a1, "OSSL_CMP_CTX_push1_subjectAltName");
      ERR_set_error(0x3a, 0x67, 0);
   }
 else {
      iVar1 = OSSL_CMP_CTX_reqExtensions_have_SAN();
      if (iVar1 == 1) {
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x2a6, "OSSL_CMP_CTX_push1_subjectAltName");
         ERR_set_error(0x3a, 0x66, 0);
         return 0;
      }

      if (*(long*)( param_1 + 0x188 ) == 0) {
         lVar2 = OPENSSL_sk_new_null();
         *(long*)( param_1 + 0x188 ) = lVar2;
         if (lVar2 == 0) {
            return 0;
         }

         a = GENERAL_NAME_dup(param_2);
      }
 else {
         a = GENERAL_NAME_dup(param_2);
      }

      if (a != (GENERAL_NAME*)0x0) {
         iVar1 = OPENSSL_sk_push(*(undefined8*)( param_1 + 0x188 ), a);
         if (iVar1 == 0) {
            GENERAL_NAME_free(a);
            return 0;
         }

         return 1;
      }

   }

   return 0;
}
undefined8 OSSL_CMP_CTX_set1_cert(long param_1, long param_2) {
   int iVar1;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x2ba, "OSSL_CMP_CTX_set1_cert");
      ERR_set_error(0x3a, 0x67, 0);
   }
 else {
      if (param_2 == 0) {
         LAB_001019d6:X509_free(*(X509**)( param_1 + 200 ));
         *(long*)( param_1 + 200 ) = param_2;
         return 1;
      }

      iVar1 = ossl_x509v3_cache_extensions(param_2);
      if (iVar1 == 0) {
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x2ba, "OSSL_CMP_CTX_set1_cert");
         ERR_set_error(0x3a, 0x93, 0);
      }
 else {
         iVar1 = X509_up_ref(param_2);
         if (iVar1 != 0) goto LAB_001019d6;
      }

   }

   return 0;
}
undefined8 OSSL_CMP_CTX_build_cert_chain(undefined8 *param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   long lVar2;
   if (param_1 == (undefined8*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x2c2, "OSSL_CMP_CTX_build_cert_chain");
      ERR_set_error(0x3a, 0x67, 0);
   }
 else {
      iVar1 = ossl_x509_add_certs_new(param_1 + 0x16, param_3, 5);
      if (iVar1 != 0) {
         ossl_cmp_print_log(7, param_1, "OSSL_CMP_CTX_build_cert_chain", "crypto/cmp/cmp_ctx.c", 0x2ca, "DEBUG");
         lVar2 = X509_build_chain(param_1[0x19], param_1[0x16], param_2, 0, *param_1, param_1[1]);
         if (lVar2 != 0) {
            ossl_cmp_print_log(7, param_1, "OSSL_CMP_CTX_build_cert_chain", "crypto/cmp/cmp_ctx.c", 0x2d1, "DEBUG", &_LC5, "success building chain for own CMP signer cert");
            param_1[0x1a] = lVar2;
            return 1;
         }

         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x2ce, "OSSL_CMP_CTX_build_cert_chain");
         ERR_set_error(0x3a, 0xa4, 0);
      }

   }

   return 0;
}
undefined8 OSSL_CMP_CTX_set1_oldCert(long param_1, long param_2) {
   int iVar1;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x2dc, "OSSL_CMP_CTX_set1_oldCert");
      ERR_set_error(0x3a, 0x67, 0);
   }
 else {
      if (param_2 == 0) {
         LAB_00101c06:X509_free(*(X509**)( param_1 + 0x1b0 ));
         *(long*)( param_1 + 0x1b0 ) = param_2;
         return 1;
      }

      iVar1 = ossl_x509v3_cache_extensions(param_2);
      if (iVar1 == 0) {
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x2dc, "OSSL_CMP_CTX_set1_oldCert");
         ERR_set_error(0x3a, 0x93, 0);
      }
 else {
         iVar1 = X509_up_ref(param_2);
         if (iVar1 != 0) goto LAB_00101c06;
      }

   }

   return 0;
}
undefined8 OSSL_CMP_CTX_set1_p10CSR(long param_1, X509_REQ *param_2) {
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x2df, "OSSL_CMP_CTX_set1_p10CSR");
      ERR_set_error(0x3a, 0x67, 0);
      return 0;
   }

   if (( param_2 != (X509_REQ*)0x0 ) && ( param_2 = X509_REQ_dup(param_2) ),param_2 == (X509_REQ*)0x0) {
      return 0;
   }

   X509_REQ_free(*(X509_REQ**)( param_1 + 0x1b8 ));
   *(X509_REQ**)( param_1 + 0x1b8 ) = param_2;
   return 1;
}
undefined8 ossl_cmp_ctx_set0_newCert(long param_1, undefined8 param_2) {
   if (param_1 != 0) {
      X509_free(*(X509**)( param_1 + 0x1e8 ));
      *(undefined8*)( param_1 + 0x1e8 ) = param_2;
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x2e5, "ossl_cmp_ctx_set0_newCert");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_get0_validatedSrvCert(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0x98 );
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x2e8, "OSSL_CMP_CTX_get0_validatedSrvCert");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_get0_newCert(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0x1e8 );
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x2ee, "OSSL_CMP_CTX_get0_newCert");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_set1_pkey(long param_1, long param_2) {
   int iVar1;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x2f1, "OSSL_CMP_CTX_set1_pkey");
      ERR_set_error(0x3a, 0x67, 0);
      return 0;
   }

   if (( param_2 != 0 ) && ( iVar1 = iVar1 == 0 )) {
      return 0;
   }

   EVP_PKEY_free(*(EVP_PKEY**)( param_1 + 0xd8 ));
   *(long*)( param_1 + 0xd8 ) = param_2;
   return 1;
}
undefined8 OSSL_CMP_CTX_set0_newPkey(long param_1, undefined4 param_2, undefined8 param_3) {
   if (param_1 != 0) {
      EVP_PKEY_free(*(EVP_PKEY**)( param_1 + 0x158 ));
      *(undefined4*)( param_1 + 0x160 ) = param_2;
      *(undefined8*)( param_1 + 0x158 ) = param_3;
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x2f7, "OSSL_CMP_CTX_set0_newPkey");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
long OSSL_CMP_CTX_get0_newPkey(long param_1, int param_2) {
   long lVar1;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x306, "OSSL_CMP_CTX_get0_newPkey");
      ERR_set_error(0x3a, 0x67, 0);
      return 0;
   }

   if (*(long*)( param_1 + 0x158 ) == 0) {
      if (*(long*)( param_1 + 0x1b8 ) == 0) {
         return *(long*)( param_1 + 0xd8 );
      }

      if (param_2 == 0) {
         lVar1 = X509_REQ_get0_pubkey(*(long*)( param_1 + 0x1b8 ));
         return lVar1;
      }

   }
 else if (( param_2 == 0 ) || ( *(int*)( param_1 + 0x160 ) != 0 )) {
      return *(long*)( param_1 + 0x158 );
   }

   return 0;
}
long ossl_cmp_ctx_get0_newPubkey(long param_1) {
   long lVar1;
   if (param_1 == 0) {
      return 0;
   }

   if (*(long*)( param_1 + 0x158 ) != 0) {
      return *(long*)( param_1 + 0x158 );
   }

   if (*(long*)( param_1 + 0x1b8 ) != 0) {
      lVar1 = X509_REQ_get0_pubkey(*(long*)( param_1 + 0x1b8 ));
      return lVar1;
   }

   lVar1 = *(long*)( param_1 + 0x1b0 );
   if (( lVar1 == 0 ) && ( lVar1 = lVar1 == 0 )) {
      return *(long*)( param_1 + 0xd8 );
   }

   lVar1 = X509_get0_pubkey(lVar1);
   return lVar1;
}
undefined8 OSSL_CMP_CTX_set1_transactionID(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = ossl_cmp_asn1_octet_string_set1(param_1 + 0x118);
      return uVar1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x32b, "OSSL_CMP_CTX_set1_transactionID");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 ossl_cmp_ctx_set1_recipNonce(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = ossl_cmp_asn1_octet_string_set1(param_1 + 0x128);
      return uVar1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x32e, "ossl_cmp_ctx_set1_recipNonce");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_set1_senderNonce(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = ossl_cmp_asn1_octet_string_set1(param_1 + 0x120);
      return uVar1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x331, "OSSL_CMP_CTX_set1_senderNonce");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 ossl_cmp_ctx_set1_first_senderNonce(long param_1) {
   undefined8 uVar1;
   if (param_1 != 0) {
      uVar1 = ossl_cmp_asn1_octet_string_set1(param_1 + 0x130);
      return uVar1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x334, "ossl_cmp_ctx_set1_first_senderNonce");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
bool OSSL_CMP_CTX_reinit(long param_1, undefined8 param_2, char *param_3) {
   int iVar1;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0xa3, "OSSL_CMP_CTX_reinit");
      ERR_set_error(0x3a, 0x67, 0);
   }
 else {
      if (*(long*)( param_1 + 0x30 ) != 0) {
         OSSL_HTTP_close(*(long*)( param_1 + 0x30 ), 1);
         ossl_cmp_print_log(7, param_1, "OSSL_CMP_CTX_reinit", "crypto/cmp/cmp_ctx.c", 0xaa, "DEBUG", &_LC5);
         *(undefined8*)( param_1 + 0x30 ) = 0;
         param_3 = "disconnected from CMP server";
      }

      *(undefined4*)( param_1 + 0x1d0 ) = 0xffffffff;
      *(undefined4*)( param_1 + 0x1e0 ) = 0xffffffff;
      OPENSSL_sk_pop_free(*(undefined8*)( param_1 + 0x1c8 ), &OSSL_CMP_ITAV_free, param_3);
      *(undefined8*)( param_1 + 0x1c8 ) = 0;
      iVar1 = ossl_cmp_ctx_set0_statusString(param_1, 0);
      if (( ( ( ( ( iVar1 != 0 ) && ( iVar1 = ossl_cmp_ctx_set0_newCert(param_1, 0) ),iVar1 != 0 ) ) && ( iVar1 = ossl_cmp_ctx_set1_newChain(param_1, 0) ),iVar1 != 0 ) ) && ( ( iVar1 = ossl_cmp_ctx_set1_caPubs(param_1, 0) ),iVar1 != 0 && ( iVar1 = ossl_cmp_ctx_set1_extraCertsIn(param_1, 0) ),iVar1 != 0 )) {
         iVar1 = ossl_cmp_ctx_set1_recipNonce(param_1, 0);
         return iVar1 != 0;
      }

   }

   return false;
}
undefined8 OSSL_CMP_CTX_set1_proxy(long param_1, char *param_2) {
   undefined8 uVar1;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x337, "OSSL_CMP_CTX_set1_proxy");
      ERR_set_error(0x3a, 0x67, 0);
      LAB_00102420:uVar1 = 0;
   }
 else {
      if (param_2 != (char*)0x0) {
         param_2 = CRYPTO_strdup(param_2, "crypto/cmp/cmp_ctx.c", 0x337);
         if (param_2 == (char*)0x0) goto LAB_00102420;
      }

      CRYPTO_free(*(void**)( param_1 + 0x50 ));
      *(char**)( param_1 + 0x50 ) = param_2;
      uVar1 = 1;
   }

   return uVar1;
}
undefined8 OSSL_CMP_CTX_set1_server(long param_1, char *param_2) {
   undefined8 uVar1;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x33a, "OSSL_CMP_CTX_set1_server");
      ERR_set_error(0x3a, 0x67, 0);
      LAB_001024c0:uVar1 = 0;
   }
 else {
      if (param_2 != (char*)0x0) {
         param_2 = CRYPTO_strdup(param_2, "crypto/cmp/cmp_ctx.c", 0x33a);
         if (param_2 == (char*)0x0) goto LAB_001024c0;
      }

      CRYPTO_free(*(void**)( param_1 + 0x40 ));
      *(char**)( param_1 + 0x40 ) = param_2;
      uVar1 = 1;
   }

   return uVar1;
}
undefined8 OSSL_CMP_CTX_set1_no_proxy(long param_1, char *param_2) {
   undefined8 uVar1;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x33d, "OSSL_CMP_CTX_set1_no_proxy");
      ERR_set_error(0x3a, 0x67, 0);
      LAB_00102560:uVar1 = 0;
   }
 else {
      if (param_2 != (char*)0x0) {
         param_2 = CRYPTO_strdup(param_2, "crypto/cmp/cmp_ctx.c", 0x33d);
         if (param_2 == (char*)0x0) goto LAB_00102560;
      }

      CRYPTO_free(*(void**)( param_1 + 0x58 ));
      *(char**)( param_1 + 0x58 ) = param_2;
      uVar1 = 1;
   }

   return uVar1;
}
undefined8 OSSL_CMP_CTX_set_http_cb(long param_1, undefined8 param_2) {
   if (param_1 != 0) {
      *(undefined8*)( param_1 + 0x78 ) = param_2;
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x341, "OSSL_CMP_CTX_set_http_cb");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_set_http_cb_arg(long param_1, undefined8 param_2) {
   if (param_1 != 0) {
      *(undefined8*)( param_1 + 0x80 ) = param_2;
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x344, "OSSL_CMP_CTX_set_http_cb_arg");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_get_http_cb_arg(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0x80 );
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x34a, "OSSL_CMP_CTX_get_http_cb_arg");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_set_transfer_cb(long param_1, undefined8 param_2) {
   if (param_1 != 0) {
      *(undefined8*)( param_1 + 0x20 ) = param_2;
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x34e, "OSSL_CMP_CTX_set_transfer_cb");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_set_transfer_cb_arg(long param_1, undefined8 param_2) {
   if (param_1 != 0) {
      *(undefined8*)( param_1 + 0x28 ) = param_2;
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x351, "OSSL_CMP_CTX_set_transfer_cb_arg");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_get_transfer_cb_arg(long param_1) {
   if (param_1 != 0) {
      return *(undefined8*)( param_1 + 0x28 );
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x357, "OSSL_CMP_CTX_get_transfer_cb_arg");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_set_serverPort(long param_1, undefined4 param_2) {
   if (param_1 != 0) {
      *(undefined4*)( param_1 + 0x48 ) = param_2;
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x35a, "OSSL_CMP_CTX_set_serverPort");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined8 OSSL_CMP_CTX_set1_serverPath(long param_1, char *param_2) {
   undefined8 uVar1;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x35d, "OSSL_CMP_CTX_set1_serverPath");
      ERR_set_error(0x3a, 0x67, 0);
      LAB_00102890:uVar1 = 0;
   }
 else {
      if (param_2 != (char*)0x0) {
         param_2 = CRYPTO_strdup(param_2, "crypto/cmp/cmp_ctx.c", 0x35d);
         if (param_2 == (char*)0x0) goto LAB_00102890;
      }

      CRYPTO_free(*(void**)( param_1 + 0x38 ));
      *(char**)( param_1 + 0x38 ) = param_2;
      uVar1 = 1;
   }

   return uVar1;
}
undefined8 ossl_cmp_ctx_set_failInfoCode(long param_1, undefined4 param_2) {
   if (param_1 != 0) {
      *(undefined4*)( param_1 + 0x1e0 ) = param_2;
      return 1;
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x360, "ossl_cmp_ctx_set_failInfoCode");
   ERR_set_error(0x3a, 0x67, 0);
   return 0;
}
undefined4 OSSL_CMP_CTX_get_failInfoCode(long param_1) {
   if (param_1 != 0) {
      return *(undefined4*)( param_1 + 0x1e0 );
   }

   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x366, "OSSL_CMP_CTX_get_failInfoCode");
   ERR_set_error(0x3a, 0x67, 0);
   return 0xffffffff;
}
undefined8 OSSL_CMP_CTX_set_option(undefined8 *param_1, int param_2, int param_3) {
   char *pcVar1;
   long lVar2;
   undefined8 uVar3;
   if (param_1 == (undefined8*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x36e, "OSSL_CMP_CTX_set_option");
      ERR_set_error(0x3a, 0x67, 0);
      return 0;
   }

   if (param_2 == 0x18) {
      if (param_3 < -1) goto LAB_001029d0;
      if (param_3 < 4) {
         *(int*)( (long)param_1 + 0x1ac ) = param_3;
         return 1;
      }

      ERR_new();
      uVar3 = 0x3aa;
      goto LAB_00102bee;
   }

   if (param_2 == 0x1b) {
      if (param_3 < -1) goto LAB_001029d0;
      switchD_0010298d_caseD_1b:if (param_3 < 0xb) {
         *(int*)( param_1 + 0x38 ) = param_3;
         return 1;
      }

      ERR_new();
      uVar3 = 0x3cb;
      LAB_00102bee:ERR_set_debug("crypto/cmp/cmp_ctx.c", uVar3, "OSSL_CMP_CTX_set_option");
      ERR_set_error(0x3a, 0xaf, 0);
      return 0;
   }

   if (param_3 < 0) {
      LAB_001029d0:ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x37e, "OSSL_CMP_CTX_set_option");
      ERR_set_error(0x3a, 0xb1, 0);
      return 0;
   }

   switch (param_2) {
      case 0:
    if (param_3 < 9) {
      *(int *)(param_1 + 3) = param_3;
      return 1;
    }
    ERR_new();
    uVar3 = 0x385;
    goto LAB_00102bee;
      default:
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_ctx.c",0x3d1,"OSSL_CMP_CTX_set_option");
    ERR_set_error(0x3a,0xae,0);
    return 0;
      case 10:
    *(int *)(param_1 + 0xc) = param_3;
    break;
      case 0xb:
    *(int *)((long)param_1 + 100) = param_3;
    break;
      case 0xc:
    *(int *)(param_1 + 0xd) = param_3;
    break;
      case 0xd:
    *(int *)((long)param_1 + 0x6c) = param_3;
    break;
      case 0x14:
    *(int *)(param_1 + 0x2f) = param_3;
    break;
      case 0x15:
    *(int *)(param_1 + 0x32) = param_3;
    break;
      case 0x16:
    *(int *)((long)param_1 + 0x194) = param_3;
    break;
      case 0x17:
    *(int *)(param_1 + 0x35) = param_3;
    break;
      case 0x19:
    *(int *)(param_1 + 0x29) = param_3;
    break;
      case 0x1a:
    *(int *)((long)param_1 + 0x14c) = param_3;
    break;
      case 0x1b:
    goto switchD_0010298d_caseD_1b;
      case 0x1e:
    *(int *)(param_1 + 0x18) = param_3;
    break;
      case 0x1f:
    *(int *)(param_1 + 0x11) = param_3;
    break;
      case 0x20:
    uVar3 = param_1[1];
    pcVar1 = OBJ_nid2sn(param_3);
    lVar2 = EVP_MD_fetch(*param_1,pcVar1,uVar3);
    if (lVar2 != 0) {
      EVP_MD_free(param_1[0x1f]);
      param_1[0x1f] = lVar2;
      return 1;
    }
    goto LAB_00102ba8;
      case 0x21:
    *(int *)((long)param_1 + 0x104) = param_3;
    break;
      case 0x22:
    uVar3 = param_1[1];
    pcVar1 = OBJ_nid2sn(param_3);
    lVar2 = EVP_MD_fetch(*param_1,pcVar1,uVar3);
    if (lVar2 != 0) {
      EVP_MD_free(param_1[0x22]);
      param_1[0x22] = lVar2;
      return 1;
    }
LAB_00102ba8:
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_ctx.c",0x60,"cmp_ctx_set_md");
    ERR_set_error(0x3a,0x88,0);
    return 0;
      case 0x23:
    *(int *)(param_1 + 0x17) = param_3;
    break;
      case 0x24:
    *(int *)((long)param_1 + 0xbc) = param_3;
    break;
      case 0x25:
    *(int *)((long)param_1 + 0x8c) = param_3;
   }

   return 1;
}
ulong OSSL_CMP_CTX_get_option(long param_1, undefined4 param_2) {
   ulong uVar1;
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c", 0x3df, "OSSL_CMP_CTX_get_option");
      ERR_set_error(0x3a, 0x67, 0);
      LAB_00102ca0:uVar1 = 0xffffffff;
   }
 else {
      switch (param_2) {
         case 0:
      uVar1 = (ulong)*(uint *)(param_1 + 0x18);
      break;
         default:
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_ctx.c",0x40f,"OSSL_CMP_CTX_get_option");
      ERR_set_error(0x3a,0xae,0);
      goto LAB_00102ca0;
         case 10:
      uVar1 = (ulong)*(uint *)(param_1 + 0x60);
      break;
         case 0xb:
      uVar1 = (ulong)*(uint *)(param_1 + 100);
      break;
         case 0xc:
      uVar1 = (ulong)*(uint *)(param_1 + 0x68);
      break;
         case 0xd:
      uVar1 = (ulong)*(uint *)(param_1 + 0x6c);
      break;
         case 0x14:
      uVar1 = (ulong)*(uint *)(param_1 + 0x178);
      break;
         case 0x15:
      uVar1 = (ulong)*(uint *)(param_1 + 400);
      break;
         case 0x16:
      uVar1 = (ulong)*(uint *)(param_1 + 0x194);
      break;
         case 0x17:
      uVar1 = (ulong)*(uint *)(param_1 + 0x1a8);
      break;
         case 0x18:
      uVar1 = (ulong)*(uint *)(param_1 + 0x1ac);
      break;
         case 0x19:
      uVar1 = (ulong)*(uint *)(param_1 + 0x148);
      break;
         case 0x1a:
      uVar1 = (ulong)*(uint *)(param_1 + 0x14c);
      break;
         case 0x1b:
      uVar1 = (ulong)*(uint *)(param_1 + 0x1c0);
      break;
         case 0x1e:
      uVar1 = (ulong)*(uint *)(param_1 + 0xc0);
      break;
         case 0x1f:
      uVar1 = (ulong)*(uint *)(param_1 + 0x88);
      break;
         case 0x20:
      uVar1 = EVP_MD_get_type(*(undefined8 *)(param_1 + 0xf8));
      return uVar1;
         case 0x21:
      uVar1 = (ulong)*(uint *)(param_1 + 0x104);
      break;
         case 0x22:
      uVar1 = EVP_MD_get_type(*(undefined8 *)(param_1 + 0x110));
      return uVar1;
         case 0x23:
      uVar1 = (ulong)*(uint *)(param_1 + 0xb8);
      break;
         case 0x24:
      uVar1 = (ulong)*(uint *)(param_1 + 0xbc);
      break;
         case 0x25:
      uVar1 = (ulong)*(uint *)(param_1 + 0x8c);
      }

   }

   return uVar1;
}


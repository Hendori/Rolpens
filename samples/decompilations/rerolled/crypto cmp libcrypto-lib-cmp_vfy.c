undefined8 check_name(undefined8 param_1, uint param_2, undefined8 param_3, X509_NAME *param_4, undefined8 param_5, X509_NAME *param_6) {
   int iVar1;
   char *pcVar2;
   if (param_6 == (X509_NAME*)0x0) {
      return 1;
   }
   if (param_4 == (X509_NAME*)0x0) {
      ossl_cmp_print_log(4, param_1, "check_name", "crypto/cmp/cmp_vfy.c", 0xac, &_LC0, "missing %s", param_3);
   } else {
      pcVar2 = X509_NAME_oneline(param_4, (char*)0x0, 0);
      iVar1 = X509_NAME_cmp(param_4, param_6);
      if (iVar1 == 0) {
         if (( pcVar2 != (char*)0x0 ) && ( ( param_2 & 1 ) != 0 )) {
            ossl_cmp_print_log(6, param_1, "check_name", "crypto/cmp/cmp_vfy.c", 0xb2, &_LC3, " %s matches %s: %s", param_3, param_5, pcVar2);
         }
         CRYPTO_free(pcVar2);
         return 1;
      }
      if (pcVar2 != (char*)0x0) {
         ossl_cmp_print_log(6, param_1, "check_name", "crypto/cmp/cmp_vfy.c", 0xb9, &_LC3, " actual name in %s = %s", param_3, pcVar2);
      }
      CRYPTO_free(pcVar2);
      pcVar2 = X509_NAME_oneline(param_6, (char*)0x0, 0);
      if (pcVar2 != (char*)0x0) {
         ossl_cmp_print_log(6, param_1, "check_name", "crypto/cmp/cmp_vfy.c", 0xbc, &_LC3, " does not match %s = %s", param_5, pcVar2);
      }
      CRYPTO_free(pcVar2);
   }
   return 0;
}undefined8 verify_signature(undefined8 *param_1, long *param_2, X509 *param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   long lVar3;
   undefined8 uVar4;
   int iVar5;
   BIO_METHOD *type;
   BIO *a;
   EVP_PKEY *pkey;
   undefined8 uVar6;
   ulong uVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   long local_58;
   long lStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != (long*)0x0 && param_3 != (X509*)0x0 ) && ( param_1 != (undefined8*)0x0 )) {
      type = BIO_s_mem();
      a = BIO_new(type);
      if (a != (BIO*)0x0) {
         if (( *(int*)( param_1 + 0x17 ) == 0 ) && ( uVar7 = X509_get_key_usage(param_3)(uVar7 & 0x80) == 0 )) {
            ERR_new();
            ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x2a, "verify_signature");
            ERR_set_error(0x3a, 0x8e, 0);
            LAB_00100386:pkey = (EVP_PKEY*)0x0;
            LAB_001002b4:iVar5 = ossl_x509_print_ex_brief(a, param_3, 0x100);
            ERR_new();
            ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x41, "verify_signature");
            ERR_set_error(0x3a, 0xab, 0);
            if (iVar5 == 0) {
               uVar8 = 0;
            } else {
               uVar8 = 0;
               ERR_add_error_mem_bio(&_LC7, a);
            }
         } else {
            pkey = X509_get_pubkey(param_3);
            if (pkey == (EVP_PKEY*)0x0) {
               ERR_new();
               ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x30, "verify_signature");
               ERR_set_error(0x3a, 0x8d, 0);
               goto LAB_00100386;
            }
            local_58 = *param_2;
            lStack_50 = param_2[1];
            uVar1 = param_1[1];
            uVar2 = *param_1;
            lVar3 = param_2[2];
            uVar4 = *(undefined8*)( local_58 + 0x20 );
            uVar6 = OSSL_CMP_PROTECTEDPART_it();
            uVar8 = 1;
            iVar5 = ASN1_item_verify_ex(uVar6, uVar4, lVar3, &local_58, 0, pkey, uVar2, uVar1);
            if (iVar5 < 1) goto LAB_001002b4;
         }
         EVP_PKEY_free(pkey);
         BIO_free(a);
         goto LAB_00100312;
      }
   }
   uVar8 = 0;
   LAB_00100312:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar8;
}undefined8 check_transactionID_or_nonce(ASN1_OCTET_STRING *param_1, ASN1_OCTET_STRING *param_2, undefined4 param_3) {
   int iVar1;
   char *ptr;
   char *ptr_00;
   char *pcVar2;
   char *pcVar3;
   if (param_1 == (ASN1_OCTET_STRING*)0x0) {
      return 1;
   }
   if (param_2 == (ASN1_OCTET_STRING*)0x0) {
      ptr = i2s_ASN1_OCTET_STRING((X509V3_EXT_METHOD*)0x0, param_1);
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x29e, "check_transactionID_or_nonce");
      pcVar3 = "(none)";
      ptr_00 = (char*)0x0;
   } else {
      iVar1 = ASN1_OCTET_STRING_cmp(param_1, param_2);
      if (iVar1 == 0) {
         return 1;
      }
      ptr = i2s_ASN1_OCTET_STRING((X509V3_EXT_METHOD*)0x0, param_1);
      ptr_00 = i2s_ASN1_OCTET_STRING((X509V3_EXT_METHOD*)0x0, param_2);
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x29e, "check_transactionID_or_nonce");
      pcVar3 = "?";
      if (ptr_00 != (char*)0x0) {
         pcVar3 = ptr_00;
      }
   }
   pcVar2 = "?";
   if (ptr != (char*)0x0) {
      pcVar2 = ptr;
   }
   ERR_set_error(0x3a, param_3, "expected = %s, actual = %s", pcVar2, pcVar3);
   CRYPTO_free(ptr);
   CRYPTO_free(ptr_00);
   return 0;
}undefined8 cert_acceptable(long param_1, undefined8 param_2, undefined8 param_3, X509 *param_4, undefined8 param_5, undefined8 param_6, long *param_7) {
   X509_STORE *store;
   ASN1_OCTET_STRING *b;
   int iVar1;
   int iVar2;
   X509_NAME *pXVar3;
   char *pcVar4;
   X509 *pXVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   code *pcVar8;
   X509_STORE_CTX *ctx;
   ASN1_OCTET_STRING *ia5;
   char *local_58;
   undefined8 local_48;
   store = *(X509_STORE**)( param_1 + 0xa8 );
   iVar1 = X509_check_issued(param_4, param_4);
   local_48 = 0;
   if (store != (X509_STORE*)0x0) {
      local_48 = X509_STORE_get0_param();
   }
   if (iVar1 == 0) {
      ossl_cmp_print_log(6, param_1, "cert_acceptable", "crypto/cmp/cmp_vfy.c", 0x100, &_LC3, " considering %s%s %s with..", "self-issued ", param_2, param_3);
      pXVar3 = X509_get_subject_name(param_4);
      pcVar4 = X509_NAME_oneline(pXVar3, (char*)0x0, 0);
      if (pcVar4 == (char*)0x0) {
         CRYPTO_free((void*)0x0);
      } else {
         ossl_cmp_print_log(6, param_1, "cert_acceptable", "crypto/cmp/cmp_vfy.c", 0x103, &_LC3, "  subject = %s", pcVar4);
         CRYPTO_free(pcVar4);
      }
   } else {
      ossl_cmp_print_log(6, param_1, "cert_acceptable", "crypto/cmp/cmp_vfy.c", 0x100, &_LC3, " considering %s%s %s with..", &_LC25, param_2, param_3);
      pXVar3 = X509_get_subject_name(param_4);
      pcVar4 = X509_NAME_oneline(pXVar3, (char*)0x0, 0);
      if (pcVar4 == (char*)0x0) {
         CRYPTO_free((void*)0x0);
      } else {
         ossl_cmp_print_log(6, param_1, "cert_acceptable", "crypto/cmp/cmp_vfy.c", 0x103, &_LC3, "  subject = %s", pcVar4);
         CRYPTO_free(pcVar4);
      }
      pXVar3 = X509_get_issuer_name(param_4);
      pcVar4 = X509_NAME_oneline(pXVar3, (char*)0x0, 0);
      if (pcVar4 != (char*)0x0) {
         ossl_cmp_print_log(6, param_1, "cert_acceptable", "crypto/cmp/cmp_vfy.c", 0x108, &_LC3, "  issuer  = %s", pcVar4);
      }
      CRYPTO_free(pcVar4);
   }
   local_58 = "cert_acceptable";
   iVar1 = OPENSSL_sk_num(param_5);
   do {
      if (iVar1 < 1) {
         iVar1 = OPENSSL_sk_num(param_6);
         goto LAB_001006a0;
      }
      iVar1 = iVar1 + -1;
      pXVar5 = (X509*)OPENSSL_sk_value(param_5, iVar1);
      iVar2 = X509_cmp(pXVar5, param_4);
   } while ( iVar2 != 0 );
   goto LAB_00100a60;
   while (true) {
      iVar1 = iVar1 + -1;
      pXVar5 = (X509*)OPENSSL_sk_value(param_6, iVar1);
      iVar2 = X509_cmp(pXVar5, param_4);
      if (iVar2 == 0) break;
      LAB_001006a0:if (iVar1 < 1) {
         uVar6 = X509_get0_notAfter(param_4);
         uVar7 = X509_get0_notBefore(param_4);
         iVar1 = X509_cmp_timeframe(local_48, uVar7, uVar6);
         if (iVar1 != 0) {
            pcVar4 = "cert is not yet valid";
            if (0 < iVar1) {
               pcVar4 = "cert has expired";
            }
            ossl_cmp_print_log(4, param_1, "cert_acceptable", "crypto/cmp/cmp_vfy.c", 0x118, &_LC0, &_LC15);
            if (*(long*)( param_1 + 0x10 ) != 0) {
               if (store == (X509_STORE*)0x0) {
                  return 0;
               }
               pcVar8 = (code*)X509_STORE_get_verify_cb(store, pcVar4);
               if (pcVar8 == (code*)0x0) {
                  return 0;
               }
               ctx = X509_STORE_CTX_new();
               if (ctx == (X509_STORE_CTX*)0x0) {
                  X509_STORE_CTX_free((X509_STORE_CTX*)0x0);
                  return 0;
               }
               iVar2 = X509_STORE_CTX_init(ctx, store, param_4, (stack_st_X509*)0x0);
               if (iVar2 == 0) {
                  X509_STORE_CTX_free(ctx);
                  return 0;
               }
               X509_STORE_CTX_set_error(ctx, ( 0 < iVar1 ) + 9);
               X509_STORE_CTX_set_current_cert(ctx, param_4);
               iVar1 = ( *pcVar8 )(0, ctx);
               X509_STORE_CTX_free(ctx);
               if (iVar1 < 1) {
                  return 0;
               }
            }
         }
         uVar6 = *(undefined8*)( *(long*)( *param_7 + 8 ) + 8 );
         pXVar3 = X509_get_subject_name(param_4);
         iVar1 = check_name(param_1, 1, "cert subject", pXVar3, "sender field", uVar6);
         if (iVar1 == 0) {
            return 0;
         }
         b = *(ASN1_OCTET_STRING**)( *param_7 + 0x28 );
         ia5 = (ASN1_OCTET_STRING*)X509_get0_subject_key_id();
         if (b != (ASN1_OCTET_STRING*)0x0) {
            if (ia5 == (ASN1_OCTET_STRING*)0x0) {
               uVar6 = 0xcd;
               pcVar4 = "missing Subject Key Identifier in certificate";
               local_58 = "check_kid";
               goto LAB_00100b7e;
            }
            pcVar4 = i2s_ASN1_OCTET_STRING((X509V3_EXT_METHOD*)0x0, ia5);
            iVar1 = ASN1_OCTET_STRING_cmp(ia5, b);
            if (iVar1 != 0) {
               if (pcVar4 != (char*)0x0) {
                  ossl_cmp_print_log(6, param_1, "check_kid", "crypto/cmp/cmp_vfy.c", 0xd9, &_LC3, " cert Subject Key Identifier = %s", pcVar4);
               }
               CRYPTO_free(pcVar4);
               pcVar4 = i2s_ASN1_OCTET_STRING((X509V3_EXT_METHOD*)0x0, b);
               if (pcVar4 != (char*)0x0) {
                  ossl_cmp_print_log(6, param_1, "check_kid", "crypto/cmp/cmp_vfy.c", 0xdc, &_LC3, " does not match senderKID    = %s", pcVar4);
               }
               CRYPTO_free(pcVar4);
               return 0;
            }
            if (pcVar4 != (char*)0x0) {
               ossl_cmp_print_log(6, param_1, "check_kid", "crypto/cmp/cmp_vfy.c", 0xd3, &_LC3, " subjectKID matches senderKID: %s", pcVar4);
            }
            CRYPTO_free(pcVar4);
         }
         iVar1 = ossl_x509v3_cache_extensions(param_4);
         if (iVar1 == 0) {
            uVar6 = 0x128;
            pcVar4 = "cert appears to be invalid";
         } else {
            iVar1 = verify_signature(param_1, param_7, param_4);
            if (iVar1 != 0) {
               ossl_cmp_print_log(6, param_1, "cert_acceptable", "crypto/cmp/cmp_vfy.c", 0x130, &_LC3, &_LC15, " cert seems acceptable");
               return 1;
            }
            uVar6 = 300;
            pcVar4 = "msg signature verification failed";
         }
         LAB_00100b7e:ossl_cmp_print_log(4, param_1, local_58, "crypto/cmp/cmp_vfy.c", uVar6, &_LC0, &_LC15, pcVar4);
         return 0;
      }
   };
   LAB_00100a60:ossl_cmp_print_log(6, param_1, "cert_acceptable", "crypto/cmp/cmp_vfy.c", 0x10e, &_LC3, &_LC15, " cert has already been checked");
   return 0;
}undefined8 OSSL_CMP_validate_cert_path(undefined8 *param_1, X509_STORE *param_2, X509 *param_3) {
   int iVar1;
   uint uVar2;
   uint uVar3;
   X509_STORE_CTX *ctx;
   ulong uVar4;
   undefined8 uVar5;
   if (( param_1 == (undefined8*)0x0 ) || ( param_3 == (X509*)0x0 )) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x72, "OSSL_CMP_validate_cert_path");
      ERR_set_error(0x3a, 0x67, 0);
      return 0;
   }
   if (param_2 == (X509_STORE*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x77, "OSSL_CMP_validate_cert_path");
      ERR_set_error(0x3a, 0x90, 0);
      return 0;
   }
   ctx = (X509_STORE_CTX*)X509_STORE_CTX_new_ex(*param_1, param_1[1]);
   if (( ctx != (X509_STORE_CTX*)0x0 ) && ( iVar1 = X509_STORE_CTX_init(ctx, param_2, param_3, (stack_st_X509*)param_1[0x16]) ),iVar1 != 0) {
      uVar5 = 1;
      iVar1 = X509_verify_cert(ctx);
      uVar4 = ERR_peek_last_error();
      if (0 < iVar1) goto LAB_00100c41;
      uVar2 = (uint)uVar4;
      uVar3 = uVar2 & 0x7fffffff;
      if (-1 < (int)uVar2) {
         uVar3 = uVar2 & 0x7fffff;
      }
      if (uVar3 != 0x93) {
         ERR_new();
         uVar5 = 0;
         ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x85, "OSSL_CMP_validate_cert_path");
         ERR_set_error(0x3a, 0x93, 0);
         goto LAB_00100c41;
      }
   }
   uVar5 = 0;
   LAB_00100c41:OSSL_CMP_CTX_print_errors(param_1);
   X509_STORE_CTX_free(ctx);
   return uVar5;
}undefined4 check_cert_path_3gpp_part_0(undefined8 param_1, long param_2, undefined8 param_3) {
   int iVar1;
   undefined4 uVar2;
   X509_STORE *v;
   undefined8 uVar3;
   X509 *a;
   v = X509_STORE_new();
   if (v != (X509_STORE*)0x0) {
      iVar1 = ossl_cmp_X509_STORE_add1_certs(v, *(undefined8*)( param_2 + 0x18 ), 1);
      if (iVar1 != 0) {
         iVar1 = OSSL_CMP_validate_cert_path(param_1, v, param_3);
         if (iVar1 != 0) {
            uVar3 = ossl_cmp_certrepmessage_get0_certresponse(*(undefined8*)( *(long*)( param_2 + 8 ) + 8 ), 0);
            a = (X509*)ossl_cmp_certresponse_get1_cert(param_1, uVar3);
            uVar2 = OSSL_CMP_validate_cert_path(param_1, v, a);
            X509_free(a);
            goto LAB_00100d87;
         }
         ossl_cmp_print_log(4, param_1, "check_cert_path_3gpp", "crypto/cmp/cmp_vfy.c", 0x157, &_LC0, &_LC15, "also exceptional 3GPP mode cert path validation failed");
      }
   }
   uVar2 = 0;
   LAB_00100d87:X509_STORE_free(v);
   return uVar2;
}bool check_msg_given_cert(long param_1, undefined8 param_2, undefined8 param_3) {
   int iVar1;
   iVar1 = cert_acceptable(param_1, "previously validated", "sender cert", param_2, 0, 0, param_3);
   if (iVar1 != 0) {
      iVar1 = OSSL_CMP_validate_cert_path(param_1, *(undefined8*)( param_1 + 0xa8 ), param_2);
      if (iVar1 != 0) {
         return true;
      }
      ossl_cmp_print_log(4, param_1, "check_cert_path", "crypto/cmp/cmp_vfy.c", 0x13a, &_LC0, &_LC15, "msg signature validates but cert path validation failed");
      if (*(int*)( param_1 + 0xbc ) != 0) {
         iVar1 = check_cert_path_3gpp_part_0(param_1, param_3, param_2);
         return iVar1 != 0;
      }
   }
   return false;
}undefined8 check_msg_with_certs(long param_1, undefined8 param_2, char *param_3, long param_4, undefined8 param_5, undefined8 param_6, int param_7) {
   int iVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   char *pcVar5;
   int local_3c;
   local_3c = param_7;
   iVar1 = OPENSSL_sk_num(param_2);
   if (iVar1 < 1) {
      uVar4 = 0x189;
      pcVar5 = "no %s";
   } else {
      iVar1 = 0;
      if (param_7 == 0) {
         for (; iVar2 = OPENSSL_sk_num(param_2),iVar1 < iVar2; iVar1 = iVar1 + 1) {
            lVar3 = OPENSSL_sk_value(param_2, iVar1);
            if (lVar3 == 0) {
               return 0;
            }
            iVar2 = cert_acceptable(param_1, "cert from", param_3, lVar3, param_4, param_5, param_6);
            if (iVar2 != 0) {
               iVar2 = OSSL_CMP_validate_cert_path(param_1, *(undefined8*)( param_1 + 0xa8 ), lVar3);
               if (iVar2 != 0) goto LAB_00100fd3;
               local_3c = local_3c + 1;
               ossl_cmp_print_log(4, param_1, "check_cert_path", "crypto/cmp/cmp_vfy.c", 0x13a, &_LC0, &_LC15, "msg signature validates but cert path validation failed");
            }
         }
      } else {
         local_3c = 0;
         for (; iVar2 = OPENSSL_sk_num(param_2),iVar1 < iVar2; iVar1 = iVar1 + 1) {
            lVar3 = OPENSSL_sk_value(param_2, iVar1);
            if (lVar3 == 0) {
               return 0;
            }
            iVar2 = cert_acceptable(param_1, "cert from", param_3, lVar3, param_4, param_5, param_6);
            if (iVar2 != 0) {
               if (( *(int*)( param_1 + 0xbc ) != 0 ) && ( iVar2 = check_cert_path_3gpp_part_0(param_1, param_6, lVar3) ),iVar2 != 0) {
                  LAB_00100fd3:uVar4 = ossl_cmp_ctx_set1_validatedSrvCert(param_1, lVar3);
                  return uVar4;
               }
               local_3c = local_3c + 1;
            }
         }
      }
      if (param_4 != 0) {
         return 0;
      }
      if (local_3c != 0) {
         return 0;
      }
      uVar4 = 0x19d;
      param_3 = "no acceptable cert in extraCerts";
      pcVar5 = "%s";
   }
   ossl_cmp_print_log(4, param_1, "check_msg_with_certs", "crypto/cmp/cmp_vfy.c", uVar4, &_LC0, pcVar5, param_3);
   return 0;
}undefined4 check_msg_all_certs(long param_1, long param_2, int param_3) {
   int iVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   char *pcVar4;
   if (( *(int*)( param_1 + 0xbc ) == 0 ) || ( iVar1 = iVar1 != 1 )) {
      if (param_3 != 0) {
         return 0;
      }
   } else {
      ossl_cmp_print_log(6, param_1, "check_msg_all_certs", "crypto/cmp/cmp_vfy.c", 0x1ad, &_LC3, &_LC15);
   }
   iVar1 = check_msg_with_certs(param_1, *(undefined8*)( param_2 + 0x18 ), "extraCerts", 0, 0, param_2, param_3);
   if (( iVar1 == 0 ) && ( iVar1 = check_msg_with_certs(param_1, *(undefined8*)( param_1 + 0xb0 ), "untrusted certs", *(undefined8*)( param_2 + 0x18 ), 0, param_2, param_3) ),iVar1 == 0) {
      if (*(long*)( param_1 + 0xa8 ) == 0) {
         pcVar4 = "no trusted store";
         if (param_3 != 0) {
            pcVar4 = "no self-issued extraCerts";
         }
         ossl_cmp_print_log(4, param_1, "check_msg_all_certs", "crypto/cmp/cmp_vfy.c", 0x1bb, &_LC0, &_LC15, pcVar4);
         return 0;
      }
      uVar3 = X509_STORE_get1_all_certs();
      pcVar4 = "certs in trusted store";
      if (param_3 != 0) {
         pcVar4 = "self-issued extraCerts";
      }
      uVar2 = check_msg_with_certs(param_1, uVar3, pcVar4, *(undefined8*)( param_2 + 0x18 ), *(undefined8*)( param_1 + 0xb0 ), param_2, param_3);
      OSSL_STACK_OF_X509_free(uVar3);
      return uVar2;
   }
   return 1;
}undefined8 OSSL_CMP_validate_msg(long param_1, long *param_2) {
   long lVar1;
   long *plVar2;
   int *piVar3;
   int iVar4;
   ASN1_BIT_STRING *a;
   ulong uVar5;
   undefined8 uVar6;
   char *pcVar7;
   char *pcVar8;
   ASN1_OCTET_STRING *local_48;
   ossl_cmp_print_log(7, param_1, "OSSL_CMP_validate_msg", "crypto/cmp/cmp_vfy.c", 0x237, "DEBUG", &_LC15, "validating CMP message");
   if (( ( ( param_1 == 0 ) || ( param_2 == (long*)0x0 ) ) || ( *param_2 == 0 ) ) || ( param_2[1] == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x23a, "OSSL_CMP_validate_msg");
      ERR_set_error(0x3a, 0x67, 0);
      return 0;
   }
   if (( ( *(long*)( *param_2 + 0x20 ) == 0 ) || ( param_2[2] == 0 ) ) || ( *(long*)( param_2[2] + 8 ) == 0 )) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x240, "OSSL_CMP_validate_msg");
      ERR_set_error(0x3a, 0x8f, 0);
      return 0;
   }
   iVar4 = ossl_cmp_hdr_get_protection_nid();
   if (iVar4 == 0x30e) {
      if (*(long*)( param_1 + 0xe8 ) == 0) {
         ossl_cmp_print_log(6, param_1, "OSSL_CMP_validate_msg", "crypto/cmp/cmp_vfy.c", 0x248, &_LC3, &_LC15, "no secret available for verifying PBM-based CMP message protection");
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x249, "OSSL_CMP_validate_msg");
         ERR_set_error(0x3a, 0xb2, 0);
         return 0;
      }
      a = (ASN1_BIT_STRING*)ossl_cmp_calc_protection(param_1, param_2);
      if (a == (ASN1_BIT_STRING*)0x0) {
         LAB_001015ac:ossl_cmp_print_log(4, param_1, "OSSL_CMP_validate_msg", "crypto/cmp/cmp_vfy.c", 0x26a, &_LC0, &_LC15, "verifying PBM-based CMP message protection failed");
         return 0;
      }
      plVar2 = (long*)param_2[2];
      if (( ( plVar2 == (long*)0x0 ) || ( (int)*plVar2 < 0 ) ) || ( ( lVar1._0_4_ = a->length ),lVar1._4_4_ = a->type,*plVar2 != lVar1 || ( iVar4 = CRYPTO_memcmp((void*)plVar2[1], a->data, (long)a->length) ),iVar4 != 0 )) {
         ASN1_BIT_STRING_free(a);
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x5e, "verify_PBMAC");
         ERR_set_error(0x3a, 0x9b, 0);
         goto LAB_001015ac;
      }
      ASN1_BIT_STRING_free(a);
      iVar4 = OSSL_CMP_MSG_get_bodytype(param_2);
      if (iVar4 + 1U < 0x10) {
         uVar5 = 1L << ( ( byte )(iVar4 + 1U) & 0x3f );
         if (( uVar5 & 0x8214 ) == 0) {
            if (( uVar5 & 1 ) != 0) {
               return 0;
            }
         } else if (( *(long*)( param_1 + 0xa8 ) != 0 ) && ( iVar4 = ossl_cmp_X509_STORE_add1_certs(*(long*)( param_1 + 0xa8 ), **(undefined8**)( param_2[1] + 8 ), 0) ),iVar4 == 0) {
            return 0;
         }
      }
      uVar6 = 0x266;
      pcVar7 = "successfully validated PBM-based CMP message protection";
      goto LAB_00101550;
   }
   if (iVar4 == 0x30f) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x272, "OSSL_CMP_validate_msg");
      ERR_set_error(0x3a, 0x9a, 0);
      return 0;
   }
   lVar1 = *(long*)( param_1 + 0x90 );
   if (lVar1 != 0) {
      iVar4 = verify_signature(param_1, param_2, lVar1);
      if (iVar4 == 0) {
         ossl_cmp_print_log(4, param_1, "OSSL_CMP_validate_msg", "crypto/cmp/cmp_vfy.c", 0x28c, &_LC0, &_LC15, "CMP message signature verification failed");
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x28d, "OSSL_CMP_validate_msg");
         ERR_set_error(0x3a, 0x97, 0);
         return 0;
      }
      ossl_cmp_print_log(7, param_1, "OSSL_CMP_validate_msg", "crypto/cmp/cmp_vfy.c", 0x288, "DEBUG", &_LC15, "successfully validated signature-based CMP message protection using pinned server cert");
      uVar6 = ossl_cmp_ctx_set1_validatedSrvCert(param_1, lVar1);
      return uVar6;
   }
   if (( *(long*)( param_1 + 0xa8 ) == 0 ) && ( *(long*)( param_1 + 0xe8 ) != 0 )) {
      ossl_cmp_print_log(6, param_1, "OSSL_CMP_validate_msg", "crypto/cmp/cmp_vfy.c", 0x27c, &_LC3, &_LC15, "no trust store nor pinned server cert available for verifying signature-based CMP message protection");
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x27d, "OSSL_CMP_validate_msg");
      ERR_set_error(0x3a, 0xb3, 0);
      return 0;
   }
   lVar1 = *(long*)( param_1 + 0x98 );
   piVar3 = *(int**)( *param_2 + 8 );
   local_48 = *(ASN1_OCTET_STRING**)( *param_2 + 0x28 );
   uVar6 = *(undefined8*)( param_1 + 0x10 );
   if (piVar3 == (int*)0x0) {
      return 0;
   }
   if (param_2[1] == 0) {
      return 0;
   }
   if (*piVar3 != 4) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x1dc, "check_msg_find_cert");
      ERR_set_error(0x3a, 0x96, 0);
      return 0;
   }
   OSSL_CMP_CTX_print_errors(param_1);
   ERR_set_mark();
   *(undefined8*)( param_1 + 0x10 ) = 0;
   if (lVar1 == 0) {
      LAB_00101863:iVar4 = check_msg_all_certs(param_1, param_2, 0);
      if (( iVar4 == 0 ) && ( iVar4 = iVar4 == 0 )) {
         *(undefined8*)( param_1 + 0x10 ) = uVar6;
         ERR_clear_last_mark();
         pcVar7 = X509_NAME_oneline(*(X509_NAME**)( piVar3 + 2 ), (char*)0x0, 0);
         if (local_48 != (ASN1_OCTET_STRING*)0x0) {
            local_48 = (ASN1_OCTET_STRING*)i2s_ASN1_OCTET_STRING((X509V3_EXT_METHOD*)0x0, local_48);
         }
         if (*(long*)( param_1 + 0x10 ) != 0) {
            ossl_cmp_print_log(6, param_1, "check_msg_find_cert", "crypto/cmp/cmp_vfy.c", 0x207, &_LC3, &_LC15, "trying to verify msg signature with a valid cert that..");
            if (pcVar7 != (char*)0x0) {
               ossl_cmp_print_log(6, param_1, "check_msg_find_cert", "crypto/cmp/cmp_vfy.c", 0x209, &_LC3, "matches msg sender    = %s", pcVar7);
            }
            if (local_48 == (ASN1_OCTET_STRING*)0x0) {
               uVar6 = 0x20d;
               pcVar8 = "%s";
            } else {
               uVar6 = 0x20b;
               pcVar8 = "matches msg senderKID = %s";
            }
            ossl_cmp_print_log(6, param_1, "check_msg_find_cert", "crypto/cmp/cmp_vfy.c", uVar6, &_LC3, pcVar8);
            check_msg_all_certs(param_1, param_2, 0);
            check_msg_all_certs(param_1, param_2, 1);
         }
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x213, "check_msg_find_cert");
         ERR_set_error(0x3a, 0x91, 0);
         if (pcVar7 != (char*)0x0) {
            ERR_add_error_txt(0, "for msg sender name = ");
            ERR_add_error_txt(0, pcVar7);
         }
         if (local_48 != (ASN1_OCTET_STRING*)0x0) {
            ERR_add_error_txt(" and ", "for msg senderKID = ");
            ERR_add_error_txt(0, local_48);
         }
         CRYPTO_free(pcVar7);
         CRYPTO_free(local_48);
         return 0;
      }
      *(undefined8*)( param_1 + 0x10 ) = uVar6;
      ERR_pop_to_mark();
      for (int i_2072 = 0; i_2072 < 2; i_2072++) {
         CRYPTO_free((void*)0);
      }
   } else {
      iVar4 = check_msg_given_cert(param_1, lVar1, param_2);
      if (iVar4 == 0) {
         ossl_cmp_ctx_set1_validatedSrvCert(param_1, 0);
         ossl_cmp_print_log(6, param_1, "check_msg_find_cert", "crypto/cmp/cmp_vfy.c", 500, &_LC3, &_LC15, "trying to verify msg signature with previously validated cert");
         check_msg_given_cert(param_1, lVar1, param_2);
         goto LAB_00101863;
      }
      *(undefined8*)( param_1 + 0x10 ) = uVar6;
      ERR_pop_to_mark();
   }
   uVar6 = 0x281;
   pcVar7 = "successfully validated signature-based CMP message protection using trust store";
   LAB_00101550:ossl_cmp_print_log(7, param_1, "OSSL_CMP_validate_msg", "crypto/cmp/cmp_vfy.c", uVar6, "DEBUG", &_LC15, pcVar7);
   return 1;
}/* WARNING: Type propagation algorithm not settling */bool ossl_cmp_msg_check_update(long param_1, long *param_2, code *param_3, undefined4 param_4) {
   X509_NAME *a;
   bool bVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   long lVar5;
   undefined8 uVar6;
   X509_NAME *pXVar7;
   X509 *pXVar8;
   char *ptr;
   ulong uVar9;
   char *pcVar10;
   bool bVar11;
   if (param_1 == 0) {
      return false;
   }
   if (param_2 == (long*)0x0) {
      return false;
   }
   if (*param_2 == 0) {
      return false;
   }
   lVar5 = OSSL_CMP_MSG_get0_header(param_2);
   pXVar7 = *(X509_NAME**)( param_1 + 0xa0 );
   if (( pXVar7 != (X509_NAME*)0x0 ) || ( ( *(X509**)( param_1 + 0x90 ) != (X509*)0x0 && ( pXVar7 = X509_get_subject_name(*(X509**)( param_1 + 0x90 )) ),pXVar7 != (X509_NAME*)0x0 ) )) {
      if (**(int**)( lVar5 + 8 ) != 4) {
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x2d3, "ossl_cmp_msg_check_update");
         ERR_set_error(0x3a, 0x96, 0);
         return false;
      }
      a = *(X509_NAME**)( *(int**)( lVar5 + 8 ) + 2 );
      iVar2 = check_name(param_1, 0, "sender DN field", a, "expected sender", pXVar7);
      if (iVar2 == 0) {
         ptr = X509_NAME_oneline(a, (char*)0x0, 0);
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x2df, "ossl_cmp_msg_check_update");
         pcVar10 = "<unknown>";
         if (ptr != (char*)0x0) {
            pcVar10 = ptr;
         }
         ERR_set_error(0x3a, 0x6a, pcVar10);
         CRYPTO_free(ptr);
         return false;
      }
   }
   uVar6 = OPENSSL_sk_num(param_2[3]);
   if (10 < (int)uVar6) {
      ossl_cmp_print_log(4, param_1, "ossl_cmp_msg_check_update", "crypto/cmp/cmp_vfy.c", 0x2e9, &_LC0, "received CMP message contains %d extraCerts", uVar6);
   }
   iVar2 = 0;
   if (*(long*)( param_1 + 0xb0 ) != 0) {
      iVar2 = OPENSSL_sk_num();
   }
   iVar3 = ossl_x509_add_certs_new(param_1 + 0xb0, param_2[3], 7);
   iVar4 = 0;
   if (*(long*)( param_1 + 0xb0 ) != 0) {
      iVar4 = OPENSSL_sk_num();
   }
   iVar4 = iVar4 - iVar2;
   if (iVar3 == 0) {
      if (iVar4 < 1) {
         return false;
      }
      do {
         iVar4 = iVar4 + -1;
         pXVar8 = (X509*)OPENSSL_sk_shift(*(undefined8*)( param_1 + 0xb0 ));
         X509_free(pXVar8);
      } while ( iVar4 != 0 );
      return false;
   }
   if (*(long*)( lVar5 + 0x20 ) == 0) {
      if (param_3 != (code*)0x0) {
         iVar2 = ( *param_3 )(param_1, param_2, 0, param_4);
         if (iVar2 < 1) {
            iVar2 = *(int*)( param_1 + 0x8c );
            goto joined_r0x00101f60;
         }
         goto LAB_00101c98;
      }
      if (( *(int*)( param_1 + 0x8c ) == 0 ) || ( iVar2 = iVar4 < 1 )) goto LAB_00101f00;
      bVar1 = false;
      LAB_00101cc0:do {
         pXVar8 = (X509*)OPENSSL_sk_shift(*(undefined8*)( param_1 + 0xb0 ));
         X509_free(pXVar8);
         bVar11 = iVar2 != 0;
         iVar2 = iVar2 + -1;
      } while ( bVar11 );
      if (bVar1) {
         LAB_00101da0:iVar2 = ossl_cmp_hdr_get_pvno(lVar5);
         if (( iVar2 == 2 ) || ( iVar2 = iVar2 == 3 )) {
            iVar2 = OSSL_CMP_MSG_get_bodytype(param_2);
            if (iVar2 < 0) {
               ERR_new();
               ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x324, "ossl_cmp_msg_check_update");
               ERR_set_error(0x3a, 0x92, 0);
            } else {
               iVar2 = check_transactionID_or_nonce(*(undefined8*)( param_1 + 0x118 ), *(undefined8*)( lVar5 + 0x38 ), 0x98);
               if (iVar2 != 0) {
                  ERR_set_mark();
                  iVar2 = check_transactionID_or_nonce(*(undefined8*)( param_1 + 0x120 ), *(undefined8*)( lVar5 + 0x48 ), 0x94);
                  if (( iVar2 == 0 ) && ( ( ( *(long*)( param_1 + 0x130 ) == 0 || ( iVar2 = OSSL_CMP_MSG_get_bodytype(param_2) ),iVar2 == 0x1a ) ) || ( iVar2 = check_transactionID_or_nonce(*(undefined8*)( param_1 + 0x130 ), *(undefined8*)( lVar5 + 0x48 ), 0x94) ),iVar2 == 0 )) {
                     ERR_clear_last_mark();
                  } else {
                     ERR_pop_to_mark();
                     if (( ( *(long*)( param_1 + 0x118 ) != 0 ) || ( iVar2 = OSSL_CMP_CTX_set1_transactionID(param_1, *(undefined8*)( lVar5 + 0x38 )) ),iVar2 != 0 )) {
                        iVar2 = ossl_cmp_hdr_get_protection_nid(lVar5);
                        if (( ( iVar2 == 0x30e ) && ( uVar9 = OSSL_CMP_MSG_get_bodytype(param_2) ),(uint)uVar9 < 0xf )) {
                           iVar2 = ossl_cmp_X509_STORE_add1_certs(*(long*)( param_1 + 0xa8 ), **(undefined8**)( param_2[1] + 8 ), 0);
                           return iVar2 != 0;
                        }
                        return true;
                     }
                  }
               }
            }
         } else {
            ERR_new();
            ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x31d, "ossl_cmp_msg_check_update");
            ERR_set_error(0x3a, 0x99, 0);
         }
         return false;
      }
   } else {
      iVar2 = OSSL_CMP_validate_msg(param_1, param_2);
      if (( iVar2 != 0 ) || ( ( param_3 != (code*)0x0 && ( iVar2 = ( *param_3 )(param_1, param_2, 1, param_4) ),0 < iVar2 ) )) {
         LAB_00101c98:if (*(int*)( param_1 + 0x8c ) == 0) goto LAB_00101da0;
         iVar2 = iVar4 + -1;
         bVar1 = true;
         if (iVar4 < 1) goto LAB_00101da0;
         goto LAB_00101cc0;
      }
      iVar2 = *(int*)( param_1 + 0x8c );
      joined_r0x00101f60:if (iVar2 != 0) {
         bVar1 = false;
         iVar2 = iVar4 + -1;
         if (0 < iVar4) goto LAB_00101cc0;
      }
   }
   if (*(long*)( lVar5 + 0x20 ) != 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x313, "ossl_cmp_msg_check_update");
      ERR_set_error(0x3a, 0x8c, 0);
      return false;
   }
   LAB_00101f00:ERR_new();
   ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x315, "ossl_cmp_msg_check_update");
   ERR_set_error(0x3a, 0x8f, 0);
   return false;
}bool ossl_cmp_verify_popo(undefined8 *param_1, long param_2, undefined8 param_3) {
   uint uVar1;
   uint *puVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   int iVar6;
   undefined8 uVar7;
   if (( param_2 == 0 ) || ( puVar2 = *(uint**)( param_2 + 8 ) ),puVar2 == (uint*)0x0) {
      return false;
   }
   uVar1 = *puVar2;
   if (uVar1 == 4) {
      uVar3 = *(undefined8*)( puVar2 + 2 );
      uVar4 = param_1[1];
      uVar5 = *param_1;
      uVar7 = X509_REQ_get0_pubkey(uVar3);
      iVar6 = X509_REQ_verify_ex(uVar3, uVar7, uVar5, uVar4);
      if (0 < iVar6) {
         return true;
      }
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x379, "ossl_cmp_verify_popo");
      ERR_set_error(0x3a, 0x95, 0);
      return false;
   }
   if ((int)uVar1 < 5) {
      if (( uVar1 & 0xfffffffd ) == 0) {
         LAB_001020d5:iVar6 = OSSL_CRMF_MSGS_verify_popo(*(undefined8*)( puVar2 + 2 ), 0, param_3, *param_1, param_1[1]);
         return iVar6 != 0;
      }
   } else if (uVar1 == 7) goto LAB_001020d5;
   ERR_new();
   ERR_set_debug("crypto/cmp/cmp_vfy.c", 0x38b, "ossl_cmp_verify_popo");
   ERR_set_error(0x3a, 0x92, 0);
   return false;
}

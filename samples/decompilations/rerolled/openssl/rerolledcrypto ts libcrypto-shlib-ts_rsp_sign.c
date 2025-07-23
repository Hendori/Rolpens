void *TS_RESP_CTX_new_ex(undefined8 param_1, char *param_2) {
   void *ptr;
   char *pcVar1;
   ptr = (void*)CRYPTO_zalloc(0xb8, "crypto/ts/ts_rsp_sign.c", 0x62);
   if (ptr == (void*)0x0) {
      LAB_0010009e:ptr = (void*)0x0;
   }
 else {
      if (param_2 != (char*)0x0) {
         pcVar1 = CRYPTO_strdup(param_2, "crypto/ts/ts_rsp_sign.c", 0x66);
         *(char**)( (long)ptr + 0xb0 ) = pcVar1;
         if (pcVar1 == (char*)0x0) {
            CRYPTO_free(ptr);
            goto LAB_0010009e;
         }

      }

      *(undefined8*)( (long)ptr + 0xa8 ) = param_1;
      *(code**)( (long)ptr + 0x60 ) = def_serial_cb;
      *(code**)( (long)ptr + 0x70 ) = def_time_cb;
      *(code**)( (long)ptr + 0x80 ) = def_extension_cb;
   }

   return ptr;
}
void TS_RESP_CTX_new(void) {
   TS_RESP_CTX_new_ex(0, 0);
   return;
}
void TS_RESP_CTX_free(undefined8 *param_1) {
   if (param_1 != (undefined8*)0x0) {
      CRYPTO_free((void*)param_1[0x16]);
      X509_free((X509*)*param_1);
      EVP_PKEY_free((EVP_PKEY*)param_1[1]);
      OSSL_STACK_OF_X509_free(param_1[4]);
      OPENSSL_sk_pop_free(param_1[5], ASN1_OBJECT_free);
      ASN1_OBJECT_free((ASN1_OBJECT*)param_1[6]);
      OPENSSL_sk_free(param_1[7]);
      for (int i = 0; i < 3; i++) {
         ASN1_INTEGER_free((ASN1_INTEGER*)param_1[( i + 8 )]);
      }

      CRYPTO_free(param_1);
      return;
   }

   return;
}
undefined8 TS_RESP_CTX_set_signer_cert(undefined8 *param_1, X509 *param_2) {
   int iVar1;
   iVar1 = X509_check_purpose(param_2, 9, 0);
   if (iVar1 == 1) {
      iVar1 = X509_up_ref(param_2);
      if (iVar1 != 0) {
         X509_free((X509*)*param_1);
         *param_1 = param_2;
         return 1;
      }

   }
 else {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x8e, "TS_RESP_CTX_set_signer_cert");
      ERR_set_error(0x2f, 0x75, 0);
   }

   return 0;
}
undefined8 TS_RESP_CTX_set_signer_key(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   uVar1 = EVP_PKEY_up_ref(param_2);
   if ((int)uVar1 != 0) {
      EVP_PKEY_free(*(EVP_PKEY**)( param_1 + 8 ));
      *(undefined8*)( param_1 + 8 ) = param_2;
      uVar1 = 1;
   }

   return uVar1;
}
undefined8 TS_RESP_CTX_set_signer_digest(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x10 ) = param_2;
   return 1;
}
bool TS_RESP_CTX_set_def_policy(long param_1, ASN1_OBJECT *param_2) {
   ASN1_OBJECT *pAVar1;
   ASN1_OBJECT_free(*(ASN1_OBJECT**)( param_1 + 0x30 ));
   pAVar1 = OBJ_dup(param_2);
   *(ASN1_OBJECT**)( param_1 + 0x30 ) = pAVar1;
   if (pAVar1 == (ASN1_OBJECT*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0xb2, "TS_RESP_CTX_set_def_policy");
      ERR_set_error(0x2f, 0x80008, 0);
   }

   return pAVar1 != (ASN1_OBJECT*)0x0;
}
bool TS_RESP_CTX_set_certs(long param_1, long param_2) {
   long lVar1;
   bool bVar2;
   OSSL_STACK_OF_X509_free(*(undefined8*)( param_1 + 0x20 ));
   *(undefined8*)( param_1 + 0x20 ) = 0;
   bVar2 = true;
   if (param_2 != 0) {
      lVar1 = X509_chain_up_ref(param_2);
      bVar2 = lVar1 != 0;
      *(long*)( param_1 + 0x20 ) = lVar1;
   }

   return bVar2;
}
undefined8 TS_RESP_CTX_add_policy(long param_1, ASN1_OBJECT *param_2) {
   int iVar1;
   ASN1_OBJECT *a;
   long lVar2;
   if (*(long*)( param_1 + 0x28 ) == 0) {
      lVar2 = OPENSSL_sk_new_null();
      *(long*)( param_1 + 0x28 ) = lVar2;
      if (lVar2 != 0) goto LAB_00100337;
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0xc4, "TS_RESP_CTX_add_policy");
      ERR_set_error(0x2f, 0x8000f, 0);
   }
 else {
      LAB_00100337:a = OBJ_dup(param_2);
      if (a != (ASN1_OBJECT*)0x0) {
         iVar1 = OPENSSL_sk_push(*(undefined8*)( param_1 + 0x28 ), a);
         if (iVar1 != 0) {
            return 1;
         }

         ERR_new();
         ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0xcc, "TS_RESP_CTX_add_policy");
         ERR_set_error(0x2f, 0x8000f, 0);
         goto LAB_001003b2;
      }

      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_sign.c", 200, "TS_RESP_CTX_add_policy");
      ERR_set_error(0x2f, 0x80008, 0);
   }

   a = (ASN1_OBJECT*)0x0;
   LAB_001003b2:ASN1_OBJECT_free(a);
   return 0;
}
undefined8 TS_RESP_CTX_add_md(long param_1, undefined8 param_2) {
   int iVar1;
   long lVar2;
   lVar2 = *(long*)( param_1 + 0x38 );
   if (lVar2 == 0) {
      lVar2 = OPENSSL_sk_new_null();
      *(long*)( param_1 + 0x38 ) = lVar2;
      if (lVar2 == 0) goto LAB_0010048b;
   }

   iVar1 = OPENSSL_sk_push(lVar2, param_2);
   if (iVar1 != 0) {
      return 1;
   }

   LAB_0010048b:ERR_new();
   ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0xe0, "TS_RESP_CTX_add_md");
   ERR_set_error(0x2f, 0x8000f, 0);
   return 0;
}
undefined8 TS_RESP_CTX_set_accuracy(long param_1, int param_2, int param_3, int param_4) {
   int iVar1;
   ASN1_INTEGER *pAVar2;
   for (int i = 0; i < 3; i++) {
      ASN1_INTEGER_free(*(ASN1_INTEGER**)( param_1 + ( 8*i + 64 ) ));
      *(undefined8*)( param_1 + ( 8*i + 64 ) ) = 0;
   }

   if (param_2 == 0) {
      if (param_3 == 0) goto LAB_0010052d;
      LAB_00100610:pAVar2 = ASN1_INTEGER_new();
      *(ASN1_INTEGER**)( param_1 + 0x48 ) = pAVar2;
      if (( pAVar2 != (ASN1_INTEGER*)0x0 ) && ( iVar1 = iVar1 != 0 )) goto LAB_0010052d;
   }
 else {
      pAVar2 = ASN1_INTEGER_new();
      *(ASN1_INTEGER**)( param_1 + 0x40 ) = pAVar2;
      if (pAVar2 == (ASN1_INTEGER*)0x0) goto LAB_0010056c;
      iVar1 = ASN1_INTEGER_set(pAVar2, (long)param_2);
      if (iVar1 == 0) goto LAB_00100568;
      if (param_3 != 0) goto LAB_00100610;
      LAB_0010052d:if (param_4 == 0) {
         return 1;
      }

      pAVar2 = ASN1_INTEGER_new();
      *(ASN1_INTEGER**)( param_1 + 0x50 ) = pAVar2;
      if (( pAVar2 != (ASN1_INTEGER*)0x0 ) && ( iVar1 = iVar1 != 0 )) {
         return 1;
      }

   }

   LAB_00100568:pAVar2 = *(ASN1_INTEGER**)( param_1 + 0x40 );
   LAB_0010056c:ASN1_INTEGER_free(pAVar2);
   *(undefined8*)( param_1 + 0x40 ) = 0;
   ASN1_INTEGER_free(*(ASN1_INTEGER**)( param_1 + 0x48 ));
   *(undefined8*)( param_1 + 0x48 ) = 0;
   ASN1_INTEGER_free(*(ASN1_INTEGER**)( param_1 + 0x50 ));
   *(undefined8*)( param_1 + 0x50 ) = 0;
   ERR_new();
   ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x101, "TS_RESP_CTX_set_accuracy");
   ERR_set_error(0x2f, 0x8000d, 0);
   return 0;
}
void TS_RESP_CTX_add_flags(long param_1, uint param_2) {
   *(uint*)( param_1 + 0x5c ) = *(uint*)( param_1 + 0x5c ) | param_2;
   return;
}
void TS_RESP_CTX_set_serial_cb(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x60 ) = param_2;
   *(undefined8*)( param_1 + 0x68 ) = param_3;
   return;
}
void TS_RESP_CTX_set_time_cb(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x70 ) = param_2;
   *(undefined8*)( param_1 + 0x78 ) = param_3;
   return;
}
void TS_RESP_CTX_set_extension_cb(long param_1, undefined8 param_2, undefined8 param_3) {
   *(undefined8*)( param_1 + 0x80 ) = param_2;
   *(undefined8*)( param_1 + 0x88 ) = param_3;
   return;
}
undefined4 TS_RESP_CTX_set_status_info(long param_1, int param_2, char *param_3) {
   int iVar1;
   undefined8 *puVar2;
   ASN1_UTF8STRING *str;
   size_t sVar3;
   long lVar4;
   undefined4 uVar5;
   undefined8 uVar6;
   puVar2 = (undefined8*)TS_STATUS_INFO_new();
   if (puVar2 == (undefined8*)0x0) {
      ERR_new();
      uVar6 = 0x125;
   }
 else {
      iVar1 = ASN1_INTEGER_set((ASN1_INTEGER*)*puVar2, (long)param_2);
      if (iVar1 == 0) {
         ERR_new();
         str = (ASN1_UTF8STRING*)0x0;
         ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x129, "TS_RESP_CTX_set_status_info");
         ERR_set_error(0x2f, 0x8000d, 0);
         uVar5 = 0;
         goto LAB_00100732;
      }

      if (param_3 != (char*)0x0) {
         str = ASN1_UTF8STRING_new();
         if (str != (ASN1_UTF8STRING*)0x0) {
            sVar3 = strlen(param_3);
            iVar1 = ASN1_STRING_set(str, param_3, (int)sVar3);
            if (iVar1 != 0) {
               lVar4 = puVar2[1];
               if (lVar4 == 0) {
                  lVar4 = OPENSSL_sk_new_null();
                  puVar2[1] = lVar4;
                  if (lVar4 != 0) goto LAB_00100702;
                  ERR_new(0);
                  uVar6 = 0x134;
               }
 else {
                  LAB_00100702:iVar1 = OPENSSL_sk_push(lVar4, str);
                  if (iVar1 != 0) goto LAB_00100712;
                  ERR_new();
                  uVar6 = 0x138;
               }

               uVar5 = 0;
               ERR_set_debug("crypto/ts/ts_rsp_sign.c", uVar6, "TS_RESP_CTX_set_status_info");
               ERR_set_error(0x2f, 0x8000f, 0);
               goto LAB_00100732;
            }

         }

         ERR_new();
         uVar5 = 0;
         ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x12f, "TS_RESP_CTX_set_status_info");
         ERR_set_error(0x2f, 0x8000d, 0);
         goto LAB_00100732;
      }

      LAB_00100712:uVar5 = 1;
      str = (ASN1_UTF8STRING*)0x0;
      iVar1 = TS_RESP_set_status_info(*(undefined8*)( param_1 + 0x98 ), puVar2);
      if (iVar1 != 0) goto LAB_00100732;
      ERR_new();
      uVar6 = 0x13e;
   }

   uVar5 = 0;
   str = (ASN1_UTF8STRING*)0x0;
   ERR_set_debug("crypto/ts/ts_rsp_sign.c", uVar6, "TS_RESP_CTX_set_status_info");
   ERR_set_error(0x2f, 0x8002f, 0);
   LAB_00100732:TS_STATUS_INFO_free(puVar2);
   ASN1_UTF8STRING_free(str);
   return uVar5;
}
ASN1_INTEGER *def_serial_cb(undefined8 param_1) {
   int iVar1;
   ASN1_INTEGER *a;
   a = ASN1_INTEGER_new();
   if (a != (ASN1_INTEGER*)0x0) {
      iVar1 = ASN1_INTEGER_set(a, 1);
      if (iVar1 != 0) {
         return a;
      }

   }

   ERR_new();
   ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x37, "def_serial_cb");
   ERR_set_error(0x2f, 0x8000d, 0);
   TS_RESP_CTX_set_status_info(param_1, 2, "Error during serial number generation.");
   ASN1_INTEGER_free(a);
   return (ASN1_INTEGER*)0x0;
}
undefined8 TS_RESP_CTX_set_status_info_cond(long param_1, undefined4 param_2, undefined8 param_3) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = ASN1_INTEGER_get(*(ASN1_INTEGER**)**(undefined8**)( param_1 + 0x98 ));
   if (lVar1 != 0) {
      return 1;
   }

   uVar2 = TS_RESP_CTX_set_status_info(param_1, param_2, param_3);
   return uVar2;
}
undefined8 TS_RESP_CTX_add_failure_info(long param_1, int param_2) {
   long lVar1;
   int iVar2;
   ASN1_BIT_STRING *a;
   lVar1 = **(long**)( param_1 + 0x98 );
   a = *(ASN1_BIT_STRING**)( lVar1 + 0x10 );
   if (a == (ASN1_BIT_STRING*)0x0) {
      a = ASN1_BIT_STRING_new();
      *(ASN1_BIT_STRING**)( lVar1 + 0x10 ) = a;
      if (a == (ASN1_BIT_STRING*)0x0) goto LAB_001009c1;
   }

   iVar2 = ASN1_BIT_STRING_set_bit(a, param_2, 1);
   if (iVar2 != 0) {
      return 1;
   }

   LAB_001009c1:ERR_new();
   ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x15e, "TS_RESP_CTX_add_failure_info");
   ERR_set_error(0x2f, 0x8000d, 0);
   return 0;
}
undefined8 def_extension_cb(undefined8 param_1) {
   TS_RESP_CTX_set_status_info(param_1, 2, "Unsupported extension.");
   TS_RESP_CTX_add_failure_info(param_1, 0x10);
   return 0;
}
undefined8 def_time_cb(undefined8 param_1, undefined8 param_2, ulong *param_3, ulong *param_4) {
   ulong uVar1;
   ulong uVar2;
   uVar1 = ossl_time_now();
   if (uVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x46, "def_time_cb");
      ERR_set_error(0x2f, 0x7a, 0);
      TS_RESP_CTX_set_status_info(param_1, 2, "Time is not available.");
      TS_RESP_CTX_add_failure_info(param_1, 0xe);
      return 0;
   }

   if (uVar1 < 0xfffffffffffffc19) {
      uVar2 = ( uVar1 + 999 ) / 1000000000;
      uVar1 = ( ( uVar1 + 999 ) % 1000000000 ) / 1000;
   }
 else {
      uVar2 = 0x44b82fa09;
      uVar1 = 0xad3af;
   }

   *param_3 = uVar2;
   *param_4 = uVar1;
   return 1;
}
undefined8 TS_RESP_CTX_get_request(long param_1) {
   return *(undefined8*)( param_1 + 0x90 );
}
undefined8 TS_RESP_CTX_get_tst_info(long param_1) {
   return *(undefined8*)( param_1 + 0xa0 );
}
bool TS_RESP_CTX_set_clock_precision_digits(long param_1, uint param_2) {
   if (param_2 < 7) {
      *(uint*)( param_1 + 0x58 ) = param_2;
   }

   return param_2 < 7;
}
undefined8 TS_RESP_create_response(undefined8 *param_1, undefined8 param_2) {
   uint uVar1;
   long *plVar2;
   undefined8 *puVar3;
   ASN1_OBJECT *a;
   bool bVar4;
   char *pcVar5;
   int iVar6;
   int iVar7;
   long lVar8;
   long lVar9;
   ASN1_OBJECT *pAVar10;
   ASN1_INTEGER *a_00;
   uint *puVar11;
   ASN1_GENERALIZEDTIME *s;
   PKCS7 *p7;
   PKCS7_SIGNER_INFO *p7si;
   void *pvVar12;
   ASN1_STRING *pAVar13;
   PKCS7 *pPVar14;
   ASN1_TYPE *pAVar15;
   ASN1_OCTET_STRING *value;
   BIO *bio;
   X509 *x509;
   undefined8 uVar16;
   EVP_MD *dgst;
   size_t sVar17;
   GENERAL_NAME *a_01;
   X509_NAME *pXVar18;
   char *pcVar19;
   undefined8 uVar20;
   int iVar21;
   long in_FS_OFFSET;
   long local_f8;
   undefined8 local_d0[2];
   undefined8 local_c0;
   void *local_b8[8];
   char local_78[56];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 0x12 ) = (undefined1[16])0x0;
   param_1[0x14] = 0;
   lVar8 = TS_RESP_new();
   param_1[0x13] = lVar8;
   if (lVar8 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x17f, "TS_RESP_create_response");
      ERR_set_error(0x2f, 0x8002f, 0);
   }
 else {
      lVar8 = d2i_TS_REQ_bio(param_2, 0);
      pcVar19 = "Bad request format or system error.";
      param_1[0x12] = lVar8;
      if (lVar8 == 0) {
         LAB_00100f60:TS_RESP_CTX_set_status_info(param_1, 2, pcVar19);
         TS_RESP_CTX_add_failure_info(param_1, 5);
      }
 else {
         iVar6 = TS_RESP_CTX_set_status_info(param_1, 0, 0);
         if (iVar6 != 0) {
            lVar8 = param_1[0x12];
            lVar9 = TS_REQ_get_version(lVar8);
            if (lVar9 == 1) {
               plVar2 = *(long**)( lVar8 + 8 );
               puVar3 = (undefined8*)*plVar2;
               OBJ_obj2txt(local_78, 0x32, (ASN1_OBJECT*)*puVar3, 0);
               iVar6 = 0;
               do {
                  iVar7 = OPENSSL_sk_num(param_1[7]);
                  if (iVar7 <= iVar6) {
                     pcVar19 = "Message digest algorithm is not supported.";
                     goto LAB_00101037;
                  }

                  iVar21 = iVar6 + 1;
                  lVar8 = OPENSSL_sk_value(param_1[7], iVar6);
                  iVar7 = EVP_MD_is_a(lVar8, local_78);
                  iVar6 = iVar21;
               }
 while ( ( iVar7 == 0 ) || ( lVar8 == 0 ) );
               iVar6 = EVP_MD_get_size(lVar8);
               if (0 < iVar6) {
                  pAVar15 = (ASN1_TYPE*)puVar3[1];
                  if (pAVar15 != (ASN1_TYPE*)0x0) {
                     iVar7 = ASN1_TYPE_get(pAVar15);
                     pcVar19 = "Superfluous message digest parameter.";
                     if (iVar7 != 5) {
                        LAB_00101037:TS_RESP_CTX_set_status_info(param_1, 2, pcVar19);
                        TS_RESP_CTX_add_failure_info(param_1, 0);
                        goto LAB_00100bfc;
                     }

                  }

                  if (iVar6 != *(int*)plVar2[1]) {
                     pcVar19 = "Bad message digest.";
                     goto LAB_00100f60;
                  }

                  pAVar10 = (ASN1_OBJECT*)param_1[6];
                  a = *(ASN1_OBJECT**)( param_1[0x12] + 0x10 );
                  if (pAVar10 == (ASN1_OBJECT*)0x0) {
                     ERR_new();
                     ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x1fc, "ts_RESP_get_policy");
                     ERR_set_error(0x2f, 0x66, 0);
                  }
 else {
                     if (a != (ASN1_OBJECT*)0x0) {
                        iVar6 = OBJ_cmp(a, pAVar10);
                        if (iVar6 == 0) {
                           pAVar10 = (ASN1_OBJECT*)param_1[6];
                           if (pAVar10 != (ASN1_OBJECT*)0x0) goto LAB_00100e09;
                           iVar6 = 0;
                        }
 else {
                           iVar6 = 0;
                        }

                        do {
                           iVar7 = OPENSSL_sk_num(param_1[5]);
                           if (iVar7 <= iVar6) {
                              ERR_new();
                              ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x209, "ts_RESP_get_policy");
                              ERR_set_error(0x2f, 0x7d, 0);
                              TS_RESP_CTX_set_status_info(param_1, 2, "Requested policy is not supported.");
                              TS_RESP_CTX_add_failure_info(param_1, 0xf);
                              goto LAB_00100bfc;
                           }

                           iVar21 = iVar6 + 1;
                           pAVar10 = (ASN1_OBJECT*)OPENSSL_sk_value(param_1[5], iVar6);
                           iVar7 = OBJ_cmp(a, pAVar10);
                           iVar6 = iVar21;
                        }
 while ( ( iVar7 != 0 ) || ( pAVar10 == (ASN1_OBJECT*)0x0 ) );
                     }

                     LAB_00100e09:lVar8 = TS_TST_INFO_new();
                     if (( lVar8 == 0 ) || ( ( ( ( iVar6 = TS_TST_INFO_set_version(lVar8, 1) ),iVar6 == 0 || ( iVar6 = TS_TST_INFO_set_policy_id(lVar8, pAVar10) ),iVar6 == 0 ) ) || ( iVar6 = TS_TST_INFO_set_msg_imprint(lVar8, *(undefined8*)( param_1[0x12] + 8 )) ),iVar6 == 0 )) {
                        a_00 = (ASN1_INTEGER*)0x0;
                        s = (ASN1_GENERALIZEDTIME*)0x0;
                        lVar9 = 0;
                        a_01 = (GENERAL_NAME*)0x0;
                     }
 else {
                        iVar6 = TS_TST_INFO_set_serial(lVar8, a_00);
                        if (iVar6 == 0) {
                           s = (ASN1_GENERALIZEDTIME*)0x0;
                           goto LAB_00101692;
                        }

                        iVar6 = ( *(code*)param_1[0xe] )(param_1, param_1[0xf], local_d0);
                        if (iVar6 != 0) {
                           uVar1 = *(uint*)( param_1 + 0xb );
                           local_c0 = local_d0[0];
                           if (uVar1 < 7) {
                              puVar11 = (uint*)OPENSSL_gmtime(&local_c0, local_b8);
                              if (puVar11 != (uint*)0x0) {
                                 iVar6 = BIO_snprintf(local_78, 0x17, "%04d%02d%02d%02d%02d%02d", ( ulong )(puVar11[5] + 0x76c), ( ulong )(puVar11[4] + 1), (ulong)puVar11[3], (ulong)puVar11[2], (ulong)puVar11[1], ( ulong ) * puVar11);
                                 pcVar19 = local_78 + iVar6;
                                 if (uVar1 != 0) {
                                    BIO_snprintf(pcVar19, ( ulong )(uVar1 + 2), ".%06ld");
                                    sVar17 = strlen(pcVar19);
                                    pcVar5 = pcVar19 + sVar17;
                                    do {
                                       pcVar19 = pcVar5;
                                       pcVar5 = pcVar19 + -1;
                                    }
 while ( pcVar19[-1] == '0' );
                                    if (pcVar19[-1] == '.') {
                                       pcVar19 = pcVar19 + -1;
                                    }

                                 }

                                 pcVar19[0] = 'Z';
                                 pcVar19[1] = '\0';
                                 s = ASN1_GENERALIZEDTIME_new();
                                 if (s != (ASN1_GENERALIZEDTIME*)0x0) {
                                    iVar6 = ASN1_GENERALIZEDTIME_set_string(s, local_78);
                                    if (iVar6 != 0) {
                                       iVar6 = TS_TST_INFO_set_time(lVar8, s);
                                       if (iVar6 == 0) {
                                          LAB_00101692:lVar9 = 0;
                                          a_01 = (GENERAL_NAME*)0x0;
                                       }
 else {
                                          if (( ( param_1[8] == 0 ) && ( param_1[9] == 0 ) ) && ( param_1[10] == 0 )) {
                                             lVar9 = 0;
                                             LAB_00101246:if (( ( ( *(byte*)( (long)param_1 + 0x5c ) & 2 ) == 0 ) || ( iVar6 = TS_TST_INFO_set_ordering(lVar8, 1) ),iVar6 != 0 )) &&( ( *(long*)( param_1[0x12] + 0x18 ) == 0 || ( iVar6 = TS_TST_INFO_set_nonce(lVar8) ),iVar6 != 0 ) )(( *(byte*)( (long)param_1 + 0x5c ) & 1 ) == 0);
                                             {
                                                a_01 = (GENERAL_NAME*)0x0;
                                                LAB_0010127c:GENERAL_NAME_free(a_01);
                                                TS_ACCURACY_free(lVar9);
                                                ASN1_GENERALIZEDTIME_free(s);
                                                ASN1_INTEGER_free(a_00);
                                                param_1[0x14] = lVar8;
                                                uVar20 = *(undefined8*)( param_1[0x12] + 0x28 );
                                                iVar6 = 0;
                                                LAB_001012db:iVar7 = OPENSSL_sk_num(uVar20);
                                                if (iVar6 < iVar7) goto LAB_001012b8;
                                                iVar6 = X509_check_private_key((X509*)*param_1, (EVP_PKEY*)param_1[1]);
                                                if (iVar6 == 0) {
                                                   ERR_new();
                                                   ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x2b4, "ts_RESP_sign");
                                                   ERR_set_error(0x2f, 0x78, 0);
                                                   LAB_00101641:dgst = (EVP_MD*)0x0;
                                                   bio = (BIO*)0x0;
                                                   lVar8 = 0;
                                                   p7 = (PKCS7*)0x0;
                                                   local_f8 = 0;
                                                }
 else {
                                                   p7 = (PKCS7*)PKCS7_new_ex(param_1[0x15], param_1[0x16]);
                                                   if (p7 == (PKCS7*)0x0) {
                                                      ERR_new();
                                                      ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x2b9, "ts_RESP_sign");
                                                      ERR_set_error(0x2f, 0x8000d, 0);
                                                      goto LAB_00101641;
                                                   }

                                                   iVar6 = PKCS7_set_type(p7, 0x16);
                                                   if (( iVar6 == 0 ) || ( iVar6 = ASN1_INTEGER_set(((p7->d).sign)->version, 3) ),iVar6 == 0) {
                                                      dgst = (EVP_MD*)0x0;
                                                      bio = (BIO*)0x0;
                                                      lVar8 = 0;
                                                      local_f8 = 0;
                                                   }
 else {
                                                      if (*(int*)( param_1[0x12] + 0x20 ) != 0) {
                                                         iVar6 = 0;
                                                         PKCS7_add_certificate(p7, (X509*)*param_1);
                                                         lVar8 = param_1[4];
                                                         if (lVar8 != 0) {
                                                            for (; iVar7 = OPENSSL_sk_num(lVar8),iVar6 < iVar7; iVar6 = iVar6 + 1) {
                                                               x509 = (X509*)OPENSSL_sk_value(param_1[4], iVar6);
                                                               PKCS7_add_certificate(p7, x509);
                                                               lVar8 = param_1[4];
                                                            }

                                                         }

                                                      }

                                                      if (param_1[2] == 0) {
                                                         dgst = (EVP_MD*)EVP_MD_fetch(param_1[0x15], "SHA256", param_1[0x16]);
                                                      }
 else {
                                                         lVar8 = EVP_MD_get0_provider();
                                                         if (lVar8 == 0) {
                                                            uVar20 = param_1[0x16];
                                                            uVar16 = EVP_MD_get0_name(param_1[2]);
                                                            dgst = (EVP_MD*)EVP_MD_fetch(param_1[0x15], uVar16, uVar20);
                                                         }
 else {
                                                            dgst = (EVP_MD*)param_1[2];
                                                         }

                                                      }

                                                      p7si = PKCS7_add_signature(p7, (X509*)*param_1, (EVP_PKEY*)param_1[1], dgst);
                                                      if (p7si != (PKCS7_SIGNER_INFO*)0x0) {
                                                         pAVar10 = OBJ_nid2obj(0xcf);
                                                         iVar6 = PKCS7_add_signed_attribute(p7si, 0x32, 6, pAVar10);
                                                         if (iVar6 == 0) {
                                                            bio = (BIO*)0x0;
                                                            lVar8 = 0;
                                                            ERR_new();
                                                            ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x2dc, "ts_RESP_sign");
                                                            ERR_set_error(0x2f, 0x77, 0);
                                                            local_f8 = 0;
                                                            goto LAB_001015bf;
                                                         }

                                                         uVar20 = 0;
                                                         if (( *(byte*)( (long)param_1 + 0x5c ) & 4 ) != 0) {
                                                            uVar20 = param_1[4];
                                                         }

                                                         if (( param_1[3] == 0 ) || ( iVar6 = iVar6 != 0 )) {
                                                            lVar8 = OSSL_ESS_signing_cert_new_init(*param_1, uVar20, 0);
                                                            if (lVar8 == 0) goto LAB_001017ea;
                                                            iVar6 = i2d_ESS_SIGNING_CERT(lVar8, 0);
                                                            pvVar12 = CRYPTO_malloc(iVar6, "crypto/ts/ts_rsp_sign.c", 0x27d);
                                                            if (pvVar12 != (void*)0x0) {
                                                               local_b8[0] = pvVar12;
                                                               i2d_ESS_SIGNING_CERT(lVar8, local_b8);
                                                               pAVar13 = ASN1_STRING_new();
                                                               if (( pAVar13 == (ASN1_STRING*)0x0 ) || ( iVar6 = iVar6 == 0 )) {
                                                                  ASN1_STRING_free(pAVar13);
                                                                  CRYPTO_free(pvVar12);
                                                               }
 else {
                                                                  CRYPTO_free(pvVar12);
                                                                  iVar6 = PKCS7_add_signed_attribute(p7si, 0xdf, 0x10, pAVar13);
                                                                  local_f8 = 0;
                                                                  if (iVar6 != 0) goto LAB_001014b2;
                                                               }

                                                            }

                                                            ERR_new();
                                                            bio = (BIO*)0x0;
                                                            ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x2e8, "ts_RESP_sign");
                                                            ERR_set_error(0x2f, 0x74, 0);
                                                            local_f8 = 0;
                                                            goto LAB_001015bf;
                                                         }

                                                         local_f8 = OSSL_ESS_signing_cert_v2_new_init(param_1[3], *param_1, uVar20, 0);
                                                         if (local_f8 == 0) {
                                                            LAB_0010193a:lVar8 = 0;
                                                            bio = (BIO*)0x0;
                                                            bVar4 = false;
                                                            pPVar14 = p7;
                                                            if (dgst != (EVP_MD*)param_1[2]) {
                                                               LAB_0010195a:EVP_MD_free(dgst);
                                                               if (bVar4) goto LAB_00101581;
                                                            }

                                                            goto LAB_001015cd;
                                                         }

                                                         iVar6 = i2d_ESS_SIGNING_CERT_V2(local_f8, 0);
                                                         pvVar12 = CRYPTO_malloc(iVar6, "crypto/ts/ts_rsp_sign.c", 0x294);
                                                         if (pvVar12 == (void*)0x0) {
                                                            LAB_0010190e:ERR_new();
                                                            ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x2f2, "ts_RESP_sign");
                                                            ERR_set_error(0x2f, 0x8b, 0);
                                                            goto LAB_0010193a;
                                                         }

                                                         local_b8[0] = pvVar12;
                                                         i2d_ESS_SIGNING_CERT_V2(local_f8, local_b8);
                                                         pAVar13 = ASN1_STRING_new();
                                                         if (( pAVar13 == (ASN1_STRING*)0x0 ) || ( iVar6 = iVar6 == 0 )) {
                                                            ASN1_STRING_free(pAVar13);
                                                            CRYPTO_free(pvVar12);
                                                            goto LAB_0010190e;
                                                         }

                                                         lVar8 = 0;
                                                         CRYPTO_free(pvVar12);
                                                         iVar6 = PKCS7_add_signed_attribute(p7si, 0x43e, 0x10, pAVar13);
                                                         if (iVar6 == 0) goto LAB_0010190e;
                                                         LAB_001014b2:pPVar14 = PKCS7_new();
                                                         if (pPVar14 == (PKCS7*)0x0) {
                                                            LAB_0010170d:ASN1_OCTET_STRING_free((ASN1_OCTET_STRING*)0x0);
                                                            bio = (BIO*)0x0;
                                                            PKCS7_free(pPVar14);
                                                            goto LAB_001015bf;
                                                         }

                                                         pAVar15 = ASN1_TYPE_new();
                                                         (pPVar14->d).other = pAVar15;
                                                         if (pAVar15 == (ASN1_TYPE*)0x0) goto LAB_0010170d;
                                                         pAVar10 = OBJ_nid2obj(0xcf);
                                                         pPVar14->type = pAVar10;
                                                         value = ASN1_OCTET_STRING_new();
                                                         if (value == (ASN1_OCTET_STRING*)0x0) goto LAB_0010170d;
                                                         ASN1_TYPE_set((pPVar14->d).other, 4, value);
                                                         iVar6 = PKCS7_set_content(p7, pPVar14);
                                                         if (iVar6 == 0) goto LAB_0010170d;
                                                         bio = PKCS7_dataInit(p7, (BIO*)0x0);
                                                         if (bio == (BIO*)0x0) {
                                                            ERR_new();
                                                            ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x2fa, "ts_RESP_sign");
                                                            ERR_set_error(0x2f, 0x80021, 0);
                                                            goto LAB_001015bf;
                                                         }

                                                         iVar6 = i2d_TS_TST_INFO_bio(bio, param_1[0x14]);
                                                         if (iVar6 == 0) {
                                                            ERR_new();
                                                            uVar20 = 0x2fe;
                                                            LAB_00101a4e:ERR_set_debug("crypto/ts/ts_rsp_sign.c", uVar20, "ts_RESP_sign");
                                                            ERR_set_error(0x2f, 0x7c, 0);
                                                            goto LAB_001015bf;
                                                         }

                                                         iVar6 = PKCS7_dataFinal(p7, bio);
                                                         if (iVar6 == 0) {
                                                            ERR_new();
                                                            uVar20 = 0x302;
                                                            goto LAB_00101a4e;
                                                         }

                                                         pPVar14 = (PKCS7*)0x0;
                                                         TS_RESP_set_tst_info(param_1[0x13], p7, param_1[0x14]);
                                                         param_1[0x14] = 0;
                                                         if (dgst != (EVP_MD*)param_1[2]) {
                                                            bVar4 = true;
                                                            goto LAB_0010195a;
                                                         }

                                                         LAB_00101581:BIO_free_all(bio);
                                                         ESS_SIGNING_CERT_V2_free(local_f8);
                                                         ESS_SIGNING_CERT_free(lVar8);
                                                         PKCS7_free(pPVar14);
                                                         goto LAB_00100c4e;
                                                      }

                                                      ERR_new();
                                                      ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x2d5, "ts_RESP_sign");
                                                      ERR_set_error(0x2f, 0x76, 0);
                                                      LAB_001017ea:local_f8 = 0;
                                                      bio = (BIO*)0x0;
                                                      lVar8 = 0;
                                                   }

                                                }

                                                LAB_001015bf:pPVar14 = p7;
                                                if (dgst != (EVP_MD*)param_1[2]) {
                                                   EVP_MD_free(dgst);
                                                }

                                                LAB_001015cd:TS_RESP_CTX_set_status_info_cond(param_1, 2, "Error during signature generation.");
                                                BIO_free_all(bio);
                                                ESS_SIGNING_CERT_V2_free(local_f8);
                                                ESS_SIGNING_CERT_free(lVar8);
                                                PKCS7_free(pPVar14);
                                                goto LAB_00100bfc;
                                             }

                                             a_01 = GENERAL_NAME_new();
                                             if (a_01 != (GENERAL_NAME*)0x0) {
                                                a_01->type = 4;
                                                pXVar18 = X509_get_subject_name((X509*)*param_1);
                                                pXVar18 = X509_NAME_dup(pXVar18);
                                                (a_01->d).directoryName = pXVar18;
                                                if (( pXVar18 != (X509_NAME*)0x0 ) && ( iVar6 = iVar6 != 0 )) goto LAB_0010127c;
                                                goto LAB_00100e3d;
                                             }

                                          }

                                       }

                                       else{lVar9 = TS_ACCURACY_new();
                                       if (lVar9 == 0) goto LAB_00101692;
                                       if (( ( ( param_1[8] == 0 ) || ( iVar6 = TS_ACCURACY_set_seconds(lVar9) ),iVar6 != 0 ) ) && ( ( ( param_1[9] == 0 || ( iVar6 = TS_ACCURACY_set_millis(lVar9) ),iVar6 != 0 ) ) && ( ( param_1[10] == 0 || ( iVar6 = TS_ACCURACY_set_micros(lVar9) ),iVar6 != 0 ) ) )) goto LAB_00101246;
                                    }

                                    a_01 = (GENERAL_NAME*)0x0;
                                 }

                                 goto LAB_00100e3d;
                              }

                              ASN1_GENERALIZEDTIME_free(s);
                           }

                        }

                     }

                     ERR_new();
                     ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x374, "TS_RESP_set_genTime_with_precision");
                     ERR_set_error(0x2f, 0x73, 0);
                  }

                  s = (ASN1_GENERALIZEDTIME*)0x0;
                  lVar9 = 0;
                  a_01 = (GENERAL_NAME*)0x0;
               }

               LAB_00100e3d:TS_TST_INFO_free(lVar8);
               ERR_new();
               ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x255, "ts_RESP_create_tst_info");
               ERR_set_error(0x2f, 0x7b, 0);
               TS_RESP_CTX_set_status_info_cond(param_1, 2, "Error during TSTInfo generation.");
               GENERAL_NAME_free(a_01);
               TS_ACCURACY_free(lVar9);
               ASN1_GENERALIZEDTIME_free(s);
               ASN1_INTEGER_free(a_00);
               param_1[0x14] = 0;
            }

         }

      }

      else{TS_RESP_CTX_set_status_info(param_1, 2, "Bad request version.");
      TS_RESP_CTX_add_failure_info(param_1, 2);
   }

}
}
  }LAB_00100bfc:ERR_new();ERR_set_debug("crypto/ts/ts_rsp_sign.c", 0x198, "TS_RESP_create_response");ERR_set_error(0x2f, 0x79, 0);if (param_1[0x13] != 0) {
   iVar6 = TS_RESP_CTX_set_status_info_cond(param_1, 2, "Error during response generation.");
   if (iVar6 != 0) {
      LAB_00100c4e:uVar20 = param_1[0x13];
      goto LAB_00100c55;
   }

   TS_RESP_free(param_1[0x13]);
}
uVar20 = 0;LAB_00100c55:param_1[0x13] = 0;TS_REQ_free(param_1[0x12]);param_1[0x12] = 0;TS_RESP_free(param_1[0x13]);param_1[0x13] = 0;TS_TST_INFO_free(param_1[0x14]);param_1[0x14] = 0;if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar20;LAB_001012b8:uVar16 = OPENSSL_sk_value(uVar20, iVar6);iVar7 = ( *(code*)param_1[0x10] )(param_1, uVar16, 0);iVar6 = iVar6 + 1;if (iVar7 == 0) goto LAB_00100bfc;goto LAB_001012db;}undefined8 TS_RESP_CTX_set_ess_cert_id_digest(long param_1, undefined8 param_2) {
   *(undefined8*)( param_1 + 0x18 ) = param_2;
   return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 get_genm_itav(long param_1, undefined8 param_2, int param_3, undefined8 param_4) {
   int iVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   ASN1_OBJECT *o;
   undefined8 uVar5;
   int iVar6;
   long in_FS_OFFSET;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   char local_b0[8];
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_genm.c", 0x53, "get_genm_itav");
      ERR_set_error(0x3a, 0x67, 0);
      LAB_001001d5:lVar3 = 0;
   } else {
      iVar1 = OSSL_CMP_CTX_get_status();
      if (iVar1 != -1) {
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_genm.c", 0x57, "get_genm_itav");
         ERR_set_error(0x3a, 0xbf, "client context in unsuitable state; should call CMPclient_reinit() before");
         goto LAB_001001d5;
      }
      iVar1 = OSSL_CMP_CTX_push0_genm_ITAV(param_1, param_2);
      if (iVar1 == 0) goto LAB_001001d5;
      lVar3 = OSSL_CMP_exec_GENM_ses(param_1);
      if (lVar3 == 0) {
         iVar1 = OSSL_CMP_CTX_get_status(param_1);
         if (iVar1 != -3) {
            ERR_new();
            ERR_set_debug("crypto/cmp/cmp_genm.c", 0x62, "get_genm_itav");
            ERR_set_error(0x3a, 0xc0, "with infoType %s", param_4);
         }
         goto LAB_001001e8;
      }
      uVar4 = OPENSSL_sk_num(lVar3);
      iVar1 = (int)uVar4;
      if (iVar1 < 1) {
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_genm.c", 0x68, "get_genm_itav");
         ERR_set_error(0x3a, 0xc1, "response on genm requesting infoType %s does not include suitable value", param_4);
         OPENSSL_sk_free(lVar3);
         goto LAB_001001e8;
      }
      if (iVar1 != 1) {
         ossl_cmp_print_log(4, param_1, "get_genm_itav", "crypto/cmp/cmp_genm.c", 0x6f, &_LC4, "response on genm contains %d ITAVs; will use the first ITAV with infoType id-it-%s", uVar4, param_4);
      }
      iVar6 = 0;
      do {
         uVar4 = OPENSSL_sk_shift(lVar3);
         o = (ASN1_OBJECT*)OSSL_CMP_ITAV_get0_type();
         for (int i_415 = 0; i_415 < 8; i_415++) {
            local_b0[i_415] = '\0';
         }
         local_b8 = 0x2720657079546f66;
         local_c8 = __LC9;
         uStack_c0 = _UNK_00101688;
         local_a8 = (undefined1[16])0x0;
         local_98 = (undefined1[16])0x0;
         local_88 = (undefined1[16])0x0;
         local_78 = (undefined1[16])0x0;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         iVar2 = OBJ_obj2nid(o);
         if (iVar2 == param_3) {
            iVar6 = iVar6 + 1;
            if (iVar6 < iVar1) {
               do {
                  iVar6 = iVar6 + 1;
                  uVar5 = OPENSSL_sk_shift(lVar3);
                  OSSL_CMP_ITAV_free(uVar5);
               } while ( iVar1 != iVar6 );
            }
            OPENSSL_sk_free(lVar3);
            goto LAB_001001f0;
         }
         iVar2 = OBJ_obj2txt(local_b0, 0x68, o, 0);
         if (iVar2 < 0) {
            __strcat_chk(&local_c8, "<unknown>", 0x80);
         }
         iVar6 = iVar6 + 1;
         ossl_cmp_print_log(4, param_1, "get_genm_itav", "crypto/cmp/cmp_genm.c", 0x81, &_LC4, "%s\' while expecting \'id-it-%s\'", &local_c8, param_4);
         OSSL_CMP_ITAV_free(uVar4);
      } while ( iVar1 != iVar6 );
      ERR_new();
      param_2 = 0;
      ERR_set_debug("crypto/cmp/cmp_genm.c", 0x84, "get_genm_itav");
      ERR_set_error(0x3a, 0xc1, "could not find any ITAV for %s", param_4);
   }
   OPENSSL_sk_free(lVar3);
   OSSL_CMP_ITAV_free(param_2);
   LAB_001001e8:uVar4 = 0;
   LAB_001001f0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar4;
}undefined8 verify_ss_cert_trans(undefined8 param_1, X509 *param_2, long param_3, X509 *param_4, undefined8 param_5) {
   stack_st_X509 *chain;
   int iVar1;
   X509_STORE *ctx;
   X509_VERIFY_PARAM *pm;
   undefined8 uVar2;
   undefined8 uVar3;
   X509_STORE_CTX *ctx_00;
   char *pcVar4;
   long in_FS_OFFSET;
   stack_st_X509 *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ctx = (X509_STORE*)OSSL_CMP_CTX_get0_trustedStore();
   local_48 = (stack_st_X509*)0x0;
   if (param_2 == (X509*)0x0) {
      LAB_0010048f:if (( param_3 == 0 ) || ( iVar1 = ossl_x509_add_cert_new(&local_48, param_3, 1) ),iVar1 != 0) {
         chain = local_48;
         uVar2 = OSSL_CMP_CTX_get0_propq(param_1);
         uVar3 = OSSL_CMP_CTX_get0_libctx(param_1);
         if (( ctx == (X509_STORE*)0x0 ) || ( param_4 == (X509*)0x0 )) {
            ERR_new();
            ERR_set_debug("crypto/cmp/cmp_genm.c", 0xe9, "verify_ss_cert");
            ERR_set_error(0x3a, 0xc0102, 0);
            LAB_00100513:ERR_new();
            ERR_set_debug("crypto/cmp/cmp_genm.c", 0x113, "verify_ss_cert_trans");
            pcVar4 = "with given certificate as trust anchor";
            if (param_2 == (X509*)0x0) {
               pcVar4 = "using trust store";
            }
            ERR_set_error(0x3a, 0xc3, "failed to validate %s certificate received in genp %s", param_5, pcVar4);
            goto LAB_0010055d;
         }
         ctx_00 = (X509_STORE_CTX*)X509_STORE_CTX_new_ex(uVar3, uVar2);
         if (ctx_00 == (X509_STORE_CTX*)0x0) {
            X509_STORE_CTX_free((X509_STORE_CTX*)0x0);
            goto LAB_00100513;
         }
         iVar1 = X509_STORE_CTX_init(ctx_00, ctx, param_4, chain);
         if (iVar1 == 0) {
            X509_STORE_CTX_free(ctx_00);
            goto LAB_00100513;
         }
         X509_STORE_CTX_set_verify_cb(ctx_00, selfsigned_verify_cb);
         iVar1 = X509_verify_cert(ctx_00);
         X509_STORE_CTX_free(ctx_00);
         if (iVar1 < 1) goto LAB_00100513;
         uVar2 = 1;
      } else {
         LAB_0010055d:uVar2 = 0;
      }
      OPENSSL_sk_pop_free(local_48, X509_free);
      if (param_2 == (X509*)0x0) goto LAB_00100452;
   } else {
      uVar2 = 0;
      pm = (X509_VERIFY_PARAM*)X509_STORE_get0_param(ctx);
      ctx = X509_STORE_new();
      if (ctx == (X509_STORE*)0x0) goto LAB_00100452;
      iVar1 = X509_STORE_set1_param(ctx, pm);
      if (( iVar1 != 0 ) && ( iVar1 = iVar1 != 0 )) goto LAB_0010048f;
      uVar2 = 0;
      OPENSSL_sk_pop_free(local_48, X509_free);
   }
   X509_STORE_free(ctx);
   LAB_00100452:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}ulong selfsigned_verify_cb(uint param_1, X509_STORE_CTX *param_2) {
   uint uVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   ulong uVar9;
   undefined8 uVar10;
   if (param_1 == 0) {
      uVar1 = X509_STORE_CTX_get_error_depth(param_2);
      uVar5 = (ulong)uVar1;
      if (( uVar1 == 0 ) && ( iVar2 = iVar2 == 0x12 )) {
         uVar6 = X509_STORE_CTX_get0_chain(param_2);
         uVar7 = X509_STORE_CTX_get0_untrusted(param_2);
         UNRECOVERED_JUMPTABLE = (code*)X509_STORE_CTX_get_check_issued(param_2);
         uVar8 = OPENSSL_sk_value(uVar6, 0);
         for (iVar2 = 0; iVar3 = OPENSSL_sk_num(uVar7),iVar2 < iVar3; iVar2 = iVar2 + 1) {
            uVar8 = OPENSSL_sk_value(uVar7, iVar2);
            uVar9 = X509_add_cert(uVar6, uVar8, 1);
            if ((int)uVar9 == 0) {
               return uVar9;
            }
         }
         iVar2 = 0;
         uVar7 = X509_STORE_CTX_get0_store(param_2);
         uVar7 = X509_STORE_get1_all_certs(uVar7);
         do {
            iVar3 = OPENSSL_sk_num(uVar7);
            if (iVar3 <= iVar2) {
               LAB_00100760:OPENSSL_sk_pop_free(uVar7, X509_free);
               return uVar5;
            }
            uVar10 = OPENSSL_sk_value(uVar7, iVar2);
            iVar3 = ( *UNRECOVERED_JUMPTABLE )(param_2, uVar8, uVar10);
            if (iVar3 != 0) {
               iVar2 = X509_add_cert(uVar6, uVar8, 1);
               uVar5 = ( ulong )(iVar2 != 0);
               goto LAB_00100760;
            }
            iVar2 = iVar2 + 1;
         } while ( true );
      }
   }
   lVar4 = X509_STORE_CTX_get0_store(param_2);
   if (( lVar4 != 0 ) && ( UNRECOVERED_JUMPTABLE = (code*)X509_STORE_get_verify_cb(lVar4) ),UNRECOVERED_JUMPTABLE != (code*)0x0) {
      for (int i_416 = 0; i_416 < 2; i_416++) {
         /* WARNING: Could not recover jumptable at 0x00100678. Too many branches */
      }
      uVar5 = ( *UNRECOVERED_JUMPTABLE )((ulong)param_1, param_2);
      return uVar5;
   }
   return (ulong)param_1;
}undefined8 OSSL_CMP_get1_caCerts(undefined8 param_1, undefined8 *param_2) {
   bool bVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   undefined4 uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   char *pcVar9;
   X509 *pXVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   X509_NAME *pXVar13;
   char *pcVar14;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   if (param_2 == (undefined8*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_genm.c", 0x94, "OSSL_CMP_get1_caCerts");
      ERR_set_error(0x3a, 0x67, 0);
   } else {
      *param_2 = 0;
      lVar6 = OSSL_CMP_ITAV_new_caCerts(0);
      if (( lVar6 != 0 ) && ( lVar6 = get_genm_itav(param_1, lVar6, 0x4c7, "caCerts") ),lVar6 != 0) {
         iVar2 = OSSL_CMP_ITAV_get0_caCerts(lVar6, &local_48);
         if (iVar2 == 0) {
            LAB_00100c90:uVar11 = 0;
         } else {
            if (local_48 != 0) {
               lVar7 = OSSL_CMP_CTX_get0_trustedStore(param_1);
               if (lVar7 == 0) {
                  LAB_00100ad0:lVar7 = local_48;
                  bVar1 = true;
                  for (iVar2 = 0; iVar3 = OPENSSL_sk_num(lVar7),iVar2 < iVar3; iVar2 = iVar2 + 1) {
                     pXVar10 = (X509*)OPENSSL_sk_value(lVar7, iVar2);
                     uVar4 = X509_get_extension_flags(pXVar10);
                     uVar11 = X509_get0_notAfter(pXVar10);
                     uVar12 = X509_get0_notBefore(pXVar10);
                     iVar3 = X509_cmp_timeframe(0, uVar12, uVar11);
                     if (iVar3 == 0) {
                        if (( uVar4 & 0x50 ) == 0) {
                           pXVar13 = X509_get_subject_name(pXVar10);
                           pcVar14 = X509_NAME_oneline(pXVar13, (char*)0x0, 0);
                           LAB_00100bfc:ossl_cmp_print_log(4, param_1, "ossl_X509_check", "crypto/cmp/cmp_genm.c", 0x34, &_LC4, "certificate from \'%s\' with subject \'%s\' %s", &_LC19, pcVar14, "is not a CA cert");
                           CRYPTO_free(pcVar14);
                           goto LAB_00100b7f;
                        }
                     } else {
                        pcVar14 = "has expired";
                        if (iVar3 < 1) {
                           pcVar14 = "not yet valid";
                        }
                        pXVar13 = X509_get_subject_name(pXVar10);
                        pcVar9 = X509_NAME_oneline(pXVar13, (char*)0x0, 0);
                        ossl_cmp_print_log(4, param_1, "ossl_X509_check", "crypto/cmp/cmp_genm.c", 0x2e, &_LC4, "certificate from \'%s\' with subject \'%s\' %s", &_LC19, pcVar9, pcVar14);
                        CRYPTO_free(pcVar9);
                        if (( uVar4 & 0x50 ) == 0) {
                           pXVar13 = X509_get_subject_name(pXVar10);
                           pcVar14 = X509_NAME_oneline(pXVar13, (char*)0x0, 0);
                           goto LAB_00100bfc;
                        }
                        LAB_00100b7f:bVar1 = false;
                     }
                  }
               } else {
                  lVar8 = X509_STORE_get0_param(lVar7);
                  lVar7 = local_48;
                  iVar2 = 0;
                  if (lVar8 == 0) goto LAB_00100ad0;
                  bVar1 = true;
                  for (; iVar3 = OPENSSL_sk_num(lVar7),iVar2 < iVar3; iVar2 = iVar2 + 1) {
                     pXVar10 = (X509*)OPENSSL_sk_value(lVar7, iVar2);
                     uVar4 = X509_get_extension_flags(pXVar10);
                     uVar11 = X509_get0_notAfter(pXVar10);
                     uVar12 = X509_get0_notBefore(pXVar10);
                     iVar3 = X509_cmp_timeframe(lVar8, uVar12, uVar11);
                     if (iVar3 == 0) {
                        if (( uVar4 & 0x50 ) == 0) {
                           pXVar13 = X509_get_subject_name(pXVar10);
                           pcVar14 = X509_NAME_oneline(pXVar13, (char*)0x0, 0);
                           LAB_00100994:ossl_cmp_print_log(3, param_1, "ossl_X509_check", "crypto/cmp/cmp_genm.c", 0x34, &_LC17, "certificate from \'%s\' with subject \'%s\' %s", &_LC19, pcVar14, "is not a CA cert");
                           CRYPTO_free(pcVar14);
                           goto LAB_0010090f;
                        }
                     } else {
                        pcVar14 = "not yet valid";
                        if (0 < iVar3) {
                           pcVar14 = "has expired";
                        }
                        pXVar13 = X509_get_subject_name(pXVar10);
                        pcVar9 = X509_NAME_oneline(pXVar13, (char*)0x0, 0);
                        ossl_cmp_print_log(3, param_1, "ossl_X509_check", "crypto/cmp/cmp_genm.c", 0x2e, &_LC17, "certificate from \'%s\' with subject \'%s\' %s", &_LC19, pcVar9, pcVar14);
                        CRYPTO_free(pcVar9);
                        if (( uVar4 & 0x50 ) == 0) {
                           pXVar13 = X509_get_subject_name(pXVar10);
                           pcVar14 = X509_NAME_oneline(pXVar13, (char*)0x0, 0);
                           goto LAB_00100994;
                        }
                        LAB_0010090f:bVar1 = false;
                     }
                  }
               }
               if (bVar1) {
                  uVar5 = OPENSSL_sk_num(local_48);
                  uVar11 = OPENSSL_sk_new_reserve(0, uVar5);
                  *param_2 = uVar11;
                  iVar2 = X509_add_certs(uVar11, local_48, 5);
                  if (iVar2 != 0) goto LAB_00100a96;
                  OPENSSL_sk_pop_free(*param_2, X509_free);
                  *param_2 = 0;
               }
               goto LAB_00100c90;
            }
            LAB_00100a96:uVar11 = 1;
         }
         OSSL_CMP_ITAV_free(lVar6);
         goto LAB_00100a22;
      }
   }
   uVar11 = 0;
   LAB_00100a22:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar11;
}undefined4 OSSL_CMP_get1_rootCaKeyUpdate(undefined8 param_1, X509 *param_2, long *param_3, long *param_4, long *param_5) {
   int iVar1;
   long lVar2;
   X509 *a;
   undefined4 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == (long*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_genm.c", 0x128, "OSSL_CMP_get1_rootCaKeyUpdate");
      ERR_set_error(0x3a, 0xc0102, 0);
   } else {
      *param_3 = 0;
      lVar2 = OSSL_CMP_ITAV_new_rootCaCert(param_2);
      if (lVar2 != 0) {
         lVar2 = get_genm_itav(param_1, lVar2, 0x4c8, "rootCaKeyUpdate");
         if (lVar2 != 0) {
            iVar1 = OSSL_CMP_ITAV_get0_rootCaKeyUpdate(lVar2, param_3, &local_50);
            if (iVar1 == 0) {
               LAB_00100ed0:uVar3 = 0;
               a = (X509*)0x0;
            } else {
               a = (X509*)*param_3;
               uVar3 = 1;
               if (a != (X509*)0x0) {
                  a = X509_dup(param_2);
                  if (( a == (X509*)0x0 ) && ( param_2 != (X509*)0x0 )) goto LAB_00100ed0;
                  iVar1 = verify_ss_cert_trans(param_1, a, local_50, *param_3, "newWithNew");
                  if (iVar1 == 0) {
                     ERR_new();
                     ERR_set_debug("crypto/cmp/cmp_genm.c", 0x13f, "OSSL_CMP_get1_rootCaKeyUpdate");
                     ERR_set_error(0x3a, 0xc3, 0);
                     uVar3 = 0;
                     goto LAB_00100e50;
                  }
                  lVar4 = *param_3;
                  if (( param_2 != (X509*)0x0 ) && ( local_48 != 0 )) {
                     iVar1 = verify_ss_cert_trans(param_1, lVar4, local_48, a, "oldWithOld");
                     if (iVar1 == 0) {
                        ERR_new();
                        ERR_set_debug("crypto/cmp/cmp_genm.c", 0x145, "OSSL_CMP_get1_rootCaKeyUpdate");
                        ERR_set_error(0x3a, 0xc3, 0);
                        uVar3 = 0;
                        goto LAB_00100e50;
                     }
                     lVar4 = *param_3;
                  }
                  iVar1 = X509_up_ref(lVar4);
                  if (iVar1 != 0) {
                     if (param_4 == (long*)0x0) {
                        LAB_00100e07:if (param_5 != (long*)0x0) {
                           *param_5 = local_48;
                           if (local_48 != 0) {
                              iVar1 = X509_up_ref();
                              if (iVar1 == 0) {
                                 if (param_4 != (long*)0x0) {
                                    X509_free((X509*)*param_4);
                                 }
                                 goto LAB_00100e44;
                              }
                           }
                        }
                        uVar3 = 1;
                        goto LAB_00100e50;
                     }
                     *param_4 = local_50;
                     if (local_50 == 0) goto LAB_00100e07;
                     iVar1 = X509_up_ref();
                     if (iVar1 != 0) goto LAB_00100e07;
                     LAB_00100e44:X509_free((X509*)*param_3);
                  }
                  uVar3 = 0;
               }
            }
            LAB_00100e50:OSSL_CMP_ITAV_free(lVar2);
            X509_free(a);
            goto LAB_00100ea2;
         }
      }
   }
   uVar3 = 0;
   LAB_00100ea2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int OSSL_CMP_get1_crlUpdate(undefined8 param_1, undefined8 param_2, undefined8 param_3, long *param_4) {
   int iVar1;
   undefined4 uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   if (param_4 == (long*)0x0) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("crypto/cmp/cmp_genm.c", 0x169, "OSSL_CMP_get1_crlUpdate");
      ERR_set_error(0x3a, 0x67, 0);
      goto LAB_001010c0;
   }
   *param_4 = 0;
   lVar4 = OSSL_CMP_CRLSTATUS_create(param_3, param_2, 1);
   if (lVar4 == 0) {
      ERR_new();
      lVar6 = 0;
      lVar5 = 0;
      iVar1 = 0;
      ERR_set_debug("crypto/cmp/cmp_genm.c", 0x16f, "OSSL_CMP_get1_crlUpdate");
      ERR_set_error(0x3a, 0xc6, 0);
   } else {
      lVar5 = OPENSSL_sk_new_reserve(0, 1);
      if (lVar5 == 0) {
         ERR_new();
         lVar6 = 0;
         iVar1 = 0;
         ERR_set_debug("crypto/cmp/cmp_genm.c", 0x173, "OSSL_CMP_get1_crlUpdate");
         ERR_set_error(0x3a, 0xc6, 0);
      } else {
         iVar1 = 0;
         OPENSSL_sk_push(lVar5, lVar4);
         lVar6 = OSSL_CMP_ITAV_new0_crlStatusList(lVar5);
         if (lVar6 != 0) {
            lVar6 = get_genm_itav(param_1, lVar6, 0x4e9, &_LC24);
            if (lVar6 != 0) {
               iVar1 = OSSL_CMP_ITAV_get0_crls(lVar6, &local_48);
               if (iVar1 != 0) {
                  if (local_48 == 0) {
                     lVar5 = 0;
                     iVar1 = 1;
                     lVar4 = 0;
                  } else {
                     iVar1 = OPENSSL_sk_num(local_48);
                     if (iVar1 == 1) {
                        lVar4 = OPENSSL_sk_value(local_48, 0);
                        *param_4 = lVar4;
                        if (lVar4 != 0) {
                           iVar3 = X509_CRL_up_ref(lVar4);
                           iVar1 = 1;
                           if (iVar3 != 0) goto LAB_001010f0;
                        }
                        *param_4 = 0;
                     } else {
                        ERR_new();
                        ERR_set_debug("crypto/cmp/cmp_genm.c", 0x188, "OSSL_CMP_get1_crlUpdate");
                        uVar2 = OPENSSL_sk_num(local_48);
                        ERR_set_error(0x3a, 0xc1, "Unexpected number of CRLs in genp: %d", uVar2);
                     }
                     iVar1 = 0;
                     lVar5 = 0;
                     lVar4 = 0;
                  }
                  goto LAB_001010a8;
               }
            }
            LAB_001010f0:lVar5 = 0;
            lVar4 = 0;
         }
      }
   }
   LAB_001010a8:OSSL_CMP_CRLSTATUS_free(lVar4);
   OPENSSL_sk_free(lVar5);
   OSSL_CMP_ITAV_free(lVar6);
   LAB_001010c0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}bool OSSL_CMP_get1_certReqTemplate(undefined8 param_1, undefined8 *param_2, undefined8 *param_3) {
   int iVar1;
   long lVar2;
   if (param_3 != (undefined8*)0x0) {
      *param_3 = 0;
   }
   if (param_2 == (undefined8*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_genm.c", 0x1a4, "OSSL_CMP_get1_certReqTemplate");
      ERR_set_error(0x3a, 0x67, 0);
   } else {
      *param_2 = 0;
      lVar2 = OSSL_CMP_ITAV_new0_certReqTemplate(0, 0);
      if (lVar2 == 0) {
         ERR_new();
         ERR_set_debug("crypto/cmp/cmp_genm.c", 0x1aa, "OSSL_CMP_get1_certReqTemplate");
         ERR_set_error(0x3a, 0xc5, 0);
      } else {
         lVar2 = get_genm_itav(param_1, lVar2, 0x4c9, "certReqTemplate");
         if (lVar2 != 0) {
            iVar1 = OSSL_CMP_ITAV_get1_certReqTemplate(lVar2, param_2, param_3);
            OSSL_CMP_ITAV_free(lVar2);
            return iVar1 != 0;
         }
      }
   }
   return false;
}

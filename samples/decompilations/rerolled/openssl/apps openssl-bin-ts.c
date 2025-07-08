int verify_cb(int param_1, X509_STORE_CTX *param_2) {
   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ASN1_INTEGER *next_serial(char *param_1) {
   BIGNUM *pBVar1;
   int iVar2;
   ASN1_INTEGER *a;
   BIO *bp;
   BIGNUM *a_00;
   long in_FS_OFFSET;
   char acStack_428[1032];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   a = ASN1_INTEGER_new();
   if (a == (ASN1_INTEGER*)0x0) {
      bp = (BIO*)0x0;
      pBVar1 = (BIGNUM*)0x0;
   }
 else {
      bp = BIO_new_file(param_1, "r");
      if (bp == (BIO*)0x0) {
         ERR_clear_error();
         a_00 = (BIGNUM*)0x0;
         BIO_printf(_bio_err, "Warning: could not open file %s for reading, using serial number: 1\n", param_1);
         iVar2 = ASN1_INTEGER_set(a, 1);
         pBVar1 = (BIGNUM*)0x0;
         if (iVar2 != 0) goto LAB_001000e1;
      }
 else {
         iVar2 = a2i_ASN1_INTEGER(bp, a, acStack_428, 0x400);
         if (iVar2 == 0) {
            BIO_printf(_bio_err, "unable to load number from %s\n", param_1);
         }
 else {
            a_00 = ASN1_INTEGER_to_BN(a, (BIGNUM*)0x0);
            if (a_00 != (BIGNUM*)0x0) {
               ASN1_INTEGER_free(a);
               iVar2 = BN_add_word(a_00, 1);
               pBVar1 = a_00;
               if (iVar2 == 0) {
                  a = (ASN1_INTEGER*)0x0;
               }
 else {
                  a = BN_to_ASN1_INTEGER(a_00, (ASN1_INTEGER*)0x0);
                  if (a != (ASN1_INTEGER*)0x0) goto LAB_001000e1;
                  a = (ASN1_INTEGER*)0x0;
               }

               goto LAB_0010011d;
            }

         }

         pBVar1 = (BIGNUM*)0x0;
      }

   }

   LAB_0010011d:a_00 = pBVar1;
   ASN1_INTEGER_free(a);
   a = (ASN1_INTEGER*)0x0;
   LAB_001000e1:BIO_free_all(bp);
   BN_free(a_00);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return a;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint create_digest_constprop_0(BIO *param_1, undefined8 param_2, EVP_MD *param_3, long *param_4) {
   uint uVar1;
   int iVar2;
   EVP_MD_CTX *ctx;
   long lVar3;
   long in_FS_OFFSET;
   long local_1040;
   undefined1 local_1038[4104];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = EVP_MD_get_size(param_3);
   if ((int)uVar1 < 1) {
      LAB_001002e8:uVar1 = 0;
      goto LAB_00100278;
   }

   if (param_1 == (BIO*)0x0) {
      lVar3 = OPENSSL_hexstr2buf(param_2, &local_1040);
      *param_4 = lVar3;
      if (( lVar3 == 0 ) || ( ctx = (EVP_MD_CTX*)0x0 ),(int)uVar1 != local_1040) {
         ctx = (EVP_MD_CTX*)0x0;
         BIO_printf(_bio_err, "bad digest, %d bytes must be specified\n", (ulong)uVar1);
         goto LAB_00100250;
      }

   }
 else {
      ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
      if (ctx == (EVP_MD_CTX*)0x0) goto LAB_001002e8;
      lVar3 = app_malloc((long)(int)uVar1, "digest buffer");
      *param_4 = lVar3;
      for (iVar2 = EVP_DigestInit(ctx, param_3); iVar2 != 0; iVar2 = EVP_DigestUpdate(ctx, local_1038, (long)iVar2)) {
         iVar2 = BIO_read(param_1, local_1038, 0x1000);
         if (iVar2 < 1) {
            iVar2 = EVP_DigestFinal(ctx, (uchar*)*param_4, (uint*)0x0);
            if (( iVar2 != 0 ) && ( uVar1 = EVP_MD_get_size(param_3) ),0 < (int)uVar1) goto LAB_00100270;
            break;
         }

      }

      LAB_00100250:uVar1 = 0;
      CRYPTO_free((void*)*param_4);
      *param_4 = 0;
   }

   LAB_00100270:EVP_MD_CTX_free(ctx);
   LAB_00100278:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ASN1_INTEGER *serial_cb(undefined8 param_1, char *param_2) {
   int iVar1;
   ASN1_INTEGER *a;
   BIO *bp;
   a = (ASN1_INTEGER*)next_serial(param_2);
   if (a == (ASN1_INTEGER*)0x0) {
      TS_RESP_CTX_set_status_info(param_1, 2, "Error during serial number generation.");
      TS_RESP_CTX_add_failure_info(param_1, 0x11);
      return (ASN1_INTEGER*)0x0;
   }

   bp = BIO_new_file(param_2, "w");
   if (bp != (BIO*)0x0) {
      iVar1 = i2a_ASN1_INTEGER(bp, a);
      if (0 < iVar1) {
         iVar1 = BIO_puts(bp, "\n");
         if (0 < iVar1) goto LAB_00100357;
      }

   }

   BIO_printf(_bio_err, "could not save serial number to %s\n", param_2);
   LAB_00100357:BIO_free_all(bp);
   return a;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */bool ts_main(undefined4 param_1, undefined8 param_2) {
   undefined *puVar1;
   bool bVar2;
   bool bVar3;
   bool bVar4;
   bool bVar5;
   int iVar6;
   void *pvVar7;
   int iVar8;
   uint uVar9;
   int iVar10;
   X509_VERIFY_PARAM *param;
   undefined8 uVar11;
   CONF *conf;
   char *filename;
   BIO *pBVar12;
   X509_VERIFY_PARAM *pm;
   long lVar13;
   long lVar14;
   undefined8 uVar15;
   X509_STORE *ctx;
   X509_LOOKUP_METHOD *pXVar16;
   X509_LOOKUP *pXVar17;
   long lVar18;
   PKCS7 *pPVar19;
   ASN1_OBJECT *pAVar20;
   ASN1_TYPE *pAVar21;
   ASN1_INTEGER *a;
   uchar *__dest;
   EVP_MD *pEVar22;
   BIO *pBVar23;
   undefined **ppuVar24;
   undefined8 in_R9;
   int iVar25;
   long in_FS_OFFSET;
   bool bVar26;
   ASN1_OBJECT *local_120;
   BIO *local_118;
   BIO *local_110;
   long local_108;
   char *local_100;
   BIO *local_f8;
   undefined8 local_f0;
   long local_e0;
   char *local_d8;
   char *local_d0;
   long local_c8;
   long local_c0;
   long local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined4 local_7c;
   void *local_70;
   EVP_MD *local_68;
   void *local_60;
   uchar local_58[24];
   long local_40;
   lVar14 = _default_config_file;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = (void*)0x0;
   local_68 = (EVP_MD*)0x0;
   param = X509_VERIFY_PARAM_new();
   if (param != (X509_VERIFY_PARAM*)0x0) {
      iVar25 = 0;
      opt_set_unknown_name("digest");
      uVar11 = opt_init(param_1, param_2, ts_options);
      bVar3 = false;
      iVar10 = -1;
      bVar5 = false;
      bVar2 = false;
      local_7c = 0;
      bVar4 = false;
      local_c8 = 0;
      local_d0 = (char*)0x0;
      local_88 = 0;
      local_90 = 0;
      local_98 = 0;
      local_c0 = 0;
      local_100 = (char*)0x0;
      local_f0 = 0;
      local_110 = (BIO*)0x0;
      local_d8 = (char*)0x0;
      local_108 = 0;
      local_118 = (BIO*)0x0;
      local_f8 = (BIO*)0x0;
      local_a0 = 0;
      local_a8 = 0;
      local_b0 = 0;
      local_e0 = 0;
      switchD_00100556_caseD_0:iVar8 = opt_next();
      do {
         iVar6 = iVar8;
         if (iVar6 == 0) {
            iVar8 = opt_check_rest_arg(0);
            if (iVar8 == 0) {
               switchD_00100556_caseD_ffffffff:conf = (CONF*)0x0;
            }
 else {
               if (iVar10 == -1) {
                  BIO_printf(_bio_err, "%s: Must give one of -query, -reply, or -verify\n", uVar11);
                  goto switchD_00100556_caseD_ffffffff;
               }

               iVar8 = app_RAND_load();
               if (iVar8 == 0) break;
               iVar8 = opt_md(local_f8, &local_68);
               if (iVar8 == 0) goto switchD_00100556_caseD_ffffffff;
               if (( ( iVar10 == 0x10 ) && ( local_c0 != 0 ) ) && ( iVar8 = iVar8 == 0 )) {
                  BIO_printf(_bio_err, "Error getting password.\n");
                  break;
               }

               conf = (CONF*)app_load_config_internal(lVar14, 0);
               if (conf == (CONF*)0x0) break;
               BIO_printf(_bio_err, "Using configuration from %s\n", lVar14);
               filename = (char*)app_conf_try_string(conf, 0, "oid_file");
               if (filename != (char*)0x0) {
                  pBVar12 = BIO_new_file(filename, "r");
                  if (pBVar12 == (BIO*)0x0) {
                     ERR_print_errors(_bio_err);
                  }
 else {
                     OBJ_create_objects(pBVar12);
                     BIO_free_all(pBVar12);
                  }

               }

               iVar8 = add_oid_section(conf);
               if (iVar8 == 0) {
                  ERR_print_errors(_bio_err);
               }

               if (_default_config_file != lVar14) {
                  bVar26 = true;
                  iVar8 = app_load_modules(conf);
                  if (iVar8 == 0) goto LAB_00100a71;
               }

               pEVar22 = local_68;
               pvVar7 = local_70;
               if (iVar10 == 5) {
                  if (( iVar25 != 0 ) || ( ( local_118 != (BIO*)0x0 && ( local_108 != 0 ) ) )) goto LAB_00100caa;
                  bVar26 = false;
                  if (local_110 == (BIO*)0x0) {
                     local_f8 = (BIO*)0x0;
                     if (( local_108 != 0 ) || ( local_f8 = (BIO*)bio_open_default(local_118, 0x72, 4) ),local_f8 != (BIO*)0x0) {
                        local_60 = (void*)0x0;
                        if (( ( pEVar22 == (EVP_MD*)0x0 ) && ( pEVar22 = EVP_get_digestbyname("sha256") ),pEVar22 == (EVP_MD*)0x0 )) {
                           a = (ASN1_INTEGER*)0x0;
                           lVar13 = 0;
                           local_120 = (ASN1_OBJECT*)0x0;
                           local_118 = (BIO*)0x0;
                           local_100 = (char*)0x0;
                           goto LAB_00101670;
                        }

                        iVar10 = TS_REQ_set_version();
                        if (iVar10 == 0) {
                           a = (ASN1_INTEGER*)0x0;
                           local_120 = (ASN1_OBJECT*)0x0;
                           local_118 = (BIO*)0x0;
                           local_100 = (char*)0x0;
                           goto LAB_00101670;
                        }

                        local_100 = (char*)TS_MSG_IMPRINT_new();
                        if (local_100 == (char*)0x0) {
                           a = (ASN1_INTEGER*)0x0;
                           local_120 = (ASN1_OBJECT*)0x0;
                           local_118 = (BIO*)0x0;
                           goto LAB_00101670;
                        }

                        local_118 = (BIO*)X509_ALGOR_new();
                        if (local_118 != (BIO*)0x0) {
                           iVar10 = EVP_MD_get_type(pEVar22);
                           pAVar20 = OBJ_nid2obj(iVar10);
                           ((X509_ALGOR *)local_118)->algorithm = pAVar20;
                           if (pAVar20 != (ASN1_OBJECT*)0x0) {
                              pAVar21 = ASN1_TYPE_new();
                              ((X509_ALGOR *)local_118)->parameter = pAVar21;
                              if (pAVar21 == (ASN1_TYPE*)0x0) {
                                 local_120 = (ASN1_OBJECT*)0x0;
                                 a = (ASN1_INTEGER*)0x0;
                                 goto LAB_00101670;
                              }

                              pAVar21->type = 5;
                              iVar10 = TS_MSG_IMPRINT_set_algo(local_100);
                              if (( ( ( iVar10 != 0 ) && ( iVar10 = create_digest_constprop_0(local_f8, local_108, pEVar22) ),iVar10 != 0 ) ) && ( iVar10 = TS_MSG_IMPRINT_set_msg(local_100, local_60, iVar10) ),iVar10 != 0) {
                                 if (local_d8 == (char*)0x0) {
                                    local_120 = (ASN1_OBJECT*)0x0;
                                 }
 else {
                                    local_120 = OBJ_txt2obj(local_d8, 0);
                                    if (local_120 == (ASN1_OBJECT*)0x0) {
                                       BIO_printf(_bio_err, "cannot convert %s to OID\n", local_d8);
                                       goto LAB_0010171a;
                                    }

                                    iVar10 = TS_REQ_set_policy_id(lVar13, local_120);
                                    if (iVar10 == 0) {
                                       a = (ASN1_INTEGER*)0x0;
                                       goto LAB_00101670;
                                    }

                                 }

                                 if (bVar4) {
                                    a = (ASN1_INTEGER*)0x0;
                                    goto LAB_0010150a;
                                 }

                                 iVar10 = RAND_bytes(local_58, 8);
                                 if (iVar10 < 1) goto LAB_001016bc;
                                 lVar14 = 0;
                                 goto LAB_00101479;
                              }

                           }

                        }

                        LAB_0010171a:a = (ASN1_INTEGER*)0x0;
                        local_120 = (ASN1_OBJECT*)0x0;
                        goto LAB_00101670;
                     }

                  }
 else {
                     local_110 = (BIO*)bio_open_default(local_110, 0x72, 4);
                     if (local_110 != (BIO*)0x0) {
                        lVar14 = d2i_TS_REQ_bio(local_110, 0);
                        local_f8 = (BIO*)0x0;
                        goto LAB_00100d3b;
                     }

                  }

                  pBVar12 = (BIO*)0x0;
                  lVar14 = 0;
                  local_f8 = (BIO*)0x0;
                  local_110 = (BIO*)0x0;
                  goto LAB_00100d82;
               }

               if (iVar10 == 0x10) {
                  if (iVar25 == 0) {
                     bVar26 = false;
                     if (local_110 == (BIO*)0x0) {
                        LAB_00100fe7:if (!bVar5) {
                           pBVar12 = BIO_new_file(local_100, "rb");
                           if (( ( pBVar12 == (BIO*)0x0 ) || ( lVar14 = TS_CONF_get_tsa_section(conf, local_a0) ),lVar14 == 0 )) {
                              lVar13 = 0;
                           }
 else {
                              iVar10 = TS_CONF_set_serial(conf, lVar14, serial_cb, lVar13);
                              if (( ( iVar10 != 0 ) && ( iVar10 = TS_CONF_set_crypto_device(conf, lVar14, local_a8) ),iVar10 != 0 )) &&( ( iVar10 = TS_CONF_set_signer_cert(conf, lVar14, local_90, lVar13) ),iVar10 != 0 && ( ( iVar10 = TS_CONF_set_certs(conf, lVar14, local_88, lVar13) ),iVar10 != 0 && ( iVar10 = TS_CONF_set_signer_key(conf, lVar14, local_98, pvVar7, lVar13) ),iVar10 != 0 ) )(pEVar22 == (EVP_MD*)0x0);
                              {
                                 iVar10 = TS_CONF_set_signer_digest(conf, lVar14, 0, lVar13);
                              }

                              else{iVar10 = TS_RESP_CTX_set_signer_digest(lVar13, pEVar22);
                           }

                           if (( ( ( ( ( iVar10 != 0 ) && ( iVar10 = TS_CONF_set_ess_cert_id_digest(conf, lVar14, lVar13) ),iVar10 != 0 ) ) && ( iVar10 = TS_CONF_set_def_policy(conf, lVar14, local_d8, lVar13) ),iVar10 != 0 ) ) && ( ( iVar10 = TS_CONF_set_policies(conf, lVar14, lVar13) ),iVar10 != 0 && ( iVar10 = TS_CONF_set_digests(conf, lVar14, lVar13) ),iVar10 != 0 )) {
                              TS_RESP_CTX_free(lVar13);
                              BIO_free_all(pBVar12);
                              BIO_printf(_bio_err, "Response has been generated.\n");
                              LAB_00101215:if (bVar2) {
                                 pBVar23 = (BIO*)bio_open_default(local_f0, 0x77, 0x8001);
                                 if (pBVar23 != (BIO*)0x0) {
                                    if (bVar3) {
                                       uVar11 = TS_RESP_get_tst_info(lVar14);
                                       iVar10 = TS_TST_INFO_print_bio(pBVar23, uVar11);
                                       bVar26 = iVar10 != 0;
                                    }
 else {
                                       iVar10 = TS_RESP_print_bio(pBVar23, lVar14);
                                       bVar26 = iVar10 != 0;
                                    }

                                 }

                              }
 else {
                                 pBVar23 = (BIO*)bio_open_default(local_f0, 0x77, 4);
                                 if (pBVar23 == (BIO*)0x0) {
                                    bVar26 = false;
                                 }
 else if (bVar3) {
                                    pPVar19 = (PKCS7*)TS_RESP_get_token(lVar14);
                                    iVar10 = i2d_PKCS7_bio(pBVar23, pPVar19);
                                    bVar26 = iVar10 != 0;
                                 }
 else {
                                    iVar10 = i2d_TS_RESP_bio(pBVar23, lVar14);
                                    bVar26 = iVar10 != 0;
                                 }

                              }

                              goto LAB_00100ed7;
                           }

                        }

                     }

                     lVar14 = 0;
                     bVar26 = false;
                     TS_RESP_free(0);
                     pBVar23 = (BIO*)0x0;
                     TS_RESP_CTX_free(lVar13);
                     BIO_free_all(pBVar12);
                     BIO_printf(_bio_err, "Response is not generated.\n");
                     LAB_00100ed7:bVar26 = (bool)( bVar26 ^ 1 );
                     ERR_print_errors(_bio_err);
                     BIO_free_all(local_110);
                     for (int i = 0; i < 3; i++) {
                        BIO_free_all((BIO*)0);
                     }

                     BIO_free_all(pBVar23);
                     TS_RESP_free(lVar14);
                     goto LAB_00100a71;
                  }

               }
 else if (local_100 == (char*)0x0) {
                  if (local_110 == (BIO*)0x0) goto LAB_00100fe7;
                  local_110 = BIO_new_file((char*)local_110, "rb");
                  if (local_110 != (BIO*)0x0) {
                     if (!bVar5) {
                        lVar14 = d2i_TS_RESP_bio(local_110);
                        if (lVar14 != 0) goto LAB_00101215;
                        pBVar23 = (BIO*)0x0;
                        bVar26 = false;
                        goto LAB_00100ed7;
                     }

                     pPVar19 = d2i_PKCS7_bio(local_110, (PKCS7**)0x0);
                     if (( pPVar19 == (PKCS7*)0x0 ) || ( lVar13 = lVar13 == 0 )) {
                        lVar18 = 0;
                        lVar14 = 0;
                        lVar13 = 0;
                     }
 else {
                        lVar14 = TS_RESP_new();
                        if (lVar14 == 0) {
                           lVar18 = 0;
                        }
 else {
                           lVar18 = TS_STATUS_INFO_new();
                           if (( ( lVar18 != 0 ) && ( iVar10 = TS_STATUS_INFO_set_status(lVar18, 0) ),iVar10 != 0 )) {
                              TS_RESP_set_tst_info(lVar14, pPVar19, lVar13);
                              PKCS7_free((PKCS7*)0x0);
                              TS_TST_INFO_free(0);
                              TS_STATUS_INFO_free(lVar18);
                              goto LAB_00101215;
                           }

                        }

                     }

                     PKCS7_free(pPVar19);
                     TS_TST_INFO_free(lVar13);
                     TS_RESP_free(lVar14);
                     TS_STATUS_INFO_free(lVar18);
                  }

                  pBVar23 = (BIO*)0x0;
                  lVar14 = 0;
                  goto LAB_00100ed7;
               }

            }

         }
 else if (( iVar10 == 0x16 ) && ( local_110 != (BIO*)0x0 )) {
            if (local_100 == (char*)0x0) {
               if (local_118 != (BIO*)0x0) goto LAB_00100f5b;
               LAB_00100f67:if (( local_100 == (char*)0x0 && local_118 == (BIO*)0x0 ) && ( local_108 != 0 )) goto LAB_00100720;
            }
 else {
               if (local_118 != (BIO*)0x0) {
                  LAB_00100f5b:if (local_100 != (char*)0x0) goto LAB_00100f67;
               }

               if (local_108 == 0) {
                  LAB_00100720:pm = (X509_VERIFY_PARAM*)0x0;
                  if (iVar25 != 0) {
                     pm = param;
                  }

                  pBVar12 = BIO_new_file((char*)local_110, "rb");
                  if (pBVar12 == (BIO*)0x0) {
                     LAB_00100fa4:lVar14 = 0;
                     __printf_chk(2, "Verification: ");
                     local_120 = (ASN1_OBJECT*)0x0;
                     local_110 = (BIO*)0x0;
                     LAB_00100fc7:iVar10 = 0;
                     puts("FAILED");
                     ERR_print_errors(_bio_err);
                  }
 else {
                     if (bVar5) {
                        local_110 = (BIO*)d2i_PKCS7_bio(pBVar12, (PKCS7**)0x0);
                        if (local_110 == (BIO*)0x0) goto LAB_00100fa4;
                        in_R9 = 0;
                        local_120 = (ASN1_OBJECT*)0x0;
                     }
 else {
                        local_120 = (ASN1_OBJECT*)d2i_TS_RESP_bio();
                        if (local_120 == (ASN1_OBJECT*)0x0) goto LAB_00100fa4;
                        local_110 = (BIO*)0x0;
                     }

                     if (local_108 == 0 && local_118 == (BIO*)0x0) {
                        if (local_100 != (char*)0x0) {
                           local_118 = BIO_new_file(local_100, "rb");
                           if (local_118 == (BIO*)0x0) goto LAB_0010193d;
                           lVar13 = d2i_TS_REQ_bio(local_118, 0);
                           if (lVar13 == 0) {
                              lVar14 = 0;
                           }
 else {
                              lVar14 = TS_REQ_to_TS_VERIFY_CTX(lVar13, 0);
                              if (lVar14 != 0) {
                                 uVar9 = 0;
                                 goto LAB_001007e3;
                              }

                           }

                           goto LAB_001017cf;
                        }

                        LAB_001017e9:lVar14 = 0;
                        __printf_chk(2, "Verification: ");
                        goto LAB_00100fc7;
                     }

                     lVar14 = TS_VERIFY_CTX_new();
                     if (lVar14 == 0) {
                        LAB_0010193d:lVar13 = 0;
                        lVar14 = 0;
                        local_118 = (BIO*)0x0;
                        LAB_001017cf:TS_VERIFY_CTX_free(lVar14);
                        BIO_free_all(local_118);
                        TS_REQ_free(lVar13);
                        goto LAB_001017e9;
                     }

                     if (local_118 != (BIO*)0x0) {
                        pBVar23 = BIO_new_file((char*)local_118, "rb");
                        if (pBVar23 != (BIO*)0x0) {
                           iVar10 = TS_VERIFY_CTX_set0_data(lVar14);
                           if (iVar10 != 0) {
                              uVar9 = 0x52;
                              lVar13 = 0;
                              local_118 = (BIO*)0x0;
                              goto LAB_001007e3;
                           }

                           BIO_free_all(pBVar23);
                        }

                        LAB_001017c5:lVar13 = 0;
                        local_118 = (BIO*)0x0;
                        goto LAB_001017cf;
                     }

                     uVar11 = OPENSSL_hexstr2buf(local_108, &local_60);
                     iVar10 = TS_VERIFY_CTX_set0_imprint(lVar14, uVar11, local_60);
                     if (iVar10 == 0) {
                        BIO_printf(_bio_err, "invalid digest string\n");
                        goto LAB_001017c5;
                     }

                     lVar13 = 0;
                     uVar9 = 0x4a;
                     LAB_001007e3:TS_VERIFY_CTX_add_flags(lVar14, uVar9 | 1);
                     uVar11 = app_get0_libctx();
                     uVar15 = app_get0_propq();
                     ctx = X509_STORE_new();
                     if (ctx == (X509_STORE*)0x0) {
                        BIO_printf(_bio_err, "memory allocation failure\n");
                        LAB_0010187f:ctx = (X509_STORE*)0x0;
                     }
 else {
                        X509_STORE_set_verify_cb(ctx, verify_cb);
                        if (local_d0 != (char*)0x0) {
                           pXVar16 = X509_LOOKUP_hash_dir();
                           pXVar17 = X509_STORE_add_lookup(ctx, pXVar16);
                           if (pXVar17 == (X509_LOOKUP*)0x0) {
                              LAB_001018b6:BIO_printf(_bio_err, "memory allocation failure\n");
                           }
 else {
                              iVar10 = X509_LOOKUP_ctrl(pXVar17, 2, local_d0, 1, (char**)0x0);
                              if (0 < iVar10) goto LAB_00100867;
                              BIO_printf(_bio_err, "Error loading directory %s\n", local_d0);
                           }

                           LAB_00101877:X509_STORE_free(ctx);
                           goto LAB_0010187f;
                        }

                        LAB_00100867:if (local_e0 != 0) {
                           pXVar16 = X509_LOOKUP_file();
                           pXVar17 = X509_STORE_add_lookup(ctx, pXVar16);
                           if (pXVar17 == (X509_LOOKUP*)0x0) goto LAB_001018b6;
                           in_R9 = uVar11;
                           iVar10 = X509_LOOKUP_ctrl_ex(pXVar17, 1, local_e0, 1, 0, uVar11, uVar15);
                           if (iVar10 < 1) {
                              BIO_printf(_bio_err, "Error loading file %s\n", local_e0, pXVar17);
                              goto LAB_00101877;
                           }

                        }

                        if (local_c8 != 0) {
                           pXVar16 = (X509_LOOKUP_METHOD*)X509_LOOKUP_store();
                           pXVar17 = X509_STORE_add_lookup(ctx, pXVar16);
                           if (pXVar17 == (X509_LOOKUP*)0x0) goto LAB_001018b6;
                           iVar10 = X509_LOOKUP_ctrl_ex(pXVar17, 3, local_c8, 0, 0, uVar11, uVar15, in_R9);
                           if (iVar10 < 1) {
                              BIO_printf(_bio_err, "Error loading store URI %s\n", local_c8);
                              goto LAB_00101877;
                           }

                        }

                        if (pm != (X509_VERIFY_PARAM*)0x0) {
                           X509_STORE_set1_param(ctx, pm);
                        }

                     }

                     iVar10 = TS_VERIFY_CTX_set0_store(lVar14, ctx);
                     if (( iVar10 == 0 ) || ( ( local_b0 != 0 && ( ( lVar18 = load_certs_multifile(local_b0, 0, "extra untrusted certs", pm) ),lVar18 == 0 || ( iVar10 = TS_VERIFY_CTX_set0_certs(lVar14, lVar18) ),iVar10 == 0 ) ) )) goto LAB_001017cf;
                     BIO_free_all(local_118);
                     TS_REQ_free(lVar13);
                     if (bVar5) {
                        iVar10 = TS_RESP_verify_token(lVar14, local_110);
                     }
 else {
                        iVar10 = TS_RESP_verify_response(lVar14, local_120);
                     }

                     __printf_chk(2, "Verification: ");
                     if (iVar10 == 0) goto LAB_00100fc7;
                     puts("OK");
                  }

                  BIO_free_all(pBVar12);
                  PKCS7_free((PKCS7*)local_110);
                  TS_RESP_free(local_120);
                  TS_VERIFY_CTX_free(lVar14);
                  bVar26 = iVar10 == 0;
                  goto LAB_00100a71;
               }

            }

         }

      }
 while ( puVar1 != (undefined*)0x0 );
      {
         ppuVar24 = ppuVar24 + 1;
         BIO_printf(_bio_err, "%s\n");
         puVar1 = *ppuVar24;
      }

      bVar26 = false;
      conf = (CONF*)0x0;
      goto LAB_00100a71;
      case 2:
        local_a8 = opt_arg();
        goto switchD_00100556_caseD_0;
      case 3:
        lVar14 = opt_arg();
        goto switchD_00100556_caseD_0;
      case 4:
        local_a0 = opt_arg();
        goto switchD_00100556_caseD_0;
      case 5:
      case 0x10:
      case 0x16:
        if (iVar10 != -1) {
          BIO_printf(_bio_err,"%s: Must give only one of -query, -reply, or -verify\n",uVar11);
          goto switchD_00100556_caseD_ffffffff;
        }
        iVar8 = opt_next();
        iVar10 = iVar6;
        break;
      case 6:
        local_118 = (BIO *)opt_arg();
        goto switchD_00100556_caseD_0;
      case 7:
        local_108 = opt_arg();
        goto switchD_00100556_caseD_0;
      case 8:
        local_d8 = (char *)opt_arg();
        goto switchD_00100556_caseD_0;
      case 9:
        bVar4 = true;
        goto switchD_00100556_caseD_0;
      case 10:
        local_7c = 1;
        goto switchD_00100556_caseD_0;
      case 0xb:
        local_110 = (BIO *)opt_arg();
        goto switchD_00100556_caseD_0;
      case 0xc:
        bVar5 = true;
        goto switchD_00100556_caseD_0;
      case 0xd:
        local_f0 = opt_arg();
        goto switchD_00100556_caseD_0;
      case 0xe:
        bVar3 = true;
        goto switchD_00100556_caseD_0;
      case 0xf:
        bVar2 = true;
        goto switchD_00100556_caseD_0;
      case 0x11:
        local_100 = (char *)opt_arg();
        goto switchD_00100556_caseD_0;
      case 0x12:
        local_c0 = opt_arg();
        goto switchD_00100556_caseD_0;
      case 0x13:
        local_98 = opt_arg();
        goto switchD_00100556_caseD_0;
      case 0x14:
        local_90 = opt_arg();
        goto switchD_00100556_caseD_0;
      case 0x15:
        local_88 = opt_arg();
        goto switchD_00100556_caseD_0;
      case 0x17:
        local_d0 = (char *)opt_arg();
        goto switchD_00100556_caseD_0;
      case 0x18:
        local_e0 = opt_arg();
        goto switchD_00100556_caseD_0;
      case 0x19:
        local_c8 = opt_arg();
        goto switchD_00100556_caseD_0;
      case 0x1a:
        local_b0 = opt_arg();
        goto switchD_00100556_caseD_0;
      case 0x1b:
        local_f8 = (BIO *)opt_unknown();
        goto switchD_00100556_caseD_0;
      case -1:
        goto switchD_00100556_caseD_ffffffff;
   }

}
while (true) ;;;}bVar26 = true;conf = (CONF*)0x0;goto LAB_00100a71;while (lVar14 = lVar14 + 1,lVar14 != 8) {
   LAB_00101479:if (local_58[lVar14] != '\0') {
      local_108._0_4_ = (int)lVar14;
      goto LAB_0010148c;
   }

}
;local_108._0_4_ = 8;LAB_0010148c:a = ASN1_INTEGER_new();if (a == (ASN1_INTEGER*)0x0) {
   LAB_001016bc:a = (ASN1_INTEGER*)0x0;
   BIO_printf(_bio_err, "could not create nonce\n");
   ASN1_INTEGER_free((ASN1_INTEGER*)0x0);
   LAB_00101670:lVar14 = 0;
   TS_REQ_free(lVar13);
   BIO_printf(_bio_err, "could not create query\n");
   ERR_print_errors(_bio_err);
}
 else {
   CRYPTO_free(a->data);
   a->length = 8 - (int)local_108;
   __dest = (uchar*)app_malloc((long)( 9 - (int)local_108 ), "nonce buffer");
   a->data = __dest;
   memcpy(__dest, local_58 + (int)local_108, (long)a->length);
   iVar10 = TS_REQ_set_nonce(lVar13, a);
   if (iVar10 == 0) goto LAB_00101670;
   LAB_0010150a:iVar10 = TS_REQ_set_cert_req(lVar13, local_7c);
   lVar14 = lVar13;
   if (iVar10 == 0) goto LAB_00101670;
}
TS_MSG_IMPRINT_free(local_100);X509_ALGOR_free((X509_ALGOR*)local_118);CRYPTO_free(local_60);ASN1_OBJECT_free(local_120);ASN1_INTEGER_free(a);LAB_00100d3b:if (lVar14 == 0) {
   pBVar12 = (BIO*)0x0;
}
 else if (bVar2) {
   pBVar12 = (BIO*)bio_open_default(local_f0, 0x77, 0x8001);
   if (pBVar12 != (BIO*)0x0) {
      iVar10 = TS_REQ_print_bio(pBVar12, lVar14);
      bVar26 = iVar10 != 0;
   }

}
 else {
   pBVar12 = (BIO*)bio_open_default(local_f0, 0x77, 4);
   if (pBVar12 == (BIO*)0x0) {
      bVar26 = false;
   }
 else {
      iVar10 = i2d_TS_REQ_bio(pBVar12, lVar14);
      bVar26 = iVar10 != 0;
   }

}
LAB_00100d82:bVar26 = (bool)( bVar26 ^ 1 );ERR_print_errors(_bio_err);BIO_free_all(local_110);BIO_free_all(local_f8);BIO_free_all(pBVar12);TS_REQ_free(lVar14);LAB_00100a71:X509_VERIFY_PARAM_free(param);EVP_MD_free(local_68);NCONF_free(conf);CRYPTO_free(local_70);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return bVar26;}

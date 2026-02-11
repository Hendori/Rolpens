
undefined8 ts_check_signer_name(GENERAL_NAME *param_1,X509 *param_2)

{
  int iVar1;
  int iVar2;
  GENERAL_NAMES *a;
  GENERAL_NAME *a_00;
  X509_NAME *b;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = -1;
  if (param_1->type == 4) {
    uVar3 = 1;
    b = X509_get_subject_name(param_2);
    iVar2 = X509_NAME_cmp((param_1->d).directoryName,b);
    if (iVar2 == 0) goto LAB_001000a5;
  }
  while (a = (GENERAL_NAMES *)X509_get_ext_d2i(param_2,0x55,(int *)0x0,&local_34),
        a != (GENERAL_NAMES *)0x0) {
    iVar2 = 0;
    while (iVar1 = OPENSSL_sk_num(a), iVar2 < iVar1) {
      a_00 = (GENERAL_NAME *)OPENSSL_sk_value(a,iVar2);
      iVar1 = GENERAL_NAME_cmp(a_00,param_1);
      iVar2 = iVar2 + 1;
      if (iVar1 == 0) {
        uVar3 = 1;
        goto LAB_0010009d;
      }
    }
    GENERAL_NAMES_free(a);
  }
  a = (GENERAL_NAMES *)0x0;
  uVar3 = 0;
LAB_0010009d:
  GENERAL_NAMES_free(a);
LAB_001000a5:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8
ts_compute_imprint_constprop_0_isra_0
          (BIO *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,int *param_5)

{
  X509_ALGOR *xn;
  int iVar1;
  X509_ALGOR *pXVar2;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char local_1088 [64];
  undefined1 local_1048 [4104];
  long local_40;
  
  xn = (X509_ALGOR *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  *param_4 = 0;
  pXVar2 = X509_ALGOR_dup(xn);
  *param_3 = pXVar2;
  if (pXVar2 != (X509_ALGOR *)0x0) {
    OBJ_obj2txt(local_1088,0x32,xn->algorithm,0);
    ERR_set_mark();
    type = (EVP_MD *)EVP_MD_fetch(0,local_1088,0);
    if ((type != (EVP_MD *)0x0) || (type = EVP_get_digestbyname(local_1088), type != (EVP_MD *)0x0))
    {
      ERR_pop_to_mark();
      iVar1 = EVP_MD_get_size(type);
      if (0 < iVar1) {
        *param_5 = iVar1;
        ctx = (EVP_MD_CTX *)CRYPTO_malloc(iVar1,"crypto/ts/ts_rsp_verify.c",0x1c8);
        *param_4 = ctx;
        if (ctx == (EVP_MD_CTX *)0x0) goto LAB_0010026e;
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        if (ctx != (EVP_MD_CTX *)0x0) {
          iVar1 = EVP_DigestInit(ctx,type);
          if (iVar1 != 0) {
            EVP_MD_free(type);
            do {
              iVar1 = BIO_read(param_1,local_1048,0x1000);
              if (iVar1 < 1) {
                type = (EVP_MD *)0x0;
                iVar1 = EVP_DigestFinal(ctx,(uchar *)*param_4,(uint *)0x0);
                if (iVar1 == 0) goto LAB_0010026e;
                EVP_MD_CTX_free(ctx);
                uVar3 = 1;
                goto LAB_001002b1;
              }
              iVar1 = EVP_DigestUpdate(ctx,local_1048,(long)iVar1);
            } while (iVar1 != 0);
            type = (EVP_MD *)0x0;
          }
          goto LAB_0010026e;
        }
        ERR_new();
        ERR_set_debug("crypto/ts/ts_rsp_verify.c",0x1cd,"ts_compute_imprint");
        ERR_set_error(0x2f,0x80006,0);
      }
      ctx = (EVP_MD_CTX *)0x0;
      goto LAB_0010026e;
    }
    ERR_clear_last_mark();
  }
  ctx = (EVP_MD_CTX *)0x0;
  type = (EVP_MD *)0x0;
LAB_0010026e:
  EVP_MD_CTX_free(ctx);
  EVP_MD_free(type);
  X509_ALGOR_free((X509_ALGOR *)*param_3);
  *param_3 = 0;
  CRYPTO_free((void *)*param_4);
  *param_5 = 0;
  uVar3 = 0;
  *param_4 = 0;
LAB_001002b1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 ts_check_imprints_isra_0(undefined8 *param_1,void *param_2,uint param_3,long *param_4)

{
  undefined8 *puVar1;
  ASN1_TYPE *a;
  int iVar2;
  uint uVar3;
  void *__s2;
  
  puVar1 = (undefined8 *)*param_4;
  if (((param_1 == (undefined8 *)0x0) ||
      (((iVar2 = OBJ_cmp((ASN1_OBJECT *)*param_1,(ASN1_OBJECT *)*puVar1), iVar2 == 0 &&
        (((ASN1_TYPE *)param_1[1] == (ASN1_TYPE *)0x0 ||
         (iVar2 = ASN1_TYPE_get((ASN1_TYPE *)param_1[1]), iVar2 == 5)))) &&
       ((a = (ASN1_TYPE *)puVar1[1], a == (ASN1_TYPE *)0x0 || (iVar2 = ASN1_TYPE_get(a), iVar2 == 5)
        ))))) && (uVar3 = ASN1_STRING_length((ASN1_STRING *)param_4[1]), uVar3 == param_3)) {
    __s2 = (void *)ASN1_STRING_get0_data(param_4[1]);
    iVar2 = memcmp(param_2,__s2,(ulong)param_3);
    if (iVar2 == 0) {
      return 1;
    }
  }
  ERR_new();
  ERR_set_debug("crypto/ts/ts_rsp_verify.c",0x200,"ts_check_imprints");
  ERR_set_error(0x2f,0x67,0);
  return 0;
}



int TS_RESP_verify_signature
              (PKCS7 *param_1,stack_st_X509 *param_2,X509_STORE *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  stack_st_PKCS7_SIGNER_INFO *psVar3;
  PKCS7_SIGNER_INFO *si;
  long lVar4;
  stack_st_X509 *psVar5;
  X509 *x509;
  stack_st_X509 *chain;
  X509_STORE_CTX *ctx;
  stack_st_X509 *psVar6;
  ASN1_TYPE *pAVar7;
  ASN1_TYPE *pAVar8;
  BIO *b;
  char *pcVar9;
  long in_FS_OFFSET;
  uchar *local_1050;
  undefined1 local_1048 [4104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (PKCS7 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ts/ts_rsp_verify.c",0x67,"TS_RESP_verify_signature");
    ERR_set_error(0x2f,0x66,0);
  }
  else {
    iVar1 = OBJ_obj2nid(param_1->type);
    if (iVar1 == 0x16) {
      psVar3 = PKCS7_get_signer_info(param_1);
      if (psVar3 != (stack_st_PKCS7_SIGNER_INFO *)0x0) {
        iVar1 = OPENSSL_sk_num(psVar3);
        if (iVar1 == 1) {
          si = (PKCS7_SIGNER_INFO *)OPENSSL_sk_value(psVar3,0);
          lVar4 = PKCS7_ctrl(param_1,2,0,(char *)0x0);
          if (lVar4 == 0) {
            psVar5 = PKCS7_get0_signers(param_1,param_2,0);
            if (psVar5 != (stack_st_X509 *)0x0) {
              iVar1 = OPENSSL_sk_num(psVar5);
              if (iVar1 == 1) {
                x509 = (X509 *)OPENSSL_sk_value(psVar5,0);
                iVar1 = OPENSSL_sk_num(param_2);
                iVar2 = OPENSSL_sk_num(((param_1->d).data)->flags);
                chain = (stack_st_X509 *)OPENSSL_sk_new_reserve(0,iVar1 + iVar2);
                if (chain != (stack_st_X509 *)0x0) {
                  iVar1 = X509_add_certs(chain,param_2,0);
                  if (iVar1 == 0) {
                    psVar6 = (stack_st_X509 *)0x0;
                    b = (BIO *)0x0;
                    iVar1 = 0;
                  }
                  else {
                    iVar1 = X509_add_certs(chain,((param_1->d).data)->flags,0);
                    if (iVar1 != 0) {
                      ctx = X509_STORE_CTX_new();
                      if (ctx == (X509_STORE_CTX *)0x0) {
                        psVar6 = (stack_st_X509 *)0x0;
                        iVar1 = 0;
                        ERR_new();
                        ERR_set_debug("crypto/ts/ts_rsp_verify.c",0xb7,"ts_verify_cert");
                        ERR_set_error(0x2f,0x8000b,0);
                        X509_STORE_CTX_free((X509_STORE_CTX *)0x0);
                        b = (BIO *)0x0;
                        goto LAB_001004f7;
                      }
                      iVar1 = X509_STORE_CTX_init(ctx,param_3,x509,chain);
                      if (iVar1 != 0) {
                        X509_STORE_CTX_set_purpose(ctx,9);
                        iVar1 = X509_verify_cert(ctx);
                        if (0 < iVar1) {
                          psVar6 = X509_STORE_CTX_get1_chain(ctx);
                          X509_STORE_CTX_free(ctx);
                          pAVar7 = PKCS7_get_signed_attribute(si,0xdf);
                          if (pAVar7 != (ASN1_TYPE *)0x0) {
                            local_1050 = ((pAVar7->value).asn1_string)->data;
                            pAVar7 = (ASN1_TYPE *)
                                     d2i_ESS_SIGNING_CERT
                                               (0,&local_1050,
                                                (long)((pAVar7->value).asn1_string)->length);
                          }
                          pAVar8 = PKCS7_get_signed_attribute(si,0x43e);
                          if (pAVar8 != (ASN1_TYPE *)0x0) {
                            local_1050 = ((pAVar8->value).asn1_string)->data;
                            pAVar8 = (ASN1_TYPE *)
                                     d2i_ESS_SIGNING_CERT_V2
                                               (0,&local_1050,
                                                (long)((pAVar8->value).asn1_string)->length);
                          }
                          iVar1 = OSSL_ESS_check_signing_certs(pAVar7,pAVar8,psVar6,1);
                          ESS_SIGNING_CERT_free(pAVar7);
                          ESS_SIGNING_CERT_V2_free(pAVar8);
                          if (iVar1 < 1) {
                            b = (BIO *)0x0;
                            iVar1 = 0;
                          }
                          else {
                            b = PKCS7_dataInit(param_1,(BIO *)0x0);
                            do {
                              iVar1 = BIO_read(b,local_1048,0x1000);
                            } while (0 < iVar1);
                            iVar1 = PKCS7_signatureVerify(b,param_1,si,x509);
                            if (iVar1 < 1) {
                              ERR_new();
                              iVar1 = 0;
                              ERR_set_debug("crypto/ts/ts_rsp_verify.c",0x94,
                                            "TS_RESP_verify_signature");
                              ERR_set_error(0x2f,0x6d,0);
                            }
                            else {
                              iVar1 = 1;
                              if (param_4 != (undefined8 *)0x0) {
                                iVar1 = X509_up_ref(x509);
                                if (iVar1 != 0) {
                                  *param_4 = x509;
                                  iVar1 = 1;
                                }
                              }
                            }
                          }
                          goto LAB_001004f7;
                        }
                        iVar1 = X509_STORE_CTX_get_error(ctx);
                        ERR_new();
                        ERR_set_debug("crypto/ts/ts_rsp_verify.c",0xc0,"ts_verify_cert");
                        pcVar9 = X509_verify_cert_error_string((long)iVar1);
                        ERR_set_error(0x2f,100,"Verify error:%s",pcVar9);
                      }
                      X509_STORE_CTX_free(ctx);
                    }
                    psVar6 = (stack_st_X509 *)0x0;
                    b = (BIO *)0x0;
                    iVar1 = 0;
                  }
                  goto LAB_001004f7;
                }
              }
              psVar6 = (stack_st_X509 *)0x0;
              b = (BIO *)0x0;
              iVar1 = 0;
              chain = (stack_st_X509 *)0x0;
              goto LAB_001004f7;
            }
          }
          else {
            ERR_new();
            ERR_set_debug("crypto/ts/ts_rsp_verify.c",0x75,"TS_RESP_verify_signature");
            ERR_set_error(0x2f,0x6a,0);
          }
          goto LAB_001004e9;
        }
      }
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_verify.c",0x70,"TS_RESP_verify_signature");
      ERR_set_error(0x2f,0x6e,0);
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_verify.c",0x6b,"TS_RESP_verify_signature");
      ERR_set_error(0x2f,0x72,0);
    }
  }
LAB_001004e9:
  psVar6 = (stack_st_X509 *)0x0;
  b = (BIO *)0x0;
  iVar1 = 0;
  psVar5 = (stack_st_X509 *)0x0;
  chain = (stack_st_X509 *)0x0;
LAB_001004f7:
  BIO_free_all(b);
  OPENSSL_sk_free(chain);
  OSSL_STACK_OF_X509_free(psVar6);
  OPENSSL_sk_free(psVar5);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 int_ts_RESP_verify_token(uint *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  void *local_78;
  X509_ALGOR *local_70;
  undefined4 local_5c;
  X509 *local_58;
  X509_ALGOR *local_50;
  void *local_48;
  long local_40;
  
  lVar2 = *(long *)(param_3 + 0x40);
  uVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = 0;
  local_58 = (X509 *)0x0;
  local_50 = (X509_ALGOR *)0x0;
  local_48 = (void *)0x0;
  if ((((((uVar1 & 0x40) == 0) || (lVar2 == 0)) && ((uVar1 & 0x80) == 0)) && ((uVar1 & 1) == 0)) ||
     (iVar3 = TS_RESP_verify_signature
                        (param_2,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 2),&local_58
                        ), iVar3 != 0)) {
    if (((uVar1 & 2) == 0) || (lVar5 = TS_TST_INFO_get_version(param_3), lVar5 == 1)) {
      if (((uVar1 & 4) == 0) ||
         (iVar3 = OBJ_cmp(*(ASN1_OBJECT **)(param_1 + 6),*(ASN1_OBJECT **)(param_3 + 8)), iVar3 == 0
         )) {
        if (((uVar1 & 8) != 0) &&
           (iVar3 = ts_check_imprints_isra_0
                              (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                               param_1[0xc],*(undefined8 *)(param_3 + 0x10)), iVar3 == 0))
        goto LAB_00100b3c;
        if ((uVar1 & 0x10) != 0) {
          iVar3 = ts_compute_imprint_constprop_0_isra_0
                            (*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_3 + 0x10),
                             &local_50,&local_48,&local_5c);
          if (iVar3 == 0) {
            local_70 = local_50;
            local_78 = local_48;
            uVar4 = 0;
            goto LAB_00100a62;
          }
          local_78 = local_48;
          local_70 = local_50;
          iVar3 = ts_check_imprints_isra_0
                            (local_50,local_48,local_5c,*(undefined8 *)(param_3 + 0x10));
          if (iVar3 == 0) {
            uVar4 = 0;
            goto LAB_00100a62;
          }
        }
        if ((uVar1 & 0x20) != 0) {
          if (*(ASN1_INTEGER **)(param_3 + 0x38) == (ASN1_INTEGER *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/ts/ts_rsp_verify.c",0x209,"ts_check_nonces");
            uVar6 = 0x69;
          }
          else {
            iVar3 = ASN1_INTEGER_cmp(*(ASN1_INTEGER **)(param_1 + 0x10),
                                     *(ASN1_INTEGER **)(param_3 + 0x38));
            if (iVar3 == 0) goto LAB_00100a24;
            ERR_new();
            ERR_set_debug("crypto/ts/ts_rsp_verify.c",0x20f,"ts_check_nonces");
            uVar6 = 0x68;
          }
          uVar4 = 0;
          ERR_set_error(0x2f,uVar6,0);
          local_70 = local_50;
          local_78 = local_48;
          goto LAB_00100a62;
        }
LAB_00100a24:
        if ((((uVar1 & 0x40) == 0) || (lVar2 == 0)) ||
           (iVar3 = ts_check_signer_name(lVar2,local_58), iVar3 != 0)) {
          if ((uVar1 & 0x80) == 0) {
            uVar4 = 1;
            local_70 = local_50;
            local_78 = local_48;
            goto LAB_00100a62;
          }
          iVar3 = ts_check_signer_name(*(undefined8 *)(param_1 + 0x12),local_58);
          if (iVar3 != 0) {
            local_70 = local_50;
            uVar4 = 1;
            local_78 = local_48;
            goto LAB_00100a62;
          }
          ERR_new();
          ERR_set_debug("crypto/ts/ts_rsp_verify.c",0x155,"int_ts_RESP_verify_token");
          uVar6 = 0x70;
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/ts/ts_rsp_verify.c",0x150,"int_ts_RESP_verify_token");
          uVar6 = 0x6f;
        }
        uVar4 = 0;
        ERR_set_error(0x2f,uVar6,0);
        local_70 = local_50;
        local_78 = local_48;
        goto LAB_00100a62;
      }
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_verify.c",0x19d,"ts_check_policy");
      uVar6 = 0x6c;
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/ts/ts_rsp_verify.c",0x13c,"int_ts_RESP_verify_token");
      uVar6 = 0x71;
    }
    ERR_set_error(0x2f,uVar6,0);
  }
LAB_00100b3c:
  local_78 = (void *)0x0;
  uVar4 = 0;
  local_70 = (X509_ALGOR *)0x0;
LAB_00100a62:
  X509_free(local_58);
  X509_ALGOR_free(local_70);
  CRYPTO_free(local_78);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



bool TS_RESP_verify_response(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  char *ptr;
  ASN1_BIT_STRING *a;
  char *pcVar6;
  int *piVar7;
  long in_FS_OFFSET;
  bool bVar8;
  char *local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  puVar1 = (undefined8 *)*param_2;
  lVar2 = param_2[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = param_2[2];
  uVar5 = ASN1_INTEGER_get((ASN1_INTEGER *)*puVar1);
  local_148 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (uVar5 < 2) {
    iVar4 = int_ts_RESP_verify_token(param_1,lVar2,lVar3);
    bVar8 = iVar4 != 0;
    goto LAB_0010100e;
  }
  local_150 = "unknown code";
  if (uVar5 < 6) {
    local_150 = *(char **)(ts_status_text + uVar5 * 8);
  }
  ptr = (char *)0x0;
  iVar4 = OPENSSL_sk_num(puVar1[1]);
  if (iVar4 < 1) {
    a = (ASN1_BIT_STRING *)puVar1[2];
joined_r0x00100fc9:
    if (a != (ASN1_BIT_STRING *)0x0) {
      piVar7 = &ts_failure_info;
      bVar8 = true;
      while( true ) {
        iVar4 = ASN1_BIT_STRING_get_bit(a,*piVar7);
        if (iVar4 != 0) {
          if (!bVar8) {
            __strcat_chk(local_148,&_LC5,0x100);
          }
          bVar8 = false;
          __strcat_chk(local_148,*(undefined8 *)(piVar7 + 2),0x100);
        }
        piVar7 = piVar7 + 4;
        if (piVar7 == (int *)ts_status_text) break;
        a = (ASN1_BIT_STRING *)puVar1[2];
      }
    }
    if (local_148[0] == '\0') {
      local_148._8_4_ = 0x646569;
      local_148._0_8_ = 0x6669636570736e75;
    }
    ERR_new();
    ERR_set_debug("crypto/ts/ts_rsp_verify.c",0x188,"ts_check_status_info");
    pcVar6 = "unspecified";
    if (ptr != (char *)0x0) {
      pcVar6 = ptr;
    }
    ERR_set_error(0x2f,0x6b,"status code: %s, status text: %s, failure codes: %s",local_150,pcVar6,
                  local_148);
    CRYPTO_free(ptr);
  }
  else {
    ptr = (char *)ossl_sk_ASN1_UTF8STRING2text(puVar1[1],&_LC4,0x100000);
    if (ptr != (char *)0x0) {
      a = (ASN1_BIT_STRING *)puVar1[2];
      goto joined_r0x00100fc9;
    }
  }
  bVar8 = false;
LAB_0010100e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 TS_RESP_verify_token(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0;
  lVar2 = PKCS7_to_TS_TST_INFO(param_2);
  if (lVar2 != 0) {
    uVar1 = int_ts_RESP_verify_token(param_1,param_2,lVar2);
    TS_TST_INFO_free(lVar2);
  }
  return uVar1;
}



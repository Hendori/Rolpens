
bool execute_X509_STORE_test(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  X509_STORE *v;
  undefined8 uVar3;
  bool bVar4;
  
  v = X509_STORE_new();
  iVar1 = ossl_cmp_X509_STORE_add1_certs
                    (v,*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x54));
  iVar1 = test_true("test/cmp_protect_test.c",0x1db,
                    "ossl_cmp_X509_STORE_add1_certs(store, fixture->certs, fixture->callback_arg)",
                    iVar1 != 0);
  if (iVar1 == 0) {
    bVar4 = false;
    uVar3 = 0;
  }
  else {
    uVar3 = X509_STORE_get1_all_certs(v);
    uVar2 = STACK_OF_X509_cmp(uVar3,*(undefined8 *)(param_1 + 0x48));
    iVar1 = test_int_eq("test/cmp_protect_test.c",0x1e0,&_LC3,
                        "STACK_OF_X509_cmp(sk, fixture->chain)",0,uVar2);
    bVar4 = iVar1 != 0;
  }
  X509_STORE_free(v);
  OSSL_STACK_OF_X509_free(uVar3);
  return bVar4;
}



int execute_cmp_build_cert_chain_test(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  X509_STORE *ctx;
  X509_VERIFY_PARAM *param;
  long lVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar5 = X509_build_chain(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),0,
                           *(undefined4 *)(param_1 + 0x50),*puVar1,puVar1[1]);
  iVar2 = test_ptr("test/cmp_protect_test.c",0x15b,"chain",uVar5);
  if (iVar2 != 0) {
    uVar3 = STACK_OF_X509_cmp(uVar5,*(undefined8 *)(param_1 + 0x48));
    iVar2 = test_int_eq("test/cmp_protect_test.c",0x15d,&_LC3,
                        "STACK_OF_X509_cmp(chain, fixture->chain)",0,uVar3);
    OSSL_STACK_OF_X509_free(uVar5);
    if (iVar2 != 0) {
      ctx = X509_STORE_new();
      iVar4 = test_ptr("test/cmp_protect_test.c",0x163,"store = X509_STORE_new()",ctx);
      if (iVar4 != 0) {
        iVar4 = X509_STORE_add_cert(ctx,root);
        iVar4 = test_true("test/cmp_protect_test.c",0x164,"X509_STORE_add_cert(store, root)",
                          iVar4 != 0);
        if (iVar4 != 0) {
          param = (X509_VERIFY_PARAM *)X509_STORE_get0_param(ctx);
          X509_VERIFY_PARAM_set_flags(param,0x200000);
          lVar6 = X509_build_chain(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                                   ctx,*(undefined4 *)(param_1 + 0x50),*puVar1,puVar1[1]);
          iVar2 = test_int_eq("test/cmp_protect_test.c",0x169,"fixture->expected","chain != NULL",
                              *(undefined4 *)(param_1 + 0x58),lVar6 != 0);
          if ((iVar2 != 0) && (lVar6 != 0)) {
            uVar3 = STACK_OF_X509_cmp(lVar6,*(undefined8 *)(param_1 + 0x48));
            iVar2 = test_int_eq("test/cmp_protect_test.c",0x16c,&_LC3,
                                "STACK_OF_X509_cmp(chain, fixture->chain)",0,uVar3);
            OSSL_STACK_OF_X509_free(lVar6);
          }
        }
      }
      X509_STORE_free(ctx);
      return iVar2;
    }
  }
  return 0;
}



uint execute_calc_protection_signature_test(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ASN1_BIT_STRING *a;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined8 local_48;
  long lStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  a = (ASN1_BIT_STRING *)
      ossl_cmp_calc_protection(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  uVar5 = test_ptr("test/cmp_protect_test.c",0x7d,"protection",a);
  if (uVar5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    plVar2 = *(long **)(param_1 + 0x10);
    local_48 = OSSL_CMP_MSG_get0_header(plVar2);
    uVar4 = libctx;
    lStack_40 = plVar2[1];
    uVar3 = *(undefined8 *)(*plVar2 + 0x20);
    uVar7 = OSSL_CMP_PROTECTEDPART_it();
    iVar6 = ASN1_item_verify_ex(uVar7,uVar3,a,&local_48,0,uVar1,uVar4,0);
    iVar6 = test_true("test/cmp_protect_test.c",0x7e,
                      "verify_signature(fixture->msg, protection, fixture->pubkey, fixture->cmp_ctx->digest)"
                      ,0 < iVar6);
    uVar5 = (uint)(iVar6 != 0);
  }
  ASN1_BIT_STRING_free(a);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 test_MSG_add_extraCerts(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_MSG_add_extraCerts";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    if (iVar1 != 0) {
      uVar3 = OSSL_CMP_MSG_dup(ir_protected);
      ptr[2] = uVar3;
      iVar1 = test_ptr("test/cmp_protect_test.c",0x148,
                       "fixture->msg = OSSL_CMP_MSG_dup(ir_protected)",uVar3);
      if (iVar1 != 0) {
        iVar1 = ossl_cmp_msg_add_extraCerts(ptr[1],ptr[2]);
        uVar2 = test_true("test/cmp_protect_test.c",0x141,
                          "ossl_cmp_msg_add_extraCerts(fixture->cmp_ctx, fixture->msg)",iVar1 != 0);
        OSSL_CMP_CTX_free(ptr[1]);
        OSSL_CMP_MSG_free(ptr[2]);
        OSSL_CMP_PKISI_free(ptr[3]);
        CRYPTO_free((void *)ptr[5]);
        OPENSSL_sk_free(ptr[8]);
        OPENSSL_sk_free(ptr[9]);
        CRYPTO_free(ptr);
        return uVar2;
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_cmp_calc_protection_pkey(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_cmp_calc_protection_pkey";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    if (iVar1 != 0) {
      ptr[4] = prot_RSA_key;
      iVar1 = OSSL_CMP_CTX_set1_pkey(ptr[1]);
      iVar1 = test_true("test/cmp_protect_test.c",0x98,
                        "OSSL_CMP_CTX_set1_pkey(fixture->cmp_ctx, prot_RSA_key)",iVar1 != 0);
      if (iVar1 != 0) {
        uVar3 = load_pkimsg(ir_protected_f,libctx);
        ptr[2] = uVar3;
        iVar1 = test_ptr("test/cmp_protect_test.c",0x99,
                         "fixture->msg = load_pkimsg(ir_protected_f, libctx)",uVar3);
        if (iVar1 != 0) {
          uVar2 = execute_calc_protection_signature_test(ptr);
          OSSL_CMP_CTX_free(ptr[1]);
          OSSL_CMP_MSG_free(ptr[2]);
          OSSL_CMP_PKISI_free(ptr[3]);
          CRYPTO_free((void *)ptr[5]);
          OPENSSL_sk_free(ptr[8]);
          OPENSSL_sk_free(ptr[9]);
          CRYPTO_free(ptr);
          return uVar2;
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_cmp_calc_protection_pkey_Ed(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_cmp_calc_protection_pkey_Ed";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    if (iVar1 != 0) {
      ptr[4] = prot_Ed_key;
      iVar1 = OSSL_CMP_CTX_set1_pkey(ptr[1]);
      iVar1 = test_true("test/cmp_protect_test.c",0xa6,
                        "OSSL_CMP_CTX_set1_pkey(fixture->cmp_ctx, prot_Ed_key)",iVar1 != 0);
      if (iVar1 != 0) {
        uVar3 = load_pkimsg(genm_prot_Ed_f,libctx);
        ptr[2] = uVar3;
        iVar1 = test_ptr("test/cmp_protect_test.c",0xa7,
                         "fixture->msg = load_pkimsg(genm_prot_Ed_f, libctx)",uVar3);
        if (iVar1 != 0) {
          uVar2 = execute_calc_protection_signature_test(ptr);
          OSSL_CMP_CTX_free(ptr[1]);
          OSSL_CMP_MSG_free(ptr[2]);
          OSSL_CMP_PKISI_free(ptr[3]);
          CRYPTO_free((void *)ptr[5]);
          OPENSSL_sk_free(ptr[8]);
          OPENSSL_sk_free(ptr[9]);
          CRYPTO_free(ptr);
          return uVar2;
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_cmp_calc_protection_no_key_no_secret(void)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *ptr;
  undefined8 uVar4;
  X509_ALGOR *pXVar5;
  ASN1_BIT_STRING *a;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar2 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar4 = libctx;
  if (iVar2 != 0) {
    *ptr = "test_cmp_calc_protection_no_key_no_secret";
    uVar4 = OSSL_CMP_CTX_new(uVar4,0);
    ptr[1] = uVar4;
    iVar2 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar4);
    if (iVar2 != 0) {
      uVar4 = load_pkimsg(ir_unprotected_f,libctx);
      ptr[2] = uVar4;
      iVar2 = test_ptr("test/cmp_protect_test.c",0x89,
                       "fixture->msg = load_pkimsg(ir_unprotected_f, libctx)",uVar4);
      if (iVar2 != 0) {
        lVar1 = *(long *)ptr[2];
        pXVar5 = X509_ALGOR_new();
        *(X509_ALGOR **)(lVar1 + 0x20) = pXVar5;
        iVar2 = test_ptr("test/cmp_protect_test.c",0x8a,
                         "fixture->msg->header->protectionAlg = X509_ALGOR_new()",pXVar5);
        if (iVar2 != 0) {
          a = (ASN1_BIT_STRING *)ossl_cmp_calc_protection(ptr[1],ptr[2]);
          uVar3 = test_ptr_null("test/cmp_protect_test.c",0x54,"protection",a);
          ASN1_BIT_STRING_free(a);
          OSSL_CMP_CTX_free(ptr[1]);
          OSSL_CMP_MSG_free(ptr[2]);
          OSSL_CMP_PKISI_free(ptr[3]);
          CRYPTO_free((void *)ptr[5]);
          OPENSSL_sk_free(ptr[8]);
          OPENSSL_sk_free(ptr[9]);
          CRYPTO_free(ptr);
          return uVar3;
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_MSG_protect_no_key_no_secret(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_MSG_protect_no_key_no_secret";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    if (iVar1 != 0) {
      *(undefined4 *)(ptr + 0xb) = 0;
      uVar3 = OSSL_CMP_MSG_dup(ir_unprotected);
      ptr[2] = uVar3;
      iVar1 = test_ptr("test/cmp_protect_test.c",0x116,
                       "fixture->msg = OSSL_CMP_MSG_dup(ir_unprotected)",uVar3);
      if (iVar1 != 0) {
        iVar1 = OSSL_CMP_CTX_set_option(ptr[1],0x1e,0);
        iVar1 = test_true("test/cmp_protect_test.c",0x117,
                          "SET_OPT_UNPROTECTED_SEND(fixture->cmp_ctx, 0)",iVar1 != 0);
        if (iVar1 != 0) {
          uVar2 = ossl_cmp_msg_protect(ptr[1],ptr[2]);
          uVar2 = test_int_eq("test/cmp_protect_test.c",0xc0,"fixture->expected",
                              "ossl_cmp_msg_protect(fixture->cmp_ctx, fixture->msg)",
                              *(undefined4 *)(ptr + 0xb),uVar2);
          OSSL_CMP_CTX_free(ptr[1]);
          OSSL_CMP_MSG_free(ptr[2]);
          OSSL_CMP_PKISI_free(ptr[3]);
          CRYPTO_free((void *)ptr[5]);
          OPENSSL_sk_free(ptr[8]);
          OPENSSL_sk_free(ptr[9]);
          CRYPTO_free(ptr);
          return uVar2;
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_MSG_protect_unprotected_request(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_MSG_protect_unprotected_request";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    if (iVar1 != 0) {
      *(undefined4 *)(ptr + 0xb) = 1;
      uVar3 = OSSL_CMP_MSG_dup(ir_unprotected);
      ptr[2] = uVar3;
      iVar1 = test_ptr("test/cmp_protect_test.c",0xcb,
                       "fixture->msg = OSSL_CMP_MSG_dup(ir_unprotected)",uVar3);
      if (iVar1 != 0) {
        iVar1 = OSSL_CMP_CTX_set_option(ptr[1],0x1e,1);
        iVar1 = test_true("test/cmp_protect_test.c",0xcc,
                          "SET_OPT_UNPROTECTED_SEND(fixture->cmp_ctx, 1)",iVar1 != 0);
        if (iVar1 != 0) {
          uVar2 = ossl_cmp_msg_protect(ptr[1],ptr[2]);
          uVar2 = test_int_eq("test/cmp_protect_test.c",0xc0,"fixture->expected",
                              "ossl_cmp_msg_protect(fixture->cmp_ctx, fixture->msg)",
                              *(undefined4 *)(ptr + 0xb),uVar2);
          OSSL_CMP_CTX_free(ptr[1]);
          OSSL_CMP_MSG_free(ptr[2]);
          OSSL_CMP_PKISI_free(ptr[3]);
          CRYPTO_free((void *)ptr[5]);
          OPENSSL_sk_free(ptr[8]);
          OPENSSL_sk_free(ptr[9]);
          CRYPTO_free(ptr);
          return uVar2;
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



uint test_cmp_calc_protection_pbmac(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  ASN1_BIT_STRING *a;
  long in_FS_OFFSET;
  undefined4 local_25;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_25 = 0x74736e69;
  local_21 = 0x61;
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_cmp_calc_protection_pbmac";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    if (iVar1 != 0) {
      iVar1 = OSSL_CMP_CTX_set1_secretValue(ptr[1],&local_25,5);
      iVar1 = test_true("test/cmp_protect_test.c",0xb5,
                        "OSSL_CMP_CTX_set1_secretValue(fixture->cmp_ctx, sec_insta, sizeof(sec_insta))"
                        ,iVar1 != 0);
      if (iVar1 != 0) {
        uVar3 = load_pkimsg(ip_PBM_f,libctx);
        ptr[2] = uVar3;
        iVar1 = test_ptr("test/cmp_protect_test.c",0xb7,
                         "fixture->msg = load_pkimsg(ip_PBM_f, libctx)",uVar3);
        if (iVar1 != 0) {
          a = (ASN1_BIT_STRING *)ossl_cmp_calc_protection(ptr[1],ptr[2]);
          uVar2 = test_ptr("test/cmp_protect_test.c",0x5e,"protection",a);
          if (uVar2 != 0) {
            iVar1 = ASN1_STRING_cmp(a,*(ASN1_STRING **)(ptr[2] + 0x10));
            iVar1 = test_true("test/cmp_protect_test.c",0x5f,
                              "ASN1_STRING_cmp(protection, fixture->msg->protection) == 0",
                              iVar1 == 0);
            uVar2 = (uint)(iVar1 != 0);
          }
          ASN1_BIT_STRING_free(a);
          OSSL_CMP_CTX_free(ptr[1]);
          OSSL_CMP_MSG_free(ptr[2]);
          OSSL_CMP_PKISI_free(ptr[3]);
          CRYPTO_free((void *)ptr[5]);
          OPENSSL_sk_free(ptr[8]);
          OPENSSL_sk_free(ptr[9]);
          CRYPTO_free(ptr);
          goto LAB_00100f0d;
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  uVar2 = 0;
LAB_00100f0d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int test_cmp_build_cert_chain(void)

{
  int iVar1;
  int iVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_cmp_build_cert_chain";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    uVar3 = endentity2;
    if (iVar1 != 0) {
      *(undefined4 *)(ptr + 0xb) = 1;
      *(undefined4 *)(ptr + 10) = 0;
      ptr[7] = uVar3;
      uVar3 = OPENSSL_sk_new_null();
      ptr[8] = uVar3;
      iVar1 = test_ptr("test/cmp_protect_test.c",0x17a,"fixture->certs = sk_X509_new_null()",uVar3);
      if (iVar1 != 0) {
        uVar3 = OPENSSL_sk_new_null();
        ptr[9] = uVar3;
        iVar1 = test_ptr("test/cmp_protect_test.c",0x17b,"fixture->chain = sk_X509_new_null()",uVar3
                        );
        if (iVar1 != 0) {
          iVar1 = OPENSSL_sk_push(ptr[8],endentity1);
          iVar1 = test_true("test/cmp_protect_test.c",0x17c,
                            "sk_X509_push(fixture->certs, endentity1)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = OPENSSL_sk_push(ptr[8],root);
            iVar1 = test_true("test/cmp_protect_test.c",0x17d,"sk_X509_push(fixture->certs, root)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = OPENSSL_sk_push(ptr[8],intermediate);
              iVar1 = test_true("test/cmp_protect_test.c",0x17e,
                                "sk_X509_push(fixture->certs, intermediate)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = OPENSSL_sk_push(ptr[9],endentity2);
                iVar1 = test_true("test/cmp_protect_test.c",0x17f,
                                  "sk_X509_push(fixture->chain, endentity2)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = OPENSSL_sk_push(ptr[9],intermediate);
                  iVar1 = test_true("test/cmp_protect_test.c",0x180,
                                    "sk_X509_push(fixture->chain, intermediate)",iVar1 != 0);
                  if (iVar1 != 0) {
                    iVar1 = execute_cmp_build_cert_chain_test(ptr);
                    *(undefined4 *)(ptr + 10) = 1;
                    if (iVar1 != 0) {
                      iVar2 = OPENSSL_sk_push(ptr[9],root);
                      iVar2 = test_true("test/cmp_protect_test.c",0x187,
                                        "sk_X509_push(fixture->chain, root)",iVar2 != 0);
                      if (iVar2 != 0) {
                        iVar1 = execute_cmp_build_cert_chain_test(ptr);
                      }
                    }
                    OSSL_CMP_CTX_free(ptr[1]);
                    OSSL_CMP_MSG_free(ptr[2]);
                    OSSL_CMP_PKISI_free(ptr[3]);
                    CRYPTO_free((void *)ptr[5]);
                    OPENSSL_sk_free(ptr[8]);
                    OPENSSL_sk_free(ptr[9]);
                    CRYPTO_free(ptr);
                    return iVar1;
                  }
                }
              }
            }
          }
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_cmp_build_cert_chain_no_certs(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_cmp_build_cert_chain_no_certs";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    uVar3 = endentity2;
    if (iVar1 != 0) {
      *(undefined4 *)(ptr + 0xb) = 0;
      *(undefined4 *)(ptr + 10) = 0;
      ptr[7] = uVar3;
      uVar3 = OPENSSL_sk_new_null();
      ptr[8] = uVar3;
      iVar1 = test_ptr("test/cmp_protect_test.c",0x1ca,"fixture->certs = sk_X509_new_null()",uVar3);
      if (iVar1 != 0) {
        uVar3 = OPENSSL_sk_new_null();
        ptr[9] = uVar3;
        iVar1 = test_ptr("test/cmp_protect_test.c",0x1cb,"fixture->chain = sk_X509_new_null()",uVar3
                        );
        if (iVar1 != 0) {
          iVar1 = OPENSSL_sk_push(ptr[9],endentity2);
          iVar1 = test_true("test/cmp_protect_test.c",0x1cc,
                            "sk_X509_push(fixture->chain, endentity2)",iVar1 != 0);
          if (iVar1 != 0) {
            uVar2 = execute_cmp_build_cert_chain_test(ptr);
            OSSL_CMP_CTX_free(ptr[1]);
            OSSL_CMP_MSG_free(ptr[2]);
            OSSL_CMP_PKISI_free(ptr[3]);
            CRYPTO_free((void *)ptr[5]);
            OPENSSL_sk_free(ptr[8]);
            OPENSSL_sk_free(ptr[9]);
            CRYPTO_free(ptr);
            return uVar2;
          }
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_cmp_build_cert_chain_only_root(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_cmp_build_cert_chain_only_root";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    uVar3 = root;
    if (iVar1 != 0) {
      *(undefined4 *)(ptr + 0xb) = 1;
      *(undefined4 *)(ptr + 10) = 0;
      ptr[7] = uVar3;
      uVar3 = OPENSSL_sk_new_null();
      ptr[8] = uVar3;
      iVar1 = test_ptr("test/cmp_protect_test.c",0x1b9,"fixture->certs = sk_X509_new_null()",uVar3);
      if (iVar1 != 0) {
        uVar3 = OPENSSL_sk_new_null();
        ptr[9] = uVar3;
        iVar1 = test_ptr("test/cmp_protect_test.c",0x1ba,"fixture->chain = sk_X509_new_null()",uVar3
                        );
        if (iVar1 != 0) {
          iVar1 = OPENSSL_sk_push(ptr[8],root);
          iVar1 = test_true("test/cmp_protect_test.c",0x1bb,"sk_X509_push(fixture->certs, root)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = OPENSSL_sk_push(ptr[9],root);
            iVar1 = test_true("test/cmp_protect_test.c",0x1bc,"sk_X509_push(fixture->chain, root)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              uVar2 = execute_cmp_build_cert_chain_test(ptr);
              OSSL_CMP_CTX_free(ptr[1]);
              OSSL_CMP_MSG_free(ptr[2]);
              OSSL_CMP_PKISI_free(ptr[3]);
              CRYPTO_free((void *)ptr[5]);
              OPENSSL_sk_free(ptr[8]);
              OPENSSL_sk_free(ptr[9]);
              CRYPTO_free(ptr);
              return uVar2;
            }
          }
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_MSG_protect_certificate_based_without_cert(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  undefined8 uVar4;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_MSG_protect_certificate_based_without_cert";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    if (iVar1 != 0) {
      *(undefined4 *)(ptr + 0xb) = 0;
      uVar3 = ptr[1];
      uVar4 = OSSL_CMP_MSG_dup(ir_unprotected);
      ptr[2] = uVar4;
      iVar1 = test_ptr("test/cmp_protect_test.c",0x106,
                       "fixture->msg = OSSL_CMP_MSG_dup(ir_unprotected)",uVar4);
      if (iVar1 != 0) {
        iVar1 = OSSL_CMP_CTX_set_option(uVar3,0x1e,0);
        iVar1 = test_true("test/cmp_protect_test.c",0x108,"SET_OPT_UNPROTECTED_SEND(ctx, 0)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = EVP_PKEY_up_ref(server_key);
          iVar1 = test_true("test/cmp_protect_test.c",0x109,"EVP_PKEY_up_ref(server_key)",iVar1 != 0
                           );
          if (iVar1 != 0) {
            iVar1 = OSSL_CMP_CTX_set0_newPkey(uVar3,1,server_key);
            iVar1 = test_true("test/cmp_protect_test.c",0x10a,
                              "OSSL_CMP_CTX_set0_newPkey(ctx, 1, server_key)",iVar1 != 0);
            if (iVar1 != 0) {
              uVar2 = ossl_cmp_msg_protect(ptr[1],ptr[2]);
              uVar2 = test_int_eq("test/cmp_protect_test.c",0xc0,"fixture->expected",
                                  "ossl_cmp_msg_protect(fixture->cmp_ctx, fixture->msg)",
                                  *(undefined4 *)(ptr + 0xb),uVar2);
              OSSL_CMP_CTX_free(ptr[1]);
              OSSL_CMP_MSG_free(ptr[2]);
              OSSL_CMP_PKISI_free(ptr[3]);
              CRYPTO_free((void *)ptr[5]);
              OPENSSL_sk_free(ptr[8]);
              OPENSSL_sk_free(ptr[9]);
              CRYPTO_free(ptr);
              return uVar2;
            }
          }
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_MSG_protect_with_certificate_and_key(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_MSG_protect_with_certificate_and_key";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    if (iVar1 != 0) {
      *(undefined4 *)(ptr + 0xb) = 1;
      uVar3 = OSSL_CMP_MSG_dup(ir_unprotected);
      ptr[2] = uVar3;
      iVar1 = test_ptr("test/cmp_protect_test.c",0xf2,
                       "fixture->msg = OSSL_CMP_MSG_dup(ir_unprotected)",uVar3);
      if (iVar1 != 0) {
        iVar1 = OSSL_CMP_CTX_set_option(ptr[1],0x1e,0);
        iVar1 = test_true("test/cmp_protect_test.c",0xf4,
                          "SET_OPT_UNPROTECTED_SEND(fixture->cmp_ctx, 0)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = OSSL_CMP_CTX_set1_pkey(ptr[1],server_key);
          iVar1 = test_true("test/cmp_protect_test.c",0xf5,
                            "OSSL_CMP_CTX_set1_pkey(fixture->cmp_ctx, server_key)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = OSSL_CMP_CTX_set1_cert(ptr[1],server_cert);
            iVar1 = test_true("test/cmp_protect_test.c",0xf6,
                              "OSSL_CMP_CTX_set1_cert(fixture->cmp_ctx, server_cert)",iVar1 != 0);
            if (iVar1 != 0) {
              uVar2 = ossl_cmp_msg_protect(ptr[1],ptr[2]);
              uVar2 = test_int_eq("test/cmp_protect_test.c",0xc0,"fixture->expected",
                                  "ossl_cmp_msg_protect(fixture->cmp_ctx, fixture->msg)",
                                  *(undefined4 *)(ptr + 0xb),uVar2);
              OSSL_CMP_CTX_free(ptr[1]);
              OSSL_CMP_MSG_free(ptr[2]);
              OSSL_CMP_PKISI_free(ptr[3]);
              CRYPTO_free((void *)ptr[5]);
              OPENSSL_sk_free(ptr[8]);
              OPENSSL_sk_free(ptr[9]);
              CRYPTO_free(ptr);
              return uVar2;
            }
          }
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_MSG_protect_with_msg_sig_alg_protection_plus_rsa_key(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_MSG_protect_with_msg_sig_alg_protection_plus_rsa_key";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    if (iVar1 != 0) {
      *(undefined4 *)(ptr + 0xb) = 1;
      uVar3 = OSSL_CMP_MSG_dup(ir_unprotected);
      ptr[2] = uVar3;
      iVar1 = test_ptr("test/cmp_protect_test.c",0xdb,
                       "fixture->msg = OSSL_CMP_MSG_dup(ir_unprotected)",uVar3);
      if (iVar1 != 0) {
        iVar1 = OSSL_CMP_CTX_set_option(ptr[1],0x1e,0);
        iVar1 = test_true("test/cmp_protect_test.c",0xdc,
                          "SET_OPT_UNPROTECTED_SEND(fixture->cmp_ctx, 0)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = OSSL_CMP_CTX_set1_referenceValue(ptr[1],rand_data,8);
          iVar1 = test_true("test/cmp_protect_test.c",0xe1,
                            "OSSL_CMP_CTX_set1_referenceValue(fixture->cmp_ctx, rand_data, size)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = OSSL_CMP_CTX_set1_secretValue(ptr[1],0x103268,8);
            iVar1 = test_true("test/cmp_protect_test.c",0xe3,
                              "OSSL_CMP_CTX_set1_secretValue(fixture->cmp_ctx, rand_data + size, size)"
                              ,iVar1 != 0);
            if (iVar1 != 0) {
              uVar2 = ossl_cmp_msg_protect(ptr[1],ptr[2]);
              uVar2 = test_int_eq("test/cmp_protect_test.c",0xc0,"fixture->expected",
                                  "ossl_cmp_msg_protect(fixture->cmp_ctx, fixture->msg)",
                                  *(undefined4 *)(ptr + 0xb),uVar2);
              OSSL_CMP_CTX_free(ptr[1]);
              OSSL_CMP_MSG_free(ptr[2]);
              OSSL_CMP_PKISI_free(ptr[3]);
              CRYPTO_free((void *)ptr[5]);
              OPENSSL_sk_free(ptr[8]);
              OPENSSL_sk_free(ptr[9]);
              CRYPTO_free(ptr);
              return uVar2;
            }
          }
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_MSG_protect_pbmac_no_sender_with_ref(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_MSG_protect_pbmac_no_sender";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    if (iVar1 != 0) {
      *(undefined4 *)(ptr + 0xb) = 1;
      uVar3 = OSSL_CMP_MSG_dup(ir_unprotected);
      ptr[2] = uVar3;
      iVar1 = test_ptr("test/cmp_protect_test.c",0x126,
                       "fixture->msg = OSSL_CMP_MSG_dup(ir_unprotected)",uVar3);
      if ((((iVar1 != 0) && (iVar1 = OSSL_CMP_CTX_set_option(ptr[1],0x1e,0), iVar1 != 0)) &&
          (iVar1 = ossl_cmp_hdr_set1_sender(*(undefined8 *)ptr[2],0), iVar1 != 0)) &&
         ((iVar1 = OSSL_CMP_CTX_set1_secretValue(ptr[1],&secret_10,4), iVar1 != 0 &&
          (iVar1 = OSSL_CMP_CTX_set1_referenceValue(ptr[1],&ref_9,4), iVar1 != 0)))) {
        uVar2 = ossl_cmp_msg_protect(ptr[1],ptr[2]);
        uVar2 = test_int_eq("test/cmp_protect_test.c",0xc0,"fixture->expected",
                            "ossl_cmp_msg_protect(fixture->cmp_ctx, fixture->msg)",
                            *(undefined4 *)(ptr + 0xb),uVar2);
        OSSL_CMP_CTX_free(ptr[1]);
        OSSL_CMP_MSG_free(ptr[2]);
        OSSL_CMP_PKISI_free(ptr[3]);
        CRYPTO_free((void *)ptr[5]);
        OPENSSL_sk_free(ptr[8]);
        OPENSSL_sk_free(ptr[9]);
        CRYPTO_free(ptr);
        return uVar2;
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_MSG_protect_pbmac_no_sender_no_ref(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_MSG_protect_pbmac_no_sender";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    if (iVar1 != 0) {
      *(undefined4 *)(ptr + 0xb) = 0;
      uVar3 = OSSL_CMP_MSG_dup(ir_unprotected);
      ptr[2] = uVar3;
      iVar1 = test_ptr("test/cmp_protect_test.c",0x126,
                       "fixture->msg = OSSL_CMP_MSG_dup(ir_unprotected)",uVar3);
      if ((((iVar1 != 0) && (iVar1 = OSSL_CMP_CTX_set_option(ptr[1],0x1e,0), iVar1 != 0)) &&
          (iVar1 = ossl_cmp_hdr_set1_sender(*(undefined8 *)ptr[2],0), iVar1 != 0)) &&
         ((iVar1 = OSSL_CMP_CTX_set1_secretValue(ptr[1],&secret_10,4), iVar1 != 0 &&
          (iVar1 = OSSL_CMP_CTX_set1_referenceValue(ptr[1],0,4), iVar1 != 0)))) {
        uVar2 = ossl_cmp_msg_protect(ptr[1],ptr[2]);
        uVar2 = test_int_eq("test/cmp_protect_test.c",0xc0,"fixture->expected",
                            "ossl_cmp_msg_protect(fixture->cmp_ctx, fixture->msg)",
                            *(undefined4 *)(ptr + 0xb),uVar2);
        OSSL_CMP_CTX_free(ptr[1]);
        OSSL_CMP_MSG_free(ptr[2]);
        OSSL_CMP_PKISI_free(ptr[3]);
        CRYPTO_free((void *)ptr[5]);
        OPENSSL_sk_free(ptr[8]);
        OPENSSL_sk_free(ptr[9]);
        CRYPTO_free(ptr);
        return uVar2;
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_cmp_build_cert_chain_missing_intermediate(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_cmp_build_cert_chain_missing_intermediate";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    uVar3 = endentity2;
    if (iVar1 != 0) {
      *(undefined4 *)(ptr + 0xb) = 0;
      *(undefined4 *)(ptr + 10) = 0;
      ptr[7] = uVar3;
      uVar3 = OPENSSL_sk_new_null();
      ptr[8] = uVar3;
      iVar1 = test_ptr("test/cmp_protect_test.c",0x194,"fixture->certs = sk_X509_new_null()",uVar3);
      if (iVar1 != 0) {
        uVar3 = OPENSSL_sk_new_null();
        ptr[9] = uVar3;
        iVar1 = test_ptr("test/cmp_protect_test.c",0x195,"fixture->chain = sk_X509_new_null()",uVar3
                        );
        if (iVar1 != 0) {
          iVar1 = OPENSSL_sk_push(ptr[8],endentity1);
          iVar1 = test_true("test/cmp_protect_test.c",0x196,
                            "sk_X509_push(fixture->certs, endentity1)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = OPENSSL_sk_push(ptr[8],root);
            iVar1 = test_true("test/cmp_protect_test.c",0x197,"sk_X509_push(fixture->certs, root)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = OPENSSL_sk_push(ptr[9],endentity2);
              iVar1 = test_true("test/cmp_protect_test.c",0x198,
                                "sk_X509_push(fixture->chain, endentity2)",iVar1 != 0);
              if (iVar1 != 0) {
                uVar2 = execute_cmp_build_cert_chain_test(ptr);
                OSSL_CMP_CTX_free(ptr[1]);
                OSSL_CMP_MSG_free(ptr[2]);
                OSSL_CMP_PKISI_free(ptr[3]);
                CRYPTO_free((void *)ptr[5]);
                OPENSSL_sk_free(ptr[8]);
                OPENSSL_sk_free(ptr[9]);
                CRYPTO_free(ptr);
                return uVar2;
              }
            }
          }
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_X509_STORE_only_self_issued(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_X509_STORE_only_self_issued";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    if (iVar1 != 0) {
      uVar3 = OPENSSL_sk_new_null();
      ptr[8] = uVar3;
      uVar3 = OPENSSL_sk_new_null();
      *(undefined4 *)((long)ptr + 0x54) = 1;
      ptr[9] = uVar3;
      iVar1 = OPENSSL_sk_push(ptr[8],endentity1);
      iVar1 = test_true("test/cmp_protect_test.c",0x201,"sk_X509_push(fixture->certs, endentity1)",
                        iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = OPENSSL_sk_push(ptr[8],endentity2);
        iVar1 = test_true("test/cmp_protect_test.c",0x202,"sk_X509_push(fixture->certs, endentity2)"
                          ,iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = OPENSSL_sk_push(ptr[8],root);
          iVar1 = test_true("test/cmp_protect_test.c",0x203,"sk_X509_push(fixture->certs, root)",
                            iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = OPENSSL_sk_push(ptr[8],intermediate);
            iVar1 = test_true("test/cmp_protect_test.c",0x204,
                              "sk_X509_push(fixture->certs, intermediate)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = OPENSSL_sk_push(ptr[9],root);
              iVar1 = test_true("test/cmp_protect_test.c",0x205,"sk_X509_push(fixture->chain, root)"
                                ,iVar1 != 0);
              if (iVar1 != 0) {
                uVar2 = execute_X509_STORE_test(ptr);
                OSSL_CMP_CTX_free(ptr[1]);
                OSSL_CMP_MSG_free(ptr[2]);
                OSSL_CMP_PKISI_free(ptr[3]);
                CRYPTO_free((void *)ptr[5]);
                OPENSSL_sk_free(ptr[8]);
                OPENSSL_sk_free(ptr[9]);
                CRYPTO_free(ptr);
                return uVar2;
              }
            }
          }
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_X509_STORE(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_X509_STORE";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    if (iVar1 != 0) {
      *(undefined4 *)((long)ptr + 0x54) = 0;
      uVar3 = OPENSSL_sk_new_null();
      ptr[8] = uVar3;
      iVar1 = test_ptr("test/cmp_protect_test.c",0x1ee,"fixture->certs = sk_X509_new_null()",uVar3);
      if ((((iVar1 != 0) && (iVar1 = OPENSSL_sk_push(ptr[8],endentity1), iVar1 != 0)) &&
          (iVar1 = OPENSSL_sk_push(ptr[8],endentity2), iVar1 != 0)) &&
         ((iVar1 = OPENSSL_sk_push(ptr[8],root), iVar1 != 0 &&
          (iVar1 = OPENSSL_sk_push(ptr[8],intermediate), iVar1 != 0)))) {
        uVar3 = OPENSSL_sk_dup(ptr[8]);
        ptr[9] = uVar3;
        iVar1 = test_ptr("test/cmp_protect_test.c",499,
                         "fixture->chain = sk_X509_dup(fixture->certs)",uVar3);
        if (iVar1 != 0) {
          uVar2 = execute_X509_STORE_test(ptr);
          OSSL_CMP_CTX_free(ptr[1]);
          OSSL_CMP_MSG_free(ptr[2]);
          OSSL_CMP_PKISI_free(ptr[3]);
          CRYPTO_free((void *)ptr[5]);
          OPENSSL_sk_free(ptr[8]);
          OPENSSL_sk_free(ptr[9]);
          CRYPTO_free(ptr);
          return uVar2;
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined4 test_cmp_build_cert_chain_no_root(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"test/cmp_protect_test.c",0x3a);
  iVar1 = test_ptr("test/cmp_protect_test.c",0x3a,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  uVar3 = libctx;
  if (iVar1 != 0) {
    *ptr = "test_cmp_build_cert_chain_no_root";
    uVar3 = OSSL_CMP_CTX_new(uVar3,0);
    ptr[1] = uVar3;
    iVar1 = test_ptr("test/cmp_protect_test.c",0x3d,
                     "fixture->cmp_ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar3);
    uVar3 = endentity2;
    if (iVar1 != 0) {
      *(undefined4 *)(ptr + 0xb) = 1;
      *(undefined4 *)(ptr + 10) = 0;
      ptr[7] = uVar3;
      uVar3 = OPENSSL_sk_new_null();
      ptr[8] = uVar3;
      iVar1 = test_ptr("test/cmp_protect_test.c",0x1a6,"fixture->certs = sk_X509_new_null()",uVar3);
      if (iVar1 != 0) {
        uVar3 = OPENSSL_sk_new_null();
        ptr[9] = uVar3;
        iVar1 = test_ptr("test/cmp_protect_test.c",0x1a7,"fixture->chain = sk_X509_new_null()",uVar3
                        );
        if (iVar1 != 0) {
          iVar1 = OPENSSL_sk_push(ptr[8],endentity1);
          iVar1 = test_true("test/cmp_protect_test.c",0x1a8,
                            "sk_X509_push(fixture->certs, endentity1)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = OPENSSL_sk_push(ptr[8],intermediate);
            iVar1 = test_true("test/cmp_protect_test.c",0x1a9,
                              "sk_X509_push(fixture->certs, intermediate)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = OPENSSL_sk_push(ptr[9],endentity2);
              iVar1 = test_true("test/cmp_protect_test.c",0x1aa,
                                "sk_X509_push(fixture->chain, endentity2)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = OPENSSL_sk_push(ptr[9],intermediate);
                iVar1 = test_true("test/cmp_protect_test.c",0x1ab,
                                  "sk_X509_push(fixture->chain, intermediate)",iVar1 != 0);
                if (iVar1 != 0) {
                  uVar2 = execute_cmp_build_cert_chain_test(ptr);
                  OSSL_CMP_CTX_free(ptr[1]);
                  OSSL_CMP_MSG_free(ptr[2]);
                  OSSL_CMP_PKISI_free(ptr[3]);
                  CRYPTO_free((void *)ptr[5]);
                  OPENSSL_sk_free(ptr[8]);
                  OPENSSL_sk_free(ptr[9]);
                  CRYPTO_free(ptr);
                  return uVar2;
                }
              }
            }
          }
        }
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    OSSL_CMP_MSG_free(ptr[2]);
    OSSL_CMP_PKISI_free(ptr[3]);
    CRYPTO_free((void *)ptr[5]);
    OPENSSL_sk_free(ptr[8]);
    OPENSSL_sk_free(ptr[9]);
    CRYPTO_free(ptr);
  }
  return 0;
}



void cleanup_tests(void)

{
  EVP_PKEY_free(prot_RSA_key);
  EVP_PKEY_free(prot_Ed_key);
  OSSL_CMP_MSG_free(genm_protected_Ed);
  EVP_PKEY_free(server_key);
  X509_free(server_cert);
  X509_free(endentity1);
  X509_free(endentity2);
  X509_free(root);
  X509_free(intermediate);
  OSSL_CMP_MSG_free(ir_protected);
  OSSL_CMP_MSG_free(ir_unprotected);
  OSSL_PROVIDER_unload(default_null_provider);
  OSSL_PROVIDER_unload(provider);
  OSSL_LIB_CTX_free(libctx);
  return;
}



undefined1 * test_get_options(void)

{
  return options_20;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/cmp_protect_test.c",0x233,"Error parsing test options\n");
  }
  else {
    RAND_bytes(rand_data,0x10);
    uVar2 = test_get_argument(0);
    iVar1 = test_ptr("test/cmp_protect_test.c",0x238,"prot_RSA_f = test_get_argument(0)",uVar2);
    if (iVar1 != 0) {
      ir_protected_f = test_get_argument(1);
      iVar1 = test_ptr("test/cmp_protect_test.c",0x239,"ir_protected_f = test_get_argument(1)",
                       ir_protected_f);
      if (iVar1 != 0) {
        uVar3 = test_get_argument(2);
        iVar1 = test_ptr("test/cmp_protect_test.c",0x23a,"prot_Ed_f = test_get_argument(2)",uVar3);
        if (iVar1 != 0) {
          genm_prot_Ed_f = test_get_argument(3);
          iVar1 = test_ptr("test/cmp_protect_test.c",0x23b,"genm_prot_Ed_f = test_get_argument(3)",
                           genm_prot_Ed_f);
          if (iVar1 != 0) {
            ir_unprotected_f = test_get_argument(4);
            iVar1 = test_ptr("test/cmp_protect_test.c",0x23c,
                             "ir_unprotected_f = test_get_argument(4)",ir_unprotected_f);
            if (iVar1 != 0) {
              ip_PBM_f = test_get_argument(5);
              iVar1 = test_ptr("test/cmp_protect_test.c",0x23d,"ip_PBM_f = test_get_argument(5)",
                               ip_PBM_f);
              if (iVar1 != 0) {
                uVar4 = test_get_argument(6);
                iVar1 = test_ptr("test/cmp_protect_test.c",0x23e,
                                 "server_cert_f = test_get_argument(6)",uVar4);
                if (iVar1 != 0) {
                  uVar5 = test_get_argument(7);
                  iVar1 = test_ptr("test/cmp_protect_test.c",0x23f,
                                   "server_key_f = test_get_argument(7)",uVar5);
                  if (iVar1 != 0) {
                    uVar6 = test_get_argument(8);
                    iVar1 = test_ptr("test/cmp_protect_test.c",0x240,
                                     "endentity1_f = test_get_argument(8)",uVar6);
                    if (iVar1 != 0) {
                      uVar7 = test_get_argument(9);
                      iVar1 = test_ptr("test/cmp_protect_test.c",0x241,
                                       "endentity2_f = test_get_argument(9)",uVar7);
                      if (iVar1 != 0) {
                        uVar8 = test_get_argument(10);
                        iVar1 = test_ptr("test/cmp_protect_test.c",0x242,
                                         "root_f = test_get_argument(10)",uVar8);
                        if (iVar1 != 0) {
                          uVar9 = test_get_argument(0xb);
                          iVar1 = test_ptr("test/cmp_protect_test.c",0x243,
                                           "intermediate_f = test_get_argument(11)",uVar9);
                          if (iVar1 != 0) {
                            iVar1 = test_arg_libctx(&libctx,&default_null_provider,&provider,0xc,
                                                                                                        
                                                  "prot_RSA.pem IR_protected.der prot_Ed.pem GENM_protected_Ed.der IR_unprotected.der IP_PBM.der server.crt server.pem EndEntity1.crt EndEntity2.crt Root_CA.crt Intermediate_CA.crt module_name [module_conf_file]\n"
                                                  );
                            if (iVar1 == 0) {
                              return 0;
                            }
                            server_key = load_pkey_pem(uVar5,libctx);
                            iVar1 = test_ptr("test/cmp_protect_test.c",0x24b,
                                             "server_key = load_pkey_pem(server_key_f, libctx)",
                                             server_key);
                            if (iVar1 == 0) {
                              return 0;
                            }
                            server_cert = load_cert_pem(uVar4,libctx);
                            iVar1 = test_ptr("test/cmp_protect_test.c",0x24c,
                                             "server_cert = load_cert_pem(server_cert_f, libctx)",
                                             server_cert);
                            if (iVar1 == 0) {
                              return 0;
                            }
                            prot_RSA_key = load_pkey_pem(uVar2,libctx);
                            iVar1 = test_ptr("test/cmp_protect_test.c",0x24f,
                                             "prot_RSA_key = load_pkey_pem(prot_RSA_f, libctx)",
                                             prot_RSA_key);
                            if (iVar1 == 0) {
                              return 0;
                            }
                            prot_Ed_key = load_pkey_pem(uVar3,libctx);
                            iVar1 = test_ptr("test/cmp_protect_test.c",0x252,
                                             "prot_Ed_key = load_pkey_pem(prot_Ed_f, libctx)",
                                             prot_Ed_key);
                            if (iVar1 == 0) {
                              return 0;
                            }
                            ir_protected = load_pkimsg(ir_protected_f,libctx);
                            iVar1 = test_ptr("test/cmp_protect_test.c",0x255,
                                             "ir_protected = load_pkimsg(ir_protected_f, libctx)",
                                             ir_protected);
                            if (iVar1 == 0) {
                              return 0;
                            }
                            genm_protected_Ed = load_pkimsg(genm_prot_Ed_f,libctx);
                            iVar1 = test_ptr("test/cmp_protect_test.c",599,
                                             "genm_protected_Ed = load_pkimsg(genm_prot_Ed_f, libctx)"
                                             ,genm_protected_Ed);
                            if (iVar1 == 0) {
                              return 0;
                            }
                            ir_unprotected = load_pkimsg(ir_unprotected_f,libctx);
                            iVar1 = test_ptr("test/cmp_protect_test.c",0x259,
                                             "ir_unprotected = load_pkimsg(ir_unprotected_f, libctx)"
                                             ,ir_unprotected);
                            if (iVar1 == 0) {
                              return 0;
                            }
                            endentity1 = load_cert_pem(uVar6,libctx);
                            iVar1 = test_ptr("test/cmp_protect_test.c",0x25b,
                                             "endentity1 = load_cert_pem(endentity1_f, libctx)",
                                             endentity1);
                            if (iVar1 == 0) {
                              return 0;
                            }
                            endentity2 = load_cert_pem(uVar7,libctx);
                            iVar1 = test_ptr("test/cmp_protect_test.c",0x25c,
                                             "endentity2 = load_cert_pem(endentity2_f, libctx)",
                                             endentity2);
                            if (iVar1 == 0) {
                              return 0;
                            }
                            root = load_cert_pem(uVar8,libctx);
                            iVar1 = test_ptr("test/cmp_protect_test.c",0x25d,
                                             "root = load_cert_pem(root_f, libctx)",root);
                            if (iVar1 == 0) {
                              return 0;
                            }
                            intermediate = load_cert_pem(uVar9,libctx);
                            iVar1 = test_ptr("test/cmp_protect_test.c",0x25e,
                                             "intermediate = load_cert_pem(intermediate_f, libctx)",
                                             intermediate);
                            if (iVar1 == 0) {
                              return 0;
                            }
                            iVar1 = RAND_bytes(rand_data,0x10);
                            iVar1 = test_int_eq("test/cmp_protect_test.c",0x260,&_LC73,
                                                "RAND_bytes(rand_data, OSSL_CMP_TRANSACTIONID_LENGTH)"
                                                ,1,iVar1);
                            if (iVar1 == 0) {
                              return 0;
                            }
                            add_test("test_cmp_calc_protection_no_key_no_secret",
                                     test_cmp_calc_protection_no_key_no_secret);
                            add_test("test_cmp_calc_protection_pkey",test_cmp_calc_protection_pkey);
                            add_test("test_cmp_calc_protection_pkey_Ed",
                                     test_cmp_calc_protection_pkey_Ed);
                            add_test("test_cmp_calc_protection_pbmac",test_cmp_calc_protection_pbmac
                                    );
                            add_test("test_MSG_protect_with_msg_sig_alg_protection_plus_rsa_key",
                                     test_MSG_protect_with_msg_sig_alg_protection_plus_rsa_key);
                            add_test("test_MSG_protect_with_certificate_and_key",
                                     test_MSG_protect_with_certificate_and_key);
                            add_test("test_MSG_protect_certificate_based_without_cert",
                                     test_MSG_protect_certificate_based_without_cert);
                            add_test("test_MSG_protect_unprotected_request",
                                     test_MSG_protect_unprotected_request);
                            add_test("test_MSG_protect_no_key_no_secret",
                                     test_MSG_protect_no_key_no_secret);
                            add_test("test_MSG_protect_pbmac_no_sender_with_ref",
                                     test_MSG_protect_pbmac_no_sender_with_ref);
                            add_test("test_MSG_protect_pbmac_no_sender_no_ref",
                                     test_MSG_protect_pbmac_no_sender_no_ref);
                            add_test("test_MSG_add_extraCerts",test_MSG_add_extraCerts);
                            add_test("test_cmp_build_cert_chain",test_cmp_build_cert_chain);
                            add_test("test_cmp_build_cert_chain_only_root",
                                     test_cmp_build_cert_chain_only_root);
                            add_test("test_cmp_build_cert_chain_no_root",
                                     test_cmp_build_cert_chain_no_root);
                            add_test("test_cmp_build_cert_chain_missing_intermediate",
                                     test_cmp_build_cert_chain_missing_intermediate);
                            add_test("test_cmp_build_cert_chain_no_certs",
                                     test_cmp_build_cert_chain_no_certs);
                            add_test("test_X509_STORE",test_X509_STORE);
                            add_test("test_X509_STORE_only_self_issued",
                                     test_X509_STORE_only_self_issued);
                            return 1;
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
      }
    }
    test_error("test/cmp_protect_test.c",0x244,"usage: cmp_protect_test %s",
               "prot_RSA.pem IR_protected.der prot_Ed.pem GENM_protected_Ed.der IR_unprotected.der IP_PBM.der server.crt server.pem EndEntity1.crt EndEntity2.crt Root_CA.crt Intermediate_CA.crt module_name [module_conf_file]\n"
              );
  }
  return 0;
}



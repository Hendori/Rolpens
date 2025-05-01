
int verify_constprop_0(X509 *param_1,X509 *param_2,stack_st_X509_CRL *param_3)

{
  int iVar1;
  X509_STORE_CTX *ctx;
  X509_STORE *store;
  X509_VERIFY_PARAM *param;
  undefined8 uVar2;
  undefined8 uVar3;
  
  ctx = X509_STORE_CTX_new();
  store = X509_STORE_new();
  param = X509_VERIFY_PARAM_new();
  uVar2 = OPENSSL_sk_new_null();
  iVar1 = test_ptr("test/crltest.c",0x106,&_LC0,ctx);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/crltest.c",0x107,"store",store);
    if (iVar1 != 0) {
      iVar1 = test_ptr("test/crltest.c",0x108,"param",param);
      if (iVar1 != 0) {
        iVar1 = test_ptr("test/crltest.c",0x109,"roots",uVar2);
        if (iVar1 != 0) {
          iVar1 = X509_up_ref(param_2);
          iVar1 = test_true("test/crltest.c",0x10d,"X509_up_ref(root)",iVar1 != 0);
          if (iVar1 != 0) {
            OPENSSL_sk_push(uVar2,param_2);
            iVar1 = test_true("test/crltest.c",0x10f,"sk_X509_push(roots, root)");
            if (iVar1 == 0) {
              X509_free(param_2);
            }
            else {
              iVar1 = X509_STORE_CTX_init(ctx,store,param_1,(stack_st_X509 *)0x0);
              iVar1 = test_true("test/crltest.c",0x113,"X509_STORE_CTX_init(ctx, store, leaf, NULL)"
                                ,iVar1 != 0);
              if (iVar1 != 0) {
                X509_STORE_CTX_set0_trusted_stack(ctx,uVar2);
                X509_STORE_CTX_set0_crls(ctx,param_3);
                X509_VERIFY_PARAM_set_time(param,0x57e9b680);
                uVar3 = X509_VERIFY_PARAM_get_time(param);
                iVar1 = test_long_eq("test/crltest.c",0x118,
                                     "(long)X509_VERIFY_PARAM_get_time(param)","PARAM_TIME",uVar3,
                                     0x57e9b680);
                if (iVar1 != 0) {
                  X509_VERIFY_PARAM_set_depth(param,0x10);
                  X509_VERIFY_PARAM_set_flags(param,4);
                  X509_STORE_CTX_set0_param(ctx,param);
                  ERR_clear_error();
                  iVar1 = X509_verify_cert(ctx);
                  if (iVar1 == 1) {
                    iVar1 = 0;
                    param = (X509_VERIFY_PARAM *)0x0;
                  }
                  else {
                    param = (X509_VERIFY_PARAM *)0x0;
                    iVar1 = X509_STORE_CTX_get_error(ctx);
                  }
                  goto LAB_00100062;
                }
              }
            }
          }
        }
      }
    }
  }
  iVar1 = 1;
LAB_00100062:
  OSSL_STACK_OF_X509_free(uVar2);
  OPENSSL_sk_pop_free(param_3,X509_CRL_free);
  X509_VERIFY_PARAM_free(param);
  X509_STORE_CTX_free(ctx);
  X509_STORE_free(store);
  return iVar1;
}



void test_no_crl(void)

{
  undefined4 uVar1;
  
  uVar1 = verify_constprop_0(test_leaf,test_root,0);
  test_int_eq("test/crltest.c",0x163,"verify(test_leaf, test_root, NULL, X509_V_FLAG_CRL_CHECK)",
              "X509_V_ERR_UNABLE_TO_GET_CRL",uVar1,3);
  return;
}



uint test_reuse_crl(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  BIO *pBVar5;
  X509_CRL *pXVar6;
  X509_CRL *pXVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  X509_CRL *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  pvVar4 = (void *)glue_strings(kBasicCRL,&local_48);
  pBVar5 = BIO_new_mem_buf(pvVar4,(int)local_48);
  if (pBVar5 == (BIO *)0x0) {
    pXVar6 = (X509_CRL *)0x0;
    CRYPTO_free(pvVar4);
  }
  else {
    pXVar6 = PEM_read_bio_X509_CRL(pBVar5,(X509_CRL **)0x0,(undefined1 *)0x0,(void *)0x0);
    CRYPTO_free(pvVar4);
    BIO_free(pBVar5);
  }
  local_50 = pXVar6;
  iVar1 = test_ptr("test/crltest.c",0x199,"reused_crl",pXVar6);
  if (iVar1 == 0) {
LAB_001004d8:
    pvVar4 = (void *)0x0;
    uVar3 = 0;
    pBVar5 = (BIO *)0x0;
    pXVar6 = (X509_CRL *)0x0;
    goto LAB_001003cc;
  }
  pXVar6 = (X509_CRL *)0x0;
  if ((param_1 & 1) != 0) {
    iVar1 = X509_CRL_up_ref(local_50);
    iVar1 = test_true("test/crltest.c",0x19d,"X509_CRL_up_ref(reused_crl)",iVar1 != 0);
    pXVar6 = local_50;
    if (iVar1 == 0) goto LAB_001004d8;
  }
  puVar8 = kRevokedCRL;
  iVar1 = (int)param_1 >> 1;
  if (iVar1 != 2) {
    puVar8 = kInvalidCRL + (long)iVar1 * 8;
  }
  local_48 = 0;
  pvVar4 = (void *)glue_strings(puVar8,&local_48);
  pBVar5 = BIO_new_mem_buf(pvVar4,(int)local_48);
  iVar2 = test_ptr("test/crltest.c",0x1a5,&_LC14);
  if (iVar2 != 0) {
    pXVar7 = PEM_read_bio_X509_CRL(pBVar5,&local_50,(undefined1 *)0x0,(void *)0x0);
    if (iVar1 == 1) {
      iVar1 = test_ptr_null("test/crltest.c",0x1b1,"result",pXVar7);
      if (iVar1 != 0) {
        iVar1 = test_ptr("test/crltest.c",0x1b2,"reused_crl",local_50);
        uVar3 = (uint)(iVar1 != 0);
        goto LAB_001003cc;
      }
    }
    else if (iVar1 == 2) {
      uVar3 = test_ptr("test/crltest.c",0x1b6,"result",pXVar7);
      if (uVar3 == 0) goto LAB_001003cc;
      iVar1 = test_ptr("test/crltest.c",0x1b7,"reused_crl",local_50);
      if (iVar1 != 0) {
        iVar1 = test_ptr_eq("test/crltest.c",0x1b8,"result","reused_crl",pXVar7,local_50);
        uVar3 = (uint)(iVar1 != 0);
        goto LAB_001003cc;
      }
    }
    else {
      uVar3 = 1;
      if (iVar1 != 0) goto LAB_001003cc;
      iVar1 = test_ptr_null("test/crltest.c",0x1ac,"result",pXVar7);
      if (iVar1 != 0) {
        iVar1 = test_ptr_null("test/crltest.c",0x1ad,"reused_crl",local_50);
        uVar3 = (uint)(iVar1 != 0);
        goto LAB_001003cc;
      }
    }
  }
  uVar3 = 0;
LAB_001003cc:
  CRYPTO_free(pvVar4);
  BIO_free(pBVar5);
  X509_CRL_free(local_50);
  X509_CRL_free(pXVar6);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



uint test_bad_issuer_crl(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *buf;
  BIO *bp;
  X509_CRL *a;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  buf = (void *)glue_strings(kBadIssuerCRL,&local_38);
  bp = BIO_new_mem_buf(buf,(int)local_38);
  if (bp == (BIO *)0x0) {
    a = (X509_CRL *)0x0;
    CRYPTO_free(buf);
    uVar1 = test_ptr("test/crltest.c",0x16d,"bad_issuer_crl",0);
    if (uVar1 == 0) goto LAB_0010067c;
    uVar5 = OPENSSL_sk_new_null();
    a = (X509_CRL *)0x0;
  }
  else {
    a = PEM_read_bio_X509_CRL(bp,(X509_CRL **)0x0,(undefined1 *)0x0,(void *)0x0);
    CRYPTO_free(buf);
    BIO_free(bp);
    uVar1 = test_ptr("test/crltest.c",0x16d,"bad_issuer_crl",a);
    if (uVar1 == 0) goto LAB_0010067c;
    uVar4 = OPENSSL_sk_new_null();
    uVar5 = uVar4;
    if (a != (X509_CRL *)0x0) {
      iVar2 = X509_CRL_up_ref(a);
      if (iVar2 != 0) {
        iVar2 = OPENSSL_sk_push(uVar4,a);
        if (iVar2 != 0) goto LAB_001006d8;
        X509_CRL_free(a);
      }
      uVar5 = 0;
      OPENSSL_sk_pop_free(uVar4,X509_CRL_free);
    }
  }
LAB_001006d8:
  uVar3 = verify_constprop_0(test_leaf,test_root,uVar5);
  iVar2 = test_int_eq("test/crltest.c",0x16e,
                      "verify(test_leaf, test_root, make_CRL_stack(bad_issuer_crl, NULL), X509_V_FLAG_CRL_CHECK)"
                      ,"X509_V_ERR_UNABLE_TO_GET_CRL",uVar3,3);
  uVar1 = (uint)(iVar2 != 0);
LAB_0010067c:
  X509_CRL_free(a);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_known_critical_crl(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *buf;
  BIO *bp;
  X509_CRL *a;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  buf = (void *)glue_strings(kKnownCriticalCRL,&local_38);
  bp = BIO_new_mem_buf(buf,(int)local_38);
  if (bp == (BIO *)0x0) {
    a = (X509_CRL *)0x0;
    CRYPTO_free(buf);
    uVar1 = test_ptr("test/crltest.c",0x17b,"known_critical_crl",0);
    if (uVar1 == 0) goto LAB_0010083c;
    uVar5 = OPENSSL_sk_new_null();
    a = (X509_CRL *)0x0;
  }
  else {
    a = PEM_read_bio_X509_CRL(bp,(X509_CRL **)0x0,(undefined1 *)0x0,(void *)0x0);
    CRYPTO_free(buf);
    BIO_free(bp);
    uVar1 = test_ptr("test/crltest.c",0x17b,"known_critical_crl",a);
    if (uVar1 == 0) goto LAB_0010083c;
    uVar4 = OPENSSL_sk_new_null();
    uVar5 = uVar4;
    if (a != (X509_CRL *)0x0) {
      iVar2 = X509_CRL_up_ref(a);
      if (iVar2 != 0) {
        iVar2 = OPENSSL_sk_push(uVar4,a);
        if (iVar2 != 0) goto LAB_00100898;
        X509_CRL_free(a);
      }
      uVar5 = 0;
      OPENSSL_sk_pop_free(uVar4,X509_CRL_free);
    }
  }
LAB_00100898:
  uVar3 = verify_constprop_0(test_leaf,test_root,uVar5);
  iVar2 = test_int_eq("test/crltest.c",0x17c,
                      "verify(test_leaf, test_root, make_CRL_stack(known_critical_crl, NULL), X509_V_FLAG_CRL_CHECK)"
                      ,"X509_V_OK",uVar3,0);
  uVar1 = (uint)(iVar2 != 0);
LAB_0010083c:
  X509_CRL_free(a);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_unknown_critical_crl(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *buf;
  BIO *bp;
  X509_CRL *a;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  buf = (void *)glue_strings(*(undefined8 *)(unknown_critical_crls + (long)param_1 * 8),&local_38);
  bp = BIO_new_mem_buf(buf,(int)local_38);
  if (bp == (BIO *)0x0) {
    a = (X509_CRL *)0x0;
    CRYPTO_free(buf);
    uVar1 = test_ptr("test/crltest.c",0x188,"unknown_critical_crl",0);
    if (uVar1 == 0) goto LAB_00100a03;
    uVar5 = OPENSSL_sk_new_null();
    a = (X509_CRL *)0x0;
  }
  else {
    a = PEM_read_bio_X509_CRL(bp,(X509_CRL **)0x0,(undefined1 *)0x0,(void *)0x0);
    CRYPTO_free(buf);
    BIO_free(bp);
    uVar1 = test_ptr("test/crltest.c",0x188,"unknown_critical_crl",a);
    if (uVar1 == 0) goto LAB_00100a03;
    uVar4 = OPENSSL_sk_new_null();
    uVar5 = uVar4;
    if (a != (X509_CRL *)0x0) {
      iVar2 = X509_CRL_up_ref(a);
      if (iVar2 != 0) {
        iVar2 = OPENSSL_sk_push(uVar4,a);
        if (iVar2 != 0) goto LAB_00100a60;
        X509_CRL_free(a);
      }
      uVar5 = 0;
      OPENSSL_sk_pop_free(uVar4,X509_CRL_free);
    }
  }
LAB_00100a60:
  uVar3 = verify_constprop_0(test_leaf,test_root,uVar5);
  iVar2 = test_int_eq("test/crltest.c",0x189,
                      "verify(test_leaf, test_root, make_CRL_stack(unknown_critical_crl, NULL), X509_V_FLAG_CRL_CHECK)"
                      ,"X509_V_ERR_UNHANDLED_CRITICAL_CRL_EXTENSION",uVar3,0x24);
  uVar1 = (uint)(iVar2 != 0);
LAB_00100a03:
  X509_CRL_free(a);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_basic_crl(void)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  BIO *pBVar4;
  X509_CRL *a;
  X509_CRL *a_00;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  pvVar3 = (void *)glue_strings(kBasicCRL,&local_38);
  pBVar4 = BIO_new_mem_buf(pvVar3,(int)local_38);
  if (pBVar4 == (BIO *)0x0) {
    a = (X509_CRL *)0x0;
    CRYPTO_free(pvVar3);
  }
  else {
    a = PEM_read_bio_X509_CRL(pBVar4,(X509_CRL **)0x0,(undefined1 *)0x0,(void *)0x0);
    CRYPTO_free(pvVar3);
    BIO_free(pBVar4);
  }
  local_38 = 0;
  pvVar3 = (void *)glue_strings(kRevokedCRL,&local_38);
  pBVar4 = BIO_new_mem_buf(pvVar3,(int)local_38);
  if (pBVar4 == (BIO *)0x0) {
    a_00 = (X509_CRL *)0x0;
    CRYPTO_free(pvVar3);
  }
  else {
    a_00 = PEM_read_bio_X509_CRL(pBVar4,(X509_CRL **)0x0,(undefined1 *)0x0,(void *)0x0);
    CRYPTO_free(pvVar3);
    BIO_free(pBVar4);
  }
  iVar1 = test_ptr("test/crltest.c",0x154,"basic_crl",a);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/crltest.c",0x155,"revoked_crl",a_00);
    if (iVar1 != 0) {
      uVar5 = OPENSSL_sk_new_null();
      if (a == (X509_CRL *)0x0) {
        uVar2 = verify_constprop_0(test_leaf,test_root,uVar5);
        iVar1 = test_int_eq("test/crltest.c",0x156,
                            "verify(test_leaf, test_root, make_CRL_stack(basic_crl, NULL), X509_V_FLAG_CRL_CHECK)"
                            ,"X509_V_OK",uVar2,0);
        if (iVar1 == 0) goto LAB_00100c29;
        uVar5 = OPENSSL_sk_new_null();
LAB_00100d19:
        uVar6 = uVar5;
        if (a_00 != (X509_CRL *)0x0) {
          iVar1 = X509_CRL_up_ref(a_00);
          if (iVar1 != 0) {
            iVar1 = OPENSSL_sk_push(uVar5,a_00);
            if (iVar1 != 0) goto LAB_00100d41;
            X509_CRL_free(a_00);
          }
LAB_00100e50:
          uVar6 = 0;
          OPENSSL_sk_pop_free(uVar5,X509_CRL_free);
        }
LAB_00100d41:
        uVar2 = verify_constprop_0(test_leaf,test_root,uVar6);
        iVar1 = test_int_eq("test/crltest.c",0x159,
                            "verify(test_leaf, test_root, make_CRL_stack(basic_crl, revoked_crl), X509_V_FLAG_CRL_CHECK)"
                            ,"X509_V_ERR_CERT_REVOKED",uVar2,0x17);
        bVar7 = iVar1 != 0;
        goto LAB_00100c2b;
      }
      iVar1 = X509_CRL_up_ref(a);
      if (iVar1 == 0) {
LAB_00100e28:
        uVar6 = 0;
        OPENSSL_sk_pop_free(uVar5,X509_CRL_free);
      }
      else {
        iVar1 = OPENSSL_sk_push(uVar5,a);
        uVar6 = uVar5;
        if (iVar1 == 0) {
          X509_CRL_free(a);
          goto LAB_00100e28;
        }
      }
      uVar2 = verify_constprop_0(test_leaf,test_root,uVar6);
      iVar1 = test_int_eq("test/crltest.c",0x156,
                          "verify(test_leaf, test_root, make_CRL_stack(basic_crl, NULL), X509_V_FLAG_CRL_CHECK)"
                          ,"X509_V_OK",uVar2,0);
      if (iVar1 != 0) {
        uVar5 = OPENSSL_sk_new_null();
        iVar1 = X509_CRL_up_ref(a);
        if (iVar1 != 0) {
          iVar1 = OPENSSL_sk_push(uVar5,a);
          if (iVar1 != 0) goto LAB_00100d19;
          X509_CRL_free(a);
        }
        goto LAB_00100e50;
      }
    }
  }
LAB_00100c29:
  bVar7 = false;
LAB_00100c2b:
  X509_CRL_free(a);
  X509_CRL_free(a_00);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 setup_tests(void)

{
  int iVar1;
  void *pvVar2;
  BIO *pBVar3;
  X509 *pXVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  pvVar2 = (void *)glue_strings(kCRLTestRoot,&local_38);
  pBVar3 = BIO_new_mem_buf(pvVar2,(int)local_38);
  if (pBVar3 == (BIO *)0x0) {
    pXVar4 = (X509 *)0x0;
    CRYPTO_free(pvVar2);
  }
  else {
    pXVar4 = PEM_read_bio_X509(pBVar3,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
    CRYPTO_free(pvVar2);
    BIO_free(pBVar3);
  }
  test_root = pXVar4;
  iVar1 = test_ptr("test/crltest.c",0x1c9,"test_root = X509_from_strings(kCRLTestRoot)");
  if (iVar1 != 0) {
    local_38 = 0;
    pvVar2 = (void *)glue_strings(kCRLTestLeaf,&local_38);
    pBVar3 = BIO_new_mem_buf(pvVar2,(int)local_38);
    if (pBVar3 == (BIO *)0x0) {
      pXVar4 = (X509 *)0x0;
      CRYPTO_free(pvVar2);
    }
    else {
      pXVar4 = PEM_read_bio_X509(pBVar3,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
      CRYPTO_free(pvVar2);
      BIO_free(pBVar3);
    }
    test_leaf = pXVar4;
    iVar1 = test_ptr("test/crltest.c",0x1ca,"test_leaf = X509_from_strings(kCRLTestLeaf)",pXVar4);
    if (iVar1 != 0) {
      add_test("test_no_crl",test_no_crl);
      add_test("test_basic_crl",test_basic_crl);
      add_test("test_bad_issuer_crl",test_bad_issuer_crl);
      add_test("test_known_critical_crl",test_known_critical_crl);
      add_all_tests("test_unknown_critical_crl",test_unknown_critical_crl,2,1);
      add_all_tests("test_reuse_crl",test_reuse_crl,6,1);
      uVar5 = 1;
      goto LAB_00100f28;
    }
  }
  uVar5 = 0;
LAB_00100f28:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void cleanup_tests(void)

{
  X509_free(test_root);
  X509_free(test_leaf);
  return;
}




undefined8 make_CRL_stack(X509_CRL *param_1,X509_CRL *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = OPENSSL_sk_new_null();
  if (param_1 != (X509_CRL *)0x0) {
    iVar1 = X509_CRL_up_ref(param_1);
    if (iVar1 == 0) goto LAB_00100068;
    iVar1 = OPENSSL_sk_push(uVar2,param_1);
    if (iVar1 == 0) {
      X509_CRL_free(param_1);
      goto LAB_00100068;
    }
  }
  if (param_2 == (X509_CRL *)0x0) {
    return uVar2;
  }
  iVar1 = X509_CRL_up_ref(param_2);
  if (iVar1 != 0) {
    iVar1 = OPENSSL_sk_push(uVar2,param_2);
    if (iVar1 != 0) {
      return uVar2;
    }
    X509_CRL_free(param_2);
  }
LAB_00100068:
  OPENSSL_sk_pop_free(uVar2,X509_CRL_free);
  return 0;
}



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
                  goto LAB_00100102;
                }
              }
            }
          }
        }
      }
    }
  }
  iVar1 = 1;
LAB_00100102:
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



X509 * X509_from_strings(undefined8 param_1)

{
  void *buf;
  BIO *bp;
  X509 *pXVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  buf = (void *)glue_strings(param_1,&local_28);
  bp = BIO_new_mem_buf(buf,(int)local_28);
  if (bp == (BIO *)0x0) {
    pXVar1 = (X509 *)0x0;
    CRYPTO_free(buf);
  }
  else {
    pXVar1 = PEM_read_bio_X509(bp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
    CRYPTO_free(buf);
    BIO_free(bp);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



X509_CRL * CRL_from_strings(undefined8 param_1)

{
  void *buf;
  BIO *bp;
  X509_CRL *pXVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  buf = (void *)glue_strings(param_1,&local_28);
  bp = BIO_new_mem_buf(buf,(int)local_28);
  if (bp == (BIO *)0x0) {
    pXVar1 = (X509_CRL *)0x0;
    CRYPTO_free(buf);
  }
  else {
    pXVar1 = PEM_read_bio_X509_CRL(bp,(X509_CRL **)0x0,(undefined1 *)0x0,(void *)0x0);
    CRYPTO_free(buf);
    BIO_free(bp);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint test_reuse_crl(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *buf;
  BIO *bp;
  X509_CRL *pXVar4;
  undefined1 *puVar5;
  X509_CRL *a;
  long in_FS_OFFSET;
  X509_CRL *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (X509_CRL *)CRL_from_strings(kBasicCRL);
  iVar1 = test_ptr("test/crltest.c",0x199,"reused_crl",local_50);
  if (iVar1 == 0) {
LAB_00100688:
    buf = (void *)0x0;
    uVar3 = 0;
    bp = (BIO *)0x0;
    a = (X509_CRL *)0x0;
    goto LAB_00100579;
  }
  a = (X509_CRL *)0x0;
  if ((param_1 & 1) != 0) {
    iVar1 = X509_CRL_up_ref(local_50);
    iVar1 = test_true("test/crltest.c",0x19d,"X509_CRL_up_ref(reused_crl)",iVar1 != 0);
    a = local_50;
    if (iVar1 == 0) goto LAB_00100688;
  }
  puVar5 = kRevokedCRL;
  iVar1 = (int)param_1 >> 1;
  if (iVar1 != 2) {
    puVar5 = kInvalidCRL + (long)iVar1 * 8;
  }
  local_48 = 0;
  buf = (void *)glue_strings(puVar5,&local_48);
  bp = BIO_new_mem_buf(buf,(int)local_48);
  iVar2 = test_ptr("test/crltest.c",0x1a5,&_LC14);
  if (iVar2 != 0) {
    pXVar4 = PEM_read_bio_X509_CRL(bp,&local_50,(undefined1 *)0x0,(void *)0x0);
    if (iVar1 == 1) {
      iVar1 = test_ptr_null("test/crltest.c",0x1b1,"result",pXVar4);
      if (iVar1 != 0) {
        iVar1 = test_ptr("test/crltest.c",0x1b2,"reused_crl",local_50);
        uVar3 = (uint)(iVar1 != 0);
        goto LAB_00100579;
      }
    }
    else if (iVar1 == 2) {
      uVar3 = test_ptr("test/crltest.c",0x1b6,"result",pXVar4);
      if (uVar3 == 0) goto LAB_00100579;
      iVar1 = test_ptr("test/crltest.c",0x1b7,"reused_crl",local_50);
      if (iVar1 != 0) {
        iVar1 = test_ptr_eq("test/crltest.c",0x1b8,"result","reused_crl",pXVar4,local_50);
        uVar3 = (uint)(iVar1 != 0);
        goto LAB_00100579;
      }
    }
    else {
      uVar3 = 1;
      if (iVar1 != 0) goto LAB_00100579;
      iVar1 = test_ptr_null("test/crltest.c",0x1ac,"result",pXVar4);
      if (iVar1 != 0) {
        iVar1 = test_ptr_null("test/crltest.c",0x1ad,"reused_crl",local_50);
        uVar3 = (uint)(iVar1 != 0);
        goto LAB_00100579;
      }
    }
  }
  uVar3 = 0;
LAB_00100579:
  CRYPTO_free(buf);
  BIO_free(bp);
  X509_CRL_free(local_50);
  X509_CRL_free(a);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



bool test_unknown_critical_crl(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  X509_CRL *a;
  undefined8 uVar3;
  
  a = (X509_CRL *)CRL_from_strings(*(undefined8 *)(unknown_critical_crls + (long)param_1 * 8));
  iVar1 = test_ptr("test/crltest.c",0x188,"unknown_critical_crl",a);
  if (iVar1 == 0) {
    X509_CRL_free(a);
    return false;
  }
  uVar3 = make_CRL_stack(a,0);
  uVar2 = verify_constprop_0(test_leaf,test_root,uVar3);
  iVar1 = test_int_eq("test/crltest.c",0x189,
                      "verify(test_leaf, test_root, make_CRL_stack(unknown_critical_crl, NULL), X509_V_FLAG_CRL_CHECK)"
                      ,"X509_V_ERR_UNHANDLED_CRITICAL_CRL_EXTENSION",uVar2,0x24);
  X509_CRL_free(a);
  return iVar1 != 0;
}



bool test_known_critical_crl(void)

{
  int iVar1;
  undefined4 uVar2;
  X509_CRL *a;
  undefined8 uVar3;
  
  a = (X509_CRL *)CRL_from_strings(kKnownCriticalCRL);
  iVar1 = test_ptr("test/crltest.c",0x17b,"known_critical_crl",a);
  if (iVar1 == 0) {
    X509_CRL_free(a);
    return false;
  }
  uVar3 = make_CRL_stack(a,0);
  uVar2 = verify_constprop_0(test_leaf,test_root,uVar3);
  iVar1 = test_int_eq("test/crltest.c",0x17c,
                      "verify(test_leaf, test_root, make_CRL_stack(known_critical_crl, NULL), X509_V_FLAG_CRL_CHECK)"
                      ,"X509_V_OK",uVar2,0);
  X509_CRL_free(a);
  return iVar1 != 0;
}



bool test_bad_issuer_crl(void)

{
  int iVar1;
  undefined4 uVar2;
  X509_CRL *a;
  undefined8 uVar3;
  
  a = (X509_CRL *)CRL_from_strings(kBadIssuerCRL);
  iVar1 = test_ptr("test/crltest.c",0x16d,"bad_issuer_crl",a);
  if (iVar1 == 0) {
    X509_CRL_free(a);
    return false;
  }
  uVar3 = make_CRL_stack(a,0);
  uVar2 = verify_constprop_0(test_leaf,test_root,uVar3);
  iVar1 = test_int_eq("test/crltest.c",0x16e,
                      "verify(test_leaf, test_root, make_CRL_stack(bad_issuer_crl, NULL), X509_V_FLAG_CRL_CHECK)"
                      ,"X509_V_ERR_UNABLE_TO_GET_CRL",uVar2,3);
  X509_CRL_free(a);
  return iVar1 != 0;
}



bool test_basic_crl(void)

{
  int iVar1;
  undefined4 uVar2;
  X509_CRL *a;
  X509_CRL *a_00;
  undefined8 uVar3;
  bool bVar4;
  
  a = (X509_CRL *)CRL_from_strings(kBasicCRL);
  a_00 = (X509_CRL *)CRL_from_strings(kRevokedCRL);
  iVar1 = test_ptr("test/crltest.c",0x154,"basic_crl",a);
  if (iVar1 != 0) {
    iVar1 = test_ptr("test/crltest.c",0x155,"revoked_crl",a_00);
    if (iVar1 != 0) {
      uVar3 = make_CRL_stack(a,0);
      uVar2 = verify_constprop_0(test_leaf,test_root,uVar3);
      iVar1 = test_int_eq("test/crltest.c",0x156,
                          "verify(test_leaf, test_root, make_CRL_stack(basic_crl, NULL), X509_V_FLAG_CRL_CHECK)"
                          ,"X509_V_OK",uVar2,0);
      if (iVar1 != 0) {
        uVar3 = make_CRL_stack(a,a_00);
        uVar2 = verify_constprop_0(test_leaf,test_root,uVar3);
        iVar1 = test_int_eq("test/crltest.c",0x159,
                            "verify(test_leaf, test_root, make_CRL_stack(basic_crl, revoked_crl), X509_V_FLAG_CRL_CHECK)"
                            ,"X509_V_ERR_CERT_REVOKED",uVar2,0x17);
        bVar4 = iVar1 != 0;
        goto LAB_001009cb;
      }
    }
  }
  bVar4 = false;
LAB_001009cb:
  X509_CRL_free(a);
  X509_CRL_free(a_00);
  return bVar4;
}



undefined8 setup_tests(void)

{
  int iVar1;
  
  test_root = X509_from_strings(kCRLTestRoot);
  iVar1 = test_ptr("test/crltest.c",0x1c9,"test_root = X509_from_strings(kCRLTestRoot)",test_root);
  if (iVar1 != 0) {
    test_leaf = X509_from_strings(kCRLTestLeaf);
    iVar1 = test_ptr("test/crltest.c",0x1ca,"test_leaf = X509_from_strings(kCRLTestLeaf)",test_leaf)
    ;
    if (iVar1 != 0) {
      add_test("test_no_crl",test_no_crl);
      add_test("test_basic_crl",test_basic_crl);
      add_test("test_bad_issuer_crl",test_bad_issuer_crl);
      add_test("test_known_critical_crl",test_known_critical_crl);
      add_all_tests("test_unknown_critical_crl",test_unknown_critical_crl,2,1);
      add_all_tests("test_reuse_crl",test_reuse_crl,6,1);
      return 1;
    }
  }
  return 0;
}



void cleanup_tests(void)

{
  X509_free(test_root);
  X509_free(test_leaf);
  return;
}



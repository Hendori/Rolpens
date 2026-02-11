
ulong execute_exec_certrequest_ses_test(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  X509 *a;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  a = (X509 *)OSSL_CMP_exec_certreq(uVar4,*(undefined4 *)(param_1 + 0x18),0);
  uVar1 = OSSL_CMP_CTX_get_status(uVar4);
  OSSL_CMP_CTX_print_errors(uVar4);
  iVar2 = test_int_eq("test/cmp_client_test.c",0x83,"status","fixture->expected",uVar1,
                      *(undefined4 *)(param_1 + 0x1c));
  if ((iVar2 != 0) ||
     ((*(int *)(param_1 + 0x1c) == 3 &&
      (iVar2 = test_int_eq("test/cmp_client_test.c",0x85,"status","OSSL_CMP_PKISTATUS_trans",uVar1,
                           0xfffffffe), iVar2 != 0)))) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      uVar5 = test_ptr_null("test/cmp_client_test.c",0x88,&_LC4,a);
      return uVar5;
    }
    iVar2 = test_ptr("test/cmp_client_test.c",0x8a,&_LC4,a);
    if (iVar2 != 0) {
      iVar2 = X509_cmp(a,client_cert);
      iVar2 = test_int_eq("test/cmp_client_test.c",0x8a,"X509_cmp(res, client_cert)",&_LC5,iVar2,0);
      if (iVar2 != 0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          return 1;
        }
        uVar4 = OSSL_CMP_CTX_get1_caPubs(*(undefined8 *)(param_1 + 8));
        uVar1 = STACK_OF_X509_cmp(*(undefined8 *)(param_1 + 0x20),uVar4);
        uVar3 = test_int_eq("test/cmp_client_test.c",0x8e,
                            "STACK_OF_X509_cmp(fixture->caPubs, caPubs)",&_LC5,uVar1,0);
        OSSL_STACK_OF_X509_free(uVar4);
        return (ulong)uVar3;
      }
    }
  }
  return 0;
}



void execute_exec_GENM_ses_test_single(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  ASN1_OBJECT *pAVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  pAVar5 = OBJ_txt2obj("1.3.6.1.5.5.7.4.2",1);
  uVar6 = OSSL_CMP_ITAV_create(pAVar5,0);
  OSSL_CMP_CTX_push0_genm_ITAV(uVar2,uVar6);
  uVar6 = OSSL_CMP_exec_GENM_ses(uVar2);
  OPENSSL_sk_pop_free(uVar6,&OSSL_CMP_ITAV_free);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = OSSL_CMP_CTX_get_status(uVar2);
  iVar4 = test_int_eq("test/cmp_client_test.c",0x70,"OSSL_CMP_CTX_get_status(ctx)",
                      "fixture->expected",uVar3,uVar1);
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    test_ptr("test/cmp_client_test.c",0x72,"itavs",uVar6);
    return;
  }
  test_ptr_null();
  return;
}



undefined4
test_certConf_cb(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int *piVar1;
  
  piVar1 = (int *)OSSL_CMP_CTX_get_certConf_cb_arg();
  if (*piVar1 != 0) {
    param_3 = 0x13;
    *param_4 = "not to my taste";
  }
  return param_3;
}



bool execute_exec_RR_ses_test(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = OSSL_CMP_CTX_get_status(*(undefined8 *)(param_1 + 8));
  iVar2 = test_int_eq("test/cmp_client_test.c",0x5e,"OSSL_CMP_CTX_get_status(fixt->cmp_ctx)",
                      "OSSL_CMP_PKISTATUS_unspecified",uVar1,0xffffffff);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    uVar1 = OSSL_CMP_exec_RR_ses(*(undefined8 *)(param_1 + 8));
    iVar2 = test_int_eq("test/cmp_client_test.c",0x60,"OSSL_CMP_exec_RR_ses(fixt->cmp_ctx)",
                        "fixt->expected == OSSL_CMP_PKISTATUS_accepted",uVar1,iVar2 == 0);
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
      uVar3 = OSSL_CMP_CTX_get_status(*(undefined8 *)(param_1 + 8));
      iVar2 = test_int_eq("test/cmp_client_test.c",0x62,"OSSL_CMP_CTX_get_status(fixt->cmp_ctx)",
                          "fixt->expected",uVar3,uVar1);
      return iVar2 != 0;
    }
  }
  return false;
}



undefined8 * set_up(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  long lVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x28,"test/cmp_client_test.c",0x3c);
  iVar1 = test_ptr("test/cmp_client_test.c",0x3c,"fixture = OPENSSL_zalloc(sizeof(*fixture))",ptr);
  if (iVar1 != 0) {
    *ptr = param_1;
    uVar2 = ossl_cmp_mock_srv_new(libctx,0);
    ptr[2] = uVar2;
    iVar1 = test_ptr("test/cmp_client_test.c",0x3f,
                     "fixture->srv_ctx = ossl_cmp_mock_srv_new(libctx, NULL)",uVar2);
    if ((((iVar1 != 0) && (iVar1 = OSSL_CMP_SRV_CTX_set_accept_unprotected(ptr[2],1), iVar1 != 0))
        && (iVar1 = ossl_cmp_mock_srv_set1_refCert(ptr[2],client_cert), iVar1 != 0)) &&
       (((iVar1 = ossl_cmp_mock_srv_set1_certOut(ptr[2],client_cert), iVar1 != 0 &&
         (lVar3 = OSSL_CMP_SRV_CTX_get0_cmp_ctx(ptr[2]), lVar3 != 0)) &&
        ((iVar1 = OSSL_CMP_CTX_set1_cert(lVar3,server_cert), iVar1 != 0 &&
         (iVar1 = OSSL_CMP_CTX_set1_pkey(lVar3,server_key), iVar1 != 0)))))) {
      uVar2 = OSSL_CMP_CTX_new(libctx,0);
      ptr[1] = uVar2;
      iVar1 = test_ptr("test/cmp_client_test.c",0x48,
                       "fixture->cmp_ctx = ctx = OSSL_CMP_CTX_new(libctx, NULL)",uVar2);
      if ((((iVar1 != 0) && (iVar1 = OSSL_CMP_CTX_set_log_cb(ptr[1],&print_to_bio_out), iVar1 != 0))
          && ((iVar1 = OSSL_CMP_CTX_set_transfer_cb(uVar2,&OSSL_CMP_CTX_server_perform), iVar1 != 0
              && ((((iVar1 = OSSL_CMP_CTX_set_transfer_cb_arg(uVar2,ptr[2]), iVar1 != 0 &&
                    (iVar1 = OSSL_CMP_CTX_set_option(uVar2,0x1e,1), iVar1 != 0)) &&
                   (iVar1 = OSSL_CMP_CTX_set_option(uVar2,0x1f,1), iVar1 != 0)) &&
                  ((iVar1 = OSSL_CMP_CTX_set1_oldCert(uVar2,client_cert), iVar1 != 0 &&
                   (iVar1 = OSSL_CMP_CTX_set1_pkey(uVar2,client_key), iVar1 != 0)))))))) &&
         ((iVar1 = OSSL_CMP_CTX_set1_srvCert(uVar2,server_cert), iVar1 != 0 &&
          (iVar1 = OSSL_CMP_CTX_set1_referenceValue(uVar2,ref,0xf), iVar1 != 0)))) {
        *(undefined4 *)(ptr + 3) = 0xffffffff;
        return ptr;
      }
    }
    OSSL_CMP_CTX_free(ptr[1]);
    ossl_cmp_mock_srv_free(ptr[2]);
    OPENSSL_sk_free(ptr[4]);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



undefined4 test_exchange_error(void)

{
  undefined4 uVar1;
  void *ptr;
  
  uVar1 = 0;
  ptr = (void *)set_up("test_exchange_error");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x1c) = 1;
    uVar1 = ossl_cmp_exchange_error
                      (*(undefined8 *)((long)ptr + 8),2,0x400000,"foo_status",999,"foo_details");
    uVar1 = test_int_eq("test/cmp_client_test.c",0x1e9,"fixture->expected",&_LC4,
                        *(undefined4 *)((long)ptr + 0x1c),uVar1);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
    OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
  }
  return uVar1;
}



undefined4 test_exchange_certConf(void)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  X509 *pXVar3;
  
  ptr = (void *)set_up("test_exchange_certConf");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x1c) = 0;
    pXVar3 = X509_dup(client_cert);
    iVar1 = ossl_cmp_ctx_set0_newCert(*(undefined8 *)((long)ptr + 8),pXVar3);
    if (iVar1 != 0) {
      uVar2 = ossl_cmp_exchange_certConf(*(undefined8 *)((long)ptr + 8),0,0x11,"abcdefg");
      uVar2 = test_int_eq("test/cmp_client_test.c",0x1de,"fixture->expected",&_LC4,
                          *(undefined4 *)((long)ptr + 0x1c),uVar2);
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
      ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
      OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
      CRYPTO_free(ptr);
      return uVar2;
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
    OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
  }
  return 0;
}



bool test_exec_GENM_ses_transfer_error(void)

{
  int iVar1;
  void *ptr;
  bool bVar2;
  
  ptr = (void *)set_up("test_exec_GENM_ses");
  if (ptr == (void *)0x0) {
    return false;
  }
  OSSL_CMP_CTX_set_transfer_cb_arg(*(undefined8 *)((long)ptr + 8),0);
  *(undefined4 *)(*(long *)((long)ptr + 8) + 0x68) = 0;
  *(undefined4 *)((long)ptr + 0x1c) = 0xfffffffe;
  iVar1 = execute_exec_GENM_ses_test_single(ptr);
  if (iVar1 != 0) {
    iVar1 = OSSL_CMP_CTX_reinit(*(undefined8 *)((long)ptr + 8));
    if (iVar1 != 0) {
      iVar1 = execute_exec_GENM_ses_test_single(ptr);
      bVar2 = iVar1 != 0;
      goto LAB_001007ad;
    }
  }
  bVar2 = false;
LAB_001007ad:
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
  OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
  CRYPTO_free(ptr);
  return bVar2;
}



bool test_try_certreq_poll_abort(void)

{
  undefined4 uVar1;
  int iVar2;
  void *ptr;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  int local_34;
  long local_30;
  
  bVar5 = false;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)set_up("test_try_certreq_poll_abort");
  if (ptr == (void *)0x0) goto LAB_001008ef;
  uVar4 = *(undefined8 *)((long)ptr + 8);
  *(undefined4 *)((long)ptr + 0x1c) = 1;
  ossl_cmp_mock_srv_set_pollCount(*(undefined8 *)((long)ptr + 0x10),3);
  ossl_cmp_mock_srv_set_checkAfterTime(*(undefined8 *)((long)ptr + 0x10),99);
  uVar1 = OSSL_CMP_try_certreq(uVar4,2,0,&local_34);
  iVar2 = test_int_eq("test/cmp_client_test.c",0x195,&_LC24,
                      "OSSL_CMP_try_certreq(ctx, TYPE, NULL, &check_after)",0xffffffff,uVar1);
  if ((iVar2 == 0) || (local_34 != 99)) {
LAB_001008c2:
    bVar5 = false;
  }
  else {
    uVar3 = OSSL_CMP_CTX_get0_newCert(uVar4);
    iVar2 = test_ptr_eq("test/cmp_client_test.c",0x197,"OSSL_CMP_CTX_get0_newCert(ctx)",&_LC25,uVar3
                        ,0);
    if (iVar2 == 0) goto LAB_001008c2;
    uVar1 = OSSL_CMP_try_certreq(uVar4,0xffffffff,0,0);
    iVar2 = test_int_eq("test/cmp_client_test.c",0x198,"fixture->expected",
                        "OSSL_CMP_try_certreq(ctx, -1 , NULL, NULL)",
                        *(undefined4 *)((long)ptr + 0x1c),uVar1);
    if (iVar2 == 0) goto LAB_001008c2;
    uVar4 = OSSL_CMP_CTX_get0_newCert(*(undefined8 *)((long)ptr + 8));
    iVar2 = test_ptr_eq("test/cmp_client_test.c",0x19a,"OSSL_CMP_CTX_get0_newCert(fixture->cmp_ctx)"
                        ,&_LC25,uVar4,0);
    bVar5 = iVar2 != 0;
  }
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
  OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
  CRYPTO_free(ptr);
LAB_001008ef:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool test_try_certreq_poll(void)

{
  undefined8 uVar1;
  X509 *b;
  undefined4 uVar2;
  int iVar3;
  void *ptr;
  undefined8 uVar4;
  X509 *a;
  long in_FS_OFFSET;
  bool bVar5;
  int local_44;
  long local_40;
  
  bVar5 = false;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (void *)set_up("test_try_certreq_poll");
  if (ptr == (void *)0x0) goto LAB_00100a99;
  uVar1 = *(undefined8 *)((long)ptr + 8);
  *(undefined4 *)((long)ptr + 0x1c) = 1;
  ossl_cmp_mock_srv_set_pollCount(*(undefined8 *)((long)ptr + 0x10),3);
  ossl_cmp_mock_srv_set_checkAfterTime(*(undefined8 *)((long)ptr + 0x10),0);
  uVar2 = OSSL_CMP_try_certreq(uVar1,7,0,&local_44);
  iVar3 = test_int_eq("test/cmp_client_test.c",0x178,&_LC24,
                      "OSSL_CMP_try_certreq(ctx, TYPE, NULL, &check_after)",0xffffffff,uVar2);
  if ((iVar3 == 0) || (local_44 != 0)) {
LAB_00100a6c:
    bVar5 = false;
  }
  else {
    uVar4 = OSSL_CMP_CTX_get0_newCert(uVar1);
    iVar3 = test_ptr_eq("test/cmp_client_test.c",0x17a,"OSSL_CMP_CTX_get0_newCert(ctx)",&_LC25,uVar4
                        ,0);
    if (iVar3 == 0) goto LAB_00100a6c;
    uVar2 = OSSL_CMP_try_certreq(uVar1,7,0,&local_44);
    iVar3 = test_int_eq("test/cmp_client_test.c",0x17b,&_LC24,
                        "OSSL_CMP_try_certreq(ctx, TYPE, NULL, &check_after)",0xffffffff,uVar2);
    if ((iVar3 == 0) || (local_44 != 0)) goto LAB_00100a6c;
    uVar4 = OSSL_CMP_CTX_get0_newCert(uVar1);
    iVar3 = test_ptr_eq("test/cmp_client_test.c",0x17d,"OSSL_CMP_CTX_get0_newCert(ctx)",&_LC25,uVar4
                        ,0);
    if (iVar3 == 0) goto LAB_00100a6c;
    uVar2 = OSSL_CMP_try_certreq(uVar1,7,0,0);
    iVar3 = test_int_eq("test/cmp_client_test.c",0x17e,"fixture->expected",
                        "OSSL_CMP_try_certreq(ctx, TYPE, NULL, NULL)",
                        *(undefined4 *)((long)ptr + 0x1c),uVar2);
    b = client_cert;
    if (iVar3 == 0) goto LAB_00100a6c;
    a = (X509 *)OSSL_CMP_CTX_get0_newCert(uVar1);
    iVar3 = X509_cmp(a,b);
    iVar3 = test_int_eq("test/cmp_client_test.c",0x180,&_LC5,
                        "X509_cmp(OSSL_CMP_CTX_get0_newCert(ctx), client_cert)",0,iVar3);
    bVar5 = iVar3 != 0;
  }
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
  OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
  CRYPTO_free(ptr);
LAB_00100a99:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 test_exec_P10CR_ses(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *ptr;
  X509_REQ *a;
  int local_2c [3];
  
  local_2c[0] = param_1;
  ptr = (void *)set_up("test_exec_P10CR_ses");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x18) = 4;
    uVar3 = pkcs10_f;
    uVar2 = libctx;
    uVar1 = *(undefined8 *)((long)ptr + 8);
    *(uint *)((long)ptr + 0x1c) = (uint)(local_2c[0] != 0) * 2;
    a = (X509_REQ *)load_csr_der(uVar3,uVar2);
    iVar4 = test_ptr("test/cmp_client_test.c",0x159,"csr = load_csr_der(pkcs10_f, libctx)",a);
    if (iVar4 != 0) {
      iVar4 = OSSL_CMP_CTX_set1_p10CSR(uVar1,a);
      iVar4 = test_true("test/cmp_client_test.c",0x15a,"OSSL_CMP_CTX_set1_p10CSR(ctx, csr)",
                        iVar4 != 0);
      if (iVar4 != 0) {
        iVar4 = OSSL_CMP_CTX_set_certConf_cb(uVar1,test_certConf_cb);
        iVar4 = test_true("test/cmp_client_test.c",0x15b,
                          "OSSL_CMP_CTX_set_certConf_cb(ctx, test_certConf_cb)",iVar4 != 0);
        if (iVar4 != 0) {
          iVar4 = OSSL_CMP_CTX_set_certConf_cb_arg(uVar1,local_2c);
          iVar4 = test_true("test/cmp_client_test.c",0x15c,
                            "OSSL_CMP_CTX_set_certConf_cb_arg(ctx, &reject)",iVar4 != 0);
          if (iVar4 != 0) {
            X509_REQ_free(a);
            uVar5 = execute_exec_certrequest_ses_test(ptr);
            OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
            ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
            OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
            CRYPTO_free(ptr);
            return uVar5;
          }
        }
      }
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
    OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
    X509_REQ_free(a);
  }
  return 0;
}



void test_exec_P10CR_ses_reject(void)

{
  test_exec_P10CR_ses(1);
  return;
}



void test_exec_P10CR_ses_ok(void)

{
  test_exec_P10CR_ses(0);
  return;
}



undefined4 test_exec_KUR_ses_pub(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  
  ptr = (void *)set_up("test_exec_KUR_ses");
  uVar1 = client_key;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x18) = 7;
    iVar2 = EVP_PKEY_up_ref(uVar1);
    if (iVar2 != 0) {
      OSSL_CMP_CTX_set0_newPkey(*(undefined8 *)((long)ptr + 8),0,uVar1);
      OSSL_CMP_SRV_CTX_set_accept_raverified(*(undefined8 *)((long)ptr + 0x10),1);
      OSSL_CMP_CTX_set_option(*(undefined8 *)((long)ptr + 8),0x18,0);
      *(undefined4 *)((long)ptr + 0x1c) = 0;
      uVar3 = execute_exec_certrequest_ses_test(ptr);
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
      ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
      OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
      CRYPTO_free(ptr);
      return uVar3;
    }
  }
  return 0;
}



undefined4 test_exec_CR_ses(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  void *ptr;
  
  uVar1 = 0;
  ptr = (void *)set_up("test_exec_CR_ses");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x18) = 2;
    OSSL_CMP_CTX_set_option(*(undefined8 *)((long)ptr + 8),0x19,param_1);
    OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(*(undefined8 *)((long)ptr + 0x10),param_2);
    if (param_3 == 0) {
      ossl_cmp_mock_srv_set_sendError(*(undefined8 *)((long)ptr + 0x10),0xffffffff);
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
      ossl_cmp_mock_srv_set_sendError(*(undefined8 *)((long)ptr + 0x10),0x18);
    }
    *(undefined4 *)((long)ptr + 0x1c) = uVar1;
    uVar1 = execute_exec_certrequest_ses_test(ptr);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
    OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
  }
  return uVar1;
}



ulong test_exec_CR_ses_implicit_confirm(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = test_exec_CR_ses(1,0,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = test_exec_CR_ses(1,1,0);
  return (ulong)(iVar1 != 0);
}



ulong test_exec_CR_ses_explicit_confirm(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = test_exec_CR_ses(0,0,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = test_exec_CR_ses(0,0,1);
  return (ulong)(iVar1 != 0);
}



undefined4 test_exec_RR_ses_receive_error(void)

{
  undefined4 uVar1;
  void *ptr;
  
  uVar1 = 0;
  ptr = (void *)set_up("test_exec_RR_ses_receive_error");
  if (ptr != (void *)0x0) {
    ossl_cmp_mock_srv_set_statusInfo(*(undefined8 *)((long)ptr + 0x10),2,0x100000,"test string");
    ossl_cmp_mock_srv_set_sendError(*(undefined8 *)((long)ptr + 0x10),0xb);
    *(undefined4 *)((long)ptr + 0x1c) = 2;
    uVar1 = execute_exec_RR_ses_test(ptr);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
    OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
  }
  return uVar1;
}



undefined4 test_exec_RR_ses_request_error(void)

{
  undefined4 uVar1;
  void *ptr;
  
  ptr = (void *)set_up("test_exec_RR_ses");
  if (ptr != (void *)0x0) {
    OSSL_CMP_CTX_set1_oldCert(*(undefined8 *)((long)ptr + 8),0);
    *(undefined4 *)((long)ptr + 0x1c) = 0xfffffffd;
    uVar1 = execute_exec_RR_ses_test(ptr);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
    OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
    return uVar1;
  }
  return 0;
}



undefined4 test_exec_RR_ses_ok(void)

{
  undefined4 uVar1;
  void *ptr;
  
  ptr = (void *)set_up("test_exec_RR_ses");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x1c) = 0;
    uVar1 = execute_exec_RR_ses_test(ptr);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
    OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
    return uVar1;
  }
  return 0;
}



bool test_exec_GENM_ses_total_timeout(void)

{
  int iVar1;
  void *ptr;
  bool bVar2;
  
  ptr = (void *)set_up("test_exec_GENM_ses");
  if (ptr == (void *)0x0) {
    return false;
  }
  *(undefined4 *)(*(long *)((long)ptr + 8) + 0x68) = 0xffffffff;
  *(undefined4 *)((long)ptr + 0x1c) = 0xfffffffe;
  iVar1 = execute_exec_GENM_ses_test_single(ptr);
  if (iVar1 != 0) {
    iVar1 = OSSL_CMP_CTX_reinit(*(undefined8 *)((long)ptr + 8));
    if (iVar1 != 0) {
      iVar1 = execute_exec_GENM_ses_test_single(ptr);
      bVar2 = iVar1 != 0;
      goto LAB_001011c2;
    }
  }
  bVar2 = false;
LAB_001011c2:
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
  OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
  CRYPTO_free(ptr);
  return bVar2;
}



bool test_exec_GENM_ses_ok(void)

{
  int iVar1;
  void *ptr;
  bool bVar2;
  
  ptr = (void *)set_up("test_exec_GENM_ses");
  if (ptr == (void *)0x0) {
    return false;
  }
  *(undefined4 *)(*(long *)((long)ptr + 8) + 0x68) = 0;
  *(undefined4 *)((long)ptr + 0x1c) = 0;
  iVar1 = execute_exec_GENM_ses_test_single(ptr);
  if (iVar1 != 0) {
    iVar1 = OSSL_CMP_CTX_reinit(*(undefined8 *)((long)ptr + 8));
    if (iVar1 != 0) {
      iVar1 = execute_exec_GENM_ses_test_single(ptr);
      bVar2 = iVar1 != 0;
      goto LAB_00101272;
    }
  }
  bVar2 = false;
LAB_00101272:
  OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
  ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
  OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
  CRYPTO_free(ptr);
  return bVar2;
}



undefined4 test_exec_KUR_ses_ok(void)

{
  undefined4 uVar1;
  void *ptr;
  
  ptr = (void *)set_up("test_exec_KUR_ses");
  if (ptr != (void *)0x0) {
    *(undefined8 *)((long)ptr + 0x18) = 7;
    uVar1 = execute_exec_certrequest_ses_test(ptr);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
    OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
    return uVar1;
  }
  return 0;
}



undefined4 test_exec_KUR_ses_wrong_popo(void)

{
  undefined4 uVar1;
  void *ptr;
  
  ptr = (void *)set_up("test_exec_KUR_ses");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x18) = 7;
    OSSL_CMP_CTX_set_option(*(undefined8 *)((long)ptr + 8),0x18,0);
    *(undefined4 *)((long)ptr + 0x1c) = 2;
    uVar1 = execute_exec_certrequest_ses_test(ptr);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
    OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
    return uVar1;
  }
  return 0;
}



undefined4 test_exec_KUR_ses_transfer_error(void)

{
  undefined4 uVar1;
  void *ptr;
  
  ptr = (void *)set_up("test_exec_KUR_ses");
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x18) = 7;
    OSSL_CMP_CTX_set_transfer_cb_arg(*(undefined8 *)((long)ptr + 8),0);
    *(undefined4 *)((long)ptr + 0x1c) = 0xfffffffe;
    uVar1 = execute_exec_certrequest_ses_test(ptr);
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
    OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
    return uVar1;
  }
  return 0;
}



undefined4 test_exec_KUR_ses_wrong_pub(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  
  ptr = (void *)set_up("test_exec_KUR_ses");
  uVar1 = server_key;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x18) = 7;
    iVar2 = EVP_PKEY_up_ref(uVar1);
    if (iVar2 != 0) {
      OSSL_CMP_CTX_set0_newPkey(*(undefined8 *)((long)ptr + 8),0,uVar1);
      OSSL_CMP_SRV_CTX_set_accept_raverified(*(undefined8 *)((long)ptr + 0x10),1);
      OSSL_CMP_CTX_set_option(*(undefined8 *)((long)ptr + 8),0x18,0);
      *(undefined4 *)((long)ptr + 0x1c) = 2;
      uVar3 = execute_exec_certrequest_ses_test(ptr);
      OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
      ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
      OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
      CRYPTO_free(ptr);
      return uVar3;
    }
  }
  return 0;
}



uint test_exec_REQ_ses_poll
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  void *ptr;
  
  ptr = (void *)set_up("test_exec_REQ_ses_poll");
  if (ptr == (void *)0x0) {
LAB_001015a9:
    uVar1 = 0;
  }
  else {
    *(int *)((long)ptr + 0x18) = param_1;
    *(undefined4 *)((long)ptr + 0x1c) = param_5;
    ossl_cmp_mock_srv_set_checkAfterTime(*(undefined8 *)((long)ptr + 0x10),param_2);
    ossl_cmp_mock_srv_set_pollCount(*(undefined8 *)((long)ptr + 0x10),param_3);
    OSSL_CMP_CTX_set_option(*(undefined8 *)((long)ptr + 8),0xc,param_4);
    if (param_1 == 0) {
      uVar1 = execute_exec_certrequest_ses_test(ptr);
    }
    else {
      if (param_1 != 0x15) goto LAB_001015a9;
      iVar2 = execute_exec_GENM_ses_test_single(ptr);
      if (iVar2 != 0) {
        iVar2 = OSSL_CMP_CTX_reinit(*(undefined8 *)((long)ptr + 8));
        if (iVar2 != 0) {
          iVar2 = execute_exec_GENM_ses_test_single(ptr);
          uVar1 = (uint)(iVar2 != 0);
          goto LAB_001015ca;
        }
      }
      uVar1 = 0;
    }
LAB_001015ca:
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
    OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
  }
  return uVar1;
}



void test_exec_GENM_ses_poll_total_timeout(void)

{
  test_exec_REQ_ses_poll(0x15,2,3,3,3);
  return;
}



void test_exec_GENM_ses_poll_no_timeout(void)

{
  test_exec_REQ_ses_poll(0x15,1,1,2,0);
  return;
}



void test_exec_GENM_ses_poll_ok(void)

{
  test_exec_REQ_ses_poll(0x15,1,2,0,0);
  return;
}



bool test_exec_IR_ses_poll_total_timeout(void)

{
  int iVar1;
  
  iVar1 = test_exec_REQ_ses_poll(0,2,3,7,3);
  return iVar1 == 0;
}



void test_exec_IR_ses_poll_no_timeout(void)

{
  test_exec_REQ_ses_poll(0,1,2,5,0);
  return;
}



void test_exec_IR_ses_poll_ok(void)

{
  test_exec_REQ_ses_poll(0,1,2,0,0);
  return;
}



undefined4 test_exec_IR_ses(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  undefined8 uVar4;
  
  ptr = (void *)set_up("test_exec_IR_ses");
  if (ptr != (void *)0x0) {
    *(undefined8 *)((long)ptr + 0x18) = 0;
    uVar4 = OPENSSL_sk_new_null();
    uVar1 = server_cert;
    *(undefined8 *)((long)ptr + 0x20) = uVar4;
    iVar2 = OPENSSL_sk_push(uVar4,uVar1);
    if (iVar2 != 0) {
      iVar2 = OPENSSL_sk_push(*(undefined8 *)((long)ptr + 0x20),server_cert);
      if (iVar2 != 0) {
        ossl_cmp_mock_srv_set1_caPubsOut
                  (*(undefined8 *)((long)ptr + 0x10),*(undefined8 *)((long)ptr + 0x20));
        uVar3 = execute_exec_certrequest_ses_test(ptr);
        OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
        ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
        OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
        CRYPTO_free(ptr);
        return uVar3;
      }
    }
    OSSL_CMP_CTX_free(*(undefined8 *)((long)ptr + 8));
    ossl_cmp_mock_srv_free(*(undefined8 *)((long)ptr + 0x10));
    OPENSSL_sk_free(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
  }
  return 0;
}



void cleanup_tests(void)

{
  X509_free(server_cert);
  EVP_PKEY_free(server_key);
  X509_free(client_cert);
  EVP_PKEY_free(client_key);
  OSSL_PROVIDER_unload(default_null_provider);
  OSSL_PROVIDER_unload(provider);
  OSSL_LIB_CTX_free(libctx);
  return;
}



undefined1 * test_get_options(void)

{
  return options_12;
}



undefined8 setup_tests(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = test_skip_common_options();
  if (iVar1 == 0) {
    test_error("test/cmp_client_test.c",0x212,"Error parsing test options\n");
  }
  else {
    server_key_f = test_get_argument(0);
    iVar1 = test_ptr("test/cmp_client_test.c",0x216,"server_key_f = test_get_argument(0)",
                     server_key_f);
    if (iVar1 != 0) {
      server_cert_f = test_get_argument(1);
      iVar1 = test_ptr("test/cmp_client_test.c",0x217,"server_cert_f = test_get_argument(1)",
                       server_cert_f);
      if (iVar1 != 0) {
        client_key_f = test_get_argument(2);
        iVar1 = test_ptr("test/cmp_client_test.c",0x218,"client_key_f = test_get_argument(2)",
                         client_key_f);
        if (iVar1 != 0) {
          client_cert_f = test_get_argument(3);
          iVar1 = test_ptr("test/cmp_client_test.c",0x219,"client_cert_f = test_get_argument(3)",
                           client_cert_f);
          if (iVar1 != 0) {
            pkcs10_f = test_get_argument(4);
            iVar1 = test_ptr("test/cmp_client_test.c",0x21a,"pkcs10_f = test_get_argument(4)",
                             pkcs10_f);
            if (iVar1 != 0) {
              iVar1 = test_arg_libctx(&libctx,&default_null_provider,&provider,5,
                                      "server.key server.crt client.key client.crt client.csr module_name [module_conf_file]\n"
                                     );
              if (iVar1 == 0) {
                return 0;
              }
              server_key = load_pkey_pem(server_key_f,libctx);
              iVar1 = test_ptr("test/cmp_client_test.c",0x222,
                               "server_key = load_pkey_pem(server_key_f, libctx)",server_key);
              if (iVar1 != 0) {
                server_cert = load_cert_pem(server_cert_f,libctx);
                iVar1 = test_ptr("test/cmp_client_test.c",0x223,
                                 "server_cert = load_cert_pem(server_cert_f, libctx)",server_cert);
                if (iVar1 != 0) {
                  client_key = load_pkey_pem(client_key_f,libctx);
                  iVar1 = test_ptr("test/cmp_client_test.c",0x224,
                                   "client_key = load_pkey_pem(client_key_f, libctx)",client_key);
                  if (iVar1 != 0) {
                    client_cert = load_cert_pem(client_cert_f,libctx);
                    iVar1 = test_ptr("test/cmp_client_test.c",0x225,
                                     "client_cert = load_cert_pem(client_cert_f, libctx)",
                                     client_cert);
                    if (iVar1 != 0) {
                      uVar2 = RAND_bytes_ex(libctx,ref,0xf,0);
                      iVar1 = test_int_eq("test/cmp_client_test.c",0x226,&_LC50,
                                          "RAND_bytes_ex(libctx, ref, sizeof(ref), 0)",1,uVar2);
                      if (iVar1 != 0) {
                        add_test("test_exec_RR_ses_ok",test_exec_RR_ses_ok);
                        add_test("test_exec_RR_ses_request_error",test_exec_RR_ses_request_error);
                        add_test("test_exec_RR_ses_receive_error",test_exec_RR_ses_receive_error);
                        add_test("test_exec_CR_ses_explicit_confirm",
                                 test_exec_CR_ses_explicit_confirm);
                        add_test("test_exec_CR_ses_implicit_confirm",
                                 test_exec_CR_ses_implicit_confirm);
                        add_test("test_exec_IR_ses",test_exec_IR_ses);
                        add_test("test_exec_IR_ses_poll_ok",test_exec_IR_ses_poll_ok);
                        add_test("test_exec_IR_ses_poll_no_timeout",test_exec_IR_ses_poll_no_timeout
                                );
                        add_test("test_exec_IR_ses_poll_total_timeout",
                                 test_exec_IR_ses_poll_total_timeout);
                        add_test("test_exec_KUR_ses_ok",test_exec_KUR_ses_ok);
                        add_test("test_exec_KUR_ses_transfer_error",test_exec_KUR_ses_transfer_error
                                );
                        add_test("test_exec_KUR_ses_wrong_popo",test_exec_KUR_ses_wrong_popo);
                        add_test("test_exec_KUR_ses_pub",test_exec_KUR_ses_pub);
                        add_test("test_exec_KUR_ses_wrong_pub",test_exec_KUR_ses_wrong_pub);
                        add_test("test_exec_P10CR_ses_ok",test_exec_P10CR_ses_ok);
                        add_test("test_exec_P10CR_ses_reject",test_exec_P10CR_ses_reject);
                        add_test("test_try_certreq_poll",test_try_certreq_poll);
                        add_test("test_try_certreq_poll_abort",test_try_certreq_poll_abort);
                        add_test("test_exec_GENM_ses_ok",test_exec_GENM_ses_ok);
                        add_test("test_exec_GENM_ses_transfer_error",
                                 test_exec_GENM_ses_transfer_error);
                        add_test("test_exec_GENM_ses_total_timeout",test_exec_GENM_ses_total_timeout
                                );
                        add_test("test_exec_GENM_ses_poll_ok",test_exec_GENM_ses_poll_ok);
                        add_test("test_exec_GENM_ses_poll_no_timeout",
                                 test_exec_GENM_ses_poll_no_timeout);
                        add_test("test_exec_GENM_ses_poll_total_timeout",
                                 test_exec_GENM_ses_poll_total_timeout);
                        add_test("test_exchange_certConf",test_exchange_certConf);
                        add_test("test_exchange_error",test_exchange_error);
                        return 1;
                      }
                    }
                  }
                }
              }
              cleanup_tests();
              return 0;
            }
          }
        }
      }
    }
    test_error("test/cmp_client_test.c",0x21b,"usage: cmp_client_test %s",
               "server.key server.crt client.key client.crt client.csr module_name [module_conf_file]\n"
              );
  }
  return 0;
}


